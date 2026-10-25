// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ba5ee0 FUN_141ba5ee0 body=185 status=ok
// SIG undefined FUN_141ba5ee0(void)

void FUN_141ba5ee0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba5fa0 FUN_141ba5fa0 body=191 status=ok
// SIG undefined FUN_141ba5fa0(void)

void FUN_141ba5fa0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba6060 FUN_141ba6060 body=191 status=ok
// SIG undefined FUN_141ba6060(void)

void FUN_141ba6060(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba6120 FUN_141ba6120 body=191 status=ok
// SIG undefined FUN_141ba6120(void)

void FUN_141ba6120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba61e0 FUN_141ba61e0 body=191 status=ok
// SIG undefined FUN_141ba61e0(void)

void FUN_141ba61e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba62a0 FUN_141ba62a0 body=185 status=ok
// SIG undefined FUN_141ba62a0(void)

void FUN_141ba62a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba6360 FUN_141ba6360 body=182 status=ok
// SIG undefined FUN_141ba6360(void)

void FUN_141ba6360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba6420 FUN_141ba6420 body=191 status=ok
// SIG undefined FUN_141ba6420(void)

void FUN_141ba6420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba64e0 FUN_141ba64e0 body=191 status=ok
// SIG undefined FUN_141ba64e0(void)

void FUN_141ba64e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba65a0 FUN_141ba65a0 body=191 status=ok
// SIG undefined FUN_141ba65a0(void)

void FUN_141ba65a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba6660 FUN_141ba6660 body=191 status=ok
// SIG undefined FUN_141ba6660(void)

void FUN_141ba6660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba6720 FUN_141ba6720 body=185 status=ok
// SIG undefined FUN_141ba6720(void)

void FUN_141ba6720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba67e0 FUN_141ba67e0 body=182 status=ok
// SIG undefined FUN_141ba67e0(void)

void FUN_141ba67e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba68a0 FUN_141ba68a0 body=188 status=ok
// SIG undefined FUN_141ba68a0(void)

void FUN_141ba68a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba6960 FUN_141ba6960 body=188 status=ok
// SIG undefined FUN_141ba6960(void)

void FUN_141ba6960(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba6a20 FUN_141ba6a20 body=188 status=ok
// SIG undefined FUN_141ba6a20(void)

void FUN_141ba6a20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba6ae0 FUN_141ba6ae0 body=188 status=ok
// SIG undefined FUN_141ba6ae0(void)

void FUN_141ba6ae0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba6ba0 FUN_141ba6ba0 body=182 status=ok
// SIG undefined FUN_141ba6ba0(void)

void FUN_141ba6ba0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba6c60 FUN_141ba6c60 body=179 status=ok
// SIG undefined FUN_141ba6c60(void)

void FUN_141ba6c60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba6d20 FUN_141ba6d20 body=194 status=ok
// SIG undefined FUN_141ba6d20(void)

void FUN_141ba6d20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba6df0 FUN_141ba6df0 body=194 status=ok
// SIG undefined FUN_141ba6df0(void)

void FUN_141ba6df0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba6ec0 FUN_141ba6ec0 body=194 status=ok
// SIG undefined FUN_141ba6ec0(void)

void FUN_141ba6ec0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba6f90 FUN_141ba6f90 body=194 status=ok
// SIG undefined FUN_141ba6f90(void)

void FUN_141ba6f90(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba7060 FUN_141ba7060 body=188 status=ok
// SIG undefined FUN_141ba7060(void)

void FUN_141ba7060(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba7120 FUN_141ba7120 body=185 status=ok
// SIG undefined FUN_141ba7120(void)

void FUN_141ba7120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba71e0 FUN_141ba71e0 body=191 status=ok
// SIG undefined FUN_141ba71e0(void)

void FUN_141ba71e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba72a0 FUN_141ba72a0 body=191 status=ok
// SIG undefined FUN_141ba72a0(void)

void FUN_141ba72a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba7360 FUN_141ba7360 body=191 status=ok
// SIG undefined FUN_141ba7360(void)

void FUN_141ba7360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba7420 FUN_141ba7420 body=191 status=ok
// SIG undefined FUN_141ba7420(void)

void FUN_141ba7420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba74e0 FUN_141ba74e0 body=185 status=ok
// SIG undefined FUN_141ba74e0(void)

void FUN_141ba74e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba75a0 FUN_141ba75a0 body=182 status=ok
// SIG undefined FUN_141ba75a0(void)

void FUN_141ba75a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba7660 FUN_141ba7660 body=191 status=ok
// SIG undefined FUN_141ba7660(void)

void FUN_141ba7660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba7720 FUN_141ba7720 body=191 status=ok
// SIG undefined FUN_141ba7720(void)

void FUN_141ba7720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba77e0 FUN_141ba77e0 body=191 status=ok
// SIG undefined FUN_141ba77e0(void)

void FUN_141ba77e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba78a0 FUN_141ba78a0 body=191 status=ok
// SIG undefined FUN_141ba78a0(void)

void FUN_141ba78a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba7960 FUN_141ba7960 body=185 status=ok
// SIG undefined FUN_141ba7960(void)

void FUN_141ba7960(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba7a20 FUN_141ba7a20 body=182 status=ok
// SIG undefined FUN_141ba7a20(void)

void FUN_141ba7a20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba7ae0 FUN_141ba7ae0 body=188 status=ok
// SIG undefined FUN_141ba7ae0(void)

void FUN_141ba7ae0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba7ba0 FUN_141ba7ba0 body=188 status=ok
// SIG undefined FUN_141ba7ba0(void)

void FUN_141ba7ba0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba7c60 FUN_141ba7c60 body=188 status=ok
// SIG undefined FUN_141ba7c60(void)

void FUN_141ba7c60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba7d20 FUN_141ba7d20 body=188 status=ok
// SIG undefined FUN_141ba7d20(void)

void FUN_141ba7d20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba7de0 FUN_141ba7de0 body=182 status=ok
// SIG undefined FUN_141ba7de0(void)

void FUN_141ba7de0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba7ea0 FUN_141ba7ea0 body=179 status=ok
// SIG undefined FUN_141ba7ea0(void)

void FUN_141ba7ea0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba7f60 FUN_141ba7f60 body=194 status=ok
// SIG undefined FUN_141ba7f60(void)

void FUN_141ba7f60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba8030 FUN_141ba8030 body=194 status=ok
// SIG undefined FUN_141ba8030(void)

void FUN_141ba8030(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba8100 FUN_141ba8100 body=194 status=ok
// SIG undefined FUN_141ba8100(void)

void FUN_141ba8100(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba81d0 FUN_141ba81d0 body=194 status=ok
// SIG undefined FUN_141ba81d0(void)

void FUN_141ba81d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba82a0 FUN_141ba82a0 body=188 status=ok
// SIG undefined FUN_141ba82a0(void)

void FUN_141ba82a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba8360 FUN_141ba8360 body=185 status=ok
// SIG undefined FUN_141ba8360(void)

void FUN_141ba8360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba8420 FUN_141ba8420 body=191 status=ok
// SIG undefined FUN_141ba8420(void)

void FUN_141ba8420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba84e0 FUN_141ba84e0 body=191 status=ok
// SIG undefined FUN_141ba84e0(void)

void FUN_141ba84e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba85a0 FUN_141ba85a0 body=191 status=ok
// SIG undefined FUN_141ba85a0(void)

void FUN_141ba85a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba8660 FUN_141ba8660 body=191 status=ok
// SIG undefined FUN_141ba8660(void)

void FUN_141ba8660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba8720 FUN_141ba8720 body=185 status=ok
// SIG undefined FUN_141ba8720(void)

void FUN_141ba8720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba87e0 FUN_141ba87e0 body=182 status=ok
// SIG undefined FUN_141ba87e0(void)

void FUN_141ba87e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba88a0 FUN_141ba88a0 body=200 status=ok
// SIG undefined FUN_141ba88a0(void)

void FUN_141ba88a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba8970 FUN_141ba8970 body=200 status=ok
// SIG undefined FUN_141ba8970(void)

void FUN_141ba8970(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba8a40 FUN_141ba8a40 body=200 status=ok
// SIG undefined FUN_141ba8a40(void)

void FUN_141ba8a40(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba8b10 FUN_141ba8b10 body=200 status=ok
// SIG undefined FUN_141ba8b10(void)

void FUN_141ba8b10(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba8be0 FUN_141ba8be0 body=194 status=ok
// SIG undefined FUN_141ba8be0(void)

void FUN_141ba8be0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba8cb0 FUN_141ba8cb0 body=191 status=ok
// SIG undefined FUN_141ba8cb0(void)

void FUN_141ba8cb0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba8d70 FUN_141ba8d70 body=197 status=ok
// SIG undefined FUN_141ba8d70(void)

void FUN_141ba8d70(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba8e40 FUN_141ba8e40 body=197 status=ok
// SIG undefined FUN_141ba8e40(void)

void FUN_141ba8e40(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba8f10 FUN_141ba8f10 body=197 status=ok
// SIG undefined FUN_141ba8f10(void)

void FUN_141ba8f10(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba8fe0 FUN_141ba8fe0 body=197 status=ok
// SIG undefined FUN_141ba8fe0(void)

void FUN_141ba8fe0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba90b0 FUN_141ba90b0 body=191 status=ok
// SIG undefined FUN_141ba90b0(void)

void FUN_141ba90b0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba9170 FUN_141ba9170 body=188 status=ok
// SIG undefined FUN_141ba9170(void)

void FUN_141ba9170(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba9230 FUN_141ba9230 body=203 status=ok
// SIG undefined FUN_141ba9230(void)

void FUN_141ba9230(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba9300 FUN_141ba9300 body=203 status=ok
// SIG undefined FUN_141ba9300(void)

void FUN_141ba9300(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba93d0 FUN_141ba93d0 body=203 status=ok
// SIG undefined FUN_141ba93d0(void)

void FUN_141ba93d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba94a0 FUN_141ba94a0 body=203 status=ok
// SIG undefined FUN_141ba94a0(void)

void FUN_141ba94a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba9570 FUN_141ba9570 body=197 status=ok
// SIG undefined FUN_141ba9570(void)

void FUN_141ba9570(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba9640 FUN_141ba9640 body=194 status=ok
// SIG undefined FUN_141ba9640(void)

void FUN_141ba9640(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba9710 FUN_141ba9710 body=200 status=ok
// SIG undefined FUN_141ba9710(void)

void FUN_141ba9710(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba97e0 FUN_141ba97e0 body=200 status=ok
// SIG undefined FUN_141ba97e0(void)

void FUN_141ba97e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba98b0 FUN_141ba98b0 body=200 status=ok
// SIG undefined FUN_141ba98b0(void)

void FUN_141ba98b0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba9980 FUN_141ba9980 body=200 status=ok
// SIG undefined FUN_141ba9980(void)

void FUN_141ba9980(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba9a50 FUN_141ba9a50 body=194 status=ok
// SIG undefined FUN_141ba9a50(void)

void FUN_141ba9a50(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba9b20 FUN_141ba9b20 body=191 status=ok
// SIG undefined FUN_141ba9b20(void)

void FUN_141ba9b20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba9be0 FUN_141ba9be0 body=191 status=ok
// SIG undefined FUN_141ba9be0(void)

void FUN_141ba9be0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba9ca0 FUN_141ba9ca0 body=191 status=ok
// SIG undefined FUN_141ba9ca0(void)

void FUN_141ba9ca0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba9d60 FUN_141ba9d60 body=191 status=ok
// SIG undefined FUN_141ba9d60(void)

void FUN_141ba9d60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba9e20 FUN_141ba9e20 body=191 status=ok
// SIG undefined FUN_141ba9e20(void)

void FUN_141ba9e20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba9ee0 FUN_141ba9ee0 body=185 status=ok
// SIG undefined FUN_141ba9ee0(void)

void FUN_141ba9ee0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba9fa0 FUN_141ba9fa0 body=182 status=ok
// SIG undefined FUN_141ba9fa0(void)

void FUN_141ba9fa0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baa060 FUN_141baa060 body=188 status=ok
// SIG undefined FUN_141baa060(void)

void FUN_141baa060(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baa120 FUN_141baa120 body=188 status=ok
// SIG undefined FUN_141baa120(void)

void FUN_141baa120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baa1e0 FUN_141baa1e0 body=188 status=ok
// SIG undefined FUN_141baa1e0(void)

void FUN_141baa1e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141baa2a0 FUN_141baa2a0 body=188 status=ok
// SIG undefined FUN_141baa2a0(void)

void FUN_141baa2a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141baa360 FUN_141baa360 body=182 status=ok
// SIG undefined FUN_141baa360(void)

void FUN_141baa360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141baa420 FUN_141baa420 body=179 status=ok
// SIG undefined FUN_141baa420(void)

void FUN_141baa420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baa4e0 FUN_141baa4e0 body=194 status=ok
// SIG undefined FUN_141baa4e0(void)

void FUN_141baa4e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baa5b0 FUN_141baa5b0 body=194 status=ok
// SIG undefined FUN_141baa5b0(void)

void FUN_141baa5b0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baa680 FUN_141baa680 body=194 status=ok
// SIG undefined FUN_141baa680(void)

void FUN_141baa680(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141baa750 FUN_141baa750 body=194 status=ok
// SIG undefined FUN_141baa750(void)

void FUN_141baa750(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141baa820 FUN_141baa820 body=188 status=ok
// SIG undefined FUN_141baa820(void)

void FUN_141baa820(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141baa8e0 FUN_141baa8e0 body=185 status=ok
// SIG undefined FUN_141baa8e0(void)

void FUN_141baa8e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baa9a0 FUN_141baa9a0 body=191 status=ok
// SIG undefined FUN_141baa9a0(void)

void FUN_141baa9a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baaa60 FUN_141baaa60 body=191 status=ok
// SIG undefined FUN_141baaa60(void)

void FUN_141baaa60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baab20 FUN_141baab20 body=191 status=ok
// SIG undefined FUN_141baab20(void)

void FUN_141baab20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141baabe0 FUN_141baabe0 body=191 status=ok
// SIG undefined FUN_141baabe0(void)

void FUN_141baabe0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141baaca0 FUN_141baaca0 body=185 status=ok
// SIG undefined FUN_141baaca0(void)

void FUN_141baaca0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141baad60 FUN_141baad60 body=182 status=ok
// SIG undefined FUN_141baad60(void)

void FUN_141baad60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baae20 FUN_141baae20 body=191 status=ok
// SIG undefined FUN_141baae20(void)

void FUN_141baae20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baaee0 FUN_141baaee0 body=191 status=ok
// SIG undefined FUN_141baaee0(void)

void FUN_141baaee0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baafa0 FUN_141baafa0 body=191 status=ok
// SIG undefined FUN_141baafa0(void)

void FUN_141baafa0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bab060 FUN_141bab060 body=191 status=ok
// SIG undefined FUN_141bab060(void)

void FUN_141bab060(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bab120 FUN_141bab120 body=185 status=ok
// SIG undefined FUN_141bab120(void)

void FUN_141bab120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bab1e0 FUN_141bab1e0 body=182 status=ok
// SIG undefined FUN_141bab1e0(void)

void FUN_141bab1e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bab2a0 FUN_141bab2a0 body=188 status=ok
// SIG undefined FUN_141bab2a0(void)

void FUN_141bab2a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bab360 FUN_141bab360 body=188 status=ok
// SIG undefined FUN_141bab360(void)

void FUN_141bab360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bab420 FUN_141bab420 body=188 status=ok
// SIG undefined FUN_141bab420(void)

void FUN_141bab420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bab4e0 FUN_141bab4e0 body=188 status=ok
// SIG undefined FUN_141bab4e0(void)

void FUN_141bab4e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bab5a0 FUN_141bab5a0 body=182 status=ok
// SIG undefined FUN_141bab5a0(void)

void FUN_141bab5a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bab660 FUN_141bab660 body=179 status=ok
// SIG undefined FUN_141bab660(void)

void FUN_141bab660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bab720 FUN_141bab720 body=194 status=ok
// SIG undefined FUN_141bab720(void)

void FUN_141bab720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bab7f0 FUN_141bab7f0 body=194 status=ok
// SIG undefined FUN_141bab7f0(void)

void FUN_141bab7f0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bab8c0 FUN_141bab8c0 body=194 status=ok
// SIG undefined FUN_141bab8c0(void)

void FUN_141bab8c0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bab990 FUN_141bab990 body=194 status=ok
// SIG undefined FUN_141bab990(void)

void FUN_141bab990(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141baba60 FUN_141baba60 body=188 status=ok
// SIG undefined FUN_141baba60(void)

void FUN_141baba60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141babb20 FUN_141babb20 body=185 status=ok
// SIG undefined FUN_141babb20(void)

void FUN_141babb20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141babbe0 FUN_141babbe0 body=191 status=ok
// SIG undefined FUN_141babbe0(void)

void FUN_141babbe0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141babca0 FUN_141babca0 body=191 status=ok
// SIG undefined FUN_141babca0(void)

void FUN_141babca0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141babd60 FUN_141babd60 body=191 status=ok
// SIG undefined FUN_141babd60(void)

void FUN_141babd60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141babe20 FUN_141babe20 body=191 status=ok
// SIG undefined FUN_141babe20(void)

void FUN_141babe20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141babee0 FUN_141babee0 body=185 status=ok
// SIG undefined FUN_141babee0(void)

void FUN_141babee0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141babfa0 FUN_141babfa0 body=182 status=ok
// SIG undefined FUN_141babfa0(void)

void FUN_141babfa0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bac060 FUN_141bac060 body=191 status=ok
// SIG undefined FUN_141bac060(void)

void FUN_141bac060(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bac120 FUN_141bac120 body=191 status=ok
// SIG undefined FUN_141bac120(void)

void FUN_141bac120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bac1e0 FUN_141bac1e0 body=191 status=ok
// SIG undefined FUN_141bac1e0(void)

void FUN_141bac1e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bac2a0 FUN_141bac2a0 body=191 status=ok
// SIG undefined FUN_141bac2a0(void)

void FUN_141bac2a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bac360 FUN_141bac360 body=185 status=ok
// SIG undefined FUN_141bac360(void)

void FUN_141bac360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bac420 FUN_141bac420 body=182 status=ok
// SIG undefined FUN_141bac420(void)

void FUN_141bac420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bac4e0 FUN_141bac4e0 body=188 status=ok
// SIG undefined FUN_141bac4e0(void)

void FUN_141bac4e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bac5a0 FUN_141bac5a0 body=188 status=ok
// SIG undefined FUN_141bac5a0(void)

void FUN_141bac5a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bac660 FUN_141bac660 body=188 status=ok
// SIG undefined FUN_141bac660(void)

void FUN_141bac660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bac720 FUN_141bac720 body=188 status=ok
// SIG undefined FUN_141bac720(void)

void FUN_141bac720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bac7e0 FUN_141bac7e0 body=182 status=ok
// SIG undefined FUN_141bac7e0(void)

void FUN_141bac7e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bac8a0 FUN_141bac8a0 body=179 status=ok
// SIG undefined FUN_141bac8a0(void)

void FUN_141bac8a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bac960 FUN_141bac960 body=194 status=ok
// SIG undefined FUN_141bac960(void)

void FUN_141bac960(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baca30 FUN_141baca30 body=194 status=ok
// SIG undefined FUN_141baca30(void)

void FUN_141baca30(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bacb00 FUN_141bacb00 body=194 status=ok
// SIG undefined FUN_141bacb00(void)

void FUN_141bacb00(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bacbd0 FUN_141bacbd0 body=194 status=ok
// SIG undefined FUN_141bacbd0(void)

void FUN_141bacbd0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bacca0 FUN_141bacca0 body=188 status=ok
// SIG undefined FUN_141bacca0(void)

void FUN_141bacca0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bacd60 FUN_141bacd60 body=185 status=ok
// SIG undefined FUN_141bacd60(void)

void FUN_141bacd60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bace20 FUN_141bace20 body=191 status=ok
// SIG undefined FUN_141bace20(void)

void FUN_141bace20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bacee0 FUN_141bacee0 body=191 status=ok
// SIG undefined FUN_141bacee0(void)

void FUN_141bacee0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bacfa0 FUN_141bacfa0 body=191 status=ok
// SIG undefined FUN_141bacfa0(void)

void FUN_141bacfa0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bad060 FUN_141bad060 body=191 status=ok
// SIG undefined FUN_141bad060(void)

void FUN_141bad060(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bad120 FUN_141bad120 body=185 status=ok
// SIG undefined FUN_141bad120(void)

void FUN_141bad120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bad1e0 FUN_141bad1e0 body=182 status=ok
// SIG undefined FUN_141bad1e0(void)

void FUN_141bad1e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bad2a0 FUN_141bad2a0 body=191 status=ok
// SIG undefined FUN_141bad2a0(void)

void FUN_141bad2a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bad360 FUN_141bad360 body=191 status=ok
// SIG undefined FUN_141bad360(void)

void FUN_141bad360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bad420 FUN_141bad420 body=191 status=ok
// SIG undefined FUN_141bad420(void)

void FUN_141bad420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bad4e0 FUN_141bad4e0 body=191 status=ok
// SIG undefined FUN_141bad4e0(void)

void FUN_141bad4e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bad5a0 FUN_141bad5a0 body=185 status=ok
// SIG undefined FUN_141bad5a0(void)

void FUN_141bad5a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bad660 FUN_141bad660 body=182 status=ok
// SIG undefined FUN_141bad660(void)

void FUN_141bad660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bad720 FUN_141bad720 body=188 status=ok
// SIG undefined FUN_141bad720(void)

void FUN_141bad720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bad7e0 FUN_141bad7e0 body=188 status=ok
// SIG undefined FUN_141bad7e0(void)

void FUN_141bad7e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bad8a0 FUN_141bad8a0 body=188 status=ok
// SIG undefined FUN_141bad8a0(void)

void FUN_141bad8a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bad960 FUN_141bad960 body=188 status=ok
// SIG undefined FUN_141bad960(void)

void FUN_141bad960(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bada20 FUN_141bada20 body=182 status=ok
// SIG undefined FUN_141bada20(void)

void FUN_141bada20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141badae0 FUN_141badae0 body=179 status=ok
// SIG undefined FUN_141badae0(void)

void FUN_141badae0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141badba0 FUN_141badba0 body=194 status=ok
// SIG undefined FUN_141badba0(void)

void FUN_141badba0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141badc70 FUN_141badc70 body=194 status=ok
// SIG undefined FUN_141badc70(void)

void FUN_141badc70(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141badd40 FUN_141badd40 body=194 status=ok
// SIG undefined FUN_141badd40(void)

void FUN_141badd40(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bade10 FUN_141bade10 body=194 status=ok
// SIG undefined FUN_141bade10(void)

void FUN_141bade10(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141badee0 FUN_141badee0 body=188 status=ok
// SIG undefined FUN_141badee0(void)

void FUN_141badee0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141badfa0 FUN_141badfa0 body=185 status=ok
// SIG undefined FUN_141badfa0(void)

void FUN_141badfa0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bae060 FUN_141bae060 body=191 status=ok
// SIG undefined FUN_141bae060(void)

void FUN_141bae060(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bae120 FUN_141bae120 body=191 status=ok
// SIG undefined FUN_141bae120(void)

void FUN_141bae120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bae1e0 FUN_141bae1e0 body=191 status=ok
// SIG undefined FUN_141bae1e0(void)

void FUN_141bae1e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bae2a0 FUN_141bae2a0 body=191 status=ok
// SIG undefined FUN_141bae2a0(void)

void FUN_141bae2a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bae360 FUN_141bae360 body=185 status=ok
// SIG undefined FUN_141bae360(void)

void FUN_141bae360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bae420 FUN_141bae420 body=182 status=ok
// SIG undefined FUN_141bae420(void)

void FUN_141bae420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bae4e0 FUN_141bae4e0 body=191 status=ok
// SIG undefined FUN_141bae4e0(void)

void FUN_141bae4e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bae5a0 FUN_141bae5a0 body=191 status=ok
// SIG undefined FUN_141bae5a0(void)

void FUN_141bae5a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bae660 FUN_141bae660 body=191 status=ok
// SIG undefined FUN_141bae660(void)

void FUN_141bae660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bae720 FUN_141bae720 body=191 status=ok
// SIG undefined FUN_141bae720(void)

void FUN_141bae720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bae7e0 FUN_141bae7e0 body=185 status=ok
// SIG undefined FUN_141bae7e0(void)

void FUN_141bae7e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bae8a0 FUN_141bae8a0 body=182 status=ok
// SIG undefined FUN_141bae8a0(void)

void FUN_141bae8a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bae960 FUN_141bae960 body=188 status=ok
// SIG undefined FUN_141bae960(void)

void FUN_141bae960(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baea20 FUN_141baea20 body=188 status=ok
// SIG undefined FUN_141baea20(void)

void FUN_141baea20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baeae0 FUN_141baeae0 body=188 status=ok
// SIG undefined FUN_141baeae0(void)

void FUN_141baeae0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141baeba0 FUN_141baeba0 body=188 status=ok
// SIG undefined FUN_141baeba0(void)

void FUN_141baeba0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141baec60 FUN_141baec60 body=182 status=ok
// SIG undefined FUN_141baec60(void)

void FUN_141baec60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141baed20 FUN_141baed20 body=179 status=ok
// SIG undefined FUN_141baed20(void)

void FUN_141baed20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baede0 FUN_141baede0 body=194 status=ok
// SIG undefined FUN_141baede0(void)

void FUN_141baede0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baeeb0 FUN_141baeeb0 body=194 status=ok
// SIG undefined FUN_141baeeb0(void)

void FUN_141baeeb0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baef80 FUN_141baef80 body=194 status=ok
// SIG undefined FUN_141baef80(void)

void FUN_141baef80(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141baf050 FUN_141baf050 body=194 status=ok
// SIG undefined FUN_141baf050(void)

void FUN_141baf050(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141baf120 FUN_141baf120 body=188 status=ok
// SIG undefined FUN_141baf120(void)

void FUN_141baf120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141baf1e0 FUN_141baf1e0 body=185 status=ok
// SIG undefined FUN_141baf1e0(void)

void FUN_141baf1e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baf2a0 FUN_141baf2a0 body=191 status=ok
// SIG undefined FUN_141baf2a0(void)

void FUN_141baf2a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baf360 FUN_141baf360 body=191 status=ok
// SIG undefined FUN_141baf360(void)

void FUN_141baf360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baf420 FUN_141baf420 body=191 status=ok
// SIG undefined FUN_141baf420(void)

void FUN_141baf420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141baf4e0 FUN_141baf4e0 body=191 status=ok
// SIG undefined FUN_141baf4e0(void)

void FUN_141baf4e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141baf5a0 FUN_141baf5a0 body=185 status=ok
// SIG undefined FUN_141baf5a0(void)

void FUN_141baf5a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141baf660 FUN_141baf660 body=182 status=ok
// SIG undefined FUN_141baf660(void)

void FUN_141baf660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baf720 FUN_141baf720 body=191 status=ok
// SIG undefined FUN_141baf720(void)

void FUN_141baf720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141baf7e0 FUN_141baf7e0 body=191 status=ok
// SIG undefined FUN_141baf7e0(void)

void FUN_141baf7e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141baf8a0 FUN_141baf8a0 body=191 status=ok
// SIG undefined FUN_141baf8a0(void)

void FUN_141baf8a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141baf960 FUN_141baf960 body=191 status=ok
// SIG undefined FUN_141baf960(void)

void FUN_141baf960(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bafa20 FUN_141bafa20 body=185 status=ok
// SIG undefined FUN_141bafa20(void)

void FUN_141bafa20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bafae0 FUN_141bafae0 body=182 status=ok
// SIG undefined FUN_141bafae0(void)

void FUN_141bafae0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bafba0 FUN_141bafba0 body=188 status=ok
// SIG undefined FUN_141bafba0(void)

void FUN_141bafba0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bafc60 FUN_141bafc60 body=188 status=ok
// SIG undefined FUN_141bafc60(void)

void FUN_141bafc60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bafd20 FUN_141bafd20 body=188 status=ok
// SIG undefined FUN_141bafd20(void)

void FUN_141bafd20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bafde0 FUN_141bafde0 body=188 status=ok
// SIG undefined FUN_141bafde0(void)

void FUN_141bafde0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bafea0 FUN_141bafea0 body=182 status=ok
// SIG undefined FUN_141bafea0(void)

void FUN_141bafea0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141baff60 FUN_141baff60 body=179 status=ok
// SIG undefined FUN_141baff60(void)

void FUN_141baff60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bb0020 FUN_141bb0020 body=194 status=ok
// SIG undefined FUN_141bb0020(void)

void FUN_141bb0020(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bb00f0 FUN_141bb00f0 body=194 status=ok
// SIG undefined FUN_141bb00f0(void)

void FUN_141bb00f0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bb01c0 FUN_141bb01c0 body=194 status=ok
// SIG undefined FUN_141bb01c0(void)

void FUN_141bb01c0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bb0290 FUN_141bb0290 body=194 status=ok
// SIG undefined FUN_141bb0290(void)

void FUN_141bb0290(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bb0360 FUN_141bb0360 body=188 status=ok
// SIG undefined FUN_141bb0360(void)

void FUN_141bb0360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bb0420 FUN_141bb0420 body=185 status=ok
// SIG undefined FUN_141bb0420(void)

void FUN_141bb0420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bb04e0 FUN_141bb04e0 body=191 status=ok
// SIG undefined FUN_141bb04e0(void)

void FUN_141bb04e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bb05a0 FUN_141bb05a0 body=191 status=ok
// SIG undefined FUN_141bb05a0(void)

void FUN_141bb05a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141bb0660 FUN_141bb0660 body=191 status=ok
// SIG undefined FUN_141bb0660(void)

void FUN_141bb0660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141bb0720 FUN_141bb0720 body=191 status=ok
// SIG undefined FUN_141bb0720(void)

void FUN_141bb0720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141bb07e0 FUN_141bb07e0 body=185 status=ok
// SIG undefined FUN_141bb07e0(void)

void FUN_141bb07e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141bb08a0 FUN_141bb08a0 body=182 status=ok
// SIG undefined FUN_141bb08a0(void)

void FUN_141bb08a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141bb0960 FUN_141bb0960 body=273 status=ok
// SIG undefined FUN_141bb0960(void)

void FUN_141bb0960(undefined4 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  FUN_141ac7cb0();
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = UMaterialShaderQualitySettings::Get();
  lVar3 = UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings(uVar2,param_1);
  lVar3 = (longlong)iVar1 * 7 + lVar3;
  uVar4 = 1;
  if ((*(char *)(lVar3 + 0x28) == '\0') || (*(char *)(lVar3 + 0x29) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"MOBILE_QL_FORCE_FULLY_ROUGH",uVar2);
  if ((*(char *)(lVar3 + 0x28) == '\0') || (*(char *)(lVar3 + 0x2a) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_3,L"MOBILE_QL_FORCE_NONMETAL",uVar2);
  if ((*(char *)(lVar3 + 0x28) == '\0') || (*(char *)(lVar3 + 0x2b) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_3,L"QL_FORCEDISABLE_LM_DIRECTIONALITY",uVar2);
  if ((*(char *)(lVar3 + 0x28) == '\0') || (*(char *)(lVar3 + 0x2c) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_3,L"MOBILE_QL_FORCE_LQ_REFLECTIONS",uVar2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MOBILE_CSM_QUALITY",*(undefined1 *)(lVar3 + 0x2e))
  ;
  if ((*(char *)(lVar3 + 0x28) == '\0') || (*(char *)(lVar3 + 0x2d) == '\0')) {
    uVar4 = 0;
  }
  FShaderCompilerDefinitions::SetDefine(param_3,L"MOBILE_QL_DISABLE_MATERIAL_NORMAL",uVar4);
  return;
}



// FUNCTION 141bb0a80 FUN_141bb0a80 body=107 status=ok
// SIG undefined FUN_141bb0a80(void)

void FUN_141bb0a80(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb0af0 FUN_141bb0af0 body=110 status=ok
// SIG undefined FUN_141bb0af0(void)

void FUN_141bb0af0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb0b60 FUN_141bb0b60 body=94 status=ok
// SIG undefined FUN_141bb0b60(void)

void FUN_141bb0b60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb0bc0 FUN_141bb0bc0 body=97 status=ok
// SIG undefined FUN_141bb0bc0(void)

void FUN_141bb0bc0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb0c30 FUN_141bb0c30 body=107 status=ok
// SIG undefined FUN_141bb0c30(void)

void FUN_141bb0c30(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb0ca0 FUN_141bb0ca0 body=110 status=ok
// SIG undefined FUN_141bb0ca0(void)

void FUN_141bb0ca0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb0d10 FUN_141bb0d10 body=107 status=ok
// SIG undefined FUN_141bb0d10(void)

void FUN_141bb0d10(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb0d80 FUN_141bb0d80 body=110 status=ok
// SIG undefined FUN_141bb0d80(void)

void FUN_141bb0d80(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1b80(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb0df0 FUN_141bb0df0 body=107 status=ok
// SIG undefined FUN_141bb0df0(void)

void FUN_141bb0df0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb0e60 FUN_141bb0e60 body=110 status=ok
// SIG undefined FUN_141bb0e60(void)

void FUN_141bb0e60(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1720(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb0ed0 FUN_141bb0ed0 body=116 status=ok
// SIG undefined FUN_141bb0ed0(void)

void FUN_141bb0ed0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb0f50 FUN_141bb0f50 body=119 status=ok
// SIG undefined FUN_141bb0f50(void)

void FUN_141bb0f50(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"MOVABLE_DIRECTIONAL_LIGHT",&DAT_143f591f0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb0fd0 FUN_141bb0fd0 body=107 status=ok
// SIG undefined FUN_141bb0fd0(void)

void FUN_141bb0fd0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb1040 FUN_141bb1040 body=110 status=ok
// SIG undefined FUN_141bb1040(void)

void FUN_141bb1040(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1ce0(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb10b0 FUN_141bb10b0 body=107 status=ok
// SIG undefined FUN_141bb10b0(void)

void FUN_141bb10b0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb1120 FUN_141bb1120 body=110 status=ok
// SIG undefined FUN_141bb1120(void)

void FUN_141bb1120(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e90(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb1190 FUN_141bb1190 body=107 status=ok
// SIG undefined FUN_141bb1190(void)

void FUN_141bb1190(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb1200 FUN_141bb1200 body=110 status=ok
// SIG undefined FUN_141bb1200(void)

void FUN_141bb1200(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1e40(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb1270 FUN_141bb1270 body=107 status=ok
// SIG undefined FUN_141bb1270(void)

void FUN_141bb1270(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb12e0 FUN_141bb12e0 body=110 status=ok
// SIG undefined FUN_141bb12e0(void)

void FUN_141bb12e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ba1e50(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb1350 FUN_141bb1350 body=107 status=ok
// SIG undefined FUN_141bb1350(void)

void FUN_141bb1350(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb13c0 FUN_141bb13c0 body=110 status=ok
// SIG undefined FUN_141bb13c0(void)

void FUN_141bb13c0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1880(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb1430 FUN_141bb1430 body=107 status=ok
// SIG undefined FUN_141bb1430(void)

void FUN_141bb1430(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  return;
}



// FUNCTION 141bb14a0 FUN_141bb14a0 body=110 status=ok
// SIG undefined FUN_141bb14a0(void)

void FUN_141bb14a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment(param_1,param_2,param_3);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  return;
}



// FUNCTION 141bb1530 ModifyCompilationEnvironment body=195 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FCachedPointIndirectLightingPolicy::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_144deba24,4);
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
  return;
}



// FUNCTION 141bb1600 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FLpvVisualiseBase::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}


