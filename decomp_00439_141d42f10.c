// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141d42f10 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d42fd0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43080 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43140 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d431f0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d432a0 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43350 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43410 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d434d0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43590 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43650 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43710 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d437d0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43890 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43940 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43a00 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43ac0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43b80 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43c30 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43cf0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43da0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43e50 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d43f00 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d43fc0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d44080 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d44140 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d441f0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d442b0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d44360 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d44410 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d444c0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d44580 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d44630 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d446e0 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d44790 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d44840 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d448f0 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d449a0 ModifyCompilationEnvironment body=170 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,0,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d44b50 FUN_141d44b50 body=332 status=ok
// SIG undefined FUN_141d44b50(void)

void FUN_141d44b50(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  undefined1 local_res10 [8];
  longlong local_48;
  ulonglong local_40;
  longlong local_38 [2];
  short *local_28;
  int local_20;
  longlong *local_18;
  longlong *local_10;
  
  FString::PrintfImpl(&local_28,&DAT_144dd47e8,0x3f8eb851e0000000);
  psVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    psVar3 = local_28;
  }
  local_40 = 0;
  local_48 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar3[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_40 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar3,(longlong)(int)uVar1 * 2);
  }
  local_38[0] = 0;
  local_38[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"UNDEFINED_ACCURACY",0x26);
  local_18 = local_38;
  local_10 = &local_48;
  FUN_140497620(param_2 + 0x200,local_res10,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d44ca0 FUN_141d44ca0 body=171 status=ok
// SIG undefined FUN_141d44ca0(void)

void FUN_141d44ca0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"MAX_CAPTURES",0x155);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141d44d50 ModifyCompilationEnvironmentImpl body=109 status=ok
// SIG undefined ModifyCompilationEnvironmentImpl(void)

void FPostProcessScreenSpaceReflectionsPS::ModifyCompilationEnvironmentImpl
               (longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_141a172f0(param_2,L"SSR_QUALITY",iVar1 % 6);
  uVar2 = iVar1 / 6 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"PREV_FRAME_COLOR",uVar2 == 1);
  return;
}



// FUNCTION 141d44dc0 ModifyCompilationEnvironmentImpl body=54 status=ok
// SIG undefined ModifyCompilationEnvironmentImpl(void)

void FPostProcessScreenSpaceReflectionsStencilPS::ModifyCompilationEnvironmentImpl
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"PREV_FRAME_COLOR",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSR_QUALITY",0);
  return;
}



// FUNCTION 141d44e00 FUN_141d44e00 body=264 status=ok
// SIG undefined FUN_141d44e00(void)

void FUN_141d44e00(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong local_68 [2];
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x6010);
  iVar7 = 0;
  iVar5 = 0;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = (longlong *)(param_1 + 0x6038);
  if (local_68 == plVar1) {
    iVar3 = *(int *)(param_1 + 0x6044);
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar1;
    *plVar1 = 0;
    iVar7 = *(int *)(param_1 + 0x6040);
    *(undefined8 *)(param_1 + 0x6040) = 0;
    iVar3 = iVar5;
    iVar5 = *(int *)(param_1 + 0x6044);
  }
  if (iVar3 < iVar5) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  LeaveCriticalSection(lpCriticalSection);
  if (0 < iVar7) {
    local_28 = 0;
    local_18 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144e48cf8;
      puVar4[1] = lVar6;
      *(int *)(puVar4 + 2) = iVar7;
      *(int *)((longlong)puVar4 + 0x14) = iVar5;
      lVar6 = 0;
    }
    local_58[0] = FUN_141d1f9b0;
    FUN_14158fcd0(2,local_58);
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  return;
}



// FUNCTION 141d44f10 FUN_141d44f10 body=589 status=ok
// SIG undefined FUN_141d44f10(void)

void FUN_141d44f10(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_40;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_4 != '\0') {
    FUN_142574690(param_3);
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    for (iVar10 = 0; (-1 < iVar10 && (iVar10 < *(int *)(param_1 + 0xfe8))); iVar10 = iVar10 + 1) {
      plVar9 = *(longlong **)
                (*(longlong *)(*(longlong *)(param_1 + 0xfe0) + (longlong)iVar10 * 8) + 8);
      if ((plVar9[0x2d] == param_2) &&
         (*(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | 0x800000,
         (*(uint *)((longlong)plVar9 + 0x1c) >> 0x17 & 1) != 0)) {
        (**(code **)(*plVar9 + 200))();
      }
    }
    QueryPerformanceCounter(&local_40);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_40.s.LowPart - local_38._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144e48820;
  plVar9[5] = 0;
  plVar9[2] = param_1;
  plVar9[3] = param_2;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
  }
  return;
}



// FUNCTION 141d45170 FUN_141d45170 body=116 status=ok
// SIG undefined FUN_141d45170(void)

void FUN_141d45170(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x1a38);
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x368);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x36c);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x374);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xbc);
  return;
}



// FUNCTION 141d45200 FUN_141d45200 body=3280 status=ok
// SIG undefined FUN_141d45200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d45200(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStack_5a8 [32];
  ulonglong local_588;
  float local_580;
  undefined8 local_578;
  float local_570;
  undefined8 local_568;
  undefined8 *local_560;
  undefined8 local_558;
  longlong local_550;
  undefined4 local_548;
  undefined1 local_540;
  undefined4 local_538;
  int local_528 [4];
  longlong *local_518;
  ulonglong uStack_510;
  int local_508;
  longlong local_500 [3];
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  longlong local_490 [3];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined4 local_430;
  ulonglong local_42c;
  undefined8 local_424;
  undefined4 local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d4;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_370;
  ulonglong local_36c;
  undefined8 local_364;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_314;
  undefined8 local_30c;
  undefined4 local_304;
  undefined1 local_2f8 [192];
  undefined4 local_238;
  undefined8 local_168 [32];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  plVar16 = (longlong *)0x0;
  iVar11 = 0;
  local_528[0] = 0;
  lVar9 = param_2[8];
  local_518 = param_2;
  local_4a8 = lVar9;
  local_498 = param_1;
  local_4b0 = FSceneRenderTargets::Get(lVar9);
  local_4b8 = *param_2;
  fVar18 = *(float *)(local_4b8 + 0x17c8);
  if (fVar18 < 60.0) {
    iVar10 = (40.0 <= fVar18) + 1;
  }
  else {
    iVar10 = (80.0 <= fVar18) + 3;
  }
  iVar2 = *(int *)(DAT_146a81068 + 4);
  if ((-1 < iVar2) && (iVar11 = 5, iVar2 < 5)) {
    iVar11 = iVar2;
  }
  if (iVar10 <= iVar11) {
    iVar11 = iVar10;
  }
  if (iVar11 < 1) {
    iVar10 = 1;
  }
  else {
    iVar10 = 4;
    if (iVar11 < 4) {
      iVar10 = iVar11;
    }
  }
  iVar11 = *(int *)(DAT_146a81098 + 4);
  local_528[0] = iVar11;
  local_508 = iVar10;
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1,2);
  if (lVar6 != 0) {
    lVar6 = FRenderingCompositeOutputRef::GetOutput(lVar6);
    local_508 = iVar10;
    if (lVar6 != 0) {
      iVar10 = 5;
      local_508 = 5;
    }
  }
  local_4a0 = (longlong *)FUN_141cf3cd0(param_1 + 10,param_2);
  local_500[0] = 0;
  local_490[0] = 0;
  local_490[1] = 0;
  FScopedGPUStatEvent::Begin(local_490,lVar9,&DAT_146a810b8,local_500);
  if (iVar11 != 0) {
    lVar6 = param_2[0xc];
    local_4e8 = &DAT_146a51f90;
    uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar6 + 0x38,local_500,&local_4e8);
    plVar15 = plVar16;
    if ((int)local_500[0] != -1) {
      plVar15 = (longlong *)((longlong)(int)local_500[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
    }
    uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
    plVar14 = plVar15 + 2;
    if (plVar15 == (longlong *)0x0) {
      plVar14 = plVar16;
    }
    local_4e8 = &DAT_146a810e0;
    lVar13 = *plVar14;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar6 + 0x38,local_500,&local_4e8);
    if ((int)local_500[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)(int)local_500[0] * 0x20 + *(longlong *)(lVar6 + 0x38);
    }
    local_580 = (float)((uint)local_580 & 0xffffff00);
    local_588 = CONCAT44(local_588._4_4_,0x21);
    plVar15 = (longlong *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      plVar15 = (longlong *)0x0;
    }
    lVar6 = *plVar15;
    FUN_141ad74f0(lVar9,*local_4a0,*(undefined8 *)(*(longlong *)(local_4b0 + 0x60) + 8),1);
    local_4e8 = *(undefined **)(local_4b8 + 0x1aa0);
    uStack_4e0 = *(undefined8 *)(local_4b8 + 0x1aa8);
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_4e8);
    local_568 = *(undefined8 *)((longlong)param_1 + 100);
    local_4e8 = *(undefined **)(local_4b8 + 0x1aa0);
    uStack_4e0 = *(ulonglong *)(local_4b8 + 0x1aa8);
    local_560 = &local_4e8;
    local_570 = 0.0;
    local_578 = CONCAT71(local_578._1_7_,1);
    local_580 = 0.0;
    local_588 = local_588 & 0xffffffffffffff00;
    FUN_141a149c0(lVar9,0,1,local_500);
    local_36c = 0x26;
    local_378 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_388 = 0;
    uStack_380 = 0;
    local_370 = 0;
    local_364 = 0;
    local_35c = 0;
    local_358 = 0;
    uStack_350 = 0;
    local_348 = 0;
    local_340 = 0;
    local_338 = 0;
    local_330 = 0;
    local_328 = 0;
    local_320 = 0;
    local_318 = 0;
    local_314 = 0;
    local_30c = 0;
    local_304 = 0;
    FUN_14049afe0(lVar9,&local_3b8);
    local_378 = FUN_141d35700();
    uStack_380 = FUN_140985530();
    local_388 = FUN_1404a0ce0();
    local_3b8 = DAT_1464c2720;
    if (lVar13 == 0) {
      uStack_3b0 = 0;
      plVar16 = (longlong *)0x1;
      local_500[0] = 0;
    }
    else {
      local_500[0] = *(longlong *)(lVar13 + 0x48);
      if (*(char *)(local_500[0] + 0x28) == '\0') {
        FUN_1419f3850(local_500[0]);
      }
      uStack_3b0 = *(undefined8 *)(local_500[0] + 0x38);
    }
    if (plVar16 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_500);
    }
    bVar4 = false;
    if (lVar6 == 0) {
      bVar4 = true;
      local_398 = 0;
      local_500[0] = 0;
    }
    else {
      local_500[0] = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(local_500[0] + 0x28) == '\0') {
        FUN_1419f3850(local_500[0]);
      }
      local_398 = *(undefined8 *)(local_500[0] + 0x40);
    }
    if (bVar4) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_500);
    }
    local_36c = local_36c & 0xffffffff00000000;
    FUN_141ed6ac0(param_2[8],&local_3b8,2,1);
    puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 3;
    if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x20);
      puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 3;
    }
    *(undefined8 **)(lVar9 + 0x30) = puVar8;
    *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    **(undefined8 **)(lVar9 + 8) = puVar12;
    *(undefined8 **)(lVar9 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489c0;
    *(undefined4 *)(puVar12 + 2) = 0x80;
    FUN_141ad70c0(lVar13,param_2);
    lVar9 = param_2[8];
    lVar3 = *(longlong *)(lVar6 + 0x48);
    local_4e8 = (undefined *)lVar9;
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
      lVar9 = param_2[8];
    }
    local_500[0] = *(longlong *)(lVar3 + 0x40);
    FUN_141aa9690(lVar6,lVar9,local_500[0],*(undefined8 *)(*param_2 + 0x20));
    local_588 = FUN_1404a0e20();
    lVar9 = (longlong)local_4e8;
    local_578 = 0;
    local_580 = 0.0;
    thunk_FUN_141ca99a0(lVar6 + 0xc0,local_4e8,local_500,param_2);
    local_588._0_4_ = 0xf;
    FUN_141aa6fa0(lVar6 + 0x1bc,lVar9,local_500,*(undefined4 *)(*param_2 + 0x1a38));
    FUN_141d23ff0(&local_4e8,param_2,iVar10,1);
    local_588._0_4_ = 0;
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (lVar9,local_500[0],lVar6 + 0x1cc,&local_4e8);
    local_538 = 1;
    local_558 = *(undefined8 *)(local_4b0 + 0x378);
    iVar11 = *(int *)(local_4b8 + 0x1aac) - *(int *)(local_4b8 + 0x1aa4);
    iVar10 = *(int *)(local_4b8 + 0x1aa8) - *(int *)(local_4b8 + 0x1aa0);
    local_540 = *(undefined1 *)((longlong)param_2 + 0x69);
    local_548 = *(undefined4 *)(local_4b8 + 0xf60);
    fVar18 = (float)iVar11;
    local_4b0 = CONCAT44(iVar11,iVar10);
    local_560 = (undefined8 *)local_4b0;
    local_568 = CONCAT44(local_568._4_4_,fVar18);
    local_570 = (float)iVar10;
    local_580 = (float)*(int *)(local_4b8 + 0x1aa0);
    local_578 = CONCAT44(local_578._4_4_,(float)*(int *)(local_4b8 + 0x1aa4));
    local_588 = CONCAT44(local_588._4_4_,fVar18);
    local_550 = lVar13;
    FUN_141ce13a0(param_2[8]);
  }
  bVar4 = false;
  uVar17 = 0;
  lVar9 = param_2[8];
  do {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if (((lVar6 != 0) && (lVar6 = FRenderingCompositeOutputRef::GetOutput(lVar6), lVar6 != 0)) &&
       (plVar16 = *(longlong **)(lVar6 + 0x50), plVar16 != (longlong *)0x0)) {
      (**(code **)(*plVar16 + 0x28))(plVar16);
      local_4e8 = (undefined *)plVar16[2];
      plVar14 = (longlong *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar15 = plVar14 + 1;
      if (*(longlong **)(lVar9 + 0x38) < plVar15) {
        FMemStackBase::AllocateNewChunk(lVar9 + 0x30);
        plVar14 = (longlong *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar15 = plVar14 + 1;
      }
      *(longlong **)(lVar9 + 0x30) = plVar15;
      *plVar14 = (longlong)local_4e8;
      puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 5;
      if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(lVar9 + 0x30);
        puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar12 + 5;
      }
      *(undefined8 **)(lVar9 + 0x30) = puVar8;
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      **(undefined8 **)(lVar9 + 8) = puVar12;
      *(undefined8 **)(lVar9 + 8) = puVar12 + 1;
      puVar12[3] = plVar14;
      *(undefined4 *)(puVar12 + 4) = 0;
      *puVar12 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar12 + 2) = 1;
      *(undefined1 *)((longlong)puVar12 + 0x24) = 0;
      puVar12[1] = 0;
      (**(code **)(*plVar16 + 0x30))(plVar16);
      param_1 = local_498;
    }
    plVar15 = local_4a0;
    plVar16 = local_518;
    uVar17 = uVar17 + 1;
  } while (uVar17 < 4);
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_438 = 0;
  local_430 = 0;
  local_42c = 0x26;
  local_424 = 0;
  local_41c = 0;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d4 = 0;
  local_3cc = 0;
  local_3c4 = 0;
  if (local_528[0] == 0) {
    cVar5 = FUN_141ce5c50(local_518,local_4a0);
    if (cVar5 == '\0') {
      cVar5 = '\0';
      if (*(char *)((longlong)plVar16 + 0x69) != '\0') {
        cVar5 = '\x02';
      }
    }
    else {
      cVar5 = (*plVar16 == *(longlong *)**(undefined8 **)(*plVar16 + 0x10)) + '\x01';
    }
    local_4e8 = (undefined *)*plVar15;
    uStack_4e0 = 0xffffffff00000000;
    local_4d8._0_2_ = CONCAT11(1,cVar5);
    local_518 = (longlong *)0x0;
    uStack_510 = 0;
    FUN_140c63b80(local_2f8,1,&local_4e8,&local_518);
    lVar9 = plVar16[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar9,local_238,local_2f8,local_168);
    puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 0x54;
    if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x2a8);
      puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 0x54;
    }
    *(undefined8 **)(lVar9 + 0x30) = puVar8;
    *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    **(undefined8 **)(lVar9 + 8) = puVar12;
    *(undefined8 **)(lVar9 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar12 + 2,local_2f8);
    local_518 = *(longlong **)(local_4b8 + 0x1aa0);
    uStack_510 = *(ulonglong *)(local_4b8 + 0x1aa8);
    FRenderingCompositePassContext::SetViewportAndCallRHI(plVar16,&local_518);
    local_438 = FUN_1409853f0();
    lVar9 = local_4a8;
    FUN_14049afe0(local_4a8,&local_478);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2f8);
  }
  else {
    local_438 = FUN_141d355c0();
    lVar9 = local_4a8;
    FUN_14049afe0(local_4a8,&local_478);
  }
  lVar13 = 0;
  local_448 = FUN_1404a0ce0();
  uStack_440 = FUN_140985530();
  lVar6 = plVar16[0xc];
  local_42c = local_42c & 0xffffffff00000000;
  local_518 = (longlong *)&DAT_146a51f90;
  uStack_510 = uStack_510 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_528,&local_518);
  iVar11 = local_508;
  if (local_528[0] != -1) {
    lVar13 = (longlong)local_528[0] * 0x20 + *(longlong *)(lVar6 + 0x38);
  }
  plVar15 = (longlong *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    plVar15 = (longlong *)0x0;
  }
  lVar13 = *plVar15;
  if (((char)param_1[0x1b] == '\0') || (iVar10 = 6, local_508 == 0)) {
    iVar10 = 0;
  }
  local_518 = (longlong *)&DAT_146a81230;
  uStack_510 = CONCAT44(uStack_510._4_4_,iVar10 + local_508);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_528,&local_518);
  if (local_528[0] == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)local_528[0] * 0x20 + *(longlong *)(lVar6 + 0x38);
  }
  plVar15 = (longlong *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    plVar15 = (longlong *)0x0;
  }
  lVar6 = *plVar15;
  local_478 = DAT_1464c2720;
  if (lVar13 == 0) {
    bVar4 = true;
    local_518 = (longlong *)0x0;
    uStack_470 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uStack_470 = *(undefined8 *)(lVar3 + 0x38);
  }
  uVar7 = 0;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_518);
  }
  bVar4 = false;
  if (lVar6 == 0) {
    bVar4 = true;
    local_518 = (longlong *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_458 = uVar7;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_518);
  }
  FUN_141ed6ac0(plVar16[8],&local_478,2,1);
  FUN_141ad70c0(lVar13,plVar16);
  FUN_141d0d4e0(lVar6,lVar9,plVar16,iVar11);
  uVar1 = *(undefined1 *)((longlong)plVar16 + 0x69);
  lVar6 = FSceneRenderTargets::Get(plVar16[8]);
  local_538 = 1;
  local_558 = *(undefined8 *)(lVar6 + 0x378);
  iVar11 = *(int *)(local_4b8 + 0x1aac) - *(int *)(local_4b8 + 0x1aa4);
  iVar10 = *(int *)(local_4b8 + 0x1aa8) - *(int *)(local_4b8 + 0x1aa0);
  local_548 = *(undefined4 *)(local_4b8 + 0xf60);
  fVar18 = (float)iVar11;
  local_4a8 = CONCAT44(iVar11,iVar10);
  local_560 = (undefined8 *)local_4a8;
  local_568 = CONCAT44(local_568._4_4_,fVar18);
  local_570 = (float)iVar10;
  local_580 = (float)*(int *)(local_4b8 + 0x1aa0);
  local_578 = CONCAT44(local_578._4_4_,(float)*(int *)(local_4b8 + 0x1aa4));
  local_588 = CONCAT44(local_588._4_4_,fVar18);
  local_550 = lVar13;
  local_540 = uVar1;
  FUN_141ce13a0(lVar9);
  lVar6 = local_4a0[1];
  puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar16 = (longlong *)*local_4a0;
  local_4e8 = (undefined *)0xffffffff00000000;
  uStack_4e0 = 0xffffffffffffffff;
  puVar8 = puVar12 + 10;
  local_4d8 = 0xffffffffffffffff;
  uStack_4d0 = 0xffffffffffffffff;
  local_4c8 = 0xffffffff;
  uStack_4c0 = 0;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 10;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar8;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar12;
  *(undefined8 **)(lVar9 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_4e8;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_4e8._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_4e0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_4e0._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_4d8;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_4d8._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_4d0;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_4d0._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_4c8;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_4c8._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_4c0;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_4c0._4_4_;
  puVar12[8] = plVar16;
  puVar12[9] = lVar6;
  lVar9 = (**(code **)(*plVar16 + 8))(plVar16);
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar9 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  if (local_490[0] != 0) {
    FScopedGPUStatEvent::End(local_490);
  }
  return;
}



// FUNCTION 141d45ed0 ProcessChildren body=702 status=ok
// SIG undefined ProcessChildren(void)

void TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::
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
      lVar3 = *(longlong *)(lVar2 + 0x328 + (ulonglong)(uVar19 & 7) * 8);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x368) & 0x7fffffff) != 0)) {
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
        *puVar18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x328 + (ulonglong)(uVar19 & 7) * 8)
        ;
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



// FUNCTION 141d46190 QueryVisualizeTexture body=442 status=ok
// SIG undefined QueryVisualizeTexture(void)

void FRendererModule::QueryVisualizeTexture(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  uint uVar7;
  undefined2 *puVar8;
  void *local_88;
  int local_80;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_141ee24f0(0);
  uVar1 = DAT_1464c2670;
  uVar7 = 0;
  if (DAT_1464c2670 != 0) {
    do {
      plVar3 = (longlong *)FRenderTargetPool::GetElementById(&PTR_PTR_1464c2560,uVar7);
      if (plVar3 != (longlong *)0x0) {
        puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
        local_68 = *puVar4;
        uStack_60 = puVar4[1];
        local_58 = puVar4[2];
        uStack_50 = puVar4[3];
        local_48 = puVar4[4];
        uStack_40 = puVar4[5];
        local_38 = *(undefined4 *)(puVar4 + 6);
        uStack_34 = *(undefined4 *)((longlong)puVar4 + 0x34);
        uStack_30 = *(undefined4 *)(puVar4 + 7);
        uStack_2c = *(undefined4 *)((longlong)puVar4 + 0x3c);
        local_28 = *(undefined4 *)(puVar4 + 8);
        uStack_24 = *(undefined4 *)((longlong)puVar4 + 0x44);
        uStack_20 = *(undefined4 *)(puVar4 + 9);
        uStack_1c = *(undefined4 *)((longlong)puVar4 + 0x4c);
        iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
        puVar4 = (undefined8 *)FPooledRenderTargetDesc::GenerateInfoString(&local_68,local_78);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar4;
        }
        pwVar5 = L"<Unnamed>";
        if ((wchar_t *)CONCAT44(uStack_24,local_28) != (wchar_t *)0x0) {
          pwVar5 = (wchar_t *)CONCAT44(uStack_24,local_28);
        }
        FString::PrintfImpl(&local_88,L"%s %d %s %d",puVar8,uVar7 + 1,pwVar5,iVar2 + 0x3ffU >> 10);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        _Src = local_88;
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        *puVar4 = 0;
        lVar6 = (longlong)local_80;
        *(int *)(puVar4 + 1) = local_80;
        if (local_80 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,local_80,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,lVar6 * 2);
        }
        if (local_88 != (void *)0x0) {
          FMemory::Free();
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return;
}



// FUNCTION 141d46350 ReallocateSceneRenderTargets body=26 status=ok
// SIG undefined ReallocateSceneRenderTargets(void)

void FRendererModule::ReallocateSceneRenderTargets(void)

{
  undefined8 uVar1;
  
  FUN_141d6b050();
  uVar1 = FSceneRenderTargets::Get();
  FRenderResource::UpdateRHI(uVar1);
  return;
}



// FUNCTION 141d46380 FUN_141d46380 body=519 status=ok
// SIG undefined FUN_141d46380(void)

void FUN_141d46380(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141d464bf;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar3 < iStack_44) {
LAB_141d464bf:
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
        plVar11 = (longlong *)((longlong)iStack_1c * 0x40 + *param_1);
        uVar8 = (int)*plVar2 - 1U & *(uint *)(*plVar11 + 0x58);
        *(uint *)((longlong)plVar11 + 0x3c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(plVar11 + 7) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141d46590 Rehash body=631 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_141d466cf;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
      if (iVar8 < iStack_44) {
LAB_141d466cf:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x40 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x3c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 7) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141d46810 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141d4694f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141d4694f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0xc0 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0x2d] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0x2c] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141d46a30 Release body=61 status=ok
// SIG undefined Release(void)

void FLatentGPUTimer::Release(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x48;
  lVar1 = 4;
  do {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -0x20,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1);
    param_1 = param_1 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 141d46a70 FUN_141d46a70 body=526 status=ok
// SIG undefined FUN_141d46a70(void)

void FUN_141d46a70(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  plVar5 = (longlong *)GetRendererModule();
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
  if (param_1[0xc1a] != 0) {
    FUN_14248ada0(param_1[0xc1a],1);
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res18);
    (**(code **)(*param_1 + 0x2a0))(param_1,1);
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar5 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar5 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar5);
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)plVar7[1];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)*plVar7;
    if (plVar5 == (longlong *)0x0) {
      lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = lVar8;
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar8 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar2;
        } while (lVar8 != 0);
        *puVar2 = 0;
      }
      plVar5 = (longlong *)plVar7[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar7[1] = (longlong)plVar5;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar10 = (int)plVar7[2];
  }
  plVar7[1] = *plVar5;
  *(int *)(plVar7 + 2) = iVar10 + -1;
  *plVar5 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar5 + 1) = 0xff;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
  *(undefined1 *)(plVar5 + 3) = 0;
  *plVar5 = (longlong)&PTR_FUN_144e48800;
  plVar5[4] = 0;
  plVar5[2] = (longlong)param_1;
  lVar8 = plVar5[4];
  piVar1 = (int *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res10 = lVar8;
  FUN_140445100(plVar5,0,0xff,1,0);
  if (lVar8 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res10);
      return;
    }
  }
  return;
}



// FUNCTION 141d46c90 FUN_141d46c90 body=1331 status=ok
// SIG undefined FUN_141d46c90(void)

void FUN_141d46c90(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    uVar3 = uVar11;
    do {
      lVar6 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)(param_1 + 0x128) == 0) {
        lVar6 = param_1 + 0x38;
      }
      TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
      ::Reset(lVar6 + (longlong)(int)uVar3 * 0x50);
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x130));
  }
  TSparseArray<TSetElement<FPrimitiveOcclusionHistory>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x17e8,0);
  if (0 < (int)*(uint *)(param_1 + 0x1830)) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x1830);
    uVar3 = uVar11;
    do {
      lVar6 = *(longlong *)(param_1 + 0x1828);
      if (*(longlong *)(param_1 + 0x1828) == 0) {
        lVar6 = param_1 + 0x1820;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x1830) - 1U & uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar6 + uVar2 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x290,0);
  if (0 < (int)*(uint *)(param_1 + 0x2d8)) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x2d8);
    uVar3 = uVar11;
    do {
      uVar2 = (longlong)*(int *)(param_1 + 0x2d8) - 1U & uVar3;
      lVar6 = *(longlong *)(param_1 + 0x2d0);
      if (*(longlong *)(param_1 + 0x2d0) == 0) {
        lVar6 = param_1 + 0x2c8;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar6 + uVar2 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FRenderQueryPool::Release(param_1 + 0x138);
  (**(code **)(*(longlong *)(param_1 + 0x158) + 0x10))();
  FSceneViewState::FEyeAdaptationRTManager::SafeRelease(param_1 + 0x450);
  plVar5 = *(longlong **)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  FUN_141d4c530(param_1 + 0x4d0);
  FUN_141d4c530(param_1 + 0xb10);
  lVar7 = 2;
  plVar5 = (longlong *)(param_1 + 0x1158);
  lVar6 = 2;
  do {
    plVar10 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))();
    }
    plVar5 = plVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar5 = (longlong *)(param_1 + 0x1188);
  lVar6 = 2;
  do {
    plVar10 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))();
    }
    plVar5 = plVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar5 = (longlong *)(param_1 + 0x11b8);
  lVar6 = 2;
  do {
    plVar10 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))();
    }
    plVar5 = plVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar5 = (longlong *)(param_1 + 0x11e8);
  do {
    plVar10 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))();
    }
    plVar5 = plVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  TSparseArray<TSetElement<TTuple<ULightComponent_const_*,FTemporalAAHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1218,0);
  if (0 < (int)*(uint *)(param_1 + 0x1260)) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x1260);
    uVar3 = uVar11;
    do {
      lVar6 = *(longlong *)(param_1 + 0x1258);
      if (*(longlong *)(param_1 + 0x1258) == 0) {
        lVar6 = param_1 + 0x1250;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x1260) - 1U & uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar6 + uVar2 * 4) = 0xffffffff;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  plVar5 = *(longlong **)(param_1 + 0x1278);
  *(undefined8 *)(param_1 + 0x1278) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x1280);
  *(undefined8 *)(param_1 + 0x1280) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x1288);
  *(undefined8 *)(param_1 + 0x1288) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x1290);
  *(undefined8 *)(param_1 + 0x1290) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x1298);
  *(undefined8 *)(param_1 + 0x1298) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x12a0);
  *(undefined8 *)(param_1 + 0x12a0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x12a8);
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x12b0);
  *(undefined8 *)(param_1 + 0x12b0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x12f0,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x12f8,0);
  *(undefined4 *)(param_1 + 0x12d8) = 0x7f7fc99e;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x12e0,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x12e8,0);
  plVar5 = (longlong *)(param_1 + 0x1400);
  uVar3 = uVar11;
  plVar10 = plVar5;
  uVar9 = uVar11;
  do {
    do {
      plVar1 = (longlong *)*plVar5;
      *plVar5 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))();
      }
      uVar4 = (int)uVar3 + 1;
      plVar5 = plVar5 + 3;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < 2);
    uVar4 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar4;
    plVar5 = plVar10 + 0xb;
    uVar3 = uVar11;
    plVar10 = plVar5;
  } while (uVar4 < 4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1530,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1538,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1540,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1548,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1550,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1558,0);
  FUN_141ace450(param_1 + 0x1560);
  FUN_141ace450(param_1 + 0x1588);
  lVar8 = 4;
  lVar6 = param_1 + 0x15f8;
  lVar7 = 4;
  do {
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6 + -0x20,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6);
    lVar6 = lVar6 + 8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar6 = param_1 + 0x1680;
  lVar7 = 4;
  do {
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6 + -0x20,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6);
    lVar6 = lVar6 + 8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar6 = param_1 + 0x1708;
  do {
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6 + -0x20,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6);
    lVar6 = lVar6 + 8;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(undefined8 *)(param_1 + 0x1300) = 0;
  FUN_141ace450(param_1 + 0x1308);
  FUN_141ace450(param_1 + 0x1330);
  FUN_141ace450(param_1 + 0x1358);
  FUN_141ace450(param_1 + 0x1380);
  plVar5 = *(longlong **)(param_1 + 0x13a8);
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  FUN_141b69970(param_1 + 0x1788);
  return;
}



// FUNCTION 141d471d0 FUN_141d471d0 body=497 status=ok
// SIG undefined FUN_141d471d0(void)

void FUN_141d471d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    uVar3 = *(undefined4 *)(param_2 + 0x354);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    FUN_141b69ae0(param_1 + 0x13e8,uVar3);
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_38._0_4_);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar8 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar8 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar8);
    plVar7 = plVar8;
  }
  plVar8 = (longlong *)plVar7[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar7;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = (longlong)plVar8;
      if (plVar8 == (longlong *)0x0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar11 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar11 = lVar11 + -1;
          puVar9 = puVar2;
        } while (lVar11 != 0);
        *puVar2 = 0;
        plVar8 = (longlong *)plVar7[1];
      }
      iVar10 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar7[1] = (longlong)plVar8;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar10 = (int)plVar7[2];
  }
  plVar7[1] = *plVar8;
  *(int *)(plVar7 + 2) = iVar10 + -1;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
  *(undefined1 *)(plVar8 + 4) = 0;
  *plVar8 = (longlong)&PTR_FUN_144e486e0;
  plVar8[5] = 0;
  plVar8[2] = param_1;
  *(undefined4 *)(plVar8 + 3) = *(undefined4 *)(param_2 + 0x354);
  lVar11 = plVar8[5];
  piVar1 = (int *)(lVar11 + 0x48);
  if (lVar11 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar11;
  FUN_1409421c0(plVar8,0,0xff,1);
  if (lVar11 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 141d473d0 FUN_141d473d0 body=895 status=ok
// SIG undefined FUN_141d473d0(void)

void FUN_141d473d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  DWORD DVar7;
  longlong *plVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  int local_res8 [4];
  longlong local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [4];
  uint local_54;
  longlong local_50;
  uint local_48;
  int local_44;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            (&local_60,param_1 + 0x1378);
  if (local_44 < *(int *)(local_50 + 0x18)) {
    while (*(longlong *)(*local_60 + (longlong)local_44 * 8) != param_2) {
      local_48 = local_48 & ~local_54;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_58);
      if (*(int *)(local_50 + 0x18) <= local_44) {
        return;
      }
    }
    bVar4 = (byte)local_44 & 0x1f;
    if (*(int *)((longlong)local_60 + 0x34) != 0) {
      *(int *)(*local_60 + (longlong)(int)local_60[6] * 8) = local_44;
    }
    lVar11 = *local_60;
    *(undefined4 *)(lVar11 + (longlong)local_44 * 8) = 0xffffffff;
    if (*(int *)((longlong)local_60 + 0x34) < 1) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (undefined4)local_60[6];
    }
    *(undefined4 *)(lVar11 + (longlong)local_44 * 8 + 4) = uVar6;
    plVar13 = (longlong *)0x0;
    *(int *)((longlong)local_60 + 0x34) = *(int *)((longlong)local_60 + 0x34) + 1;
    *(int *)(local_60 + 6) = local_44;
    plVar10 = (longlong *)local_60[4];
    if ((longlong *)local_60[4] == (longlong *)0x0) {
      plVar10 = local_60 + 2;
    }
    puVar3 = (uint *)((longlong)plVar10 +
                     (longlong)((int)(local_44 + (local_44 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_78);
      TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x1308,local_res8,param_2);
      plVar10 = plVar13;
      if (local_res8[0] != -1) {
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x1308) + (longlong)local_res8[0] * 0x28);
      }
      plVar8 = plVar10 + 1;
      if (plVar10 == (longlong *)0x0) {
        plVar8 = plVar13;
      }
      if (plVar8 != (longlong *)0x0) {
        iVar14 = (int)*plVar8;
        lVar11 = *(longlong *)(param_1 + 0x1368);
        if (*(longlong *)(param_1 + 0x1368) == 0) {
          lVar11 = param_1 + 0x1358;
        }
        puVar3 = (uint *)(lVar11 + (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << ((byte)iVar14 & 0x1f));
      }
      TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x1308,param_2);
      QueryPerformanceCounter(&local_res20);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_78._0_4_);
    }
    else {
      pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar10 = TlsGetValue(*pDVar9);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = 0;
          plVar10[1] = 0;
          *(int *)(plVar10 + 2) = 0;
          plVar13 = plVar10;
        }
        TlsSetValue(*pDVar9,plVar13);
        plVar10 = plVar13;
      }
      plVar13 = (longlong *)plVar10[1];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)*plVar10;
        if (plVar13 == (longlong *)0x0) {
          lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
          plVar10[1] = lVar11;
          if (lVar11 == 0) {
            puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar10[1] = (longlong)puVar12;
            lVar11 = 0x1f;
            do {
              puVar2 = puVar12 + 0x20;
              *puVar12 = puVar2;
              lVar11 = lVar11 + -1;
              puVar12 = puVar2;
            } while (lVar11 != 0);
            *puVar2 = 0;
          }
          plVar13 = (longlong *)plVar10[1];
          iVar14 = 0x20;
          *(int *)(plVar10 + 2) = 0x20;
        }
        else {
          iVar14 = 0x20;
          plVar10[1] = (longlong)plVar13;
          *(int *)(plVar10 + 2) = 0x20;
          *plVar10 = 0;
        }
      }
      else {
        iVar14 = (int)plVar10[2];
      }
      plVar10[1] = *plVar13;
      *(int *)(plVar10 + 2) = iVar14 + -1;
      *plVar13 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar13 + 1) = 0xff;
      local_70 = 0;
      local_68 = 0;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      *(undefined1 *)(plVar13 + 4) = 0;
      *plVar13 = (longlong)&PTR_FUN_144e48730;
      plVar13[5] = 0;
      plVar13[2] = param_2;
      plVar13[3] = param_1;
      lVar11 = plVar13[5];
      piVar1 = (int *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar11;
      FUN_1409421c0(plVar13,0,0xff,1);
      if (lVar11 != 0) {
        LOCK();
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d47750 Remove body=154 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0xc0 + 0xb4 + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)((longlong)param_2 * 0xc0 + 0xb0 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0xb0 + (longlong)iVar1 * 0xc0);
      iVar1 = *piVar5;
    }
  }
  TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FMotionBlurInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141d477f0 Remove body=252 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar7 + ((longlong)*param_2 & uVar8) * 4);
  if (iVar6 != -1) {
    lVar4 = *param_1;
    do {
      lVar5 = (longlong)iVar6;
      if (*(int *)(lVar4 + lVar5 * 0x28) == *param_2) {
        lVar5 = lVar5 * 0x28;
        uVar8 = (longlong)*(int *)(lVar5 + 0x24 + lVar4) & uVar8;
        puVar2 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
        iVar3 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x000141d47887;
      }
      iVar6 = *(int *)(lVar4 + 0x20 + lVar5 * 0x28);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x000141d47887:
  if (iVar3 == -1) {
LAB_141d478b2:
    if (*(longlong *)(lVar5 + 0x10 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar3 == iVar6) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar4 + 0x20);
    goto LAB_141d478b2;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x000141d47887;
}



// FUNCTION 141d478f0 RemoveAtUninitialized body=183 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FPrimitiveComponentId,FMotionBlurInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0xc0;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xc0 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0xc0;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141d479b0 RemoveElement body=1540 status=ok
// SIG undefined RemoveElement(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::RemoveElement
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auStack_5a18 [32];
  longlong local_59f8;
  undefined8 local_59f0;
  int iStack_59e8;
  undefined4 uStack_59e4;
  undefined8 local_59d8;
  longlong lStack_59d0;
  undefined4 local_59a8;
  undefined4 uStack_59a4;
  undefined4 uStack_59a0;
  undefined4 uStack_599c;
  longlong local_5998;
  longlong lStack_5990;
  undefined8 local_5988;
  undefined8 uStack_5980;
  undefined8 local_5978;
  undefined8 uStack_5970;
  undefined8 local_5968;
  undefined8 uStack_5960;
  undefined1 local_5958 [6336];
  undefined1 *local_4098;
  undefined8 local_4088;
  undefined1 local_4078 [16384];
  undefined1 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 uStack_40;
  
  uStack_40 = 0x141d479cd;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_5a18;
  lVar7 = *param_2;
  iVar12 = (int)param_2[1];
  iVar5 = *(int *)(lVar7 + 0x4008);
  iVar15 = (iVar5 - iVar12) + -1;
  if (0 < iVar15) {
    iVar15 = 1;
  }
  local_59f8 = param_1;
  if (iVar15 != 0) {
    lVar14 = *(longlong *)(lVar7 + 0x4000);
    if (*(longlong *)(lVar7 + 0x4000) == 0) {
      lVar14 = lVar7;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar12 * 0x40 + lVar14),
               (void *)((longlong)(iVar5 - iVar15) * 0x40 + lVar14),(longlong)iVar15 << 6);
    iVar5 = *(int *)(lVar7 + 0x4008);
  }
  *(int *)(lVar7 + 0x4008) = iVar5 + -1;
  TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeShrink(lVar7);
  lVar14 = 0;
  *(longlong *)(param_1 + 0x4098) = (longlong)(*(int *)(param_1 + 0x4098) + -0x40);
  if (iVar12 < *(int *)(lVar7 + 0x4008)) {
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar6 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar16 = *(longlong *)(lVar7 + 0x4000);
    if (*(longlong *)(lVar7 + 0x4000) == 0) {
      lVar16 = lVar7;
    }
    lVar16 = *(longlong *)(lVar16 + (longlong)iVar12 * 0x40);
    *(int *)(lVar16 + 0x40) = (int)*param_2;
    *(undefined4 *)(lVar16 + 0x44) = uVar2;
    *(int *)(lVar16 + 0x48) = (int)lVar6;
    *(undefined4 *)(lVar16 + 0x4c) = uVar3;
  }
  do {
    uVar8 = *(uint *)(lVar7 + 0x4058);
    uVar8 = (uVar8 - 1 ^ uVar8) & 0x7fffffff ^ uVar8;
    *(uint *)(lVar7 + 0x4058) = uVar8;
    plVar1 = (longlong *)(lVar7 + 0x4010);
    lVar6 = lVar7;
    if (6 < (uVar8 & 0x7fffffff)) {
      lVar6 = lVar14;
    }
    lVar7 = *plVar1;
    lVar14 = lVar6;
  } while (*plVar1 != 0);
  if (lVar6 != 0) {
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    if ((*(uint *)(lVar6 + 0x4058) & 0x7fffffff) != 0) {
      TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeTo
                (local_4078);
    }
    local_5988 = *(undefined8 *)(param_1 + 0x4060);
    uStack_5980 = *(undefined8 *)(param_1 + 0x4068);
    local_5978 = *(undefined8 *)(param_1 + 0x4070);
    uStack_5970 = *(undefined8 *)(param_1 + 0x4078);
    local_5968 = *(undefined8 *)(param_1 + 0x4080);
    uStack_5960 = *(undefined8 *)(param_1 + 0x4088);
    local_4098 = (undefined1 *)0x0;
    local_4088 = 0;
    local_5998 = lVar6;
    do {
      lVar7 = local_5998;
      for (iVar12 = 0; (uVar13 = local_70, -1 < iVar12 && (iVar12 < *(int *)(lVar7 + 0x4008)));
          iVar12 = iVar12 + 1) {
        iVar5 = (int)local_70;
        lVar16 = (longlong)(int)local_70;
        lVar17 = (longlong)iVar12 * 0x40;
        lVar14 = *(longlong *)(lVar7 + 0x4000);
        if (*(longlong *)(lVar7 + 0x4000) == 0) {
          lVar14 = lVar7;
        }
        iVar15 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar15);
        if (local_70._4_4_ < iVar15) {
          TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeGrow
                    (local_4078,uVar13 & 0xffffffff);
        }
        uVar4 = ((undefined8 *)(lVar14 + lVar17))[1];
        iStack_59e8 = iVar5;
        puVar9 = local_4078;
        if (local_78 != (undefined1 *)0x0) {
          puVar9 = local_78;
        }
        lVar16 = lVar16 * 0x40;
        *(undefined8 *)(puVar9 + lVar16) = *(undefined8 *)(lVar14 + lVar17);
        *(undefined8 *)((longlong)(puVar9 + lVar16) + 8) = uVar4;
        puVar11 = (undefined8 *)(lVar14 + 0x10 + lVar17);
        uVar4 = puVar11[1];
        *(undefined8 *)(puVar9 + lVar16 + 0x10) = *puVar11;
        *(undefined8 *)((longlong)(puVar9 + lVar16 + 0x10) + 8) = uVar4;
        puVar11 = (undefined8 *)(lVar14 + 0x20 + lVar17);
        uVar4 = puVar11[1];
        *(undefined8 *)(puVar9 + lVar16 + 0x20) = *puVar11;
        *(undefined8 *)((longlong)(puVar9 + lVar16 + 0x20) + 8) = uVar4;
        puVar11 = (undefined8 *)(lVar14 + 0x30 + lVar17);
        uVar4 = puVar11[1];
        local_59f0._0_4_ = (undefined4)lVar6;
        local_59f0._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
        *(undefined8 *)(puVar9 + lVar16 + 0x30) = *puVar11;
        *(undefined8 *)((longlong)(puVar9 + lVar16 + 0x30) + 8) = uVar4;
        lVar14 = *(longlong *)(lVar7 + 0x4000);
        if (*(longlong *)(lVar7 + 0x4000) == 0) {
          lVar14 = lVar7;
        }
        lVar14 = *(longlong *)(lVar14 + lVar17);
        *(undefined4 *)(lVar14 + 0x40) = (undefined4)local_59f0;
        *(undefined4 *)(lVar14 + 0x44) = local_59f0._4_4_;
        *(int *)(lVar14 + 0x48) = iVar5;
        *(undefined4 *)(lVar14 + 0x4c) = uStack_59e4;
        local_59f0 = lVar6;
      }
      uVar8 = 0;
      do {
        uVar13 = local_4088;
        lVar14 = *(longlong *)(lVar7 + 0x4018 + (ulonglong)(uVar8 & 7) * 8);
        if ((lVar14 != 0) && ((*(uint *)(lVar14 + 0x4058) & 0x7fffffff) != 0)) {
          lVar14 = (longlong)(int)local_4088;
          iVar12 = (int)local_4088 + 1;
          local_4088 = CONCAT44(local_4088._4_4_,iVar12);
          if (local_4088._4_4_ < iVar12) {
            TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
            ::ResizeGrow(local_5958,uVar13 & 0xffffffff);
          }
          puVar11 = (undefined8 *)0x0;
          puVar9 = local_5958;
          if (local_4098 != (undefined1 *)0x0) {
            puVar9 = local_4098;
          }
          puVar10 = (undefined8 *)(puVar9 + lVar14 * 0x40);
          if (puVar10 != (undefined8 *)0x0) {
            puVar10[2] = 0;
            *(undefined4 *)(puVar10 + 3) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x1c) = 0x3f800000;
            *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
            *(undefined4 *)((longlong)puVar10 + 0x2c) = 0x3f800000;
            *puVar10 = 0;
            puVar11 = puVar10;
          }
          *puVar11 = *(undefined8 *)(local_5998 + 0x4018 + (ulonglong)(uVar8 & 7) * 8);
          *(float *)(puVar11 + 2) =
               local_5968._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar8 & 1) * 4) +
               (float)local_5988;
          *(float *)((longlong)puVar11 + 0x14) =
               local_5968._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar8 >> 1 & 1) * 4) +
               local_5988._4_4_;
          fVar18 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar8 >> 2 & 1) * 4);
          *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
          *(float *)(puVar11 + 3) = local_5968._4_4_ * fVar18 + (float)uStack_5980;
          *(float *)(puVar11 + 4) = (float)local_5968;
          *(float *)((longlong)puVar11 + 0x24) = (float)local_5968;
          *(float *)(puVar11 + 5) = (float)local_5968;
          *(undefined4 *)((longlong)puVar11 + 0x2c) = 0;
          fVar18 = (float)local_5968 * 0.5 * 1.0625;
          *(float *)(puVar11 + 6) = fVar18;
          *(float *)((longlong)puVar11 + 0x34) = (float)local_5968 - fVar18;
        }
        if (((byte)uVar8 & 7) < 7) {
          uVar8 = uVar8 ^ (uVar8 + 1 ^ uVar8) & 7;
        }
        else {
          uVar8 = uVar8 | 8;
        }
      } while (uVar8 >> 3 == 0);
      if ((int)local_4088 == 0) {
        local_59d8 = 0;
        local_5998 = 0;
        lStack_5990 = lStack_59d0;
        local_5968 = CONCAT44(uStack_59a4,local_59a8);
        uStack_5960 = CONCAT44(uStack_599c,uStack_59a0);
        local_5988 = 0;
        uStack_5980 = 0x3f80000000000000;
        local_5978 = 0;
        uStack_5970 = 0x3f80000000000000;
      }
      else {
        iVar12 = (int)local_4088 + -1;
        puVar9 = local_5958;
        if (local_4098 != (undefined1 *)0x0) {
          puVar9 = local_4098;
        }
        lVar7 = (longlong)iVar12 * 0x40;
        local_5998 = *(longlong *)(puVar9 + lVar7);
        lStack_5990 = *(longlong *)((longlong)(puVar9 + lVar7) + 8);
        local_5988 = *(undefined8 *)(puVar9 + lVar7 + 0x10);
        uStack_5980 = *(undefined8 *)((longlong)(puVar9 + lVar7 + 0x10) + 8);
        local_5978 = *(undefined8 *)(puVar9 + lVar7 + 0x20);
        uStack_5970 = *(undefined8 *)((longlong)(puVar9 + lVar7 + 0x20) + 8);
        local_5968 = *(undefined8 *)(puVar9 + lVar7 + 0x30);
        uStack_5960 = *(undefined8 *)((longlong)(puVar9 + lVar7 + 0x30) + 8);
        iVar5 = ((int)local_4088 - iVar12) + -1;
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    (puVar9 + (longlong)iVar12 * 0x40,puVar9 + (longlong)(int)local_4088 * 0x40,
                     (longlong)iVar5 << 6);
        }
        local_4088 = CONCAT44(local_4088._4_4_,(int)local_4088 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
        ::ResizeShrink(local_5958);
      }
    } while (local_5998 != 0);
    if (local_4098 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    Swap<TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>_>
              (lVar6,local_4078);
    lVar7 = local_59f8;
    *(uint *)(lVar6 + 0x4058) = *(uint *)(lVar6 + 0x4058) | 0x80000000;
    uVar8 = 0;
    do {
      uVar13 = (ulonglong)(uVar8 & 7);
      if (*(longlong *)(lVar6 + 0x4018 + uVar13 * 8) != 0) {
        *(longlong *)(lVar7 + 0x4098) = (longlong)(*(int *)(lVar7 + 0x4098) + -0x4060);
        lVar14 = *(longlong *)(lVar6 + 0x4018 + uVar13 * 8);
        if (lVar14 != 0) {
          FNode::~FNode(lVar14);
          FMemory::operator_delete(lVar14,0x4060);
        }
      }
      *(undefined8 *)(lVar6 + 0x4018 + uVar13 * 8) = 0;
      if (((byte)uVar8 & 7) < 7) {
        uVar8 = uVar8 ^ (uVar8 + 1 ^ uVar8) & 7;
      }
      else {
        uVar8 = uVar8 | 8;
      }
    } while (uVar8 >> 3 == 0);
    if (local_78 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141d47fc0 FUN_141d47fc0 body=619 status=ok
// SIG undefined FUN_141d47fc0(void)

void FUN_141d47fc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_146ac3ac5 != '\0') ||
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0' && (DAT_1468c21ae != '\0')) &&
      (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)))) {
    pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar7 = TlsGetValue(*pDVar6);
    plVar12 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        plVar12 = plVar7;
      }
      TlsSetValue(*pDVar6,plVar12);
      plVar7 = plVar12;
    }
    plVar12 = (longlong *)plVar7[1];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)*plVar7;
      if (plVar12 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
        plVar7[1] = lVar8;
        if (lVar8 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar7[1] = (longlong)puVar9;
          lVar8 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar8 = lVar8 + -1;
            puVar9 = puVar2;
          } while (lVar8 != 0);
          *puVar2 = 0;
        }
        plVar12 = (longlong *)plVar7[1];
        iVar13 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar13 = 0x20;
        plVar7[1] = (longlong)plVar12;
        *(undefined4 *)(plVar7 + 2) = 0x20;
        *plVar7 = 0;
      }
    }
    else {
      iVar13 = (int)plVar7[2];
    }
    plVar7[1] = *plVar12;
    *(int *)(plVar7 + 2) = iVar13 + -1;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    local_30 = 0;
    local_28 = 0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144e48780;
    *(undefined1 *)(plVar12 + 4) = 0;
    plVar12[5] = 0;
    plVar12[2] = param_1;
    plVar12[3] = param_2;
    lVar8 = plVar12[5];
    piVar1 = (int *)(lVar8 + 0x48);
    if (lVar8 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res20 = lVar8;
    FUN_1409421c0(plVar12,0,0xff,1);
    if (lVar8 != 0) {
      LOCK();
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FGraphEvent::Recycle(local_res20);
      }
    }
    return;
  }
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_38);
  uVar11 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x1900)) {
    plVar12 = *(longlong **)(param_1 + 0x18f8);
    plVar7 = plVar12;
    uVar14 = uVar11;
    do {
      iVar13 = (int)uVar14;
      if (*plVar7 == param_2) {
        iVar10 = *(int *)(param_1 + 0x1900);
        iVar5 = (iVar10 - iVar13) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar12 + (longlong)iVar13 * 0x14,plVar12 + (longlong)(iVar13 + 1) * 0x14,
                     (longlong)iVar5 * 0xa0);
          iVar10 = *(int *)(param_1 + 0x1900);
        }
        *(int *)(param_1 + 0x1900) = iVar10 + -1;
        TArray<FRemnantQuestEntityInfo,FDefaultAllocator>::ResizeShrink(param_1 + 0x18f8);
        break;
      }
      uVar14 = (ulonglong)(iVar13 + 1);
      uVar11 = uVar11 + 1;
      plVar7 = plVar7 + 0x14;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x1900));
  }
  QueryPerformanceCounter(&local_res18);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_38._0_4_);
  return;
}



// FUNCTION 141d48230 FUN_141d48230 body=753 status=ok
// SIG undefined FUN_141d48230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d48230(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [64];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 200);
  while (lVar1 != 0) {
    FUN_141d66190(*(undefined8 *)(param_1 + 200));
    lVar1 = *(longlong *)(param_1 + 200);
  }
  local_88 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = *(undefined4 *)(param_1 + 0x48);
  uStack_7c = *(undefined4 *)(param_1 + 0x4c);
  TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::RemoveElement
            (*(longlong *)(param_1 + 0xd8) + 0x1e20,&local_88);
  uVar8 = 0;
  local_88 = 0;
  uStack_80 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = uStack_7c;
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x1c) & 0x100) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd8);
    plVar2 = *(longlong **)(lVar1 + 0x11c8);
    iVar12 = *(int *)(lVar1 + 0x11d0);
    for (plVar6 = plVar2; plVar6 != plVar2 + iVar12; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_1) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
        if (iVar5 != -1) {
          iVar3 = (iVar12 - iVar5) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar2 + iVar5,plVar2 + (iVar12 - iVar3),(longlong)iVar3 << 3);
            iVar12 = *(int *)(lVar1 + 0x11d0);
          }
          *(int *)(lVar1 + 0x11d0) = iVar12 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0x11c8);
        }
        break;
      }
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x1c) & 0x4004) == 0x4004) {
    lVar1 = *(longlong *)(param_1 + 0xd8);
    plVar2 = *(longlong **)(lVar1 + 0x11d8);
    iVar12 = *(int *)(lVar1 + 0x11e0);
    for (plVar6 = plVar2; plVar6 != plVar2 + iVar12; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_1) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
        if (iVar5 != -1) {
          iVar3 = (iVar12 - iVar5) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar2 + iVar5,plVar2 + (iVar12 - iVar3),(longlong)iVar3 << 3);
            iVar12 = *(int *)(lVar1 + 0x11e0);
          }
          *(int *)(lVar1 + 0x11e0) = iVar12 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0x11d8);
        }
        break;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,0);
  if (*(char *)(param_1 + 0xfc) != '\0') {
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),local_78);
    uVar11 = local_30 & 0xffffffff;
    puVar7 = local_38;
    uVar10 = uVar8;
    if (0 < (int)local_30) {
      do {
        puVar4 = local_78;
        if (puVar7 != (undefined1 *)0x0) {
          puVar4 = puVar7;
        }
        if (*(longlong *)(puVar4 + uVar8) != 0) {
          local_88 = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(puVar4 + uVar8) + 0x20,0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
          uVar11 = local_30 & 0xffffffff;
          puVar7 = local_38;
        }
        uVar9 = (int)uVar10 + 1;
        uVar8 = uVar8 + 8;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)uVar11);
    }
    *(undefined1 *)(param_1 + 0xfc) = 0;
    if (puVar7 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  *(undefined1 *)(param_1 + 0xfb) = 1;
  if (*(char *)(param_1 + 0xfd) != '\0') {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (*(longlong *)(param_1 + 0xd8) + 0x20,param_1);
  }
  if (param_2 != '\0') {
    FPrimitiveSceneInfo::RemoveStaticMeshes(param_1);
  }
  return;
}



// FUNCTION 141d48530 FUN_141d48530 body=545 status=ok
// SIG undefined FUN_141d48530(void)

void FUN_141d48530(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if (*(longlong *)(param_2 + 0x3a8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x3a8) + 0x20);
    *(int *)(param_1 + 0x6000) = *(int *)(param_1 + 0x6000) + -1;
    plVar10 = (longlong *)0x0;
    *(undefined8 *)(param_2 + 0x3a8) = 0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      FUN_141d48760(param_1,lVar3);
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
      return;
    }
    pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar7 = TlsGetValue(*pDVar6);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        plVar10 = plVar7;
      }
      TlsSetValue(*pDVar6,plVar10);
      plVar7 = plVar10;
    }
    plVar10 = (longlong *)plVar7[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar7;
      if (plVar10 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
        plVar7[1] = lVar8;
        if (lVar8 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar7[1] = (longlong)puVar9;
          lVar8 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar8 = lVar8 + -1;
            puVar9 = puVar2;
          } while (lVar8 != 0);
          *puVar2 = 0;
        }
        plVar10 = (longlong *)plVar7[1];
        iVar11 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar11 = 0x20;
        plVar7[1] = (longlong)plVar10;
        *(undefined4 *)(plVar7 + 2) = 0x20;
        *plVar7 = 0;
      }
    }
    else {
      iVar11 = (int)plVar7[2];
    }
    plVar7[1] = *plVar10;
    *(int *)(plVar7 + 2) = iVar11 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144e48760;
    *(undefined1 *)(plVar10 + 4) = 0;
    plVar10[5] = 0;
    plVar10[2] = param_1;
    plVar10[3] = lVar3;
    lVar3 = plVar10[5];
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res18 = lVar3;
    FUN_1409421c0(plVar10,0,0xff,1,0,0);
    if (lVar3 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  return;
}



// FUNCTION 141d48760 FUN_141d48760 body=1573 status=ok
// SIG undefined FUN_141d48760(void)

void FUN_141d48760(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong *puVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  undefined8 *local_res10;
  byte local_res18 [8];
  longlong local_res20;
  uint local_b8;
  uint uStack_b4;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint uStack_84;
  uint local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_res10 = param_2;
  if ((*(byte *)(param_2 + 0x12) & 4) == 0) {
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1 + 0x10f8,*(undefined4 *)(param_2 + 0xb),1);
    goto LAB_141d48d2a;
  }
  uVar6 = 0;
  if (param_2 == *(undefined8 **)(param_1 + 0x1168)) {
    *(undefined8 *)(param_1 + 0x1168) = 0;
  }
  if (*(int *)(param_1 + 8) < 2) {
    local_res18[0] = (**(code **)(*(longlong *)param_2[6] + 0xa0))();
    plVar9 = (longlong *)(param_1 + 0x1170);
    uVar12 = uVar6;
    do {
      if (param_2 == (undefined8 *)*plVar9) {
        local_res20 = (longlong)(int)uVar12;
        puVar1 = (uint *)(param_1 + 0x1080);
        local_b8 = 0;
        uStack_b4 = 1;
        *(undefined8 *)(param_1 + 0x1170 + local_res20 * 8) = 0;
        iVar13 = *(int *)(param_1 + 0x1098);
        iStack_a4 = 0;
        uStack_a0 = 0;
        if (iVar13 == 0) goto LAB_141d488b0;
        puVar16 = *(uint **)(param_1 + 0x1090);
        if (*(uint **)(param_1 + 0x1090) == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar18 = *puVar16;
        uVar10 = uVar6;
        if (uVar18 != 0) goto LAB_141d48884;
        goto LAB_141d48860;
      }
      uVar12 = uVar12 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar12 < 3);
  }
  goto LAB_141d48a22;
  while (uVar18 = puVar16[(longlong)(int)uVar6 + 1], uVar6 = local_b8, uVar10 = uStack_a0,
        uVar18 == 0) {
LAB_141d48860:
    uStack_a0 = uVar10 + 0x20;
    local_b8 = uVar6 + 1;
    if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar6) goto LAB_141d488ac;
  }
LAB_141d48884:
  uStack_b4 = -uVar18 & uVar18;
  iVar20 = 0x1f;
  if (uStack_b4 != 0) {
    for (; uStack_b4 >> iVar20 == 0; iVar20 = iVar20 + -1) {
    }
  }
  if (uStack_b4 == 0) {
    iVar20 = 0x20;
  }
  else {
    iVar20 = 0x1f - iVar20;
  }
  iStack_a4 = (uStack_a0 - iVar20) + 0x1f;
  if (iVar13 < iStack_a4) {
LAB_141d488ac:
    iStack_a4 = iVar13;
  }
LAB_141d488b0:
  uVar6 = *(uint *)(param_1 + 0x1098);
  uStack_84 = *(uint *)(param_1 + 0x1098);
  local_60 = CONCAT44(iStack_a4,0xffffffff);
  uStack_58 = CONCAT44(uStack_9c,uStack_a0);
  uVar18 = uStack_84 & 0xffffffe0;
  local_70 = local_b8;
  uStack_6c = uStack_b4;
  uStack_68 = puVar1;
  if (uStack_84 != uVar6) {
    puVar16 = *(uint **)(param_1 + 0x1090);
    if (*(uint **)(param_1 + 0x1090) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar10 = puVar16[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
    iVar13 = (int)uStack_84 >> 5;
    while (uVar10 == 0) {
      uVar18 = uVar18 + 0x20;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_141d48971;
      uVar10 = puVar16[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar13 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (uVar18 - iVar13) + 0x1f;
    if ((int)uVar6 < (int)uStack_84) {
LAB_141d48971:
      uStack_84 = uVar6;
    }
  }
  do {
    if ((local_60._4_4_ == uStack_84) && (uStack_68 == puVar1)) goto LAB_141d489ff;
    lVar7 = (longlong)(int)local_60._4_4_ * 0x30 + *(longlong *)(param_1 + 0x1070);
    puVar4 = *(undefined8 **)(lVar7 + 0x20);
    if ((puVar4 != param_2) && ((*(byte *)(lVar7 + 0x28) & 0x13) == 0)) {
      bVar2 = *(byte *)(puVar4[6] + 0x189);
      if (bVar2 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = 0;
        if (bVar2 != 0) {
          for (; (bVar2 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
      if (uVar6 == uVar12) break;
    }
    local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
  } while( true );
  *(undefined8 **)(param_1 + 0x1170 + local_res20 * 8) = puVar4;
LAB_141d489ff:
  if (((*(uint *)(param_2[6] + 0x180) >> 3 & 1) == 0) || (local_res18[0] != 0)) {
    *(undefined1 *)(param_1 + 0x114c) = 1;
  }
LAB_141d48a22:
  uVar14 = 0;
  cVar5 = (**(code **)(*(longlong *)param_2[6] + 0x78))
                    ((longlong *)param_2[6],&local_res20,local_res18);
  if ((cVar5 != '\0') && (*(char *)(param_2[6] + 0x188) == '\0')) {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x10a8,&local_res10);
    param_2 = local_res10;
  }
  if ((*(byte *)(param_2 + 0x12) & 8) != 0) {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x10b8,&local_res10);
    param_2 = local_res10;
  }
  if ((*(uint *)(param_2[6] + 0x180) & 0x10000) != 0) {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x10c8,&local_res10);
    param_2 = local_res10;
  }
  if (*(char *)(param_2[6] + 0x188) == '\0') {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x10d8,&local_res10);
    param_2 = local_res10;
  }
  if (((((byte)(*(char *)(param_2[6] + 0x188) - 1U) < 2) &&
       (uVar6 = *(uint *)(param_2[6] + 0x180), (uVar6 >> 2 & 1) == 0)) && ((uVar6 >> 4 & 1) != 0))
     && ((uVar6 >> 9 & 1) != 0)) {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x10e8,&local_res10);
    param_2 = local_res10;
  }
  if (param_2 == *(undefined8 **)(param_1 + 0x1188)) {
    *(undefined8 *)(param_1 + 0x1188) = 0;
    puVar11 = *(ulonglong **)(param_1 + 0x10d8);
    uVar15 = (longlong)*(int *)(param_1 + 0x10e0) & 0x1fffffffffffffff;
    if (puVar11 + *(int *)(param_1 + 0x10e0) < puVar11) {
      uVar15 = uVar14;
    }
    uVar17 = uVar14;
    uVar19 = uVar14;
    if (uVar15 != 0) {
      do {
        uVar3 = *puVar11;
        if (uVar17 == 0) {
LAB_141d48bdd:
          *(ulonglong *)(param_1 + 0x1188) = uVar3;
          uVar17 = uVar3;
        }
        else {
          lVar7 = *(longlong *)(uVar17 + 0x30);
          lVar8 = *(longlong *)(uVar3 + 0x30);
          if (*(float *)(lVar7 + 0x104) * 0.59 + *(float *)(lVar7 + 0x100) * 0.3 +
              *(float *)(lVar7 + 0x108) * 0.11 <
              *(float *)(lVar8 + 0x104) * 0.59 + *(float *)(lVar8 + 0x100) * 0.3 +
              *(float *)(lVar8 + 0x108) * 0.11) goto LAB_141d48bdd;
        }
        puVar11 = puVar11 + 1;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar15);
    }
  }
  FUN_141bb4300(param_2);
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1 + 0x1070,*(undefined4 *)(param_2 + 0xb),1);
  uVar6 = *(uint *)(param_2[6] + 0x180);
  if ((((uVar6 >> 3 & 1) == 0) && ((uVar6 >> 4 & 1) != 0)) && (*(int *)(param_2 + 0x11) == -1)) {
    lVar8 = (longlong)*(int *)(param_1 + 0x1138);
    lVar7 = *(longlong *)(param_2[6] + 400);
    if (*(int *)(param_1 + 0x1138) != 0) {
      local_res18[0] = **(longlong **)(param_1 + 0x1130) != lVar7;
      uVar15 = uVar14;
      uVar17 = uVar14;
      do {
        iVar13 = (int)uVar14;
        uVar15 = uVar15 + 1;
        uVar14 = (ulonglong)(iVar13 + 1);
        if ((longlong)uVar15 < lVar8) {
          plVar9 = (longlong *)(*(longlong *)(param_1 + 0x1130) + uVar15 * 8);
          do {
            if ((bool)local_res18[0] != (*plVar9 != lVar7)) break;
            uVar14 = (ulonglong)((int)uVar14 + 1);
            uVar15 = uVar15 + 1;
            plVar9 = plVar9 + 1;
          } while ((longlong)uVar15 < lVar8);
        }
        iVar20 = (int)uVar14 - iVar13;
        if (local_res18[0] != 0) {
          iVar21 = (int)uVar17;
          if (iVar21 != iVar13) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x1130) + (longlong)iVar21 * 8),
                       (void *)(*(longlong *)(param_1 + 0x1130) + (longlong)iVar13 * 8),
                       (longlong)iVar20 << 3);
          }
          uVar17 = (ulonglong)(uint)(iVar21 + iVar20);
        }
        local_res18[0] = local_res18[0] ^ 1;
      } while ((longlong)uVar15 < lVar8);
      *(int *)(param_1 + 0x1138) = (int)uVar17;
      param_2 = local_res10;
    }
  }
LAB_141d48d2a:
  puVar4 = (undefined8 *)param_2[6];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141d48d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2,1);
  return;
}



// FUNCTION 141d48d90 FUN_141d48d90 body=530 status=ok
// SIG undefined FUN_141d48d90(void)

void FUN_141d48d90(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [32];
  
  plVar3 = (longlong *)param_2[1];
  uVar10 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_68 = param_1;
  local_60 = uVar10;
  local_58 = plVar3;
  if (DAT_146ac3ac6 != '\0') {
    cVar8 = IsInRenderingThread();
    if (cVar8 != '\0') {
      uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141d14fa0(&local_68,uVar10);
      plVar3 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_58 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      goto LAB_141d48f5b;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar8 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar9 = GetCurrentThreadId();
      if (DVar9 != DAT_1468c21c0) goto LAB_141d48eea;
    }
    local_50 = param_1;
    local_48 = uVar10;
    local_40 = plVar3;
    uVar10 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_141d14fa0(&local_50,uVar10);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_40 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  else {
LAB_141d48eea:
    plVar11 = (longlong *)FUN_141d286c0(local_38,0,0xff);
    lVar6 = *plVar11;
    *(undefined8 *)(lVar6 + 0x10) = param_1;
    *(undefined8 *)(lVar6 + 0x18) = uVar10;
    *(longlong **)(lVar6 + 0x20) = plVar3;
    lVar6 = *plVar11;
    lVar7 = plVar11[2];
    lVar4 = plVar11[1];
    lVar5 = *(longlong *)(lVar6 + 0x30);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_14048a160(lVar6,lVar4,(int)lVar7,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
LAB_141d48f5b:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 141d48fb0 FUN_141d48fb0 body=276 status=ok
// SIG undefined FUN_141d48fb0(void)

void FUN_141d48fb0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  local_48 = param_1;
  uStack_40 = param_2;
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141d153b0(&local_48,uVar9);
      return;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_141d4903d;
    }
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_141d153b0(&local_38,uVar9);
    return;
  }
LAB_141d4903d:
  plVar10 = (longlong *)FUN_141d28810(local_28,0,0xff);
  lVar3 = *plVar10;
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_48;
  *(undefined4 *)(lVar3 + 0x14) = local_48._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_40;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_40._4_4_;
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 141d490d0 FUN_141d490d0 body=1043 status=ok
// SIG undefined FUN_141d490d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141d49347) */

void FUN_141d490d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *_Dst;
  longlong *plVar4;
  void *_Src;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong uStack_60;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_2 + 8);
  if ((*(char *)(param_1 + 0x1a4) == '\0') && ((*(uint *)(lVar3 + 0x1c) >> 8 & 1) == 0)) {
    return;
  }
  if ((*(uint *)(lVar3 + 0x1c) >> 4 & 1) == 0) {
    return;
  }
  uVar5 = 0;
  local_88 = param_1;
  local_78 = lVar3;
  if ((*(uint *)(lVar3 + 0x1c) >> 0x15 & 1) == 0) goto LAB_141d4936b;
  lVar3 = (longlong)*(int *)(param_1 + 0x118);
  if (*(int *)(param_1 + 0x118) != 0) {
    bVar13 = **(longlong **)(param_1 + 0x110) != param_2;
    uVar7 = uVar5;
    uVar11 = uVar5;
    do {
      iVar6 = (int)uVar7;
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
      if ((longlong)uVar5 < lVar3) {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x110) + uVar5 * 8);
        do {
          if (bVar13 != (*plVar4 != param_2)) break;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 1;
        } while ((longlong)uVar5 < lVar3);
      }
      iVar12 = (int)uVar7 - iVar6;
      if (bVar13 != false) {
        iVar10 = (int)uVar11;
        if (iVar10 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar6 * 8),
                     (longlong)iVar12 << 3);
          param_1 = local_88;
        }
        uVar11 = (ulonglong)(uint)(iVar10 + iVar12);
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar5 < lVar3);
    *(int *)(param_1 + 0x118) = (int)uVar11;
  }
  lVar3 = local_78;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x120,param_2)
  ;
  if (0 < *(int *)(param_2 + 0x80)) {
    if (*(int *)(*(longlong *)(param_2 + 8) + 0x10) == 2) {
      uStack_60 = CONCAT71(uStack_60._1_7_,1);
      if ((*(uint *)(*(longlong *)(param_2 + 8) + 0x18) & 0x40000000) != 0) goto LAB_141d4924e;
    }
    else {
LAB_141d4924e:
      uStack_60 = uStack_60 & 0xffffffffffffff00;
    }
    local_50 = (undefined1 *)0x0;
    iVar6 = *(int *)(param_2 + 0x80);
    _Src = *(void **)(param_2 + 0x78);
    local_48 = CONCAT44(local_48._4_4_,iVar6);
    local_68 = param_2;
    if (iVar6 == 0) {
      local_48 = 0;
    }
    else {
      TArray<unsigned_int,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
                (local_58,iVar6,0);
      if (_Src == (void *)0x0) {
        _Src = (void *)(param_2 + 0x70);
      }
      _Dst = local_58;
      if (local_50 != (undefined1 *)0x0) {
        _Dst = local_50;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 << 2);
    }
    lVar9 = local_88;
    iVar6 = *(int *)(local_88 + 0x178);
    lVar8 = (longlong)iVar6;
    *(int *)(local_88 + 0x178) = iVar6 + 1;
    if (*(int *)(local_88 + 0x17c) < iVar6 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(local_88 + 0x170,iVar6);
    }
    lVar2 = *(longlong *)(lVar9 + 0x170);
    *(longlong *)(lVar2 + lVar8 * 0x28) = local_68;
    lVar9 = lVar2 + lVar8 * 0x28;
    *(undefined1 *)(lVar2 + 8 + lVar8 * 0x28) = (undefined1)uStack_60;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    if (local_50 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar9 + 0x10),local_58,4);
    }
    if (*(longlong *)(lVar9 + 0x18) != 0) {
      FMemory::Free();
    }
    *(undefined1 **)(lVar9 + 0x18) = local_50;
    local_50 = (undefined1 *)0x0;
    *(undefined4 *)(lVar9 + 0x20) = (undefined4)local_48;
    *(undefined4 *)(lVar9 + 0x24) = local_48._4_4_;
    local_48 = 0;
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  if (*(int *)(param_2 + 0x84) != 0) {
    TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(param_2 + 0x70,0);
  }
LAB_141d4936b:
  uVar5 = 0;
  if ((*(uint *)(lVar3 + 0x1c) >> 0x16 & 1) != 0) {
    lVar8 = (longlong)*(int *)(local_88 + 0x28);
    lVar9 = local_88;
    if (*(int *)(local_88 + 0x28) != 0) {
      bVar13 = **(longlong **)(local_88 + 0x20) != param_2;
      uVar7 = uVar5;
      uVar11 = uVar5;
      do {
        iVar6 = (int)uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)(iVar6 + 1);
        if ((longlong)uVar5 < lVar8) {
          plVar4 = (longlong *)(*(longlong *)(lVar9 + 0x20) + uVar5 * 8);
          do {
            if (bVar13 != (*plVar4 != param_2)) break;
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar5 = uVar5 + 1;
            plVar4 = plVar4 + 1;
          } while ((longlong)uVar5 < lVar8);
        }
        iVar12 = (int)uVar7 - iVar6;
        if (bVar13 != false) {
          iVar10 = (int)uVar11;
          if (iVar10 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar9 + 0x20) + (longlong)iVar10 * 8),
                       (void *)(*(longlong *)(lVar9 + 0x20) + (longlong)iVar6 * 8),
                       (longlong)iVar12 << 3);
            lVar9 = local_88;
          }
          uVar11 = (ulonglong)(uint)(iVar10 + iVar12);
        }
        bVar13 = (bool)(bVar13 ^ 1);
      } while ((longlong)uVar5 < lVar8);
      *(int *)(lVar9 + 0x28) = (int)uVar11;
      lVar3 = local_78;
    }
    local_78 = *(undefined8 *)(lVar3 + 0xc0);
    uStack_60 = *(undefined8 *)(lVar3 + 200);
    uStack_6c = *(undefined4 *)(lVar3 + 0xd8);
    local_50 = (undefined1 *)CONCAT44(local_50._4_4_,uStack_6c);
    if ((*(int *)(lVar3 + 0x10) != 2) || (lVar8 = 400, (*(uint *)(lVar3 + 0x18) & 0x40000000) != 0))
    {
      lVar8 = 0x180;
    }
    iVar6 = *(int *)(lVar8 + 8 + lVar9);
    plVar4 = (longlong *)(lVar8 + lVar9);
    uStack_70 = (undefined4)uStack_60;
    *(int *)(plVar4 + 1) = iVar6 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar6 + 1) {
      local_68 = local_78;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar6);
    }
    puVar1 = (undefined8 *)(*plVar4 + (longlong)iVar6 * 0x10);
    *puVar1 = local_78;
    puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  }
  return;
}



// FUNCTION 141d494f0 FUN_141d494f0 body=603 status=ok
// SIG undefined FUN_141d494f0(void)

void FUN_141d494f0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 uVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  lVar3 = *(longlong *)(param_2 + 0x640);
  if (lVar3 != 0) {
    uVar7 = (**(code **)(*param_1 + 0xe0))();
    FUN_142391930(uVar7);
    uVar7 = *(undefined8 *)(lVar3 + 0x140);
    plVar12 = (longlong *)0x0;
    *(undefined8 *)(param_2 + 0x640) = 0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      uVar4 = *(undefined8 *)(lVar3 + 0x140);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      FUN_141d49750(param_1,uVar4);
      LOCK();
      *(int *)(param_2 + 0x35c) = *(int *)(param_2 + 0x35c) + -1;
      UNLOCK();
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x140);
      pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar9 = TlsGetValue(*pDVar8);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(0x18);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          plVar9[1] = 0;
          *(undefined4 *)(plVar9 + 2) = 0;
          plVar12 = plVar9;
        }
        TlsSetValue(*pDVar8,plVar12);
        plVar9 = plVar12;
      }
      plVar12 = (longlong *)plVar9[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar9;
        if (plVar12 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
          plVar9[1] = lVar10;
          if (lVar10 == 0) {
            puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar9[1] = (longlong)puVar11;
            lVar10 = 0x1f;
            do {
              puVar2 = puVar11 + 0x20;
              *puVar11 = puVar2;
              lVar10 = lVar10 + -1;
              puVar11 = puVar2;
            } while (lVar10 != 0);
            *puVar2 = 0;
          }
          plVar12 = (longlong *)plVar9[1];
          iVar13 = 0x20;
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          iVar13 = 0x20;
          plVar9[1] = (longlong)plVar12;
          *(undefined4 *)(plVar9 + 2) = 0x20;
          *plVar9 = 0;
        }
      }
      else {
        iVar13 = (int)plVar9[2];
      }
      plVar9[1] = *plVar12;
      *(int *)(plVar9 + 2) = iVar13 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_144e486d0;
      *(undefined1 *)(plVar12 + 5) = 0;
      plVar12[6] = 0;
      plVar12[3] = lVar3;
      plVar12[4] = param_2 + 0x35c;
      plVar12[2] = (longlong)param_1;
      lVar3 = plVar12[6];
      piVar1 = (int *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar3;
      FUN_14048a160(plVar12,0,0xff,1,0,0);
      if (lVar3 != 0) {
        LOCK();
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
    BeginCleanup(uVar7);
  }
  return;
}



// FUNCTION 141d49750 FUN_141d49750 body=1024 status=ok
// SIG undefined FUN_141d49750(void)

void FUN_141d49750(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  void *_Dst;
  longlong *plVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  int iVar25;
  
  FLODSceneTree::UpdateNodeSceneInfo(param_1 + 0x5f90,*(undefined4 *)(param_2 + 0x10),0);
  iVar25 = *(int *)(param_2 + 0xe8);
  lVar18 = (**(code **)(**(longlong **)(param_2 + 8) + 8))();
  iVar19 = *(int *)(param_1 + 0x1068) + -1;
  if (-1 < iVar19) {
    lVar22 = (longlong)iVar19;
    plVar21 = (longlong *)(lVar22 * 0x10 + *(longlong *)(param_1 + 0x1060));
    do {
      if (*plVar21 == lVar18) break;
      iVar19 = iVar19 + -1;
      plVar21 = plVar21 + -2;
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
  }
  if (iVar19 < *(int *)(param_1 + 0x1068)) {
    lVar18 = (longlong)iVar19 << 4;
    iVar20 = iVar19;
    do {
      iVar20 = iVar20 + 1;
      lVar22 = *(longlong *)(param_1 + 0x1060) + lVar18;
      lVar18 = lVar18 + 0x10;
      piVar1 = (int *)(lVar22 + 8);
      *piVar1 = *piVar1 + -1;
      iVar5 = *(int *)(lVar22 + 8);
      lVar22 = (longlong)iVar5;
      if (iVar5 != iVar25) {
        lVar24 = (longlong)iVar25;
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xfe0) + lVar22 * 8) + 0xe8) = iVar25;
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xfe0) + lVar24 * 8) + 0xe8) = iVar5;
        lVar7 = *(longlong *)(param_1 + 0xfe0);
        uVar8 = *(undefined8 *)(lVar7 + lVar22 * 8);
        *(undefined8 *)(lVar7 + lVar22 * 8) = *(undefined8 *)(lVar7 + lVar24 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xfe0) + lVar24 * 8) = uVar8;
        lVar7 = *(longlong *)(param_1 + 0xff0);
        uVar8 = *(undefined8 *)(lVar7 + lVar22 * 8);
        *(undefined8 *)(lVar7 + lVar22 * 8) = *(undefined8 *)(lVar7 + lVar24 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xff0) + lVar24 * 8) = uVar8;
        lVar9 = *(longlong *)(param_1 + 0x1000);
        puVar23 = (undefined8 *)(lVar9 + lVar22 * 0x28);
        uVar13 = *puVar23;
        uVar14 = puVar23[1];
        puVar23 = (undefined8 *)(lVar9 + lVar22 * 0x28);
        uVar8 = puVar23[4];
        puVar2 = (undefined8 *)(lVar9 + lVar24 * 0x28);
        uVar15 = puVar2[1];
        lVar7 = lVar24 * 0x28;
        uVar16 = puVar23[2];
        uVar17 = puVar23[3];
        *puVar23 = *puVar2;
        puVar23[1] = uVar15;
        puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar7);
        uVar15 = puVar2[1];
        puVar23[2] = *puVar2;
        puVar23[3] = uVar15;
        puVar23[4] = *(undefined8 *)(lVar9 + 0x20 + lVar7);
        lVar9 = *(longlong *)(param_1 + 0x1000);
        *(undefined8 *)(lVar9 + lVar7) = uVar13;
        ((undefined8 *)(lVar9 + lVar7))[1] = uVar14;
        puVar23 = (undefined8 *)(lVar9 + 0x10 + lVar7);
        *puVar23 = uVar16;
        puVar23[1] = uVar17;
        *(undefined8 *)(lVar9 + 0x20 + lVar7) = uVar8;
        lVar7 = *(longlong *)(param_1 + 0x1010);
        uVar6 = *(undefined4 *)(lVar7 + lVar22 * 4);
        *(undefined4 *)(lVar7 + lVar22 * 4) = *(undefined4 *)(lVar7 + lVar24 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x1010) + lVar24 * 4) = uVar6;
        lVar7 = *(longlong *)(param_1 + 0x1020);
        uVar8 = *(undefined8 *)(lVar7 + lVar22 * 8);
        *(undefined8 *)(lVar7 + lVar22 * 8) = *(undefined8 *)(lVar7 + lVar24 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x1020) + lVar24 * 8) = uVar8;
        lVar7 = *(longlong *)(param_1 + 0x1030);
        uVar4 = *(undefined1 *)(lVar7 + lVar22);
        *(undefined1 *)(lVar7 + lVar22) = *(undefined1 *)(lVar7 + lVar24);
        *(undefined1 *)(lVar24 + *(longlong *)(param_1 + 0x1030)) = uVar4;
        lVar7 = *(longlong *)(param_1 + 0x1050);
        uVar6 = *(undefined4 *)(lVar7 + lVar22 * 4);
        *(undefined4 *)(lVar7 + lVar22 * 4) = *(undefined4 *)(lVar7 + lVar24 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x1050) + lVar24 * 4) = uVar6;
        lVar7 = *(longlong *)(param_1 + 0x1040);
        puVar23 = (undefined8 *)(lVar22 * 0x1c + lVar7);
        lVar24 = lVar24 * 0x1c;
        uVar13 = *puVar23;
        uVar14 = puVar23[1];
        uVar8 = puVar23[2];
        uVar6 = *(undefined4 *)(puVar23 + 3);
        puVar3 = (undefined4 *)(lVar7 + lVar24);
        uVar10 = puVar3[1];
        uVar11 = puVar3[2];
        uVar12 = puVar3[3];
        *(undefined4 *)puVar23 = *puVar3;
        *(undefined4 *)((longlong)puVar23 + 4) = uVar10;
        *(undefined4 *)(puVar23 + 1) = uVar11;
        *(undefined4 *)((longlong)puVar23 + 0xc) = uVar12;
        puVar23[2] = *(undefined8 *)(lVar7 + 0x10 + lVar24);
        *(undefined4 *)(puVar23 + 3) = *(undefined4 *)(lVar7 + 0x18 + lVar24);
        lVar22 = *(longlong *)(param_1 + 0x1040);
        *(undefined8 *)(lVar22 + lVar24) = uVar13;
        ((undefined8 *)(lVar22 + lVar24))[1] = uVar14;
        *(undefined8 *)(lVar22 + 0x10 + lVar24) = uVar8;
        *(undefined4 *)(lVar22 + 0x18 + lVar24) = uVar6;
        iVar25 = iVar5;
      }
    } while (iVar20 < *(int *)(param_1 + 0x1068));
  }
  lVar18 = *(longlong *)(param_1 + 0x1060);
  iVar25 = 0;
  if (0 < iVar19) {
    iVar25 = *(int *)(lVar18 + -8 + (longlong)iVar19 * 0x10);
  }
  _Dst = (void *)((longlong)iVar19 * 0x10 + lVar18);
  if (*(int *)((longlong)_Dst + 8) == iVar25) {
    iVar25 = *(int *)(param_1 + 0x1068);
    iVar20 = (iVar25 - iVar19) + -1;
    if (iVar20 != 0) {
      _guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((longlong)(iVar19 + 1) * 0x10 + lVar18),(longlong)iVar20 << 4);
      iVar25 = *(int *)(param_1 + 0x1068);
    }
    *(int *)(param_1 + 0x1068) = iVar25 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x1060);
  }
  *(int *)(param_1 + 0xfe8) = *(int *)(param_1 + 0xfe8) + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
  *(int *)(param_1 + 0xff8) = *(int *)(param_1 + 0xff8) + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
  *(int *)(param_1 + 0x1008) = *(int *)(param_1 + 0x1008) + -1;
  TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink();
  *(int *)(param_1 + 0x1018) = *(int *)(param_1 + 0x1018) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  *(int *)(param_1 + 0x1028) = *(int *)(param_1 + 0x1028) + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
  *(int *)(param_1 + 0x1038) = *(int *)(param_1 + 0x1038) + -1;
  TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
  *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  *(int *)(param_1 + 0x1048) = *(int *)(param_1 + 0x1048) + -1;
  TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink();
  *(undefined4 *)(param_2 + 0xe8) = 0x7fffffff;
  if (((*(longlong *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x10) != 0)) &&
     (*(int *)(*(longlong *)(param_2 + 8) + 0x10) - 1U < 2)) {
    lVar18 = FMotionBlurInfoData::FindMBInfoIndex(param_1 + 0x5ee0,*(undefined4 *)(param_2 + 0x10));
    if (lVar18 != 0) {
      *(undefined1 *)(lVar18 + 0x90) = 0;
      *(undefined8 *)(lVar18 + 8) = 0;
    }
  }
  FUN_141d4fc40(param_2);
  if (*(int *)(param_2 + 0x2c) != 0) {
    FLODSceneTree::RemoveChildNode
              (*(longlong *)(param_2 + 0xd8) + 0x5f90,*(undefined4 *)(param_2 + 0x2c),param_2);
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  FUN_141d48230(param_2,1);
  FUN_141d490d0(param_1 + 0x15f0,param_2);
  puVar23 = *(undefined8 **)(param_2 + 8);
  if (puVar23 != (undefined8 *)0x0) {
    (**(code **)*puVar23)(puVar23,1);
  }
  return;
}



// FUNCTION 141d49b50 FUN_141d49b50 body=342 status=ok
// SIG undefined FUN_141d49b50(void)

void FUN_141d49b50(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  uStack_40 = *(longlong *)(param_2 + 0x310);
  if (uStack_40 != 0) {
    local_48 = param_1;
    if (DAT_146ac3ac6 != '\0') {
      cVar7 = IsInRenderingThread();
      if (cVar7 != '\0') {
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d15cb0(&local_48,uVar9);
        *(undefined8 *)(param_2 + 0x310) = 0;
        return;
      }
    }
    if (DAT_146ac3ac5 == '\0') {
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar7 != '\0') || (DAT_1468c21ae == '\0')) {
LAB_141d49bdc:
        local_38 = (undefined4)local_48;
        uStack_34 = local_48._4_4_;
        uStack_30 = (undefined4)uStack_40;
        uStack_2c = uStack_40._4_4_;
        uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_141d15cb0(&local_38,uVar9);
        *(undefined8 *)(param_2 + 0x310) = 0;
        return;
      }
      DVar8 = GetCurrentThreadId();
      if (DVar8 == DAT_1468c21c0) goto LAB_141d49bdc;
    }
    plVar10 = (longlong *)FUN_141d27ee0(local_28,0,0xff);
    lVar3 = *plVar10;
    *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_48;
    *(undefined4 *)(lVar3 + 0x14) = local_48._4_4_;
    *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_40;
    *(undefined4 *)(lVar3 + 0x1c) = uStack_40._4_4_;
    lVar3 = *plVar10;
    lVar6 = plVar10[2];
    lVar4 = plVar10[1];
    lVar5 = *(longlong *)(lVar3 + 0x28);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
    *(undefined8 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 141d49cc0 FUN_141d49cc0 body=602 status=ok
// SIG undefined FUN_141d49cc0(void)

void FUN_141d49cc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  int local_res8 [2];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  char local_50;
  char cStack_4f;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + 0x1978);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  plVar8 = (longlong *)0x0;
  plVar9 = plVar8;
  if (local_res8[0] != -1) {
    plVar9 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x18);
  }
  plVar7 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 != (longlong *)0x0) {
    lVar4 = *plVar7;
    *(int *)(lVar4 + 0x8d8) = *(int *)(lVar4 + 0x8d8) + -1;
    if (*(int *)(lVar4 + 0x8d8) < 1) {
      plVar9 = (longlong *)(param_1 + 0x19c8);
      iVar2 = *(int *)(param_1 + 0x19f0);
      puStack_38 = (uint *)(param_1 + 0x19d8);
      local_88 = 0;
      uStack_84 = 1;
      local_78._4_4_ = 0;
      uStack_70 = 0;
      if (iVar2 != 0) {
        puVar10 = *(uint **)(param_1 + 0x19e8);
        if (*(uint **)(param_1 + 0x19e8) == (uint *)0x0) {
          puVar10 = puStack_38;
        }
        uVar3 = *puVar10;
        plVar7 = plVar8;
        while (uVar3 == 0) {
          iVar6 = (int)plVar7;
          uStack_70 = (int)plVar8 + 0x20;
          plVar8 = (longlong *)(ulonglong)uStack_70;
          local_88 = iVar6 + 1;
          plVar7 = (longlong *)(ulonglong)local_88;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141d49ded;
          uVar3 = puVar10[(longlong)iVar6 + 1];
        }
        uStack_84 = -uVar3 & uVar3;
        iVar6 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        local_78._4_4_ = (uStack_70 - iVar6) + 0x1f;
        if (iVar2 < local_78._4_4_) {
LAB_141d49ded:
          local_78._4_4_ = iVar2;
        }
      }
      auStack_30._4_4_ = local_78._4_4_;
      auStack_30._0_4_ = 0xffffffff;
      auStack_30._8_4_ = uStack_70;
      auStack_30._12_4_ = iStack_6c;
      uStack_40 = local_88;
      uStack_3c = uStack_84;
      local_50 = '\0';
      cStack_4f = '\0';
      local_20._0_4_ = SUB84(plVar9,0);
      local_20._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
      uStack_70 = 0xffffffff;
      iStack_6c = local_78._4_4_;
      uStack_80 = local_88;
      uStack_7c = uStack_84;
      local_68._8_4_ = (undefined4)local_20;
      local_68._0_8_ = auStack_30._8_8_;
      local_68._12_4_ = local_20._4_4_;
      bVar5 = local_78._4_4_ < *(int *)(param_1 + 0x19f0);
      local_58 = plVar9;
      local_48 = plVar9;
      local_20 = plVar9;
      local_78 = puStack_38;
      if (bVar5) {
        do {
          if (*(longlong *)(*plVar9 + 8 + (longlong)iStack_6c * 0x18) == param_3) {
            TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
            ::Remove(local_68._8_8_);
            local_50 = '\x01';
          }
          uStack_70 = uStack_70 & ~uStack_7c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        } while (iStack_6c < (int)local_78[6]);
        if ((local_50 != '\0') && (cStack_4f != '\0')) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
        }
      }
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(plVar1,param_3);
      plVar1 = (longlong *)(lVar4 + 0x890);
      (**(code **)(*plVar1 + 0x30))(plVar1);
      *plVar1 = (longlong)&PTR_FUN_144e48660;
      if (*(longlong *)(lVar4 + 0x8d0) != 0) {
        FMemory::Free();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar4 + 0x8c8);
      FUN_141edd2d0(plVar1);
      FMemory::operator_delete(lVar4,0x8e0);
    }
  }
  return;
}



// FUNCTION 141d49f20 RemoveStaticMeshes body=96 status=ok
// SIG undefined RemoveStaticMeshes(void)

void FPrimitiveSceneInfo::RemoveStaticMeshes(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  for (iVar2 = *(int *)(param_1 + 0x38); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_141d5bc20(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x30),0);
  }
  return;
}



// FUNCTION 141d49f80 FUN_141d49f80 body=795 status=ok
// SIG undefined FUN_141d49f80(void)

void FUN_141d49f80(longlong param_1,longlong param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  longlong local_res8;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1950);
  local_res8 = param_1;
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar3 = local_res8;
  lVar10 = (longlong)*(int *)(param_1 + 0x1948);
  if (*(int *)(param_1 + 0x1948) != 0) {
    iVar15 = 0;
    bVar16 = **(longlong **)(local_res8 + 0x1940) != param_2;
    lVar14 = 0;
    iVar12 = 0;
    do {
      lVar14 = lVar14 + 1;
      iVar13 = iVar12 + 1;
      if (lVar14 < lVar10) {
        plVar11 = (longlong *)(*(longlong *)(lVar3 + 0x1940) + lVar14 * 8);
        do {
          if (bVar16 != (*plVar11 != param_2)) break;
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 1;
          plVar11 = plVar11 + 1;
        } while (lVar14 < lVar10);
      }
      if (bVar16 != false) {
        if (iVar15 != iVar12) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar3 + 0x1940) + (longlong)iVar15 * 8),
                     (void *)(*(longlong *)(lVar3 + 0x1940) + (longlong)iVar12 * 8),
                     (longlong)(iVar13 - iVar12) << 3);
        }
        iVar15 = iVar15 + (iVar13 - iVar12);
      }
      bVar16 = (bool)(bVar16 ^ 1);
      iVar12 = iVar13;
    } while (lVar14 < lVar10);
    *(int *)(lVar3 + 0x1948) = iVar15;
    param_1 = local_res8;
  }
  LeaveCriticalSection(lpCriticalSection);
  lVar3 = *(longlong *)(param_2 + 0x2e8);
  plVar11 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x2e8) = 0;
  lVar10 = *(longlong *)(param_2 + 0x2f0);
  *(undefined8 *)(param_2 + 0x2f0) = 0;
  if (lVar3 != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      local_50 = param_1;
      local_48 = lVar3;
      local_40 = lVar10;
      FUN_141d2a490(&local_50,2,&local_res8);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar11 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar11);
        plVar8 = plVar11;
      }
      plVar11 = (longlong *)plVar8[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar8;
        if (plVar11 == (longlong *)0x0) {
          lVar14 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = lVar14;
          if (lVar14 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar9;
            lVar14 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar14 = lVar14 + -1;
              puVar9 = puVar2;
            } while (lVar14 != 0);
            *puVar2 = 0;
          }
          plVar11 = (longlong *)plVar8[1];
          iVar12 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar12 = 0x20;
          plVar8[1] = (longlong)plVar11;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar12 = (int)plVar8[2];
      }
      plVar8[1] = *plVar11;
      *(int *)(plVar8 + 2) = iVar12 + -1;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_144e487a0;
      *(undefined1 *)(plVar11 + 5) = 0;
      plVar11[6] = 0;
      plVar11[2] = param_1;
      plVar11[3] = lVar3;
      plVar11[4] = lVar10;
      lVar3 = plVar11[6];
      piVar1 = (int *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a160(plVar11,0,0xff,1,0);
      if (lVar3 != 0) {
        LOCK();
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d4a2a0 FUN_141d4a2a0 body=2470 status=ok
// SIG undefined FUN_141d4a2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d4a2a0(longlong param_1,longlong param_2,longlong **param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_268 [32];
  longlong **local_248;
  float local_240;
  float local_238;
  float local_230;
  float local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  uint local_208;
  undefined4 local_200;
  byte local_1f8;
  char local_1f7;
  char local_1f6;
  undefined1 local_1f5;
  char local_1f4;
  uint local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  longlong *local_1d8;
  int local_1d0;
  int local_1cc;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong **local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  int local_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  longlong local_190 [4];
  undefined8 local_170;
  longlong local_168;
  longlong local_160 [2];
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
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
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar20 = 0;
  local_1f0 = 0;
  local_1e0 = 0;
  if ((*(uint *)(param_1 + 0x3c) & 0x1000) == 0) {
    return;
  }
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    return;
  }
  plVar10 = *(longlong **)(param_1 + 0x10);
  uVar19 = (ulonglong)*(uint *)(param_1 + 0x18);
  uVar11 = uVar20;
  do {
    lVar14 = *plVar10;
    plVar10 = plVar10 + 1;
    uVar12 = (uint)uVar11 + 1;
    if (*(char *)(lVar14 + 0x1a98) == '\0') {
      uVar12 = (uint)uVar11;
    }
    uVar11 = (ulonglong)uVar12;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  if ((int)uVar12 < 1) {
    return;
  }
  lVar14 = (longlong)*(int *)(param_1 + 200);
  bVar17 = 0;
  local_1f8 = 0;
  if (0 < lVar14) {
    pcVar7 = (char *)(*(longlong *)(param_1 + 0xc0) + 0x1203);
    do {
      if ((bVar17 != 0) || (*pcVar7 != '\0')) {
        bVar17 = 1;
      }
      pcVar7 = pcVar7 + 0x30d0;
      lVar14 = lVar14 + -1;
      local_1f8 = bVar17;
    } while (lVar14 != 0);
  }
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1150);
  if ((lVar14 == 0) ||
     (((*(longlong *)(lVar14 + 8) == 0 && (*(char *)(lVar14 + 0x24) == '\0')) ||
      (local_1f7 = '\x01', *(char *)(lVar14 + 0x29) != '\0')))) {
    local_1f7 = '\0';
  }
  local_1b8 = param_3;
  local_170 = param_4;
  local_168 = param_1;
  local_1f4 = FUN_141b192e0(*(longlong *)(param_1 + 8),param_1 + 0x10);
  local_1f5 = 0;
  if (local_1f4 != '\0') {
    local_1e8 = 0;
    local_190[0] = 0;
    local_190[1] = 0;
    FScopedGPUStatEvent::Begin(local_190,param_2,&DAT_146a81780,&local_1e8);
    FDistanceFieldAOParameters::FDistanceFieldAOParameters(local_190 + 2);
    if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1150) + 0x27) != '\0') &&
        (DAT_146a0e8d0 == 0)) &&
       ((cVar4 = FUN_141b19380(param_1), cVar4 != '\0' && ((*(uint *)(param_1 + 0x38) & 0x800) != 0)
        ))) {
      local_238 = (float)((uint)local_238 & 0xffffff00);
      local_240 = (float)((uint)local_240 & 0xffffff00);
      local_248 = param_3;
      local_1f5 = FUN_141b125b0(param_1,param_2,local_190 + 2,param_4);
    }
    if (local_190[0] != 0) {
      FScopedGPUStatEvent::End(local_190);
    }
  }
  local_1a8 = FSceneRenderTargets::Get(param_2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a83978) && (_Init_thread_header(&DAT_146a83978), DAT_146a83978 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar10 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    uVar11 = uVar20;
    if (plVar10 != (longlong *)0x0) {
      uVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    DAT_146a83970 = uVar11;
    _Init_thread_footer(&DAT_146a83978);
  }
  lVar14 = (longlong)*(int *)(param_1 + 0x18);
  local_1cc = *(int *)(DAT_146a83970 + 4);
  if (0 < lVar14) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    uVar11 = uVar20;
    do {
      lVar15 = *plVar10;
      plVar10 = plVar10 + 1;
      uVar12 = (uint)uVar11 + 1;
      if (*(char *)(lVar15 + 0x1a98) == '\0') {
        uVar12 = (uint)uVar11;
      }
      uVar11 = (ulonglong)uVar12;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if ((((0 < (int)uVar12) &&
         (cVar4 = FUN_141d381a0(*(undefined4 *)(*(longlong *)(param_1 + 8) + 8)), cVar4 != '\0')) &&
        (*(int *)(*(longlong *)(param_1 + 8) + 0x1218) != 0)) &&
       (local_1f6 = '\x01', (*(uint *)(param_1 + 0x38) & 0x2000000) != 0)) goto LAB_141d4a510;
  }
  local_1f6 = '\0';
LAB_141d4a510:
  lVar14 = (longlong)*(int *)(param_1 + 200);
  if (0 < lVar14) {
    local_1c8 = 0;
    do {
      lVar15 = local_1c8;
      bVar21 = false;
      lVar18 = *(longlong *)(param_1 + 0xc0) + local_1c8;
      if (*(char *)(lVar18 + 0x1a98) != '\0') {
        local_1e8 = lVar14;
        if ((((*(uint *)(*(longlong *)(lVar18 + 0x10) + 0x28) & 0x8000000) != 0) &&
            (*(longlong *)(lVar18 + 0x18) != 0)) &&
           ((0 < *(int *)(DAT_146a81068 + 4) &&
            (1.0 < *(float *)(lVar18 + 0x17c4) || *(float *)(lVar18 + 0x17c4) == 1.0)))) {
          uVar5 = FUN_14274f980(lVar18);
          cVar4 = IsAnyForwardShadingEnabled(uVar5);
          bVar21 = cVar4 == '\0';
        }
        local_1d8 = DAT_1464c3318;
        if (DAT_1464c3318 != (longlong *)0x0) {
          (**(code **)(*DAT_1464c3318 + 0x28))();
        }
        if (bVar21) {
          FUN_141d4ac50(param_2,lVar18,&local_1d8,local_170);
        }
        local_248 = &local_1d8;
        cVar4 = FUN_141c28d20(param_1,param_2,lVar18,0);
        if (((local_1f7 != '\0') || (local_1f4 != '\0')) ||
           ((local_1f6 != '\0' || ((bVar21 || (bVar21 = false, cVar4 != '\0')))))) {
          bVar21 = true;
        }
        if (bVar21) {
          local_1c0 = 0;
          local_160[0] = 0;
          local_160[1] = 0;
          FScopedGPUStatEvent::Begin(local_160,param_2,&DAT_146a81770,&local_1c0);
          iVar6 = *(int *)(lVar18 + 0x2fa0);
          lVar14 = *(longlong *)(lVar18 + 0x3090);
          local_150 = &DAT_146a51f90;
          iVar13 = *(int *)(lVar18 + 0x2fa4);
          local_148 = 0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar14 + 0x38,&local_1d0,&local_150);
          if (local_1d0 == -1) {
            lVar15 = 0;
          }
          else {
            lVar15 = (longlong)local_1d0 * 0x20 + *(longlong *)(lVar14 + 0x38);
          }
          plVar10 = (longlong *)(lVar15 + 0x10);
          if (lVar15 == 0) {
            plVar10 = (longlong *)0x0;
          }
          local_230 = (float)CONCAT31(local_230._1_3_,local_1f5);
          lVar15 = *plVar10;
          local_238 = (float)CONCAT31(local_238._1_3_,local_1f4);
          local_240 = (float)CONCAT31(local_240._1_3_,local_1f7);
          local_248 = (longlong **)CONCAT71(local_248._1_7_,local_1f8);
          if (local_1cc == 1) {
            lVar14 = FUN_141d0b5e0();
          }
          else {
            lVar14 = FUN_141d0c3b0(lVar14,0 < iVar6,0 < iVar13,*local_1b8 != (longlong *)0x0);
          }
          lVar3 = local_1a8;
          bVar17 = local_1f8;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_ec = 0x26;
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
          local_248 = (longlong **)CONCAT71(local_248._1_7_,1);
          local_1b0 = lVar14;
          FUN_141cdeb70(local_1a8,param_2,(uint)local_1f8 * 2,0x21);
          FUN_14049afe0(param_2,&local_138);
          if (bVar17 == 0) {
            iVar6 = FUN_141d35e10();
            if ((iVar6 == 2) || (DAT_146a0e8d8 != 0)) {
              local_108 = FUN_1404a0ce0();
            }
            else {
              uVar5 = FSceneRenderTargets::GetSceneColorFormat(lVar3);
              cVar4 = FUN_141c917b0(uVar5);
              if (cVar4 == '\0') {
                local_108 = FUN_141b33400();
              }
              else {
                local_108 = FUN_141b9d480();
              }
            }
          }
          else {
            local_108 = FUN_141b9d480();
          }
          uStack_100 = FUN_140985530();
          local_f8 = FUN_1409853f0();
          local_138 = DAT_1464c2720;
          if (lVar15 == 0) {
            local_1f0 = (uint)uVar20 | 1;
            uVar20 = (ulonglong)local_1f0;
            uStack_130 = 0;
            local_190[0] = 0;
          }
          else {
            lVar3 = *(longlong *)(lVar15 + 0x48);
            if (*(char *)(lVar3 + 0x28) == '\0') {
              FUN_1419f3850(lVar3);
            }
            uStack_130 = *(undefined8 *)(lVar3 + 0x38);
          }
          uVar8 = 0;
          if ((uVar20 & 1) != 0) {
            local_1f0 = (uint)uVar20 & 0xfffffffe;
            uVar20 = (ulonglong)local_1f0;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_190);
          }
          if (lVar14 == 0) {
            local_1f0 = (uint)uVar20 | 2;
            uVar20 = (ulonglong)local_1f0;
            local_190[2] = 0;
          }
          else {
            lVar14 = *(longlong *)(lVar14 + 0x48);
            if (*(char *)(lVar14 + 0x28) == '\0') {
              FUN_1419f3850(lVar14);
            }
            uVar8 = *(undefined8 *)(lVar14 + 0x40);
          }
          local_118 = uVar8;
          if ((uVar20 & 2) != 0) {
            local_1f0 = (uint)uVar20 & 0xfffffffd;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_190 + 2);
          }
          local_ec = local_ec & 0xffffffff00000000;
          FUN_141ed6ac0(param_2,&local_138,2,1);
          local_1e0 = *(undefined4 *)(lVar18 + 0x1aa0);
          uVar5 = *(undefined4 *)(lVar18 + 0x1aac);
          uVar1 = *(undefined4 *)(lVar18 + 0x1aa8);
          puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar2 = *(undefined4 *)(lVar18 + 0x1aa4);
          puVar9 = puVar16 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar9 = puVar16 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar9;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar16;
          *(undefined8 **)(param_2 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *(undefined4 *)((longlong)puVar16 + 0x14) = uVar2;
          *puVar16 = &PTR_LAB_143f59420;
          *(undefined4 *)(puVar16 + 2) = local_1e0;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar1;
          *(undefined4 *)(puVar16 + 4) = uVar5;
          *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
          iVar6 = *(int *)(DAT_146a810d8 + 4);
          if (0 < iVar6) {
            puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar9 = puVar16 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
              puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar9 = puVar16 + 3;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar9;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar16;
            *(undefined8 **)(param_2 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_144dc9c60;
            *(int *)(puVar16 + 2) = iVar6;
          }
          local_248 = local_1b8;
          FUN_141d0d7f0(local_1b0,param_2,lVar18);
          local_200 = 1;
          local_218 = *(undefined8 *)(local_1a8 + 0x378);
          if (local_1f8 == 0) {
            local_198 = *(int *)(lVar18 + 0x1aa8) - *(int *)(lVar18 + 0x1aa0);
            iStack_194 = *(int *)(lVar18 + 0x1aac) - *(int *)(lVar18 + 0x1aa4);
            local_220 = CONCAT44(iStack_194,local_198);
            local_238 = (float)*(int *)(lVar18 + 0x1aa4);
            local_240 = (float)*(int *)(lVar18 + 0x1aa0);
            iVar13 = iStack_194;
            iVar6 = local_198;
          }
          else {
            local_1a0 = *(int *)(lVar18 + 0x1aa8) - *(int *)(lVar18 + 0x1aa0);
            iStack_19c = *(int *)(lVar18 + 0x1aac) - *(int *)(lVar18 + 0x1aa4);
            local_220 = CONCAT44(iStack_19c,local_1a0);
            local_238 = 0.0;
            local_240 = 0.0;
            iVar13 = iStack_19c;
            iVar6 = local_1a0;
          }
          local_230 = (float)iVar6;
          local_228 = (float)iVar13;
          local_208 = (uint)(local_1f8 != 0);
          local_248 = (longlong **)CONCAT44(local_248._4_4_,local_228);
          local_210 = lVar15;
          DrawRectangle(param_2);
          if (0 < *(int *)(DAT_146a810d8 + 4)) {
            puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar9 = puVar16 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
              puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar9 = puVar16 + 3;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar9;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar16;
            *(undefined8 **)(param_2 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_144dc9c60;
            *(undefined4 *)(puVar16 + 2) = 0;
          }
          param_1 = local_168;
          FUN_141d71a00(local_168,param_2);
          if (local_160[0] != 0) {
            FScopedGPUStatEvent::End(local_160);
          }
          uVar20 = (ulonglong)local_1f0;
          lVar14 = local_1e8;
          lVar15 = local_1c8;
        }
        if (local_1d8 != (longlong *)0x0) {
          (**(code **)(*local_1d8 + 0x30))();
        }
      }
      local_1c8 = lVar15 + 0x30d0;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 141d4ac50 FUN_141d4ac50 body=1810 status=ok
// SIG undefined FUN_141d4ac50(void)

void FUN_141d4ac50(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined1 local_118 [8];
  longlong *local_110;
  longlong local_108;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_da;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  
  FUN_141cd7760(local_a8,param_1,param_2);
  FUN_141c40530(local_118,param_1,local_78,param_2);
  lVar10 = *(longlong *)(local_108 + 0x18);
  lVar3 = operator_new(0xb0);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FSceneRenderTargets::Get(param_1);
    FUN_141ce54b0(uVar4);
    uVar4 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar3);
  }
  plVar8 = local_110;
  lVar3 = local_110[1];
  iVar2 = (int)lVar3 + 1;
  *(int *)(local_110 + 1) = iVar2;
  if (*(int *)((longlong)local_110 + 0xc) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110);
  }
  *(undefined8 *)(*plVar8 + (longlong)(int)lVar3 * 8) = uVar4;
  lVar3 = operator_new(0xb0);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar3);
  }
  plVar8 = local_110;
  lVar3 = local_110[1];
  iVar2 = (int)lVar3 + 1;
  *(int *)(local_110 + 1) = iVar2;
  if (*(int *)((longlong)local_110 + 0xc) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110);
  }
  uVar11 = 0;
  *(undefined8 *)(*plVar8 + (longlong)(int)lVar3 * 8) = uVar5;
  plVar8 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x2f10) == 0) {
    if (*(longlong *)(param_2 + 0x2e50) != 0) {
      lVar3 = operator_new(0xb0);
      if (lVar3 == 0) goto LAB_141d4adb2;
      uVar4 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar3);
      goto LAB_141d4adb4;
    }
  }
  else {
    lVar3 = operator_new(0xb0);
    if (lVar3 == 0) {
LAB_141d4adb2:
      uVar4 = 0;
    }
    else {
      uVar4 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar3);
    }
LAB_141d4adb4:
    plVar9 = local_110;
    lVar3 = local_110[1];
    iVar2 = (int)lVar3 + 1;
    *(int *)(local_110 + 1) = iVar2;
    if (*(int *)((longlong)local_110 + 0xc) < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110);
    }
    uVar11 = 1;
    *(undefined8 *)(*plVar9 + (longlong)(int)lVar3 * 8) = uVar4;
  }
  if ((*param_4 == 0) || (*(char *)(local_108 + 0x11f4) != '\0')) {
    lVar3 = operator_new(0xb0);
    if (lVar3 != 0) {
      local_128 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar3);
      goto LAB_141d4ae36;
    }
  }
  else {
    lVar3 = operator_new(0xb0);
    if (lVar3 != 0) {
      local_128 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar3);
      goto LAB_141d4ae36;
    }
  }
  local_128 = 0;
LAB_141d4ae36:
  plVar9 = local_110;
  lVar3 = local_110[1];
  iVar2 = (int)lVar3 + 1;
  *(int *)(local_110 + 1) = iVar2;
  if (*(int *)((longlong)local_110 + 0xc) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110);
  }
  *(undefined8 *)(*plVar9 + (longlong)(int)lVar3 * 8) = local_128;
  plVar9 = (longlong *)0x0;
  uStack_120 = 0;
  if (*(int *)(DAT_146a810b0 + 4) != 0) {
    plVar6 = (longlong *)operator_new(0xa8);
    plVar8 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)((longlong)plVar6 + 0xc) = 0;
      plVar6[3] = 0;
      _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar6 + 0x24),0,0x5c);
      *(undefined4 *)(plVar6 + 1) = 0;
      plVar6[2] = 0;
      *(undefined4 *)(plVar6 + 3) = 0;
      plVar6[4] = 1;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[7] = 0;
      *(undefined8 *)((longlong)plVar6 + 0x4c) = 0;
      *(undefined1 *)(plVar6 + 0xb) = 0;
      plVar6[8] = 1;
      *(undefined2 *)(plVar6 + 9) = 1;
      *(undefined4 *)((longlong)plVar6 + 0x54) = 0;
      plVar6[0xc] = (longlong)L"UnknownTexture";
      *(undefined2 *)(plVar6 + 0xd) = 1;
      plVar6[0xe] = 0;
      *(undefined4 *)(plVar6 + 0xf) = 0;
      plVar6[0x10] = 0;
      plVar6[0x11] = 0;
      plVar6[0x13] = 0;
      plVar6[0x14] = 0;
      plVar6[0x12] = 0;
      *plVar6 = (longlong)&PTR_FUN_144e48500;
      plVar8 = plVar6;
    }
    plVar6 = local_110;
    iVar2 = (int)local_110[1];
    *(int *)(local_110 + 1) = iVar2 + 1;
    if (*(int *)((longlong)local_110 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110,iVar2);
    }
    uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
    *(longlong **)(*plVar6 + (longlong)iVar2 * 8) = plVar8;
    local_138 = (longlong *)uVar4;
    (**(code **)(*plVar8 + 0x18))(plVar8,0,&local_138);
  }
  plVar7 = (longlong *)operator_new(0xe0);
  plVar6 = local_110;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    plVar7[4] = 0;
    *(undefined4 *)(plVar7 + 5) = 0;
    plVar7[6] = 0;
    *(undefined4 *)(plVar7 + 7) = 0;
    plVar7[8] = 0;
    *(undefined4 *)(plVar7 + 9) = 0;
    plVar7[10] = 1;
    plVar7[0xb] = 0;
    plVar7[0xc] = 0;
    plVar7[0xd] = 0;
    plVar7[0xe] = 1;
    *(undefined2 *)(plVar7 + 0xf) = 1;
    *(undefined8 *)((longlong)plVar7 + 0x7c) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x84) = 0;
    *(undefined1 *)(plVar7 + 0x11) = 0;
    plVar7[0x12] = (longlong)L"UnknownTexture";
    *(undefined2 *)(plVar7 + 0x13) = 1;
    plVar7[0x14] = 0;
    *(undefined4 *)(plVar7 + 0x15) = 0;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x18] = 0;
    *plVar7 = (longlong)&PTR__scalar_deleting_destructor__144e48478;
    *(undefined1 *)(plVar7 + 0x1b) = uVar11;
    plVar9 = plVar7;
  }
  iVar2 = (int)local_110[1];
  *(int *)(local_110 + 1) = iVar2 + 1;
  if (*(int *)((longlong)local_110 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110,iVar2);
  }
  *(longlong **)(*plVar6 + (longlong)iVar2 * 8) = plVar9;
  plVar6 = (longlong *)0x0;
  uStack_130 = uStack_130 & 0xffffffff00000000;
  local_138 = (longlong *)uVar4;
  (**(code **)(*plVar9 + 0x18))(plVar9,0,&local_138);
  uStack_130 = uStack_130 & 0xffffffff00000000;
  local_138 = (longlong *)uVar5;
  (**(code **)(*plVar9 + 0x18))(plVar9,1,&local_138);
  uStack_130 = uStack_130 & 0xffffffff00000000;
  local_138 = plVar8;
  (**(code **)(*plVar9 + 0x18))(plVar9,2,&local_138);
  (**(code **)(*plVar9 + 0x18))(plVar9,3,&local_128);
  uStack_e4 = (undefined4)(uStack_130 >> 0x20);
  uStack_130 = uStack_130 & 0xffffffff00000000;
  local_138._0_4_ = SUB84(plVar9,0);
  local_138._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
  local_f0 = (undefined4)local_138;
  uStack_ec = local_138._4_4_;
  uStack_e8 = 0;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    bVar1 = false;
  }
  else if ((*(int *)(param_2 + 0x1a10) == 2) && (*(int *)(DAT_146a81080 + 4) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_138 = plVar9;
  if ((lVar10 != 0) && (bVar1)) {
    local_dc = 0;
    local_da = 0;
    local_d8 = 0;
    local_d4 = *(undefined4 *)(local_108 + 0x1aa0);
    uStack_d0 = *(undefined4 *)(local_108 + 0x1aa4);
    uStack_cc = *(undefined4 *)(local_108 + 0x1aa8);
    uStack_c8 = *(undefined4 *)(local_108 + 0x1aac);
    local_c4 = *(undefined4 *)(local_108 + 0x1aa0);
    uStack_c0 = *(undefined4 *)(local_108 + 0x1aa4);
    uStack_bc = *(undefined4 *)(local_108 + 0x1aa8);
    uStack_b8 = *(undefined4 *)(local_108 + 0x1aac);
    local_b4 = 1;
    local_e0 = 2;
    lVar3 = operator_new(0x210);
    lVar10 = lVar10 + 0x11d8;
    plVar8 = plVar6;
    if (lVar3 != 0) {
      plVar8 = (longlong *)FUN_141c76350(lVar3,local_118,&local_e0,lVar10,lVar10);
    }
    plVar9 = local_110;
    iVar2 = (int)local_110[1];
    *(int *)(local_110 + 1) = iVar2 + 1;
    if (*(int *)((longlong)local_110 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110,iVar2);
    }
    *(longlong **)(*plVar9 + (longlong)iVar2 * 8) = plVar8;
    (**(code **)(*plVar8 + 0x18))(plVar8,0,&local_f0);
    (**(code **)(*plVar8 + 0x18))(plVar8,2,&local_128);
    uStack_e4 = (undefined4)(uStack_130 >> 0x20);
    uStack_130 = uStack_130 & 0xffffffff00000000;
    local_138._0_4_ = SUB84(plVar8,0);
    local_138._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
    local_f0 = (undefined4)local_138;
    uStack_ec = local_138._4_4_;
    uStack_e8 = 0;
    local_138 = plVar8;
    lVar3 = operator_new(0xb0);
    plVar8 = plVar6;
    if (lVar3 != 0) {
      plVar8 = (longlong *)FUN_141c76000(lVar3,lVar10);
    }
    plVar9 = local_110;
    iVar2 = (int)local_110[1];
    *(int *)(local_110 + 1) = iVar2 + 1;
    if (*(int *)((longlong)local_110 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110,iVar2);
    }
    *(longlong **)(*plVar9 + (longlong)iVar2 * 8) = plVar8;
    (**(code **)(*plVar8 + 0x18))(plVar8,0,&local_f0);
    uStack_e4 = (undefined4)(uStack_130 >> 0x20);
    uStack_130 = uStack_130 & 0xffffffff00000000;
    local_138._0_4_ = SUB84(plVar8,0);
    local_138._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
    local_f0 = (undefined4)local_138;
    uStack_ec = local_138._4_4_;
    local_138 = plVar8;
  }
  uStack_e8 = 0;
  lVar10 = operator_new(0xb0);
  if (lVar10 != 0) {
    plVar6 = (longlong *)FUN_141c76000(lVar10,param_3);
  }
  iVar2 = (int)local_110[1];
  *(int *)(local_110 + 1) = iVar2 + 1;
  if (*(int *)((longlong)local_110 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_110,iVar2);
  }
  *(longlong **)(*local_110 + (longlong)iVar2 * 8) = plVar6;
  (**(code **)(*plVar6 + 0x18))(plVar6,0,&local_f0);
  uStack_e4 = (undefined4)(uStack_130 >> 0x20);
  uStack_130 = uStack_130 & 0xffffffff00000000;
  local_138._0_4_ = SUB84(plVar6,0);
  local_138._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
  local_f0 = (undefined4)local_138;
  uStack_ec = local_138._4_4_;
  uStack_e8 = 0;
  local_138 = plVar6;
  uVar4 = FHardwareCursor::GetHandle(&local_f0);
  local_138 = (undefined8 *)0x0;
  uStack_130 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138,0);
  *local_138 = uVar4;
  FUN_141cf2100(local_a8,&local_138,L"ReflectionEnvironments");
  if (local_138 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_a8);
  return;
}



// FUNCTION 141d4b370 RenderTargetPoolFindFreeElement body=41 status=ok
// SIG undefined RenderTargetPoolFindFreeElement(void)

void FRendererModule::RenderTargetPoolFindFreeElement(void)

{
  FUN_141ce20b0(&PTR_PTR_1464c2560);
  return;
}



// FUNCTION 141d4b3a0 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                (*local_38 + (longlong)local_1c * 0x28 + 0x18);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141d4b4e0 FUN_141d4b4e0 body=163 status=ok
// SIG undefined FUN_141d4b4e0(void)

void FUN_141d4b4e0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xf0);
  if (param_3 < 4) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x50);
    pvVar1 = *(void **)((longlong)param_1 + 0xf0);
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
        *(void **)((longlong)param_1 + 0xf0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x50);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xf0) = uVar2;
  return;
}



// FUNCTION 141d4b590 ResizeAllocation body=164 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<256,FDefaultAllocator>::ForElementType<FPrimitiveSceneInfoCompact>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x4000);
  if (param_3 < 0x101) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 6);
    pvVar1 = *(void **)((longlong)param_1 + 0x4000);
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
        *(void **)((longlong)param_1 + 0x4000) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 6);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x4000) = uVar2;
  return;
}



// FUNCTION 141d4b640 FUN_141d4b640 body=840 status=ok
// SIG undefined FUN_141d4b640(void)

void FUN_141d4b640(longlong *param_1,undefined4 param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *local_res8;
  int local_res10;
  int local_res18;
  longlong *local_res20;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90 [2];
  int local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  int local_5c;
  int iStack_58;
  int local_54;
  
  local_res8 = (longlong *)param_1[8];
  local_res20 = param_4;
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x28))();
  }
  plVar1 = (longlong *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  iVar7 = (int)param_1[6];
  *(undefined4 *)(param_1 + 6) = param_2;
  (**(code **)(*param_1 + 8))(param_1);
  local_98 = local_res8[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  iVar9 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar8 = 0x20;
  iVar5 = iVar8;
  if (param_3 != 0) {
    iVar5 = 0x1f - iVar9;
  }
  param_3 = param_3 - 1;
  iVar9 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  if (param_3 != 0) {
    iVar8 = 0x1f - iVar9;
  }
  local_a8 = 0;
  iVar9 = (0x20U - iVar8 & ~((iVar5 << 0x1a) >> 0x1f)) + 1;
  local_90[0] = 0;
  local_90[1] = 0;
  FScopedGPUStatEvent::Begin(local_90,&DAT_146ab6e78,&DAT_146a81770,&local_a8);
  local_80 = 0;
  local_5c = 0;
  iStack_58 = 0;
  local_54 = 0;
  local_res18 = 0;
  local_6c = 0xffffffffffffffff;
  uStack_64 = 0xffffffffffffffff;
  local_7c = 0xffffffffffffffff;
  uStack_74 = 0xffffffffffffffff;
  local_a0 = (longlong)iVar7;
  if (0 < iVar7) {
    local_a8 = 0;
    do {
      iVar7 = *(int *)(*param_4 + local_a8 * 4);
      if (iVar7 != -1) {
        local_res10 = 0;
        local_54 = iVar7;
        iStack_58 = local_res18;
        do {
          iVar7 = 0;
          local_80 = local_res10;
          if (0 < iVar9) {
            do {
              puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
              uVar2 = *(undefined8 *)(param_1[8] + 0x10);
              plVar1 = (longlong *)local_res8[2];
              puVar3 = puVar6 + 10;
              local_5c = iVar7;
              if (DAT_146ab6eb0 < puVar3) {
                FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x58);
                puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
                puVar3 = puVar6 + 10;
              }
              DAT_146ab6e8c = DAT_146ab6e8c + 1;
              DAT_146ab6ea8 = puVar3;
              *DAT_146ab6e80 = puVar6;
              DAT_146ab6e80 = puVar6 + 1;
              *DAT_146ab6e80 = 0;
              *puVar6 = &PTR_LAB_143f489f0;
              *(int *)(puVar6 + 2) = local_80;
              *(undefined4 *)((longlong)puVar6 + 0x14) = (undefined4)local_7c;
              *(undefined4 *)(puVar6 + 3) = local_7c._4_4_;
              *(undefined4 *)((longlong)puVar6 + 0x1c) = (undefined4)uStack_74;
              *(undefined4 *)(puVar6 + 4) = uStack_74._4_4_;
              *(undefined4 *)((longlong)puVar6 + 0x24) = (undefined4)local_6c;
              *(undefined4 *)(puVar6 + 5) = local_6c._4_4_;
              *(undefined4 *)((longlong)puVar6 + 0x2c) = (undefined4)uStack_64;
              *(undefined4 *)(puVar6 + 6) = uStack_64._4_4_;
              *(int *)((longlong)puVar6 + 0x34) = local_5c;
              *(int *)(puVar6 + 7) = iStack_58;
              *(int *)((longlong)puVar6 + 0x3c) = local_54;
              puVar6[8] = plVar1;
              puVar6[9] = uVar2;
              lVar4 = (**(code **)(*plVar1 + 8))(plVar1);
              if ((lVar4 == 0) &&
                 (lVar4 = (**(code **)(*(longlong *)puVar6[8] + 0x18))(), lVar4 == 0)) {
                (**(code **)(*(longlong *)puVar6[8] + 0x20))();
              }
              lVar4 = (**(code **)(*(longlong *)puVar6[9] + 8))();
              if ((lVar4 == 0) &&
                 (lVar4 = (**(code **)(*(longlong *)puVar6[9] + 0x18))(), lVar4 == 0)) {
                (**(code **)(*(longlong *)puVar6[9] + 0x20))();
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar9);
          }
          local_res10 = local_res10 + 1;
          param_4 = local_res20;
        } while (local_res10 < 6);
      }
      local_res18 = local_res18 + 1;
      local_a8 = local_a8 + 1;
    } while (local_a8 < local_a0);
  }
  if (local_90[0] != 0) {
    FScopedGPUStatEvent::End(local_90);
  }
  FUN_141ce3ef0(&PTR_PTR_1464c2560,&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_98);
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x30))();
  }
  return;
}



// FUNCTION 141d4b990 FUN_141d4b990 body=935 status=ok
// SIG undefined FUN_141d4b990(void)

void FUN_141d4b990(longlong param_1,int param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  void *pvVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  int *piVar17;
  undefined8 *puVar18;
  int *piVar19;
  int local_68 [2];
  int *local_60;
  uint local_58;
  uint local_54;
  undefined8 *local_50;
  ulonglong local_48;
  
  piVar6 = (int *)0x0;
  uVar12 = 0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined4 *)(param_1 + 0x168) = 0;
    iVar4 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    iVar7 = iVar4 << 5;
    if (*(int *)(param_1 + 0x16c) != iVar7) {
      *(int *)(param_1 + 0x16c) = iVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc((void *)(param_1 + 0x150));
    }
    if (param_2 != 0) {
      *(int *)(param_1 + 0x168) = param_2;
      pvVar13 = *(void **)(param_1 + 0x160);
      if (*(void **)(param_1 + 0x160) == (void *)0x0) {
        pvVar13 = (void *)(param_1 + 0x150);
      }
      _guard_xfg_dispatch_icall_nop(pvVar13,0,(longlong)iVar4 << 2);
    }
    uVar3 = *(undefined4 *)*param_4;
    *(int *)(param_1 + 0x58) = param_2;
    *(undefined4 *)(param_1 + 0x5c) = param_3;
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    if (*(char *)(param_1 + 0x50) == '\0') {
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x28))();
    }
    else {
      FRenderResource::UpdateRHI();
    }
    uVar3 = *(undefined4 *)(*param_4 + 4);
    *(int *)(param_1 + 0xa0) = param_2;
    *(undefined4 *)(param_1 + 0xa4) = param_3;
    *(undefined4 *)(param_1 + 0xa8) = uVar3;
    if (*(char *)(param_1 + 0x98) == '\0') {
      (**(code **)(*(longlong *)(param_1 + 0x70) + 0x28))();
    }
    else {
      FRenderResource::UpdateRHI();
    }
    uVar3 = *(undefined4 *)(*param_4 + 8);
    *(int *)(param_1 + 0xe8) = param_2;
    *(undefined4 *)(param_1 + 0xec) = param_3;
    *(undefined4 *)(param_1 + 0xf0) = uVar3;
    if (*(char *)(param_1 + 0xe0) == '\0') {
      (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x28))();
    }
    else {
      FRenderResource::UpdateRHI();
    }
  }
  else {
    local_58 = 0;
    local_60 = (int *)0x0;
    local_54 = 0;
    piVar10 = piVar6;
    piVar8 = piVar6;
    piVar16 = piVar6;
    piVar17 = piVar6;
    piVar19 = piVar6;
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        uVar14 = (uint)piVar8;
        iVar4 = (int)piVar10;
        if ((int)uVar14 < *(int *)(param_1 + 0x168)) {
          lVar15 = *(longlong *)(param_1 + 0x160);
          if (*(longlong *)(param_1 + 0x160) == 0) {
            lVar15 = param_1 + 0x150;
          }
          uVar5 = uVar14;
          if ((int)uVar14 < 0) {
            uVar5 = uVar14 + 0x1f;
          }
          if ((*(uint *)(lVar15 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0)
          goto LAB_141d4bb3d;
          local_58 = iVar4 + 1;
          if ((int)piVar16 < (int)local_58) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,piVar10);
            piVar16 = (int *)(ulonglong)local_54;
            piVar19 = local_60;
          }
          piVar19[iVar4] = (int)piVar17;
          piVar17 = (int *)(ulonglong)((int)piVar17 + 1);
        }
        else {
LAB_141d4bb3d:
          local_58 = iVar4 + 1;
          if ((int)piVar16 < (int)local_58) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,piVar10);
            piVar16 = (int *)(ulonglong)local_54;
            piVar19 = local_60;
          }
          piVar19[iVar4] = -1;
        }
        piVar10 = (int *)(ulonglong)local_58;
        piVar8 = (int *)(ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < *(int *)(param_1 + 0x58));
    }
    uVar14 = local_58;
    pvVar13 = (void *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x168) = 0;
    iVar4 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    iVar7 = iVar4 << 5;
    if (*(int *)(param_1 + 0x16c) != iVar7) {
      *(int *)(param_1 + 0x16c) = iVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(pvVar13);
    }
    if (param_2 != 0) {
      *(int *)(param_1 + 0x168) = param_2;
      pvVar9 = *(void **)(param_1 + 0x160);
      if (*(void **)(param_1 + 0x160) == (void *)0x0) {
        pvVar9 = pvVar13;
      }
      _guard_xfg_dispatch_icall_nop(pvVar9,0,(longlong)iVar4 << 2);
    }
    plVar1 = (longlong *)(param_1 + 0x100);
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_141d0a030(plVar1,&local_50);
    if (0 < (int)local_48) {
      uVar11 = local_48 & 0xffffffff;
      piVar10 = piVar6;
      puVar18 = local_50;
      do {
        TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
        ::FindId(plVar1,local_68,*puVar18);
        piVar8 = piVar6;
        if (local_68[0] != -1) {
          piVar8 = (int *)(*plVar1 + (longlong)local_68[0] * 0x28);
        }
        piVar16 = piVar8 + 2;
        if (piVar8 == (int *)0x0) {
          piVar16 = piVar6;
        }
        iVar4 = piVar19[*piVar16];
        pvVar9 = *(void **)(param_1 + 0x160);
        if (*(void **)(param_1 + 0x160) == (void *)0x0) {
          pvVar9 = pvVar13;
        }
        iVar7 = iVar4;
        if (iVar4 < 0) {
          iVar7 = iVar4 + 0x1f;
        }
        puVar2 = (uint *)((longlong)pvVar9 + (longlong)(iVar7 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
        *piVar16 = iVar4;
        uVar12 = iVar4 + 1U;
        if ((int)(iVar4 + 1U) <= (int)(uint)piVar10) {
          uVar12 = (uint)piVar10;
        }
        puVar18 = puVar18 + 1;
        piVar10 = (int *)(ulonglong)uVar12;
        uVar11 = uVar11 - 1;
        uVar14 = local_58;
      } while (uVar11 != 0);
    }
    if (0 < (int)uVar14) {
      uVar11 = (ulonglong)uVar14;
      piVar6 = piVar19;
      do {
        if ((int)uVar12 <= *piVar6) {
          *piVar6 = -1;
        }
        piVar6 = piVar6 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    FUN_141d4b640(param_1 + 0x28,param_2,param_3,&local_60);
    FUN_141d4b640(param_1 + 0x70,param_2,param_3,&local_60);
    FUN_141d4b640(param_1 + 0xb8,param_2,param_3,&local_60);
    if (local_50 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (piVar19 != (int *)0x0) {
      FMemory::Free(piVar19);
    }
  }
  return;
}



// FUNCTION 141d4bd40 ResizeForCopy body=169 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FFinalPostProcessSettings::FCubemapEntry,TInlineAllocator<8,FDefaultAllocator>_>::
     ResizeForCopy(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar4 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      uVar4 = (uint)(uVar2 / 0x18);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if (uVar4 < 9) {
      if (lVar1 == 0) goto LAB_141d4bdd3;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_141d4bdd3;
      lVar5 = (longlong)(int)uVar4 * 0x18;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
  }
LAB_141d4bdd3:
  *(uint *)(param_1 + 0xcc) = uVar4;
  return;
}



// FUNCTION 141d4bdf0 ResizeForCopy body=139 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FPlane,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 7) {
      uVar2 = 6;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (uVar2 < 7) {
      if (lVar1 == 0) goto LAB_141d4be68;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_141d4be68;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
  }
LAB_141d4be68:
  *(uint *)(param_1 + 0x74) = uVar2;
  return;
}



// FUNCTION 141d4be80 ResizeForCopy body=148 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar2 = 8;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (uVar2 < 9) {
      if (lVar1 == 0) goto LAB_141d4befe;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_141d4befe;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
LAB_141d4befe:
  *(uint *)(param_1 + 0x94) = uVar2;
  return;
}



// FUNCTION 141d4bf20 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FLightSceneInfoCompact,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

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
  if (iVar2 != param_3) {
    TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfoCompact>::
    ResizeAllocation(param_1,0,iVar2,0x30);
  }
  *(int *)(param_1 + 0x314) = iVar2;
  return;
}



// FUNCTION 141d4bfb0 ResizeForCopy body=118 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x101) {
      iVar1 = 0x100;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 6,0);
      iVar1 = (int)(uVar2 >> 6);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<256,FDefaultAllocator>::ForElementType<FPrimitiveSceneInfoCompact>::
    ResizeAllocation(param_1,0,iVar1,0x40);
  }
  *(int *)(param_1 + 0x400c) = iVar1;
  return;
}



// FUNCTION 141d4c030 ResizeGrow body=8 status=ok
// SIG undefined ResizeGrow(void)

void TArray<`FScene::FindClosestReflectionCaptures'::`2'::FReflectionCaptureDistIndex,TFixedAllocator<3>_>
     ::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 3;
  return;
}



// FUNCTION 141d4c040 ResizeGrow body=266 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTextureLayout::FTextureLayoutNode,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x70);
  if (uVar1 < 6) {
    uVar5 = 5;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x74) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x14,0);
    uVar5 = (uint)(uVar2 / 0x14);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x74) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x68);
  if (uVar5 < 6) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x14);
    pvVar3 = *(void **)((longlong)param_1 + 0x68);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x14,0);
        *(void **)((longlong)param_1 + 0x68) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x14);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x14;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar4;
  return;
}



// FUNCTION 141d4c150 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TMap<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>_>,TInlineAllocator<3,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (uVar1 < 4) {
    iVar4 = 3;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xfc) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x50,0);
    iVar4 = (int)(uVar3 / 0x50);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xfc) = iVar4;
  FUN_141d4b4e0(param_1,param_2,iVar4,0x50);
  return;
}



// FUNCTION 141d4c1f0 ResizeGrow body=134 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x4008);
  iVar2 = 0x100;
  if (0x100 < uVar1) {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x400c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 6,0);
    iVar2 = (int)(uVar3 >> 6);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x400c) = iVar2;
  TInlineAllocator<256,FDefaultAllocator>::ForElementType<FPrimitiveSceneInfoCompact>::
  ResizeAllocation(param_1,param_2,iVar2,0x40);
  return;
}



// FUNCTION 141d4c280 ResizeShrink body=155 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x4008);
  uVar4 = *(uint *)(param_1 + 0x400c);
  uVar2 = 0x100;
  if ((((0x100 < uVar1) &&
       ((uVar2 = uVar4, 0x3fff < (ulonglong)((longlong)(int)(uVar4 - uVar1) << 6) ||
        ((int)(uVar1 * 3) < (int)(uVar4 * 2))))) && ((0x40 < uVar4 - uVar1 || (uVar1 == 0)))) &&
     (uVar2 = uVar1, 0 < (int)uVar1)) {
    uVar3 = FMemory::QuantizeSize((longlong)(int)uVar1 << 6,0);
    uVar4 = *(uint *)(param_1 + 0x400c);
    uVar2 = (uint)(uVar3 >> 6);
  }
  if (uVar2 == uVar4) {
    return;
  }
  *(uint *)(param_1 + 0x400c) = uVar2;
  TInlineAllocator<256,FDefaultAllocator>::ForElementType<FPrimitiveSceneInfoCompact>::
  ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x4008),uVar2,0x40);
  return;
}



// FUNCTION 141d4c320 FUN_141d4c320 body=120 status=ok
// SIG undefined FUN_141d4c320(void)

void FUN_141d4c320(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x140,0);
    iVar3 = (int)(uVar1 / 0x140);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x140,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141d4c3a0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xe0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xe0,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141d4c430 FUN_141d4c430 body=127 status=ok
// SIG undefined FUN_141d4c430(void)

void FUN_141d4c430(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar2 = 3;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x50,0);
      iVar2 = (int)(uVar1 / 0x50);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xfc)) {
    *(int *)(param_1 + 0xfc) = iVar2;
    FUN_141d4b4e0(param_1,*(undefined4 *)(param_1 + 0xf8),iVar2,0x50);
  }
  return;
}



// FUNCTION 141d4c4b0 ResizeTo body=113 status=ok
// SIG undefined ResizeTo(void)

void TArray<FPrimitiveSceneInfoCompact,TInlineAllocator<256,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x101) {
      iVar1 = 0x100;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 6,0);
      iVar1 = (int)(uVar2 >> 6);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x400c)) {
    *(int *)(param_1 + 0x400c) = iVar1;
    TInlineAllocator<256,FDefaultAllocator>::ForElementType<FPrimitiveSceneInfoCompact>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x4008),iVar1,0x40);
  }
  return;
}



// FUNCTION 141d4c530 FUN_141d4c530 body=241 status=ok
// SIG undefined FUN_141d4c530(void)

void FUN_141d4c530(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 2;
  plVar2 = (longlong *)(param_1 + 0x570);
  lVar4 = 2;
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    plVar2 = plVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar2 = (longlong *)(param_1 + 0x5a0);
  lVar4 = 2;
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    plVar2 = plVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar2 = (longlong *)(param_1 + 0x5d0);
  lVar4 = 2;
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    plVar2 = plVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar2 = (longlong *)(param_1 + 0x600);
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  plVar2 = *(longlong **)(param_1 + 0x630);
  *(undefined8 *)(param_1 + 0x630) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
  }
  return;
}



// FUNCTION 141d4c630 SceneRenderTargetsSetBufferSize body=56 status=ok
// SIG undefined SceneRenderTargetsSetBufferSize(void)

void FRendererModule::SceneRenderTargetsSetBufferSize
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FSceneRenderTargets::Get();
  FUN_141cf4f40(uVar1,param_2,param_3);
  uVar1 = FSceneRenderTargets::Get();
  FRenderResource::UpdateRHI(uVar1);
  return;
}



// FUNCTION 141d4c670 FUN_141d4c670 body=474 status=ok
// SIG undefined FUN_141d4c670(void)

void FUN_141d4c670(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    *(undefined1 *)(param_1 + 0x5f30) = 1;
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_144e486b0;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_140445100(plVar9,0,0xff,1,0,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  return;
}



// FUNCTION 141d4c850 FUN_141d4c850 body=134 status=ok
// SIG undefined FUN_141d4c850(void)

void FUN_141d4c850(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x60d0);
  if (lVar2 == 0) {
    if (param_2 == 0) {
      return;
    }
    lVar1 = operator_new(0x58);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_14246da60(lVar1,param_1);
    }
    *(longlong *)(param_1 + 0x60d0) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  if (param_2 == 0) {
    FUN_14248be50(lVar2,param_3);
    return;
  }
  FUN_142485ff0(lVar2,param_2,param_3);
  return;
}



// FUNCTION 141d4c8e0 FUN_141d4c8e0 body=358 status=ok
// SIG undefined FUN_141d4c8e0(void)

void FUN_141d4c8e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_28 [32];
  
  if (param_2 != 0) {
    iVar5 = FUN_142481080(param_2);
    if (0 < iVar5) {
      lVar8 = *(longlong *)(param_1 + 0x60d0);
      if (lVar8 == 0) {
        lVar7 = operator_new(0x58);
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = FUN_14246da60(lVar7,param_1);
        }
        *(longlong *)(param_1 + 0x60d0) = lVar8;
      }
      FUN_14248ef30(lVar8,param_2);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x60d0) != 0) {
    FUN_14248ada0(*(longlong *)(param_1 + 0x60d0),1);
    if (DAT_146ac3ac6 != '\0') {
      cVar4 = IsInRenderingThread();
      if (cVar4 != '\0') goto LAB_141d4c99e;
    }
    if (DAT_146ac3ac5 == '\0') {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 != '\0') || (DAT_1468c21ae == '\0')) {
LAB_141d4c99e:
        FBaseGraphTask::GetSmallTaskAllocator();
        lVar8 = *(longlong *)(param_1 + 0x60d0);
        if (lVar8 != 0) {
          FUN_14246f7e0(lVar8);
          FMemory::operator_delete(lVar8,0x58);
        }
        *(undefined8 *)(param_1 + 0x60d0) = 0;
        return;
      }
      DVar6 = GetCurrentThreadId();
      if (DVar6 == DAT_1468c21c0) goto LAB_141d4c99e;
    }
    plVar9 = (longlong *)FUN_141d28030(local_28,0,0xff);
    *(longlong *)(*plVar9 + 0x10) = param_1;
    lVar8 = *plVar9;
    lVar3 = plVar9[2];
    lVar7 = plVar9[1];
    lVar2 = *(longlong *)(lVar8 + 0x20);
    piVar1 = (int *)(lVar2 + 0x48);
    if (lVar2 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(lVar8,lVar7,(int)lVar3,1);
    if (lVar2 != 0) {
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FGraphEvent::Recycle(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 141d4caa0 FUN_141d4caa0 body=382 status=ok
// SIG undefined FUN_141d4caa0(void)

void FUN_141d4caa0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res18 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = param_3;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xc0,local_res18,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 200) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
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
  if (*(short *)(param_1 + 0xcc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xca);
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
  return;
}



// FUNCTION 141d4cc20 FUN_141d4cc20 body=645 status=ok
// SIG undefined FUN_141d4cc20(void)

void FUN_141d4cc20(longlong param_1,longlong param_2,undefined4 param_3,char param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res18 [2];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = param_3;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xc0,local_res18,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xc6,&param_5,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *param_7;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
    puVar7[2] = uVar4;
    puVar7[4] = uVar3;
  }
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
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar4;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_40 = 0.5 / (float)(1 << ((param_4 - (char)param_5) - 1U & 0x1f));
  local_48 = -local_40;
  local_44 = local_48;
  local_3c = local_48;
  local_38 = local_48;
  local_34 = local_40;
  local_30 = local_40;
  local_2c = local_40;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xd4,&local_48,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xda,&local_38,0);
  return;
}



// FUNCTION 141d4ceb0 FUN_141d4ceb0 body=515 status=ok
// SIG undefined FUN_141d4ceb0(void)

void FUN_141d4ceb0(longlong param_1,longlong param_2,uint param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int local_res18 [4];
  
  iVar9 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  uVar10 = param_3 - 1;
  local_res18[0] = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> local_res18[0] == 0; local_res18[0] = local_res18[0] + -1) {
    }
  }
  if (((*param_4 != 0) || (param_4[1] != 0)) || (param_4[2] != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar3 = param_4[1];
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar6 = FUN_141b33b80();
    if (*(short *)(param_1 + 0xc2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xc0);
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
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      *puVar8 = &PTR_LAB_143f59c80;
      puVar8[2] = uVar4;
      puVar8[4] = lVar3;
    }
    if (*(short *)(param_1 + 0xc6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xc4);
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
      *puVar8 = &PTR_LAB_143f59c70;
      puVar8[2] = uVar4;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
      puVar8[4] = uVar6;
    }
  }
  iVar9 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar5 = 0x20;
  if (param_3 != 0) {
    iVar5 = 0x1f - iVar9;
  }
  iVar9 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  if (uVar10 == 0) {
    iVar9 = 0x20;
  }
  else {
    iVar9 = 0x1f - iVar9;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = (0x20U - iVar9 & ~((iVar5 << 0x1a) >> 0x1f)) + 1;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 200,local_res18,0);
  return;
}



// FUNCTION 141d4d0c0 SetParameters body=587 status=ok
// SIG undefined SetParameters(void)

void FCopyCubemapToCubeFacePS::SetParameters
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,char param_5,
               char param_6,undefined4 param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res20[0] = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xc0,local_res20,0);
  if ((*(short *)(param_1 + 200) != 0) &&
     (*(undefined8 *)(param_3 + 0x48) = DAT_1468b5a78, *(short *)(param_1 + 200) != 0)) {
    uVar6 = *(undefined8 *)(param_3 + 0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *(ushort *)(param_1 + 0xc6);
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
    puVar5[4] = uVar6;
  }
  if (*(short *)(param_1 + 0xcc) != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    uVar1 = *(ushort *)(param_1 + 0xca);
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
    puVar5[4] = uVar6;
  }
  local_48 = 0x3f800000;
  local_40 = 0x3f800000;
  if (param_6 == '\0') {
    local_40 = 0;
  }
  if (param_5 == '\0') {
    local_48 = 0;
  }
  local_44 = 0;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0xce,&local_48,0);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,uVar3,param_1 + 0xd4,param_8,0)
  ;
  uVar6 = __libm_sse2_sincosf_(param_7);
  local_res8 = (undefined4)uVar6;
  local_resc = (undefined4)((ulonglong)uVar6 >> 0x20);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar3,param_1 + 0xda,&local_res8,0);
  return;
}



// FUNCTION 141d4d310 FUN_141d4d310 body=647 status=ok
// SIG undefined FUN_141d4d310(void)

void FUN_141d4d310(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5,
                  undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_res8;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_res8 = uVar3;
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  uVar4 = FSceneRenderTargets::Get(param_2);
  plVar5 = (longlong *)FUN_141ce54b0(uVar4);
  uVar4 = *(undefined8 *)(*plVar5 + 0x10);
  local_res8 = FUN_141a156e0();
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
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
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
    puVar7[4] = local_res8;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  if (param_4 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) + 0x1150);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x29) == '\0')) {
      local_48 = CONCAT44(*(undefined4 *)(lVar2 + 0x20),0x3f800000);
      local_30 = 0;
      goto LAB_141d4d54d;
    }
    uVar8 = 0x40000000;
    local_30 = 0;
  }
  else if (param_5 == '\0') {
    local_30 = 0;
    uVar8 = 0;
  }
  else {
    local_30 = 0x3f800000;
    uVar8 = 0;
  }
  local_48 = (ulonglong)uVar8;
LAB_141d4d54d:
  local_40 = local_30;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd8,&local_48,0);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,uVar3,param_1 + 0xde,param_6,0)
  ;
  return;
}



// FUNCTION 141d4d5a0 FUN_141d4d5a0 body=493 status=ok
// SIG undefined FUN_141d4d5a0(void)

void FUN_141d4d5a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    *(longlong *)(param_1 + 0x1a68) = param_2;
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_38._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144e487d0;
  plVar9[5] = 0;
  plVar9[2] = param_1;
  plVar9[3] = param_2;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar7;
  FUN_1409421c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 141d4d790 FUN_141d4d790 body=79 status=ok
// SIG undefined FUN_141d4d790(void)

void FUN_141d4d790(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x5ec8);
  if (lVar2 == 0) {
    lVar1 = operator_new(0xe0);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_14237e4d0(lVar1);
    }
    *(longlong *)(param_1 + 0x5ec8) = lVar2;
  }
  FUN_142387860(lVar2,param_2);
  return;
}



// FUNCTION 141d4d7f0 FUN_141d4d7f0 body=996 status=ok
// SIG undefined FUN_141d4d7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d4d7f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 uVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined1 auStack_158 [32];
  int local_138;
  uint local_130;
  uint uStack_12c;
  uint *puStack_128;
  undefined4 local_120;
  int iStack_11c;
  uint uStack_118;
  longlong local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  longlong local_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint *local_e8;
  uint uStack_e0;
  int iStack_dc;
  uint local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar3 = *(int *)(param_2 + 0x28);
  plVar10 = (longlong *)0x0;
  local_130 = 0;
  puStack_128 = (uint *)(param_2 + 0x10);
  uStack_12c = 1;
  iStack_11c = 0;
  uStack_118 = 0;
  lVar12 = 0x1f;
  iVar16 = 0x20;
  if (iVar3 != 0) {
    puVar15 = *(uint **)(param_2 + 0x20);
    if (*(uint **)(param_2 + 0x20) == (uint *)0x0) {
      puVar15 = puStack_128;
    }
    uVar4 = *puVar15;
    plVar9 = plVar10;
    plVar14 = plVar10;
    while (uVar4 == 0) {
      iVar13 = (int)plVar14;
      uStack_118 = (int)plVar9 + 0x20;
      plVar9 = (longlong *)(ulonglong)uStack_118;
      local_130 = iVar13 + 1;
      plVar14 = (longlong *)(ulonglong)local_130;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) goto LAB_141d4d8d1;
      uVar4 = puVar15[(longlong)iVar13 + 1];
    }
    uStack_12c = -uVar4 & uVar4;
    local_138 = 0x1f;
    if (uStack_12c != 0) {
      for (; uStack_12c >> local_138 == 0; local_138 = local_138 + -1) {
      }
    }
    iVar13 = iVar16;
    if (uStack_12c != 0) {
      iVar13 = 0x1f - local_138;
    }
    iStack_11c = (uStack_118 - iVar13) + 0x1f;
    if (iVar3 < iStack_11c) {
LAB_141d4d8d1:
      iStack_11c = iVar3;
    }
  }
  local_120 = 0xffffffff;
  uStack_f0 = local_130;
  uStack_ec = uStack_12c;
  uStack_a8 = 0xffffffff;
  iStack_a4 = iStack_11c;
  uStack_a0 = uStack_118;
  uStack_e0 = 0xffffffff;
  iStack_dc = iStack_11c;
  local_d8 = uStack_118;
  local_f8 = param_2;
  local_e8 = puStack_128;
  local_c0 = param_2;
  puStack_b0 = puStack_128;
  uStack_b8 = uStack_f0;
  uStack_b4 = uStack_ec;
  if (iStack_11c < iVar3) {
    do {
      uStack_e0 = uStack_e0 & ~uStack_ec;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    } while (iStack_dc < (int)local_e8[6]);
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    local_60 = 0xffffffff;
    local_90 = 0;
    local_88 = 0;
    local_70 = 0;
    local_68 = 0;
    local_5c = 0;
    local_50 = 0;
    local_48 = 0;
    local_98 = param_1;
    TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
    ::operator=(&local_90,param_2);
    uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_100);
    FUN_141d4dbe0(local_98,uVar7,&local_90);
    QueryPerformanceCounter(&local_108);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_108.s.LowPart - local_100._0_4_);
    local_48 = 0;
    if (local_50 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_90);
  }
  else {
    pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar9 = TlsGetValue(*pDVar8);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)operator_new(0x18);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = 0;
        plVar9[1] = 0;
        *(undefined4 *)(plVar9 + 2) = 0;
        plVar10 = plVar9;
      }
      TlsSetValue(*pDVar8,plVar10);
      plVar9 = plVar10;
    }
    plVar10 = (longlong *)plVar9[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar9;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
        plVar9[1] = (longlong)plVar10;
        if (plVar10 == (longlong *)0x0) {
          puVar11 = (undefined8 *)FMemory::Malloc(0x2000);
          plVar9[1] = (longlong)puVar11;
          do {
            puVar2 = puVar11 + 0x20;
            *puVar11 = puVar2;
            lVar12 = lVar12 + -1;
            puVar11 = puVar2;
          } while (lVar12 != 0);
          *puVar2 = 0;
          plVar10 = (longlong *)plVar9[1];
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
      }
      else {
        plVar9[1] = (longlong)plVar10;
        *plVar9 = 0;
        *(undefined4 *)(plVar9 + 2) = 0x20;
      }
    }
    else {
      iVar16 = (int)plVar9[2];
    }
    plVar9[1] = *plVar10;
    local_d0 = 0;
    *(int *)(plVar9 + 2) = iVar16 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    local_c8 = 0;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144e487e0;
    *(undefined1 *)(plVar10 + 0xd) = 0;
    plVar10[0xe] = 0;
    plVar10[2] = param_1;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    *(undefined4 *)((longlong)plVar10 + 0x4c) = 0;
    *(undefined4 *)(plVar10 + 9) = 0xffffffff;
    plVar10[0xb] = 0;
    *(undefined4 *)(plVar10 + 0xc) = 0;
    TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
    ::operator=(plVar10 + 3,param_2);
    lVar12 = plVar10[0xe];
    piVar1 = (int *)(lVar12 + 0x48);
    if (lVar12 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_110 = lVar12;
    FUN_141d4ea20(plVar10,0,0xff,1);
    if (lVar12 != 0) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle(local_110);
      }
    }
  }
  return;
}



// FUNCTION 141d4dbe0 FUN_141d4dbe0 body=1269 status=ok
// SIG undefined FUN_141d4dbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d4dbe0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  undefined1 auStack_1b8 [32];
  undefined2 local_198;
  longlong local_188 [2];
  int local_178;
  uint uStack_174;
  uint *puStack_170;
  undefined4 local_168;
  int iStack_164;
  int iStack_160;
  int local_158;
  uint uStack_154;
  undefined *puStack_150;
  undefined4 local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined8 uStack_130;
  uint *local_128;
  uint uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  longlong *local_110;
  undefined8 uStack_108;
  uint *puStack_100;
  uint uStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined1 local_e4 [4];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined1 local_d8 [8];
  longlong local_d0;
  LARGE_INTEGER local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  puStack_170 = (uint *)(param_3 + 2);
  bVar5 = false;
  iVar11 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0xffffffff;
  iVar14 = (int)param_3[5];
  local_178 = 0;
  uStack_174 = 1;
  iStack_164 = 0;
  iStack_160 = 0;
  if (iVar14 != 0) {
    puVar13 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar13 = puStack_170;
    }
    uVar1 = *puVar13;
    iStack_160 = iVar11;
    local_178 = iVar11;
    while (uVar1 == 0) {
      lVar12 = (longlong)local_178;
      iStack_160 = iStack_160 + 0x20;
      iVar10 = local_178 + 1;
      bVar4 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar10;
      if (bVar4) goto LAB_141d4dcf7;
      uVar1 = puVar13[lVar12 + 1];
    }
    uStack_174 = -uVar1 & uVar1;
    local_e8 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> local_e8 == 0; local_e8 = local_e8 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_e8;
    }
    iStack_164 = (iStack_160 - iVar10) + 0x1f;
    if (iVar14 < iStack_164) {
LAB_141d4dcf7:
      iStack_164 = iVar14;
    }
  }
  local_168 = 0xffffffff;
  uStack_130 = CONCAT44(uStack_174,local_178);
  uStack_f8 = 0xffffffff;
  iStack_f4 = iStack_164;
  iStack_f0 = iStack_160;
  local_118 = iStack_160;
  uStack_120 = 0xffffffff;
  iStack_11c = iStack_164;
  dVar7 = DAT_146a83ce0;
  local_138 = param_3;
  local_128 = puStack_170;
  local_110 = param_3;
  uStack_108 = uStack_130;
  puStack_100 = puStack_170;
  if (iStack_164 < iVar14) {
    do {
      local_d0 = *(longlong *)(*local_138 + (longlong)iStack_11c * 0x18);
      lVar12 = *(longlong *)(*local_138 + 8 + (longlong)iStack_11c * 0x18);
      if ((((lVar12 == 0) || (local_d0 == 0)) || (((byte)*(undefined4 *)(lVar12 + 0x364) & 6) != 6))
         || (*(char *)(lVar12 + 0x360) != '\0')) {
        bVar5 = true;
        piVar9 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                  (&local_98,local_e4);
        if (*piVar9 == -1) {
          FUN_14058c900(&local_98,local_e0,&local_d0,0);
        }
      }
      else {
        FStringTable::SetOwnerAsset(local_d0);
      }
      uStack_120 = uStack_120 & ~uStack_130._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
    } while (iStack_11c < (int)local_128[6]);
    dVar7 = DAT_146a83ce0;
    if (bVar5) {
      QueryPerformanceCounter(&local_c8);
      dVar6 = (double)local_c8.QuadPart * DAT_1468b02f8 + 16777216.0;
      if ((DAT_146a83ce0 == 0.0) || (dVar7 = DAT_146a83ce0, 30.0 <= dVar6 - DAT_146a83ce0)) {
        local_188[0] = 0;
        local_188[1] = 0xef;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
        local_198 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_188[0],0xef,
                   "[OAK-199971] If you see this warning message while working in the editor please check your output log for warning messages containing [OAK-199971] and report back to the JIRA task if anything (or nothing) seemed broken afterwards, thanks!"
                  );
        uVar8 = FText::FromString(local_b0,local_188);
        FUN_1416786b0(0,uVar8,0);
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_a8 + 1;
          lVar12 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar9 = (int *)((longlong)local_a8 + 0xc);
            iVar14 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_a8 + 8))(local_a8,1);
            }
          }
        }
        dVar7 = dVar6;
        if (local_188[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  DAT_146a83ce0 = dVar7;
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_158 = 0;
  uStack_154 = 1;
  puStack_150 = &DAT_146533cb0;
  iStack_144 = 0;
  iStack_140 = 0;
  iVar14 = (int)DAT_146533cc8;
  if (iVar14 != 0) {
    puVar13 = DAT_146533cc0;
    if (DAT_146533cc0 == (uint *)0x0) {
      puVar13 = (uint *)&DAT_146533cb0;
    }
    uVar1 = *puVar13;
    iStack_140 = iVar11;
    local_158 = iVar11;
    while (uVar1 == 0) {
      lVar12 = (longlong)local_158;
      iStack_140 = iStack_140 + 0x20;
      iVar11 = local_158 + 1;
      bVar5 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_158;
      local_158 = iVar11;
      if (bVar5) goto LAB_141d4df93;
      uVar1 = puVar13[lVar12 + 1];
    }
    uStack_154 = -uVar1 & uVar1;
    iVar11 = 0x1f;
    if (uStack_154 != 0) {
      for (; uStack_154 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_154 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_144 = (iStack_140 - iVar11) + 0x1f;
    if (iVar14 < iStack_144) {
LAB_141d4df93:
      iStack_144 = iVar14;
    }
  }
  local_148 = 0xffffffff;
  uStack_130 = CONCAT44(uStack_154,local_158);
  local_138 = (longlong *)&DAT_146533ca0;
  local_128 = (uint *)&DAT_146533cb0;
  uStack_120 = 0xffffffff;
  uVar1 = uStack_120;
  uStack_120 = 0xffffffff;
  iStack_11c = iStack_144;
  local_118 = iStack_140;
  uStack_114 = uStack_13c;
  local_110 = (longlong *)&DAT_146533ca0;
  iStack_f0 = iStack_140;
  uStack_ec = uStack_13c;
  puStack_100 = (uint *)&DAT_146533cb0;
  uStack_f8 = 0xffffffff;
  iStack_f4 = iStack_144;
  uStack_108 = uStack_130;
  if (iStack_144 < iVar14) {
    do {
      plVar3 = *(longlong **)(*local_110 + (longlong)iStack_f4 * 0x10);
      lVar12 = (**(code **)(*plVar3 + 0x48))(plVar3,uVar2);
      if (((lVar12 != 0) &&
          (piVar9 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                           ::FindId(param_3,local_dc,lVar12), *piVar9 != -1)) &&
         (piVar9 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                    (&local_98,local_d8,lVar12), *piVar9 == -1)) {
        FUN_142588520(plVar3);
        local_c0 = 0;
        (**(code **)(*plVar3 + 0x40))(plVar3,uVar2,local_b8,&local_c0);
      }
      uStack_f8 = uStack_f8 & ~uStack_108._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_108);
      uVar1 = uStack_120;
    } while (iStack_f4 < *(int *)((longlong)puStack_100 + 0x18));
  }
  uStack_120 = uVar1;
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
}



// FUNCTION 141d4e0e0 FUN_141d4e0e0 body=489 status=ok
// SIG undefined FUN_141d4e0e0(void)

void FUN_141d4e0e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_res8 [16];
  longlong local_res18;
  undefined8 local_res20;
  longlong local_40;
  longlong local_38;
  
  *(int *)(param_1 + 0x6004) = *(int *)(param_1 + 0x6004) + 1;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_40 = param_1;
    local_38 = param_2;
    FUN_141d2a610(&local_40,2,local_res8);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144e48710;
  plVar9[5] = 0;
  plVar9[2] = param_1;
  plVar9[3] = param_2;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_1409421c0(plVar9,0,0xff,1,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  return;
}



// FUNCTION 141d4e2d0 FUN_141d4e2d0 body=611 status=ok
// SIG undefined FUN_141d4e2d0(void)

void FUN_141d4e2d0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_141d4e487;
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
LAB_141d4e487:
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



// FUNCTION 141d4e540 FUN_141d4e540 body=611 status=ok
// SIG undefined FUN_141d4e540(void)

void FUN_141d4e540(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_141d4e6f7;
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
LAB_141d4e6f7:
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



// FUNCTION 141d4e7b0 FUN_141d4e7b0 body=611 status=ok
// SIG undefined FUN_141d4e7b0(void)

void FUN_141d4e7b0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_141d4e967;
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
LAB_141d4e967:
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



// FUNCTION 141d4ea20 FUN_141d4ea20 body=611 status=ok
// SIG undefined FUN_141d4ea20(void)

void FUN_141d4ea20(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_141d4ebd7;
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
LAB_141d4ebd7:
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



// FUNCTION 141d4ec90 FUN_141d4ec90 body=611 status=ok
// SIG undefined FUN_141d4ec90(void)

void FUN_141d4ec90(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x1ac0) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_141d4ee47;
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
LAB_141d4ee47:
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



// FUNCTION 141d4ef00 FUN_141d4ef00 body=505 status=ok
// SIG undefined FUN_141d4ef00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d4ef00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_c058 [32];
  longlong local_c038;
  longlong local_c030;
  longlong local_c028;
  undefined8 local_c020;
  undefined8 local_c018;
  undefined4 uStack_c010;
  undefined4 uStack_c00c;
  longlong local_c008 [2];
  undefined8 local_bff8 [682];
  undefined8 auStack_aaa8 [682];
  undefined8 auStack_9558 [682];
  undefined4 auStack_8008 [1364];
  undefined8 auStack_6ab8 [2728];
  undefined4 auStack_1578 [1364];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x141d4ef1a;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c058;
  local_c028 = 0;
  local_c020 = 0;
  local_c030 = param_2 + 0x2fa8;
  local_c038 = param_2 + 0x2fa4;
  FUN_141d344a0(param_2,*(undefined8 *)(param_1 + 8),&local_c028,param_2 + 0x2fa0);
  lVar6 = local_c028;
  if (2 < *(int *)(param_2 + 0x1a38)) {
    FUN_141d0fbc0(local_bff8);
    lVar6 = local_c028;
    if (0 < (int)local_c020) {
      puVar5 = (undefined8 *)(local_c028 + 0x20);
      uVar8 = 0;
      do {
        uVar4 = puVar5[-1];
        uVar7 = (int)uVar8 + 1;
        local_bff8[uVar8 * 2] = puVar5[-2];
        local_bff8[uVar8 * 2 + 1] = uVar4;
        uVar4 = puVar5[1];
        auStack_aaa8[uVar8 * 2] = *puVar5;
        auStack_aaa8[uVar8 * 2 + 1] = uVar4;
        uVar4 = puVar5[0xd];
        auStack_9558[uVar8 * 2] = puVar5[0xc];
        auStack_9558[uVar8 * 2 + 1] = uVar4;
        uVar1 = *(undefined4 *)(puVar5 + 0xe);
        uStack_c010 = *(undefined4 *)((longlong)puVar5 + 0x74);
        uVar2 = *(undefined4 *)((longlong)puVar5 + 0x7c);
        uStack_c00c = *(undefined4 *)(puVar5 + 0xf);
        auStack_8008[uVar8 * 4] = uVar2;
        auStack_8008[uVar8 * 4 + 1] = uVar1;
        auStack_8008[uVar8 * 4 + 2] = uStack_c010;
        auStack_8008[uVar8 * 4 + 3] = uStack_c00c;
        uVar4 = puVar5[3];
        local_c018 = CONCAT44(uVar1,uVar2);
        auStack_6ab8[uVar8 * 8] = puVar5[2];
        auStack_6ab8[uVar8 * 8 + 1] = uVar4;
        uVar4 = puVar5[5];
        auStack_6ab8[uVar8 * 8 + 2] = puVar5[4];
        auStack_6ab8[uVar8 * 8 + 3] = uVar4;
        uVar4 = puVar5[7];
        auStack_6ab8[uVar8 * 8 + 4] = puVar5[6];
        auStack_6ab8[uVar8 * 8 + 5] = uVar4;
        uVar4 = puVar5[9];
        auStack_6ab8[uVar8 * 8 + 6] = puVar5[8];
        auStack_6ab8[uVar8 * 8 + 7] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar5 + 0x54);
        uVar2 = *(undefined4 *)(puVar5 + 0xb);
        uVar3 = *(undefined4 *)((longlong)puVar5 + 0x5c);
        auStack_1578[uVar8 * 4] = *(undefined4 *)(puVar5 + 10);
        auStack_1578[uVar8 * 4 + 1] = uVar1;
        auStack_1578[uVar8 * 4 + 2] = uVar2;
        auStack_1578[uVar8 * 4 + 3] = uVar3;
        puVar5 = puVar5 + 0x14;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)local_c020);
    }
    local_c038 = CONCAT44(local_c038._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_c008,local_bff8,&DAT_146a818f8);
    local_c018 = local_c008[0];
    if (local_c008[0] != 0) {
      LOCK();
      *(int *)(local_c008[0] + 8) = *(int *)(local_c008[0] + 8) + 1;
      UNLOCK();
      lVar6 = local_c028;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c008);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 0x2fb0,&local_c018);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c018);
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  return;
}



// FUNCTION 141d4f100 FUN_141d4f100 body=810 status=ok
// SIG undefined FUN_141d4f100(void)

void FUN_141d4f100(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  bVar3 = false;
  fVar13 = 1.0;
  cVar11 = '\0';
  fVar15 = 0.0;
  fVar14 = 1.0;
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
  uVar8 = *(uint *)(*(longlong *)(param_2 + 0x10) + 0x2c) >> 0x1b & 0xffffff01;
  plVar6 = DAT_146ac3e58;
  plVar10 = DAT_146ac3e58;
  if ((((lVar7 != 0) && (lVar1 = *(longlong *)(lVar7 + 0x1150), lVar1 != 0)) &&
      ((plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0 ||
       (*(char *)(lVar1 + 0x24) != '\0')))) && ((char)uVar8 != '\0')) {
    cVar11 = *(char *)(param_2 + 0x1207);
    plVar9 = DAT_146ac3e58;
    if (plVar2 != (longlong *)0x0) {
      plVar9 = plVar2;
    }
    plVar10 = plVar9;
    if (((0.0 < *(float *)(lVar1 + 0x10)) &&
        (plVar2 = *(longlong **)(lVar1 + 0x18), plVar2 != (longlong *)0x0)) &&
       (plVar10 = plVar2, *(float *)(lVar1 + 0x10) < 1.0)) {
      plVar6 = plVar2;
      plVar10 = plVar9;
    }
    fVar15 = 1.0;
    if ((*(char *)(lVar1 + 0x29) == '\0') && (*(char *)(lVar1 + 0x28) == '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    fVar14 = *(float *)(lVar1 + 0x100);
  }
  if (cVar11 == '\0') {
    iVar4 = (**(code **)(*plVar10 + 0x40))(plVar10,uVar8,DAT_146ac3e58);
    *(longlong *)(param_3 + 6) = plVar10[6];
    *(longlong *)(param_3 + 8) = plVar10[7];
    *(longlong *)(param_3 + 10) = plVar6[6];
    *(longlong *)(param_3 + 0xc) = plVar6[7];
  }
  else {
    iVar4 = 0x80;
    uVar5 = FUN_141b33a40();
    *(undefined8 *)(param_3 + 8) = uVar5;
    uVar5 = FUN_141b33a40();
    *(undefined8 *)(param_3 + 0xc) = uVar5;
    if ((*(longlong *)(lVar7 + 0x13b8) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x13b8) + 0x10), lVar1 == 0)) {
      *(longlong *)(param_3 + 6) = DAT_146ac3e58[6];
      *(longlong *)(param_3 + 10) = DAT_146ac3e58[6];
    }
    else {
      *(longlong *)(param_3 + 6) = lVar1;
      *(undefined8 *)(param_3 + 10) = *(undefined8 *)(*(longlong *)(lVar7 + 0x13b8) + 0x10);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1))
  {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  fVar12 = _guard_xfg_dispatch_icall_nop((float)iVar4);
  fVar12 = fVar12 * DAT_1468509d8;
  if (*(char *)(param_2 + 0x1207) == '\0') {
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x438) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x438) + 0x10);
    }
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x430) + 0x10);
  }
  *(undefined8 *)(param_3 + 0x18) = uVar5;
  if (!bVar3) {
    fVar13 = 0.0;
  }
  param_3[4] = fVar14;
  *param_3 = fVar12;
  param_3[1] = fVar15;
  param_3[2] = fVar13;
  param_3[3] = 0.0;
  if ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x28) & 0x2000000) == 0) {
LAB_141d4f386:
    plVar6 = DAT_146ac3e68;
    if (*(int *)(param_2 + 0x1a38) < 3) goto LAB_141d4f397;
  }
  else {
    if (2 < *(int *)(param_2 + 0x1a38)) {
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x1270) != 0)) {
        *(undefined8 *)(param_3 + 0xe) = *(undefined8 *)(*(longlong *)(lVar7 + 0x1270) + 0x10);
        *(undefined8 *)(param_3 + 0x12) = *(undefined8 *)(*(longlong *)(lVar7 + 0x12b8) + 0x10);
        uVar5 = *(undefined8 *)(*(longlong *)(lVar7 + 0x1300) + 0x10);
        *(undefined8 *)(param_3 + 0x14) = uVar5;
        plVar6 = DAT_146ac3e68;
        if (*(int *)(param_2 + 0x1a38) < 3) {
          plVar6 = DAT_146ac3e58;
        }
        lVar7 = plVar6[6];
        goto LAB_141d4f3b1;
      }
      goto LAB_141d4f386;
    }
LAB_141d4f397:
    plVar6 = DAT_146ac3e58;
  }
  lVar7 = plVar6[6];
  *(longlong *)(param_3 + 0xe) = lVar7;
  *(longlong *)(param_3 + 0x12) = lVar7;
  *(longlong *)(param_3 + 0x14) = lVar7;
LAB_141d4f3b1:
  *(longlong *)(param_3 + 0x16) = lVar7;
  uVar5 = FUN_141b33b80(uVar5,fVar12);
  *(undefined8 *)(param_3 + 0x10) = uVar5;
  return;
}



// FUNCTION 141d4f430 ShouldCompilePermutationImpl body=86 status=ok
// SIG undefined ShouldCompilePermutationImpl(void)

bool FPostProcessScreenSpaceReflectionsPS::ShouldCompilePermutationImpl(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1[1];
  uVar2 = iVar1 / 6 + (iVar1 >> 0x1f) +
          (int)(((longlong)iVar1 / 6 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
  uVar3 = uVar2 & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  if ((iVar1 == uVar2 * 6) && (uVar3 == 1)) {
    return false;
  }
  iVar1 = FUN_1419ef5f0(*param_1);
  return 1 < iVar1;
}



// FUNCTION 141d4f490 FUN_141d4f490 body=84 status=ok
// SIG undefined FUN_141d4f490(void)

undefined8 FUN_141d4f490(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (((((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x8000000) != 0) &&
       (*(longlong *)(param_1 + 0x18) != 0)) && (0 < *(int *)(DAT_146a81068 + 4))) &&
     (1.0 < *(float *)(param_1 + 0x17c4) || *(float *)(param_1 + 0x17c4) == 1.0)) {
    uVar2 = FUN_14274f980();
    cVar1 = IsAnyForwardShadingEnabled(uVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141d4f4f0 FUN_141d4f4f0 body=322 status=ok
// SIG undefined FUN_141d4f4f0(void)

undefined8 FUN_141d4f4f0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *(uint *)(param_1 + 0xe8);
  if (param_3 != '\0') {
    lVar3 = *(longlong *)(param_2 + 0x1ad0);
    if (*(longlong *)(param_2 + 0x1ad0) == 0) {
      lVar3 = param_2 + 0x1ac0;
    }
    if ((*(uint *)(lVar3 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if ((((1 < *(int *)(lVar3 + 0x10) - 1U) ||
       ((*(uint *)(*(longlong *)(param_2 + 0x1b30) + 4 + (longlong)(int)uVar1 * 8) & 0x2001) !=
        0x2001)) ||
      (fVar6 = *(float *)(lVar3 + 0xc4) - *(float *)(param_2 + 0x8e0),
      fVar5 = *(float *)(lVar3 + 0xc0) - *(float *)(param_2 + 0x8dc),
      fVar4 = *(float *)(lVar3 + 200) - *(float *)(param_2 + 0x8e4),
      *(float *)(lVar3 + 0xd8) * *(float *)(lVar3 + 0xd8) <=
      (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) *
      *(float *)(param_2 + 0x11ec) * *(float *)(param_2 + 0x11ec) *
      *(float *)(param_2 + 0x1784) * *(float *)(param_2 + 0x1784) * 0.0004)) ||
     (cVar2 = FUN_141e00f20(param_2,param_1), cVar2 == '\0')) {
    return 0;
  }
  cVar2 = FUN_141e02d40();
  if (cVar2 != '\0') {
    cVar2 = FUN_141ae37e0();
    if (cVar2 == '\0') {
      return 0;
    }
    if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x18) >> 0x13 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141d4f640 FUN_141d4f640 body=153 status=ok
// SIG undefined FUN_141d4f640(void)

void FUN_141d4f640(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6010));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6010));
  }
  iVar2 = *(int *)(param_1 + 0x6040);
  *(int *)(param_1 + 0x6040) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6044) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x6038,iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x6038) + (longlong)iVar2 * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
                    /* WARNING: Could not recover jumptable at 0x000141d4f6d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6010));
  return;
}



// FUNCTION 141d4f6e0 FUN_141d4f6e0 body=908 status=ok
// SIG undefined FUN_141d4f6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d4f6e0(undefined8 *param_1)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined1 local_88 [8];
  undefined **local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0xd) != 0) {
    local_68 = 0;
    local_78 = param_1[0xc];
    local_98 = &local_68;
    local_a8 = *(int *)(param_1 + 0xd) * 0xa0;
    local_60 = &local_80;
    local_58 = 1;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_80 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
    local_a0 = 0x202;
    local_70 = local_a8;
    (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_88,&DAT_146ab6e78,0xa0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_1[0xe]);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xf,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  }
  if (*(int *)(param_1 + 9) != 0) {
    local_78 = param_1[8];
    local_98 = &local_68;
    local_a8 = *(int *)(param_1 + 9) * 0x30;
    local_60 = &local_80;
    local_68 = 0;
    local_58 = 1;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_80 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
    local_a0 = 0x202;
    local_70 = local_a8;
    (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_88,&DAT_146ab6e78,0x30);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 10,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_1[10]);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  }
  if (*(int *)(param_1 + 5) != 0) {
    local_78 = param_1[4];
    local_98 = &local_68;
    local_a8 = *(int *)(param_1 + 5) << 6;
    local_60 = &local_80;
    local_68 = 0;
    local_58 = 1;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_80 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
    local_a0 = 0x202;
    local_70 = local_a8;
    (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_88,&DAT_146ab6e78,0x40);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_1[6]);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 7,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  }
  if (*(int *)(param_1 + 1) != 0) {
    local_78 = *param_1;
    local_98 = &local_68;
    local_a8 = *(int *)(param_1 + 1) * 0x50;
    local_60 = &local_80;
    local_68 = 0;
    local_58 = 1;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_80 = &PTR_GetBoundProgramCounterForTimerManager_144163fd8;
    local_a0 = 0x202;
    local_70 = local_a8;
    (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_88,&DAT_146ab6e78,0x50);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_88,&DAT_146ab6e78,param_1[2]);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 3,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  }
  return;
}



// FUNCTION 141d4fa70 FUN_141d4fa70 body=12 status=ok
// SIG undefined FUN_141d4fa70(void)

void FUN_141d4fa70(longlong param_1)

{
  FUN_141d4f6e0(param_1 + 0x6050);
  return;
}



// FUNCTION 141d4fa80 Thread body=57 status=ok
// SIG undefined Thread(void)

void `FRendererModule::DebugLogOnCrash'::`3'::FTest::Thread(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(DAT_146b17150 + 0x28);
  uVar2 = FUN_141672640();
                    /* WARNING: Could not recover jumptable at 0x000141d4fab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(DAT_146b17150 + 0x28,0,L"Mem FromReport",uVar2);
  return;
}



// FUNCTION 141d4fac0 FUN_141d4fac0 body=360 status=ok
// SIG undefined FUN_141d4fac0(void)

ulonglong FUN_141d4fac0(int *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  ulonglong in_RAX;
  longlong lVar8;
  float fVar9;
  ulonglong local_res20;
  ulonglong local_18 [2];
  
  if (DAT_146ab62df != '\0') {
    uVar7 = param_1[8] + 1U & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    in_RAX = (ulonglong)uVar7;
    param_1[8] = uVar7;
    if ((*(longlong *)(param_1 + (longlong)(int)uVar7 * 2 + 10) != 0) &&
       (*(longlong *)(param_1 + (longlong)(int)uVar7 * 2 + 0x12) != 0)) {
      if (DAT_146ab6383 != '\0') {
        plVar2 = (longlong *)(param_1 + 0x20);
        FUN_141ed9b00(plVar2);
        lVar4 = *plVar2;
        *plVar2 = 0;
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
      cVar5 = (**(code **)(*DAT_146ab6358 + 0x340))
                        (DAT_146ab6358,*(undefined8 *)(param_1 + (longlong)param_1[8] * 2 + 10),
                         &local_res20,1);
      cVar6 = (**(code **)(*DAT_146ab6358 + 0x340))
                        (DAT_146ab6358,*(undefined8 *)(param_1 + (longlong)param_1[8] * 2 + 0x12),
                         local_18,1);
      lVar8 = (longlong)param_1[7];
      lVar4 = *(longlong *)(param_1 + 2);
      param_1[6] = (int)((float)param_1[6] - *(float *)(lVar4 + lVar8 * 4));
      fVar9 = *(float *)(lVar4 + lVar8 * 4);
      if (local_18[0] < local_res20) {
        cVar5 = '\0';
        cVar6 = '\0';
      }
      else if ((cVar5 != '\0') && (cVar6 != '\0')) {
        fVar9 = (float)(longlong)(local_18[0] - local_res20);
        if ((longlong)(local_18[0] - local_res20) < 0) {
          fVar9 = fVar9 + 1.8446744e+19;
        }
        fVar9 = fVar9 * 0.001;
      }
      *(float *)(lVar4 + lVar8 * 4) = fVar9;
      in_RAX = (longlong)(param_1[7] + 1) / (longlong)*param_1 & 0xffffffff;
      param_1[6] = (int)(fVar9 + (float)param_1[6]);
      param_1[7] = (param_1[7] + 1) % *param_1;
      if ((cVar5 != '\0') && (cVar6 != '\0')) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141d4fc40 FUN_141d4fc40 body=496 status=ok
// SIG undefined FUN_141d4fc40(void)

void FUN_141d4fc40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x1e) & 1) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xd8);
      if (*(int *)(lVar1 + 0x1a20) != *(int *)(lVar1 + 0x1a4c)) {
        lVar3 = *(longlong *)(lVar1 + 0x1a58);
        if (*(longlong *)(lVar1 + 0x1a58) == 0) {
          lVar3 = lVar1 + 0x1a50;
        }
        iVar5 = *(int *)(lVar3 + ((longlong)*(int *)(lVar1 + 0x1a60) - 1U &
                                 (longlong)*(int *)(param_1 + 0x10)) * 4);
        if (iVar5 != -1) {
          do {
            puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x1a18) + (longlong)iVar5 * 0x28);
            if (*(int *)(*(longlong *)(lVar1 + 0x1a18) + (longlong)iVar5 * 0x28) ==
                *(int *)(param_1 + 0x10)) {
              if (iVar5 != -1) goto LAB_141d4fe13;
              break;
            }
            iVar5 = *(int *)(puVar6 + 4);
          } while (iVar5 != -1);
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_141d4fe13:
      puVar4 = puVar6 + 1;
      if (puVar6 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
      }
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xd8);
    uVar8 = 0;
    if (*(int *)(lVar1 + 0x1a20) != *(int *)(lVar1 + 0x1a4c)) {
      lVar3 = *(longlong *)(lVar1 + 0x1a58);
      if (*(longlong *)(lVar1 + 0x1a58) == 0) {
        lVar3 = lVar1 + 0x1a50;
      }
      iVar7 = *(int *)(lVar3 + ((longlong)*(int *)(lVar1 + 0x1a60) - 1U & (longlong)iVar5) * 4);
      if (iVar7 != -1) {
        do {
          uVar9 = *(longlong *)(lVar1 + 0x1a18) + (longlong)iVar7 * 0x28;
          if (*(int *)(*(longlong *)(lVar1 + 0x1a18) + (longlong)iVar7 * 0x28) == iVar5) {
            if (iVar7 != -1) goto LAB_141d4fcd4;
            break;
          }
          iVar7 = *(int *)(uVar9 + 0x20);
        } while (iVar7 != -1);
      }
    }
    uVar9 = uVar8;
LAB_141d4fcd4:
    iVar5 = *(int *)(uVar9 + 0x18);
    uVar10 = uVar8;
    if (0 < iVar5) {
      do {
        iVar7 = (int)uVar8;
        lVar1 = *(longlong *)(uVar9 + 0x10);
        if (*(longlong *)(lVar1 + uVar10) == param_1) {
          iVar2 = (iVar5 - iVar7) + -1;
          if (0 < iVar2) {
            iVar2 = 1;
          }
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar1 + (longlong)iVar7 * 8),
                       (void *)(lVar1 + (longlong)(iVar5 - iVar2) * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(uVar9 + 0x18);
          }
          *(int *)(uVar9 + 0x18) = iVar5 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(uVar9 + 0x10);
          iVar5 = *(int *)(uVar9 + 0x18);
          iVar7 = iVar7 + -1;
          uVar10 = uVar10 - 8;
        }
        uVar8 = (ulonglong)(iVar7 + 1U);
        uVar10 = uVar10 + 8;
      } while ((int)(iVar7 + 1U) < iVar5);
    }
    if (*(int *)(uVar9 + 0x18) == 0) {
      TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
      ::Remove(*(longlong *)(param_1 + 0xd8) + 0x1a18,param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 141d4fe40 FUN_141d4fe40 body=821 status=ok
// SIG undefined FUN_141d4fe40(void)

void FUN_141d4fe40(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  void *_Dst;
  longlong *plVar12;
  int iVar13;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [4];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  cVar4 = FUN_141d381a0(*(undefined4 *)(param_1 + 8));
  if (cVar4 != '\0') {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_68);
      FUN_141d2c0a0(param_1 + 0x1308,0);
      iVar6 = *(int *)(param_1 + 0x1370) + 0x1f;
      _Dst = *(void **)(param_1 + 0x1368);
      if (*(void **)(param_1 + 0x1368) == (void *)0x0) {
        _Dst = (void *)(param_1 + 0x1358);
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,0,(longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2);
      *(undefined4 *)(param_1 + 0x1370) = 0;
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_68._0_4_);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      plVar12 = (longlong *)0x0;
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
        plVar12 = (longlong *)*plVar8;
        if (plVar12 == (longlong *)0x0) {
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
          plVar12 = (longlong *)plVar8[1];
          iVar6 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar6 = 0x20;
          plVar8[1] = (longlong)plVar12;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar6 = (int)plVar8[2];
      }
      plVar8[1] = *plVar12;
      *(int *)(plVar8 + 2) = iVar6 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      local_60 = 0;
      local_58 = 0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_144e485a0;
      *(undefined1 *)(plVar12 + 3) = 0;
      plVar12[4] = 0;
      plVar12[2] = param_1;
      lVar9 = plVar12[4];
      piVar1 = (int *)(lVar9 + 0x48);
      if (lVar9 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_140445100(plVar12,0,0xff,1);
      if (lVar9 != 0) {
        LOCK();
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FGraphEvent::Recycle(lVar9);
        }
      }
    }
    iVar6 = 0;
    if (param_3 == '\0') {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(param_1 + 0x1380) - *(int *)(param_1 + 0x13ac);
    }
    BeginReflectionCaptureSlowTask(iVar13,param_2);
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_50,param_1 + 0x1378);
    if (local_34 < *(int *)(local_40 + 0x18)) {
      do {
        iVar3 = local_34;
        if (0x14 < iVar13) {
          iVar11 = 1;
          if (0 < iVar13 / 5) {
            iVar11 = iVar13 / 5;
          }
          if (iVar6 % iVar11 == 0) {
            FUN_141685240(DAT_1468b6160,iVar6,iVar13);
          }
        }
        iVar6 = iVar6 + 1;
        FUN_141d1fa00(param_1,*(undefined8 *)(*local_50 + (longlong)iVar3 * 8),param_3);
        local_38 = local_38 & ~local_44;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_48);
      } while (local_34 < *(int *)(local_40 + 0x18));
    }
    if (0x14 < iVar13) {
      FUN_14166aae0(DAT_1468b6160);
    }
  }
  return;
}



// FUNCTION 141d50180 FUN_141d50180 body=1140 status=ok
// SIG undefined FUN_141d50180(void)

void FUN_141d50180(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  float *pfVar12;
  DWORD *pDVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined8 local_res20;
  float fStack_10c;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  
  if (param_2[0x75] == 0) {
    if (*DAT_146a82560 != 0) {
      fVar18 = (float)(**(code **)(*param_2 + 0x590))(param_2);
      pfVar12 = (float *)FLinearColor::FLinearColor(local_78,param_2 + 0x5d);
      if (((*(byte *)((longlong)param_2 + 0x24c) & 0x20) != 0) &&
         (((1e-05 <= fVar18 * *pfVar12 * fVar18 * *pfVar12 ||
           (1e-05 <= fVar18 * pfVar12[1] * fVar18 * pfVar12[1])) ||
          (1e-05 <= fVar18 * pfVar12[2] * fVar18 * pfVar12[2])))) {
        (**(code **)(*param_1 + 0x38))(param_1,param_2);
      }
    }
  }
  else {
    fStack_10c = (float)(**(code **)(*param_2 + 0x590))(param_2);
    pfVar12 = (float *)FLinearColor::FLinearColor(local_98,param_2 + 0x5d);
    lVar7 = param_2[0x5e];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x2f4);
    fVar20 = fStack_10c * *pfVar12;
    fVar19 = fStack_10c * pfVar12[1];
    fVar18 = fStack_10c * pfVar12[2];
    fStack_10c = fStack_10c * pfVar12[3];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x394);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x38c);
    lVar8 = param_2[0x72];
    iVar10 = (**(code **)(*param_2 + 0x570))(param_2);
    if (iVar10 == 0) {
      uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x434);
      local_f0 = (undefined4)param_2[0x87];
    }
    if ((*(byte *)((longlong)param_2 + 0x304) & 1) != 0) {
      pfVar12 = (float *)FLinearColor::MakeFromColorTemperature(local_88,(int)param_2[0x5f]);
      fVar20 = fVar20 * *pfVar12;
      fVar19 = fVar19 * pfVar12[1];
      fVar18 = fVar18 * pfVar12[2];
      fStack_10c = fStack_10c * pfVar12[3];
    }
    if (((*DAT_146a82560 == 0) || (1e-05 <= fVar20 * fVar20)) ||
       ((1e-05 <= fVar19 * fVar19 || (1e-05 <= fVar18 * fVar18)))) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
        local_c8 = CONCAT44(fVar19,fVar20);
        uStack_c0 = CONCAT44(fStack_10c,fVar18);
        local_d8 = *(undefined8 *)(param_2[0x75] + 0x20);
        local_a8 = CONCAT44(uStack_f4,uVar5);
        local_a0 = local_f0;
        local_d0 = param_1;
        local_b8 = (int)lVar7;
        uStack_b4 = uVar3;
        uStack_b0 = uVar4;
        uStack_ac = (int)lVar8;
        FUN_141d2ab30(&local_d8,2,local_res10);
      }
      else {
        lVar6 = *(longlong *)(param_2[0x75] + 0x20);
        pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar14 = TlsGetValue(*pDVar13);
        plVar15 = (longlong *)0x0;
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)operator_new(0x18);
          if (plVar14 != (longlong *)0x0) {
            *plVar14 = 0;
            plVar14[1] = 0;
            *(undefined4 *)(plVar14 + 2) = 0;
            plVar15 = plVar14;
          }
          TlsSetValue(*pDVar13,plVar15);
          plVar14 = plVar15;
        }
        plVar15 = (longlong *)plVar14[1];
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)*plVar14;
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
            plVar14[1] = (longlong)plVar15;
            if (plVar15 == (longlong *)0x0) {
              puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar14[1] = (longlong)puVar16;
              lVar17 = 0x1f;
              do {
                puVar2 = puVar16 + 0x20;
                *puVar16 = puVar2;
                lVar17 = lVar17 + -1;
                puVar16 = puVar2;
              } while (lVar17 != 0);
              *puVar2 = 0;
              plVar15 = (longlong *)plVar14[1];
            }
            iVar10 = 0x20;
            *(undefined4 *)(plVar14 + 2) = 0x20;
          }
          else {
            iVar10 = 0x20;
            plVar14[1] = (longlong)plVar15;
            *(undefined4 *)(plVar14 + 2) = 0x20;
            *plVar14 = 0;
          }
        }
        else {
          iVar10 = (int)plVar14[2];
        }
        plVar14[1] = *plVar15;
        *(int *)(plVar14 + 2) = iVar10 + -1;
        *plVar15 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar15 + 1) = 0xff;
        local_res20 = 0;
        *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
        *plVar15 = (longlong)&PTR_FUN_144e48750;
        *(undefined1 *)(plVar15 + 10) = 0;
        plVar15[0xb] = 0;
        plVar15[4] = CONCAT44(fVar19,fVar20);
        plVar15[5] = CONCAT44(fStack_10c,fVar18);
        plVar15[2] = lVar6;
        *(int *)(plVar15 + 6) = (int)lVar7;
        *(undefined4 *)((longlong)plVar15 + 0x34) = uVar3;
        *(undefined4 *)(plVar15 + 7) = uVar4;
        *(int *)((longlong)plVar15 + 0x3c) = (int)lVar8;
        plVar15[3] = (longlong)param_1;
        plVar15[8] = CONCAT44(uStack_f4,uVar5);
        *(undefined4 *)(plVar15 + 9) = local_f0;
        lVar7 = plVar15[0xb];
        piVar1 = (int *)(lVar7 + 0x48);
        if (lVar7 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_res18 = lVar7;
        FUN_141a0d200(uVar5,0,0xff,1);
        if (lVar7 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(local_res18);
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x40))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 141d50600 FUN_141d50600 body=1029 status=ok
// SIG undefined FUN_141d50600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d50600(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float fVar10;
  char cVar11;
  DWORD DVar12;
  longlong *plVar13;
  DWORD *pDVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  uint local_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float local_158;
  uint uStack_154;
  float fStack_150;
  uint uStack_14c;
  float local_148;
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined1 local_138 [16];
  longlong local_128;
  longlong lStack_120;
  undefined1 local_118 [16];
  uint local_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  float local_f8;
  uint uStack_f4;
  float fStack_f0;
  uint uStack_ec;
  float local_e8;
  float fStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 local_d8 [16];
  uint local_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float local_b8;
  uint uStack_b4;
  float fStack_b0;
  uint uStack_ac;
  float local_a8;
  float fStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 local_98 [16];
  longlong local_88;
  longlong lStack_80;
  
  fVar10 = fRam0000000146a8265c;
  if (param_2[0x75] != 0) {
    fVar29 = *(float *)(param_2 + 0x42);
    fVar6 = *(float *)((longlong)param_2 + 0x214);
    fVar7 = *(float *)(param_2 + 0x43);
    fVar8 = *(float *)((longlong)param_2 + 0x21c);
    fVar21 = fVar6 + fVar6;
    fVar23 = fVar7 + fVar7;
    fVar27 = fVar29 * (fVar29 + fVar29);
    fVar26 = fVar8 * (fVar29 + fVar29);
    fVar30 = fVar8 * fVar23 + fVar29 * fVar21;
    fVar31 = fVar26 + fVar6 * fVar23;
    fVar32 = fVar8 * fVar21 + fVar29 * fVar23;
    fVar28 = fVar29 * fVar21 - fVar8 * fVar23;
    fVar26 = fVar6 * fVar23 - fVar26;
    fVar29 = fVar29 * fVar23 - fVar8 * fVar21;
    auVar4 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x44),0);
    local_d8._12_4_ = fRam0000000146a8265c;
    local_d8._0_12_ = auVar4;
    local_98._12_4_ = fRam0000000146a8265c;
    local_98._0_12_ = auVar4;
    uVar20 = (uint)(_DAT_146a82650 - (fVar7 * fVar23 + fVar6 * fVar21)) & _DAT_146a82660;
    uVar22 = (uint)(fRam0000000146a82654 - (fVar7 * fVar23 + fVar27)) & uRam0000000146a82664;
    uVar24 = (uint)(fRam0000000146a82658 - (fVar6 * fVar21 + fVar27)) & uRam0000000146a82668;
    uVar25 = (uint)(fRam0000000146a8265c - (fVar27 + fVar27)) & uRam0000000146a8266c;
    local_108 = uVar20;
    fStack_104 = fVar30;
    fStack_100 = fVar29;
    uStack_fc = uVar25;
    local_f8 = fVar28;
    uStack_f4 = uVar22;
    fStack_f0 = fVar31;
    uStack_ec = uVar25;
    local_e8 = fVar32;
    fStack_e4 = fVar26;
    uStack_e0 = uVar24;
    uStack_dc = uVar25;
    local_c8 = uVar20;
    fStack_c4 = fVar30;
    fStack_c0 = fVar29;
    uStack_bc = uVar25;
    local_b8 = fVar28;
    uStack_b4 = uVar22;
    fStack_b0 = fVar31;
    uStack_ac = uVar25;
    local_a8 = fVar32;
    fStack_a4 = fVar26;
    uStack_a0 = uVar24;
    uStack_9c = uVar25;
    plVar13 = (longlong *)(**(code **)(*param_2 + 0x568))(param_2,local_118);
    lVar17 = *plVar13;
    lVar9 = plVar13[1];
    local_88 = lVar17;
    lStack_80 = lVar9;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar11 = FUN_1415ad720(&DAT_1468e2448), cVar11 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
      lVar3 = *(longlong *)(param_2[0x75] + 0x20);
      local_138._12_4_ = fVar10;
      local_138._0_12_ = auVar4;
      local_168 = uVar20;
      fStack_164 = fVar30;
      fStack_160 = fVar29;
      uStack_15c = uVar25;
      local_158 = fVar28;
      uStack_154 = uVar22;
      fStack_150 = fVar31;
      uStack_14c = uVar25;
      local_148 = fVar32;
      fStack_144 = fVar26;
      uStack_140 = uVar24;
      uStack_13c = uVar25;
      local_128 = lVar17;
      lStack_120 = lVar9;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x90) & 4) != 0)) {
        lVar17 = *(longlong *)(lVar3 + 0x30);
        if (*(char *)(lVar17 + 0x188) != '\0') {
          FUN_141bb4300(lVar3);
          lVar17 = *(longlong *)(lVar3 + 0x30);
        }
        FUN_142378960(lVar17,&local_168,&local_128);
        if ((*(int *)(lVar3 + 0x58) != -1) &&
           (FUN_141b9ed00((longlong)*(int *)(lVar3 + 0x58) * 0x30 +
                          *(longlong *)(*(longlong *)(lVar3 + 0xa8) + 0x1070),lVar3),
           *(char *)(*(longlong *)(lVar3 + 0x30) + 0x188) != '\0')) {
          FUN_141b8e5f0(lVar3);
        }
      }
      QueryPerformanceCounter(&local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    }
    else {
      lVar3 = *(longlong *)(param_2[0x75] + 0x20);
      pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar15 = TlsGetValue(*pDVar14);
      plVar13 = (longlong *)0x0;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)operator_new(0x18);
        if (plVar15 != (longlong *)0x0) {
          *plVar15 = 0;
          plVar15[1] = 0;
          *(undefined4 *)(plVar15 + 2) = 0;
          plVar13 = plVar15;
        }
        TlsSetValue(*pDVar14,plVar13);
        plVar15 = plVar13;
      }
      plVar13 = (longlong *)plVar15[1];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)*plVar15;
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
          plVar15[1] = (longlong)plVar13;
          if (plVar13 == (longlong *)0x0) {
            puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar15[1] = (longlong)puVar16;
            lVar19 = 0x1f;
            do {
              puVar2 = puVar16 + 0x20;
              *puVar16 = puVar2;
              lVar19 = lVar19 + -1;
              puVar16 = puVar2;
            } while (lVar19 != 0);
            *puVar2 = 0;
            plVar13 = (longlong *)plVar15[1];
          }
          iVar18 = 0x20;
          *(undefined4 *)(plVar15 + 2) = 0x20;
        }
        else {
          iVar18 = 0x20;
          plVar15[1] = (longlong)plVar13;
          *(undefined4 *)(plVar15 + 2) = 0x20;
          *plVar15 = 0;
        }
      }
      else {
        iVar18 = (int)plVar15[2];
      }
      plVar15[1] = *plVar13;
      *(int *)(plVar15 + 2) = iVar18 + -1;
      *plVar13 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar13 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      *(undefined1 *)(plVar13 + 0xe) = 0;
      *plVar13 = (longlong)&PTR_FUN_144e48740;
      plVar13[0xf] = 0;
      *(uint *)(plVar13 + 4) = uVar20;
      *(float *)((longlong)plVar13 + 0x24) = fVar30;
      *(float *)(plVar13 + 5) = fVar29;
      *(uint *)((longlong)plVar13 + 0x2c) = uVar25;
      plVar13[3] = lVar3;
      *(float *)(plVar13 + 6) = fVar28;
      *(uint *)((longlong)plVar13 + 0x34) = uVar22;
      *(float *)(plVar13 + 7) = fVar31;
      *(uint *)((longlong)plVar13 + 0x3c) = uVar25;
      plVar13[2] = param_1;
      *(float *)(plVar13 + 8) = fVar32;
      *(float *)((longlong)plVar13 + 0x44) = fVar26;
      *(uint *)(plVar13 + 9) = uVar24;
      *(uint *)((longlong)plVar13 + 0x4c) = uVar25;
      auVar5._12_4_ = fVar10;
      auVar5._0_12_ = auVar4;
      *(undefined1 (*) [16])(plVar13 + 10) = auVar5;
      plVar13[0xc] = lVar17;
      plVar13[0xd] = lVar9;
      lVar17 = plVar13[0xf];
      piVar1 = (int *)(lVar17 + 0x48);
      if (lVar17 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar17;
      FUN_141c2c3c0(plVar13,0,0xff,1,0,0);
      if (lVar17 != 0) {
        LOCK();
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d50a10 FUN_141d50a10 body=561 status=ok
// SIG undefined FUN_141d50a10(void)

void FUN_141d50a10(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  char local_40;
  char cStack_3f;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if ((*(char *)((longlong)param_1 + 0x51) == '\0') && (1 < *(int *)(param_2 + 8))) {
    if ((char)param_1[10] != '\0') {
      TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
      ::Empty(param_1,0);
      *(undefined1 *)(param_1 + 10) = 0;
      return;
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar4 = *puVar14;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar4 == 0) {
        lVar12 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar11 = local_78 + 1;
        bVar6 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar11;
        if (bVar6) goto LAB_141d50aff;
        uVar4 = puVar14[lVar12 + 1];
      }
      uStack_74 = -uVar4 & uVar4;
      iVar11 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      local_68._4_4_ = (uStack_60 - iVar11) + 0x1f;
      if (iVar3 < local_68._4_4_) {
LAB_141d50aff:
        local_68._4_4_ = iVar3;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    iStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = '\0';
    cStack_3f = '\0';
    local_10._0_4_ = SUB84(param_1,0);
    local_10._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar6 = local_68._4_4_ < (int)param_1[5];
    local_48 = param_1;
    local_38 = param_1;
    local_10 = param_1;
    local_68 = puStack_28;
    if (bVar6) {
      do {
        lVar13 = (longlong)iStack_5c * 0xc0;
        lVar12 = *param_1;
        if (*(char *)(lVar13 + 0xa0 + lVar12) == '\0') {
          TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
          ::Remove(local_58._8_8_,iStack_5c);
          local_40 = '\x01';
        }
        else {
          lVar5 = *(longlong *)(lVar13 + 0x18 + lVar12);
          if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 8), lVar5 != 0)) {
            uVar10 = *(undefined8 *)(lVar5 + 0x88);
            puVar1 = (undefined8 *)(lVar13 + 0x60 + lVar12);
            *puVar1 = *(undefined8 *)(lVar5 + 0x80);
            puVar1[1] = uVar10;
            uVar10 = *(undefined8 *)(lVar5 + 0x98);
            puVar1 = (undefined8 *)(lVar13 + 0x70 + lVar12);
            *puVar1 = *(undefined8 *)(lVar5 + 0x90);
            puVar1[1] = uVar10;
            uVar7 = *(undefined4 *)(lVar5 + 0xa4);
            uVar8 = *(undefined4 *)(lVar5 + 0xa8);
            uVar9 = *(undefined4 *)(lVar5 + 0xac);
            puVar2 = (undefined4 *)(lVar13 + 0x80 + lVar12);
            *puVar2 = *(undefined4 *)(lVar5 + 0xa0);
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            uVar10 = *(undefined8 *)(lVar5 + 0xb8);
            puVar1 = (undefined8 *)(lVar13 + 0x90 + lVar12);
            *puVar1 = *(undefined8 *)(lVar5 + 0xb0);
            puVar1[1] = uVar10;
          }
          *(undefined1 *)(lVar13 + 0xa0 + lVar12) = 0;
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if ((local_40 != '\0') && (cStack_3f != '\0')) {
        TSet<TTuple<FPrimitiveComponentId,FMotionBlurInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMotionBlurInfo,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),
                            CONCAT71((uint7)(uint3)((uint)iStack_5c >> 8),1));
      }
    }
  }
  return;
}



// FUNCTION 141d50c50 FUN_141d50c50 body=539 status=ok
// SIG undefined FUN_141d50c50(void)

void FUN_141d50c50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  void *pvVar11;
  longlong lVar12;
  void *_Src_00;
  undefined8 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [32];
  
  pvVar11 = (void *)0x0;
  local_68 = *(int *)(param_2 + 1);
  lVar12 = (longlong)local_68;
  _Src = (void *)*param_2;
  local_70 = (void *)0x0;
  local_78 = param_1;
  if (local_68 == 0) {
    local_64 = 0;
    _Src_00 = pvVar11;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_70,local_68,0);
    _Src_00 = local_70;
    _guard_xfg_dispatch_icall_nop(local_70,_Src,lVar12 << 3);
  }
  iVar3 = local_68;
  uVar9 = local_78;
  if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      local_58 = (void *)0x0;
      local_60 = uVar9;
      local_50 = iVar3;
      if (iVar3 == 0) {
        local_4c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,iVar3,0);
        pvVar11 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,_Src_00,(longlong)iVar3 << 3);
      }
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141d15e80(&local_60,uVar9);
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
    }
    else {
      plVar10 = (longlong *)FUN_141d28ab0(local_48,0,0xff);
      lVar12 = *plVar10;
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
      puVar1 = (undefined8 *)(lVar12 + 0x18);
      *puVar1 = 0;
      *(int *)(lVar12 + 0x20) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(lVar12 + 0x24) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar3,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src_00,(longlong)iVar3 << 3);
      }
      lVar12 = *plVar10;
      lVar6 = plVar10[2];
      lVar4 = plVar10[1];
      lVar5 = *(longlong *)(lVar12 + 0x30);
      piVar2 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        _Src_00 = local_70;
      }
      FUN_14048a160(lVar12,lVar4,(int)lVar6,1);
      if (lVar5 != 0) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        _Src_00 = local_70;
        if (iVar3 == 1) {
          FGraphEvent::Recycle(lVar5);
          _Src_00 = local_70;
        }
      }
    }
  }
  else {
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_141d15e80(&local_78,uVar9);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 141d50e70 FUN_141d50e70 body=804 status=ok
// SIG undefined FUN_141d50e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d50e70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined8 *local_290;
  undefined4 local_288;
  longlong *local_280;
  longlong local_278;
  undefined8 local_268 [2];
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_230;
  undefined1 local_228 [64];
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [64];
  undefined1 local_198 [336];
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (*(char *)(param_1 + 0xfb) == '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x1410) == '\0') {
      return;
    }
    if (*(char *)(lVar1 + 0x260) == '\0') {
      return;
    }
  }
  lVar6 = *(longlong *)(param_1 + 8);
  if ((*(int *)(lVar6 + 0x10) != 2) || (uVar13 = 1, (*(uint *)(lVar6 + 0x18) & 0x40000000) != 0)) {
    uVar13 = 2;
  }
  plVar2 = *(longlong **)(param_1 + 0xd8);
  uVar10 = 0;
  lVar3 = plVar2[1];
  if (((((int)lVar3 < 2) && (0 < (int)plVar2[0x2bd])) &&
      ((*(int *)(lVar6 + 0x10) - 1U < 2 ||
       ((*(int *)(lVar6 + 0x18) < 0 || (*(char *)(lVar6 + 0x14) == '\x02')))))) &&
     ((*(uint *)(lVar6 + 0x1c) >> 1 & 1) != 0)) {
    local_250 = *(undefined4 *)(lVar6 + 200);
    local_258 = *(undefined8 *)(lVar6 + 0xc0);
    local_288 = (**(code **)(*plVar2 + 0x290))(plVar2);
    plVar11 = (longlong *)0x0;
    local_298 = 0;
    local_280 = plVar2 + 0x2b2;
  }
  else {
    if (lVar1 == 0) {
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,0);
      goto LAB_141d51015;
    }
    local_280 = (longlong *)0x0;
    local_288 = 0;
    plVar11 = plVar2 + 0x27d;
    local_250 = 0;
    local_240 = 0;
    local_258 = 0;
    local_298 = lVar1;
  }
  local_290 = &local_258;
  local_278 = 0;
  uVar4 = FUN_141b960b0(local_268,uVar13,(int)lVar3,plVar11);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,uVar4);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_268);
LAB_141d51015:
  *(undefined1 *)(param_1 + 0xfc) = 0;
  local_1e8 = (undefined1 *)0x0;
  local_1e0 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),local_228);
  puVar8 = local_1e8;
  uVar12 = uVar10;
  if (0 < (int)local_1e0) {
    do {
      puVar5 = local_228;
      if (puVar8 != (undefined1 *)0x0) {
        puVar5 = puVar8;
      }
      lVar1 = *(longlong *)(puVar5 + uVar12);
      if (lVar1 != 0) {
        lVar6 = FLightCacheInterface::GetShadowMapInteraction(lVar1,local_1d8);
        if ((*(int *)(lVar6 + 0x30) == 2) ||
           (lVar6 = FUN_14274f0e0(lVar1,local_198,*(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 8)
                                 ), *(int *)(lVar6 + 0x130) == 2)) {
          local_290 = &local_248;
          local_280 = (longlong *)0x0;
          local_240 = 0;
          local_288 = 0;
          local_230 = 0;
          local_248 = 0;
          local_298 = 0;
          local_278 = lVar1;
          puVar7 = (undefined8 *)
                   FUN_141b960b0(&local_258,uVar13,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 8),0);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x20,*puVar7);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_258);
          *(undefined1 *)(param_1 + 0xfc) = 1;
          puVar8 = local_1e8;
        }
        else {
          local_268[0] = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x20,0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_268);
          puVar8 = local_1e8;
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar12 = uVar12 + 8;
    } while ((int)uVar9 < (int)local_1e0);
  }
  *(undefined1 *)(param_1 + 0xfb) = 0;
  if (puVar8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d511a0 FUN_141d511a0 body=168 status=ok
// SIG undefined FUN_141d511a0(void)

void FUN_141d511a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  if (((*(char *)(param_1 + 0x1a4) != '\0') ||
      ((*(uint *)(*(longlong *)(param_2 + 8) + 0x1c) >> 8 & 1) != 0)) &&
     ((*(uint *)(*(longlong *)(param_2 + 8) + 0x1c) & 0x200014) == 0x200014)) {
    plVar2 = *(longlong **)(param_1 + 0x110);
    plVar1 = plVar2 + *(int *)(param_1 + 0x118);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return;
      }
    }
    local_res10 = param_2;
    piVar3 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 0x120,local_res8,param_2);
    if ((*piVar3 == -1) && (0 < *(int *)(param_2 + 0x80))) {
      FUN_141b1d480(param_1 + 0x120,local_res8,&local_res10,0);
    }
  }
  return;
}



// FUNCTION 141d51250 FUN_141d51250 body=498 status=ok
// SIG undefined FUN_141d51250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d51250(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_18 = 1;
  local_20 = (undefined8 *)0x0;
  FUN_1407eebb0(&local_28,0);
  puVar9 = &local_28;
  if (local_20 != (undefined8 *)0x0) {
    puVar9 = local_20;
  }
  *puVar9 = param_2;
  uVar8 = local_18 & 0xffffffff;
  puVar9 = local_20;
  uVar7 = (uint)local_18;
  while (0 < (int)uVar7) {
    iVar6 = (int)uVar8;
    iVar11 = iVar6 + -1;
    puVar10 = &local_28;
    if (puVar9 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    lVar1 = *(longlong *)(((ulonglong)puVar10 | (ulonglong)puVar9) + (longlong)iVar11 * 8);
    iVar4 = (iVar6 - iVar11) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(((ulonglong)puVar10 | (ulonglong)puVar9) + (longlong)iVar11 * 8),
                 (void *)(((ulonglong)puVar10 | (ulonglong)puVar9) + (longlong)iVar6 * 8),
                 (longlong)iVar4 << 3);
      puVar9 = local_20;
      iVar6 = (uint)local_18;
    }
    local_18 = CONCAT44(local_18._4_4_,iVar6 - 1U);
    uVar7 = iVar6 - 1U;
    if (lVar1 != 0) {
      lVar5 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         ((*(longlong *)(lVar1 + 0x120) != 0 || (lVar5 = FUN_1423407b0(lVar1), lVar5 != 0)))) {
        lVar5 = *(longlong *)(lVar1 + 0x120);
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(lVar1);
        }
        if ((*(longlong *)(lVar5 + 0x1b8) == param_1) &&
           (cVar3 = FUN_142399ef0(lVar1), cVar3 != '\0')) {
          FUN_141d51590(param_1,lVar1);
        }
      }
      iVar6 = *(int *)(lVar1 + 0x1a8);
      puVar9 = local_20;
      uVar7 = (uint)local_18;
      if (iVar6 != 0) {
        if (local_18._4_4_ < (int)(iVar6 + (uint)local_18)) {
          FUN_1407eed70(&local_28);
        }
        puVar9 = &local_28;
        if (local_20 != (undefined8 *)0x0) {
          puVar9 = local_20;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar9 + (int)(uint)local_18,*(void **)(lVar1 + 0x1a0),(longlong)iVar6 << 3);
        uVar7 = (uint)local_18 + iVar6;
        local_18 = CONCAT44(local_18._4_4_,uVar7);
        puVar9 = local_20;
      }
    }
    uVar8 = (ulonglong)uVar7;
  }
  if (puVar9 != (undefined8 *)0x0) {
    FMemory::Free(puVar9);
  }
  return;
}



// FUNCTION 141d51450 FUN_141d51450 body=307 status=ok
// SIG undefined FUN_141d51450(void)

void FUN_141d51450(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_2 + 0x640) == 0) {
    return;
  }
  lVar8 = (**(code **)(*param_1 + 0x208))();
  *(undefined4 *)(param_2 + 0x368) = *(undefined4 *)(lVar8 + 0x790);
  lVar8 = *(longlong *)(param_2 + 0x640);
  if (((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)))))) {
    plVar9 = (longlong *)FUN_141d28c00(local_28,0,0xff);
    local_38 = SUB84(param_1,0);
    uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_30 = (undefined4)lVar8;
    uStack_2c = (undefined4)((ulonglong)lVar8 >> 0x20);
    lVar8 = *plVar9;
    *(undefined4 *)(lVar8 + 0x10) = local_38;
    *(undefined4 *)(lVar8 + 0x14) = uStack_34;
    *(undefined4 *)(lVar8 + 0x18) = uStack_30;
    *(undefined4 *)(lVar8 + 0x1c) = uStack_2c;
    lVar8 = *plVar9;
    lVar5 = plVar9[2];
    lVar3 = plVar9[1];
    lVar4 = *(longlong *)(lVar8 + 0x28);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(lVar8,lVar3,(int)lVar5,1);
    if (lVar4 == 0) {
      return;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    FGraphEvent::Recycle(lVar4);
    return;
  }
  FBaseGraphTask::GetSmallTaskAllocator();
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x140) != 0)) {
    FUN_141d511a0(param_1 + 0x2be);
    return;
  }
  return;
}



// FUNCTION 141d51590 FUN_141d51590 body=665 status=ok
// SIG undefined FUN_141d51590(void)

void FUN_141d51590(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  DWORD *pDVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 uVar12;
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar6 = (longlong *)FUN_14238b2f0(param_2);
  plVar10 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
LAB_141d515e5:
    plVar6 = plVar10;
  }
  else {
    lVar7 = FUN_1429f11d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_141d515e5;
  }
  uVar12 = 0;
  if ((plVar6 != param_2) && (plVar6 != (longlong *)0x0)) {
    uVar12 = *(undefined4 *)((longlong)plVar6 + 0x354);
  }
  if (param_2[200] == 0) {
    return;
  }
  if (DAT_146ac3ac5 != '\0') goto LAB_141d516b2;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    bVar3 = false;
    if (DVar5 == DAT_1468c21c0) goto LAB_141d51654;
  }
  else {
LAB_141d51654:
    bVar3 = true;
  }
  if (bVar3) {
    lVar7 = param_2[200];
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_40);
    lVar7 = *(longlong *)(lVar7 + 0x140);
    FUN_141d4fc40(lVar7);
    *(undefined4 *)(lVar7 + 0x28) = uVar12;
    FUN_141d38290(lVar7);
    QueryPerformanceCounter(&local_48);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_48.s.LowPart - local_40._0_4_);
    return;
  }
LAB_141d516b2:
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar8);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar10 = plVar6;
    }
    TlsSetValue(*pDVar8,plVar10);
    plVar6 = plVar10;
  }
  plVar10 = (longlong *)plVar6[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar6;
    if (plVar10 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar9;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar7 = lVar7 + -1;
          puVar9 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar10 = (longlong *)plVar6[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar6[1] = (longlong)plVar10;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar11 = (int)plVar6[2];
  }
  plVar6[1] = *plVar10;
  *(int *)(plVar6 + 2) = iVar11 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  local_38 = 0;
  local_30 = 0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *plVar10 = (longlong)&PTR_FUN_144e486c0;
  *(undefined1 *)(plVar10 + 4) = 0;
  plVar10[5] = 0;
  plVar10[2] = param_2[200];
  *(undefined4 *)(plVar10 + 3) = uVar12;
  lVar7 = plVar10[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(plVar10,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(lVar7);
    }
  }
  return;
}



// FUNCTION 141d51830 FUN_141d51830 body=2173 status=ok
// SIG undefined FUN_141d51830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d51830(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  char cVar22;
  int iVar23;
  DWORD DVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  longlong *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  longlong *local_388;
  longlong local_380;
  longlong local_378;
  longlong lStack_370;
  longlong local_368;
  undefined4 local_360;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined8 local_34c;
  undefined4 local_344;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  longlong *local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined8 uStack_284;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_128 [32];
  undefined1 local_108 [224];
  
  lVar25 = (**(code **)(*param_1 + 0x208))();
  fVar29 = *(float *)(lVar25 + 0x790) - *(float *)(param_2 + 0x6d);
  if (((fVar29 < -0.0001) || (*(float *)(param_2 + 0x6d) < 0.0001)) || (0.0001 < fVar29)) {
    *(float *)(param_2 + 0x6d) = *(float *)(lVar25 + 0x790);
  }
  if (param_2[200] != 0) {
    fVar29 = *(float *)(param_2 + 0x3a);
    fVar2 = *(float *)(param_2 + 0xd8);
    fVar3 = *(float *)(param_2 + 0x3b);
    fVar4 = *(float *)(param_2 + 0xd9);
    fVar36 = *(float *)((longlong)param_2 + 0x1d4) - *(float *)((longlong)param_2 + 0x6c4);
    fVar5 = *(float *)(param_2 + 0x3c);
    fVar6 = *(float *)(param_2 + 0xda);
    fVar33 = *(float *)((longlong)param_2 + 0x1dc) - *(float *)((longlong)param_2 + 0x6cc);
    fVar30 = *(float *)((longlong)param_2 + 0x1e4) - *(float *)((longlong)param_2 + 0x6d4);
    local_208 = *(float *)(param_2 + 0x44);
    fStack_204 = *(float *)((longlong)param_2 + 0x224);
    fStack_200 = *(float *)(param_2 + 0x45);
    uStack_1fc = *(undefined4 *)((longlong)param_2 + 0x22c);
    fVar35 = fStack_204 - *(float *)(param_2 + 0xdc);
    fVar31 = local_208 - *(float *)((longlong)param_2 + 0x6dc);
    fVar34 = fStack_200 - *(float *)((longlong)param_2 + 0x6e4);
    fVar32 = (float)(**(code **)(*DAT_146a82570 + 0x70))();
    if ((*(byte *)(param_2 + 0x73) & 1) != 0) {
      fVar32 = -1.0;
    }
    if (((fVar32 < fVar36 * fVar36 + (fVar29 - fVar2) * (fVar29 - fVar2) +
                   (fVar3 - fVar4) * (fVar3 - fVar4)) ||
        (fVar32 < (fVar5 - fVar6) * (fVar5 - fVar6) + fVar33 * fVar33 + fVar30 * fVar30)) ||
       (fVar32 < fVar35 * fVar35 + fVar31 * fVar31 + fVar34 * fVar34)) {
      cVar22 = (**(code **)(*param_2 + 0x6e8))(param_2);
      if (cVar22 == '\0') {
        local_3a8 = 0;
        local_3a0 = 0;
        lVar25 = FUN_14238b320(param_2);
        uStack_3ac = 0x3f800000;
        if (lVar25 == 0) {
          uStack_3b0 = 0;
          uStack_3b4 = 0;
          local_3b8 = 0;
        }
        else {
          lVar25 = *(longlong *)(lVar25 + 0x168);
          if (lVar25 == 0) {
            local_2c4 = DAT_1468b5d98;
            puVar26 = &local_2cc;
            local_2cc = _DAT_1468b5d90;
          }
          else {
            local_1f8 = *(undefined4 *)(lVar25 + 0x220);
            uStack_1f4 = *(undefined4 *)(lVar25 + 0x224);
            uStack_1f0 = *(undefined4 *)(lVar25 + 0x228);
            uStack_1ec = *(undefined4 *)(lVar25 + 0x22c);
            puVar26 = (undefined8 *)&local_2d8;
            local_2d8 = local_1f8;
            local_2d0 = uStack_1f0;
            uStack_2d4 = uStack_1f4;
          }
          local_3a8 = *puVar26;
          local_3a0 = *(undefined4 *)(puVar26 + 1);
          if (lVar25 == 0) {
            uStack_3ac = 0x3f800000;
            local_3b8 = 0;
            uStack_3b4 = 0;
            uStack_3b0 = 0;
          }
          else {
            local_3b8 = *(undefined4 *)(lVar25 + 0x210);
            uStack_3b4 = *(undefined4 *)(lVar25 + 0x214);
            uStack_3b0 = *(undefined4 *)(lVar25 + 0x218);
            uStack_3ac = *(undefined4 *)(lVar25 + 0x21c);
            local_1e8 = local_3b8;
            uStack_1e4 = uStack_3b4;
            uStack_1e0 = uStack_3b0;
            uStack_1dc = uStack_3ac;
          }
        }
        lVar10 = param_2[0x3a];
        lVar21 = param_2[0x3b];
        lVar9 = param_2[200];
        lVar25 = param_2[0x3c];
        uVar7 = (undefined4)param_2[0x3d];
        local_1d0 = lVar9;
        local_1c8 = lVar10;
        lStack_1c0 = lVar21;
        local_1b8 = lVar25;
        local_1b0 = uVar7;
        puVar26 = (undefined8 *)(**(code **)(*param_2 + 0x6c0))(param_2,local_108);
        uVar11 = *puVar26;
        uVar12 = puVar26[1];
        uVar13 = puVar26[2];
        uVar14 = puVar26[3];
        uVar15 = puVar26[4];
        uVar16 = puVar26[5];
        uVar17 = puVar26[6];
        uVar18 = puVar26[7];
        local_188 = uVar11;
        uStack_180 = uVar12;
        local_178 = uVar13;
        uStack_170 = uVar14;
        local_168 = uVar15;
        uStack_160 = uVar16;
        local_158 = uVar17;
        uStack_150 = uVar18;
        puVar26 = (undefined8 *)(**(code **)(*param_2 + 0x4a8))(param_2,local_128,&DAT_1468b5b70);
        uVar19 = *puVar26;
        uVar20 = puVar26[1];
        uVar8 = *(undefined4 *)(puVar26 + 3);
        uVar27 = puVar26[2];
        local_1ac = uVar19;
        uStack_1a4 = uVar20;
        local_19c = uVar27;
        local_194 = uVar8;
        iVar23 = _finite((double)*(float *)((longlong)param_2 + 0x1dc));
        if (((iVar23 != 0) && (iVar23 = _finite((double)*(float *)(param_2 + 0x3c)), iVar23 != 0))
           && ((iVar23 = _finite((double)*(float *)((longlong)param_2 + 0x1e4)), iVar23 != 0 &&
               ((((iVar23 = _finite((double)*(float *)(param_2 + 0x3a)), iVar23 != 0 &&
                  (iVar23 = _finite((double)*(float *)((longlong)param_2 + 0x1d4)), iVar23 != 0)) &&
                 (iVar23 = _finite((double)*(float *)(param_2 + 0x3b)), iVar23 != 0)) &&
                (iVar23 = _isnan((double)*(float *)(param_2 + 0x3d)), iVar23 == 0)))))) {
          _finite((double)*(float *)(param_2 + 0x3d));
        }
        local_2f8 = local_3a8;
        local_2f0 = local_3a0;
        local_388 = param_1;
        local_380 = lVar9;
        local_378 = lVar10;
        lStack_370 = lVar21;
        local_368 = lVar25;
        local_360 = uVar7;
        local_35c = uVar19;
        uStack_354 = uVar20;
        local_34c = uVar27;
        local_344 = uVar8;
        local_338 = uVar11;
        uStack_330 = uVar12;
        local_328 = uVar13;
        uStack_320 = uVar14;
        local_318 = uVar15;
        uStack_310 = uVar16;
        local_308 = uVar17;
        uStack_300 = uVar18;
        local_2e8 = local_3b8;
        uStack_2e4 = uStack_3b4;
        uStack_2e0 = uStack_3b0;
        uStack_2dc = uStack_3ac;
        if ((DAT_146ac3ac6 == '\0') || (cVar22 = IsInRenderingThread(), cVar22 == '\0')) {
          if ((DAT_146ac3ac5 == '\0') &&
             (((cVar22 = FUN_1415ad720(&DAT_1468e2448), cVar22 != '\0' || (DAT_1468c21ae == '\0'))
              || (DVar24 = GetCurrentThreadId(), DVar24 == DAT_1468c21c0)))) {
            local_2a8 = local_378;
            lStack_2a0 = lStack_370;
            local_2b8 = local_388;
            local_28c = local_35c;
            uStack_284 = uStack_354;
            local_2b0 = local_380;
            local_268 = local_338;
            uStack_260 = uStack_330;
            local_298 = local_368;
            local_248 = local_318;
            uStack_240 = uStack_310;
            local_27c = local_34c;
            local_290 = local_360;
            local_228 = local_2f8;
            local_258 = local_328;
            uStack_250 = uStack_320;
            local_274 = local_344;
            local_218 = local_2e8;
            uStack_214 = uStack_2e4;
            uStack_210 = uStack_2e0;
            uStack_20c = uStack_2dc;
            local_238 = (undefined4)local_308;
            uStack_234 = local_308._4_4_;
            uStack_230 = (undefined4)uStack_300;
            uStack_22c = uStack_300._4_4_;
            local_220 = local_2f0;
            uVar27 = FBaseGraphTask::GetSmallTaskAllocator();
            FUN_141d520b0(local_2b8,uVar27,local_2b0,&local_2a8,&local_28c,&local_268,&local_228,
                          &local_218);
          }
          else {
            plVar28 = (longlong *)
                      TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddExponentialHeightFog'::`2'::FAddFogCommandName,<lambda_23dd2bba3cad69a0d8fd09c4f72e10da>_>_>
                      ::CreateTask(&local_3a8,0,0xff);
            lVar25 = *plVar28;
            *(longlong **)(lVar25 + 0x10) = local_388;
            *(longlong *)(lVar25 + 0x18) = local_380;
            *(longlong *)(lVar25 + 0x20) = local_378;
            *(longlong *)(lVar25 + 0x28) = lStack_370;
            *(longlong *)(lVar25 + 0x30) = local_368;
            *(undefined4 *)(lVar25 + 0x38) = local_360;
            *(undefined8 *)(lVar25 + 0x3c) = local_35c;
            *(undefined8 *)(lVar25 + 0x44) = uStack_354;
            *(undefined8 *)(lVar25 + 0x4c) = local_34c;
            *(undefined4 *)(lVar25 + 0x54) = local_344;
            *(undefined8 *)(lVar25 + 0x60) = local_338;
            *(undefined8 *)(lVar25 + 0x68) = uStack_330;
            *(undefined8 *)(lVar25 + 0x70) = local_328;
            *(undefined8 *)(lVar25 + 0x78) = uStack_320;
            *(undefined8 *)(lVar25 + 0x80) = local_318;
            *(undefined8 *)(lVar25 + 0x88) = uStack_310;
            *(undefined8 *)(lVar25 + 0x90) = local_308;
            *(undefined8 *)(lVar25 + 0x98) = uStack_300;
            *(undefined8 *)(lVar25 + 0xa0) = local_2f8;
            *(undefined4 *)(lVar25 + 0xa8) = local_2f0;
            *(undefined4 *)(lVar25 + 0xb0) = local_2e8;
            *(undefined4 *)(lVar25 + 0xb4) = uStack_2e4;
            *(undefined4 *)(lVar25 + 0xb8) = uStack_2e0;
            *(undefined4 *)(lVar25 + 0xbc) = uStack_2dc;
            lVar25 = *plVar28;
            lVar21 = plVar28[2];
            lVar9 = plVar28[1];
            lVar10 = *(longlong *)(lVar25 + 200);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            FUN_141d4e2d0(lVar25,lVar9,(int)lVar21,1);
            if (lVar10 != 0) {
              LOCK();
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                FGraphEvent::Recycle(lVar10);
              }
            }
          }
        }
        else {
          uVar27 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_141d520b0(local_388,uVar27,local_380,&local_378,&local_35c,&local_338,&local_2f8,
                        &local_2e8);
        }
      }
      else {
        (**(code **)(*param_1 + 8))(param_1,param_2);
        (**(code **)*param_1)(param_1,param_2);
      }
      param_2[0xd8] = param_2[0x3a];
      param_2[0xd9] = param_2[0x3b];
      param_2[0xda] = param_2[0x3c];
      *(int *)(param_2 + 0xdb) = (int)param_2[0x3d];
      *(int *)((longlong)param_2 + 0x6dc) = (int)param_2[0x44];
      *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0x224);
      *(int *)((longlong)param_2 + 0x6e4) = (int)param_2[0x45];
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141d520aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_2);
  return;
}



// FUNCTION 141d520b0 FUN_141d520b0 body=575 status=ok
// SIG undefined FUN_141d520b0(void)

void FUN_141d520b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  int local_res8 [2];
  int local_res18 [4];
  int *local_e8;
  int *local_e0;
  int local_d8 [2];
  longlong local_d0;
  undefined1 local_48;
  
  bVar6 = ~(byte)(*(uint *)(param_3 + 0x1c) >> 0x12) & 1;
  FUN_141d48230(*(undefined8 *)(param_3 + 0x140),bVar6);
  lVar2 = *(longlong *)(param_3 + 0x140);
  lVar3 = *(longlong *)(param_3 + 0x130);
  iVar1 = *(int *)(lVar2 + 0x10);
  local_res8[0] = iVar1;
  if (((*(longlong *)(lVar2 + 8) != 0) && (iVar1 != 0)) &&
     (*(int *)(*(longlong *)(lVar2 + 8) + 0x10) - 1U < 2)) {
    lVar5 = FMotionBlurInfoData::FindMBInfoIndex(lVar3 + 0x5ee0,iVar1);
    if (lVar5 == 0) {
      local_e8 = local_res8;
      local_e0 = local_d8;
      local_48 = 1;
      local_d8[0] = iVar1;
      local_d0 = lVar2;
      FUN_141d09ae0(lVar3 + 0x5ee0,local_res18,&local_e8,0);
      lVar5 = *(longlong *)(lVar3 + 0x5ee0) + (longlong)local_res18[0] * 0xc0 + 0x10;
    }
    else if (*(longlong *)(lVar5 + 8) == 0) {
      *(longlong *)(lVar5 + 8) = lVar2;
    }
    if ((*(longlong *)(lVar5 + 8) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8), lVar2 != 0)) {
      uVar4 = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar5 + 0x58) = uVar4;
      uVar4 = *(undefined8 *)(lVar2 + 0x98);
      *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(lVar2 + 0x90);
      *(undefined8 *)(lVar5 + 0x68) = uVar4;
      uVar4 = *(undefined8 *)(lVar2 + 0xa8);
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar2 + 0xa0);
      *(undefined8 *)(lVar5 + 0x78) = uVar4;
      uVar4 = *(undefined8 *)(lVar2 + 0xb8);
      *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar2 + 0xb0);
      *(undefined8 *)(lVar5 + 0x88) = uVar4;
    }
    *(undefined1 *)(lVar5 + 0x90) = 1;
  }
  if (DAT_146a81040 != 0) {
    local_e8 = (int *)*param_7;
    local_e0 = (int *)CONCAT44(local_e0._4_4_,*(undefined4 *)(param_7 + 1));
    FPrimitiveSceneProxy::WouldSetTransformBeRedundant(param_3,param_6,param_4,param_5,&local_e8);
  }
  local_e8 = (int *)*param_7;
  local_e0 = (int *)CONCAT44(local_e0._4_4_,*(undefined4 *)(param_7 + 1));
  FUN_14273d150(param_3,param_6,param_4,param_5,&local_e8,param_8);
  if ((*(int *)(param_1 + 8) < 2) &&
     (((*(int *)(param_3 + 0x10) - 1U < 2 || (*(int *)(param_3 + 0x18) < 0)) ||
      (*(char *)(param_3 + 0x14) == '\x02')))) {
    *(undefined1 *)(*(longlong *)(param_3 + 0x140) + 0xfb) = 1;
  }
  FUN_141d511a0(param_1 + 0x15f0,*(undefined8 *)(param_3 + 0x140));
  FUN_141d1ad40(*(undefined8 *)(param_3 + 0x140),param_2,bVar6,1);
  return;
}



// FUNCTION 141d522f0 FUN_141d522f0 body=740 status=ok
// SIG undefined FUN_141d522f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d522f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  char cVar13;
  DWORD DVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float local_118;
  uint uStack_114;
  float fStack_110;
  uint uStack_10c;
  float local_108;
  float fStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  float local_68;
  uint uStack_64;
  float fStack_60;
  uint uStack_5c;
  float local_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 local_38 [48];
  
  if (*(longlong *)(param_2 + 0x310) == 0) {
    return;
  }
  lVar15 = FUN_14238c0b0(param_2);
  fVar5 = *(float *)(param_2 + 0x210);
  fVar6 = *(float *)(param_2 + 0x214);
  fVar7 = *(float *)(param_2 + 0x218);
  fVar8 = *(float *)(param_2 + 0x21c);
  lVar3 = *(longlong *)(param_2 + 0x310);
  fVar17 = fVar6 + fVar6;
  fVar18 = fVar7 + fVar7;
  fVar20 = fVar5 * (fVar5 + fVar5);
  local_e8 = CONCAT31(local_e8._1_3_,lVar15 == 0);
  fVar19 = fVar8 * (fVar5 + fVar5);
  fVar9 = *(float *)(param_2 + 0x230);
  fVar10 = *(float *)(param_2 + 0x234);
  fVar11 = *(float *)(param_2 + 0x238);
  fStack_124 = (fVar8 * fVar18 + fVar5 * fVar17) * fVar9;
  fStack_110 = (fVar19 + fVar6 * fVar18) * fVar10;
  local_108 = (fVar8 * fVar17 + fVar5 * fVar18) * fVar11;
  local_118 = fVar10 * (fVar5 * fVar17 - fVar8 * fVar18);
  fStack_104 = fVar11 * (fVar6 * fVar18 - fVar19);
  fStack_120 = fVar9 * (fVar5 * fVar18 - fVar8 * fVar17);
  local_128 = (uint)((_DAT_146a82650 - (fVar7 * fVar18 + fVar6 * fVar17)) * fVar9) & _DAT_146a82660;
  uStack_114 = (uint)((fRam0000000146a82654 - (fVar7 * fVar18 + fVar20)) * fVar10) &
               uRam0000000146a82664;
  uStack_100 = (uint)((fRam0000000146a82658 - (fVar6 * fVar17 + fVar20)) * fVar11) &
               uRam0000000146a82668;
  uStack_11c = (uint)((fRam0000000146a8265c - (fVar20 + fVar20)) * *(float *)(param_2 + 0x23c)) &
               uRam0000000146a8266c;
  local_f8 = *(undefined4 *)(param_2 + 0x220);
  uStack_f4 = *(undefined4 *)(param_2 + 0x224);
  uStack_f0 = *(undefined4 *)(param_2 + 0x228);
  fStack_3c = fRam0000000146a8265c;
  fStack_ec = fRam0000000146a8265c;
  uStack_10c = uStack_11c;
  uStack_fc = uStack_11c;
  local_78 = local_128;
  fStack_74 = fStack_124;
  fStack_70 = fStack_120;
  uStack_6c = uStack_11c;
  local_68 = local_118;
  uStack_64 = uStack_114;
  fStack_60 = fStack_110;
  uStack_5c = uStack_11c;
  local_58 = local_108;
  fStack_54 = fStack_104;
  uStack_50 = uStack_100;
  uStack_4c = uStack_11c;
  local_48 = local_f8;
  uStack_44 = uStack_f4;
  uStack_40 = uStack_f0;
  if ((DAT_146ac3ac6 != '\0') && (cVar13 = IsInRenderingThread(), cVar13 != '\0')) {
    FBaseGraphTask::GetSmallTaskAllocator();
    LOCK();
    *(int *)(param_1 + 0x5ed4) = *(int *)(param_1 + 0x5ed4) + -1;
    UNLOCK();
    *(undefined1 *)(lVar3 + 0xc0) = (undefined1)local_e8;
    LOCK();
    *(int *)(param_1 + 0x5ed4) = *(int *)(param_1 + 0x5ed4) + 1;
    UNLOCK();
    *(undefined1 *)(param_1 + 0x1208) = 1;
    FReflectionCaptureProxy::SetTransform(lVar3,&local_128);
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar13 = FUN_1415ad720(&DAT_1468e2448), cVar13 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar14 = GetCurrentThreadId(), DVar14 == DAT_1468c21c0)))) {
    local_c8 = CONCAT44(fStack_124,local_128);
    uStack_c0 = CONCAT44(uStack_11c,fStack_120);
    local_b8 = CONCAT44(uStack_114,local_118);
    uStack_b0 = CONCAT44(uStack_10c,fStack_110);
    local_a8 = CONCAT44(fStack_104,local_108);
    uStack_a0 = CONCAT44(uStack_fc,uStack_100);
    local_98 = local_f8;
    uStack_94 = uStack_f4;
    uStack_90 = uStack_f0;
    fStack_8c = fStack_ec;
    local_88 = local_e8;
    uStack_84 = uStack_e4;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    local_d8 = param_1;
    lStack_d0 = lVar3;
    FBaseGraphTask::GetSmallTaskAllocator();
    LOCK();
    *(int *)(local_d8 + 0x5ed4) = *(int *)(local_d8 + 0x5ed4) + -1;
    UNLOCK();
    *(undefined1 *)(lStack_d0 + 0xc0) = (undefined1)local_88;
    LOCK();
    *(int *)(local_d8 + 0x5ed4) = *(int *)(local_d8 + 0x5ed4) + 1;
    UNLOCK();
    *(undefined1 *)(local_d8 + 0x1208) = 1;
    FReflectionCaptureProxy::SetTransform(lStack_d0,&local_c8);
  }
  else {
    plVar16 = (longlong *)
              TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::UpdateReflectionCaptureTransform'::`5'::FUpdateTransformCommandName,<lambda_8e4f80dd14d8a9d29fe1eb4b3ac22066>_>_>
              ::CreateTask(local_38,0,0xff);
    lVar15 = *plVar16;
    *(longlong *)(lVar15 + 0x10) = param_1;
    *(longlong *)(lVar15 + 0x18) = lVar3;
    *(ulonglong *)(lVar15 + 0x20) = CONCAT44(fStack_124,local_128);
    *(ulonglong *)(lVar15 + 0x28) = CONCAT44(uStack_11c,fStack_120);
    *(ulonglong *)(lVar15 + 0x30) = CONCAT44(uStack_114,local_118);
    *(ulonglong *)(lVar15 + 0x38) = CONCAT44(uStack_10c,fStack_110);
    *(ulonglong *)(lVar15 + 0x40) = CONCAT44(fStack_104,local_108);
    *(ulonglong *)(lVar15 + 0x48) = CONCAT44(uStack_fc,uStack_100);
    *(undefined4 *)(lVar15 + 0x50) = local_f8;
    *(undefined4 *)(lVar15 + 0x54) = uStack_f4;
    *(undefined4 *)(lVar15 + 0x58) = uStack_f0;
    *(float *)(lVar15 + 0x5c) = fStack_ec;
    *(undefined4 *)(lVar15 + 0x60) = local_e8;
    *(undefined4 *)(lVar15 + 100) = uStack_e4;
    *(undefined4 *)(lVar15 + 0x68) = uStack_e0;
    *(undefined4 *)(lVar15 + 0x6c) = uStack_dc;
    lVar3 = *plVar16;
    lVar12 = plVar16[2];
    lVar15 = plVar16[1];
    lVar4 = *(longlong *)(lVar3 + 0x78);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_141c2c3c0(lVar3,lVar15,(int)lVar12,1);
    if (lVar4 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 141d525e0 FUN_141d525e0 body=684 status=ok
// SIG undefined FUN_141d525e0(void)

void FUN_141d525e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  float fVar14;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    fVar3 = *(float *)(param_2 + 0x4c4);
    fVar14 = 0.0;
    if ((0.0 <= fVar3) && (fVar14 = fVar3, 1.0 <= fVar3)) {
      fVar14 = 1.0;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x4bc);
    uVar5 = *(undefined4 *)(param_2 + 0x4c0);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_68);
    *(undefined4 *)(param_1 + 0x5fe8) = uVar4;
    *(undefined4 *)(param_1 + 0x5fec) = uVar5;
    *(float *)(param_1 + 0x5ff0) = fVar14;
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_68._0_4_);
    return;
  }
  fVar3 = *(float *)(param_2 + 0x4c4);
  fVar14 = 0.0;
  if ((0.0 <= fVar3) && (fVar14 = fVar3, 1.0 <= fVar3)) {
    fVar14 = 1.0;
  }
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar9 = TlsGetValue(*pDVar8);
  plVar12 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      plVar12 = plVar9;
    }
    TlsSetValue(*pDVar8,plVar12);
    plVar9 = plVar12;
  }
  plVar12 = (longlong *)plVar9[1];
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)*plVar9;
    if (plVar12 == (longlong *)0x0) {
      lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
      plVar9[1] = lVar10;
      if (lVar10 == 0) {
        puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar9[1] = (longlong)puVar11;
        lVar10 = 0x1f;
        do {
          puVar2 = puVar11 + 0x20;
          *puVar11 = puVar2;
          lVar10 = lVar10 + -1;
          puVar11 = puVar2;
        } while (lVar10 != 0);
        *puVar2 = 0;
      }
      plVar12 = (longlong *)plVar9[1];
      iVar13 = 0x20;
      *(undefined4 *)(plVar9 + 2) = 0x20;
    }
    else {
      iVar13 = 0x20;
      plVar9[1] = (longlong)plVar12;
      *(undefined4 *)(plVar9 + 2) = 0x20;
      *plVar9 = 0;
    }
  }
  else {
    iVar13 = (int)plVar9[2];
  }
  plVar9[1] = *plVar12;
  *(int *)(plVar9 + 2) = iVar13 + -1;
  *plVar12 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar12 + 1) = 0xff;
  local_60 = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
  *(undefined1 *)(plVar12 + 5) = 0;
  *plVar12 = (longlong)&PTR_FUN_144e486a0;
  uVar4 = *(undefined4 *)(param_2 + 0x4c0);
  uVar5 = *(undefined4 *)(param_2 + 0x4bc);
  plVar12[6] = 0;
  *(undefined4 *)(plVar12 + 3) = uVar5;
  *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar4;
  *(float *)(plVar12 + 4) = fVar14;
  plVar12[2] = param_1;
  lVar10 = plVar12[6];
  piVar1 = (int *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar10;
  FUN_14048a160(uVar5,0,0xff,1);
  if (lVar10 != 0) {
    LOCK();
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 141d52890 FUN_141d52890 body=2947 status=ok
// SIG undefined FUN_141d52890(void)

void FUN_141d52890(longlong *param_1,longlong param_2,undefined1 param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  DWORD *pDVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  undefined8 local_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  undefined8 local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_1464c9c5a != '\0') || (1 < (int)param_1[1])) {
    lVar11 = (**(code **)(*param_1 + 0x208))();
    param_1[2] = lVar11;
    if (lVar11 != 0) {
      FUN_14254eb00(lVar11);
    }
    lVar11 = 0x1f;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
      uVar5 = *(undefined4 *)(param_2 + 0x30c);
      uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_108);
      FUN_141d21220(uVar12,uVar5);
      QueryPerformanceCounter(&local_110);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_110.s.LowPart - local_108._0_4_);
    }
    else {
      pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar14 = TlsGetValue(*pDVar13);
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)operator_new(0x18);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          *plVar14 = 0;
          plVar14[1] = 0;
          *(undefined4 *)(plVar14 + 2) = 0;
        }
        TlsSetValue(*pDVar13,plVar14);
      }
      plVar15 = (longlong *)plVar14[1];
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)*plVar14;
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
          plVar14[1] = (longlong)plVar15;
          if (plVar15 == (longlong *)0x0) {
            puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar14[1] = (longlong)puVar16;
            lVar17 = lVar11;
            do {
              puVar2 = puVar16 + 0x20;
              *puVar16 = puVar2;
              lVar17 = lVar17 + -1;
              puVar16 = puVar2;
            } while (lVar17 != 0);
            *puVar2 = 0;
            plVar15 = (longlong *)plVar14[1];
          }
          *(undefined4 *)(plVar14 + 2) = 0x20;
          iVar10 = 0x20;
        }
        else {
          plVar14[1] = (longlong)plVar15;
          iVar10 = 0x20;
          *(undefined4 *)(plVar14 + 2) = 0x20;
          *plVar14 = 0;
        }
      }
      else {
        iVar10 = (int)plVar14[2];
      }
      plVar14[1] = *plVar15;
      *(int *)(plVar14 + 2) = iVar10 + -1;
      *(undefined4 *)(plVar15 + 1) = 0xff;
      *plVar15 = (longlong)&PTR_FUN_143f3edd8;
      local_78 = 0;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *plVar15 = (longlong)&PTR_FUN_144e485e0;
      *(undefined1 *)((longlong)plVar15 + 0x14) = 0;
      plVar15[3] = 0;
      *(undefined4 *)(plVar15 + 2) = *(undefined4 *)(param_2 + 0x30c);
      lVar17 = plVar15[3];
      local_100 = 0;
      piVar1 = (int *)(lVar17 + 0x48);
      if (lVar17 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_141d4e540(plVar15,0,0xff,1);
      if (lVar17 != 0) {
        LOCK();
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle(lVar17);
        }
      }
    }
    if (*(char *)(param_2 + 0x2f8) == '\0') {
      local_a8 = *(undefined4 *)(param_2 + 0x220);
      uStack_a4 = *(undefined4 *)(param_2 + 0x224);
      local_a0 = *(undefined4 *)(param_2 + 0x228);
      uStack_3c = *(undefined4 *)(param_2 + 0x22c);
      local_98 = local_a8;
      uStack_94 = uStack_a4;
      local_90 = local_a0;
      local_48 = local_a8;
      uStack_44 = uStack_a4;
      uStack_40 = local_a0;
      FUN_141d1fb70(param_1,&local_98,*(undefined4 *)(param_2 + 0x30c),1,
                    *(char *)(param_2 + 0x24e) == '\0',*(undefined4 *)(param_2 + 0x310),
                    *(undefined1 *)(param_2 + 0x31c),param_3,param_2 + 800,0);
    }
    else if (*(char *)(param_2 + 0x2f8) == '\x01') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        uVar5 = *(undefined4 *)(param_2 + 0x30c);
        fVar3 = *(float *)(param_2 + 0x308);
        uVar4 = *(undefined1 *)(param_2 + 0x31c);
        local_120 = *(undefined4 *)(param_2 + 800);
        uStack_11c = *(undefined4 *)(param_2 + 0x324);
        uStack_118 = *(undefined4 *)(param_2 + 0x328);
        uStack_114 = *(undefined4 *)(param_2 + 0x32c);
        lVar17 = param_1[1];
        uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_f0);
        FUN_141d25900(uVar12,(int)lVar17,param_4,uVar5,1,uVar4,fVar3 * 0.017453292,&local_120);
        QueryPerformanceCounter(&local_f8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_f8.s.LowPart - local_f0._0_4_);
      }
      else {
        lVar17 = param_1[1];
        fVar3 = *(float *)(param_2 + 0x308);
        pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar14 = TlsGetValue(*pDVar13);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)operator_new(0x18);
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            *plVar14 = 0;
            plVar14[1] = 0;
            *(undefined4 *)(plVar14 + 2) = 0;
          }
          TlsSetValue(*pDVar13,plVar14);
        }
        plVar15 = (longlong *)plVar14[1];
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)*plVar14;
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
            plVar14[1] = (longlong)plVar15;
            if (plVar15 == (longlong *)0x0) {
              puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar14[1] = (longlong)puVar16;
              lVar18 = lVar11;
              do {
                puVar2 = puVar16 + 0x20;
                *puVar16 = puVar2;
                lVar18 = lVar18 + -1;
                puVar16 = puVar2;
              } while (lVar18 != 0);
              *puVar2 = 0;
              plVar15 = (longlong *)plVar14[1];
            }
            *(undefined4 *)(plVar14 + 2) = 0x20;
            iVar10 = 0x20;
          }
          else {
            plVar14[1] = (longlong)plVar15;
            iVar10 = 0x20;
            *(undefined4 *)(plVar14 + 2) = 0x20;
            *plVar14 = 0;
          }
        }
        else {
          iVar10 = (int)plVar14[2];
        }
        plVar14[1] = *plVar15;
        *(int *)(plVar14 + 2) = iVar10 + -1;
        *(undefined4 *)(plVar15 + 1) = 0xff;
        *plVar15 = (longlong)&PTR_FUN_143f3edd8;
        local_70 = 0;
        *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
        *plVar15 = (longlong)&PTR_FUN_144e485f0;
        *(undefined1 *)(plVar15 + 7) = 0;
        plVar15[8] = 0;
        uVar5 = *(undefined4 *)(param_2 + 0x30c);
        local_e8 = 0;
        uVar4 = *(undefined1 *)(param_2 + 0x31c);
        *(float *)(plVar15 + 4) = fVar3 * 0.017453292;
        *(undefined1 *)((longlong)plVar15 + 0x1c) = uVar4;
        plVar15[2] = param_4;
        *(undefined4 *)(plVar15 + 3) = uVar5;
        *(int *)((longlong)plVar15 + 0x24) = (int)lVar17;
        uVar5 = *(undefined4 *)(param_2 + 0x324);
        uVar6 = *(undefined4 *)(param_2 + 0x328);
        uVar7 = *(undefined4 *)(param_2 + 0x32c);
        *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(param_2 + 800);
        *(undefined4 *)((longlong)plVar15 + 0x2c) = uVar5;
        *(undefined4 *)(plVar15 + 6) = uVar6;
        *(undefined4 *)((longlong)plVar15 + 0x34) = uVar7;
        lVar17 = plVar15[8];
        piVar1 = (int *)(lVar17 + 0x48);
        if (lVar17 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a8b0(plVar15,0,0xff,1);
        if (lVar17 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar17);
          }
        }
      }
    }
    if (param_8 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        local_88[0] = *(undefined4 *)(param_2 + 0x30c);
        local_80 = param_8;
        local_e0 = 0;
        FUN_141d2a810(local_88,2,&local_e0);
      }
      else {
        pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar14 = TlsGetValue(*pDVar13);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)operator_new(0x18);
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            *plVar14 = 0;
            plVar14[1] = 0;
            *(undefined4 *)(plVar14 + 2) = 0;
          }
          TlsSetValue(*pDVar13,plVar14);
        }
        plVar15 = (longlong *)plVar14[1];
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)*plVar14;
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
            plVar14[1] = (longlong)plVar15;
            if (plVar15 == (longlong *)0x0) {
              puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar14[1] = (longlong)puVar16;
              lVar17 = lVar11;
              do {
                puVar2 = puVar16 + 0x20;
                *puVar16 = puVar2;
                lVar17 = lVar17 + -1;
                puVar16 = puVar2;
              } while (lVar17 != 0);
              *puVar2 = 0;
              plVar15 = (longlong *)plVar14[1];
            }
            *(undefined4 *)(plVar14 + 2) = 0x20;
            iVar10 = 0x20;
          }
          else {
            plVar14[1] = (longlong)plVar15;
            iVar10 = 0x20;
            *(undefined4 *)(plVar14 + 2) = 0x20;
            *plVar14 = 0;
          }
        }
        else {
          iVar10 = (int)plVar14[2];
        }
        plVar14[1] = *plVar15;
        *(int *)(plVar14 + 2) = iVar10 + -1;
        *(undefined4 *)(plVar15 + 1) = 0xff;
        *plVar15 = (longlong)&PTR_FUN_143f3edd8;
        local_68 = 0;
        *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
        *plVar15 = (longlong)&PTR_FUN_144e48600;
        *(undefined1 *)(plVar15 + 4) = 0;
        plVar15[5] = 0;
        *(undefined4 *)(plVar15 + 2) = *(undefined4 *)(param_2 + 0x30c);
        plVar15[3] = param_8;
        lVar17 = plVar15[5];
        local_d8 = 0;
        piVar1 = (int *)(lVar17 + 0x48);
        if (lVar17 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_1409421c0(plVar15,0,0xff,1);
        if (lVar17 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar17);
          }
        }
      }
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
      uVar5 = *(undefined4 *)(param_2 + 0x30c);
      iVar10 = (int)param_1[1];
      uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_c8);
      if (iVar10 < 2) {
        FUN_141b91a20();
        FUN_141b98cd0(uVar12,iVar10,uVar5,param_7);
      }
      else {
        FUN_141d21b10(uVar12,iVar10,uVar5,param_6,0);
        FUN_141d31ae0(uVar12,iVar10,uVar5,param_7);
      }
      QueryPerformanceCounter(&local_d0);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_d0.s.LowPart - local_c8._0_4_);
    }
    else {
      lVar17 = param_1[1];
      pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar14 = TlsGetValue(*pDVar13);
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)operator_new(0x18);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          *plVar14 = 0;
          plVar14[1] = 0;
          *(undefined4 *)(plVar14 + 2) = 0;
        }
        TlsSetValue(*pDVar13,plVar14);
      }
      plVar15 = (longlong *)plVar14[1];
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)*plVar14;
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
          plVar14[1] = (longlong)plVar15;
          if (plVar15 == (longlong *)0x0) {
            puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar14[1] = (longlong)puVar16;
            lVar18 = lVar11;
            do {
              puVar2 = puVar16 + 0x20;
              *puVar16 = puVar2;
              lVar18 = lVar18 + -1;
              puVar16 = puVar2;
            } while (lVar18 != 0);
            *puVar2 = 0;
            plVar15 = (longlong *)plVar14[1];
          }
          *(undefined4 *)(plVar14 + 2) = 0x20;
          iVar10 = 0x20;
        }
        else {
          plVar14[1] = (longlong)plVar15;
          iVar10 = 0x20;
          *(undefined4 *)(plVar14 + 2) = 0x20;
          *plVar14 = 0;
        }
      }
      else {
        iVar10 = (int)plVar14[2];
      }
      plVar14[1] = *plVar15;
      *(int *)(plVar14 + 2) = iVar10 + -1;
      *(undefined4 *)(plVar15 + 1) = 0xff;
      *plVar15 = (longlong)&PTR_FUN_143f3edd8;
      local_60 = 0;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *plVar15 = (longlong)&PTR_FUN_144e48610;
      *(undefined1 *)(plVar15 + 6) = 0;
      plVar15[7] = 0;
      *(undefined4 *)(plVar15 + 2) = *(undefined4 *)(param_2 + 0x30c);
      plVar15[3] = param_6;
      plVar15[4] = param_7;
      *(int *)(plVar15 + 5) = (int)lVar17;
      lVar17 = plVar15[7];
      local_c0 = 0;
      piVar1 = (int *)(lVar17 + 0x48);
      if (lVar17 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14048a640(plVar15,0,0xff,1);
      if (lVar17 != 0) {
        LOCK();
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle(lVar17);
        }
      }
    }
    if (param_5 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
        lVar11 = param_1[1];
        uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_b0);
        if ((int)lVar11 < 2) {
          FUN_141b95700();
        }
        else {
          FUN_141d26770(uVar12,param_1,param_5);
        }
        QueryPerformanceCounter(&local_b8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_b8.s.LowPart - local_b0._0_4_);
      }
      else {
        lVar17 = param_1[1];
        pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar14 = TlsGetValue(*pDVar13);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)operator_new(0x18);
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            *plVar14 = 0;
            plVar14[1] = 0;
            *(undefined4 *)(plVar14 + 2) = 0;
          }
          TlsSetValue(*pDVar13,plVar14);
        }
        plVar15 = (longlong *)plVar14[1];
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)*plVar14;
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
            plVar14[1] = (longlong)plVar15;
            if (plVar15 == (longlong *)0x0) {
              puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar14[1] = (longlong)puVar16;
              do {
                puVar2 = puVar16 + 0x20;
                *puVar16 = puVar2;
                lVar11 = lVar11 + -1;
                puVar16 = puVar2;
              } while (lVar11 != 0);
              *puVar2 = 0;
              plVar15 = (longlong *)plVar14[1];
            }
            iVar10 = 0x20;
            *(undefined4 *)(plVar14 + 2) = 0x20;
          }
          else {
            iVar10 = 0x20;
            plVar14[1] = (longlong)plVar15;
            *(undefined4 *)(plVar14 + 2) = 0x20;
            *plVar14 = 0;
          }
        }
        else {
          iVar10 = (int)plVar14[2];
        }
        plVar14[1] = *plVar15;
        *(int *)(plVar14 + 2) = iVar10 + -1;
        *(undefined4 *)(plVar15 + 1) = 0xff;
        *plVar15 = (longlong)&PTR_FUN_143f3edd8;
        local_58 = 0;
        local_50 = 0;
        *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
        *plVar15 = (longlong)&PTR_FUN_144e48620;
        *(undefined1 *)(plVar15 + 5) = 0;
        plVar15[6] = 0;
        plVar15[2] = (longlong)param_1;
        plVar15[3] = param_5;
        *(int *)(plVar15 + 4) = (int)lVar17;
        lVar11 = plVar15[6];
        piVar1 = (int *)(lVar11 + 0x48);
        if (lVar11 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a160(plVar15,0,0xff,1);
        if (lVar11 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar11);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141d53420 FUN_141d53420 body=277 status=ok
// SIG undefined FUN_141d53420(void)

void FUN_141d53420(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  local_48 = param_1;
  uStack_40 = param_2;
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141d154c0(&local_48,uVar9);
      return;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_141d534ae;
    }
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_141d154c0(&local_38,uVar9);
    return;
  }
LAB_141d534ae:
  plVar10 = (longlong *)FUN_141d28180(local_28,0,0xff);
  lVar3 = *plVar10;
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_48;
  *(undefined4 *)(lVar3 + 0x14) = local_48._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_40;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_40._4_4_;
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x28);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 141d53540 FUN_141d53540 body=348 status=ok
// SIG undefined FUN_141d53540(void)

void FUN_141d53540(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = *(int *)(param_1 + 0x30);
  puStack_20 = (uint *)(param_1 + 0x18);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = puStack_20;
    }
    uVar2 = *puVar7;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar4) goto LAB_141d535ff;
      uVar2 = puVar7[lVar6 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_141d535ff:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar4 = local_48._4_4_ < iVar1;
  local_30 = (longlong *)(param_1 + 8);
  local_48 = puStack_20;
  if (bVar4) {
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iStack_3c * 0x10);
      (**(code **)(*plVar3 + 0x168))(plVar3,param_2);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 141d536a0 FUN_141d536a0 body=621 status=ok
// SIG undefined FUN_141d536a0(void)

void FUN_141d536a0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 uVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  void *pvVar13;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    local_30 = *(int *)(param_2 + 1);
    lVar11 = (longlong)local_30;
    pvVar13 = (void *)0x0;
    _Src = (void *)*param_2;
    local_38 = (void *)0x0;
    local_40 = param_1;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
      pvVar13 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar11 << 3);
    }
    uVar3 = local_40;
    uVar6 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_58);
    FUN_141d53910(uVar3,uVar6,&local_38);
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_58._0_4_);
    if (pvVar13 != (void *)0x0) {
      FMemory::Free(pvVar13);
      return;
    }
  }
  else {
    pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar8 = TlsGetValue(*pDVar7);
    plVar12 = (longlong *)0x0;
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
      plVar12 = (longlong *)*plVar8;
      if (plVar12 == (longlong *)0x0) {
        lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
        plVar8[1] = lVar11;
        if (lVar11 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar8[1] = (longlong)puVar9;
          lVar11 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar11 = lVar11 + -1;
            puVar9 = puVar2;
          } while (lVar11 != 0);
          *puVar2 = 0;
        }
        plVar12 = (longlong *)plVar8[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar8[1] = (longlong)plVar12;
        *(undefined4 *)(plVar8 + 2) = 0x20;
        *plVar8 = 0;
      }
    }
    else {
      iVar10 = (int)plVar8[2];
    }
    plVar8[1] = *plVar12;
    local_50 = 0;
    *(int *)(plVar8 + 2) = iVar10 + -1;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    local_48 = 0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144e487f0;
    *(undefined1 *)(plVar12 + 5) = 0;
    plVar12[6] = 0;
    `FScene::UpdateStaticDrawListsForMaterials'::`2'::EURCMacro_FUpdateDrawLists::
    EURCMacro_FUpdateDrawLists(plVar12 + 2,param_1,param_2);
    lVar11 = plVar12[6];
    piVar1 = (int *)(lVar11 + 0x48);
    if (lVar11 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res20 = lVar11;
    FUN_14048a160(plVar12,0,0xff,1);
    if (lVar11 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res20);
      }
    }
  }
  return;
}



// FUNCTION 141d53910 FUN_141d53910 body=583 status=ok
// SIG undefined FUN_141d53910(void)

void FUN_141d53910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *local_28;
  ulonglong local_20;
  
  iVar4 = *(int *)(param_1 + 8);
  local_28 = (longlong *)0x0;
  lVar2 = 3;
  local_20 = 0;
  if (iVar4 < 2) {
    lVar3 = param_1 + 0xe18;
    do {
      FUN_141d373d0(lVar3 + -0x1c8,iVar4,param_3,&local_28);
      FUN_141d373d0(lVar3,iVar4,param_3,&local_28);
      lVar3 = lVar3 + 0x98;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  else {
    lVar3 = param_1 + 0x5c8;
    do {
      FUN_141d371d0(lVar3 + -0x1c8,iVar4,param_3,&local_28);
      FUN_141d371d0(lVar3,iVar4,param_3,&local_28);
      FUN_141d371d0(lVar3 + -0x390,iVar4,param_3,&local_28);
      lVar3 = lVar3 + 0x98;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  FUN_141d377d0(param_1 + 0x70,iVar4,param_3,&local_28);
  FUN_141d371d0(param_1 + 0x108,iVar4,param_3,&local_28);
  FUN_141d371d0(param_1 + 0x1a0,iVar4,param_3,&local_28);
  FUN_141d375d0(param_1 + 0x958,iVar4,param_3,&local_28);
  FUN_141d375d0(param_1 + 0x9f0,iVar4,param_3,&local_28);
  FUN_141d373d0(param_1 + 0xa88,iVar4,param_3,&local_28);
  FUN_141d36fd0(param_1 + 0xb20,iVar4,param_3,&local_28);
  FUN_141d36fd0(param_1 + 3000,iVar4,param_3,&local_28);
  if (0 < (int)local_20) {
    uVar6 = local_20 & 0xffffffff;
    plVar5 = local_28;
    do {
      lVar2 = *plVar5;
      puVar1 = *(undefined8 **)(lVar2 + 0x30);
      for (iVar4 = *(int *)(lVar2 + 0x38); iVar4 != 0; iVar4 = iVar4 + -1) {
        FUN_141d5bc20(*puVar1);
        FMemory::Free(*puVar1);
        puVar1 = puVar1 + 1;
      }
      *(undefined4 *)(lVar2 + 0x38) = 0;
      if (*(int *)(lVar2 + 0x3c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x30,0);
      }
      FUN_141d1aab0(lVar2,param_2,1);
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
    return;
  }
  return;
}



// FUNCTION 141d53b60 UpdateStaticMeshes body=143 status=ok
// SIG undefined UpdateStaticMeshes(void)

void FPrimitiveSceneInfo::UpdateStaticMeshes(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  *(byte *)(param_1 + 0xf8) = param_3 ^ 1;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar1 = 0;
    do {
      FUN_141d6f820(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar1));
      if (param_3 != 0) {
        FUN_141d5d650(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar1),param_2,
                      *(undefined8 *)(param_1 + 0xd8));
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 141d53bf0 FUN_141d53bf0 body=523 status=ok
// SIG undefined FUN_141d53bf0(void)

void FUN_141d53bf0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_48);
    *(undefined4 *)(param_1 + 0x6048) = param_2;
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_48._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_40 = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 4) = 0;
  *plVar9 = (longlong)&PTR_FUN_144e48b48;
  plVar9[5] = 0;
  *(undefined4 *)(plVar9 + 3) = param_2;
  plVar9[2] = param_1;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar7;
  FUN_1409421c0(plVar9,0,0xff,1);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 141d53e00 UpdateUniformBuffer body=16 status=ok
// SIG undefined UpdateUniformBuffer(void)

void FPrimitiveSceneInfo::UpdateUniformBuffer(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xf9) = 0;
  FUN_14273d8d0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 141d53e10 UpdateUniformBuffer body=16 status=ok
// SIG undefined UpdateUniformBuffer(void)

void FPrimitiveSceneInfo::UpdateUniformBuffer(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xfa) = 0;
  FUN_14273d9c0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 141d53e20 FUN_141d53e20 body=2613 status=ok
// SIG undefined FUN_141d53e20(void)

void FUN_141d53e20(longlong param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_res8;
  int local_resc;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  wchar_t *pwVar10;
  longlong local_28;
  longlong local_20;
  
  uVar1 = *param_2;
  iVar5 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar4 = 0x20;
  if (uVar1 != 0) {
    iVar4 = 0x1f - iVar5;
  }
  uVar1 = uVar1 - 1;
  iVar5 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  if (uVar1 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f - iVar5;
  }
  iVar5 = (0x20U - iVar5 & ~((iVar4 << 0x1a) >> 0x1f)) + 1;
  local_res8 = FUN_141d33ce0(param_1,param_3);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_resc = iVar5;
  if ((*(int *)(lVar3 + 0x38) < DAT_146a83c28) &&
     (_Init_thread_header(&DAT_146a83c28), DAT_146a83c28 == -1)) {
    FName::FName(&DAT_146a83c20,L"DXT1",1);
    _Init_thread_footer(&DAT_146a83c28);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a83c38) &&
     (_Init_thread_header(&DAT_146a83c38), DAT_146a83c38 == -1)) {
    FName::FName(&DAT_146a83c30,L"DXT5",1);
    _Init_thread_footer(&DAT_146a83c38);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a83c48) &&
     (_Init_thread_header(&DAT_146a83c48), DAT_146a83c48 == -1)) {
    FName::FName(&DAT_146a83c40,&DAT_144e38808,1);
    _Init_thread_footer(&DAT_146a83c48);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a83c58) &&
     (_Init_thread_header(&DAT_146a83c58), DAT_146a83c58 == -1)) {
    FName::FName(&DAT_146a83c50,&DAT_144e38908,1);
    _Init_thread_footer(&DAT_146a83c58);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a83c68) &&
     (_Init_thread_header(&DAT_146a83c68), DAT_146a83c68 == -1)) {
    FName::FName(&DAT_146a83c60,L"BC6H",1);
    _Init_thread_footer(&DAT_146a83c68);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a83c78) &&
     (_Init_thread_header(&DAT_146a83c78), DAT_146a83c78 == -1)) {
    FName::FName(&DAT_146a83c70,&DAT_144e389e8,1);
    _Init_thread_footer(&DAT_146a83c78);
  }
  iVar5 = *(int *)(param_1 + 0x1268);
  if (iVar5 == 0x38) {
    if ((*(longlong *)(param_2 + 0xe) == DAT_146a83c70) && (param_2[0xc] != 0)) {
      local_28 = *(longlong *)(param_2 + 10);
      local_20 = (int)param_2[0xc] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1270) + 0x10) + 0x20))();
      uVar6 = 0x38;
      pwVar10 = L"StockBC7";
      uVar9 = 0x10;
      uVar8 = 4;
      uVar7 = 4;
LAB_141d54191:
      FUN_141d15200(&local_res8,uVar2,&local_28,uVar6,uVar7,uVar8,uVar9,pwVar10);
    }
  }
  else if (iVar5 == 0x37) {
    if ((*(longlong *)(param_2 + 0xe) == DAT_146a83c60) && (param_2[0xc] != 0)) {
      local_28 = *(longlong *)(param_2 + 10);
      local_20 = (int)param_2[0xc] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1270) + 0x10) + 0x20))();
      uVar6 = 0x37;
      pwVar10 = L"StockBC6";
      uVar9 = 0x10;
      uVar8 = 4;
      uVar7 = 4;
      goto LAB_141d54191;
    }
  }
  else if (iVar5 == 7) {
    if ((*(longlong *)(param_2 + 0xe) == DAT_146a83c30) && (param_2[0xc] != 0)) {
      local_28 = *(longlong *)(param_2 + 10);
      local_20 = (int)param_2[0xc] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1270) + 0x10) + 0x20))();
      uVar6 = 7;
      pwVar10 = L"StockBC3";
      uVar9 = 0x10;
      uVar8 = 4;
      uVar7 = 4;
      goto LAB_141d54191;
    }
  }
  else if (iVar5 == 5) {
    if ((*(longlong *)(param_2 + 0xe) == DAT_146a83c20) && (param_2[0xc] != 0)) {
      local_28 = *(longlong *)(param_2 + 10);
      local_20 = (int)param_2[0xc] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1270) + 0x10) + 0x20))();
      uVar6 = 5;
      pwVar10 = L"StockBC1";
      uVar9 = 8;
      uVar8 = 4;
      uVar7 = 4;
      goto LAB_141d54191;
    }
  }
  else if (iVar5 == 2) {
    if (param_2[0xc] != 0) {
      local_28 = *(longlong *)(param_2 + 10);
      local_20 = (int)param_2[0xc] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1270) + 0x10) + 0x20))();
      uVar6 = 2;
      pwVar10 = L"StockEnc";
      uVar9 = 4;
LAB_141d54181:
      uVar8 = 1;
      uVar7 = 1;
      goto LAB_141d54191;
    }
  }
  else if ((iVar5 == 10) && (param_2[8] != 0)) {
    local_28 = *(longlong *)(param_2 + 6);
    local_20 = (int)param_2[8] + local_28;
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1270) + 0x10) + 0x20))();
    uVar6 = 10;
    pwVar10 = L"StockFull";
    uVar9 = 8;
    goto LAB_141d54181;
  }
  iVar5 = *(int *)(param_1 + 0x12b0);
  if (iVar5 == 0x38) {
    if ((*(longlong *)(param_2 + 0x28) == DAT_146a83c70) && (param_2[0x1e] != 0)) {
      local_28 = *(longlong *)(param_2 + 0x1c);
      local_20 = (int)param_2[0x1e] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x12b8) + 0x10) + 0x20))();
      uVar6 = 0x38;
      pwVar10 = L"SunBC7";
      uVar8 = 0x10;
      uVar7 = 4;
      uVar9 = 4;
      goto LAB_141d543e1;
    }
  }
  else if (iVar5 == 0x37) {
    if ((*(longlong *)(param_2 + 0x28) == DAT_146a83c60) && (param_2[0x1e] != 0)) {
      local_28 = *(longlong *)(param_2 + 0x1c);
      local_20 = (int)param_2[0x1e] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x12b8) + 0x10) + 0x20))();
      uVar6 = 0x37;
      pwVar10 = L"SunBC6";
      uVar8 = 0x10;
      uVar7 = 4;
      uVar9 = 4;
      goto LAB_141d543e1;
    }
  }
  else if (iVar5 == 7) {
    if ((*(longlong *)(param_2 + 0x28) == DAT_146a83c30) && (param_2[0x1e] != 0)) {
      local_28 = *(longlong *)(param_2 + 0x1c);
      local_20 = (int)param_2[0x1e] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x12b8) + 0x10) + 0x20))();
      uVar6 = 7;
      pwVar10 = L"SunBC3";
      uVar8 = 0x10;
      uVar7 = 4;
      uVar9 = 4;
      goto LAB_141d543e1;
    }
  }
  else if (iVar5 == 5) {
    if ((*(longlong *)(param_2 + 0x28) == DAT_146a83c20) && (param_2[0x1e] != 0)) {
      local_28 = *(longlong *)(param_2 + 0x1c);
      local_20 = (int)param_2[0x1e] + local_28;
      uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x12b8) + 0x10) + 0x20))();
      uVar6 = 5;
      pwVar10 = L"SunBC1";
      uVar8 = 8;
      uVar7 = 4;
      uVar9 = 4;
LAB_141d543e1:
      FUN_141d15200(&local_res8,uVar2,&local_28,uVar6,uVar9,uVar7,uVar8,pwVar10);
    }
  }
  else if ((iVar5 == 10) && (param_2[0x12] != 0)) {
    local_28 = *(longlong *)(param_2 + 0x10);
    local_20 = (int)param_2[0x12] + local_28;
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x12b8) + 0x10) + 0x20))();
    uVar6 = 10;
    pwVar10 = L"SunFull";
    uVar8 = 8;
    uVar7 = 1;
    uVar9 = 1;
    goto LAB_141d543e1;
  }
  iVar5 = *(int *)(param_1 + 0x12f8);
  if (iVar5 == 0x38) {
    if ((*(longlong *)(param_2 + 0x2a) != DAT_146a83c70) || (param_2[0x22] == 0))
    goto LAB_141d54662;
    local_28 = *(longlong *)(param_2 + 0x20);
    local_20 = (int)param_2[0x22] + local_28;
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1300) + 0x10) + 0x20))();
    uVar6 = 0x38;
    pwVar10 = L"SkyBC7";
    uVar8 = 0x10;
    uVar7 = 4;
    uVar9 = 4;
  }
  else if (iVar5 == 0x37) {
    if ((*(longlong *)(param_2 + 0x2a) != DAT_146a83c60) || (param_2[0x22] == 0))
    goto LAB_141d54662;
    local_28 = *(longlong *)(param_2 + 0x20);
    local_20 = (int)param_2[0x22] + local_28;
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1300) + 0x10) + 0x20))();
    uVar6 = 0x37;
    pwVar10 = L"SkyBC6";
    uVar8 = 0x10;
    uVar7 = 4;
    uVar9 = 4;
  }
  else if (iVar5 == 7) {
    if ((*(longlong *)(param_2 + 0x2a) != DAT_146a83c30) || (param_2[0x22] == 0))
    goto LAB_141d54662;
    local_28 = *(longlong *)(param_2 + 0x20);
    local_20 = (int)param_2[0x22] + local_28;
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1300) + 0x10) + 0x20))();
    uVar6 = 7;
    pwVar10 = L"SkyBC3";
    uVar8 = 0x10;
    uVar7 = 4;
    uVar9 = 4;
  }
  else if (iVar5 == 5) {
    if ((*(longlong *)(param_2 + 0x2a) != DAT_146a83c20) || (param_2[0x22] == 0))
    goto LAB_141d54662;
    local_28 = *(longlong *)(param_2 + 0x20);
    local_20 = (int)param_2[0x22] + local_28;
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1300) + 0x10) + 0x20))();
    uVar6 = 5;
    pwVar10 = L"SkyBC1";
    uVar8 = 8;
    uVar7 = 4;
    uVar9 = 4;
  }
  else {
    if ((iVar5 != 10) || (param_2[0x16] == 0)) goto LAB_141d54662;
    local_28 = *(longlong *)(param_2 + 0x14);
    local_20 = (int)param_2[0x16] + local_28;
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1300) + 0x10) + 0x20))();
    uVar6 = 10;
    pwVar10 = L"SkyFull";
    uVar8 = 8;
    uVar7 = 1;
    uVar9 = 1;
  }
  FUN_141d15200(&local_res8,uVar2,&local_28,uVar6,uVar9,uVar7,uVar8,pwVar10);
LAB_141d54662:
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1308,&local_res8,param_3);
  if (local_res8 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x1308) + (longlong)local_res8 * 0x28;
  }
  *(uint *)(lVar3 + 0xc) = param_2[1];
  *(uint *)(lVar3 + 0x10) = param_2[2];
  *(uint *)(lVar3 + 0x14) = param_2[3];
  *(uint *)(lVar3 + 0x18) = param_2[4];
  return;
}



// FUNCTION 141d54860 FUN_141d54860 body=628 status=ok
// SIG undefined FUN_141d54860(void)

longlong * FUN_141d54860(longlong *param_1)

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
  *puVar3 = L"PositionAndRadius";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x155;
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
  *puVar3 = L"CaptureProperties";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x1550;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0x155;
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
  *puVar3 = L"CaptureOffsetAndAverageBrightness";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x2aa0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0x155;
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
  *puVar3 = L"AverageBrightnessTimeOfDay";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x3ff0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0x155;
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
  *puVar3 = L"BoxTransform";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400005540;
  puVar3[1] = 0x400000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 0x15500000004;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141d54ae0 FUN_141d54ae0 body=524 status=ok
// SIG undefined FUN_141d54ae0(void)

longlong * FUN_141d54ae0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FReflectionUniformParameters::zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyLightBlendDestinationCubemapSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x30;
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
  *puVar1 = L"ReflectionCubemap";
  puVar1[1] = L"TextureCubeArray";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x38;
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
  *puVar1 = L"ReflectionCubemapSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x40;
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
  *puVar1 = L"ReflectionCubemap_Sun";
  puVar1[1] = L"TextureCubeArray";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000048;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141d54cf0 zzGetMembersBefore body=612 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FReflectionUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"SkyLightParameters";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
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
  *puVar3 = L"SkyLightCubemapBrightness";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
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
  *puVar3 = L"SkyLightCubemap";
  puVar3[1] = L"TextureCube";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x18;
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
  *puVar3 = L"SkyLightCubemapSampler";
  puVar3[1] = L"SamplerState";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 8;
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
  *puVar3 = L"SkyLightBlendDestinationCubemap";
  puVar3[1] = L"TextureCube";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x900000028;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141d54f60 Serialize body=144 status=ok
// SIG undefined Serialize(void)

undefined1 THZBBuildPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_141ad3f10(param_1 + 0xd4,param_2);
  FUN_141ad3f10(param_1 + 0xdc,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  return 0;
}



// FUNCTION 141d54ff0 FUN_141d54ff0 body=135 status=ok
// SIG undefined FUN_141d54ff0(void)

undefined1 FUN_141d54ff0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  param_1 = param_1 + 0xd4;
  lVar1 = 4;
  do {
    FUN_1419e0b60(param_2,param_1);
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 0;
}



// FUNCTION 141d55090 FUN_141d55090 body=89 status=ok
// SIG undefined FUN_141d55090(void)

undefined1 FUN_141d55090(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  return 0;
}



// FUNCTION 141d550f0 FUN_141d550f0 body=65 status=ok
// SIG undefined FUN_141d550f0(void)

undefined1 FUN_141d550f0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 local_res10;
  undefined2 local_res14;
  
  uVar1 = FUN_141d7c390();
  if (*(int *)(param_2 + 0x44) == 2) {
    local_res10 = 0;
    local_res14 = 0;
    FUN_1419e0a40(param_2,&local_res10);
  }
  return uVar1;
}



// FUNCTION 141d55140 FUN_141d55140 body=93 status=ok
// SIG undefined FUN_141d55140(void)

undefined1 FUN_141d55140(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x158);
  FUN_1419e0a40(param_2,param_1 + 0x15e);
  FUN_1419e0a40(param_2,param_1 + 0x164);
  return uVar1;
}



// FUNCTION 141d551a0 FUN_141d551a0 body=689 status=ok
// SIG undefined FUN_141d551a0(void)

void FUN_141d551a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  ulonglong _Size;
  int iVar10;
  longlong lVar11;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  iVar10 = 5;
  if (*(int *)(DAT_146b17150 + 0x668) < 6) {
    iVar10 = *(int *)(DAT_146b17150 + 0x668);
  }
  iVar9 = 0;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + -0x108);
      lVar4 = *(longlong *)(DAT_146b17150 + 0x660);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (param_2,*(undefined8 *)(lVar3 + 0x40),param_1 + 8,lVar11 + lVar4,iVar9);
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while (iVar9 < iVar10);
    if (4 < iVar9) goto LAB_141d55277;
  }
  do {
    lVar11 = *(longlong *)(param_1 + -0x108);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1419f3850(lVar11);
    }
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,*(undefined8 *)(lVar11 + 0x40),param_1 + 8,&DAT_1464aa6e0,iVar9);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
LAB_141d55277:
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_38,param_5,param_6,param_7);
  FUN_142597a60(param_6);
  lVar11 = *(longlong *)(param_1 + -0x108);
  local_48 = 0x40ffffffff;
  uStack_40 = 0;
  if (*(char *)(lVar11 + 0x28) == '\0') {
    FUN_1419f3850(lVar11);
  }
  local_50 = *(undefined8 *)(lVar11 + 0x40);
  uVar5 = (uint)*(ushort *)(param_1 + 0x12);
  if (0xf < *(ushort *)(param_1 + 0x12)) {
    uVar5 = 0x10;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10);
    uVar2 = *(ushort *)(param_1 + 0xe);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_48,_Size);
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
    *puVar8 = &PTR_LAB_143f594b0;
    puVar8[2] = local_50;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  FUN_141c96a70(&local_58,param_2,0,*(undefined4 *)(param_7 + 0x1a38));
  lVar11 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar11 + 0x28) == '\0') {
    FUN_1419f3850(lVar11);
  }
  FUN_141aa87d0(param_1 + -0x150,param_2,*(undefined8 *)(lVar11 + 0x40),param_5,param_6,param_7,
                param_7 + 0x20,local_58);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  return;
}



// FUNCTION 141d55460 FUN_141d55460 body=483 status=ok
// SIG undefined FUN_141d55460(void)

void FUN_141d55460(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  
  lVar6 = param_5;
  if ((param_5 == 0) || ((*(uint *)(param_5 + 0x18) & 0x300) != 0)) {
    param_5._0_4_ = 0x3f800000;
  }
  else {
    param_5._0_4_ = 0x3e4ccccd;
  }
  lVar3 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  uVar5 = (uint)*(ushort *)(param_1 + 0x18);
  if (3 < *(ushort *)(param_1 + 0x18)) {
    uVar5 = 4;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x16);
    uVar2 = *(ushort *)(param_1 + 0x14);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&param_5,_Size);
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
    *puVar9 = &PTR_LAB_143f594b0;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 5) = uVar5;
  }
  lVar3 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141d84bb0(param_1 + -0x150,param_2,*(undefined8 *)(lVar3 + 0x40),param_3,param_4,lVar6,param_7
                ,param_8,0);
  return;
}



// FUNCTION 141d55650 FUN_141d55650 body=109 status=ok
// SIG undefined FUN_141d55650(void)

longlong FUN_141d55650(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_143fca6f8;
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 141d556c0 Serialize body=80 status=ok
// SIG undefined Serialize(void)

undefined1 TDeferredLightVS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  return 0;
}



// FUNCTION 141d55710 FUN_141d55710 body=247 status=ok
// SIG undefined FUN_141d55710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d55710(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 **local_78;
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_60;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x30);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
  *local_60 = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141d55810 FUN_141d55810 body=89 status=ok
// SIG undefined FUN_141d55810(void)

undefined8 * FUN_141d55810(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e51030;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141d55870 FUN_141d55870 body=1149 status=ok
// SIG undefined FUN_141d55870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d55870(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  short sVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a0 = local_88;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_a8 = &local_78;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  uVar9 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b0 = 1;
  local_b8 = 0x480;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_98,&DAT_146ab6e78,2);
  plVar7 = (longlong *)(param_1 + 0x30);
  if (plVar7 != local_98) {
    puVar3 = (undefined8 *)*plVar7;
    *plVar7 = local_98[0];
    local_98[0] = 0;
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
          bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar11) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar11) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            uVar6 = uVar9;
            if (uVar5 != 0) {
              uVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(uVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  do {
    sVar10 = (short)uVar9 * 8;
    uVar5 = (int)uVar9 * 0x24;
    *(short *)(local_88[0] + (ulonglong)uVar5 * 2) = sVar10;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 1) * 2) = sVar10 + 2;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 2) * 2) = sVar10 + 3;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 3) * 2) = sVar10;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 4) * 2) = sVar10 + 3;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 5) * 2) = sVar10 + 1;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 6) * 2) = sVar10 + 4;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 7) * 2) = sVar10 + 5;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 8) * 2) = sVar10 + 7;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 9) * 2) = sVar10 + 4;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 10) * 2) = sVar10 + 7;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0xb) * 2) = sVar10 + 6;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0xc) * 2) = sVar10;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0xd) * 2) = sVar10 + 1;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0xe) * 2) = sVar10 + 5;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0xf) * 2) = sVar10;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x10) * 2) = sVar10 + 5;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x11) * 2) = sVar10 + 4;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x12) * 2) = sVar10 + 2;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x13) * 2) = sVar10 + 6;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x14) * 2) = sVar10 + 7;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x15) * 2) = sVar10 + 2;
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x16) * 2) = sVar10 + 7;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x17) * 2) = sVar10 + 3;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x18) * 2) = sVar10;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x19) * 2) = sVar10 + 4;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x1a) * 2) = sVar10 + 6;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x1b) * 2) = sVar10;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x1c) * 2) = sVar10 + 6;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x1d) * 2) = sVar10 + 2;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x1e) * 2) = sVar10 + 1;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x1f) * 2) = sVar10 + 3;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x20) * 2) = sVar10 + 7;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x21) * 2) = sVar10 + 1;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x22) * 2) = sVar10 + 7;
    *(short *)(local_88[0] + (ulonglong)(uVar5 + 0x23) * 2) = sVar10 + 5;
  } while (uVar8 < 0x10);
  (**(code **)(*DAT_146ab6358 + 0x500))(DAT_146ab6358,&DAT_146ab6e78,*plVar7);
  return;
}



// FUNCTION 141d55cf0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e51070;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141d55d60 Serialize body=149 status=ok
// SIG undefined Serialize(void)

undefined1 FHZBTestPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  return 0;
}



// FUNCTION 141d55e00 FUN_141d55e00 body=836 status=ok
// SIG undefined FUN_141d55e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d55e00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  ulonglong *local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined4 local_68;
  ulonglong local_60 [5];
  
  local_60[4] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_2 + 0x2f88);
  lVar8 = *(longlong *)(param_2 + 0x3090);
  puVar19 = (undefined8 *)0x0;
  uVar2 = *(undefined8 *)(param_2 + 0x2fd0);
  lVar3 = *(longlong *)(lVar1 + 8);
  local_80 = &DAT_146a9e940;
  iVar13 = *(int *)(lVar3 + 0x34);
  local_78 = 0;
  local_d8 = uVar2;
  local_b0 = param_1;
  local_98 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&local_c0,&local_80);
  puVar10 = puVar19;
  if (local_c0 != -1) {
    puVar10 = (undefined8 *)((longlong)local_c0 * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  local_68 = 0;
  puVar14 = puVar10 + 2;
  if (puVar10 == (undefined8 *)0x0) {
    puVar14 = puVar19;
  }
  local_70 = &DAT_146a9ea90;
  uVar4 = *puVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&local_bc,&local_70);
  puVar10 = puVar19;
  if (local_bc != -1) {
    puVar10 = (undefined8 *)((longlong)local_bc * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  puVar14 = puVar10 + 2;
  if (puVar10 == (undefined8 *)0x0) {
    puVar14 = puVar19;
  }
  local_b8 = iVar13 + 3U >> 2;
  uVar18 = 1;
  uVar5 = *puVar14;
  local_b4 = iVar13 + (1 - local_b8) * 4;
  local_e8 = local_b4;
  if (1 < local_b8) {
    local_e8 = 4;
  }
  uVar11 = 0;
  if (local_e8 != 0) {
    puVar15 = local_60;
    lVar8 = *(longlong *)(lVar1 + 0x28);
    if (*(longlong *)(lVar1 + 0x28) == 0) {
      lVar8 = lVar1 + 0x20;
    }
    do {
      lVar7 = (longlong)(int)uVar11;
      uVar11 = uVar11 + 1;
      *puVar15 = *(ulonglong *)(lVar8 + lVar7 * 8);
      puVar15 = puVar15 + 1;
    } while (uVar11 < local_e8);
  }
  local_cc = local_d8._4_4_;
  local_d0 = (int)uVar2;
  local_c8 = 1;
  lVar8 = FSceneRenderTargets::Get(local_b0);
  lVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar8 + 0x60) + 8) + 8))();
  lVar8 = local_98;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  UNLOCK();
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  local_f8 = local_60;
  local_f0 = 0;
  local_100 = &local_a8;
  local_108 = &local_a0;
  local_d8 = lVar7;
  local_a8 = lVar3;
  local_a0 = lVar7;
  FUN_141d56930(uVar4,local_b0,local_98,&local_d0);
  uVar11 = local_b8;
  if (1 < local_b8) {
    iVar13 = 4;
    local_90 = lVar3;
    local_88 = lVar7;
    do {
      local_d0 = local_d0 >> 4;
      local_cc = local_cc >> 4;
      local_e8 = local_b4;
      if (uVar18 < uVar11 - 1) {
        local_e8 = 4;
      }
      lVar7 = *(longlong *)(lVar1 + 0x28);
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        lVar7 = lVar1 + 0x20;
      }
      uVar17 = local_e8 - 1;
      uVar16 = 0;
      local_f0 = *(undefined8 *)(lVar7 + -8 + (longlong)iVar13 * 8);
      do {
        uVar6 = (uint)uVar16;
        uVar12 = uVar6 + 1;
        uVar9 = uVar17;
        if (uVar6 <= uVar17) {
          uVar9 = uVar6;
        }
        local_60[uVar16] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
        uVar9 = uVar17;
        if (uVar12 <= uVar17) {
          uVar9 = uVar12;
        }
        local_60[uVar12] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
        uVar12 = uVar6 + 2;
        uVar9 = uVar17;
        if (uVar12 <= uVar17) {
          uVar9 = uVar12;
        }
        local_60[uVar12] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
        uVar12 = uVar6 + 3;
        uVar9 = uVar17;
        if (uVar12 <= uVar17) {
          uVar9 = uVar12;
        }
        uVar16 = (ulonglong)(uVar6 + 4);
        local_60[uVar12] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
      } while (uVar6 + 4 < 4);
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      if (local_d8 != 0) {
        LOCK();
        *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
        UNLOCK();
      }
      local_f8 = local_60;
      local_100 = &local_90;
      local_108 = &local_88;
      FUN_141d564e0(uVar5,local_b0,lVar8,&local_d0);
      uVar18 = uVar18 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar18 < uVar11);
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_d8);
  return;
}



// FUNCTION 141d56150 FUN_141d56150 body=906 status=ok
// SIG undefined FUN_141d56150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d56150(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  uint local_e8;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  longlong *local_c0;
  int local_b8;
  int local_b4;
  uint local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined4 local_68;
  longlong local_60 [5];
  
  local_60[4] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_a8 = param_2;
  FUN_141d5cd00();
  local_c0 = (longlong *)(*(longlong *)(param_2 + 0x2f88) + 8);
  lVar1 = *local_c0;
  FUN_141c5b070(param_1,0,lVar1);
  lVar6 = *(longlong *)(param_2 + 0x3090);
  uVar2 = *(undefined8 *)(param_2 + 0x2fd0);
  iVar13 = *(int *)(lVar1 + 0x34);
  puVar18 = (undefined8 *)0x0;
  local_80 = &DAT_146a9e940;
  local_78 = 0;
  local_d8 = uVar2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_b8,&local_80);
  puVar9 = puVar18;
  if (local_b8 != -1) {
    puVar9 = (undefined8 *)((longlong)local_b8 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  local_68 = 0;
  puVar12 = puVar9 + 2;
  if (puVar9 == (undefined8 *)0x0) {
    puVar12 = puVar18;
  }
  local_70 = &DAT_146a9ea90;
  uVar3 = *puVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_b4,&local_70);
  puVar9 = puVar18;
  if (local_b4 != -1) {
    puVar9 = (undefined8 *)((longlong)local_b4 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  puVar12 = puVar9 + 2;
  if (puVar9 == (undefined8 *)0x0) {
    puVar12 = puVar18;
  }
  uVar17 = iVar13 + 3U >> 2;
  uVar4 = *puVar12;
  local_b0 = iVar13 + (1 - uVar17) * 4;
  local_e8 = local_b0;
  if (1 < uVar17) {
    local_e8 = 4;
  }
  uVar10 = 0;
  if (local_e8 != 0) {
    plVar7 = local_60;
    plVar16 = (longlong *)local_c0[4];
    if ((longlong *)local_c0[4] == (longlong *)0x0) {
      plVar16 = local_c0 + 3;
    }
    do {
      lVar6 = (longlong)(int)uVar10;
      uVar10 = uVar10 + 1;
      *plVar7 = plVar16[lVar6];
      plVar7 = plVar7 + 1;
    } while (uVar10 < local_e8);
  }
  local_cc = local_d8._4_4_;
  local_d0 = (int)uVar2;
  local_c8 = 1;
  lVar6 = FSceneRenderTargets::Get(param_1);
  lVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x60) + 8) + 8))();
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_f8 = local_60;
  local_f0 = 0;
  local_100 = &local_a0;
  local_108 = &local_98;
  local_d8 = lVar6;
  local_a0 = lVar1;
  local_98 = lVar6;
  FUN_141d571e0(uVar3,param_1,local_a8,&local_d0);
  uVar10 = 1;
  if (1 < uVar17) {
    local_c0 = local_c0 + 3;
    iVar13 = 4;
    local_90 = lVar1;
    local_88 = lVar6;
    do {
      lVar6 = local_d8;
      local_d0 = local_d0 >> 4;
      local_cc = local_cc >> 4;
      local_e8 = local_b0;
      if (uVar10 < uVar17 - 1) {
        local_e8 = 4;
      }
      plVar7 = (longlong *)local_c0[1];
      if ((longlong *)local_c0[1] == (longlong *)0x0) {
        plVar7 = local_c0;
      }
      uVar15 = local_e8 - 1;
      uVar14 = 0;
      local_f0 = plVar7[(longlong)iVar13 + -1];
      do {
        uVar5 = (uint)uVar14;
        uVar11 = uVar5 + 1;
        uVar8 = uVar15;
        if (uVar5 <= uVar15) {
          uVar8 = uVar5;
        }
        local_60[uVar14] = plVar7[(int)(uVar8 + iVar13)];
        uVar8 = uVar15;
        if (uVar11 <= uVar15) {
          uVar8 = uVar11;
        }
        local_60[uVar11] = plVar7[(int)(uVar8 + iVar13)];
        uVar11 = uVar5 + 2;
        uVar8 = uVar15;
        if (uVar11 <= uVar15) {
          uVar8 = uVar11;
        }
        local_60[uVar11] = plVar7[(int)(uVar8 + iVar13)];
        uVar11 = uVar5 + 3;
        uVar8 = uVar15;
        if (uVar11 <= uVar15) {
          uVar8 = uVar11;
        }
        uVar14 = (ulonglong)(uVar5 + 4);
        local_60[uVar11] = plVar7[(int)(uVar8 + iVar13)];
      } while (uVar5 + 4 < 4);
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      if (local_d8 != 0) {
        LOCK();
        *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
        UNLOCK();
      }
      local_f8 = local_60;
      local_100 = &local_90;
      local_108 = &local_88;
      FUN_141d56d80(uVar4,param_1,local_a8,&local_d0);
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar10 < uVar17);
  }
  FUN_141c5b070(param_1,0,lVar1);
  FUN_141c5b070(param_1,1,lVar6);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_d8);
  return;
}



// FUNCTION 141d564e0 FUN_141d564e0 body=1097 status=ok
// SIG undefined FUN_141d564e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d564e0(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  ,longlong *param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  undefined8 local_res18;
  longlong local_res20;
  undefined4 uVar9;
  longlong local_b8 [2];
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  
  local_res18 = 0;
  local_res8 = 0;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144dc9ce0;
  puVar5[2] = uVar2;
  lVar3 = FSceneRenderTargets::Get(param_2);
  fVar7 = (float)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x378) >> 0x20);
  local_70 = param_9;
  local_6c = *param_4;
  local_68 = param_4[1];
  local_94 = 1.0 / fVar7;
  local_res20 = *param_6;
  fVar8 = (float)(int)*(undefined8 *)(lVar3 + 0x378);
  fStack_84 = local_94 + local_94;
  local_98 = 1.0 / fVar8;
  local_88 = local_98 + local_98;
  fStack_a0 = (float)*(int *)(param_3 + 0x1aa0) / fVar8;
  fStack_9c = (float)*(int *)(param_3 + 0x1aa4) / fVar7;
  local_a8 = CONCAT44(fStack_84,local_88);
  local_78 = (float)*(int *)(param_3 + 0x1aa8) / fVar8 - local_98 * 0.5;
  local_74 = (float)*(int *)(param_3 + 0x1aac) / fVar7 - local_94 * 0.5;
  if (local_res20 != 0) {
    LOCK();
    *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
    UNLOCK();
  }
  local_b8[0] = *param_5;
  if (local_b8[0] != 0) {
    LOCK();
    *(int *)(local_b8[0] + 8) = *(int *)(local_b8[0] + 8) + 1;
    UNLOCK();
  }
  fStack_80 = fStack_a0;
  fStack_7c = fStack_9c;
  FUN_141d584d0(param_1,fStack_a0,local_b8,&local_res20,param_7,param_8,&local_98);
  uVar9 = (undefined4)((ulonglong)param_7 >> 0x20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9ec8c) {
    _Init_thread_header(&DAT_146a9ec8c);
    if (DAT_146a9ec8c == -1) {
      DAT_146a9ec80 = 8;
      DAT_146a9ec84 = 8;
      _DAT_146a9ec88 = 1;
      _Init_thread_footer(&DAT_146a9ec8c);
    }
  }
  DispatchComputeShader
            (param_2,param_1,
             (longlong)(*param_4 + -1 + DAT_146a9ec80) / (longlong)DAT_146a9ec80 & 0xffffffff,
             (longlong)(param_4[1] + -1 + DAT_146a9ec84) / (longlong)DAT_146a9ec84 & 0xffffffff,
             CONCAT44(uVar9,1));
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  local_a8 = 0;
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
    *puVar5 = &PTR_LAB_144dc9cd0;
    puVar5[2] = uVar2;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  puVar6 = (ushort *)(param_1 + 0xd4);
  lVar3 = 4;
  do {
    if (puVar6[1] != 0) {
      uVar1 = *puVar6;
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
      *puVar5 = &PTR_LAB_144dc9cd0;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = 0;
    }
    puVar6 = puVar6 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_5);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_6);
  return;
}



// FUNCTION 141d56930 FUN_141d56930 body=1097 status=ok
// SIG undefined FUN_141d56930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d56930(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  ,longlong *param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  undefined8 local_res18;
  longlong local_res20;
  undefined4 uVar9;
  longlong local_b8 [2];
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  
  local_res18 = 0;
  local_res8 = 0;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144dc9ce0;
  puVar5[2] = uVar2;
  lVar3 = FSceneRenderTargets::Get(param_2);
  fVar7 = (float)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x378) >> 0x20);
  local_70 = param_9;
  local_6c = *param_4;
  local_68 = param_4[1];
  local_94 = 1.0 / fVar7;
  local_res20 = *param_6;
  fVar8 = (float)(int)*(undefined8 *)(lVar3 + 0x378);
  fStack_84 = local_94 + local_94;
  local_98 = 1.0 / fVar8;
  local_88 = local_98 + local_98;
  fStack_a0 = (float)*(int *)(param_3 + 0x1aa0) / fVar8;
  fStack_9c = (float)*(int *)(param_3 + 0x1aa4) / fVar7;
  local_a8 = CONCAT44(fStack_84,local_88);
  local_78 = (float)*(int *)(param_3 + 0x1aa8) / fVar8 - local_98 * 0.5;
  local_74 = (float)*(int *)(param_3 + 0x1aac) / fVar7 - local_94 * 0.5;
  if (local_res20 != 0) {
    LOCK();
    *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
    UNLOCK();
  }
  local_b8[0] = *param_5;
  if (local_b8[0] != 0) {
    LOCK();
    *(int *)(local_b8[0] + 8) = *(int *)(local_b8[0] + 8) + 1;
    UNLOCK();
  }
  fStack_80 = fStack_a0;
  fStack_7c = fStack_9c;
  FUN_141d587c0(param_1,fStack_a0,local_b8,&local_res20,param_7,param_8,&local_98);
  uVar9 = (undefined4)((ulonglong)param_7 >> 0x20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9ec7c) {
    _Init_thread_header(&DAT_146a9ec7c);
    if (DAT_146a9ec7c == -1) {
      DAT_146a9ec70 = 8;
      DAT_146a9ec74 = 8;
      _DAT_146a9ec78 = 1;
      _Init_thread_footer(&DAT_146a9ec7c);
    }
  }
  DispatchComputeShader
            (param_2,param_1,
             (longlong)(*param_4 + -1 + DAT_146a9ec70) / (longlong)DAT_146a9ec70 & 0xffffffff,
             (longlong)(param_4[1] + -1 + DAT_146a9ec74) / (longlong)DAT_146a9ec74 & 0xffffffff,
             CONCAT44(uVar9,1));
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  local_a8 = 0;
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
    *puVar5 = &PTR_LAB_144dc9cd0;
    puVar5[2] = uVar2;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  puVar6 = (ushort *)(param_1 + 0xd4);
  lVar3 = 4;
  do {
    if (puVar6[1] != 0) {
      uVar1 = *puVar6;
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
      *puVar5 = &PTR_LAB_144dc9cd0;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = 0;
    }
    puVar6 = puVar6 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_5);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_6);
  return;
}



// FUNCTION 141d56d80 FUN_141d56d80 body=1117 status=ok
// SIG undefined FUN_141d56d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d56d80(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  ,longlong *param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  undefined8 local_res18;
  longlong local_res20;
  undefined4 uVar9;
  longlong local_b8 [2];
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  
  local_res18 = 0;
  local_res8 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e50;
  puVar5[2] = uVar2;
  lVar3 = FSceneRenderTargets::Get(param_2);
  fVar7 = (float)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x378) >> 0x20);
  local_70 = param_9;
  local_6c = *param_4;
  local_68 = param_4[1];
  local_94 = 1.0 / fVar7;
  local_res20 = *param_6;
  fVar8 = (float)(int)*(undefined8 *)(lVar3 + 0x378);
  fStack_84 = local_94 + local_94;
  local_98 = 1.0 / fVar8;
  local_88 = local_98 + local_98;
  fStack_a0 = (float)*(int *)(param_3 + 0x1aa0) / fVar8;
  fStack_9c = (float)*(int *)(param_3 + 0x1aa4) / fVar7;
  local_a8 = CONCAT44(fStack_84,local_88);
  local_78 = (float)*(int *)(param_3 + 0x1aa8) / fVar8 - local_98 * 0.5;
  local_74 = (float)*(int *)(param_3 + 0x1aac) / fVar7 - local_94 * 0.5;
  if (local_res20 != 0) {
    LOCK();
    *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
    UNLOCK();
  }
  local_b8[0] = *param_5;
  if (local_b8[0] != 0) {
    LOCK();
    *(int *)(local_b8[0] + 8) = *(int *)(local_b8[0] + 8) + 1;
    UNLOCK();
  }
  fStack_80 = fStack_a0;
  fStack_7c = fStack_9c;
  FUN_141d58b30(param_1,fStack_a0,local_b8,&local_res20,param_7,param_8,&local_98);
  uVar9 = (undefined4)((ulonglong)param_7 >> 0x20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9ec6c) {
    _Init_thread_header(&DAT_146a9ec6c);
    if (DAT_146a9ec6c == -1) {
      DAT_146a9ec60 = 8;
      DAT_146a9ec64 = 8;
      _DAT_146a9ec68 = 1;
      _Init_thread_footer(&DAT_146a9ec6c);
    }
  }
  DispatchComputeShader
            (param_2,param_1,
             (longlong)(*param_4 + -1 + DAT_146a9ec60) / (longlong)DAT_146a9ec60 & 0xffffffff,
             (longlong)(param_4[1] + -1 + DAT_146a9ec64) / (longlong)DAT_146a9ec64 & 0xffffffff,
             CONCAT44(uVar9,1));
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  local_a8 = 0;
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
    puVar5[2] = uVar2;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  puVar6 = (ushort *)(param_1 + 0xd4);
  lVar3 = 4;
  do {
    if (puVar6[1] != 0) {
      uVar1 = *puVar6;
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
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = 0;
    }
    puVar6 = puVar6 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_5);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_6);
  return;
}



// FUNCTION 141d571e0 FUN_141d571e0 body=1117 status=ok
// SIG undefined FUN_141d571e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d571e0(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  ,longlong *param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  undefined8 local_res18;
  longlong local_res20;
  undefined4 uVar9;
  longlong local_b8 [2];
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  
  local_res18 = 0;
  local_res8 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e50;
  puVar5[2] = uVar2;
  lVar3 = FSceneRenderTargets::Get(param_2);
  fVar7 = (float)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x378) >> 0x20);
  local_70 = param_9;
  local_6c = *param_4;
  local_68 = param_4[1];
  local_94 = 1.0 / fVar7;
  local_res20 = *param_6;
  fVar8 = (float)(int)*(undefined8 *)(lVar3 + 0x378);
  fStack_84 = local_94 + local_94;
  local_98 = 1.0 / fVar8;
  local_88 = local_98 + local_98;
  fStack_a0 = (float)*(int *)(param_3 + 0x1aa0) / fVar8;
  fStack_9c = (float)*(int *)(param_3 + 0x1aa4) / fVar7;
  local_a8 = CONCAT44(fStack_84,local_88);
  local_78 = (float)*(int *)(param_3 + 0x1aa8) / fVar8 - local_98 * 0.5;
  local_74 = (float)*(int *)(param_3 + 0x1aac) / fVar7 - local_94 * 0.5;
  if (local_res20 != 0) {
    LOCK();
    *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
    UNLOCK();
  }
  local_b8[0] = *param_5;
  if (local_b8[0] != 0) {
    LOCK();
    *(int *)(local_b8[0] + 8) = *(int *)(local_b8[0] + 8) + 1;
    UNLOCK();
  }
  fStack_80 = fStack_a0;
  fStack_7c = fStack_9c;
  FUN_141d58e20(param_1,fStack_a0,local_b8,&local_res20,param_7,param_8,&local_98);
  uVar9 = (undefined4)((ulonglong)param_7 >> 0x20);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9ec5c) {
    _Init_thread_header(&DAT_146a9ec5c);
    if (DAT_146a9ec5c == -1) {
      DAT_146a9ec50 = 8;
      DAT_146a9ec54 = 8;
      _DAT_146a9ec58 = 1;
      _Init_thread_footer(&DAT_146a9ec5c);
    }
  }
  DispatchComputeShader
            (param_2,param_1,
             (longlong)(*param_4 + -1 + DAT_146a9ec50) / (longlong)DAT_146a9ec50 & 0xffffffff,
             (longlong)(param_4[1] + -1 + DAT_146a9ec54) / (longlong)DAT_146a9ec54 & 0xffffffff,
             CONCAT44(uVar9,1));
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  local_a8 = 0;
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
    puVar5[2] = uVar2;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  puVar6 = (ushort *)(param_1 + 0xd4);
  lVar3 = 4;
  do {
    if (puVar6[1] != 0) {
      uVar1 = *puVar6;
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
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = 0;
    }
    puVar6 = puVar6 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_5);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_6);
  return;
}



// FUNCTION 141d57640 FUN_141d57640 body=595 status=ok
// SIG undefined FUN_141d57640(void)

uint * FUN_141d57640(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  void *_Src;
  longlong *plVar9;
  bool bVar10;
  uint local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar6 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)(int)uVar6 * 0xd8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0xd8 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar6;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  _Src = (void *)((longlong)(int)uVar6 * 0xd8 + *param_1);
  FUN_141d592a0(_Src,param_3);
  *(undefined4 *)((longlong)_Src + 0xd0) = 0xffffffff;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar6 != 1) {
    FUN_141d68c50(param_1,local_res8,(longlong)_Src + 0x20);
    uVar3 = local_res8[0];
    lVar5 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      plVar9 = (longlong *)(lVar5 * 0xd8 + *param_1);
      TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
      ::
      ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
                (plVar9 + 2);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar9,_Src,0xd0);
      TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_141d57865;
    }
  }
  if (3 < uVar6) {
    uVar3 = (uVar6 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar4 = 0x20;
    cVar8 = '\0';
    if (uVar3 != 0) {
      iVar4 = 0x1f - iVar7;
    }
    uVar3 = (uVar6 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar6 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar6 = FMeshDrawingPolicy::GetTypeHash((longlong)_Src + 0x20);
    uVar6 = uVar6 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xd4) = uVar6;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xd0) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TStaticMeshDrawList<FHitProxyDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FHitProxyDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141d57865:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141d578a0 FUN_141d578a0 body=676 status=ok
// SIG undefined FUN_141d578a0(void)

int * FUN_141d578a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar5 + lVar4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  lVar7 = (longlong)iVar10 * 0x10;
  puVar13 = (uint *)(*param_1 + lVar7);
  *puVar13 = *(uint *)*param_3;
  *(undefined1 *)(puVar13 + 1) = 0;
  puVar13[2] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar13) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0x10) == *puVar13) break;
          iVar8 = *(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),puVar13,8);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar7 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar7 + 4 + lVar1) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar5 + lVar4);
      *puVar13 = *puVar13 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141d57b1f;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar3 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *puVar13;
    puVar13[3] = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar13[2] = *(uint *)((longlong)plVar5 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              (param_1);
  }
LAB_141d57b1f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141d57b50 FUN_141d57b50 body=679 status=ok
// SIG undefined FUN_141d57b50(void)

int * FUN_141d57b50(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  uint uVar15;
  bool bVar16;
  int local_res8 [2];
  
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar9 * 0x18);
  puVar3 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  *(undefined4 *)(_Src + 1) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0xc) = puVar3[1];
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    iVar9 = local_res8[0];
    lVar13 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar13 * 0x18),_Src,0x10);
      iVar2 = *param_2;
      bVar5 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar2;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + (longlong)iVar2 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)iVar2 * 0x18) = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar12 = (undefined1)local_res8[0];
      goto LAB_141d57dd3;
    }
  }
  uVar12 = 0;
  cVar6 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar11 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar15 = -(iVar9 + uVar11) ^ uVar11 >> 0xd;
    uVar10 = (iVar9 - uVar11) - uVar15 ^ uVar15 >> 0xc;
    uVar11 = (uVar11 - uVar10) - uVar15 ^ uVar10 << 0x10;
    uVar15 = (uVar15 - uVar11) - uVar10 ^ uVar11 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar15 ^ uVar15 >> 3;
    uVar11 = (uVar11 - uVar10) - uVar15 ^ uVar10 << 10;
    uVar10 = ((uVar15 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_141d57dd3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
  return param_2;
}



// FUNCTION 141d57e00 FUN_141d57e00 body=718 status=ok
// SIG undefined FUN_141d57e00(void)

int * FUN_141d57e00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  int local_res8 [2];
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  puVar3 = (uint *)*param_3;
  uVar8 = puVar3[1];
  uVar7 = puVar3[2];
  uVar10 = puVar3[3];
  puVar1 = (uint *)(*param_1 + (longlong)iVar13 * 0x28);
  plVar9 = (longlong *)param_3[1];
  *puVar1 = *puVar3;
  puVar1[1] = uVar8;
  puVar1[2] = uVar7;
  puVar1[3] = uVar10;
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar3 + 4);
  lVar12 = *plVar9;
  *(longlong *)(puVar1 + 6) = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  puVar1[8] = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,puVar1);
    iVar2 = local_res8[0];
    lVar12 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(*param_1 + lVar12 * 0x28);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x18);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar1,0x20);
      iVar13 = *param_2;
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar13;
      }
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + (longlong)iVar13 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar12 + 4 + (longlong)iVar13 * 0x28) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar11 = (undefined1)local_res8[0];
      goto LAB_141d580aa;
    }
  }
  uVar11 = 0;
  cVar5 = TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar5 == '\0') {
    uVar8 = *puVar1;
    uVar10 = (int)(*(ulonglong *)(puVar1 + 2) >> 4) - uVar8 ^ uVar8 >> 0xd;
    uVar7 = (-0x61c88647 - uVar10) - uVar8 ^ uVar10 << 8;
    uVar14 = (uVar8 - uVar7) - uVar10 ^ uVar7 >> 0xd;
    uVar10 = (uVar10 - uVar7) - uVar14 ^ uVar14 >> 0xc;
    uVar8 = (uVar7 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar8) - uVar10 ^ uVar8 >> 5;
    uVar7 = (uVar10 - uVar8) - uVar14 ^ uVar14 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar14 ^ uVar7 << 10;
    uVar8 = ((uVar14 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    puVar1[9] = uVar8;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar9 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141d580aa:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar11;
  }
  return param_2;
}



// FUNCTION 141d580d0 HeapSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_> body=373 status=ok
// SIG undefined HeapSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar9 = iVar4 * 2 + 1;
    iVar7 = iVar9;
    iVar10 = iVar4;
joined_r0x000141d580fa:
    do {
      if (iVar9 < param_2) {
        iVar5 = iVar4 * 2 + 1;
        iVar9 = iVar4 * 2 + 2;
        iVar6 = iVar5;
        if ((iVar9 < param_2) &&
           (iVar6 = iVar9,
           *(float *)(param_1 + (longlong)iVar5 * 2 + 1) <=
           *(float *)(param_1 + (longlong)iVar9 * 2 + 1) &&
           *(float *)(param_1 + (longlong)iVar9 * 2 + 1) !=
           *(float *)(param_1 + (longlong)iVar5 * 2 + 1))) {
          iVar6 = iVar5;
        }
        puVar8 = param_1 + (longlong)iVar6 * 2;
        puVar11 = param_1 + (longlong)iVar4 * 2;
        if (*(float *)(puVar8 + 1) < *(float *)(puVar11 + 1)) {
          if (puVar11 != puVar8) {
            uVar1 = puVar8[1];
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            *puVar11 = *puVar8;
            puVar11[1] = uVar1;
            *puVar8 = uVar2;
            puVar8[1] = uVar3;
          }
          iVar9 = iVar6 * 2 + 1;
          iVar4 = iVar6;
          goto joined_r0x000141d580fa;
        }
      }
      iVar9 = iVar7 + -2;
      iVar4 = iVar10 + -1;
      iVar7 = iVar9;
      iVar10 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar8 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar8) {
        uVar1 = puVar8[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = uVar1;
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
      }
      iVar4 = 0;
      if (1 < param_2) {
        do {
          iVar9 = iVar4 * 2 + 1;
          iVar10 = iVar4 * 2 + 2;
          iVar7 = iVar9;
          if ((iVar10 < param_2) &&
             (iVar7 = iVar10,
             *(float *)(param_1 + (longlong)iVar9 * 2 + 1) <=
             *(float *)(param_1 + (longlong)iVar10 * 2 + 1) &&
             *(float *)(param_1 + (longlong)iVar10 * 2 + 1) !=
             *(float *)(param_1 + (longlong)iVar9 * 2 + 1))) {
            iVar7 = iVar9;
          }
          puVar11 = param_1 + (longlong)iVar7 * 2;
          puVar12 = param_1 + (longlong)iVar4 * 2;
          if (*(float *)(puVar12 + 1) <= *(float *)(puVar11 + 1)) break;
          if (puVar12 != puVar11) {
            uVar1 = puVar11[1];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            *puVar12 = *puVar11;
            puVar12[1] = uVar1;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
          }
          iVar4 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar8 = puVar8 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141d58250 IntroSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_> body=631 status=ok
// SIG undefined IntroSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      puVar15 = (undefined8 *)*plVar10;
      puVar13 = (undefined8 *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
      puVar14 = puVar15;
      if ((int)local_338 != 0) {
LAB_141d58320:
        if (8 < lVar8) {
          puVar15 = puVar14 + (lVar8 / 2) * 2;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          puVar11 = puVar13 + 2;
          puVar15 = puVar14;
LAB_141d58356:
          puVar9 = puVar15;
          puVar15 = puVar9 + 2;
          if (puVar15 <= puVar13) goto code_r0x000141d5835f;
          goto LAB_141d58370;
        }
        for (; puVar11 = puVar14, puVar15 = puVar14, puVar14 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar15 = puVar15 + 2, puVar15 <= puVar13) {
            if (*(float *)(puVar15 + 1) < *(float *)(puVar11 + 1)) {
              puVar11 = puVar15;
            }
          }
          if (puVar11 != puVar13) {
            uVar7 = puVar13[1];
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            *puVar11 = *puVar13;
            puVar11[1] = uVar7;
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
          }
        }
        goto LAB_141d5843e;
      }
LAB_141d5842f:
      local_338 = lVar1;
      HeapSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_>
                (puVar15,lVar8,param_3,param_4);
LAB_141d5843e:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x000141d5835f:
  if (*(float *)(puVar14 + 1) <= *(float *)(puVar9 + 3)) goto LAB_141d58356;
LAB_141d58370:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar14) break;
  } while (*(float *)(puVar12 + -1) <= *(float *)(puVar14 + 1));
  if (puVar15 <= puVar11) {
    if (puVar15 != puVar11) {
      uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar3 = *(undefined4 *)(puVar12 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar5 = *puVar15;
      uVar6 = puVar9[3];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
      *puVar11 = uVar5;
      puVar12[-1] = uVar6;
    }
    goto LAB_141d58356;
  }
  if (puVar14 != puVar11) {
    uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar3 = *(undefined4 *)(puVar12 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
    *(undefined4 *)(puVar14 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
    *puVar11 = uVar5;
    puVar12[-1] = uVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar15 & 0xfffffffffffffff0U)) {
    if (puVar15 < puVar13) {
      *plVar10 = (longlong)puVar15;
      plVar10[1] = (longlong)puVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar11 <= puVar14 + 2) goto LAB_141d5843e;
    puVar13 = puVar12 + -4;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 2 < puVar11) {
      *plVar10 = (longlong)puVar14;
      plVar10[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar13 <= puVar15) goto LAB_141d5843e;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
  puVar14 = puVar15;
  if ((int)local_338 == 0) goto LAB_141d5842f;
  goto LAB_141d58320;
}



// FUNCTION 141d584d0 FUN_141d584d0 body=744 status=ok
// SIG undefined FUN_141d584d0(void)

void FUN_141d584d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong local_res8;
  longlong local_40;
  
  uVar3 = param_6;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar6 = uVar3;
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
  *puVar5 = &PTR_LAB_144dc9d00;
  *(undefined4 *)(puVar5 + 2) = 1;
  puVar5[3] = puVar6;
  *(undefined4 *)(puVar5 + 4) = 3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  puVar5[5] = 0;
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  if (*(char *)(param_1 + 0xc6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,param_7,&DAT_146a9d0b8,0);
    param_6 = local_res8;
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_40 = local_res8;
    param_6 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar2,param_1 + 0xc0,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
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
    *puVar6 = &PTR_LAB_144dc9cd0;
    puVar6[2] = uVar2;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar3;
  }
  puVar7 = (ushort *)(param_1 + 0xd4);
  lVar8 = 4;
  do {
    uVar3 = *param_5;
    if (puVar7[1] != 0) {
      uVar1 = *puVar7;
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
      *puVar6 = &PTR_LAB_144dc9cd0;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar3;
    }
    puVar7 = puVar7 + 2;
    param_5 = param_5 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_3);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_4);
  return;
}



// FUNCTION 141d587c0 FUN_141d587c0 body=872 status=ok
// SIG undefined FUN_141d587c0(void)

void FUN_141d587c0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong local_res8;
  longlong local_40;
  
  puVar10 = param_5;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *param_5;
  puVar5 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar7 = uVar2;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144dc9d00;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 4) = 3;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = 0;
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  uVar2 = *(undefined8 *)(lVar9 + 0x60);
  if (*(char *)(param_1 + 0xc6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,param_7,&DAT_146a9d0b8,0);
    param_5 = (undefined8 *)local_res8;
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_40 = local_res8;
    param_5 = (undefined8 *)0x0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar2,param_1 + 0xc0,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
  }
  uVar3 = *param_3;
  uVar4 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
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
    *puVar7 = &PTR_LAB_144dc9ca0;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
    *puVar7 = &PTR_LAB_144dc9cb0;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  puVar8 = (ushort *)(param_1 + 0xd4);
  lVar9 = 4;
  do {
    uVar3 = *puVar10;
    if (puVar8[1] != 0) {
      uVar1 = *puVar8;
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
      *puVar7 = &PTR_LAB_144dc9cd0;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar3;
    }
    puVar8 = puVar8 + 2;
    puVar10 = puVar10 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_3);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_4);
  return;
}



// FUNCTION 141d58b30 FUN_141d58b30 body=744 status=ok
// SIG undefined FUN_141d58b30(void)

void FUN_141d58b30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong local_res8;
  longlong local_40;
  
  uVar3 = param_6;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar6 = uVar3;
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
  *(undefined4 *)(puVar5 + 4) = 3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  puVar5[5] = 0;
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  if (*(char *)(param_1 + 0xc6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,param_7,&DAT_146a9d0b8,0);
    param_6 = local_res8;
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_40 = local_res8;
    param_6 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar2,param_1 + 0xc0,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
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
    puVar6[2] = uVar2;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar3;
  }
  puVar7 = (ushort *)(param_1 + 0xd4);
  lVar8 = 4;
  do {
    uVar3 = *param_5;
    if (puVar7[1] != 0) {
      uVar1 = *puVar7;
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
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar3;
    }
    puVar7 = puVar7 + 2;
    param_5 = param_5 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_3);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_4);
  return;
}



// FUNCTION 141d58e20 FUN_141d58e20 body=904 status=ok
// SIG undefined FUN_141d58e20(void)

void FUN_141d58e20(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong local_res8;
  longlong local_40;
  
  FUN_141c5b070(param_2,0,*param_3);
  FUN_141c5b070(param_2,1,*param_4);
  puVar10 = param_5;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *param_5;
  puVar5 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar7 = uVar2;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 4) = 3;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = 0;
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  uVar2 = *(undefined8 *)(lVar9 + 0x60);
  if (*(char *)(param_1 + 0xc6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,param_7,&DAT_146a9d0b8,0);
    param_5 = (undefined8 *)local_res8;
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_40 = local_res8;
    param_5 = (undefined8 *)0x0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar2,param_1 + 0xc0,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
  }
  uVar3 = *param_3;
  uVar4 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
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
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  puVar8 = (ushort *)(param_1 + 0xd4);
  lVar9 = 4;
  do {
    uVar3 = *puVar10;
    if (puVar8[1] != 0) {
      uVar1 = *puVar8;
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
      *puVar7 = &PTR_LAB_144d91e40;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar3;
    }
    puVar8 = puVar8 + 2;
    puVar10 = puVar10 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_3);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_4);
  return;
}



// FUNCTION 141d591b0 FUN_141d591b0 body=233 status=ok
// SIG undefined FUN_141d591b0(void)

undefined8 * FUN_141d591b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int *)(param_1 + 0xd) = (int)((ulonglong)(longlong)DAT_1464c9c34 >> 2);
  uVar2 = (uint)((ulonglong)(longlong)DAT_1464c9c30 / 0x2c);
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  *(uint *)((longlong)param_1 + 0x6c) = uVar2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  return param_1;
}



// FUNCTION 141d592a0 FUN_141d592a0 body=217 status=ok
// SIG undefined FUN_141d592a0(void)

undefined8 * FUN_141d592a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = param_2[0xe];
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar1;
  uVar1 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar1;
  uVar1 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar1;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  return param_1;
}



// FUNCTION 141d59380 FUN_141d59380 body=525 status=ok
// SIG undefined FUN_141d59380(void)

longlong * FUN_141d59380(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_18 [16];
  
  *param_1 = param_2;
  if (*(char *)(param_2 + 0x365) == '\0') {
    uVar6 = *(undefined4 *)(param_2 + 0x228);
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x368);
  }
  *(undefined4 *)(param_1 + 1) = uVar6;
  *(float *)((longlong)param_1 + 0xc) = *(float *)(param_2 + 0x2d0) * 0.001;
  *(float *)(param_1 + 2) = *(float *)(param_2 + 0x32c) * 0.001;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x318);
  uVar3 = *(undefined8 *)(param_2 + 0x324);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x31c);
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar3;
  lVar4 = 0x2fc;
  if (*(longlong *)(param_2 + 0x2f0) == 0) {
    lVar4 = 0x2dc;
  }
  uVar3 = ((undefined8 *)(lVar4 + param_2))[1];
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(lVar4 + param_2);
  *(undefined8 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[10] = *(longlong *)(param_2 + 0x2f0);
  *(float *)(param_1 + 0xb) = *(float *)(param_2 + 0x2f8) * 0.017453292;
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x310);
  *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)(param_2 + 0x33c);
  fVar9 = *(float *)(param_2 + 0x340);
  fVar7 = -0.99;
  if ((-0.99 <= fVar9) && (fVar7 = fVar9, 0.99 <= fVar9)) {
    fVar7 = 0.99;
  }
  *(float *)(param_1 + 0xd) = fVar7;
  puVar5 = (undefined8 *)FLinearColor::FLinearColor(local_18,param_2 + 0x344);
  fVar9 = 0.0;
  uVar3 = puVar5[1];
  *(undefined8 *)((longlong)param_1 + 0x6c) = *puVar5;
  *(undefined8 *)((longlong)param_1 + 0x74) = uVar3;
  fVar7 = *(float *)(param_2 + 0x348);
  uVar6 = *(undefined4 *)(param_2 + 0x34c);
  uVar1 = *(undefined4 *)(param_2 + 0x350);
  uVar2 = *(undefined4 *)(param_2 + 0x354);
  *(float *)((longlong)param_1 + 0x7c) = fVar7;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  fVar7 = fVar7 * 0.0001;
  fVar8 = *(float *)((longlong)param_1 + 0x84) * 0.0001;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x7c) = fVar7;
  *(float *)((longlong)param_1 + 0x84) = fVar8;
  fVar7 = *(float *)(param_1 + 0x10) * 0.0001;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_1 + 0x10) = fVar7;
  fVar7 = *(float *)(param_2 + 0x358);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x8c) = fVar7;
  fVar7 = *(float *)(param_2 + 0x35c);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_1 + 0x12) = fVar7;
  fVar7 = *(float *)(param_2 + 0x360);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x94) = fVar7;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x364);
  *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)(param_2 + 0x2d4);
  if (*(char *)(param_2 + 0x365) != '\0') {
    fVar9 = *(float *)(param_2 + 0x368);
  }
  *(float *)((longlong)param_1 + 0x9c) = fVar9 + *(float *)(param_2 + 0x2d8);
  return param_1;
}



// FUNCTION 141d59590 FHZBOcclusionTester body=57 status=ok
// SIG undefined FHZBOcclusionTester(void)

undefined8 * FHZBOcclusionTester::FHZBOcclusionTester(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e47e88;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  return param_1;
}



// FUNCTION 141d595d0 FUN_141d595d0 body=324 status=ok
// SIG undefined FUN_141d595d0(void)

undefined8 *
FUN_141d595d0(undefined8 *param_1,longlong *param_2,longlong *param_3,int param_4,undefined8 param_5
             )

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  local_res8 = 0;
  (**(code **)(*param_3 + 0x40))(param_3,param_4,local_res10,&local_res8);
  FUN_141b279e0(param_1,param_2,param_3,local_res8,param_5,0);
  param_1[9] = 0;
  param_1[10] = 0;
  iVar2 = (**(code **)(*(longlong *)param_1[3] + 0x178))();
  cVar1 = FUN_141ed13a0((&DAT_1464c9c48)[param_4]);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar1 = (**(code **)(lVar3 + 0x48))();
    if ((cVar1 != '\0') && (iVar2 != 0)) {
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar4 = FUN_1425939a0(param_1[3],&DAT_146a991d0,uVar4,1);
      param_1[9] = uVar4;
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar4 = FUN_1425939a0(param_1[3],&DAT_146a99320,uVar4,1);
      param_1[10] = uVar4;
    }
  }
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar4 = FUN_1425939a0(param_1[3],&DAT_146a99080,uVar4,1);
  param_1[7] = uVar4;
  uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar4 = FUN_1425939a0(param_1[3],&DAT_146a99470,uVar4,1);
  param_1[8] = uVar4;
  *param_1 = param_1[7];
  return param_1;
}



// FUNCTION 141d59720 FUN_141d59720 body=650 status=ok
// SIG undefined FUN_141d59720(void)

longlong *
FUN_141d59720(longlong *param_1,longlong param_2,longlong param_3,byte param_4,byte param_5,
             byte param_6,byte param_7,byte param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = (((param_6 & 0xffffffc1) * 2 | param_4 & 0xffffff81) * 2 | param_5 & 0xffffff01) * 2;
  uVar7 = (param_7 & 0xfffffffd | (uint)param_8 * 2) << 5 |
          *(uint *)((longlong)param_1 + 0x44) & 0xffffff81;
  *(uint *)((longlong)param_1 + 0x44) = uVar1 | uVar7 & 0xfffffe7f;
  lVar6 = *(longlong *)(param_3 + 8);
  uVar9 = *(uint *)(*(longlong *)(param_2 + 0x30) + 0x180);
  if ((*(uint *)(lVar6 + 0x18) >> 0x13 & 1) == 0) {
    if (((uVar9 >> 4 & 1) != 0) && ((*(uint *)(lVar6 + 0x1c) >> 2 & 1) != 0)) goto LAB_141d5994d;
  }
  else {
    if ((((byte)uVar9 & 0x28) == 0x28) && ((*(uint *)(lVar6 + 0x1c) >> 5 & 1) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (((uVar9 >> 2 & 1) == 0) && ((uVar9 >> 4 & 1) != 0)) {
      if ((*(uint *)(lVar6 + 0x1c) >> 2 & 1) == 0) goto LAB_141d597e6;
      bVar3 = true;
    }
    else {
LAB_141d597e6:
      bVar3 = false;
    }
    if ((bVar2) || (bVar3)) {
LAB_141d5994d:
      uVar9 = 1;
      goto LAB_141d597fb;
    }
  }
  uVar9 = 0;
LAB_141d597fb:
  uVar9 = uVar1 | uVar7 & 0xfffffe7e | uVar9;
  *(uint *)((longlong)param_1 + 0x44) = uVar9;
  uVar9 = (*(uint *)(*(longlong *)(param_3 + 8) + 0x1c) >> 0xb & 1) << 7 | uVar9;
  *(uint *)((longlong)param_1 + 0x44) = uVar9;
  if ((uVar1 & 4) != 0) {
    if ((*(int *)(*(longlong *)(param_3 + 8) + 0x10) == 2) ||
       (lVar6 = 0x40, (*(uint *)(*(longlong *)(param_3 + 8) + 0x18) & 0x20000000) == 0)) {
      lVar6 = 0x38;
    }
    param_1[2] = lVar6 + param_2;
    if (((*(int *)(*(longlong *)(param_3 + 0xd8) + 8) < 2) &&
        (*(char *)(*(longlong *)(param_2 + 0x30) + 0x188) == '\x01')) &&
       ((*(uint *)(*(longlong *)(param_2 + 0x30) + 0x180) >> 1 & 1) != 0)) {
      *(uint *)((longlong)param_1 + 0x44) = uVar9 | 0x100;
      *(int *)(param_3 + 0xe0) = *(int *)(param_3 + 0xe0) + 1;
      FUN_141d1f210(param_1[1]);
    }
  }
  FUN_141d69180(param_1);
  plVar8 = (longlong *)param_1[2];
  param_1[3] = *plVar8;
  if (*plVar8 != 0) {
    *(longlong **)(*plVar8 + 0x10) = param_1 + 3;
    plVar8 = (longlong *)param_1[2];
  }
  *plVar8 = (longlong)param_1;
  plVar8 = (longlong *)(param_1[1] + 200);
  param_1[6] = (longlong)plVar8;
  param_1[7] = *plVar8;
  if (*plVar8 != 0) {
    *(longlong **)(*plVar8 + 0x30) = param_1 + 7;
    plVar8 = (longlong *)param_1[6];
  }
  *plVar8 = (longlong)param_1;
  cVar4 = FUN_141de42b0(*param_1,*(undefined8 *)(param_1[1] + 8),
                        *(uint *)((longlong)param_1 + 0x44) >> 3 & 0xffffff01);
  cVar5 = FUN_141de4270(*param_1,*(undefined8 *)(param_1[1] + 8));
  if ((((*(byte *)((longlong)param_1 + 0x44) & 0x60) == 0) && (cVar4 == '\0')) && (cVar5 == '\0')) {
    param_1[4] = 0;
    param_1[5] = 0;
    return param_1;
  }
  if ((*(int *)(*(longlong *)(param_1[1] + 8) + 0x10) == 2) ||
     (lVar6 = 0x50, (*(uint *)(*(longlong *)(param_1[1] + 8) + 0x18) & 0x20000000) == 0)) {
    lVar6 = 0x48;
  }
  plVar8 = (longlong *)(lVar6 + *param_1);
  param_1[4] = (longlong)plVar8;
  param_1[5] = *plVar8;
  if (*plVar8 != 0) {
    *(longlong **)(*plVar8 + 0x20) = param_1 + 5;
    plVar8 = (longlong *)param_1[4];
  }
  *plVar8 = (longlong)param_1;
  return param_1;
}



// FUNCTION 141d599b0 FUN_141d599b0 body=88 status=ok
// SIG undefined FUN_141d599b0(void)

undefined8 * FUN_141d599b0(undefined8 *param_1)

{
  DWORD DVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1440104d0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 2) = DVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *param_1 = &PTR_FUN_144e51380;
  return param_1;
}



// FUNCTION 141d59a10 FUN_141d59a10 body=515 status=ok
// SIG undefined FUN_141d59a10(void)

undefined8 *
FUN_141d59a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,char param_6,undefined1 param_7,undefined8 *param_8)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  param_1[1] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__144e511c8;
  param_1[2] = param_4;
  param_1[3] = *param_8;
  param_1[4] = param_8[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_8 + 2);
  lVar8 = param_8[3];
  param_1[6] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  lVar8 = 0;
  param_1[7] = param_8[4];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_8 + 5);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_8 + 0x2c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_8 + 6);
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = param_5;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_5 + 0x88);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((DAT_146ab6328 == '\0') || (param_6 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x16) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0xb1) = param_7;
  plVar6 = (longlong *)FTaskGraphInterface::Get();
  lVar1 = DAT_146ab6ce0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) {
      lVar8 = 4;
    }
  }
  iVar7 = *(int *)(lVar8 + lVar1);
  iVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
  if (iVar5 < 1) {
    iVar7 = 1;
  }
  else if (iVar5 < iVar7) {
    iVar7 = iVar5;
  }
  *(int *)((longlong)param_1 + 0x6c) = iVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(DAT_146a9d4d0 + 4);
  *(bool *)((longlong)param_1 + 0x79) = *(int *)(DAT_146a9d488 + 4) != 0;
  iVar5 = *(int *)(DAT_146a9d4a0 + 4);
  *(bool *)(param_1 + 0xf) = iVar5 != 0;
  *(bool *)((longlong)param_1 + 0x7a) = 1 < iVar5;
  if (*(int *)((longlong)param_1 + 0x8c) < iVar7 * 8) {
    FUN_140848da0(param_1 + 0x10);
    iVar7 = *(int *)((longlong)param_1 + 0x6c);
  }
  if (*(int *)((longlong)param_1 + 0x9c) < iVar7 * 8) {
    FUN_140848da0(param_1 + 0x12);
    iVar7 = *(int *)((longlong)param_1 + 0x6c);
  }
  if (*(int *)((longlong)param_1 + 0xac) < iVar7 * 8) {
    FUN_141b3c030(param_1 + 0x14);
  }
  DAT_146a9dcb8 = param_1;
  return param_1;
}



// FUNCTION 141d59c20 FUN_141d59c20 body=926 status=ok
// SIG undefined FUN_141d59c20(void)

undefined8 * FUN_141d59c20(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *local_48;
  int local_40;
  longlong *local_38;
  int local_30;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e51228;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  DAT_146a9dcb0 = (**(code **)(*DAT_146a9d420 + 0x68))();
  plVar3 = DAT_146a9d420;
  local_48 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_40 = 2;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar1[1] = (longlong)FUN_141d6bb40;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*plVar3 + 0x80))(plVar3,&local_48);
  if (local_40 == 0) {
LAB_141d59d5f:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_141d59d5f;
  }
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146a9ec38) && (_Init_thread_header(&DAT_146a9ec38), DAT_146a9ec38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a9ec30 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EarlyZPass");
    _Init_thread_footer(&DAT_146a9ec38);
  }
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = 2;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar3[1] = (longlong)FUN_141d6bb20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*DAT_146a9ec30 + 0x80))(DAT_146a9ec30,&local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_141d59e37;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_141d59e37:
  if ((*piVar4 < DAT_146a9ec48) && (_Init_thread_header(&DAT_146a9ec48), DAT_146a9ec48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a9ec40 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EarlyZPassMovable");
    _Init_thread_footer(&DAT_146a9ec48);
  }
  local_48 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_40 = 2;
  local_48 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar3[1] = (longlong)FUN_141d6bb20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  (**(code **)(*DAT_146a9ec40 + 0x80))(DAT_146a9ec40,&local_48);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 141d59fc0 FUN_141d59fc0 body=1335 status=ok
// SIG undefined FUN_141d59fc0(void)

undefined8 * FUN_141d59fc0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  byte local_res8;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined **local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  *param_1 = &PTR_FUN_144e511e0;
  uVar14 = 0;
  uVar7 = uVar14;
  local_res18 = param_3;
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    uVar7 = (**(code **)(*(longlong *)param_2[4] + 0x210))();
  }
  param_1[1] = uVar7;
  plVar1 = param_1 + 2;
  *plVar1 = 0;
  iVar15 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar15,0);
    _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar15 << 3);
  }
  *(int *)(param_1 + 4) = (int)param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  *(int *)(param_1 + 8) = (int)param_2[6];
  lVar13 = param_2[7];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  lVar4 = param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(int *)(param_1 + 9) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  *(int *)(param_1 + 10) = (int)lVar4;
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 0xc) = (int)param_2[10];
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(int *)(param_1 + 0xd) = (int)param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(char *)(param_1 + 0xe) = (char)param_2[0xc];
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x61);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 100);
  *(int *)(param_1 + 0xf) = (int)param_2[0xd];
  *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0x10) = (int)param_2[0xe];
  *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)((longlong)param_2 + 0x74);
  param_1[0x12] = 0;
  iVar15 = (int)param_2[0x11];
  puVar12 = (undefined8 *)param_2[0x10];
  *(int *)(param_1 + 0x13) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x12,iVar15,0);
    puVar11 = (undefined8 *)param_1[0x12];
    do {
      *puVar11 = *puVar12;
      lVar13 = puVar12[1];
      puVar11[1] = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      puVar11 = puVar11 + 2;
      puVar12 = puVar12 + 2;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  plVar3 = param_1 + 0x18;
  param_1[0x14] = param_2[0x12];
  *(int *)(param_1 + 0x15) = (int)param_2[0x13];
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(int *)(param_1 + 0x16) = (int)param_2[0x14];
  param_1[0x17] = param_2[0x15];
  *plVar3 = 0;
  param_1[0x19] = 0;
  uVar6 = FSceneViewFamily::GetFeatureLevel(param_2);
  FUN_142741240(param_1 + 0x1a,uVar6);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)((longlong)param_1 + 0x269) = 0;
  *(undefined2 *)((longlong)param_1 + 0x26b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26d) = 1;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0xffffffff;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x57));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x57),4000);
  uVar6 = DAT_1464aaa8c;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x290))();
  }
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x26a) = 0;
  iVar15 = *(int *)(param_1 + 0x19);
  lVar4 = param_2[1];
  lVar13 = *plVar3;
  local_res8 = 0;
  for (; iVar15 != 0; iVar15 = iVar15 + -1) {
    FUN_141d5be00(lVar13);
    lVar13 = lVar13 + 0x30d0;
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != (int)lVar4) {
    FUN_141d71970(plVar3,(int)lVar4);
  }
  uVar7 = uVar14;
  uVar17 = uVar14;
  if (0 < (int)param_2[1]) {
    do {
      iVar15 = *(int *)(param_1 + 0x19);
      *(int *)(param_1 + 0x19) = iVar15 + 1;
      if (*(int *)((longlong)param_1 + 0xcc) < iVar15 + 1) {
        FUN_141d71650(plVar3,iVar15);
      }
      lVar13 = (longlong)iVar15 * 0x30d0 + *plVar3;
      uVar8 = uVar14;
      if (lVar13 != 0) {
        uVar8 = FUN_141d5aa50(lVar13,*(undefined8 *)(*param_2 + uVar17));
      }
      *(ulonglong *)(*plVar1 + uVar17) = uVar8;
      local_res8 = local_res8 | *(byte *)(uVar8 + 0x1206);
      *(longlong **)(uVar8 + 0x10) = plVar1;
      *(int *)(uVar8 + 0x1a58) = (int)uVar7;
      if (*(char *)(uVar8 + 0x1202) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x26a) = 1;
      }
      uVar6 = FUN_141ec7e70();
      puVar9 = (undefined4 *)
               FUN_141ec7e80(local_res10,uVar6,uVar7,*(undefined4 *)((longlong)param_1 + 0x6c));
      *(undefined4 *)(uVar8 + 0x2f20) = *puVar9;
      puVar12 = *(undefined8 **)(uVar8 + 0x360);
      if (puVar12 != (undefined8 *)0x0) {
        local_68 = &PTR__scalar_deleting_destructor__144deb6d0;
        local_48 = local_res18;
        local_50 = (undefined8 *)0x0;
        local_60 = uVar8;
        local_58 = uVar8;
        (**(code **)*puVar12)(puVar12,uVar8,&local_68);
        if (local_50 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_50 + 1);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*local_50)(local_50,1);
          }
        }
      }
      uVar16 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar16;
      uVar17 = uVar17 + 8;
    } while ((int)uVar16 < (int)param_2[1]);
  }
  if ((*(uint *)(param_1 + 7) & 0x1000000) != 0) {
    FUN_14275f0e0(plVar1);
  }
  param_1[0x17] = 0;
  uVar10 = (**(code **)(*(longlong *)param_2[0x15] + 0x10))((longlong *)param_2[0x15],plVar1);
  param_1[0x17] = uVar10;
  if (local_res8 != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((DAT_146a81048 != (undefined8 *)0x0) && (uVar7 = uVar14, 0 < *(int *)(param_1 + 0x19))) {
    do {
      lVar13 = *plVar3 + uVar7;
      uVar10 = (**(code **)*DAT_146a81048)(DAT_146a81048,lVar13);
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      uVar7 = uVar7 + 0x30d0;
      *(undefined8 *)(lVar13 + 0x30a0) = uVar10;
    } while ((int)uVar16 < *(int *)(param_1 + 0x19));
  }
  uVar5 = (**(code **)(*(longlong *)param_2[3] + 0x38))();
  *(undefined1 *)(param_1 + 0x4d) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1[1] + 8);
  return param_1;
}



// FUNCTION 141d5a500 FUN_141d5a500 body=1355 status=ok
// SIG undefined FUN_141d5a500(void)

undefined8 * FUN_141d5a500(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_142742170();
  *param_1 = &PTR__scalar_deleting_destructor__144e511d8;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  param_1[0x357] = 0;
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  param_1[0x388] = 0;
  param_1[0x389] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  param_1[0x38e] = 0;
  param_1[0x38f] = 0;
  param_1[0x390] = 0;
  param_1[0x391] = 0;
  *(undefined1 *)(param_1 + 0x392) = 0;
  param_1[0x393] = 0;
  param_1[0x394] = 0;
  param_1[0x395] = 0;
  param_1[0x396] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ccc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1cd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1ce4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1cf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d3c) = 0x3f800000;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x398,0,0xb0);
  param_1[0x3ae] = 0;
  param_1[0x3b0] = 0;
  param_1[0x3af] = 0;
  param_1[0x3b1] = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b3] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3be] = 0;
  param_1[0x3bf] = 0;
  param_1[0x3c0] = 0;
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  *(undefined4 *)(param_1 + 0x3c5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e2c) = 0;
  param_1[0x3c6] = 0;
  param_1[0x3c7] = 0;
  FUN_141d591b0(param_1 + 0x3c8);
  FUN_141d591b0(param_1 + 0x409);
  param_1[0x44a] = 0;
  param_1[1099] = 0;
  param_1[0x44c] = 0;
  param_1[0x44d] = 0;
  param_1[0x44e] = 0;
  param_1[0x44f] = 0;
  param_1[0x450] = 0;
  param_1[0x451] = 0;
  param_1[0x452] = 0;
  param_1[0x453] = 0;
  param_1[0x454] = 0;
  param_1[0x455] = 0;
  param_1[0x456] = 0;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  param_1[0x459] = 0;
  param_1[0x45a] = 0;
  param_1[0x45b] = 0;
  FUN_142743880(param_1 + 0x45c);
  FUN_142743880(param_1 + 0x4a2);
  *(uint *)(param_1 + 0x4e8) = *(uint *)(param_1 + 0x4e8) & 0xfffffffe;
  param_1[0x4eb] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4ef] = 0;
  param_1[0x4f0] = 0;
  param_1[0x4f1] = 0;
  param_1[0x4f2] = 0;
  param_1[0x4f5] = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  param_1[0x4fa] = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  param_1[0x4ff] = 0;
  param_1[0x500] = 0;
  param_1[0x502] = 0;
  *(undefined4 *)(param_1 + 0x503) = 0;
  *(undefined4 *)((longlong)param_1 + 0x281c) = 0x3f800000;
  param_1[0x506] = 0;
  *(undefined4 *)(param_1 + 0x507) = 0;
  *(undefined4 *)((longlong)param_1 + 0x283c) = 0x3f800000;
  FUN_141d0f960(param_1 + 0x51c);
  *(undefined4 *)(param_1 + 0x5e4) = 1;
  lVar1 = *(longlong *)(param_2 + 0x148);
  param_1[0x5e7] = 0;
  param_1[0x5e8] = 0;
  param_1[0x5e9] = 0;
  param_1[0x5ea] = 1;
  lVar2 = lVar1 + 0x158;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  param_1[0x5eb] = lVar2;
  lVar1 = *(longlong *)(param_2 + 0x148);
  param_1[0x5ec] = 0;
  param_1[0x5ed] = 0;
  param_1[0x5ee] = 0;
  param_1[0x5ef] = 0x10;
  lVar2 = lVar1 + 0x158;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  param_1[0x5f0] = lVar2;
  param_1[0x5f1] = 0;
  param_1[0x5f2] = 0;
  param_1[0x5f3] = 0;
  param_1[0x5f6] = 0;
  param_1[0x5f7] = 0;
  param_1[0x5f8] = 0;
  param_1[0x5f9] = 0;
  param_1[0x5fc] = 0;
  *(undefined4 *)(param_1 + 0x5fd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fec) = 0x3f800000;
  param_1[0x603] = 0;
  param_1[0x604] = 0;
  param_1[0x605] = 1;
  param_1[0x606] = 0;
  *(undefined4 *)(param_1 + 0x607) = 0;
  param_1[0x608] = 0;
  param_1[0x609] = 0;
  param_1[0x60c] = 0;
  param_1[0x60d] = 0;
  *(undefined4 *)(param_1 + 0x60e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3074) = 0;
  param_1[0x610] = 0;
  *(undefined4 *)(param_1 + 0x611) = 0;
  param_1[0x614] = 0;
  param_1[0x615] = 0;
  param_1[0x616] = 0;
  param_1[0x617] = 0;
  FUN_141d6a690(param_1);
  return param_1;
}



// FUNCTION 141d5aa50 FUN_141d5aa50 body=1349 status=ok
// SIG undefined FUN_141d5aa50(void)

undefined8 * FUN_141d5aa50(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_141d112b0();
  *param_1 = &PTR__scalar_deleting_destructor__144e511d8;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  param_1[0x357] = 0;
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[899] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  param_1[0x388] = 0;
  param_1[0x389] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  param_1[0x38e] = 0;
  param_1[0x38f] = 0;
  param_1[0x390] = 0;
  param_1[0x391] = 0;
  *(undefined1 *)(param_1 + 0x392) = 0;
  param_1[0x393] = 0;
  param_1[0x394] = 0;
  param_1[0x395] = 0;
  param_1[0x396] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ccc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1cd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1ce4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1cf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d3c) = 0x3f800000;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x398,0,0xb0);
  param_1[0x3ae] = 0;
  param_1[0x3b0] = 0;
  param_1[0x3af] = 0;
  param_1[0x3b1] = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b3] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3bb] = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3be] = 0;
  param_1[0x3bf] = 0;
  param_1[0x3c0] = 0;
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  *(undefined4 *)(param_1 + 0x3c5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e2c) = 0;
  param_1[0x3c6] = 0;
  param_1[0x3c7] = 0;
  FUN_141d591b0(param_1 + 0x3c8);
  FUN_141d591b0(param_1 + 0x409);
  param_1[0x44a] = 0;
  param_1[1099] = 0;
  param_1[0x44c] = 0;
  param_1[0x44d] = 0;
  param_1[0x44e] = 0;
  param_1[0x44f] = 0;
  param_1[0x450] = 0;
  param_1[0x451] = 0;
  param_1[0x452] = 0;
  param_1[0x453] = 0;
  param_1[0x454] = 0;
  param_1[0x455] = 0;
  param_1[0x456] = 0;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  param_1[0x459] = 0;
  param_1[0x45a] = 0;
  param_1[0x45b] = 0;
  FUN_142743880(param_1 + 0x45c);
  FUN_142743880(param_1 + 0x4a2);
  *(uint *)(param_1 + 0x4e8) = *(uint *)(param_1 + 0x4e8) & 0xfffffffe;
  param_1[0x4eb] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4ef] = 0;
  param_1[0x4f0] = 0;
  param_1[0x4f1] = 0;
  param_1[0x4f2] = 0;
  param_1[0x4f5] = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  param_1[0x4fa] = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  param_1[0x4ff] = 0;
  param_1[0x500] = 0;
  param_1[0x502] = 0;
  *(undefined4 *)(param_1 + 0x503) = 0;
  *(undefined4 *)((longlong)param_1 + 0x281c) = 0x3f800000;
  param_1[0x506] = 0;
  *(undefined4 *)(param_1 + 0x507) = 0;
  *(undefined4 *)((longlong)param_1 + 0x283c) = 0x3f800000;
  FUN_141d0f960(param_1 + 0x51c);
  *(undefined4 *)(param_1 + 0x5e4) = 1;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[0x5e7] = 0;
  param_1[0x5e8] = 0;
  param_1[0x5e9] = 0;
  param_1[0x5ea] = 1;
  lVar2 = lVar1 + 0x158;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  param_1[0x5eb] = lVar2;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[0x5ec] = 0;
  param_1[0x5ed] = 0;
  param_1[0x5ee] = 0;
  param_1[0x5ef] = 0x10;
  lVar2 = lVar1 + 0x158;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  param_1[0x5f0] = lVar2;
  param_1[0x5f1] = 0;
  param_1[0x5f2] = 0;
  param_1[0x5f3] = 0;
  param_1[0x5f6] = 0;
  param_1[0x5f7] = 0;
  param_1[0x5f8] = 0;
  param_1[0x5f9] = 0;
  param_1[0x5fc] = 0;
  *(undefined4 *)(param_1 + 0x5fd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fec) = 0x3f800000;
  param_1[0x603] = 0;
  param_1[0x604] = 0;
  param_1[0x605] = 1;
  param_1[0x606] = 0;
  *(undefined4 *)(param_1 + 0x607) = 0;
  param_1[0x608] = 0;
  param_1[0x609] = 0;
  param_1[0x60c] = 0;
  param_1[0x60d] = 0;
  *(undefined4 *)(param_1 + 0x60e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3074) = 0;
  param_1[0x610] = 0;
  *(undefined4 *)(param_1 + 0x611) = 0;
  param_1[0x614] = 0;
  param_1[0x615] = 0;
  param_1[0x616] = 0;
  param_1[0x617] = 0;
  FUN_141d6a690(param_1);
  return param_1;
}



// FUNCTION 141d5afa0 ~TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_> body=131 status=ok
// SIG undefined ~TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>(void)

void TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>::
     ~TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>
               (longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  iVar6 = *(int *)(param_1 + 200);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = param_1;
  }
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 0x18);
    do {
      puVar2 = (undefined8 *)plVar5[3];
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar3 = *(longlong *)(param_1 + 0xc0);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d5b030 ~TArray<FOcclusionMeshData,FDefaultAllocator> body=224 status=ok
// SIG undefined ~TArray<FOcclusionMeshData,FDefaultAllocator>(void)

void TArray<FOcclusionMeshData,FDefaultAllocator>::~TArray<FOcclusionMeshData,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x48);
    do {
      plVar4 = (longlong *)plVar7[2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar7 = plVar7 + 0xe;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141d5b110 ~TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_> body=117 status=ok
// SIG undefined ~TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>(void)

void TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>::
     ~TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if ((longlong *)puVar3[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[2] + 0x30))();
    }
    plVar1 = (longlong *)*puVar3;
    for (iVar4 = *(int *)(puVar3 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x30))();
      }
      plVar1 = plVar1 + 1;
    }
    puVar3 = puVar3 + 5;
  }
  return;
}



// FUNCTION 141d5b190 ~TArray<FViewOcclusionQueries,FDefaultAllocator> body=309 status=ok
// SIG undefined ~TArray<FViewOcclusionQueries,FDefaultAllocator>(void)

void TArray<FViewOcclusionQueries,FDefaultAllocator>::
     ~TArray<FViewOcclusionQueries,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar3 = plVar5 + 5;
    do {
      iVar4 = (int)plVar3[2];
      lVar1 = plVar3[1];
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
          lVar1 = lVar1 + 0x10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = plVar3[1];
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      iVar4 = (int)*plVar3;
      lVar1 = plVar3[-1];
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
          lVar1 = lVar1 + 0x10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = plVar3[-1];
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      iVar4 = (int)plVar3[-2];
      lVar1 = plVar3[-3];
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
          lVar1 = lVar1 + 0x10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = plVar3[-3];
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      iVar4 = (int)plVar3[-4];
      lVar1 = *plVar5;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
          lVar1 = lVar1 + 0x10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar5;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 8;
      plVar3 = plVar3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar5 = (longlong *)*param_1;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
    return;
  }
  return;
}



// FUNCTION 141d5b2d0 ~TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator> body=116 status=ok
// SIG undefined ~TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator>(void)

void TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator>::
     ~TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xb0);
    do {
      if ((longlong *)plVar2[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar2[2] + 0x30))();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x19;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141d5b350 FUN_141d5b350 body=109 status=ok
// SIG undefined FUN_141d5b350(void)

void FUN_141d5b350(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_1408bbda0(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141d5b3c0 ~TSparseArray<TSetElement<TTuple<FRDGBarrierBatcher::FTransitionParameters,TArray<FRHITexture_*,TMemStackAllocator<0>_>_>_>,SceneRenderingSparseArrayAllocator> body=357 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FRDGBarrierBatcher::FTransitionParameters,TArray<FRHITexture_*,TMemStackAllocator<0>_>_>_>,SceneRenderingSparseArrayAllocator>(void)

void TSparseArray<TSetElement<TTuple<FRDGBarrierBatcher::FTransitionParameters,TArray<FRHITexture_*,TMemStackAllocator<0>_>_>_>,SceneRenderingSparseArrayAllocator>
     ::
     ~TSparseArray<TSetElement<TTuple<FRDGBarrierBatcher::FTransitionParameters,TArray<FRHITexture_*,TMemStackAllocator<0>_>_>_>,SceneRenderingSparseArrayAllocator>
               (longlong param_1)

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
  
  iVar2 = *(int *)(param_1 + 0x28);
  puVar1 = (uint *)(param_1 + 0x10);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x20);
    if (*(uint **)(param_1 + 0x20) == (uint *)0x0) {
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
      if (bVar4) goto LAB_141d5b486;
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
LAB_141d5b486:
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
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_141d71810(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    TBitArray<SceneRenderingBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141d5b530 FUN_141d5b530 body=118 status=ok
// SIG undefined FUN_141d5b530(void)

void FUN_141d5b530(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>::
  ~TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>
            (param_1 + 0x70);
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
  TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
  ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(param_1);
  return;
}



// FUNCTION 141d5b5b0 FUN_141d5b5b0 body=364 status=ok
// SIG undefined FUN_141d5b5b0(void)

void FUN_141d5b5b0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  iVar2 = 0;
  if (0 < (int)param_1[0x18]) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar3 + param_1[0x17]);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < (int)param_1[0x18]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x1a]) {
    lVar3 = 0;
    do {
      (**(code **)**(undefined8 **)(lVar3 + param_1[0x19]))
                (*(undefined8 **)(lVar3 + param_1[0x19]),0);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < (int)param_1[0x1a]);
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    lVar4 = 0x59;
    lVar3 = *plVar5 + 0x3ff8;
    do {
      lVar3 = lVar3 + -0xb8;
      FUN_1408bbda0(lVar3);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    FMemory::Free(*plVar5);
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141d5b720 ~FParallelCommandListSet body=117 status=ok
// SIG undefined ~FParallelCommandListSet(void)

void FParallelCommandListSet::~FParallelCommandListSet(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  DAT_146a9dcb8 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e511c8;
  plVar3 = (longlong *)param_1[0x12];
  for (iVar4 = *(int *)(param_1 + 0x13); iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar3 = plVar3 + 1;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  return;
}



// FUNCTION 141d5b7a0 FUN_141d5b7a0 body=743 status=ok
// SIG undefined FUN_141d5b7a0(void)

void FUN_141d5b7a0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int local_68;
  uint uStack_64;
  uint uStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  uint local_30;
  uint uStack_2c;
  int iStack_28;
  
  *param_1 = &PTR_FUN_144e511e0;
  if ((*(char *)((longlong)param_1 + 0x26b) == '\0') && (iVar12 = 0, 0 < *(int *)(param_1 + 0x19)))
  {
    lVar11 = 0;
    do {
      lVar2 = param_1[0x18];
      iVar6 = 0;
      if (0 < *(int *)(lVar2 + 0x1c88 + lVar11)) {
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(lVar8 + *(longlong *)(lVar2 + 0x1c80 + lVar11));
          if (lVar3 != 0) {
            FUN_141d210f0(lVar3,1);
          }
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 8;
        } while (iVar6 < *(int *)(lVar2 + 0x1c88 + lVar11));
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 0x30d0;
    } while (iVar12 < *(int *)(param_1 + 0x19));
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x2b0))();
    lVar11 = param_1[1];
    local_68 = 0;
    uVar5 = *(uint *)(lVar11 + 0x1098);
    uStack_38 = (uint *)(lVar11 + 0x1080);
    uStack_64 = 1;
    uStack_54 = 0;
    iStack_50 = 0;
    if (uVar5 != 0) {
      puVar9 = *(uint **)(lVar11 + 0x1090);
      if (*(uint **)(lVar11 + 0x1090) == (uint *)0x0) {
        puVar9 = uStack_38;
      }
      uVar1 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar1 == 0) {
        lVar11 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar12 = local_68 + 1;
        bVar4 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar12;
        if (bVar4) goto LAB_141d5b90f;
        uVar1 = puVar9[lVar11 + 1];
      }
      uStack_64 = -uVar1 & uVar1;
      iVar12 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_54 = (iStack_50 - iVar12) + 0x1f;
      if ((int)uVar5 < (int)uStack_54) {
LAB_141d5b90f:
        uStack_54 = uVar5;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    uStack_2c = uStack_54;
    iStack_28 = iStack_50;
    if ((int)uStack_54 < (int)uVar5) {
      do {
        if ((-1 < (int)uStack_2c) && ((int)uStack_2c < *(int *)(param_1 + 0x3e))) {
          puVar10 = (undefined8 *)param_1[0x3d];
          if ((undefined8 *)param_1[0x3d] == (undefined8 *)0x0) {
            puVar10 = param_1 + 0x3b;
          }
          uVar5 = uStack_2c;
          if ((int)uStack_2c < 0) {
            uVar5 = uStack_2c + 0x1f;
          }
          if ((*(uint *)((longlong)puVar10 + (longlong)((int)uVar5 >> 5) * 4) >> (uStack_2c & 0x1f)
              & 1) != 0) {
            iVar12 = 0;
            plVar7 = (longlong *)((longlong)(int)uStack_2c * 0x70 + param_1[0x39]);
            if (0 < (int)plVar7[1]) {
              lVar11 = 0;
              do {
                (**(code **)**(undefined8 **)(lVar11 + *plVar7))
                          (*(undefined8 **)(lVar11 + *plVar7),0);
                iVar12 = iVar12 + 1;
                lVar11 = lVar11 + 8;
              } while (iVar12 < (int)plVar7[1]);
            }
          }
        }
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while ((int)uStack_2c < (int)uStack_38[6]);
    }
  }
  FSortedShadowMaps::Release(param_1 + 0x40);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x57));
  if (param_1[0x50] != 0) {
    FMemory::Free();
  }
  FSortedShadowMaps::~FSortedShadowMaps(param_1 + 0x40);
  FUN_141d66c00(param_1 + 0x39,0);
  FUN_141d5b5b0(param_1 + 0x1a);
  iVar12 = *(int *)(param_1 + 0x19);
  lVar11 = param_1[0x18];
  if (iVar12 != 0) {
    do {
      FUN_141d5be00(lVar11);
      lVar11 = lVar11 + 0x30d0;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    lVar11 = param_1[0x18];
  }
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  FUN_142745dc0(param_1 + 2);
  return;
}



// FUNCTION 141d5ba90 ~FSceneSoftwareOcclusion body=260 status=ok
// SIG undefined ~FSceneSoftwareOcclusion(void)

void FSceneSoftwareOcclusion::~FSceneSoftwareOcclusion(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*param_1 != 0) {
    uVar4 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar4,param_1,0xff);
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x3048) = 0;
    if (*(longlong *)(lVar3 + 0x3040) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 0x3000);
    FMemory::operator_delete(lVar3,0x3050);
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x3048) = 0;
    if (*(longlong *)(lVar3 + 0x3040) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 0x3000);
    FMemory::operator_delete(lVar3,0x3050);
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
      return;
    }
  }
  return;
}



// FUNCTION 141d5bba0 ~FSortedShadowMaps body=117 status=ok
// SIG undefined ~FSortedShadowMaps(void)

void FSortedShadowMaps::~FSortedShadowMaps(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>::
  ~TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>(param_1 + 0x58);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  for (iVar2 = *(int *)(param_1 + 0x38); iVar2 != 0; iVar2 = iVar2 + -1) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
    plVar1 = plVar1 + 1;
  }
  TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>::
  ~TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>(param_1 + 0x20);
  TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>::
  ~TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>(param_1 + 0x10);
  TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>::
  ~TArray<FSortedShadowMapAtlas,TMemStackAllocator<0>_>(param_1);
  return;
}



// FUNCTION 141d5bc20 FUN_141d5bc20 body=478 status=ok
// SIG undefined FUN_141d5bc20(void)

void FUN_141d5bc20(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  
  iVar10 = *(int *)(param_1 + 200);
  bVar5 = (byte)iVar10 & 0x1f;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0xd8);
  if (*(int *)(lVar3 + 0x18bc) != 0) {
    *(int *)(*(longlong *)(lVar3 + 0x1888) + (longlong)*(int *)(lVar3 + 0x18b8) * 8) = iVar10;
  }
  lVar12 = *(longlong *)(lVar3 + 0x1888);
  uVar13 = 0xffffffff;
  *(undefined4 *)(lVar12 + (longlong)iVar10 * 8) = 0xffffffff;
  if (*(int *)(lVar3 + 0x18bc) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(lVar3 + 0x18b8);
  }
  *(undefined4 *)(lVar12 + (longlong)iVar10 * 8 + 4) = uVar6;
  uVar8 = 0;
  *(int *)(lVar3 + 0x18bc) = *(int *)(lVar3 + 0x18bc) + 1;
  *(int *)(lVar3 + 0x18b8) = iVar10;
  lVar12 = *(longlong *)(lVar3 + 0x18a8);
  if (*(longlong *)(lVar3 + 0x18a8) == 0) {
    lVar12 = lVar3 + 0x1898;
  }
  puVar2 = (uint *)(lVar12 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
  iVar10 = *(int *)(param_1 + 0xcc);
  if (iVar10 != -1) {
    bVar5 = (byte)iVar10 & 0x1f;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0xd8);
    if (*(int *)(lVar3 + 0x18f4) != 0) {
      *(int *)(*(longlong *)(lVar3 + 0x18c0) + (longlong)*(int *)(lVar3 + 0x18f0) * 8) = iVar10;
    }
    lVar12 = *(longlong *)(lVar3 + 0x18c0);
    *(undefined4 *)(lVar12 + (longlong)iVar10 * 8) = 0xffffffff;
    if (0 < *(int *)(lVar3 + 0x18f4)) {
      uVar13 = *(undefined4 *)(lVar3 + 0x18f0);
    }
    *(undefined4 *)(lVar12 + 4 + (longlong)iVar10 * 8) = uVar13;
    *(int *)(lVar3 + 0x18f4) = *(int *)(lVar3 + 0x18f4) + 1;
    *(int *)(lVar3 + 0x18f0) = iVar10;
    lVar12 = *(longlong *)(lVar3 + 0x18e0);
    if (*(longlong *)(lVar3 + 0x18e0) == 0) {
      lVar12 = lVar3 + 0x18d0;
    }
    puVar2 = (uint *)(lVar12 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
  }
  uVar11 = uVar8;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      plVar9 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0xd0));
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar11 = uVar11 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0xd8));
  }
  iVar10 = *(int *)(param_1 + 0xd8);
  plVar9 = *(longlong **)(param_1 + 0xd0);
  if (iVar10 != 0) {
    do {
      puVar4 = (undefined8 *)*plVar9;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      plVar9 = plVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    plVar9 = *(longlong **)(param_1 + 0xd0);
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  FUN_1408bbda0(param_1);
  return;
}



// FUNCTION 141d5be00 FUN_141d5be00 body=568 status=ok
// SIG undefined FUN_141d5be00(void)

void FUN_141d5be00(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e511d8;
  if (0 < *(int *)(param_1 + 0x44f)) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + param_1[0x44e]) + 8))();
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x44f));
  }
  if ((longlong *)param_1[0x614] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x614] + 0x10))();
  }
  if (param_1[0x617] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x617] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined4 *)(param_1 + 0x611) = 0;
  if (param_1[0x610] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x608);
  if ((longlong *)param_1[0x5f9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5f9] + 0x30))();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x5f8);
  FUN_141d15fd0(param_1 + 0x5f7,param_1[0x5f7]);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x5f6);
  if ((longlong *)param_1[0x5f3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5f3] + 0x30))();
  }
  if ((longlong *)param_1[0x5f2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5f2] + 0x30))();
  }
  if ((longlong *)param_1[0x5f1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5f1] + 0x30))();
  }
  lVar3 = param_1[0x5ec];
  for (iVar2 = *(int *)(param_1 + 0x5ed); iVar2 != 0; iVar2 = iVar2 + -1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3);
    lVar3 = lVar3 + 0x20;
  }
  lVar3 = param_1[0x5e7];
  for (iVar2 = *(int *)(param_1 + 0x5e8); iVar2 != 0; iVar2 = iVar2 + -1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3);
    lVar3 = lVar3 + 0x20;
  }
  FUN_141d13af0(param_1 + 0x51c);
  lVar3 = param_1[0x4ff];
  for (iVar2 = *(int *)(param_1 + 0x500); iVar2 != 0; iVar2 = iVar2 + -1) {
    FMemStackBase::FreeChunks(lVar3,0);
    lVar3 = lVar3 + 0x28;
  }
  FUN_142745ff0(param_1 + 0x4a2);
  FUN_142745ff0(param_1 + 0x45c);
  if (param_1[0x44e] != 0) {
    FMemory::Free();
  }
  FUN_141d5b350(param_1 + 0x44c);
  FUN_141d5b350(param_1 + 0x44a);
  FUN_141d5b530(param_1 + 0x409);
  FUN_141d5b530(param_1 + 0x3c8);
  TSparseArray<TSetElement<TTuple<FRDGBarrierBatcher::FTransitionParameters,TArray<FRHITexture_*,TMemStackAllocator<0>_>_>_>,SceneRenderingSparseArrayAllocator>
  ::
  ~TSparseArray<TSetElement<TTuple<FRDGBarrierBatcher::FTransitionParameters,TArray<FRHITexture_*,TMemStackAllocator<0>_>_>_>,SceneRenderingSparseArrayAllocator>
            (param_1 + 0x3bf);
  TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator>::
  ~TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator>(param_1 + 0x395);
  TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator>::
  ~TArray<FGlobalDistanceFieldClipmap,FDefaultAllocator>(param_1 + 0x393);
  FMemory::operator_delete(param_1[0x357],0xf30);
  FUN_142745bf0(param_1);
  return;
}



// FUNCTION 141d5c040 operator() body=210 status=ok
// SIG undefined operator()(void)

void <lambda_386768eb4bd52dc37b5cc4e570439960>::operator()(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  local_48 = 0xffffffff00000000;
  uStack_40 = 0xffffffffffffffff;
  lVar3 = lVar1 + 0x68;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_28 = 0xffffffff;
  uStack_20 = 0;
  FUN_1425a3670();
  if (*(int *)(*(longlong *)(lVar2 + 8) + 8) < 2) {
    FUN_141be96c0(param_2,lVar2,lVar3,lVar1,param_1 + 2,&local_48);
  }
  else {
    FUN_141d797e0(param_2,lVar2,lVar3,lVar1,param_1 + 2,&local_48);
  }
  return;
}



// FUNCTION 141d5c120 FUN_141d5c120 body=263 status=ok
// SIG undefined FUN_141d5c120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d5c120(void)

{
  DWORD DVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9e630) {
    _Init_thread_header(&DAT_146a9e630);
    if (DAT_146a9e630 == -1) {
      _DAT_146a9e5f0 = &PTR_FUN_1440104d0;
      _DAT_146a9e5f8 = 0;
      DVar1 = GetCurrentThreadId();
      _DAT_146a9e608 = 0;
      _DAT_146a9e600 = CONCAT44(DAT_146a9e600_4,DVar1);
      _DAT_146a9e610 = 0;
      _DAT_146a9e618 = 0;
      _DAT_146a9e5f0 = &PTR_FUN_144e51380;
      _DAT_146a9e620 = 0;
      _DAT_146a9e628 = 0x100000000;
      atexit(FUN_143e99480);
      _Init_thread_footer(&DAT_146a9e630);
    }
  }
  _DAT_146a9e5f0 = (undefined **)0x0;
  _DAT_146a9e5f8 = 0;
  _DAT_146a9e600 = 0;
  _DAT_146a9e608 = 0;
  _DAT_146a9e610 = 0;
  _DAT_146a9e618 = 0;
  _DAT_146a9e620 = 0;
  _DAT_146a9e628 = 0;
  FUN_141d599b0(&DAT_146a9e5f0);
  return;
}



// FUNCTION 141d5c230 operator() body=208 status=ok
// SIG undefined operator()(void)

void <lambda_e19278b19a03fe63b0ce1902ba0cecc4>::operator()(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined4 local_1c;
  
  lVar1 = param_1[1];
  local_48 = (undefined4)param_1[4];
  lVar2 = *param_1;
  local_24 = 0;
  lVar3 = lVar1 + 0x68;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  local_1c = 0;
  local_44 = 0xffffffffffffffff;
  uStack_3c = 0xffffffffffffffff;
  local_34 = 0xffffffffffffffff;
  uStack_2c = 0xffffffffffffffff;
  FUN_1425a3670(0xffffffffffffffff,0xffffffffffffffff);
  if (*(int *)(*(longlong *)(lVar2 + 8) + 8) < 2) {
    FUN_141be96c0(param_2,lVar2,lVar3,lVar1,param_1 + 2,&local_48);
  }
  else {
    FUN_141d797e0(param_2,lVar2,lVar3,lVar1,param_1 + 2,&local_48);
  }
  return;
}



// FUNCTION 141d5c300 FUN_141d5c300 body=234 status=ok
// SIG undefined FUN_141d5c300(void)

void FUN_141d5c300(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1[1];
  lVar3 = param_1[2];
  plVar4 = (longlong *)(**(code **)(**(longlong **)(*param_1 + 8) + 0xe0))();
  *plVar4 = lVar5;
  *(int *)(plVar4 + 1) = (int)lVar3;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar5 = (**(code **)(**(longlong **)(*param_1 + 8) + 0xe0))();
  *(undefined8 *)(lVar5 + 0xc) = uVar1;
  *(undefined4 *)(lVar5 + 0x14) = uVar2;
  lVar5 = *(longlong *)(*param_1 + 0xc0);
  *(longlong *)(lVar5 + 0x900) = param_1[1];
  *(int *)(lVar5 + 0x908) = (int)param_1[2];
  lVar5 = *(longlong *)(*param_1 + 0xc0);
  *(undefined8 *)(lVar5 + 0x90c) = *(undefined8 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(lVar5 + 0x914) = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_142761010(*(undefined8 *)(*param_1 + 0xc0));
  lVar5 = param_1[4];
  lVar3 = param_1[5];
  lVar6 = (**(code **)(**(longlong **)(*param_1 + 8) + 0xe0))();
  *(longlong *)(lVar6 + 0x18) = lVar5;
  *(int *)(lVar6 + 0x20) = (int)lVar3;
  return;
}



// FUNCTION 141d5c3f0 operator() body=276 status=ok
// SIG undefined operator()(void)

void TDefaultDelete<FSceneSoftwareOcclusion>::operator()(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != (longlong *)0x0) {
    if (*param_2 != 0) {
      uVar4 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar4,param_2,0xff);
      lVar3 = *param_2;
      *param_2 = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    lVar3 = param_2[2];
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x3048) = 0;
      if (*(longlong *)(lVar3 + 0x3040) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar3 + 0x3000);
      FMemory::operator_delete(lVar3,0x3050);
    }
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x3048) = 0;
      if (*(longlong *)(lVar3 + 0x3040) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar3 + 0x3000);
      FMemory::operator_delete(lVar3,0x3050);
    }
    if (*param_2 != 0) {
      LOCK();
      piVar1 = (int *)(*param_2 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    FMemory::operator_delete(param_2,0x18);
  }
  return;
}



// FUNCTION 141d5c510 FUN_141d5c510 body=97 status=ok
// SIG undefined FUN_141d5c510(void)

undefined8 * FUN_141d5c510(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e514a8;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141d5c580 FUN_141d5c580 body=97 status=ok
// SIG undefined FUN_141d5c580(void)

undefined8 * FUN_141d5c580(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e514b8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141d5c5f0 FUN_141d5c5f0 body=97 status=ok
// SIG undefined FUN_141d5c5f0(void)

undefined8 * FUN_141d5c5f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e514d8;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d5c660 FUN_141d5c660 body=97 status=ok
// SIG undefined FUN_141d5c660(void)

undefined8 * FUN_141d5c660(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e51488;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d5c6d0 FUN_141d5c6d0 body=97 status=ok
// SIG undefined FUN_141d5c6d0(void)

undefined8 * FUN_141d5c6d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e514c8;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141d5c740 FUN_141d5c740 body=97 status=ok
// SIG undefined FUN_141d5c740(void)

undefined8 * FUN_141d5c740(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e514e8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141d5c7b0 FUN_141d5c7b0 body=97 status=ok
// SIG undefined FUN_141d5c7b0(void)

undefined8 * FUN_141d5c7b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e514f8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141d5c820 FUN_141d5c820 body=97 status=ok
// SIG undefined FUN_141d5c820(void)

undefined8 * FUN_141d5c820(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e51498;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141d5c890 FUN_141d5c890 body=97 status=ok
// SIG undefined FUN_141d5c890(void)

undefined8 * FUN_141d5c890(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e51440;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d5c900 FUN_141d5c900 body=97 status=ok
// SIG undefined FUN_141d5c900(void)

undefined8 * FUN_141d5c900(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e51420;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141d5c970 FUN_141d5c970 body=97 status=ok
// SIG undefined FUN_141d5c970(void)

undefined8 * FUN_141d5c970(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e51430;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d5c9e0 FUN_141d5c9e0 body=97 status=ok
// SIG undefined FUN_141d5c9e0(void)

undefined8 * FUN_141d5c9e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e51450;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d5ca50 FUN_141d5ca50 body=97 status=ok
// SIG undefined FUN_141d5ca50(void)

undefined8 * FUN_141d5ca50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e51410;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141d5cac0 FUN_141d5cac0 body=71 status=ok
// SIG undefined FUN_141d5cac0(void)

undefined8 * FUN_141d5cac0(undefined8 *param_1,byte param_2)

{
  FMemStackBase::FreeChunks(param_1 + 3,0);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141d5cb10 `scalar_deleting_destructor' body=153 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FParallelCommandListSet::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  DAT_146a9dcb8 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e511c8;
  plVar3 = (longlong *)param_1[0x12];
  for (iVar4 = *(int *)(param_1 + 0x13); iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar3 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar3 = plVar3 + 1;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141d5cbb0 `scalar_deleting_destructor' body=145 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRendererModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141d5cc50 FUN_141d5cc50 body=43 status=ok
// SIG undefined FUN_141d5cc50(void)

undefined8 * FUN_141d5cc50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141d5cc80 FUN_141d5cc80 body=52 status=ok
// SIG undefined FUN_141d5cc80(void)

undefined8 FUN_141d5cc80(undefined8 param_1,ulonglong param_2)

{
  FUN_141d5b7a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 141d5ccc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSceneViewState::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141d5be00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30d0);
  }
  return param_1;
}



// FUNCTION 141d5cd00 FUN_141d5cd00 body=608 status=ok
// SIG undefined FUN_141d5cd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d5cd00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar1 = *(int *)(param_2 + 0x1aa8);
  iVar2 = *(int *)(param_2 + 0x1aa0);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  iVar4 = DAT_1468509dc;
  fVar8 = _guard_xfg_dispatch_icall_nop((float)(iVar1 - iVar2));
  iVar1 = *(int *)(param_2 + 0x1aac);
  uVar5 = ~((int)ROUND(-0.5 - (fVar8 * DAT_1468509d8 + fVar8 * DAT_1468509d8)) >> 1);
  uVar7 = 1;
  if (0 < (int)uVar5) {
    uVar7 = uVar5;
  }
  iVar2 = *(int *)(param_2 + 0x1aa4);
  if (*(int *)(lVar3 + 0x38) < iVar4) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  fVar8 = _guard_xfg_dispatch_icall_nop((float)(iVar1 - iVar2));
  local_b8 = 1;
  local_c0 = 1;
  local_8c = 0;
  local_88 = 1;
  local_84 = 0;
  local_80 = 1;
  local_7c = 0x15;
  local_74 = 0x2010009;
  local_70 = 0;
  local_60 = 1;
  uVar6 = ~((int)ROUND(-0.5 - (fVar8 * DAT_1468509d8 + fVar8 * DAT_1468509d8)) >> 1);
  uVar5 = 1;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  local_94 = 1 << ((byte)uVar7 & 0x1f);
  *(int *)(param_2 + 0x2fd0) = local_94;
  local_90 = 1 << ((byte)uVar5 & 0x1f);
  *(int *)(param_2 + 0x2fd4) = local_90;
  local_98 = DAT_146ab6938;
  if ((int)uVar5 <= (int)uVar7) {
    uVar5 = uVar7 & 0xffff;
  }
  local_68 = L"UnknownTexture2D";
  local_78 = DAT_146a9da18;
  local_82 = (undefined2)uVar5;
  local_c8 = &DAT_144e49e48;
  local_a8 = _DAT_146ab6928;
  uStack_a0 = uRam0000000146ab6930;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_a8,param_2 + 0x2f88);
  return;
}



// FUNCTION 141d5cf60 AddBounds body=134 status=ok
// SIG undefined AddBounds(void)

int FHZBOcclusionTester::AddBounds(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x30);
  *(int *)(param_1 + 0x38) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
    TArray<FOcclusionPrimitive,TMemStackAllocator<0>_>::ResizeGrow(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar2 = (longlong)iVar3 * 0x18;
  *(undefined8 *)(lVar4 + lVar2) = *param_2;
  *(undefined4 *)(lVar4 + 8 + lVar2) = *(undefined4 *)(param_2 + 1);
  lVar4 = *plVar1;
  *(undefined8 *)(lVar4 + 0xc + lVar2) = *param_3;
  *(undefined4 *)(lVar4 + 0x14 + lVar2) = *(undefined4 *)(param_3 + 1);
  return iVar3;
}



// FUNCTION 141d5cff0 AddElements body=494 status=ok
// SIG undefined AddElements(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSWOccluderElementsCollector::AddElements
               (longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar11 = *(longlong *)(param_1 + 8);
  iVar4 = *(int *)(lVar11 + 0x68);
  *(int *)(lVar11 + 0x68) = iVar4 + 1;
  if (*(int *)(lVar11 + 0x6c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar11 + 0x60,iVar4);
  }
  lVar11 = (longlong)iVar4 * 0x70 + *(longlong *)(lVar11 + 0x60);
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0x58) = 0;
  *(undefined4 *)(lVar11 + 0x60) = 0;
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x68) * 0x70 +
           *(longlong *)(*(longlong *)(param_1 + 8) + 0x60);
  *(undefined4 *)(lVar11 + -0x10) = *(undefined4 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(lVar11 + -0x30);
  uVar9 = param_4[1];
  *(undefined8 *)(lVar11 + -0x70) = *param_4;
  *(undefined8 *)(lVar11 + -0x68) = uVar9;
  uVar9 = param_4[3];
  *(undefined8 *)(lVar11 + -0x60) = param_4[2];
  *(undefined8 *)(lVar11 + -0x58) = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar7 = *(undefined4 *)(param_4 + 5);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x2c);
  *(undefined4 *)(lVar11 + -0x50) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(lVar11 + -0x4c) = uVar6;
  *(undefined4 *)(lVar11 + -0x48) = uVar7;
  *(undefined4 *)(lVar11 + -0x44) = uVar8;
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar7 = *(undefined4 *)(param_4 + 7);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(lVar11 + -0x40) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)(lVar11 + -0x3c) = uVar6;
  *(undefined4 *)(lVar11 + -0x38) = uVar7;
  *(undefined4 *)(lVar11 + -0x34) = uVar8;
  uStack_70 = (longlong *)param_2[1];
  local_78 = *param_2;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
    UNLOCK();
  }
  if (&local_78 != puVar1) {
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uVar9 = *puVar1;
    plVar3 = *(longlong **)(lVar11 + -0x28);
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = (undefined4)uStack_70;
    uStack_4c = uStack_70._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_78;
    *(undefined4 *)(lVar11 + -0x2c) = local_78._4_4_;
    *(undefined4 *)(lVar11 + -0x28) = (undefined4)uStack_70;
    *(undefined4 *)(lVar11 + -0x24) = uStack_70._4_4_;
    local_78 = uVar9;
    uStack_70 = plVar3;
  }
  plVar3 = uStack_70;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_70 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_70)(uStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_70 + 8))(uStack_70,1);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  plVar3 = (longlong *)(lVar11 + -0x20);
  lVar10 = *param_3;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = lVar10;
  plStack_60 = plVar5;
  if (&local_68 != plVar3) {
    local_68 = *plVar3;
    plStack_60 = *(longlong **)(lVar11 + -0x18);
    *plVar3 = lVar10;
    *(longlong **)(lVar11 + -0x18) = plVar5;
    local_48 = lVar10;
    plStack_40 = plVar5;
  }
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_60 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  iVar4 = *(int *)(*param_3 + 8);
  piVar2 = (int *)(*(longlong *)(param_1 + 8) + 0x70);
  *piVar2 = *piVar2 + iVar4 / 3 + (iVar4 >> 0x1f) +
                      (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)
  ;
  return;
}



// FUNCTION 141d5d1e0 FUN_141d5d1e0 body=908 status=ok
// SIG undefined FUN_141d5d1e0(void)

void FUN_141d5d1e0(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *_Src;
  longlong *plVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int local_res8 [2];
  longlong local_res10;
  undefined4 *local_res18;
  longlong local_138 [5];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_141d68c50(param_1 + 0x40,local_res8,param_4);
  iVar7 = 0;
  if ((local_res8[0] == -1) ||
     (plVar11 = (longlong *)((longlong)local_res8[0] * 0xd8 + *(longlong *)(param_1 + 0x40)),
     plVar11 == (longlong *)0x0)) {
    local_138[4] = *param_4;
    uStack_110 = param_4[1];
    local_108 = param_4[2];
    uStack_100 = param_4[3];
    local_138[0] = 0;
    local_138[1] = 0;
    local_f8 = param_4[4];
    uStack_f0 = param_4[5];
    local_138[2] = 0;
    local_138[3] = 0;
    local_e8 = param_4[6];
    uStack_e0 = param_4[7];
    local_90 = param_5;
    local_7c = 0xffffffff;
    local_d8 = param_4[8];
    uStack_d0 = param_4[9];
    local_70 = 0;
    local_c8 = param_4[10];
    local_c0 = 0;
    uStack_b8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_78 = param_1;
    puVar9 = (undefined8 *)FHitProxyDrawingPolicy::GetBoundShaderStateInput(local_138 + 4,local_68);
    local_c0 = *puVar9;
    uStack_b8 = puVar9[1];
    local_b0 = puVar9[2];
    uStack_a8 = puVar9[3];
    local_a0 = puVar9[4];
    uStack_98 = puVar9[5];
    FUN_141d57640(param_1 + 0x40,local_res8,local_138,0);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (local_138 + 2);
    if (local_138[0] != 0) {
      FMemory::Free();
    }
    plVar11 = (longlong *)((longlong)local_res8[0] * 0xd8 + *(longlong *)(param_1 + 0x40));
    *(int *)((longlong)plVar11 + 0xbc) = local_res8[0];
    DAT_146a81050 =
         (ulonglong)(uint)(*(int *)((longlong)plVar11 + 0x1c) * 0x38) + 0xd0 +
         (ulonglong)(uint)(*(int *)((longlong)plVar11 + 0xc) << 2) + DAT_146a81050;
    iVar13 = *(int *)(param_1 + 0x38) + -1;
    if (0 < iVar13) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      iVar14 = 0;
      do {
        iVar7 = (iVar13 + iVar14) / 2;
        lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 4) * 0xd8;
        uVar4 = *(ulonglong *)(lVar10 + 0x28 + lVar3);
        if (uVar4 < (ulonglong)plVar11[5]) {
LAB_141d5d3a5:
          iVar14 = iVar7 + 1;
          iVar7 = iVar13;
        }
        else if (uVar4 == plVar11[5]) {
          uVar4 = *(ulonglong *)(lVar10 + 0x30 + lVar3);
          if (uVar4 < (ulonglong)plVar11[6]) goto LAB_141d5d3a5;
          if (uVar4 == plVar11[6]) {
            uVar8 = *(uint *)(lVar10 + 0x50 + lVar3) & 1;
            if (uVar8 < (*(uint *)(plVar11 + 10) & 1)) goto LAB_141d5d3a5;
            if (uVar8 <= (*(uint *)(plVar11 + 10) & 1)) break;
          }
        }
        iVar13 = iVar7;
        iVar7 = iVar14;
        iVar14 = iVar7;
      } while (iVar7 < iVar13);
    }
    iVar13 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar13 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar13 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar13);
    }
    _Src = (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 4);
    _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 4),_Src,(longlong)(iVar13 - iVar7) << 2)
    ;
    *(int *)((longlong)iVar7 * 4 + *(longlong *)(param_1 + 0x30)) = local_res8[0];
  }
  iVar7 = (int)plVar11[3];
  iVar13 = *(int *)((longlong)plVar11 + 0xc);
  iVar14 = *(int *)((longlong)plVar11 + 0x1c);
  *(int *)(plVar11 + 3) = iVar7 + 1;
  if (*(int *)((longlong)plVar11 + 0x1c) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar11 + 2,iVar7);
  }
  puVar12 = (undefined4 *)((longlong)iVar7 * 0x38 + plVar11[2]);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)((longlong)plVar11 + 0xbc);
    *puVar12 = *local_res18;
    *(longlong *)(puVar12 + 2) = local_res10;
    puVar9 = (undefined8 *)operator_new(0x20);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = &PTR_FUN_144e51470;
      puVar9[2] = param_1;
      *(undefined4 *)(puVar9 + 3) = uVar2;
      *(int *)((longlong)puVar9 + 0x1c) = iVar7;
    }
    *(undefined8 **)(puVar12 + 0xc) = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    }
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(puVar12 + 2) + 0xc0) + 8);
    uVar2 = *(undefined4 *)(lVar3 + 0xc4);
    uVar5 = *(undefined4 *)(lVar3 + 200);
    uVar6 = *(undefined4 *)(lVar3 + 0xcc);
    puVar12[4] = *(undefined4 *)(lVar3 + 0xc0);
    puVar12[5] = uVar2;
    puVar12[6] = uVar5;
    puVar12[7] = uVar6;
    *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(lVar3 + 0xd0);
    puVar12[10] = *(undefined4 *)(lVar3 + 0xd8);
    *(byte *)(puVar12 + 0xb) =
         (byte)((uint)*(undefined4 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(puVar12 + 2) + 0xc0) + 8) + 0x18)
               >> 0x1b) & 1;
  }
  iVar7 = (int)plVar11[1];
  *(int *)(plVar11 + 1) = iVar7 + 1;
  if (*(int *)((longlong)plVar11 + 0xc) < iVar7 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar7);
  }
  puVar1 = (undefined4 *)(*plVar11 + (longlong)iVar7 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(local_res10 + 200);
  }
  DAT_146a81050 =
       DAT_146a81050 +
       ((((ulonglong)(uint)(*(int *)((longlong)plVar11 + 0x1c) * 0x38) +
         (ulonglong)(uint)(*(int *)((longlong)plVar11 + 0xc) << 2)) - (ulonglong)(uint)(iVar13 << 2)
        ) - (ulonglong)(uint)(iVar14 * 0x38));
  lVar3 = *(longlong *)(puVar12 + 0xc);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar11 = (longlong *)(local_res10 + 0xd0);
  iVar7 = *(int *)(local_res10 + 0xd8);
  *(int *)(local_res10 + 0xd8) = iVar7 + 1;
  if (*(int *)(local_res10 + 0xdc) < iVar7 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar7);
  }
  *(longlong *)(*plVar11 + (longlong)iVar7 * 8) = lVar3;
  return;
}



// FUNCTION 141d5d570 AddParallelCommandList body=216 status=ok
// SIG undefined AddParallelCommandList(void)

void FParallelCommandListSet::AddParallelCommandList
               (longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar1 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
    FUN_140848b80(param_1 + 0x80,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8) = param_2;
  iVar1 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar1 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar1 + 1) {
    FUN_140848b80(param_1 + 0x90,iVar1);
  }
  lVar2 = *param_3;
  *(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xa8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xac) < iVar1 + 1) {
    TArray<int,TMemStackAllocator<0>_>::ResizeGrow(param_1 + 0xa0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 4) = param_4;
  return;
}



// FUNCTION 141d5d650 FUN_141d5d650 body=947 status=ok
// SIG undefined FUN_141d5d650(void)

void FUN_141d5d650(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *local_res8;
  int local_res18 [2];
  longlong *local_res20;
  undefined1 local_98 [8];
  undefined1 local_90 [88];
  
  uVar1 = (undefined4)param_3[1];
  lVar10 = 0;
  if ((((*(byte *)(param_1 + 0x8c) & 0x40) != 0) &&
      (cVar3 = (**(code **)(*param_3 + 0x200))(param_3), cVar3 != '\0')) &&
     ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 8) + 0x1c) >> 0x1d & 1) != 0)) {
    plVar7 = *(longlong **)(param_1 + 0xa8);
    local_res8 = (longlong *)0x0;
    (**(code **)(*plVar7 + 0x40))(plVar7,(int)param_3[1],local_res18,&local_res8);
    plVar2 = local_res8;
    cVar3 = FUN_141b196e0(local_res8,0);
    if (((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2), cVar3 == '\0')) &&
       (cVar3 = FUN_14259cbc0(plVar2), cVar3 == '\0')) {
      plVar7 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2a8))(plVar7,0,0);
    }
    uVar5 = *(uint *)(param_1 + 0x8c);
    lVar9 = param_3[1];
    local_res8 = (longlong *)
                 (CONCAT44(uVar5 >> 0xc,
                           uVar5 & 8 | uVar5 >> 6 & 4 | uVar5 >> 0x19 & 2 | uVar5 >> 4 & 1) &
                 0x3fffffffff);
    uVar8 = FUN_141d595d0(local_90,*(undefined8 *)(param_1 + 0xa0),plVar7,(int)lVar9,&local_res8);
    FUN_141d5d1e0(param_3 + 299,param_1,param_1 + 0xb0,uVar8,(int)lVar9);
  }
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 8) + 0x18) >> 0x15 & 1) != 0) {
    local_res8 = (longlong *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x40))
              (*(longlong **)(param_1 + 0xa8),uVar1,local_res18,&local_res8);
    iVar4 = (**(code **)(*local_res8 + 0x20))();
    if (iVar4 != 3) {
      if ((*(byte *)(param_1 + 0x8c) & 0x20) != 0) {
        FUN_141d8f600(param_3,param_1);
      }
      local_res8 = (longlong *)0x0;
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x40))
                (*(longlong **)(param_1 + 0xa8),uVar1,local_res18,&local_res8);
      uVar5 = (**(code **)(*local_res8 + 0x1e8))();
      if (uVar5 < 2) {
        if ((int)param_3[1] < 2) {
          if ((*(byte *)(param_1 + 0x8c) & 0x40) != 0) {
            FUN_141b8e520(param_2,param_3,param_1);
          }
        }
        else {
          FUN_141b08550((int)param_3[1],local_res18,&local_res8,param_3);
          if ((((*(byte *)(param_1 + 0x8c) & 0x80) != 0) || (local_res18[0] == 3)) &&
             (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 8) + 0x1c) >> 0x1b & 1) != 0
              || (local_res18[0] == 3)))) {
            local_res20 = (longlong *)0x0;
            (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x40))
                      (*(longlong **)(param_1 + 0xa8),uVar1,local_98,&local_res20);
            cVar3 = (**(code **)(*local_res20 + 0x1d0))();
            if (((cVar3 == '\0') || (1 < local_res18[0])) &&
               ((1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 8) + 0x10) - 1U ||
                ((char)local_res8 != '\0')))) {
              FUN_141afd0d0(param_3,param_1);
            }
          }
          if ((*(byte *)(param_1 + 0x8c) & 0x40) != 0) {
            FUN_141ab4dd0(param_2,param_3,param_1);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38)
                 < DAT_146a9e688) && (_Init_thread_header(&DAT_146a9e688), DAT_146a9e688 == -1)) {
              if (DAT_1468b1f88 == (longlong *)0x0) {
                IConsoleManager::SetupSingleton();
              }
              plVar7 = (longlong *)
                       (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowVelocityBuffer");
              lVar9 = lVar10;
              if (plVar7 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar7 + 0x38))(plVar7);
              }
              DAT_146a9e680 = lVar9;
              _Init_thread_footer(&DAT_146a9e688);
            }
            lVar9 = DAT_146a9e680;
            if (DAT_146a9e680 != 0) {
              cVar3 = FUN_1415ad720(&DAT_1468e2448);
              if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
                 (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
                lVar10 = 4;
              }
              if (*(int *)(lVar9 + lVar10) != 0) {
                FUN_141df9c30(param_3,param_1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141d5da10 FUN_141d5da10 body=970 status=ok
// SIG undefined FUN_141d5da10(void)

bool FUN_141d5da10(longlong param_1,float *param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  float *pfVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *local_res8;
  int local_res18 [2];
  undefined8 *local_res20;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  float local_b0;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  bVar10 = false;
  local_e8 = (param_2[3] - *param_2) * 0.5;
  local_d8 = (param_2[3] + *param_2) * 0.5;
  local_e0 = (param_2[5] - param_2[2]) * 0.5;
  local_d0 = (param_2[5] + param_2[2]) * 0.5;
  local_e4 = (param_2[4] - param_2[1]) * 0.5;
  local_d4 = (param_2[4] + param_2[1]) * 0.5;
  local_res20 = param_4;
  cVar5 = FConvexVolume::IntersectBox(param_1 + 0x1070,&local_d8,&local_e8);
  if (cVar5 != '\0') {
    fVar12 = param_2[3] - *param_2;
    fVar13 = param_2[4] - param_2[1];
    fVar14 = param_2[5] - param_2[2];
    local_c8 = fVar12 * 0.5 + *param_2;
    local_c4 = fVar13 * 0.5 + param_2[1];
    local_bc = CONCAT44(fVar13 * 0.5,fVar12 * 0.5);
    local_d0 = fVar14 * 0.5;
    local_c0 = local_d0 + param_2[2];
    fVar11 = (fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14) * 0.25;
    local_b0 = SQRT(fVar11);
    local_b4 = local_d0;
    if (*(char *)(param_1 + 0x1190) == '\0') {
      if (*(float *)(param_1 + 0x3cc) <= 1.0 && *(float *)(param_1 + 0x3cc) != 1.0) {
        bVar10 = fVar11 < 1.0995116e+12;
      }
      else {
        lVar6 = FUN_1427633e0(param_1,&local_d8,&local_c8,0);
        bVar10 = *(float *)(lVar6 + 8) - local_b0 * *(float *)(param_1 + 0x3b8) < 1.0;
      }
    }
    else {
      bVar10 = (*(float *)(param_1 + 0x11a4) * local_c4 + *(float *)(param_1 + 0x11a0) * local_c8 +
               *(float *)(param_1 + 0x11a8) * local_c0) - *(float *)(param_1 + 0x11ac) <
               -(ABS(*(float *)(param_1 + 0x11a4) * fVar13 * 0.5) +
                 ABS(*(float *)(param_1 + 0x11a0) * fVar12 * 0.5) +
                ABS(*(float *)(param_1 + 0x11a8) * fVar14 * 0.5));
    }
  }
  fVar11 = *(float *)(lVar2 + 0x25c);
  plVar1 = (longlong *)(lVar2 + 0x310);
  uVar7 = 0;
  if (*(int *)(lVar2 + 0x318) != *(int *)(lVar2 + 0x344)) {
    fVar12 = param_2[0x56];
    lVar6 = *(longlong *)(lVar2 + 0x350);
    if (*(longlong *)(lVar2 + 0x350) == 0) {
      lVar6 = lVar2 + 0x348;
    }
    fVar13 = *(float *)(lVar6 + ((longlong)*(int *)(lVar2 + 0x358) - 1U & (longlong)(int)fVar12) * 4
                       );
    if (fVar13 != -NAN) {
      do {
        pfVar9 = (float *)((longlong)(int)fVar13 * 0x38 + *plVar1);
        if (*pfVar9 == fVar12) {
          if ((fVar13 != -NAN) && (pfVar9 != (float *)0x0)) goto LAB_141d5dd55;
          break;
        }
        fVar13 = pfVar9[0xc];
      } while (fVar13 != -NAN);
    }
  }
  local_res8 = param_2 + 0x56;
  FUN_141bf05c0(plVar1,local_res18,&local_res8,0);
  pfVar9 = (float *)((longlong)local_res18[0] * 0x38 + *plVar1);
LAB_141d5dd55:
  uVar3 = (longlong)(int)fVar11 % (longlong)param_3;
  uVar8 = uVar3 & 0xffffffff;
  if (*(longlong *)(pfVar9 + uVar8 * 2 + 2) != 0) {
    FRenderQueryPool::ReleaseQuery(lVar2 + 0x158,pfVar9 + uVar8 * 2 + 2);
  }
  if (bVar10 != false) {
    uVar7 = FUN_142747660(lVar2 + 0x158,&local_res8);
    puVar4 = local_res20;
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_res20,uVar7);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    uVar7 = *puVar4;
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(pfVar9 + uVar8 * 2 + 2,uVar7);
  pfVar9[(uVar3 & 0xffffffff) + 8] = fVar11;
  return bVar10;
}



// FUNCTION 141d5dde0 FUN_141d5dde0 body=521 status=ok
// SIG undefined FUN_141d5dde0(void)

bool FUN_141d5dde0(longlong param_1,longlong param_2,int param_3,int param_4,undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float local_res20 [2];
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  byte local_24;
  
  bVar6 = true;
  if (param_4 == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x5c8) + 0x30);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_48);
    local_58 = *(undefined8 *)(param_1 + 0x8dc);
    local_50 = *(float *)(param_1 + 0x8e4);
    fVar8 = (float)local_58 - (float)local_48;
    local_48._4_4_ = (float)((ulonglong)local_58 >> 0x20) - local_48._4_4_;
    fVar7 = *(float *)(param_1 + 0x11b0) + *(float *)(param_1 + 0x11b0) + local_40._4_4_ * 1.05;
    bVar6 = fVar7 * fVar7 <=
            local_48._4_4_ * local_48._4_4_ + fVar8 * fVar8 +
            (local_50 - (float)local_40) * (local_50 - (float)local_40);
  }
  else {
    if (param_4 != 2) goto LAB_141d5df06;
    local_res20[0] = *(float *)(param_1 + 0x11b0) * 1.7320508;
    local_58 = CONCAT44(*(float *)(param_1 + 0x8e0) + *(float *)(param_2 + 0x48),
                        *(float *)(param_1 + 0x8dc) + *(float *)(param_2 + 0x44));
    local_50 = *(float *)(param_1 + 0x8e4) + *(float *)(param_2 + 0x4c);
    cVar3 = FConvexVolume::IntersectSphere(param_2 + 0x280,&local_58,local_res20);
    bVar6 = cVar3 == '\0';
  }
  if (bVar6 == false) {
    return false;
  }
LAB_141d5df06:
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar4 = FUN_142747660(lVar2 + 0x158,&local_58);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_5,uVar4);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  if (*(longlong *)(param_2 + 0x600) == 0) {
    local_38[0] = 0;
  }
  else {
    local_38[0] = *(undefined4 *)(*(longlong *)(param_2 + 0x600) + 0x10);
  }
  local_40 = param_5;
  local_30 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x5c8) + 0x30) + 0x10);
  local_28 = *(undefined4 *)(param_2 + 0x524);
  local_24 = (byte)((uint)*(undefined4 *)(param_2 + 0x560) >> 8) & 1;
  local_48 = local_38;
  lVar5 = *(longlong *)(lVar2 + 0x148);
  if (*(longlong *)(lVar2 + 0x148) == 0) {
    lVar5 = lVar2 + 0x58;
  }
  FUN_141d57e00((longlong)(*(int *)(lVar2 + 500) % param_3) * 0x50 + lVar5,local_res20,&local_48,0);
  return bVar6;
}



// FUNCTION 141d5dff0 FUN_141d5dff0 body=558 status=ok
// SIG undefined FUN_141d5dff0(void)

int * FUN_141d5dff0(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  uint local_48;
  uint local_44;
  uint *local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  
  piVar14 = (int *)0x0;
  puVar1 = (uint *)(param_2 + 0x1ac0);
  uVar11 = *(uint *)(param_2 + 0x1ad8);
  local_48 = 0;
  local_30 = 0;
  local_44 = 1;
  local_34 = 0;
  piVar12 = piVar14;
  if (uVar11 != 0) {
    piVar12 = (int *)(ulonglong)uVar11;
    puVar7 = *(uint **)(param_2 + 0x1ad0);
    if (*(uint **)(param_2 + 0x1ad0) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar2 = *puVar7;
    piVar6 = piVar14;
    piVar8 = piVar14;
    while (uVar2 == 0) {
      iVar4 = (int)piVar8;
      local_30 = (int)piVar6 + 0x20;
      piVar6 = (int *)(ulonglong)local_30;
      local_48 = iVar4 + 1;
      piVar8 = (int *)(ulonglong)local_48;
      local_34 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 <= iVar4)
      goto LAB_141d5e0db;
      uVar2 = puVar7[(longlong)iVar4 + 1];
    }
    local_44 = -uVar2 & uVar2;
    iVar4 = 0x1f;
    if (local_44 != 0) {
      for (; local_44 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_44 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_34 = (local_30 - iVar4) + 0x1f;
    if ((int)uVar11 < (int)local_34) {
      local_34 = uVar11;
    }
    piVar12 = (int *)(ulonglong)local_34;
  }
LAB_141d5e0db:
  local_38 = 0xffffffff;
  piVar6 = piVar14;
  local_40 = puVar1;
  if ((int)piVar12 < (int)uVar11) {
    do {
      iVar4 = (int)piVar12;
      if (*(int *)(param_3 + 0x3008) != *(int *)(param_3 + 0x3034)) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x1050) + (longlong)iVar4 * 4);
        lVar13 = *(longlong *)(param_3 + 0x3040);
        if (*(longlong *)(param_3 + 0x3040) == 0) {
          lVar13 = param_3 + 0x3038;
        }
        iVar5 = *(int *)(lVar13 + ((longlong)*(int *)(param_3 + 0x3048) - 1U & (longlong)iVar3) * 4)
        ;
        if (iVar5 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_3 + 0x3000));
            if (*piVar8 == iVar3) {
              if (iVar5 != -1) goto LAB_141d5e160;
              break;
            }
            iVar5 = piVar8[2];
          } while (iVar5 != -1);
        }
      }
      piVar8 = piVar14;
LAB_141d5e160:
      piVar10 = piVar8 + 1;
      if (piVar8 == (int *)0x0) {
        piVar10 = piVar14;
      }
      if (piVar10 != (int *)0x0) {
        uVar11 = 1 << ((byte)piVar12 & 0x1f);
        lVar13 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5);
        if ((char)*piVar10 == '\0') {
          puVar7 = *(uint **)(param_2 + 0x1ad0);
          if (*(uint **)(param_2 + 0x1ad0) == (uint *)0x0) {
            puVar7 = puVar1;
          }
          puVar7[lVar13] = puVar7[lVar13] & ~uVar11;
          piVar6 = (int *)(ulonglong)((int)piVar6 + 1);
        }
        else {
          lVar9 = *(longlong *)(param_2 + 0x1af0);
          if (*(longlong *)(param_2 + 0x1af0) == 0) {
            lVar9 = param_2 + 0x1ae0;
          }
          puVar7 = (uint *)(lVar9 + lVar13 * 4);
          *puVar7 = *puVar7 | uVar11;
        }
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_48);
      piVar12 = (int *)(ulonglong)local_34;
    } while ((int)local_34 < (int)local_40[6]);
  }
  return piVar6;
}



// FUNCTION 141d5e220 BatchPrimitive body=503 status=ok
// SIG undefined BatchPrimitive(void)

undefined8 FOcclusionQueryBatcher::BatchPrimitive(longlong *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  undefined1 local_68 [80];
  
  lVar5 = param_1[2];
  if ((lVar5 == 0) || (*(uint *)(param_1 + 3) <= *(uint *)((longlong)param_1 + 0x1c))) {
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FOcclusionQueryBatcher::FOcclusionBatch,TMemStackAllocator<0>_>::ResizeGrow
                (param_1,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
    }
    param_1[2] = (longlong)puVar3;
    uVar4 = FUN_142747660(param_1[4],local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1[2],uVar4);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    lVar5 = param_1[3];
    uVar4 = FUN_141ee2d40();
    puVar3 = (undefined8 *)FUN_141edebe0(uVar4,local_68,(int)lVar5 * 0x60);
    lVar5 = param_1[2];
    uVar4 = puVar3[1];
    *(undefined8 *)(lVar5 + 8) = *puVar3;
    *(undefined8 *)(lVar5 + 0x10) = uVar4;
    *(undefined8 *)(lVar5 + 0x18) = puVar3[2];
    lVar5 = param_1[2];
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  pfVar2 = *(float **)(lVar5 + 8);
  fVar6 = *param_2 - *param_3;
  fVar11 = *param_3 + *param_2;
  fVar8 = param_2[1] - param_3[1];
  fVar7 = param_2[2] - param_3[2];
  fVar10 = param_3[1] + param_2[1];
  fVar9 = param_3[2] + param_2[2];
  *pfVar2 = fVar6;
  pfVar2[0xc] = fVar11;
  pfVar2[0xf] = fVar11;
  pfVar2[0x12] = fVar11;
  pfVar2[7] = fVar10;
  pfVar2[5] = fVar9;
  pfVar2[10] = fVar10;
  pfVar2[0xb] = fVar9;
  pfVar2[0x11] = fVar9;
  pfVar2[0x13] = fVar10;
  pfVar2[0x15] = fVar11;
  pfVar2[0x16] = fVar10;
  pfVar2[0x17] = fVar9;
  pfVar2[1] = fVar8;
  pfVar2[2] = fVar7;
  pfVar2[3] = fVar6;
  pfVar2[4] = fVar8;
  pfVar2[6] = fVar6;
  pfVar2[8] = fVar7;
  pfVar2[9] = fVar6;
  pfVar2[0xd] = fVar8;
  pfVar2[0xe] = fVar7;
  pfVar2[0x10] = fVar8;
  pfVar2[0x14] = fVar7;
  *(float **)(lVar5 + 8) = pfVar2 + 0x18;
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  return *(undefined8 *)param_1[2];
}



// FUNCTION 141d5e420 FUN_141d5e420 body=6747 status=ok
// SIG undefined FUN_141d5e420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d5e420(longlong param_1,longlong param_2,char param_3)

{
  float fVar1;
  wchar_t wVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auVar5 [12];
  byte bVar6;
  char cVar7;
  int iVar8;
  undefined8 **ppuVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int *piVar16;
  wchar_t *pwVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int *piVar23;
  int iVar24;
  undefined8 **ppuVar25;
  longlong *plVar26;
  longlong *plVar27;
  uint uVar28;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  longlong lVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 auStack_5c8 [32];
  undefined8 **local_5a8;
  char local_598;
  uint local_594;
  int local_590;
  longlong local_588;
  int local_580;
  uint local_578;
  ulonglong *local_570;
  undefined8 *local_568;
  int local_560 [2];
  longlong local_558;
  longlong local_550;
  undefined8 *local_548;
  longlong local_540;
  undefined8 *local_538;
  undefined8 *local_530;
  undefined8 *local_528;
  undefined8 *local_520;
  undefined8 *local_518;
  undefined8 *local_510;
  int local_508;
  undefined4 local_504;
  undefined8 *local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  undefined8 **local_4e8;
  uint local_4e0;
  uint uStack_4dc;
  undefined8 **ppuStack_4d8;
  undefined4 local_4d0;
  undefined8 uStack_4cc;
  undefined4 uStack_4c4;
  int local_4c0;
  uint uStack_4bc;
  undefined8 **ppuStack_4b8;
  undefined4 local_4b0;
  uint uStack_4ac;
  int iStack_4a8;
  undefined4 uStack_4a4;
  undefined8 *local_4a0;
  longlong *local_498;
  undefined8 **local_490;
  undefined8 uStack_488;
  undefined8 **ppuStack_480;
  undefined8 uStack_478;
  int iStack_470;
  undefined4 uStack_46c;
  int local_468;
  undefined8 **local_460;
  uint local_454;
  uint local_450;
  undefined8 **local_448;
  undefined8 uStack_440;
  undefined8 **local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 **local_418;
  undefined2 local_410;
  int local_408;
  int local_404;
  undefined1 local_400 [4];
  int local_3fc;
  undefined8 local_3f8;
  undefined1 local_3f0 [8];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 *local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [8];
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  undefined8 local_3a0;
  undefined4 local_398 [2];
  undefined8 local_390;
  undefined4 local_388;
  byte local_384;
  longlong local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 *local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 *local_338;
  undefined *local_330;
  undefined4 local_328;
  longlong local_320;
  undefined8 *local_318;
  longlong local_310;
  undefined8 *local_308;
  undefined4 *local_300;
  undefined8 **local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 *local_2d8;
  longlong local_2d0;
  undefined8 local_2c8 [2];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_278;
  undefined8 **ppuStack_270;
  undefined8 local_268;
  longlong *plStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  ulonglong local_21c;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined1 local_1a8 [192];
  longlong local_e8;
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
  int local_a0;
  undefined4 local_9c;
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
  ulonglong uVar29;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5c8;
  local_578 = 0;
  local_560[0] = 0;
  local_588 = param_2;
  local_550 = param_1;
  local_540 = FSceneRenderTargets::Get(param_2);
  if (((*(char *)(local_540 + 0x398) == '\0') || (*(longlong *)(local_540 + 0xa0) == 0)) ||
     (local_598 = '\x01', *(longlong *)(*(longlong *)(local_540 + 0xa0) + 8) == 0)) {
    local_598 = '\0';
  }
  if (param_3 != '\0') {
    local_590 = FUN_141d69970(*(undefined4 *)(param_1 + 0x2a0));
    iVar24 = *(int *)(param_1 + 200);
    bVar36 = false;
    local_510 = (undefined8 *)0x0;
    local_504 = 0;
    local_508 = iVar24;
    if (0 < iVar24) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_510,0);
    }
    if (iVar24 != 0) {
      lVar22 = (longlong)local_510 + 0x1c;
      puVar12 = local_510;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 8;
        *(undefined8 *)(lVar22 + -0x14) = 0;
        *(undefined8 *)(lVar22 + -0xc) = 0;
        *(undefined8 *)(lVar22 + -4) = 0;
        *(undefined8 *)(lVar22 + 4) = 0;
        *(undefined8 *)(lVar22 + 0xc) = 0;
        *(undefined8 *)(lVar22 + 0x14) = 0;
        *(undefined8 *)(lVar22 + 0x1c) = 0;
        lVar22 = lVar22 + 0x40;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
    }
    local_580 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_558 = 0;
      do {
        uVar30 = 0;
        puVar32 = (ulonglong *)(local_558 * 0x30d0 + *(longlong *)(param_1 + 0xc0));
        plVar27 = local_510 + local_558 * 8;
        uVar31 = puVar32[3];
        local_570 = puVar32;
        if ((uVar31 != 0) && ((*(byte *)((longlong)puVar32 + 0x28cc) & 0x80) == 0)) {
          fVar1 = *(float *)(param_1 + 0x68);
          auVar37 = ZEXT416((uint)fVar1);
          lVar22 = *(longlong *)(uVar31 + 0x148);
          if (*(longlong *)(uVar31 + 0x148) == 0) {
            lVar22 = uVar31 + 0x58;
          }
          uVar21 = (longlong)*(int *)(uVar31 + 500) % (longlong)local_590;
          ppuVar25 = (undefined8 **)(lVar22 + (longlong)(int)uVar21 * 0x50);
          local_5a8 = (undefined8 **)CONCAT44(local_5a8._4_4_,*(undefined4 *)(uVar31 + 0x25c));
          FUN_141d780a0(uVar31,uVar21 & 0xffffffff,fVar1 - *(float *)(DAT_146b17150 + 0x8d0),fVar1);
          iVar24 = *(int *)(ppuVar25 + 5);
          ppuStack_4d8 = ppuVar25 + 2;
          local_4e0 = 0;
          uStack_4dc = 1;
          uStack_4cc = 0;
          if (iVar24 != 0) {
            ppuVar9 = (undefined8 **)ppuVar25[4];
            if ((undefined8 **)ppuVar25[4] == (undefined8 **)0x0) {
              ppuVar9 = ppuStack_4d8;
            }
            uVar28 = *(uint *)ppuVar9;
            uVar21 = uVar30;
            uVar29 = uVar30;
            while (uVar28 == 0) {
              iVar8 = (int)uVar21;
              uVar28 = (int)uVar29 + 0x20;
              uVar29 = (ulonglong)uVar28;
              local_4e0 = iVar8 + 1;
              uVar21 = (ulonglong)local_4e0;
              uStack_4cc = (ulonglong)uVar28 << 0x20;
              if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8)
              goto LAB_141d5e6a5;
              uVar28 = *(uint *)((longlong)ppuVar9 + ((longlong)iVar8 + 1) * 4);
            }
            uStack_4dc = -uVar28 & uVar28;
            local_408 = 0x1f;
            if (uStack_4dc != 0) {
              for (; uStack_4dc >> local_408 == 0; local_408 = local_408 + -1) {
              }
            }
            if (uStack_4dc == 0) {
              iVar8 = 0x20;
            }
            else {
              iVar8 = 0x1f - local_408;
            }
            iVar8 = ((int)uVar29 - iVar8) + 0x1f;
            uStack_4cc._4_4_ = (int)((ulonglong)uStack_4cc >> 0x20);
            uStack_4cc = CONCAT44(uStack_4cc._4_4_,iVar8);
            if (iVar24 < iVar8) {
LAB_141d5e6a5:
              uStack_4cc = CONCAT44(uStack_4cc._4_4_,iVar24);
            }
          }
          local_4d0 = 0xffffffff;
          uStack_488 = CONCAT44(uStack_4dc,local_4e0);
          uStack_478 = CONCAT44((int)uStack_4cc,0xffffffff);
          iStack_470 = uStack_4cc._4_4_;
          uStack_46c = uStack_4c4;
          local_410 = 0;
          uStack_430 = uStack_478;
          auVar5._4_8_ = auVar37._8_8_;
          auVar5._0_4_ = (int)uStack_4cc;
          auVar37._0_8_ = auVar5._0_8_ << 0x20;
          auVar37._8_4_ = uStack_4cc._4_4_;
          auVar37._12_4_ = uStack_4c4;
          local_428 = auVar37._8_8_;
          local_490 = ppuVar25;
          ppuStack_480 = ppuStack_4d8;
          local_448 = ppuVar25;
          uStack_440 = uStack_488;
          local_438 = ppuStack_4d8;
          local_418 = ppuVar25;
          local_278 = local_428;
          ppuStack_270 = ppuVar25;
          uStack_420 = ppuVar25;
          if ((int)uStack_4cc < *(int *)(ppuVar25 + 5)) {
            do {
              FRenderQueryPool::ReleaseQuery(uVar31 + 0x158);
              uStack_430 = CONCAT44(uStack_430._4_4_,(uint)uStack_430 & ~uStack_440._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_440);
            } while (uStack_430._4_4_ < (int)*(uint *)(local_438 + 3));
            if (((char)local_410 != '\0') && (local_410._1_1_ != '\0')) {
              TSet<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>,TDefaultMapHashableKeyFuncs<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_418,
                                  *(int *)(local_418 + 1) - *(int *)((longlong)local_418 + 0x34),1);
            }
          }
          TSparseArray<TSetElement<TTuple<FSceneViewState::FProjectedShadowKey,TRefCountPtr<FRHIRenderQuery>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Reset(ppuVar25);
          if (0 < (int)*(uint *)(ppuVar25 + 9)) {
            uVar31 = (ulonglong)*(uint *)(ppuVar25 + 9);
            do {
              uVar21 = (longlong)*(int *)(ppuVar25 + 9) - 1U & uVar30;
              ppuVar9 = (undefined8 **)ppuVar25[8];
              if ((undefined8 **)ppuVar25[8] == (undefined8 **)0x0) {
                ppuVar9 = ppuVar25 + 7;
              }
              uVar30 = uVar30 + 1;
              *(undefined4 *)((longlong)ppuVar9 + uVar21 * 4) = 0xffffffff;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
          if (1 < *(int *)(param_1 + 0x2a0)) {
            local_4e8 = (undefined8 **)(param_1 + 0x1c8);
            local_4c0 = 0;
            uVar28 = *(uint *)(param_1 + 0x1f0);
            ppuStack_4b8 = (undefined8 **)(param_1 + 0x1d8);
            uStack_4bc = 1;
            uStack_4ac = 0;
            iStack_4a8 = 0;
            if (uVar28 != 0) {
              ppuVar25 = *(undefined8 ***)(param_1 + 0x1e8);
              if (*(undefined8 ***)(param_1 + 0x1e8) == (undefined8 **)0x0) {
                ppuVar25 = ppuStack_4b8;
              }
              uVar20 = *(uint *)ppuVar25;
              iStack_4a8 = 0;
              local_4c0 = 0;
              while (uVar20 == 0) {
                lVar22 = (longlong)local_4c0;
                iStack_4a8 = iStack_4a8 + 0x20;
                iVar24 = local_4c0 + 1;
                bVar35 = (int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_4c0
                ;
                local_4c0 = iVar24;
                if (bVar35) goto LAB_141d5e8b5;
                uVar20 = *(uint *)((longlong)ppuVar25 + (lVar22 + 1) * 4);
              }
              uStack_4bc = -uVar20 & uVar20;
              local_404 = 0x1f;
              if (uStack_4bc != 0) {
                for (; uStack_4bc >> local_404 == 0; local_404 = local_404 + -1) {
                }
              }
              if (uStack_4bc == 0) {
                iVar24 = 0x20;
              }
              else {
                iVar24 = 0x1f - local_404;
              }
              uStack_4ac = (iStack_4a8 - iVar24) + 0x1f;
              if ((int)uVar28 < (int)uStack_4ac) {
LAB_141d5e8b5:
                uStack_4ac = uVar28;
              }
            }
            local_4b0 = 0xffffffff;
            local_454 = *(uint *)(param_1 + 0x1f0);
            uStack_488 = CONCAT44(uStack_4bc,local_4c0);
            uStack_478 = CONCAT44(uStack_4ac,0xffffffff);
            local_468 = (int)local_454 >> 5;
            local_450 = local_454 & 0xffffffe0;
            iStack_470 = iStack_4a8;
            uStack_46c = uStack_4a4;
            local_490 = local_4e8;
            ppuStack_480 = ppuStack_4b8;
            local_460 = ppuStack_4b8;
            if (local_454 != uVar28) {
              ppuVar25 = *(undefined8 ***)(param_1 + 0x1e8);
              if (*(undefined8 ***)(param_1 + 0x1e8) == (undefined8 **)0x0) {
                ppuVar25 = ppuStack_4b8;
              }
              uVar20 = *(uint *)((longlong)ppuVar25 + (longlong)local_468 * 4) &
                       -1 << ((byte)local_454 & 0x1f);
              while (uVar20 == 0) {
                lVar22 = (longlong)local_468;
                local_450 = local_450 + 0x20;
                iVar24 = local_468 + 1;
                bVar35 = (int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_468
                ;
                local_468 = iVar24;
                if (bVar35) goto LAB_141d5e97c;
                uVar20 = *(uint *)((longlong)ppuVar25 + (lVar22 + 1) * 4);
              }
              uVar20 = -uVar20 & uVar20;
              local_3fc = 0x1f;
              if (uVar20 != 0) {
                for (; uVar20 >> local_3fc == 0; local_3fc = local_3fc + -1) {
                }
              }
              if (uVar20 == 0) {
                iVar24 = 0x20;
              }
              else {
                iVar24 = 0x1f - local_3fc;
              }
              local_454 = (local_450 - iVar24) + 0x1f;
              if ((int)uVar28 < (int)local_454) {
LAB_141d5e97c:
                local_454 = uVar28;
              }
            }
            while( true ) {
              if (((uStack_478._4_4_ == local_454) && (ppuStack_480 == local_460)) &&
                 (local_490 == local_4e8)) break;
              uVar30 = 0;
              local_4a0 = *local_490 + (longlong)(int)uStack_478._4_4_ * 0xe;
              local_594 = 0;
              uVar31 = uVar30;
              if (0 < *(int *)(local_4a0 + 3)) {
                do {
                  uVar28 = (uint)uVar30;
                  lVar22 = *(longlong *)(uVar31 + local_4a0[2]);
                  if (((*(ulonglong **)(lVar22 + 0x38) == (ulonglong *)0x0) ||
                      (*(ulonglong **)(lVar22 + 0x38) == puVar32)) && (*(int *)(lVar22 + 0x30) != 1)
                     ) {
                    uVar20 = *(uint *)(lVar22 + 0x560);
                    if ((uVar20 & 0x20) == 0) {
                      if ((((uVar20 & 0x40) == 0) ||
                          (uVar28 = local_594, *(int *)(lVar22 + 0x524) < 0)) ||
                         ((uVar20 & 0x10) == 0)) {
                        if ((uVar20 >> 0xb & 1) == 0) {
                          cVar7 = FUN_141de4930(lVar22,puVar32);
                          uVar28 = local_594;
                          if (cVar7 == '\0') {
                            local_5a8 = &local_4f8;
                            local_4f8 = (undefined8 *)0x0;
                            cVar7 = FUN_141d5dde0(puVar32,lVar22,local_590,2);
                            puVar12 = local_4f8;
                            if (cVar7 != '\0') {
                              local_520 = local_4f8;
                              if (local_4f8 != (undefined8 *)0x0) {
                                LOCK();
                                *(int *)(local_4f8 + 1) = *(int *)(local_4f8 + 1) + 1;
                                UNLOCK();
                              }
                              local_318 = local_4f8;
                              if (local_4f8 != (undefined8 *)0x0) {
                                LOCK();
                                *(int *)(local_4f8 + 1) = *(int *)(local_4f8 + 1) + 1;
                                UNLOCK();
                              }
                              local_320 = lVar22;
                              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                                        (&local_520);
                              if (puVar12 != (undefined8 *)0x0) {
                                LOCK();
                                *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                                UNLOCK();
                                puVar12 = local_520;
                              }
                              local_3e0 = 0;
                              local_2d0 = lVar22;
                              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                                        (&local_3e0);
                              iVar24 = (int)plVar27[5];
                              *(int *)(plVar27 + 5) = iVar24 + 1;
                              if (*(int *)((longlong)plVar27 + 0x2c) < iVar24 + 1) {
                                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27 + 4,iVar24)
                                ;
                              }
                              plVar10 = (longlong *)((longlong)iVar24 * 0x10 + plVar27[4]);
                              local_2c8[0] = 0;
                              *plVar10 = lVar22;
                              plVar10[1] = (longlong)puVar12;
                              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                                        (local_2c8);
                              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                                        (&local_318);
                              bVar36 = true;
                            }
                            ppuVar25 = &local_4f8;
                            goto LAB_141d5ee4b;
                          }
                        }
                      }
                      else if ((DAT_146a98d40 != 0) && (0 < *(int *)(lVar22 + 0x524))) {
                        uVar30 = puVar32[3];
                        local_538 = (undefined8 *)0x0;
                        uVar11 = FUN_142747660(uVar30 + 0x158,local_3f0);
                        TRefCountPtr<FRHIIndexBuffer>::operator=(&local_538,uVar11);
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_3f0);
                        local_398[0] = 0;
                        if (*(longlong *)(lVar22 + 0x600) != 0) {
                          local_398[0] = *(undefined4 *)(*(longlong *)(lVar22 + 0x600) + 0x10);
                        }
                        local_390 = *(undefined8 *)
                                     (*(longlong *)(*(longlong *)(lVar22 + 0x5c8) + 0x30) + 0x10);
                        local_388 = *(undefined4 *)(lVar22 + 0x524);
                        local_300 = local_398;
                        local_384 = (byte)((uint)*(undefined4 *)(lVar22 + 0x560) >> 8) & 1;
                        local_2f8 = &local_538;
                        lVar33 = *(longlong *)(uVar30 + 0x148);
                        if (*(longlong *)(uVar30 + 0x148) == 0) {
                          lVar33 = uVar30 + 0x58;
                        }
                        FUN_141d57e00((longlong)(*(int *)(uVar30 + 500) % local_590) * 0x50 + lVar33
                                      ,local_400,&local_300,0);
                        puVar12 = local_538;
                        local_528 = local_538;
                        if (local_538 != (undefined8 *)0x0) {
                          LOCK();
                          *(int *)(local_538 + 1) = *(int *)(local_538 + 1) + 1;
                          UNLOCK();
                        }
                        local_2d8 = local_538;
                        if (local_538 != (undefined8 *)0x0) {
                          LOCK();
                          *(int *)(local_538 + 1) = *(int *)(local_538 + 1) + 1;
                          UNLOCK();
                        }
                        local_2e0 = lVar22;
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_528);
                        if (puVar12 != (undefined8 *)0x0) {
                          LOCK();
                          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                          UNLOCK();
                          puVar12 = local_528;
                        }
                        local_3e8 = 0;
                        local_2f0 = lVar22;
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3e8);
                        iVar24 = (int)plVar27[3];
                        *(int *)(plVar27 + 3) = iVar24 + 1;
                        if (*(int *)((longlong)plVar27 + 0x1c) < iVar24 + 1) {
                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27 + 2,iVar24);
                        }
                        plVar10 = (longlong *)((longlong)iVar24 * 0x10 + plVar27[2]);
                        local_2e8 = 0;
                        *plVar10 = lVar22;
                        plVar10[1] = (longlong)puVar12;
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2e8);
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d8);
                        ppuVar25 = &local_538;
                        bVar36 = true;
LAB_141d5ee4b:
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(ppuVar25);
                        uVar28 = local_594;
                      }
                    }
                    else {
                      local_5a8 = &local_500;
                      local_500 = (undefined8 *)0x0;
                      cVar7 = FUN_141d5dde0(puVar32,lVar22,local_590);
                      puVar12 = local_500;
                      if (cVar7 != '\0') {
                        local_530 = local_500;
                        if (local_500 != (undefined8 *)0x0) {
                          LOCK();
                          *(int *)(local_500 + 1) = *(int *)(local_500 + 1) + 1;
                          UNLOCK();
                        }
                        local_308 = local_500;
                        if (local_500 != (undefined8 *)0x0) {
                          LOCK();
                          *(int *)(local_500 + 1) = *(int *)(local_500 + 1) + 1;
                          UNLOCK();
                        }
                        local_310 = lVar22;
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_530);
                        if (puVar12 != (undefined8 *)0x0) {
                          LOCK();
                          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                          UNLOCK();
                          puVar12 = local_530;
                        }
                        local_3f8 = 0;
                        local_380 = lVar22;
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f8);
                        iVar24 = (int)plVar27[1];
                        *(int *)(plVar27 + 1) = iVar24 + 1;
                        if (*(int *)((longlong)plVar27 + 0xc) < iVar24 + 1) {
                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27,iVar24);
                        }
                        plVar10 = (longlong *)((longlong)iVar24 * 0x10 + *plVar27);
                        local_378 = 0;
                        *plVar10 = lVar22;
                        plVar10[1] = (longlong)puVar12;
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_378);
                        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_308);
                        bVar36 = true;
                      }
                      puVar12 = local_500;
                      lVar22 = 0;
                      uVar28 = local_594;
                      if (local_500 != (undefined8 *)0x0) {
                        LOCK();
                        piVar16 = (int *)(local_500 + 1);
                        iVar24 = *piVar16;
                        *piVar16 = *piVar16 + -1;
                        UNLOCK();
                        if (iVar24 == 1) {
                          if (*(char *)(local_500 + 2) == '\0') {
                            if (DAT_146ab62f5 == '\0') {
                              cVar7 = FOutputDevice::CanBeUsedOnAnyThread();
                              if (cVar7 != '\0') goto LAB_141d5eb64;
                            }
                            LOCK();
                            bVar35 = *(int *)((longlong)puVar12 + 0xc) == 0;
                            if (bVar35) {
                              *(int *)((longlong)puVar12 + 0xc) = 1;
                            }
                            UNLOCK();
                            uVar28 = local_594;
                            if (bVar35) {
                              uVar28 = FLockFreeLinkPolicy::AllocLockFreeLink();
                              if (uVar28 != 0) {
                                lVar22 = (&DAT_1468a81f8)[uVar28 >> 0xe] +
                                         (ulonglong)(uVar28 & 0x3fff) * 0x18;
                              }
                              *(undefined8 **)(lVar22 + 8) = puVar12;
                              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                              uVar28 = local_594;
                            }
                          }
                          else {
LAB_141d5eb64:
                            (**(code **)*puVar12)(puVar12,1);
                            uVar28 = local_594;
                          }
                        }
                      }
                    }
                  }
                  local_594 = uVar28 + 1;
                  uVar30 = (ulonglong)local_594;
                  uVar31 = uVar31 + 8;
                } while ((int)local_594 < *(int *)(local_4a0 + 3));
              }
              uVar30 = 0;
              puVar12 = local_4a0;
              uVar31 = uVar30;
              if (0 < *(int *)(local_4a0 + 0xd)) {
                do {
                  uVar11 = *(undefined8 *)(uVar30 + puVar12[0xc]);
                  local_4f0 = (undefined8 *)0x0;
                  local_5a8 = &local_4f0;
                  cVar7 = FUN_141d5dde0(local_570,uVar11,local_590);
                  puVar13 = local_4f0;
                  if (cVar7 != '\0') {
                    local_518 = local_4f0;
                    if (local_4f0 != (undefined8 *)0x0) {
                      LOCK();
                      *(int *)(local_4f0 + 1) = *(int *)(local_4f0 + 1) + 1;
                      UNLOCK();
                    }
                    local_358 = local_4f0;
                    if (local_4f0 != (undefined8 *)0x0) {
                      LOCK();
                      *(int *)(local_4f0 + 1) = *(int *)(local_4f0 + 1) + 1;
                      UNLOCK();
                    }
                    local_360 = uVar11;
                    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_518);
                    if (puVar13 != (undefined8 *)0x0) {
                      LOCK();
                      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
                      UNLOCK();
                      puVar13 = local_518;
                    }
                    local_3a0 = 0;
                    local_370 = uVar11;
                    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3a0);
                    iVar24 = (int)plVar27[5];
                    *(int *)(plVar27 + 5) = iVar24 + 1;
                    if (*(int *)((longlong)plVar27 + 0x2c) < iVar24 + 1) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27 + 4,iVar24);
                    }
                    puVar12 = (undefined8 *)((longlong)iVar24 * 0x10 + plVar27[4]);
                    *puVar12 = uVar11;
                    local_368 = 0;
                    puVar12[1] = puVar13;
                    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_368);
                    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_358);
                    bVar36 = true;
                    puVar12 = local_4a0;
                  }
                  puVar13 = local_4f0;
                  lVar22 = 0;
                  if (local_4f0 != (undefined8 *)0x0) {
                    LOCK();
                    piVar16 = (int *)(local_4f0 + 1);
                    iVar24 = *piVar16;
                    *piVar16 = *piVar16 + -1;
                    UNLOCK();
                    if (iVar24 == 1) {
                      if (*(char *)(local_4f0 + 2) == '\0') {
                        if (DAT_146ab62f5 == '\0') {
                          cVar7 = FOutputDevice::CanBeUsedOnAnyThread();
                          if (cVar7 != '\0') goto LAB_141d5f000;
                        }
                        LOCK();
                        bVar35 = *(int *)((longlong)puVar13 + 0xc) == 0;
                        if (bVar35) {
                          *(int *)((longlong)puVar13 + 0xc) = 1;
                        }
                        UNLOCK();
                        if (bVar35) {
                          uVar28 = FLockFreeLinkPolicy::AllocLockFreeLink();
                          if (uVar28 != 0) {
                            lVar22 = (&DAT_1468a81f8)[uVar28 >> 0xe] +
                                     (ulonglong)(uVar28 & 0x3fff) * 0x18;
                          }
                          *(undefined8 **)(lVar22 + 8) = puVar13;
                          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                        }
                      }
                      else {
LAB_141d5f000:
                        (**(code **)*puVar13)(puVar13,1);
                      }
                    }
                  }
                  uVar28 = (int)uVar31 + 1;
                  uVar30 = uVar30 + 8;
                  puVar32 = local_570;
                  uVar31 = (ulonglong)uVar28;
                } while ((int)uVar28 < *(int *)(puVar12 + 0xd));
              }
              uStack_478 = CONCAT44(uStack_478._4_4_,(uint)uStack_478 & ~uStack_488._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_488);
            }
            iVar24 = 0;
            param_1 = local_550;
            if (((1 < *(int *)(local_550 + 0x2a0)) &&
                (*(char *)((longlong)puVar32 + 0x1204) == '\0')) &&
               ((*(char *)((longlong)puVar32 + 0x1202) == '\0' &&
                ((*(char *)((longlong)puVar32 + 0x1203) == '\0' &&
                 (lVar22 = *(longlong *)(local_550 + 8), 0 < *(int *)(lVar22 + 0x11f0))))))) {
              lVar33 = 0;
              do {
                local_568 = (undefined8 *)0x0;
                uVar11 = *(undefined8 *)(lVar33 + *(longlong *)(lVar22 + 0x11e8));
                cVar7 = FUN_141d5da10(local_570,uVar11,local_590,&local_568);
                puVar12 = local_568;
                if (cVar7 != '\0') {
                  local_3d8 = local_568;
                  if (local_568 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(local_568 + 1) = *(int *)(local_568 + 1) + 1;
                    UNLOCK();
                  }
                  local_338 = local_568;
                  if (local_568 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(local_568 + 1) = *(int *)(local_568 + 1) + 1;
                    UNLOCK();
                  }
                  local_340 = uVar11;
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3d8);
                  if (puVar12 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                    UNLOCK();
                    puVar12 = local_568;
                  }
                  local_3d0 = 0;
                  local_350 = uVar11;
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3d0);
                  iVar8 = (int)plVar27[7];
                  *(int *)(plVar27 + 7) = iVar8 + 1;
                  if (*(int *)((longlong)plVar27 + 0x3c) < iVar8 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar27 + 6,iVar8);
                  }
                  puVar13 = (undefined8 *)((longlong)iVar8 * 0x10 + plVar27[6]);
                  local_348 = 0;
                  *puVar13 = uVar11;
                  puVar13[1] = puVar12;
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_348);
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_338);
                  bVar36 = true;
                }
                puVar13 = local_568;
                lVar22 = 0;
                if (puVar12 != (undefined8 *)0x0) {
                  LOCK();
                  piVar16 = (int *)(puVar12 + 1);
                  iVar8 = *piVar16;
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    if (*(char *)(local_568 + 2) == '\0') {
                      if (DAT_146ab62f5 == '\0') {
                        cVar7 = FOutputDevice::CanBeUsedOnAnyThread();
                        if (cVar7 != '\0') goto LAB_141d5f222;
                      }
                      LOCK();
                      bVar35 = *(int *)((longlong)puVar13 + 0xc) == 0;
                      if (bVar35) {
                        *(int *)((longlong)puVar13 + 0xc) = 1;
                      }
                      UNLOCK();
                      if (bVar35) {
                        uVar28 = FLockFreeLinkPolicy::AllocLockFreeLink();
                        if (uVar28 != 0) {
                          lVar22 = (&DAT_1468a81f8)[uVar28 >> 0xe] +
                                   (ulonglong)(uVar28 & 0x3fff) * 0x18;
                        }
                        *(undefined8 **)(lVar22 + 8) = local_568;
                        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                      }
                    }
                    else {
LAB_141d5f222:
                      (**(code **)*puVar13)(puVar13,1);
                    }
                  }
                }
                iVar24 = iVar24 + 1;
                lVar33 = lVar33 + 8;
                lVar22 = *(longlong *)(local_550 + 8);
                param_1 = local_550;
                puVar32 = local_570;
              } while (iVar24 < *(int *)(lVar22 + 0x11f0));
            }
          }
          if ((*(int *)((longlong)puVar32 + 0x2f54) == 0) &&
             (*(int *)((longlong)puVar32 + 0x2f7c) == 0)) {
            bVar6 = 0;
          }
          else {
            bVar6 = 1;
          }
          bVar36 = (bool)(bVar36 | bVar6);
        }
        iVar24 = *(int *)(param_1 + 200);
        lVar22 = (longlong)iVar24;
        local_580 = local_580 + 1;
        local_558 = local_558 + 1;
      } while (local_580 < iVar24);
      if (bVar36) {
        iVar8 = 0;
        if (0 < iVar24) {
          piVar16 = (int *)(local_510 + 5);
          piVar23 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x2f40);
          do {
            iVar8 = iVar8 + piVar23[10] + piVar16[-8] + piVar16[-4] + piVar16[4] + *piVar23 +
                            *piVar16;
            lVar22 = lVar22 + -1;
            piVar16 = piVar16 + 0x10;
            piVar23 = piVar23 + 0xc34;
          } while (lVar22 != 0);
          iVar24 = *(int *)(param_1 + 200);
        }
        lVar22 = local_588;
        if (1 < *(int *)(param_1 + 0x2a0)) {
          if (local_598 == '\0') {
            lVar22 = *(longlong *)(local_540 + 0x60);
          }
          else {
            lVar22 = *(longlong *)(local_540 + 0xa0);
          }
          local_e8 = *(longlong *)(lVar22 + 8);
          local_a0 = iVar24 + iVar8;
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
          local_9c = 1;
          local_98 = 0xffffffff;
          local_94 = 0;
          local_90 = 0;
          local_58 = 0;
          local_e0 = 0;
          local_d8 = 0x45;
          local_d4 = 0x21;
          local_50 = 1 < *(uint *)(local_e8 + 0x38);
          _guard_xfg_dispatch_icall_nop(local_1a8,0,0xc0);
          lVar22 = local_588;
          uVar30 = *(longlong *)(local_588 + 0x30) + 1U & 0xfffffffffffffffe;
          uVar31 = uVar30 + 0x22;
          if (*(ulonglong *)(local_588 + 0x38) < uVar31) {
            FMemStackBase::AllocateNewChunk(local_588 + 0x30,0x24);
            uVar30 = *(longlong *)(lVar22 + 0x30) + 1U & 0xfffffffffffffffe;
            uVar31 = uVar30 + 0x22;
          }
          pwVar17 = L"OcclusionQueries";
          *(ulonglong *)(lVar22 + 0x30) = uVar31;
          do {
            wVar2 = *pwVar17;
            *(wchar_t *)((uVar30 - 0x144e506d0) + (longlong)pwVar17) = wVar2;
            pwVar17 = pwVar17 + 1;
          } while (wVar2 != L'\0');
          uVar21 = *(longlong *)(lVar22 + 0x30) + 7U & 0xfffffffffffffff8;
          uVar31 = uVar21 + 0x178;
          if (*(ulonglong *)(lVar22 + 0x38) < uVar31) {
            FMemStackBase::AllocateNewChunk(lVar22 + 0x30,0x180);
            uVar21 = *(longlong *)(lVar22 + 0x30) + 7U & 0xfffffffffffffff8;
            uVar31 = uVar21 + 0x178;
          }
          *(ulonglong *)(lVar22 + 0x30) = uVar31;
          *(int *)(lVar22 + 0x14) = *(int *)(lVar22 + 0x14) + 1;
          **(ulonglong **)(lVar22 + 8) = uVar21;
          *(ulonglong *)(lVar22 + 8) = uVar21 + 8;
          FUN_140499730(uVar21,local_1a8,uVar30);
          *(undefined1 *)(lVar22 + 0x1ac) = 1;
          FUN_14049c2a0(lVar22,local_1a8);
          *(undefined1 *)(lVar22 + 0x1ac) = 1;
          FRHIRenderPassInfo::~FRHIRenderPassInfo(local_1a8);
        }
        local_21c = 0x26;
        local_228 = 0;
        local_268 = 0;
        plStack_260 = (longlong *)0x0;
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_220 = 0;
        local_214 = 0;
        local_20c = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c4 = 0;
        local_1bc = 0;
        local_1b4 = 0;
        FUN_14049afe0(lVar22);
        local_21c = local_21c & 0xffffffff00000000;
        local_238 = FUN_141b08790();
        local_228 = FUN_141abfb70();
        puVar12 = (undefined8 *)FUN_141ee3610();
        local_580 = 0;
        local_268 = *puVar12;
        if (0 < *(int *)(param_1 + 200)) {
          puVar32 = (ulonglong *)(lVar22 + 0x30);
          local_558 = 0;
          plVar27 = local_498;
          local_570 = puVar32;
          do {
            lVar33 = local_558 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
            plVar10 = local_510 + local_558 * 8;
            ppuVar25 = (undefined8 **)(*(longlong *)(lVar33 + 0x18) + 0x1800);
            local_4e8 = ppuVar25;
            if (*ppuVar25 == (undefined8 *)0x0) {
              cVar7 = FUN_141ed1020();
              if (cVar7 != '\0') {
                (**(code **)(*DAT_146ab6358 + 0x670))(DAT_146ab6358,&local_548,&DAT_146ab6e78,1);
                if (ppuVar25 != &local_548) {
                  puVar12 = *ppuVar25;
                  *ppuVar25 = local_548;
                  local_548 = (undefined8 *)0x0;
                  if (puVar12 == (undefined8 *)0x0) goto LAB_141d5f787;
                  LOCK();
                  piVar16 = (int *)(puVar12 + 1);
                  iVar24 = *piVar16;
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (iVar24 == 1) {
                    if (*(char *)(puVar12 + 2) == '\0') {
                      if (DAT_146ab62f5 == '\0') {
                        cVar7 = FOutputDevice::CanBeUsedOnAnyThread();
                        if (cVar7 != '\0') goto LAB_141d5f6e3;
                      }
                      LOCK();
                      bVar36 = *(int *)((longlong)puVar12 + 0xc) == 0;
                      if (bVar36) {
                        *(int *)((longlong)puVar12 + 0xc) = 1;
                      }
                      UNLOCK();
                      if (bVar36) {
                        uVar28 = FLockFreeLinkPolicy::AllocLockFreeLink();
                        if (uVar28 == 0) {
                          lVar14 = 0;
                        }
                        else {
                          lVar14 = (&DAT_1468a81f8)[uVar28 >> 0xe] +
                                   (ulonglong)(uVar28 & 0x3fff) * 0x18;
                        }
                        *(undefined8 **)(lVar14 + 8) = puVar12;
                        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                      }
                    }
                    else {
LAB_141d5f6e3:
                      (**(code **)*puVar12)(puVar12);
                    }
                  }
                }
                puVar12 = local_548;
                if (local_548 != (undefined8 *)0x0) {
                  LOCK();
                  piVar16 = (int *)(local_548 + 1);
                  iVar24 = *piVar16;
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (iVar24 == 1) {
                    if (*(char *)(local_548 + 2) == '\0') {
                      if (DAT_146ab62f5 == '\0') {
                        cVar7 = FOutputDevice::CanBeUsedOnAnyThread();
                        if (cVar7 != '\0') goto LAB_141d5f77a;
                      }
                      LOCK();
                      bVar36 = *(int *)((longlong)puVar12 + 0xc) == 0;
                      if (bVar36) {
                        *(int *)((longlong)puVar12 + 0xc) = 1;
                      }
                      UNLOCK();
                      if (bVar36) {
                        uVar28 = FLockFreeLinkPolicy::AllocLockFreeLink();
                        if (uVar28 == 0) {
                          lVar14 = 0;
                        }
                        else {
                          lVar14 = (&DAT_1468a81f8)[uVar28 >> 0xe] +
                                   (ulonglong)(uVar28 & 0x3fff) * 0x18;
                        }
                        *(undefined8 **)(lVar14 + 8) = puVar12;
                        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                      }
                    }
                    else {
LAB_141d5f77a:
                      (**(code **)*puVar12)(puVar12);
                    }
                  }
                }
              }
            }
LAB_141d5f787:
            cVar7 = FUN_141ed1020();
            if (cVar7 != '\0') {
              puVar13 = *ppuVar25;
              puVar18 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
              puVar12 = puVar18 + 3;
              if ((undefined8 *)puVar32[1] < puVar12) {
                FMemStackBase::AllocateNewChunk(puVar32);
                puVar18 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar18 + 3;
              }
              *puVar32 = (ulonglong)puVar12;
              *(int *)(lVar22 + 0x14) = *(int *)(lVar22 + 0x14) + 1;
              **(undefined8 **)(lVar22 + 8) = puVar18;
              *(undefined8 **)(lVar22 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *puVar18 = &PTR_LAB_143f59480;
              puVar18[2] = puVar13;
            }
            if (*(char *)(lVar33 + 0x11b4) == '\0') {
              uStack_230 = FUN_141ac0570();
            }
            else {
              uStack_230 = FUN_141ac06b0();
            }
            if (local_598 == '\0') {
              local_590 = *(int *)(lVar33 + 0x1aa0);
              iVar24 = *(int *)(lVar33 + 0x1aac);
              iVar8 = *(int *)(lVar33 + 0x1aa8);
              puVar13 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
              uVar3 = *(undefined4 *)(lVar33 + 0x1aa4);
              puVar12 = puVar13 + 5;
              if ((undefined8 *)puVar32[1] < puVar12) {
                FMemStackBase::AllocateNewChunk(puVar32,0x30);
                puVar13 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar13 + 5;
              }
              *puVar32 = (ulonglong)puVar12;
              *(int *)(local_588 + 0x14) = *(int *)(local_588 + 0x14) + 1;
              **(undefined8 **)(local_588 + 8) = puVar13;
              *(undefined8 **)(local_588 + 8) = puVar13 + 1;
              puVar13[1] = 0;
              *puVar13 = &PTR_LAB_143f59420;
              *(int *)(puVar13 + 2) = local_590;
              *(undefined4 *)((longlong)puVar13 + 0x14) = uVar3;
            }
            else {
              uVar28 = *(uint *)(local_540 + 0x394);
              iVar34 = (int)(float)((ulonglong)*(uint *)(lVar33 + 0x1aa0) / (ulonglong)uVar28);
              local_590 = (int)(float)((ulonglong)*(uint *)(lVar33 + 0x1aa4) / (ulonglong)uVar28);
              iVar24 = (int)(float)((ulonglong)
                                    (*(int *)(lVar33 + 0x1aac) - *(uint *)(lVar33 + 0x1aa4)) /
                                   (ulonglong)uVar28) + local_590;
              puVar13 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
              puVar12 = puVar13 + 5;
              iVar8 = (int)(float)((ulonglong)
                                   (*(int *)(lVar33 + 0x1aa8) - *(uint *)(lVar33 + 0x1aa0)) /
                                  (ulonglong)uVar28) + iVar34;
              if ((undefined8 *)puVar32[1] < puVar12) {
                FMemStackBase::AllocateNewChunk(puVar32,0x30);
                puVar13 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar13 + 5;
              }
              *puVar32 = (ulonglong)puVar12;
              *(int *)(local_588 + 0x14) = *(int *)(local_588 + 0x14) + 1;
              **(undefined8 **)(local_588 + 8) = puVar13;
              *(undefined8 **)(local_588 + 8) = puVar13 + 1;
              puVar13[1] = 0;
              *puVar13 = &PTR_LAB_143f59420;
              *(int *)(puVar13 + 2) = iVar34;
              *(int *)((longlong)puVar13 + 0x14) = local_590;
            }
            *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
            *(int *)(puVar13 + 4) = iVar24;
            *(int *)((longlong)puVar13 + 0x1c) = iVar8;
            plVar15 = (longlong *)0x0;
            *(undefined4 *)(puVar13 + 3) = 0;
            lVar22 = *(longlong *)(lVar33 + 0x3090);
            local_330 = &DAT_146a9cdf0;
            local_328 = 0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar22 + 0x38,local_560,&local_330);
            plVar19 = plVar15;
            if (local_560[0] != -1) {
              plVar19 = (longlong *)((longlong)local_560[0] * 0x20 + *(longlong *)(lVar22 + 0x38));
            }
            plVar26 = plVar19 + 2;
            if (plVar19 == (longlong *)0x0) {
              plVar26 = plVar15;
            }
            lVar14 = *plVar26;
            if (lVar14 == 0) {
              local_578 = local_578 | 1;
              plVar27 = plVar15;
            }
            else {
              lVar22 = *(longlong *)(lVar14 + 0x48);
              if (*(char *)(lVar22 + 0x28) == '\0') {
                FUN_1419f3850(lVar22);
              }
              plVar15 = *(longlong **)(lVar22 + 0x38);
            }
            plStack_260 = plVar15;
            if (((local_578 & 1) != 0) &&
               (local_578 = local_578 & 0xfffffffe, plVar27 != (longlong *)0x0)) {
              LOCK();
              plVar15 = plVar27 + 1;
              lVar22 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar22 == 1) {
                if ((char)plVar27[2] == '\0') {
                  if (DAT_146ab62f5 == '\0') {
                    cVar7 = FOutputDevice::CanBeUsedOnAnyThread();
                    if (cVar7 != '\0') goto LAB_141d5fa9a;
                  }
                  LOCK();
                  bVar36 = *(int *)((longlong)plVar27 + 0xc) == 0;
                  if (bVar36) {
                    *(int *)((longlong)plVar27 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar36) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,plVar27);
                  }
                }
                else {
LAB_141d5fa9a:
                  (**(code **)*plVar27)(plVar27,1);
                }
              }
            }
            FUN_141ed6ac0(local_588,&local_268,2,1);
            puVar12 = (undefined8 *)FUN_141d6a480(lVar14,local_3c8,local_588,lVar33);
            lVar22 = *(longlong *)(lVar14 + 0x48);
            uVar11 = *puVar12;
            if (*(char *)(lVar22 + 0x28) == '\0') {
              FUN_1419f3850(lVar22);
            }
            FUN_141aa9800(lVar14,local_588,*(undefined8 *)(lVar22 + 0x38),uVar11);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_3c8);
            local_2b8 = 0;
            uStack_2b0 = 0x3f80000000000000;
            FStencilingGeometryShaderParameters::Set(lVar14 + 0xc0,local_588,lVar14,&local_2b8);
            lVar22 = local_588;
            if (1 < *(int *)(local_550 + 0x2a0)) {
              puVar12 = (undefined8 *)*plVar10;
              puVar13 = puVar12 + (longlong)(int)plVar10[1] * 2;
              lVar4 = local_588;
              for (; puVar12 != puVar13; puVar12 = puVar12 + 2) {
                local_3c0 = (undefined8 *)puVar12[1];
                if (local_3c0 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_3c0 + 1) = *(int *)(local_3c0 + 1) + 1;
                  UNLOCK();
                }
                local_5a8 = &local_3c0;
                local_588 = lVar4;
                FUN_141d67520(lVar22,lVar33,*puVar12,lVar14);
                puVar32 = local_570;
                lVar4 = local_588;
              }
              puVar12 = (undefined8 *)plVar10[2];
              puVar13 = puVar12 + (longlong)(int)plVar10[3] * 2;
              lVar22 = lVar4;
              for (; puVar12 != puVar13; puVar12 = puVar12 + 2) {
                local_3b8 = (undefined8 *)puVar12[1];
                if (local_3b8 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_3b8 + 1) = *(int *)(local_3b8 + 1) + 1;
                  UNLOCK();
                }
                local_5a8 = &local_3b8;
                local_588 = lVar22;
                FUN_141d66de0(lVar4,lVar33,*puVar12,lVar14);
                puVar32 = local_570;
                lVar22 = local_588;
              }
              puVar12 = (undefined8 *)plVar10[4];
              puVar13 = puVar12 + (longlong)(int)plVar10[5] * 2;
              lVar4 = lVar22;
              for (; local_588 = lVar4, puVar12 != puVar13; puVar12 = puVar12 + 2) {
                local_3b0 = (undefined8 *)puVar12[1];
                if (local_3b0 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(local_3b0 + 1) = *(int *)(local_3b0 + 1) + 1;
                  UNLOCK();
                }
                local_5a8 = &local_3b0;
                FUN_141d67760(lVar22,lVar33,*puVar12,lVar14);
                puVar32 = local_570;
                lVar4 = local_588;
              }
              if (1 < *(int *)(local_550 + 0x2a0)) {
                puVar12 = (undefined8 *)plVar10[6];
                puVar13 = puVar12 + (longlong)(int)plVar10[7] * 2;
                for (; puVar12 != puVar13; puVar12 = puVar12 + 2) {
                  local_3a8 = (undefined8 *)puVar12[1];
                  if (local_3a8 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(local_3a8 + 1) = *(int *)(local_3a8 + 1) + 1;
                    UNLOCK();
                  }
                  local_5a8 = &local_3a8;
                  FUN_141d67180(lVar4,lVar33,*puVar12,lVar14);
                  puVar32 = local_570;
                }
              }
            }
            puVar12 = (undefined8 *)FUN_141d6a480(lVar14,&local_498,local_588,lVar33);
            lVar4 = *(longlong *)(lVar14 + 0x48);
            uVar11 = *puVar12;
            if (*(char *)(lVar4 + 0x28) == '\0') {
              FUN_1419f3850(lVar4);
            }
            lVar22 = local_588;
            FUN_141aa9800(lVar14,local_588,*(undefined8 *)(lVar4 + 0x38),uVar11);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_498);
            local_2a8 = 0;
            uStack_2a0 = 0x3f80000000000000;
            FStencilingGeometryShaderParameters::Set(lVar14 + 0xc0,lVar22,lVar14,&local_2a8);
            FUN_141d68da0(lVar33 + 0x2f60,lVar22);
            FUN_141d68da0(lVar33 + 0x2f38);
            cVar7 = FUN_141ed1020();
            if (cVar7 != '\0') {
              puVar18 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
              puVar13 = *local_4e8;
              puVar12 = puVar18 + 3;
              if ((undefined8 *)puVar32[1] < puVar12) {
                FMemStackBase::AllocateNewChunk(puVar32);
                puVar18 = (undefined8 *)(*puVar32 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar18 + 3;
              }
              *puVar32 = (ulonglong)puVar12;
              *(int *)(lVar22 + 0x14) = *(int *)(lVar22 + 0x14) + 1;
              **(undefined8 **)(lVar22 + 8) = puVar18;
              *(undefined8 **)(lVar22 + 8) = puVar18 + 1;
              puVar18[1] = 0;
              *puVar18 = &PTR_LAB_143f59490;
              puVar18[2] = puVar13;
            }
            local_580 = local_580 + 1;
            local_558 = local_558 + 1;
            param_1 = local_550;
          } while (local_580 < *(int *)(local_550 + 200));
        }
        if (1 < *(int *)(param_1 + 0x2a0)) {
          FRHICommandList::EndRenderPass(lVar22);
        }
        if (local_598 != '\0') {
          local_5a8 = (undefined8 **)CONCAT71(local_5a8._1_7_,1);
          FUN_141cdeb70(local_540,lVar22,2);
        }
      }
    }
    TArray<FViewOcclusionQueries,FDefaultAllocator>::
    ~TArray<FViewOcclusionQueries,FDefaultAllocator>(&local_510);
  }
  return;
}



// FUNCTION 141d5fe80 FUN_141d5fe80 body=2753 status=ok
// SIG undefined FUN_141d5fe80(void)

void FUN_141d5fe80(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  DWORD *pDVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  undefined8 local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  lVar9 = 0;
  plVar8 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x20) + 0x210))();
  if ((plVar8 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar8 + 0x208))(plVar8), lVar9 != 0)) {
    FUN_14254eb00(lVar9);
  }
  if (((DAT_146ac3ac6 == '\0') || (cVar3 = IsInRenderingThread(), cVar3 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)))))) {
    plVar12 = (longlong *)FUN_141d65610(local_68,0,0xff);
    lVar21 = *plVar12;
    lVar22 = plVar12[2];
    lVar13 = plVar12[1];
    lVar10 = *(longlong *)(lVar21 + 0x18);
    piVar1 = (int *)(lVar10 + 0x48);
    if (lVar10 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445370(lVar21,lVar13,(int)lVar22,1);
    if (lVar10 != 0) {
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        FGraphEvent::Recycle(lVar10);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    FUN_1425a3670();
  }
  if (((DAT_146ac3ac6 == '\0') || (cVar3 = IsInRenderingThread(), cVar3 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)))))) {
    plVar12 = (longlong *)FUN_141d65760(local_50,0,0xff);
    lVar21 = *plVar12;
    lVar22 = plVar12[2];
    lVar13 = plVar12[1];
    lVar10 = *(longlong *)(lVar21 + 0x18);
    piVar1 = (int *)(lVar10 + 0x48);
    if (lVar10 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445370(lVar21,lVar13,(int)lVar22,1);
    if (lVar10 != 0) {
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        FGraphEvent::Recycle(lVar10);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    FUN_141d78570(&DAT_146a9da00);
  }
  FUN_1428aa700(param_2,0);
  uVar5 = DAT_1464aaa8c;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x298))(plVar8);
    uVar5 = (**(code **)(*plVar8 + 0x290))(plVar8);
  }
  *(undefined4 *)(param_3 + 0x5c) = uVar5;
  lVar21 = 0x1f;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_e0);
    DAT_1464aaa94 = DAT_1464aaa94 + 1;
    QueryPerformanceCounter(&local_e8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_e8.s.LowPart - local_e0._0_4_);
  }
  else {
    pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar12 = TlsGetValue(*pDVar14);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
      }
      TlsSetValue(*pDVar14,plVar12);
    }
    plVar16 = (longlong *)plVar12[1];
    if (plVar16 == (longlong *)0x0) {
      if (*plVar12 == 0) {
        lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
        plVar12[1] = lVar13;
        if (lVar13 == 0) {
          puVar15 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar12[1] = (longlong)puVar15;
          lVar13 = 0x1f;
          do {
            puVar2 = puVar15 + 0x20;
            *puVar15 = puVar2;
            lVar13 = lVar13 + -1;
            puVar15 = puVar2;
          } while (lVar13 != 0);
          *puVar2 = 0;
        }
        plVar16 = (longlong *)plVar12[1];
        *(undefined4 *)(plVar12 + 2) = 0x20;
        iVar6 = 0x20;
      }
      else {
        plVar12[1] = *plVar12;
        *plVar12 = 0;
        iVar6 = 0x20;
        plVar16 = (longlong *)plVar12[1];
        *(undefined4 *)(plVar12 + 2) = 0x20;
      }
    }
    else {
      iVar6 = (int)plVar12[2];
    }
    plVar12[1] = *plVar16;
    *(int *)(plVar12 + 2) = iVar6 + -1;
    *(undefined4 *)(plVar16 + 1) = 0xff;
    *plVar16 = (longlong)&PTR_FUN_143f3edd8;
    local_90 = 0;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_144e51420;
    *(undefined1 *)((longlong)plVar16 + 0x11) = 0;
    plVar16[3] = 0;
    local_d8 = 0;
    FUN_140445370(plVar16,0,0xff,1);
  }
  uVar18 = 0;
  uVar20 = uVar18;
  if (0 < *(int *)(param_3 + 0x88)) {
    do {
      plVar12 = *(longlong **)(uVar18 + *(longlong *)(param_3 + 0x80));
      (**(code **)(*plVar12 + 0x28))(plVar12,param_3);
      uVar19 = (int)uVar20 + 1;
      uVar18 = uVar18 + 0x10;
      uVar20 = (ulonglong)uVar19;
    } while ((int)uVar19 < *(int *)(param_3 + 0x88));
  }
  lVar13 = DAT_146a9d180;
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar10 = 4;
  }
  else {
    lVar10 = 0;
  }
  iVar6 = *(int *)(lVar13 + lVar10);
  if ((0 < iVar6) && (iVar7 = (**(code **)(*plVar8 + 0x290))(plVar8), iVar7 <= iVar6)) {
    return;
  }
  if (lVar9 != 0) {
    FUN_1425505a0(lVar9,(int)plVar8[0xbda],*(undefined4 *)((longlong)plVar8 + 0x5ed4));
  }
  uVar11 = *(undefined8 *)(param_2 + 0x60);
  if (*(int *)(*(longlong *)(param_3 + 0x20) + 8) < 2) {
    lVar9 = operator_new(0x2e8);
    if (lVar9 != 0) {
      lVar9 = FUN_141b8b910(lVar9,param_3,uVar11);
      goto LAB_141d602f0;
    }
  }
  else {
    lVar9 = operator_new(0x300);
    if (lVar9 != 0) {
      lVar9 = FUN_141afa220(lVar9,param_3,uVar11);
      goto LAB_141d602f0;
    }
  }
  lVar9 = 0;
LAB_141d602f0:
  FUN_141d2e020(plVar8,*(undefined1 *)(lVar9 + 0x7c));
  lVar13 = DAT_146a9d128;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar10 = 4;
  }
  else {
    lVar10 = 0;
  }
  lVar22 = 4;
  iVar6 = *(int *)(lVar13 + lVar10);
  if (iVar6 == 0) {
    FUN_14239bc30(plVar8);
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_d0 = 0;
    local_c8[0] = lVar9;
    FUN_141d66710(local_c8,2,&local_d0);
  }
  else {
    pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar12 = TlsGetValue(*pDVar14);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
      }
      TlsSetValue(*pDVar14,plVar12);
    }
    plVar16 = (longlong *)plVar12[1];
    if (plVar16 == (longlong *)0x0) {
      if (*plVar12 == 0) {
        lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
        plVar12[1] = lVar13;
        if (lVar13 == 0) {
          puVar15 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar12[1] = (longlong)puVar15;
          lVar13 = 0x1f;
          do {
            puVar2 = puVar15 + 0x20;
            *puVar15 = puVar2;
            lVar13 = lVar13 + -1;
            puVar15 = puVar2;
          } while (lVar13 != 0);
          *puVar2 = 0;
        }
        plVar16 = (longlong *)plVar12[1];
        *(undefined4 *)(plVar12 + 2) = 0x20;
        iVar7 = 0x20;
      }
      else {
        plVar12[1] = *plVar12;
        *plVar12 = 0;
        iVar7 = 0x20;
        plVar16 = (longlong *)plVar12[1];
        *(undefined4 *)(plVar12 + 2) = 0x20;
      }
    }
    else {
      iVar7 = (int)plVar12[2];
    }
    plVar12[1] = *plVar16;
    *(int *)(plVar12 + 2) = iVar7 + -1;
    *(undefined4 *)(plVar16 + 1) = 0xff;
    *plVar16 = (longlong)&PTR_FUN_143f3edd8;
    local_88 = 0;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_144e51430;
    *(undefined1 *)(plVar16 + 3) = 0;
    plVar16[4] = 0;
    plVar16[2] = lVar9;
    lVar13 = plVar16[4];
    local_c8[1] = 0;
    piVar1 = (int *)(lVar13 + 0x48);
    if (lVar13 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(plVar16,0,0xff,1);
    if (lVar13 != 0) {
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FGraphEvent::Recycle(lVar13);
      }
    }
  }
  iVar7 = 0;
  if (0 < *(int *)(*(longlong *)(lVar9 + 8) + 0x1200)) {
    lVar13 = 0;
    do {
      plVar12 = *(longlong **)(lVar9 + 8);
      (**(code **)(*plVar12 + 0xd8))(plVar12,*(undefined8 *)(plVar12[0x23f] + lVar13),lVar9);
      lVar13 = lVar13 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(longlong *)(lVar9 + 8) + 0x1200));
  }
  *(undefined4 *)(lVar9 + 0xa0) = 0;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_b0);
    FUN_141d71020(uVar11,lVar9);
    FlushPendingDeleteRHIResources_RenderThread();
    QueryPerformanceCounter(&local_b8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_b8.s.LowPart - local_b0._0_4_);
  }
  else {
    pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar12 = TlsGetValue(*pDVar14);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
      }
      TlsSetValue(*pDVar14,plVar12);
    }
    plVar16 = (longlong *)plVar12[1];
    if (plVar16 == (longlong *)0x0) {
      if (*plVar12 == 0) {
        lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
        plVar12[1] = lVar13;
        if (lVar13 == 0) {
          puVar15 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar12[1] = (longlong)puVar15;
          lVar13 = 0x1f;
          do {
            puVar2 = puVar15 + 0x20;
            *puVar15 = puVar2;
            lVar13 = lVar13 + -1;
            puVar15 = puVar2;
          } while (lVar13 != 0);
          *puVar2 = 0;
        }
        plVar16 = (longlong *)plVar12[1];
        *(undefined4 *)(plVar12 + 2) = 0x20;
        iVar7 = 0x20;
      }
      else {
        plVar12[1] = *plVar12;
        *plVar12 = 0;
        iVar7 = 0x20;
        plVar16 = (longlong *)plVar12[1];
        *(undefined4 *)(plVar12 + 2) = 0x20;
      }
    }
    else {
      iVar7 = (int)plVar12[2];
    }
    plVar12[1] = *plVar16;
    *(int *)(plVar12 + 2) = iVar7 + -1;
    *(undefined4 *)(plVar16 + 1) = 0xff;
    *plVar16 = (longlong)&PTR_FUN_143f3edd8;
    local_80 = 0;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_144e51440;
    *(undefined1 *)(plVar16 + 3) = 0;
    plVar16[4] = 0;
    plVar16[2] = lVar9;
    lVar9 = plVar16[4];
    local_a8 = 0;
    piVar1 = (int *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(plVar16,0,0xff,1);
    if (lVar9 != 0) {
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FGraphEvent::Recycle(lVar9);
      }
    }
  }
  *(undefined1 *)((longlong)plVar8 + 0x600c) = 0;
  if (iVar6 == 1) {
    FUN_14239bc30(plVar8);
  }
  lVar9 = DAT_146a9d198;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar22 = 0;
  }
  plVar12 = (longlong *)0x0;
  iVar6 = *(int *)(lVar9 + lVar22);
  iVar7 = (**(code **)(*plVar8 + 0x290))(plVar8);
  if ((0 < iVar6) && (iVar7 <= iVar6)) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_98);
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
      QueryPerformanceCounter(&local_a0);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_a0.s.LowPart - local_98._0_4_);
    }
    else {
      pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar14);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar12 = plVar8;
        }
        TlsSetValue(*pDVar14,plVar12);
        plVar8 = plVar12;
      }
      plVar12 = (longlong *)plVar8[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar8;
        if (plVar12 == (longlong *)0x0) {
          lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
          plVar8[1] = lVar9;
          if (lVar9 == 0) {
            puVar15 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar15;
            do {
              puVar2 = puVar15 + 0x20;
              *puVar15 = puVar2;
              lVar21 = lVar21 + -1;
              puVar15 = puVar2;
            } while (lVar21 != 0);
            *puVar2 = 0;
          }
          plVar12 = (longlong *)plVar8[1];
          iVar17 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar17 = 0x20;
          plVar8[1] = (longlong)plVar12;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar17 = (int)plVar8[2];
      }
      plVar8[1] = *plVar12;
      *(int *)(plVar8 + 2) = iVar17 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      local_78 = 0;
      local_70 = 0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_144e51450;
      *(undefined1 *)(plVar12 + 3) = 0;
      plVar12[4] = 0;
      *(int *)(plVar12 + 2) = iVar6;
      *(int *)((longlong)plVar12 + 0x14) = iVar7;
      lVar9 = plVar12[4];
      piVar1 = (int *)(lVar9 + 0x48);
      if (lVar9 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_140445100(plVar12,0,0xff,1);
      if (lVar9 != 0) {
        LOCK();
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FGraphEvent::Recycle(lVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 141d60950 FUN_141d60950 body=77 status=ok
// SIG undefined FUN_141d60950(void)

void FUN_141d60950(void)

{
  if (DAT_1464c2fe0 != 0) {
    FUN_141d56150();
    AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
    return;
  }
  FUN_141d609b0();
  return;
}



// FUNCTION 141d609a0 thunk_FUN_141d55e00 body=5 status=ok
// SIG undefined thunk_FUN_141d55e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_141d55e00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auStack_128 [32];
  longlong *plStack_108;
  longlong *plStack_100;
  ulonglong *puStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  ulonglong auStack_60 [5];
  
  auStack_60[4] = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_2 + 0x2f88);
  lVar8 = *(longlong *)(param_2 + 0x3090);
  puVar19 = (undefined8 *)0x0;
  uVar2 = *(undefined8 *)(param_2 + 0x2fd0);
  lVar3 = *(longlong *)(lVar1 + 8);
  puStack_80 = &DAT_146a9e940;
  iVar13 = *(int *)(lVar3 + 0x34);
  uStack_78 = 0;
  uStack_d8 = uVar2;
  uStack_b0 = param_1;
  lStack_98 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&iStack_c0,&puStack_80);
  puVar10 = puVar19;
  if (iStack_c0 != -1) {
    puVar10 = (undefined8 *)((longlong)iStack_c0 * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  uStack_68 = 0;
  puVar14 = puVar10 + 2;
  if (puVar10 == (undefined8 *)0x0) {
    puVar14 = puVar19;
  }
  puStack_70 = &DAT_146a9ea90;
  uVar4 = *puVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&iStack_bc,&puStack_70);
  puVar10 = puVar19;
  if (iStack_bc != -1) {
    puVar10 = (undefined8 *)((longlong)iStack_bc * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  puVar14 = puVar10 + 2;
  if (puVar10 == (undefined8 *)0x0) {
    puVar14 = puVar19;
  }
  uStack_b8 = iVar13 + 3U >> 2;
  uVar18 = 1;
  uVar5 = *puVar14;
  uStack_b4 = iVar13 + (1 - uStack_b8) * 4;
  uStack_e8 = uStack_b4;
  if (1 < uStack_b8) {
    uStack_e8 = 4;
  }
  uVar11 = 0;
  if (uStack_e8 != 0) {
    puVar15 = auStack_60;
    lVar8 = *(longlong *)(lVar1 + 0x28);
    if (*(longlong *)(lVar1 + 0x28) == 0) {
      lVar8 = lVar1 + 0x20;
    }
    do {
      lVar7 = (longlong)(int)uVar11;
      uVar11 = uVar11 + 1;
      *puVar15 = *(ulonglong *)(lVar8 + lVar7 * 8);
      puVar15 = puVar15 + 1;
    } while (uVar11 < uStack_e8);
  }
  iStack_cc = uStack_d8._4_4_;
  iStack_d0 = (int)uVar2;
  uStack_c8 = 1;
  lVar8 = FSceneRenderTargets::Get(uStack_b0);
  lVar7 = (**(code **)(**(longlong **)(*(longlong *)(lVar8 + 0x60) + 8) + 8))();
  lVar8 = lStack_98;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  UNLOCK();
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  puStack_f8 = auStack_60;
  uStack_f0 = 0;
  plStack_100 = &lStack_a8;
  plStack_108 = &lStack_a0;
  uStack_d8 = lVar7;
  lStack_a8 = lVar3;
  lStack_a0 = lVar7;
  FUN_141d56930(uVar4,uStack_b0,lStack_98,&iStack_d0);
  uVar11 = uStack_b8;
  if (1 < uStack_b8) {
    iVar13 = 4;
    lStack_90 = lVar3;
    lStack_88 = lVar7;
    do {
      iStack_d0 = iStack_d0 >> 4;
      iStack_cc = iStack_cc >> 4;
      uStack_e8 = uStack_b4;
      if (uVar18 < uVar11 - 1) {
        uStack_e8 = 4;
      }
      lVar7 = *(longlong *)(lVar1 + 0x28);
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        lVar7 = lVar1 + 0x20;
      }
      uVar17 = uStack_e8 - 1;
      uVar16 = 0;
      uStack_f0 = *(undefined8 *)(lVar7 + -8 + (longlong)iVar13 * 8);
      do {
        uVar6 = (uint)uVar16;
        uVar12 = uVar6 + 1;
        uVar9 = uVar17;
        if (uVar6 <= uVar17) {
          uVar9 = uVar6;
        }
        auStack_60[uVar16] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
        uVar9 = uVar17;
        if (uVar12 <= uVar17) {
          uVar9 = uVar12;
        }
        auStack_60[uVar12] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
        uVar12 = uVar6 + 2;
        uVar9 = uVar17;
        if (uVar12 <= uVar17) {
          uVar9 = uVar12;
        }
        auStack_60[uVar12] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
        uVar12 = uVar6 + 3;
        uVar9 = uVar17;
        if (uVar12 <= uVar17) {
          uVar9 = uVar12;
        }
        uVar16 = (ulonglong)(uVar6 + 4);
        auStack_60[uVar12] = *(ulonglong *)(lVar7 + (longlong)(int)(uVar9 + iVar13) * 8);
      } while (uVar6 + 4 < 4);
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      if (uStack_d8 != 0) {
        LOCK();
        *(int *)(uStack_d8 + 8) = *(int *)(uStack_d8 + 8) + 1;
        UNLOCK();
      }
      puStack_f8 = auStack_60;
      plStack_100 = &lStack_90;
      plStack_108 = &lStack_88;
      FUN_141d564e0(uVar5,uStack_b0,lVar8,&iStack_d0);
      uVar18 = uVar18 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar18 < uVar11);
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_d8);
  return;
}



// FUNCTION 141d609b0 FUN_141d609b0 body=5146 status=ok
// SIG undefined FUN_141d609b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d609b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  wchar_t wVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_5b8 [32];
  undefined *local_598;
  float local_590;
  float local_588;
  float local_580;
  float local_578;
  longlong local_570;
  longlong local_568;
  longlong local_560;
  undefined4 local_558;
  undefined4 local_550;
  byte local_548;
  uint local_544;
  uint local_540;
  undefined8 local_538;
  int local_530;
  int local_52c;
  int local_528;
  undefined8 local_520;
  undefined1 *local_518;
  uint local_510;
  uint local_50c;
  longlong local_508;
  undefined8 local_500;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  longlong *local_4e8;
  float local_4e0;
  float local_4dc;
  longlong *local_4d8;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  undefined8 local_4a8;
  undefined8 local_4a0;
  longlong local_498;
  longlong local_490;
  longlong local_488;
  undefined8 local_480;
  undefined *local_478;
  undefined4 local_470;
  undefined *local_468;
  undefined4 local_460;
  undefined *local_458;
  undefined4 local_450;
  undefined *local_448;
  undefined4 local_440;
  undefined8 local_438;
  longlong *plStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  int local_3e4 [16];
  undefined1 auStack_3a4 [4];
  undefined8 local_3a0;
  undefined4 local_398;
  ulonglong local_394;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  int local_364;
  int local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined2 local_354;
  undefined2 local_352;
  undefined2 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_340;
  wchar_t *local_338;
  undefined2 local_330;
  longlong local_328 [2];
  undefined4 local_318;
  byte local_314;
  undefined1 local_313;
  undefined1 local_310 [168];
  undefined8 local_268;
  undefined1 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [8];
  longlong local_1c8 [2];
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined1 local_1b0 [168];
  undefined8 local_108;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  local_540 = 0;
  iVar23 = *(int *)(param_2 + 0x1aa8);
  iVar24 = *(int *)(param_2 + 0x1aa0);
  local_544 = 0;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_508 = param_2;
  if ((*(int *)(lVar9 + 0x38) < DAT_1468509dc) &&
     (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  iVar4 = DAT_1468509dc;
  fVar27 = _guard_xfg_dispatch_icall_nop((float)(iVar23 - iVar24));
  iVar23 = *(int *)(param_2 + 0x1aac);
  uVar6 = ~((int)ROUND(-0.5 - (fVar27 * DAT_1468509d8 + fVar27 * DAT_1468509d8)) >> 1);
  uVar22 = 1;
  if (0 < (int)uVar6) {
    uVar22 = uVar6;
  }
  iVar24 = *(int *)(param_2 + 0x1aa4);
  if ((*(int *)(lVar9 + 0x38) < iVar4) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)
     ) {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  fVar27 = _guard_xfg_dispatch_icall_nop((float)(iVar23 - iVar24));
  plVar16 = (longlong *)(param_2 + 0x2f88);
  local_34c = 0x15;
  local_588 = (float)CONCAT31(local_588._1_3_,1);
  local_590 = (float)CONCAT31(local_590._1_3_,1);
  local_358 = 1;
  local_350 = 1;
  local_330 = 1;
  local_344 = 0x2000009;
  uVar7 = ~((int)ROUND(-0.5 - (fVar27 * DAT_1468509d8 + fVar27 * DAT_1468509d8)) >> 1);
  uVar6 = 1;
  if (0 < (int)uVar7) {
    uVar6 = uVar7;
  }
  local_50c = uVar6;
  if ((int)uVar6 <= (int)uVar22) {
    local_50c = uVar22;
  }
  iVar23 = 1 << ((byte)uVar22 & 0x1f);
  *(int *)(param_2 + 0x2fd0) = iVar23;
  iVar24 = 1 << ((byte)uVar6 & 0x1f);
  plVar19 = (longlong *)0x0;
  *(int *)(param_2 + 0x2fd4) = iVar24;
  local_368 = DAT_146ab6938;
  local_338 = L"UnknownTexture2D";
  local_348 = DAT_146a9da18;
  local_352 = (undefined2)local_50c;
  local_598 = &DAT_144e4b2f8;
  local_520 = CONCAT44(iVar24,iVar23);
  local_378 = _DAT_146ab6928;
  uStack_370 = uRam0000000146ab6930;
  local_35c = 0;
  local_354 = 0;
  local_340 = 0;
  local_4e8 = plVar16;
  local_364 = iVar23;
  local_360 = iVar24;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_378,plVar16);
  plVar16 = (longlong *)(*plVar16 + 8);
  local_438 = 0;
  plStack_430 = (longlong *)0x0;
  local_428 = 0;
  uStack_420 = 0;
  local_418 = (longlong *)0x0;
  uStack_410 = 0;
  local_3f0 = 0;
  local_3ec = 0x26;
  local_3e4[0] = 0;
  local_3e4[1] = 0;
  local_3e4[2] = 0;
  local_3e4[3] = 0;
  local_3e4[4] = 0;
  local_3e4[5] = 0;
  local_3e4[6] = 0;
  local_3e4[7] = 0;
  local_3e4[8] = 0;
  local_3e4[9] = 0;
  local_3e4[10] = 0;
  local_3e4[0xb] = 0;
  local_3e4[0xc] = 0;
  local_3e4[0xd] = 0;
  local_3e4[0xe] = 0;
  stack0xfffffffffffffc58 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_394 = 0;
  local_38c = 0;
  local_384 = 0;
  local_4d8 = plVar16;
  local_408 = FUN_1404a0ce0();
  local_400 = FUN_140985530();
  local_3f8 = FUN_1409853f0();
  local_488 = *plVar16;
  local_1c8[0] = *plVar16;
  local_e8 = 0xffffffffffffffff;
  uStack_e0 = 0xffffffffffffffff;
  local_d8 = 0xffffffffffffffff;
  uStack_d0 = 0xffffffff;
  local_f0 = 0;
  local_ec = 0xffffffff;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_1c8[1] = 0;
  local_1b8 = 0xffffffff;
  local_1b4 = 0x500;
  local_108 = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_70 = 1 < *(uint *)(local_1c8[0] + 0x38);
  _guard_xfg_dispatch_icall_nop(local_1b0,0,0xa8);
  puVar20 = (ulonglong *)(param_1 + 0x30);
  uVar17 = *(longlong *)(param_1 + 0x30) + 1U & 0xfffffffffffffffe;
  uVar10 = uVar17 + 0x1c;
  if (*(ulonglong *)(param_1 + 0x38) < uVar10) {
    FMemStackBase::AllocateNewChunk(puVar20,0x1e);
    uVar17 = *puVar20 + 1 & 0xfffffffffffffffe;
    uVar10 = uVar17 + 0x1c;
  }
  pwVar13 = L"HZB_SetupMip0";
  *puVar20 = uVar10;
  do {
    wVar2 = *pwVar13;
    *(wchar_t *)((uVar17 - 0x144e4b6f8) + (longlong)pwVar13) = wVar2;
    pwVar13 = pwVar13 + 1;
  } while (wVar2 != L'\0');
  uVar14 = *puVar20 + 7 & 0xfffffffffffffff8;
  uVar10 = uVar14 + 0x178;
  if (*(ulonglong *)(param_1 + 0x38) < uVar10) {
    FMemStackBase::AllocateNewChunk(puVar20,0x180);
    uVar14 = *puVar20 + 7 & 0xfffffffffffffff8;
    uVar10 = uVar14 + 0x178;
  }
  *puVar20 = uVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(ulonglong **)(param_1 + 8) = uVar14;
  *(ulonglong *)(param_1 + 8) = uVar14 + 8;
  FUN_140499730(uVar14,local_1c8,uVar17);
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_14049c2a0(param_1,local_1c8);
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_14049afe0(param_1,&local_438);
  local_3ec = local_3ec & 0xffffffff00000000;
  local_478 = &DAT_146a51f90;
  local_470 = 0;
  lVar9 = *(longlong *)(local_508 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_4f8,&local_478);
  plVar16 = plVar19;
  if (local_4f8 != -1) {
    plVar16 = (longlong *)((longlong)local_4f8 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  local_460 = 0;
  plVar11 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar11 = plVar19;
  }
  local_468 = &DAT_146a9e6a0;
  lVar25 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_4f4,&local_468);
  plVar16 = plVar19;
  if (local_4f4 != -1) {
    plVar16 = (longlong *)((longlong)local_4f4 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  plVar11 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar11 = plVar19;
  }
  lVar9 = *plVar11;
  local_438 = DAT_1464c2720;
  if (lVar25 == 0) {
    local_480 = 0;
    local_544 = 1;
  }
  else {
    lVar8 = *(longlong *)(lVar25 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar19 = *(longlong **)(lVar8 + 0x38);
  }
  plVar16 = (longlong *)0x0;
  plStack_430 = plVar19;
  if ((local_544 & 1) != 0) {
    local_544 = local_544 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_480);
  }
  if (lVar9 == 0) {
    local_544 = local_544 | 2;
    local_4a8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plVar16 = *(longlong **)(lVar8 + 0x40);
  }
  local_418 = plVar16;
  if ((local_544 & 2) != 0) {
    local_544 = local_544 & 0xfffffffd;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4a8);
  }
  local_3ec = local_3ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_438,2,1);
  lVar8 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar3 = *(undefined8 *)(lVar8 + 0x40);
  local_4a0 = uVar3;
  FUN_141aa9590(lVar9,param_1,uVar3,*(undefined8 *)(local_508 + 0x20));
  lVar8 = FSceneRenderTargets::Get(param_1);
  local_4e0 = (float)(int)*(undefined8 *)(lVar8 + 0x378);
  local_4c8 = 1.0 / local_4e0;
  local_4dc = (float)(int)((ulonglong)*(undefined8 *)(lVar8 + 0x378) >> 0x20);
  local_4c4 = 1.0 / local_4dc;
  local_4b0 = (float)*(int *)(local_508 + 0x1aa0) / local_4e0;
  local_4b8 = (float)(*(int *)(local_508 + 0x2fd0) * 2) / local_4e0;
  local_598 = (undefined *)((ulonglong)local_598 & 0xffffffff00000000);
  local_4e0 = ((float)*(int *)(local_508 + 0x1aa8) - 0.5) / local_4e0;
  local_4b4 = (float)(*(int *)(local_508 + 0x2fd4) * 2) / local_4dc;
  local_4ac = (float)*(int *)(local_508 + 0x1aa4) / local_4dc;
  local_4dc = ((float)*(int *)(local_508 + 0x1aac) - 0.5) / local_4dc;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar3,lVar9 + 0xc0,&local_4c8)
  ;
  local_598 = (undefined *)((ulonglong)local_598 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_1,uVar3,lVar9 + 0xc6,&local_4b8);
  local_598 = (undefined *)((ulonglong)local_598 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar3,lVar9 + 0xcc,&local_4e0)
  ;
  lVar8 = local_508;
  local_598 = (undefined *)CONCAT44(local_598._4_4_,1);
  FUN_141aa6800(lVar9 + 0xd4,param_1,&local_4a0);
  puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar15 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(puVar20);
    puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
  }
  *puVar20 = (ulonglong)puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59420;
  puVar15[2] = 0;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(int *)((longlong)puVar15 + 0x1c) = iVar23;
  *(int *)(puVar15 + 4) = iVar24;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  lVar9 = FSceneRenderTargets::Get(param_1);
  lVar18 = local_520;
  local_568 = *(longlong *)(lVar9 + 0x378);
  local_550 = 1;
  local_558 = 1;
  local_570 = local_520;
  local_578 = (float)(*(int *)(lVar8 + 0x1aac) - *(int *)(lVar8 + 0x1aa4));
  local_588 = (float)*(int *)(lVar8 + 0x1aa4);
  local_580 = (float)(*(int *)(lVar8 + 0x1aa8) - *(int *)(lVar8 + 0x1aa0));
  local_590 = (float)*(int *)(lVar8 + 0x1aa0);
  local_598 = (undefined *)CONCAT44(local_598._4_4_,(float)iVar24);
  local_560 = lVar25;
  DrawRectangle(param_1);
  FRHICommandList::EndRenderPass(param_1);
  FRHIRenderPassInfo::~FRHIRenderPassInfo(local_1c8);
  lVar9 = *(longlong *)(lVar8 + 0x3090);
  local_500 = lVar18;
  local_538._4_4_ = (uint)((ulonglong)lVar18 >> 0x20);
  local_450 = 0;
  local_538 = CONCAT44((int)local_538._4_4_ / 2,iVar23 / 2);
  local_458 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_4f0,&local_458);
  plVar16 = (longlong *)0x0;
  if (local_4f0 != -1) {
    plVar16 = (longlong *)((longlong)local_4f0 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  local_440 = 0;
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = (longlong *)0x0;
  }
  local_448 = &DAT_146a9e7f0;
  lVar25 = *plVar19;
  local_490 = lVar25;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_4ec,&local_448);
  if (local_4ec == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)local_4ec * 0x20 + *(longlong *)(lVar9 + 0x38);
  }
  plVar16 = (longlong *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    plVar16 = (longlong *)0x0;
  }
  local_548 = 1;
  local_498 = *plVar16;
  if (1 < local_50c) {
    local_52c = local_500._4_4_;
    local_530 = (int)local_500;
    plVar16 = local_4e8;
    plVar19 = local_4e8;
    iVar23 = (int)local_538;
    uVar22 = local_538._4_4_;
    do {
      lVar9 = local_498;
      local_248 = 0xffffffffffffffff;
      uStack_240 = 0xffffffffffffffff;
      local_528 = 1;
      if (0 < iVar23) {
        local_528 = iVar23;
      }
      local_238 = 0xffffffffffffffff;
      uStack_230 = 0xffffffff;
      local_510 = 1;
      if (0 < (int)uVar22) {
        local_510 = uVar22;
      }
      local_250 = 0;
      local_24c = 0xffffffff;
      local_228 = 0;
      local_220 = 0;
      local_328[0] = *local_4d8;
      local_218 = 0xffffffff;
      local_214 = 0;
      local_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      local_328[1] = 0;
      local_318 = 0xffffffff;
      local_313 = 5;
      local_268 = 0;
      local_258 = 0;
      local_254 = 0;
      local_1d0[0] = 1 < *(uint *)(local_328[0] + 0x38);
      local_538 = CONCAT44(local_510,local_528);
      local_314 = local_548;
      _guard_xfg_dispatch_icall_nop(local_310,0,0xa8);
      local_220._0_6_ = CONCAT15(1,(undefined5)local_220);
      uVar17 = *(longlong *)(param_1 + 0x30) + 1U & 0xfffffffffffffffe;
      uVar10 = uVar17 + 0x20;
      if (*(ulonglong *)(param_1 + 0x38) < uVar10) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x22);
        uVar17 = *(longlong *)(param_1 + 0x30) + 1U & 0xfffffffffffffffe;
        uVar10 = uVar17 + 0x20;
      }
      puVar20 = (ulonglong *)(param_1 + 0x30);
      *puVar20 = uVar10;
      pwVar13 = L"HZB_SetupSubMip";
      do {
        wVar2 = *pwVar13;
        *(wchar_t *)((uVar17 - 0x144e4b398) + (longlong)pwVar13) = wVar2;
        pwVar13 = pwVar13 + 1;
      } while (wVar2 != L'\0');
      uVar14 = *puVar20 + 7 & 0xfffffffffffffff8;
      uVar10 = uVar14 + 0x178;
      if (*(ulonglong *)(param_1 + 0x38) < uVar10) {
        FMemStackBase::AllocateNewChunk(puVar20,0x180);
        uVar14 = *(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8;
        uVar10 = uVar14 + 0x178;
      }
      *(ulonglong *)(param_1 + 0x30) = uVar10;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(ulonglong **)(param_1 + 8) = uVar14;
      *(ulonglong *)(param_1 + 8) = uVar14 + 8;
      FUN_140499730(uVar14,local_328,uVar17);
      *(undefined1 *)(param_1 + 0x1ac) = 1;
      FUN_14049c2a0(param_1,local_328);
      uVar22 = *(uint *)(param_1 + 0x98);
      plVar11 = (longlong *)0x0;
      *(undefined1 *)(param_1 + 0x1ac) = 1;
      iVar23 = 0;
      plVar21 = plVar11;
      if (uVar22 != 0) {
        do {
          lVar8 = *(longlong *)(param_1 + 0xa0 + (longlong)plVar21 * 0x18);
          if (lVar8 == 0) {
            local_3e4[(longlong)plVar21] = 0;
          }
          else {
            local_3e4[(longlong)plVar21] = *(int *)(lVar8 + 0x3c);
            local_3e4[(longlong)(plVar21 + 1)] = *(int *)(lVar8 + 0x40);
          }
          auStack_3a4[(longlong)plVar21] =
               *(undefined1 *)(param_1 + 0xb0 + (longlong)plVar21 * 0x18);
          *(undefined1 *)((longlong)&local_3a0 + 4 + (longlong)plVar21) =
               *(undefined1 *)(param_1 + 0xb1 + (longlong)plVar21 * 0x18);
          if (local_3e4[(longlong)plVar21] != 0) {
            local_384 = CONCAT22(local_384._2_2_,*(undefined2 *)(lVar8 + 0x38));
          }
          uVar6 = (int)plVar21 + 1;
          plVar21 = (longlong *)(ulonglong)uVar6;
        } while (uVar6 < uVar22);
      }
      lVar8 = *(longlong *)(param_1 + 0x160);
      if (lVar8 == 0) {
        local_394 = local_394 & 0xffffffff00000000;
      }
      else {
        iVar23 = *(int *)(lVar8 + 0x3c);
        local_394 = *(ulonglong *)(lVar8 + 0x3c);
      }
      local_38c = *(undefined8 *)(param_1 + 0x168);
      if (iVar23 != 0) {
        local_384 = CONCAT22(local_384._2_2_,*(undefined2 *)(lVar8 + 0x38));
      }
      local_438 = DAT_1464c2720;
      local_3ec._4_4_ = uVar22;
      if (lVar25 == 0) {
        local_544 = local_544 | 4;
        plVar19 = plVar11;
      }
      else {
        lVar8 = *(longlong *)(lVar25 + 0x48);
        if (*(char *)(lVar8 + 0x28) == '\0') {
          FUN_1419f3850(lVar8);
        }
        plVar11 = *(longlong **)(lVar8 + 0x38);
      }
      uVar22 = local_544;
      plStack_430 = plVar11;
      if (((local_544 & 4) != 0) &&
         (uVar22 = local_544 & 0xfffffffb, local_544 = uVar22, plVar19 != (longlong *)0x0)) {
        LOCK();
        plVar11 = plVar19 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          if (((char)plVar19[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar26 = *(int *)((longlong)plVar19 + 0xc) == 0;
            if (bVar26) {
              *(int *)((longlong)plVar19 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar26) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar6 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(longlong **)(lVar8 + 8) = plVar19;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar19)(plVar19,1);
          }
        }
      }
      if (lVar9 == 0) {
        local_544 = uVar22 | 8;
        local_418 = (longlong *)0x0;
        plVar16 = local_418;
      }
      else {
        lVar8 = *(longlong *)(lVar9 + 0x48);
        if (*(char *)(lVar8 + 0x28) == '\0') {
          FUN_1419f3850(lVar8);
        }
        local_418 = *(longlong **)(lVar8 + 0x40);
      }
      if (((local_544 & 8) != 0) && (local_544 = local_544 & 0xfffffff7, plVar16 != (longlong *)0x0)
         ) {
        LOCK();
        plVar11 = plVar16 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          if (((char)plVar16[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar26 = *(int *)((longlong)plVar16 + 0xc) == 0;
            if (bVar26) {
              *(int *)((longlong)plVar16 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar26) {
              uVar22 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar22 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (&DAT_1468a81f8)[uVar22 >> 0xe] + (ulonglong)(uVar22 & 0x3fff) * 0x18;
              }
              *(longlong **)(lVar8 + 8) = plVar16;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar16)(plVar16,1);
          }
        }
      }
      local_3ec = (ulonglong)local_3ec._4_4_ << 0x20;
      FUN_141ed6ac0(param_1,&local_438,2,1);
      lVar8 = *(longlong *)(lVar9 + 0x48);
      local_518 = *(undefined1 **)(local_4d8[6] + -8 + (ulonglong)local_548 * 8);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      uVar3 = *(undefined8 *)(lVar8 + 0x40);
      local_520 = uVar3;
      FUN_141aa9590(lVar9,param_1,uVar3,*(undefined8 *)(local_508 + 0x20));
      local_598 = (undefined *)((ulonglong)local_598 & 0xffffffff00000000);
      local_4d0 = 1.0 / (float)local_530;
      local_4cc = 1.0 / (float)local_52c;
      SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_1,uVar3,lVar9 + 0xc0);
      puVar20 = (ulonglong *)(param_1 + 0x30);
      if (*(short *)(lVar9 + 0xe6) != 0) {
        local_540 = (uint)*(ushort *)(lVar9 + 0xe4);
        puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(puVar20);
          puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *puVar20 = (ulonglong)puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar15;
        *(undefined8 **)(param_1 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144d8e600;
        puVar15[2] = local_520;
        *(uint *)(puVar15 + 3) = local_540;
        puVar15[4] = local_518;
      }
      local_518 = (undefined1 *)FUN_1404a0e20();
      if (*(short *)(lVar9 + 0xea) != 0) {
        puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        local_540 = (uint)*(ushort *)(lVar9 + 0xe8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(puVar20,0x30);
          puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *puVar20 = (ulonglong)puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar15;
        *(undefined8 **)(param_1 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_143f59c70;
        puVar15[2] = local_520;
        *(uint *)(puVar15 + 3) = local_540;
        puVar15[4] = local_518;
      }
      puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar15 + 5;
      if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(puVar20);
        puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
      }
      *puVar20 = (ulonglong)puVar12;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar15;
      *(undefined8 **)(param_1 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_143f59420;
      puVar15[2] = 0;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(uint *)(puVar15 + 4) = local_510;
      local_550 = 1;
      local_558 = 1;
      local_580 = (float)local_530;
      *(int *)((longlong)puVar15 + 0x1c) = local_528;
      *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
      local_570 = local_538;
      local_578 = (float)local_52c;
      local_588 = 0.0;
      local_590 = 0.0;
      local_598 = (undefined *)CONCAT44(local_598._4_4_,(float)(int)local_510);
      local_568 = lVar18;
      local_560 = lVar25;
      DrawRectangle(param_1);
      local_530 = local_530 / 2;
      puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
      local_52c = local_52c / 2;
      local_500 = CONCAT44(local_52c,local_530);
      local_528 = local_528 / 2;
      puVar12 = puVar15 + 2;
      local_540 = (int)local_510 / 2;
      if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(puVar20,0x18);
        puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar15 + 2;
      }
      *puVar20 = (ulonglong)puVar12;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar15;
      *(undefined8 **)(param_1 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_143f59460;
      local_520 = 8;
      *(undefined1 *)(param_1 + 0x1ac) = 0;
      local_518 = local_1d0;
      do {
        puVar12 = *(undefined8 **)(local_518 + -8);
        local_518 = local_518 + -8;
        local_520 = local_520 + -1;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            if ((*(char *)(puVar12 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar26 = *(int *)((longlong)puVar12 + 0xc) == 0;
              if (bVar26) {
                *(int *)((longlong)puVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar26) {
                uVar22 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar9 = 0;
                if (uVar22 != 0) {
                  lVar9 = (&DAT_1468a81f8)[uVar22 >> 0xe] + (ulonglong)(uVar22 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar9 + 8) = puVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar12)(puVar12);
            }
          }
        }
      } while (local_520 != 0);
      local_548 = local_548 + 1;
      lVar18 = local_500;
      lVar25 = local_490;
      iVar23 = local_528;
      uVar22 = local_540;
    } while (local_548 < local_50c);
  }
  puVar20 = (ulonglong *)(param_1 + 0x30);
  plVar19 = (longlong *)(*puVar20 + 7 & 0xfffffffffffffff8);
  plVar16 = plVar19 + 1;
  if (*(longlong **)(param_1 + 0x38) < plVar16) {
    FMemStackBase::AllocateNewChunk(puVar20);
    plVar19 = (longlong *)(*puVar20 + 7 & 0xfffffffffffffff8);
    plVar16 = plVar19 + 1;
  }
  *puVar20 = (ulonglong)plVar16;
  *plVar19 = local_488;
  puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar15 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(puVar20);
    puVar15 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
  }
  *puVar20 = (ulonglong)puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar15 + 4) = 0;
  *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
  *(undefined4 *)(puVar15 + 2) = 1;
  puVar15[3] = plVar19;
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  return;
}


