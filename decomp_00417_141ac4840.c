// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ac4840 FUN_141ac4840 body=119 status=ok
// SIG undefined FUN_141ac4840(void)

void FUN_141ac4840(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac48c0 FUN_141ac48c0 body=116 status=ok
// SIG undefined FUN_141ac48c0(void)

void FUN_141ac48c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141ac4940 FUN_141ac4940 body=110 status=ok
// SIG undefined FUN_141ac4940(void)

void FUN_141ac4940(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac49b0 FUN_141ac49b0 body=107 status=ok
// SIG undefined FUN_141ac49b0(void)

void FUN_141ac49b0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141ac4a20 FUN_141ac4a20 body=37 status=ok
// SIG undefined FUN_141ac4a20(void)

void FUN_141ac4a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6920();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4a50 FUN_141ac4a50 body=37 status=ok
// SIG undefined FUN_141ac4a50(void)

void FUN_141ac4a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac69c0();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4a80 FUN_141ac4a80 body=37 status=ok
// SIG undefined FUN_141ac4a80(void)

void FUN_141ac4a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6a60();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4ab0 FUN_141ac4ab0 body=37 status=ok
// SIG undefined FUN_141ac4ab0(void)

void FUN_141ac4ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6b00();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4ae0 FUN_141ac4ae0 body=37 status=ok
// SIG undefined FUN_141ac4ae0(void)

void FUN_141ac4ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6ba0();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4b10 FUN_141ac4b10 body=37 status=ok
// SIG undefined FUN_141ac4b10(void)

void FUN_141ac4b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6c40();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4b40 FUN_141ac4b40 body=37 status=ok
// SIG undefined FUN_141ac4b40(void)

void FUN_141ac4b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6ce0();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4b70 FUN_141ac4b70 body=37 status=ok
// SIG undefined FUN_141ac4b70(void)

void FUN_141ac4b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6d80();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4ba0 FUN_141ac4ba0 body=37 status=ok
// SIG undefined FUN_141ac4ba0(void)

void FUN_141ac4ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6e20();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4bd0 FUN_141ac4bd0 body=37 status=ok
// SIG undefined FUN_141ac4bd0(void)

void FUN_141ac4bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6ec0();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4c00 FUN_141ac4c00 body=37 status=ok
// SIG undefined FUN_141ac4c00(void)

void FUN_141ac4c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6f60();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4c30 FUN_141ac4c30 body=37 status=ok
// SIG undefined FUN_141ac4c30(void)

void FUN_141ac4c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac6ff0();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4c60 FUN_141ac4c60 body=37 status=ok
// SIG undefined FUN_141ac4c60(void)

void FUN_141ac4c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7090();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4c90 FUN_141ac4c90 body=37 status=ok
// SIG undefined FUN_141ac4c90(void)

void FUN_141ac4c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7130();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4cc0 FUN_141ac4cc0 body=37 status=ok
// SIG undefined FUN_141ac4cc0(void)

void FUN_141ac4cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac71b0();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4cf0 FUN_141ac4cf0 body=37 status=ok
// SIG undefined FUN_141ac4cf0(void)

void FUN_141ac4cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7240();
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",0);
  return;
}



// FUNCTION 141ac4d20 FUN_141ac4d20 body=66 status=ok
// SIG undefined FUN_141ac4d20(void)

void FUN_141ac4d20(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6920();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4d70 FUN_141ac4d70 body=66 status=ok
// SIG undefined FUN_141ac4d70(void)

void FUN_141ac4d70(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac69c0();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4dc0 FUN_141ac4dc0 body=66 status=ok
// SIG undefined FUN_141ac4dc0(void)

void FUN_141ac4dc0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6a60();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4e10 FUN_141ac4e10 body=66 status=ok
// SIG undefined FUN_141ac4e10(void)

void FUN_141ac4e10(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6b00();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4e60 FUN_141ac4e60 body=66 status=ok
// SIG undefined FUN_141ac4e60(void)

void FUN_141ac4e60(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6ba0();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4eb0 FUN_141ac4eb0 body=66 status=ok
// SIG undefined FUN_141ac4eb0(void)

void FUN_141ac4eb0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6c40();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4f00 FUN_141ac4f00 body=66 status=ok
// SIG undefined FUN_141ac4f00(void)

void FUN_141ac4f00(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6ce0();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4f50 FUN_141ac4f50 body=66 status=ok
// SIG undefined FUN_141ac4f50(void)

void FUN_141ac4f50(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6d80();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4fa0 FUN_141ac4fa0 body=66 status=ok
// SIG undefined FUN_141ac4fa0(void)

void FUN_141ac4fa0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6e20();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac4ff0 FUN_141ac4ff0 body=66 status=ok
// SIG undefined FUN_141ac4ff0(void)

void FUN_141ac4ff0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6ec0();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac5040 FUN_141ac5040 body=66 status=ok
// SIG undefined FUN_141ac5040(void)

void FUN_141ac5040(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6f60();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac5090 FUN_141ac5090 body=66 status=ok
// SIG undefined FUN_141ac5090(void)

void FUN_141ac5090(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac6ff0();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac50e0 FUN_141ac50e0 body=66 status=ok
// SIG undefined FUN_141ac50e0(void)

void FUN_141ac50e0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac7090();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac5130 FUN_141ac5130 body=66 status=ok
// SIG undefined FUN_141ac5130(void)

void FUN_141ac5130(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac7130();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac5180 FUN_141ac5180 body=66 status=ok
// SIG undefined FUN_141ac5180(void)

void FUN_141ac5180(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac71b0();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac51d0 FUN_141ac51d0 body=66 status=ok
// SIG undefined FUN_141ac51d0(void)

void FUN_141ac51d0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_141ac7240();
  if ((param_1 == 0xc) || (param_1 == 0x1b)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_141a172f0(param_3,L"BASEPASS_ATMOSPHERIC_FOG",uVar1);
  return;
}



// FUNCTION 141ac5220 FUN_141ac5220 body=166 status=ok
// SIG undefined FUN_141ac5220(void)

void FUN_141ac5220(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac52d0 FUN_141ac52d0 body=163 status=ok
// SIG undefined FUN_141ac52d0(void)

void FUN_141ac52d0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5380 FUN_141ac5380 body=166 status=ok
// SIG undefined FUN_141ac5380(void)

void FUN_141ac5380(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"CACHED_VOLUME_INDIRECT_LIGHTING",&DAT_143f591f0);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5430 FUN_141ac5430 body=163 status=ok
// SIG undefined FUN_141ac5430(void)

void FUN_141ac5430(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"CACHED_VOLUME_INDIRECT_LIGHTING",&DAT_143f591f0);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac54e0 FUN_141ac54e0 body=157 status=ok
// SIG undefined FUN_141ac54e0(void)

void FUN_141ac54e0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5580 FUN_141ac5580 body=154 status=ok
// SIG undefined FUN_141ac5580(void)

void FUN_141ac5580(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5620 FUN_141ac5620 body=166 status=ok
// SIG undefined FUN_141ac5620(void)

void FUN_141ac5620(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac56d0 FUN_141ac56d0 body=163 status=ok
// SIG undefined FUN_141ac56d0(void)

void FUN_141ac56d0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5780 FUN_141ac5780 body=157 status=ok
// SIG undefined FUN_141ac5780(void)

void FUN_141ac5780(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7dd0(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5820 FUN_141ac5820 body=154 status=ok
// SIG undefined FUN_141ac5820(void)

void FUN_141ac5820(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7dd0(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac58c0 FUN_141ac58c0 body=157 status=ok
// SIG undefined FUN_141ac58c0(void)

void FUN_141ac58c0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleDirectionalLightLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5960 FUN_141ac5960 body=154 status=ok
// SIG undefined FUN_141ac5960(void)

void FUN_141ac5960(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleDirectionalLightLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5a00 FUN_141ac5a00 body=157 status=ok
// SIG undefined FUN_141ac5a00(void)

void FUN_141ac5a00(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7e20(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5aa0 FUN_141ac5aa0 body=154 status=ok
// SIG undefined FUN_141ac5aa0(void)

void FUN_141ac5aa0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7e20(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5b40 FUN_141ac5b40 body=157 status=ok
// SIG undefined FUN_141ac5b40(void)

void FUN_141ac5b40(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleStationaryLightSingleSampleShadowsLightingPolicy::ModifyCompilationEnvironment
            (param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5be0 FUN_141ac5be0 body=154 status=ok
// SIG undefined FUN_141ac5be0(void)

void FUN_141ac5be0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleStationaryLightSingleSampleShadowsLightingPolicy::ModifyCompilationEnvironment
            (param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5c80 FUN_141ac5c80 body=157 status=ok
// SIG undefined FUN_141ac5c80(void)

void FUN_141ac5c80(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleStationaryLightVolumetricLightmapShadowsLightingPolicy::ModifyCompilationEnvironment
            (param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5d20 FUN_141ac5d20 body=154 status=ok
// SIG undefined FUN_141ac5d20(void)

void FUN_141ac5d20(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleStationaryLightVolumetricLightmapShadowsLightingPolicy::ModifyCompilationEnvironment
            (param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5dc0 FUN_141ac5dc0 body=157 status=ok
// SIG undefined FUN_141ac5dc0(void)

void FUN_141ac5dc0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5e60 FUN_141ac5e60 body=154 status=ok
// SIG undefined FUN_141ac5e60(void)

void FUN_141ac5e60(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5f00 FUN_141ac5f00 body=144 status=ok
// SIG undefined FUN_141ac5f00(void)

void FUN_141ac5f00(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac5f90 FUN_141ac5f90 body=141 status=ok
// SIG undefined FUN_141ac5f90(void)

void FUN_141ac5f90(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac6020 FUN_141ac6020 body=157 status=ok
// SIG undefined FUN_141ac6020(void)

void FUN_141ac6020(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7ba0(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac60c0 FUN_141ac60c0 body=154 status=ok
// SIG undefined FUN_141ac60c0(void)

void FUN_141ac60c0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7ba0(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac6160 FUN_141ac6160 body=157 status=ok
// SIG undefined FUN_141ac6160(void)

void FUN_141ac6160(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7b30(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac6200 FUN_141ac6200 body=154 status=ok
// SIG undefined FUN_141ac6200(void)

void FUN_141ac6200(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7b30(param_1,param_2,param_3);
  FUN_141ac6870(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac62a0 FUN_141ac62a0 body=123 status=ok
// SIG undefined FUN_141ac62a0(void)

void FUN_141ac62a0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141ac65a0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac6320 FUN_141ac6320 body=120 status=ok
// SIG undefined FUN_141ac6320(void)

void FUN_141ac6320(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141ac65a0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac63a0 FUN_141ac63a0 body=123 status=ok
// SIG undefined FUN_141ac63a0(void)

void FUN_141ac63a0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141ac6680(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac6420 FUN_141ac6420 body=120 status=ok
// SIG undefined FUN_141ac6420(void)

void FUN_141ac6420(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141ac6680(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac64a0 FUN_141ac64a0 body=123 status=ok
// SIG undefined FUN_141ac64a0(void)

void FUN_141ac64a0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141ac6770(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac6520 FUN_141ac6520 body=120 status=ok
// SIG undefined FUN_141ac6520(void)

void FUN_141ac6520(undefined4 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"SCENE_TEXTURES_DISABLED",iVar1 != 0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141ac6770(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac65a0 FUN_141ac65a0 body=209 status=ok
// SIG undefined FUN_141ac65a0(void)

void FUN_141ac65a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 local_res20 [8];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141bb2000();
  FUN_141ac7cb0(param_1,param_2,param_3);
  cVar1 = FUN_141e02d40();
  if (cVar1 != '\0') {
    local_18 = local_28;
    local_28[0] = 4;
    local_10 = local_res20;
    local_res20[0] = 0xe;
    TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
              (param_3 + 0xc0,local_20,&local_18,0);
  }
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FUN_141a172f0(param_3,L"BASEPASS",1);
  return;
}



// FUNCTION 141ac6680 FUN_141ac6680 body=226 status=ok
// SIG undefined FUN_141ac6680(void)

void FUN_141ac6680(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 local_res20 [8];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_1404a3a40(param_3,L"TRANSLUCENT_SELF_SHADOWING",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  cVar1 = FUN_141e02d40();
  if (cVar1 != '\0') {
    local_18 = local_28;
    local_28[0] = 4;
    local_10 = local_res20;
    local_res20[0] = 0xe;
    TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
              (param_3 + 0xc0,local_20,&local_18,0);
  }
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FUN_141a172f0(param_3,L"BASEPASS",1);
  return;
}



// FUNCTION 141ac6770 FUN_141ac6770 body=248 status=ok
// SIG undefined FUN_141ac6770(void)

void FUN_141ac6770(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 local_res20 [8];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"TRANSLUCENT_SELF_SHADOWING",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  cVar1 = FUN_141e02d40();
  if (cVar1 != '\0') {
    local_18 = local_28;
    local_28[0] = 4;
    local_10 = local_res20;
    local_res20[0] = 0xe;
    TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
              (param_3 + 0xc0,local_20,&local_18,0);
  }
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FUN_141a172f0(param_3,L"BASEPASS",1);
  return;
}



// FUNCTION 141ac6870 FUN_141ac6870 body=172 status=ok
// SIG undefined FUN_141ac6870(void)

void FUN_141ac6870(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 local_res20 [8];
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141ac7cb0();
  cVar1 = FUN_141e02d40();
  if (cVar1 != '\0') {
    local_18 = local_28;
    local_28[0] = 4;
    local_10 = local_res20;
    local_res20[0] = 0xe;
    TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
              (param_3 + 0xc0,local_20,&local_18,0);
  }
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FUN_141a172f0(param_3,L"BASEPASS",1);
  return;
}



// FUNCTION 141ac6920 FUN_141ac6920 body=159 status=ok
// SIG undefined FUN_141ac6920(void)

void FUN_141ac6920(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac69c0 FUN_141ac69c0 body=159 status=ok
// SIG undefined FUN_141ac69c0(void)

void FUN_141ac69c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"CACHED_VOLUME_INDIRECT_LIGHTING",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6a60 FUN_141ac6a60 body=150 status=ok
// SIG undefined FUN_141ac6a60(void)

void FUN_141ac6a60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6b00 FUN_141ac6b00 body=159 status=ok
// SIG undefined FUN_141ac6b00(void)

void FUN_141ac6b00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6ba0 FUN_141ac6ba0 body=150 status=ok
// SIG undefined FUN_141ac6ba0(void)

void FUN_141ac6ba0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7dd0(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6c40 FUN_141ac6c40 body=150 status=ok
// SIG undefined FUN_141ac6c40(void)

void FUN_141ac6c40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleDirectionalLightLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6ce0 FUN_141ac6ce0 body=150 status=ok
// SIG undefined FUN_141ac6ce0(void)

void FUN_141ac6ce0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7e20(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6d80 FUN_141ac6d80 body=150 status=ok
// SIG undefined FUN_141ac6d80(void)

void FUN_141ac6d80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleStationaryLightSingleSampleShadowsLightingPolicy::ModifyCompilationEnvironment
            (param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6e20 FUN_141ac6e20 body=150 status=ok
// SIG undefined FUN_141ac6e20(void)

void FUN_141ac6e20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FSimpleStationaryLightVolumetricLightmapShadowsLightingPolicy::ModifyCompilationEnvironment
            (param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6ec0 FUN_141ac6ec0 body=150 status=ok
// SIG undefined FUN_141ac6ec0(void)

void FUN_141ac6ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6f60 FUN_141ac6f60 body=137 status=ok
// SIG undefined FUN_141ac6f60(void)

void FUN_141ac6f60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac6ff0 FUN_141ac6ff0 body=150 status=ok
// SIG undefined FUN_141ac6ff0(void)

void FUN_141ac6ff0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7ba0(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac7090 FUN_141ac7090 body=150 status=ok
// SIG undefined FUN_141ac7090(void)

void FUN_141ac7090(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7b30(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac7130 FUN_141ac7130 body=121 status=ok
// SIG undefined FUN_141ac7130(void)

void FUN_141ac7130(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141bb2000();
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac71b0 FUN_141ac71b0 body=138 status=ok
// SIG undefined FUN_141ac71b0(void)

void FUN_141ac71b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"TRANSLUCENT_SELF_SHADOWING",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac7240 FUN_141ac7240 body=160 status=ok
// SIG undefined FUN_141ac7240(void)

void FUN_141ac7240(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"TRANSLUCENT_SELF_SHADOWING",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_3,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_3,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  return;
}



// FUNCTION 141ac72e0 ModifyCompilationEnvironment body=189 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingBaseCS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1658);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1658);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LIGHT_SOURCE_MODE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_BENT_NORMAL",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141ac73a0 ModifyCompilationEnvironment body=189 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingBaseCS<2>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1658);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1658);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LIGHT_SOURCE_MODE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_BENT_NORMAL",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141ac7460 ModifyCompilationEnvironment body=192 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingBaseCS<3>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1658);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1658);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LIGHT_SOURCE_MODE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_BENT_NORMAL",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141ac7520 ModifyCompilationEnvironment body=192 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingBaseCS<4>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1658);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1658);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LIGHT_SOURCE_MODE",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_BENT_NORMAL",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141ac75e0 ModifyCompilationEnvironment body=186 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingBaseCS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1658);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1658);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LIGHT_SOURCE_MODE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_BENT_NORMAL",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141ac76a0 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<1,1>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<1>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  return;
}



// FUNCTION 141ac76d0 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<1,2>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<1>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac7700 ModifyCompilationEnvironment body=61 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<1,3>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<1>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac7740 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<2,1>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<2>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  return;
}



// FUNCTION 141ac7770 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<2,2>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<2>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac77a0 ModifyCompilationEnvironment body=61 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<2,3>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<2>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac77e0 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<3,1>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<3>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  return;
}



// FUNCTION 141ac7810 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<3,2>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<3>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac7840 ModifyCompilationEnvironment body=61 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<3,3>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<3>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac7880 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<4,1>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<4>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  return;
}



// FUNCTION 141ac78b0 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<4,2>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<4>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac78e0 ModifyCompilationEnvironment body=61 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<4,3>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<4>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac7920 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<0,1>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<0>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  return;
}



// FUNCTION 141ac7950 ModifyCompilationEnvironment body=40 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<0,2>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<0>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac7980 ModifyCompilationEnvironment body=61 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingCS<0,3>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  TCapsuleShadowingBaseCS<0>::ModifyCompilationEnvironment();
  FUN_141a172f0(param_2,L"SUPPORT_CAPSULE_SHAPES",1);
  FUN_141a172f0(param_2,L"SUPPORT_MESH_DISTANCE_FIELDS",1);
  return;
}



// FUNCTION 141ac79c0 ModifyCompilationEnvironment body=85 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingUpsamplePS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPSAMPLE_REQUIRED",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_SSAO",1);
  return;
}



// FUNCTION 141ac7a20 ModifyCompilationEnvironment body=82 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingUpsamplePS<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPSAMPLE_REQUIRED",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_SSAO",0);
  return;
}



// FUNCTION 141ac7a80 ModifyCompilationEnvironment body=82 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingUpsamplePS<0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPSAMPLE_REQUIRED",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_SSAO",1);
  return;
}



// FUNCTION 141ac7ae0 ModifyCompilationEnvironment body=79 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCapsuleShadowingUpsamplePS<0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPSAMPLE_REQUIRED",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"APPLY_TO_SSAO",0);
  return;
}



// FUNCTION 141ac7b30 FUN_141ac7b30 body=100 status=ok
// SIG undefined FUN_141ac7b30(void)

void FUN_141ac7b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"STATICLIGHTING_TEXTUREMASK",1);
  FUN_141a172f0(param_3,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  FUN_1404a3a40(param_3,PTR_u_HQ_TEXTURE_LIGHTMAP_1464c1f58,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f64);
  return;
}



// FUNCTION 141ac7ba0 FUN_141ac7ba0 body=58 status=ok
// SIG undefined FUN_141ac7ba0(void)

void FUN_141ac7ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,PTR_u_HQ_TEXTURE_LIGHTMAP_1464c1f58,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f64);
  return;
}



// FUNCTION 141ac7be0 FUN_141ac7be0 body=58 status=ok
// SIG undefined FUN_141ac7be0(void)

void FUN_141ac7be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,PTR_u_LQ_TEXTURE_LIGHTMAP_1464c1f50,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f60);
  return;
}



// FUNCTION 141ac7c40 FUN_141ac7c40 body=78 status=ok
// SIG undefined FUN_141ac7c40(void)

void FUN_141ac7c40(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x40);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",1);
  FUN_1404a3a40(param_2,L"LIGHT_SOURCE_MODE",L"LIGHT_SOURCE_FROM_CAPSULE");
  return;
}



// FUNCTION 141ac7cb0 FUN_141ac7cb0 body=148 status=ok
// SIG undefined FUN_141ac7cb0(void)

void FUN_141ac7cb0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = (**(code **)(*param_2 + 0x178))(param_2);
  if ((iVar4 != 0) && (cVar3 = FUN_141ed13a0(param_1), cVar3 != '\0')) {
    plVar1 = (longlong *)(param_3 + 0xb0);
    piVar2 = (int *)*plVar1;
    iVar4 = *(int *)(param_3 + 0xb8);
    for (piVar5 = piVar2; piVar5 != piVar2 + iVar4; piVar5 = piVar5 + 1) {
      if (*piVar5 == 0x11) {
        if ((int)((longlong)piVar5 - (longlong)piVar2 >> 2) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_3 + 0xb8) = iVar4 + 1;
    if (*(int *)(param_3 + 0xbc) < iVar4 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(undefined4 *)((longlong)iVar4 * 4 + *plVar1) = 0x11;
  }
  return;
}



// FUNCTION 141ac7d50 FUN_141ac7d50 body=60 status=ok
// SIG undefined FUN_141ac7d50(void)

void FUN_141ac7d50(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEX",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZEY",8);
  return;
}



// FUNCTION 141ac7d90 ModifyCompilationEnvironment body=58 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FSimpleDirectionalLightLightingPolicy::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  return;
}



// FUNCTION 141ac7dd0 FUN_141ac7dd0 body=80 status=ok
// SIG undefined FUN_141ac7dd0(void)

void FUN_141ac7dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_1404a3a40(param_3,PTR_u_HQ_TEXTURE_LIGHTMAP_1464c1f58,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f64);
  return;
}



// FUNCTION 141ac7e20 FUN_141ac7e20 body=144 status=ok
// SIG undefined FUN_141ac7e20(void)

void FUN_141ac7e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141a172f0(param_3,L"STATICLIGHTING_TEXTUREMASK",1);
  FUN_141a172f0(param_3,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  FUN_1404a3a40(param_3,PTR_u_HQ_TEXTURE_LIGHTMAP_1464c1f58,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f64);
  return;
}



// FUNCTION 141ac7eb0 ModifyCompilationEnvironment body=95 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FSimpleStationaryLightSingleSampleShadowsLightingPolicy::ModifyCompilationEnvironment
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ac7f10 ModifyCompilationEnvironment body=80 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FSimpleStationaryLightVolumetricLightmapShadowsLightingPolicy::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_SHADING",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"SIMPLE_FORWARD_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  return;
}



// FUNCTION 141ac7f60 FUN_141ac7f60 body=797 status=ok
// SIG undefined FUN_141ac7f60(void)

void FUN_141ac7f60(int param_1,int *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *local_80;
  longlong *local_78;
  int local_70 [2];
  int local_68;
  int local_64;
  int local_60 [2];
  longlong local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 local_40 [24];
  
  if ((param_4 == '\0') && (cVar8 = FUN_141636a40(), cVar8 != '\0')) {
    plVar12 = (longlong *)FTaskGraphInterface::Get();
    iVar9 = (**(code **)(*plVar12 + 0x18))(plVar12);
    iVar15 = param_1;
    if (iVar9 <= param_1) {
      iVar15 = iVar9;
    }
    if (iVar15 != 0) {
      piVar13 = (int *)operator_new(0x38);
      if (piVar13 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        iVar9 = param_2[1];
        iVar17 = param_2[2];
        iVar10 = param_2[3];
        piVar13[4] = *param_2;
        piVar13[5] = iVar9;
        piVar13[6] = iVar17;
        piVar13[7] = iVar10;
        uVar14 = FUN_1415ab270(0);
        *(undefined8 *)(piVar13 + 8) = uVar14;
        piVar13[10] = 0;
        piVar13[0xb] = 0;
        iVar9 = iVar15 * 6;
        *(undefined2 *)(piVar13 + 0xc) = 0;
        iVar17 = 6;
        *(undefined1 *)((longlong)piVar13 + 0x32) = 0;
        *piVar13 = 0;
        do {
          iVar10 = param_1 / iVar9;
          piVar13[1] = iVar10;
          if (iVar10 == 0) {
            iVar11 = *piVar13;
          }
          else {
            iVar11 = param_1 / iVar10;
            *piVar13 = iVar11;
            if (iVar15 <= iVar11) break;
          }
          iVar9 = iVar9 - iVar15;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        piVar13[2] = param_1 - iVar10 * iVar11;
      }
      plVar12 = (longlong *)operator_new(0x18);
      local_78 = (longlong *)0x0;
      if (plVar12 != (longlong *)0x0) {
        *(undefined4 *)(plVar12 + 1) = 1;
        *plVar12 = (longlong)&PTR_FUN_1440456a0;
        *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
        plVar12[2] = (longlong)piVar13;
        local_78 = plVar12;
      }
      local_80 = piVar13;
      SharedPointerInternals::EnableSharedFromThis(&local_80,piVar13,piVar13);
      plVar12 = (longlong *)FUN_1406a61f0(local_40,0,0xff);
      lVar3 = *plVar12;
      *(int **)(lVar3 + 0x10) = local_80;
      *(longlong **)(lVar3 + 0x18) = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      *(int *)(lVar3 + 0x20) = iVar15 + -1;
      lVar3 = *plVar12;
      lVar7 = plVar12[2];
      lVar4 = plVar12[1];
      lVar5 = *(longlong *)(lVar3 + 0x30);
      piVar13 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar13 = *piVar13 + 1;
        UNLOCK();
      }
      local_58 = lVar5;
      FUN_1406a90c0(lVar3,lVar4,(int)lVar7,1);
      if (lVar5 != 0) {
        LOCK();
        iVar15 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          FGraphEvent::Recycle(local_58);
        }
      }
      (*(code *)*param_3)(param_3[1]);
      piVar13 = local_80;
      LOCK();
      if (local_80[10] == 0) {
        local_80[10] = 0;
      }
      UNLOCK();
      iVar15 = *local_80;
      local_50 = local_80[4];
      iStack_4c = local_80[5];
      iStack_48 = local_80[6];
      iStack_44 = local_80[7];
      cVar8 = *(char *)((longlong)local_80 + 0x32);
      iVar9 = local_80[1];
      local_68 = iVar15 + -1;
      local_64 = iVar9;
      iVar17 = local_68;
      do {
        LOCK();
        piVar1 = piVar13 + 10;
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if ((cVar8 != '\0') && (iVar17 < iVar10)) {
          iVar10 = iVar17;
        }
        if (iVar10 < iVar15) {
          iVar11 = iVar9;
          if (iVar10 == iVar17) {
            iVar11 = piVar13[2] + iVar9;
          }
          if (0 < iVar11) {
            uVar14 = CONCAT44(iStack_44,iStack_48);
            pcVar6 = (code *)CONCAT44(iStack_4c,local_50);
            iVar18 = iVar10 * iVar9;
            plVar12 = (longlong *)0x0;
            do {
              local_70[0] = iVar18 + (int)plVar12;
              (*pcVar6)(uVar14,local_70);
              uVar16 = (int)plVar12 + 1;
              plVar12 = (longlong *)(ulonglong)uVar16;
              iVar9 = local_64;
              iVar17 = local_68;
            } while ((int)uVar16 < iVar11);
          }
          LOCK();
          piVar1 = piVar13 + 0xb;
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (iVar11 + 1 == iVar15) goto LAB_141ac81f0;
        }
      } while (iVar10 < iVar17);
      (**(code **)(**(longlong **)(local_80 + 8) + 0x20))(*(longlong **)(local_80 + 8),0xffffffff,0)
      ;
LAB_141ac81f0:
      plVar12 = local_78;
      *(undefined1 *)(local_80 + 0xc) = 1;
      if (local_78 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar2 = local_78 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return;
      }
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar13 = (int *)((longlong)plVar12 + 0xc);
      iVar15 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar15 != 1) {
        return;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return;
    }
  }
  (*(code *)*param_3)(param_3[1]);
  iVar15 = 0;
  if (0 < param_1) {
    do {
      local_60[0] = iVar15;
      (**(code **)param_2)(*(undefined8 *)(param_2 + 2),local_60);
      iVar15 = iVar15 + 1;
    } while (iVar15 < param_1);
  }
  return;
}



// FUNCTION 141ac8280 FUN_141ac8280 body=679 status=ok
// SIG undefined FUN_141ac8280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ac8280(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
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
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar6 = *param_2;
  lVar1 = *(longlong *)(lVar6 + 0x10);
  uVar3 = FSceneRenderTargets::Get(param_2[8]);
  plVar4 = (longlong *)FUN_141ce54b0(uVar3);
  local_108 = 0;
  lVar2 = *plVar4;
  FUN_141a19150(param_2[8],*(undefined8 *)(lVar2 + 8),0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_108);
  local_108 = *(undefined8 *)(lVar6 + 0x1aa0);
  uStack_100 = *(undefined8 *)(lVar6 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_108,0,0x3f800000);
  local_b8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  FUN_14049afe0(param_2[8],&local_f8);
  local_c8 = FUN_141abce70();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x210))();
  FUN_141acecf0(param_1,param_2,&local_f8);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  plVar4 = *(longlong **)(lVar2 + 8);
  lVar6 = param_2[8];
  local_138 = 0xffffffff00000000;
  uStack_130 = 0xffffffffffffffff;
  local_118 = 0xffffffff;
  uStack_110 = 0;
  local_128 = 0xffffffffffffffff;
  uStack_120 = 0xffffffffffffffff;
  puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 10;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x58);
    puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 10;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar5;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar7;
  *(undefined8 **)(lVar6 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar7 + 2) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar7 + 0x14) = local_138._4_4_;
  *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_130._4_4_;
  *(undefined4 *)(puVar7 + 4) = (undefined4)local_128;
  *(undefined4 *)((longlong)puVar7 + 0x24) = local_128._4_4_;
  *(undefined4 *)(puVar7 + 5) = (undefined4)uStack_120;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_120._4_4_;
  *(undefined4 *)(puVar7 + 6) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar7 + 0x34) = local_118._4_4_;
  *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_110._4_4_;
  puVar7[8] = plVar4;
  puVar7[9] = uVar3;
  lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)puVar7[8] + 0x18))();
    if (lVar6 == 0) {
      (**(code **)(*(longlong *)puVar7[8] + 0x20))();
    }
  }
  lVar6 = (**(code **)(*(longlong *)puVar7[9] + 8))();
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)puVar7[9] + 0x18))();
    if (lVar6 == 0) {
      (**(code **)(*(longlong *)puVar7[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141ac8530 FUN_141ac8530 body=493 status=ok
// SIG undefined FUN_141ac8530(void)

void FUN_141ac8530(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = *param_2;
  lVar5 = FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,2);
  lVar7 = FSceneRenderTargets::Get(param_2[8]);
  if (*(char *)(param_1 + 0xdc) == '\0') {
    lVar8 = *(longlong *)(lVar7 + 0x120) + 8;
  }
  else {
    lVar8 = FUN_141cf3cd0(param_1 + 0x50,param_2);
  }
  if (lVar5 == 0) {
    local_res18 = *(undefined8 *)(lVar7 + 0x378);
    iVar4 = (int)local_res18;
  }
  else {
    local_res18 = *(undefined8 *)(lVar5 + 0x14);
    iVar4 = *(int *)(lVar7 + 0x378);
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x1aa0);
  uVar3 = *(undefined8 *)(lVar1 + 0x1aa8);
  iVar4 = iVar4 / (int)local_res18;
  local_res8._4_4_ = (int)(uVar2 >> 0x20);
  local_res8 = CONCAT44(local_res8._4_4_ / iVar4,
                        (int)((longlong)
                              ((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) /
                             (longlong)iVar4));
  local_38 = local_res8;
  uStack_30 = CONCAT44(((int)((ulonglong)uVar3 >> 0x20) + -1 + iVar4) / iVar4,
                       ((int)uVar3 + -1 + iVar4) / iVar4);
  fVar10 = *(float *)(DAT_1469fe298 + 4);
  if (0.0 <= fVar10) {
    fVar9 = *(float *)(*param_2 + 0x1684);
    if (fVar10 <= *(float *)(*param_2 + 0x1684)) {
      fVar9 = fVar10;
    }
  }
  else {
    fVar10 = -fVar10;
    fVar9 = 0.0;
    if ((0.0 <= fVar10) && (fVar9 = fVar10, 100.0 <= fVar10)) {
      fVar9 = 100.0;
    }
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
    FUN_141acde30();
  }
  else {
    FUN_141acd270(param_1,param_2,lVar8,&local_38,&local_res18,
                  (75.0 < fVar9) + (55.0 < fVar9) + (25.0 < fVar9) + (5.0 < fVar9),lVar6 != 0);
  }
  return;
}



// FUNCTION 141ac8720 FUN_141ac8720 body=1847 status=ok
// SIG undefined FUN_141ac8720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ac8720(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  float local_1f0;
  float local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  int local_180;
  int local_17c;
  int iStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_180 = 0;
  lVar9 = *param_2;
  plVar16 = (longlong *)0x0;
  local_130 = lVar9;
  puVar3 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x44);
  local_128 = puVar3;
  lVar4 = FSceneRenderTargets::Get(param_2[8]);
  local_170 = *(ulonglong *)(lVar9 + 0x1aa0);
  uStack_168 = *(ulonglong *)(lVar9 + 0x1aa8);
  iVar10 = *(int *)(lVar4 + 0x378) / (int)uVar7;
  iVar14 = (int)uStack_168;
  local_17c = (int)((longlong)((ulonglong)(uint)(iVar14 >> 0x1f) << 0x20 | uStack_168 & 0xffffffff)
                   / (longlong)iVar10);
  local_1a8._4_4_ = (int)(uStack_168 >> 0x20);
  local_180 = local_1a8._4_4_ / iVar10;
  local_1a8 = CONCAT44(local_180,local_17c);
  iVar15 = (int)local_170;
  local_188._4_4_ = (int)(local_170 >> 0x20);
  local_188 = CONCAT44(local_188._4_4_ / iVar10,
                       (int)((longlong)
                             ((ulonglong)(uint)(iVar15 >> 0x1f) << 0x20 | local_170 & 0xffffffff) /
                            (longlong)iVar10));
  local_198 = (undefined *)local_188;
  uStack_190 = local_1a8;
  FUN_141a19150(param_2[8],*puVar3,0,0);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_198);
  lVar4 = 0;
  local_cc = 0x26;
  local_d8 = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  FUN_14049afe0(param_2[8],&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  lVar9 = param_2[0xc];
  local_cc = local_cc & 0xffffffff00000000;
  local_198 = &DAT_146a51f90;
  uStack_190 = uStack_190 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_1a8,&local_198);
  if ((int)local_1a8 != -1) {
    lVar4 = (longlong)(int)local_1a8 * 0x20 + *(longlong *)(lVar9 + 0x38);
  }
  plVar6 = (longlong *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    plVar6 = plVar16;
  }
  lVar9 = *plVar6;
  lVar4 = FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar5 = FRenderingCompositePass::GetInputDesc(param_1,1);
  if ((lVar4 == 0) || (lVar5 != 0)) {
    lVar4 = param_2[0xc];
    plVar6 = (longlong *)0x0;
    local_198 = &DAT_146a0af50;
    uStack_190 = (ulonglong)uStack_190._4_4_ << 0x20;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x38,&local_1a8,&local_198);
    plVar11 = plVar6;
    if ((int)local_1a8 != -1) {
      plVar11 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *(longlong *)(lVar4 + 0x38));
    }
    plVar12 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar12 = plVar6;
    }
    lVar4 = *plVar12;
    local_118 = DAT_1464c2720;
    if (lVar9 == 0) {
      local_1a8 = 0;
      plVar16 = (longlong *)&DAT_00000004;
    }
    else {
      lVar5 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        FUN_1419f3850(lVar5);
      }
      plVar6 = *(longlong **)(lVar5 + 0x38);
    }
    uVar7 = 0;
    plStack_110 = plVar6;
    if (plVar16 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
    }
    bVar17 = false;
    if (lVar4 == 0) {
      bVar17 = true;
      local_1a8 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar4 + 0x48);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        FUN_1419f3850(lVar5);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
    }
    bVar17 = !bVar17;
  }
  else {
    lVar4 = param_2[0xc];
    plVar6 = (longlong *)0x0;
    local_198 = &DAT_146a0b0a0;
    uStack_190 = (ulonglong)uStack_190._4_4_ << 0x20;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x38,&local_1a8,&local_198);
    plVar11 = plVar6;
    if ((int)local_1a8 != -1) {
      plVar11 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *(longlong *)(lVar4 + 0x38));
    }
    plVar12 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar12 = plVar6;
    }
    lVar4 = *plVar12;
    local_118 = DAT_1464c2720;
    if (lVar9 == 0) {
      local_1a8 = 0;
      plVar16 = (longlong *)0x1;
    }
    else {
      lVar5 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        FUN_1419f3850(lVar5);
      }
      plVar6 = *(longlong **)(lVar5 + 0x38);
    }
    uVar7 = 0;
    plStack_110 = plVar6;
    if (plVar16 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
    }
    if (lVar4 == 0) {
      local_1a8 = 0;
      bVar17 = false;
    }
    else {
      lVar5 = *(longlong *)(lVar4 + 0x48);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        FUN_1419f3850(lVar5);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      bVar17 = true;
    }
  }
  local_f8 = uVar7;
  if (!bVar17) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
  }
  FUN_141ed6ac0(param_2[8],&local_118,2,1);
  lVar5 = *(longlong *)(lVar4 + 0x48);
  lVar2 = *param_2;
  lVar8 = lVar2;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
    lVar8 = *param_2;
  }
  local_1a8 = *(undefined8 *)(lVar5 + 0x40);
  FUN_141aa9690(lVar4,param_2[8],local_1a8,*(undefined8 *)(lVar8 + 0x20));
  local_208 = FUN_141a156e0();
  local_1f8 = 0;
  local_200 = 0.0;
  thunk_FUN_141ca99a0(lVar4 + 0xc0,param_2[8],&local_1a8,param_2);
  local_208._0_4_ = 0xf;
  FUN_141aa6fa0(lVar4 + 0x1bc,param_2[8],&local_1a8,*(undefined4 *)(*param_2 + 0x1a38));
  lVar5 = FSceneRenderTargets::Get(param_2[8]);
  iVar10 = *(int *)(lVar5 + 0x378);
  lVar8 = (**(code **)(*(longlong *)param_2[5] + 0x38))((longlong *)param_2[5],0);
  local_208._0_4_ = 0;
  lVar5 = *param_2;
  fVar18 = (float)((longlong)iVar10 / (longlong)*(int *)(lVar8 + 0x14) & 0xffffffff);
  local_198 = (undefined *)CONCAT44(*(float *)(lVar2 + 0x1690) / fVar18,fVar18);
  uStack_190 = CONCAT44((float)(*(int *)(lVar5 + 0x1aac) - *(int *)(lVar5 + 0x1aa4)),
                        (float)(*(int *)(lVar5 + 0x1aa8) - *(int *)(lVar5 + 0x1aa0)));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_1a8,lVar4 + 0x1cc,&local_198);
  FUN_141ad70c0(lVar9,param_2);
  uVar1 = *(undefined1 *)((longlong)param_2 + 0x69);
  lVar4 = FSceneRenderTargets::Get(param_2[8]);
  local_17c = local_17c - (int)local_188;
  iStack_178 = local_180 - local_188._4_4_;
  local_1d8 = *(undefined8 *)(lVar4 + 0x378);
  local_1f0 = (float)(iVar14 - iVar15);
  local_1e8 = (float)(uStack_168._4_4_ - local_170._4_4_);
  local_1b8 = 1;
  local_1c8 = *(undefined4 *)(local_130 + 0xf60);
  local_1e0 = CONCAT44(iStack_178,local_17c);
  local_1f8 = CONCAT44(local_1f8._4_4_,(float)local_170._4_4_);
  local_200 = (float)iVar15;
  local_208 = CONCAT44(local_208._4_4_,(float)iStack_178);
  local_1d0 = lVar9;
  local_1c0 = uVar1;
  FUN_141ce13a0(param_2[8]);
  lVar9 = param_2[8];
  local_160 = 0xffffffff00000000;
  uStack_158 = 0xffffffffffffffff;
  uVar7 = local_128[1];
  plVar16 = (longlong *)*local_128;
  local_140 = 0xffffffff;
  uStack_138 = 0;
  local_150 = 0xffffffffffffffff;
  uStack_148 = 0xffffffffffffffff;
  puVar13 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar13 + 10;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x58);
    puVar13 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar13 + 10;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar3;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar13;
  *(undefined8 **)(lVar9 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar13 + 2) = (undefined4)local_160;
  *(undefined4 *)((longlong)puVar13 + 0x14) = local_160._4_4_;
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_158;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_158._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)local_150;
  *(undefined4 *)((longlong)puVar13 + 0x24) = local_150._4_4_;
  *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_148;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_148._4_4_;
  *(undefined4 *)(puVar13 + 6) = (undefined4)local_140;
  *(undefined4 *)((longlong)puVar13 + 0x34) = local_140._4_4_;
  *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_138;
  *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_138._4_4_;
  puVar13[8] = plVar16;
  puVar13[9] = uVar7;
  lVar9 = (**(code **)(*plVar16 + 8))(plVar16);
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar13[8] + 0x20))();
  }
  lVar9 = (**(code **)(*(longlong *)puVar13[9] + 8))();
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar13[9] + 0x20))();
  }
  return;
}



// FUNCTION 141ac8e60 FUN_141ac8e60 body=1510 status=ok
// SIG undefined FUN_141ac8e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ac8e60(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined1 local_160;
  undefined4 local_158;
  ulonglong local_148;
  undefined8 local_140;
  undefined *local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_148 = local_148 & 0xffffffff00000000;
  bVar6 = false;
  local_140 = *param_2;
  lVar8 = FSceneRenderTargets::Get(param_2[8]);
  plVar9 = (longlong *)FUN_141ce54b0(lVar8);
  lVar13 = param_2[8];
  lVar3 = *plVar9;
  puVar18 = (ulonglong *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
  local_148 = *(ulonglong *)(lVar3 + 8);
  puVar10 = puVar18 + 1;
  if (*(ulonglong **)(lVar13 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x10);
    puVar18 = (ulonglong *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 1;
  }
  *(ulonglong **)(lVar13 + 0x30) = puVar10;
  *puVar18 = local_148;
  puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar15 + 5;
  if (*(undefined8 **)(lVar13 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x30);
    puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
  }
  *(undefined8 **)(lVar13 + 0x30) = puVar12;
  *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
  local_1a0 = (float)((uint)local_1a0 & 0xffffff00);
  local_1a8 = CONCAT44(local_1a8._4_4_,0x22);
  **(undefined8 **)(lVar13 + 8) = puVar15;
  *(undefined8 **)(lVar13 + 8) = puVar15 + 1;
  plVar9 = (longlong *)0x0;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar15 + 2) = 1;
  puVar15[3] = puVar18;
  *(undefined4 *)(puVar15 + 4) = 1;
  *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
  FUN_141ad74f0(param_2[8],*(undefined8 *)(lVar3 + 8),0,0);
  local_138 = *(undefined **)(local_140 + 0x1aa0);
  uStack_130 = *(ulonglong *)(local_140 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_138);
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  FUN_14049afe0(param_2[8],&local_f8);
  local_c8 = FUN_141abedb0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar13 = param_2[0xc];
  uStack_130 = uStack_130 & 0xffffffff00000000;
  local_138 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_148,&local_138);
  plVar16 = plVar9;
  if ((int)local_148 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_148 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  uStack_130 = uStack_130 & 0xffffffff00000000;
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = plVar9;
  }
  local_138 = &DAT_1469fe300;
  lVar4 = *plVar19;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_148,&local_138);
  plVar16 = plVar9;
  if ((int)local_148 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_148 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = plVar9;
  }
  lVar13 = *plVar19;
  local_f8 = DAT_1464c2720;
  if (lVar4 == 0) {
    local_148 = 0;
    bVar6 = true;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    plVar9 = *(longlong **)(lVar5 + 0x38);
  }
  uVar11 = 0;
  plStack_f0 = plVar9;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  bVar6 = false;
  if (lVar13 == 0) {
    bVar6 = true;
    local_148 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar11 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_d8 = uVar11;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  FUN_141ad70c0(lVar4,param_2);
  lVar5 = *(longlong *)(lVar13 + 0x48);
  local_138 = (undefined *)param_2[8];
  uVar11 = *(undefined8 *)(lVar8 + 0x378);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  puVar7 = local_138;
  local_148 = *(ulonglong *)(lVar5 + 0x40);
  FUN_141aa9690(lVar13,local_138,local_148,*(undefined8 *)(*param_2 + 0x20));
  local_1a8 = FUN_1404a0e20();
  local_198 = 0;
  local_1a0 = 0.0;
  thunk_FUN_141ca99a0(lVar13 + 0xc0,puVar7,&local_148,param_2);
  local_1a8 = CONCAT44(local_1a8._4_4_,0xf);
  FUN_141aa6fa0(lVar13 + 0x1bc,puVar7,&local_148,*(undefined4 *)(*param_2 + 0x1a38));
  local_1a8 = uVar11;
  FUN_141aa7180(lVar13 + 0x1cc,puVar7,*param_2,local_148);
  local_178 = *(undefined8 *)(lVar8 + 0x378);
  local_158 = 1;
  iVar14 = *(int *)(local_140 + 0x1aac) - *(int *)(local_140 + 0x1aa4);
  piVar1 = (int *)(local_140 + 0x1aa0);
  piVar2 = (int *)(local_140 + 0x1aa4);
  iVar17 = *(int *)(local_140 + 0x1aa8) - *piVar1;
  local_160 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_168 = *(undefined4 *)(local_140 + 0xf60);
  local_188 = (float)iVar14;
  local_140 = CONCAT44(iVar14,iVar17);
  local_180 = local_140;
  local_190 = (float)iVar17;
  local_1a0 = (float)*piVar1;
  local_198 = CONCAT44(local_198._4_4_,(float)*piVar2);
  local_1a8 = CONCAT44(local_1a8._4_4_,local_188);
  local_170 = lVar4;
  FUN_141ce13a0(param_2[8]);
  lVar13 = param_2[8];
  uVar11 = *(undefined8 *)(lVar3 + 0x10);
  plVar9 = *(longlong **)(lVar3 + 8);
  local_128 = 0xffffffff00000000;
  uStack_120 = 0xffffffffffffffff;
  local_108 = 0xffffffff;
  uStack_100 = 0;
  local_118 = 0xffffffffffffffff;
  uStack_110 = 0xffffffffffffffff;
  puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar15 + 10;
  if (*(undefined8 **)(lVar13 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x58);
    puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 10;
  }
  *(undefined8 **)(lVar13 + 0x30) = puVar12;
  *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
  **(undefined8 **)(lVar13 + 8) = puVar15;
  *(undefined8 **)(lVar13 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar15 + 2) = (undefined4)local_128;
  *(undefined4 *)((longlong)puVar15 + 0x14) = local_128._4_4_;
  *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_120;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_120._4_4_;
  *(undefined4 *)(puVar15 + 4) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar15 + 0x24) = local_118._4_4_;
  *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_110._4_4_;
  *(undefined4 *)(puVar15 + 6) = (undefined4)local_108;
  *(undefined4 *)((longlong)puVar15 + 0x34) = local_108._4_4_;
  *(undefined4 *)(puVar15 + 7) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uStack_100._4_4_;
  puVar15[8] = plVar9;
  puVar15[9] = uVar11;
  lVar13 = (**(code **)(*plVar9 + 8))(plVar9);
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar15[8] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar15[8] + 0x20))();
  }
  lVar13 = (**(code **)(*(longlong *)puVar15[9] + 8))();
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar15[9] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar15[9] + 0x20))();
  }
  return;
}



// FUNCTION 141ac9450 FUN_141ac9450 body=6813 status=ok
// SIG undefined FUN_141ac9450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ac9450(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_5d8 [32];
  wchar_t *local_5b8;
  undefined1 local_5b0;
  undefined1 local_5a8;
  byte local_598;
  char local_597;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined2 local_580;
  undefined2 uStack_57e;
  undefined4 uStack_57c;
  char local_578;
  undefined4 local_574;
  char local_570;
  int local_56c;
  longlong local_568;
  uint local_560;
  int local_55c;
  int local_558;
  int local_550;
  undefined4 uStack_54c;
  longlong *local_548;
  uint local_540;
  uint local_53c;
  undefined8 local_538;
  longlong local_530;
  longlong local_528;
  longlong local_520;
  longlong local_518;
  longlong local_510;
  int local_508;
  longlong local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  uint uStack_4ec;
  longlong local_4e8;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  undefined8 *local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined2 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined1 local_490;
  wchar_t *local_488;
  undefined2 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined2 uStack_450;
  undefined2 uStack_44e;
  undefined4 uStack_44c;
  float fStack_448;
  float fStack_444;
  ulonglong uStack_440;
  wchar_t *local_438;
  undefined2 local_430;
  longlong local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined1 local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  byte local_3c8;
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
  undefined4 local_2f8;
  undefined1 local_228 [92];
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined1 local_12c;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  lVar3 = param_2[8];
  local_568 = param_1;
  local_548 = param_2;
  lVar8 = FSceneRenderTargets::Get(lVar3);
  local_4e8 = lVar8;
  FUN_141ac2820();
  uVar11 = *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 8);
  local_570 = 0.0 < *(float *)(DAT_1469fe478 + 4) || *(float *)(DAT_1469fe478 + 4) == 0.0;
  puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 4;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x28);
    puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 4;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar13;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  local_578 = '\0';
  **(undefined8 **)(lVar3 + 8) = puVar15;
  *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_144dc9c70;
  *(undefined4 *)(puVar15 + 2) = 0x20;
  puVar15[3] = uVar11;
  lVar9 = *param_2;
  plVar12 = *(longlong **)(lVar9 + 0x10);
  local_528 = *(longlong *)(*plVar12 + -8 + (longlong)(int)plVar12[1] * 8);
  local_530 = lVar9;
  if (((*(int *)(local_568 + 0xa8) == 0) &&
      (cVar4 = *(char *)(local_568 + 0xac), (*(uint *)(plVar12 + 5) & 0x1000) != 0)) &&
     ((0 < *(int *)(lVar9 + 0x1dc0) || ((0 < *(int *)(lVar9 + 0x1db0) || (cVar4 != '\0')))))) {
    local_578 = '\x01';
    local_478 = 1;
    local_458 = 1;
    uStack_450 = 1;
    local_430 = 1;
    local_438 = L"UnknownTexture";
    uStack_470 = 0;
    local_468 = 0;
    uStack_460 = 0;
    uStack_44c = 0;
    fStack_448 = 0.0;
    fStack_444 = 0.0;
    uStack_440 = uStack_440 & 0xffffffffffffff00;
    FUN_141ce4c00(lVar8,&local_478);
    local_4b8 = DAT_146ab6938;
    local_4b4 = local_468._4_4_;
    local_4b0 = (undefined4)uStack_460;
    local_498 = DAT_146a9da94;
    local_488 = L"UnknownTexture2D";
    local_4c8 = _DAT_146ab6928;
    uStack_4c0 = uRam0000000146ab6930;
    local_4ac = 0;
    local_4a8 = 1;
    local_4a4 = 0x10000;
    local_4a0 = 1;
    local_49c = 2;
    local_494 = 9;
    local_490 = 0;
    local_480 = 0x101;
    if (DAT_146ab62ee == '\0') {
      if (*(longlong *)(lVar8 + 0xe8) == 0) {
        local_5a8 = 1;
        local_5b0 = 1;
        local_4b8 = DAT_1464c9c98;
        local_4c8 = _DAT_1464c9c88;
        uStack_4c0 = uRam00000001464c9c90;
        local_5b8 = L"DBufferA";
        FUN_141ce20b0(&PTR_PTR_1464c2560,lVar3,&local_4c8);
      }
      if (*(longlong *)(lVar8 + 0xf0) == 0) {
        uStack_588 = 0x3f0080813f008081;
        local_580 = 0;
        uStack_57e = 0x3f80;
        local_590 = 0x3f00808100000001;
        local_498 = DAT_146a9da98;
        local_5a8 = 1;
        local_5b0 = 1;
        local_4c8 = 0x3f00808100000001;
        uStack_4c0 = 0x3f0080813f008081;
        local_4b8 = 0x3f800000;
        local_5b8 = L"DBufferB";
        FUN_141ce20b0(&PTR_PTR_1464c2560,lVar3,&local_4c8);
      }
      local_49c = 0x28;
      if (*(longlong *)(lVar8 + 0xf8) == 0) {
        uStack_588 = 0x3f800000;
        local_580 = 0;
        uStack_57e = 0x3f80;
        local_498 = DAT_146a9da9c;
        local_5a8 = 1;
        local_590 = 1;
        local_5b0 = 1;
        local_4b8 = 0x3f800000;
        local_4c8 = 1;
        uStack_4c0 = 0x3f800000;
        local_5b8 = L"DBufferC";
        FUN_141ce20b0(&PTR_PTR_1464c2560,lVar3,&local_4c8);
      }
      if (*(longlong *)(lVar8 + 0x100) == 0) {
        uStack_588 = 0;
        local_580 = 0;
        uStack_57e = 0x3f80;
        local_498 = DAT_146a9daa0;
        local_5b8 = L"DBufferD";
        local_590 = 1;
        local_4b8 = 0x3f800000;
        local_49c = 0x1a;
        local_4c8 = local_590;
        uStack_4c0 = uStack_588;
LAB_141ac9835:
        local_5a8 = 1;
        local_5b0 = 1;
        FUN_141ce20b0(&PTR_PTR_1464c2560,lVar3,&local_4c8);
      }
    }
    else {
      local_4a8 = 4;
      local_4a4 = 0x10001;
      local_494 = 0x800009;
      local_480 = 1;
      if (*(longlong *)(lVar8 + 0x110) == 0) {
        plVar20 = *(longlong **)(lVar8 + 0x118);
        if (plVar20 == (longlong *)0x0) {
          local_4b8 = DAT_1464c9c98;
          local_5b8 = L"DBufferArray";
          local_4c8 = _DAT_1464c9c88;
          uStack_4c0 = uRam00000001464c9c90;
          goto LAB_141ac9835;
        }
        *(longlong *)(lVar8 + 0x110) = (longlong)plVar20;
        (**(code **)(*plVar20 + 0x28))();
      }
    }
    if (cVar4 != '\0') {
      local_f8 = CONCAT44(uStack_57c,CONCAT22(uStack_57e,0x102));
      uStack_e0 = CONCAT44(uStack_57c,CONCAT22(uStack_57e,0x102));
      local_c8 = CONCAT44(uStack_57c,CONCAT22(uStack_57e,0x102));
      local_580 = 0x102;
      local_b0 = CONCAT44(uStack_57c,CONCAT22(uStack_57e,0x102));
      if (DAT_146ab62ee == '\0') {
        local_128 = *(longlong *)(*(longlong *)(lVar8 + 0xe8) + 8);
        uStack_f0 = *(longlong *)(*(longlong *)(lVar8 + 0xf0) + 8);
        plVar18 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        local_d8 = *(longlong *)(*(longlong *)(lVar8 + 0xf8) + 8);
        uStack_100 = 0xffffffff00000000;
        local_590 = *(longlong *)(*(longlong *)(lVar8 + 0x100) + 8);
        uStack_e8 = 0xffffffff00000000;
        lStack_120 = *(longlong *)(*(longlong *)(lVar8 + 0xf0) + 8);
        local_118 = *(longlong *)(*(longlong *)(lVar8 + 0xf8) + 8);
        local_110 = *(longlong *)(*(longlong *)(lVar8 + 0x100) + 8);
        uStack_d0 = 0xffffffff00000000;
        uStack_588 = 0xffffffff00000000;
        plVar20 = plVar18 + 4;
        uStack_b8 = 0xffffffff00000000;
        local_108 = local_128;
        local_c0 = local_590;
        if (*(longlong **)(lVar3 + 0x38) < plVar20) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x28);
          plVar18 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar20 = plVar18 + 4;
        }
        *(longlong **)(lVar3 + 0x30) = plVar20;
        *plVar18 = local_128;
        plVar18[1] = lStack_120;
        plVar18[2] = local_118;
        plVar18[3] = local_110;
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 5;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar15 + 5;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar13;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        uStack_588 = 0x2100010001;
        **(undefined8 **)(lVar3 + 8) = puVar15;
        *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar15 + 2) = 4;
        puVar15[3] = plVar18;
        *(undefined4 *)(puVar15 + 4) = 1;
        *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
        local_590 = *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 0x10);
        FUN_140c63b80(&local_3b8,4,&local_108,&local_590);
      }
      else {
        local_108 = *(longlong *)(*(longlong *)(lVar8 + 0x110) + 8);
        uStack_100 = 0;
        uStack_e8 = 0x100000000;
        local_590 = *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 0x10);
        uStack_d0 = 0x200000000;
        uStack_b8 = 0x300000000;
        uStack_588 = 0x2100010001;
        uStack_f0 = local_108;
        local_d8 = local_108;
        local_c0 = local_108;
        FUN_140c63b80(&local_3b8,4,&local_108,&local_590);
        local_12c = 1;
        local_1bc = DAT_1464aa6ec;
        local_1cc = 1;
        uStack_1c8 = DAT_1464aa6e0;
        uStack_1c4 = DAT_1464aa6e4;
        uStack_1c0 = DAT_1464aa6e8;
        local_1b8 = 0x3f00808100000001;
        uStack_1b0 = 0x3f0080813f008081;
        local_1a8 = 0x3f800000;
        local_580 = (undefined2)DAT_1464aa6ec;
        uStack_57e = (undefined2)((uint)DAT_1464aa6ec >> 0x10);
        local_180 = DAT_1464aa6ec;
        local_1a4 = 1;
        uStack_19c = 0x3f800000;
        local_194 = 0x3f800000;
        local_190 = 1;
        uStack_18c = DAT_1464aa6e0;
        uStack_188 = DAT_1464aa6e4;
        uStack_184 = DAT_1464aa6e8;
        local_520 = *(longlong *)(*(longlong *)(lVar8 + 0x110) + 8);
        local_590 = CONCAT44(DAT_1464aa6e0,1);
        uStack_588 = CONCAT44(DAT_1464aa6e8,DAT_1464aa6e4);
        plVar18 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar20 = plVar18 + 1;
        if (*(longlong **)(lVar3 + 0x38) < plVar20) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10,DAT_1464aa6ec,DAT_1464aa6e0);
          plVar18 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar20 = plVar18 + 1;
        }
        *(longlong **)(lVar3 + 0x30) = plVar20;
        *plVar18 = local_520;
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 5;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
          puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar15 + 5;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar13;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar15;
        *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar15 + 2) = 1;
        puVar15[3] = plVar18;
        *(undefined4 *)(puVar15 + 4) = 1;
        *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
      }
      FRHICommandListBase::CacheActiveRenderTargets(lVar3,local_2f8,&local_3b8,local_228);
      puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 0x54;
      if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x2a8);
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 0x54;
      }
      *(undefined8 **)(lVar3 + 0x30) = puVar13;
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      **(undefined8 **)(lVar3 + 8) = puVar15;
      *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar15 + 2,&local_3b8);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(&local_3b8);
    }
  }
  local_597 = '\0';
  lVar21 = local_568;
  if ((*(uint *)(plVar12 + 5) & 0x1000) == 0) goto LAB_141acae1a;
  if (((*(uint *)(local_568 + 0xa8) & 0xfffffffd) == 0) && (0 < *(int *)(*param_2 + 0x1db0))) {
    FUN_141b13040(param_2);
  }
  lVar21 = plVar12[4];
  if ((*(int *)(lVar9 + 0x1dc0) != 0) || (0 < *(int *)(*local_548 + 0x1db0))) {
    iVar14 = *(int *)(local_568 + 0xa8);
    uVar2 = (&DAT_1464c9c48)[(int)local_548[0xb]];
    local_598 = 0;
    local_3c8 = 0;
    local_428 = lVar3;
    lVar9 = FSceneRenderTargets::Get(lVar3);
    local_420 = 0x1010101;
    local_410 = 0;
    local_128 = 0;
    local_408 = 0;
    local_400 = 0;
    local_3f8 = 0;
    local_41c = 0x1010101;
    local_3f0 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    local_418 = 1;
    local_3d0 = 0;
    if (*(longlong *)(lVar9 + 0xe8) != 0) {
      local_3e8 = *(undefined8 *)(*(longlong *)(lVar9 + 0xe8) + 8);
    }
    if (*(longlong *)(lVar9 + 0xf0) != 0) {
      local_3e0 = *(undefined8 *)(*(longlong *)(lVar9 + 0xf0) + 8);
    }
    if (*(longlong *)(lVar9 + 0xf8) != 0) {
      local_3d8 = *(undefined8 *)(*(longlong *)(lVar9 + 0xf8) + 8);
    }
    if (*(longlong *)(lVar9 + 0x100) != 0) {
      local_3d0 = *(undefined8 *)(*(longlong *)(lVar9 + 0x100) + 8);
    }
    if (((DAT_146ac3ac0 == 0) || (iVar6 = FUN_1419ef5f0(uVar2), iVar6 < 3)) &&
       (cVar4 = FUN_141ee4480(uVar2), cVar4 == '\0')) {
      local_598 = iVar14 == 1;
      local_3c8 = local_598;
    }
    lVar9 = local_568;
    local_500 = 0;
    local_4f8 = 0;
    FUN_141afd5d0(lVar21,local_530,*(undefined4 *)(local_568 + 0xa8),&local_500);
    iVar14 = (int)local_4f8;
    lVar21 = lVar3;
    if (0 < (int)local_4f8) {
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
      FUN_14049afe0(lVar3);
      local_558 = 0;
      local_538 = local_538 & 0xffffff0000000000;
      local_55c = (int)local_548[0xb];
      local_574 = 0;
      local_560 = 0xffffffff;
      local_53c = 0xffffffff;
      iVar6 = *(int *)(DAT_1469fe460 + 4);
      local_540 = 0xffffffff;
      local_508 = iVar6;
      if (iVar6 != 0) {
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 3;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar15 + 3;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar13;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar15;
        *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144dc9c60;
        *(int *)(puVar15 + 2) = iVar6;
        iVar14 = (int)local_4f8;
      }
      local_510 = (longlong)iVar14;
      if (0 < iVar14) {
        local_520 = 0;
        lVar22 = local_530;
        do {
          lVar8 = local_500 + local_520 * 0x28;
          lVar9 = *(longlong *)(local_500 + 0x10 + local_520 * 0x28);
          local_4d0 = (undefined8 *)(lVar9 + 0x80);
          local_478 = *local_4d0;
          uStack_470 = *(undefined8 *)(lVar9 + 0x88);
          local_468 = *(undefined8 *)(lVar9 + 0x90);
          uStack_460 = *(undefined8 *)(lVar9 + 0x98);
          local_458 = *(undefined8 *)(lVar9 + 0xa0);
          uVar11 = *(undefined8 *)(lVar9 + 0xa8);
          uStack_450 = (undefined2)uVar11;
          uStack_44e = (undefined2)((ulonglong)uVar11 >> 0x10);
          uStack_44c = (undefined4)((ulonglong)uVar11 >> 0x20);
          uStack_440 = *(ulonglong *)(lVar9 + 0xb8);
          fStack_448 = (float)*(undefined8 *)(lVar9 + 0xb0);
          fStack_444 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0xb0) >> 0x20);
          local_518 = lVar8;
          FUN_141afe480(&local_4c8,lVar22);
          uVar17 = *(uint *)(lVar8 + 0x20);
          uVar7 = FUN_14274f980(lVar22);
          if ((uVar7 < 0x1e) && ((0x25e2cf88U >> (uVar7 & 0x1f) & 1) != 0)) {
            local_56c = 3;
            bVar23 = false;
            goto LAB_141aca1db;
          }
          switch(uVar17) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 0xd:
            local_56c = 2;
            goto LAB_141aca1d8;
          default:
            local_56c = 0;
LAB_141aca1d8:
            bVar23 = true;
            break;
          case 0xc:
            local_56c = 1;
            bVar23 = false;
            break;
          case 0xe:
            local_56c = 4;
            bVar23 = false;
          }
LAB_141aca1db:
          cVar4 = *(char *)(lVar8 + 0x24);
          uVar7 = FUN_14274f980(local_530);
          if ((uVar7 < 0x1e) && ((0x25e2cf88U >> (uVar7 & 0x1f) & 1) != 0)) {
switchD_141aca24b_caseD_3:
            uVar7 = 6;
          }
          else if ((((DAT_146ac3ac0 == 0) || (iVar14 = FUN_1419ef5f0(uVar7), iVar14 < 3)) &&
                   (cVar5 = FUN_141ee4480(uVar7), cVar5 == '\0')) || (2 < uVar17)) {
            switch(uVar17) {
            case 0:
            case 1:
              uVar7 = (uint)(cVar4 == '\0');
              break;
            case 2:
              uVar7 = 5;
              break;
            case 3:
              goto switchD_141aca24b_caseD_3;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
              uVar7 = 4;
              break;
            case 0xc:
              uVar7 = 3 - (cVar4 != '\0');
              break;
            case 0xd:
              uVar7 = 1;
              break;
            case 0xe:
              uVar7 = 7;
              break;
            default:
              uVar7 = 0xffffffff;
            }
          }
          else {
            uVar7 = 6;
          }
          lVar8 = local_518;
          if ((local_598 != 0) && (cVar4 = FUN_14259cc30(), cVar4 != '\0')) {
            local_108 = -0x100000000;
            uStack_100 = 0xffffffffffffffff;
            puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
            local_f8 = 0xffffffffffffffff;
            uStack_f0 = -1;
            uStack_e8 = 0xffffffff;
            uStack_e0 = 0;
            plVar12 = *(longlong **)(*(longlong *)(local_4e8 + 0xb8) + 8);
            puVar13 = puVar15 + 10;
            if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
              FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x58);
              puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar15 + 10;
            }
            *(undefined8 **)(lVar3 + 0x30) = puVar13;
            *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
            **(undefined8 **)(lVar3 + 8) = puVar15;
            *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
            puVar15[1] = 0;
            *puVar15 = &PTR_LAB_143f489f0;
            *(undefined4 *)(puVar15 + 2) = (undefined4)local_108;
            *(undefined4 *)((longlong)puVar15 + 0x14) = local_108._4_4_;
            *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_100;
            *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_100._4_4_;
            *(undefined4 *)(puVar15 + 4) = (undefined4)local_f8;
            *(undefined4 *)((longlong)puVar15 + 0x24) = local_f8._4_4_;
            *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_f0;
            *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_f0._4_4_;
            *(undefined4 *)(puVar15 + 6) = (undefined4)uStack_e8;
            *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_e8._4_4_;
            *(undefined4 *)(puVar15 + 7) = (undefined4)uStack_e0;
            *(undefined4 *)((longlong)puVar15 + 0x3c) = uStack_e0._4_4_;
            puVar15[8] = plVar12;
            puVar15[9] = plVar12;
            lVar8 = (**(code **)(*plVar12 + 8))(plVar12);
            if ((lVar8 == 0) &&
               (lVar8 = (**(code **)(*(longlong *)puVar15[8] + 0x18))(), lVar8 == 0)) {
              (**(code **)(*(longlong *)puVar15[8] + 0x20))();
            }
            lVar8 = (**(code **)(*(longlong *)puVar15[9] + 8))();
            if ((lVar8 == 0) &&
               (lVar8 = (**(code **)(*(longlong *)puVar15[9] + 0x18))(), lVar8 == 0)) {
              (**(code **)(*(longlong *)puVar15[9] + 0x20))();
            }
            local_128 = 0;
            local_408 = 0;
            local_598 = 0;
            local_3c8 = 0;
            lVar8 = local_518;
          }
          plVar12 = local_548;
          if (uVar7 != local_540) {
            local_540 = uVar7;
            FUN_141ad7770(&local_428,uVar7);
            plVar12 = local_548;
            local_128 = *(longlong *)(*local_548 + 0x1aa0);
            lStack_120 = *(longlong *)(*local_548 + 0x1aa8);
            FRenderingCompositePassContext::SetViewportAndCallRHI(local_548,&local_128,0,0x3f800000)
            ;
            FUN_14049afe0(lVar3,&local_3b8);
            local_598 = local_3c8;
            local_128 = local_408;
          }
          cVar4 = '\0';
          if ((bVar23) && (local_570 != '\0')) {
            cVar4 = FUN_141ad3650(plVar12,&local_478);
            local_4f0 = 0;
            uStack_4ec = uStack_4ec & 0xffffff00;
            local_538 = (ulonglong)uStack_4ec << 0x20;
            local_558 = 0;
            local_560 = 0xffffffff;
          }
          uVar11 = 0;
          if (((DAT_146ab62e8 == '\0') || (1 < uVar17)) || (*(byte *)(lVar8 + 0x24) == local_53c)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if ((uVar17 != local_560) || (uVar10 = local_388, bVar23)) {
            bVar1 = *(byte *)(lVar8 + 0x24);
            local_53c = (uint)bVar1;
            iVar14 = *(int *)(local_568 + 0xa8);
            local_560 = uVar17;
            uVar10 = uVar11;
            if (iVar14 == 0) {
              if (local_55c == 2) {
switchD_141aca562_caseD_4:
                uVar10 = FUN_141abe8b0();
              }
              else {
                switch(uVar17) {
                case 4:
                  goto switchD_141aca562_caseD_4;
                case 5:
                  uVar10 = FUN_141abec70();
                  break;
                case 6:
                  uVar10 = FUN_141abe9f0();
                  break;
                case 7:
                  uVar10 = FUN_141abeb30();
                  break;
                case 8:
                  uVar10 = FUN_141abf030();
                  break;
                case 9:
                  uVar10 = FUN_141abeef0();
                  break;
                case 10:
                  uVar10 = FUN_141abf170();
                  break;
                case 0xb:
                  uVar10 = FUN_141abe770();
                }
              }
            }
            else if (iVar14 == 1) {
              uVar10 = FUN_1404a0ce0();
            }
            else if (iVar14 == 4) {
              uVar10 = FUN_141abcd30();
            }
            else if (uVar17 == 0) {
              if (DAT_146ab62e8 == '\0') {
                if (local_55c != 2) goto LAB_141aca654;
                uVar10 = FUN_141abd4b0();
              }
              else if (bVar1 == 0) {
                uVar10 = FUN_141abd870();
              }
              else {
                uVar10 = FUN_141abd5f0();
              }
            }
            else if (uVar17 == 1) {
              if (DAT_146ab62e8 == '\0') {
                if (local_55c != 2) goto LAB_141aca654;
                uVar10 = FUN_141abdc30();
              }
              else if (bVar1 == 0) {
                uVar10 = FUN_141abd9b0();
              }
              else {
                uVar10 = FUN_141abd730();
              }
            }
            else if (uVar17 == 2) {
LAB_141aca654:
              uVar10 = FUN_141abdaf0();
            }
            else if (uVar17 == 3) {
              uVar10 = FUN_141abd370();
            }
            else if (uVar17 == 0xd) {
              if (DAT_146ab62e8 == '\0') {
                if (local_55c == 2) {
                  uVar10 = FUN_141abd0f0();
                }
              }
              else {
                uVar10 = FUN_141abd230();
              }
            }
          }
          local_388 = uVar10;
          lVar22 = local_530;
          local_590 = *(undefined8 *)(local_530 + 0x8dc);
          fVar26 = (float)local_590 - fStack_448;
          fVar27 = (float)((ulonglong)local_590 >> 0x20) - fStack_444;
          uStack_588 = CONCAT44(uStack_588._4_4_,*(float *)(local_530 + 0x8e4));
          fVar25 = *(float *)(local_530 + 0x8e4) - (float)uStack_440;
          fVar24 = *(float *)(local_530 + 0x11b0) + *(float *)(local_530 + 0x11b0) +
                   *(float *)(lVar8 + 0x1c) * 1.05;
          fVar25 = fVar27 * fVar27 + fVar26 * fVar26 + fVar25 * fVar25;
          fVar24 = fVar24 * fVar24;
          FMatrix::GetScaleVector(local_4d0,&local_4e0,0x322bcc77);
          bVar23 = fVar24 <= fVar25;
          if (*(char *)(lVar22 + 0x11b4) == '\0') {
            bVar23 = fVar25 < fVar24;
          }
          uVar17 = (uint)bVar23;
          if (local_4dc * local_4e0 * local_4d8 < 0.0) {
            uVar17 = bVar23 ^ 1;
          }
          iVar14 = uVar17 + 1;
          if (local_558 != iVar14) {
            local_558 = iVar14;
            if (uVar17 == 0) {
              uStack_380 = FUN_141ac06b0();
            }
            else if (uVar17 == 1) {
              uStack_380 = FUN_141ac0570();
            }
            else {
              uStack_380 = 0;
            }
          }
          bVar23 = local_56c == 1;
          uStack_54c = CONCAT31(uStack_54c._1_3_,bVar23);
          if (bVar23) {
            local_550 = 2;
          }
          else if (fVar24 <= fVar25) {
            if (cVar4 == '\0') {
              local_550 = 2;
              if (local_56c == 2) {
                local_550 = 8;
              }
            }
            else {
              local_550 = (local_56c != 2) + 6;
            }
          }
          else if (cVar4 == '\0') {
            local_550 = 1;
            if (local_56c == 2) {
              local_550 = 5;
            }
          }
          else {
            local_550 = (local_56c != 2) + 3;
          }
          if (((int)local_538 != local_550) || (uVar11 = local_378, (bool)local_538._4_1_ != bVar23)
             ) {
            local_538 = CONCAT44(uStack_54c,local_550);
            uVar11 = 0;
            switch(local_550) {
            case 1:
              local_574 = 0;
              uVar11 = FUN_1409853f0();
              break;
            case 2:
              local_574 = 0;
              if (bVar23) {
                uVar11 = FUN_141abf3f0();
              }
              else {
                uVar11 = FUN_141abfb70();
              }
              break;
            case 3:
              local_574 = 0x81;
              uVar11 = FUN_141abff30();
              break;
            case 4:
              local_574 = 1;
              uVar11 = FUN_141abfdf0();
              break;
            case 5:
              local_574 = 0x80;
              uVar11 = FUN_141ac0070();
              break;
            case 6:
              local_574 = 0x81;
              uVar11 = FUN_141abf8f0();
              break;
            case 7:
              local_574 = 1;
              uVar11 = FUN_141abf7b0();
              break;
            case 8:
              local_574 = 0x80;
              uVar11 = FUN_141abfa30();
            }
          }
          local_378 = uVar11;
          local_5b8 = (wchar_t *)&local_4c8;
          local_36c = local_36c & 0xffffffff00000000;
          FUN_141b17ea0(lVar3,&local_3b8,lVar22,lVar8);
          puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar15 + 3;
          if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
            puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar15 + 3;
          }
          *(undefined8 **)(lVar3 + 0x30) = puVar13;
          *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
          **(undefined8 **)(lVar3 + 8) = puVar15;
          *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *puVar15 = &PTR_LAB_143f489c0;
          *(undefined4 *)(puVar15 + 2) = local_574;
          plVar12 = (longlong *)FUN_141ee35f0();
          lVar8 = *plVar12;
          if (lVar8 == 0) {
            LowLevelFatalErrorHandler
                      ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!")
            ;
            FDebug::AssertFailed
                      (&DAT_143f3f584,"Unknown",0x8d8,
                       L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
          }
          puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar15 + 7;
          if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x40);
            puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar15 + 7;
          }
          *(undefined8 **)(lVar3 + 0x30) = puVar13;
          *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
          **(undefined8 **)(lVar3 + 8) = puVar15;
          *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *puVar15 = &PTR_LAB_143f489d0;
          puVar15[2] = lVar8;
          puVar15[3] = 0;
          *(undefined4 *)(puVar15 + 4) = 0;
          *(undefined8 *)((longlong)puVar15 + 0x24) = 8;
          *(undefined4 *)((longlong)puVar15 + 0x2c) = 0xc;
          *(undefined4 *)(puVar15 + 6) = 1;
          local_598 = local_598 | local_128 != 0;
          local_520 = local_520 + 1;
          lVar9 = local_568;
          lVar8 = local_4e8;
          lVar21 = local_428;
          iVar6 = local_508;
          local_3c8 = local_598;
        } while (local_520 < local_510);
      }
      if (iVar6 != 0) {
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 3;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
          puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar15 + 3;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar13;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar15;
        *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144dc9c60;
        *(undefined4 *)(puVar15 + 2) = 0;
      }
    }
    lVar22 = local_530;
    if ((local_528 == local_530) && (*(int *)(lVar9 + 0xa8) == 2)) {
      uStack_588 = 0x2001020000;
      local_590 = *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 0x10);
      FUN_140c63b80(&local_3b8,0,0,&local_590);
      FRHICommandListBase::CacheActiveRenderTargets(lVar3,local_2f8,&local_3b8,local_228);
      puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 0x54;
      if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x2a8);
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 0x54;
      }
      *(undefined8 **)(lVar3 + 0x30) = puVar13;
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      **(undefined8 **)(lVar3 + 8) = puVar15;
      *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar15 + 2,&local_3b8);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(&local_3b8);
    }
    lVar19 = local_528;
    if ((*(int *)(lVar9 + 0xa8) == 0) && (DAT_146ab62ed != '\0')) {
      local_a8 = *(undefined8 *)(*(longlong *)(lVar8 + 0xe8) + 8);
      local_a0 = *(undefined8 *)(*(longlong *)(lVar8 + 0xf0) + 8);
      local_98 = *(undefined8 *)(*(longlong *)(lVar8 + 0xf8) + 8);
      local_90 = *(undefined8 *)(*(longlong *)(lVar8 + 0x100) + 8);
      puVar15 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 4;
      if (*(undefined8 **)(lVar21 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x28);
        puVar15 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 4;
      }
      *(undefined8 **)(lVar21 + 0x30) = puVar13;
      *puVar15 = local_a8;
      puVar15[1] = local_a0;
      puVar15[2] = local_98;
      puVar15[3] = local_90;
      puVar16 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar16 + 5;
      if (*(undefined8 **)(lVar21 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x30);
        puVar16 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar16 + 5;
      }
      lVar19 = local_528;
      *(undefined8 **)(lVar21 + 0x30) = puVar13;
      *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
      **(undefined8 **)(lVar21 + 8) = puVar16;
      *(undefined8 **)(lVar21 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      puVar16[3] = puVar15;
      *(undefined4 *)(puVar16 + 4) = 5;
      *puVar16 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar16 + 2) = 4;
      *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
      if (DAT_146ab62ed == '\0') goto LAB_141acacf7;
      if (local_528 == lVar22) {
        FUN_141aba3b0(local_568,local_548);
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
        local_597 = '\x01';
        goto LAB_141acacf7;
      }
LAB_141acacfc:
      if (DAT_146ab62ed != '\0') goto LAB_141acaddd;
    }
    else {
LAB_141acacf7:
      if (lVar19 != lVar22) goto LAB_141acacfc;
    }
    if (DAT_146ab62ee == '\0') {
      FUN_141ad3b40(&local_428);
    }
    else if (*(longlong *)(lVar8 + 0x110) != 0) {
      local_510 = *(longlong *)(*(longlong *)(lVar8 + 0x110) + 8);
      plVar20 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar12 = plVar20 + 1;
      if (*(longlong **)(lVar3 + 0x38) < plVar12) {
        FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
        plVar20 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar12 = plVar20 + 1;
      }
      *(longlong **)(lVar3 + 0x30) = plVar12;
      *plVar20 = local_510;
      puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 5;
      if (*(undefined8 **)(lVar3 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
        puVar15 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar15 + 5;
      }
      *(undefined8 **)(lVar3 + 0x30) = puVar13;
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      **(undefined8 **)(lVar3 + 8) = puVar15;
      *(undefined8 **)(lVar3 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar15 + 2) = 1;
      puVar15[3] = plVar20;
      *(undefined4 *)(puVar15 + 4) = 0;
      *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
    }
  }
LAB_141acaddd:
  lVar21 = local_568;
  if ((*(int *)(local_568 + 0xa8) == 0) && (local_578 != '\0')) {
    if (DAT_146ab62ee == '\0') {
      AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
      AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
      AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
    }
    AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  }
LAB_141acae1a:
  if ((*(int *)(lVar21 + 0xa8) == 0) && (local_597 == '\0')) {
    plVar12 = *(longlong **)(lVar8 + 0x108);
    *(undefined8 *)(lVar8 + 0x108) = 0;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x30))();
    }
  }
  return;
}



// FUNCTION 141acafb0 FUN_141acafb0 body=2982 status=ok
// SIG undefined FUN_141acafb0(void)

void FUN_141acafb0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ulonglong local_res18;
  undefined8 local_res20;
  longlong *local_148;
  ulonglong *puStack_140;
  undefined8 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128 [8];
  longlong *local_120;
  longlong local_118;
  longlong *local_100;
  ulonglong *puStack_f8;
  undefined *local_e8;
  ulonglong *puStack_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  
  local_res20 = param_4;
  lVar8 = FSceneRenderTargets::Get(param_2);
  puVar9 = (undefined8 *)FUN_141ce54b0(lVar8);
  (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,L"SceneColor");
  FUN_141ce54b0(lVar8);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  puStack_140 = &local_res18;
  local_res18 = local_res18 & 0xffffffffffffff00;
  local_e8 = &DAT_14060d670;
  local_148 = (longlong *)&DAT_14060d670;
  puStack_e0 = puStack_140;
  lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
  local_d8 = (undefined8 *)(lVar10 + 0x18);
  local_d0 = *local_d8;
  local_c8 = *(longlong *)(lVar10 + 0x28);
  local_c0 = '\0';
  local_b8 = *(undefined8 *)(lVar10 + 0x30);
  *(undefined8 ***)(lVar10 + 0x30) = &local_d8;
  *(int *)(lVar10 + 0x38) = *(int *)(lVar10 + 0x38) + 1;
  FUN_141cd7760(local_a8,param_2,param_3);
  FUN_141c40530(local_128,param_2,local_78,param_3);
  plVar11 = (longlong *)0x0;
  if ((*(uint *)(*(longlong *)(local_118 + 0x10) + 0x28) & 0x1000) != 0) {
    puStack_140 = &local_res18;
    local_138 = (undefined8 *)&DAT_14060d670;
    local_148 = (longlong *)&DAT_14060d670;
    local_res18 = local_res18 & 0xffffffffffffff00;
    puStack_130 = puStack_140;
    lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
    lVar10 = operator_new(0xb0,lVar10 + 0x18,1,0);
    if (lVar10 != 0) {
      plVar11 = (longlong *)FUN_141aafce0(lVar10,1,0);
    }
    plVar13 = local_120;
    iVar6 = (int)local_120[1];
    *(int *)(local_120 + 1) = iVar6 + 1;
    if (*(int *)((longlong)local_120 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_120,iVar6);
    }
    *(longlong **)(*plVar13 + (longlong)iVar6 * 8) = plVar11;
    (**(code **)(*plVar11 + 0x18))(plVar11,0,&local_100);
    puStack_f8 = puStack_130;
    puStack_130 = (ulonglong *)((ulonglong)puStack_130 & 0xffffffff00000000);
    puStack_f8 = (ulonglong *)((ulonglong)puStack_f8 & 0xffffffff00000000);
    local_100 = plVar11;
  }
  plVar11 = (longlong *)0x0;
  if ((*(uint *)(*(longlong *)(local_118 + 0x10) + 0x28) & 0x1000) == 0) {
    bVar4 = false;
  }
  else {
    puStack_140 = &local_res18;
    local_138 = (undefined8 *)&DAT_14060d670;
    local_148 = (longlong *)&DAT_14060d670;
    bVar4 = true;
    local_res18 = local_res18 & 0xffffffffffffff00;
    puStack_130 = puStack_140;
    lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
    plVar12 = (longlong *)operator_new(0xb0,lVar10 + 0x18,1,0);
    plVar13 = local_120;
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 0;
      plVar12[2] = 0;
      *(undefined4 *)(plVar12 + 3) = 0;
      plVar12[4] = 1;
      plVar12[5] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[8] = 1;
      *(undefined2 *)(plVar12 + 9) = 1;
      *(undefined8 *)((longlong)plVar12 + 0x4c) = 0;
      *(undefined4 *)((longlong)plVar12 + 0x54) = 0;
      *(undefined1 *)(plVar12 + 0xb) = 0;
      plVar12[0xc] = (longlong)L"UnknownTexture";
      *(undefined2 *)(plVar12 + 0xd) = 1;
      plVar12[0xe] = 0;
      *(undefined4 *)(plVar12 + 0xf) = 0;
      plVar12[0x10] = 0;
      plVar12[0x11] = 0;
      plVar12[0x13] = 0;
      plVar12[0x14] = 0;
      plVar12[0x12] = 0;
      *plVar12 = (longlong)&PTR__scalar_deleting_destructor__144dca4f8;
      *(undefined4 *)(plVar12 + 0x15) = 2;
      *(undefined1 *)((longlong)plVar12 + 0xac) = 0;
      plVar11 = plVar12;
    }
    iVar6 = (int)local_120[1];
    *(int *)(local_120 + 1) = iVar6 + 1;
    if (*(int *)((longlong)local_120 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_120,iVar6);
    }
    *(longlong **)(*plVar13 + (longlong)iVar6 * 8) = plVar11;
    (**(code **)(*plVar11 + 0x18))(plVar11,0,&local_100);
    puStack_f8 = puStack_130;
    puStack_130 = (ulonglong *)((ulonglong)puStack_130 & 0xffffffff00000000);
    puStack_f8 = (ulonglong *)((ulonglong)puStack_f8 & 0xffffffff00000000);
    local_100 = plVar11;
  }
  uVar16 = 0;
  local_138 = (undefined8 *)0x0;
  puStack_130 = (ulonglong *)((ulonglong)puStack_130 & 0xffffffff00000000);
  iVar6 = FUN_141ab5fb0(local_118);
  if (iVar6 != 0) {
    if ((*(byte *)(param_3 + 0x1694) & 1) == 0) {
      if (((((*(int *)(local_118 + 0x1a38) < 3) || (iVar1 = *(int *)(DAT_1469fe280 + 4), iVar1 < 1))
           || ((iVar6 != 1 && ((*(byte *)(local_118 + 0x1694) & 1) == 0)))) || (iVar1 < 2)) ||
         ((iVar1 != 3 && (DAT_146ab62f0 == '\0')))) {
        puVar9 = (undefined8 *)FUN_141ab47b0(&local_148,param_2,local_128,iVar6);
        local_138 = (undefined8 *)*puVar9;
        puStack_130 = (ulonglong *)puVar9[1];
        if (bVar4) {
          puStack_140 = &local_res18;
          local_res18 = local_res18 & 0xffffffffffffff00;
          local_148 = (longlong *)&DAT_14060d670;
          lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
          lVar10 = operator_new(0xb0,lVar10 + 0x18,1,0);
          if (lVar10 != 0) {
            uVar16 = FUN_141aafce0(lVar10,4,0);
          }
          plVar11 = (longlong *)
                    FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                              (local_120,uVar16);
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_100);
          puStack_f8 = puStack_140;
          puStack_140 = (ulonglong *)((ulonglong)puStack_140 & 0xffffffff00000000);
          puStack_f8 = (ulonglong *)((ulonglong)puStack_f8 & 0xffffffff00000000);
          local_148 = plVar11;
          local_100 = plVar11;
        }
      }
      else {
        FUN_141afd5d0(*(undefined8 *)(*(longlong *)(local_118 + 0x10) + 0x20),local_118,4);
      }
      cVar5 = FUN_141ac27d0(local_118);
      if (cVar5 != '\0') {
        puStack_140 = &local_res18;
        local_148 = (longlong *)&DAT_14060d670;
        local_res18 = local_res18 & 0xffffffffffffff00;
        lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
        plVar11 = (longlong *)operator_new(0xa8,lVar10 + 0x18,1,0);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
          plVar11[3] = 0;
          _guard_xfg_dispatch_icall_nop((undefined *)((longlong)plVar11 + 0x24),0,0x5c);
          *(undefined4 *)(plVar11 + 1) = 0;
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 0;
          plVar11[4] = 1;
          plVar11[5] = 0;
          plVar11[6] = 0;
          plVar11[7] = 0;
          *(undefined8 *)((longlong)plVar11 + 0x4c) = 0;
          *(undefined1 *)(plVar11 + 0xb) = 0;
          plVar11[0xc] = (longlong)L"UnknownTexture";
          plVar11[8] = 1;
          *(undefined2 *)(plVar11 + 9) = 1;
          *(undefined4 *)((longlong)plVar11 + 0x54) = 0;
          *(undefined2 *)(plVar11 + 0xd) = 1;
          plVar11[0xe] = 0;
          *(undefined4 *)(plVar11 + 0xf) = 0;
          plVar11[0x10] = 0;
          plVar11[0x11] = 0;
          plVar11[0x13] = 0;
          plVar11[0x14] = 0;
          plVar11[0x12] = 0;
          *plVar11 = (longlong)&PTR_FUN_144dca470;
        }
        plVar13 = local_120;
        iVar6 = (int)local_120[1];
        *(int *)(local_120 + 1) = iVar6 + 1;
        if (*(int *)((longlong)local_120 + 0xc) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_120,iVar6);
        }
        *(longlong **)(*plVar13 + (longlong)iVar6 * 8) = plVar11;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_100);
        puStack_f8 = puStack_140;
        puStack_140 = (ulonglong *)((ulonglong)puStack_140 & 0xffffffff00000000);
        puStack_f8 = (ulonglong *)((ulonglong)puStack_f8 & 0xffffffff00000000);
        local_148 = plVar11;
        local_100 = plVar11;
      }
    }
    else if (((((*(int *)(local_118 + 0x1a38) < 3) ||
               (iVar1 = *(int *)(DAT_1469fe280 + 4), iVar1 < 1)) ||
              ((iVar6 != 1 && ((*(byte *)(local_118 + 0x1694) & 1) == 0)))) ||
             ((iVar1 < 2 || ((iVar1 != 3 && (DAT_146ab62f0 == '\0')))))) ||
            ((param_5 != '\0' && ((*(byte *)(local_118 + 0x1694) & 1) != 0)))) {
      puStack_140 = &local_res18;
      local_res18 = local_res18 & 0xffffffffffffff00;
      local_148 = (longlong *)&DAT_14060d670;
      lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
      lVar10 = operator_new(0xb0,lVar10 + 0x18,1,0);
      if (lVar10 != 0) {
        uVar16 = FUN_141aafc50(lVar10,0);
      }
      plVar11 = (longlong *)
                FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                          (local_120,uVar16);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_100);
      puStack_f8 = puStack_140;
      puStack_140 = (ulonglong *)((ulonglong)puStack_140 & 0xffffffff00000000);
      *(undefined1 *)(lVar8 + 0x2d8) = 1;
      puStack_f8 = (ulonglong *)((ulonglong)puStack_f8 & 0xffffffff00000000);
      local_148 = plVar11;
      local_100 = plVar11;
    }
  }
  plVar11 = (longlong *)0x0;
  if (((*(byte *)(param_3 + 0x17d8) & 1) != 0) &&
     (((byte)*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x28) & 0x21) == 0x21)) {
    puStack_140 = &local_res18;
    local_148 = (longlong *)&DAT_14060d670;
    local_res18 = local_res18 & 0xffffffffffffff00;
    lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
    lVar10 = operator_new(0xb0,lVar10 + 0x18,1,0);
    plVar13 = plVar11;
    if (lVar10 != 0) {
      plVar13 = (longlong *)FUN_141afaf20(lVar10,local_res20);
    }
    plVar13 = (longlong *)
              FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                        (local_120,plVar13);
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_100);
    puStack_f8 = puStack_140;
    puStack_140 = (ulonglong *)((ulonglong)puStack_140 & 0xffffffff00000000);
    puStack_f8 = (ulonglong *)((ulonglong)puStack_f8 & 0xffffffff00000000);
    local_148 = plVar13;
    local_100 = plVar13;
  }
  if ((*(int *)(local_118 + 0x1900) != 0) &&
     (((uVar7 = FUN_14274f980(), DAT_146ac3ac0 == 0 || (iVar6 = FUN_1419ef5f0(uVar7), iVar6 < 3)) &&
      (cVar5 = FUN_141ee4480(uVar7), cVar5 == '\0')))) {
    local_res18 = local_res18 & 0xffffffffffffff00;
    puStack_140 = &local_res18;
    local_148 = (longlong *)&DAT_14060d670;
    lVar10 = FUN_1415d8310(&local_148,&DAT_146216a38);
    plVar13 = (longlong *)operator_new(0xb8,lVar10 + 0x18,1,0);
    if (plVar13 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar13,0,0xb8);
      *(undefined4 *)(plVar13 + 3) = 0;
      plVar13[4] = 0;
      *(undefined4 *)(plVar13 + 5) = 0;
      plVar13[6] = 1;
      plVar13[7] = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[0xe] = (longlong)L"UnknownTexture";
      plVar13[10] = 1;
      *(undefined2 *)(plVar13 + 0xb) = 1;
      *(undefined8 *)((longlong)plVar13 + 0x5c) = 0;
      *(undefined4 *)((longlong)plVar13 + 100) = 0;
      *(undefined1 *)(plVar13 + 0xd) = 0;
      *(undefined2 *)(plVar13 + 0xf) = 1;
      plVar13[0x10] = 0;
      *(undefined4 *)(plVar13 + 0x11) = 0;
      plVar13[0x12] = 0;
      plVar13[0x13] = 0;
      plVar13[0x15] = 0;
      plVar13[0x16] = 0;
      plVar13[0x14] = 0;
      *plVar13 = (longlong)&PTR__scalar_deleting_destructor__144dca0b8;
      plVar11 = plVar13;
    }
    iVar6 = (int)local_120[1];
    *(int *)(local_120 + 1) = iVar6 + 1;
    if (*(int *)((longlong)local_120 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_120,iVar6);
    }
    *(longlong **)(*local_120 + (longlong)iVar6 * 8) = plVar11;
    (**(code **)(*plVar11 + 0x18))(plVar11,0,&local_100);
    (**(code **)(*plVar11 + 0x18))(plVar11,1,&local_138);
    puStack_140 = (ulonglong *)((ulonglong)puStack_140 & 0xffffffff00000000);
    puStack_f8 = puStack_140;
    local_148 = plVar11;
    local_100 = plVar11;
  }
  local_res18 = 0;
  local_e8 = (undefined *)0x0;
  puStack_e0 = (ulonglong *)0x0;
  FScopedGPUStatEvent::Begin(&local_e8,param_2,&DAT_1469fe0c0,&local_res18);
  plVar11 = (longlong *)FUN_141ce54b0(lVar8);
  puVar14 = (undefined4 *)(**(code **)(*(longlong *)*plVar11 + 0x10))();
  puVar15 = (undefined4 *)FRenderingCompositeOutputRef::GetOutput(&local_100);
  uVar7 = puVar14[1];
  uVar2 = puVar14[2];
  uVar3 = puVar14[3];
  *puVar15 = *puVar14;
  puVar15[1] = uVar7;
  puVar15[2] = uVar2;
  puVar15[3] = uVar3;
  puVar15[4] = puVar14[4];
  puVar15[5] = puVar14[5];
  puVar15[6] = puVar14[6];
  puVar15[7] = puVar14[7];
  puVar15[8] = puVar14[8];
  *(undefined1 *)(puVar15 + 9) = *(undefined1 *)(puVar14 + 9);
  *(undefined1 *)((longlong)puVar15 + 0x25) = *(undefined1 *)((longlong)puVar14 + 0x25);
  *(undefined2 *)((longlong)puVar15 + 0x26) = *(undefined2 *)((longlong)puVar14 + 0x26);
  *(undefined2 *)(puVar15 + 10) = *(undefined2 *)(puVar14 + 10);
  puVar15[0xb] = puVar14[0xb];
  puVar15[0xc] = puVar14[0xc];
  puVar15[0xd] = puVar14[0xd];
  *(undefined1 *)(puVar15 + 0xe) = *(undefined1 *)(puVar14 + 0xe);
  *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(puVar14 + 0x10);
  *(undefined1 *)(puVar15 + 0x12) = *(undefined1 *)(puVar14 + 0x12);
  *(undefined1 *)((longlong)puVar15 + 0x49) = *(undefined1 *)((longlong)puVar14 + 0x49);
  lVar8 = FRenderingCompositeOutputRef::GetOutput(&local_100);
  plVar11 = (longlong *)*plVar11;
  plVar13 = *(longlong **)(lVar8 + 0x50);
  *(longlong **)(lVar8 + 0x50) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))();
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x30))(plVar13);
  }
  uVar16 = FHardwareCursor::GetHandle(&local_100);
  local_138 = (undefined8 *)0x0;
  puStack_130 = (ulonglong *)0x1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138,0);
  *local_138 = uVar16;
  FUN_141cf2100(local_a8,&local_138,L"CompositionLighting_AfterBasePass");
  if (local_138 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != (undefined *)0x0) {
    FScopedGPUStatEvent::End(&local_e8);
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_a8);
  if (local_c0 == '\0') {
    local_c0 = 1;
    *(int *)(local_d8 + 4) = *(int *)(local_d8 + 4) + -1;
    if (local_c8 != local_d8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_d8 = local_d0;
    local_d8[3] = local_b8;
  }
  return;
}



// FUNCTION 141acbb60 FUN_141acbb60 body=2218 status=ok
// SIG undefined FUN_141acbb60(void)

void FUN_141acbb60(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  char local_res20 [8];
  longlong *local_148;
  char *pcStack_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined *local_128;
  char *pcStack_120;
  undefined8 *local_118;
  undefined8 local_110;
  longlong local_108;
  char local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_c8;
  char *pcStack_c0;
  undefined1 local_b8 [48];
  undefined1 local_88 [80];
  
  puVar7 = (undefined8 *)FSceneRenderTargets::Get(param_2);
  pcStack_140 = local_res20;
  bVar14 = false;
  local_128 = &DAT_14060d670;
  local_148 = (longlong *)&DAT_14060d670;
  local_res20[0] = '\0';
  local_138 = puVar7;
  pcStack_120 = pcStack_140;
  lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
  local_118 = (undefined8 *)(lVar8 + 0x18);
  local_110 = *local_118;
  local_108 = *(longlong *)(lVar8 + 0x28);
  local_100 = '\0';
  local_f8 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 ***)(lVar8 + 0x30) = &local_118;
  *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
  FUN_141cd7760(local_b8,param_2,param_3);
  FUN_141c40530(local_f0,param_2,local_88,param_3);
  if (param_4 + 1U < 2) {
    fVar1 = *(float *)(DAT_1469fd968 + 4);
    uVar4 = FUN_14274f980(param_3);
    if (((DAT_146ac3ac0 == 0) || (iVar5 = FUN_1419ef5f0(uVar4), iVar5 < 3)) &&
       (cVar2 = FUN_141ee4480(uVar4), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if ((*(ushort *)(param_3 + 0x28d0) & 0x220) != 0) {
      iVar5 = (**(code **)(*DAT_1469fdab0 + 0x68))();
      lVar8 = DAT_1469fd968;
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        lVar9 = 4;
      }
      else {
        lVar9 = 0;
      }
      if (((iVar5 != 0) && (0.0 < *(float *)(lVar9 + lVar8))) &&
         ((cVar2 == '\0' && (*(int *)(DAT_1469fdab8 + 4) == 1)))) {
        bVar14 = *(int *)(DAT_1469fda08 + 4) != 0;
        bVar15 = *(int *)(*(longlong *)(param_3 + 0x10) + 8) == 1;
        pcStack_140 = local_res20;
        local_148 = (longlong *)&DAT_14060d670;
        local_res20[0] = cVar2;
        if (fVar1 <= 0.0) {
          lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
          lVar8 = operator_new(0xd0,lVar8 + 0x18,1);
          if (lVar8 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = FRCPassPostProcessSubsurfaceRecombine::FRCPassPostProcessSubsurfaceRecombine
                               (lVar8,bVar14,bVar15);
          }
          plVar12 = (longlong *)
                    FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                              (local_e8,uVar11);
          (**(code **)(*plVar12 + 0x18))(plVar12,0,&local_c8);
        }
        else {
          lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
          lVar8 = operator_new(0xc0,lVar8 + 0x18,1);
          if (lVar8 == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = (longlong *)FUN_141c762b0(lVar8,param_3,bVar14);
          }
          plVar12 = local_e8;
          iVar5 = (int)local_e8[1];
          *(int *)(local_e8 + 1) = iVar5 + 1;
          if (*(int *)((longlong)local_e8 + 0xc) < iVar5 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e8,iVar5);
          }
          *(longlong **)(*plVar12 + (longlong)iVar5 * 8) = plVar10;
          (**(code **)(*plVar10 + 0x18))(plVar10,0,&local_c8);
          pcStack_140 = local_res20;
          local_res20[0] = '\0';
          local_148 = (longlong *)&DAT_14060d670;
          lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
          lVar8 = operator_new(0xc0,lVar8 + 0x18,1,0);
          uVar11 = 0;
          if (lVar8 != 0) {
            uVar11 = FRCPassPostProcessSubsurface::FRCPassPostProcessSubsurface(lVar8,0,bVar14);
          }
          plVar12 = (longlong *)
                    FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                              (local_e8,uVar11);
          pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
          local_148 = plVar10;
          (**(code **)(*plVar12 + 0x18))(plVar12,0,&local_148);
          pcStack_140 = local_res20;
          local_res20[0] = '\0';
          local_148 = (longlong *)&DAT_14060d670;
          lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
          lVar8 = operator_new(0xc0,lVar8 + 0x18,1,0);
          uVar11 = 0;
          if (lVar8 != 0) {
            uVar11 = FRCPassPostProcessSubsurface::FRCPassPostProcessSubsurface(lVar8,1,bVar14);
          }
          plVar13 = (longlong *)
                    FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                              (local_e8,uVar11);
          uVar11 = 0;
          pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
          local_148 = plVar12;
          (**(code **)(*plVar13 + 0x18))(plVar13,0,&local_148);
          pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
          local_148 = plVar10;
          (**(code **)(*plVar13 + 0x18))(plVar13,1,&local_148);
          pcStack_140 = local_res20;
          local_res20[0] = '\0';
          local_148 = (longlong *)&DAT_14060d670;
          lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
          lVar8 = operator_new(0xd0,lVar8 + 0x18,1,0);
          if (lVar8 != 0) {
            uVar11 = FRCPassPostProcessSubsurfaceRecombine::FRCPassPostProcessSubsurfaceRecombine
                               (lVar8,bVar14,bVar15);
          }
          plVar12 = (longlong *)
                    FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                              (local_e8,uVar11);
          (**(code **)(*plVar12 + 0x18))(plVar12,0,&local_c8);
          pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
          local_148 = plVar13;
          (**(code **)(*plVar12 + 0x18))(plVar12,1,&local_148);
          pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
          local_148 = plVar10;
          (**(code **)(*plVar12 + 0x18))(plVar12,2,&local_148);
        }
        pcStack_c0 = pcStack_140;
        bVar14 = true;
        pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
        pcStack_c0 = (char *)((ulonglong)pcStack_c0 & 0xffffffff00000000);
        puVar7 = local_138;
        local_148 = plVar12;
        local_c8 = plVar12;
      }
    }
  }
  plVar12 = (longlong *)0x0;
  iVar5 = FUN_141ab5fb0(local_e0);
  if ((((param_4 + 1U & 0xfffffffd) == 0) && (iVar5 != 0)) &&
     ((*(byte *)(param_3 + 0x1694) & 1) != 0)) {
    pcStack_140 = local_res20;
    local_148 = (longlong *)&DAT_14060d670;
    local_res20[0] = '\0';
    lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
    plVar10 = (longlong *)operator_new(0xa8,lVar8 + 0x18,1,0);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
      plVar10[3] = 0;
      _guard_xfg_dispatch_icall_nop((undefined *)((longlong)plVar10 + 0x24),0,0x5c);
      *(undefined4 *)(plVar10 + 1) = 0;
      plVar10[2] = 0;
      *(undefined4 *)(plVar10 + 3) = 0;
      plVar10[4] = 1;
      plVar10[5] = 0;
      plVar10[6] = 0;
      plVar10[7] = 0;
      *(undefined8 *)((longlong)plVar10 + 0x4c) = 0;
      *(undefined1 *)(plVar10 + 0xb) = 0;
      plVar10[0xc] = (longlong)L"UnknownTexture";
      plVar10[8] = 1;
      *(undefined2 *)(plVar10 + 9) = 1;
      *(undefined4 *)((longlong)plVar10 + 0x54) = 0;
      *(undefined2 *)(plVar10 + 0xd) = 1;
      plVar10[0xe] = 0;
      *(undefined4 *)(plVar10 + 0xf) = 0;
      plVar10[0x10] = 0;
      plVar10[0x11] = 0;
      plVar10[0x13] = 0;
      plVar10[0x14] = 0;
      plVar10[0x12] = 0;
      *plVar10 = (longlong)&PTR_FUN_144dca608;
      plVar12 = plVar10;
    }
    plVar10 = local_e8;
    iVar5 = (int)local_e8[1];
    *(int *)(local_e8 + 1) = iVar5 + 1;
    if (*(int *)((longlong)local_e8 + 0xc) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e8,iVar5);
    }
    *(longlong **)(*plVar10 + (longlong)iVar5 * 8) = plVar12;
    (**(code **)(*plVar12 + 0x18))(plVar12,0,&local_c8);
    pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
    bVar14 = true;
    pcStack_c0 = pcStack_140;
    local_148 = plVar12;
    local_c8 = plVar12;
  }
  plVar12 = (longlong *)0x0;
  if ((((param_4 + 1U & 0xfffffffb) == 0) && ((*(byte *)(param_3 + 0x17d8) & 1) != 0)) &&
     (((byte)*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x28) & 0x21) == 0x21)) {
    pcStack_140 = local_res20;
    local_res20[0] = '\0';
    local_148 = (longlong *)&DAT_14060d670;
    lVar8 = FUN_1415d8310(&local_148,&DAT_146216a38);
    lVar8 = operator_new(0xb0,lVar8 + 0x18,1);
    if (lVar8 != 0) {
      plVar12 = (longlong *)FUN_141afae90(lVar8,param_5);
    }
    iVar5 = (int)local_e8[1];
    *(int *)(local_e8 + 1) = iVar5 + 1;
    if (*(int *)((longlong)local_e8 + 0xc) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e8,iVar5);
    }
    *(longlong **)(*local_e8 + (longlong)iVar5 * 8) = plVar12;
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_c8);
    pcStack_140 = (char *)((ulonglong)pcStack_140 & 0xffffffff00000000);
    bVar14 = true;
    pcStack_c0 = pcStack_140;
    local_148 = plVar12;
    local_c8 = plVar12;
  }
  local_138 = (undefined8 *)0x0;
  local_128 = (undefined *)0x0;
  pcStack_120 = (char *)0x0;
  FScopedGPUStatEvent::Begin(&local_128,param_2,&DAT_1469fe0e0,&local_138);
  if (bVar14) {
    uVar11 = FHardwareCursor::GetHandle(&local_c8);
    local_138 = (undefined8 *)0x0;
    local_130 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138,0);
    *local_138 = uVar11;
    FUN_141cf2100(local_b8,&local_138,L"CompositionLighting");
    if (local_138 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_128 != (undefined *)0x0) {
    FScopedGPUStatEvent::End(&local_128);
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_b8);
  if (local_100 == '\0') {
    local_100 = '\x01';
    *(int *)(local_118 + 4) = *(int *)(local_118 + 4) + -1;
    if (local_108 != local_118[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_118 = local_110;
    local_118[3] = local_f8;
  }
  if (((param_4 + 1U & 0xfffffffb) == 0) &&
     (*(longlong *)
       (**(longlong **)(param_3 + 0x10) + -8 +
       (longlong)(int)(*(longlong **)(param_3 + 0x10))[1] * 8) == param_3)) {
    FSceneRenderTargets::SetLightAttenuation(puVar7,0);
  }
  return;
}



// FUNCTION 141acc410 FUN_141acc410 body=1447 status=ok
// SIG undefined FUN_141acc410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141acc410(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_res20 [8];
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  longlong local_148;
  char local_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  
  if (*(int *)(DAT_1469fe118 + 4) != 0) {
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar9 < DAT_146a0af38) && (_Init_thread_header(&DAT_146a0af38), DAT_146a0af38 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a0af30 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EnableAsyncComputeDistortion");
      _Init_thread_footer(&DAT_146a0af38);
    }
    iVar12 = 0;
    if (((DAT_146ab62f0 != '\0') && (DAT_146a0af30 != (longlong *)0x0)) &&
       (iVar3 = (**(code **)(*DAT_146a0af30 + 0x68))(), 0 < iVar3)) {
      if ((*piVar9 < DAT_146a0af48) && (_Init_thread_header(&DAT_146a0af48), DAT_146a0af48 == -1)) {
        FName::FName(&DAT_146a0af40,L"AsyncLightDistortionFence",1);
        _Init_thread_footer(&DAT_146a0af48);
      }
      (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,local_res20,&DAT_146a0af40);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,local_res20);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res20);
      puVar7 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar7 + 3;
      if (DAT_146ab7068 < puVar10) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
        puVar7 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar7 + 3;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar10;
      *DAT_146ab7038 = puVar7;
      DAT_146ab7038 = puVar7 + 1;
      *DAT_146ab7038 = 0;
      *puVar7 = &PTR_LAB_144dc9cf0;
      *(undefined4 *)(puVar7 + 2) = 4;
    }
    if (0 < (int)param_3[1]) {
      do {
        uVar6 = 0;
        puStack_110 = local_res20;
        local_118 = &DAT_14060d670;
        lVar11 = (longlong)iVar12 * 0x30d0 + *param_3;
        local_res20[0] = 0;
        local_128 = 0x4060d670;
        uStack_124 = 1;
        uStack_120 = puStack_110;
        lVar4 = FUN_1415d8310(&local_128,&DAT_146216a38);
        local_158 = (undefined8 *)(lVar4 + 0x18);
        local_150 = *local_158;
        local_148 = *(longlong *)(lVar4 + 0x28);
        local_140 = '\0';
        local_138 = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 ***)(lVar4 + 0x30) = &local_158;
        *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
        FUN_141cd7760(local_a8,param_2,lVar11);
        FUN_141c40530(local_e8,param_2,local_78,lVar11);
        puStack_100 = local_res20;
        local_108 = &DAT_14060d670;
        local_128 = 0x4060d670;
        uStack_124 = 1;
        local_res20[0] = 0;
        uStack_120 = puStack_100;
        lVar4 = FUN_1415d8310(&local_128,&DAT_146216a38);
        uVar8 = *(longlong *)(lVar4 + 0x18) + 0xfU & 0xfffffffffffffff0;
        puVar1 = (ulonglong *)(lVar4 + 0x18);
        uVar5 = uVar8 + 0x250;
        if (*(ulonglong *)(lVar4 + 0x20) < uVar5) {
          FMemStackBase::AllocateNewChunk(puVar1,0x260);
          uVar8 = *puVar1 + 0xf & 0xfffffffffffffff0;
          uVar5 = uVar8 + 0x250;
        }
        *puVar1 = uVar5;
        if (uVar8 != 0) {
          uVar6 = FUN_141c759b0(uVar8,lVar11,iVar12 == 0);
        }
        plVar2 = local_e0;
        iVar3 = (int)local_e0[1];
        *(int *)(local_e0 + 1) = iVar3 + 1;
        if (*(int *)((longlong)local_e0 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e0,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = uVar6;
        uStack_f0 = 0;
        local_f8._0_4_ = (undefined4)uVar6;
        local_f8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_c0 = (undefined4)local_f8;
        uStack_bc = local_f8._4_4_;
        uStack_b8 = 0;
        uStack_b4 = uStack_ec;
        local_f8 = uVar6;
        uVar6 = FHardwareCursor::GetHandle(&local_c0);
        local_168 = (undefined8 *)0x0;
        local_160 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,0);
        *local_168 = uVar6;
        FUN_141cf2100(local_a8,&local_168,L"Composition_ProcessAsyncLightDistortion");
        if (local_168 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        FRenderingCompositePassContext::~FRenderingCompositePassContext(local_a8);
        if (local_140 == '\0') {
          local_140 = '\x01';
          *(int *)(local_158 + 4) = *(int *)(local_158 + 4) + -1;
          if (local_148 != local_158[2]) {
            FMemStackBase::FreeChunks();
          }
          *local_158 = local_150;
          local_158[3] = local_138;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)param_3[1]);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      puVar7 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar7 + 3;
      if (DAT_146ab7068 < puVar10) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
        puVar7 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar7 + 3;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar10;
      *DAT_146ab7038 = puVar7;
      DAT_146ab7038 = puVar7 + 1;
      *DAT_146ab7038 = 0;
      *puVar7 = &PTR_LAB_144dc9cf0;
      *(undefined4 *)(puVar7 + 2) = 4;
      uVar6 = *(undefined8 *)(param_1 + 8);
      puVar10 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      if (DAT_146ab7068 < puVar10) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,8);
        puVar10 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      }
      DAT_146ab7060 = puVar10 + 6;
      puVar7 = puVar10;
      if (DAT_146ab7068 < DAT_146ab7060) {
        DAT_146ab7060 = puVar10;
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar7 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        DAT_146ab7060 = puVar7 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      *DAT_146ab7038 = puVar7;
      DAT_146ab7038 = puVar7 + 1;
      *DAT_146ab7038 = 0;
      *puVar7 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar7 + 2) = 0;
      puVar7[3] = puVar10;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x24) = 1;
      puVar7[5] = uVar6;
      FUN_141ec93f0(&DAT_146ab7030);
    }
  }
  return;
}



// FUNCTION 141acc9c0 FUN_141acc9c0 body=1587 status=ok
// SIG undefined FUN_141acc9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141acc9c0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 local_res20 [8];
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  longlong local_158;
  char local_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a0af28) && (_Init_thread_header(&DAT_146a0af28), DAT_146a0af28 == -1))
  {
    FName::FName(&DAT_146a0af20,L"AsyncSSAOFence",1);
    _Init_thread_footer(&DAT_146a0af28);
  }
  (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,local_res20,&DAT_146a0af20);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_res20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res20);
  uVar12 = 0;
  iVar4 = *(int *)(DAT_1469fe2e0 + 4);
  iVar15 = 0;
  if ((-1 < iVar4) && (iVar15 = 4, iVar4 < 4)) {
    iVar15 = iVar4;
  }
  puVar8 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
  puVar11 = puVar8 + 3;
  if (DAT_146ab7068 < puVar11) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
    puVar8 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar8 + 3;
  }
  _DAT_146ab7044 = _DAT_146ab7044 + 1;
  DAT_146ab7060 = puVar11;
  *DAT_146ab7038 = puVar8;
  DAT_146ab7038 = puVar8 + 1;
  *DAT_146ab7038 = 0;
  *puVar8 = &PTR_LAB_144dc9cf0;
  *(int *)(puVar8 + 2) = iVar15;
  uVar14 = uVar12;
  if (0 < (int)param_3[1]) {
    do {
      puStack_120 = local_res20;
      local_128 = &DAT_14060d670;
      lVar9 = *param_3 + uVar12;
      local_138 = 0x4060d670;
      uStack_134 = 1;
      local_res20[0] = 0;
      uStack_130 = puStack_120;
      lVar5 = FUN_1415d8310(&local_138,&DAT_146216a38);
      local_168 = (undefined8 *)(lVar5 + 0x18);
      local_160 = *local_168;
      local_158 = *(longlong *)(lVar5 + 0x28);
      local_150 = '\0';
      local_148 = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 ***)(lVar5 + 0x30) = &local_168;
      *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
      FUN_141cd7760(local_a8,param_2,lVar9);
      iVar4 = FUN_141ab5fb0(lVar9);
      if ((((*(int *)(lVar9 + 0x1a38) < 3) || (iVar15 = *(int *)(DAT_1469fe280 + 4), iVar15 < 1)) ||
          ((iVar4 != 1 && ((*(byte *)(lVar9 + 0x1694) & 1) == 0)))) || (iVar15 < 2)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = DAT_146ab62f0;
        if (iVar15 == 3) {
          cVar3 = '\x01';
        }
      }
      if (cVar3 != '\0') {
        FUN_141c40530(local_e8,param_2,local_78,lVar9);
        if ((*(byte *)(lVar9 + 0x1694) & 1) == 0) {
          FUN_141ab47b0(&local_f8,param_2,local_e8,iVar4);
          local_c0 = local_f8;
          uStack_bc = uStack_f4;
          uStack_b8 = uStack_f0;
          uStack_b4 = uStack_ec;
        }
        else {
          lVar5 = FSceneRenderTargets::Get(param_2);
          local_res20[0] = 0;
          puStack_110 = local_res20;
          local_118 = &DAT_14060d670;
          local_138 = 0x4060d670;
          uStack_134 = 1;
          uStack_130 = puStack_110;
          lVar9 = FUN_1415d8310(&local_138,&DAT_146216a38);
          plVar10 = (longlong *)(*(longlong *)(lVar9 + 0x18) + 0xfU & 0xfffffffffffffff0);
          puVar1 = (ulonglong *)(lVar9 + 0x18);
          plVar6 = plVar10 + 0x16;
          if (*(longlong **)(lVar9 + 0x20) < plVar6) {
            FMemStackBase::AllocateNewChunk(puVar1,0xc0);
            plVar10 = (longlong *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            plVar6 = plVar10 + 0x16;
          }
          plVar2 = local_e0;
          *puVar1 = (ulonglong)plVar6;
          if (plVar10 != (longlong *)0x0) {
            *(undefined4 *)(plVar10 + 1) = 0;
            plVar10[2] = 0;
            *(undefined4 *)(plVar10 + 3) = 0;
            plVar10[4] = 1;
            plVar10[5] = 0;
            plVar10[6] = 0;
            plVar10[7] = 0;
            plVar10[8] = 1;
            *(undefined2 *)(plVar10 + 9) = 1;
            *(undefined8 *)((longlong)plVar10 + 0x4c) = 0;
            *(undefined4 *)((longlong)plVar10 + 0x54) = 0;
            *(undefined1 *)(plVar10 + 0xb) = 0;
            plVar10[0xc] = (longlong)L"UnknownTexture";
            *(undefined2 *)(plVar10 + 0xd) = 1;
            plVar10[0xe] = 0;
            *(undefined4 *)(plVar10 + 0xf) = 0;
            plVar10[0x10] = 0;
            plVar10[0x11] = 0;
            plVar10[0x13] = 0;
            plVar10[0x14] = 0;
            plVar10[0x12] = 0;
            *plVar10 = (longlong)&PTR__scalar_deleting_destructor__144dca580;
            *(undefined1 *)(plVar10 + 0x15) = 1;
          }
          iVar4 = (int)local_e0[1];
          *(int *)(local_e0 + 1) = iVar4 + 1;
          if (*(int *)((longlong)local_e0 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_e0,iVar4);
          }
          *(longlong **)(*plVar2 + (longlong)iVar4 * 8) = plVar10;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_c0);
          uStack_100 = 0;
          local_108._0_4_ = SUB84(plVar10,0);
          local_108._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
          local_c0 = (undefined4)local_108;
          uStack_bc = local_108._4_4_;
          uStack_b8 = 0;
          uStack_b4 = uStack_fc;
          *(undefined1 *)(lVar5 + 0x2d8) = 1;
          local_108 = plVar10;
        }
        uVar7 = FHardwareCursor::GetHandle(&local_c0);
        local_178 = (undefined8 *)0x0;
        local_170 = 1;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_178,0);
        *local_178 = uVar7;
        FUN_141cf2100(local_a8,&local_178,L"Composition_ProcessAsyncSSAO");
        if (local_178 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
      FRenderingCompositePassContext::~FRenderingCompositePassContext(local_a8);
      if (local_150 == '\0') {
        local_150 = '\x01';
        *(int *)(local_168 + 4) = *(int *)(local_168 + 4) + -1;
        if (local_158 != local_168[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_168 = local_160;
        local_168[3] = local_148;
      }
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 0x30d0;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)param_3[1]);
  }
  if (*param_1 != 0) {
    puVar8 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar11 = puVar8 + 3;
    if (DAT_146ab7068 < puVar11) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
      puVar8 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar8 + 3;
    }
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    DAT_146ab7060 = puVar11;
    *DAT_146ab7038 = puVar8;
    DAT_146ab7038 = puVar8 + 1;
    *DAT_146ab7038 = 0;
    *puVar8 = &PTR_LAB_144dc9cf0;
    *(undefined4 *)(puVar8 + 2) = 4;
    lVar5 = *param_1;
    puVar11 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    if (DAT_146ab7068 < puVar11) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,8);
      puVar11 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    }
    DAT_146ab7060 = puVar11 + 6;
    puVar8 = puVar11;
    if (DAT_146ab7068 < DAT_146ab7060) {
      DAT_146ab7060 = puVar11;
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
      puVar8 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      DAT_146ab7060 = puVar8 + 6;
    }
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    *DAT_146ab7038 = puVar8;
    DAT_146ab7038 = puVar8 + 1;
    *DAT_146ab7038 = 0;
    *puVar8 = &PTR_LAB_144dc9d00;
    *(undefined4 *)(puVar8 + 2) = 0;
    puVar8[3] = puVar11;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 1;
    puVar8[5] = lVar5;
    FUN_141ec93f0(&DAT_146ab7030);
  }
  return;
}



// FUNCTION 141acd000 FUN_141acd000 body=613 status=ok
// SIG undefined FUN_141acd000(void)

void FUN_141acd000(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong local_res20;
  undefined8 *local_108;
  ulonglong *puStack_100;
  undefined *local_f8;
  ulonglong *puStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  longlong local_b0;
  longlong *local_98;
  ulonglong uStack_90;
  undefined1 local_88 [48];
  undefined1 local_58 [64];
  
  puStack_100 = &local_res20;
  local_res20 = local_res20 & 0xffffffffffffff00;
  local_f8 = &DAT_14060d670;
  local_108 = (undefined8 *)&DAT_14060d670;
  puStack_f0 = puStack_100;
  lVar2 = FUN_1415d8310(&local_108,&DAT_146216a38);
  local_e8 = (undefined8 *)(lVar2 + 0x18);
  local_e0 = *local_e8;
  local_d8 = *(longlong *)(lVar2 + 0x28);
  local_d0 = '\0';
  local_c8 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 ***)(lVar2 + 0x30) = &local_e8;
  *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
  FUN_141cd7760(local_88,param_2,param_3);
  FUN_141c40530(local_c0,param_2,local_58,param_3);
  uVar3 = 0;
  if (((*(uint *)(*(longlong *)(local_b0 + 0x10) + 0x28) & 0x1000) != 0) &&
     (cVar1 = FUN_141ac2820(), cVar1 != '\0')) {
    puStack_100 = &local_res20;
    local_108 = (undefined8 *)&DAT_14060d670;
    local_res20 = local_res20 & 0xffffffffffffff00;
    lVar2 = FUN_1415d8310(&local_108,&DAT_146216a38);
    lVar2 = operator_new(0xb0,lVar2 + 0x18,1,0);
    if (lVar2 != 0) {
      uVar3 = FUN_141aafce0(lVar2,0,*(undefined1 *)(param_1 + 0x10));
    }
    plVar4 = (longlong *)
             FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
                       (local_b8,uVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4,0,&local_98);
    puStack_f0 = (ulonglong *)((ulonglong)puStack_f0 & 0xffffffff00000000);
    *(undefined1 *)(param_1 + 0x10) = 0;
    uStack_90 = (ulonglong)puStack_f0;
    local_98 = plVar4;
  }
  local_res20 = 0;
  local_f8 = (undefined *)0x0;
  puStack_f0 = (ulonglong *)0x0;
  FScopedGPUStatEvent::Begin(&local_f8,param_2,&DAT_1469fe0b0,&local_res20);
  uVar3 = FHardwareCursor::GetHandle(&local_98);
  local_108 = (undefined8 *)0x0;
  puStack_100 = (ulonglong *)0x1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,0);
  *local_108 = uVar3;
  FUN_141cf2100(local_88,&local_108,L"Composition_BeforeBasePass");
  if (local_108 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_f8 != (undefined *)0x0) {
    FScopedGPUStatEvent::End(&local_f8);
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_88);
  if (local_d0 == '\0') {
    local_d0 = 1;
    *(int *)(local_e8 + 4) = *(int *)(local_e8 + 4) + -1;
    if (local_d8 != local_e8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_e8 = local_e0;
    local_e8[3] = local_c8;
  }
  return;
}



// FUNCTION 141acd270 FUN_141acd270 body=2199 status=ok
// SIG undefined FUN_141acd270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141acd270(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 param_5,int param_6,char param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_141a19150(*(undefined8 *)(param_2 + 0x40),0,0,0);
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_38,0,0x3f800000);
  if (*(int *)(param_1 + 0xd8) != 2) {
    lVar1 = *(longlong *)(param_2 + 0x40);
    local_res10 = param_3[2];
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 1;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 1;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar3;
    *puVar5 = local_res10;
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 6;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x38);
      puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 6;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar3;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar4;
    *(undefined8 **)(lVar1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar4 + 2) = 1;
    puVar4[3] = puVar5;
    puVar4[4] = 2;
    puVar4[5] = 0;
    if (param_6 == 0) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa15f0(param_1,*(undefined8 *)(param_2 + 0x40),param_2,param_5,param_3[2]);
        }
        else {
          FUN_141a9fbb0();
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9e170();
      }
      else {
        FUN_141a9c730();
      }
    }
    else if (param_6 == 1) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa00f0(param_1,*(undefined8 *)(param_2 + 0x40),param_2,param_5,param_3[2]);
        }
        else {
          FUN_141a9e6b0();
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9cc70();
      }
      else {
        FUN_141a9b230();
      }
    }
    else if (param_6 == 2) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa0630(param_1,*(undefined8 *)(param_2 + 0x40),param_2,param_5,param_3[2]);
        }
        else {
          FUN_141a9ebf0();
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9d1b0();
      }
      else {
        FUN_141a9b770();
      }
    }
    else if (param_6 == 3) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa0b70(param_1,*(undefined8 *)(param_2 + 0x40),param_2,param_5,param_3[2]);
        }
        else {
          FUN_141a9f130();
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9d6f0();
      }
      else {
        FUN_141a9bcb0();
      }
    }
    else if (param_6 == 4) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa10b0(param_1,*(undefined8 *)(param_2 + 0x40),param_2,param_5,param_3[2]);
        }
        else {
          FUN_141a9f670();
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9dc30();
      }
      else {
        FUN_141a9c1f0();
      }
    }
    goto LAB_141acd9f9;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e678) {
    _Init_thread_header(&DAT_146a0e678);
    if (DAT_146a0e678 == -1) {
      FName::FName(&DAT_146a0e670,L"AsyncStartFence",1);
      _Init_thread_footer(&DAT_146a0e678);
    }
  }
  (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_res8,&DAT_146a0e670);
  uVar2 = local_res8;
  lVar1 = *(longlong *)(param_2 + 0x40);
  local_res10 = param_3[2];
  puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *puVar5 = local_res10;
  puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 6;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x38);
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 6;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar4;
  *(undefined8 **)(lVar1 + 8) = puVar4 + 1;
  puVar4[5] = uVar2;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar4 + 2) = 1;
  puVar4[3] = puVar5;
  puVar4[4] = 2;
  puVar5 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 3;
  if (DAT_146ab7068 < puVar3) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
    puVar5 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 3;
  }
  _DAT_146ab7044 = _DAT_146ab7044 + 1;
  DAT_146ab7060 = puVar3;
  *DAT_146ab7038 = puVar5;
  DAT_146ab7038 = puVar5 + 1;
  *DAT_146ab7038 = 0;
  *puVar5 = &PTR_LAB_144dc9d10;
  puVar5[2] = local_res8;
  if (param_6 == 0) {
    if (*(char *)(param_1 + 0xdc) != '\0') {
      if (param_7 == '\0') {
        FUN_141a9ded0();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      else {
        FUN_141a9c490();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      goto LAB_141acd9f9;
    }
    if (param_7 != '\0') {
      FUN_141a9f910();
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      goto LAB_141acd9f9;
    }
    FUN_141aa1350(param_1,&DAT_146ab7030,param_2,param_5,param_3[2]);
  }
  else {
    if (param_6 == 1) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141a9fe50(param_1,&DAT_146ab7030,param_2,param_5,param_3[2]);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
        else {
          FUN_141a9e410();
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9c9d0();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      else {
        FUN_141a9af90();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      goto LAB_141acd9f9;
    }
    if (param_6 == 2) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa0390(param_1,&DAT_146ab7030,param_2,param_5,param_3[2]);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
        else {
          FUN_141a9e950();
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9cf10();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      else {
        FUN_141a9b4d0();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      goto LAB_141acd9f9;
    }
    if (param_6 == 3) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa08d0(param_1,&DAT_146ab7030,param_2,param_5,param_3[2]);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
        else {
          FUN_141a9ee90();
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9d450();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      else {
        FUN_141a9ba10();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      goto LAB_141acd9f9;
    }
    if (param_6 == 4) {
      if (*(char *)(param_1 + 0xdc) == '\0') {
        if (param_7 == '\0') {
          FUN_141aa0e10(param_1,&DAT_146ab7030,param_2,param_5,param_3[2]);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
        else {
          FUN_141a9f3d0();
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
      }
      else if (param_7 == '\0') {
        FUN_141a9d990();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      else {
        FUN_141a9bf50();
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      goto LAB_141acd9f9;
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
LAB_141acd9f9:
  lVar1 = *(longlong *)(param_2 + 0x40);
  local_res10 = *param_3;
  puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *puVar5 = local_res10;
  puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar4;
  *(undefined8 **)(lVar1 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar4 + 2) = 1;
  puVar4[3] = puVar5;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  return;
}



// FUNCTION 141acdb10 FUN_141acdb10 body=791 status=ok
// SIG undefined FUN_141acdb10(void)

void FUN_141acdb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong local_res20;
  longlong *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  ulonglong *puStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [48];
  undefined1 local_68 [64];
  
  puStack_110 = &local_res20;
  local_res20 = local_res20 & 0xffffffffffffff00;
  local_108 = &DAT_14060d670;
  local_118 = (longlong *)&DAT_14060d670;
  puStack_100 = puStack_110;
  lVar2 = FUN_1415d8310(&local_118,&DAT_146216a38);
  local_f8 = (undefined8 *)(lVar2 + 0x18);
  local_f0 = *local_f8;
  local_e8 = *(longlong *)(lVar2 + 0x28);
  local_e0 = '\0';
  local_d8 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 ***)(lVar2 + 0x30) = &local_f8;
  *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
  FUN_141cd7760(local_98,param_2,param_3);
  FUN_141c40530(local_d0,param_2,local_68,param_3);
  FSceneRenderTargets::Get(param_2);
  lVar2 = operator_new(0xb0);
  plVar5 = (longlong *)0x0;
  plVar3 = plVar5;
  if (lVar2 != 0) {
    plVar3 = (longlong *)FRCPassPostProcessInput::FRCPassPostProcessInput(lVar2);
  }
  plVar4 = local_c8;
  lVar2 = local_c8[1];
  iVar1 = (int)lVar2 + 1;
  *(int *)(local_c8 + 1) = iVar1;
  if (*(int *)((longlong)local_c8 + 0xc) < iVar1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c8);
  }
  *(longlong **)(*plVar4 + (longlong)(int)lVar2 * 8) = plVar3;
  plVar4 = (longlong *)operator_new(0xb8);
  if (plVar4 != (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(plVar4,0,0xb8);
    *(undefined4 *)(plVar4 + 3) = 0;
    plVar4[4] = 0;
    *(undefined4 *)(plVar4 + 5) = 0;
    plVar4[6] = 1;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[0xe] = (longlong)L"UnknownTexture";
    plVar4[10] = 1;
    *(undefined2 *)(plVar4 + 0xb) = 1;
    *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    *(undefined1 *)(plVar4 + 0xd) = 0;
    *(undefined2 *)(plVar4 + 0xf) = 1;
    plVar4[0x10] = 0;
    *(undefined4 *)(plVar4 + 0x11) = 0;
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    plVar4[0x15] = 0;
    plVar4[0x16] = 0;
    plVar4[0x14] = 0;
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144dca180;
    plVar5 = plVar4;
  }
  iVar1 = (int)local_c8[1];
  *(int *)(local_c8 + 1) = iVar1 + 1;
  if (*(int *)((longlong)local_c8 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_c8,iVar1);
  }
  *(longlong **)(*local_c8 + (longlong)iVar1 * 8) = plVar5;
  (**(code **)(*plVar5 + 0x18))(plVar5,0,&local_a8);
  puStack_110 = (ulonglong *)((ulonglong)puStack_110 & 0xffffffff00000000);
  local_118 = plVar3;
  (**(code **)(*plVar5 + 0x18))(plVar5,1,&local_118);
  uStack_9c = (undefined4)((ulonglong)puStack_100 >> 0x20);
  local_108._0_4_ = SUB84(plVar5,0);
  local_108._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
  local_res20 = 0;
  local_a8 = (undefined4)local_108;
  uStack_a4 = local_108._4_4_;
  uStack_a0 = 0;
  local_108 = (undefined *)0x0;
  puStack_100 = (ulonglong *)0x0;
  FScopedGPUStatEvent::Begin(&local_108,param_2,&DAT_1469fe0d0,&local_res20);
  lVar2 = FHardwareCursor::GetHandle(&local_a8);
  local_118 = (longlong *)0x0;
  puStack_110 = (ulonglong *)0x1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,0);
  *local_118 = lVar2;
  FUN_141cf2100(local_98,&local_118,L"CompositionLighting");
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_108 != (undefined *)0x0) {
    FScopedGPUStatEvent::End(&local_108);
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_98);
  if (local_e0 == '\0') {
    local_e0 = 1;
    *(int *)(local_f8 + 4) = *(int *)(local_f8 + 4) + -1;
    if (local_e8 != local_f8[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_f8 = local_f0;
    local_f8[3] = local_d8;
  }
  return;
}



// FUNCTION 141acde30 FUN_141acde30 body=1024 status=ok
// SIG undefined FUN_141acde30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141acde30(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,int param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_188 [32];
  float local_168;
  float local_160;
  float local_158;
  float local_150;
  float local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined8 local_118;
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
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar3 = 0;
  local_118 = 0;
  FUN_141a19150(*(undefined8 *)(param_2 + 0x40),*param_3,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_118);
  local_118 = *(undefined8 *)param_4;
  uStack_110 = *(undefined8 *)(param_4 + 2);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_118);
  local_c8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  FUN_14049afe0(*(undefined8 *)(param_2 + 0x40),&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  local_bc = local_bc & 0xffffffff00000000;
  if (param_6 == 0) {
    if (*(char *)(param_1 + 0xdc) == '\0') {
      if (param_7 == '\0') {
        uVar3 = FUN_141aac4b0(param_1,param_2,&local_108);
      }
      else {
        uVar3 = FUN_141aabbf0();
      }
    }
    else if (param_7 == '\0') {
      uVar3 = FUN_141aab330();
    }
    else {
      uVar3 = FUN_141aaaa70();
    }
  }
  else if (param_6 == 1) {
    if (*(char *)(param_1 + 0xdc) == '\0') {
      if (param_7 == '\0') {
        uVar3 = FUN_141aabdb0(param_1,param_2,&local_108);
      }
      else {
        uVar3 = FUN_141aab4f0();
      }
    }
    else if (param_7 == '\0') {
      uVar3 = FUN_141aaac30();
    }
    else {
      uVar3 = FUN_141aaa370();
    }
  }
  else if (param_6 == 2) {
    if (*(char *)(param_1 + 0xdc) == '\0') {
      if (param_7 == '\0') {
        uVar3 = FUN_141aabf70(param_1,param_2,&local_108);
      }
      else {
        uVar3 = FUN_141aab6b0();
      }
    }
    else if (param_7 == '\0') {
      uVar3 = FUN_141aaadf0();
    }
    else {
      uVar3 = FUN_141aaa530();
    }
  }
  else if (param_6 == 3) {
    if (*(char *)(param_1 + 0xdc) == '\0') {
      if (param_7 == '\0') {
        uVar3 = FUN_141aac130(param_1,param_2,&local_108);
      }
      else {
        uVar3 = FUN_141aab870();
      }
    }
    else if (param_7 == '\0') {
      uVar3 = FUN_141aaafb0();
    }
    else {
      uVar3 = FUN_141aaa6f0();
    }
  }
  else if (param_6 == 4) {
    if (*(char *)(param_1 + 0xdc) == '\0') {
      if (param_7 == '\0') {
        uVar3 = FUN_141aac2f0(param_1,param_2,&local_108);
      }
      else {
        uVar3 = FUN_141aaba30();
      }
    }
    else if (param_7 == '\0') {
      uVar3 = FUN_141aab170();
    }
    else {
      uVar3 = FUN_141aaa8b0();
    }
  }
  iVar2 = param_4[3] - param_4[1];
  local_120 = 1;
  iVar6 = param_4[2] - *param_4;
  local_128 = 1;
  local_168 = (float)iVar2;
  local_138 = *param_5;
  local_118 = CONCAT44(iVar2,iVar6);
  local_140 = local_118;
  local_150 = (float)iVar6;
  local_160 = (float)*param_4;
  local_158 = (float)param_4[1];
  local_148 = local_168;
  local_130 = uVar3;
  DrawRectangle(*(undefined8 *)(param_2 + 0x40),0);
  lVar1 = *(longlong *)(param_2 + 0x40);
  local_118 = *param_3;
  puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar7 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar4;
  *puVar7 = local_118;
  puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 5;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x30);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar4;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar5;
  *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar5 + 2) = 1;
  puVar5[3] = puVar7;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x24) = 0;
  return;
}



// FUNCTION 141ace230 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141ace35f;
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
LAB_141ace35f:
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
        lVar6 = (longlong)iStack_2c * 0xf0 + *param_1;
        uVar5 = FMeshDrawingPolicy::GetTypeHash(lVar6 + 0x20);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0xec) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xe8) =
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



// FUNCTION 141ace450 FUN_141ace450 body=131 status=ok
// SIG undefined FUN_141ace450(void)

void FUN_141ace450(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if ((iVar3 == 1) && (lVar2 = *param_1, *(char *)(lVar2 + 0x11) != '\0')) {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar2);
      }
      *(undefined1 *)(lVar2 + 0x11) = 0;
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 1,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,0);
  return;
}



// FUNCTION 141ace4e0 Remove body=1031 status=ok
// SIG undefined Remove(void)

void TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElementHandle::Remove
               (longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x1c);
  lVar10 = (longlong)iVar7;
  plVar9 = (longlong *)((longlong)*(int *)(param_1 + 0x18) * 0xf0 + *(longlong *)(lVar2 + 0x40));
  if (param_2 != '\0') {
    FUN_141d78430(*(undefined8 *)(lVar10 * 0x38 + 8 + plVar9[2]),param_1);
  }
  iVar12 = 0;
  *(undefined8 *)(lVar10 * 0x38 + 8 + plVar9[2]) = 0;
  iVar6 = *(int *)((longlong)plVar9 + 0x1c);
  iVar4 = *(int *)((longlong)plVar9 + 0xc);
  TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
  ::RemoveAtSwapImpl(plVar9 + 2,iVar7,1,1);
  iVar1 = (int)plVar9[1];
  iVar3 = (iVar1 - iVar7) + -1;
  if (0 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*plVar9 + lVar10 * 4),(void *)(*plVar9 + (longlong)(iVar1 - iVar3) * 4),
               (longlong)iVar3 << 2);
    iVar1 = (int)plVar9[1];
  }
  *(int *)(plVar9 + 1) = iVar1 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar9);
  DAT_146a81050 =
       DAT_146a81050 -
       (ulonglong)
       (uint)((iVar6 * 0xe + iVar4) * 4 +
             (*(int *)((longlong)plVar9 + 0x1c) * 0xe + *(int *)((longlong)plVar9 + 0xc)) * -4);
  iVar6 = (int)plVar9[3];
  if (iVar7 < iVar6) {
    *(int *)(*(longlong *)(lVar10 * 0x38 + 0x30 + plVar9[2]) + 0x1c) = iVar7;
    iVar6 = (int)plVar9[3];
  }
  if (iVar6 == 0) {
    DAT_146a81050 =
         DAT_146a81050 +
         ((-0xe8 - (ulonglong)(uint)(*(int *)((longlong)plVar9 + 0x1c) * 0x38)) -
         (ulonglong)(uint)(*(int *)((longlong)plVar9 + 0xc) << 2));
    iVar6 = *(int *)(lVar2 + 0x38);
    iVar7 = iVar6 + -1;
    if (0 < iVar7) {
      iVar6 = iVar12;
      do {
        iVar4 = (iVar7 + iVar6) / 2;
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar4 * 4) * 0xf0 +
                 *(longlong *)(lVar2 + 0x40);
        if (*(ulonglong *)(lVar10 + 0x60) < (ulonglong)plVar9[0xc]) {
          uVar5 = 0xffffffff;
        }
        else if ((ulonglong)plVar9[0xc] < *(ulonglong *)(lVar10 + 0x60)) {
          uVar5 = 1;
        }
        else if (*(ulonglong *)(lVar10 + 0x78) < (ulonglong)plVar9[0xf]) {
          uVar5 = 0xffffffff;
        }
        else if ((ulonglong)plVar9[0xf] < *(ulonglong *)(lVar10 + 0x78)) {
          uVar5 = 1;
        }
        else if (*(ulonglong *)(lVar10 + 0x68) < (ulonglong)plVar9[0xd]) {
          uVar5 = 0xffffffff;
        }
        else if ((ulonglong)plVar9[0xd] < *(ulonglong *)(lVar10 + 0x68)) {
          uVar5 = 1;
        }
        else if (*(ulonglong *)(lVar10 + 0x70) < (ulonglong)plVar9[0xe]) {
          uVar5 = 0xffffffff;
        }
        else if ((ulonglong)plVar9[0xe] < *(ulonglong *)(lVar10 + 0x70)) {
          uVar5 = 1;
        }
        else if (*(ulonglong *)(lVar10 + 0x28) < (ulonglong)plVar9[5]) {
          uVar5 = 0xffffffff;
        }
        else if ((ulonglong)plVar9[5] < *(ulonglong *)(lVar10 + 0x28)) {
          uVar5 = 1;
        }
        else if (*(ulonglong *)(lVar10 + 0x30) < (ulonglong)plVar9[6]) {
          uVar5 = 0xffffffff;
        }
        else if ((ulonglong)plVar9[6] < *(ulonglong *)(lVar10 + 0x30)) {
          uVar5 = 1;
        }
        else {
          uVar5 = *(uint *)(lVar10 + 0x88) & 1;
          if (uVar5 < (*(uint *)(plVar9 + 0x11) & 1)) {
            uVar5 = 0xffffffff;
          }
          else if ((*(uint *)(plVar9 + 0x11) & 1) < uVar5) {
            uVar5 = 1;
          }
          else {
            uVar5 = *(uint *)(lVar10 + 0x58) & 1;
            if (uVar5 < (*(uint *)(plVar9 + 0xb) & 1)) {
              uVar5 = 0xffffffff;
            }
            else if ((*(uint *)(plVar9 + 0xb) & 1) < uVar5) {
              uVar5 = 1;
            }
            else if (*(int *)(lVar10 + 0x80) < (int)plVar9[0x10]) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)((int)plVar9[0x10] < *(int *)(lVar10 + 0x80));
            }
          }
        }
        iVar12 = iVar4 + 1;
        if (-1 < (int)uVar5) {
          iVar12 = iVar6;
          iVar7 = iVar4;
        }
        iVar6 = iVar12;
      } while (iVar12 < iVar7);
      iVar6 = *(int *)(lVar2 + 0x38);
    }
    if (iVar12 < iVar6) {
      lVar10 = (longlong)iVar12;
      piVar8 = (int *)(*(longlong *)(lVar2 + 0x30) + lVar10 * 4);
      do {
        if (*piVar8 == *(int *)(param_1 + 0x18)) break;
        iVar12 = iVar12 + 1;
        lVar10 = lVar10 + 1;
        piVar8 = piVar8 + 1;
      } while (lVar10 < iVar6);
    }
    if (iVar12 < iVar6) {
      iVar7 = *(int *)(lVar2 + 0x38);
      iVar6 = (iVar7 - iVar12) + -1;
      if (iVar6 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar12 * 4),
                   (void *)(*(longlong *)(lVar2 + 0x30) + (longlong)(iVar12 + 1) * 4),
                   (longlong)iVar6 << 2);
        iVar7 = *(int *)(lVar2 + 0x38);
      }
      *(int *)(lVar2 + 0x38) = iVar7 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar2 + 0x30);
    }
    else {
      TArray<FSetElementId,FDefaultAllocator>::RemoveSingle(lVar2 + 0x30,(longlong)plVar9 + 0xd4);
    }
    iVar7 = *(int *)((longlong)plVar9 + 0xd4);
    if (*(int *)(lVar2 + 0x48) != *(int *)(lVar2 + 0x74)) {
      lVar10 = *(longlong *)(lVar2 + 0x40);
      lVar11 = (longlong)iVar7 * 0xf0;
      lVar13 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar13 = lVar2 + 0x78;
      }
      piVar8 = (int *)((longlong)
                       (int)(*(int *)(lVar2 + 0x88) - 1U & *(uint *)(lVar11 + 0xec + lVar10)) * 4 +
                      lVar13);
      iVar6 = *piVar8;
      while (iVar6 != -1) {
        if (iVar6 == iVar7) {
          *piVar8 = *(int *)(lVar11 + 0xe8 + lVar10);
          break;
        }
        piVar8 = (int *)(lVar10 + 0xe8 + (longlong)iVar6 * 0xf0);
        iVar6 = *piVar8;
      }
    }
    plVar9 = (longlong *)((longlong)iVar7 * 0xf0 + *(longlong *)(lVar2 + 0x40));
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (plVar9 + 2);
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(lVar2 + 0x40,iVar7,1);
  }
  return;
}



// FUNCTION 141ace8f0 RemoveAtSwapImpl body=224 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
     ::RemoveAtSwapImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x30 + (longlong)param_2 * 0x38);
    iVar4 = param_3;
    do {
      if (plVar3[-5] != 0) {
        FUN_141d78430(plVar3[-5],*plVar3);
      }
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar5 = (iVar4 - param_2) - param_3;
    if (param_3 <= iVar5) {
      iVar5 = param_3;
    }
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x38),
                 (void *)((longlong)(iVar4 - iVar5) * 0x38 + *param_1),(longlong)iVar5 * 0x38);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141ace9d0 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0xf0;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xf0 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0xf0;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141acea90 FUN_141acea90 body=522 status=ok
// SIG undefined FUN_141acea90(void)

void FUN_141acea90(longlong param_1,longlong param_2)

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
    puVar8 = *(undefined8 **)(param_1 + 0x1908);
    if ((puVar8 != (undefined8 *)0x0) && (puVar8[6] == param_2)) {
      (**(code **)*puVar8)(puVar8,1);
      *(undefined8 *)(param_1 + 0x1908) = 0;
    }
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
  *plVar9 = (longlong)&PTR_FUN_144dc9ec0;
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



// FUNCTION 141aceca0 FUN_141aceca0 body=75 status=ok
// SIG undefined FUN_141aceca0(void)

void FUN_141aceca0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1908);
  if ((puVar1 != (undefined8 *)0x0) &&
     (((puVar1[0x11] == param_2 || (puVar1[0x12] == param_2)) || (puVar1[0x13] == param_2)))) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x1908) = 0;
  }
  return;
}



// FUNCTION 141acecf0 FUN_141acecf0 body=723 status=ok
// SIG undefined FUN_141acecf0(void)

void FUN_141acecf0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar9;
  undefined8 local_res10;
  undefined *local_38;
  undefined4 local_30;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar2 = param_2[0xc];
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res10,&local_38);
  plVar5 = plVar8;
  if ((int)local_res10 != -1) {
    plVar5 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_30 = 0;
  plVar9 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar9 = plVar8;
  }
  local_38 = &DAT_1469fe120;
  lVar6 = *plVar9;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res10,&local_38);
  plVar5 = plVar8;
  if ((int)local_res10 != -1) {
    plVar5 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  lVar2 = *param_2;
  plVar9 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar9 = plVar8;
  }
  lVar3 = *plVar9;
  *param_3 = DAT_1464c2720;
  if (lVar6 == 0) {
    local_res10 = 0;
    plVar9 = (longlong *)0x1;
    plVar5 = plVar8;
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x38);
    plVar9 = plVar8;
  }
  param_3[1] = plVar5;
  if (plVar9 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar4 = false;
  if (lVar3 == 0) {
    bVar4 = true;
    local_res10 = 0;
    plVar5 = plVar8;
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  *(undefined4 *)((longlong)param_3 + 0x4c) = 0;
  FUN_141ed6ac0(param_2[8],param_3,2,1);
  uVar1 = *(uint *)(*param_2 + 0x1900);
  if (uVar1 != 0) {
    do {
      lVar6 = *(longlong *)(*param_2 + 0x18f8);
      if (lVar6 == 0) {
        lVar6 = *param_2 + 0x1838;
      }
      FUN_141aa90b0(lVar3,param_2[8],param_2,lVar6 + (longlong)(int)plVar8 * 0x18);
      FSceneRenderTargets::Get(param_2[8]);
      local_res10 = CONCAT44(*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4),
                             *(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0));
      FUN_141ce13a0(param_2[8]);
      uVar7 = (int)plVar8 + 1;
      plVar8 = (longlong *)(ulonglong)uVar7;
    } while (uVar7 < uVar1);
  }
  return;
}



// FUNCTION 141acefd0 FUN_141acefd0 body=745 status=ok
// SIG undefined FUN_141acefd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141acefd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128 [2];
  undefined1 local_118 [8];
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  ulonglong uVar7;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((1 < *(int *)(*(longlong *)(param_1 + 8) + 8)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1908) != 0)) {
    local_130 = param_3;
    uVar2 = FSceneRenderTargets::Get(param_2);
    local_178 = CONCAT71(local_178._1_7_,1);
    FUN_141cdeb70(uVar2,param_2,2);
    uVar7 = 0;
    local_bc = 0x26;
    local_c8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_c0 = 0;
    local_b4 = 0;
    local_ac = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    FUN_14049afe0(param_2,&local_108);
    uStack_d0 = FUN_140985530();
    local_d8 = FUN_141abcfb0();
    local_c8 = FUN_1409853f0();
    uVar8 = uVar7;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        lVar5 = *(longlong *)(param_1 + 0xc0) + uVar8;
        if (*(char *)(lVar5 + 0x1a98) != '\0') {
          local_138 = 0;
          local_128[0] = 0;
          local_128[1] = 0;
          FScopedGPUStatEvent::Begin(local_128,param_2,&DAT_1469fd5a8,&local_138);
          local_140 = *(undefined4 *)(lVar5 + 0x1aa8);
          uVar1 = *(undefined4 *)(lVar5 + 0x1aac);
          puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          local_144 = *(undefined4 *)(lVar5 + 0x1aa4);
          local_148 = *(undefined4 *)(lVar5 + 0x1aa0);
          puVar3 = puVar4 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar3 = puVar4 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar3;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          local_110 = 0;
          **(undefined8 **)(param_2 + 8) = puVar4;
          *(undefined8 **)(param_2 + 8) = puVar4 + 1;
          puVar4[1] = 0;
          *puVar4 = &PTR_LAB_143f59420;
          *(undefined4 *)(puVar4 + 2) = local_148;
          *(undefined4 *)((longlong)puVar4 + 0x14) = local_144;
          *(undefined4 *)((longlong)puVar4 + 0x1c) = local_140;
          local_170 = local_118;
          *(undefined4 *)(puVar4 + 3) = 0;
          *(undefined4 *)(puVar4 + 4) = uVar1;
          *(undefined4 *)((longlong)puVar4 + 0x24) = 0x3f800000;
          local_178 = local_130;
          FUN_141aa7ab0(param_2,&local_108,*(undefined8 *)(param_1 + 8),lVar5);
          local_158 = 8;
          local_160 = &DAT_1464c1768;
          local_168 = 2;
          local_170 = &DAT_144dc9e90;
          local_178 = CONCAT44(local_178._4_4_,2);
          FUN_141abae60(param_2,0,0,4);
          if (local_128[0] != 0) {
            FScopedGPUStatEvent::End(local_128);
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 0x30d0;
      } while ((int)uVar6 < *(int *)(param_1 + 200));
    }
  }
  return;
}



// FUNCTION 141acf2c0 FUN_141acf2c0 body=506 status=ok
// SIG undefined FUN_141acf2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141acf2c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined4 local_138;
  longlong local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((1 < *(int *)(*(longlong *)(param_1 + 8) + 8)) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1908) != 0)) {
    local_d8 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d0 = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    local_cc = 0x26;
    uStack_e0 = FUN_140985530();
    local_e8 = FUN_141abcfb0();
    local_d8 = FUN_1409853f0();
    FUN_14049afe0(param_2,&local_118);
    cVar5 = '\0';
    bVar1 = false;
    local_50 = '\0';
    cVar2 = FUN_141dd7f70();
    if (cVar2 != '\0') {
      lVar3 = FSceneRenderTargets::Get(param_2);
      plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x420) + 0x10);
      if (plVar4 != &local_58) {
        local_58 = *plVar4;
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        cVar5 = '\x01';
        local_50 = '\x01';
        bVar1 = true;
      }
    }
    local_120 = 0;
    if (bVar1) {
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
        cVar5 = local_50;
      }
      local_120 = 1;
      local_128 = local_58;
    }
    local_150 = &local_128;
    local_158 = param_3;
    FUN_141aa7740(param_2,&local_118,*(undefined8 *)(param_1 + 8),param_4);
    local_140 = *param_5;
    local_138 = 8;
    local_148 = 2;
    local_150 = (longlong *)&DAT_144dc9ea0;
    local_158 = CONCAT44(local_158._4_4_,2);
    FUN_141abae60(param_2,0,0,param_5[1] - local_140 >> 3);
    if (cVar5 != '\0') {
      local_50 = 0;
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_58);
    }
  }
  return;
}



// FUNCTION 141acf4c0 FUN_141acf4c0 body=1200 status=ok
// SIG undefined FUN_141acf4c0(void)

ulonglong FUN_141acf4c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffea0;
  ulonglong in_stack_fffffffffffffea8;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118 [6];
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  bVar9 = 0;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
  if ((lVar6 == 0) ||
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(), *(char *)(lVar6 + 0xd0) == '\0')
     ) {
    uVar8 = 0;
    local_120 = 0;
    local_118[2] = 0;
    local_118[3] = 0;
    FScopedGPUStatEvent::Begin(local_118 + 2,param_2,&DAT_1469fda98,&local_120);
    cVar4 = FUN_141636a40();
    if ((cVar4 == '\0') ||
       ((((DAT_1464c9c18 == '\0' && (DAT_146ab6383 != '\0')) || (*(int *)(DAT_1469fd7f0 + 4) == 0))
        || ((cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(), cVar4 != '\0' &&
            (*(int *)(DAT_146a10108 + 4) == 0)))))) {
      uVar11 = uVar8;
      if (0 < *(int *)(param_1 + 200)) {
        do {
          lVar6 = *(longlong *)(param_1 + 0xc0) + uVar11;
          local_130 = 0;
          FUN_141ab7f60(param_2,lVar6,param_4,&local_130);
          local_60 = *(longlong *)(lVar6 + 0x20);
          local_68 = 0x11;
          local_78 = 0;
          uStack_70 = 0;
          if (local_60 != 0) {
            LOCK();
            *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
            UNLOCK();
          }
          local_58 = local_130;
          local_50 = 0;
          local_48 = 0;
          local_44 = 0;
          local_4c = (uint)(*(char *)(lVar6 + 0x1205) != '\0') |
                     -(uint)(*(char *)(lVar6 + 0x11b4) != '\0') & 8;
          cVar4 = FUN_141ae26c0(lVar6);
          if (cVar4 != '\0') {
            bVar5 = FUN_141acfe80(param_1,param_2,lVar6,param_3,&local_78);
            bVar9 = bVar9 | bVar5;
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_60);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_130);
          uVar10 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
          uVar11 = uVar11 + 0x30d0;
        } while ((int)uVar10 < *(int *)(param_1 + 200));
      }
    }
    else {
      if ((*(int *)(DAT_1469fd850 + 4) < 1) && (*(int *)(DAT_146ab6d10 + 4) < 1)) {
        local_80 = 0;
      }
      else {
        local_80 = 1;
      }
      uVar11 = uVar8;
      local_88 = param_2;
      if (0 < *(int *)(param_1 + 200)) {
        do {
          lVar6 = *(longlong *)(param_1 + 0xc0) + uVar11;
          local_138 = 0;
          FUN_141ab7f60(param_2,lVar6,param_4,&local_138);
          local_b0 = 0x11;
          local_c0 = 0;
          uStack_b8 = 0;
          local_a8 = *(longlong *)(lVar6 + 0x20);
          if (local_a8 != 0) {
            LOCK();
            *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
            UNLOCK();
          }
          local_a0 = local_138;
          local_90 = 0;
          local_8c = 0;
          local_98 = (ulonglong)
                     ((uint)(*(char *)(lVar6 + 0x1205) != '\0') |
                     -(uint)(*(char *)(lVar6 + 0x11b4) != '\0') & 8) << 0x20;
          cVar4 = FUN_141ae26c0(lVar6);
          if (cVar4 != '\0') {
            FUN_141ad00b0(param_1,lVar6,param_2,param_3,&local_c0);
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
          uVar10 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
          uVar11 = uVar11 + 0x30d0;
        } while ((int)uVar10 < *(int *)(param_1 + 200));
      }
      bVar9 = 1;
      FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(&local_88);
    }
    if (local_118[2] != 0) {
      FScopedGPUStatEvent::End(local_118 + 2);
    }
    uVar8 = (ulonglong)bVar9;
  }
  else {
    uVar8 = 0;
    local_128 = 0;
    local_118[0] = 0;
    local_118[1] = 0;
    FScopedGPUStatEvent::Begin(local_118,param_2,&DAT_1469fda98,&local_128);
    lVar6 = *(longlong *)(param_1 + 0xc0);
    FUN_1425a3670();
    uVar7 = FUN_141b65200();
    *(undefined8 *)(lVar6 + 0x1a30) = uVar7;
    local_res8 = 0;
    FUN_141ab7f60(param_2,lVar6,0,&local_res8);
    local_e0 = *(longlong *)(lVar6 + 0x20);
    local_e8 = 0x11;
    local_118[4] = 0;
    local_118[5] = 0;
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    local_d0 = 0;
    local_c8 = 0;
    local_cc = (uint)(*(char *)(lVar6 + 0x1205) != '\0') |
               -(uint)(*(char *)(lVar6 + 0x11b4) != '\0') & 8;
    local_c4 = 0;
    local_d8 = local_res8;
    FUN_141ad8a40(param_2,lVar6,param_1,local_118 + 4,CONCAT44(uVar12,param_3),
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00,
                  in_stack_fffffffffffffea8 & 0xffffffffffffff00);
    local_118[5] = FUN_141abf3f0();
    local_d0 = 0;
    FUN_141ada980(param_2,lVar6,0,0x3f800000,1);
    uVar11 = uVar8;
    if (0 < *(int *)(lVar6 + 0x2288)) {
      do {
        lVar1 = *(longlong *)(lVar6 + 0x2280);
        uVar10 = *(uint *)(uVar8 + 0x10 + lVar1);
        if (((uVar10 & 3) != 0) && ((uVar10 >> 2 & 1) != 0)) {
          lVar2 = *(longlong *)(uVar8 + lVar1);
          uVar3 = FUN_141ac28e0(lVar6);
          FUN_141abacf0(param_2,lVar6,0,lVar2,1,local_118 + 4,*(undefined8 *)(uVar8 + 8 + lVar1),
                        *(undefined4 *)(lVar2 + 0xb0),0,uVar3);
        }
        uVar10 = (int)uVar11 + 1;
        uVar8 = uVar8 + 0x18;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(lVar6 + 0x2288));
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e0);
    uVar8 = TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    if (local_118[0] != 0) {
      uVar8 = FScopedGPUStatEvent::End(local_118);
    }
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  return uVar8;
}



// FUNCTION 141acf970 FUN_141acf970 body=206 status=ok
// SIG undefined FUN_141acf970(void)

void FUN_141acf970(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_3 + 0x2288)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_3 + 0x2280);
      uVar1 = *(uint *)(lVar2 + 0x10 + lVar5);
      if (((uVar1 & 3) != 0) && ((uVar1 >> 2 & 1) != 0)) {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        uVar4 = FUN_141ac28e0(param_3);
        FUN_141abacf0(param_2,param_3,0,lVar3,1,param_4,*(undefined8 *)(lVar2 + 8 + lVar5),
                      *(undefined4 *)(lVar3 + 0xb0),0,uVar4);
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (iVar6 < *(int *)(param_3 + 0x2288));
  }
  return;
}



// FUNCTION 141acfa40 FUN_141acfa40 body=350 status=ok
// SIG undefined FUN_141acfa40(void)

void FUN_141acfa40(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)(param_3 + 0x22a8) < 1) {
    return;
  }
  if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_141ada980(param_2,param_3,0x3f600000,0x3f800000,uVar4);
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0x22a8)) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_3 + 0x22a0);
      uVar1 = *(uint *)(lVar6 + 0x10 + lVar2);
      if (((uVar1 & 3) != 0) && ((uVar1 >> 2 & 1) != 0)) {
        lVar3 = *(longlong *)(lVar6 + lVar2);
        uVar4 = FUN_141ac28e0(param_3);
        FUN_141abacf0(param_2,param_3,0,lVar3,1,param_4,*(undefined8 *)(lVar6 + 8 + lVar2),
                      *(undefined4 *)(lVar3 + 0xb0),1,uVar4);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar5 < *(int *)(param_3 + 0x22a8));
  }
  FUN_141ada980(param_2,param_3,0,0x3f800000);
  return;
}



// FUNCTION 141acfba0 FUN_141acfba0 body=498 status=ok
// SIG undefined FUN_141acfba0(void)

undefined1
FUN_141acfba0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_38 = *(longlong *)(param_1 + 0xc0);
    lVar3 = *(longlong *)(param_1 + 8) + 0x238 + (longlong)param_5 * 0x98;
    local_30 = local_38 + 0x30d0;
    local_28 = local_38 + 0x1b40;
    local_20 = local_38 + 0x4c10;
    local_18 = local_38 + 0x1c50;
    local_10 = local_38 + 0x4d20;
    local_70 = *param_4;
    local_68 = param_4[1];
    local_60 = *(undefined4 *)(param_4 + 2);
    local_58 = param_4[3];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    local_50 = param_4[4];
    local_40 = *(undefined4 *)(param_4 + 6);
    local_48 = *(undefined4 *)(param_4 + 5);
    local_44 = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_3c = 0;
    uVar2 = FUN_141aa2420(lVar3,param_2,local_38,1,&local_70,0,0,&local_38,0,
                          *(int *)(lVar3 + 0x38) + -1,0);
    plVar4 = &local_58;
  }
  else {
    local_a8 = *param_4;
    local_a0 = param_4[1];
    lVar3 = *(longlong *)(param_1 + 8) + 0x238 + (longlong)param_5 * 0x98;
    local_98 = *(undefined4 *)(param_4 + 2);
    local_90 = param_4[3];
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    local_88 = param_4[4];
    local_78 = *(undefined4 *)(param_4 + 6);
    local_80 = *(undefined4 *)(param_4 + 5);
    local_7c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_74 = 0;
    uVar2 = FUN_141aa21d0(lVar3,param_2,param_3,0,&local_a8,param_3 + 0x1b40,param_3 + 0x1c50,0,0,
                          *(int *)(lVar3 + 0x38) + -1,0);
    plVar4 = &local_90;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar4);
  return uVar2;
}



// FUNCTION 141acfda0 FUN_141acfda0 body=222 status=ok
// SIG undefined FUN_141acfda0(void)

void FUN_141acfda0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if ((*(char *)(lVar1 + 0x1209) == '\0') || (*(int *)(lVar1 + 0xf60) != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    FUN_141abb160(*(longlong *)(param_1 + 8) + 0x238 + (longlong)param_3 * 0x98,0,lVar1 + 0x1b40,
                  lVar1 + 0x1c50,0,param_2);
    return;
  }
  local_38 = *(longlong *)(param_1 + 0xc0);
  local_30 = local_38 + 0x30d0;
  local_28 = local_38 + 0x1b40;
  local_20 = local_38 + 0x4c10;
  local_18 = local_38 + 0x1c50;
  local_10 = local_38 + 0x4d20;
  FUN_141abb160(*(longlong *)(param_1 + 8) + (longlong)param_3 * 0x98 + 0x238,1,0,0,&local_38,
                param_2);
  return;
}



// FUNCTION 141acfe80 FUN_141acfe80 body=552 status=ok
// SIG undefined FUN_141acfe80(void)

byte FUN_141acfe80(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar8;
  bool bVar9;
  byte local_res8 [8];
  byte *pbVar10;
  ulonglong in_stack_ffffffffffffff70;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong uVar7;
  
  local_res8[0] = 0;
  local_68 = *param_5;
  local_60 = param_5[1];
  local_58 = *(undefined4 *)(param_5 + 2);
  local_50 = param_5[3];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_48 = param_5[4];
  local_38 = *(undefined4 *)(param_5 + 6);
  local_40 = *(undefined4 *)(param_5 + 5);
  local_3c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_34 = 0;
  FUN_141ad8a40(param_2,param_3,param_1,&local_68,param_4,
                in_stack_ffffffffffffff70 & 0xffffffffffffff00,
                in_stack_ffffffffffffff78 & 0xffffffffffffff00);
  pbVar10 = local_res8;
  FUN_141acfa40(param_1,param_2,param_3,&local_68,pbVar10);
  bVar9 = *(int *)(param_1 + 0x2e0) == 0;
  uVar6 = (uint)((ulonglong)pbVar10 >> 0x20);
  if (bVar9) {
    bVar3 = FUN_141acfba0(param_1,param_2,param_3,&local_68,(ulonglong)uVar6 << 0x20);
  }
  else {
    bVar3 = FUN_141acfba0(param_1,param_2,param_3,&local_68,CONCAT44(uVar6,1));
  }
  uVar7 = 0;
  bVar4 = FUN_141acfba0(param_1,param_2,param_3,&local_68,bVar9);
  bVar3 = local_res8[0] | bVar3 | bVar4;
  uVar8 = uVar7;
  if (0 < *(int *)(param_3 + 0x2288)) {
    do {
      lVar1 = *(longlong *)(param_3 + 0x2280);
      uVar6 = *(uint *)(uVar8 + 0x10 + lVar1);
      if (((uVar6 & 3) != 0) && ((uVar6 >> 2 & 1) != 0)) {
        lVar2 = *(longlong *)(uVar8 + lVar1);
        uVar5 = FUN_141ac28e0(param_3);
        FUN_141abacf0(param_2,param_3,0,lVar2,1,&local_68,*(undefined8 *)(uVar8 + 8 + lVar1),
                      *(undefined4 *)(lVar2 + 0xb0),0,uVar5);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar8 = uVar8 + 0x18;
    } while ((int)uVar6 < *(int *)(param_3 + 0x2288));
  }
  bVar4 = FUN_141acfba0(param_1,param_2,param_3,&local_68,2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
  return bVar4 | bVar3;
}



// FUNCTION 141ad00b0 FUN_141ad00b0 body=802 status=ok
// SIG undefined FUN_141ad00b0(void)

void FUN_141ad00b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 uVar9;
  longlong local_res8;
  undefined1 local_res20;
  undefined4 uVar10;
  undefined4 *puVar11;
  longlong local_138 [2];
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if ((*(int *)(DAT_1469fd850 + 4) == 0) && (*(int *)(DAT_146ab6d10 + 4) == 0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  FUN_141d59a10(&local_128,local_res20,param_2,param_1,param_3,0 < *(int *)(DAT_1469fd808 + 4),uVar9
                ,param_5);
  uVar10 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_128 = &PTR_FUN_144dc9f10;
  local_70 = param_4;
  uVar6 = FSceneRenderTargets::Get(local_d8);
  puVar11 = &local_68;
  FUN_141cddcd0(uVar6,local_d8,1,1,CONCAT44(uVar10,param_4),0,puVar11);
  FUN_141ad8a40(local_d8,local_120,local_118,&local_110,local_70,0,
                (ulonglong)puVar11 & 0xffffffffffffff00);
  uVar7 = FUN_141d6b6f0(&local_128);
  uVar6 = local_120;
  plVar8 = (longlong *)TGraphTask<FFunctionGraphTask>::CreateTask(local_58,0,DAT_1464a8210);
  lVar3 = *plVar8;
  *(longlong *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  *(undefined8 *)(lVar3 + 0x28) = local_110;
  *(undefined8 *)(lVar3 + 0x30) = local_108;
  *(undefined4 *)(lVar3 + 0x38) = local_100;
  *(longlong *)(lVar3 + 0x40) = local_f8;
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar3 + 0x48) = local_f0;
  *(undefined4 *)(lVar3 + 0x50) = local_e8;
  *(undefined4 *)(lVar3 + 0x54) = local_e4;
  *(undefined4 *)(lVar3 + 0x58) = local_e0;
  *(undefined1 *)(lVar3 + 0x5c) = 0;
  lVar3 = *plVar8;
  lVar5 = plVar8[2];
  lVar4 = plVar8[1];
  local_res8 = *(longlong *)(lVar3 + 0x68);
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 0x48) = *(int *)(local_res8 + 0x48) + 1;
    UNLOCK();
  }
  FUN_141ada340(lVar3,lVar4,(int)lVar5,1);
  FParallelCommandListSet::AddParallelCommandList(&local_128,uVar7,&local_res8,0xffffffff);
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  iVar2 = *(int *)(param_1 + 0x2e0);
  FUN_141acfda0(param_1,&local_128,iVar2 != 0);
  FUN_141acfda0(param_1,&local_128,iVar2 == 0);
  uVar6 = FUN_141d6b6f0(&local_128);
  plVar8 = (longlong *)TGraphTask<FFunctionGraphTask>::CreateTask(local_40,0,DAT_1464a8210);
  lVar3 = *plVar8;
  *(longlong *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x18) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = local_120;
  *(undefined8 *)(lVar3 + 0x28) = local_110;
  *(undefined8 *)(lVar3 + 0x30) = local_108;
  *(undefined4 *)(lVar3 + 0x38) = local_100;
  *(longlong *)(lVar3 + 0x40) = local_f8;
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar3 + 0x48) = local_f0;
  *(undefined4 *)(lVar3 + 0x50) = local_e8;
  *(undefined4 *)(lVar3 + 0x54) = local_e4;
  *(undefined4 *)(lVar3 + 0x58) = local_e0;
  *(undefined1 *)(lVar3 + 0x5c) = 0;
  lVar3 = *plVar8;
  lVar5 = plVar8[2];
  lVar4 = plVar8[1];
  local_138[0] = *(longlong *)(lVar3 + 0x68);
  if (local_138[0] != 0) {
    LOCK();
    *(int *)(local_138[0] + 0x48) = *(int *)(local_138[0] + 0x48) + 1;
    UNLOCK();
  }
  FUN_141ada340(lVar3,lVar4,(int)lVar5,1);
  FParallelCommandListSet::AddParallelCommandList(&local_128,uVar6,local_138,0xffffffff);
  if (local_138[0] != 0) {
    LOCK();
    piVar1 = (int *)(local_138[0] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141acfda0(param_1,&local_128,2);
  local_128 = &PTR_FUN_144dc9f10;
  FUN_141d662d0(&local_128,0);
  FParallelCommandListSet::~FParallelCommandListSet(&local_128);
  return;
}



// FUNCTION 141ad03e0 FUN_141ad03e0 body=6903 status=ok
// SIG undefined FUN_141ad03e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141ad03e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             undefined1 param_6)

{
  undefined8 **ppuVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  void *_Dst;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  bool bVar35;
  undefined1 auStack_3f8 [32];
  longlong **local_3d8;
  longlong *local_3d0;
  undefined8 local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 *local_3a8;
  int local_3a0;
  uint local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  uint local_368;
  int local_364;
  longlong local_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  int local_340;
  int local_33c;
  longlong *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  int local_320;
  int local_31c;
  int local_318 [2];
  int local_310 [2];
  int local_308;
  int iStack_304;
  longlong local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [8];
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined2 local_2a0 [4];
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong local_280;
  undefined4 local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260 [5];
  undefined *local_238;
  undefined4 local_230;
  longlong local_228 [2];
  undefined *local_218;
  undefined4 local_210;
  undefined *local_208;
  undefined4 local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  uint local_158;
  int local_154 [16];
  undefined1 auStack_114 [4];
  undefined8 local_110;
  undefined4 local_108;
  ulonglong local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  wchar_t *local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  local_33c = 0;
  bVar35 = true;
  local_2d0 = param_5;
  local_368 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar30 = (ulonglong)*(uint *)(param_1 + 200);
    plVar20 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1ab0);
    bVar8 = bVar35;
    do {
      lVar14 = *plVar20;
      plVar20 = plVar20 + 0x61a;
      bVar35 = false;
      if (lVar14 != 0) {
        bVar35 = bVar8;
      }
      uVar30 = uVar30 - 1;
      bVar8 = bVar35;
    } while (uVar30 != 0);
  }
  if (((((DAT_1464c1660 == 0) || (DAT_1464c165c == 0)) || (*(int *)(param_1 + 0x2a0) < 3)) ||
      ((0x1f < (uint)(&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] ||
       ((0xda151015U >> ((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] & 0x1f) & 1) == 0)))) ||
     (((int)param_5[1] < 1 || (((*(uint *)(param_1 + 0x38) & 0x40000000) == 0 || (!bVar35)))))) {
    uVar18 = 0;
  }
  else {
    local_338 = (longlong *)0x0;
    iVar23 = 2 - (uint)(DAT_1469fd5a4 != 0);
    local_358 = param_3;
    local_2f8 = param_1;
    local_270 = param_2;
    local_268 = param_4;
    lVar14 = FSceneRenderTargets::Get();
    local_3c8 = CONCAT71(local_3c8._1_7_,1);
    local_3d0 = (longlong *)CONCAT71(local_3d0._1_7_,1);
    uVar30 = *(ulonglong *)(lVar14 + 0x378);
    local_e8 = _DAT_146ab6928;
    uStack_e4 = uRam0000000146ab692c;
    uStack_e0 = uRam0000000146ab6930;
    uStack_dc = uRam0000000146ab6934;
    local_cc = 0;
    local_c4 = 0x10000;
    local_d4 = (undefined4)
               ((longlong)((ulonglong)(uint)((int)uVar30 >> 0x1f) << 0x20 | uVar30 & 0xffffffff) /
               (longlong)iVar23);
    local_d8 = DAT_146ab6938;
    local_bc = 0xf;
    local_d0 = (undefined4)
               ((longlong)((ulonglong)(uint)((longlong)uVar30 >> 0x3f) << 0x20 | uVar30 >> 0x20) /
               (longlong)iVar23);
    local_b4 = 0x10001;
    local_c8 = 1;
    local_c0 = 1;
    local_a8 = L"UnknownTexture2D";
    local_3d8 = (longlong **)0x144dbee68;
    local_b0 = 0;
    local_a0 = 1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_e8,&local_338);
    local_340 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_300 = 0;
      local_280 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        lVar14 = local_280;
        local_260[0] = 0;
        local_260[1] = 0;
        lVar33 = local_300 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        uVar30 = 0;
        local_2c8 = 0;
        local_360 = lVar33;
        FScopedGPUStatEvent::Begin(local_260,param_2,&DAT_1469fdd60,&local_2c8);
        if ((*(int *)(lVar14 + 0x38) < DAT_146a0aeb0) &&
           (_Init_thread_header(&DAT_146a0aeb0), DAT_146a0aeb0 == -1)) {
          atexit((_func_5014 *)&LAB_143e87da0);
          _Init_thread_footer(&DAT_146a0aeb0);
        }
        DAT_146a0aea8 = 0;
        uVar22 = uVar30;
        if ((DAT_146a0aeac < 0) && (uVar22 = 0, DAT_146a0aeac != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(&DAT_146a0aea0,0);
          uVar22 = (ulonglong)DAT_146a0aea8;
        }
        plVar20 = local_2d0;
        uVar34 = uVar30;
        uVar27 = (uint)uVar22;
        if (0 < (int)param_5[1]) {
          do {
            iVar23 = 0;
            uVar28 = (ulonglong)(int)uVar22;
            lVar14 = *(longlong *)(uVar34 + *plVar20);
            local_2e0 = 0;
            local_2d8 = 0;
            FUN_141d34970(*(undefined8 *)(lVar14 + 0x600),&local_2e0);
            if (0 < (int)local_2d8) {
              lVar33 = 0;
              iVar11 = (int)local_2d8;
              do {
                plVar16 = *(longlong **)(*(longlong *)(lVar33 + local_2e0) + 8);
                if ((*(uint *)((longlong)plVar16 + 0x1c) >> 2 & 1) != 0) {
                  (**(code **)(*plVar16 + 0x50))(plVar16,&DAT_146a0aea0);
                  iVar11 = (int)local_2d8;
                }
                iVar23 = iVar23 + 1;
                lVar33 = lVar33 + 8;
              } while (iVar23 < iVar11);
            }
            lVar33 = *(longlong *)(lVar14 + 0x550);
            if (*(longlong *)(lVar14 + 0x550) == 0) {
              lVar33 = lVar14 + 0x548;
            }
            fVar4 = *(float *)(lVar33 + local_300 * 4);
            if ((int)uVar22 < (int)DAT_146a0aea8) {
              lVar14 = uVar28 << 5;
              do {
                uVar27 = (int)uVar28 + 1;
                uVar28 = (ulonglong)uVar27;
                *(float *)(lVar14 + 0xc + (longlong)DAT_146a0aea0) =
                     fVar4 * *(float *)(lVar14 + 0xc + (longlong)DAT_146a0aea0);
                lVar14 = lVar14 + 0x20;
              } while ((int)uVar27 < (int)DAT_146a0aea8);
            }
            uVar22 = (ulonglong)DAT_146a0aea8;
            uVar32 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar32;
            param_2 = local_270;
            lVar33 = local_360;
            uVar34 = uVar34 + 8;
            uVar27 = DAT_146a0aea8;
          } while ((int)uVar32 < (int)plVar20[1]);
        }
        lVar14 = local_358;
        if (0 < (int)uVar27) {
          ppuVar1 = (undefined8 **)(local_358 + 0x78);
          iVar23 = uVar27 * 0x20;
          if ((*(longlong *)(local_358 + 0x78) == 0) ||
             (*(int *)(*(longlong *)(local_358 + 0x78) + 0x18) < iVar23)) {
            TRefCountPtr<FRHIIndexBuffer>::operator=(ppuVar1,0);
            ppuVar3 = (undefined8 **)(lVar14 + 0x80);
            TRefCountPtr<FRHIIndexBuffer>::operator=(ppuVar3,0);
            local_3d0 = &local_98;
            lVar14 = 0;
            local_74 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_84 = _DAT_1468b5d78;
            uStack_7c = uRam00000001468b5d80;
            local_88 = 1;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_3d8 = (longlong **)CONCAT44(local_3d8._4_4_,0x204);
            (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_330,&DAT_146ab6e78,iVar23);
            if (ppuVar1 == &local_330) {
LAB_141ad0903:
              puVar24 = local_330;
              if (local_330 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_330 + 1);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  if ((*(char *)(local_330 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                    LOCK();
                    bVar35 = *(int *)((longlong)puVar24 + 0xc) == 0;
                    if (bVar35) {
                      *(int *)((longlong)puVar24 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar35) {
                      uVar27 = FLockFreeLinkPolicy::AllocLockFreeLink();
                      lVar15 = lVar14;
                      if (uVar27 != 0) {
                        lVar15 = (&DAT_1468a81f8)[uVar27 >> 0xe] +
                                 (ulonglong)(uVar27 & 0x3fff) * 0x18;
                      }
                      *(undefined8 **)(lVar15 + 8) = puVar24;
                      FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                    }
                  }
                  else {
                    (**(code **)*puVar24)(puVar24,1);
                  }
                }
              }
            }
            else {
              puVar24 = *ppuVar1;
              *ppuVar1 = local_330;
              local_330 = (undefined8 *)0x0;
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(puVar24 + 1);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  if ((*(char *)(puVar24 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                    LOCK();
                    bVar35 = *(int *)((longlong)puVar24 + 0xc) == 0;
                    if (bVar35) {
                      *(int *)((longlong)puVar24 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar35) {
                      uVar27 = FLockFreeLinkPolicy::AllocLockFreeLink();
                      lVar15 = lVar14;
                      if (uVar27 != 0) {
                        lVar15 = (&DAT_1468a81f8)[uVar27 >> 0xe] +
                                 (ulonglong)(uVar27 & 0x3fff) * 0x18;
                      }
                      *(undefined8 **)(lVar15 + 8) = puVar24;
                      FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                    }
                  }
                  else {
                    (**(code **)*puVar24)(puVar24,1);
                  }
                }
                goto LAB_141ad0903;
              }
            }
            local_3d0 = (longlong *)CONCAT71(local_3d0._1_7_,1);
            local_3d8 = (longlong **)CONCAT44(local_3d8._4_4_,0x10);
            (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_328,&DAT_146ab6e78,*ppuVar1);
            if (ppuVar3 != &local_328) {
              puVar24 = *ppuVar3;
              *ppuVar3 = local_328;
              local_328 = (undefined8 *)0x0;
              if (puVar24 == (undefined8 *)0x0) goto LAB_141ad0b16;
              LOCK();
              piVar2 = (int *)(puVar24 + 1);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                if ((*(char *)(puVar24 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                  LOCK();
                  bVar35 = *(int *)((longlong)puVar24 + 0xc) == 0;
                  if (bVar35) {
                    *(int *)((longlong)puVar24 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar35) {
                    uVar27 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    lVar15 = lVar14;
                    if (uVar27 != 0) {
                      lVar15 = (&DAT_1468a81f8)[uVar27 >> 0xe] + (ulonglong)(uVar27 & 0x3fff) * 0x18
                      ;
                    }
                    *(undefined8 **)(lVar15 + 8) = puVar24;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
                  (**(code **)*puVar24)(puVar24,1);
                }
              }
            }
            puVar24 = local_328;
            if (local_328 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(local_328 + 1);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                if ((*(char *)(local_328 + 2) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar10 = FOutputDevice::CanBeUsedOnAnyThread(), cVar10 == '\0')))) {
                  LOCK();
                  bVar35 = *(int *)((longlong)puVar24 + 0xc) == 0;
                  if (bVar35) {
                    *(int *)((longlong)puVar24 + 0xc) = 1;
                  }
                  UNLOCK();
                  if (bVar35) {
                    uVar27 = FLockFreeLinkPolicy::AllocLockFreeLink();
                    if (uVar27 != 0) {
                      lVar14 = (&DAT_1468a81f8)[uVar27 >> 0xe] + (ulonglong)(uVar27 & 0x3fff) * 0x18
                      ;
                    }
                    *(undefined8 **)(lVar14 + 8) = puVar24;
                    FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                  }
                }
                else {
                  (**(code **)*puVar24)(puVar24,1);
                }
              }
            }
          }
LAB_141ad0b16:
          lVar14 = local_358;
          local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,1);
          local_3d8 = (longlong **)CONCAT44(local_3d8._4_4_,iVar23);
          _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                   (DAT_146ab6358,&DAT_146ab6e78,*ppuVar1,0);
          _guard_xfg_dispatch_icall_nop(_Dst,DAT_146a0aea0,(longlong)iVar23);
          (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,*ppuVar1);
          uVar27 = 0;
          local_2a4 = 0xffffffff;
          local_2b0 = 0;
          local_2a8 = 0;
          local_2f0 = 0;
          local_2a0[0] = 0x101;
          uStack_2e8 = 0x1010101;
          uStack_2e4 = 0x22;
          *(undefined4 *)(param_2 + 0x98) = 1;
          uVar30 = 0;
          do {
            uVar32 = (int)uVar30 + 1;
            uVar17 = *(undefined8 *)(&local_2a8 + uVar30 * 6);
            uVar18 = *(undefined8 *)(local_2a0 + uVar30 * 0xc);
            puVar24 = (undefined8 *)(param_2 + 0xa0 + uVar30 * 0x18);
            *puVar24 = (&local_2b0)[uVar30 * 3];
            puVar24[1] = uVar17;
            *(undefined8 *)(param_2 + 0xb0 + uVar30 * 0x18) = uVar18;
            uVar30 = (ulonglong)uVar32;
          } while (uVar32 < *(uint *)(param_2 + 0x98));
          *(undefined4 *)(param_2 + 0x160) = 0;
          *(undefined4 *)(param_2 + 0x164) = 0;
          *(undefined4 *)(param_2 + 0x168) = 0x1010101;
          *(undefined4 *)(param_2 + 0x16c) = 0x22;
          puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar24 = puVar21 + 0x26;
          if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x138);
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar24 = puVar21 + 0x26;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar24;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar21;
          *(undefined8 **)(param_2 + 8) = puVar21 + 1;
          puVar21[1] = 0;
          *puVar21 = &PTR_LAB_143f59440;
          *(undefined4 *)(puVar21 + 2) = 1;
          puVar21[3] = 0;
          *(undefined4 *)(puVar21 + 4) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x24) = 0xffffffff;
          *(undefined2 *)(puVar21 + 5) = 0;
          puVar21[6] = 0;
          *(undefined4 *)(puVar21 + 7) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x3c) = 0xffffffff;
          *(undefined2 *)(puVar21 + 8) = 0;
          puVar21[9] = 0;
          *(undefined4 *)(puVar21 + 10) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x54) = 0xffffffff;
          *(undefined2 *)(puVar21 + 0xb) = 0;
          puVar21[0xc] = 0;
          *(undefined4 *)(puVar21 + 0xd) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x6c) = 0xffffffff;
          *(undefined2 *)(puVar21 + 0xe) = 0;
          puVar21[0xf] = 0;
          *(undefined4 *)(puVar21 + 0x10) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x84) = 0xffffffff;
          *(undefined2 *)(puVar21 + 0x11) = 0;
          puVar21[0x12] = 0;
          *(undefined4 *)(puVar21 + 0x13) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x9c) = 0xffffffff;
          *(undefined2 *)(puVar21 + 0x14) = 0;
          puVar21[0x15] = 0;
          *(undefined4 *)(puVar21 + 0x16) = 0;
          *(undefined4 *)((longlong)puVar21 + 0xb4) = 0xffffffff;
          *(undefined2 *)(puVar21 + 0x17) = 0;
          puVar21[0x18] = 0;
          *(undefined4 *)(puVar21 + 0x19) = 0;
          *(undefined4 *)((longlong)puVar21 + 0xcc) = 0xffffffff;
          *(undefined2 *)(puVar21 + 0x1a) = 0;
          puVar21[0x1b] = 0;
          *(undefined4 *)(puVar21 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar21 + 0xe4) = 0;
          uVar32 = uVar27;
          if (*(int *)(puVar21 + 2) != 0) {
            do {
              uVar30 = (ulonglong)uVar32;
              uVar32 = uVar32 + 1;
              uVar18 = *(undefined8 *)(&local_2a8 + uVar30 * 6);
              puVar21[uVar30 * 3 + 3] = (&local_2b0)[uVar30 * 3];
              (puVar21 + uVar30 * 3 + 3)[1] = uVar18;
              puVar21[uVar30 * 3 + 5] = *(undefined8 *)(local_2a0 + uVar30 * 0xc);
            } while (uVar32 < *(uint *)(puVar21 + 2));
            uVar32 = *(uint *)(puVar21 + 0x1d);
          }
          if (uVar32 != 0) {
            do {
              uVar30 = (ulonglong)uVar27;
              uVar27 = uVar27 + 1;
              puVar21[uVar30 + 0x1e] = *(undefined8 *)(uVar30 * 8);
            } while (uVar27 < *(uint *)(puVar21 + 0x1d));
          }
          puVar21[0x1b] = local_2f0;
          puVar21[0x1c] = CONCAT44(uStack_2e4,uStack_2e8);
          plVar20 = *(longlong **)(lVar14 + 0x30);
          lVar14 = plVar20[0x31];
          local_350 = 0;
          uStack_348 = 0;
          cVar10 = (**(code **)(*plVar20 + 0xd8))(plVar20,&local_350,lVar33,lVar33 + 0x1aa0);
          if (cVar10 == '\0') {
            local_350 = *(undefined8 *)(lVar33 + 0x1aa0);
            uStack_348 = *(undefined8 *)(lVar33 + 0x1aa8);
            iVar23 = *(int *)(lVar33 + 0x1aa0);
            iVar11 = *(int *)(lVar33 + 0x1aa4);
            iVar12 = *(int *)(lVar33 + 0x1aa8);
            iVar31 = *(int *)(lVar33 + 0x1aac);
          }
          else {
            iVar23 = (int)local_350;
            iVar11 = local_350._4_4_;
            iVar12 = (int)uStack_348;
            iVar31 = uStack_348._4_4_;
          }
          iVar29 = 2 - (uint)(DAT_1469fd5a4 != 0);
          uVar30 = (longlong)((iVar12 - iVar23) / iVar29 + -1 + DAT_1464c1658) /
                   (longlong)DAT_1464c1658;
          iVar23 = (int)uVar30;
          uVar30 = uVar30 & 0xffffffff;
          iVar11 = (iVar31 - iVar11) / iVar29 + -1 + DAT_1464c1658;
          lVar33 = *(longlong *)(local_360 + 0x1ab0);
          iVar12 = iVar11 / DAT_1464c1658;
          uVar22 = (longlong)iVar11 % (longlong)DAT_1464c1658 & 0xffffffff;
          plVar20 = (longlong *)(lVar33 + 0x15a8);
          uVar18 = CONCAT44(iVar12,iVar23);
          local_364 = iVar12;
          local_308 = iVar23;
          iStack_304 = iVar12;
          if ((*plVar20 == 0) ||
             (uVar27 = iVar12 * iVar23 * DAT_1464ca624, uVar22 = (ulonglong)uVar27,
             *(int *)(lVar33 + 0x15c0) < (int)uVar27)) {
            FUN_141ace450(plVar20,uVar22);
            local_3c8 = 0;
            local_3d0 = (longlong *)0x0;
            local_3d8 = (longlong **)((ulonglong)local_3d8 & 0xffffffff00000000);
            FUN_141ac25e0(plVar20,DAT_1464ca624,iVar23 * iVar12);
            lVar33 = *(longlong *)(local_360 + 0x1ab0);
          }
          ClearUAV(param_2,lVar33 + 0x15a8,0);
          plVar20 = local_338;
          plVar16 = local_338 + 1;
          lVar33 = *(longlong *)(local_360 + 0x3090);
          if ((char)lVar14 == '\0') {
            local_238 = &DAT_146a095b0;
            local_230 = 0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar33 + 0x38,&local_320,&local_238);
            plVar26 = (longlong *)0x0;
            if (local_320 != -1) {
              plVar26 = (longlong *)((longlong)local_320 * 0x20 + *(longlong *)(lVar33 + 0x38));
            }
            plVar25 = plVar26 + 2;
            if (plVar26 == (longlong *)0x0) {
              plVar25 = (longlong *)0x0;
            }
            lVar14 = *plVar25;
            lVar33 = *(longlong *)(lVar14 + 0x48);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            uVar17 = *(undefined8 *)(lVar33 + 0x60);
            FRHIComputeShader::UpdateStats(uVar17);
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar24 = puVar21 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
              puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar24 = puVar21 + 3;
            }
            iVar11 = local_364;
            *(undefined8 **)(param_2 + 0x30) = puVar24;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            local_370 = 0;
            local_378 = 0;
            local_380 = 0;
            **(undefined8 **)(param_2 + 8) = puVar21;
            *(undefined8 **)(param_2 + 8) = puVar21 + 1;
            local_388 = 0;
            puVar21[1] = 0;
            *puVar21 = &PTR_LAB_144d91e50;
            puVar21[2] = uVar17;
            local_390 = *(undefined8 *)(local_358 + 0x80);
            local_3a0 = 2 - (uint)(DAT_1469fd5a4 != 0);
            local_3c0 = *(longlong *)(local_360 + 0x1ab0) + 0x15a8;
            local_398 = DAT_146a0aea8;
            local_3a8 = &local_350;
            local_3b0 = DAT_1464c1640;
            local_3b8 = CONCAT44((float)local_364,(float)iVar23);
            local_3d8 = (longlong **)local_358;
            local_3d0 = plVar16;
            local_3c8 = uVar18;
            FUN_141ad5330(lVar14,param_2,*(undefined8 *)(local_2f8 + 8),local_360);
            local_3d8 = (longlong **)CONCAT44(local_3d8._4_4_,1);
            DispatchComputeShader(param_2,lVar14,uVar30,iVar11);
            lVar33 = *(longlong *)(lVar14 + 0x48);
            lVar15 = *(longlong *)(local_360 + 0x1ab0);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            FRWShaderParameter::UnsetUAV<FRHICommandList>
                      (lVar14 + 0xc0,param_2,*(undefined8 *)(lVar33 + 0x60));
            lVar33 = *(longlong *)(lVar14 + 0x48);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            FRWShaderParameter::UnsetUAV<FRHICommandList>
                      (lVar14 + 0xd6,param_2,*(undefined8 *)(lVar33 + 0x60));
            lVar33 = *(longlong *)(lVar14 + 0x48);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            FRWShaderParameter::UnsetUAV<FRHICommandList>
                      (lVar14 + 200,param_2,*(undefined8 *)(lVar33 + 0x60));
            local_260[3] = plVar20[3];
            if (lVar15 != -0x15a8) {
              local_260[4] = *(undefined8 *)(lVar15 + 0x15b0);
            }
            uVar32 = (lVar15 != -0x15a8) + 1;
            puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            uVar27 = uVar32 * 8;
            uVar30 = (longlong)puVar24 + (ulonglong)uVar27;
            if (*(ulonglong *)(param_2 + 0x38) < uVar30) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar27 + 8);
              puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              uVar30 = (longlong)puVar24 + (ulonglong)uVar27;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar30;
            uVar30 = (ulonglong)uVar32;
            puVar21 = puVar24;
            do {
              *puVar21 = *(undefined8 *)
                          ((longlong)local_260 + (0x18 - (longlong)puVar24) + (longlong)puVar21);
              puVar21 = puVar21 + 1;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          else {
            local_1e8 = &DAT_146a09700;
            local_1e0 = 0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar33 + 0x38,&local_31c,&local_1e8);
            plVar26 = (longlong *)0x0;
            if (local_31c != -1) {
              plVar26 = (longlong *)((longlong)local_31c * 0x20 + *(longlong *)(lVar33 + 0x38));
            }
            plVar25 = plVar26 + 2;
            if (plVar26 == (longlong *)0x0) {
              plVar25 = (longlong *)0x0;
            }
            lVar14 = *plVar25;
            lVar33 = *(longlong *)(lVar14 + 0x48);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            uVar17 = *(undefined8 *)(lVar33 + 0x60);
            FRHIComputeShader::UpdateStats(uVar17);
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar24 = puVar21 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
              puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar24 = puVar21 + 3;
            }
            iVar11 = local_364;
            *(undefined8 **)(param_2 + 0x30) = puVar24;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            local_370 = 0;
            local_378 = 0;
            local_380 = 0;
            **(undefined8 **)(param_2 + 8) = puVar21;
            *(undefined8 **)(param_2 + 8) = puVar21 + 1;
            local_388 = 0;
            puVar21[1] = 0;
            *puVar21 = &PTR_LAB_144d91e50;
            puVar21[2] = uVar17;
            local_390 = *(undefined8 *)(local_358 + 0x80);
            local_3a0 = 2 - (uint)(DAT_1469fd5a4 != 0);
            local_3c0 = *(longlong *)(local_360 + 0x1ab0) + 0x15a8;
            local_398 = DAT_146a0aea8;
            local_3a8 = &local_350;
            local_3b0 = DAT_1464c1640;
            local_3b8 = CONCAT44((float)local_364,(float)iVar23);
            local_3d8 = (longlong **)local_358;
            local_3d0 = plVar16;
            local_3c8 = uVar18;
            FUN_141ad5330(lVar14,param_2,*(undefined8 *)(local_2f8 + 8),local_360);
            local_3d8 = (longlong **)CONCAT44(local_3d8._4_4_,1);
            DispatchComputeShader(param_2,lVar14,uVar30,iVar11);
            lVar33 = *(longlong *)(lVar14 + 0x48);
            lVar15 = *(longlong *)(local_360 + 0x1ab0);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            FRWShaderParameter::UnsetUAV<FRHICommandList>
                      (lVar14 + 0xc0,param_2,*(undefined8 *)(lVar33 + 0x60));
            lVar33 = *(longlong *)(lVar14 + 0x48);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            FRWShaderParameter::UnsetUAV<FRHICommandList>
                      (lVar14 + 0xd6,param_2,*(undefined8 *)(lVar33 + 0x60));
            lVar33 = *(longlong *)(lVar14 + 0x48);
            if (*(char *)(lVar33 + 0x28) == '\0') {
              FUN_1419f3850(lVar33);
            }
            FRWShaderParameter::UnsetUAV<FRHICommandList>
                      (lVar14 + 200,param_2,*(undefined8 *)(lVar33 + 0x60));
            local_228[0] = plVar20[3];
            if (lVar15 != -0x15a8) {
              local_228[1] = *(undefined8 *)(lVar15 + 0x15b0);
            }
            uVar32 = (lVar15 != -0x15a8) + 1;
            puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            uVar27 = uVar32 * 8;
            uVar30 = (longlong)puVar24 + (ulonglong)uVar27;
            if (*(ulonglong *)(param_2 + 0x38) < uVar30) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar27 + 8);
              puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              uVar30 = (longlong)puVar24 + (ulonglong)uVar27;
            }
            *(ulonglong *)(param_2 + 0x30) = uVar30;
            uVar30 = (ulonglong)uVar32;
            puVar21 = puVar24;
            do {
              *puVar21 = *(undefined8 *)
                          (((longlong)local_228 - (longlong)puVar24) + (longlong)puVar21);
              puVar21 = puVar21 + 1;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          uVar30 = 0;
          puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar21 = puVar19 + 6;
          if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar21 = puVar19 + 6;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar21;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          local_278 = 0x21;
          **(undefined8 **)(param_2 + 8) = puVar19;
          *(undefined8 **)(param_2 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          puVar19[5] = 0;
          *(undefined4 *)((longlong)puVar19 + 0x24) = 3;
          iVar23 = 0;
          *(undefined4 *)(puVar19 + 4) = 0;
          puVar19[3] = puVar24;
          *(uint *)(puVar19 + 2) = uVar32;
          *puVar19 = &PTR_LAB_144d91e60;
          lVar14 = FSceneRenderTargets::Get(param_2);
          local_3d0 = (longlong *)CONCAT71(local_3d0._1_7_,1);
          local_3d8 = (longlong **)CONCAT44(local_3d8._4_4_,0x21);
          FUN_141ad74f0(param_2,*(undefined8 *)(local_268 + 8),
                        *(undefined8 *)(*(longlong *)(lVar14 + 0x60) + 8),0);
          local_158 = *(uint *)(param_2 + 0x98);
          local_1a8 = 0;
          plStack_1a0 = (longlong *)0x0;
          local_198 = ZEXT816(0);
          local_188 = 0;
          uStack_180 = 0;
          local_178 = ZEXT816(0);
          local_154[3] = 0;
          local_154[4] = 0;
          local_154[5] = 0;
          local_154[6] = 0;
          local_168 = 0;
          local_160 = 0;
          local_15c = 0x26;
          local_154[0] = 0;
          local_154[1] = 0;
          local_154[2] = 0;
          local_154[7] = 0;
          local_154[8] = 0;
          local_154[9] = 0;
          local_154[10] = 0;
          local_154[0xb] = 0;
          local_154[0xc] = 0;
          local_154[0xd] = 0;
          local_154[0xe] = 0;
          stack0xfffffffffffffee8 = 0;
          local_110 = 0;
          local_108 = 0;
          local_104 = 0;
          local_fc = 0;
          local_f4 = 0;
          if (local_158 != 0) {
            do {
              lVar14 = *(longlong *)(param_2 + 0xa0 + uVar30 * 0x18);
              if (lVar14 == 0) {
                local_154[uVar30] = 0;
              }
              else {
                local_154[uVar30] = *(int *)(lVar14 + 0x3c);
                local_154[uVar30 + 8] = *(int *)(lVar14 + 0x40);
              }
              auStack_114[uVar30] = *(undefined1 *)(param_2 + 0xb0 + uVar30 * 0x18);
              *(undefined1 *)((longlong)&local_110 + uVar30 + 4) =
                   *(undefined1 *)(param_2 + 0xb1 + uVar30 * 0x18);
              if (local_154[uVar30] != 0) {
                local_f4 = CONCAT22(local_f4._2_2_,*(undefined2 *)(lVar14 + 0x38));
              }
              uVar27 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar27;
            } while (uVar27 < local_158);
          }
          lVar14 = *(longlong *)(param_2 + 0x160);
          if (lVar14 == 0) {
            local_104 = local_104 & 0xffffffff00000000;
          }
          else {
            iVar23 = *(int *)(lVar14 + 0x3c);
            local_104 = *(ulonglong *)(lVar14 + 0x3c);
          }
          local_fc = *(undefined8 *)(param_2 + 0x168);
          if (iVar23 != 0) {
            local_f4 = CONCAT22(local_f4._2_2_,*(undefined2 *)(lVar14 + 0x38));
          }
          puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar13 = *(undefined4 *)(local_360 + 0x1aac);
          uVar5 = *(undefined4 *)(local_360 + 0x1aa8);
          uVar6 = *(undefined4 *)(local_360 + 0x1aa4);
          uVar7 = *(undefined4 *)(local_360 + 0x1aa0);
          puVar24 = puVar21 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar24 = puVar21 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar24;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar21;
          *(undefined8 **)(param_2 + 8) = puVar21 + 1;
          puVar21[1] = 0;
          *(undefined4 *)((longlong)puVar21 + 0x14) = uVar6;
          plVar20 = (longlong *)0x0;
          *puVar21 = &PTR_LAB_143f59420;
          *(undefined4 *)(puVar21 + 3) = 0;
          *(undefined4 *)(puVar21 + 2) = uVar7;
          *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar5;
          *(undefined4 *)(puVar21 + 4) = uVar13;
          *(undefined4 *)((longlong)puVar21 + 0x24) = 0x3f800000;
          if (DAT_146864320 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar10 = IsInRenderingThread();
              if (cVar10 == '\0') {
                FScopedEvent::FScopedEvent(local_2c0);
                plVar16 = (longlong *)FUN_14049e3d0(local_1d8,0,0xff);
                lVar14 = *plVar16;
                *(undefined1 **)(lVar14 + 0x10) = &LAB_140985690;
                *(undefined1 **)(lVar14 + 0x18) = local_2c0;
                lVar14 = *plVar16;
                lVar9 = plVar16[2];
                lVar33 = plVar16[1];
                lVar15 = *(longlong *)(lVar14 + 0x28);
                if (lVar15 != 0) {
                  LOCK();
                  *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_1404a4fe0(lVar14,lVar33,(int)lVar9,1);
                if (lVar15 != 0) {
                  LOCK();
                  piVar2 = (int *)(lVar15 + 0x48);
                  iVar23 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar23 == 1) {
                    FGraphEvent::Recycle(lVar15);
                  }
                }
                FScopedEvent::~FScopedEvent(local_2c0);
              }
              else {
                lVar14 = operator_new(0x38);
                if (lVar14 == 0) {
                  DAT_146864320 = 0;
                }
                else {
                  DAT_146864320 =
                       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar14);
                }
              }
            }
            else {
              lVar14 = operator_new(0x38);
              if (lVar14 == 0) {
                LOCK();
                if (DAT_146864320 == 0) {
                  DAT_146864320 = 0;
                }
                UNLOCK();
              }
              else {
                lVar14 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar14);
                LOCK();
                if (DAT_146864320 != 0) {
                  lVar14 = DAT_146864320;
                }
                DAT_146864320 = lVar14;
                UNLOCK();
              }
            }
          }
          local_178._8_8_ = *(undefined8 *)(DAT_146864320 + 0x30);
          if (DAT_146864318 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar10 = IsInRenderingThread();
              if (cVar10 == '\0') {
                FScopedEvent::FScopedEvent(local_2b8);
                plVar16 = (longlong *)FUN_14049e3d0(local_1c0,0,0xff);
                lVar14 = *plVar16;
                *(undefined1 **)(lVar14 + 0x10) = &LAB_140985680;
                *(undefined1 **)(lVar14 + 0x18) = local_2b8;
                lVar14 = *plVar16;
                lVar9 = plVar16[2];
                lVar33 = plVar16[1];
                lVar15 = *(longlong *)(lVar14 + 0x28);
                if (lVar15 != 0) {
                  LOCK();
                  *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_1404a4fe0(lVar14,lVar33,(int)lVar9,1);
                if (lVar15 != 0) {
                  LOCK();
                  piVar2 = (int *)(lVar15 + 0x48);
                  iVar23 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar23 == 1) {
                    FGraphEvent::Recycle(lVar15);
                  }
                }
                FScopedEvent::~FScopedEvent(local_2b8);
              }
              else {
                lVar14 = operator_new(0x38);
                if (lVar14 == 0) {
                  DAT_146864318 = 0;
                }
                else {
                  DAT_146864318 =
                       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar14);
                }
              }
            }
            else {
              lVar14 = operator_new(0x38);
              if (lVar14 == 0) {
                LOCK();
                if (DAT_146864318 == 0) {
                  DAT_146864318 = 0;
                }
                UNLOCK();
              }
              else {
                lVar14 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar14);
                LOCK();
                if (DAT_146864318 != 0) {
                  lVar14 = DAT_146864318;
                }
                DAT_146864318 = lVar14;
                UNLOCK();
              }
            }
          }
          local_168 = *(undefined8 *)(DAT_146864318 + 0x30);
          uVar13 = FUN_141abca80(local_358);
          local_3d0 = (longlong *)((ulonglong)local_3d0 & 0xffffffffffffff00);
          local_3d8 = (longlong **)CONCAT71(local_3d8._1_7_,param_6);
          FProjectedShadowInfo::SetBlendStateForProjection(&local_1a8,uVar13,0,0);
          local_210 = 0;
          local_218 = &DAT_1469fdf60;
          plVar26 = (longlong *)(*(longlong *)(local_360 + 0x3090) + 0x38);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(plVar26,local_310,&local_218);
          plVar16 = plVar20;
          if (local_310[0] != -1) {
            plVar16 = (longlong *)((longlong)local_310[0] * 0x20 + *plVar26);
          }
          plVar25 = plVar16 + 2;
          if (plVar16 == (longlong *)0x0) {
            plVar25 = plVar20;
          }
          lVar14 = *plVar25;
          local_15c = 0;
          if (DAT_1469fd5a4 == 0) {
            local_1f0 = 0;
            local_1f8 = &DAT_146a0aab0;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(plVar26,&local_33c,&local_1f8);
            plVar16 = plVar20;
            if (local_33c != -1) {
              plVar16 = (longlong *)((longlong)local_33c * 0x20 + *plVar26);
            }
            plVar26 = plVar16 + 2;
            if (plVar16 == (longlong *)0x0) {
              plVar26 = plVar20;
            }
            lVar33 = *plVar26;
            local_1a8 = DAT_1464c1708;
            if (lVar14 == 0) {
              local_368 = local_368 | 4;
              local_290 = 0;
            }
            else {
              lVar15 = *(longlong *)(lVar14 + 0x48);
              if (*(char *)(lVar15 + 0x28) == '\0') {
                FUN_1419f3850(lVar15);
              }
              plVar20 = *(longlong **)(lVar15 + 0x38);
            }
            uVar17 = 0;
            uVar27 = local_368;
            plStack_1a0 = plVar20;
            if ((local_368 & 4) != 0) {
              uVar27 = local_368 & 0xfffffffb;
              local_368 = uVar27;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_290);
            }
            if (lVar33 == 0) {
              uVar27 = uVar27 | 8;
              local_288 = 0;
              local_368 = uVar27;
            }
            else {
              lVar15 = *(longlong *)(lVar33 + 0x48);
              if (*(char *)(lVar15 + 0x28) == '\0') {
                FUN_1419f3850(lVar15);
              }
              uVar17 = *(undefined8 *)(lVar15 + 0x40);
            }
            local_188 = uVar17;
            if ((uVar27 & 8) != 0) {
              local_368 = uVar27 & 0xfffffff7;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_288);
            }
            FUN_141ed6ac0(param_2,&local_1a8,2,1);
            lVar15 = local_360;
            local_3d0 = (longlong *)(*(longlong *)(local_360 + 0x1ab0) + 0x15a8);
            local_3d8 = (longlong **)&local_350;
            FUN_141ad6ae0(lVar14,param_2,local_360,uVar18);
            local_3d8 = &local_338;
            local_3d0 = (longlong *)CONCAT71(local_3d0._1_7_,1);
            FUN_141ad60f0(lVar33,param_2,lVar15,&local_350);
          }
          else {
            local_200 = 0;
            local_208 = &DAT_146a0ad50;
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(plVar26,local_318,&local_208);
            plVar16 = plVar20;
            if (local_318[0] != -1) {
              plVar16 = (longlong *)((longlong)local_318[0] * 0x20 + *plVar26);
            }
            plVar26 = plVar16 + 2;
            if (plVar16 == (longlong *)0x0) {
              plVar26 = plVar20;
            }
            lVar33 = *plVar26;
            local_1a8 = DAT_1464c1708;
            if (lVar14 == 0) {
              local_368 = local_368 | 1;
              local_260[2] = 0;
            }
            else {
              lVar15 = *(longlong *)(lVar14 + 0x48);
              if (*(char *)(lVar15 + 0x28) == '\0') {
                FUN_1419f3850(lVar15);
              }
              plVar20 = *(longlong **)(lVar15 + 0x38);
            }
            uVar17 = 0;
            uVar27 = local_368;
            plStack_1a0 = plVar20;
            if ((local_368 & 1) != 0) {
              uVar27 = local_368 & 0xfffffffe;
              local_368 = uVar27;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_260 + 2);
            }
            if (lVar33 == 0) {
              uVar27 = uVar27 | 2;
              local_298 = 0;
              local_368 = uVar27;
            }
            else {
              lVar15 = *(longlong *)(lVar33 + 0x48);
              if (*(char *)(lVar15 + 0x28) == '\0') {
                FUN_1419f3850(lVar15);
              }
              uVar17 = *(undefined8 *)(lVar15 + 0x40);
            }
            local_188 = uVar17;
            if ((uVar27 & 2) != 0) {
              local_368 = uVar27 & 0xfffffffd;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_298);
            }
            FUN_141ed6ac0(param_2,&local_1a8,2,1);
            lVar15 = local_360;
            local_3d0 = (longlong *)(*(longlong *)(local_360 + 0x1ab0) + 0x15a8);
            local_3d8 = (longlong **)&local_350;
            FUN_141ad6ae0(lVar14,param_2,local_360,uVar18);
            local_3d8 = &local_338;
            local_3d0 = (longlong *)CONCAT71(local_3d0._1_7_,1);
            FUN_141ad60f0(lVar33,param_2,lVar15,&local_350);
          }
          uVar18 = DAT_1464c16d0;
          puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar24 = puVar21 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar24 = puVar21 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar24;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          iVar23 = local_308 * local_364;
          **(undefined8 **)(param_2 + 8) = puVar21;
          *(undefined8 **)(param_2 + 8) = puVar21 + 1;
          puVar21[1] = 0;
          *puVar21 = &PTR_LAB_143f489e0;
          *(undefined4 *)(puVar21 + 2) = 0;
          puVar21[3] = uVar18;
          *(undefined4 *)(puVar21 + 4) = 0;
          lVar14 = DAT_1464c1740;
          if (DAT_1464c1740 == 0) {
            LowLevelFatalErrorHandler
                      ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!")
            ;
            FDebug::AssertFailed
                      (&DAT_143f3f584,"Unknown",0x8d8,
                       L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
          }
          puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar24 = puVar21 + 7;
          if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar24 = puVar21 + 7;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar24;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar21;
          *(undefined8 **)(param_2 + 8) = puVar21 + 1;
          puVar21[1] = 0;
          *puVar21 = &PTR_LAB_143f489d0;
          puVar21[2] = lVar14;
          puVar21[3] = 0;
          *(undefined4 *)(puVar21 + 4) = 0;
          *(undefined8 *)((longlong)puVar21 + 0x24) = 4;
          *(undefined4 *)((longlong)puVar21 + 0x2c) = 2;
          *(int *)(puVar21 + 6) = iVar23;
        }
        if (local_260[0] != 0) {
          FScopedGPUStatEvent::End(local_260);
        }
        local_340 = local_340 + 1;
        local_300 = local_300 + 1;
        param_1 = local_2f8;
        param_5 = local_2d0;
      } while (local_340 < *(int *)(local_2f8 + 200));
    }
    if (local_338 != (longlong *)0x0) {
      (**(code **)(*local_338 + 0x30))();
    }
    uVar18 = 1;
  }
  return uVar18;
}



// FUNCTION 141ad1ee0 FUN_141ad1ee0 body=1164 status=ok
// SIG undefined FUN_141ad1ee0(void)

void FUN_141ad1ee0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar12;
  uint local_res8 [2];
  uint local_res20 [2];
  ulonglong in_stack_fffffffffffffee8;
  undefined4 uVar13;
  uint local_a8 [2];
  longlong *local_a0;
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong uVar11;
  
  if (((((DAT_1464c1664 != 0) && (DAT_1464c165c != 0)) && (2 < *(int *)(param_1 + 0x2a0))) &&
      (((uint)(&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] < 0x20 &&
       ((0xda151015U >> ((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] & 0x1f) & 1) != 0)))) &&
     ((*(uint *)(param_1 + 0x38) & 0x40000000) != 0)) {
    lVar9 = (longlong)*(int *)(param_1 + 200);
    bVar3 = false;
    if (0 < lVar9) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1ab0);
      do {
        if ((0 < (int)plVar5[0x2c0]) && (*plVar5 != 0)) {
          bVar3 = true;
        }
        plVar5 = plVar5 + 0x61a;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      if (bVar3) {
        uVar11 = 0;
        local_a0 = (longlong *)0x0;
        FUN_141b299c0(param_2,&local_a0,L"CapsuleBentNormal",10,
                      in_stack_fffffffffffffee8 & 0xffffffff00000000);
        uVar12 = uVar11;
        if (0 < *(int *)(param_1 + 200)) {
          do {
            lVar9 = *(longlong *)(param_1 + 0xc0) + uVar12;
            if ((0 < *(int *)(lVar9 + 0x30b0)) && (*(longlong *)(lVar9 + 0x1ab0) != 0)) {
              local_90 = 0;
              local_68[0] = 0;
              local_68[1] = 0;
              FScopedGPUStatEvent::Begin(local_68,param_2,&DAT_1469fdd60,&local_90);
              local_res8[0] = 0;
              local_a8[0] = 0;
              local_res20[0] = 0;
              local_88 = 0;
              FUN_141ad8d60(param_1,param_2,lVar9,local_res8,local_a8,local_res20,&local_88);
              local_a8[0] = local_res8[0];
              if (0 < (int)local_res8[0]) {
                FUN_141a19150(param_2,0,0,0);
                local_48 = *(undefined1 (*) [16])(lVar9 + 0x1aa0);
                iVar4 = local_48._8_4_ - local_48._0_4_;
                if (iVar4 < 0) {
                  iVar4 = iVar4 + 1;
                }
                local_res8[0] = ((iVar4 >> 1) + -1 + DAT_1464c1658) / DAT_1464c1658;
                iVar4 = local_48._12_4_ - local_48._4_4_;
                if (iVar4 < 0) {
                  iVar4 = iVar4 + 1;
                }
                local_58 = &DAT_146a099a0;
                lVar1 = *(longlong *)(lVar9 + 0x3090);
                local_50 = 0;
                local_res20[0] = (DAT_1464c1658 + -1 + (iVar4 >> 1)) / DAT_1464c1658;
                local_78 = local_a0 + 1;
                TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                ::FindId(lVar1 + 0x38,local_98);
                plVar5 = (longlong *)0x0;
                if (local_98[0] != -1) {
                  plVar5 = (longlong *)((longlong)local_98[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
                }
                plVar6 = plVar5 + 2;
                if (plVar5 == (longlong *)0x0) {
                  plVar6 = (longlong *)0x0;
                }
                lVar1 = *plVar6;
                lVar2 = *(longlong *)(lVar1 + 0x48);
                if (*(char *)(lVar2 + 0x28) == '\0') {
                  FUN_1419f3850(lVar2);
                }
                local_70 = *(undefined8 *)(lVar2 + 0x60);
                FRHIComputeShader::UpdateStats(local_70);
                puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar7 = puVar8 + 3;
                if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
                  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar7 = puVar8 + 3;
                }
                uVar10 = local_res20[0];
                *(undefined8 **)(param_2 + 0x30) = puVar7;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                uStack_7c = local_res20[0];
                **(undefined8 **)(param_2 + 8) = puVar8;
                *(undefined8 **)(param_2 + 8) = puVar8 + 1;
                puVar8[1] = 0;
                *puVar8 = &PTR_LAB_144d91e50;
                puVar8[2] = local_70;
                local_80 = local_res8[0];
                uVar13 = 0;
                FUN_141ad59d0(lVar1,param_2,*(undefined8 *)(param_1 + 8),lVar9,0,local_78,
                              CONCAT44(local_res20[0],local_res8[0]),0,
                              CONCAT44((float)local_res20[0],(float)local_res8[0]),DAT_1464c1644,
                              local_48,2,local_a8[0],
                              *(undefined8 *)(*(longlong *)(lVar9 + 0x1ab0) + 0x1558),0,
                              *(undefined8 *)(*(longlong *)(lVar9 + 0x1ab0) + 0x1568),local_88,
                              *(undefined8 *)(*param_3 + 0x10));
                DispatchComputeShader(param_2,lVar1,local_res8[0],uVar10,CONCAT44(uVar13,1));
                TCapsuleShadowingBaseCS<2>::UnsetParameters(lVar1,param_2,local_78,0);
                plVar5 = (longlong *)*param_3;
                *param_3 = (longlong)local_a0;
                if (local_a0 != (longlong *)0x0) {
                  (**(code **)(*local_a0 + 0x28))();
                }
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x30))(plVar5);
                }
              }
              if (local_68[0] != 0) {
                FScopedGPUStatEvent::End(local_68);
              }
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            uVar12 = uVar12 + 0x30d0;
          } while ((int)uVar10 < *(int *)(param_1 + 200));
        }
        if (local_a0 != (longlong *)0x0) {
          (**(code **)(*local_a0 + 0x30))();
        }
      }
    }
  }
  return;
}



// FUNCTION 141ad2370 FUN_141ad2370 body=4370 status=ok
// SIG undefined FUN_141ad2370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ad2370(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined1 auStack_508 [32];
  longlong **local_4e8;
  longlong *local_4e0;
  undefined8 *local_4d8;
  ulonglong local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined1 *local_4b8;
  int local_4b0;
  int local_4a8;
  undefined8 local_4a0;
  int local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  int local_478;
  int local_474;
  int local_470 [2];
  longlong *local_468;
  longlong *local_460;
  undefined1 local_458 [16];
  int local_448;
  int local_444;
  int local_440;
  int iStack_43c;
  int local_438;
  int local_434;
  int local_430;
  int local_42c;
  int local_428 [2];
  longlong local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong local_408;
  undefined *local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined2 local_3f0;
  undefined8 local_3e8;
  longlong local_3e0 [3];
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8 [2];
  undefined8 local_3a8;
  undefined *local_3a0;
  undefined4 local_398;
  undefined *local_390;
  undefined4 local_388;
  undefined *local_380;
  undefined4 local_378;
  undefined *local_370;
  undefined4 local_368;
  undefined *local_360;
  undefined4 local_358;
  longlong local_350 [2];
  longlong *local_340;
  int local_338;
  int iStack_334;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined2 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2f0;
  wchar_t *local_2e8;
  undefined2 local_2e0;
  undefined8 local_2d8;
  longlong *plStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  ulonglong local_28c;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 local_22c;
  undefined4 local_224;
  undefined4 local_218;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_444 = 0;
  if (((((DAT_1464c1664 != 0) && (DAT_1464c165c != 0)) && (2 < *(int *)(param_1 + 0x2a0))) &&
      (((uint)(&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] < 0x20 &&
       ((0xda151015U >> ((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)] & 0x1f) & 1) != 0)))) &&
     (((*(byte *)(param_1 + 0x3c) & 0x40) != 0 &&
      (((*(uint *)(param_1 + 0x38) & 0x40000000) != 0 &&
       (local_420 = param_1, lVar12 = FSceneRenderTargets::Get(), *(char *)(lVar12 + 0x3a8) != '\0')
       ))))) {
    lVar12 = (longlong)*(int *)(param_1 + 200);
    bVar5 = false;
    if (0 < lVar12) {
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1ab0);
      do {
        if ((0 < (int)plVar13[0x2c0]) && (*plVar13 != 0)) {
          bVar5 = true;
        }
        plVar13 = plVar13 + 0x61a;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (bVar5) {
        local_460 = (longlong *)0x0;
        iVar19 = 2 - (uint)(DAT_1469fd5a4 != 0);
        lVar12 = FSceneRenderTargets::Get();
        local_4d8 = (undefined8 *)CONCAT71(local_4d8._1_7_,1);
        local_4e0 = (longlong *)CONCAT71(local_4e0._1_7_,1);
        uVar14 = *(ulonglong *)(lVar12 + 0x378);
        local_328 = _DAT_146ab6928;
        uStack_320 = uRam0000000146ab6930;
        local_308 = 1;
        local_304 = 0x10000;
        local_314 = (undefined4)
                    ((longlong)
                     ((ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) /
                    (longlong)iVar19);
        local_318 = DAT_146ab6938;
        local_300 = 1;
        local_310 = (undefined4)
                    ((longlong)
                     ((ulonglong)(uint)((longlong)uVar14 >> 0x3f) << 0x20 | uVar14 >> 0x20) /
                    (longlong)iVar19);
        local_30c = 0;
        local_2e8 = L"UnknownTexture2D";
        local_2fc = 0xf;
        local_4e8 = (longlong **)0x144dba3e8;
        local_2f4 = 0x10001;
        local_2f0 = 0;
        local_2e0 = 1;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_328,&local_460);
        lVar12 = FSceneRenderTargets::Get(param_2);
        local_340 = (longlong *)0x0;
        local_338 = 0;
        iStack_334 = 0;
        if (param_3 != 0) {
          local_338 = 1;
          iStack_334 = 0;
          TArray<FRHITexture_*,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(local_350,0);
          plVar13 = local_350;
          if (local_340 != (longlong *)0x0) {
            plVar13 = local_340;
          }
          *plVar13 = param_3;
        }
        iVar19 = local_338;
        if (param_4 != 0) {
          lVar20 = (longlong)local_338;
          local_338 = local_338 + 1;
          if (iStack_334 < local_338) {
            TArray<FRHITexture_*,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                      (local_350,iVar19);
          }
          plVar13 = local_350;
          if (local_340 != (longlong *)0x0) {
            plVar13 = local_340;
          }
          plVar13[lVar20] = param_4;
        }
        if (local_338 == 0) {
          *(undefined1 *)(lVar12 + 0x2d8) = 1;
          lVar20 = *(longlong *)(*(longlong *)(lVar12 + 0x120) + 8);
          local_338 = 1;
          if (iStack_334 < 1) {
            TArray<FRHITexture_*,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(local_350,0);
          }
          local_3f4 = 0xffffffff;
          local_3f8 = 0;
          plVar13 = local_350;
          if (local_340 != (longlong *)0x0) {
            plVar13 = local_340;
          }
          local_458 = ZEXT816(0);
          local_3f0 = 0x102;
          *plVar13 = lVar20;
          local_400 = *(undefined **)(*(longlong *)(lVar12 + 0x120) + 8);
          FUN_140c63b80(&local_2d8,1,&local_400,local_458);
          FRHICommandListBase::CacheActiveRenderTargets(param_2,local_218,&local_2d8,local_148);
          puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar22 = puVar15 + 0x54;
          if (*(undefined8 **)(param_2 + 0x38) < puVar22) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
            puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar22 = puVar15 + 0x54;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar22;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar15;
          *(undefined8 **)(param_2 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *puVar15 = &PTR_FUN_1444d5488;
          FUN_140c63680(puVar15 + 2,&local_2d8);
          local_4d0 = local_4d0 & 0xffffffffffffff00;
          plVar13 = local_350;
          if (local_340 != (longlong *)0x0) {
            plVar13 = local_340;
          }
          local_4d8 = (undefined8 *)CONCAT71(local_4d8._1_7_,1);
          local_4e0 = (longlong *)0x0;
          local_4e8 = (longlong **)((ulonglong)local_4e8 & 0xffffffff00000000);
          FUN_141ad7ef0(param_2,local_338,plVar13,0);
          FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(&local_2d8);
        }
        local_448 = 0;
        if (0 < *(int *)(local_420 + 200)) {
          local_408 = 0;
          lVar12 = local_420;
          do {
            iVar19 = local_448;
            lVar20 = local_408 + *(longlong *)(lVar12 + 0xc0);
            if ((0 < *(int *)(lVar20 + 0x30b0)) && (*(longlong *)(lVar20 + 0x1ab0) != 0)) {
              local_418 = 0;
              local_3b8[0] = 0;
              local_3b8[1] = 0;
              FScopedGPUStatEvent::Begin(local_3b8,param_2,&DAT_1469fdd60,&local_418);
              local_4d8 = &local_410;
              local_474 = 0;
              local_4e0 = (longlong *)&local_478;
              local_470[0] = 0;
              local_4e8 = (longlong **)local_470;
              local_478 = 0;
              local_410 = 0;
              FUN_141ad8d60(lVar12,param_2,lVar20,&local_474);
              iVar11 = local_474;
              iVar18 = local_478;
              local_470[0] = local_478;
              if ((0 < local_474) || (0 < local_478)) {
                FUN_141a19150(param_2,0,0,0);
                local_458 = *(undefined1 (*) [16])(lVar20 + 0x1aa0);
                iVar19 = 2 - (uint)(DAT_1469fd5a4 != 0);
                local_440 = ((local_458._8_4_ - local_458._0_4_) / iVar19 + -1 + DAT_1464c1658) /
                            DAT_1464c1658;
                local_478 = ((local_458._12_4_ - local_458._4_4_) / iVar19 + -1 + DAT_1464c1658) /
                            DAT_1464c1658;
                uVar4 = CONCAT44(local_478,local_440);
                iStack_43c = local_478;
                FUN_141ab4ee0(uVar4,*(undefined8 *)(lVar20 + 0x1ab0));
                ClearUAV(param_2,*(longlong *)(lVar20 + 0x1ab0) + 0x15a8,0);
                local_468 = local_460 + 1;
                if ((iVar11 < 1) || (iVar18 < 1)) {
                  lVar12 = *(longlong *)(lVar20 + 0x3090);
                  if (iVar11 < 1) {
                    local_388 = 0;
                    local_390 = &DAT_146a09ee0;
                    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                    ::FindId(lVar12 + 0x38,&local_430,&local_390);
                    if (local_430 == -1) goto LAB_141ad299a;
                    lVar12 = (longlong)local_430 * 0x20 + *(longlong *)(lVar12 + 0x38);
                  }
                  else {
                    local_398 = 0;
                    local_3a0 = &DAT_146a09850;
                    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                    ::FindId(lVar12 + 0x38,&local_434,&local_3a0);
                    if (local_434 == -1) {
LAB_141ad299a:
                      lVar12 = 0;
                    }
                    else {
                      lVar12 = (longlong)local_434 * 0x20 + *(longlong *)(lVar12 + 0x38);
                    }
                  }
                }
                else {
                  lVar12 = *(longlong *)(lVar20 + 0x3090);
                  local_360 = &DAT_146a0a570;
                  local_358 = 0;
                  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                  ::FindId(lVar12 + 0x38,&local_438,&local_360);
                  if (local_438 == -1) goto LAB_141ad299a;
                  lVar12 = (longlong)local_438 * 0x20 + *(longlong *)(lVar12 + 0x38);
                }
                plVar13 = (longlong *)(lVar12 + 0x10);
                if (lVar12 == 0) {
                  plVar13 = (longlong *)0x0;
                }
                lVar12 = *plVar13;
                lVar16 = *(longlong *)(lVar12 + 0x48);
                if (*(char *)(lVar16 + 0x28) == '\0') {
                  FUN_1419f3850(lVar16);
                }
                uVar3 = *(undefined8 *)(lVar16 + 0x60);
                FRHIComputeShader::UpdateStats(uVar3);
                puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar22 = puVar15 + 3;
                if (*(undefined8 **)(param_2 + 0x38) < puVar22) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
                  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar22 = puVar15 + 3;
                }
                plVar13 = local_468;
                *(undefined8 **)(param_2 + 0x30) = puVar22;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                local_480 = 0;
                **(undefined8 **)(param_2 + 8) = puVar15;
                *(undefined8 **)(param_2 + 8) = puVar15 + 1;
                puVar15[1] = 0;
                *puVar15 = &PTR_LAB_144d91e50;
                puVar15[2] = uVar3;
                lVar16 = *(longlong *)(lVar20 + 0x1ab0);
                local_4d0 = lVar16 + 0x15a8;
                local_488 = local_410;
                local_490 = *(undefined8 *)(lVar16 + 0x1568);
                local_4b0 = 2 - (uint)(DAT_1469fd5a4 != 0);
                local_498 = local_470[0];
                local_4a0 = *(undefined8 *)(lVar16 + 0x1558);
                local_4a8 = local_474;
                local_4b8 = local_458;
                local_4c0 = DAT_1464c1644;
                local_4c8 = CONCAT44((float)local_478,(float)local_440);
                local_4e0 = local_468;
                local_4e8 = (longlong **)0x0;
                local_4d8 = (undefined8 *)uVar4;
                FUN_141ad5330(lVar12,param_2,*(undefined8 *)(local_420 + 8),lVar20);
                local_4e8 = (longlong **)CONCAT44(local_4e8._4_4_,1);
                DispatchComputeShader(param_2,lVar12,local_440,local_478);
                TCapsuleShadowingBaseCS<2>::UnsetParameters
                          (lVar12,param_2,plVar13,*(longlong *)(lVar20 + 0x1ab0) + 0x15a8);
                plVar21 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                local_468 = (longlong *)local_460[3];
                plVar13 = plVar21 + 1;
                if (*(longlong **)(param_2 + 0x38) < plVar13) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
                  plVar21 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  plVar13 = plVar21 + 1;
                }
                *(longlong **)(param_2 + 0x30) = plVar13;
                *plVar21 = (longlong)local_468;
                puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar22 = puVar15 + 6;
                if (*(undefined8 **)(param_2 + 0x38) < puVar22) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
                  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar22 = puVar15 + 6;
                }
                *(undefined8 **)(param_2 + 0x30) = puVar22;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                local_4d0 = CONCAT71(local_4d0._1_7_,1);
                local_4d8 = (undefined8 *)CONCAT71(local_4d8._1_7_,1);
                **(undefined8 **)(param_2 + 8) = puVar15;
                *(undefined8 **)(param_2 + 8) = puVar15 + 1;
                puVar15[1] = 0;
                *puVar15 = &PTR_LAB_144d91e60;
                *(undefined4 *)(puVar15 + 2) = 1;
                puVar15[3] = plVar21;
                *(undefined4 *)(puVar15 + 4) = 0;
                *(undefined4 *)((longlong)puVar15 + 0x24) = 1;
                puVar15[5] = 0;
                local_4e0 = (longlong *)0x0;
                plVar13 = local_350;
                if (local_340 != (longlong *)0x0) {
                  plVar13 = local_340;
                }
                local_4e8 = (longlong **)((ulonglong)local_4e8 & 0xffffffff00000000);
                FUN_141ad7ef0(param_2,local_338,plVar13,0);
                local_298 = 0;
                local_2d8 = 0;
                plStack_2d0 = (longlong *)0x0;
                local_2c8 = 0;
                uStack_2c0 = 0;
                local_2b8 = (longlong *)0x0;
                uStack_2b0 = 0;
                local_2a8 = 0;
                uStack_2a0 = 0;
                local_278 = 0;
                uStack_270 = 0;
                local_290 = 0;
                local_28c = 0x26;
                local_284 = 0;
                local_27c = 0;
                local_268 = 0;
                local_260 = 0;
                local_258 = 0;
                local_250 = 0;
                local_248 = 0;
                local_240 = 0;
                local_238 = 0;
                local_234 = 0;
                local_22c = 0;
                local_224 = 0;
                FUN_14049afe0(param_2);
                local_474 = *(int *)(lVar20 + 0x1aa4);
                uVar1 = *(undefined4 *)(lVar20 + 0x1aac);
                uVar2 = *(undefined4 *)(lVar20 + 0x1aa8);
                puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                local_470[0] = *(int *)(lVar20 + 0x1aa0);
                puVar22 = puVar15 + 5;
                if (*(undefined8 **)(param_2 + 0x38) < puVar22) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30);
                  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar22 = puVar15 + 5;
                }
                *(undefined8 **)(param_2 + 0x30) = puVar22;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar15;
                *(undefined8 **)(param_2 + 8) = puVar15 + 1;
                puVar15[1] = 0;
                *puVar15 = &PTR_LAB_143f59420;
                *(int *)(puVar15 + 2) = local_470[0];
                *(int *)((longlong)puVar15 + 0x14) = local_474;
                *(undefined4 *)(puVar15 + 3) = 0;
                *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar2;
                *(undefined4 *)(puVar15 + 4) = uVar1;
                *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
                uStack_2a0 = FUN_140985530();
                local_298 = FUN_1409853f0();
                if (local_338 < 2) {
                  local_2a8 = FUN_141abdd70();
                }
                else {
                  local_2a8 = FUN_141abdeb0();
                }
                lVar12 = *(longlong *)(lVar20 + 0x3090);
                local_378 = 0;
                local_380 = &DAT_1469fdf60;
                TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                ::FindId(lVar12 + 0x38,&local_42c,&local_380);
                if (local_42c == -1) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = (longlong)local_42c * 0x20 + *(longlong *)(lVar12 + 0x38);
                }
                plVar13 = (longlong *)0x0;
                plVar21 = (longlong *)(lVar12 + 0x10);
                if (lVar12 == 0) {
                  plVar21 = plVar13;
                }
                lVar12 = *plVar21;
                local_2d8 = DAT_1464c1708;
                if (lVar12 == 0) {
                  bVar6 = true;
                  local_3c0 = 0;
                }
                else {
                  lVar16 = *(longlong *)(lVar12 + 0x48);
                  if (*(char *)(lVar16 + 0x28) == '\0') {
                    FUN_1419f3850(lVar16);
                  }
                  plVar13 = *(longlong **)(lVar16 + 0x38);
                }
                plStack_2d0 = plVar13;
                if (bVar6) {
                  bVar6 = false;
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3c0);
                }
                local_28c = local_28c & 0xffffffff00000000;
                if (local_338 < 2) {
                  if (DAT_1469fd5a4 == 0) {
                    FUN_141aae770(local_3e0 + 2);
                    lVar16 = local_3e0[2];
                    if (local_3e0[2] == 0) {
                      bVar10 = true;
                      local_2b8 = (longlong *)0x0;
                      local_3c8 = 0;
                    }
                    else {
                      local_468 = *(longlong **)(local_3e0[2] + 0x48);
                      if (*(char *)((longlong)local_468 + 0x28) == '\0') {
                        FUN_1419f3850(local_468);
                      }
                      local_2b8 = *(longlong **)((longlong)local_468 + 0x40);
                    }
                    if (bVar10) {
                      bVar10 = false;
                      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3c8);
                    }
                    FUN_141ed6ac0(param_2,&local_2d8,2,1);
                    local_4e0 = (longlong *)(*(longlong *)(lVar20 + 0x1ab0) + 0x15a8);
                    local_4e8 = (longlong **)local_458;
                    FUN_141ad6ae0(lVar12,param_2,lVar20,uVar4);
                    local_4e8 = &local_460;
                    local_4e0 = (longlong *)((ulonglong)local_4e0 & 0xffffffffffffff00);
                    FUN_141ad60f0(lVar16,param_2,lVar20,local_458);
                  }
                  else {
                    FUN_141aae7f0(local_3e0);
                    lVar16 = local_3e0[0];
                    if (local_3e0[0] == 0) {
                      bVar9 = true;
                      local_2b8 = (longlong *)0x0;
                      local_3e0[1] = 0;
                    }
                    else {
                      local_468 = *(longlong **)(local_3e0[0] + 0x48);
                      if (*(char *)((longlong)local_468 + 0x28) == '\0') {
                        FUN_1419f3850(local_468);
                      }
                      local_2b8 = *(longlong **)((longlong)local_468 + 0x40);
                    }
                    if (bVar9) {
                      bVar9 = false;
                      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_3e0 + 1);
                    }
                    FUN_141ed6ac0(param_2,&local_2d8,2,1);
                    local_4e0 = (longlong *)(*(longlong *)(lVar20 + 0x1ab0) + 0x15a8);
                    local_4e8 = (longlong **)local_458;
                    FUN_141ad6ae0(lVar12,param_2,lVar20,uVar4);
                    local_4e8 = &local_460;
                    local_4e0 = (longlong *)((ulonglong)local_4e0 & 0xffffffffffffff00);
                    FUN_141ad60f0(lVar16,param_2,lVar20,local_458);
                  }
                }
                else {
                  plVar13 = (longlong *)(*(longlong *)(lVar20 + 0x3090) + 0x38);
                  if (DAT_1469fd5a4 == 0) {
                    local_3f8 = 0;
                    local_400 = &DAT_146a0a960;
                    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                    ::FindId(plVar13,&local_444,&local_400);
                    if (local_444 == -1) {
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = (longlong)local_444 * 0x20 + *plVar13;
                    }
                    plVar13 = (longlong *)0x0;
                    plVar21 = (longlong *)(lVar16 + 0x10);
                    if (lVar16 == 0) {
                      plVar21 = plVar13;
                    }
                    lVar16 = *plVar21;
                    if (lVar16 == 0) {
                      bVar8 = true;
                      local_3e8 = 0;
                    }
                    else {
                      local_468 = *(longlong **)(lVar16 + 0x48);
                      if (*(char *)((longlong)local_468 + 0x28) == '\0') {
                        FUN_1419f3850(local_468);
                      }
                      plVar13 = *(longlong **)((longlong)local_468 + 0x40);
                    }
                    local_2b8 = plVar13;
                    if (bVar8) {
                      bVar8 = false;
                      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3e8);
                    }
                    FUN_141ed6ac0(param_2,&local_2d8,2,1);
                    local_4e0 = (longlong *)(*(longlong *)(lVar20 + 0x1ab0) + 0x15a8);
                    local_4e8 = (longlong **)local_458;
                    FUN_141ad6ae0(lVar12,param_2,lVar20,uVar4);
                    local_4e8 = &local_460;
                    local_4e0 = (longlong *)((ulonglong)local_4e0 & 0xffffffffffffff00);
                    FUN_141ad60f0(lVar16,param_2,lVar20,local_458);
                  }
                  else {
                    local_368 = 0;
                    local_370 = &DAT_146a0ac00;
                    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                    ::FindId(plVar13,local_428,&local_370);
                    if (local_428[0] == -1) {
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = (longlong)local_428[0] * 0x20 + *plVar13;
                    }
                    plVar13 = (longlong *)0x0;
                    plVar21 = (longlong *)(lVar16 + 0x10);
                    if (lVar16 == 0) {
                      plVar21 = plVar13;
                    }
                    lVar16 = *plVar21;
                    if (lVar16 == 0) {
                      bVar7 = true;
                      local_3a8 = 0;
                    }
                    else {
                      local_468 = *(longlong **)(lVar16 + 0x48);
                      if (*(char *)((longlong)local_468 + 0x28) == '\0') {
                        FUN_1419f3850(local_468);
                      }
                      plVar13 = *(longlong **)((longlong)local_468 + 0x40);
                    }
                    local_2b8 = plVar13;
                    if (bVar7) {
                      bVar7 = false;
                      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3a8);
                    }
                    FUN_141ed6ac0(param_2,&local_2d8,2,1);
                    local_4e0 = (longlong *)(*(longlong *)(lVar20 + 0x1ab0) + 0x15a8);
                    local_4e8 = (longlong **)local_458;
                    FUN_141ad6ae0(lVar12,param_2,lVar20,uVar4);
                    local_4e8 = &local_460;
                    local_4e0 = (longlong *)((ulonglong)local_4e0 & 0xffffffffffffff00);
                    FUN_141ad60f0(lVar16,param_2,lVar20,local_458);
                  }
                }
                uVar4 = DAT_1464c16d0;
                puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar22 = puVar15 + 5;
                if (*(undefined8 **)(param_2 + 0x38) < puVar22) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar22 = puVar15 + 5;
                }
                *(undefined8 **)(param_2 + 0x30) = puVar22;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                iVar19 = local_440 * local_478;
                **(undefined8 **)(param_2 + 8) = puVar15;
                *(undefined8 **)(param_2 + 8) = puVar15 + 1;
                puVar15[1] = 0;
                *puVar15 = &PTR_LAB_143f489e0;
                *(undefined4 *)(puVar15 + 2) = 0;
                puVar15[3] = uVar4;
                *(undefined4 *)(puVar15 + 4) = 0;
                lVar12 = DAT_1464c1740;
                if (DAT_1464c1740 == 0) {
                  LowLevelFatalErrorHandler
                            ("Unknown",0x8d8,
                             L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                  FDebug::AssertFailed
                            (&DAT_143f3f584,"Unknown",0x8d8,
                             L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                }
                puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar22 = puVar15 + 7;
                if (*(undefined8 **)(param_2 + 0x38) < puVar22) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
                  puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar22 = puVar15 + 7;
                }
                *(undefined8 **)(param_2 + 0x30) = puVar22;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar15;
                *(undefined8 **)(param_2 + 8) = puVar15 + 1;
                puVar15[1] = 0;
                puVar15[2] = lVar12;
                *puVar15 = &PTR_LAB_143f489d0;
                puVar15[3] = 0;
                *(undefined4 *)(puVar15 + 4) = 0;
                *(undefined8 *)((longlong)puVar15 + 0x24) = 4;
                *(undefined4 *)((longlong)puVar15 + 0x2c) = 2;
                *(int *)(puVar15 + 6) = iVar19;
                lVar12 = local_420;
                iVar19 = local_448;
              }
              if (local_3b8[0] != 0) {
                FScopedGPUStatEvent::End(local_3b8);
              }
            }
            local_448 = iVar19 + 1;
            local_408 = local_408 + 0x30d0;
          } while (local_448 < *(int *)(lVar12 + 200));
        }
        iVar19 = local_338;
        lVar12 = (longlong)local_338;
        plVar13 = local_350;
        if (local_340 != (longlong *)0x0) {
          plVar13 = local_340;
        }
        puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        iVar18 = local_338 * 8;
        uVar14 = (longlong)iVar18 + (longlong)puVar22;
        if (*(ulonglong *)(param_2 + 0x38) < uVar14) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar18 + 8);
          puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar14 = (longlong)iVar18 + (longlong)puVar22;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar14;
        if (0 < iVar19) {
          puVar15 = puVar22;
          do {
            *puVar15 = *(undefined8 *)(((longlong)plVar13 - (longlong)puVar22) + (longlong)puVar15);
            puVar15 = puVar15 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar17 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar17 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar15;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar17;
        *(undefined8 **)(param_2 + 8) = puVar17 + 1;
        puVar17[1] = 0;
        *puVar17 = &PTR_LAB_143f59470;
        *(int *)(puVar17 + 2) = iVar19;
        puVar17[3] = puVar22;
        *(undefined4 *)(puVar17 + 4) = 0;
        *(undefined1 *)((longlong)puVar17 + 0x24) = 0;
        if (local_340 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_460 != (longlong *)0x0) {
          (**(code **)(*local_460 + 0x30))();
        }
      }
    }
  }
  return;
}



// FUNCTION 141ad3490 FUN_141ad3490 body=444 status=ok
// SIG undefined FUN_141ad3490(void)

undefined8
FUN_141ad3490(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  ulonglong local_48;
  undefined2 local_40;
  undefined2 uStack_3e;
  
  local_48 = (ulonglong)*(uint *)(param_1 + 0x2e0);
  _local_40 = CONCAT22(uStack_3e,1);
  if (0 < *(int *)(param_3 + 0x22a8)) {
    if (param_5 == '\0') {
      uVar8 = 0x3f600000;
    }
    else {
      uVar8 = 0;
    }
    if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    FUN_141ada980(param_2,param_3,uVar8,0x3f800000,uVar5);
    uVar8 = _local_40;
    uVar4 = local_48;
    iVar6 = 0;
    if (0 < *(int *)(param_3 + 0x22a8)) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(param_3 + 0x22a0);
        uVar1 = *(uint *)(lVar7 + 0x10 + lVar2);
        if (((uVar1 & 3) != 0) && ((uVar1 >> 3 & 1) != 0)) {
          lVar3 = *(longlong *)(lVar7 + lVar2);
          local_48 = uVar4;
          _local_40 = uVar8;
          uVar5 = FUN_141ac28e0(param_3);
          FUN_141b04180(param_2,param_3,&local_48,lVar3,1,param_4,*(undefined8 *)(lVar7 + 8 + lVar2)
                        ,*(undefined4 *)(lVar3 + 0xb0),1,uVar5,0);
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (iVar6 < *(int *)(param_3 + 0x22a8));
    }
    if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    FUN_141ada980(param_2,param_3,0,0x3f800000,uVar5);
  }
  return 1;
}



// FUNCTION 141ad3650 FUN_141ad3650 body=938 status=ok
// SIG undefined FUN_141ad3650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141ad3650(longlong *param_1,float *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_158 [32];
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
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar1 = *param_1;
  fVar9 = *(float *)(lVar1 + 0x8dc) - param_2[0xc];
  fVar10 = *(float *)(lVar1 + 0x8e0) - param_2[0xd];
  fVar8 = *(float *)(lVar1 + 0x8e4) - param_2[0xe];
  fVar10 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
  fVar8 = param_2[5] * param_2[5] + param_2[4] * param_2[4] + param_2[6] * param_2[6];
  fVar9 = param_2[9] * param_2[9] + param_2[8] * param_2[8] + param_2[10] * param_2[10];
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  fVar9 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  if ((fVar10 <= SQRT(fVar8)) || (*(float *)(DAT_1469fe478 + 4) <= SQRT(fVar8) / fVar10)) {
    local_138 = 0;
    uStack_130 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e4 = 0;
    local_dc = 0;
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
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_ec = 0x26;
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_14049afe0(param_1[8],&local_138);
    uStack_100 = FUN_140985530();
    local_108 = FUN_141abdff0();
    local_f8 = FUN_141abf670();
    FUN_141b186a0(param_1[8],&local_138,lVar1,param_3);
    lVar1 = param_1[8];
    puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar5;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar7;
    *(undefined8 **)(lVar1 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489c0;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar5 = (undefined8 *)FUN_141ee3600();
    lVar1 = param_1[8];
    uVar2 = *puVar5;
    puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar5;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar7;
    *(undefined8 **)(lVar1 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar7[3] = uVar2;
    *(undefined4 *)(puVar7 + 4) = 0;
    plVar6 = (longlong *)FUN_141ee35f0();
    lVar1 = param_1[8];
    lVar3 = *plVar6;
    if (lVar3 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x8d8,
                 L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    }
    puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 7;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x40);
      puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 7;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar5;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar7;
    *(undefined8 **)(lVar1 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489d0;
    uVar4 = 0x143f48901;
    puVar7[2] = lVar3;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x24) = 8;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = 0xc;
    *(undefined4 *)(puVar7 + 6) = 1;
  }
  else {
    uVar4 = DAT_1469fe478 & 0xffffffffffffff00;
  }
  return uVar4;
}



// FUNCTION 141ad3a00 FUN_141ad3a00 body=306 status=ok
// SIG undefined FUN_141ad3a00(void)

void FUN_141ad3a00(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar7 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar7 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar7 < (int)uVar2) {
    iVar7 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar7;
  _Src = (void *)*param_1;
  if (iVar7 != 0) {
    puStack_30 = local_res8;
    iVar3 = iVar7 * 2;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    lVar4 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar6 = 8;
    uVar2 = uVar6;
    if (0xf < iVar3) {
      uVar2 = 0x10;
    }
    uVar8 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar4 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar4 + 0x18) + -1 + uVar8 & ~(uVar8 - 1));
    uVar5 = (longlong)iVar3 + (longlong)_Dst;
    if (*(ulonglong *)(lVar4 + 0x20) < uVar5) {
      if (0xf < iVar3) {
        uVar6 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar6 + iVar3);
      _Dst = (void *)((*puVar1 - 1) + uVar8 & ~(uVar8 - 1));
      uVar5 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar1 = uVar5;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar7 <= param_2) {
        param_2 = iVar7;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * 2));
    }
  }
  return;
}



// FUNCTION 141ad3b40 FUN_141ad3b40 body=966 status=ok
// SIG undefined FUN_141ad3b40(void)

/* WARNING: Removing unreachable block (ram,0x000141ad3ccc) */

void FUN_141ad3b40(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar3 = FSceneRenderTargets::Get(*param_1);
  if ((char)param_1[0xc] != '\0') {
    param_1[4] = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + 8);
  }
  if (*(longlong *)(lVar3 + 0xe8) == 0) {
    bVar2 = true;
    bVar1 = false;
    uVar6 = 0;
    local_a8 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(*(longlong *)(lVar3 + 0xe8) + 8);
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    bVar2 = false;
    bVar1 = true;
    local_res8 = uVar6;
  }
  param_1[8] = uVar6;
  if (bVar2) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a8);
  }
  if (bVar1) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  }
  if (*(longlong *)(lVar3 + 0xf0) == 0) {
    bVar2 = false;
    bVar1 = true;
    lVar5 = 0;
    local_a0 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xf0) + 8);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    bVar2 = true;
    bVar1 = false;
    local_res10 = lVar5;
  }
  param_1[9] = lVar5;
  if (bVar1) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a0);
  }
  if (bVar2) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  }
  if (*(longlong *)(lVar3 + 0xf8) == 0) {
    bVar2 = false;
    bVar1 = true;
    lVar5 = 0;
    local_98 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xf8) + 8);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    bVar2 = true;
    bVar1 = false;
    local_res18 = lVar5;
  }
  param_1[10] = lVar5;
  if (bVar1) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_98);
  }
  if (bVar2) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  }
  if (*(longlong *)(lVar3 + 0x100) == 0) {
    bVar1 = false;
    lVar3 = 0;
    local_90 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x100) + 8);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    bVar1 = true;
    local_res20 = lVar3;
  }
  param_1[0xb] = lVar3;
  if (bVar1) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  }
  plVar10 = param_1 + 3;
  local_80 = 0xffffffff00000000;
  uStack_78 = 0xffffffffffffffff;
  lVar3 = 9;
  local_60 = 0xffffffff;
  uStack_58 = 0;
  local_70 = 0xffffffffffffffff;
  uStack_68 = 0xffffffffffffffff;
  do {
    local_88 = *plVar10;
    if (local_88 != 0) {
      lVar5 = *param_1;
      plVar9 = (longlong *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar7 = plVar9 + 1;
      if (*(longlong **)(lVar5 + 0x38) < plVar7) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x10);
        plVar9 = (longlong *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar7 = plVar9 + 1;
      }
      *(longlong **)(lVar5 + 0x30) = plVar7;
      *plVar9 = local_88;
      puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar8 + 5;
      if (*(undefined8 **)(lVar5 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar8 + 5;
      }
      *(undefined8 **)(lVar5 + 0x30) = puVar4;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      **(undefined8 **)(lVar5 + 8) = puVar8;
      *(undefined8 **)(lVar5 + 8) = puVar8 + 1;
      puVar8[3] = plVar9;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar8 + 2) = 1;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
      lVar5 = *param_1;
      plVar7 = (longlong *)*plVar10;
      puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar8 + 10;
      if (*(undefined8 **)(lVar5 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x58);
        puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar8 + 10;
      }
      *(undefined8 **)(lVar5 + 0x30) = puVar4;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      **(undefined8 **)(lVar5 + 8) = puVar8;
      *(undefined8 **)(lVar5 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar8 + 2) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_80._4_4_;
      *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_78._4_4_;
      *(undefined4 *)(puVar8 + 4) = (undefined4)local_70;
      *(undefined4 *)((longlong)puVar8 + 0x24) = local_70._4_4_;
      *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_68._4_4_;
      *(undefined4 *)(puVar8 + 6) = (undefined4)local_60;
      *(undefined4 *)((longlong)puVar8 + 0x34) = local_60._4_4_;
      *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_58;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_58._4_4_;
      puVar8[8] = plVar7;
      puVar8[9] = plVar7;
      lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
      if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar5 == 0)) {
        (**(code **)(*(longlong *)puVar8[8] + 0x20))();
      }
      lVar5 = (**(code **)(*(longlong *)puVar8[9] + 8))();
      if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar5 == 0)) {
        (**(code **)(*(longlong *)puVar8[9] + 0x20))();
      }
    }
    plVar10 = plVar10 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 141ad3f10 FUN_141ad3f10 body=127 status=ok
// SIG undefined FUN_141ad3f10(void)

void FUN_141ad3f10(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 4,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 4,2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000141ad3f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 6);
  return;
}



// FUNCTION 141ad3f90 Serialize body=121 status=ok
// SIG undefined Serialize(void)

void FSelfShadowedTranslucencyPolicy::PixelParametersType::Serialize
               (longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1);
  FUN_1419e0b60(param_2,param_1 + 4);
  FUN_1419e0b60(param_2,param_1 + 8);
  FUN_1419e0b60(param_2,param_1 + 0xc);
  FUN_1419e0a40(param_2,param_1 + 0x10);
  FUN_1419e0a40(param_2,param_1 + 0x16);
  FUN_1419e0a40(param_2,param_1 + 0x1c);
  FUN_1419e0a40(param_2,param_1 + 0x22);
  return;
}



// FUNCTION 141ad4010 Set body=637 status=ok
// SIG undefined Set(void)

void FTranslucencyShadowProjectionShaderParameters::Set
               (ushort *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FSceneRenderTargets::Get(param_2);
  if (param_4 == 0) {
    uVar7 = *(undefined8 *)(DAT_1464c3318 + 0x10);
    uVar8 = uVar7;
  }
  else {
    uVar7 = *(undefined8 *)(**(longlong **)(param_4 + 0x18) + 0x10);
    uVar8 = *(undefined8 *)((*(longlong **)(param_4 + 0x18))[1] + 0x10);
  }
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar3 = FUN_141a156e0();
  if (param_1[1] != 0) {
    uVar1 = *param_1;
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
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar4;
    puVar6[4] = uVar7;
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
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
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar4;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar3;
  }
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x40);
  uVar4 = FUN_141a156e0();
  if (param_1[5] != 0) {
    uVar1 = param_1[4];
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
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar7;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar8;
  }
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
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
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar7;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 141ad4290 FUN_141ad4290 body=1156 status=ok
// SIG undefined FUN_141ad4290(void)

void FUN_141ad4290(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined8 local_res20;
  undefined4 local_48 [2];
  undefined8 local_40;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res20 = param_4;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  local_40 = uVar4;
  FUN_141aa9420(param_1,param_2,uVar4,*(undefined8 *)(*param_3 + 0x20));
  lVar7 = FSceneRenderTargets::Get(param_2);
  lVar3 = param_3[8];
  uVar6 = (uint)*(ushort *)(param_1 + 0xe0);
  if (7 < *(ushort *)(param_1 + 0xe0)) {
    uVar6 = 8;
  }
  uVar12 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xde);
    uVar2 = *(ushort *)(param_1 + 0xdc);
    pvVar11 = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar8 = uVar12 + (longlong)pvVar11;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar6 + 0x10);
      pvVar11 = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar8 = uVar12 + (longlong)pvVar11;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar8;
    _guard_xfg_dispatch_icall_nop(pvVar11,&local_res20,uVar12);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar9;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar10;
    *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d92080;
    *(uint *)(puVar10 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
    puVar10[2] = uVar4;
    puVar10[3] = pvVar11;
    *(uint *)(puVar10 + 5) = uVar6;
  }
  lVar3 = param_3[8];
  uVar5 = *(undefined8 *)(*(longlong *)(lVar7 + 0xe8) + 0x48);
  if (*(short *)(param_1 + 200) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar9;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar10;
    *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144dcb360;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  lVar3 = param_3[8];
  uVar5 = *(undefined8 *)(*(longlong *)(lVar7 + 0xf0) + 0x48);
  if (*(short *)(param_1 + 0xcc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xca);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar9;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar10;
    *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144dcb360;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  lVar3 = param_3[8];
  uVar5 = *(undefined8 *)(*(longlong *)(lVar7 + 0xf8) + 0x48);
  if (*(short *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xce);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar9;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar10;
    *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144dcb360;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  lVar3 = param_3[8];
  uVar5 = *(undefined8 *)(*(longlong *)(lVar7 + 0x100) + 0x48);
  if (*(short *)(param_1 + 0xd4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd2);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar9;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar10;
    *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144dcb360;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  lVar3 = param_3[8];
  local_48[0] = *(undefined4 *)(DAT_1469fe2f8 + 4);
  uVar6 = (uint)*(ushort *)(param_1 + 0xda);
  if (3 < *(ushort *)(param_1 + 0xda)) {
    uVar6 = 4;
  }
  uVar12 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    uVar2 = *(ushort *)(param_1 + 0xd6);
    pvVar11 = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar8 = (longlong)pvVar11 + uVar12;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar8) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar6 + 0x10);
      pvVar11 = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar8 = uVar12 + (longlong)pvVar11;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar8;
    _guard_xfg_dispatch_icall_nop(pvVar11,local_48,uVar12);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar9;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar10;
    *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d92080;
    puVar10[2] = local_40;
    puVar10[3] = pvVar11;
    *(uint *)(puVar10 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
    *(uint *)(puVar10 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141ad4720 FUN_141ad4720 body=23 status=ok
// SIG undefined FUN_141ad4720(void)

void FUN_141ad4720(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = param_3[1];
    *(undefined8 *)(param_1 + 0x10) = *param_3;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}



// FUNCTION 141ad4740 FUN_141ad4740 body=23 status=ok
// SIG undefined FUN_141ad4740(void)

void FUN_141ad4740(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 < 2) {
    uVar2 = param_3[1];
    puVar1 = (undefined8 *)(param_1 + ((longlong)(int)param_2 + 1) * 0x10);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
  }
  return;
}



// FUNCTION 141ad4760 FUN_141ad4760 body=23 status=ok
// SIG undefined FUN_141ad4760(void)

void FUN_141ad4760(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 < 4) {
    uVar2 = param_3[1];
    puVar1 = (undefined8 *)(param_1 + ((longlong)(int)param_2 + 1) * 0x10);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
  }
  return;
}



// FUNCTION 141ad4780 FUN_141ad4780 body=462 status=ok
// SIG undefined FUN_141ad4780(void)

void FUN_141ad4780(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  char local_res8 [8];
  char *pcVar7;
  undefined4 local_78 [4];
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
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  pcVar7 = param_4;
  FUN_141d84f90(param_1,param_2,uVar4,param_3,param_4,param_5,param_7,param_8,0);
  sVar1 = *(short *)(param_1 + 0x164);
  sVar2 = *(short *)(param_1 + 0x16a);
  local_78[0] = 0x3f800000;
  if ((sVar1 != 0) || (sVar2 != 0)) {
    if (param_5 != 0) {
      pcVar7 = local_res8;
      local_res8[0] = '\0';
      cVar5 = FUN_141e00ff0(param_4,param_5,*(undefined8 *)(param_5 + 0x140),param_6,pcVar7,
                            &local_68);
      if (cVar5 != '\0') {
        puVar6 = &local_68;
        if (local_res8[0] == '\0') {
          puVar6 = (undefined8 *)(param_5 + 0x80);
        }
        local_68 = *puVar6;
        uStack_60 = puVar6[1];
        local_58 = puVar6[2];
        uStack_50 = puVar6[3];
        local_48 = puVar6[4];
        uStack_40 = puVar6[5];
        local_38 = *(undefined4 *)(puVar6 + 6);
        uStack_34 = *(undefined4 *)((longlong)puVar6 + 0x34);
        uStack_30 = *(undefined4 *)(puVar6 + 7);
        uStack_2c = *(undefined4 *)((longlong)puVar6 + 0x3c);
        local_78[0] = 0;
        goto LAB_141ad48e8;
      }
    }
    local_68 = 0x3f800000;
    uStack_60 = 0;
    local_58 = 0x3f80000000000000;
    uStack_50 = 0;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    local_48 = 0;
    uStack_40 = 0x3f800000;
  }
LAB_141ad48e8:
  if (sVar1 != 0) {
    pcVar7 = (char *)((ulonglong)pcVar7 & 0xffffffff00000000);
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar4,param_1 + 0x160,&local_68,pcVar7);
  }
  if (sVar2 != 0) {
    FUN_1404986d0(param_2,uVar4,param_1 + 0x166,local_78,(ulonglong)pcVar7 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141ad4950 SetMesh body=153 status=ok
// SIG undefined SetMesh(void)

void FBaseDS::SetMesh(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141d83e90(param_1,param_2,*(undefined8 *)(lVar1 + 0x50),param_3,param_4,param_5,param_6,
                param_7,0);
  return;
}



// FUNCTION 141ad49f0 SetMesh body=153 status=ok
// SIG undefined SetMesh(void)

void FBaseHS::SetMesh(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141d84710(param_1,param_2,*(undefined8 *)(lVar1 + 0x48),param_3,param_4,param_5,param_6,
                param_7,0);
  return;
}



// FUNCTION 141ad4a90 FUN_141ad4a90 body=493 status=ok
// SIG undefined FUN_141ad4a90(void)

void FUN_141ad4a90(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  ulonglong uVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar3 = (undefined4 *)0x0;
  puVar2 = puVar3;
  if (param_5 != 0) {
    puVar2 = *(undefined4 **)(param_5 + 0x140);
  }
  puVar1 = puVar3;
  if ((puVar2 != (undefined4 *)0x0) && (*(undefined4 **)(puVar2 + 0x18) != (undefined4 *)0x0)) {
    puVar1 = *(undefined4 **)(puVar2 + 0x18);
  }
  FUN_141c2b3f0(param_1,param_2,param_3,param_4,puVar1);
  local_60 = 0;
  local_64 = 0;
  local_5c = 0x3f800000;
  local_res8[0] = 0;
  param_5._0_4_ = 0x3f800000;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 0x1a);
  }
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_68 = 0x3f800000;
  if (((puVar2 != (undefined4 *)0x0) && (puVar3 != (undefined4 *)0x0)) &&
     ((*(uint *)(*(longlong *)(param_4 + 0x10) + 0x28) & 0x2000000) != 0)) {
    puVar1 = &local_60;
    FUN_141d35110(*(undefined8 *)(puVar2 + 0x36),0,local_res8,&param_5,puVar1,&local_64,&local_5c);
    local_58 = puVar3[0xe];
    uStack_54 = puVar3[0xf];
    uStack_50 = puVar3[0x10];
    uStack_4c = (undefined4)param_5;
    local_48 = puVar3[8];
    uStack_44 = puVar3[9];
    uStack_40 = puVar3[10];
    uStack_3c = puVar3[0xb];
    local_68 = puVar3[0xc];
  }
  uVar4 = (ulonglong)puVar1 & 0xffffffff00000000;
  param_5._0_4_ = uStack_4c;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4a,local_res8,uVar4);
  uVar4 = uVar4 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x50,&local_58,uVar4);
  uVar4 = uVar4 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x56,&local_48,uVar4);
  uVar4 = uVar4 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x5c,&local_68,uVar4);
  local_38 = (undefined4)param_5;
  local_34 = (undefined4)param_5;
  local_30 = local_64;
  local_2c = local_60;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x62,&local_38,uVar4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141ad4c80 FUN_141ad4c80 body=942 status=ok
// SIG undefined FUN_141ad4c80(void)

void FUN_141ad4c80(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  void *pvVar10;
  longlong in_stack_00000030;
  longlong in_stack_00000040;
  longlong *in_stack_00000058;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined1 local_68 [64];
  
  if (in_stack_00000030 != 0) {
    lVar3 = *(longlong *)(in_stack_00000040 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    FTranslucencyShadowProjectionShaderParameters::Set
              (in_stack_00000030,param_2,in_stack_00000040,*in_stack_00000058);
    if (*in_stack_00000058 == 0) {
      local_88 = 0;
      uStack_80 = 0;
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (param_2,uVar4,in_stack_00000030 + 0x22,&local_88,0);
    }
    else {
      local_88 = 0;
      uStack_80 = 0x3f80000000000000;
      FProjectedShadowInfo::GetWorldToShadowMatrix(*in_stack_00000058,local_68,&local_88,0);
      uVar5 = (uint)*(ushort *)(in_stack_00000030 + 0x14);
      if (0x3f < *(ushort *)(in_stack_00000030 + 0x14)) {
        uVar5 = 0x40;
      }
      if (uVar5 != 0) {
        uVar1 = *(ushort *)(in_stack_00000030 + 0x12);
        uVar2 = *(ushort *)(in_stack_00000030 + 0x10);
        pvVar10 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar6 = (ulonglong)uVar5 + (longlong)pvVar10;
        if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
          pvVar10 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar6 = (ulonglong)uVar5 + (longlong)pvVar10;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar6;
        _guard_xfg_dispatch_icall_nop(pvVar10,local_68,(ulonglong)uVar5);
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
        *(uint *)(puVar8 + 4) = (uint)uVar2;
        *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
        puVar8[2] = uVar4;
        puVar8[3] = pvVar10;
        *(uint *)(puVar8 + 5) = uVar5;
      }
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (param_2,uVar4,in_stack_00000030 + 0x16,&local_88,0);
      uVar5 = (uint)*(ushort *)(in_stack_00000030 + 0x20);
      if (0xb < *(ushort *)(in_stack_00000030 + 0x20)) {
        uVar5 = 0xc;
      }
      local_78 = *(longlong *)(*(longlong *)(*in_stack_00000058 + 0x5c8) + 0x30);
      local_a4 = *(undefined4 *)(local_78 + 0x30);
      local_a0 = *(undefined4 *)(local_78 + 0x40);
      local_9c = *(undefined4 *)(local_78 + 0x50);
      if (uVar5 != 0) {
        uVar1 = *(ushort *)(in_stack_00000030 + 0x1e);
        uVar2 = *(ushort *)(in_stack_00000030 + 0x1c);
        pvVar10 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar6 = (ulonglong)uVar5 + (longlong)pvVar10;
        if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
          pvVar10 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar6 = (ulonglong)uVar5 + (longlong)pvVar10;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar6;
        _guard_xfg_dispatch_icall_nop(pvVar10,&local_a4,(ulonglong)uVar5);
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
        *(uint *)(puVar8 + 4) = (uint)uVar2;
        *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
        puVar8[2] = uVar4;
        puVar8[3] = pvVar10;
        *(uint *)(puVar8 + 5) = uVar5;
      }
      pfVar9 = *(float **)(*in_stack_00000058 + 0x550);
      if (pfVar9 == (float *)0x0) {
        pfVar9 = (float *)(*in_stack_00000058 + 0x548);
      }
      local_8c = *pfVar9;
      local_98 = local_8c * *(float *)(local_78 + 0x100) * 0.31830987;
      local_94 = *(float *)(local_78 + 0x104) * local_8c * 0.31830987;
      local_90 = *(float *)(local_78 + 0x108) * local_8c * 0.31830987;
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (param_2,uVar4,in_stack_00000030 + 0x22,&local_98,0);
    }
  }
  return;
}



// FUNCTION 141ad5030 FUN_141ad5030 body=238 status=ok
// SIG undefined FUN_141ad5030(void)

void FUN_141ad5030(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_6 != 0) {
    if (((((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x28) & 0x100) == 0) || (param_4 == 0)) ||
        (*(longlong *)(param_4 + 0x140) == 0)) ||
       (lVar2 = *(longlong *)(*(longlong *)(param_4 + 0x140) + 0x58), lVar2 == 0)) {
      lVar2 = DAT_1464c2238;
    }
    if (*(char *)(param_6 + 6) != '\0') {
      lVar1 = *(longlong *)(param_8 + 0x48);
      if (*(char *)(lVar1 + 0x28) == '\0') {
        FUN_1419f3850(lVar1);
      }
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (param_2,*(undefined8 *)(lVar1 + 0x40),param_6,lVar2);
    }
  }
  FUN_141ad4c80(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141ad5150 SetOutputDumpFilename body=157 status=ok
// SIG undefined SetOutputDumpFilename(void)

void TRenderingCompositePassBase<1,1>::SetOutputDumpFilename
               (longlong param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(((longlong)param_2 + 8) * 0x10 + param_1);
  if ((short *)*puVar4 != param_3) {
    iVar1 = 0;
    iVar2 = iVar1;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_3[lVar3] != 0);
      iVar2 = (int)lVar3 + 1;
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    if (*(int *)((longlong)puVar4 + 0xc) != iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar4,iVar2);
      iVar1 = *(int *)(puVar4 + 1);
    }
    *(int *)(puVar4 + 1) = iVar1 + iVar2;
    if (*(int *)((longlong)puVar4 + 0xc) < iVar1 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar4);
    }
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,param_3,(longlong)iVar2 * 2);
    }
  }
  return;
}



// FUNCTION 141ad51f0 SetOutputDumpFilename body=157 status=ok
// SIG undefined SetOutputDumpFilename(void)

void TRenderingCompositePassBase<2,1>::SetOutputDumpFilename
               (longlong param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(((longlong)param_2 + 9) * 0x10 + param_1);
  if ((short *)*puVar4 != param_3) {
    iVar1 = 0;
    iVar2 = iVar1;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_3[lVar3] != 0);
      iVar2 = (int)lVar3 + 1;
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    if (*(int *)((longlong)puVar4 + 0xc) != iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar4,iVar2);
      iVar1 = *(int *)(puVar4 + 1);
    }
    *(int *)(puVar4 + 1) = iVar1 + iVar2;
    if (*(int *)((longlong)puVar4 + 0xc) < iVar1 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar4);
    }
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,param_3,(longlong)iVar2 * 2);
    }
  }
  return;
}



// FUNCTION 141ad5290 SetOutputDumpFilename body=157 status=ok
// SIG undefined SetOutputDumpFilename(void)

void TRenderingCompositePassBase<4,1>::SetOutputDumpFilename
               (longlong param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(((longlong)param_2 + 0xb) * 0x10 + param_1);
  if ((short *)*puVar4 != param_3) {
    iVar1 = 0;
    iVar2 = iVar1;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_3[lVar3] != 0);
      iVar2 = (int)lVar3 + 1;
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    if (*(int *)((longlong)puVar4 + 0xc) != iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar4,iVar2);
      iVar1 = *(int *)(puVar4 + 1);
    }
    *(int *)(puVar4 + 1) = iVar1 + iVar2;
    if (*(int *)((longlong)puVar4 + 0xc) < iVar1 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar4);
    }
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,param_3,(longlong)iVar2 * 2);
    }
  }
  return;
}



// FUNCTION 141ad5330 FUN_141ad5330 body=1690 status=ok
// SIG undefined FUN_141ad5330(void)

void FUN_141ad5330(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_res8 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [36];
  float local_84;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_e0 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_4 + 0x20));
  lVar2 = param_8;
  local_d8[0] = *(undefined8 *)(CONCAT44(param_6._4_4_,(float)param_6) + 0x10);
  if (param_8 != 0) {
    local_d8[1] = *(undefined8 *)(param_8 + 8);
  }
  uVar8 = (param_8 != 0) + 1;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  param_8 = (ulonglong)(uVar8 * 8);
  uVar5 = param_8 + (longlong)puVar9;
  if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar8 * 8 + 8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = param_8 + (longlong)puVar9;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar5;
  uVar5 = (ulonglong)uVar8;
  puVar7 = puVar9;
  do {
    *puVar7 = *(undefined8 *)(((longlong)local_d8 - (longlong)puVar9) + (longlong)puVar7);
    puVar7 = puVar7 + 1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  *(uint *)(puVar6 + 2) = uVar8;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  puVar6[5] = 0;
  puVar6[3] = puVar9;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  uVar5 = *(ulonglong *)(CONCAT44(param_6._4_4_,(float)param_6) + 0x10);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,uVar3,
             *(undefined8 *)(CONCAT44(param_6._4_4_,(float)param_6) + 8),uVar5);
  if (lVar2 != 0) {
    FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 200,param_2,uVar3,lVar2);
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,&param_7,uVar5);
  uVar5 = CONCAT44((int)(uVar5 >> 0x20),0xf);
  FUN_141aa5e80(param_1 + 0x10c,param_2,&local_e0,*(undefined4 *)(param_4 + 0x1a38),uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe2,&param_9,uVar5);
  if (param_5 != 0) {
    plVar4 = *(longlong **)(param_5 + 0x30);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    fStack_bc = 1.0;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0x3f800000;
    (**(code **)(*plVar4 + 0x68))(plVar4,0);
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar3,param_1 + 0xe8,local_a8,uVar5);
    uVar5 = uVar5 & 0xffffffff00000000;
    FUN_141a120e0(param_2,uVar3,param_1 + 0xee,&local_c8,uVar5);
    if (local_84 == 0.0) {
      param_6._0_4_ = 20.0;
    }
    else {
      param_6._0_4_ = 0.001;
      if (0.001 <= local_84) {
        param_6._0_4_ = 1.0 / (fStack_bc * 4.0);
        if (local_84 <= (float)param_6) {
          param_6._0_4_ = local_84;
        }
      }
    }
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xf4,&param_6,uVar5);
    param_6._0_4_ = *(float *)((longlong)plVar4 + 0x184);
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xfa,&param_6,uVar5);
    fVar10 = (float)(**(code **)(*plVar4 + 0x40))(plVar4);
    fVar10 = fVar10 * 5.0;
    if (1.0 <= fVar10) {
      if (30.0 <= fVar10) {
        fVar10 = 30.0;
      }
    }
    else {
      fVar10 = 1.0;
    }
    uVar11 = (**(code **)(*plVar4 + 0x48))(plVar4);
    local_f8 = CONCAT44(local_f8._4_4_,fVar10 * 0.017453292);
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10 * 0.017453292 + 1.5707964);
    local_f8 = CONCAT44(fVar10,(undefined4)local_f8);
    local_f0 = CONCAT44(local_f0._4_4_,uVar11);
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar3,param_1 + 0x100,&local_f8,uVar5);
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  param_6._0_4_ = (float)(param_11[2] - *param_11);
  param_6._4_4_ = param_11[3] - param_11[1];
  local_f8 = *(undefined8 *)param_11;
  local_f0 = CONCAT44(param_6._4_4_,(float)param_6);
  FUN_141a120e0(param_2,uVar3,param_1 + 0x106,&local_f8,uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x11c,&param_12,uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x122,&param_13,uVar5);
  if (*(short *)(param_1 + 0x12a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x128);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[4] = param_14;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 300,&param_15,uVar5);
  if (*(short *)(param_1 + 0x134) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x132);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[4] = param_16;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x136,&param_10,uVar5);
  local_e8 = _guard_xfg_dispatch_icall_nop(DAT_1464c1648);
  uVar5 = uVar5 & 0xffffffff00000000;
  local_e4 = 1.0 / (1.0 - local_e8);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x13c,&local_e8,uVar5);
  if (*(short *)(param_1 + 0x144) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x142);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[4] = param_17;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  local_res8[0] = *(undefined4 *)(param_3 + 0x5ff0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x146,local_res8,uVar5 & 0xffffffff00000000);
  if (*(longlong *)(param_3 + 0x15f8) != 0) {
    FUN_141aa5410(param_1 + 0x14c,param_2,&local_e0,*(longlong *)(param_3 + 0x15f8),
                  *(undefined4 *)(param_3 + 0x15f0),0);
  }
  return;
}



// FUNCTION 141ad59d0 FUN_141ad59d0 body=1814 status=ok
// SIG undefined FUN_141ad59d0(void)

void FUN_141ad59d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_res8 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [36];
  float local_84;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_e0 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_4 + 0x20));
  lVar2 = param_8;
  local_d8[0] = *(undefined8 *)(CONCAT44(param_6._4_4_,(float)param_6) + 0x10);
  if (param_8 != 0) {
    local_d8[1] = *(undefined8 *)(param_8 + 8);
  }
  uVar8 = (param_8 != 0) + 1;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  param_8 = (ulonglong)(uVar8 * 8);
  uVar5 = param_8 + (longlong)puVar9;
  if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar8 * 8 + 8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = param_8 + (longlong)puVar9;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar5;
  uVar5 = (ulonglong)uVar8;
  puVar7 = puVar9;
  do {
    *puVar7 = *(undefined8 *)(((longlong)local_d8 - (longlong)puVar9) + (longlong)puVar7);
    puVar7 = puVar7 + 1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  *(uint *)(puVar6 + 2) = uVar8;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  puVar6[5] = 0;
  puVar6[3] = puVar9;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  uVar5 = *(ulonglong *)(CONCAT44(param_6._4_4_,(float)param_6) + 0x10);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xd6,param_2,uVar3,
             *(undefined8 *)(CONCAT44(param_6._4_4_,(float)param_6) + 8),uVar5);
  if (lVar2 != 0) {
    FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
              (param_1 + 200,param_2,uVar3,lVar2);
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,&param_7,uVar5);
  uVar11 = (undefined4)(uVar5 >> 0x20);
  if (*(short *)(param_1 + 0xe0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xde);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[4] = param_18;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar5 = CONCAT44(uVar11,0xf);
  FUN_141aa5e80(param_1 + 0x10c,param_2,&local_e0,*(undefined4 *)(param_4 + 0x1a38),uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe2,&param_9,uVar5);
  if (param_5 != 0) {
    plVar4 = *(longlong **)(param_5 + 0x30);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    fStack_bc = 1.0;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0x3f800000;
    (**(code **)(*plVar4 + 0x68))(plVar4,0);
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar3,param_1 + 0xe8,local_a8,uVar5);
    uVar5 = uVar5 & 0xffffffff00000000;
    FUN_141a120e0(param_2,uVar3,param_1 + 0xee,&local_c8,uVar5);
    if (local_84 == 0.0) {
      param_6._0_4_ = 20.0;
    }
    else {
      param_6._0_4_ = 0.001;
      if (0.001 <= local_84) {
        param_6._0_4_ = 1.0 / (fStack_bc * 4.0);
        if (local_84 <= (float)param_6) {
          param_6._0_4_ = local_84;
        }
      }
    }
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xf4,&param_6,uVar5);
    param_6._0_4_ = *(float *)((longlong)plVar4 + 0x184);
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xfa,&param_6,uVar5);
    fVar10 = (float)(**(code **)(*plVar4 + 0x40))(plVar4);
    fVar10 = fVar10 * 5.0;
    if (1.0 <= fVar10) {
      if (30.0 <= fVar10) {
        fVar10 = 30.0;
      }
    }
    else {
      fVar10 = 1.0;
    }
    uVar11 = (**(code **)(*plVar4 + 0x48))(plVar4);
    local_f8 = CONCAT44(local_f8._4_4_,fVar10 * 0.017453292);
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10 * 0.017453292 + 1.5707964);
    local_f8 = CONCAT44(fVar10,(undefined4)local_f8);
    local_f0 = CONCAT44(local_f0._4_4_,uVar11);
    uVar5 = uVar5 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar3,param_1 + 0x100,&local_f8,uVar5);
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  param_6._0_4_ = (float)(param_11[2] - *param_11);
  param_6._4_4_ = param_11[3] - param_11[1];
  local_f8 = *(undefined8 *)param_11;
  local_f0 = CONCAT44(param_6._4_4_,(float)param_6);
  FUN_141a120e0(param_2,uVar3,param_1 + 0x106,&local_f8,uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x11c,&param_12,uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x122,&param_13,uVar5);
  if (*(short *)(param_1 + 0x12a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x128);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[4] = param_14;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 300,&param_15,uVar5);
  if (*(short *)(param_1 + 0x134) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x132);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[4] = param_16;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x136,&param_10,uVar5);
  local_e8 = _guard_xfg_dispatch_icall_nop(DAT_1464c1648);
  uVar5 = uVar5 & 0xffffffff00000000;
  local_e4 = 1.0 / (1.0 - local_e8);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x13c,&local_e8,uVar5);
  if (*(short *)(param_1 + 0x144) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x142);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[4] = param_17;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  local_res8[0] = *(undefined4 *)(param_3 + 0x5ff0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x146,local_res8,uVar5 & 0xffffffff00000000);
  if (*(longlong *)(param_3 + 0x15f8) != 0) {
    FUN_141aa5410(param_1 + 0x14c,param_2,&local_e0,*(longlong *)(param_3 + 0x15f8),
                  *(undefined4 *)(param_3 + 0x15f0),0);
  }
  return;
}



// FUNCTION 141ad60f0 FUN_141ad60f0 body=547 status=ok
// SIG undefined FUN_141ad60f0(void)

void FUN_141ad60f0(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  ,undefined4 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_res8 = uVar3;
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  uVar4 = *(undefined8 *)(*param_5 + 0x10);
  uVar5 = FUN_141a156e0();
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
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  local_38 = *(undefined8 *)param_4;
  local_30 = CONCAT44(param_4[3] - param_4[1],param_4[2] - *param_4);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd8,&local_38,0);
  if ((char)param_6 == '\0') {
    param_6 = 0;
  }
  else {
    param_6 = 0x3f800000;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xde,&param_6,0);
  return;
}



// FUNCTION 141ad6320 FUN_141ad6320 body=1659 status=ok
// SIG undefined FUN_141ad6320(void)

void FUN_141ad6320(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar2 + 0x40),uVar7);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x40);
  if (((*(short *)(param_1 + 0xd2) != 0) || (*(short *)(param_1 + 0xda) != 0)) ||
     (*(short *)(param_1 + 0xe2) != 0)) {
    uVar3 = *(undefined8 *)(param_3 + 0x1a18);
    uVar4 = FUN_141a156e0();
    if (*(short *)(param_1 + 0xd2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd0);
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
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_143f59c80;
      puVar6[2] = uVar7;
      puVar6[4] = uVar3;
    }
    if (*(short *)(param_1 + 0xd6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd4);
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
      *puVar6 = &PTR_LAB_143f59c70;
      puVar6[2] = uVar7;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x1a20);
    uVar4 = FUN_141a156e0();
    if (*(short *)(param_1 + 0xda) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd8);
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
      *puVar6 = &PTR_LAB_143f59c80;
      puVar6[2] = uVar7;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar3;
    }
    if (*(short *)(param_1 + 0xde) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xdc);
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
      *puVar6 = &PTR_LAB_143f59c70;
      puVar6[2] = uVar7;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x1a28);
    uVar4 = FUN_141a156e0();
    if (*(short *)(param_1 + 0xe2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe0);
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
      *puVar6 = &PTR_LAB_143f59c80;
      puVar6[2] = uVar7;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar3;
    }
    if (*(short *)(param_1 + 0xe6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xe4);
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
      *puVar6 = &PTR_LAB_143f59c70;
      puVar6[2] = uVar7;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*param_4 == 0) {
    uVar7 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  }
  else {
    uVar7 = *(undefined8 *)(*param_4 + 0x10);
  }
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar4 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe8);
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
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[4] = uVar7;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[2] = uVar3;
  }
  if (*(short *)(param_1 + 0xee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xec);
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
    puVar6[4] = uVar4;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[2] = uVar3;
    *puVar6 = &PTR_LAB_143f59c70;
  }
  if (*(short *)(param_1 + 0xf2) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(param_5 + 1) == '\0') {
      uVar7 = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    }
    else {
      uVar7 = *param_5;
    }
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    uVar4 = FUN_1404a0e20();
    if (*(short *)(param_1 + 0xf2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf0);
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
      *puVar6 = &PTR_LAB_143f59c80;
      puVar6[4] = uVar7;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[2] = uVar3;
    }
    if (*(short *)(param_1 + 0xf6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf4);
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
      puVar6[4] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[2] = uVar3;
      *puVar6 = &PTR_LAB_143f59c70;
    }
  }
  if (*(char *)(param_5 + 1) != '\0') {
    *(undefined1 *)(param_5 + 1) = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_5);
    return;
  }
  return;
}



// FUNCTION 141ad69a0 FUN_141ad69a0 body=155 status=ok
// SIG undefined FUN_141ad69a0(void)

void FUN_141ad69a0(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  
  local_res8 = 0;
  (**(code **)(*param_3 + 0x40))(param_3,*(undefined4 *)(param_4 + 0x1a38),local_res18,&local_res8);
  uVar2 = local_res8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa7ef0(param_1,param_2,*(undefined8 *)(lVar1 + 0x50),param_3,uVar2,param_4,param_5,param_6)
  ;
  return;
}



// FUNCTION 141ad6a40 FUN_141ad6a40 body=155 status=ok
// SIG undefined FUN_141ad6a40(void)

void FUN_141ad6a40(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  
  local_res8 = 0;
  (**(code **)(*param_3 + 0x40))(param_3,*(undefined4 *)(param_4 + 0x1a38),local_res18,&local_res8);
  uVar2 = local_res8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa8360(param_1,param_2,*(undefined8 *)(lVar1 + 0x48),param_3,uVar2,param_4,param_5,param_6)
  ;
  return;
}



// FUNCTION 141ad6ae0 FUN_141ad6ae0 body=829 status=ok
// SIG undefined FUN_141ad6ae0(void)

void FUN_141ad6ae0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int *param_5,longlong param_6)

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
  ulonglong uVar10;
  void *pvVar11;
  float local_res8;
  float local_resc;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res20 = param_4;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  FUN_141aa9800(param_1,param_2,uVar4,*(undefined8 *)(param_3 + 0x20));
  uVar6 = (uint)*(ushort *)(param_1 + 0xc4);
  if (7 < *(ushort *)(param_1 + 0xc4)) {
    uVar6 = 8;
  }
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc2);
    pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = (float)(uint)*(ushort *)(param_1 + 0xc0);
    uVar10 = (longlong)pvVar11 + (ulonglong)uVar6;
    if (*(ulonglong *)(param_2 + 0x38) < uVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar10 = (longlong)pvVar11 + (ulonglong)uVar6;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar10;
    _guard_xfg_dispatch_icall_nop(pvVar11,&local_res20,(ulonglong)uVar6);
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
    *puVar9 = &PTR_LAB_143f4d340;
    *(float *)(puVar9 + 4) = local_res8;
    puVar9[2] = uVar4;
    puVar9[3] = pvVar11;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *(uint *)(puVar9 + 5) = uVar6;
  }
  local_res8 = (float)(int)((2 - (uint)(DAT_1469fd5a4 != 0)) * DAT_1464c1658);
  local_resc = local_res8;
  FUN_140498810(param_2,uVar4,param_1 + 0xc6,&local_res8,0);
  local_48 = *(undefined8 *)param_5;
  local_40 = CONCAT44(param_5[3] - param_5[1],param_5[2] - *param_5);
  uVar6 = (uint)*(ushort *)(param_1 + 0xd0);
  if (0xf < *(ushort *)(param_1 + 0xd0)) {
    uVar6 = 0x10;
  }
  uVar10 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    uVar2 = *(ushort *)(param_1 + 0xce);
    pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)pvVar11 + uVar10;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)pvVar11 + uVar10;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(pvVar11,&local_48,uVar10);
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
    *puVar9 = &PTR_LAB_143f4d340;
    *(uint *)(puVar9 + 4) = (uint)uVar1;
    puVar9[2] = uVar4;
    puVar9[3] = pvVar11;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar2;
    *(uint *)(puVar9 + 5) = uVar6;
  }
  uVar5 = *(undefined8 *)(param_6 + 0x10);
  if (*(short *)(param_1 + 0xd4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd2);
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
    *puVar9 = &PTR_LAB_144165218;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  return;
}



// FUNCTION 141ad6e20 FUN_141ad6e20 body=621 status=ok
// SIG undefined FUN_141ad6e20(void)

void FUN_141ad6e20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_4 + 0x20));
  lVar2 = param_7;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar4 = *(undefined8 *)(param_7 + 8);
  puVar5 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar7 = uVar4;
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
  puVar6[3] = puVar7;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  puVar6[5] = 0;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 1;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0xc0,&param_5,0);
  if (*(short *)(param_1 + 200) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
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
    *puVar7 = &PTR_LAB_144dcb360;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = param_6;
    puVar7[2] = uVar3;
  }
  if ((*(longlong *)(param_3 + 0x1150) == 0) ||
     (local_res8[0] = 1, *(char *)(*(longlong *)(param_3 + 0x1150) + 0x28) == '\0')) {
    local_res8[0] = 0;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0xca,local_res8,0)
  ;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,&DAT_1464c164c,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd6,&DAT_1464c1650,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xdc,&DAT_1464c1654,0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xe2,param_2,uVar3,lVar2);
  return;
}



// FUNCTION 141ad7090 FUN_141ad7090 body=34 status=ok
// SIG undefined FUN_141ad7090(void)

void FUN_141ad7090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_141aa9f60(param_1,param_2,local_res18,param_4,param_5);
  return;
}



// FUNCTION 141ad70c0 FUN_141ad70c0 body=392 status=ok
// SIG undefined FUN_141ad70c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ad70c0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(*param_2 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar5 = 0;
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  lVar2 = param_2[8];
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146b096e0) {
        if (iVar7 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141ad7162;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141ad7162:
  if (*(char *)((longlong)puVar10 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar10 + 1);
    puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar6;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar9;
    *(undefined8 **)(lVar2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144dcb388;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar3;
  }
  return;
}



// FUNCTION 141ad7250 FUN_141ad7250 body=659 status=ok
// SIG undefined FUN_141ad7250(void)

void FUN_141ad7250(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar4 = DAT_1464c3340;
  lVar2 = *param_3;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_44 = (float)(*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4)) /
             (float)(*(int *)(lVar2 + 0x2fd4) * 2);
  local_3c = local_44 * 0.5;
  local_48 = ((float)(*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0)) /
             (float)(*(int *)(lVar2 + 0x2fd0) * 2)) * 0.5;
  local_44 = local_44 * -0.5;
  local_40 = local_48;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9590(param_1,param_2,local_res8,*(undefined8 *)(lVar2 + 0x20));
  uVar6 = FUN_1404a0e20();
  thunk_FUN_141ca8fe0(param_1 + 0xc6,param_2,&local_res8,param_3,uVar6,0,0);
  FUN_141aa6800(param_1 + 0x1c4,param_2,&local_res8,*(undefined4 *)(lVar2 + 0x1a38),0xf);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  uVar7 = FUN_141ac0bb0();
  uVar5 = local_res8;
  if (*(short *)(param_1 + 0x1dc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1da);
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
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar5;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  if (*(short *)(param_1 + 0x1e0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1de);
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
    puVar9[4] = uVar7;
    puVar9[2] = uVar5;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  FUN_141aa69e0(param_1 + 0x1d4,param_2,lVar2,local_res8,param_4);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_res8,param_1 + 0xc0,&local_48,param_4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141ad74f0 FUN_141ad74f0 body=599 status=ok
// SIG undefined FUN_141ad74f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ad74f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5,char param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined1 local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  uint local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined1 local_2d8 [192];
  undefined4 local_218;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  uVar3 = 1;
  switch(param_4) {
  case 0:
  case 8:
    local_2e0 = 1;
    local_308 = 1;
    break;
  case 1:
    local_2e0 = 0;
    local_308 = 0;
    break;
  case 2:
    local_2e0 = 0;
    local_308 = 1;
    break;
  case 3:
    local_2e0 = 0;
    local_308 = 2;
    break;
  case 4:
    local_2e0 = 2;
    local_308 = 1;
    break;
  case 5:
    local_2e0 = 2;
    local_308 = 2;
    break;
  case 6:
    local_2e0 = 1;
    uVar3 = 0;
    local_308 = 1;
    break;
  case 7:
    local_2e0 = 1;
    local_308 = 2;
    break;
  default:
    LowLevelFatalErrorHandler
              ("Unknown",0x1bc,
               L"Using a ESimpleRenderTargetMode that wasn\'t decoded in DecodeRenderTargetMode [value = %d]"
               ,param_4);
    local_318 = param_4;
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x1bc,
               L"Using a ESimpleRenderTargetMode that wasn\'t decoded in DecodeRenderTargetMode [value = %d]"
              );
    local_2e0 = local_308;
  }
  uVar4 = 0;
  if ((param_5 & 0xf) != 0) {
    uVar4 = local_308;
  }
  uVar5 = 0;
  if ((param_5 & 0xf) == 2) {
    uVar5 = uVar3;
  }
  uVar3 = 0;
  if ((param_5 & 0xf0) != 0) {
    uVar3 = local_308;
  }
  local_308 = (param_5 & 0xf0) == 0x20;
  if (param_6 != '\0') {
    FUN_141ae34d0(param_1,param_2,param_3,param_5);
  }
  local_2e8 = 0;
  local_2e4 = 0xffffffff;
  local_2df = 1;
  local_2f4 = param_5;
  local_300 = param_3;
  local_2f8 = uVar4;
  local_2f7 = uVar5;
  local_2f6 = uVar3;
  local_2f5 = local_308;
  local_2f0 = param_2;
  FUN_140c63b80(local_2d8,1,&local_2f0,&local_300);
  FRHICommandListBase::CacheActiveRenderTargets(param_1,local_218,local_2d8,local_148);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x54;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x2a8);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x54;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar2 + 2,local_2d8);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2d8);
  return;
}



// FUNCTION 141ad7770 FUN_141ad7770 body=1875 status=ok
// SIG undefined FUN_141ad7770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ad7770(longlong *param_1,uint param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  longlong lVar14;
  byte bVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 auStack_3e8 [32];
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined1 local_3b8;
  char local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined2 local_390;
  undefined6 uStack_38e;
  longlong local_388;
  ulonglong local_380;
  undefined8 local_378;
  undefined8 local_370;
  ulonglong local_368;
  undefined8 local_360;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  longlong local_340;
  undefined1 local_338 [192];
  undefined4 local_278;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_380 = local_380 & 0xffffffff00000000;
  lVar14 = (longlong)(int)param_2;
  local_3a8 = param_3;
  lVar7 = FSceneRenderTargets::Get(*param_1);
  bVar5 = true;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar15 = 0x10;
  if ((((char)param_1[0xc] == '\0') && (param_2 < 6)) && ((0x25U >> (param_2 & 0x1f) & 1) != 0)) {
    lVar9 = *param_1;
    puVar13 = (ulonglong *)(lVar9 + 0x30);
    local_370 = *(undefined8 *)(*(longlong *)(lVar7 + 0xb8) + 8);
    puVar16 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 1;
    local_388 = lVar9;
    if (*(undefined8 **)(lVar9 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar13,0x10);
      puVar16 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar16 + 1;
    }
    *puVar13 = (ulonglong)puVar11;
    *puVar16 = local_370;
    puVar12 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar12 + 5;
    if (*(undefined8 **)(lVar9 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar13,0x30);
      puVar12 = (undefined8 *)(*puVar13 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar12 + 5;
    }
    *puVar13 = (ulonglong)puVar11;
    *(int *)(local_388 + 0x14) = *(int *)(local_388 + 0x14) + 1;
    **(undefined8 **)(local_388 + 8) = puVar12;
    *(undefined8 **)(local_388 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar12 + 2) = 1;
    puVar12[3] = puVar16;
    *(undefined4 *)(puVar12 + 4) = 1;
    *(undefined1 *)((longlong)puVar12 + 0x24) = 0;
    param_3 = local_3a8;
  }
  if ((DAT_146ab62cc < 0x1e) && ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  switch(param_2) {
  case 0:
  case 1:
    plVar10 = (longlong *)FUN_141ce54b0(lVar7);
    param_1[3] = *(longlong *)(*plVar10 + 8);
    if (param_3 == '\0') {
      if (bVar1) {
        uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0xc0) + 8);
        if (uVar8 != 0) {
          LOCK();
          *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
          UNLOCK();
        }
        puVar11 = &local_358;
        bVar4 = true;
        bVar3 = false;
      }
      else {
        puVar11 = &local_360;
        uVar8 = 0;
        bVar4 = false;
        bVar3 = true;
      }
      bVar5 = false;
      bVar2 = true;
      *puVar11 = 0;
      local_368 = uVar8;
    }
    else {
      uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0xb8) + 8);
      local_380 = uVar8;
      if (uVar8 != 0) {
        LOCK();
        *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
        UNLOCK();
      }
    }
    param_1[4] = uVar8;
    if (bVar2) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_368);
    }
    if (bVar3) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_360);
    }
    if (bVar4) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_358);
    }
    if (bVar5) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_380);
    }
    param_1[5] = *(longlong *)(*(longlong *)(lVar7 + 0xc0) + 8);
    param_1[6] = *(longlong *)(*(longlong *)(lVar7 + 200) + 8);
    local_3b8 = *(undefined1 *)(lVar14 + 8 + (longlong)param_1);
    local_3c0 = 0x21;
    local_3c8 = 0;
    FUN_141ad8260(*param_1,4,param_1 + 3,*(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 8));
    break;
  case 2:
  case 3:
    plVar10 = (longlong *)FUN_141ce54b0(lVar7);
    param_1[3] = *(longlong *)(*plVar10 + 8);
    if (param_3 == '\0') {
      if (bVar1) {
        lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0xc0) + 8);
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        puVar11 = &local_378;
        bVar15 = 0xa0;
      }
      else {
        puVar11 = &local_348;
        lVar9 = 0;
        bVar15 = 0xc0;
      }
      local_350 = lVar9;
      *puVar11 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + 8);
      local_388 = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
    }
    param_1[4] = lVar9;
    if ((char)bVar15 < '\0') {
      bVar15 = bVar15 & 0x7f;
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_350);
    }
    if ((bVar15 & 0x40) != 0) {
      bVar15 = bVar15 & 0xbf;
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_348);
    }
    if ((bVar15 & 0x20) != 0) {
      bVar15 = bVar15 & 0xdf;
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_378);
    }
    if ((bVar15 & 0x10) != 0) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_388);
    }
    param_1[5] = *(longlong *)(*(longlong *)(lVar7 + 0xc0) + 8);
    param_1[6] = *(longlong *)(*(longlong *)(lVar7 + 200) + 8);
    param_1[7] = *(longlong *)(*(longlong *)(lVar7 + 0xd8) + 8);
    local_3b8 = *(undefined1 *)(lVar14 + 8 + (longlong)param_1);
    local_3c0 = 0x22;
    local_3c8 = 0;
    FUN_141ad8260(*param_1,5,param_1 + 3,*(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 8));
    break;
  case 4:
    if (DAT_146ab62ee == '\0') {
      param_1[8] = *(longlong *)(*(longlong *)(lVar7 + 0xe8) + 8);
      param_1[9] = *(longlong *)(*(longlong *)(lVar7 + 0xf0) + 8);
      param_1[10] = *(longlong *)(*(longlong *)(lVar7 + 0xf8) + 8);
      param_1[0xb] = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 8);
      local_3b8 = *(undefined1 *)((longlong)param_1 + 0xc);
      local_3c0 = 0x21;
      local_3c8 = 0;
      FUN_141ad8260(*param_1,4,param_1 + 8,*(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 8));
    }
    else {
      local_98 = CONCAT62(uStack_38e,0x101);
      local_a8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x110) + 8);
      uStack_a0 = 0;
      local_80 = CONCAT62(uStack_38e,0x101);
      uStack_88 = 0x100000000;
      local_68 = CONCAT62(uStack_38e,0x101);
      uStack_70 = 0x200000000;
      local_3a0._0_4_ = (undefined4)local_a8;
      local_3a0._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
      local_390 = 0x101;
      local_50 = CONCAT62(uStack_38e,0x101);
      local_60 = (undefined4)local_3a0;
      uStack_5c = local_3a0._4_4_;
      uStack_58 = 0;
      uStack_54 = 3;
      uStack_398 = 0x2100010001;
      local_3a0 = *(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 0x10);
      local_90 = local_a8;
      local_78 = local_a8;
      FUN_140c63b80(local_338,4,&local_a8,&local_3a0);
      lVar7 = *param_1;
      FRHICommandListBase::CacheActiveRenderTargets(lVar7,local_278,local_338,local_1a8);
      puVar16 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 0x54;
      if (*(undefined8 **)(lVar7 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x2a8);
        puVar16 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar16 + 0x54;
      }
      *(undefined8 **)(lVar7 + 0x30) = puVar11;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      **(undefined8 **)(lVar7 + 8) = puVar16;
      *(undefined8 **)(lVar7 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar16 + 2,local_338);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_338);
    }
    break;
  case 5:
    lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + 8);
    param_1[4] = lVar9;
    uVar6 = *(undefined1 *)((longlong)param_1 + 0xd);
    goto LAB_141ad7b49;
  case 6:
    plVar10 = (longlong *)FUN_141ce54b0(lVar7);
    lVar9 = *(longlong *)(*plVar10 + 8);
    param_1[3] = lVar9;
    uVar6 = *(undefined1 *)((longlong)param_1 + 0xe);
LAB_141ad7b49:
    local_3c0 = CONCAT31(local_3c0._1_3_,uVar6);
    local_3c8 = 0x21;
    FUN_141ad74f0(*param_1,lVar9,*(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 8),0);
    break;
  case 7:
    local_340 = *(longlong *)(*(longlong *)(lVar7 + 0x120) + 8);
    param_1[3] = local_340;
    lVar9 = *param_1;
    plVar17 = (longlong *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar10 = plVar17 + 1;
    if (*(longlong **)(lVar9 + 0x38) < plVar10) {
      FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x10);
      plVar17 = (longlong *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar10 = plVar17 + 1;
    }
    *(longlong **)(lVar9 + 0x30) = plVar10;
    *plVar17 = local_340;
    puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar16 + 5;
    if (*(undefined8 **)(lVar9 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x30);
      puVar16 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 5;
    }
    *(undefined8 **)(lVar9 + 0x30) = puVar11;
    *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    **(undefined8 **)(lVar9 + 8) = puVar16;
    *(undefined8 **)(lVar9 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar16 + 2) = 1;
    puVar16[3] = plVar17;
    *(undefined4 *)(puVar16 + 4) = 1;
    *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
    local_3c0 = CONCAT31(local_3c0._1_3_,*(undefined1 *)((longlong)param_1 + 0xf));
    local_3c8 = 0x21;
    FUN_141ad74f0(*param_1,param_1[3],*(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 8),0);
    *(undefined1 *)(lVar7 + 0x2d8) = 1;
  }
  *(undefined1 *)(lVar14 + 8 + (longlong)param_1) = 0;
  return;
}



// FUNCTION 141ad7ef0 FUN_141ad7ef0 body=871 status=ok
// SIG undefined FUN_141ad7ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ad7ef0(longlong param_1,uint param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                  longlong param_6,char param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined2 local_108;
  undefined6 uStack_106;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 local_e8 [4];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar6 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0xffffffff;
  local_e8[0] = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0xffffffff;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0xffffffff;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0xffffffff;
  local_40 = 0;
  if (param_2 != 0) {
    puVar3 = &local_f8;
    puVar4 = param_3;
    uVar7 = (ulonglong)param_2;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      uStack_110 = 0;
      uStack_10c = 0xffffffff;
      local_108 = 0x101;
      local_118._0_4_ = (undefined4)uVar1;
      local_118._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)puVar3 = (undefined4)local_118;
      *(undefined4 *)((longlong)puVar3 + 4) = local_118._4_4_;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0xffffffff;
      puVar3[2] = CONCAT62(uStack_106,0x101);
      uVar7 = uVar7 - 1;
      puVar3 = puVar3 + 3;
      local_118 = uVar1;
    } while (uVar7 != 0);
  }
  if (param_7 != '\0') {
    local_120 = param_8;
    local_128 = 0x22;
    FUN_141ae3360(param_1,(ulonglong)param_2,param_3,param_4);
  }
  uStack_110 = 0x1010101;
  uStack_10c = 0x22;
  *(uint *)(param_1 + 0x98) = param_2;
  uVar7 = uVar6;
  if (param_2 != 0) {
    do {
      uVar5 = (int)uVar7 + 1;
      uVar2 = *(undefined8 *)(&uStack_f0 + uVar7 * 6);
      uVar1 = *(undefined8 *)(local_e8 + uVar7 * 0xc);
      puVar4 = (undefined8 *)(param_1 + 0xa0 + uVar7 * 0x18);
      *puVar4 = (&local_f8)[uVar7 * 3];
      puVar4[1] = uVar2;
      *(undefined8 *)(param_1 + 0xb0 + uVar7 * 0x18) = uVar1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x98));
  }
  local_118._0_4_ = (undefined4)param_4;
  local_118._4_4_ = (undefined4)((ulonglong)param_4 >> 0x20);
  *(undefined4 *)(param_1 + 0x160) = (undefined4)local_118;
  *(undefined4 *)(param_1 + 0x164) = local_118._4_4_;
  *(undefined4 *)(param_1 + 0x168) = 0x1010101;
  *(undefined4 *)(param_1 + 0x16c) = 0x22;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 0x26;
  local_118 = param_4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 **)(param_1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59440;
  *(uint *)(puVar3 + 2) = param_2;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 8) = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x11) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x14) = 0;
  puVar3[0x15] = 0;
  *(undefined4 *)(puVar3 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x17) = 0;
  puVar3[0x18] = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x1a) = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  *(int *)(puVar3 + 0x1d) = param_5;
  uVar7 = uVar6;
  if (*(int *)(puVar3 + 2) != 0) {
    do {
      uVar5 = (int)uVar7 + 1;
      uVar1 = *(undefined8 *)(&uStack_f0 + uVar7 * 6);
      puVar3[uVar7 * 3 + 3] = (&local_f8)[uVar7 * 3];
      (puVar3 + uVar7 * 3 + 3)[1] = uVar1;
      puVar3[uVar7 * 3 + 5] = *(undefined8 *)(local_e8 + uVar7 * 0xc);
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(puVar3 + 2));
    param_5 = *(int *)(puVar3 + 0x1d);
  }
  if (param_5 != 0) {
    do {
      uVar5 = (int)uVar6 + 1;
      puVar3[uVar6 + 0x1e] = *(undefined8 *)(param_6 + uVar6 * 8);
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(puVar3 + 0x1d));
  }
  puVar3[0x1b] = local_118;
  puVar3[0x1c] = CONCAT44(uStack_10c,uStack_110);
  return;
}



// FUNCTION 141ad8260 FUN_141ad8260 body=1151 status=ok
// SIG undefined FUN_141ad8260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ad8260(longlong param_1,uint param_2,undefined8 *param_3,undefined8 param_4,uint param_5
                  ,uint param_6,char param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined1 auStack_178 [32];
  uint local_158;
  undefined1 local_150;
  byte local_148;
  uint local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  byte bStack_12e;
  undefined1 uStack_12d;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  byte local_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 local_f8 [4];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar8 = (ulonglong)param_2;
  uVar9 = 1;
  switch(param_5) {
  case 0:
  case 8:
    bVar6 = 1;
    local_148 = 1;
    break;
  case 1:
    bVar6 = 0;
    local_148 = 0;
    break;
  case 2:
    bVar6 = 0;
    local_148 = 1;
    break;
  case 3:
    bVar6 = 0;
    local_148 = 2;
    break;
  case 4:
    bVar6 = 2;
    local_148 = 1;
    break;
  case 5:
    bVar6 = 2;
    local_148 = 2;
    break;
  case 6:
    bVar6 = 1;
    uVar9 = 0;
    local_148 = 1;
    break;
  case 7:
    bVar6 = 1;
    local_148 = 2;
    break;
  default:
    LowLevelFatalErrorHandler
              ("Unknown",0x1bc,
               L"Using a ESimpleRenderTargetMode that wasn\'t decoded in DecodeRenderTargetMode [value = %d]"
               ,param_5);
    local_158 = param_5;
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x1bc,
               L"Using a ESimpleRenderTargetMode that wasn\'t decoded in DecodeRenderTargetMode [value = %d]"
              );
    bVar6 = local_148;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_144 = 0;
  if ((param_6 & 0xf) != 0) {
    local_144 = (uint)local_148;
  }
  uStack_fc = 0xffffffff;
  local_f8[0] = 0;
  local_140 = 0;
  if ((param_6 & 0xf) == 2) {
    local_140 = uVar9;
  }
  local_f0 = 0;
  bStack_12e = 0;
  if ((param_6 & 0xf0) != 0) {
    bStack_12e = local_148;
  }
  local_e8 = 0;
  local_148 = (param_6 & 0xf0) == 0x20;
  local_e4 = 0xffffffff;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0xffffffff;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0xffffffff;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0xffffffff;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0xffffffff;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_50 = 0;
  if (param_2 != 0) {
    puVar3 = &local_108;
    puVar5 = param_3;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      uStack_120 = 0;
      uStack_11c = 0xffffffff;
      uStack_117 = 1;
      local_128._0_4_ = (undefined4)uVar1;
      local_128._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)puVar3 = (undefined4)local_128;
      *(undefined4 *)((longlong)puVar3 + 4) = local_128._4_4_;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0xffffffff;
      puVar3[2] = CONCAT62(uStack_116,CONCAT11(1,bVar6));
      uVar8 = uVar8 - 1;
      puVar3 = puVar3 + 3;
      local_128 = uVar1;
      local_118 = bVar6;
    } while (uVar8 != 0);
  }
  if (param_7 != '\0') {
    local_150 = 0;
    local_158 = param_6;
    FUN_141ae3360(param_1,param_2,param_3,param_4);
  }
  uVar8 = 0;
  uStack_130 = (undefined1)local_144;
  uStack_12f = (undefined1)local_140;
  uStack_12d = local_148;
  uStack_12c = param_6;
  *(uint *)(param_1 + 0x98) = param_2;
  if (param_2 != 0) {
    do {
      uVar7 = (int)uVar8 + 1;
      uVar2 = *(undefined8 *)(&uStack_100 + uVar8 * 6);
      uVar1 = *(undefined8 *)(local_f8 + uVar8 * 0xc);
      puVar5 = (undefined8 *)(param_1 + 0xa0 + uVar8 * 0x18);
      *puVar5 = (&local_108)[uVar8 * 3];
      puVar5[1] = uVar2;
      *(undefined8 *)(param_1 + 0xb0 + uVar8 * 0x18) = uVar1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x98));
  }
  local_138._0_4_ = (undefined4)param_4;
  local_138._4_4_ = (undefined4)((ulonglong)param_4 >> 0x20);
  *(undefined4 *)(param_1 + 0x160) = (undefined4)local_138;
  *(undefined4 *)(param_1 + 0x164) = local_138._4_4_;
  *(uint *)(param_1 + 0x168) =
       CONCAT13(local_148,CONCAT12(bStack_12e,CONCAT11(uStack_12f,uStack_130)));
  *(uint *)(param_1 + 0x16c) = param_6;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar3 + 0x26;
  local_138 = param_4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar3 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  uVar8 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 **)(param_1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59440;
  iVar4 = 0;
  *(uint *)(puVar3 + 2) = param_2;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 8) = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x11) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x14) = 0;
  puVar3[0x15] = 0;
  *(undefined4 *)(puVar3 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x17) = 0;
  puVar3[0x18] = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar3 + 0x1a) = 0;
  puVar3[0x1b] = 0;
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xe4) = 0;
  if (*(int *)(puVar3 + 2) != 0) {
    do {
      uVar7 = (int)uVar8 + 1;
      uVar1 = *(undefined8 *)(&uStack_100 + uVar8 * 6);
      puVar3[uVar8 * 3 + 3] = (&local_108)[uVar8 * 3];
      (puVar3 + uVar8 * 3 + 3)[1] = uVar1;
      puVar3[uVar8 * 3 + 5] = *(undefined8 *)(local_f8 + uVar8 * 0xc);
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(puVar3 + 2));
    iVar4 = *(int *)(puVar3 + 0x1d);
  }
  uVar8 = 0;
  if (iVar4 != 0) {
    do {
      uVar7 = (int)uVar8 + 1;
      puVar3[uVar8 + 0x1e] = *(undefined8 *)(uVar8 * 8);
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(puVar3 + 0x1d));
  }
  puVar3[0x1b] = local_138;
  puVar3[0x1c] = CONCAT44(uStack_12c,
                          CONCAT13(uStack_12d,CONCAT12(bStack_12e,CONCAT11(uStack_12f,uStack_130))))
  ;
  return;
}



// FUNCTION 141ad8710 FUN_141ad8710 body=422 status=ok
// SIG undefined FUN_141ad8710(void)

void FUN_141ad8710(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  byte param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong local_38 [2];
  
  FUN_141a0cff0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_4 + 0x1a38),param_2);
  lVar2 = *(longlong *)(param_1 + 0x40);
  local_38[0] = *(ulonglong *)(param_1 + 0x10);
  uVar4 = *(ulonglong *)(param_1 + 0x18);
  lVar5 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  lVar1 = param_3 + 0x18;
  uVar3 = *(undefined8 *)(lVar5 + 0x38);
  lVar5 = lVar1;
  FUN_141aa8c40(lVar2,param_2,uVar3,local_38[0],uVar4,param_4,lVar1,uVar7);
  uVar6 = (undefined4)((ulonglong)lVar5 >> 0x20);
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,uVar3,lVar2 + 0x158,*(undefined8 *)(param_4 + 0x2fb0));
  if (*(short *)(lVar2 + 0x176) != 0) {
    local_38[0] = CONCAT44(local_38[0]._4_4_,(uint)param_5);
    uVar4 = uVar4 & 0xffffffff00000000;
    FUN_1404986d0(param_2,uVar3,lVar2 + 0x172,local_38,uVar4);
  }
  if (*(short *)(lVar2 + 0x170) != 0) {
    local_38[0] = local_38[0] & 0xffffffff00000000;
    FUN_1404986d0(param_2,uVar3,lVar2 + 0x16c,local_38,uVar4 & 0xffffffff00000000);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_141ad6a40(*(longlong *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  lVar1,*(undefined8 *)(param_3 + 0x20));
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_141ad69a0(*(longlong *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  lVar1,*(undefined8 *)(param_3 + 0x20));
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
            (*(longlong **)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),param_4,param_3,
             CONCAT44(uVar6,*(undefined4 *)(param_1 + 100)),
             CONCAT71((int7)((ulonglong)uVar7 >> 8),*(undefined1 *)(param_1 + 0x68)) &
             0xffffffffffffff01);
  return;
}



// FUNCTION 141ad88c0 SetStateOnCommandList body=130 status=ok
// SIG undefined SetStateOnCommandList(void)

void FBasePassParallelCommandListSet::SetStateOnCommandList(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  uVar1 = FSceneRenderTargets::Get(param_2);
  puVar2 = &local_18;
  FUN_141cddcd0(uVar1,param_2,1,1,*(undefined4 *)(param_1 + 0xb8),0,puVar2);
  FUN_141ad8a40(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_1 + 0x18,
                *(undefined4 *)(param_1 + 0xb8),0,(ulonglong)puVar2 & 0xffffffffffffff00);
  return;
}



// FUNCTION 141ad8950 SetViewportAndCallRHI body=230 status=ok
// SIG undefined SetViewportAndCallRHI(void)

void FRenderingCompositePassContext::SetViewportAndCallRHI
               (longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_2[1];
  *(undefined4 *)(param_1 + 0x50) = param_2[2];
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  lVar5 = *(longlong *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 5;
  if (*(undefined8 **)(lVar5 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
  }
  *(undefined8 **)(lVar5 + 0x30) = puVar6;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar7;
  *(undefined8 **)(lVar5 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 3) = param_3;
  *(undefined4 *)((longlong)puVar7 + 0x24) = param_4;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
  *(undefined4 *)(puVar7 + 4) = uVar1;
  *puVar7 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar7 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
  return;
}



// FUNCTION 141ad8a40 FUN_141ad8a40 body=799 status=ok
// SIG undefined FUN_141ad8a40(void)

void FUN_141ad8a40(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined4 param_5,char param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  
  *(undefined4 *)(param_4 + 2) = param_5;
  if (param_6 == '\0') {
    lVar9 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a095a8) &&
       (_Init_thread_header(&DAT_146a095a8), DAT_146a095a8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BasePassOutputsVelocityDebug")
      ;
      if (plVar8 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
      }
      DAT_146a095a0 = lVar9;
      _Init_thread_footer(&DAT_146a095a8);
    }
    if ((DAT_146a095a0 == 0) || (*(int *)(DAT_146a095a0 + 4) != 2)) {
      uVar6 = FUN_1404a0ce0();
    }
    else {
      uVar6 = FUN_141abe4f0();
    }
    *param_4 = uVar6;
    if ((*(byte *)(param_4 + 2) & 2) == 0) {
      uVar6 = FUN_141abfb70();
    }
    else {
      uVar6 = FUN_141abf3f0();
    }
  }
  else {
    uVar6 = FUN_141abe130();
    *param_4 = uVar6;
    uVar6 = FUN_141abfb70();
  }
  *(undefined4 *)(param_4 + 5) = 0;
  param_4[1] = uVar6;
  if (((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) ||
     (param_7 != '\0')) {
    uVar1 = *(undefined4 *)(param_2 + 0x1aac);
    uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
    uVar11 = *(undefined4 *)(param_2 + 0x1aa0);
    puVar7 = puVar10 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59420;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar2;
    *(undefined4 *)(puVar10 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  }
  else {
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    if (*(char *)(param_2 + 0x120a) == '\0') {
      uVar11 = *(undefined4 *)(param_2 + 0x1aac);
      puVar7 = puVar10 + 5;
      uVar1 = *(undefined4 *)(param_3 + 0x2a4);
      if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 5;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar10;
      *(undefined8 **)(param_1 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f59420;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar1;
      *(undefined4 *)(puVar10 + 4) = uVar11;
      *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
      return;
    }
    lVar9 = *(longlong *)(param_3 + 0xc0);
    uVar11 = *(undefined4 *)(lVar9 + 0x1aa0);
    uVar1 = *(undefined4 *)(lVar9 + 0x1aa8);
    uVar2 = *(undefined4 *)(lVar9 + 0x4b70);
    uVar3 = *(undefined4 *)(lVar9 + 0x4b78);
    uVar4 = *(undefined4 *)(lVar9 + 0x1aac);
    uVar5 = *(undefined4 *)(lVar9 + 0x4b7c);
    puVar7 = puVar10 + 7;
    if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 7;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144dc9c30;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar4;
    *(undefined4 *)(puVar10 + 6) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar2;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar1;
    *(undefined4 *)(puVar10 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar10 + 0x34) = 0x3f800000;
  }
  *(undefined4 *)(puVar10 + 2) = uVar11;
  return;
}



// FUNCTION 141ad8d60 FUN_141ad8d60 body=4867 status=ok
// SIG undefined FUN_141ad8d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ad8d60(longlong param_1,longlong param_2,longlong param_3,float *param_4,int *param_5,
                  int *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar9;
  void *pvVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  ushort uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_298 [32];
  int local_278;
  undefined8 *local_270;
  longlong local_268;
  float local_258;
  char local_254;
  longlong local_250;
  int local_248;
  float local_238;
  float fStack_234;
  float fStack_230;
  uint uStack_22c;
  undefined4 local_228;
  int local_224;
  float *local_220;
  int *local_218;
  undefined8 *local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  int *local_1c8;
  longlong local_1c0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  uint5 uStack_178;
  undefined3 uStack_173;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined4 local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_1c8 = param_5;
  local_218 = param_6;
  local_210 = param_7;
  local_220 = param_4;
  local_1f0 = param_1;
  local_1d0 = param_3;
  local_1c0 = param_2;
  fVar28 = _guard_xfg_dispatch_icall_nop(DAT_1464c1648);
  lVar21 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1150);
  }
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_250 = lVar21;
  if ((*(int *)(lVar19 + 0x38) < DAT_146a0aec8) &&
     (_Init_thread_header(&DAT_146a0aec8), DAT_146a0aec8 == -1)) {
    atexit((_func_5014 *)&LAB_143e87d80);
    _Init_thread_footer(&DAT_146a0aec8);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146a0aee0) &&
     (_Init_thread_header(&DAT_146a0aee0), DAT_146a0aee0 == -1)) {
    atexit((_func_5014 *)&LAB_143e87d60);
    _Init_thread_footer(&DAT_146a0aee0);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146a0af00) &&
     (_Init_thread_header(&DAT_146a0af00), DAT_146a0af00 == -1)) {
    atexit((_func_5014 *)&LAB_143e87f50);
    _Init_thread_footer(&DAT_146a0af00);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146a0af18) &&
     (_Init_thread_header(&DAT_146a0af18), DAT_146a0af18 == -1)) {
    atexit((_func_5014 *)&LAB_143e87dc0);
    _Init_thread_footer(&DAT_146a0af18);
  }
  DAT_146a0aec0 = 0.0;
  if ((DAT_146a0aec4 < 0) && (DAT_146a0aec4 != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146a0aeb8,0);
  }
  DAT_146a0aef8 = 0;
  if ((DAT_146a0aefc < 0) && (DAT_146a0aefc != 0)) {
    TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(&DAT_146a0aee8,0);
  }
  DAT_146a0aed8 = 0;
  if ((DAT_146a0aedc < 0) && (DAT_146a0aedc != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146a0aed0,0);
  }
  DAT_146a0af10 = 0;
  if ((DAT_146a0af14 < 0) && (DAT_146a0af14 != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146a0af08,0);
  }
  *param_7 = 0;
  if ((*(longlong *)(param_1 + 8) == 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x15e8) < 1)) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  local_224 = 0;
  local_254 = cVar9;
  if (0 < *(int *)(param_3 + 0x30b0)) {
    local_1f8 = 0;
    fVar34 = DAT_1464c164c;
    do {
      iVar18 = local_224;
      local_238 = 0.0;
      fStack_234 = 0.0;
      fStack_230 = 1.0;
      uStack_22c = 0x3e490fdb;
      lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x30a8) + local_1f8 * 8);
      lVar1 = *(longlong *)(lVar19 + 0x50);
      local_1d8 = lVar19;
      if (cVar9 == '\0') {
        fVar31 = fVar34;
        if ((lVar21 == 0) || (*(char *)(lVar21 + 0x29) != '\0')) {
LAB_141ad9178:
          if (lVar1 == 0) {
            fVar31 = 0.19634955;
          }
          else {
            uVar2 = *(undefined8 *)(lVar1 + 0x160);
            uVar4 = *(undefined8 *)(lVar1 + 0x168);
            uVar5 = *(undefined8 *)(lVar1 + 0x170);
            uVar6 = *(undefined8 *)(lVar1 + 0x178);
            uVar7 = *(undefined8 *)(lVar1 + 0x180);
            uVar8 = *(ulonglong *)(lVar1 + 0x188);
            local_148 = *(undefined4 *)(lVar1 + 0x1d0);
            fStack_144 = *(float *)(lVar1 + 0x1d4);
            fStack_140 = *(float *)(lVar1 + 0x1d8);
            fStack_13c = *(float *)(lVar1 + 0x1dc);
            local_138 = *(undefined4 *)(lVar1 + 0x1e0);
            fStack_134 = *(float *)(lVar1 + 0x1e4);
            fStack_130 = *(float *)(lVar1 + 0x1e8);
            fStack_12c = *(float *)(lVar1 + 0x1ec);
            local_128 = *(undefined4 *)(lVar1 + 0x1f0);
            fStack_124 = *(float *)(lVar1 + 500);
            fStack_120 = *(float *)(lVar1 + 0x1f8);
            fStack_11c = *(float *)(lVar1 + 0x1fc);
            local_1a8 = 0;
            uStack_1a0 = 0;
            if ((*(longlong *)(param_1 + 8) != 0) &&
               (lVar21 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1168), lVar21 != 0)) {
              lVar21 = *(longlong *)(lVar21 + 0x30);
              local_1a8 = CONCAT44(*(float *)(lVar21 + 0x104) * 0.31830987,
                                   *(float *)(lVar21 + 0x100) * 0.31830987);
              uStack_1a0 = CONCAT44(*(float *)(lVar21 + 0x10c) * 0.31830987,
                                    *(float *)(lVar21 + 0x108) * 0.31830987);
            }
            local_258 = 0.11;
            local_248 = 0x3f170a3d;
            local_118._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
            uStack_110._0_4_ = (float)uVar4;
            uStack_110._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
            local_108._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
            uStack_100._0_4_ = (float)uVar6;
            uStack_100._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
            local_228 = 0x3e99999a;
            local_158._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
            uStack_150._0_4_ = (float)uVar8;
            uStack_150._4_4_ = (float)(uVar8 >> 0x20);
            local_188 = 0;
            uStack_180 = 0;
            _uStack_178 = 0;
            local_170 = 0;
            fVar30 = (fStack_140 * (float)local_1a8 + (float)uStack_110) * 0.3 +
                     (fStack_130 * local_1a8._4_4_ + (float)uStack_100) * 0.59 +
                     (fStack_120 * (float)uStack_1a0 + (float)uStack_150) * 0.11;
            fVar32 = -((fStack_13c * (float)local_1a8 + uStack_110._4_4_) * 0.3 +
                       (fStack_12c * local_1a8._4_4_ + uStack_100._4_4_) * 0.59 +
                      (fStack_11c * (float)uStack_1a0 + uStack_150._4_4_) * 0.11);
            fVar33 = -((fStack_144 * (float)local_1a8 + local_118._4_4_) * 0.3 +
                       (fStack_134 * local_1a8._4_4_ + local_108._4_4_) * 0.59 +
                      (fStack_124 * (float)uStack_1a0 + local_158._4_4_) * 0.11);
            fVar27 = fVar33 * fVar33 + fVar32 * fVar32 + fVar30 * fVar30;
            local_238 = fVar32;
            fStack_234 = fVar33;
            fStack_230 = fVar30;
            local_158 = (undefined *)uVar7;
            uStack_150 = uVar8;
            local_118 = uVar2;
            uStack_110 = uVar4;
            local_108 = uVar5;
            uStack_100 = uVar6;
            if ((fVar27 != 1.0) &&
               (local_238 = DAT_1468b5d90, fStack_234 = DAT_1468b5d94, fStack_230 = DAT_1468b5d98,
               1e-08 <= fVar27)) {
              auVar29 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
              local_258 = auVar29._0_4_;
              local_258 = local_258 + local_258 * (0.5 - fVar27 * 0.5 * local_258 * local_258);
              local_258 = local_258 + local_258 * (0.5 - fVar27 * 0.5 * local_258 * local_258);
              local_238 = fVar32 * local_258;
              fStack_234 = fVar33 * local_258;
              fStack_230 = fVar30 * local_258;
            }
          }
        }
        else if ((*(char *)(lVar21 + 0x28) == '\0') ||
                (((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x8000000) == 0 || (lVar1 == 0)
                 ))) {
          if ((*(char *)(lVar21 + 0x28) != '\0') ||
             ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x8000000) == 0))
          goto LAB_141ad9178;
          local_228 = 0x3de147ae;
          local_248 = 0x3f170a3d;
          local_258 = 0.3;
          local_188 = 0;
          uStack_180 = 0;
          _uStack_178 = 0;
          local_170 = 0;
          local_1a8 = CONCAT44(*(float *)(lVar21 + 0x74) * 0.3 + *(float *)(lVar21 + 0xa4) * 0.59 +
                               *(float *)(lVar21 + 0xd4) * 0.11,
                               *(float *)(lVar21 + 0x70) * 0.3 + *(float *)(lVar21 + 0xa0) * 0.59 +
                               *(float *)(lVar21 + 0xd0) * 0.11);
          uStack_1a0 = CONCAT44(*(float *)(lVar21 + 0x7c) * 0.3 + *(float *)(lVar21 + 0xac) * 0.59 +
                                *(float *)(lVar21 + 0xdc) * 0.11,
                                *(float *)(lVar21 + 0x78) * 0.3 + *(float *)(lVar21 + 0xa8) * 0.59 +
                                *(float *)(lVar21 + 0xd8) * 0.11);
          TSHVector<2>::GetMaximumDirection(&local_1a8,&local_1e8);
          local_238 = local_1e8;
          fStack_234 = local_1e4;
          fStack_230 = local_1e0;
        }
        else {
          local_238 = *(float *)(lVar1 + 0x250);
          fStack_234 = *(float *)(lVar1 + 0x254);
          fStack_230 = *(float *)(lVar1 + 600);
          fVar31 = DAT_1464c1650 * *(float *)(lVar1 + 0x25c) * 1.5707964;
          fVar27 = DAT_1464c1654 * 3.1415927 * 0.0055555557;
          if (fVar31 <= fVar27) {
            fVar31 = fVar27;
          }
        }
      }
      else {
        lVar21 = *(longlong *)(lVar19 + 8);
        fVar31 = 0.0;
        local_238 = *(float *)(lVar21 + 0xc0);
        fStack_234 = *(float *)(lVar21 + 0xc4);
        fStack_230 = *(float *)(lVar21 + 200);
      }
      iVar25 = DAT_146a0aef8;
      fVar27 = DAT_146a0aec0;
      if ((1.0 <= fVar28) || (cVar9 != '\0')) {
LAB_141ad9437:
        local_258 = DAT_146a0aec0;
        local_248 = DAT_146a0aef8;
        local_208 = 0;
        local_200 = 0;
        FUN_141d34970(lVar19);
        iVar26 = 0;
        if (0 < (int)local_200) {
          lVar21 = 0;
          do {
            lVar19 = *(longlong *)(lVar21 + local_208);
            plVar22 = *(longlong **)(lVar19 + 8);
            if ((*(uint *)((longlong)plVar22 + 0x1c) >> 2 & 1) != 0) {
              (**(code **)(*plVar22 + 0x50))(plVar22,&DAT_146a0aeb8);
              cVar9 = (**(code **)(**(longlong **)(lVar19 + 8) + 0x110))();
              if (cVar9 != '\0') {
                iVar18 = *(int *)(lVar19 + 0x80);
                if (iVar18 != 0) {
                  if (DAT_146a0aefc < iVar18 + DAT_146a0aef8) {
                    TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(&DAT_146a0aee8);
                  }
                  pvVar10 = *(void **)(lVar19 + 0x78);
                  if (*(void **)(lVar19 + 0x78) == (void *)0x0) {
                    pvVar10 = (void *)(lVar19 + 0x70);
                  }
                  puVar13 = DAT_146a0aef0;
                  if (DAT_146a0aef0 == (undefined *)0x0) {
                    puVar13 = &DAT_146a0aee8;
                  }
                  _guard_xfg_dispatch_icall_nop
                            (puVar13 + (longlong)DAT_146a0aef8 * 4,pvVar10,(longlong)iVar18 << 2);
                  DAT_146a0aef8 = DAT_146a0aef8 + iVar18;
                }
              }
            }
            iVar26 = iVar26 + 1;
            lVar21 = lVar21 + 8;
            lVar19 = local_1d8;
            param_3 = local_1d0;
            fVar27 = local_258;
            iVar25 = local_248;
            iVar18 = local_224;
          } while (iVar26 < (int)local_200);
        }
        uVar3 = (ushort)((uint)fVar31 >> 0x10);
        uVar23 = uVar3 & 0x8000;
        uStack_22c = (uint)uVar23;
        uVar12 = (uint)fVar31 >> 0x17 & 0xff;
        if (uVar12 < 0x71) {
          iVar26 = -uVar12 + 0x7e;
          if (iVar26 < 0x19) {
            uVar17 = (uint)fVar31 & 0x7fffff | 0x800000;
            uVar23 = uVar23 | (ushort)(uVar17 >> ((byte)iVar26 & 0x1f)) & 0x3ff;
            uStack_22c = (uint)uVar23;
            if ((uVar17 >> ((char)-uVar12 + 0x7dU & 0x1f) & 1) != 0) {
              uStack_22c = (uint)(ushort)(uVar23 + 1);
            }
          }
        }
        else if (uVar12 < 0x8f) {
          uStack_22c = (uint)(ushort)(uVar23 | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 |
                                               (ushort)((uint)fVar31 >> 0xd) & 0x3ff);
        }
        else {
          uStack_22c = (uint)(uVar23 | 0x7bff);
        }
        local_258 = *(float *)(*(longlong *)(lVar19 + 8) + 0x78);
        uVar3 = (ushort)((uint)local_258 >> 0x10);
        uVar23 = uVar3 & 0x8000;
        uVar17 = (uint)uVar23;
        uVar12 = (uint)local_258 >> 0x17 & 0xff;
        if (uVar12 < 0x71) {
          iVar26 = -uVar12 + 0x7e;
          if (iVar26 < 0x19) {
            uVar24 = (uint)local_258 & 0x7fffff | 0x800000;
            uVar23 = uVar23 | (ushort)(uVar24 >> ((byte)iVar26 & 0x1f)) & 0x3ff;
            uVar17 = (uint)uVar23;
            if ((uVar24 >> ((char)-uVar12 + 0x7dU & 0x1f) & 1) != 0) {
              uVar17 = (uint)(ushort)(uVar23 + 1);
            }
          }
        }
        else if (uVar12 < 0x8f) {
          uVar17 = (uint)(ushort)(uVar23 | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 |
                                           (ushort)((uint)local_258 >> 0xd) & 0x3ff);
        }
        else {
          uVar17 = (uint)(uVar23 | 0x7bff);
        }
        uStack_22c = uVar17 << 0x10 | uStack_22c;
        uVar2 = CONCAT44(fStack_234,local_238);
        uVar4 = CONCAT44(uStack_22c,fStack_230);
        if ((int)fVar27 < (int)DAT_146a0aec0) {
          do {
            iVar26 = DAT_146a0aed8;
            lVar21 = (longlong)DAT_146a0aed8;
            DAT_146a0aed8 = DAT_146a0aed8 + 1;
            if (DAT_146a0aedc < DAT_146a0aed8) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146a0aed0,iVar26);
            }
            fVar27 = (float)((int)fVar27 + 1);
            puVar11 = (undefined8 *)((longlong)DAT_146a0aed0 + lVar21 * 0x10);
            *puVar11 = uVar2;
            puVar11[1] = uVar4;
          } while ((int)fVar27 < (int)DAT_146a0aec0);
        }
        if (iVar25 < DAT_146a0aef8) {
          do {
            iVar26 = DAT_146a0af10;
            lVar21 = (longlong)DAT_146a0af10;
            DAT_146a0af10 = DAT_146a0af10 + 1;
            if (DAT_146a0af14 < DAT_146a0af10) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146a0af08,iVar26);
            }
            iVar25 = iVar25 + 1;
            puVar11 = (undefined8 *)((longlong)DAT_146a0af08 + lVar21 * 0x10);
            *puVar11 = uVar2;
            puVar11[1] = uVar4;
          } while (iVar25 < DAT_146a0aef8);
        }
        *local_1c8 = *local_1c8 + 1;
        param_1 = local_1f0;
        fVar34 = DAT_1464c164c;
        cVar9 = local_254;
      }
      else {
        fVar30 = ((-fStack_230 - fVar28) + (-fStack_230 - fVar28)) / (1.0 - fVar28);
        if (0.0 <= fVar30) {
          if (1.0 <= fVar30) {
            fVar30 = 1.0;
          }
        }
        else {
          fVar30 = 0.0;
        }
        if (fVar30 < 1.0) goto LAB_141ad9437;
      }
      local_224 = iVar18 + 1;
      local_1f8 = local_1f8 + 1;
      lVar21 = local_250;
      param_2 = local_1c0;
    } while (local_224 < *(int *)(param_3 + 0x30b0));
  }
  if ((int)DAT_146a0aec0 < 1) {
    if (DAT_146a0aef8 < 1) {
      *local_220 = DAT_146a0aec0;
      goto LAB_141ad9f5c;
    }
LAB_141ad997b:
    plVar22 = (longlong *)(param_3 + 0x1ab0);
    lVar19 = *plVar22;
    iVar18 = DAT_146a0aef8 * 4;
    lVar21 = *(longlong *)(lVar19 + 0x1560);
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) < iVar18)) {
      TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(lVar19 + 0x1560),0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1568,0);
      local_188 = CONCAT44(_DAT_1468b5d78,1);
      uStack_180 = CONCAT44(uRam00000001468b5d80,uRam00000001468b5d7c);
      uStack_178 = (uint5)uRam00000001468b5d84;
      local_198 = 0;
      uStack_190 = 0;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_278 = 0x204;
      local_270 = &local_198;
      (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_250,&DAT_146ab6e78,iVar18);
      TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1560,&local_250);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
      local_270 = (undefined8 *)CONCAT71(local_270._1_7_,0x1c);
      local_278 = 4;
      (**(code **)(*DAT_146ab6358 + 0x4a8))
                (DAT_146ab6358,&local_250,&DAT_146ab6e78,*(undefined8 *)(*plVar22 + 0x1560));
      TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1568,&local_250);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
      lVar19 = *(longlong *)(param_3 + 0x1ab0);
    }
    local_270 = (undefined8 *)CONCAT44(local_270._4_4_,1);
    local_278 = iVar18;
    pvVar10 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar19 + 0x1560),0);
    puVar13 = DAT_146a0aef0;
    if (DAT_146a0aef0 == (undefined *)0x0) {
      puVar13 = &DAT_146a0aee8;
    }
    _guard_xfg_dispatch_icall_nop(pvVar10,puVar13,(longlong)iVar18);
    (**(code **)(*DAT_146ab6358 + 0x4b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*plVar22 + 0x1560));
  }
  else {
    plVar22 = (longlong *)(param_3 + 0x1ab0);
    iVar18 = (int)DAT_146a0aec0 * 0x20;
    lVar19 = *plVar22;
    lVar21 = *(longlong *)(lVar19 + 0x1550);
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) < iVar18)) {
      TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(lVar19 + 0x1550),0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1558,0);
      local_188 = CONCAT44(_DAT_1468b5d78,1);
      uStack_180 = CONCAT44(uRam00000001468b5d80,uRam00000001468b5d7c);
      uStack_178 = (uint5)uRam00000001468b5d84;
      local_198 = 0;
      uStack_190 = 0;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_278 = 0x204;
      local_270 = &local_198;
      (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_250,&DAT_146ab6e78,iVar18);
      TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1550,&local_250);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
      local_270 = (undefined8 *)CONCAT71(local_270._1_7_,1);
      local_278 = 0x10;
      (**(code **)(*DAT_146ab6358 + 0x4a8))
                (DAT_146ab6358,&local_250,&DAT_146ab6e78,*(undefined8 *)(*plVar22 + 0x1550));
      TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1558,&local_250);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
      lVar19 = *(longlong *)(param_3 + 0x1ab0);
    }
    local_270 = (undefined8 *)CONCAT44(local_270._4_4_,1);
    local_278 = iVar18;
    pvVar10 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar19 + 0x1550),0);
    _guard_xfg_dispatch_icall_nop(pvVar10,DAT_146a0aeb8,(longlong)iVar18);
    (**(code **)(*DAT_146ab6358 + 0x4b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*plVar22 + 0x1550));
    if (0 < DAT_146a0aef8) goto LAB_141ad997b;
  }
  plVar22 = (longlong *)(param_3 + 0x1ab0);
  lVar21 = *plVar22;
  uVar12 = DAT_146a0aed8 * 0x10;
  iVar18 = DAT_146a0af10 * 0x10 + uVar12;
  lVar19 = *(longlong *)(lVar21 + 0x1570);
  if ((lVar19 == 0) || (*(int *)(lVar19 + 0x18) < iVar18)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(lVar21 + 0x1570),0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1578,0);
    local_188 = CONCAT44(_DAT_1468b5d78,1);
    uStack_180 = CONCAT44(uRam00000001468b5d80,uRam00000001468b5d7c);
    uStack_178 = (uint5)uRam00000001468b5d84;
    local_198 = 0;
    uStack_190 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_278 = 0x204;
    local_270 = &local_198;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_250,&DAT_146ab6e78,iVar18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1570,&local_250);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
    local_270 = (undefined8 *)CONCAT71(local_270._1_7_,1);
    local_278 = 0x10;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,&local_250,&DAT_146ab6e78,*(undefined8 *)(*plVar22 + 0x1570));
    TRefCountPtr<FRHIIndexBuffer>::operator=(*plVar22 + 0x1578,&local_250);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
    lVar21 = *(longlong *)(param_3 + 0x1ab0);
  }
  local_270 = (undefined8 *)CONCAT44(local_270._4_4_,1);
  local_278 = iVar18;
  pvVar10 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar21 + 0x1570),0);
  _guard_xfg_dispatch_icall_nop(pvVar10,DAT_146a0aed0,(ulonglong)uVar12);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)pvVar10 + (ulonglong)uVar12),DAT_146a0af08,
             (ulonglong)(uint)(DAT_146a0af10 << 4));
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*plVar22 + 0x1570));
  puVar11 = local_210;
  *local_210 = *(undefined8 *)(*plVar22 + 0x1578);
  if (cVar9 != '\0') {
    lVar21 = *plVar22;
    iVar18 = DAT_146a0af10 + DAT_146a0aed8;
    if ((*(longlong *)(lVar21 + 0x1580) == 0) ||
       (*(int *)(lVar21 + 0x1598) != *(int *)(*(longlong *)(lVar21 + 0x1570) + 0x18))) {
      FUN_141ace450();
      local_268 = 0;
      local_270 = (undefined8 *)0x0;
      local_278 = 0;
      FUN_141ac25e0(*plVar22 + 0x1580,DAT_1464ca1ec,iVar18,1);
      lVar21 = *(longlong *)(param_3 + 0x1ab0);
    }
    *puVar11 = *(undefined8 *)(lVar21 + 0x1590);
    lVar21 = *(longlong *)(param_3 + 0x3090);
    local_158 = &DAT_1469fde10;
    uStack_150 = uStack_150 & 0xffffffff00000000;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar21 + 0x38,&local_258,&local_158);
    plVar14 = (longlong *)0x0;
    if (local_258 != -NAN) {
      plVar14 = (longlong *)((longlong)(int)local_258 * 0x20 + *(longlong *)(lVar21 + 0x38));
    }
    plVar20 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar20 = (longlong *)0x0;
    }
    lVar21 = *plVar20;
    lVar19 = *(longlong *)(lVar21 + 0x48);
    if (*(char *)(lVar19 + 0x28) == '\0') {
      FUN_1419f3850(lVar19);
    }
    uVar2 = *(undefined8 *)(lVar19 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar15;
    *(undefined8 **)(param_2 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d91e50;
    puVar15[2] = uVar2;
    local_268 = *plVar22 + 0x1580;
    local_270 = *(undefined8 **)(*plVar22 + 0x1578);
    local_278 = iVar18;
    FUN_141ad6e20(lVar21,param_2,*(undefined8 *)(local_1f0 + 8),param_3);
    local_278 = 1;
    DispatchComputeShader
              (param_2,lVar21,(int)((iVar18 + 0x3f >> 0x1f & 0x3fU) + iVar18 + 0x3f) >> 6,1);
    lVar19 = *plVar22;
    lVar1 = *(longlong *)(lVar21 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    FRWShaderParameter::UnsetUAV<FRHICommandList>
              (lVar21 + 0xe2,param_2,*(undefined8 *)(lVar1 + 0x60));
    local_210 = *(undefined8 **)(lVar19 + 0x1588);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *puVar15 = local_210;
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar16 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar16 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar16;
    *(undefined8 **)(param_2 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar16 + 2) = 1;
    puVar16[3] = puVar15;
    *(undefined4 *)(puVar16 + 4) = 0;
    *(undefined4 *)((longlong)puVar16 + 0x24) = 3;
    puVar16[5] = 0;
  }
  *local_220 = DAT_146a0aec0;
LAB_141ad9f5c:
  *local_218 = DAT_146a0aef8;
  return;
}



// FUNCTION 141ada070 FUN_141ada070 body=707 status=ok
// SIG undefined FUN_141ada070(void)

void FUN_141ada070(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
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
          goto LAB_141ada287;
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
LAB_141ada287:
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



// FUNCTION 141ada340 FUN_141ada340 body=691 status=ok
// SIG undefined FUN_141ada340(void)

void FUN_141ada340(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0x60) = 1;
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
          goto LAB_141ada547;
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
LAB_141ada547:
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



// FUNCTION 141ada600 FUN_141ada600 body=691 status=ok
// SIG undefined FUN_141ada600(void)

void FUN_141ada600(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_1469fd830 != 0x800) && (iVar4 = DAT_1464a8208, DAT_1469fd830 != 0x1000)) ||
     (uVar3 = DAT_1469fd838, iVar4 != 0)) {
    uVar3 = DAT_1469fd834 | DAT_1469fd830;
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
          goto LAB_141ada807;
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
LAB_141ada807:
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



// FUNCTION 141ada8c0 FUN_141ada8c0 body=183 status=ok
// SIG undefined FUN_141ada8c0(void)

void FUN_141ada8c0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FForwardLightData::operator=(param_4,*(undefined8 *)(param_2 + 0x1a30));
  if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
    uVar1 = *(undefined8 *)(param_2 + 0x1a30);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(**(longlong **)(param_2 + 0x10) + 8) + 0x1a30);
  }
  FForwardLightData::operator=(param_4 + 0x280,uVar1);
  uVar1 = FSceneRenderTargets::Get(param_1);
  FUN_141d4f100(uVar1,param_2,param_4 + 0x500);
  FUN_141b45c30(param_2,param_4 + 0x570);
  lVar2 = GetSubsufaceProfileTexture_RT(param_1);
  if (lVar2 == 0) {
    lVar2 = DAT_1464c3318;
  }
  *(undefined8 *)(param_4 + 0x610) = *(undefined8 *)(lVar2 + 0x10);
  return;
}



// FUNCTION 141ada980 FUN_141ada980 body=366 status=ok
// SIG undefined FUN_141ada980(void)

void FUN_141ada980(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_48 [48];
  
  uVar1 = *(undefined4 *)(param_2 + 0x1aac);
  if (param_5 == '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 0x18);
    puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_48);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *puVar6;
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar8;
    *(undefined8 **)(param_1 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59420;
    *(undefined4 *)(puVar8 + 3) = param_3;
    *(undefined4 *)((longlong)puVar8 + 0x24) = param_4;
    puVar8[2] = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
    *(undefined4 *)(puVar8 + 4) = uVar1;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
    uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
    uVar4 = *(undefined4 *)(param_2 + 0x1aa0);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar8;
    *(undefined8 **)(param_1 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar3;
    *puVar8 = &PTR_LAB_143f59420;
    *(undefined4 *)(puVar8 + 3) = param_3;
    *(undefined4 *)((longlong)puVar8 + 0x24) = param_4;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
    *(undefined4 *)(puVar8 + 4) = uVar1;
  }
  return;
}



// FUNCTION 141adaaf0 FUN_141adaaf0 body=118 status=ok
// SIG undefined FUN_141adaaf0(void)

undefined8 FUN_141adaaf0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adda90(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adab70 FUN_141adab70 body=118 status=ok
// SIG undefined FUN_141adab70(void)

undefined8 FUN_141adab70(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adde30(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adabf0 FUN_141adabf0 body=118 status=ok
// SIG undefined FUN_141adabf0(void)

undefined8 FUN_141adabf0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ade180(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adac70 FUN_141adac70 body=118 status=ok
// SIG undefined FUN_141adac70(void)

undefined8 FUN_141adac70(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ade510(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adacf0 FUN_141adacf0 body=118 status=ok
// SIG undefined FUN_141adacf0(void)

undefined8 FUN_141adacf0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ade8e0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adad70 FUN_141adad70 body=118 status=ok
// SIG undefined FUN_141adad70(void)

undefined8 FUN_141adad70(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adecc0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adadf0 FUN_141adadf0 body=118 status=ok
// SIG undefined FUN_141adadf0(void)

undefined8 FUN_141adadf0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adf0a0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adae70 FUN_141adae70 body=118 status=ok
// SIG undefined FUN_141adae70(void)

undefined8 FUN_141adae70(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adf480(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adaef0 FUN_141adaef0 body=118 status=ok
// SIG undefined FUN_141adaef0(void)

undefined8 FUN_141adaef0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adf860(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adaf70 FUN_141adaf70 body=118 status=ok
// SIG undefined FUN_141adaf70(void)

undefined8 FUN_141adaf70(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adfc40(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adaff0 FUN_141adaff0 body=118 status=ok
// SIG undefined FUN_141adaff0(void)

undefined8 FUN_141adaff0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae0010(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb070 FUN_141adb070 body=118 status=ok
// SIG undefined FUN_141adb070(void)

undefined8 FUN_141adb070(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae03c0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb0f0 FUN_141adb0f0 body=118 status=ok
// SIG undefined FUN_141adb0f0(void)

undefined8 FUN_141adb0f0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae07a0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb170 FUN_141adb170 body=118 status=ok
// SIG undefined FUN_141adb170(void)

undefined8 FUN_141adb170(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae0b40(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb1f0 FUN_141adb1f0 body=118 status=ok
// SIG undefined FUN_141adb1f0(void)

undefined8 FUN_141adb1f0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae0f10(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb270 FUN_141adb270 body=118 status=ok
// SIG undefined FUN_141adb270(void)

undefined8 FUN_141adb270(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae1310(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb2f0 FUN_141adb2f0 body=133 status=ok
// SIG undefined FUN_141adb2f0(void)

undefined8 FUN_141adb2f0(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141add870(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb380 FUN_141adb380 body=133 status=ok
// SIG undefined FUN_141adb380(void)

undefined8 FUN_141adb380(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141addc50(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb410 FUN_141adb410 body=133 status=ok
// SIG undefined FUN_141adb410(void)

undefined8 FUN_141adb410(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141addfa0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb4a0 FUN_141adb4a0 body=133 status=ok
// SIG undefined FUN_141adb4a0(void)

undefined8 FUN_141adb4a0(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ade2f0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb530 FUN_141adb530 body=133 status=ok
// SIG undefined FUN_141adb530(void)

undefined8 FUN_141adb530(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ade6c0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb5c0 FUN_141adb5c0 body=133 status=ok
// SIG undefined FUN_141adb5c0(void)

undefined8 FUN_141adb5c0(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adeaa0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb650 FUN_141adb650 body=133 status=ok
// SIG undefined FUN_141adb650(void)

undefined8 FUN_141adb650(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adee80(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb6e0 FUN_141adb6e0 body=133 status=ok
// SIG undefined FUN_141adb6e0(void)

undefined8 FUN_141adb6e0(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adf260(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb770 FUN_141adb770 body=133 status=ok
// SIG undefined FUN_141adb770(void)

undefined8 FUN_141adb770(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adf640(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb800 FUN_141adb800 body=133 status=ok
// SIG undefined FUN_141adb800(void)

undefined8 FUN_141adb800(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adfa20(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb890 FUN_141adb890 body=133 status=ok
// SIG undefined FUN_141adb890(void)

undefined8 FUN_141adb890(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141adfe00(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb920 FUN_141adb920 body=133 status=ok
// SIG undefined FUN_141adb920(void)

undefined8 FUN_141adb920(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae01a0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adb9b0 FUN_141adb9b0 body=133 status=ok
// SIG undefined FUN_141adb9b0(void)

undefined8 FUN_141adb9b0(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae0580(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adba40 FUN_141adba40 body=133 status=ok
// SIG undefined FUN_141adba40(void)

undefined8 FUN_141adba40(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae0960(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adbad0 FUN_141adbad0 body=133 status=ok
// SIG undefined FUN_141adbad0(void)

undefined8 FUN_141adbad0(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae0cb0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adbb60 FUN_141adbb60 body=133 status=ok
// SIG undefined FUN_141adbb60(void)

undefined8 FUN_141adbb60(uint param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_1 < 0x1c) && ((0x8c51800U >> (param_1 & 0x1f) & 1) != 0)) &&
     (cVar1 = FUN_141ed13a0(), cVar1 != '\0')) {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141ae10f0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141adbbf0 FUN_141adbbf0 body=460 status=ok
// SIG undefined FUN_141adbbf0(void)

undefined8 FUN_141adbbf0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469feb50) && (_Init_thread_header(&DAT_1469feb50), DAT_1469feb50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feb48 = lVar4;
    _Init_thread_footer(&DAT_1469feb50);
  }
  if ((*piVar7 < DAT_1469feb60) && (_Init_thread_header(&DAT_1469feb60), DAT_1469feb60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feb58 = lVar6;
    _Init_thread_footer(&DAT_1469feb60);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469feb58 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469feb48 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1aa0(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adbdc0 FUN_141adbdc0 body=395 status=ok
// SIG undefined FUN_141adbdc0(void)

ulonglong FUN_141adbdc0(undefined8 param_1,longlong *param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  
  lVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_1469feaf0) && (_Init_thread_header(&DAT_1469feaf0), DAT_1469feaf0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar3 = lVar5;
    if (plVar4 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469feae8 = lVar3;
    _Init_thread_footer(&DAT_1469feaf0);
  }
  if ((*piVar6 < DAT_1469feb00) && (_Init_thread_header(&DAT_1469feb00), DAT_1469feb00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469feaf8 = lVar5;
    _Init_thread_footer(&DAT_1469feb00);
  }
  uVar2 = (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469feaf8 != 0) && (uVar2 = FUN_1415ad720(&DAT_1468e2448), (char)uVar2 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT44(extraout_var,DVar1);
  }
  if (((DAT_1469feae8 != 0) && (uVar2 = FUN_1415ad720(&DAT_1468e2448), (char)uVar2 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT44(extraout_var_00,DVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141adbf50 FUN_141adbf50 body=395 status=ok
// SIG undefined FUN_141adbf50(void)

ulonglong FUN_141adbf50(undefined8 param_1,longlong *param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  
  lVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_1469fea90) && (_Init_thread_header(&DAT_1469fea90), DAT_1469fea90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar3 = lVar5;
    if (plVar4 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fea88 = lVar3;
    _Init_thread_footer(&DAT_1469fea90);
  }
  if ((*piVar6 < DAT_1469feaa0) && (_Init_thread_header(&DAT_1469feaa0), DAT_1469feaa0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fea98 = lVar5;
    _Init_thread_footer(&DAT_1469feaa0);
  }
  uVar2 = (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fea98 != 0) && (uVar2 = FUN_1415ad720(&DAT_1468e2448), (char)uVar2 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT44(extraout_var,DVar1);
  }
  if (((DAT_1469fea88 != 0) && (uVar2 = FUN_1415ad720(&DAT_1468e2448), (char)uVar2 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT44(extraout_var_00,DVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141adc0e0 FUN_141adc0e0 body=443 status=ok
// SIG undefined FUN_141adc0e0(void)

undefined8 FUN_141adc0e0(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fea30) && (_Init_thread_header(&DAT_1469fea30), DAT_1469fea30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fea28 = lVar4;
    _Init_thread_footer(&DAT_1469fea30);
  }
  if ((*piVar7 < DAT_1469fea40) && (_Init_thread_header(&DAT_1469fea40), DAT_1469fea40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fea38 = lVar6;
    _Init_thread_footer(&DAT_1469fea40);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fea38 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fea28 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ee4e30(param_1), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adc2a0 FUN_141adc2a0 body=460 status=ok
// SIG undefined FUN_141adc2a0(void)

undefined8 FUN_141adc2a0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe9d0) && (_Init_thread_header(&DAT_1469fe9d0), DAT_1469fe9d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe9c8 = lVar4;
    _Init_thread_footer(&DAT_1469fe9d0);
  }
  if ((*piVar7 < DAT_1469fe9e0) && (_Init_thread_header(&DAT_1469fe9e0), DAT_1469fe9e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe9d8 = lVar6;
    _Init_thread_footer(&DAT_1469fe9e0);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe9d8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe9c8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1d30(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adc470 FUN_141adc470 body=460 status=ok
// SIG undefined FUN_141adc470(void)

undefined8 FUN_141adc470(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe970) && (_Init_thread_header(&DAT_1469fe970), DAT_1469fe970 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe968 = lVar4;
    _Init_thread_footer(&DAT_1469fe970);
  }
  if ((*piVar7 < DAT_1469fe980) && (_Init_thread_header(&DAT_1469fe980), DAT_1469fe980 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe978 = lVar6;
    _Init_thread_footer(&DAT_1469fe980);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe978 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe968 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1cf0(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adc640 FUN_141adc640 body=460 status=ok
// SIG undefined FUN_141adc640(void)

undefined8 FUN_141adc640(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe910) && (_Init_thread_header(&DAT_1469fe910), DAT_1469fe910 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe908 = lVar4;
    _Init_thread_footer(&DAT_1469fe910);
  }
  if ((*piVar7 < DAT_1469fe920) && (_Init_thread_header(&DAT_1469fe920), DAT_1469fe920 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe918 = lVar6;
    _Init_thread_footer(&DAT_1469fe920);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe918 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe908 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1e60(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adc810 FUN_141adc810 body=460 status=ok
// SIG undefined FUN_141adc810(void)

undefined8 FUN_141adc810(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe8b0) && (_Init_thread_header(&DAT_1469fe8b0), DAT_1469fe8b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe8a8 = lVar4;
    _Init_thread_footer(&DAT_1469fe8b0);
  }
  if ((*piVar7 < DAT_1469fe8c0) && (_Init_thread_header(&DAT_1469fe8c0), DAT_1469fe8c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe8b8 = lVar6;
    _Init_thread_footer(&DAT_1469fe8c0);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe8b8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe8a8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1f90(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adc9e0 FUN_141adc9e0 body=460 status=ok
// SIG undefined FUN_141adc9e0(void)

undefined8 FUN_141adc9e0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe850) && (_Init_thread_header(&DAT_1469fe850), DAT_1469fe850 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe848 = lVar4;
    _Init_thread_footer(&DAT_1469fe850);
  }
  if ((*piVar7 < DAT_1469fe860) && (_Init_thread_header(&DAT_1469fe860), DAT_1469fe860 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe858 = lVar6;
    _Init_thread_footer(&DAT_1469fe860);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe858 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe848 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae2090(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adcbb0 FUN_141adcbb0 body=460 status=ok
// SIG undefined FUN_141adcbb0(void)

undefined8 FUN_141adcbb0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe7f0) && (_Init_thread_header(&DAT_1469fe7f0), DAT_1469fe7f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe7e8 = lVar4;
    _Init_thread_footer(&DAT_1469fe7f0);
  }
  if ((*piVar7 < DAT_1469fe800) && (_Init_thread_header(&DAT_1469fe800), DAT_1469fe800 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe7f8 = lVar6;
    _Init_thread_footer(&DAT_1469fe800);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe7f8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe7e8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae17b0(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adcd80 FUN_141adcd80 body=423 status=ok
// SIG undefined FUN_141adcd80(void)

bool FUN_141adcd80(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  
  lVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_1469febb0) && (_Init_thread_header(&DAT_1469febb0), DAT_1469febb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar3 = lVar5;
    if (plVar4 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469feba8 = lVar3;
    _Init_thread_footer(&DAT_1469febb0);
  }
  if ((*piVar6 < DAT_1469febc0) && (_Init_thread_header(&DAT_1469febc0), DAT_1469febc0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469febb8 = lVar5;
    _Init_thread_footer(&DAT_1469febc0);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469febb8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469feba8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  return 1 < iVar2;
}



// FUNCTION 141adcf30 FUN_141adcf30 body=460 status=ok
// SIG undefined FUN_141adcf30(void)

undefined8 FUN_141adcf30(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe780) && (_Init_thread_header(&DAT_1469fe780), DAT_1469fe780 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe778 = lVar4;
    _Init_thread_footer(&DAT_1469fe780);
  }
  if ((*piVar7 < DAT_1469fe790) && (_Init_thread_header(&DAT_1469fe790), DAT_1469fe790 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe788 = lVar6;
    _Init_thread_footer(&DAT_1469fe790);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe788 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe778 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1510(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141add100 FUN_141add100 body=460 status=ok
// SIG undefined FUN_141add100(void)

undefined8 FUN_141add100(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe710) && (_Init_thread_header(&DAT_1469fe710), DAT_1469fe710 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe700 = lVar4;
    _Init_thread_footer(&DAT_1469fe710);
  }
  if ((*piVar7 < DAT_1469fe720) && (_Init_thread_header(&DAT_1469fe720), DAT_1469fe720 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe718 = lVar6;
    _Init_thread_footer(&DAT_1469fe720);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fe718 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe700 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1510(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141add2d0 FUN_141add2d0 body=395 status=ok
// SIG undefined FUN_141add2d0(void)

ulonglong FUN_141add2d0(undefined8 param_1,longlong *param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  
  lVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_1469fec70) && (_Init_thread_header(&DAT_1469fec70), DAT_1469fec70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar3 = lVar5;
    if (plVar4 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fec68 = lVar3;
    _Init_thread_footer(&DAT_1469fec70);
  }
  if ((*piVar6 < DAT_1469fec80) && (_Init_thread_header(&DAT_1469fec80), DAT_1469fec80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fec78 = lVar5;
    _Init_thread_footer(&DAT_1469fec80);
  }
  uVar2 = (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fec78 != 0) && (uVar2 = FUN_1415ad720(&DAT_1468e2448), (char)uVar2 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT44(extraout_var,DVar1);
  }
  if (((DAT_1469fec68 != 0) && (uVar2 = FUN_1415ad720(&DAT_1468e2448), (char)uVar2 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT44(extraout_var_00,DVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141add460 FUN_141add460 body=460 status=ok
// SIG undefined FUN_141add460(void)

undefined8 FUN_141add460(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fecd0) && (_Init_thread_header(&DAT_1469fecd0), DAT_1469fecd0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fecc8 = lVar4;
    _Init_thread_footer(&DAT_1469fecd0);
  }
  if ((*piVar7 < DAT_1469fece0) && (_Init_thread_header(&DAT_1469fece0), DAT_1469fece0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fecd8 = lVar6;
    _Init_thread_footer(&DAT_1469fece0);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fecd8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fecc8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141add800(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141add630 FUN_141add630 body=460 status=ok
// SIG undefined FUN_141add630(void)

undefined8 FUN_141add630(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fec10) && (_Init_thread_header(&DAT_1469fec10), DAT_1469fec10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fec08 = lVar4;
    _Init_thread_footer(&DAT_1469fec10);
  }
  if ((*piVar7 < DAT_1469fec20) && (_Init_thread_header(&DAT_1469fec20), DAT_1469fec20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fec18 = lVar6;
    _Init_thread_footer(&DAT_1469fec20);
  }
  (**(code **)(*param_2 + 0x1e8))(param_2);
  if (((DAT_1469fec18 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fec08 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((iVar2 < 2) || (cVar1 = FUN_141ae1bd0(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


