// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ce9b20 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<1,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9b80 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9be0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<2,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9c40 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<2,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9ca0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<2,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9d00 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<2,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9d60 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<2,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9dc0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<2,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9e20 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<3,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9e80 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<3,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9ee0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<3,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ce9f40 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<3,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ce9fa0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<3,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea000 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<3,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea060 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<4,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea0c0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<4,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea120 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<4,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea180 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<4,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea1e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<4,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea240 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<4,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea2a0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<5,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea300 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<5,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea360 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<5,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea3c0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<5,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea420 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<5,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea480 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<5,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea4e0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<6,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea540 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<6,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea5a0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<6,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea600 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<6,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea660 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<6,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea6c0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<6,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",6);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea720 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<7,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea780 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<7,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea7e0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<7,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea840 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<7,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea8a0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<7,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea900 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<7,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cea960 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<8,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cea9c0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<8,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceaa20 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<8,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceaa80 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<8,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceaae0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<8,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceab40 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<8,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceaba0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<9,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceac00 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<9,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceac60 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<9,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceacc0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<9,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cead20 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<9,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cead80 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<9,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",9);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceade0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<10,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceae40 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<10,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceaea0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<10,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceaf00 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<10,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceaf60 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<10,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceafc0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<10,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb020 ModifyCompilationEnvironment body=112 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<0,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ceb090 ModifyCompilationEnvironment body=109 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<0,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ceb100 ModifyCompilationEnvironment body=112 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<0,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ceb170 ModifyCompilationEnvironment body=109 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<0,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ceb1e0 ModifyCompilationEnvironment body=109 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<0,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ceb250 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  FUN_141a172f0(param_2,L"MAX_NUM_SAMPLES",0x80);
  return;
}



// FUNCTION 141ceb2c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<16,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb320 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<16,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb380 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<16,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb3e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<16,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb440 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<16,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb4a0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<16,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb500 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<17,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb560 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<17,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb5c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<17,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb620 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<17,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb680 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<17,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb6e0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<17,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x11);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb740 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<18,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb7a0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<18,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb800 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<18,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb860 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<18,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb8c0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<18,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb920 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<18,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x12);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceb980 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<19,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceb9e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<19,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceba40 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<19,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebaa0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<19,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cebb00 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<19,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebb60 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<19,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x13);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cebbc0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<20,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebc20 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<20,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cebc80 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<20,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebce0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<20,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cebd40 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<20,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebda0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<20,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x14);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cebe00 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<21,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebe60 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<21,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cebec0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<21,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebf20 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<21,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cebf80 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<21,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cebfe0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<21,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x15);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec040 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<22,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec0a0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<22,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec100 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<22,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec160 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<22,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec1c0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<22,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec220 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<22,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x16);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec280 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<23,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec2e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<23,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec340 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<23,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec3a0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<23,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec400 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<23,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec460 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<23,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x17);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec4c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<24,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec520 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<24,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec580 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<24,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec5e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<24,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec640 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<24,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec6a0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<24,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x18);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec700 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<25,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec760 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<25,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec7c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<25,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec820 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<25,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec880 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<25,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec8e0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<25,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x19);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cec940 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<26,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cec9a0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<26,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceca00 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<26,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceca60 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<26,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cecac0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<26,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cecb20 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<26,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1a);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cecb80 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<27,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cecbe0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<27,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cecc40 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<27,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cecca0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<27,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cecd00 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<27,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cecd60 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<27,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1b);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cecdc0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<28,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cece20 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<28,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cece80 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<28,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cecee0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<28,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cecf40 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<28,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cecfa0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<28,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1c);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced000 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<29,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced060 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<29,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced0c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<29,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced120 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<29,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced180 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<29,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced1e0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<29,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1d);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced240 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<30,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced2a0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<30,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced300 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<30,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced360 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<30,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced3c0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<30,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced420 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<30,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1e);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced480 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<31,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced4e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<31,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced540 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<31,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced5a0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<31,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced600 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<31,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced660 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<31,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x1f);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced6c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<32,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced720 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<32,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced780 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<32,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced7e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<32,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced840 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<32,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced8a0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<32,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced900 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<11,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ced960 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<11,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ced9c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<11,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141ceda20 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<11,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141ceda80 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<11,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cedae0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<11,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cedb40 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<12,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cedba0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<12,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cedc00 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<12,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cedc60 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<12,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cedcc0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<12,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cedd20 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<12,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xc);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cedd80 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<13,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cedde0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<13,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cede40 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<13,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cedea0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<13,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cedf00 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<13,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cedf60 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<13,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xd);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cedfc0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<14,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cee020 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<14,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cee080 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<14,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cee0e0 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<14,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cee140 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<14,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cee1a0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<14,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xe);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cee200 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<15,1,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cee260 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<15,1,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",1);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cee2c0 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<15,2,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cee320 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<15,2,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",2);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cee380 ModifyCompilationEnvironment body=91 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<15,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141cee3e0 ModifyCompilationEnvironment body=88 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterPS<15,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"NUM_SAMPLES",0xf);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMBINE_METHOD",0);
  FUN_141a172f0(param_2,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141cee840 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessUpscaleVS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"TESS_RECT_X",0x20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"TESS_RECT_Y",0x14);
  return;
}



// FUNCTION 141cee880 ModifyCompilationEnvironment body=124 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessVisualizeHDRPS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"USE_COLOR_MATRIX",1);
  FUN_141a172f0(param_2,L"USE_SHADOW_TINT",1);
  FUN_141a172f0(param_2,L"USE_CONTRAST",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_APPROXIMATE_SRGB",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYE_ADAPTATION_PARAMS_SIZE",4);
  return;
}



// FUNCTION 141cee900 FUN_141cee900 body=240 status=ok
// SIG undefined FUN_141cee900(void)

void FUN_141cee900(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"READ_QUAD_OVERDRAW",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"MAX_NUM_COMPLEXITY_COLORS",0xb);
  FShaderCompilerDefinitions::SetDefine(param_2,L"CS_RAMP",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"CS_LINEAR",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"CS_STAIR",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DVSM_None",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DVSM_ShaderComplexity",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DVSM_ShaderComplexityContainedQuadOverhead",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DVSM_ShaderComplexityBleedingQuadOverhead",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DVSM_QuadComplexity",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DVSM_VertexShaderComplexity",10);
  return;
}



// FUNCTION 141cee9f0 FUN_141cee9f0 body=245 status=ok
// SIG undefined FUN_141cee9f0(void)

void FUN_141cee9f0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = (longlong)*(int *)(param_1 + 4) / 2;
  uVar1 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
  uVar2 = (longlong)uVar1 / 2;
  uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
  uVar3 = (longlong)uVar2 / 2;
  uVar3 = (ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff;
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"CAS_SHARPEN_ONLY",*(int *)(param_1 + 4) % 2 == 1);
  FUN_141a172f0(param_2,L"CAS_QUALITY",(longlong)uVar1 % 2 & 0xffffffff);
  FUN_141a172f0(param_2,L"CAS_INPUT_MODE",(longlong)uVar2 % 2 & 0xffffffff);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SCENE_SCRGB_ENCODING",(int)((longlong)uVar3 % 2) == 1);
  uVar4 = (uint)((longlong)uVar3 / 2) & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCENE_PQ_ENCODING",uVar4 == 1);
  return;
}



// FUNCTION 141ceeaf0 FUN_141ceeaf0 body=197 status=ok
// SIG undefined FUN_141ceeaf0(void)

void FUN_141ceeaf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4) & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  lVar1 = (longlong)((int)*(uint *)(param_1 + 4) / 2);
  uVar2 = lVar1 / 2;
  uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
  FUN_141a172f0(param_2,L"CAS_QUALITY",uVar3);
  FUN_141a172f0(param_2,L"CAS_INPUT_MODE",lVar1 % 2 & 0xffffffff);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SCENE_SCRGB_ENCODING",(int)((longlong)uVar2 % 2) == 1);
  uVar3 = (uint)((longlong)uVar2 / 2) & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCENE_PQ_ENCODING",uVar3 == 1);
  return;
}



// FUNCTION 141ceebc0 FUN_141ceebc0 body=197 status=ok
// SIG undefined FUN_141ceebc0(void)

void FUN_141ceebc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4) & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  lVar1 = (longlong)((int)*(uint *)(param_1 + 4) / 2);
  uVar2 = lVar1 / 2;
  uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
  FUN_141a172f0(param_2,L"CAS_QUALITY",uVar3);
  FUN_141a172f0(param_2,L"CAS_INPUT_MODE",lVar1 % 2 & 0xffffffff);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SCENE_SCRGB_ENCODING",(int)((longlong)uVar2 % 2) == 1);
  uVar3 = (uint)((longlong)uVar2 / 2) & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCENE_PQ_ENCODING",uVar3 == 1);
  return;
}



// FUNCTION 141ceec90 NormalDistributionUnscaled body=308 status=ok
// SIG undefined NormalDistributionUnscaled(void)

float NormalDistributionUnscaled(float param_1,float param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  float _X;
  
  param_1 = ABS(param_1);
  if (*(int *)(DAT_146a61ca8 + 4) == 0) {
    fVar1 = _guard_xfg_dispatch_icall_nop(param_1 * param_1 * (-0.5 / (1.0 / param_2)));
    _X = 1.0 - (1.0 / (1.0 / param_2)) * param_1;
    if (param_4 <= 1.0) {
      if (_X <= 0.0) {
        _X = 0.0;
      }
      fVar1 = (_X - fVar1) * param_4 + fVar1;
    }
    else {
      if (_X <= 0.0) {
        _X = 0.0;
      }
      fVar1 = _guard_xfg_dispatch_icall_nop(_X,param_4);
    }
    return fVar1;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(param_1 * param_2 * param_1 * param_2 * -16.7);
  param_1 = 1.0 - param_1;
  if (1.0 < param_4) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(param_1,param_4);
    return fVar1;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return (param_1 - fVar1) * param_4 + fVar1;
}



// FUNCTION 141ceedd0 FUN_141ceedd0 body=26 status=ok
// SIG undefined FUN_141ceedd0(void)

void FUN_141ceedd0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141e02d40();
  *(undefined1 *)(param_1 + 0x3d2) = uVar1;
  return;
}



// FUNCTION 141ceedf0 FUN_141ceedf0 body=2913 status=ok
// SIG undefined FUN_141ceedf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141ceedf0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  undefined8 local_350;
  undefined8 local_348;
  float local_340;
  float local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong local_320;
  undefined4 local_318;
  undefined4 local_310;
  byte local_308;
  int local_304;
  undefined8 local_300;
  undefined8 local_2f8;
  uint local_2f0;
  uint local_2ec;
  ulonglong local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 *local_2c8;
  int local_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int local_2a8 [4];
  undefined8 local_298;
  undefined *local_288;
  int local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong *local_260;
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208 [3];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  int local_1d0;
  undefined *local_1c8;
  int local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  int local_194;
  undefined1 local_188 [48];
  int local_158;
  int local_154;
  undefined1 local_148 [48];
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  bVar8 = false;
  local_2e8 = local_2e8 & 0xffffffff00000000;
  local_260 = param_1;
  FViewInfo::RequiresSecondaryUpscale(*param_2);
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0);
  if ((plVar10 != (longlong *)0x0) && (plVar16 = (longlong *)*plVar10, plVar16 != (longlong *)0x0))
  {
    (**(code **)(*plVar16 + 0x38))(plVar16,(int)plVar10[1]);
  }
  local_2c8 = (undefined8 *)FUN_141cf3cd0(param_1 + 4,param_2);
  local_258 = (int)param_2[1];
  iStack_254 = *(int *)((longlong)param_2 + 0xc);
  local_288 = (undefined *)param_2[1];
  iStack_250 = (int)param_2[2];
  iStack_24c = *(int *)((longlong)param_2 + 0x14);
  lVar12 = *param_2;
  iVar1 = *(int *)(lVar12 + 0x368);
  iVar5 = *(int *)(lVar12 + 0x36c);
  local_298 = *(undefined8 *)(lVar12 + 0x368);
  iVar6 = *(int *)(lVar12 + 0x370);
  iVar7 = *(int *)(lVar12 + 0x374);
  iVar21 = (int)*(undefined8 *)(lVar12 + 0x370);
  iVar20 = iStack_250 - local_258;
  local_304 = iVar6 - iVar1;
  local_300 = CONCAT44(iStack_24c - iStack_254,iVar20);
  uVar2 = local_300;
  local_2f8 = CONCAT44(iVar7 - iVar5,local_304);
  local_1f0 = local_2f8;
  local_1e8 = local_300;
  if ((iVar20 != local_304) || (local_308 = 1, iStack_24c - iStack_254 != iVar7 - iVar5)) {
    local_308 = 0;
  }
  iVar18 = *(int *)(DAT_146a613f8 + 4);
  iVar17 = 0;
  if ((-1 < iVar18) && (iVar17 = 1, iVar18 < 1)) {
    iVar17 = iVar18;
  }
  local_2e0 = CONCAT44(local_2e0._4_4_,iVar17);
  local_2b8 = iVar1;
  iStack_2b4 = iVar5;
  iStack_2b0 = iVar6;
  iStack_2ac = iVar7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a646c8) && (_Init_thread_header(&DAT_146a646c8), DAT_146a646c8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar10 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    if (plVar10 == (longlong *)0x0) {
      DAT_146a646c0 = 0;
    }
    else {
      DAT_146a646c0 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    _Init_thread_footer(&DAT_146a646c8);
  }
  bVar4 = *(int *)(DAT_146a646c0 + 4) - 5U < 2;
  if (bVar4) {
    iVar18 = 2;
  }
  else {
    iVar18 = 0;
  }
  local_2ec = (uint)bVar4;
  bVar4 = *(int *)(DAT_146a646c0 + 4) - 3U < 2;
  iVar19 = 0;
  if (bVar4) {
    iVar19 = 4;
  }
  local_2f0 = (uint)bVar4;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    lVar12 = param_2[0xc];
    local_288 = &DAT_146a615f0;
    local_280 = (uint)local_308 + (iVar17 + ((int)param_1[0x15] + iVar18 + iVar19) * 2) * 2;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar12 + 0x38,&local_2e0,&local_288);
    if ((int)local_2e0 == -1) {
      lVar12 = 0;
    }
    else {
      lVar12 = (longlong)(int)local_2e0 * 0x20 + *(longlong *)(lVar12 + 0x38);
    }
    plVar10 = (longlong *)(lVar12 + 0x10);
    if (lVar12 == 0) {
      plVar10 = (longlong *)0x0;
    }
    lVar12 = *plVar10;
    lVar14 = *(longlong *)(lVar12 + 0x48);
    if (*(char *)(lVar14 + 0x28) == '\0') {
      FUN_1419f3850(lVar14);
    }
    uVar2 = *(undefined8 *)(lVar14 + 0x60);
    lVar14 = param_2[8];
    FRHIComputeShader::UpdateStats(uVar2);
    puVar13 = (undefined8 *)(*(longlong *)(lVar14 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 3;
    if (*(undefined8 **)(lVar14 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar14 + 0x30,0x20);
      puVar13 = (undefined8 *)(*(longlong *)(lVar14 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 3;
    }
    *(undefined8 **)(lVar14 + 0x30) = puVar11;
    *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
    **(undefined8 **)(lVar14 + 8) = puVar13;
    *(undefined8 **)(lVar14 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    puVar13[2] = uVar2;
    *puVar13 = &PTR_LAB_144d91e50;
    local_358 = &local_1f0;
    local_350 = local_2c8;
    FUN_141c96b00(lVar12,param_2[8],param_2,&local_1e8);
    goto LAB_141cef884;
  }
  local_1e0 = 0;
  FUN_141a19150(param_2[8],*local_2c8,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1e0);
  local_1a8 = iVar1;
  iStack_1a4 = iVar5;
  iStack_1a0 = iVar6;
  iStack_19c = iVar7;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2);
  lVar12 = param_2[0xc];
  local_1b8 = &DAT_146a51f90;
  local_1b0 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar12 + 0x38,local_2a8,&local_1b8);
  if (local_2a8[0] == -1) {
    lVar12 = 0;
  }
  else {
    lVar12 = (longlong)local_2a8[0] * 0x20 + *(longlong *)(lVar12 + 0x38);
  }
  plVar10 = (longlong *)0x0;
  plVar16 = (longlong *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    plVar16 = plVar10;
  }
  lVar12 = *plVar16;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x26;
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
  local_118 = DAT_1464c2720;
  if (lVar12 == 0) {
    bVar8 = true;
    local_218 = 0;
    local_2e8 = CONCAT44(local_2e8._4_4_,1);
  }
  else {
    lVar14 = *(longlong *)(lVar12 + 0x48);
    if (*(char *)(lVar14 + 0x28) == '\0') {
      FUN_1419f3850(lVar14);
    }
    plVar10 = *(longlong **)(lVar14 + 0x38);
  }
  lVar14 = 0;
  plStack_110 = plVar10;
  if (bVar8) {
    local_2e8 = local_2e8 & 0xffffffff00000000;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_218);
  }
  lVar3 = param_2[0xc];
  local_cc = local_cc & 0xffffffff00000000;
  iVar1 = (int)local_2e0 + ((int)local_260[0x15] + (local_2ec + local_2f0 * 2) * 2) * 2;
  if (local_308 == 0) {
    local_1c8 = &DAT_146a61890;
    local_1c0 = iVar1;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x38,&local_2f0,&local_1c8);
    if (local_2f0 != 0xffffffff) {
      lVar14 = (longlong)(int)local_2f0 * 0x20 + *(longlong *)(lVar3 + 0x38);
    }
    plVar10 = (longlong *)(lVar14 + 0x10);
    uVar15 = 0;
    if (lVar14 == 0) {
      plVar10 = (longlong *)0x0;
    }
    lVar14 = *plVar10;
    if (lVar14 == 0) {
      uVar9 = (uint)local_2e8 | 4;
      local_208[1] = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar14 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      uVar15 = *(undefined8 *)(lVar3 + 0x40);
      uVar9 = (uint)local_2e8;
    }
    local_f8 = uVar15;
    if ((uVar9 & 4) != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_208 + 1);
    }
    FUN_141ed6ac0(param_2[8],&local_118,2,1);
    lVar3 = *(longlong *)(lVar14 + 0x48);
    local_2d0 = param_2[8];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_2d8 = *(longlong *)(lVar3 + 0x40);
    local_270 = local_2d8;
    FUN_141aa9690(lVar14,local_2d0,local_2d8,*(undefined8 *)(*param_2 + 0x20));
    local_358 = (undefined8 *)FUN_1404a0e20();
    local_348 = 0;
    local_350 = (undefined8 *)((ulonglong)local_350._4_4_ << 0x20);
    FUN_141ca99a0(lVar14 + 0xc0,local_2d0,&local_270,param_2);
    local_154 = local_2f8._4_4_;
    local_158 = local_304;
    local_358._0_4_ = (float)local_2f8._4_4_;
    FUN_141cdf580(local_148);
    if (*(char *)(lVar14 + 0x1c2) != '\0') {
      local_358._0_4_ = 0.0;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_268,&local_158,&DAT_146a61578);
      local_2f8 = local_268;
      if (local_268 != 0) {
        LOCK();
        *(int *)(local_268 + 8) = *(int *)(local_268 + 8) + 1;
        UNLOCK();
        local_288 = (undefined *)CONCAT44(iStack_254,local_258);
        local_298 = CONCAT44(iStack_2b4,local_2b8);
        local_2d8 = local_270;
        iVar21 = iStack_2b0;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_268);
      local_208[2] = local_268;
      local_2f8 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2f8);
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (local_2d0,local_2d8,lVar14 + 0x1bc,local_268);
      plVar10 = local_208 + 2;
      goto LAB_141cef6a3;
    }
  }
  else {
    local_1d8 = &DAT_146a61740;
    local_1d0 = iVar1;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x38,&local_2ec,&local_1d8);
    if (local_2ec != 0xffffffff) {
      lVar14 = (longlong)(int)local_2ec * 0x20 + *(longlong *)(lVar3 + 0x38);
    }
    plVar10 = (longlong *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      plVar10 = (longlong *)0x0;
    }
    lVar14 = *plVar10;
    if (lVar14 == 0) {
      local_210 = 0;
      local_f8 = 0;
      uVar9 = 2;
    }
    else {
      lVar3 = *(longlong *)(lVar14 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      local_f8 = *(undefined8 *)(lVar3 + 0x40);
      uVar9 = (uint)local_2e8;
    }
    if ((uVar9 & 2) != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_210);
    }
    FUN_141ed6ac0(param_2[8],&local_118,2,1);
    lVar3 = *(longlong *)(lVar14 + 0x48);
    local_2d8 = param_2[8];
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_2e8 = *(ulonglong *)(lVar3 + 0x40);
    local_2e0 = local_2e8;
    FUN_141aa9690(lVar14,local_2d8,local_2e8,*(undefined8 *)(*param_2 + 0x20));
    local_358 = (undefined8 *)FUN_1404a0e20();
    local_348 = 0;
    local_350 = (undefined8 *)((ulonglong)local_350._4_4_ << 0x20);
    FUN_141ca99a0(lVar14 + 0xc0,local_2d8,&local_2e8,param_2);
    local_194 = local_2f8._4_4_;
    local_198 = local_304;
    local_358._0_4_ = (float)local_2f8._4_4_;
    FUN_141cdf580(local_188);
    if (*(char *)(lVar14 + 0x1c2) != '\0') {
      local_358._0_4_ = 0.0;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_278,&local_198,&DAT_146a61578);
      local_300 = local_278;
      if (local_278 != 0) {
        LOCK();
        *(int *)(local_278 + 8) = *(int *)(local_278 + 8) + 1;
        UNLOCK();
        local_288 = (undefined *)CONCAT44(iStack_254,local_258);
        local_298 = CONCAT44(iStack_2b4,local_2b8);
        local_2e0 = local_2e8;
        iVar21 = iStack_2b0;
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_278);
      local_208[0] = local_278;
      local_300 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_300);
      SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                (local_2d8,local_2e0,lVar14 + 0x1bc,local_278);
      plVar10 = local_208;
LAB_141cef6a3:
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar10);
    }
  }
  iVar1 = local_304;
  local_310 = 1;
  local_318 = 1;
  local_328 = uVar2;
  local_304 = iStack_2ac;
  local_300 = CONCAT44(iStack_2b0,iStack_2b4);
  local_340 = (float)iVar20;
  local_2d0 = CONCAT44(iStack_2ac - iStack_2b4,iVar1);
  local_330 = local_2d0;
  local_338 = (float)(iStack_24c - iStack_254);
  local_348 = CONCAT44(local_348._4_4_,(float)iStack_254);
  local_350 = (undefined8 *)CONCAT44(local_350._4_4_,(float)(int)local_288);
  local_358 = (undefined8 *)CONCAT44(local_358._4_4_,(float)(iStack_2ac - iStack_2b4));
  local_320 = lVar12;
  FUN_141ca7700(param_2[8]);
  lVar12 = param_2[8];
  local_248 = 0xffffffff00000000;
  uStack_240 = 0xffffffffffffffff;
  uVar2 = local_2c8[1];
  plVar10 = (longlong *)*local_2c8;
  local_228 = 0xffffffff;
  uStack_220 = 0;
  local_238 = 0xffffffffffffffff;
  uStack_230 = 0xffffffffffffffff;
  puVar13 = (undefined8 *)(*(longlong *)(lVar12 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 10;
  if (*(undefined8 **)(lVar12 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar12 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar12 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 10;
  }
  *(undefined8 **)(lVar12 + 0x30) = puVar11;
  *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
  **(undefined8 **)(lVar12 + 8) = puVar13;
  *(undefined8 **)(lVar12 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar13 + 2) = (undefined4)local_248;
  *(undefined4 *)((longlong)puVar13 + 0x14) = local_248._4_4_;
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_240;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_240._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)local_238;
  *(undefined4 *)((longlong)puVar13 + 0x24) = local_238._4_4_;
  *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_230;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_230._4_4_;
  *(undefined4 *)(puVar13 + 6) = (undefined4)local_228;
  *(undefined4 *)((longlong)puVar13 + 0x34) = local_228._4_4_;
  *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_220;
  *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_220._4_4_;
  puVar13[8] = plVar10;
  puVar13[9] = uVar2;
  lVar12 = (**(code **)(*plVar10 + 8))(plVar10);
  if ((lVar12 == 0) && (lVar12 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar12 == 0)) {
    (**(code **)(*(longlong *)puVar13[8] + 0x20))();
  }
  lVar12 = (**(code **)(*(longlong *)puVar13[9] + 8))();
  if ((lVar12 == 0) && (lVar12 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar12 == 0)) {
    (**(code **)(*(longlong *)puVar13[9] + 0x20))();
  }
  iStack_2b4 = (int)local_300;
  iStack_2ac = local_304;
LAB_141cef884:
  *(int *)((longlong)param_2 + 0xc) = iStack_2b4;
  *(int *)(param_2 + 1) = (int)local_298;
  *(int *)(param_2 + 2) = iVar21;
  *(int *)((longlong)param_2 + 0x14) = iStack_2ac;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)local_260 + 0xac);
  *(int *)((longlong)param_2 + 0x1c) = (int)local_260[0x16];
  return;
}



// FUNCTION 141cef960 FUN_141cef960 body=1640 status=ok
// SIG undefined FUN_141cef960(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_141cef960(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  bool bVar19;
  int iVar20;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  int local_res20;
  uint in_stack_fffffffffffffec8;
  uint in_stack_fffffffffffffed0;
  uint in_stack_fffffffffffffed8;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar21;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  plVar12 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0);
  if (((plVar12 == (longlong *)0x0) || (plVar3 = (longlong *)*plVar12, plVar3 == (longlong *)0x0))
     || (lVar13 = (**(code **)(*plVar3 + 0x38))(plVar3,(int)plVar12[1]), lVar13 == 0)) {
    lVar13 = 0;
  }
  puVar14 = (undefined8 *)FUN_141cf3cd0(param_1 + 6,param_2);
  lVar4 = *param_2;
  lVar7 = param_2[1];
  lVar8 = param_2[2];
  uVar6 = *(undefined8 *)(lVar4 + 0x368);
  uVar15 = *(undefined8 *)(lVar4 + 0x370);
  local_e8._0_4_ = (int)uVar6;
  local_e8._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
  uStack_e0._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (((char)param_1[0x19] == '\0') &&
     (lVar5 = puVar14[1],
     plVar12 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0x10) + 0x18) + 8))(),
     iVar20 = DAT_1468b5ca0, lVar5 != *plVar12)) {
    if (*(char *)((longlong)param_1 + 0xc9) == '\0') {
      local_res20 = DAT_1468b5ca4;
      local_e8 = CONCAT44(DAT_1468b5ca4,DAT_1468b5ca0);
      puVar18 = (undefined8 *)FUN_141d6a140(*param_2,&local_res8);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,*(undefined4 *)puVar18);
      local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)((longlong)puVar18 + 4));
      uStack_e0 = *puVar18;
    }
    else {
      lVar4 = *param_2;
      local_res20 = *(int *)(lVar4 + 0x36c);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,*(undefined4 *)(lVar4 + 0x370));
      local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)(lVar4 + 0x374));
      iVar20 = *(int *)(lVar4 + 0x368);
      local_e8 = *(undefined8 *)(lVar4 + 0x368);
      uStack_e0 = *(undefined8 *)(lVar4 + 0x370);
    }
  }
  else {
    local_res18 = CONCAT44(local_res18._4_4_,uStack_e0._4_4_);
    uStack_e0._0_4_ = (undefined4)uVar15;
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,(undefined4)uStack_e0);
    local_res20 = local_e8._4_4_;
    iVar20 = (int)local_e8;
    local_e8 = uVar6;
    uStack_e0 = uVar15;
  }
  uVar6 = *(undefined8 *)(lVar13 + 0x14);
  if (((uint)(&DAT_1464c9c48)[(int)param_2[0xb]] < 0x1e) &&
     ((0x25e2cf88U >> ((&DAT_1464c9c48)[(int)param_2[0xb]] & 0x1f) & 1) != 0)) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  local_res8 = 0;
  if (bVar19) {
    in_stack_fffffffffffffec8 = 0;
    FUN_141ad74f0(param_2[8],*puVar14,0,5,0x22,in_stack_fffffffffffffed0 & 0xffffff00);
  }
  else {
    FUN_141a19150(param_2[8],*puVar14,0,0);
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  pfVar1 = (float *)((longlong)param_1 + 0xbc);
  local_res8 = CONCAT71(local_res8._1_7_,0.01 < *pfVar1 || *pfVar1 == 0.01);
  local_88 = local_e8;
  uStack_80 = uStack_e0;
  if (0.01 < *pfVar1 || *pfVar1 == 0.01) {
    local_88 = 0;
    uStack_80 = 0;
  }
  local_78 = local_e8;
  uStack_70 = uStack_e0;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_78);
  lVar13 = puVar14[1];
  plVar12 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(*param_2 + 0x10) + 0x18) + 8))();
  if (lVar13 == *plVar12) {
    if (*param_2 != *(longlong *)**(undefined8 **)(*param_2 + 0x10)) goto LAB_141cefc02;
  }
  else if (*(char *)((longlong)param_2 + 0x69) == '\0') goto LAB_141cefc02;
  if (!bVar19) {
    uVar15 = *(undefined8 *)((longlong)param_1 + 0x44);
    local_78 = local_88;
    uStack_70 = uStack_80;
    FUN_141a149c0(param_2[8],1,1,&DAT_1464aa6e0,in_stack_fffffffffffffec8 & 0xffffff00,0,
                  in_stack_fffffffffffffed8 & 0xffffff00,0,uVar15,&local_78);
    uVar21 = (undefined4)((ulonglong)uVar15 >> 0x20);
  }
LAB_141cefc02:
  local_d0 = (int)lVar7;
  uVar15 = 0;
  iStack_c4 = (int)((ulonglong)lVar8 >> 0x20);
  iStack_c8 = (int)lVar8;
  iStack_cc = (int)((ulonglong)lVar7 >> 0x20);
  if ((((local_d0 == DAT_1468b5ca0) && (iStack_cc == DAT_1468b5ca4)) && (iStack_c8 == (int)uVar6))
     && (local_e8._4_4_ = (int)((ulonglong)uVar6 >> 0x20), iStack_c4 == local_e8._4_4_)) {
    uVar17 = 0;
  }
  else {
    uVar17 = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x17);
  if (uVar2 < 7) {
    if ((byte)local_res8 == '\0') {
      switch(uVar2) {
      case 0:
        uVar15 = FUN_141cd4060(param_2,&DAT_1464c26e0);
        break;
      case 1:
        uVar15 = FUN_141cd1660(param_2,&DAT_1464c26e0,uVar17);
        break;
      case 2:
        uVar15 = FUN_141cd1d60(param_2,&DAT_1464c26e0,uVar17);
        break;
      case 3:
        uVar15 = FUN_141cd2460(param_2,&DAT_1464c26e0,uVar17);
        break;
      case 4:
        uVar15 = FUN_141cd2b60(param_2,&DAT_1464c26e0,uVar17);
        break;
      case 5:
        uVar15 = FUN_141cd3260(param_2,&DAT_1464c26e0,uVar17);
        break;
      case 6:
        uVar15 = FUN_141cd3960(param_2,&DAT_1464c26e0,uVar17);
      }
    }
    else {
      switch(uVar2) {
      case 0:
        uVar15 = FUN_141cd3ce0(param_2,pfVar1);
        break;
      case 1:
        uVar15 = FUN_141cd12e0(param_2,pfVar1,uVar17);
        break;
      case 2:
        uVar15 = FUN_141cd19e0(param_2,pfVar1,uVar17);
        break;
      case 3:
        uVar15 = FUN_141cd20e0(param_2,pfVar1,uVar17);
        break;
      case 4:
        uVar15 = FUN_141cd27e0(param_2,pfVar1,uVar17);
        break;
      case 5:
        uVar15 = FUN_141cd2ee0(param_2,pfVar1,uVar17);
        break;
      case 6:
        uVar15 = FUN_141cd35e0(param_2,pfVar1,uVar17);
      }
    }
  }
  iVar11 = local_res20;
  iVar9 = (int)local_res10;
  iVar10 = (int)local_res18;
  local_res10._0_4_ = (int)local_res10 - iVar20;
  local_res10 = (longlong *)CONCAT44((int)local_res18 - local_res20,(int)local_res10);
  FUN_141ca7700(param_2[8],(int)local_res10,uVar15,iStack_c8 - local_d0,
                (float)((int)local_res18 - local_res20),(float)local_d0,(float)iStack_cc,
                (float)(iStack_c8 - local_d0),CONCAT44(uVar21,(float)(iStack_c4 - iStack_cc)),
                local_res10,uVar6,uVar15,(byte)local_res8 + 1,1);
  local_res18 = puVar14[1];
  local_res10 = (longlong *)*puVar14;
  local_res8 = param_2[8];
  puVar16 = (ulonglong *)(local_res8 + 0x30);
  puVar18 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar18 + 10;
  if (*(undefined8 **)(local_res8 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(puVar16,0x58);
    puVar16 = (ulonglong *)(local_res8 + 0x30);
    puVar18 = (undefined8 *)(*(longlong *)(local_res8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar18 + 10;
  }
  *puVar16 = (ulonglong)puVar14;
  *(int *)(local_res8 + 0x14) = *(int *)(local_res8 + 0x14) + 1;
  **(undefined8 **)(local_res8 + 8) = puVar18;
  *(undefined8 **)(local_res8 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar18 + 2) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar18 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar18 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar18 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar18 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x34) = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0;
  puVar18[9] = local_res18;
  puVar18[8] = local_res10;
  lVar13 = (**(code **)(*local_res10 + 8))(local_res10);
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[8] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar18[8] + 0x20))();
  }
  lVar13 = (**(code **)(*(longlong *)puVar18[9] + 8))();
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar18[9] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar18[9] + 0x20))();
  }
  *(int *)(param_2 + 1) = iVar20;
  *(int *)((longlong)param_2 + 0xc) = iVar11;
  *(int *)(param_2 + 2) = iVar9;
  *(int *)((longlong)param_2 + 0x14) = iVar10;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_1 + 0xcc);
  *(int *)((longlong)param_2 + 0x1c) = (int)param_1[0x1a];
  return;
}



// FUNCTION 141cf0000 FUN_141cf0000 body=3168 status=ok
// SIG undefined FUN_141cf0000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cf0000(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_4e8 [32];
  undefined8 local_4c8;
  undefined8 *local_4c0;
  undefined4 *local_4b8;
  float local_4b0;
  float local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  longlong local_490;
  undefined4 local_488;
  undefined4 local_480;
  int local_478;
  int local_470;
  uint local_468;
  int local_464;
  int local_460;
  longlong *local_458;
  undefined8 local_450;
  longlong *local_448;
  int local_440;
  int iStack_43c;
  uint local_438;
  int iStack_434;
  int iStack_430;
  int iStack_42c;
  uint local_428;
  int iStack_424;
  int iStack_420;
  int iStack_41c;
  int local_418;
  int local_414 [3];
  undefined8 local_408;
  undefined8 local_400;
  longlong local_3f8;
  int local_3f0;
  int iStack_3ec;
  longlong *local_3e8;
  ulonglong uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined **local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  int local_390;
  int local_38c;
  undefined8 *local_388;
  longlong *local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined *local_330;
  undefined4 local_328;
  undefined *local_320;
  undefined4 local_318;
  uint local_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  longlong *plStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  ulonglong local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined8 local_23c;
  undefined4 local_234;
  undefined1 local_228 [432];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  plVar19 = (longlong *)0x0;
  local_440 = 0;
  local_448 = param_1;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0);
  if (((plVar10 != (longlong *)0x0) && (plVar18 = (longlong *)*plVar10, plVar18 != (longlong *)0x0))
     && (lVar11 = (**(code **)(*plVar18 + 0x38))(plVar18,(int)plVar10[1]), lVar11 != 0)) {
    local_378 = *param_2;
    local_368 = *(longlong *)(local_378 + 0x10);
    uVar2 = *(undefined8 *)(lVar11 + 0x14);
    uVar8 = *(uint *)(local_378 + 0x1aa0);
    iVar9 = *(int *)(local_378 + 0x1aa4);
    iVar4 = *(int *)(local_378 + 0x1aa8);
    iVar5 = *(int *)(local_378 + 0x1aac);
    local_438 = uVar8;
    iStack_434 = iVar9;
    iStack_430 = iVar4;
    iStack_42c = iVar5;
    local_428 = uVar8;
    iStack_424 = iVar9;
    iStack_420 = iVar4;
    iStack_41c = iVar5;
    local_380 = (longlong *)FUN_141cf3cd0(param_1 + 6,param_2);
    local_350 = 0;
    FUN_141a19150(param_2[8],*local_380,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_350);
    local_308 = uVar8;
    iStack_304 = iVar9;
    iStack_300 = iVar4;
    iStack_2fc = iVar5;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_308);
    local_490 = FUN_141cd43e0(param_1,param_2);
    local_470 = iVar4 - uVar8;
    local_478 = iVar5 - iVar9;
    local_4a8 = (float)(iVar5 - iVar9);
    local_4b0 = (float)(int)(iVar4 - uVar8);
    local_480 = 1;
    local_488 = 1;
    local_4a0 = CONCAT44(local_478,local_470);
    local_4b8 = (undefined4 *)CONCAT44(local_4b8._4_4_,(float)iVar9);
    local_4c0 = (undefined8 *)CONCAT44(local_4c0._4_4_,(float)(int)uVar8);
    local_4c8 = CONCAT44(local_4c8._4_4_,(float)local_478);
    local_498 = uVar2;
    local_440 = local_470;
    iStack_43c = local_478;
    local_438 = uVar8;
    iStack_434 = iVar9;
    iStack_430 = iVar4;
    iStack_42c = iVar5;
    local_428 = uVar8;
    iStack_424 = iVar9;
    iStack_420 = iVar4;
    iStack_41c = iVar5;
    FUN_141ca7700(param_2[8]);
    local_2a8 = 0;
    local_2e8 = 0;
    plStack_2e0 = (longlong *)0x0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_2a0 = 0;
    local_29c = 0x26;
    local_294 = 0;
    local_28c = 0;
    local_278 = 0;
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_244 = 0;
    local_23c = 0;
    local_234 = 0;
    FUN_14049afe0(param_2[8],&local_2e8);
    local_2b8 = FUN_141abdaf0();
    uStack_2b0 = FUN_140985530();
    local_2a8 = FUN_1409853f0();
    lVar11 = param_2[0xc];
    local_328 = 0;
    local_330 = &DAT_146a51f90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_418,&local_330);
    plVar10 = plVar19;
    if (local_418 != -1) {
      plVar10 = (longlong *)((longlong)local_418 * 0x20 + *(longlong *)(lVar11 + 0x38));
    }
    local_318 = 0;
    plVar18 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar18 = plVar19;
    }
    local_320 = &DAT_146a646d0;
    lVar3 = *plVar18;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,local_414,&local_320);
    plVar10 = plVar19;
    if (local_414[0] != -1) {
      plVar10 = (longlong *)((longlong)local_414[0] * 0x20 + *(longlong *)(lVar11 + 0x38));
    }
    plVar18 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar18 = plVar19;
    }
    lVar11 = *plVar18;
    local_2e8 = DAT_1464c2720;
    if (lVar3 == 0) {
      local_358 = 0;
      plVar10 = (longlong *)0x1;
      plStack_2e0 = plVar19;
    }
    else {
      lVar20 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      plStack_2e0 = *(longlong **)(lVar20 + 0x38);
      plVar10 = plVar19;
    }
    uVar12 = 0;
    if (plVar10 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_358);
    }
    bVar21 = false;
    if (lVar11 == 0) {
      bVar21 = true;
      local_360 = 0;
    }
    else {
      lVar20 = *(longlong *)(lVar11 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      uVar12 = *(undefined8 *)(lVar20 + 0x40);
    }
    local_2c8 = uVar12;
    if (bVar21) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_360);
    }
    local_29c = local_29c & 0xffffffff00000000;
    FUN_141ed6ac0(param_2[8],&local_2e8,2,1);
    lVar20 = *(longlong *)(lVar11 + 0x48);
    lVar13 = param_2[8];
    if (*(char *)(lVar20 + 0x28) == '\0') {
      FUN_1419f3850(lVar20);
    }
    local_408 = *(undefined8 *)(lVar20 + 0x40);
    FUN_141aa9690(lVar11,lVar13,local_408,*(undefined8 *)(*param_2 + 0x20));
    local_4c8 = FUN_1404a0e20();
    local_4b8 = (undefined4 *)0x0;
    local_4c0 = (undefined8 *)((ulonglong)local_4c0 & 0xffffffff00000000);
    FUN_141ca99a0(lVar11 + 0xc0,lVar13,&local_408,param_2);
    local_4c8 = CONCAT44(local_4c8._4_4_,0xf);
    FUN_141aa6fa0(lVar11 + 0x1bc,lVar13,&local_408,*(undefined4 *)(*param_2 + 0x1a38));
    local_458 = (longlong *)0x0;
    local_450 = 0;
    local_440 = (int)(local_470 + (local_470 >> 0x1f & 3U)) >> 2;
    local_470 = (int)(local_478 + (local_478 >> 0x1f & 3U)) >> 2;
    local_460 = 0;
    while ((plVar10 = local_380, -1 < local_460 && (local_460 < (int)param_1[0x18]))) {
      lVar20 = (longlong)local_460 * 0x20;
      local_3e8 = *(longlong **)(param_1[0x17] + lVar20);
      uStack_3e0 = ((undefined8 *)(param_1[0x17] + lVar20))[1];
      local_3f8 = lVar20;
      if (local_3e8 == (longlong *)0x0) {
LAB_141cf093a:
        local_460 = local_460 + 1;
      }
      else {
        lVar13 = (**(code **)(*local_3e8 + 0x38))(local_3e8,uStack_3e0 & 0xffffffff);
        puVar14 = *(undefined8 **)(*(longlong *)(lVar13 + 0x50) + 8);
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        uVar16 = local_460 >> 0x1f & 3;
        uVar8 = local_460 + uVar16;
        local_464 = (uVar8 & 3) - uVar16;
        local_478 = (int)uVar8 >> 2;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        lVar13 = param_2[8];
        local_388 = puVar14;
        if (*(short *)(lVar11 + 0x1ce) != 0) {
          lVar20 = *(longlong *)(lVar11 + 0x48);
          if (*(char *)(lVar20 + 0x28) == '\0') {
            FUN_1419f3850(lVar20);
          }
          local_400 = *(undefined8 *)(lVar20 + 0x40);
          local_3e8 = (longlong *)FUN_141a156e0();
          if (*(short *)(lVar11 + 0x1ce) != 0) {
            puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
            local_468 = (uint)*(ushort *)(lVar11 + 0x1cc);
            puVar17 = puVar15 + 5;
            if (*(undefined8 **)(lVar13 + 0x38) < puVar17) {
              FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x30);
              puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar17 = puVar15 + 5;
            }
            *(undefined8 **)(lVar13 + 0x30) = puVar17;
            *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
            **(undefined8 **)(lVar13 + 8) = puVar15;
            *(undefined8 **)(lVar13 + 8) = puVar15 + 1;
            puVar15[1] = 0;
            *puVar15 = &PTR_LAB_143f59c80;
            puVar15[2] = local_400;
            *(uint *)(puVar15 + 3) = local_468;
            puVar15[4] = puVar14;
          }
          lVar20 = local_3f8;
          if (*(short *)(lVar11 + 0x1d2) != 0) {
            local_468 = (uint)*(ushort *)(lVar11 + 0x1d0);
            puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar17 = puVar15 + 5;
            if (*(undefined8 **)(lVar13 + 0x38) < puVar17) {
              FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x30);
              puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar17 = puVar15 + 5;
            }
            *(undefined8 **)(lVar13 + 0x30) = puVar17;
            *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
            **(undefined8 **)(lVar13 + 8) = puVar15;
            *(undefined8 **)(lVar13 + 8) = puVar15 + 1;
            puVar15[1] = 0;
            *puVar15 = &PTR_LAB_143f59c70;
            puVar15[2] = local_400;
            *(uint *)(puVar15 + 3) = local_468;
            puVar15[4] = local_3e8;
            lVar20 = local_3f8;
          }
        }
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_388);
        local_3f0 = iStack_420 - local_428;
        iStack_3ec = iStack_41c - iStack_424;
        local_464 = local_464 * local_440;
        local_4b0 = (float)(int)(iStack_430 - local_438);
        local_4a8 = (float)(iStack_42c - iStack_434);
        local_480 = 1;
        local_4a0 = CONCAT44(iStack_3ec,local_3f0);
        local_488 = 0;
        local_4b8 = (undefined4 *)CONCAT44(local_4b8._4_4_,(float)iStack_434);
        local_4c0 = (undefined8 *)CONCAT44(local_4c0._4_4_,(float)(int)local_438);
        local_4c8 = CONCAT44(local_4c8._4_4_,(float)local_470);
        local_498 = uVar2;
        local_490 = lVar3;
        FUN_141ca7700(param_2[8]);
        uVar6 = local_450;
        lVar13 = (longlong)(int)local_450;
        local_348 = 0;
        local_340 = 0;
        local_338 = 0;
        iVar9 = (int)local_450 + 1;
        local_450 = CONCAT44(local_450._4_4_,iVar9);
        if (local_450._4_4_ < iVar9) {
          TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
                    (&local_458,uVar6 & 0xffffffff);
        }
        local_458[lVar13 * 3] = 0;
        local_458[lVar13 * 3 + 1] = 0;
        *(int *)(local_458 + lVar13 * 3 + 2) = (int)local_348;
        *(undefined4 *)((longlong)local_458 + lVar13 * 0x18 + 0x14) = local_338._4_4_;
        plVar19 = (longlong *)(local_448[0x17] + 0x10 + lVar20);
        plVar10 = local_458 + (longlong)((int)local_450 + -1) * 3;
        if (plVar10 != plVar19) {
          iVar9 = (int)plVar19[1];
          local_3e8 = (longlong *)*plVar19;
          *(int *)(plVar10 + 1) = iVar9;
          if ((iVar9 == 0) && (*(int *)((longlong)plVar10 + 0xc) == 0)) {
            *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar10,iVar9);
            _guard_xfg_dispatch_icall_nop((void *)*plVar10,local_3e8,(longlong)iVar9 * 2);
          }
        }
        *(int *)(plVar10 + 2) = local_464 + 8;
        *(int *)((longlong)plVar10 + 0x14) = (local_478 + 1) * local_470 + -0x13;
        param_1 = local_448;
        if (puVar14 == (undefined8 *)0x0) goto LAB_141cf093a;
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 != 1) goto LAB_141cf093a;
        if ((*(char *)(puVar14 + 2) != '\0') ||
           ((DAT_146ab62f5 == '\0' && (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 != '\0')
            ))) {
          (**(code **)*puVar14)(puVar14,1);
          param_1 = local_448;
          goto LAB_141cf093a;
        }
        LOCK();
        bVar21 = *(int *)((longlong)puVar14 + 0xc) == 0;
        if (bVar21) {
          *(int *)((longlong)puVar14 + 0xc) = 1;
        }
        UNLOCK();
        param_1 = local_448;
        if (!bVar21) goto LAB_141cf093a;
        uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar8 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar20 + 8) = puVar14;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        local_460 = local_460 + 1;
        param_1 = local_448;
      }
    }
    local_398 = *local_380;
    if (local_398 != 0) {
      LOCK();
      *(int *)(local_398 + 8) = *(int *)(local_398 + 8) + 1;
      UNLOCK();
    }
    local_3a0 = 0;
    local_3a8 = &PTR__scalar_deleting_destructor__144dd54c8;
    if (local_398 != 0) {
      LOCK();
      *(int *)(local_398 + 8) = *(int *)(local_398 + 8) + 1;
      UNLOCK();
    }
    local_38c = *(int *)(local_378 + 0x1aac) - *(int *)(local_378 + 0x1aa4);
    local_390 = *(int *)(local_378 + 0x1aa8) - *(int *)(local_378 + 0x1aa0);
    local_370 = local_398;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_370);
    local_4b0 = 1.0;
    local_4b8 = (undefined4 *)CONCAT44(local_4b8._4_4_,(int)param_2[0xb]);
    local_4c0 = (undefined8 *)CONCAT44(local_4c0._4_4_,*(undefined4 *)(local_368 + 0x54));
    local_4c8 = CONCAT44(local_4c8._4_4_,*(undefined4 *)(local_368 + 0x50));
    FCanvas::FCanvas(local_228,&local_3a8,0);
    local_2f8 = 0x3f8000003f800000;
    uStack_2f0 = 0x3f80000000000000;
    for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (int)local_450)); iVar9 = iVar9 + 1) {
      local_4c8 = UEngine::GetSmallFont();
      local_4c0 = &local_2f8;
      local_4b8 = &DAT_1464aa6e0;
      FUN_1428a6e00(local_228);
    }
    FUN_1428aaa90(local_228,param_2[8],0);
    lVar11 = param_2[8];
    lVar3 = plVar10[1];
    plVar10 = (longlong *)*plVar10;
    local_3d8 = 0xffffffff00000000;
    uStack_3d0 = 0xffffffffffffffff;
    local_3b8 = 0xffffffff;
    uStack_3b0 = 0;
    local_3c8 = 0xffffffffffffffff;
    uStack_3c0 = 0xffffffffffffffff;
    puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar17 + 10;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar14) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x58);
      puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar17 + 10;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar14;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar17;
    *(undefined8 **)(lVar11 + 8) = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar17 + 2) = (undefined4)local_3d8;
    *(undefined4 *)((longlong)puVar17 + 0x14) = local_3d8._4_4_;
    *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_3d0;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_3d0._4_4_;
    *(undefined4 *)(puVar17 + 4) = (undefined4)local_3c8;
    *(undefined4 *)((longlong)puVar17 + 0x24) = local_3c8._4_4_;
    *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_3c0;
    *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_3c0._4_4_;
    *(undefined4 *)(puVar17 + 6) = (undefined4)local_3b8;
    *(undefined4 *)((longlong)puVar17 + 0x34) = local_3b8._4_4_;
    *(undefined4 *)(puVar17 + 7) = (undefined4)uStack_3b0;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = uStack_3b0._4_4_;
    puVar17[8] = plVar10;
    puVar17[9] = lVar3;
    lVar11 = (**(code **)(*plVar10 + 8))(plVar10);
    if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar17[8] + 0x18))(), lVar11 == 0)) {
      (**(code **)(*(longlong *)puVar17[8] + 0x20))();
    }
    lVar11 = (**(code **)(*(longlong *)puVar17[9] + 8))();
    if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar17[9] + 0x18))(), lVar11 == 0)) {
      (**(code **)(*(longlong *)puVar17[9] + 0x20))();
    }
    FUN_14289d030(local_228);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
    local_3a8 = &PTR_FUN_144dd5318;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3a0);
    plVar10 = local_458;
    for (iVar9 = (int)local_450; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 3;
    }
    if (local_458 != (longlong *)0x0) {
      FMemory::Free(local_458);
    }
  }
  return;
}



// FUNCTION 141cf0c60 FUN_141cf0c60 body=5277 status=ok
// SIG undefined FUN_141cf0c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cf0c60(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 *puVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong *puVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  char cVar27;
  float *pfVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_1218 [32];
  float *local_11f8;
  ulonglong local_11f0;
  float *local_11e8;
  float *local_11e0;
  float *local_11d8;
  float *local_11d0;
  ulonglong *local_11c8;
  longlong local_11c0;
  ulonglong *local_11b8;
  undefined8 local_11b0;
  char local_11a8;
  undefined8 local_1198;
  undefined8 uStack_1190;
  int local_1188;
  int iStack_1184;
  undefined8 local_1180;
  uint local_1178;
  undefined8 local_1170;
  undefined8 local_1168;
  ulonglong local_1158;
  undefined8 uStack_1150;
  uint local_1148;
  undefined4 local_1144;
  undefined8 local_1140;
  undefined8 local_1138;
  ulonglong local_1128;
  undefined8 uStack_1120;
  ulonglong local_1118;
  longlong *plStack_1110;
  int local_1108;
  int iStack_1104;
  undefined8 *local_1100;
  undefined8 local_10f8;
  int local_10f0;
  int iStack_10ec;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  float local_10b8 [256];
  float local_cb8 [256];
  float local_8b8 [4];
  float local_8a8 [508];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1218;
  local_1144 = *(undefined4 *)(*param_2 + 0x1a38);
  local_1138 = param_2;
  plVar16 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0);
  plVar17 = (longlong *)*plVar16;
  lVar20 = 0;
  if (plVar17 != (longlong *)0x0) {
    lVar20 = (**(code **)(*plVar17 + 0x38))(plVar17,(int)plVar16[1]);
  }
  plVar17 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,0);
  if (((plVar17 == (longlong *)0x0) || (plVar16 = (longlong *)*plVar17, plVar16 == (longlong *)0x0))
     || (lVar18 = (**(code **)(*plVar16 + 0x38))(plVar16,(int)plVar17[1]), lVar18 == 0)) {
    lVar18 = 0;
  }
  local_1170 = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1d,&local_1170);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1170);
  uVar6 = *(undefined8 *)(lVar18 + 0x14);
  local_1180 = param_2[3];
  pfVar7 = *(float **)((longlong)param_1 + 0x44);
  iVar38 = (int)local_1180;
  iVar14 = (int)uVar6;
  uVar12 = (iVar38 + -1 + iVar14) / iVar14;
  iVar23 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar23 == 0; iVar23 = iVar23 + -1) {
    }
  }
  if (uVar12 == 0) {
    iVar23 = 0x20;
  }
  else {
    iVar23 = 0x1f - iVar23;
  }
  uVar12 = uVar12 - 1;
  iVar15 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar15 == 0; iVar15 = iVar15 + -1) {
    }
  }
  if (uVar12 == 0) {
    cVar27 = '\0';
  }
  else {
    cVar27 = '\x1f' - (char)iVar15;
  }
  iVar15 = (int)((ulonglong)local_1180 >> 0x20);
  iVar24 = (int)((ulonglong)uVar6 >> 0x20);
  local_10f0 = 1 << (~(byte)((iVar23 << 0x1a) >> 0x1f) & 0x20U - cVar27 & 0x1f);
  local_1168 = CONCAT44(local_1168._4_4_,local_10f0);
  uVar12 = (iVar15 + -1 + iVar24) / iVar24;
  iVar23 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar23 == 0; iVar23 = iVar23 + -1) {
    }
  }
  if (uVar12 == 0) {
    iVar23 = 0x20;
  }
  else {
    iVar23 = 0x1f - iVar23;
  }
  uVar12 = uVar12 - 1;
  iVar24 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar24 == 0; iVar24 = iVar24 + -1) {
    }
  }
  if (uVar12 == 0) {
    cVar27 = '\0';
  }
  else {
    cVar27 = '\x1f' - (char)iVar24;
  }
  iStack_10ec = 1 << (0x20U - cVar27 & ~(byte)((iVar23 << 0x1a) >> 0x1f) & 0x1f);
  iVar24 = (int)pfVar7;
  uVar12 = (iVar38 + -1 + iVar24) / iVar24;
  iVar23 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar23 == 0; iVar23 = iVar23 + -1) {
    }
  }
  if (uVar12 == 0) {
    iVar23 = 0x20;
  }
  else {
    iVar23 = 0x1f - iVar23;
  }
  uVar12 = uVar12 - 1;
  iVar37 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar37 == 0; iVar37 = iVar37 + -1) {
    }
  }
  if (uVar12 == 0) {
    cVar27 = '\0';
  }
  else {
    cVar27 = '\x1f' - (char)iVar37;
  }
  iVar37 = 1 << (~(byte)((iVar23 << 0x1a) >> 0x1f) & 0x20U - cVar27 & 0x1f);
  iVar23 = (int)((ulonglong)pfVar7 >> 0x20);
  uVar12 = (iVar15 + -1 + iVar23) / iVar23;
  iVar23 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar23 == 0; iVar23 = iVar23 + -1) {
    }
  }
  if (uVar12 == 0) {
    iVar23 = 0x20;
  }
  else {
    iVar23 = 0x1f - iVar23;
  }
  uVar12 = uVar12 - 1;
  iVar15 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar15 == 0; iVar15 = iVar15 + -1) {
    }
  }
  if (uVar12 == 0) {
    cVar27 = '\0';
  }
  else {
    cVar27 = '\x1f' - (char)iVar15;
  }
  local_1128 = param_2[1];
  uStack_1120 = param_2[2];
  plVar17 = *(longlong **)(lVar20 + 0x50);
  iVar23 = 1 << (0x20U - cVar27 & ~(byte)((iVar23 << 0x1a) >> 0x1f) & 0x1f);
  local_1170 = CONCAT44(iVar23,iVar37);
  local_1108 = ((int)uStack_1120 + -1 + iVar37) / iVar37;
  iStack_1104 = ((int)((ulonglong)uStack_1120 >> 0x20) + -1 + iVar23) / iVar23;
  local_1140._4_4_ = (int)(local_1128 >> 0x20);
  local_1140 = CONCAT44(local_1140._4_4_ / iVar23,
                        (int)((longlong)
                              ((ulonglong)(uint)((int)local_1128 >> 0x1f) << 0x20 |
                              local_1128 & 0xffffffff) / (longlong)iVar37));
  local_1158 = local_1140;
  uStack_1150 = (longlong *)CONCAT44(iStack_1104,local_1108);
  local_1198 = uVar6;
  local_10f8 = pfVar7;
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  local_1100 = (undefined8 *)FUN_141cf3cd0(param_1 + 6,param_2);
  local_11a8 = FRCPassPostProcessWeightedSampleSum::DoFastBlur(param_1);
  fVar41 = 1.0 / (float)local_1198._4_4_;
  fVar42 = 1.0 / (float)iVar14;
  uVar13 = FUN_14274f980(*param_2);
  local_11f8 = local_cb8;
  lVar20 = param_1[0x17];
  local_11e8 = (float *)CONCAT44(local_11e8._4_4_,(int)param_1[0x1c]);
  local_11f0 = CONCAT44(local_11f0._4_4_,(int)lVar20);
  local_1148 = FUN_141cdfa60(local_1144,uVar13);
  uVar31 = 0;
  local_1178 = 0;
  uVar12 = local_1178;
  if (3 < local_1148) {
    fVar1 = *(float *)(param_1 + 0x1a);
    fVar2 = *(float *)((longlong)param_1 + 0xcc);
    fVar3 = *(float *)(param_1 + 0x19);
    uVar12 = (local_1148 - 4 >> 2) + 1;
    fVar4 = *(float *)((longlong)param_1 + 0xc4);
    uVar35 = (ulonglong)uVar12;
    uVar12 = uVar12 * 4;
    pfVar19 = local_cb8 + 3;
    pfVar28 = local_8a8;
    do {
      fVar5 = pfVar19[-2];
      fVar39 = *pfVar19;
      fVar40 = pfVar19[2];
      pfVar28[-4] = fVar4 * fVar5;
      pfVar28[-3] = fVar3 * fVar5;
      pfVar28[-2] = fVar2 * fVar5;
      pfVar28[-1] = fVar1 * fVar5;
      *pfVar28 = fVar4 * fVar39;
      pfVar28[1] = fVar3 * fVar39;
      pfVar28[2] = fVar2 * fVar39;
      pfVar28[3] = fVar1 * fVar39;
      fVar5 = pfVar19[4];
      pfVar28[4] = fVar4 * fVar40;
      pfVar28[5] = fVar3 * fVar40;
      pfVar28[6] = fVar2 * fVar40;
      pfVar28[7] = fVar1 * fVar40;
      pfVar28[8] = fVar4 * fVar5;
      pfVar28[9] = fVar3 * fVar5;
      pfVar28[10] = fVar2 * fVar5;
      pfVar28[0xb] = fVar1 * fVar5;
      local_1198 = CONCAT44(fVar3 * fVar5,fVar4 * fVar5);
      uStack_1190 = CONCAT44(fVar1 * fVar5,fVar2 * fVar5);
      uVar35 = uVar35 - 1;
      pfVar19 = pfVar19 + 8;
      pfVar28 = pfVar28 + 0x10;
    } while (uVar35 != 0);
  }
  if (uVar12 < local_1148) {
    fVar1 = *(float *)(param_1 + 0x1a);
    fVar2 = *(float *)((longlong)param_1 + 0xcc);
    fVar3 = *(float *)(param_1 + 0x19);
    fVar4 = *(float *)((longlong)param_1 + 0xc4);
    pfVar19 = local_cb8 + (ulonglong)uVar12 * 2 + 1;
    uVar35 = (ulonglong)(local_1148 - uVar12);
    pfVar28 = local_8b8 + (ulonglong)uVar12 * 4;
    do {
      fVar5 = *pfVar19;
      fVar40 = fVar4 * fVar5;
      pfVar19 = pfVar19 + 2;
      fVar39 = fVar2 * fVar5;
      *pfVar28 = fVar40;
      pfVar28[1] = fVar3 * fVar5;
      pfVar28[2] = fVar39;
      pfVar28[3] = fVar1 * fVar5;
      local_1198 = CONCAT44(fVar3 * fVar5,fVar40);
      uStack_1190 = CONCAT44(fVar1 * fVar5,fVar39);
      uVar35 = uVar35 - 1;
      pfVar28 = pfVar28 + 4;
    } while (uVar35 != 0);
  }
  if ((int)lVar20 == 0) {
    if (local_11a8 == '\0') {
      fVar41 = 0.0;
    }
    else {
      fVar41 = fVar41 * 0.5;
    }
    uVar35 = uVar31;
    if (3 < local_1148) {
      uVar12 = (local_1148 - 4 >> 2) + 1;
      uVar29 = (ulonglong)uVar12;
      uVar35 = (ulonglong)(uVar12 * 4);
      uVar30 = uVar31;
      do {
        *(float *)((longlong)local_10b8 + uVar30 + 4) = fVar41;
        fVar1 = *(float *)((longlong)local_cb8 + uVar30);
        fVar2 = *(float *)((longlong)local_cb8 + uVar30 + 0x10);
        *(float *)((longlong)local_10b8 + uVar30 + 0xc) = fVar41;
        *(float *)((longlong)local_10b8 + uVar30) = fVar42 * fVar1;
        fVar1 = *(float *)((longlong)local_cb8 + uVar30 + 8);
        *(float *)((longlong)local_10b8 + uVar30 + 0x10) = fVar42 * fVar2;
        *(float *)((longlong)local_10b8 + uVar30 + 0x14) = fVar41;
        *(float *)((longlong)local_10b8 + uVar30 + 8) = fVar42 * fVar1;
        fVar1 = *(float *)((longlong)local_cb8 + uVar30 + 0x18);
        *(float *)((longlong)local_10b8 + uVar30 + 0x1c) = fVar41;
        *(float *)((longlong)local_10b8 + uVar30 + 0x18) = fVar42 * fVar1;
        uVar29 = uVar29 - 1;
        uVar30 = uVar30 + 0x20;
      } while (uVar29 != 0);
    }
    if ((uint)uVar35 < local_1148) {
      uVar30 = (ulonglong)(local_1148 - (uint)uVar35);
      lVar20 = uVar35 * 8;
      do {
        *(float *)((longlong)local_10b8 + lVar20 + 4) = fVar41;
        *(float *)((longlong)local_10b8 + lVar20) =
             fVar42 * *(float *)((longlong)local_cb8 + lVar20);
        uVar30 = uVar30 - 1;
        lVar20 = lVar20 + 8;
      } while (uVar30 != 0);
    }
  }
  else {
    if (local_11a8 == '\0') {
      fVar42 = 0.0;
    }
    else {
      fVar42 = fVar41 * -0.5;
    }
    uVar35 = uVar31;
    if (3 < local_1148) {
      uVar12 = (local_1148 - 4 >> 2) + 1;
      uVar29 = (ulonglong)uVar12;
      uVar35 = (ulonglong)(uVar12 * 4);
      uVar30 = uVar31;
      do {
        *(undefined4 *)((longlong)local_10b8 + uVar30) = 0;
        fVar1 = *(float *)((longlong)local_cb8 + uVar30);
        *(undefined4 *)((longlong)local_10b8 + uVar30 + 8) = 0;
        fVar2 = *(float *)((longlong)local_cb8 + uVar30 + 0x10);
        *(undefined4 *)((longlong)local_10b8 + uVar30 + 0x10) = 0;
        *(undefined4 *)((longlong)local_10b8 + uVar30 + 0x18) = 0;
        *(float *)((longlong)local_10b8 + uVar30 + 4) = fVar41 * fVar1 + fVar42;
        fVar1 = *(float *)((longlong)local_cb8 + uVar30 + 8);
        *(float *)((longlong)local_10b8 + uVar30 + 0x14) = fVar41 * fVar2 + fVar42;
        *(float *)((longlong)local_10b8 + uVar30 + 0xc) = fVar41 * fVar1 + fVar42;
        *(float *)((longlong)local_10b8 + uVar30 + 0x1c) =
             fVar41 * *(float *)((longlong)local_cb8 + uVar30 + 0x18) + fVar42;
        uVar30 = uVar30 + 0x20;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
    if ((uint)uVar35 < local_1148) {
      uVar30 = (ulonglong)(local_1148 - (uint)uVar35);
      lVar20 = uVar35 * 8;
      do {
        *(undefined4 *)((longlong)local_10b8 + lVar20) = 0;
        *(float *)((longlong)local_10b8 + lVar20 + 4) =
             fVar41 * *(float *)((longlong)local_cb8 + lVar20) + fVar42;
        lVar20 = lVar20 + 8;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  if (*(int *)((longlong)param_1 + 0xbc) == 1) {
    local_1178 = 2;
  }
  local_1170 = 0;
  plVar16 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,1);
  if ((plVar16 == (longlong *)0x0) || (plVar33 = (longlong *)*plVar16, plVar33 == (longlong *)0x0))
  {
    lVar20 = 0;
  }
  else {
    lVar20 = (**(code **)(*plVar33 + 0x38))(plVar33,(int)plVar16[1]);
  }
  local_1128 = 0;
  uStack_1120 = 0;
  plVar16 = local_1138;
  if (lVar20 != 0) {
    plVar33 = *(longlong **)(lVar20 + 0x50);
    if (plVar33 != (longlong *)0x0) {
      (**(code **)(*plVar33 + 0x28))(plVar33);
    }
    TRefCountPtr<FRHITexture>::operator=(&local_1170,plVar33[2]);
    local_1178 = 1;
    plVar16 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,1);
    if (((plVar16 == (longlong *)0x0) || (plVar8 = (longlong *)*plVar16, plVar8 == (longlong *)0x0))
       || (lVar20 = (**(code **)(*plVar8 + 0x38))(plVar8,(int)plVar16[1]), lVar20 == 0)) {
      lVar20 = 0;
    }
    plVar16 = local_1138;
    iVar23 = *(int *)(lVar20 + 0x14);
    local_1198 = *(ulonglong *)(lVar20 + 0x14);
    uVar12 = (iVar38 + -1 + iVar23) / iVar23;
    iVar23 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar23 == 0; iVar23 = iVar23 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar23 = 0x20;
    }
    else {
      iVar23 = 0x1f - iVar23;
    }
    uVar12 = uVar12 - 1;
    iVar38 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar38 == 0; iVar38 = iVar38 + -1) {
      }
    }
    if (uVar12 == 0) {
      cVar27 = '\0';
    }
    else {
      cVar27 = '\x1f' - (char)iVar38;
    }
    iVar38 = 1 << (~(byte)((iVar23 << 0x1a) >> 0x1f) & 0x20U - cVar27 & 0x1f);
    uVar12 = (local_1180._4_4_ + -1 + *(int *)(lVar20 + 0x18)) / *(int *)(lVar20 + 0x18);
    iVar23 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar23 == 0; iVar23 = iVar23 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar23 = 0x20;
    }
    else {
      iVar23 = 0x1f - iVar23;
    }
    uVar12 = uVar12 - 1;
    iVar14 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar12 == 0) {
      cVar27 = '\0';
    }
    else {
      cVar27 = '\x1f' - (char)iVar14;
    }
    iVar23 = 1 << (0x20U - cVar27 & ~(byte)((iVar23 << 0x1a) >> 0x1f) & 0x1f);
    local_1118 = local_1138[1];
    plStack_1110 = (longlong *)local_1138[2];
    iVar14 = ((int)plStack_1110 + -1 + iVar38) / iVar38;
    iVar15 = ((int)((ulonglong)plStack_1110 >> 0x20) + -1 + iVar23) / iVar23;
    local_1180 = CONCAT44(iVar15,iVar14);
    uVar13 = (undefined4)
             ((longlong)
              ((ulonglong)(uint)((int)local_1118 >> 0x1f) << 0x20 | local_1118 & 0xffffffff) /
             (longlong)iVar38);
    iStack_1184 = (int)(local_1118 >> 0x20);
    lVar20 = (longlong)iStack_1184;
    iStack_1184 = iStack_1184 / iVar23;
    _local_1188 = CONCAT44(iStack_1184,uVar13);
    local_1128 = CONCAT44(iStack_1184,uVar13);
    uStack_1120 = CONCAT44(iVar15,iVar14);
    (**(code **)(*plVar33 + 0x30))(plVar33,lVar20 % (longlong)iVar23 & 0xffffffff);
    uVar31 = local_1170;
  }
  uVar22 = uStack_1120;
  uVar35 = local_1128;
  if (*(char *)((longlong)param_1 + 10) == '\0') {
    TRenderingCompositePassBase<2,1>::WaitForInputPassComputeFences<FRHICommandListImmediate>
              (param_1,plVar16[8]);
    iVar23 = local_10f8._4_4_;
    if ((((*(int *)(DAT_146a61cc0 + 4) == 1) && ((int)local_1140 == 0)) && (local_1140._4_4_ == 0))
       && ((local_1108 == iVar24 && (iStack_1104 == local_10f8._4_4_)))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    local_11f0 = local_11f0 & 0xffffffffffffff00;
    local_10f8 = (float *)0x0;
    uVar36 = 5;
    if (bVar9) {
      uVar36 = 0;
    }
    local_11f8 = (float *)CONCAT44(local_11f8._4_4_,0x22);
    FUN_141ad74f0(plVar16[8],*local_1100,0,uVar36);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_10f8);
    local_1128 = 0;
    uStack_1120 = CONCAT44(iVar23,iVar24);
    local_1118 = 0;
    plStack_1110 = (longlong *)uStack_1120;
    FRenderingCompositePassContext::SetViewportAndCallRHI(plVar16,&local_1118);
    uVar30 = plVar16[1];
    lVar20 = plVar17[2];
    iVar38 = ((int)plVar16[2] + -1 + (int)local_1168) / (int)local_1168;
    iVar14 = ((int)((ulonglong)plVar16[2] >> 0x20) + -1 + iStack_10ec) / iStack_10ec;
    local_1138 = (longlong *)CONCAT44(iVar14,iVar38);
    plVar33 = local_1138;
    iVar23 = (int)((longlong)((ulonglong)(uint)((int)uVar30 >> 0x1f) << 0x20 | uVar30 & 0xffffffff)
                  / (longlong)(int)local_1168);
    local_1168._4_4_ = (int)(uVar30 >> 0x20);
    lVar18 = (longlong)local_1168._4_4_;
    iVar15 = local_1168._4_4_ / iStack_10ec;
    local_1168 = CONCAT44(iVar15,iVar23);
    uVar30 = local_1168;
    local_1118 = local_1168;
    plStack_1110 = local_1138;
    local_1180 = 0;
    local_1128 = uVar35;
    uStack_1120 = uVar22;
    uVar22 = FUN_141c499e0(local_1138,lVar18 % (longlong)iStack_10ec & 0xffffffff);
    local_11b0 = local_1198;
    local_11b8 = &local_1128;
    local_11d0 = (float *)&local_1180;
    local_11d8._0_4_ = local_1148;
    local_11e0 = local_8b8;
    local_11e8 = local_10b8;
    local_11f0._0_4_ = local_1178;
    local_11f8 = (float *)uVar31;
    local_11c8 = &local_1118;
    local_11c0 = uVar6;
    FUN_141cf4f70(plVar16[8],local_1144,uVar22,lVar20);
    uVar22 = uStack_1150;
    uVar31 = local_1158;
    local_1198 = local_1158;
    uStack_1190 = uStack_1150;
    local_1158 = uVar30;
    uStack_1150 = plVar33;
    if ((local_11a8 != '\0') && ((int)param_1[0x17] == 0)) {
      iVar23 = (int)local_1140 * 2;
      iVar38 = local_1108 * 2;
    }
    local_11b0 = CONCAT44(local_11b0._4_4_,1);
    local_11b8 = (ulonglong *)CONCAT44(local_11b8._4_4_,1);
    local_1198._4_4_ = (int)(uVar31 >> 0x20);
    uStack_1190._4_4_ = (int)((ulonglong)uVar22 >> 0x20);
    local_11c0 = local_1180;
    local_11d8 = (float *)CONCAT44(local_11d8._4_4_,(float)(iVar14 - iVar15));
    local_11e0 = (float *)CONCAT44(local_11e0._4_4_,(float)(iVar38 - iVar23));
    local_11e8 = (float *)CONCAT44(local_11e8._4_4_,(float)iVar15);
    local_11f0 = CONCAT44(local_11f0._4_4_,(float)iVar23);
    local_11f8 = (float *)CONCAT44(local_11f8._4_4_,(float)(uStack_1190._4_4_ - local_1198._4_4_));
    local_11d0 = pfVar7;
    local_11c8 = (ulonglong *)uVar6;
    local_1198 = uVar31;
    uStack_1190 = uVar22;
    FUN_141ca7700();
    lVar20 = plVar16[8];
    uVar6 = local_1100[1];
    plVar16 = (longlong *)*local_1100;
    local_10e8 = 0xffffffff00000000;
    uStack_10e0 = 0xffffffffffffffff;
    local_10c8 = 0xffffffff;
    uStack_10c0 = 0;
    local_10d8 = 0xffffffffffffffff;
    uStack_10d0 = 0xffffffffffffffff;
    puVar34 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar25 = puVar34 + 10;
    if (*(undefined8 **)(lVar20 + 0x38) < puVar25) {
      FMemStackBase::AllocateNewChunk(lVar20 + 0x30,0x58);
      puVar34 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar34 + 10;
    }
    *(undefined8 **)(lVar20 + 0x30) = puVar25;
    *(int *)(lVar20 + 0x14) = *(int *)(lVar20 + 0x14) + 1;
    **(undefined8 **)(lVar20 + 8) = puVar34;
    *(undefined8 **)(lVar20 + 8) = puVar34 + 1;
    puVar34[1] = 0;
    *puVar34 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar34 + 2) = (undefined4)local_10e8;
    *(undefined4 *)((longlong)puVar34 + 0x14) = local_10e8._4_4_;
    *(undefined4 *)(puVar34 + 3) = (undefined4)uStack_10e0;
    *(undefined4 *)((longlong)puVar34 + 0x1c) = uStack_10e0._4_4_;
    *(undefined4 *)(puVar34 + 4) = (undefined4)local_10d8;
    *(undefined4 *)((longlong)puVar34 + 0x24) = local_10d8._4_4_;
    *(undefined4 *)(puVar34 + 5) = (undefined4)uStack_10d0;
    *(undefined4 *)((longlong)puVar34 + 0x2c) = uStack_10d0._4_4_;
    *(undefined4 *)(puVar34 + 6) = (undefined4)local_10c8;
    *(undefined4 *)((longlong)puVar34 + 0x34) = local_10c8._4_4_;
    *(undefined4 *)(puVar34 + 7) = (undefined4)uStack_10c0;
    *(undefined4 *)((longlong)puVar34 + 0x3c) = uStack_10c0._4_4_;
    puVar34[8] = plVar16;
    puVar34[9] = uVar6;
    lVar20 = (**(code **)(*plVar16 + 8))(plVar16);
    if ((lVar20 == 0) && (lVar20 = (**(code **)(*(longlong *)puVar34[8] + 0x18))(), lVar20 == 0)) {
      (**(code **)(*(longlong *)puVar34[8] + 0x20))();
    }
    lVar20 = (**(code **)(*(longlong *)puVar34[9] + 8))();
    if ((lVar20 == 0) && (lVar20 = (**(code **)(*(longlong *)puVar34[9] + 0x18))(), lVar20 == 0)) {
      (**(code **)(*(longlong *)puVar34[9] + 0x20))();
    }
  }
  else {
    local_1158 = plVar16[1];
    iStack_1184 = (int)(local_1158 >> 0x20);
    iStack_1184 = iStack_1184 + local_10f8._4_4_;
    iVar24 = (int)local_1158 + iVar24;
    _local_1188 = CONCAT44(iStack_1184,iVar24);
    uStack_1150 = (longlong *)CONCAT44(iStack_1184,iVar24);
    FUN_141a19150(plVar16[8],0,0,0);
    local_1118 = local_1158;
    plStack_1110 = uStack_1150;
    FRenderingCompositePassContext::SetViewportAndCallRHI(plVar16,&local_1118);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a7f948) &&
       (_Init_thread_header(&DAT_146a7f948), DAT_146a7f948 == -1)) {
      FName::FName(&DAT_146a7f940,L"AsyncWeightedSampleSumEndFence",1);
      _Init_thread_footer(&DAT_146a7f948);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_1180,&DAT_146a7f940);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1d);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1180);
    if (((*(char *)((longlong)param_1 + 10) == '\0') || (*(char *)((longlong)param_1 + 0xb) == '\0')
        ) || (DAT_146ab62f0 == '\0')) {
      TRenderingCompositePassBase<2,1>::WaitForInputPassComputeFences<FRHICommandListImmediate>
                (param_1,plVar16[8]);
      lVar20 = plVar16[8];
      local_1198 = local_1100[2];
      puVar34 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar34 + 1;
      if (*(undefined8 **)(lVar20 + 0x38) < puVar25) {
        FMemStackBase::AllocateNewChunk(lVar20 + 0x30);
        puVar34 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar25 = puVar34 + 1;
      }
      *(undefined8 **)(lVar20 + 0x30) = puVar25;
      *puVar34 = local_1198;
      puVar26 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar26 + 6;
      if (*(undefined8 **)(lVar20 + 0x38) < puVar25) {
        FMemStackBase::AllocateNewChunk(lVar20 + 0x30);
        puVar26 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar25 = puVar26 + 6;
      }
      puVar10 = local_1100;
      *(undefined8 **)(lVar20 + 0x30) = puVar25;
      *(int *)(lVar20 + 0x14) = *(int *)(lVar20 + 0x14) + 1;
      **(undefined8 **)(lVar20 + 8) = puVar26;
      *(undefined8 **)(lVar20 + 8) = puVar26 + 1;
      puVar26[1] = 0;
      *puVar26 = &PTR_LAB_144d91e60;
      local_11c8 = (ulonglong *)CONCAT44(local_11c8._4_4_,local_1148);
      local_11d0 = local_10b8;
      local_11d8 = local_8b8;
      local_11e0 = (float *)CONCAT44(local_11e0._4_4_,local_1178);
      *(undefined4 *)(puVar26 + 2) = 1;
      puVar26[3] = puVar34;
      puVar26[4] = 2;
      puVar26[5] = 0;
      local_11f0 = plVar17[2];
      local_11f8 = (float *)local_1100[2];
      local_11e8 = (float *)uVar31;
      FUN_141c983d0(param_1,plVar16[8],plVar16,&local_1158);
      local_1198 = puVar10[2];
      lVar20 = plVar16[8];
      lVar18 = param_1[0x1d];
      puVar32 = (ulonglong *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar32 + 1;
      if (*(ulonglong **)(lVar20 + 0x38) < puVar21) {
        FMemStackBase::AllocateNewChunk(lVar20 + 0x30);
        puVar32 = (ulonglong *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar21 = puVar32 + 1;
      }
      *(ulonglong **)(lVar20 + 0x30) = puVar21;
      *puVar32 = local_1198;
      puVar34 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar34 + 6;
      if (*(undefined8 **)(lVar20 + 0x38) < puVar25) {
        FMemStackBase::AllocateNewChunk(lVar20 + 0x30);
        puVar34 = (undefined8 *)(*(longlong *)(lVar20 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar25 = puVar34 + 6;
      }
      *(undefined8 **)(lVar20 + 0x30) = puVar25;
      *(int *)(lVar20 + 0x14) = *(int *)(lVar20 + 0x14) + 1;
      **(undefined8 **)(lVar20 + 8) = puVar34;
      *(undefined8 **)(lVar20 + 8) = puVar34 + 1;
      puVar34[1] = 0;
      *puVar34 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar34 + 2) = 1;
      puVar34[3] = puVar32;
      *(undefined4 *)(puVar34 + 4) = 0;
      *(undefined4 *)((longlong)puVar34 + 0x24) = 1;
      puVar34[5] = lVar18;
    }
    else {
      plVar33 = param_1 + 2;
      if (plVar33 != param_1 + 6) {
        do {
          plVar16 = (longlong *)*plVar33;
          if (((plVar16 == (longlong *)0x0) || (*(char *)((longlong)plVar16 + 10) == '\0')) ||
             ((*(char *)((longlong)plVar16 + 0xb) == '\0' || (DAT_146ab62f0 == '\0')))) {
            cVar27 = '\0';
          }
          else {
            cVar27 = '\x01';
          }
          cVar11 = FRenderingCompositePass::IsAsyncComputePass(param_1);
          if (((cVar11 != cVar27) && (plVar16 != (longlong *)0x0)) &&
             (lVar20 = (**(code **)(*plVar16 + 0x80))(plVar16), lVar20 != 0)) {
            puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar21 = puVar25 + 3;
            if (DAT_146ab7068 < puVar25 + 3) {
              FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
              puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
              puVar21 = puVar25 + 3;
            }
            DAT_146ab7060 = puVar21;
            _DAT_146ab7044 = _DAT_146ab7044 + 1;
            *DAT_146ab7038 = puVar25;
            DAT_146ab7038 = puVar25 + 1;
            *DAT_146ab7038 = 0;
            *puVar25 = &PTR_LAB_144dc9d10;
            puVar25[2] = lVar20;
          }
          plVar33 = plVar33 + 2;
          plVar16 = local_1138;
        } while (plVar33 != param_1 + 6);
      }
      puVar25 = local_1100;
      puVar34 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      local_1198 = local_1100[2];
      puVar21 = puVar34 + 1;
      if (DAT_146ab7068 < puVar21) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar34 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar21 = puVar34 + 1;
      }
      DAT_146ab7060 = puVar21;
      *puVar34 = local_1198;
      puVar26 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar21 = puVar26 + 6;
      if (DAT_146ab7068 < puVar21) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar26 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar21 = puVar26 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar21;
      *DAT_146ab7038 = puVar26;
      DAT_146ab7038 = puVar26 + 1;
      *DAT_146ab7038 = 0;
      *puVar26 = &PTR_LAB_144dc9d00;
      local_11c8 = (ulonglong *)CONCAT44(local_11c8._4_4_,local_1148);
      local_11d0 = local_10b8;
      local_11d8 = local_8b8;
      local_11e0 = (float *)CONCAT44(local_11e0._4_4_,local_1178);
      puVar26[5] = 0;
      *(undefined4 *)(puVar26 + 2) = 1;
      puVar26[3] = puVar34;
      puVar26[4] = 2;
      local_11f0 = plVar17[2];
      local_11f8 = (float *)puVar25[2];
      local_11e8 = (float *)uVar31;
      FUN_141c96f60(param_1,&DAT_146ab7030,plVar16,&local_1158);
      local_1198 = puVar25[2];
      lVar20 = param_1[0x1d];
      puVar32 = (ulonglong *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar21 = puVar32 + 1;
      if (DAT_146ab7068 < puVar21) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar32 = (ulonglong *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar21 = puVar32 + 1;
      }
      DAT_146ab7060 = puVar21;
      *puVar32 = local_1198;
      puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar21 = puVar25 + 6;
      if (DAT_146ab7068 < puVar21) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar25 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar21 = puVar25 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar21;
      *DAT_146ab7038 = puVar25;
      DAT_146ab7038 = puVar25 + 1;
      *DAT_146ab7038 = 0;
      *puVar25 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar25 + 2) = 1;
      puVar25[3] = puVar32;
      *(undefined4 *)(puVar25 + 4) = 0;
      *(undefined4 *)((longlong)puVar25 + 0x24) = 1;
      puVar25[5] = lVar20;
      FUN_141ec93f0(&DAT_146ab7030);
    }
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1170);
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x30))(plVar17);
  }
  return;
}



// FUNCTION 141cf2100 FUN_141cf2100 body=580 status=ok
// SIG undefined FUN_141cf2100(void)

void FUN_141cf2100(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_28;
  undefined4 local_20;
  
  pvVar3 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar8 * 8) + 0x38) < DAT_146a7f958) &&
     (_Init_thread_header(&DAT_146a7f958), DAT_146a7f958 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.HiddenAreaMask");
    uVar8 = uVar11;
    if (plVar7 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a7f950 = uVar8;
    _Init_thread_footer(&DAT_146a7f958);
  }
  if ((((DAT_146a7f950 != 0) && (*(int *)(DAT_146a7f950 + 4) == 1)) && (DAT_146b17150 != 0)) &&
     ((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0 &&
      (lVar6 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(), lVar6 != 0)))) {
    plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    cVar4 = (**(code **)(*plVar7 + 0x100))(plVar7);
    if (cVar4 != '\0') {
      uVar5 = 1;
      goto LAB_141cf21a5;
    }
  }
  uVar5 = 0;
LAB_141cf21a5:
  *(undefined1 *)(param_1 + 0x69) = uVar5;
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    puVar9 = (undefined8 *)*param_2;
    iVar2 = *(int *)(DAT_146a61cf0 + 4);
    uVar8 = (longlong)iVar1 & 0x1fffffffffffffff;
    if (puVar9 + iVar1 < puVar9) {
      uVar8 = uVar11;
    }
    uVar10 = uVar11;
    if (uVar8 != 0) {
      do {
        FUN_141cf2610(*puVar9);
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 != uVar8);
    }
    if (iVar2 == 0) {
      plVar7 = (longlong *)*param_2;
      uVar8 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
      if (plVar7 + (int)param_2[1] < plVar7) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        do {
          local_28 = *plVar7;
          local_20 = 0;
          FRenderingCompositionGraph::RecursivelyProcess(param_1 + 0x30,&local_28,param_1);
          uVar11 = uVar11 + 1;
          plVar7 = plVar7 + 1;
        } while (uVar11 != uVar8);
      }
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x30);
      uVar8 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(param_1 + 0x38) < plVar7) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        do {
          local_28 = *plVar7;
          if (*(char *)(local_28 + 8) != '\0') {
            local_20 = 0;
            FRenderingCompositionGraph::RecursivelyProcess(param_1 + 0x30,&local_28,param_1);
          }
          plVar7 = plVar7 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar8);
      }
    }
  }
  return;
}



// FUNCTION 141cf2350 FUN_141cf2350 body=331 status=ok
// SIG undefined FUN_141cf2350(void)

void FUN_141cf2350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,uint param_6,uint param_7,undefined8 param_8,undefined8 param_9
                  ,longlong *param_10)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_18 [2];
  
  (**(code **)(*DAT_146ab6358 + 0x5f0))
            (DAT_146ab6358,local_18,&DAT_146ab6e78,param_1,param_2,param_3,param_4,param_5,
             param_6 | param_7 | 8,param_8);
  if (param_10 != local_18) {
    puVar3 = (undefined8 *)*param_10;
    lVar6 = 0;
    *param_10 = local_18[0];
    local_18[0] = 0;
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
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 != 0) {
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
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_9,*param_10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_18);
  return;
}



// FUNCTION 141cf24a0 FUN_141cf24a0 body=359 status=ok
// SIG undefined FUN_141cf24a0(void)

void FUN_141cf24a0(undefined4 param_1,undefined1 param_2,undefined4 param_3,uint param_4,
                  uint param_5,char param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  cVar1 = '\0';
  if (0 < DAT_1464c9c14) {
    cVar1 = param_6;
  }
  if (cVar1 == '\0') {
    (**(code **)(*DAT_146ab6358 + 0x660))();
    puVar2 = (undefined8 *)TRefCountPtr<FRHIIndexBuffer>::operator=(param_9,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_8,*puVar2);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_18);
  }
  else {
    (**(code **)(*DAT_146ab6358 + 0x660))
              (DAT_146ab6358,local_18,&DAT_146ab6e78,param_1,param_2,param_3,param_4 | param_5,
               param_7);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_18);
    (**(code **)(*DAT_146ab6358 + 0x660))
              (DAT_146ab6358,local_18,&DAT_146ab6e78,param_1,param_2,param_3,param_4 | 10,param_7);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_9,local_18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_18);
  }
  return;
}



// FUNCTION 141cf2610 FUN_141cf2610 body=576 status=ok
// SIG undefined FUN_141cf2610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cf2610(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((char)param_1[1] == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1,0);
    iVar10 = 1;
    while (plVar5 != (longlong *)0x0) {
      plVar1 = (longlong *)*plVar5;
      if ((plVar1 != (longlong *)0x0) &&
         (lVar6 = (**(code **)(*plVar1 + 0x38))(plVar1,(int)plVar5[1]), lVar6 != 0)) {
        *(int *)(lVar6 + 0x58) = *(int *)(lVar6 + 0x58) + 1;
      }
      if (*plVar5 != 0) {
        FUN_141cf2610();
      }
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1,iVar10);
      iVar10 = iVar10 + 1;
    }
    iVar10 = 0;
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x38))(param_1,0);
    if (puVar7 != (undefined4 *)0x0) {
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x70))(param_1,local_78,iVar10);
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar7 = *puVar8;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar7[4] = puVar8[4];
        puVar7[5] = puVar8[5];
        puVar7[6] = puVar8[6];
        puVar7[7] = puVar8[7];
        puVar7[8] = puVar8[8];
        *(undefined1 *)(puVar7 + 9) = *(undefined1 *)(puVar8 + 9);
        *(undefined1 *)((longlong)puVar7 + 0x25) = *(undefined1 *)((longlong)puVar8 + 0x25);
        *(undefined2 *)((longlong)puVar7 + 0x26) = *(undefined2 *)((longlong)puVar8 + 0x26);
        *(undefined2 *)(puVar7 + 10) = *(undefined2 *)(puVar8 + 10);
        puVar7[0xb] = puVar8[0xb];
        puVar7[0xc] = puVar8[0xc];
        puVar7[0xd] = puVar8[0xd];
        *(undefined1 *)(puVar7 + 0xe) = *(undefined1 *)(puVar8 + 0xe);
        *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
        *(undefined1 *)(puVar7 + 0x12) = *(undefined1 *)(puVar8 + 0x12);
        *(undefined1 *)((longlong)puVar7 + 0x49) = *(undefined1 *)((longlong)puVar8 + 0x49);
        if ((*(int *)(lVar6 + 0x38) < DAT_146a7f968) &&
           (_Init_thread_header(&DAT_146a7f968), DAT_146a7f968 == -1)) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          plVar5 = (longlong *)
                   (**(code **)(*DAT_1468b1f88 + 0x98))
                             (DAT_1468b1f88,L"r.PostProcessingColorFormat");
          lVar9 = 0;
          if (plVar5 != (longlong *)0x0) {
            lVar9 = (**(code **)(*plVar5 + 0x38))(plVar5);
          }
          DAT_146a7f960 = lVar9;
          _Init_thread_footer(&DAT_146a7f968);
        }
        if (((*(int *)(DAT_146a7f960 + 4) == 1) && ((puVar7[0xb] - 9 & 0xffffffee) == 0)) &&
           (puVar7[0xb] != 0x19)) {
          puVar7[0xb] = 1;
        }
        iVar10 = iVar10 + 1;
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x38))(param_1,iVar10);
      } while (puVar7 != (undefined4 *)0x0);
    }
  }
  return;
}



// FUNCTION 141cf2850 RecursivelyProcess body=295 status=ok
// SIG undefined RecursivelyProcess(void)

void FRenderingCompositionGraph::RecursivelyProcess
               (undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,(int)param_2[1]);
  }
  if (*(char *)((longlong)plVar1 + 9) == '\0') {
    *(undefined1 *)((longlong)plVar1 + 9) = 1;
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,0);
    iVar6 = 1;
    iVar5 = 1;
    while (plVar3 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,(int)plVar3[1]);
        *(longlong **)(param_3 + 0x28) = plVar1;
        RecursivelyProcess(param_1,plVar3,param_3);
      }
      plVar3 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,iVar5);
      iVar5 = iVar5 + 1;
    }
    *(longlong **)(param_3 + 0x28) = plVar1;
    *(undefined8 *)(param_3 + 0x48) = 0;
    *(undefined8 *)(param_3 + 0x50) = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,0);
    while (plVar3 != (longlong *)0x0) {
      plVar2 = (longlong *)*plVar3;
      if ((((plVar2 != (longlong *)0x0) &&
           (lVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,(int)plVar3[1]), lVar4 != 0)) &&
          (*(int *)(lVar4 + 0x58) != 0)) &&
         (iVar5 = *(int *)(lVar4 + 0x58) + -1, *(int *)(lVar4 + 0x58) = iVar5, iVar5 == 0)) {
        plVar3 = *(longlong **)(lVar4 + 0x50);
        *(undefined8 *)(lVar4 + 0x50) = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))();
        }
      }
      plVar3 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,iVar6);
      iVar6 = iVar6 + 1;
    }
  }
  return;
}



// FUNCTION 141cf2980 FUN_141cf2980 body=193 status=ok
// SIG undefined FUN_141cf2980(void)

int FUN_141cf2980(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x17) != '\0') {
    return 1;
  }
  piVar1 = (int *)(param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (*piVar1 == 0) {
    FSceneRenderTargetItem::SafeRelease(param_1 + 1);
    (**(code **)*param_1)(param_1,1);
    return iVar2;
  }
  if (((iVar2 == 1) && (param_1[0x18] != 0)) && (*(int *)(param_1 + 0x13) < 0)) {
    lVar3 = param_1[1];
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x11) != '\0')) {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6b0))(DAT_146ab6358,lVar3);
      }
      *(undefined1 *)(lVar3 + 0x11) = 0;
    }
    *(undefined4 *)(param_1 + 0x19) = DAT_1464aaa90;
  }
  return iVar2;
}



// FUNCTION 141cf2a50 FUN_141cf2a50 body=490 status=ok
// SIG undefined FUN_141cf2a50(void)

void FUN_141cf2a50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  longlong *plVar5;
  
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(1);
  puVar3 = (undefined *)0x0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(&DAT_146ab6e78);
    puVar3 = &DAT_146ab6e78;
    if (cVar1 == '\0') {
      puVar3 = (undefined *)0x0;
    }
  }
  LOCK();
  DAT_1469fd110 = DAT_1469fd110 + 1;
  UNLOCK();
  FUN_141ce4020(param_1);
  iVar2 = *(int *)(param_1 + 0x124);
  plVar5 = *(longlong **)(param_1 + 0x118);
  iVar4 = *(int *)(param_1 + 0x120);
  if (iVar2 < 0) {
    if (iVar4 != 0) {
      do {
        if (*plVar5 != 0) {
          FUN_141cf2980();
        }
        plVar5 = plVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar2 = *(int *)(param_1 + 0x124);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (iVar2 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x118),0);
    }
  }
  else {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FUN_141cf2980();
      }
      plVar5 = plVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  FUN_141ec6070(1);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(1);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  (**(code **)(*DAT_146ab6358 + 0x388))();
  LOCK();
  DAT_1469fd110 = DAT_1469fd110 + -1;
  UNLOCK();
  if (puVar3 != (undefined *)0x0) {
    FRHICommandListImmediate::UnStallRHIThread(puVar3);
  }
  return;
}



// FUNCTION 141cf2c40 FUN_141cf2c40 body=2097 status=ok
// SIG undefined FUN_141cf2c40(void)

void FUN_141cf2c40(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  FUN_141cf3700();
  uVar4 = 0;
  plVar5 = (longlong *)(param_1 + 0x30);
  lVar3 = 3;
  do {
    plVar1 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    plVar5 = plVar5 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  plVar5 = *(longlong **)(param_1 + 0xa8);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (**(code **)(*plVar5 + 0x30))();
    plVar5 = *(longlong **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))();
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,0);
  plVar5 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x140,0);
  plVar5 = *(longlong **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x300) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  TArray<TRefCountPtr<FVulkanBufferView>,FDefaultAllocator>::Empty(param_1 + 0x310,0);
  plVar5 = *(longlong **)(param_1 + 800);
  *(undefined8 *)(param_1 + 800) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  TArray<TRefCountPtr<FVulkanBufferView>,FDefaultAllocator>::Empty(param_1 + 0x328,0);
  plVar5 = *(longlong **)(param_1 + 0x338);
  *(undefined8 *)(param_1 + 0x338) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  TArray<TRefCountPtr<FVulkanBufferView>,FDefaultAllocator>::Empty(param_1 + 0x340,0);
  plVar5 = (longlong *)(param_1 + 0x150);
  uVar6 = uVar4;
  do {
    plVar1 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar2;
    plVar5 = plVar5 + 1;
  } while (uVar2 < 4);
  plVar5 = (longlong *)(param_1 + 0x170);
  uVar6 = uVar4;
  do {
    plVar1 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar2;
    plVar5 = plVar5 + 1;
  } while (uVar2 < 2);
  plVar5 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = (longlong *)(param_1 + 0x188);
  uVar6 = uVar4;
  do {
    plVar1 = (longlong *)*plVar5;
    *plVar5 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    uVar2 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar2;
    plVar5 = plVar5 + 1;
  } while (uVar2 < 2);
  plVar5 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  if (0 < *(int *)(param_1 + 0x1c0)) {
    uVar6 = uVar4;
    do {
      lVar3 = *(longlong *)(param_1 + 0x1b8);
      if (*(longlong *)(param_1 + 0x1b8) == 0) {
        lVar3 = param_1 + 0x1a0;
      }
      plVar5 = *(longlong **)(lVar3 + uVar6);
      *(undefined8 *)(lVar3 + uVar6) = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))();
      }
      lVar3 = *(longlong *)(param_1 + 0x1e0);
      if (*(longlong *)(param_1 + 0x1e0) == 0) {
        lVar3 = param_1 + 0x1c8;
      }
      plVar5 = *(longlong **)(lVar3 + uVar6);
      *(undefined8 *)(lVar3 + uVar6) = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))();
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      uVar6 = uVar6 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x1c0));
  }
  plVar5 = *(longlong **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x420) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_141ace450();
    lVar3 = *(longlong *)(param_1 + 0x430);
    if (lVar3 != 0) {
      FUN_141ace450(lVar3);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3);
      FMemory::operator_delete(lVar3,0x28);
    }
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  if (*(longlong *)(param_1 + 0x428) != 0) {
    FUN_141ace450();
    lVar3 = *(longlong *)(param_1 + 0x428);
    if (lVar3 != 0) {
      FUN_141ace450(lVar3);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3);
      FMemory::operator_delete(lVar3,0x28);
    }
    *(undefined8 *)(param_1 + 0x428) = 0;
  }
  if (*(longlong *)(param_1 + 0x438) != 0) {
    FUN_141ace450();
    lVar3 = *(longlong *)(param_1 + 0x438);
    if (lVar3 != 0) {
      FUN_141ace450(lVar3);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3 + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar3);
      FMemory::operator_delete(lVar3,0x28);
    }
    *(undefined8 *)(param_1 + 0x438) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
  }
  plVar5 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141cf3468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x30))();
  return;
}



// FUNCTION 141cf3480 FUN_141cf3480 body=526 status=ok
// SIG undefined FUN_141cf3480(void)

void FUN_141cf3480(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x250) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x288) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  return;
}



// FUNCTION 141cf3690 FUN_141cf3690 body=108 status=ok
// SIG undefined FUN_141cf3690(void)

void FUN_141cf3690(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cf36f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  return;
}



// FUNCTION 141cf3700 FUN_141cf3700 body=201 status=ok
// SIG undefined FUN_141cf3700(void)

void FUN_141cf3700(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  return;
}



// FUNCTION 141cf37d0 FUN_141cf37d0 body=132 status=ok
// SIG undefined FUN_141cf37d0(void)

void FUN_141cf37d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(param_1 + 0x30);
  lVar3 = 3;
  do {
    plVar1 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (**(code **)(*plVar2 + 0x30))();
    plVar2 = *(longlong **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
  }
  return;
}



// FUNCTION 141cf3860 FUN_141cf3860 body=28 status=ok
// SIG undefined FUN_141cf3860(void)

void FUN_141cf3860(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cf3877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1);
    return;
  }
  return;
}



// FUNCTION 141cf3880 RemoveAtImpl body=214 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::RemoveAtImpl
               (longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    plVar3 = (longlong *)(lVar2 + (longlong)param_2 * 8);
    iVar4 = param_3;
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x30))();
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)(param_1 + 0x20);
    iVar1 = (iVar4 - param_2) - param_3;
    if (iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar2 = param_1;
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)param_2 * 8),
                 (void *)(lVar2 + (longlong)(param_2 + param_3) * 8),(longlong)iVar1 << 3);
      iVar4 = *(int *)(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x20) = iVar4 - param_3;
    if (param_4 != '\0') {
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141cf3960 RenderTargetPoolEvents body=192 status=ok
// SIG undefined RenderTargetPoolEvents(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RenderTargetPoolEvents(longlong *param_1)

{
  char cVar1;
  wchar_t *_Str;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  if ((int)param_1[1] != 0) {
    cVar1 = FString::IsNumeric(*param_1);
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_1;
      }
      dVar4 = _wtof(_Str);
      if ((int)(longlong)dVar4 != -1) {
        _DAT_1464c26bc = (int)(longlong)dVar4;
        DAT_1464c26b9 = 1;
        return;
      }
    }
  }
  if (DAT_1464c26d0 != 0) {
    plVar2 = (longlong *)(DAT_1464c26c8 + 0x18);
    iVar3 = DAT_1464c26d0;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x12;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_1464c26d0 = 0;
  if (DAT_1464c26d4 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_1464c26c8,0);
  }
  DAT_1464c26c1 = 0;
  return;
}



// FUNCTION 141cf3a20 FUN_141cf3a20 body=687 status=ok
// SIG undefined FUN_141cf3a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141cf3a20(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  wchar_t *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  iVar1 = *(int *)(DAT_146a61e90 + 4);
  iVar2 = *(int *)(param_1 + 0x3c8);
  if (iVar1 == 1) {
    if (param_3 != '\0') goto LAB_141cf3a62;
  }
  else if (iVar1 == 2) goto LAB_141cf3a62;
  if (iVar1 != 3) {
    return 0;
  }
LAB_141cf3a62:
  if ((((*(longlong **)(param_1 + 0x130) == (longlong *)0x0) ||
       (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))(),
       *(int *)(param_1 + 0x378) != *(int *)(lVar5 + 0x14))) ||
      (*(int *)(param_1 + 0x37c) != *(int *)(lVar5 + 0x18))) || (DAT_146a9dad4 != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (iVar2 < 2) {
    if (((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) ||
        (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))(),
        *(int *)(param_1 + 0x378) != *(int *)(lVar5 + 0x14))) ||
       (*(int *)(param_1 + 0x37c) != *(int *)(lVar5 + 0x18))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  else {
    bVar6 = *(longlong *)(param_1 + 0x140) != 0;
  }
  if ((!bVar4) || (!bVar6)) {
    uVar3 = *(undefined8 *)(param_1 + 0x378);
    local_74 = (undefined4)uVar3;
    local_98._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_70 = local_98._4_4_;
    local_78 = DAT_1464c9d28;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = L"CustomDepth";
    local_88 = _DAT_1464c9d18;
    uStack_84 = uRam00000001464c9d1c;
    uStack_80 = uRam00000001464c9d20;
    uStack_7c = uRam00000001464c9d24;
    local_6c = 0;
    local_68 = 1;
    local_64 = 0x10000;
    local_60 = 1;
    local_5c = CONCAT44(DAT_146a9dab4 | 0x2000000,0xb);
    local_54 = 4;
    local_50 = 0;
    local_48 = L"UnknownTexture2D";
    local_40 = 1;
    local_98 = uVar3;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88,param_1 + 0x130);
    if (iVar2 < 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x378);
      local_74 = (undefined4)uVar3;
      local_98._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_70 = local_98._4_4_;
      local_78 = DAT_1464c9cc8;
      local_a8 = 1;
      local_b0 = 1;
      local_b8 = L"MobileCustomStencil";
      local_88 = _DAT_1464c9cb8;
      uStack_84 = uRam00000001464c9cbc;
      uStack_80 = uRam00000001464c9cc0;
      uStack_7c = DAT_1464c9cc4;
      local_6c = 0;
      local_68 = 1;
      local_64 = 0x10000;
      local_60 = 1;
      local_5c = 2;
      local_54 = 1;
      local_50 = 0;
      local_48 = L"UnknownTexture2D";
      local_40 = 1;
      local_98 = uVar3;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_88,param_1 + 0x138);
    }
    else {
      local_a8 = 0x2c;
      local_b0 = 1;
      local_b8 = (wchar_t *)((ulonglong)local_b8 & 0xffffffffffffff00);
      (**(code **)(*DAT_146ab6358 + 0x650))
                (DAT_146ab6358,&local_98,&DAT_146ab6e78,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x140,&local_98);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
    }
  }
  return *(undefined8 *)(param_1 + 0x130);
}



// FUNCTION 141cf3cd0 FUN_141cf3cd0 body=421 status=ok
// SIG undefined FUN_141cf3cd0(void)

undefined * FUN_141cf3cd0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    cVar3 = FPooledRenderTargetDesc::IsValid();
    if (cVar3 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146a7f9c0) {
        _Init_thread_header(&DAT_146a7f9c0);
        if (DAT_146a7f9c0 == -1) {
          atexit(`FRenderingCompositeOutput::RequestSurface'::`8'::
                 _dynamic_atexit_destructor_for__Null__);
          _Init_thread_footer(&DAT_146a7f9c0);
        }
      }
      return &DAT_146a7f970;
    }
    FUN_141ce20b0(&PTR_PTR_1464c2560,*(undefined8 *)(param_2 + 0x40),param_1,
                  (longlong *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),1,1);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
    lVar2 = *(longlong *)(param_2 + 0x40);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 1;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar4;
    *puVar6 = uVar1;
    puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar4;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar5;
    *(undefined8 **)(lVar2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar5 + 2) = 1;
    puVar5[3] = puVar6;
    *(undefined4 *)(puVar5 + 4) = 1;
    *(undefined1 *)((longlong)puVar5 + 0x24) = 0;
  }
  return (undefined *)(*(longlong *)(param_1 + 0x50) + 8);
}



// FUNCTION 141cf3e80 RequiresSecondaryUpscale body=96 status=ok
// SIG undefined RequiresSecondaryUpscale(void)

undefined1 FViewInfo::RequiresSecondaryUpscale(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 0x374);
  iVar2 = *(int *)(param_1 + 0x36c);
  iVar3 = *(int *)(param_1 + 0x370);
  iVar4 = *(int *)(param_1 + 0x368);
  piVar5 = (int *)FUN_141d6a140(param_1,local_res8);
  if ((iVar3 - iVar4 == *piVar5) && (iVar1 - iVar2 == piVar5[1])) {
    return 0;
  }
  return 1;
}



// FUNCTION 141cf3ee0 FUN_141cf3ee0 body=149 status=ok
// SIG undefined FUN_141cf3ee0(void)

void FUN_141cf3ee0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (param_3 < 4) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x18);
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
        *(void **)((longlong)param_1 + 0x18) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  return;
}



// FUNCTION 141cf3f80 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 < 4) {
    iVar2 = 3;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x24) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x24) = iVar2;
  FUN_141cf3ee0(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 141cf4010 ResizeShrink body=144 status=ok
// SIG undefined ResizeShrink(void)

void TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24);
  if (uVar2 < 4) {
    uVar2 = 3;
    goto LAB_141cf4079;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x24);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_141cf4079;
    }
    if (uVar2 == 0) goto LAB_141cf4079;
  }
  uVar2 = uVar3;
LAB_141cf4079:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x24) = uVar2;
    FUN_141cf3ee0(param_1,*(undefined4 *)(param_1 + 0x20),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 141cf40a0 FUN_141cf40a0 body=2279 status=ok
// SIG undefined FUN_141cf40a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141cf40a0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 *puVar26;
  ushort uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  undefined1 local_208;
  longlong local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  longlong *local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  uint uVar3;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1d8 = local_1d8 & 0xffffffff00000000;
  local_1f8 = *param_2;
  plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar12 = plVar19 + 1;
  local_1e0 = param_2;
  local_1d0 = param_3;
  if (*(longlong **)(param_1 + 0x38) < plVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar12 = plVar19 + 1;
  }
  *(longlong **)(param_1 + 0x30) = plVar12;
  *plVar19 = local_1f8;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_208 = 1;
  local_210 = 0x22;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar15 + 2) = 1;
  puVar15[3] = plVar19;
  *(undefined4 *)(puVar15 + 4) = 0;
  *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
  local_218 = 4;
  FUN_141ad8260(param_1,0,0,*param_3);
  local_188 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_180 = 0;
  local_17c = 0x26;
  local_174 = 0;
  local_16c = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  FUN_14049afe0(param_1,&local_1c8);
  local_198 = FUN_1404a0ce0();
  uStack_190 = FUN_140985530();
  local_188 = FUN_141a15460();
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar18 = *(int *)(*param_2 + 100);
  iVar25 = *(int *)(*param_2 + 0x60);
  local_1f8 = CONCAT44(local_1f8._4_4_,iVar18);
  uVar14 = *(uint *)(*param_3 + 0x60);
  uVar1 = *(uint *)(*param_3 + 100);
  puVar13 = puVar15 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
    iVar18 = (int)local_1f8;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59420;
  puVar15[2] = 0;
  iVar22 = 0;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(uint *)((longlong)puVar15 + 0x1c) = uVar14;
  *(uint *)(puVar15 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  iVar23 = *(int *)(param_4 + 4);
  iVar28 = iVar22;
  if ((((-1 < iVar23) && (-1 < *(int *)(param_4 + 0xc))) && (-1 < *(int *)(param_4 + 8))) &&
     (-1 < *(int *)(param_4 + 0x10))) {
    iVar25 = *(int *)(param_4 + 0xc);
    iVar22 = *(int *)(param_4 + 8);
    iVar18 = *(int *)(param_4 + 0x10);
    iVar28 = iVar23;
  }
  if (((iVar23 < 0) || ((int)*(uint *)(param_4 + 0xc) < 0)) ||
     ((iVar24 = *(int *)(param_4 + 8), iVar24 < 0 ||
      (uVar2 = *(uint *)(param_4 + 0x10), uVar3 = *(uint *)(param_4 + 0xc),
      (int)*(uint *)(param_4 + 0x10) < 0)))) {
    iVar24 = 0;
    iVar23 = 0;
    uVar2 = uVar1;
    uVar3 = uVar14;
  }
  fVar30 = (float)iVar23 * (2.0 / (float)uVar14) - 1.0;
  fVar31 = (float)(int)uVar3 * (2.0 / (float)uVar14) - 1.0;
  fVar32 = 1.0 - (float)iVar24 * (2.0 / (float)uVar1);
  fVar29 = 1.0 - (float)(int)uVar2 * (2.0 / (float)uVar1);
  fVar33 = (float)iVar28;
  fVar34 = (float)iVar22;
  fVar35 = (float)iVar25;
  fVar36 = (float)iVar18;
  lVar11 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar16 = (longlong *)0x0;
  local_1f0 = &DAT_1469f8fb0;
  local_1e8 = 0;
  plVar12 = (longlong *)(lVar11 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_1f8,&local_1f0);
  plVar19 = plVar16;
  if ((int)local_1f8 != -1) {
    plVar19 = (longlong *)((longlong)(int)local_1f8 * 0x20 + *plVar12);
  }
  local_1e8 = 0;
  plVar21 = plVar19 + 2;
  if (plVar19 == (longlong *)0x0) {
    plVar21 = plVar16;
  }
  local_1f0 = &DAT_1469f87d0;
  lVar11 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_1f8,&local_1f0);
  plVar19 = plVar16;
  if ((int)local_1f8 != -1) {
    plVar19 = (longlong *)((longlong)(int)local_1f8 * 0x20 + *plVar12);
  }
  local_1e8 = 0;
  plVar21 = plVar19 + 2;
  if (plVar19 == (longlong *)0x0) {
    plVar21 = plVar16;
  }
  local_1f0 = &DAT_1469f8920;
  lVar20 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_1f8,&local_1f0);
  plVar19 = plVar16;
  if ((int)local_1f8 != -1) {
    plVar19 = (longlong *)((longlong)(int)local_1f8 * 0x20 + *plVar12);
  }
  local_1e8 = 0;
  plVar21 = plVar19 + 2;
  if (plVar19 == (longlong *)0x0) {
    plVar21 = plVar16;
  }
  local_1f0 = &DAT_1469f8a70;
  lVar7 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_1f8,&local_1f0);
  if ((int)local_1f8 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_1f8 * 0x20 + *plVar12);
  }
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = (longlong *)0x0;
  }
  local_1e8 = 0;
  local_1f0 = &DAT_1469f8bc0;
  lVar8 = *plVar19;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar12,&local_1f8,&local_1f0);
  if ((int)local_1f8 == -1) {
    lVar17 = 0;
  }
  else {
    lVar17 = (longlong)(int)local_1f8 * 0x20 + *plVar12;
  }
  plVar12 = (longlong *)(lVar17 + 0x10);
  if (lVar17 == 0) {
    plVar12 = (longlong *)0x0;
  }
  iVar18 = *(int *)(*local_1e0 + 0x38);
  if (iVar18 == 2) {
    uVar27 = *(ushort *)(lVar7 + 0xc0);
    lVar20 = *(longlong *)(lVar7 + 0x48);
  }
  else if (iVar18 == 4) {
    uVar27 = *(ushort *)(lVar8 + 0xc0);
    lVar20 = *(longlong *)(lVar8 + 0x48);
  }
  else if (iVar18 == 8) {
    uVar27 = *(ushort *)(*plVar12 + 0xc0);
    lVar20 = *(longlong *)(*plVar12 + 0x48);
  }
  else {
    uVar27 = *(ushort *)(lVar20 + 0xc0);
    lVar20 = *(longlong *)(lVar20 + 0x48);
  }
  if (*(char *)(lVar20 + 0x28) == '\0') {
    FUN_1419f3850(lVar20);
  }
  uVar9 = *(undefined8 *)(lVar20 + 0x40);
  local_1c8 = DAT_146534c78;
  if (lVar11 == 0) {
    uStack_1c0 = 0;
    uVar14 = 0x10;
    local_1d8 = 0;
  }
  else {
    lVar11 = *(longlong *)(lVar11 + 0x48);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1419f3850(lVar11);
    }
    uStack_1c0 = *(undefined8 *)(lVar11 + 0x38);
    uVar14 = (uint)local_1d8;
  }
  if ((uVar14 & 0x10) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d8);
  }
  local_17c = CONCAT44(local_17c._4_4_,1);
  local_1a8 = uVar9;
  FUN_141ed6ac0(param_1,&local_1c8,2,1);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_144da0be8;
  uVar10 = _DAT_1464aa6c8;
  puVar15[2] = _DAT_1464aa6c0;
  puVar15[3] = uVar10;
  lVar11 = *local_1e0;
  if (lVar11 != 0) {
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar15;
    *(undefined8 **)(param_1 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f59c80;
    puVar15[2] = uVar9;
    *(uint *)(puVar15 + 3) = (uint)uVar27;
    puVar15[4] = lVar11;
  }
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar15 + 8;
  local_1e0 = (longlong *)0x0;
  local_108 = fVar31;
  fStack_104 = fVar32;
  fStack_100 = fVar35;
  fStack_fc = fVar34;
  local_f8 = fVar31;
  fStack_f4 = fVar29;
  fStack_f0 = fVar35;
  fStack_ec = fVar36;
  local_e8 = fVar30;
  fStack_e4 = fVar32;
  fStack_e0 = fVar33;
  fStack_dc = fVar34;
  local_d8 = fVar30;
  fStack_d4 = fVar29;
  fStack_d0 = fVar33;
  fStack_cc = fVar36;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x50);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar15 + 8;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(undefined8 **)(param_1 + 0x180) = puVar15;
  *(undefined4 *)(param_1 + 0x170) = 1;
  *(undefined4 *)(param_1 + 0x174) = 2;
  *(undefined4 *)(param_1 + 0x178) = 4;
  *(undefined4 *)(param_1 + 0x17c) = 0x10;
  *puVar15 = CONCAT44(fStack_104,local_108);
  puVar15[1] = CONCAT44(fStack_fc,fStack_100);
  puVar15[2] = CONCAT44(fStack_f4,local_f8);
  puVar15[3] = CONCAT44(fStack_ec,fStack_f0);
  puVar15[4] = CONCAT44(fStack_e4,local_e8);
  puVar15[5] = CONCAT44(fStack_dc,fStack_e0);
  puVar15[6] = CONCAT44(fStack_d4,local_d8);
  puVar15[7] = CONCAT44(fStack_cc,fStack_d0);
  puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar26 + 5;
  local_1e0 = puVar15;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar26 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar26;
  uVar9 = *(undefined8 *)(param_1 + 0x180);
  uVar4 = *(undefined4 *)(param_1 + 0x178);
  uVar5 = *(undefined4 *)(param_1 + 0x170);
  uVar6 = *(undefined4 *)(param_1 + 0x17c);
  *(undefined8 **)(param_1 + 8) = puVar26 + 1;
  *(undefined4 *)((longlong)puVar26 + 0x14) = *(undefined4 *)(param_1 + 0x174);
  puVar26[1] = 0;
  *(undefined4 *)(puVar26 + 2) = uVar5;
  *puVar26 = &PTR_LAB_144d91e10;
  *(undefined4 *)(puVar26 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar26 + 0x1c) = uVar6;
  puVar26[4] = uVar9;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  lVar11 = *local_1d0;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_144dc9c70;
  *(undefined4 *)(puVar15 + 2) = 1;
  puVar15[3] = lVar11;
  return;
}



// FUNCTION 141cf4990 FUN_141cf4990 body=853 status=ok
// SIG undefined FUN_141cf4990(void)

void FUN_141cf4990(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = *param_3;
  if ((((-1 < iVar1) && (iVar2 = param_3[1], -1 < iVar2)) && (iVar3 = param_3[2], 0 < iVar3 - iVar1)
      ) && (iVar4 = param_3[3], 0 < iVar4 - iVar2)) {
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
    *puVar9 = &PTR_LAB_143f59430;
    *(undefined1 *)(puVar9 + 2) = 1;
    *(int *)((longlong)puVar9 + 0x14) = iVar1;
    *(int *)(puVar9 + 3) = iVar2;
    *(int *)((longlong)puVar9 + 0x1c) = iVar3;
    *(int *)(puVar9 + 4) = iVar4;
  }
  puVar8 = &DAT_146a61f30;
  if (*(undefined8 **)(param_2 + 0x90) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x90);
  }
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  if (((*(ushort *)(lVar7 + 0x28) < 2) ||
      (((uint)(&DAT_1464c9c48)[*(int *)(puVar8 + 0x79)] < 0x1e &&
       ((0x313a1900U >> ((&DAT_1464c9c48)[*(int *)(puVar8 + 0x79)] & 0x1f) & 1) != 0)))) ||
     (DAT_1464c2550 == 0)) {
    local_58 = 0xffffffff00000000;
    uStack_50 = 0xffffffffffffffff;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_48 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    local_38 = 0xffffffff;
    uStack_30 = 0;
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10);
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    puVar8 = puVar9 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar9 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar9 + 0x14) = local_58._4_4_;
    *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_50._4_4_;
    *(undefined4 *)(puVar9 + 4) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar9 + 0x24) = local_48._4_4_;
    *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_40._4_4_;
    *(undefined4 *)(puVar9 + 6) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar9 + 0x34) = local_38._4_4_;
    *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_30._4_4_;
    puVar9[8] = plVar6;
    puVar9[9] = uVar5;
    lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar9[8] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar9[8] + 0x20))();
    }
    lVar7 = (**(code **)(*(longlong *)puVar9[9] + 8))();
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar9[9] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar9[9] + 0x20))();
    }
  }
  else {
    local_58 = 0xffffffff00000000;
    uStack_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    local_38 = 0xffffffff;
    uStack_30 = 0;
    FUN_141cf40a0(param_2,*(longlong *)(param_1 + 0x60) + 8,*(longlong *)(param_1 + 0x60) + 0x10,
                  &local_58);
  }
  if ((((-1 < *param_3) && (-1 < param_3[1])) && (0 < param_3[2] - *param_3)) &&
     (0 < param_3[3] - param_3[1])) {
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
    *puVar9 = &PTR_LAB_143f59430;
    *(undefined1 *)(puVar9 + 2) = 0;
    *(undefined8 *)((longlong)puVar9 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar9 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 141cf4cf0 FUN_141cf4cf0 body=386 status=ok
// SIG undefined FUN_141cf4cf0(void)

void FUN_141cf4cf0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (DAT_1464c9c11 == '\0') {
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x10);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    puVar3 = puVar5 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar5 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar5 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar5 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
    puVar5[8] = plVar2;
    puVar5[9] = uVar1;
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar5[8] + 0x18))(), lVar4 == 0)) {
      (**(code **)(*(longlong *)puVar5[8] + 0x20))();
    }
    lVar4 = (**(code **)(*(longlong *)puVar5[9] + 8))();
    if ((lVar4 == 0) && (lVar4 = (**(code **)(*(longlong *)puVar5[9] + 0x18))(), lVar4 == 0)) {
      (**(code **)(*(longlong *)puVar5[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141cf4e80 SafeRelease body=180 status=ok
// SIG undefined SafeRelease(void)

void FSceneRenderTargetItem::SafeRelease(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  TRefCountPtr<FRHITexture>::operator=(param_1,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 8,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x10,0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = iVar2;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar1 = param_1 + 0x18;
      }
      TRefCountPtr<FRHITexture>::operator=(lVar1 + (longlong)iVar3 * 8,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::operator=
                (*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 8,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 141cf4f40 FUN_141cf4f40 body=35 status=ok
// SIG undefined FUN_141cf4f40(void)

void FUN_141cf4f40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = param_2;
  local_resc = param_3;
  QuantizeSceneBufferSize(&local_res8,param_1 + 0x378);
  return;
}



// FUNCTION 141cf4f70 FUN_141cf4f70 body=51014 status=ok
// SIG undefined FUN_141cf4f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141cf4f70(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,uint param_9,
                  ulonglong *param_10,int *param_11,undefined8 param_12,int *param_13,
                  undefined8 param_14)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  char *pcVar6;
  char cVar7;
  longlong *plVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  float *local_1b8;
  float *local_1b0;
  ulonglong local_1a8;
  ulonglong *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  char local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  ulonglong local_138 [2];
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 local_72;
  ulonglong local_68;
  longlong *plVar8;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar8 = (longlong *)0x0;
  cVar7 = '\0';
  local_138[0] = local_138[0] & 0xffffffff00000000;
  local_1a8 = local_1a8 & 0xffffffff00000000;
  local_190 = param_8;
  local_1a0 = param_10;
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_df = 0;
  local_de = 0;
  local_dd = 0;
  local_dc = 0x26;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_93 = 0;
  local_92 = 0;
  local_91 = 0;
  local_90 = 0;
  local_8f = 0;
  local_8e = 0;
  local_8d = 0;
  local_8c = 0;
  local_8b = 0;
  local_8a = 0;
  local_89 = 0;
  local_88 = 0;
  local_87 = 0;
  local_86 = 0;
  local_85 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_78 = 0;
  local_74 = 0;
  local_72 = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_188 = param_4;
  local_180 = param_3;
  FUN_14049afe0(param_1,&local_128);
  local_f8 = FUN_1404a0ce0();
  uStack_f0 = FUN_140985530();
  local_e8 = FUN_1409853f0();
  local_dc = 0;
  lVar3 = FUN_1419ef210((&DAT_1464c9c48)[param_2]);
  local_164 = ((float)param_11[1] + 0.5) * (1.0 / (float)param_12._4_4_);
  local_160 = ((float)param_11[2] - 0.5) * (1.0 / (float)(int)param_12);
  local_168 = ((float)*param_11 + 0.5) * (1.0 / (float)(int)param_12);
  local_15c = ((float)param_11[3] - 0.5) * (1.0 / (float)param_12._4_4_);
  local_16c = ((float)param_13[3] - 0.5) * (1.0 / (float)param_14._4_4_);
  local_170 = ((float)param_13[2] - 0.5) * (1.0 / (float)(int)param_14);
  local_178 = ((float)*param_13 + 0.5) * (1.0 / (float)(int)param_14);
  local_174 = ((float)param_13[1] + 0.5) * (1.0 / (float)param_14._4_4_);
  if ((((*param_11 == DAT_1468b5ca0) && (param_11[1] == DAT_1468b5ca4)) &&
      (param_11[2] == (int)param_12)) && (param_11[3] == param_12._4_4_)) {
    local_158 = '\0';
  }
  else {
    local_158 = '\x01';
  }
  if (((0x20 < param_9) && (*(int *)(DAT_146a615e8 + 4) != 0)) || (*(int *)(DAT_146a615e8 + 4) == 2)
     ) {
    FUN_141b26620(&local_1a8,lVar3);
    uVar1 = local_1a8;
    local_128 = DAT_1464c2720;
    if (local_1a8 == 0) {
      local_1a8 = 0;
      plVar9 = (longlong *)0x1;
      plStack_120 = plVar8;
    }
    else {
      local_1a8 = *(ulonglong *)(local_1a8 + 0x48);
      if (*(char *)(local_1a8 + 0x28) == '\0') {
        FUN_1419f3850(local_1a8);
      }
      plStack_120 = *(longlong **)(local_1a8 + 0x38);
      plVar9 = plVar8;
    }
    if (plVar9 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
    }
    plVar9 = (longlong *)(lVar3 + 0x38);
    local_198 = 0;
    *local_1a0 = uVar1;
    if (local_158 == '\0') {
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a64970;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<0,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        return;
      }
      if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a64c10;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<0,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        return;
      }
      local_1a0 = (ulonglong *)&DAT_146a64eb0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar9,&local_1a8,&local_1a0);
      plVar5 = plVar8;
      if ((int)local_1a8 != -1) {
        plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
      }
      plVar9 = plVar5 + 2;
      if (plVar5 == (longlong *)0x0) {
        plVar9 = plVar8;
      }
      lVar3 = *plVar9;
      if (lVar3 == 0) {
        local_1a0 = (ulonglong *)0x0;
        local_108 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
      }
      else {
        local_108 = (longlong *)FShader::GetPixelShader(lVar3);
      }
      FUN_141ed6ac0(param_1,&local_128,2,1);
      local_1b0 = &local_178;
      local_1b8 = &local_168;
      local_1c0 = param_9;
      local_1c8 = param_7;
      local_1d0 = local_190;
      local_1d8 = param_5;
      TFilterPS<0,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
      return;
    }
    if (param_6 == 0) {
      local_1a0 = (ulonglong *)&DAT_146a64ac0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar9,&local_1a8,&local_1a0);
      plVar5 = plVar8;
      if ((int)local_1a8 != -1) {
        plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
      }
      plVar9 = plVar5 + 2;
      if (plVar5 == (longlong *)0x0) {
        plVar9 = plVar8;
      }
      lVar3 = *plVar9;
      if (lVar3 == 0) {
        local_1a0 = (ulonglong *)0x0;
        local_108 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
      }
      else {
        local_108 = (longlong *)FShader::GetPixelShader(lVar3);
      }
      FUN_141ed6ac0(param_1,&local_128,2,1);
      local_1b0 = &local_178;
      local_1b8 = &local_168;
      local_1c0 = param_9;
      local_1c8 = param_7;
      local_1d0 = local_190;
      local_1d8 = param_5;
      TFilterPS<0,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
      return;
    }
    if (param_6 == 1) {
      local_1a0 = (ulonglong *)&DAT_146a64d60;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar9,&local_1a8,&local_1a0);
      plVar5 = plVar8;
      if ((int)local_1a8 != -1) {
        plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
      }
      plVar9 = plVar5 + 2;
      if (plVar5 == (longlong *)0x0) {
        plVar9 = plVar8;
      }
      lVar3 = *plVar9;
      if (lVar3 == 0) {
        local_1a0 = (ulonglong *)0x0;
        local_108 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
      }
      else {
        local_108 = (longlong *)FShader::GetPixelShader(lVar3);
      }
      FUN_141ed6ac0(param_1,&local_128,2,1);
      local_1b0 = &local_178;
      local_1b8 = &local_168;
      local_1c0 = param_9;
      local_1c8 = param_7;
      local_1d0 = local_190;
      local_1d8 = param_5;
      TFilterPS<0,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
      return;
    }
    local_1a0 = (ulonglong *)&DAT_146a65000;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar9,&local_1a8,&local_1a0);
    plVar5 = plVar8;
    if ((int)local_1a8 != -1) {
      plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
    }
    plVar9 = plVar5 + 2;
    if (plVar5 == (longlong *)0x0) {
      plVar9 = plVar8;
    }
    lVar3 = *plVar9;
    if (lVar3 == 0) {
      local_1a0 = (ulonglong *)0x0;
      local_108 = plVar8;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
    }
    else {
      local_108 = (longlong *)FShader::GetPixelShader(lVar3);
    }
    FUN_141ed6ac0(param_1,&local_128,2,1);
    local_1b0 = &local_178;
    local_1b8 = &local_168;
    local_1c0 = param_9;
    local_1c8 = param_7;
    local_1d0 = local_190;
    local_1d8 = param_5;
    TFilterPS<0,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
    return;
  }
  if (local_158 == '\0') {
    switch(param_9 - 1) {
    case 0:
      FUN_141cd6000(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a65150;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<1>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a653f0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<1>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a65690;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<1>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 1:
      FUN_141cd6080(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a65930;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<2>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a65bd0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<2>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a65e70;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<2>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 2:
      FUN_141cd6100(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a66110;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<3>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a663b0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<3>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a66650;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<3>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 3:
      FUN_141cd6180(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a668f0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<4>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a66b90;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<4>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a66e30;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<4>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 4:
      FUN_141cd6200(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a670d0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<5>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a67370;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<5>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a67610;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<5>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 5:
      FUN_141cd6280(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a678b0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<6>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a67b50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<6>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a67df0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<6>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 6:
      FUN_141cd6300(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a68090;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<7>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a68330;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<7>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a685d0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<7>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 7:
      FUN_141cd6380(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a68870;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<8>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a68b10;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<8>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a68db0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<8>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 8:
      FUN_141cd6400(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a69050;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<9>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a692f0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<9>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a69590;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<9>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 9:
      FUN_141cd6480(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a69830;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<10>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a69ad0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<10>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a69d70;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<10>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 10:
      FUN_141cd6d80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6a010;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<11>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6a2b0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<11>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6a550;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<11>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xb:
      FUN_141cd6e00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6a7f0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<12>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6aa90;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<12>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6ad30;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<12>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xc:
      FUN_141cd6e80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6afd0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<13>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6b270;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<13>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6b510;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<13>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xd:
      FUN_141cd6f00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6b7b0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<14>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6ba50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<14>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6bcf0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<14>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xe:
      FUN_141cd6f80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6bf90;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<15>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6c230;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<15>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6c4d0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<15>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xf:
      FUN_141cd6500(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6c770;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<16>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6ca10;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<16>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6ccb0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<16>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x10:
      FUN_141cd6580(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6cf50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<17>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6d1f0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<17>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6d490;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<17>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x11:
      FUN_141cd6600(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6d730;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<18>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6d9d0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<18>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6dc70;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<18>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x12:
      FUN_141cd6680(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6df10;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<19>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6e1b0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<19>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6e450;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<19>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x13:
      FUN_141cd6700(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6e6f0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<20>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6e990;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<20>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6ec30;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<20>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x14:
      FUN_141cd6780(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6eed0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<21>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6f170;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<21>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6f410;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<21>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x15:
      FUN_141cd6800(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_198 = 0;
        local_1a0 = (ulonglong *)&DAT_146a6f6b0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar3 + 0x38,&local_1a8,&local_1a0);
        plVar9 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar9 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *(longlong *)(lVar3 + 0x38));
        }
        plVar5 = plVar9 + 2;
        if (plVar9 == (longlong *)0x0) {
          plVar5 = plVar8;
        }
        lVar3 = *plVar5;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<22>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5000();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<22>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5080(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<22>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x16:
      FUN_141cd6880(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5200();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<23>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5100();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<23>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5180(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<23>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x17:
      FUN_141cd6900(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5380();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<24>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5280();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<24>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5300(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<24>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x18:
      FUN_141cd6980(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5500();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<25>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5400();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<25>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5480(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<25>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x19:
      FUN_141cd6a00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5680();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<26>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5580();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<26>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5600(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<26>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1a:
      FUN_141cd6a80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5800();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<27>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5700();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<27>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5780(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<27>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1b:
      FUN_141cd6b00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5980();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<28>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5880();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<28>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5900(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<28>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1c:
      FUN_141cd6b80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5b00();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<29>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5a00();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<29>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5a80(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<29>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1d:
      FUN_141cd6c00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5c80();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<30>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5b80();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<30>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5c00(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<30>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1e:
      FUN_141cd6c80(local_138,lVar3);
      uVar1 = local_138[0];
      local_128 = DAT_1464c2720;
      if (local_138[0] == 0) {
        local_138[0] = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_138[0]);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5e00();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<31>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5d00();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<31>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5d80(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<31>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1f:
      FUN_141cd6d00(local_138,lVar3);
      uVar1 = local_138[0];
      local_128 = DAT_1464c2720;
      if (local_138[0] == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_138[0]);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        FUN_141cd5f80();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<32>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        FUN_141cd5e80();
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<32>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        FUN_141cd5f00(&local_1a0,lVar3);
        puVar2 = local_1a0;
        if (local_1a0 == (ulonglong *)0x0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,0>::SetParameters(puVar2,param_1,local_180,local_188);
        TFilterVS<32>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    default:
      LowLevelFatalErrorHandler("Unknown",0x2e8,L"Invalid number of samples: %u",param_9);
      pwVar11 = L"Invalid number of samples: %u";
      uVar10 = 0x2e8;
      pcVar6 = "Unknown";
      puVar4 = &DAT_144e27587;
      goto LAB_141d01678;
    }
  }
  else {
    switch(param_9 - 1) {
    case 0:
      FUN_141cd6000(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a652a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<1>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a65540;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<1>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a657e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<1>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 1:
      FUN_141cd6080(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a65a80;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<2>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a65d20;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<2>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a65fc0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<2>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 2:
      FUN_141cd6100(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a66260;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<3>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a66500;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<3>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a667a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<3>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 3:
      FUN_141cd6180(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a66a40;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<4>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a66ce0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<4>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a66f80;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<4>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 4:
      FUN_141cd6200(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a67220;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<5>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a674c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<5>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a67760;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<5>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 5:
      FUN_141cd6280(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a67a00;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<6>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a67ca0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<6>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a67f40;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<6>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 6:
      FUN_141cd6300(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a681e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<7>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a68480;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<7>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a68720;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<7>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 7:
      FUN_141cd6380(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a689c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<8>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a68c60;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<8>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a68f00;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<8>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 8:
      FUN_141cd6400(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a691a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<9>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a69440;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<9>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a696e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<9>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 9:
      FUN_141cd6480(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a69980;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<10>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a69c20;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<10>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a69ec0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<10>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 10:
      FUN_141cd6d80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6a160;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<11>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6a400;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<11>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6a6a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<11>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xb:
      FUN_141cd6e00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6a940;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<12>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6abe0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<12>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6ae80;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<12>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xc:
      FUN_141cd6e80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6b120;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<13>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6b3c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<13>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6b660;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<13>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xd:
      FUN_141cd6f00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6b900;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<14>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6bba0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<14>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6be40;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<14>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xe:
      FUN_141cd6f80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6c0e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<15>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6c380;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<15>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6c620;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<15>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0xf:
      FUN_141cd6500(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6c8c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<16>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6cb60;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<16>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6ce00;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<16>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x10:
      FUN_141cd6580(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6d0a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<17>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6d340;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<17>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6d5e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<17>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x11:
      FUN_141cd6600(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6d880;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<18>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6db20;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<18>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6ddc0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<18>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x12:
      FUN_141cd6680(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6e060;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<19>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6e300;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<19>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6e5a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<19>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x13:
      FUN_141cd6700(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6e840;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<20>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6eae0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<20>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6ed80;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<20>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x14:
      FUN_141cd6780(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6f020;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<21>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6f2c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<21>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6f560;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<21>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x15:
      FUN_141cd6800(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6f800;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<22>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a6faa0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<22>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a6fd40;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<22>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x16:
      FUN_141cd6880(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a6ffe0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<23>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a70280;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<23>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a70520;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<23>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x17:
      FUN_141cd6900(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a707c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<24>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a70a60;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<24>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a70d00;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<24>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x18:
      FUN_141cd6980(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        cVar7 = -0x80;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      if (cVar7 < '\0') {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a70fa0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<25>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a71240;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<25>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a714e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<25>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x19:
      FUN_141cd6a00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a71780;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<26>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a71a20;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<26>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a71cc0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<26>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1a:
      FUN_141cd6a80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a71f60;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<27>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a72200;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<27>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a724a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<27>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1b:
      FUN_141cd6b00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a72740;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<28>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a729e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<28>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a72c80;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<28>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1c:
      FUN_141cd6b80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a72f20;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<29>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a731c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<29>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a73460;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<29>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1d:
      FUN_141cd6c00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = plVar8;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a73700;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<30>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a739a0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<30>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a73c40;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<30>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1e:
      FUN_141cd6c80(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plStack_120 = (longlong *)0x0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a73ee0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<31>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a74180;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)0x2;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<31>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a74420;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          plVar9 = (longlong *)&DAT_00000004;
          local_108 = plVar8;
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<31>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    case 0x1f:
      FUN_141cd6d00(&local_1a8,lVar3);
      uVar1 = local_1a8;
      local_128 = DAT_1464c2720;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        plVar9 = (longlong *)&DAT_00000008;
        plStack_120 = plVar8;
      }
      else {
        plStack_120 = (longlong *)FShader::GetVertexShader(local_1a8);
        plVar9 = plVar8;
      }
      if (plVar9 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
      }
      plVar9 = (longlong *)(lVar3 + 0x38);
      local_198 = 0;
      *local_1a0 = uVar1;
      if (param_6 == 0) {
        local_1a0 = (ulonglong *)&DAT_146a746c0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<32>::SetParameters(uVar1,param_1,param_7);
      }
      else if (param_6 == 1) {
        local_1a0 = (ulonglong *)&DAT_146a74960;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<32>::SetParameters(uVar1,param_1,param_7);
      }
      else {
        local_1a0 = (ulonglong *)&DAT_146a74c00;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar9,&local_1a8,&local_1a0);
        plVar5 = plVar8;
        if ((int)local_1a8 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_1a8 * 0x20 + *plVar9);
        }
        plVar9 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        lVar3 = *plVar9;
        if (lVar3 == 0) {
          local_1a0 = (ulonglong *)0x0;
          local_108 = plVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
        }
        else {
          local_108 = (longlong *)FShader::GetPixelShader(lVar3);
        }
        FUN_141ed6ac0(param_1,&local_128,2,1);
        local_1b0 = &local_178;
        local_1b8 = &local_168;
        local_1c0 = param_9;
        local_1c8 = param_7;
        local_1d0 = local_190;
        local_1d8 = param_5;
        TFilterPS<1,1,1>::SetParameters(lVar3,param_1,local_180,local_188);
        TFilterVS<32>::SetParameters(uVar1,param_1,param_7);
      }
      break;
    default:
      LowLevelFatalErrorHandler("Unknown",0x2c0,L"Invalid number of samples: %u",param_9);
      pwVar11 = L"Invalid number of samples: %u";
      uVar10 = 0x2c0;
      pcVar6 = "Unknown";
      puVar4 = &DAT_144e27586;
LAB_141d01678:
      local_1d8 = CONCAT44(local_1d8._4_4_,param_9);
      FDebug::AssertFailed(puVar4,pcVar6,uVar10,pwVar11);
    }
  }
  return;
}



// FUNCTION 141d017d0 SetLightAttenuation body=54 status=ok
// SIG undefined SetLightAttenuation(void)

void FSceneRenderTargets::SetLightAttenuation(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  *(longlong **)(param_1 + 0x48) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141d017fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1);
    return;
  }
  return;
}



// FUNCTION 141d01810 SetNum body=118 status=ok
// SIG undefined SetNum(void)

void TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<3,FDefaultAllocator>_>::SetNum
               (longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar4 = (int)param_2;
  if (iVar1 < iVar4) {
    *(int *)(param_1 + 0x20) = iVar4;
    if (*(int *)(param_1 + 0x24) < iVar4) {
      ResizeGrow(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    if (iVar4 - iVar1 != 0) {
      puVar5 = (undefined8 *)(lVar2 + (longlong)iVar1 * 8);
      for (uVar3 = (ulonglong)(uint)(iVar4 - iVar1); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  else if (iVar4 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar4,param_3);
    return;
  }
  return;
}



// FUNCTION 141d01890 SetNum body=105 status=ok
// SIG undefined SetNum(void)

void TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar1 = (int)param_1[1];
  iVar3 = (int)param_2;
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    if (iVar3 - iVar1 != 0) {
      puVar4 = (undefined8 *)(*param_1 + (longlong)iVar1 * 8);
      for (uVar2 = (ulonglong)(uint)(iVar3 - iVar1); uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else if (iVar3 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar3,param_3);
    return;
  }
  return;
}



// FUNCTION 141d01900 SetParameters body=702 status=ok
// SIG undefined SetParameters(void)

void TFilterPS<1,1,1>::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,undefined8 param_10)

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
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
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
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
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
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = param_5;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,param_6,param_8,0);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,uVar3,param_1 + 0xd6,param_9,0)
  ;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar3,param_1 + 0xdc,param_10,0);
  return;
}



// FUNCTION 141d01bc0 SetParameters body=620 status=ok
// SIG undefined SetParameters(void)

void TFilterPS<1,1,0>::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

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
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
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
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
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
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = param_5;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,param_6,param_8,0);
  return;
}



// FUNCTION 141d01e30 SetParameters body=1342 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterPS<0,1,1>::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7,uint param_8,
               undefined8 param_9,undefined8 param_10)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_4a8 [32];
  uint local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined4 local_458 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_478 = param_5;
  local_470 = param_6;
  local_468 = param_9;
  local_460 = param_10;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_4;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_3;
  }
  uVar7 = 0;
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
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
    puVar6[4] = local_478;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_3;
  }
  local_480 = 0;
  local_488 = param_8;
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,local_470);
  local_458[0] = 0;
  local_458[1] = 0;
  local_458[2] = 0;
  local_458[3] = 0x3f800000;
  local_458[4] = 0;
  local_458[5] = 0;
  local_458[6] = 0;
  local_458[7] = 0x3f800000;
  local_458[8] = 0;
  local_458[9] = 0;
  local_458[10] = 0;
  local_458[0xb] = 0x3f800000;
  local_458[0xc] = 0;
  local_458[0xd] = 0;
  local_458[0xe] = 0;
  local_458[0xf] = 0x3f800000;
  local_458[0x10] = 0;
  local_458[0x11] = 0;
  local_458[0x12] = 0;
  local_458[0x13] = 0x3f800000;
  local_458[0x14] = 0;
  local_458[0x15] = 0;
  local_458[0x16] = 0;
  local_458[0x17] = 0x3f800000;
  local_458[0x18] = 0;
  local_458[0x19] = 0;
  local_458[0x1a] = 0;
  local_458[0x1b] = 0x3f800000;
  local_458[0x1c] = 0;
  local_458[0x1d] = 0;
  local_458[0x1e] = 0;
  local_458[0x1f] = 0x3f800000;
  local_458[0x20] = 0;
  local_458[0x21] = 0;
  local_458[0x22] = 0;
  local_458[0x23] = 0x3f800000;
  local_458[0x24] = 0;
  local_458[0x25] = 0;
  local_458[0x26] = 0;
  local_458[0x27] = 0x3f800000;
  local_458[0x28] = 0;
  local_458[0x29] = 0;
  local_458[0x2a] = 0;
  local_458[0x2b] = 0x3f800000;
  local_458[0x2c] = 0;
  local_458[0x2d] = 0;
  local_458[0x2e] = 0;
  local_458[0x2f] = 0x3f800000;
  local_458[0x30] = 0;
  local_458[0x31] = 0;
  local_458[0x32] = 0;
  local_458[0x33] = 0x3f800000;
  local_458[0x34] = 0;
  local_458[0x35] = 0;
  local_458[0x36] = 0;
  local_458[0x37] = 0x3f800000;
  local_458[0x38] = 0;
  local_458[0x39] = 0;
  local_458[0x3a] = 0;
  local_458[0x3b] = 0x3f800000;
  local_458[0x3c] = 0;
  local_458[0x3d] = 0;
  local_458[0x3e] = 0;
  local_458[0x3f] = 0x3f800000;
  local_458[0x40] = 0;
  local_458[0x41] = 0;
  local_458[0x42] = 0;
  local_458[0x43] = 0x3f800000;
  local_458[0x44] = 0;
  local_458[0x45] = 0;
  local_458[0x46] = 0;
  local_458[0x47] = 0x3f800000;
  local_458[0x48] = 0;
  local_458[0x49] = 0;
  local_458[0x4a] = 0;
  local_458[0x4b] = 0x3f800000;
  local_458[0x4c] = 0;
  local_458[0x4d] = 0;
  local_458[0x4e] = 0;
  local_458[0x4f] = 0x3f800000;
  local_458[0x50] = 0;
  local_458[0x51] = 0;
  local_458[0x52] = 0;
  local_458[0x53] = 0x3f800000;
  local_458[0x54] = 0;
  local_458[0x55] = 0;
  local_458[0x56] = 0;
  local_458[0x57] = 0x3f800000;
  local_458[0x58] = 0;
  local_458[0x59] = 0;
  local_458[0x5a] = 0;
  local_458[0x5b] = 0x3f800000;
  local_458[0x5c] = 0;
  local_458[0x5d] = 0;
  local_458[0x5e] = 0;
  local_458[0x5f] = 0x3f800000;
  local_458[0x60] = 0;
  local_458[0x61] = 0;
  local_458[0x62] = 0;
  local_458[99] = 0x3f800000;
  local_458[100] = 0;
  local_458[0x65] = 0;
  local_458[0x66] = 0;
  local_458[0x67] = 0x3f800000;
  local_458[0x68] = 0;
  local_458[0x69] = 0;
  local_458[0x6a] = 0;
  local_458[0x6b] = 0x3f800000;
  local_458[0x6c] = 0;
  local_458[0x6d] = 0;
  local_458[0x6e] = 0;
  local_458[0x6f] = 0x3f800000;
  local_458[0x70] = 0;
  local_458[0x71] = 0;
  local_458[0x72] = 0;
  local_458[0x73] = 0x3f800000;
  local_458[0x74] = 0;
  local_458[0x75] = 0;
  local_458[0x76] = 0;
  local_458[0x77] = 0x3f800000;
  local_458[0x78] = 0;
  local_458[0x79] = 0;
  local_458[0x7a] = 0;
  local_458[0x7b] = 0x3f800000;
  local_458[0x7c] = 0;
  local_458[0x7d] = 0;
  local_458[0x7e] = 0;
  local_458[0x7f] = 0x3f800000;
  local_458[0x80] = 0;
  local_458[0x81] = 0;
  local_458[0x82] = 0;
  local_458[0x83] = 0x3f800000;
  local_458[0x84] = 0;
  local_458[0x85] = 0;
  local_458[0x86] = 0;
  local_458[0x87] = 0x3f800000;
  local_458[0x88] = 0;
  local_458[0x89] = 0;
  local_458[0x8a] = 0;
  local_458[0x8b] = 0x3f800000;
  local_458[0x8c] = 0;
  local_458[0x8d] = 0;
  local_458[0x8e] = 0;
  local_458[0x8f] = 0x3f800000;
  local_458[0x90] = 0;
  local_458[0x91] = 0;
  local_458[0x92] = 0;
  local_458[0x93] = 0x3f800000;
  local_458[0x94] = 0;
  local_458[0x95] = 0;
  local_458[0x96] = 0;
  local_458[0x97] = 0x3f800000;
  local_458[0x98] = 0;
  local_458[0x99] = 0;
  local_458[0x9a] = 0;
  local_458[0x9b] = 0x3f800000;
  local_458[0x9c] = 0;
  local_458[0x9d] = 0;
  local_458[0x9e] = 0;
  local_458[0x9f] = 0x3f800000;
  local_458[0xa0] = 0;
  local_458[0xa1] = 0;
  local_458[0xa2] = 0;
  local_458[0xa3] = 0x3f800000;
  local_458[0xa4] = 0;
  local_458[0xa5] = 0;
  local_458[0xa6] = 0;
  local_458[0xa7] = 0x3f800000;
  local_458[0xa8] = 0;
  local_458[0xa9] = 0;
  local_458[0xaa] = 0;
  local_458[0xab] = 0x3f800000;
  local_458[0xac] = 0;
  local_458[0xad] = 0;
  local_458[0xae] = 0;
  local_458[0xaf] = 0x3f800000;
  local_458[0xb0] = 0;
  local_458[0xb1] = 0;
  local_458[0xb2] = 0;
  local_458[0xb3] = 0x3f800000;
  local_458[0xb4] = 0;
  local_458[0xb5] = 0;
  local_458[0xb6] = 0;
  local_458[0xb7] = 0x3f800000;
  local_458[0xb8] = 0;
  local_458[0xb9] = 0;
  local_458[0xba] = 0;
  local_458[0xbb] = 0x3f800000;
  local_458[0xbc] = 0;
  local_458[0xbd] = 0;
  local_458[0xbe] = 0;
  local_458[0xbf] = 0x3f800000;
  local_458[0xc0] = 0;
  local_458[0xc1] = 0;
  local_458[0xc2] = 0;
  local_458[0xc3] = 0x3f800000;
  local_458[0xc4] = 0;
  local_458[0xc5] = 0;
  local_458[0xc6] = 0;
  local_458[199] = 0x3f800000;
  local_458[200] = 0;
  local_458[0xc9] = 0;
  local_458[0xca] = 0;
  local_458[0xcb] = 0x3f800000;
  local_458[0xcc] = 0;
  local_458[0xcd] = 0;
  local_458[0xce] = 0;
  local_458[0xcf] = 0x3f800000;
  local_458[0xd0] = 0;
  local_458[0xd1] = 0;
  local_458[0xd2] = 0;
  local_458[0xd3] = 0x3f800000;
  local_458[0xd4] = 0;
  local_458[0xd5] = 0;
  local_458[0xd6] = 0;
  local_458[0xd7] = 0x3f800000;
  local_458[0xd8] = 0;
  local_458[0xd9] = 0;
  local_458[0xda] = 0;
  local_458[0xdb] = 0x3f800000;
  local_458[0xdc] = 0;
  local_458[0xdd] = 0;
  local_458[0xde] = 0;
  local_458[0xdf] = 0x3f800000;
  local_458[0xe0] = 0;
  local_458[0xe1] = 0;
  local_458[0xe2] = 0;
  local_458[0xe3] = 0x3f800000;
  local_458[0xe4] = 0;
  local_458[0xe5] = 0;
  local_458[0xe6] = 0;
  local_458[0xe7] = 0x3f800000;
  local_458[0xe8] = 0;
  local_458[0xe9] = 0;
  local_458[0xea] = 0;
  local_458[0xeb] = 0x3f800000;
  local_458[0xec] = 0;
  local_458[0xed] = 0;
  local_458[0xee] = 0;
  local_458[0xef] = 0x3f800000;
  local_458[0xf0] = 0;
  local_458[0xf1] = 0;
  local_458[0xf2] = 0;
  local_458[0xf3] = 0x3f800000;
  local_458[0xf4] = 0;
  local_458[0xf5] = 0;
  local_458[0xf6] = 0;
  local_458[0xf7] = 0x3f800000;
  local_458[0xf8] = 0;
  local_458[0xf9] = 0;
  local_458[0xfa] = 0;
  local_458[0xfb] = 0x3f800000;
  local_458[0xfc] = 0;
  local_458[0xfd] = 0;
  local_458[0xfe] = 0;
  local_458[0xff] = 0x3f800000;
  if (param_8 != 0) {
    do {
      local_458[uVar7 * 2] = *(undefined4 *)(uVar7 * 8 + param_7);
      local_458[uVar7 * 2 + 1] = *(undefined4 *)(uVar7 * 8 + 4 + param_7);
      uVar4 = (int)uVar7 + 1;
      if (uVar4 < param_8) {
        local_458[uVar7 * 2 + 2] = *(undefined4 *)(param_7 + (ulonglong)uVar4 * 8);
        local_458[uVar7 * 2 + 3] = *(undefined4 *)(param_7 + 4 + (ulonglong)uVar4 * 8);
      }
      uVar4 = (int)uVar7 + 2;
      uVar7 = (ulonglong)uVar4;
    } while (uVar4 < param_8);
  }
  local_480 = 0;
  local_488 = 0x40;
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,0,param_1 + 0xe2,local_458);
  local_488 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe8,&param_8);
  local_488 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,uVar3,param_1 + 0xd6,local_468)
  ;
  local_488 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,uVar3,param_1 + 0xdc,local_460)
  ;
  return;
}



// FUNCTION 141d02370 SetParameters body=1270 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterPS<0,1,0>::SetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7,uint param_8)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_498 [32];
  uint local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined4 local_458 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_468 = param_5;
  local_460 = param_6;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_4;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_3;
  }
  uVar7 = 0;
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
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
    puVar6[4] = local_468;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
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
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_3;
  }
  local_470 = 0;
  local_478 = param_8;
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,local_460);
  local_458[0] = 0;
  local_458[1] = 0;
  local_458[2] = 0;
  local_458[3] = 0x3f800000;
  local_458[4] = 0;
  local_458[5] = 0;
  local_458[6] = 0;
  local_458[7] = 0x3f800000;
  local_458[8] = 0;
  local_458[9] = 0;
  local_458[10] = 0;
  local_458[0xb] = 0x3f800000;
  local_458[0xc] = 0;
  local_458[0xd] = 0;
  local_458[0xe] = 0;
  local_458[0xf] = 0x3f800000;
  local_458[0x10] = 0;
  local_458[0x11] = 0;
  local_458[0x12] = 0;
  local_458[0x13] = 0x3f800000;
  local_458[0x14] = 0;
  local_458[0x15] = 0;
  local_458[0x16] = 0;
  local_458[0x17] = 0x3f800000;
  local_458[0x18] = 0;
  local_458[0x19] = 0;
  local_458[0x1a] = 0;
  local_458[0x1b] = 0x3f800000;
  local_458[0x1c] = 0;
  local_458[0x1d] = 0;
  local_458[0x1e] = 0;
  local_458[0x1f] = 0x3f800000;
  local_458[0x20] = 0;
  local_458[0x21] = 0;
  local_458[0x22] = 0;
  local_458[0x23] = 0x3f800000;
  local_458[0x24] = 0;
  local_458[0x25] = 0;
  local_458[0x26] = 0;
  local_458[0x27] = 0x3f800000;
  local_458[0x28] = 0;
  local_458[0x29] = 0;
  local_458[0x2a] = 0;
  local_458[0x2b] = 0x3f800000;
  local_458[0x2c] = 0;
  local_458[0x2d] = 0;
  local_458[0x2e] = 0;
  local_458[0x2f] = 0x3f800000;
  local_458[0x30] = 0;
  local_458[0x31] = 0;
  local_458[0x32] = 0;
  local_458[0x33] = 0x3f800000;
  local_458[0x34] = 0;
  local_458[0x35] = 0;
  local_458[0x36] = 0;
  local_458[0x37] = 0x3f800000;
  local_458[0x38] = 0;
  local_458[0x39] = 0;
  local_458[0x3a] = 0;
  local_458[0x3b] = 0x3f800000;
  local_458[0x3c] = 0;
  local_458[0x3d] = 0;
  local_458[0x3e] = 0;
  local_458[0x3f] = 0x3f800000;
  local_458[0x40] = 0;
  local_458[0x41] = 0;
  local_458[0x42] = 0;
  local_458[0x43] = 0x3f800000;
  local_458[0x44] = 0;
  local_458[0x45] = 0;
  local_458[0x46] = 0;
  local_458[0x47] = 0x3f800000;
  local_458[0x48] = 0;
  local_458[0x49] = 0;
  local_458[0x4a] = 0;
  local_458[0x4b] = 0x3f800000;
  local_458[0x4c] = 0;
  local_458[0x4d] = 0;
  local_458[0x4e] = 0;
  local_458[0x4f] = 0x3f800000;
  local_458[0x50] = 0;
  local_458[0x51] = 0;
  local_458[0x52] = 0;
  local_458[0x53] = 0x3f800000;
  local_458[0x54] = 0;
  local_458[0x55] = 0;
  local_458[0x56] = 0;
  local_458[0x57] = 0x3f800000;
  local_458[0x58] = 0;
  local_458[0x59] = 0;
  local_458[0x5a] = 0;
  local_458[0x5b] = 0x3f800000;
  local_458[0x5c] = 0;
  local_458[0x5d] = 0;
  local_458[0x5e] = 0;
  local_458[0x5f] = 0x3f800000;
  local_458[0x60] = 0;
  local_458[0x61] = 0;
  local_458[0x62] = 0;
  local_458[99] = 0x3f800000;
  local_458[100] = 0;
  local_458[0x65] = 0;
  local_458[0x66] = 0;
  local_458[0x67] = 0x3f800000;
  local_458[0x68] = 0;
  local_458[0x69] = 0;
  local_458[0x6a] = 0;
  local_458[0x6b] = 0x3f800000;
  local_458[0x6c] = 0;
  local_458[0x6d] = 0;
  local_458[0x6e] = 0;
  local_458[0x6f] = 0x3f800000;
  local_458[0x70] = 0;
  local_458[0x71] = 0;
  local_458[0x72] = 0;
  local_458[0x73] = 0x3f800000;
  local_458[0x74] = 0;
  local_458[0x75] = 0;
  local_458[0x76] = 0;
  local_458[0x77] = 0x3f800000;
  local_458[0x78] = 0;
  local_458[0x79] = 0;
  local_458[0x7a] = 0;
  local_458[0x7b] = 0x3f800000;
  local_458[0x7c] = 0;
  local_458[0x7d] = 0;
  local_458[0x7e] = 0;
  local_458[0x7f] = 0x3f800000;
  local_458[0x80] = 0;
  local_458[0x81] = 0;
  local_458[0x82] = 0;
  local_458[0x83] = 0x3f800000;
  local_458[0x84] = 0;
  local_458[0x85] = 0;
  local_458[0x86] = 0;
  local_458[0x87] = 0x3f800000;
  local_458[0x88] = 0;
  local_458[0x89] = 0;
  local_458[0x8a] = 0;
  local_458[0x8b] = 0x3f800000;
  local_458[0x8c] = 0;
  local_458[0x8d] = 0;
  local_458[0x8e] = 0;
  local_458[0x8f] = 0x3f800000;
  local_458[0x90] = 0;
  local_458[0x91] = 0;
  local_458[0x92] = 0;
  local_458[0x93] = 0x3f800000;
  local_458[0x94] = 0;
  local_458[0x95] = 0;
  local_458[0x96] = 0;
  local_458[0x97] = 0x3f800000;
  local_458[0x98] = 0;
  local_458[0x99] = 0;
  local_458[0x9a] = 0;
  local_458[0x9b] = 0x3f800000;
  local_458[0x9c] = 0;
  local_458[0x9d] = 0;
  local_458[0x9e] = 0;
  local_458[0x9f] = 0x3f800000;
  local_458[0xa0] = 0;
  local_458[0xa1] = 0;
  local_458[0xa2] = 0;
  local_458[0xa3] = 0x3f800000;
  local_458[0xa4] = 0;
  local_458[0xa5] = 0;
  local_458[0xa6] = 0;
  local_458[0xa7] = 0x3f800000;
  local_458[0xa8] = 0;
  local_458[0xa9] = 0;
  local_458[0xaa] = 0;
  local_458[0xab] = 0x3f800000;
  local_458[0xac] = 0;
  local_458[0xad] = 0;
  local_458[0xae] = 0;
  local_458[0xaf] = 0x3f800000;
  local_458[0xb0] = 0;
  local_458[0xb1] = 0;
  local_458[0xb2] = 0;
  local_458[0xb3] = 0x3f800000;
  local_458[0xb4] = 0;
  local_458[0xb5] = 0;
  local_458[0xb6] = 0;
  local_458[0xb7] = 0x3f800000;
  local_458[0xb8] = 0;
  local_458[0xb9] = 0;
  local_458[0xba] = 0;
  local_458[0xbb] = 0x3f800000;
  local_458[0xbc] = 0;
  local_458[0xbd] = 0;
  local_458[0xbe] = 0;
  local_458[0xbf] = 0x3f800000;
  local_458[0xc0] = 0;
  local_458[0xc1] = 0;
  local_458[0xc2] = 0;
  local_458[0xc3] = 0x3f800000;
  local_458[0xc4] = 0;
  local_458[0xc5] = 0;
  local_458[0xc6] = 0;
  local_458[199] = 0x3f800000;
  local_458[200] = 0;
  local_458[0xc9] = 0;
  local_458[0xca] = 0;
  local_458[0xcb] = 0x3f800000;
  local_458[0xcc] = 0;
  local_458[0xcd] = 0;
  local_458[0xce] = 0;
  local_458[0xcf] = 0x3f800000;
  local_458[0xd0] = 0;
  local_458[0xd1] = 0;
  local_458[0xd2] = 0;
  local_458[0xd3] = 0x3f800000;
  local_458[0xd4] = 0;
  local_458[0xd5] = 0;
  local_458[0xd6] = 0;
  local_458[0xd7] = 0x3f800000;
  local_458[0xd8] = 0;
  local_458[0xd9] = 0;
  local_458[0xda] = 0;
  local_458[0xdb] = 0x3f800000;
  local_458[0xdc] = 0;
  local_458[0xdd] = 0;
  local_458[0xde] = 0;
  local_458[0xdf] = 0x3f800000;
  local_458[0xe0] = 0;
  local_458[0xe1] = 0;
  local_458[0xe2] = 0;
  local_458[0xe3] = 0x3f800000;
  local_458[0xe4] = 0;
  local_458[0xe5] = 0;
  local_458[0xe6] = 0;
  local_458[0xe7] = 0x3f800000;
  local_458[0xe8] = 0;
  local_458[0xe9] = 0;
  local_458[0xea] = 0;
  local_458[0xeb] = 0x3f800000;
  local_458[0xec] = 0;
  local_458[0xed] = 0;
  local_458[0xee] = 0;
  local_458[0xef] = 0x3f800000;
  local_458[0xf0] = 0;
  local_458[0xf1] = 0;
  local_458[0xf2] = 0;
  local_458[0xf3] = 0x3f800000;
  local_458[0xf4] = 0;
  local_458[0xf5] = 0;
  local_458[0xf6] = 0;
  local_458[0xf7] = 0x3f800000;
  local_458[0xf8] = 0;
  local_458[0xf9] = 0;
  local_458[0xfa] = 0;
  local_458[0xfb] = 0x3f800000;
  local_458[0xfc] = 0;
  local_458[0xfd] = 0;
  local_458[0xfe] = 0;
  local_458[0xff] = 0x3f800000;
  if (param_8 != 0) {
    do {
      local_458[uVar7 * 2] = *(undefined4 *)(uVar7 * 8 + param_7);
      local_458[uVar7 * 2 + 1] = *(undefined4 *)(uVar7 * 8 + 4 + param_7);
      uVar4 = (int)uVar7 + 1;
      if (uVar4 < param_8) {
        local_458[uVar7 * 2 + 2] = *(undefined4 *)(param_7 + (ulonglong)uVar4 * 8);
        local_458[uVar7 * 2 + 3] = *(undefined4 *)(param_7 + 4 + (ulonglong)uVar4 * 8);
      }
      uVar4 = (int)uVar7 + 2;
      uVar7 = (ulonglong)uVar4;
    } while (uVar4 < param_8);
  }
  local_470 = 0;
  local_478 = 0x40;
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,0,param_1 + 0xe2,local_458);
  local_478 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe8,&param_8);
  return;
}



// FUNCTION 141d02870 SetParameters body=141 status=ok
// SIG undefined SetParameters(void)

void TFilterVS<1>::SetParameters(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_10 = 0;
  local_18 = *param_3;
  local_c = 0x3f800000;
  local_14 = param_3[1];
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,&local_18,1,0);
  return;
}



// FUNCTION 141d02900 SetParameters body=104 status=ok
// SIG undefined SetParameters(void)

void TFilterVS<2>::SetParameters(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,&local_18,1,0);
  return;
}



// FUNCTION 141d02970 SetParameters body=189 status=ok
// SIG undefined SetParameters(void)

void TFilterVS<3>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_28 [8];
  
  uVar4 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0x3f800000;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0x3f800000;
  puVar2 = (undefined4 *)(param_3 + 8);
  do {
    local_28[uVar4 * 2] = puVar2[-2];
    local_28[uVar4 * 2 + 1] = puVar2[-1];
    if ((int)uVar4 + 1U < 3) {
      local_28[uVar4 * 2 + 2] = *puVar2;
      local_28[uVar4 * 2 + 3] = puVar2[1];
    }
    uVar3 = (int)uVar4 + 2;
    uVar4 = (ulonglong)uVar3;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 3);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_28,2,0);
  return;
}



// FUNCTION 141d02a30 SetParameters body=189 status=ok
// SIG undefined SetParameters(void)

void TFilterVS<4>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_28 [8];
  
  uVar4 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0x3f800000;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0x3f800000;
  puVar2 = (undefined4 *)(param_3 + 8);
  do {
    local_28[uVar4 * 2] = puVar2[-2];
    local_28[uVar4 * 2 + 1] = puVar2[-1];
    if ((int)uVar4 + 1U < 4) {
      local_28[uVar4 * 2 + 2] = *puVar2;
      local_28[uVar4 * 2 + 3] = puVar2[1];
    }
    uVar3 = (int)uVar4 + 2;
    uVar4 = (ulonglong)uVar3;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 4);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_28,2,0);
  return;
}



// FUNCTION 141d02af0 SetParameters body=228 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<5>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0x3f800000;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0x3f800000;
  do {
    local_48[uVar3 * 2] = puVar4[-2];
    local_48[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 5) {
      local_48[uVar3 * 2 + 2] = *puVar4;
      local_48[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 5);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_50 = 0;
  local_58 = 3;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_48);
  return;
}



// FUNCTION 141d02be0 SetParameters body=228 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<6>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0x3f800000;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0x3f800000;
  do {
    local_48[uVar3 * 2] = puVar4[-2];
    local_48[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 6) {
      local_48[uVar3 * 2 + 2] = *puVar4;
      local_48[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 6);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_50 = 0;
  local_58 = 3;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_48);
  return;
}



// FUNCTION 141d02cd0 SetParameters body=231 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<7>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0x3f800000;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0x3f800000;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0x3f800000;
  do {
    local_58[uVar3 * 2] = puVar4[-2];
    local_58[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 7) {
      local_58[uVar3 * 2 + 2] = *puVar4;
      local_58[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 7);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_60 = 0;
  local_68 = 4;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_58);
  return;
}



// FUNCTION 141d02dc0 SetParameters body=231 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<8>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0x3f800000;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0x3f800000;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0x3f800000;
  do {
    local_58[uVar3 * 2] = puVar4[-2];
    local_58[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 8) {
      local_58[uVar3 * 2 + 2] = *puVar4;
      local_58[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 8);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_60 = 0;
  local_68 = 4;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_58);
  return;
}



// FUNCTION 141d02eb0 SetParameters body=250 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<9>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68 [20];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0x3f800000;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0x3f800000;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  local_68[0xe] = 0;
  local_68[0xf] = 0x3f800000;
  local_68[0x10] = 0;
  local_68[0x11] = 0;
  local_68[0x12] = 0;
  local_68[0x13] = 0x3f800000;
  do {
    local_68[uVar3 * 2] = puVar4[-2];
    local_68[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 9) {
      local_68[uVar3 * 2 + 2] = *puVar4;
      local_68[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 9);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_70 = 0;
  local_78 = 5;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_68);
  return;
}



// FUNCTION 141d02fb0 SetParameters body=250 status=ok
// SIG undefined SetParameters(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TFilterVS<10>::SetParameters(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68 [20];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0x3f800000;
  puVar4 = (undefined4 *)(param_3 + 8);
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0x3f800000;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0x3f800000;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  local_68[0xe] = 0;
  local_68[0xf] = 0x3f800000;
  local_68[0x10] = 0;
  local_68[0x11] = 0;
  local_68[0x12] = 0;
  local_68[0x13] = 0x3f800000;
  do {
    local_68[uVar3 * 2] = puVar4[-2];
    local_68[uVar3 * 2 + 1] = puVar4[-1];
    if ((int)uVar3 + 1U < 10) {
      local_68[uVar3 * 2 + 2] = *puVar4;
      local_68[uVar3 * 2 + 3] = puVar4[1];
    }
    uVar2 = (int)uVar3 + 2;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 10);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,0);
  }
  local_70 = 0;
  local_78 = 5;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_68);
  return;
}


