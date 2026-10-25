// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141c7ec70 FUN_141c7ec70 body=83 status=ok
// SIG undefined FUN_141c7ec70(void)

void FUN_141c7ec70(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL",1);
  iVar1 = (**(code **)(*param_2 + 0x2f8))(param_2);
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL_BEFORE_TONEMAP",iVar1 != 0);
  return;
}



// FUNCTION 141c7ecf0 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7ed60 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<1,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7edd0 ModifyCompilationEnvironment body=103 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7ee40 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7eeb0 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<2,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7ef20 ModifyCompilationEnvironment body=103 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7ef90 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7f000 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<3,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7f070 ModifyCompilationEnvironment body=103 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7f0e0 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7f150 ModifyCompilationEnvironment body=106 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<4,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7f1c0 ModifyCompilationEnvironment body=103 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurCS<4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7f230 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7f270 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<1,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7f2b0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7f2f0 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7f330 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<2,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7f370 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7f3b0 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7f3f0 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<3,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7f430 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7f470 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",1);
  return;
}



// FUNCTION 141c7f4b0 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<4,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",2);
  return;
}



// FUNCTION 141c7f4f0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessMotionBlurPS<4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOTION_BLUR_INNER_LOOP_CONFIG",0);
  return;
}



// FUNCTION 141c7f590 ModifyCompilationEnvironment body=115 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSubsurfaceSetupPS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c7f610 ModifyCompilationEnvironment body=112 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSubsurfaceSetupPS<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c7f680 ModifyCompilationEnvironment body=112 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSubsurfaceSetupPS<0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c7f6f0 ModifyCompilationEnvironment body=109 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSubsurfaceSetupPS<0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c7f7a0 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7f820 ModifyCompilationEnvironment body=111 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7f890 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7f910 ModifyCompilationEnvironment body=111 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7f980 ModifyCompilationEnvironment body=117 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7fa00 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7fa80 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7fb00 ModifyCompilationEnvironment body=111 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7fb70 ModifyCompilationEnvironment body=117 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<5,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7fbf0 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<5,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7fc70 ModifyCompilationEnvironment body=117 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<6,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7fcf0 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<6,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7fd70 ModifyCompilationEnvironment body=120 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<7,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7fdf0 ModifyCompilationEnvironment body=117 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<7,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7fe70 ModifyCompilationEnvironment body=114 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<8,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7fef0 ModifyCompilationEnvironment body=111 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<8,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7ff60 ModifyCompilationEnvironment body=111 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7ffd0 ModifyCompilationEnvironment body=108 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMaskPS_ES2<0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DEPTHTEXTURE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_FETCH",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c80040 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMergePS_ES2<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_BLOOM",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_SUN",0);
  return;
}



// FUNCTION 141c80080 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMergePS_ES2<2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_BLOOM",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_SUN",1);
  return;
}



// FUNCTION 141c800c0 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMergePS_ES2<3>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_BLOOM",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_SUN",1);
  return;
}



// FUNCTION 141c80100 ModifyCompilationEnvironment body=54 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessSunMergePS_ES2<0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_BLOOM",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ES2_USE_SUN",0);
  return;
}



// FUNCTION 141c80160 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c801f0 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c80280 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<1,2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",2);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c80310 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<1,2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",2);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c803a0 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c80430 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c804c0 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<2,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c80550 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<2,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c805e0 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<2,2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",2);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c80670 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<2,2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",2);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c80700 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<2,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c80790 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<2,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c80820 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c808b0 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c80940 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<0,2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",2);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c809d0 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<0,2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",2);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c80a60 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141c80af0 ModifyCompilationEnvironment body=131 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfacePS<0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_DIRECTION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SSS_SAMPLESET",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141c80b80 ModifyCompilationEnvironment body=165 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c80c30 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c80ce0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c80d90 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c80e30 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<2,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c80ed0 ModifyCompilationEnvironment body=156 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<2,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c80f70 ModifyCompilationEnvironment body=156 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<2,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c81010 ModifyCompilationEnvironment body=153 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<2,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",0);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c810b0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c81160 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c81200 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",1);
  return;
}



// FUNCTION 141c812a0 ModifyCompilationEnvironment body=156 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPostProcessSubsurfaceRecombinePS<0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"HALF_RES",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RECOMBINE_SUBSURFACESCATTER",1);
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUBSURFACE_PROFILE_CHECKERBOARD",0);
  return;
}



// FUNCTION 141c81380 FUN_141c81380 body=108 status=ok
// SIG undefined FUN_141c81380(void)

void FUN_141c81380(longlong param_1,longlong param_2)

{
  FUN_141c813f0();
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"USE_COLOR_FRINGE",*(undefined1 *)(param_1 + 8));
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"USE_GRAIN_QUANTIZATION",*(undefined1 *)(param_1 + 0xc));
  FUN_141a172f0(param_2,L"DIM_OUTPUT_DEVICE",*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141c813f0 FUN_141c813f0 body=169 status=ok
// SIG undefined FUN_141c813f0(void)

void FUN_141c813f0(undefined1 *param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_BLOOM",*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_GAMMA_ONLY",param_1[1]);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_GAMMA_ONLY_SRGB_OUT",param_1[2]);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_GRAIN_INTENSITY",param_1[3]);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_VIGNETTE",param_1[4]);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_SHARPEN",param_1[5]);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_GRAIN_JITTER",param_1[6]);
  return;
}



// FUNCTION 141c814a0 FUN_141c814a0 body=77 status=ok
// SIG undefined FUN_141c814a0(void)

void FUN_141c814a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  FUN_141a172f0(param_2,L"MAX_NUM_SUPPORTED_LIGHTS",0x19);
  return;
}



// FUNCTION 141c81510 FUN_141c81510 body=56 status=ok
// SIG undefined FUN_141c81510(void)

void FUN_141c81510(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"SUBSURFACE_RADIUS_SCALE",0x400);
  FUN_141a172f0(param_2,L"SUBSURFACE_KERNEL_SIZE",3);
  return;
}



// FUNCTION 141c81550 ModifyCompilationEnvironmentImpl body=361 status=ok
// SIG undefined ModifyCompilationEnvironmentImpl(void)

void FPostProcessTemporalAACS::ModifyCompilationEnvironmentImpl(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 4) / 7;
  uVar1 = (longlong)iVar3 / 2;
  uVar1 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
  iVar4 = (int)((longlong)uVar1 / 2);
  iVar2 = iVar4 / 3;
  FUN_141a172f0(param_2,L"TAA_PASS_CONFIG",*(int *)(param_1 + 4) % 7);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"TAA_FAST",iVar3 % 2 == 1);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"TAA_CAMERA_CUT",(int)((longlong)uVar1 % 2) == 1);
  FUN_141a172f0(param_2,L"TAA_SCREEN_PERCENTAGE_RANGE",iVar4 % 3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"TAA_UPSAMPLE_FILTERED",iVar2 % 2 == 1);
  uVar5 = iVar2 / 2 & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"TAA_DOWNSAMPLE",uVar5 == 1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  return;
}



// FUNCTION 141c816c0 ModifyCompilationEnvironmentImpl body=219 status=ok
// SIG undefined ModifyCompilationEnvironmentImpl(void)

void FPostProcessTemporalAAPS::ModifyCompilationEnvironmentImpl(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 4) / 7;
  uVar1 = (longlong)iVar2 / 2;
  uVar1 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
  FUN_141a172f0(param_2,L"TAA_PASS_CONFIG",*(int *)(param_1 + 4) % 7);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"TAA_FAST",iVar2 % 2 == 1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"TAA_RESPONSIVE",(int)((longlong)uVar1 % 2) == 1);
  uVar3 = (uint)((longlong)uVar1 / 2) & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  FShaderCompilerDefinitions::SetDefine(param_2,L"TAA_CAMERA_CUT",uVar3 == 1);
  return;
}



// FUNCTION 141c817a0 FUN_141c817a0 body=212 status=ok
// SIG undefined FUN_141c817a0(void)

void FUN_141c817a0(undefined4 *param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_28 [24];
  undefined1 local_10;
  
  uVar3 = (int)param_1[1] >> 0x1f & 0xfff;
  uVar2 = param_1[1] + uVar3;
  uVar4 = (int)uVar2 >> 0xc;
  FUN_141c74d70(local_28,(uVar2 & 0xfff) - uVar3);
  uVar4 = uVar4 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  local_10 = uVar4 == 1;
  FUN_141c81380(local_28,param_2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"EYEADAPTATION_EXPOSURE_FIX",local_10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  uVar1 = UseVolumeTextureLUT(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_VOLUME_LUT",uVar1);
  return;
}



// FUNCTION 141c81880 FUN_141c81880 body=264 status=ok
// SIG undefined FUN_141c81880(void)

void FUN_141c81880(undefined4 *param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_28 [8];
  undefined1 local_20;
  undefined1 local_1c;
  uint local_18;
  
  uVar3 = (int)param_1[1] >> 0x1f & 0x7f;
  uVar2 = param_1[1] + uVar3;
  uVar4 = (int)uVar2 >> 7;
  FUN_141c7ced0(local_28,(uVar2 & 0x7f) - uVar3);
  uVar2 = uVar4 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  local_20 = uVar2 == 1;
  uVar2 = (int)uVar4 / 2 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  local_1c = uVar2 == 1;
  local_18 = ((int)uVar4 / 2) / 2 & 0x80000007;
  if ((int)local_18 < 0) {
    local_18 = (local_18 - 1 | 0xfffffff8) + 1;
  }
  FUN_141c813f0(local_28,param_2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_COLOR_FRINGE",local_20);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_GRAIN_QUANTIZATION",local_1c);
  FUN_141a172f0(param_2,L"DIM_OUTPUT_DEVICE",local_18);
  uVar1 = UseVolumeTextureLUT(*param_1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_VOLUME_LUT",uVar1);
  return;
}



// FUNCTION 141c81990 FUN_141c81990 body=224 status=ok
// SIG undefined FUN_141c81990(void)

void FUN_141c81990(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_18 [8];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  
  FUN_141c74df0(local_18,*(undefined4 *)(param_1 + 4));
  FUN_141c813f0(local_18,param_2);
  lVar1 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_MSAA",local_10);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_DOF",local_f);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_LIGHT_SHAFTS",local_e);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_32BPP_HDR",local_d);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_COLOR_MATRIX",local_c);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_SHADOW_TINT",local_b);
  FShaderCompilerDefinitions::SetDefine(lVar1,L"USE_CONTRAST",local_a);
  FUN_141a172f0(param_2,L"NO_EYEADAPTATION_EXPOSURE_FIX",1);
  return;
}



// FUNCTION 141c81aa0 FUN_141c81aa0 body=1152 status=ok
// SIG undefined FUN_141c81aa0(void)

void FUN_141c81aa0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  uint in_stack_ffffffffffffff00;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  FRenderingCompositePass::GetInputDesc(param_1,0);
  puVar4 = (undefined8 *)FUN_141cf3cd0(param_1 + 6,param_2);
  lVar7 = *(longlong *)(*param_2 + 0x18);
  if (lVar7 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,0);
    lVar6 = FRenderingCompositeOutputRef::GetOutput(uVar5);
    plVar1 = *(longlong **)(lVar7 + 0x12b8);
    plVar2 = *(longlong **)(lVar6 + 0x50);
    *(longlong **)(lVar7 + 0x12b8) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
  }
  local_res8 = 0;
  if (*(int *)(*param_2 + 0xf60) == 2) {
    uVar5 = 0;
  }
  else {
    uVar5 = 5;
  }
  FUN_141ad74f0(param_2[8],*puVar4,0,uVar5,0x22,in_stack_ffffffffffffff00 & 0xffffff00);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  uStack_b0._0_4_ = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_b0._4_4_ = *(uint *)(param_1 + 9);
  local_b8 = (undefined *)0x0;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_b8,0,0x3f800000);
  FUN_141c774d0(param_2);
  uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
  local_b8 = &DAT_146a56f40;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(param_2[0xc] + 0x38,&local_res8,&local_b8);
  DrawRectangle(param_2[8]);
  uVar5 = puVar4[1];
  plVar1 = (longlong *)*puVar4;
  lVar7 = param_2[8];
  local_a8 = 0xffffffff00000000;
  uStack_a0 = 0xffffffffffffffff;
  local_88 = 0xffffffff;
  uStack_80 = 0;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar8 + 10;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x58);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar8 + 10;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar4;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar8;
  *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar8 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_a8._4_4_;
  *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_a0._4_4_;
  *(undefined4 *)(puVar8 + 4) = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar8 + 0x24) = local_98._4_4_;
  *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_90._4_4_;
  *(undefined4 *)(puVar8 + 6) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar8 + 0x34) = local_88._4_4_;
  *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_80._4_4_;
  puVar8[8] = plVar1;
  puVar8[9] = uVar5;
  lVar7 = (**(code **)(*plVar1 + 8))(plVar1);
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[8] + 0x20))();
  }
  lVar7 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[9] + 0x20))();
  }
  cVar3 = FUN_141d76c80(*param_2);
  if (cVar3 != '\0') {
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
    lVar7 = *param_2;
    *(float *)(lVar7 + 0x3b0) = *(float *)(lVar7 + 0x3b0) - *(float *)(lVar7 + 0x8f0);
    *(float *)(lVar7 + 0x470) = *(float *)(lVar7 + 0x470) - *(float *)(lVar7 + 0x8f0);
    *(float *)(lVar7 + 0x3b4) = *(float *)(lVar7 + 0x3b4) - *(float *)(lVar7 + 0x8f4);
    *(float *)(lVar7 + 0x474) = *(float *)(lVar7 + 0x474) - *(float *)(lVar7 + 0x8f4);
    puVar4 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(&local_a8,lVar7 + 0x390);
    uVar5 = puVar4[1];
    *(undefined8 *)(lVar7 + 0x410) = *puVar4;
    *(undefined8 *)(lVar7 + 0x418) = uVar5;
    uVar5 = puVar4[3];
    *(undefined8 *)(lVar7 + 0x420) = puVar4[2];
    *(undefined8 *)(lVar7 + 0x428) = uVar5;
    uVar5 = puVar4[5];
    *(undefined8 *)(lVar7 + 0x430) = puVar4[4];
    *(undefined8 *)(lVar7 + 0x438) = uVar5;
    uVar5 = puVar4[7];
    *(undefined8 *)(lVar7 + 0x440) = puVar4[6];
    *(undefined8 *)(lVar7 + 0x448) = uVar5;
    puVar4 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(&local_a8,lVar7 + 0x450);
    uVar5 = puVar4[1];
    *(undefined8 *)(lVar7 + 0x490) = *puVar4;
    *(undefined8 *)(lVar7 + 0x498) = uVar5;
    uVar5 = puVar4[3];
    *(undefined8 *)(lVar7 + 0x4a0) = puVar4[2];
    *(undefined8 *)(lVar7 + 0x4a8) = uVar5;
    uVar5 = puVar4[5];
    *(undefined8 *)(lVar7 + 0x4b0) = puVar4[4];
    *(undefined8 *)(lVar7 + 0x4b8) = uVar5;
    uVar5 = puVar4[7];
    *(undefined8 *)(lVar7 + 0x4c0) = puVar4[6];
    *(undefined8 *)(lVar7 + 0x4c8) = uVar5;
    *(undefined4 *)(lVar7 + 0x8f0) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)(lVar7 + 0x8f4) = DAT_1468b5d88._4_4_;
    FUN_141c90d50(lVar7 + 0x390);
    FUN_141d6ab00(lVar7);
  }
  return;
}



// FUNCTION 141c81f20 FUN_141c81f20 body=1718 status=ok
// SIG undefined FUN_141c81f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c81f20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 auStack_478 [32];
  ulonglong local_458;
  undefined8 local_450;
  ulonglong local_448;
  float local_440;
  float local_438;
  undefined8 local_430;
  undefined8 local_428;
  longlong local_420;
  undefined4 local_418;
  undefined4 local_410;
  undefined *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  uint local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  bVar4 = false;
  uVar5 = *(int *)(param_1 + 0xa8) / 2;
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  uVar6 = *(int *)(param_1 + 0xac) / 2;
  if ((int)uVar6 < 2) {
    uVar6 = 1;
  }
  local_3f0 = uVar6;
  local_3b8 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  lVar10 = *local_3b8;
  if ((((DAT_1464aa6e0 == *(float *)(lVar10 + 0x24)) && (*(float *)(lVar10 + 0x28) == DAT_1464aa6e4)
       ) && (*(float *)(lVar10 + 0x2c) == DAT_1464aa6e8)) &&
     (*(float *)(lVar10 + 0x30) == DAT_1464aa6ec)) {
    uStack_3e0 = 0xffffffff00000000;
    local_3d8 = CONCAT62(local_3d8._2_6_,0x102);
    local_408 = (undefined *)0x0;
    uStack_400 = 0;
    local_3e8 = lVar10;
    FUN_140c63b80(local_2e8,1,&local_3e8,&local_408);
    lVar10 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar10,local_228,local_2e8,local_158);
    puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 0x54;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x2a8);
      puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 0x54;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar9;
    *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
    **(undefined8 **)(lVar10 + 8) = puVar11;
    *(undefined8 **)(lVar10 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar11 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  }
  else {
    local_408 = (undefined *)0x0;
    FUN_141a19150(param_2[8],lVar10,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_408);
    local_440 = 0.0;
    local_448 = local_448 & 0xffffffffffffff00;
    local_450 = (ulonglong)local_450._4_4_ << 0x20;
    local_458 = local_458 & 0xffffffffffffff00;
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  local_408 = (undefined *)0x0;
  uStack_400._0_4_ = uVar5;
  uStack_400._4_4_ = uVar6;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_408,0,0x3f800000);
  plVar7 = (longlong *)0x0;
  local_360 = 0;
  local_368 = 0;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_2[8],&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  lVar10 = param_2[0xc];
  uStack_400._0_4_ = 0;
  local_408 = &DAT_146a558f0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 0x38,&local_3f8,&local_408);
  plVar12 = plVar7;
  if ((int)local_3f8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_3f8 * 0x20 + *(longlong *)(lVar10 + 0x38));
  }
  uStack_400 = (ulonglong)uStack_400._4_4_ << 0x20;
  plVar14 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar14 = plVar7;
  }
  local_408 = &DAT_146a557a0;
  lVar1 = *plVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 0x38,&local_3f8,&local_408);
  plVar12 = plVar7;
  if ((int)local_3f8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_3f8 * 0x20 + *(longlong *)(lVar10 + 0x38));
  }
  plVar14 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar14 = plVar7;
  }
  lVar10 = *plVar14;
  local_3a8 = DAT_1464c2720;
  if (lVar1 == 0) {
    local_408 = (undefined *)0x0;
    bVar4 = true;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar7 = *(longlong **)(lVar2 + 0x38);
  }
  uVar8 = 0;
  plStack_3a0 = plVar7;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_408);
  }
  bVar4 = false;
  if (lVar10 == 0) {
    bVar4 = true;
    local_408 = (undefined *)0x0;
  }
  else {
    lVar2 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_388 = uVar8;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_408);
  }
  local_35c = local_35c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  local_3f8 = CONCAT44(local_3f8._4_4_,*(undefined4 *)(param_1 + 0xb0));
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_408 = *(undefined **)(lVar2 + 0x38);
  FUN_141c07aa0(lVar1,param_2[8],local_408,*(undefined8 *)(*param_2 + 0x20));
  uVar8 = FUN_141a156e0();
  local_450 = 0;
  local_458 = local_458 & 0xffffffff00000000;
  FPostProcessPassParameters::SetVS(lVar1 + 0xc0,&local_408,param_2,uVar8);
  local_458 = local_458 & 0xffffffff00000000;
  FUN_1404986d0(param_2[8],local_408,lVar1 + 0x1bc,&local_3f8);
  lVar2 = *(longlong *)(lVar10 + 0x48);
  lVar3 = param_2[8];
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_408 = *(undefined **)(lVar2 + 0x40);
  FUN_141aa9690(lVar10,lVar3,local_408,*(undefined8 *)(*param_2 + 0x20));
  local_458 = FUN_141a156e0();
  local_448 = 0;
  local_450 = local_450 & 0xffffffff00000000;
  thunk_FUN_141ca99a0(lVar10 + 0xc0,lVar3,&local_408,param_2);
  local_410 = 1;
  local_418 = 1;
  local_3f8._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  iVar13 = local_3f8._4_4_ >> 0x1f;
  local_3f8 = CONCAT44(local_3f8._4_4_ / 2,(int)*(undefined8 *)(param_1 + 0xa8) / 2);
  local_438 = (float)local_3f0;
  local_440 = (float)uVar5;
  local_428 = local_3f8;
  local_430 = local_3f8;
  local_448 = local_448 & 0xffffffff00000000;
  local_450 = local_450 & 0xffffffff00000000;
  local_458 = CONCAT44(local_458._4_4_,local_438);
  local_420 = lVar1;
  DrawRectangle(param_2[8],iVar13,0);
  lVar10 = param_2[8];
  local_3e8 = 0xffffffff00000000;
  uStack_3e0 = 0xffffffffffffffff;
  lVar1 = local_3b8[1];
  plVar7 = (longlong *)*local_3b8;
  local_3c8 = 0xffffffff;
  uStack_3c0 = 0;
  local_3d8 = 0xffffffffffffffff;
  uStack_3d0 = 0xffffffffffffffff;
  puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 10;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x58);
    puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 10;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar9;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar11;
  *(undefined8 **)(lVar10 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_3e8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_3e8._4_4_;
  *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_3e0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_3e0._4_4_;
  *(undefined4 *)(puVar11 + 4) = (undefined4)local_3d8;
  *(undefined4 *)((longlong)puVar11 + 0x24) = local_3d8._4_4_;
  *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_3d0;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_3d0._4_4_;
  *(undefined4 *)(puVar11 + 6) = (undefined4)local_3c8;
  *(undefined4 *)((longlong)puVar11 + 0x34) = local_3c8._4_4_;
  *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_3c0;
  *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_3c0._4_4_;
  puVar11[8] = plVar7;
  puVar11[9] = lVar1;
  lVar10 = (**(code **)(*plVar7 + 8))(plVar7);
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar11[8] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar11[8] + 0x20))();
  }
  lVar10 = (**(code **)(*(longlong *)puVar11[9] + 8))();
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar11[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c825e0 FUN_141c825e0 body=1569 status=ok
// SIG undefined FUN_141c825e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c825e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  undefined1 auStack_3c8 [32];
  float local_3a8;
  float local_3a0;
  float local_398;
  float local_390;
  float local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_360;
  undefined *local_358;
  undefined8 uStack_350;
  uint local_348;
  uint uStack_344;
  int local_340;
  uint local_33c;
  int local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [192];
  undefined4 local_238;
  undefined1 local_168 [256];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  lVar8 = FRenderingCompositePass::GetInputDesc(param_1,0);
  local_338 = *(int *)(param_1 + 0xa8);
  local_340 = *(int *)(param_1 + 0xac);
  iVar13 = *(int *)(param_1 + 0xb4) - local_340;
  iVar7 = *(uint *)(param_1 + 0xb0) - local_338;
  local_348 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
  uVar3 = local_348;
  if ((int)local_348 < 2) {
    uVar3 = 1;
  }
  uStack_344 = (int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2;
  uVar5 = CONCAT44(uStack_344,local_348);
  uVar4 = uStack_344;
  if ((int)uStack_344 < 2) {
    uVar4 = 1;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    local_338 = 0;
    local_340 = 0;
    uVar14 = uVar4;
    local_33c = uVar3;
  }
  else {
    local_348 = *(uint *)(lVar8 + 0x14);
    uStack_344 = *(uint *)(lVar8 + 0x18);
    uVar14 = *(uint *)(param_1 + 0xb4);
    local_33c = *(uint *)(param_1 + 0xb0);
  }
  plVar9 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  lVar8 = *plVar9;
  if ((((DAT_1464aa6e0 == *(float *)(lVar8 + 0x24)) && (*(float *)(lVar8 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar8 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar8 + 0x30) == DAT_1464aa6ec)
     ) {
    uStack_320 = 0xffffffff00000000;
    local_318 = CONCAT62(local_318._2_6_,0x102);
    local_358 = (undefined *)0x0;
    uStack_350 = 0;
    local_328 = lVar8;
    FUN_140c63b80(local_2f8,1,&local_328,&local_358);
    lVar8 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar8,local_238,local_2f8,local_168);
    puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 0x54;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x2a8);
      puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 0x54;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar10;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar12;
    *(undefined8 **)(lVar8 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar12 + 2,local_2f8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2f8);
  }
  else {
    local_330 = 0;
    FUN_141a19150(param_2[8],lVar8,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_330);
    local_390 = 0.0;
    local_398 = (float)((uint)local_398 & 0xffffff00);
    local_3a0 = 0.0;
    local_3a8 = (float)((uint)local_3a8 & 0xffffff00);
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  uStack_350 = CONCAT44(uVar4,uVar3);
  local_358 = (undefined *)0x0;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_358);
  lVar8 = *param_2;
  cVar1 = *(char *)(lVar8 + 0x3010);
  if (*(char *)(lVar8 + 0x1714) == '\x01') {
    fVar15 = *(float *)(lVar8 + 0x1738);
  }
  else {
    fVar15 = 0.0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a59a18) && (_Init_thread_header(&DAT_146a59a18), DAT_146a59a18 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    if (plVar11 == (longlong *)0x0) {
      DAT_146a59a10 = 0;
    }
    else {
      DAT_146a59a10 = (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    _Init_thread_footer(&DAT_146a59a18);
  }
  if (((DAT_146ab62dd == '\0') || (0x1d < (uint)(&DAT_1464c9c48)[(int)param_2[0xb]])) ||
     ((0x20220800U >> ((&DAT_1464c9c48)[(int)param_2[0xb]] & 0x1f) & 1) == 0)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\0';
    if ((DAT_146a59a10 != 0) && (1 < *(int *)(DAT_146a59a10 + 4))) {
      cVar6 = '\x04';
    }
  }
  cVar6 = cVar6 + (-(cVar1 != '\0') & 2U) + (0.0 < fVar15);
  if (cVar6 == '\0') {
    FUN_141c5d6b0(param_2);
  }
  else if (cVar6 == '\x01') {
    FUN_141c5cbb0(param_2);
  }
  else if (cVar6 == '\x02') {
    FUN_141c5ce70(param_2);
  }
  else if (cVar6 == '\x03') {
    FUN_141c5d130(param_2);
  }
  else if (cVar6 == '\x04') {
    FUN_141c5d3f0(param_2);
  }
  lVar8 = param_2[0xc];
  local_358 = &DAT_146a553b0;
  uStack_350 = uStack_350 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&local_330,&local_358);
  if ((int)local_330 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)(int)local_330 * 0x20 + *(longlong *)(lVar8 + 0x38);
  }
  local_360 = 1;
  puVar10 = (undefined8 *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  local_368 = 1;
  local_398 = (float)local_340;
  local_390 = (float)(int)(local_33c - local_338);
  local_3a8 = (float)uVar4;
  local_370 = *puVar10;
  local_378 = CONCAT44(uStack_344,local_348);
  local_3a0 = (float)local_338;
  local_388 = (float)(int)(uVar14 - local_340);
  local_380 = uVar5;
  DrawRectangle(param_2[8],local_338,local_340,(float)uVar3);
  lVar8 = param_2[8];
  lVar2 = plVar9[1];
  plVar9 = (longlong *)*plVar9;
  local_328 = 0xffffffff00000000;
  uStack_320 = 0xffffffffffffffff;
  local_308 = 0xffffffff;
  uStack_300 = 0;
  local_318 = 0xffffffffffffffff;
  uStack_310 = 0xffffffffffffffff;
  puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 10;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 10;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar10;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar12;
  *(undefined8 **)(lVar8 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_328;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_328._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_320;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_320._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_318;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_318._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_310;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_310._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_308;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_308._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_300;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_300._4_4_;
  puVar12[8] = plVar9;
  puVar12[9] = lVar2;
  lVar8 = (**(code **)(*plVar9 + 8))(plVar9);
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar8 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c82c10 FUN_141c82c10 body=1286 status=ok
// SIG undefined FUN_141c82c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c82c10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_3d8 [32];
  float local_3b8;
  float local_3b0;
  float local_3a8;
  float local_3a0;
  float local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined *local_358;
  undefined8 uStack_350;
  uint local_348;
  int local_344;
  uint local_340;
  int local_33c;
  int local_338;
  int iStack_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_2f8 [192];
  undefined4 local_238;
  undefined1 local_168 [256];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  uVar3 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  iVar5 = (int)*(undefined8 *)(param_1 + 0xa8);
  local_368._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  local_338 = (int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2;
  iStack_334 = (int)(local_368._4_4_ + (local_368._4_4_ >> 0x1f & 3U)) >> 2;
  local_368 = CONCAT44(iStack_334,local_338);
  uVar2 = local_368;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    local_33c = 0;
    local_344 = 0;
    local_348 = uVar4;
    local_340 = uVar3;
  }
  else {
    local_338 = *(int *)(lVar6 + 0x14);
    iStack_334 = *(int *)(lVar6 + 0x18);
    lVar6 = *param_2;
    local_33c = *(int *)(lVar6 + 0x1aa0);
    local_344 = *(int *)(lVar6 + 0x1aa4);
    local_348 = *(uint *)(lVar6 + 0x1aac);
    local_340 = *(uint *)(lVar6 + 0x1aa8);
  }
  plVar7 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  lVar6 = *plVar7;
  if ((((DAT_1464aa6e0 == *(float *)(lVar6 + 0x24)) && (*(float *)(lVar6 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar6 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar6 + 0x30) == DAT_1464aa6ec)
     ) {
    uStack_328 = 0xffffffff00000000;
    local_320 = CONCAT62(local_320._2_6_,0x102);
    local_358 = (undefined *)0x0;
    uStack_350 = 0;
    local_330 = lVar6;
    FUN_140c63b80(local_2f8,1,&local_330,&local_358);
    lVar6 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar6,local_238,local_2f8,local_168);
    puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 0x54;
    if (*(undefined8 **)(lVar6 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x2a8);
      puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 0x54;
    }
    *(undefined8 **)(lVar6 + 0x30) = puVar8;
    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
    **(undefined8 **)(lVar6 + 8) = puVar9;
    *(undefined8 **)(lVar6 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar9 + 2,local_2f8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2f8);
  }
  else {
    local_368 = 0;
    FUN_141a19150(param_2[8],lVar6,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_368);
    local_3a0 = 0.0;
    local_3a8 = (float)((uint)local_3a8 & 0xffffff00);
    local_3b0 = 0.0;
    local_3b8 = (float)((uint)local_3b8 & 0xffffff00);
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  local_358 = (undefined *)0x0;
  uStack_350._0_4_ = uVar3;
  uStack_350._4_4_ = uVar4;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_358);
  FUN_141c931c0(param_1,param_2);
  uStack_350 = (ulonglong)uStack_350._4_4_ << 0x20;
  lVar6 = param_2[0xc];
  local_358 = &DAT_146a55500;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_368,&local_358);
  if ((int)local_368 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)(int)local_368 * 0x20 + *(longlong *)(lVar6 + 0x38);
  }
  local_370 = 1;
  puVar8 = (undefined8 *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  local_378 = 1;
  local_3a8 = (float)local_344;
  local_3b0 = (float)local_33c;
  local_3a0 = (float)(int)(local_340 - local_33c);
  local_3b8 = (float)uVar4;
  local_380 = *puVar8;
  local_388 = CONCAT44(iStack_334,local_338);
  local_390 = uVar2;
  local_398 = (float)(int)(local_348 - local_344);
  DrawRectangle(param_2[8],local_33c,local_344,(float)uVar3);
  lVar6 = param_2[8];
  lVar1 = plVar7[1];
  plVar7 = (longlong *)*plVar7;
  local_330 = 0xffffffff00000000;
  uStack_328 = 0xffffffffffffffff;
  local_310 = 0xffffffff;
  uStack_308 = 0;
  local_320 = 0xffffffffffffffff;
  uStack_318 = 0xffffffffffffffff;
  puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 10;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x58);
    puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 10;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar8;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar9;
  *(undefined8 **)(lVar6 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar9 + 2) = (undefined4)local_330;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_330._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_328;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_328._4_4_;
  *(undefined4 *)(puVar9 + 4) = (undefined4)local_320;
  *(undefined4 *)((longlong)puVar9 + 0x24) = local_320._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_318;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_318._4_4_;
  *(undefined4 *)(puVar9 + 6) = (undefined4)local_310;
  *(undefined4 *)((longlong)puVar9 + 0x34) = local_310._4_4_;
  *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_308;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_308._4_4_;
  puVar9[8] = plVar7;
  puVar9[9] = lVar1;
  lVar6 = (**(code **)(*plVar7 + 8))(plVar7);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)puVar9[8] + 0x18))();
    if (lVar6 == 0) {
      (**(code **)(*(longlong *)puVar9[8] + 0x20))();
    }
  }
  lVar6 = (**(code **)(*(longlong *)puVar9[9] + 8))();
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)puVar9[9] + 0x18))();
    if (lVar6 == 0) {
      (**(code **)(*(longlong *)puVar9[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141c83120 FUN_141c83120 body=1690 status=ok
// SIG undefined FUN_141c83120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c83120(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_4b8 [32];
  ulonglong local_498;
  undefined4 local_490;
  ulonglong local_488;
  float local_480;
  float local_478;
  undefined8 local_470;
  undefined8 local_468;
  longlong local_460;
  undefined4 local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  uint local_438;
  undefined *local_428;
  ulonglong uStack_420;
  undefined2 local_418;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  plVar13 = (longlong *)0x0;
  uVar4 = *(uint *)(param_1 + 0xb8);
  if ((int)*(uint *)(param_1 + 0xb8) < 2) {
    uVar4 = 1;
  }
  uVar5 = *(uint *)(param_1 + 0xbc);
  if ((int)*(uint *)(param_1 + 0xbc) < 2) {
    uVar5 = 1;
  }
  local_438 = uVar5;
  local_3b8 = (longlong *)FUN_141cf3cd0(param_1 + 0x30);
  local_428 = (undefined *)*local_3b8;
  if ((((DAT_1464aa6e0 == *(float *)(local_428 + 0x24)) &&
       (*(float *)(local_428 + 0x28) == DAT_1464aa6e4)) &&
      (*(float *)(local_428 + 0x2c) == DAT_1464aa6e8)) &&
     (*(float *)(local_428 + 0x30) == DAT_1464aa6ec)) {
    uStack_420 = 0xffffffff00000000;
    local_418 = 0x102;
    local_448 = 0;
    uStack_440 = 0;
    FUN_140c63b80(local_2e8,1,&local_428,&local_448);
    lVar9 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar9,local_228,local_2e8,local_158);
    puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 0x54;
    if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x2a8);
      puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 0x54;
    }
    *(undefined8 **)(lVar9 + 0x30) = puVar8;
    *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    **(undefined8 **)(lVar9 + 8) = puVar10;
    *(undefined8 **)(lVar9 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar10 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  }
  else {
    local_448 = 0;
    FUN_141a19150(param_2[8],local_428,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_448);
    local_480 = 0.0;
    local_488 = local_488 & 0xffffffffffffff00;
    local_490 = 0;
    local_498 = local_498 & 0xffffffffffffff00;
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  local_448 = 0;
  uStack_440 = CONCAT44(uVar5,uVar4);
  local_428 = (undefined *)0x0;
  uStack_420 = uStack_440;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_428,0,0x3f800000);
  local_368 = 0;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_360 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_2[8],&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  lVar9 = param_2[0xc];
  uStack_420 = uStack_420 & 0xffffffff00000000;
  local_428 = &DAT_146a55b90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_448,&local_428);
  plVar12 = plVar13;
  if ((int)local_448 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_448 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_428 = &DAT_146a55a40;
  uStack_420 = uStack_420 & 0xffffffff00000000;
  lVar1 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_448,&local_428);
  plVar12 = plVar13;
  if ((int)local_448 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_448 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  lVar9 = *plVar11;
  local_3a8 = DAT_1464c2720;
  if (lVar1 == 0) {
    local_448 = 0;
    plVar12 = (longlong *)0x1;
    plStack_3a0 = plVar13;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_3a0 = *(longlong **)(lVar2 + 0x38);
    plVar12 = plVar13;
  }
  uVar7 = 0;
  if (plVar12 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_448);
  }
  bVar6 = false;
  if (lVar9 == 0) {
    bVar6 = true;
    local_448 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar7 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_388 = uVar7;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_448);
  }
  local_35c = local_35c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
  FUN_141c93ff0(lVar1,param_2,*(undefined8 *)(param_1 + 0xc0));
  lVar2 = param_2[8];
  local_408 = *(float *)(param_1 + 0xd0) * 0.125;
  fStack_404 = *(float *)(param_1 + 0xd4) * 0.125;
  fStack_400 = *(float *)(param_1 + 0xd8) * 0.125;
  fStack_3fc = *(float *)(param_1 + 0xdc) * 0.125;
  local_3f8 = *(float *)(param_1 + 0xe0) * 0.125;
  fStack_3f4 = *(float *)(param_1 + 0xe4) * 0.125;
  fStack_3f0 = *(float *)(param_1 + 0xe8) * 0.125;
  fStack_3ec = *(float *)(param_1 + 0xec) * 0.125;
  lVar3 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_448 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9690(lVar9,lVar2,local_448,*(undefined8 *)(*param_2 + 0x20));
  local_498 = FUN_141a156e0();
  local_488 = 0;
  local_490 = 0;
  thunk_FUN_141ca99a0(lVar9 + 0xc0,lVar2,&local_448,param_2);
  local_498 = local_498 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (lVar2,local_448,lVar9 + 0x1bc,&local_408);
  local_498 = local_498 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (lVar2,local_448,lVar9 + 0x1c2,&local_3f8);
  local_470 = *(undefined8 *)(param_1 + 0xb8);
  local_450 = 1;
  local_458 = 1;
  local_478 = (float)local_438;
  local_480 = (float)uVar4;
  local_488 = local_488 & 0xffffffff00000000;
  local_490 = 0;
  local_498 = CONCAT44(local_498._4_4_,local_478);
  local_468 = local_470;
  local_460 = lVar1;
  DrawRectangle(param_2[8]);
  lVar9 = param_2[8];
  local_3e8 = 0xffffffff00000000;
  uStack_3e0 = 0xffffffffffffffff;
  lVar1 = local_3b8[1];
  plVar13 = (longlong *)*local_3b8;
  local_3c8 = 0xffffffff;
  uStack_3c0 = 0;
  local_3d8 = 0xffffffffffffffff;
  uStack_3d0 = 0xffffffffffffffff;
  puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 10;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x58);
    puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 10;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar8;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar10;
  *(undefined8 **)(lVar9 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar10 + 2) = (undefined4)local_3e8;
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_3e8._4_4_;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_3e0;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_3e0._4_4_;
  *(undefined4 *)(puVar10 + 4) = (undefined4)local_3d8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = local_3d8._4_4_;
  *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_3d0;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_3d0._4_4_;
  *(undefined4 *)(puVar10 + 6) = (undefined4)local_3c8;
  *(undefined4 *)((longlong)puVar10 + 0x34) = local_3c8._4_4_;
  *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_3c0;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_3c0._4_4_;
  puVar10[8] = plVar13;
  puVar10[9] = lVar1;
  lVar9 = (**(code **)(*plVar13 + 8))(plVar13);
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar10[8] + 0x20))();
  }
  lVar9 = (**(code **)(*(longlong *)puVar10[9] + 8))();
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar10[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c837c0 FUN_141c837c0 body=1683 status=ok
// SIG undefined FUN_141c837c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c837c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_488 [32];
  ulonglong local_468;
  undefined8 local_460;
  ulonglong local_458;
  float local_450;
  float local_448;
  undefined8 local_440;
  undefined8 local_438;
  longlong local_430;
  undefined4 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined *local_408;
  ulonglong uStack_400;
  undefined2 local_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  plVar13 = (longlong *)0x0;
  local_418 = local_418 & 0xffffffff00000000;
  uVar4 = *(int *)(param_1 + 0xb8) / 2;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = *(int *)(param_1 + 0xbc) / 2;
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  local_3b8 = param_1;
  local_3b0 = (longlong *)FUN_141cf3cd0(param_1 + 0x30,param_2);
  local_408 = (undefined *)*local_3b0;
  if ((((DAT_1464aa6e0 == *(float *)(local_408 + 0x24)) &&
       (*(float *)(local_408 + 0x28) == DAT_1464aa6e4)) &&
      (*(float *)(local_408 + 0x2c) == DAT_1464aa6e8)) &&
     (*(float *)(local_408 + 0x30) == DAT_1464aa6ec)) {
    uStack_400 = 0xffffffff00000000;
    local_3f8 = 0x102;
    local_418 = 0;
    uStack_410 = 0;
    FUN_140c63b80(local_2e8,1,&local_408,&local_418);
    lVar8 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar8,local_228,local_2e8,local_158);
    puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 0x54;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x2a8);
      puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 0x54;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar7;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar9;
    *(undefined8 **)(lVar8 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar9 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  }
  else {
    local_418 = 0;
    FUN_141a19150(param_2[8],local_408,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_418);
    local_450 = 0.0;
    local_458 = local_458 & 0xffffffffffffff00;
    local_460 = (ulonglong)local_460._4_4_ << 0x20;
    local_468 = local_468 & 0xffffffffffffff00;
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  local_418 = 0;
  uStack_410 = CONCAT44(uVar5,uVar4);
  local_408 = (undefined *)0x0;
  uStack_400 = uStack_410;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_408,0,0x3f800000);
  local_368 = 0;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_360 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_2[8],&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  lVar8 = param_2[0xc];
  uStack_400 = uStack_400 & 0xffffffff00000000;
  local_408 = &DAT_146a56a00;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&local_418,&local_408);
  plVar12 = plVar13;
  if ((int)local_418 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_418 * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  uStack_400 = uStack_400 & 0xffffffff00000000;
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_408 = &DAT_146a568b0;
  lVar1 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,&local_418,&local_408);
  plVar12 = plVar13;
  if ((int)local_418 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_418 * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  lVar8 = *plVar11;
  local_3a8 = DAT_1464c2720;
  if (lVar1 == 0) {
    local_418 = 0;
    plVar12 = (longlong *)0x1;
    plStack_3a0 = plVar13;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_3a0 = *(longlong **)(lVar2 + 0x38);
    plVar12 = plVar13;
  }
  uVar6 = 0;
  if (plVar12 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_418);
  }
  bVar3 = false;
  if (lVar8 == 0) {
    bVar3 = true;
    local_418 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_388 = uVar6;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_418);
  }
  local_35c = local_35c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_418 = *(undefined8 *)(lVar2 + 0x38);
  FUN_141c07aa0(lVar1,param_2[8],local_418,*(undefined8 *)(*param_2 + 0x20));
  uVar6 = FUN_1404a0e20();
  local_460 = 0;
  local_468 = local_468 & 0xffffffff00000000;
  FPostProcessPassParameters::SetVS(lVar1 + 0xc0,&local_418,param_2,uVar6);
  lVar2 = *(longlong *)(lVar8 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_418 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(lVar8,param_2[8],local_418,*(undefined8 *)(*param_2 + 0x20));
  local_468 = FUN_141a156e0();
  local_458 = 0;
  local_460 = local_460 & 0xffffffff00000000;
  thunk_FUN_141ca99a0(lVar8 + 0xc0,param_2[8],&local_418,param_2);
  local_420 = 1;
  local_428 = 1;
  local_418._4_4_ = (int)((ulonglong)*(undefined8 *)(local_3b8 + 0xb8) >> 0x20);
  iVar10 = local_418._4_4_ >> 0x1f;
  local_418 = CONCAT44(local_418._4_4_ / 2,(int)*(undefined8 *)(local_3b8 + 0xb8) / 2);
  local_448 = (float)uVar5;
  local_450 = (float)uVar4;
  local_438 = local_418;
  local_440 = local_418;
  local_458 = local_458 & 0xffffffff00000000;
  local_460 = local_460 & 0xffffffff00000000;
  local_468 = CONCAT44(local_468._4_4_,local_448);
  local_430 = lVar1;
  DrawRectangle(param_2[8],iVar10,0);
  lVar8 = param_2[8];
  local_3e8 = 0xffffffff00000000;
  uStack_3e0 = 0xffffffffffffffff;
  lVar1 = local_3b0[1];
  plVar13 = (longlong *)*local_3b0;
  local_3c8 = 0xffffffff;
  uStack_3c0 = 0;
  local_3d8 = 0xffffffffffffffff;
  uStack_3d0 = 0xffffffffffffffff;
  puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 10;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
    puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 10;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar7;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar9;
  *(undefined8 **)(lVar8 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar9 + 2) = (undefined4)local_3e8;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_3e8._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_3e0;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_3e0._4_4_;
  *(undefined4 *)(puVar9 + 4) = (undefined4)local_3d8;
  *(undefined4 *)((longlong)puVar9 + 0x24) = local_3d8._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_3d0;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_3d0._4_4_;
  *(undefined4 *)(puVar9 + 6) = (undefined4)local_3c8;
  *(undefined4 *)((longlong)puVar9 + 0x34) = local_3c8._4_4_;
  *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_3c0;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_3c0._4_4_;
  puVar9[8] = plVar13;
  puVar9[9] = lVar1;
  lVar8 = (**(code **)(*plVar13 + 8))(plVar13);
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar9[8] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar9[8] + 0x20))();
  }
  lVar8 = (**(code **)(*(longlong *)puVar9[9] + 8))();
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar9[9] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar9[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c83e60 FUN_141c83e60 body=1247 status=ok
// SIG undefined FUN_141c83e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c83e60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_3c8 [32];
  float local_3a8;
  float local_3a0;
  float local_398;
  float local_390;
  float local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_360;
  undefined *local_358;
  undefined8 uStack_350;
  uint local_348;
  uint uStack_344;
  int local_340;
  uint local_33c;
  int local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [192];
  undefined4 local_238;
  undefined1 local_168 [256];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  lVar5 = FRenderingCompositePass::GetInputDesc(param_1,0);
  local_338 = *(int *)(param_1 + 0xb8);
  local_340 = *(int *)(param_1 + 0xbc);
  local_348 = (int)(*(uint *)(param_1 + 0xc0) - local_338) / 2;
  uVar2 = local_348;
  if ((int)local_348 < 2) {
    uVar2 = 1;
  }
  uStack_344 = (*(int *)(param_1 + 0xc4) - local_340) / 2;
  uVar4 = CONCAT44(uStack_344,local_348);
  uVar3 = uStack_344;
  if ((int)uStack_344 < 2) {
    uVar3 = 1;
  }
  if (*(char *)(param_1 + 200) == '\0') {
    local_338 = 0;
    local_340 = 0;
    uVar9 = uVar3;
    local_33c = uVar2;
  }
  else {
    local_348 = *(uint *)(lVar5 + 0x14);
    uStack_344 = *(uint *)(lVar5 + 0x18);
    uVar9 = *(uint *)(param_1 + 0xc4);
    local_33c = *(uint *)(param_1 + 0xc0);
  }
  plVar6 = (longlong *)FUN_141cf3cd0(param_1 + 0x30,param_2);
  lVar5 = *plVar6;
  if ((((DAT_1464aa6e0 == *(float *)(lVar5 + 0x24)) && (*(float *)(lVar5 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar5 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar5 + 0x30) == DAT_1464aa6ec)
     ) {
    uStack_320 = 0xffffffff00000000;
    local_318 = CONCAT62(local_318._2_6_,0x102);
    local_358 = (undefined *)0x0;
    uStack_350 = 0;
    local_328 = lVar5;
    FUN_140c63b80(local_2f8,1,&local_328,&local_358);
    lVar5 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar5,local_238,local_2f8,local_168);
    puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 0x54;
    if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x2a8);
      puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 0x54;
    }
    *(undefined8 **)(lVar5 + 0x30) = puVar7;
    *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
    **(undefined8 **)(lVar5 + 8) = puVar8;
    *(undefined8 **)(lVar5 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar8 + 2,local_2f8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2f8);
  }
  else {
    local_330 = 0;
    FUN_141a19150(param_2[8],lVar5,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_330);
    local_390 = 0.0;
    local_398 = (float)((uint)local_398 & 0xffffff00);
    local_3a0 = 0.0;
    local_3a8 = (float)((uint)local_3a8 & 0xffffff00);
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  uStack_350 = CONCAT44(uVar3,uVar2);
  local_358 = (undefined *)0x0;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_358);
  if (*(char *)(*param_2 + 0x3010) == '\0') {
    FUN_141c5f6b0(param_2);
  }
  else {
    FUN_141c5f410();
  }
  uStack_350 = uStack_350 & 0xffffffff00000000;
  lVar5 = param_2[0xc];
  local_358 = &DAT_146a56610;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x38,&local_330,&local_358);
  if ((int)local_330 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)(int)local_330 * 0x20 + *(longlong *)(lVar5 + 0x38);
  }
  local_360 = 1;
  puVar7 = (undefined8 *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  local_368 = 1;
  local_398 = (float)local_340;
  local_390 = (float)(int)(local_33c - local_338);
  local_3a8 = (float)uVar3;
  local_370 = *puVar7;
  local_378 = CONCAT44(uStack_344,local_348);
  local_3a0 = (float)local_338;
  local_388 = (float)(int)(uVar9 - local_340);
  local_380 = uVar4;
  DrawRectangle(param_2[8],local_338,local_340,(float)uVar2);
  lVar5 = param_2[8];
  lVar1 = plVar6[1];
  plVar6 = (longlong *)*plVar6;
  local_328 = 0xffffffff00000000;
  uStack_320 = 0xffffffffffffffff;
  local_308 = 0xffffffff;
  uStack_300 = 0;
  local_318 = 0xffffffffffffffff;
  uStack_310 = 0xffffffffffffffff;
  puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 10;
  if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x58);
    puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 10;
  }
  *(undefined8 **)(lVar5 + 0x30) = puVar7;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar8;
  *(undefined8 **)(lVar5 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar8 + 2) = (undefined4)local_328;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_328._4_4_;
  *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_320;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_320._4_4_;
  *(undefined4 *)(puVar8 + 4) = (undefined4)local_318;
  *(undefined4 *)((longlong)puVar8 + 0x24) = local_318._4_4_;
  *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_310;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_310._4_4_;
  *(undefined4 *)(puVar8 + 6) = (undefined4)local_308;
  *(undefined4 *)((longlong)puVar8 + 0x34) = local_308._4_4_;
  *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_300;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_300._4_4_;
  puVar8[8] = plVar6;
  puVar8[9] = lVar1;
  lVar5 = (**(code **)(*plVar6 + 8))(plVar6);
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*(longlong *)puVar8[8] + 0x18))();
    if (lVar5 == 0) {
      (**(code **)(*(longlong *)puVar8[8] + 0x20))();
    }
  }
  lVar5 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*(longlong *)puVar8[9] + 0x18))();
    if (lVar5 == 0) {
      (**(code **)(*(longlong *)puVar8[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141c84340 FUN_141c84340 body=1147 status=ok
// SIG undefined FUN_141c84340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c84340(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_3b8 [32];
  float local_398;
  undefined4 local_390;
  uint local_388;
  float local_380;
  float local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined *local_338;
  undefined8 uStack_330;
  int local_328 [2];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  local_348 = param_1;
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  uVar1 = *(undefined8 *)(lVar6 + 0x14);
  uVar3 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  plVar7 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  lVar6 = *plVar7;
  if ((((DAT_1464aa6e0 == *(float *)(lVar6 + 0x24)) && (*(float *)(lVar6 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar6 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar6 + 0x30) == DAT_1464aa6ec)
     ) {
    uStack_318 = 0xffffffff00000000;
    local_310 = CONCAT62(local_310._2_6_,0x102);
    local_338 = (undefined *)0x0;
    uStack_330 = 0;
    local_320 = lVar6;
    FUN_140c63b80(local_2e8,1,&local_320,&local_338);
    lVar6 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar6,local_228,local_2e8,local_158);
    puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 0x54;
    if (*(undefined8 **)(lVar6 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x2a8);
      puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 0x54;
    }
    *(undefined8 **)(lVar6 + 0x30) = puVar8;
    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
    **(undefined8 **)(lVar6 + 8) = puVar9;
    *(undefined8 **)(lVar6 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar9 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
    param_1 = local_348;
  }
  else {
    local_348 = 0;
    FUN_141a19150(param_2[8],lVar6,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_348);
    local_380 = 0.0;
    local_388 = local_388 & 0xffffff00;
    local_390 = 0;
    local_398 = (float)((uint)local_398 & 0xffffff00);
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  uStack_330 = CONCAT44(uVar4,uVar3);
  local_338 = (undefined *)0x0;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_338,0,0x3f800000);
  if (*(char *)(*param_2 + 0x3010) == '\0') {
    FUN_141c5fbf0(param_2);
  }
  else {
    FUN_141c5f950();
  }
  lVar6 = param_2[0xc];
  iVar5 = (int)*(undefined8 *)(param_1 + 0xa8);
  uStack_330 = uStack_330 & 0xffffffff00000000;
  local_348._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  local_348 = CONCAT44((int)(local_348._4_4_ + (local_348._4_4_ >> 0x1f & 3U)) >> 2,
                       (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
  local_338 = &DAT_146a56760;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_328,&local_338);
  puVar8 = (undefined8 *)0x0;
  if (local_328[0] != -1) {
    puVar8 = (undefined8 *)((longlong)local_328[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  local_350 = 1;
  local_358 = 1;
  local_398 = (float)uVar4;
  local_380 = (float)uVar3;
  puVar9 = puVar8 + 2;
  if (puVar8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  local_360 = *puVar9;
  local_370 = local_348;
  local_388 = 0;
  local_390 = 0;
  local_378 = local_398;
  local_368 = uVar1;
  DrawRectangle(param_2[8]);
  lVar6 = param_2[8];
  lVar2 = plVar7[1];
  plVar7 = (longlong *)*plVar7;
  local_320 = 0xffffffff00000000;
  uStack_318 = 0xffffffffffffffff;
  local_300 = 0xffffffff;
  uStack_2f8 = 0;
  local_310 = 0xffffffffffffffff;
  uStack_308 = 0xffffffffffffffff;
  puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 10;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x58);
    puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 10;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar8;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar9;
  *(undefined8 **)(lVar6 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar9 + 2) = (undefined4)local_320;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_320._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_318;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_318._4_4_;
  *(undefined4 *)(puVar9 + 4) = (undefined4)local_310;
  *(undefined4 *)((longlong)puVar9 + 0x24) = local_310._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_308;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_308._4_4_;
  *(undefined4 *)(puVar9 + 6) = (undefined4)local_300;
  *(undefined4 *)((longlong)puVar9 + 0x34) = local_300._4_4_;
  *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_2f8;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_2f8._4_4_;
  puVar9[8] = plVar7;
  puVar9[9] = lVar2;
  lVar6 = (**(code **)(*plVar7 + 8))(plVar7);
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar9[8] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar9[8] + 0x20))();
  }
  lVar6 = (**(code **)(*(longlong *)puVar9[9] + 8))();
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar9[9] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar9[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c847c0 Process body=61 status=ok
// SIG undefined Process(void)

void FRCPassPostProcessInput::Process(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  plVar2 = *(longlong **)(param_1 + 0x70);
  *(longlong **)(param_1 + 0x70) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141c847f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2);
    return;
  }
  return;
}



// FUNCTION 141c84800 FUN_141c84800 body=1555 status=ok
// SIG undefined FUN_141c84800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c84800(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_1a8 [32];
  float local_188;
  uint local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  ulonglong uStack_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar13 = (longlong *)0x0;
  local_178 = (undefined *)((ulonglong)local_178 & 0xffffffff00000000);
  lVar8 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar8 != 0) {
    local_158 = *(undefined8 **)(param_2 + 8);
    uStack_150 = *(undefined8 *)(param_2 + 0x10);
    iVar4 = *(int *)(param_2 + 0x18) / *(int *)(lVar8 + 0x14);
    iVar5 = ((int)uStack_150 + -1 + iVar4) / iVar4;
    iVar6 = ((int)((ulonglong)uStack_150 >> 0x20) + -1 + iVar4) / iVar4;
    local_170 = CONCAT44(iVar6,iVar5);
    uStack_160 = local_170;
    iVar7 = (int)((longlong)
                  ((ulonglong)(uint)((int)local_158 >> 0x1f) << 0x20 |
                  (ulonglong)local_158 & 0xffffffff) / (longlong)iVar4);
    local_178._4_4_ = (int)((ulonglong)local_158 >> 0x20);
    iVar4 = local_178._4_4_ / iVar4;
    local_178 = (undefined *)CONCAT44(iVar4,iVar7);
    local_168 = local_178;
    local_178 = (undefined *)CONCAT44(iVar4,iVar5 - iVar7);
    local_158 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x20,param_2);
    local_180 = local_180 & 0xffffff00;
    local_170 = 0;
    local_188 = 4.76441e-44;
    FUN_141ad74f0(*(undefined8 *)(param_2 + 0x40),*local_158,0,4);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_170);
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_168,0,0x3f800000);
    local_d8 = 0;
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d0 = 0;
    local_cc = 0x26;
    local_c4 = 0;
    local_bc = 0;
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
    FUN_14049afe0(*(undefined8 *)(param_2 + 0x40),&local_118);
    local_e8 = FUN_141b9d480();
    uStack_e0 = FUN_140985530();
    local_d8 = FUN_1409853f0();
    lVar8 = *(longlong *)(param_2 + 0x60);
    uStack_160 = uStack_160 & 0xffffffff00000000;
    local_168 = &DAT_146a54e60;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_170,&local_168);
    plVar14 = plVar13;
    if ((int)local_170 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_170 * 0x20 + *(longlong *)(lVar8 + 0x38));
    }
    uStack_160 = uStack_160 & 0xffffffff00000000;
    plVar12 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar12 = plVar13;
    }
    local_168 = &DAT_146a54fb0;
    lVar1 = *plVar12;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_170,&local_168);
    plVar14 = plVar13;
    if ((int)local_170 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_170 * 0x20 + *(longlong *)(lVar8 + 0x38));
    }
    plVar12 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar12 = plVar13;
    }
    lVar8 = *plVar12;
    local_118 = DAT_1464c2758;
    if (lVar1 == 0) {
      local_170 = 0;
      plVar14 = (longlong *)0x1;
      plStack_110 = plVar13;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plStack_110 = *(longlong **)(lVar2 + 0x38);
      plVar14 = plVar13;
    }
    uVar9 = 0;
    if (plVar14 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
    }
    bVar3 = false;
    if (lVar8 == 0) {
      bVar3 = true;
      local_170 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar8 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar9 = *(undefined8 *)(lVar2 + 0x40);
    }
    local_f8 = uVar9;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
    }
    local_cc = local_cc & 0xffffffff00000000;
    FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),&local_118,2,1);
    iVar5 = (int)local_178 / *(int *)(DAT_146a54e40 + 4);
    fVar15 = *(float *)(param_1 + 0xa8) * 0.01 * (float)(int)local_178;
    local_178 = (undefined *)CONCAT44((iVar6 - iVar4) / *(int *)(DAT_146a54e40 + 4),iVar5);
    local_180 = *(undefined4 *)(param_1 + 0xac);
    local_188 = fVar15;
    FUN_141c92b20(lVar1,param_2,local_178);
    FUN_141c676a0(lVar8,*(undefined8 *)(param_2 + 0x40),param_2,fVar15);
    lVar8 = *(longlong *)(param_2 + 0x40);
    puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar10;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar11;
    *(undefined8 **)(lVar8 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar11 + 2) = 0;
    puVar11[3] = 0;
    *(undefined4 *)(puVar11 + 4) = 0;
    lVar8 = *(longlong *)(param_2 + 0x40);
    iVar5 = local_178._4_4_ * iVar5 + 3;
    puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 4;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x28);
      puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 4;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar10;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar11;
    *(undefined8 **)(lVar8 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59410;
    puVar11[2] = 0;
    *(undefined4 *)(puVar11 + 3) = 2;
    *(int *)((longlong)puVar11 + 0x1c) = (int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2;
    lVar8 = *(longlong *)(param_2 + 0x40);
    uVar9 = local_158[1];
    plVar13 = (longlong *)*local_158;
    local_148 = 0xffffffff00000000;
    uStack_140 = 0xffffffffffffffff;
    local_138 = 0xffffffffffffffff;
    uStack_130 = 0xffffffffffffffff;
    local_128 = 0xffffffff;
    uStack_120 = 0;
    puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 10;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
      puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 10;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar10;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar11;
    *(undefined8 **)(lVar8 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar11 + 2) = (undefined4)local_148;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_148._4_4_;
    *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_140._4_4_;
    *(undefined4 *)(puVar11 + 4) = (undefined4)local_138;
    *(undefined4 *)((longlong)puVar11 + 0x24) = local_138._4_4_;
    *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_130._4_4_;
    *(undefined4 *)(puVar11 + 6) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar11 + 0x34) = local_128._4_4_;
    *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_120._4_4_;
    puVar11[8] = plVar13;
    puVar11[9] = uVar9;
    lVar8 = (**(code **)(*plVar13 + 8))(plVar13);
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar11[8] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar11[8] + 0x20))();
    }
    lVar8 = (**(code **)(*(longlong *)puVar11[9] + 8))();
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar11[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141c84e20 FUN_141c84e20 body=3511 status=ok
// SIG undefined FUN_141c84e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c84e20(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_578 [32];
  ulonglong local_558;
  float local_550;
  undefined8 local_548;
  float local_540;
  float local_538;
  int local_530;
  int iStack_52c;
  undefined8 local_528;
  longlong local_520;
  undefined4 local_518;
  undefined4 local_510;
  float local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined *local_4e8;
  ulonglong uStack_4e0;
  float local_4d8;
  longlong *local_4d0;
  int local_4c8;
  int iStack_4c4;
  float local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  ulonglong local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  longlong local_468;
  undefined8 *local_458;
  longlong lStack_450;
  undefined8 local_448;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  ulonglong local_3ec;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_394;
  undefined8 local_38c;
  undefined4 local_384;
  undefined1 local_378 [192];
  undefined4 local_2b8;
  undefined1 local_1e8 [256];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  local_508 = 0.0;
  local_500 = (undefined *)((ulonglong)local_500 & 0xffffffff00000000);
  local_4d0 = param_2;
  local_468 = param_1;
  lVar13 = FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar14 = FRenderingCompositePass::GetInputDesc(param_1,1);
  if ((lVar13 != 0) && (lVar14 != 0)) {
    uVar4 = *(undefined8 *)(lVar13 + 0x14);
    local_458 = (undefined8 *)param_2[1];
    lStack_450 = param_2[2];
    uVar5 = *(undefined8 *)(lVar14 + 0x14);
    iVar22 = (int)param_2[3] / (int)uVar4;
    iVar23 = (int)param_2[3] / (int)uVar5;
    iVar8 = ((int)lStack_450 + -1 + iVar22) / iVar22;
    iVar11 = (int)((ulonglong)lStack_450 >> 0x20);
    iVar9 = (iVar11 + -1 + iVar22) / iVar22;
    uStack_4b0 = CONCAT44(iVar9,iVar8);
    uVar19 = (int)local_458 >> 0x1f;
    iVar10 = (int)((longlong)((ulonglong)uVar19 << 0x20 | (ulonglong)local_458 & 0xffffffff) /
                  (longlong)iVar22);
    local_500._4_4_ = (int)((ulonglong)local_458 >> 0x20);
    iVar7 = local_500._4_4_;
    local_500._4_4_ = local_500._4_4_ / iVar22;
    local_500 = (undefined *)CONCAT44(local_500._4_4_,iVar10);
    iVar22 = ((int)lStack_450 + -1 + iVar23) / iVar23;
    iVar11 = (iVar11 + -1 + iVar23) / iVar23;
    local_4f8 = CONCAT44(iVar11,iVar22);
    local_4b8 = local_500;
    iVar12 = (int)((longlong)((ulonglong)uVar19 << 0x20 | (ulonglong)local_458 & 0xffffffff) /
                  (longlong)iVar23);
    iVar9 = iVar9 - local_500._4_4_;
    local_4c0 = (float)(iVar22 - iVar12);
    local_500 = (undefined *)CONCAT44(iVar7 / iVar23,iVar12);
    local_4d8 = (float)(iVar8 - iVar10);
    local_4a8 = (ulonglong)(uint)(iVar11 - iVar7 / iVar23);
    local_448 = local_500;
    local_4c8 = (int)local_4d8;
    iStack_4c4 = iVar9;
    local_4a0 = uVar5;
    local_458 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x30,param_2);
    local_488 = CONCAT62(local_488._2_6_,0x100);
    local_498 = *local_458;
    uStack_490 = 0xffffffff00000000;
    local_4e8 = (undefined *)0x0;
    uStack_4e0 = 0;
    FUN_140c63b80(local_378,1,&local_498,&local_4e8);
    lVar13 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar13,local_2b8,local_378,local_1e8);
    puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar17 + 0x54;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x2a8);
      puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar17 + 0x54;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar16;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar17;
    *(undefined8 **)(lVar13 + 8) = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar17 + 2,local_378);
    local_4e8 = local_4b8;
    uStack_4e0 = uStack_4b0;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_4e8);
    local_3f8 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_418 = 0;
    uStack_410 = 0;
    local_408 = 0;
    uStack_400 = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    local_3f0 = 0;
    local_3ec = 0x26;
    local_3e4 = 0;
    local_3dc = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_398 = 0;
    local_394 = 0;
    local_38c = 0;
    local_384 = 0;
    FUN_14049afe0(param_2[8],&local_438);
    local_408 = FUN_1404a0ce0();
    uStack_400 = FUN_140985530();
    local_3f8 = FUN_1409853f0();
    uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
    plVar21 = (longlong *)(param_2[0xc] + 0x38);
    local_4e8 = &DAT_146a51f90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar21,&local_500,&local_4e8);
    if ((float)local_500 == -NAN) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)(int)(float)local_500 * 0x20 + *plVar21;
    }
    plVar20 = (longlong *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      plVar20 = (longlong *)0x0;
    }
    uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
    lVar13 = *plVar20;
    if (*(char *)(local_468 + 0xbc) == '\0') {
      local_4e8 = &DAT_146a58a50;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar21,&local_500,&local_4e8);
      if ((float)local_500 == -NAN) {
        lVar14 = 0;
      }
      else {
        lVar14 = (longlong)(int)(float)local_500 * 0x20 + *plVar21;
      }
      plVar21 = (longlong *)(lVar14 + 0x10);
      uVar18 = 0;
      if (lVar14 == 0) {
        plVar21 = (longlong *)0x0;
      }
      lVar14 = *plVar21;
      local_438 = DAT_1464c2720;
      if (lVar13 == 0) {
        local_4e8 = (undefined *)0x0;
        local_508 = 5.60519e-45;
      }
      else {
        local_4e8 = *(undefined **)(lVar13 + 0x48);
        if (local_4e8[0x28] == '\0') {
          FUN_1419f3850(local_4e8);
        }
        uVar18 = *(undefined8 *)(local_4e8 + 0x38);
      }
      uStack_430 = uVar18;
      if (((uint)local_508 & 4) != 0) {
        local_508 = (float)((uint)local_508 & 0xfffffffb);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
      }
      if (lVar14 == 0) {
        local_508 = (float)((uint)local_508 | 8);
        local_418 = 0;
        local_4e8 = (undefined *)0x0;
      }
      else {
        local_4e8 = *(undefined **)(lVar14 + 0x48);
        if (local_4e8[0x28] == '\0') {
          FUN_1419f3850(local_4e8);
        }
        local_418 = *(undefined8 *)(local_4e8 + 0x40);
      }
      if (((uint)local_508 & 8) != 0) {
        local_508 = (float)((uint)local_508 & 0xfffffff7);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4e8);
      }
      local_3ec = local_3ec & 0xffffffff00000000;
      FUN_141ed6ac0(local_4d0[8],&local_438,2,1);
      FUN_141ad70c0(lVar13,local_4d0);
      local_4f8 = local_4d0[8];
      local_4e8 = *(undefined **)(lVar14 + 0x48);
      if (local_4e8[0x28] == '\0') {
        FUN_1419f3850();
      }
      local_500 = *(undefined **)(local_4e8 + 0x40);
      FUN_141aa9690(lVar14,local_4f8,local_500,*(undefined8 *)(*local_4d0 + 0x20));
      local_558 = FUN_141a156e0();
      local_548 = 0;
      local_550 = 0.0;
      thunk_FUN_141ca99a0(lVar14 + 0xc0,local_4f8,&local_500,local_4d0);
      local_548 = CONCAT44(local_548._4_4_,(float)local_4b8._4_4_);
    }
    else {
      local_4e8 = &DAT_146a58ba0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar21,&local_500,&local_4e8);
      if ((float)local_500 == -NAN) {
        lVar14 = 0;
      }
      else {
        lVar14 = (longlong)(int)(float)local_500 * 0x20 + *plVar21;
      }
      plVar21 = (longlong *)(lVar14 + 0x10);
      uVar18 = 0;
      if (lVar14 == 0) {
        plVar21 = (longlong *)0x0;
      }
      lVar14 = *plVar21;
      local_438 = DAT_1464c2720;
      if (lVar13 == 0) {
        local_4f8 = 0;
        local_508 = 1.4013e-45;
      }
      else {
        local_4f8 = *(longlong *)(lVar13 + 0x48);
        if (*(char *)(local_4f8 + 0x28) == '\0') {
          FUN_1419f3850(local_4f8);
        }
        uVar18 = *(undefined8 *)(local_4f8 + 0x38);
      }
      uStack_430 = uVar18;
      if (((uint)local_508 & 1) != 0) {
        local_508 = (float)((uint)local_508 & 0xfffffffe);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
      }
      if (lVar14 == 0) {
        local_508 = (float)((uint)local_508 | 2);
        local_418 = 0;
        local_4f8 = 0;
      }
      else {
        local_4f8 = *(longlong *)(lVar14 + 0x48);
        if (*(char *)(local_4f8 + 0x28) == '\0') {
          FUN_1419f3850(local_4f8);
        }
        local_418 = *(undefined8 *)(local_4f8 + 0x40);
      }
      if (((uint)local_508 & 2) != 0) {
        local_508 = (float)((uint)local_508 & 0xfffffffd);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4f8);
      }
      local_3ec = local_3ec & 0xffffffff00000000;
      FUN_141ed6ac0(local_4d0[8],&local_438,2,1);
      FUN_141ad70c0(lVar13,local_4d0);
      local_4f8 = local_4d0[8];
      local_500 = *(undefined **)(lVar14 + 0x48);
      if (*(char *)((longlong)local_500 + 0x28) == '\0') {
        FUN_1419f3850();
      }
      local_4e8 = *(undefined **)((longlong)local_500 + 0x40);
      FUN_141aa9690(lVar14,local_4f8,local_4e8,*(undefined8 *)(*local_4d0 + 0x20));
      local_558 = FUN_141a156e0();
      local_548 = 0;
      local_550 = 0.0;
      thunk_FUN_141ca99a0(lVar14 + 0xc0,local_4f8,&local_4e8,local_4d0);
      local_548 = CONCAT44(local_548._4_4_,(float)local_4b8._4_4_);
    }
    iVar7 = iStack_4c4;
    iVar11 = local_4c8;
    plVar21 = local_4d0;
    local_550 = (float)iVar10;
    fVar28 = (float)(int)local_4d8;
    local_510 = 1;
    local_518 = 1;
    fVar27 = (float)iVar9;
    local_558 = CONCAT44(local_558._4_4_,fVar27);
    local_540 = fVar28;
    local_538 = fVar27;
    local_528 = uVar4;
    local_520 = lVar13;
    local_530 = local_4c8;
    iStack_52c = iStack_4c4;
    DrawRectangle(local_4d0[8]);
    local_408 = FUN_141b9d480();
    uStack_4b0 = uStack_4b0 & 0xffffffff00000000;
    lVar14 = plVar21[0xc];
    local_4b8 = &DAT_146a55100;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar14 + 0x38,&local_500,&local_4b8);
    if ((float)local_500 == -NAN) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)(int)(float)local_500 * 0x20 + *(longlong *)(lVar14 + 0x38);
    }
    plVar20 = (longlong *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      plVar20 = (longlong *)0x0;
    }
    lVar14 = *plVar20;
    local_438 = DAT_1464c2720;
    if (lVar13 == 0) {
      uStack_430 = 0;
      fVar24 = (float)((uint)local_508 | 0x10);
      local_4e8 = (undefined *)0x0;
    }
    else {
      lVar6 = *(longlong *)(lVar13 + 0x48);
      if (*(char *)(lVar6 + 0x28) == '\0') {
        FUN_1419f3850(lVar6);
      }
      uStack_430 = *(undefined8 *)(lVar6 + 0x38);
      fVar24 = local_508;
    }
    if (((uint)fVar24 & 0x10) != 0) {
      fVar24 = (float)((uint)fVar24 & 0xffffffef);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4e8);
    }
    if (lVar14 == 0) {
      fVar24 = (float)((uint)fVar24 | 0x20);
      local_418 = 0;
      local_4e8 = (undefined *)0x0;
    }
    else {
      local_4e8 = *(undefined **)(lVar14 + 0x48);
      if (local_4e8[0x28] == '\0') {
        FUN_1419f3850(local_4e8);
      }
      local_418 = *(undefined8 *)(local_4e8 + 0x40);
    }
    if (((uint)fVar24 & 0x20) != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4e8);
    }
    local_3ec = local_3ec & 0xffffffff00000000;
    FUN_141ed6ac0(plVar21[8],&local_438,2,1);
    fVar24 = (float)(int)local_4a8;
    fVar29 = (float)(int)local_4c0;
    fVar25 = (float)local_4a0._4_4_;
    local_500 = (undefined *)CONCAT44(local_500._4_4_,fVar24);
    FUN_141ad70c0(lVar13,plVar21);
    lVar6 = *(longlong *)(lVar14 + 0x48);
    lVar15 = plVar21[8];
    local_4a8 = CONCAT44(fVar25 / fVar24,(float)(int)uVar5 / fVar29);
    local_4a0 = lVar15;
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
      lVar15 = plVar21[8];
    }
    local_4f8 = *(undefined8 *)(lVar6 + 0x40);
    FUN_141aa9690(lVar14,lVar15,local_4f8,*(undefined8 *)(*plVar21 + 0x20));
    local_558 = FUN_141a156e0();
    local_548 = 0;
    local_550 = 0.0;
    thunk_FUN_141ca99a0(lVar14 + 0xc0,local_4a0,&local_4f8,plVar21);
    local_558 = local_558 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (local_4a0,local_4f8,lVar14 + 0x1c2,&local_4a8);
    local_4f8 = 8;
    lVar6 = *plVar21;
    fVar24 = *(float *)(lVar6 + 0x15ac);
    fVar25 = *(float *)(lVar6 + 0x15b0);
    fVar1 = *(float *)(lVar6 + 0x15b4);
    fVar2 = *(float *)(lVar6 + 0x15b8);
    local_508 = fVar24 * *(float *)(lVar6 + 0x15bc);
    uVar19 = 0;
    local_4c0 = (float)local_448._4_4_;
    local_4d8 = (float)iVar12;
    do {
      lVar6 = *(longlong *)(lVar14 + 0x48);
      auVar3 = *(undefined1 (*) [16])(*plVar21 + ((ulonglong)(uVar19 & 7) + 0x15d) * 0x10);
      fVar26 = (auVar3._12_4_ * 7.0 - 3.5) * *(float *)(local_468 + 0xb8);
      local_4b8 = (undefined *)
                  CONCAT44(auVar3._4_4_ * fVar24 * fVar1 * 0.25,
                           auVar3._0_4_ * fVar24 * fVar25 * 0.25);
      uStack_4b0 = CONCAT44(auVar3._12_4_ * local_508,auVar3._8_4_ * fVar24 * fVar2 * 0.25);
      if (*(char *)(lVar6 + 0x28) == '\0') {
        FUN_1419f3850(lVar6);
      }
      local_558 = local_558 & 0xffffffff00000000;
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (plVar21[8],*(undefined8 *)(lVar6 + 0x40),lVar14 + 0x1bc,&local_4b8);
      local_510 = 1;
      local_518 = 0;
      local_538 = (float)local_500;
      local_548 = CONCAT44(local_548._4_4_,local_4c0);
      local_550 = local_4d8;
      local_558 = CONCAT44(local_558._4_4_,fVar27 * fVar26);
      local_540 = fVar29;
      local_528 = uVar5;
      local_520 = lVar13;
      local_530 = iVar11;
      iStack_52c = iVar7;
      DrawRectangle(plVar21[8],fVar28 * 0.5 - fVar28 * 0.5 * fVar26,
                    (float)iVar7 * 0.5 - fVar27 * 0.5 * fVar26,fVar28 * fVar26);
      uVar19 = uVar19 + 1;
      local_4f8 = local_4f8 + -1;
    } while (local_4f8 != 0);
    lVar13 = plVar21[8];
    uVar4 = local_458[1];
    plVar21 = (longlong *)*local_458;
    local_498 = 0xffffffff00000000;
    uStack_490 = 0xffffffffffffffff;
    local_478 = 0xffffffff;
    uStack_470 = 0;
    local_488 = 0xffffffffffffffff;
    uStack_480 = 0xffffffffffffffff;
    puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar16 = puVar17 + 10;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar16) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x58);
      puVar17 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar16 = puVar17 + 10;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar16;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar17;
    *(undefined8 **)(lVar13 + 8) = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar17 + 2) = (undefined4)local_498;
    *(undefined4 *)((longlong)puVar17 + 0x14) = local_498._4_4_;
    *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_490;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_490._4_4_;
    *(undefined4 *)(puVar17 + 4) = (undefined4)local_488;
    *(undefined4 *)((longlong)puVar17 + 0x24) = local_488._4_4_;
    *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_480;
    *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_480._4_4_;
    *(undefined4 *)(puVar17 + 6) = (undefined4)local_478;
    *(undefined4 *)((longlong)puVar17 + 0x34) = local_478._4_4_;
    *(undefined4 *)(puVar17 + 7) = (undefined4)uStack_470;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = uStack_470._4_4_;
    puVar17[8] = plVar21;
    puVar17[9] = uVar4;
    lVar13 = (**(code **)(*plVar21 + 8))(plVar21);
    if (lVar13 == 0) {
      lVar13 = (**(code **)(*(longlong *)puVar17[8] + 0x18))();
      if (lVar13 == 0) {
        (**(code **)(*(longlong *)puVar17[8] + 0x20))();
      }
    }
    lVar13 = (**(code **)(*(longlong *)puVar17[9] + 8))();
    if (lVar13 == 0) {
      lVar13 = (**(code **)(*(longlong *)puVar17[9] + 0x18))();
      if (lVar13 == 0) {
        (**(code **)(*(longlong *)puVar17[9] + 0x20))();
      }
    }
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_378);
  }
  return;
}



// FUNCTION 141c85be0 FUN_141c85be0 body=2781 status=ok
// SIG undefined FUN_141c85be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c85be0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uchar *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  float local_4d0;
  float local_4c8;
  float local_4c0;
  float local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined4 local_498;
  undefined1 local_490;
  undefined4 local_488;
  int local_478 [2];
  undefined8 local_470;
  undefined4 local_468;
  longlong local_458;
  longlong lStack_450;
  undefined8 local_448;
  undefined8 local_438;
  undefined8 uStack_430;
  WriteBytesMem *local_428;
  undefined8 *local_420;
  WriteBytesMem *local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  char local_3c0;
  undefined1 local_3bf;
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_478[0] = 0;
  local_448 = param_1;
  plVar8 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x108) + 0x2a8))
                     (*(longlong **)(param_1 + 0x108),0,0);
  lVar9 = FSceneRenderTargets::Get(param_2[8]);
  local_428 = (WriteBytesMem *)0x0;
  local_478[0] = *(int *)(*param_2 + 0x1a38);
  (**(code **)(*plVar8 + 0x40))(plVar8,local_478[0],local_3b8,&local_428);
  lVar15 = *param_2;
  local_418 = local_428;
  lVar10 = FRenderingCompositePass::GetInputDesc(param_1,0);
  local_420 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x80,param_2);
  local_410 = param_2[1];
  uStack_408 = param_2[2];
  cVar7 = FUN_141ce5c50(param_2,local_420);
  if (cVar7 == '\0') {
    lVar19 = param_2[1];
    lVar20 = param_2[2];
  }
  else {
    lVar20 = *param_2;
    if (*(int *)(lVar20 + 0x1a14) == 2) {
      lVar19 = *(longlong *)(lVar20 + 0x1aa0);
      lVar20 = *(longlong *)(lVar20 + 0x1aa8);
    }
    else {
      lVar19 = *(longlong *)(lVar20 + 0x368);
      lVar20 = *(longlong *)(lVar20 + 0x370);
    }
  }
  lVar2 = param_2[8];
  uVar16 = *(undefined8 *)(lVar10 + 0x14);
  local_458 = *(longlong *)(*(longlong *)(lVar9 + 0x60) + 0x10);
  plVar18 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar8 = plVar18 + 1;
  local_470 = (undefined *)uVar16;
  local_438 = lVar19;
  uStack_430 = lVar20;
  if (*(longlong **)(lVar2 + 0x38) < plVar8) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
    plVar18 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar8 = plVar18 + 1;
  }
  *(longlong **)(lVar2 + 0x30) = plVar8;
  *plVar18 = local_458;
  puVar17 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar17 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar17 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar17 + 5;
  }
  puVar6 = local_420;
  *(undefined8 **)(lVar2 + 0x30) = puVar14;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar17;
  *(undefined8 **)(lVar2 + 8) = puVar17 + 1;
  puVar17[3] = plVar18;
  puVar17[1] = 0;
  *(undefined4 *)(puVar17 + 2) = 1;
  *puVar17 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar17 + 4) = 0;
  *(undefined1 *)((longlong)puVar17 + 0x24) = 0;
  cVar7 = FUN_141ce5c50(param_2,local_420);
  if (cVar7 == '\0') {
    local_3c0 = '\0';
    if (*(char *)((longlong)param_2 + 0x69) != '\0') {
      local_3c0 = '\x02';
    }
  }
  else {
    local_3c0 = (*param_2 == *(longlong *)**(undefined8 **)(*param_2 + 0x10)) + '\x01';
  }
  local_3d0 = *puVar6;
  local_3c8 = 0;
  local_3c4 = 0xffffffff;
  local_3bf = 1;
  local_458 = 0;
  lStack_450 = 0;
  FUN_140c63b80(local_2e8,1,&local_3d0,&local_458);
  lVar9 = param_2[8];
  FRHICommandListBase::CacheActiveRenderTargets(lVar9,local_228,local_2e8,local_158);
  puVar17 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar17 + 0x54;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x2a8);
    puVar17 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar17 + 0x54;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar14;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar17;
  *(undefined8 **)(lVar9 + 8) = puVar17 + 1;
  plVar8 = (longlong *)0x0;
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar17 + 2,local_2e8);
  local_458 = lVar19;
  lStack_450 = lVar20;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_458);
  local_368 = 0;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_360 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_2[8],&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  local_35c = local_35c & 0xffffffff00000000;
  puVar11 = AK::WriteBytesMem::Bytes(local_418);
  local_4d8 = lVar15;
  if (local_478[0] < 2) {
    local_468 = 0;
    local_470 = &DAT_146a59230;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(puVar11 + 0x38,local_478,&local_470);
    plVar18 = plVar8;
    if (local_478[0] != -1) {
      plVar18 = (longlong *)((longlong)local_478[0] * 0x20 + *(longlong *)(puVar11 + 0x38));
    }
    local_468 = 0;
    plVar13 = plVar18 + 2;
    if (plVar18 == (longlong *)0x0) {
      plVar13 = plVar8;
    }
    lVar9 = *plVar13;
    local_470 = &DAT_146a58e40;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(puVar11 + 0x38,local_478,&local_470);
    plVar18 = plVar8;
    if (local_478[0] != -1) {
      plVar18 = (longlong *)((longlong)local_478[0] * 0x20 + *(longlong *)(puVar11 + 0x38));
    }
    plVar13 = plVar18 + 2;
    if (plVar18 == (longlong *)0x0) {
      plVar13 = plVar8;
    }
    lVar10 = *plVar13;
    local_3a8 = DAT_1464c2720;
    if (lVar10 == 0) {
      local_458 = 0;
      bVar3 = true;
    }
    else {
      lVar19 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar19 + 0x28) == '\0') {
        FUN_1419f3850(lVar19);
      }
      plVar8 = *(longlong **)(lVar19 + 0x38);
    }
    uVar12 = 0;
    plStack_3a0 = plVar8;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_458);
    }
    bVar3 = false;
    if (lVar9 == 0) {
      bVar3 = true;
      local_458 = 0;
    }
    else {
      lVar19 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar19 + 0x28) == '\0') {
        FUN_1419f3850(lVar19);
      }
      uVar12 = *(undefined8 *)(lVar19 + 0x40);
    }
    local_388 = uVar12;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_458);
    }
    FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
    FUN_141c924b0(lVar10,param_2[8],param_2);
    uVar12 = (**(code **)(**(longlong **)(local_448 + 0x108) + 0x2a8))
                       (*(longlong **)(local_448 + 0x108),0,0);
    FUN_141c67110(lVar9,param_2[8],param_2,uVar12);
  }
  else {
    iVar1 = *(int *)(lVar15 + 0x1aa0);
    if ((((iVar1 == (int)param_2[1]) &&
         (*(int *)(lVar15 + 0x1aa4) == *(int *)((longlong)param_2 + 0xc))) &&
        (*(int *)(lVar15 + 0x1aa8) == (int)param_2[2])) &&
       (*(int *)(lVar15 + 0x1aac) == *(int *)((longlong)param_2 + 0x14))) {
      if (((*(int *)(lVar15 + 0x1aa8) - iVar1 == (int)uVar16) &&
          (*(int *)(lVar15 + 0x1aac) - *(int *)(lVar15 + 0x1aa4) == local_470._4_4_)) &&
         ((iVar1 == DAT_1468b5ca0 && (*(int *)(lVar15 + 0x1aa4) == DAT_1468b5ca4)))) {
        local_468 = 0;
        local_470 = &DAT_146a58f90;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(puVar11 + 0x38,local_478,&local_470);
        plVar18 = plVar8;
        if (local_478[0] != -1) {
          plVar18 = (longlong *)((longlong)local_478[0] * 0x20 + *(longlong *)(puVar11 + 0x38));
        }
        local_468 = 0;
        plVar13 = plVar18 + 2;
        if (plVar18 == (longlong *)0x0) {
          plVar13 = plVar8;
        }
        lVar9 = *plVar13;
        local_470 = &DAT_146a58cf0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(puVar11 + 0x38,local_478,&local_470);
        plVar18 = plVar8;
        if (local_478[0] != -1) {
          plVar18 = (longlong *)((longlong)local_478[0] * 0x20 + *(longlong *)(puVar11 + 0x38));
        }
        plVar13 = plVar18 + 2;
        if (plVar18 == (longlong *)0x0) {
          plVar13 = plVar8;
        }
        lVar10 = *plVar13;
        local_3a8 = DAT_1464c2508;
        if (lVar10 == 0) {
          local_470 = (undefined *)0x0;
          bVar4 = true;
        }
        else {
          lVar19 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar19 + 0x28) == '\0') {
            FUN_1419f3850(lVar19);
          }
          plVar8 = *(longlong **)(lVar19 + 0x38);
        }
        uVar12 = 0;
        plStack_3a0 = plVar8;
        if (bVar4) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_470);
        }
        bVar3 = false;
        if (lVar9 == 0) {
          bVar3 = true;
          local_470 = (undefined *)0x0;
        }
        else {
          lVar19 = *(longlong *)(lVar9 + 0x48);
          if (*(char *)(lVar19 + 0x28) == '\0') {
            FUN_1419f3850(lVar19);
          }
          uVar12 = *(undefined8 *)(lVar19 + 0x40);
        }
        local_388 = uVar12;
        if (bVar3) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_470);
        }
        FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
        FUN_141c924b0(lVar10,param_2[8],param_2);
        uVar12 = (**(code **)(**(longlong **)(local_448 + 0x108) + 0x2a8))
                           (*(longlong **)(local_448 + 0x108),0,0);
        FUN_141c67110(lVar9,param_2[8],param_2,uVar12);
        goto LAB_141c86475;
      }
    }
    local_468 = 0;
    local_470 = &DAT_146a590e0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(puVar11 + 0x38,local_478,&local_470);
    plVar18 = plVar8;
    if (local_478[0] != -1) {
      plVar18 = (longlong *)((longlong)local_478[0] * 0x20 + *(longlong *)(puVar11 + 0x38));
    }
    local_468 = 0;
    plVar13 = plVar18 + 2;
    if (plVar18 == (longlong *)0x0) {
      plVar13 = plVar8;
    }
    lVar9 = *plVar13;
    local_470 = &DAT_146a58cf0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(puVar11 + 0x38,local_478,&local_470);
    plVar18 = plVar8;
    if (local_478[0] != -1) {
      plVar18 = (longlong *)((longlong)local_478[0] * 0x20 + *(longlong *)(puVar11 + 0x38));
    }
    plVar13 = plVar18 + 2;
    if (plVar18 == (longlong *)0x0) {
      plVar13 = plVar8;
    }
    lVar10 = *plVar13;
    local_3a8 = DAT_1464c2508;
    if (lVar10 == 0) {
      local_470 = (undefined *)0x0;
      bVar5 = true;
    }
    else {
      lVar19 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar19 + 0x28) == '\0') {
        FUN_1419f3850(lVar19);
      }
      plVar8 = *(longlong **)(lVar19 + 0x38);
    }
    uVar12 = 0;
    plStack_3a0 = plVar8;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_470);
    }
    bVar3 = false;
    if (lVar9 == 0) {
      bVar3 = true;
      local_470 = (undefined *)0x0;
    }
    else {
      lVar19 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar19 + 0x28) == '\0') {
        FUN_1419f3850(lVar19);
      }
      uVar12 = *(undefined8 *)(lVar19 + 0x40);
    }
    local_388 = uVar12;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_470);
    }
    FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
    FUN_141c924b0(lVar10,param_2[8],param_2);
    uVar12 = (**(code **)(**(longlong **)(local_448 + 0x108) + 0x2a8))
                       (*(longlong **)(local_448 + 0x108),0,0);
    FUN_141c67110(lVar9,param_2[8],param_2,uVar12);
  }
LAB_141c86475:
  local_488 = 1;
  local_4c8 = (float)local_410._4_4_;
  local_448 = CONCAT44(uStack_430._4_4_ - local_438._4_4_,(int)uStack_430 - (int)local_438);
  local_490 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_498 = *(undefined4 *)(lVar15 + 0xf60);
  local_4b0 = local_448;
  local_4c0 = (float)((int)uStack_408 - (int)local_410);
  local_4d0 = (float)(int)local_410;
  local_4b8 = (float)(uStack_408._4_4_ - local_410._4_4_);
  local_4d8 = CONCAT44(local_4d8._4_4_,(float)(uStack_430._4_4_ - local_438._4_4_));
  local_4a8 = uVar16;
  local_4a0 = lVar10;
  FUN_141ce13a0(param_2[8]);
  lVar15 = param_2[8];
  uVar16 = local_420[1];
  plVar8 = (longlong *)*local_420;
  local_400 = 0xffffffff00000000;
  uStack_3f8 = 0xffffffffffffffff;
  local_3e0 = 0xffffffff;
  uStack_3d8 = 0;
  local_3f0 = 0xffffffffffffffff;
  uStack_3e8 = 0xffffffffffffffff;
  puVar17 = (undefined8 *)(*(longlong *)(lVar15 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar17 + 10;
  if (*(undefined8 **)(lVar15 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(lVar15 + 0x30,0x58);
    puVar17 = (undefined8 *)(*(longlong *)(lVar15 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar17 + 10;
  }
  *(undefined8 **)(lVar15 + 0x30) = puVar14;
  *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + 1;
  **(undefined8 **)(lVar15 + 8) = puVar17;
  *(undefined8 **)(lVar15 + 8) = puVar17 + 1;
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar17 + 2) = (undefined4)local_400;
  *(undefined4 *)((longlong)puVar17 + 0x14) = local_400._4_4_;
  *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_3f8;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_3f8._4_4_;
  *(undefined4 *)(puVar17 + 4) = (undefined4)local_3f0;
  *(undefined4 *)((longlong)puVar17 + 0x24) = local_3f0._4_4_;
  *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_3e8;
  *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_3e8._4_4_;
  *(undefined4 *)(puVar17 + 6) = (undefined4)local_3e0;
  *(undefined4 *)((longlong)puVar17 + 0x34) = local_3e0._4_4_;
  *(undefined4 *)(puVar17 + 7) = (undefined4)uStack_3d8;
  *(undefined4 *)((longlong)puVar17 + 0x3c) = uStack_3d8._4_4_;
  puVar17[8] = plVar8;
  puVar17[9] = uVar16;
  lVar15 = (**(code **)(*plVar8 + 8))(plVar8);
  if ((lVar15 == 0) && (lVar15 = (**(code **)(*(longlong *)puVar17[8] + 0x18))(), lVar15 == 0)) {
    (**(code **)(*(longlong *)puVar17[8] + 0x20))();
  }
  lVar15 = (**(code **)(*(longlong *)puVar17[9] + 8))();
  if ((lVar15 == 0) && (lVar15 = (**(code **)(*(longlong *)puVar17[9] + 0x18))(), lVar15 == 0)) {
    (**(code **)(*(longlong *)puVar17[9] + 0x20))();
  }
  cVar7 = FUN_14259cc30(local_418);
  if (cVar7 != '\0') {
    lVar15 = param_2[8];
    uVar16 = FSceneRenderTargets::Get(lVar15);
    FUN_141cd9760(uVar16,lVar15,0xffffffff);
  }
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  return;
}



// FUNCTION 141c866c0 FUN_141c866c0 body=1425 status=ok
// SIG undefined FUN_141c866c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c866c0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 *local_260;
  undefined1 *local_258;
  float local_250;
  float local_248;
  float local_240;
  undefined1 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_218;
  undefined *local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [64];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  plVar19 = (longlong *)0x0;
  local_218 = local_218 & 0xffffffff00000000;
  lVar11 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar11 != 0) {
    local_1b8 = *param_2;
    iVar4 = *(int *)(local_1b8 + 0x1aa0);
    iVar5 = *(int *)(local_1b8 + 0x1aa4);
    puVar8 = *(undefined **)(local_1b8 + 0x1aa0);
    iVar6 = *(int *)(local_1b8 + 0x1aa8);
    iVar7 = *(int *)(local_1b8 + 0x1aac);
    uVar3 = *(undefined8 *)(local_1b8 + 0x1aa8);
    local_1f8 = (undefined8 *)0x0;
    iStack_1f0 = 0x3c0;
    iVar10 = iStack_1f0;
    if (*(int *)(local_1b8 + 0xf60) == 2) {
      local_1f8 = (undefined8 *)0x3c0;
      iStack_1f0 = 0x780;
      iVar17 = 0x780;
      iVar18 = 0x3c0;
    }
    else {
      iStack_1f0 = 0x3c0;
      local_1f8._0_4_ = 0;
      iVar17 = iStack_1f0;
      iVar18 = (int)local_1f8;
      iStack_1f0 = iVar10;
    }
    iVar10 = iStack_1f0;
    puVar13 = local_1f8;
    uStack_1ec = 0x438;
    uVar1 = *(undefined8 *)(lVar11 + 0x14);
    local_1f8 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x20,param_2);
    local_218 = 0;
    FUN_141a19150(param_2[8],*local_1f8,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_218);
    local_208 = (undefined *)puVar13;
    uStack_200._0_4_ = iVar10;
    uStack_200._4_4_ = 0x438;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_208);
    local_e8 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_e0 = 0;
    local_dc = 0x26;
    local_d4 = 0;
    local_cc = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    FUN_14049afe0(param_2[8],&local_128);
    local_f8 = FUN_1404a0ce0();
    uStack_f0 = FUN_140985530();
    local_e8 = FUN_1409853f0();
    lVar11 = param_2[0xc];
    uStack_200._0_4_ = 0;
    local_208 = &DAT_146a57090;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_218,&local_208);
    plVar14 = plVar19;
    if ((int)local_218 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_218 * 0x20 + *(longlong *)(lVar11 + 0x38));
    }
    uStack_200 = (ulonglong)uStack_200._4_4_ << 0x20;
    plVar16 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar16 = plVar19;
    }
    local_208 = &DAT_146a571e0;
    lVar2 = *plVar16;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_218,&local_208);
    if ((int)local_218 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)(int)local_218 * 0x20 + *(longlong *)(lVar11 + 0x38);
    }
    plVar14 = (longlong *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      plVar14 = (longlong *)0x0;
    }
    lVar11 = *plVar14;
    local_128 = DAT_1464c2720;
    if (lVar2 == 0) {
      plVar19 = (longlong *)0x1;
      uStack_120 = 0;
      local_218 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uStack_120 = *(undefined8 *)(lVar2 + 0x38);
    }
    uVar12 = 0;
    if (plVar19 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_218);
    }
    bVar9 = false;
    if (lVar11 == 0) {
      bVar9 = true;
      local_218 = uVar12;
    }
    else {
      lVar2 = *(longlong *)(lVar11 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar12 = *(undefined8 *)(lVar2 + 0x40);
    }
    local_108 = uVar12;
    if (bVar9) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_218);
    }
    local_dc = local_dc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2[8],&local_128,2,1);
    local_258 = local_168;
    local_1a8 = _DAT_1464aa7d0;
    uStack_1a0 = _DAT_1464aa7d8;
    local_198 = _DAT_1464aa7e0;
    uStack_190 = _DAT_1464aa7e8;
    local_188 = _DAT_1464aa7f0;
    uStack_180 = _DAT_1464aa7f8;
    local_178 = _DAT_1464aa800;
    uStack_170 = uRam00000001464aa808;
    local_260 = (undefined8 *)CONCAT44(local_260._4_4_,*(undefined4 *)(local_1b8 + 0xf60));
    local_268 = uVar1;
    local_208 = puVar8;
    uStack_200 = uVar3;
    FUN_141c65060(lVar11,param_2[8],param_2,&local_208);
    local_218 = CONCAT44(0x438,iVar17 - iVar18);
    local_240 = (float)(iVar7 - iVar5);
    local_230 = local_218;
    local_238 = local_168;
    local_260 = &local_1a8;
    local_248 = (float)(iVar6 - iVar4);
    local_250 = (float)iVar5;
    local_258 = (undefined1 *)CONCAT44(local_258._4_4_,(float)iVar4);
    local_268 = CONCAT44(local_268._4_4_,0x44870000);
    local_228 = uVar1;
    FUN_141ce1730(param_2[8]);
    lVar11 = param_2[8];
    local_1e8 = 0xffffffff00000000;
    uStack_1e0 = 0xffffffffffffffff;
    uVar3 = local_1f8[1];
    plVar19 = (longlong *)*local_1f8;
    local_1c8 = 0xffffffff;
    uStack_1c0 = 0;
    local_1d8 = 0xffffffffffffffff;
    uStack_1d0 = 0xffffffffffffffff;
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 10;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
      puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar15 + 10;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar13;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar15;
    *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar15 + 2) = (undefined4)local_1e8;
    *(undefined4 *)((longlong)puVar15 + 0x14) = local_1e8._4_4_;
    *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_1e0;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_1e0._4_4_;
    *(undefined4 *)(puVar15 + 4) = (undefined4)local_1d8;
    *(undefined4 *)((longlong)puVar15 + 0x24) = local_1d8._4_4_;
    *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_1d0;
    *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_1d0._4_4_;
    *(undefined4 *)(puVar15 + 6) = (undefined4)local_1c8;
    *(undefined4 *)((longlong)puVar15 + 0x34) = local_1c8._4_4_;
    *(undefined4 *)(puVar15 + 7) = (undefined4)uStack_1c0;
    *(undefined4 *)((longlong)puVar15 + 0x3c) = uStack_1c0._4_4_;
    puVar15[8] = plVar19;
    puVar15[9] = uVar3;
    lVar11 = (**(code **)(*plVar19 + 8))(plVar19);
    if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar15[8] + 0x18))(), lVar11 == 0)) {
      (**(code **)(*(longlong *)puVar15[8] + 0x20))();
    }
    lVar11 = (**(code **)(*(longlong *)puVar15[9] + 8))();
    if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar15[9] + 0x18))(), lVar11 == 0)) {
      (**(code **)(*(longlong *)puVar15[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141c86c60 FUN_141c86c60 body=2916 status=ok
// SIG undefined FUN_141c86c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c86c60(longlong param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 auStack_438 [32];
  undefined8 *local_418;
  undefined8 local_410;
  float local_408;
  float local_400;
  float local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined1 local_3d0;
  undefined4 local_3c8;
  undefined8 *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  char local_398;
  undefined1 local_397;
  undefined8 local_388;
  undefined8 local_380;
  int local_378;
  int iStack_374;
  int local_368;
  int local_358;
  longlong local_350;
  undefined1 local_348 [192];
  undefined4 local_288;
  undefined1 local_1b8 [256];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  lVar9 = FRenderingCompositePass::GetInputDesc(param_1,0);
  local_3b0 = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe0,&local_3b0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3b0);
  if (lVar9 != 0) {
    local_350 = *param_2;
    uVar3 = *(undefined8 *)(lVar9 + 0x14);
    uVar4 = *(undefined8 *)(param_1 + 100);
    local_b8 = 0x3f6aaaab3f600000;
    uStack_b0 = 0x3f7800003f700000;
    fVar1 = *(float *)(DAT_146a54e58 + 4);
    local_a8 = CONCAT44(fVar1 * 0.16666667,fVar1 * 0.25);
    uStack_a0 = CONCAT44(fVar1 * 0.0625,fVar1 * 0.125);
    lVar9 = param_2[1];
    uVar7 = param_2[2];
    if (*(int *)(param_1 + 0xdc) < 0) {
      uVar16 = 0x3f800000;
    }
    else {
      uVar16 = *(undefined4 *)
                ((longlong)&local_b8 +
                (ulonglong)(uint)(*(int *)(param_1 + 0xdc) * 4 + -1 + *(int *)(param_1 + 0xd8)) * 4)
      ;
    }
    local_3a8 = (undefined *)lVar9;
    uStack_3a0 = uVar7;
    local_388 = uVar4;
    puVar10 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x50,param_2);
    uVar14 = 1;
    uVar15 = 2;
    local_3b0 = CONCAT44(local_3b0._4_4_,uStack_3a0._4_4_);
    local_378 = (int)uStack_3a0;
    local_358 = local_3a8._4_4_;
    local_368 = (int)local_3a8;
    if ((((*(int *)(*param_2 + 0x1a14) != 1) &&
         (uVar15 = uVar14, (int)uVar4 == (int)uStack_3a0 - (int)local_3a8)) &&
        ((int)((ulonglong)uVar4 >> 0x20) == uStack_3a0._4_4_ - local_3a8._4_4_)) &&
       ((int)local_3a8 == 0)) {
      uVar15 = (uint)(local_3a8._4_4_ != 0);
    }
    local_3b8 = puVar10;
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_141c74580(param_1,param_2[8]);
      cVar8 = FUN_141ce5c50(param_2,puVar10);
      if (cVar8 == '\0') {
        local_398 = '\0';
        if (*(char *)((longlong)param_2 + 0x69) != '\0') {
          local_398 = '\x02';
        }
      }
      else {
        local_398 = (*param_2 == *(longlong *)**(undefined8 **)(*param_2 + 0x10)) + '\x01';
      }
      local_3a8 = (undefined *)*puVar10;
      uStack_3a0 = 0xffffffff00000000;
      local_397 = 1;
      local_388 = 0;
      local_380 = 0;
      FUN_140c63b80(local_348,1,&local_3a8,&local_388);
      lVar5 = param_2[8];
      FRHICommandListBase::CacheActiveRenderTargets(lVar5,local_288,local_348,local_1b8);
      puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar13 + 0x54;
      if (*(undefined8 **)(lVar5 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x2a8);
        puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar13 + 0x54;
      }
      *(undefined8 **)(lVar5 + 0x30) = puVar10;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      **(undefined8 **)(lVar5 + 8) = puVar13;
      *(undefined8 **)(lVar5 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar13 + 2,local_348);
      local_3a8 = (undefined *)lVar9;
      uStack_3a0 = uVar7;
      FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_3a8);
      iVar2 = *(int *)(param_1 + 0xd8);
      if (iVar2 == 1) {
        if (uVar15 == 0) {
          FUN_141c63760(param_2);
        }
        else if (uVar15 == 1) {
          FUN_141c63260(param_2);
        }
        else if (uVar15 == 2) {
          FUN_141c634e0(param_2);
        }
      }
      else if (iVar2 == 2) {
        if (uVar15 == 0) {
          FUN_141c63ee0(param_2);
        }
        else if (uVar15 == 1) {
          FUN_141c639e0(param_2);
        }
        else if (uVar15 == 2) {
          FUN_141c63c60(param_2);
        }
      }
      else if ((iVar2 == 3) || (0 < *(int *)(param_1 + 0xdc))) {
        if (uVar15 == 0) {
          FUN_141c64660(param_2);
        }
        else if (uVar15 == 1) {
          FUN_141c64160(param_2);
        }
        else if (uVar15 == 2) {
          FUN_141c643e0(param_2);
        }
      }
      else if (uVar15 == 0) {
        FUN_141c64de0(param_2);
      }
      else if (uVar15 == 1) {
        FUN_141c648e0(param_2);
      }
      else if (uVar15 == 2) {
        FUN_141c64b60(param_2);
      }
      lVar9 = param_2[0xc];
      local_3a8 = &DAT_146a51f90;
      uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x38,&local_388,&local_3a8);
      puVar10 = (undefined8 *)0x0;
      if ((int)local_388 != -1) {
        puVar10 = (undefined8 *)((longlong)(int)local_388 * 0x20 + *(longlong *)(lVar9 + 0x38));
      }
      local_378 = local_378 - local_368;
      local_3c8 = 1;
      iStack_374 = (int)local_3b0 - local_358;
      local_3d0 = *(undefined1 *)((longlong)param_2 + 0x69);
      puVar13 = puVar10 + 2;
      if (puVar10 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      local_3d8 = *(undefined4 *)(local_350 + 0xf60);
      local_3f8 = (float)iStack_374;
      local_3e0 = *puVar13;
      local_3f0 = CONCAT44(iStack_374,local_378);
      local_400 = (float)local_378;
      local_408 = (float)local_358;
      local_410 = CONCAT44(local_410._4_4_,(float)local_368);
      local_418 = (undefined8 *)CONCAT44(local_418._4_4_,local_3f8);
      local_3e8 = uVar3;
      FUN_141ce13a0(param_2[8]);
      lVar9 = param_2[8];
      local_b8 = 0xffffffff00000000;
      uStack_b0 = 0xffffffffffffffff;
      uVar3 = local_3b8[1];
      plVar6 = (longlong *)*local_3b8;
      local_98 = 0xffffffff;
      uStack_90 = 0;
      local_a8 = 0xffffffffffffffff;
      uStack_a0 = 0xffffffffffffffff;
      puVar13 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar13 + 10;
      if (*(undefined8 **)(lVar9 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x58);
        puVar13 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar13 + 10;
      }
      *(undefined8 **)(lVar9 + 0x30) = puVar10;
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      **(undefined8 **)(lVar9 + 8) = puVar13;
      *(undefined8 **)(lVar9 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar13 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar13 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_b0._4_4_;
      *(undefined4 *)(puVar13 + 4) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar13 + 0x24) = local_a8._4_4_;
      *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_a0._4_4_;
      *(undefined4 *)(puVar13 + 6) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar13 + 0x34) = local_98._4_4_;
      *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_90._4_4_;
      puVar13[8] = plVar6;
      puVar13[9] = uVar3;
      lVar9 = (**(code **)(*plVar6 + 8))(plVar6);
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[8] + 0x20))();
      }
      lVar9 = (**(code **)(*(longlong *)puVar13[9] + 8))();
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[9] + 0x20))();
      }
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_348);
    }
    else {
      FUN_141a19150(param_2[8],0,0,0);
      local_3a8 = (undefined *)lVar9;
      uStack_3a0 = uVar7;
      FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_3a8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146a5de68) &&
         (_Init_thread_header(&DAT_146a5de68), DAT_146a5de68 == -1)) {
        FName::FName(&DAT_146a5de60,L"AsyncMotionBlurEndFence",1);
        _Init_thread_footer(&DAT_146a5de68);
      }
      (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_3b0,&DAT_146a5de60);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe0,&local_3b0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3b0);
      local_408 = (float)uVar16;
      local_400 = (float)uVar15;
      if (((*(char *)(param_1 + 10) == '\0') || (*(char *)(param_1 + 0xb) == '\0')) ||
         (DAT_146ab62f0 == '\0')) {
        FUN_141c74580(param_1,param_2[8]);
        puVar13 = local_3b8;
        lVar9 = param_2[8];
        local_3b8 = (undefined8 *)local_3b8[2];
        puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 1;
        if (*(undefined8 **)(lVar9 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x10);
          puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 1;
        }
        *(undefined8 **)(lVar9 + 0x30) = puVar10;
        *puVar12 = local_3b8;
        puVar11 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar11 + 6;
        if (*(undefined8 **)(lVar9 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x38);
          puVar11 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar11 + 6;
        }
        *(undefined8 **)(lVar9 + 0x30) = puVar10;
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        **(undefined8 **)(lVar9 + 8) = puVar11;
        *(undefined8 **)(lVar9 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        puVar11[5] = 0;
        *puVar11 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar11 + 2) = 1;
        puVar11[3] = puVar12;
        puVar11[4] = 2;
        local_410 = puVar13[2];
        local_418 = &local_3a8;
        FUN_141c5e950(param_1,param_2[8],param_2,&local_388);
        lVar9 = param_2[8];
        local_3b8 = (undefined8 *)puVar13[2];
        uVar3 = *(undefined8 *)(param_1 + 0xe0);
        puVar13 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar13 + 1;
        if (*(undefined8 **)(lVar9 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x10);
          puVar13 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar13 + 1;
        }
        *(undefined8 **)(lVar9 + 0x30) = puVar10;
        *puVar13 = local_3b8;
        puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 6;
        if (*(undefined8 **)(lVar9 + 0x38) < puVar10) {
          FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x38);
          puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 6;
        }
        *(undefined8 **)(lVar9 + 0x30) = puVar10;
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        **(undefined8 **)(lVar9 + 8) = puVar12;
        *(undefined8 **)(lVar9 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar12 + 2) = 1;
        puVar12[3] = puVar13;
        *(undefined4 *)(puVar12 + 4) = 0;
        *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
        puVar12[5] = uVar3;
      }
      else {
        FUN_141c74470(param_1,&DAT_146ab7030);
        local_3b8 = (undefined8 *)puVar10[2];
        puVar12 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar13 = puVar12 + 1;
        if (DAT_146ab7068 < puVar13) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
          puVar12 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar13 = puVar12 + 1;
        }
        DAT_146ab7060 = puVar13;
        *puVar12 = local_3b8;
        puVar11 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar13 = puVar11 + 6;
        if (DAT_146ab7068 < puVar13) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
          puVar11 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar13 = puVar11 + 6;
        }
        _DAT_146ab7044 = _DAT_146ab7044 + 1;
        DAT_146ab7060 = puVar13;
        *DAT_146ab7038 = puVar11;
        DAT_146ab7038 = puVar11 + 1;
        *DAT_146ab7038 = 0;
        *puVar11 = &PTR_LAB_144dc9d00;
        *(undefined4 *)(puVar11 + 2) = 1;
        puVar11[3] = puVar12;
        puVar11[4] = 2;
        puVar11[5] = 0;
        local_410 = puVar10[2];
        local_418 = &local_3a8;
        FUN_141c5dc00(param_1,&DAT_146ab7030,param_2,&local_388);
        local_3b8 = (undefined8 *)puVar10[2];
        uVar3 = *(undefined8 *)(param_1 + 0xe0);
        puVar13 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar13 + 1;
        if (DAT_146ab7068 < puVar10) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
          puVar13 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar10 = puVar13 + 1;
        }
        DAT_146ab7060 = puVar10;
        *puVar13 = local_3b8;
        puVar12 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar12 + 6;
        if (DAT_146ab7068 < puVar10) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
          puVar12 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar10 = puVar12 + 6;
        }
        _DAT_146ab7044 = _DAT_146ab7044 + 1;
        DAT_146ab7060 = puVar10;
        *DAT_146ab7038 = puVar12;
        DAT_146ab7038 = puVar12 + 1;
        *DAT_146ab7038 = 0;
        *puVar12 = &PTR_LAB_144dc9d00;
        *(undefined4 *)(puVar12 + 2) = 1;
        puVar12[3] = puVar13;
        *(undefined4 *)(puVar12 + 4) = 0;
        *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
        puVar12[5] = uVar3;
        FUN_141ec93f0(&DAT_146ab7030);
      }
    }
  }
  return;
}



// FUNCTION 141c877d0 Process body=125 status=ok
// SIG undefined Process(void)

void FRCPassPostProcessOutput::Process(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0);
  if (lVar3 != 0) {
    lVar3 = FRenderingCompositeOutputRef::GetOutput(lVar3);
    plVar1 = (longlong *)param_1[0xe];
    plVar2 = *(longlong **)(lVar3 + 0x50);
    param_1[0xe] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
    plVar1 = (longlong *)param_1[0xe];
    plVar2 = *(longlong **)param_1[0x15];
    *(longlong **)param_1[0x15] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
    }
  }
  return;
}



// FUNCTION 141c87850 FUN_141c87850 body=1995 status=ok
// SIG undefined FUN_141c87850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c87850(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 uVar12;
  char cVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar3 = (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))(*(longlong **)(param_2 + 0x28),0);
  lVar4 = FRenderingCompositeOutputRef::GetOutput(uVar3);
  local_res10 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x10);
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  if (((*(char *)(param_1 + 10) == '\0') || (*(char *)(param_1 + 0xb) == '\0')) ||
     (DAT_146ab62f0 == '\0')) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  lVar4 = *(longlong *)(param_2 + 0x40);
  plVar11 = (longlong *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar5 = plVar11 + 1;
  local_res18 = local_res10;
  if (*(longlong **)(lVar4 + 0x38) < plVar5) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x10);
    plVar11 = (longlong *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar5 = plVar11 + 1;
  }
  *(longlong **)(lVar4 + 0x30) = plVar5;
  *plVar11 = local_res18;
  puVar9 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 5;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar7;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar9;
  *(undefined8 **)(lVar4 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar9 + 2) = 1;
  puVar9[3] = plVar11;
  *(undefined4 *)(puVar9 + 4) = 0;
  *(undefined1 *)((longlong)puVar9 + 0x24) = uVar12;
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_141a19150(*(undefined8 *)(param_2 + 0x40),0,0,0);
    local_58 = *(undefined4 *)(param_2 + 8);
    uStack_54 = *(undefined4 *)(param_2 + 0xc);
    uStack_50 = *(undefined4 *)(param_2 + 0x10);
    uStack_4c = *(undefined4 *)(param_2 + 0x14);
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_58,0,0x3f800000);
    lVar4 = FUN_141cf3cd0(param_1 + 0x20,param_2);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a5e268) &&
       (_Init_thread_header(&DAT_146a5e268), DAT_146a5e268 == -1)) {
      FName::FName(&DAT_146a5e260,L"AsyncRadialBlurEndFence",1);
      _Init_thread_footer(&DAT_146a5e268);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,local_res8,&DAT_146a5e260);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa8,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    if (((*(char *)(param_1 + 10) == '\0') || (*(char *)(param_1 + 0xb) == '\0')) ||
       (DAT_146ab62f0 == '\0')) {
      lVar6 = *(longlong *)(param_2 + 0x40);
      plVar5 = (longlong *)(param_1 + 0x10);
      if (plVar5 != (longlong *)(param_1 + 0x20)) {
        do {
          plVar11 = (longlong *)*plVar5;
          if ((((plVar11 == (longlong *)0x0) || (*(char *)((longlong)plVar11 + 10) == '\0')) ||
              (*(char *)((longlong)plVar11 + 0xb) == '\0')) || (DAT_146ab62f0 == '\0')) {
            cVar13 = '\0';
          }
          else {
            cVar13 = '\x01';
          }
          cVar2 = FRenderingCompositePass::IsAsyncComputePass(param_1);
          if (((cVar2 != cVar13) && (plVar11 != (longlong *)0x0)) &&
             (lVar8 = (**(code **)(*plVar11 + 0x80))(plVar11), lVar8 != 0)) {
            puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 3;
            if (*(undefined8 **)(lVar6 + 0x38) < puVar7) {
              FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x20);
              puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar7 = puVar9 + 3;
            }
            *(undefined8 **)(lVar6 + 0x30) = puVar7;
            *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
            **(undefined8 **)(lVar6 + 8) = puVar9;
            *(undefined8 **)(lVar6 + 8) = puVar9 + 1;
            puVar9[1] = 0;
            *puVar9 = &PTR_LAB_144dc9cc0;
            puVar9[2] = lVar8;
          }
          plVar5 = plVar5 + 2;
        } while (plVar5 != (longlong *)(param_1 + 0x20));
        lVar6 = *(longlong *)(param_2 + 0x40);
      }
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 1;
      if (*(undefined8 **)(lVar6 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x10);
        puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar9 + 1;
      }
      *(undefined8 **)(lVar6 + 0x30) = puVar7;
      *puVar9 = uVar3;
      puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 6;
      if (*(undefined8 **)(lVar6 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x38);
        puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 6;
      }
      *(undefined8 **)(lVar6 + 0x30) = puVar7;
      *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
      **(undefined8 **)(lVar6 + 8) = puVar10;
      *(undefined8 **)(lVar6 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar10 + 2) = 1;
      puVar10[3] = puVar9;
      puVar10[4] = 2;
      puVar10[5] = 0;
      FUN_141c5e6c0(*(undefined8 *)(param_2 + 0x40),param_2,param_1 + 0x34,
                    *(undefined8 *)(lVar4 + 0x10),param_1 + 0xb0);
      lVar6 = *(longlong *)(param_2 + 0x40);
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 1;
      if (*(undefined8 **)(lVar6 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x10);
        puVar9 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar9 + 1;
      }
      *(undefined8 **)(lVar6 + 0x30) = puVar7;
      *puVar9 = uVar3;
      puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 6;
      if (*(undefined8 **)(lVar6 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x38);
        puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 6;
      }
      *(undefined8 **)(lVar6 + 0x30) = puVar7;
      *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
      **(undefined8 **)(lVar6 + 8) = puVar10;
      *(undefined8 **)(lVar6 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar10 + 2) = 1;
      puVar10[3] = puVar9;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x24) = 1;
      puVar10[5] = uVar1;
    }
    else {
      for (plVar5 = (longlong *)(param_1 + 0x10); plVar5 != (longlong *)(param_1 + 0x20);
          plVar5 = plVar5 + 2) {
        plVar11 = (longlong *)*plVar5;
        if (((plVar11 == (longlong *)0x0) || (*(char *)((longlong)plVar11 + 10) == '\0')) ||
           ((*(char *)((longlong)plVar11 + 0xb) == '\0' || (DAT_146ab62f0 == '\0')))) {
          cVar13 = '\0';
        }
        else {
          cVar13 = '\x01';
        }
        cVar2 = FRenderingCompositePass::IsAsyncComputePass(param_1);
        if (((cVar2 != cVar13) && (plVar11 != (longlong *)0x0)) &&
           (lVar6 = (**(code **)(*plVar11 + 0x80))(plVar11), lVar6 != 0)) {
          puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 3;
          if (DAT_146ab7068 < puVar9 + 3) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
            puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 3;
          }
          DAT_146ab7060 = puVar7;
          _DAT_146ab7044 = _DAT_146ab7044 + 1;
          *DAT_146ab7038 = puVar9;
          DAT_146ab7038 = puVar9 + 1;
          *DAT_146ab7038 = 0;
          *puVar9 = &PTR_LAB_144dc9d10;
          puVar9[2] = lVar6;
        }
      }
      local_res20 = *(undefined8 *)(lVar4 + 0x10);
      puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 1;
      if (DAT_146ab7068 < puVar7) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar9 + 1;
      }
      DAT_146ab7060 = puVar7;
      *puVar9 = local_res20;
      puVar10 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 6;
      if (DAT_146ab7068 < puVar7) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar10 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar7;
      *DAT_146ab7038 = puVar10;
      DAT_146ab7038 = puVar10 + 1;
      *DAT_146ab7038 = 0;
      *puVar10 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar10 + 2) = 1;
      puVar10[3] = puVar9;
      puVar10[4] = 2;
      puVar10[5] = 0;
      FUN_141c5d970(&DAT_146ab7030,param_2,param_1 + 0x34,*(undefined8 *)(lVar4 + 0x10),
                    param_1 + 0xb0);
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 1;
      if (DAT_146ab7068 < puVar7) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        puVar9 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar9 + 1;
      }
      DAT_146ab7060 = puVar7;
      *puVar9 = uVar3;
      puVar10 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 6;
      if (DAT_146ab7068 < puVar7) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar10 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar7;
      *DAT_146ab7038 = puVar10;
      DAT_146ab7038 = puVar10 + 1;
      *puVar10 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar10 + 2) = 1;
      puVar10[3] = puVar9;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x24) = 1;
      puVar10[5] = uVar1;
      puVar10[1] = 0;
      FUN_141ec93f0(&DAT_146ab7030);
    }
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  return;
}



// FUNCTION 141c88020 FUN_141c88020 body=1552 status=ok
// SIG undefined FUN_141c88020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c88020(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 auStack_3f8 [32];
  float local_3d8;
  float local_3d0;
  float local_3c8;
  float local_3c0;
  float local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined1 local_390;
  undefined4 local_388;
  undefined8 local_378 [2];
  undefined8 local_368;
  undefined8 uStack_360;
  int local_358;
  uint uStack_354;
  uint local_350;
  int local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  int iStack_300;
  uint uStack_2fc;
  ulonglong local_2f8;
  longlong local_2f0;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  lVar8 = FRenderingCompositePass::GetInputDesc(param_1,0);
  GetSubsufaceProfileTexture_RT(param_2[8]);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  local_2f0 = *param_2;
  uVar1 = *(undefined8 *)(lVar8 + 0x14);
  uVar2 = *(ulonglong *)(local_2f0 + 0x1aa0);
  iVar12 = (*(char *)(param_1 + 0xbc) != '\0') + 1;
  local_348 = (int)((longlong)((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) /
                   (longlong)iVar12);
  uVar6 = (int)(uVar2 >> 0x20) / iVar12;
  local_2f8 = (ulonglong)uVar6;
  uVar4 = CONCAT44(uVar6,local_348);
  iVar7 = (*(int *)(local_2f0 + 0x1aa8) + -1 + iVar12) / iVar12;
  _local_358 = CONCAT44(uVar6,iVar7);
  uVar6 = (*(int *)(local_2f0 + 0x1aac) + -1 + iVar12) / iVar12;
  local_368 = (undefined *)uVar4;
  local_350 = uVar6;
  local_308 = uVar4;
  uStack_360._0_4_ = iVar7;
  uStack_360._4_4_ = uVar6;
  iStack_300 = iVar7;
  uStack_2fc = uVar6;
  puVar9 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x30,param_2);
  cVar5 = FUN_141ce5c50(param_2,puVar9);
  if (cVar5 == '\0') {
    cVar5 = '\0';
    if (*(char *)((longlong)param_2 + 0x69) != '\0') {
      cVar5 = '\x02';
    }
  }
  else {
    cVar5 = (*param_2 == *(longlong *)**(undefined8 **)(*param_2 + 0x10)) + '\x01';
  }
  local_338 = *puVar9;
  uStack_330 = 0xffffffff00000000;
  local_328._0_2_ = CONCAT11(1,cVar5);
  local_368 = (undefined *)0x0;
  uStack_360 = 0;
  FUN_140c63b80(local_2e8,1,&local_338,&local_368);
  lVar8 = param_2[8];
  FRHICommandListBase::CacheActiveRenderTargets(lVar8,local_228,local_2e8,local_158);
  puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar10 + 0x54;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x2a8);
    puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar10 + 0x54;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar11;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar10;
  *(undefined8 **)(lVar8 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar10 + 2,local_2e8);
  local_368 = (undefined *)uVar4;
  uStack_360._0_4_ = iVar7;
  uStack_360._4_4_ = uVar6;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_368);
  lVar8 = param_2[0xc];
  local_368 = &DAT_146a51f90;
  iVar7 = 0;
  uStack_360 = (ulonglong)uStack_360._4_4_ << 0x20;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,local_378,&local_368);
  puVar11 = (undefined8 *)0x0;
  if ((int)local_378[0] != -1) {
    puVar11 = (undefined8 *)((longlong)(int)local_378[0] * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  puVar10 = puVar11 + 2;
  if (puVar11 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  local_378[0] = *puVar10;
  iVar12 = *(int *)(DAT_146a57b68 + 4);
  if ((-1 < iVar12) && (iVar7 = 2, iVar12 < 2)) {
    iVar7 = iVar12;
  }
  lVar8 = *param_2;
  iVar12 = *(int *)(lVar8 + 0x1aa0);
  local_368._4_4_ = *(int *)(lVar8 + 0x1aa4);
  uStack_360._0_4_ = *(int *)(lVar8 + 0x1aa8);
  uStack_360._4_4_ = *(int *)(lVar8 + 0x1aac);
  local_368._0_4_ = iVar12;
  if (*(int *)(param_1 + 0xb8) == 0) {
    lVar8 = FSceneRenderTargets::Get(param_2[8]);
    if (((iVar12 == DAT_1468b5ca0) && (local_368._4_4_ == DAT_1468b5ca4)) &&
       (((int)uStack_360 == (int)*(undefined8 *)(lVar8 + 0x378) &&
        (uStack_360._4_4_ == (int)((ulonglong)*(undefined8 *)(lVar8 + 0x378) >> 0x20))))) {
      if (iVar7 == 0) {
        FUN_141c6ef60(param_2,local_378);
      }
      else if (iVar7 == 1) {
        FUN_141c6e420(param_2,local_378);
      }
      else if (iVar7 == 2) {
        FUN_141c6e9c0(param_2,local_378);
      }
    }
    else if (iVar7 == 0) {
      FUN_141c6ec90(param_2,local_378);
    }
    else if (iVar7 == 1) {
      FUN_141c6e150(param_2,local_378);
    }
    else if (iVar7 == 2) {
      FUN_141c6e6f0(param_2,local_378);
    }
  }
  else {
    lVar8 = FSceneRenderTargets::Get(param_2[8]);
    if ((((iVar12 == DAT_1468b5ca0) && (local_368._4_4_ == DAT_1468b5ca4)) &&
        ((int)uStack_360 == (int)*(undefined8 *)(lVar8 + 0x378))) &&
       (uStack_360._4_4_ == (int)((ulonglong)*(undefined8 *)(lVar8 + 0x378) >> 0x20))) {
      if (iVar7 == 0) {
        FUN_141c6de80(param_2,local_378);
      }
      else if (iVar7 == 1) {
        FUN_141c6d340(param_2,local_378);
      }
      else if (iVar7 == 2) {
        FUN_141c6d8e0(param_2,local_378);
      }
    }
    else if (iVar7 == 0) {
      FUN_141c6dbb0(param_2,local_378);
    }
    else if (iVar7 == 1) {
      FUN_141c6d070(param_2,local_378);
    }
    else if (iVar7 == 2) {
      FUN_141c6d610(param_2,local_378);
    }
  }
  local_388 = 1;
  local_390 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_368 = (undefined *)CONCAT44(uStack_2fc - local_308._4_4_,iStack_300 - (int)local_308);
  local_398 = *(undefined4 *)(local_2f0 + 0xf60);
  local_3a0 = local_378[0];
  local_3b0 = local_368;
  local_3c8 = (float)(int)local_2f8;
  local_3c0 = (float)(local_358 - local_348);
  local_3d0 = (float)local_348;
  local_3d8 = (float)(int)(uStack_2fc - local_308._4_4_);
  local_3b8 = (float)(int)(local_350 - (int)local_2f8);
  local_3a8 = uVar1;
  FUN_141ce13a0(param_2[8]);
  lVar8 = param_2[8];
  uVar1 = puVar9[1];
  plVar3 = (longlong *)*puVar9;
  local_338 = 0xffffffff00000000;
  uStack_330 = 0xffffffffffffffff;
  local_318 = 0xffffffff;
  uStack_310 = 0;
  local_328 = 0xffffffffffffffff;
  uStack_320 = 0xffffffffffffffff;
  puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 10;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
    puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 10;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar9;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar11;
  *(undefined8 **)(lVar8 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_338;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_338._4_4_;
  *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_330;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_330._4_4_;
  *(undefined4 *)(puVar11 + 4) = (undefined4)local_328;
  *(undefined4 *)((longlong)puVar11 + 0x24) = local_328._4_4_;
  *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_320;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_320._4_4_;
  *(undefined4 *)(puVar11 + 6) = (undefined4)local_318;
  *(undefined4 *)((longlong)puVar11 + 0x34) = local_318._4_4_;
  *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_310;
  *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_310._4_4_;
  puVar11[8] = plVar3;
  puVar11[9] = uVar1;
  lVar8 = (**(code **)(*plVar3 + 8))(plVar3);
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar11[8] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar11[8] + 0x20))();
  }
  lVar8 = (**(code **)(*(longlong *)puVar11[9] + 8))();
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar11[9] + 0x20))();
  }
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  return;
}



// FUNCTION 141c88630 FUN_141c88630 body=1490 status=ok
// SIG undefined FUN_141c88630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c88630(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char cVar16;
  undefined1 auStack_418 [32];
  float local_3f8;
  float local_3f0;
  float local_3e8;
  float local_3e0;
  float local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined1 local_3b0;
  undefined4 local_3a8;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined *local_378;
  ulonglong uStack_370;
  char local_368;
  undefined1 local_367;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 *local_2f8;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  uVar9 = FSceneRenderTargets::Get(param_2[8]);
  local_358 = uVar9;
  lVar10 = FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar13 = *param_2;
  uVar3 = *(undefined8 *)(lVar10 + 0x14);
  puVar4 = *(undefined **)(lVar13 + 0x1aa0);
  uVar5 = *(ulonglong *)(lVar13 + 0x1aa8);
  local_388 = lVar13;
  local_348 = puVar4;
  uStack_340 = uVar5;
  local_338 = puVar4;
  uStack_330 = uVar5;
  FUN_141ce54b0(uVar9);
  puVar11 = (undefined8 *)FUN_141cf3cd0(param_1 + 8,param_2);
  local_2f8 = puVar11;
  cVar7 = FUN_141ce5c50(param_2,puVar11);
  cVar16 = '\x02';
  if (cVar7 == '\0') {
    local_368 = '\0';
    if (*(char *)((longlong)param_2 + 0x69) != '\0') {
      local_368 = '\x02';
    }
  }
  else {
    local_368 = (*param_2 == *(longlong *)**(undefined8 **)(*param_2 + 0x10)) + '\x01';
  }
  local_378 = (undefined *)*puVar11;
  uStack_370 = 0xffffffff00000000;
  local_367 = 1;
  local_398 = 0;
  local_390 = 0;
  FUN_140c63b80(local_2e8,1,&local_378,&local_398);
  lVar10 = param_2[8];
  FRHICommandListBase::CacheActiveRenderTargets(lVar10,local_228,local_2e8,local_158);
  puVar14 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar14 + 0x54;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x2a8);
    puVar14 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar14 + 0x54;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar11;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar14;
  *(undefined8 **)(lVar10 + 8) = puVar14 + 1;
  puVar15 = (undefined8 *)0x0;
  puVar14[1] = 0;
  *puVar14 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar14 + 2,local_2e8);
  FUN_141b01890(param_2,lVar13);
  local_378 = puVar4;
  uStack_370 = uVar5;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_378);
  lVar13 = param_2[0xc];
  local_378 = &DAT_146a51f90;
  uStack_370 = uStack_370 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_398,&local_378);
  puVar11 = puVar15;
  if ((int)local_398 != -1) {
    puVar11 = (undefined8 *)((longlong)(int)local_398 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  puVar14 = puVar11 + 2;
  if (puVar11 == (undefined8 *)0x0) {
    puVar14 = puVar15;
  }
  local_398 = *puVar14;
  iVar1 = *(int *)(DAT_146a57358 + 4);
  iVar8 = FSceneRenderTargets::GetSceneColorFormat(local_358);
  lVar13 = local_388;
  iVar2 = *(int *)(DAT_146a57b80 + 4);
  if ((iVar2 != 0) && (((iVar2 == 1 || (iVar2 != 2)) || ((iVar8 != 1 && (iVar8 != 10)))))) {
    puVar15 = (undefined8 *)0x1;
  }
  if (iVar1 == -1) {
    bVar6 = *(int *)(local_388 + 0x1a10) != 2;
  }
  else {
    bVar6 = false;
    if (iVar1 == 1) {
      bVar6 = true;
    }
  }
  plVar12 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
  if (*plVar12 != 0) {
    cVar16 = (char)param_1[0x19] != '\0';
  }
  if ((char)puVar15 == '\0') {
    if (bVar6) {
      if (cVar16 == '\0') {
        FUN_141c6bc60(param_2,&local_398);
      }
      else if (cVar16 == '\x01') {
        FUN_141c6a6e0(param_2,&local_398);
      }
      else if (cVar16 == '\x02') {
        FUN_141c6b1a0(param_2,&local_398);
      }
    }
    else if (cVar16 == '\0') {
      FUN_141c6c1c0(param_2,&local_398);
    }
    else if (cVar16 == '\x01') {
      FUN_141c6ac40(param_2,&local_398);
    }
    else if (cVar16 == '\x02') {
      FUN_141c6b700(param_2,&local_398);
    }
  }
  else if (bVar6) {
    if (cVar16 == '\0') {
      FUN_141c6b9b0(param_2,&local_398);
    }
    else if (cVar16 == '\x01') {
      FUN_141c6a430(param_2,&local_398);
    }
    else if (cVar16 == '\x02') {
      FUN_141c6aef0(param_2,&local_398);
    }
  }
  else if (cVar16 == '\0') {
    FUN_141c6bf10(param_2,&local_398);
  }
  else if (cVar16 == '\x01') {
    FUN_141c6a990(param_2,&local_398);
  }
  else if (cVar16 == '\x02') {
    FUN_141c6b450(param_2,&local_398);
  }
  local_3e8 = (float)local_338._4_4_;
  local_388 = CONCAT44(uStack_340._4_4_ - local_348._4_4_,(int)uStack_340 - (int)local_348);
  local_3a8 = 1;
  local_3b0 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_3b8 = *(undefined4 *)(lVar13 + 0xf60);
  local_3c0 = local_398;
  local_3d0 = local_388;
  local_3e0 = (float)((int)uStack_330 - (int)local_338);
  local_3f0 = (float)(int)local_338;
  local_3f8 = (float)(uStack_340._4_4_ - local_348._4_4_);
  local_3d8 = (float)(uStack_330._4_4_ - local_338._4_4_);
  local_3c8 = uVar3;
  FUN_141ce13a0(param_2[8]);
  lVar13 = param_2[8];
  local_328 = 0xffffffff00000000;
  uStack_320 = 0xffffffffffffffff;
  uVar3 = local_2f8[1];
  plVar12 = (longlong *)*local_2f8;
  local_308 = 0xffffffff;
  uStack_300 = 0;
  local_318 = 0xffffffffffffffff;
  uStack_310 = 0xffffffffffffffff;
  puVar14 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar14 + 10;
  if (*(undefined8 **)(lVar13 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x58);
    puVar14 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar14 + 10;
  }
  *(undefined8 **)(lVar13 + 0x30) = puVar11;
  *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
  **(undefined8 **)(lVar13 + 8) = puVar14;
  *(undefined8 **)(lVar13 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar14 + 2) = (undefined4)local_328;
  *(undefined4 *)((longlong)puVar14 + 0x14) = local_328._4_4_;
  *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_320;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_320._4_4_;
  *(undefined4 *)(puVar14 + 4) = (undefined4)local_318;
  *(undefined4 *)((longlong)puVar14 + 0x24) = local_318._4_4_;
  *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_310;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_310._4_4_;
  *(undefined4 *)(puVar14 + 6) = (undefined4)local_308;
  *(undefined4 *)((longlong)puVar14 + 0x34) = local_308._4_4_;
  *(undefined4 *)(puVar14 + 7) = (undefined4)uStack_300;
  *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_300._4_4_;
  puVar14[8] = plVar12;
  puVar14[9] = uVar3;
  lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar14[8] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar14[8] + 0x20))();
  }
  lVar13 = (**(code **)(*(longlong *)puVar14[9] + 8))();
  if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar14[9] + 0x18))(), lVar13 == 0)) {
    (**(code **)(*(longlong *)puVar14[9] + 0x20))();
  }
  FUN_141d04b60(local_358,param_1[0x12]);
  plVar12 = (longlong *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x30))();
  }
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  return;
}



// FUNCTION 141c88c10 FUN_141c88c10 body=1259 status=ok
// SIG undefined FUN_141c88c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c88c10(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 auStack_3c8 [32];
  float local_3a8;
  float local_3a0;
  float local_398;
  float local_390;
  float local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined1 local_360;
  undefined4 local_358;
  undefined8 local_348;
  undefined8 local_340;
  undefined *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  undefined8 *local_2e0;
  undefined1 local_2d8 [192];
  undefined4 local_218;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  lVar7 = FRenderingCompositePass::GetInputDesc(param_1,0);
  if (lVar7 != 0) {
    uVar8 = FSceneRenderTargets::Get(param_2[8]);
    iVar5 = FSceneRenderTargets::GetSceneColorFormat(uVar8);
    iVar12 = *(int *)(DAT_146a57b80 + 4);
    if (iVar12 == 0) {
      bVar3 = false;
    }
    else if (((iVar12 == 1) || (iVar12 != 2)) || ((iVar5 != 1 && (iVar5 != 10)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    local_2e8 = *param_2;
    uVar8 = *(undefined8 *)(lVar7 + 0x14);
    uVar1 = *(ulonglong *)(local_2e8 + 0x1aa0);
    uVar10 = (uint)(*(char *)(param_1 + 0xb8) != '\0');
    iVar12 = uVar10 + 1;
    local_2f8 = *(undefined8 *)(local_2e8 + 0x1aa0);
    uStack_2f0 = *(undefined8 *)(local_2e8 + 0x1aa8);
    uVar6 = (undefined4)
            ((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
            (longlong)iVar12);
    local_348._4_4_ = (int)(uVar1 >> 0x20);
    local_348._4_4_ = local_348._4_4_ / iVar12;
    local_348 = CONCAT44(local_348._4_4_,uVar6);
    local_338 = (undefined *)CONCAT44(local_348._4_4_,uVar6);
    uStack_330 = CONCAT44((*(int *)(local_2e8 + 0x1aac) + -1 + iVar12) / iVar12,
                          (*(int *)(local_2e8 + 0x1aa8) + -1 + iVar12) / iVar12);
    puVar9 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x20,param_2);
    local_2e0 = puVar9;
    cVar4 = FUN_141ce5c50(param_2,puVar9);
    if (cVar4 == '\0') {
      cVar4 = '\0';
      if (*(char *)((longlong)param_2 + 0x69) != '\0') {
        cVar4 = '\x02';
      }
    }
    else {
      cVar4 = (*param_2 == *(longlong *)**(undefined8 **)(*param_2 + 0x10)) + '\x01';
    }
    local_328 = *puVar9;
    uStack_320 = 0xffffffff00000000;
    local_318._0_2_ = CONCAT11(1,cVar4);
    local_348 = 0;
    local_340 = 0;
    FUN_140c63b80(local_2d8,1,&local_328,&local_348);
    lVar7 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar7,local_218,local_2d8,local_148);
    puVar11 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 0x54;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x2a8);
      puVar11 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 0x54;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar9;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar11;
    *(undefined8 **)(lVar7 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar11 + 2,local_2d8);
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_338);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      if (bVar3) {
        FUN_141c6ca70();
      }
      else {
        FUN_141c6cd70(param_2);
      }
    }
    else if (bVar3) {
      FUN_141c6c470();
    }
    else {
      FUN_141c6c770();
    }
    lVar7 = param_2[0xc];
    local_338 = &DAT_146a51f90;
    uStack_330 = uStack_330 & 0xffffffff00000000;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar7 + 0x38,&local_348,&local_338);
    puVar9 = (undefined8 *)0x0;
    if ((int)local_348 != -1) {
      puVar9 = (undefined8 *)((longlong)(int)local_348 * 0x20 + *(longlong *)(lVar7 + 0x38));
    }
    uVar10 = ~uVar10;
    local_358 = 1;
    local_348 = CONCAT44((uStack_2f0._4_4_ - local_2f8._4_4_) + -1 + iVar12 & uVar10,
                         ((int)uStack_2f0 - (int)local_2f8) + -1 + iVar12 & uVar10);
    local_360 = *(undefined1 *)((longlong)param_2 + 0x69);
    puVar11 = puVar9 + 2;
    if (puVar9 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    local_3a8 = (float)(uStack_2f0._4_4_ - local_2f8._4_4_);
    local_368 = *(undefined4 *)(local_2e8 + 0xf60);
    local_370 = *puVar11;
    local_380 = local_348;
    local_3a0 = (float)(int)local_2f8;
    local_390 = (float)((int)uStack_2f0 - (int)local_2f8);
    local_398 = (float)local_2f8._4_4_;
    local_388 = local_3a8;
    local_378 = uVar8;
    FUN_141ce13a0(param_2[8]);
    lVar7 = param_2[8];
    local_328 = 0xffffffff00000000;
    uStack_320 = 0xffffffffffffffff;
    uVar8 = local_2e0[1];
    plVar2 = (longlong *)*local_2e0;
    local_308 = 0xffffffff;
    uStack_300 = 0;
    local_318 = 0xffffffffffffffff;
    uStack_310 = 0xffffffffffffffff;
    puVar11 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 10;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x58);
      puVar11 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 10;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar9;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar11;
    *(undefined8 **)(lVar7 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar11 + 2) = (undefined4)local_328;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_328._4_4_;
    *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_320;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_320._4_4_;
    *(undefined4 *)(puVar11 + 4) = (undefined4)local_318;
    *(undefined4 *)((longlong)puVar11 + 0x24) = local_318._4_4_;
    *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_310;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_310._4_4_;
    *(undefined4 *)(puVar11 + 6) = (undefined4)local_308;
    *(undefined4 *)((longlong)puVar11 + 0x34) = local_308._4_4_;
    *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_300;
    *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_300._4_4_;
    puVar11[8] = plVar2;
    puVar11[9] = uVar8;
    lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar11[8] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar11[8] + 0x20))();
    }
    lVar7 = (**(code **)(*(longlong *)puVar11[9] + 8))();
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar11[9] + 0x20))();
    }
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2d8);
  }
  return;
}



// FUNCTION 141c89100 FUN_141c89100 body=1131 status=ok
// SIG undefined FUN_141c89100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c89100(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_3b8 [32];
  float local_398;
  undefined4 local_390;
  uint local_388;
  float local_380;
  float local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined *local_338;
  undefined8 uStack_330;
  int local_328 [2];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  uVar2 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar3 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  plVar5 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  lVar7 = *plVar5;
  if ((((DAT_1464aa6e0 == *(float *)(lVar7 + 0x24)) && (*(float *)(lVar7 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar7 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar7 + 0x30) == DAT_1464aa6ec)
     ) {
    local_338 = (undefined *)0x0;
    uStack_330 = 0;
    uStack_318 = 0xffffffff00000000;
    local_310 = CONCAT62(local_310._2_6_,0x102);
    local_320 = lVar7;
    FUN_140c63b80(local_2e8,1,&local_320,&local_338);
    lVar7 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar7,local_228,local_2e8,local_158);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x54;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x2a8);
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x54;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar6;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar8;
    *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar8 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  }
  else {
    local_348 = 0;
    FUN_141a19150(param_2[8],lVar7,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_348);
    local_380 = 0.0;
    local_388 = local_388 & 0xffffff00;
    local_390 = 0;
    local_398 = (float)((uint)local_398 & 0xffffff00);
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  uStack_330 = CONCAT44(uVar3,uVar2);
  local_338 = (undefined *)0x0;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_338,0,0x3f800000);
  if ((*(char *)(*param_2 + 0x1714) == '\x01') && (*(float *)(*param_2 + 0x1738) != 0.0)) {
    FUN_141c6f310(param_2);
  }
  else {
    FUN_141c6f5b0(param_2);
  }
  lVar7 = param_2[0xc];
  iVar4 = (int)*(undefined8 *)(param_1 + 0xa8);
  uStack_330 = uStack_330 & 0xffffffff00000000;
  local_348._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  local_348 = CONCAT44((int)(local_348._4_4_ + (local_348._4_4_ >> 0x1f & 3U)) >> 2,
                       (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
  local_338 = &DAT_146a55e30;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_328,&local_338);
  puVar6 = (undefined8 *)0x0;
  if (local_328[0] != -1) {
    puVar6 = (undefined8 *)((longlong)local_328[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_350 = 1;
  local_358 = 1;
  local_398 = (float)uVar3;
  local_380 = (float)uVar2;
  puVar8 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  local_360 = *puVar8;
  local_368 = local_348;
  local_370 = local_348;
  local_388 = 0;
  local_390 = 0;
  local_378 = local_398;
  DrawRectangle(param_2[8]);
  lVar7 = plVar5[1];
  plVar5 = (longlong *)*plVar5;
  lVar1 = param_2[8];
  local_320 = 0xffffffff00000000;
  uStack_318 = 0xffffffffffffffff;
  local_300 = 0xffffffff;
  uStack_2f8 = 0;
  local_310 = 0xffffffffffffffff;
  uStack_308 = 0xffffffffffffffff;
  puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 10;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x58);
    puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 10;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar6;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar8;
  *(undefined8 **)(lVar1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar8 + 2) = (undefined4)local_320;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_320._4_4_;
  *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_318;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_318._4_4_;
  *(undefined4 *)(puVar8 + 4) = (undefined4)local_310;
  *(undefined4 *)((longlong)puVar8 + 0x24) = local_310._4_4_;
  *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_308;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_308._4_4_;
  *(undefined4 *)(puVar8 + 6) = (undefined4)local_300;
  *(undefined4 *)((longlong)puVar8 + 0x34) = local_300._4_4_;
  *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_2f8;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_2f8._4_4_;
  puVar8[8] = plVar5;
  puVar8[9] = lVar7;
  lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[8] + 0x20))();
  }
  lVar7 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c89570 FUN_141c89570 body=1099 status=ok
// SIG undefined FUN_141c89570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c89570(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_3b8 [32];
  float local_398;
  undefined4 local_390;
  uint local_388;
  float local_380;
  float local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined *local_338;
  undefined8 uStack_330;
  int local_328 [2];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  uVar2 = (int)(*(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xb8) >> 0x1f & 3U)) >> 2;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar3 = (int)(*(int *)(param_1 + 0xbc) + (*(int *)(param_1 + 0xbc) >> 0x1f & 3U)) >> 2;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  plVar5 = (longlong *)FUN_141cf3cd0(param_1 + 0x30,param_2);
  lVar7 = *plVar5;
  if ((((DAT_1464aa6e0 == *(float *)(lVar7 + 0x24)) && (*(float *)(lVar7 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar7 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar7 + 0x30) == DAT_1464aa6ec)
     ) {
    local_338 = (undefined *)0x0;
    uStack_330 = 0;
    uStack_318 = 0xffffffff00000000;
    local_310 = CONCAT62(local_310._2_6_,0x102);
    local_320 = lVar7;
    FUN_140c63b80(local_2e8,1,&local_320,&local_338);
    lVar7 = *(longlong *)(param_2 + 0x40);
    FRHICommandListBase::CacheActiveRenderTargets(lVar7,local_228,local_2e8,local_158);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x54;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x2a8);
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x54;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar6;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar8;
    *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar8 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  }
  else {
    local_348 = 0;
    FUN_141a19150(*(undefined8 *)(param_2 + 0x40),lVar7,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_348);
    local_380 = 0.0;
    local_388 = local_388 & 0xffffff00;
    local_390 = 0;
    local_398 = (float)((uint)local_398 & 0xffffff00);
    DrawClearQuadMRT(*(undefined8 *)(param_2 + 0x40),1,1,&DAT_1464aa6e0);
  }
  local_338 = (undefined *)0x0;
  uStack_330._0_4_ = uVar2;
  uStack_330._4_4_ = uVar3;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_338,0,0x3f800000);
  FUN_141c94b80(param_2);
  lVar7 = *(longlong *)(param_2 + 0x60);
  iVar4 = (int)*(undefined8 *)(param_1 + 0xb8);
  uStack_330 = (ulonglong)uStack_330._4_4_ << 0x20;
  local_348._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
  local_348 = CONCAT44((int)(local_348._4_4_ + (local_348._4_4_ >> 0x1f & 3U)) >> 2,
                       (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
  local_338 = &DAT_146a56ca0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_328,&local_338);
  puVar6 = (undefined8 *)0x0;
  if (local_328[0] != -1) {
    puVar6 = (undefined8 *)((longlong)local_328[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_350 = 1;
  local_358 = 1;
  local_398 = (float)uVar3;
  local_380 = (float)uVar2;
  puVar8 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  local_360 = *puVar8;
  local_368 = local_348;
  local_370 = local_348;
  local_388 = 0;
  local_390 = 0;
  local_378 = local_398;
  DrawRectangle(*(undefined8 *)(param_2 + 0x40));
  lVar7 = *(longlong *)(param_2 + 0x40);
  lVar1 = plVar5[1];
  plVar5 = (longlong *)*plVar5;
  local_320 = 0xffffffff00000000;
  uStack_318 = 0xffffffffffffffff;
  local_300 = 0xffffffff;
  uStack_2f8 = 0;
  local_310 = 0xffffffffffffffff;
  uStack_308 = 0xffffffffffffffff;
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
  *(undefined4 *)(puVar8 + 2) = (undefined4)local_320;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_320._4_4_;
  *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_318;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_318._4_4_;
  *(undefined4 *)(puVar8 + 4) = (undefined4)local_310;
  *(undefined4 *)((longlong)puVar8 + 0x24) = local_310._4_4_;
  *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_308;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_308._4_4_;
  *(undefined4 *)(puVar8 + 6) = (undefined4)local_300;
  *(undefined4 *)((longlong)puVar8 + 0x34) = local_300._4_4_;
  *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_2f8;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_2f8._4_4_;
  puVar8[8] = plVar5;
  puVar8[9] = lVar1;
  lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[8] + 0x20))();
  }
  lVar7 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c899c0 FUN_141c899c0 body=1735 status=ok
// SIG undefined FUN_141c899c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c899c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_488 [32];
  ulonglong local_468;
  undefined8 local_460;
  ulonglong local_458;
  float local_450;
  float local_448;
  undefined8 local_440;
  undefined8 local_438;
  longlong local_430;
  undefined4 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined *local_408;
  ulonglong uStack_400;
  undefined2 local_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  plVar14 = (longlong *)0x0;
  local_418 = local_418 & 0xffffffff00000000;
  uVar4 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  local_3b8 = param_1;
  local_3b0 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  local_408 = (undefined *)*local_3b0;
  if ((((DAT_1464aa6e0 == *(float *)(local_408 + 0x24)) &&
       (*(float *)(local_408 + 0x28) == DAT_1464aa6e4)) &&
      (*(float *)(local_408 + 0x2c) == DAT_1464aa6e8)) &&
     (*(float *)(local_408 + 0x30) == DAT_1464aa6ec)) {
    uStack_400 = 0xffffffff00000000;
    local_3f8 = 0x102;
    local_418 = 0;
    uStack_410 = 0;
    FUN_140c63b80(local_2e8,1,&local_408,&local_418);
    lVar9 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar9,local_228,local_2e8,local_158);
    puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 0x54;
    if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x2a8);
      puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 0x54;
    }
    *(undefined8 **)(lVar9 + 0x30) = puVar8;
    *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
    **(undefined8 **)(lVar9 + 8) = puVar10;
    *(undefined8 **)(lVar9 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar10 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  }
  else {
    local_418 = 0;
    FUN_141a19150(param_2[8],local_408,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_418);
    local_450 = 0.0;
    local_458 = local_458 & 0xffffffffffffff00;
    local_460 = (ulonglong)local_460._4_4_ << 0x20;
    local_468 = local_468 & 0xffffffffffffff00;
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  local_418 = 0;
  uStack_410 = CONCAT44(uVar5,uVar4);
  local_408 = (undefined *)0x0;
  uStack_400 = uStack_410;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_408,0,0x3f800000);
  local_368 = 0;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_360 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_2[8],&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  lVar9 = param_2[0xc];
  uStack_400 = uStack_400 & 0xffffffff00000000;
  local_408 = &DAT_146a560d0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_418,&local_408);
  plVar13 = plVar14;
  if ((int)local_418 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_418 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  uStack_400 = uStack_400 & 0xffffffff00000000;
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  local_408 = &DAT_146a55f80;
  lVar1 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,&local_418,&local_408);
  plVar13 = plVar14;
  if ((int)local_418 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_418 * 0x20 + *(longlong *)(lVar9 + 0x38));
  }
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  lVar9 = *plVar12;
  local_3a8 = DAT_1464c2720;
  if (lVar1 == 0) {
    local_418 = 0;
    plVar13 = (longlong *)0x1;
    plStack_3a0 = plVar14;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_3a0 = *(longlong **)(lVar2 + 0x38);
    plVar13 = plVar14;
  }
  uVar7 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_418);
  }
  bVar3 = false;
  if (lVar9 == 0) {
    bVar3 = true;
    local_418 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar7 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_388 = uVar7;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_418);
  }
  local_35c = local_35c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_3a8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_418 = *(undefined8 *)(lVar2 + 0x38);
  FUN_141c07aa0(lVar1,param_2[8],local_418,*(undefined8 *)(*param_2 + 0x20));
  uVar7 = FUN_141a156e0();
  local_460 = 0;
  local_468 = local_468 & 0xffffffff00000000;
  FPostProcessPassParameters::SetVS(lVar1 + 0xc0,&local_418,param_2,uVar7);
  local_468 = local_468 & 0xffffffff00000000;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_418,lVar1 + 0x1bc,*param_2 + 0x2fe0);
  lVar2 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_418 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(lVar9,param_2[8],local_418,*(undefined8 *)(*param_2 + 0x20));
  local_468 = FUN_141a156e0();
  local_458 = 0;
  local_460 = local_460 & 0xffffffff00000000;
  thunk_FUN_141ca99a0(lVar9 + 0xc0,param_2[8],&local_418,param_2);
  local_420 = 1;
  local_428 = 1;
  iVar6 = (int)*(undefined8 *)(local_3b8 + 0xa8);
  local_418._4_4_ = (int)((ulonglong)*(undefined8 *)(local_3b8 + 0xa8) >> 0x20);
  uVar11 = local_418._4_4_ >> 0x1f & 3;
  local_418 = CONCAT44((int)(local_418._4_4_ + uVar11) >> 2,(int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2
                      );
  local_448 = (float)uVar5;
  local_450 = (float)uVar4;
  local_438 = local_418;
  local_440 = local_418;
  local_458 = local_458 & 0xffffffff00000000;
  local_460 = local_460 & 0xffffffff00000000;
  local_468 = CONCAT44(local_468._4_4_,local_448);
  local_430 = lVar1;
  DrawRectangle(param_2[8],uVar11,0);
  lVar9 = param_2[8];
  local_3e8 = 0xffffffff00000000;
  uStack_3e0 = 0xffffffffffffffff;
  lVar1 = local_3b0[1];
  plVar14 = (longlong *)*local_3b0;
  local_3c8 = 0xffffffff;
  uStack_3c0 = 0;
  local_3d8 = 0xffffffffffffffff;
  uStack_3d0 = 0xffffffffffffffff;
  puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 10;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x58);
    puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 10;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar8;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar10;
  *(undefined8 **)(lVar9 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar10 + 2) = (undefined4)local_3e8;
  *(undefined4 *)((longlong)puVar10 + 0x14) = local_3e8._4_4_;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_3e0;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_3e0._4_4_;
  *(undefined4 *)(puVar10 + 4) = (undefined4)local_3d8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = local_3d8._4_4_;
  *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_3d0;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_3d0._4_4_;
  *(undefined4 *)(puVar10 + 6) = (undefined4)local_3c8;
  *(undefined4 *)((longlong)puVar10 + 0x34) = local_3c8._4_4_;
  *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_3c0;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_3c0._4_4_;
  puVar10[8] = plVar14;
  puVar10[9] = lVar1;
  lVar9 = (**(code **)(*plVar14 + 8))(plVar14);
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar10[8] + 0x20))();
  }
  lVar9 = (**(code **)(*(longlong *)puVar10[9] + 8))();
  if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar9 == 0)) {
    (**(code **)(*(longlong *)puVar10[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c8a090 FUN_141c8a090 body=1469 status=ok
// SIG undefined FUN_141c8a090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c8a090(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_3d8 [32];
  float local_3b8;
  float local_3b0;
  float local_3a8;
  float local_3a0;
  float local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 local_370;
  int local_368 [4];
  undefined *local_358;
  undefined8 uStack_350;
  int local_348;
  uint local_344;
  int local_340;
  int local_33c;
  int local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  lVar4 = FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar7 = param_2[0xc];
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  lVar3 = *param_2;
  local_348 = *(int *)(param_1 + 0xa8);
  if (local_348 < 2) {
    local_348 = 1;
  }
  local_344 = *(uint *)(param_1 + 0xac);
  if ((int)*(uint *)(param_1 + 0xac) < 2) {
    local_344 = 1;
  }
  uStack_350 = (ulonglong)uStack_350._4_4_ << 0x20;
  local_358 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_368,&local_358);
  puVar6 = (undefined8 *)0x0;
  if (local_368[0] != -1) {
    puVar6 = (undefined8 *)((longlong)local_368[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  puVar8 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  local_380 = *puVar8;
  local_390 = uVar2;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    local_2f8 = *(undefined4 *)(lVar4 + 0x14);
    uStack_2f4 = *(undefined4 *)(lVar4 + 0x18);
    local_338 = *(int *)(lVar3 + 0x1aa0);
    local_368[0] = *(int *)(lVar3 + 0x1aa4);
    local_33c = *(int *)(lVar3 + 0x1aa8);
    iVar9 = *(int *)(lVar3 + 0x1aac);
    local_340 = iVar9;
    plVar5 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
    lVar7 = *plVar5;
    if ((((DAT_1464aa6e0 == *(float *)(lVar7 + 0x24)) && (*(float *)(lVar7 + 0x28) == DAT_1464aa6e4)
         ) && (*(float *)(lVar7 + 0x2c) == DAT_1464aa6e8)) &&
       (*(float *)(lVar7 + 0x30) == DAT_1464aa6ec)) {
      uStack_320 = 0xffffffff00000000;
      local_318 = CONCAT62(local_318._2_6_,0x102);
      local_358 = (undefined *)0x0;
      uStack_350 = 0;
      local_328 = lVar7;
      FUN_140c63b80(local_2e8,1,&local_328,&local_358);
      lVar7 = param_2[8];
      FRHICommandListBase::CacheActiveRenderTargets(lVar7,local_228,local_2e8,local_158);
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x54;
      if (*(undefined8 **)(lVar7 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x2a8);
        puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 0x54;
      }
      *(undefined8 **)(lVar7 + 0x30) = puVar6;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      **(undefined8 **)(lVar7 + 8) = puVar8;
      *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar8 + 2,local_2e8);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
      iVar9 = local_340;
    }
    else {
      local_330 = 0;
      FUN_141a19150(param_2[8],lVar7,0,0);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_330);
      local_3a0 = 0.0;
      local_3a8 = (float)((uint)local_3a8 & 0xffffff00);
      local_3b0 = 0.0;
      local_3b8 = (float)((uint)local_3b8 & 0xffffff00);
      DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
    }
    uStack_350 = CONCAT44(local_344,local_348);
    local_358 = (undefined *)0x0;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_358);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x2c) != 0x1a)) {
      FUN_141c6a0c0(param_1,param_2);
    }
    else {
      FUN_141c69e90(param_1,param_2);
    }
    local_370 = 1;
    local_378 = 1;
    local_388 = CONCAT44(uStack_2f4,local_2f8);
    local_3b8 = (float)(iVar9 - local_368[0]);
    local_3a0 = (float)(local_33c - local_338);
    local_3a8 = (float)local_368[0];
    local_3b0 = (float)local_338;
    local_398 = local_3b8;
    DrawRectangle(param_2[8]);
    lVar7 = param_2[8];
    lVar3 = plVar5[1];
    plVar5 = (longlong *)*plVar5;
    local_328 = 0xffffffff00000000;
    uStack_320 = 0xffffffffffffffff;
    local_308 = 0xffffffff;
    uStack_300 = 0;
    local_318 = 0xffffffffffffffff;
    uStack_310 = 0xffffffffffffffff;
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
    *(undefined4 *)(puVar8 + 2) = (undefined4)local_328;
    *(undefined4 *)((longlong)puVar8 + 0x14) = local_328._4_4_;
    *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_320;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_320._4_4_;
    *(undefined4 *)(puVar8 + 4) = (undefined4)local_318;
    *(undefined4 *)((longlong)puVar8 + 0x24) = local_318._4_4_;
    *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_310;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_310._4_4_;
    *(undefined4 *)(puVar8 + 6) = (undefined4)local_308;
    *(undefined4 *)((longlong)puVar8 + 0x34) = local_308._4_4_;
    *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_300;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_300._4_4_;
    puVar8[8] = plVar5;
    puVar8[9] = lVar3;
    lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar8[8] + 0x20))();
    }
    lVar7 = (**(code **)(*(longlong *)puVar8[9] + 8))();
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar8[9] + 0x20))();
    }
  }
  else {
    local_340 = *(int *)(lVar3 + 0x1aa0);
    iVar9 = *(int *)(lVar3 + 0x1aa8);
    local_368[0] = *(int *)(lVar3 + 0x1aa4);
    iVar1 = *(int *)(lVar3 + 0x1aac);
    uStack_350 = CONCAT44(local_344,local_348);
    local_358 = (undefined *)0x0;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_358);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x2c) != 0x1a)) {
      FUN_141c6a0c0(param_1,param_2);
    }
    else {
      FUN_141c69e90(param_1,param_2);
    }
    local_370 = 1;
    local_378 = 1;
    local_3b8 = (float)local_344;
    local_3a0 = (float)(iVar9 - local_340);
    local_3a8 = (float)local_368[0];
    local_3b0 = (float)local_340;
    local_398 = (float)(iVar1 - local_368[0]);
    local_388 = uVar2;
    DrawRectangle(param_2[8]);
  }
  return;
}



// FUNCTION 141c8a650 FUN_141c8a650 body=1198 status=ok
// SIG undefined FUN_141c8a650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c8a650(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  uint uVar11;
  undefined1 auStack_3a8 [32];
  float local_388;
  undefined4 local_380;
  uint local_378;
  float local_370;
  float local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  uVar2 = (int)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 200) >> 0x1f & 3U)) >> 2;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar3 = (int)(*(int *)(param_1 + 0xcc) + (*(int *)(param_1 + 0xcc) >> 0x1f & 3U)) >> 2;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  plVar5 = (longlong *)FUN_141cf3cd0(param_1 + 0x40,param_2);
  lVar8 = *plVar5;
  if ((((DAT_1464aa6e0 == *(float *)(lVar8 + 0x24)) && (*(float *)(lVar8 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar8 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar8 + 0x30) == DAT_1464aa6ec)
     ) {
    local_328 = 0;
    uStack_320 = 0;
    uStack_310 = 0xffffffff00000000;
    local_308 = CONCAT62(local_308._2_6_,0x102);
    local_338 = plVar5;
    local_318 = lVar8;
    FUN_140c63b80(local_2e8,1,&local_318,&local_328);
    lVar8 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar8,local_228,local_2e8,local_158);
    puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x54;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x2a8);
      puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 0x54;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar6;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar9;
    *(undefined8 **)(lVar8 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar9 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
    plVar5 = local_338;
  }
  else {
    local_338 = (longlong *)0x0;
    FUN_141a19150(param_2[8],lVar8,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_338);
    local_370 = 0.0;
    local_378 = local_378 & 0xffffff00;
    local_380 = 0;
    local_388 = (float)((uint)local_388 & 0xffffff00);
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  uVar7 = 0;
  uStack_320 = CONCAT44(uVar3,uVar2);
  local_328 = 0;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_328,0,0x3f800000);
  cVar10 = (-(*(char *)(*param_2 + 0x3010) != '\0') & 2U) + (0.0 < *(float *)(*param_2 + 0x1468));
  if (cVar10 == '\0') {
    uVar7 = FUN_141c73d80(param_2);
  }
  else if (cVar10 == '\x01') {
    uVar7 = FUN_141c732d0(param_2);
  }
  else if (cVar10 == '\x02') {
    uVar7 = FUN_141c73660(param_2);
  }
  else if (cVar10 == '\x03') {
    uVar7 = FUN_141c739f0(param_2);
  }
  iVar4 = (int)*(undefined8 *)(param_1 + 200);
  local_340 = 1;
  local_348 = 1;
  local_338._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 200) >> 0x20);
  uVar11 = local_338._4_4_ >> 0x1f & 3;
  local_338 = (longlong *)
              CONCAT44((int)(local_338._4_4_ + uVar11) >> 2,(int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2
                      );
  local_388 = (float)uVar3;
  local_370 = (float)uVar2;
  local_358 = local_338;
  local_360 = local_338;
  local_378 = 0;
  local_380 = 0;
  local_368 = local_388;
  local_350 = uVar7;
  DrawRectangle(param_2[8],uVar11,0);
  local_338 = (longlong *)plVar5[1];
  plVar5 = (longlong *)*plVar5;
  lVar8 = param_2[8];
  local_318 = 0xffffffff00000000;
  uStack_310 = 0xffffffffffffffff;
  local_2f8 = 0xffffffff;
  uStack_2f0 = 0;
  local_308 = 0xffffffffffffffff;
  uStack_300 = 0xffffffffffffffff;
  puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 10;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
    puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 10;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar6;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar9;
  *(undefined8 **)(lVar8 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar9 + 2) = (undefined4)local_318;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_318._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_310;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_310._4_4_;
  *(undefined4 *)(puVar9 + 4) = (undefined4)local_308;
  *(undefined4 *)((longlong)puVar9 + 0x24) = local_308._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_300;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_300._4_4_;
  *(undefined4 *)(puVar9 + 6) = (undefined4)local_2f8;
  *(undefined4 *)((longlong)puVar9 + 0x34) = local_2f8._4_4_;
  *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_2f0;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_2f0._4_4_;
  puVar9[9] = local_338;
  puVar9[8] = plVar5;
  lVar8 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar9[8] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar9[8] + 0x20))();
  }
  lVar8 = (**(code **)(*(longlong *)puVar9[9] + 8))();
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar9[9] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar9[9] + 0x20))();
  }
  if ((*(int *)(*param_2 + 0x1a10) == 2) && (lVar8 = *(longlong *)(*param_2 + 0x18), lVar8 != 0)) {
    plVar5 = *(longlong **)(param_1 + 0x90);
    plVar1 = *(longlong **)(lVar8 + 0x12a8);
    *(longlong **)(lVar8 + 0x12a8) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
  }
  return;
}



// FUNCTION 141c8ab00 FUN_141c8ab00 body=1180 status=ok
// SIG undefined FUN_141c8ab00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c8ab00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_3b8 [32];
  float local_398;
  undefined4 local_390;
  uint local_388;
  float local_380;
  float local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined *local_338;
  undefined8 uStack_330;
  int local_328 [2];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  uVar2 = (int)(*(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xb8) >> 0x1f & 3U)) >> 2;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar3 = (int)(*(int *)(param_1 + 0xbc) + (*(int *)(param_1 + 0xbc) >> 0x1f & 3U)) >> 2;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  plVar5 = (longlong *)FUN_141cf3cd0(param_1 + 0x30,param_2);
  lVar7 = *plVar5;
  if ((((DAT_1464aa6e0 == *(float *)(lVar7 + 0x24)) && (*(float *)(lVar7 + 0x28) == DAT_1464aa6e4))
      && (*(float *)(lVar7 + 0x2c) == DAT_1464aa6e8)) && (*(float *)(lVar7 + 0x30) == DAT_1464aa6ec)
     ) {
    local_338 = (undefined *)0x0;
    uStack_330 = 0;
    uStack_318 = 0xffffffff00000000;
    local_310 = CONCAT62(local_310._2_6_,0x102);
    local_320 = lVar7;
    FUN_140c63b80(local_2e8,1,&local_320,&local_338);
    lVar7 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar7,local_228,local_2e8,local_158);
    puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x54;
    if (*(undefined8 **)(lVar7 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x2a8);
      puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x54;
    }
    *(undefined8 **)(lVar7 + 0x30) = puVar6;
    *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
    **(undefined8 **)(lVar7 + 8) = puVar8;
    *(undefined8 **)(lVar7 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar8 + 2,local_2e8);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  }
  else {
    local_348 = 0;
    FUN_141a19150(param_2[8],lVar7,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_348);
    local_380 = 0.0;
    local_388 = local_388 & 0xffffff00;
    local_390 = 0;
    local_398 = (float)((uint)local_398 & 0xffffff00);
    DrawClearQuadMRT(param_2[8],1,1,&DAT_1464aa6e0);
  }
  local_338 = (undefined *)0x0;
  uStack_330._0_4_ = uVar2;
  uStack_330._4_4_ = uVar3;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_338,0,0x3f800000);
  FUN_141c934d0(param_1,param_2);
  lVar7 = param_2[0xc];
  iVar4 = (int)*(undefined8 *)(param_1 + 0xb8);
  uStack_330 = (ulonglong)uStack_330._4_4_ << 0x20;
  local_348._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
  local_348 = CONCAT44((int)(local_348._4_4_ + (local_348._4_4_ >> 0x1f & 3U)) >> 2,
                       (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
  local_338 = &DAT_146a564c0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_328,&local_338);
  puVar6 = (undefined8 *)0x0;
  if (local_328[0] != -1) {
    puVar6 = (undefined8 *)((longlong)local_328[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_350 = 1;
  local_358 = 1;
  local_398 = (float)uVar3;
  local_380 = (float)uVar2;
  puVar8 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  local_360 = *puVar8;
  local_368 = local_348;
  local_370 = local_348;
  local_388 = 0;
  local_390 = 0;
  local_378 = local_398;
  DrawRectangle(param_2[8]);
  lVar7 = param_2[8];
  local_348 = plVar5[1];
  plVar5 = (longlong *)*plVar5;
  local_320 = 0xffffffff00000000;
  uStack_318 = 0xffffffffffffffff;
  local_300 = 0xffffffff;
  uStack_2f8 = 0;
  local_310 = 0xffffffffffffffff;
  uStack_308 = 0xffffffffffffffff;
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
  *(undefined4 *)(puVar8 + 2) = (undefined4)local_320;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_320._4_4_;
  *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_318;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_318._4_4_;
  *(undefined4 *)(puVar8 + 4) = (undefined4)local_310;
  *(undefined4 *)((longlong)puVar8 + 0x24) = local_310._4_4_;
  *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_308;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_308._4_4_;
  *(undefined4 *)(puVar8 + 6) = (undefined4)local_300;
  *(undefined4 *)((longlong)puVar8 + 0x34) = local_300._4_4_;
  *(undefined4 *)(puVar8 + 7) = (undefined4)uStack_2f8;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_2f8._4_4_;
  puVar8[9] = local_348;
  puVar8[8] = plVar5;
  lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[8] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[8] + 0x20))();
  }
  lVar7 = (**(code **)(*(longlong *)puVar8[9] + 8))();
  if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar8[9] + 0x18))(), lVar7 == 0)) {
    (**(code **)(*(longlong *)puVar8[9] + 0x20))();
  }
  if ((*(int *)(*param_2 + 0x1a10) == 2) && (lVar7 = *(longlong *)(*param_2 + 0x18), lVar7 != 0)) {
    plVar5 = *(longlong **)(param_1 + 0x80);
    plVar1 = *(longlong **)(lVar7 + 0x12a8);
    *(longlong **)(lVar7 + 0x12a8) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
  }
  return;
}



// FUNCTION 141c8afa0 FUN_141c8afa0 body=9929 status=ok
// SIG undefined FUN_141c8afa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c8afa0(longlong *param_1,longlong *param_2)

{
  ulonglong **ppuVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  int iVar23;
  uint uVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  longlong **pplVar27;
  ulonglong uVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  float fVar33;
  undefined1 auStack_7d8 [32];
  longlong *local_7b8;
  ulonglong **local_7b0;
  ulonglong **local_7a8;
  longlong *local_7a0;
  undefined8 *local_798;
  undefined8 local_790;
  longlong *local_788;
  longlong local_780;
  undefined4 local_778;
  undefined1 local_770;
  undefined4 local_768;
  char local_758;
  char local_757;
  char local_756;
  undefined1 local_755;
  uint local_754;
  char local_750;
  undefined8 local_748;
  uint local_740;
  undefined1 local_73c;
  undefined1 local_73b;
  char local_73a;
  longlong *local_738;
  longlong *local_730;
  ulonglong local_728;
  undefined8 local_720;
  ulonglong *local_718;
  ulonglong local_710;
  ulonglong *local_708;
  undefined8 local_700;
  undefined4 uStack_6f8;
  int iStack_6f4;
  char local_6f0;
  char cStack_6ef;
  undefined6 uStack_6ee;
  longlong *local_6e8;
  undefined8 local_6e0;
  int local_6d8;
  int iStack_6d4;
  int iStack_6d0;
  uint uStack_6cc;
  longlong *local_6c8;
  longlong *local_6c0;
  longlong *local_6b8;
  int local_6b0;
  int local_6ac;
  longlong *local_6a8;
  ulonglong local_6a0;
  ulonglong local_698;
  undefined8 local_690;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined8 local_680;
  undefined4 local_678;
  undefined4 local_674;
  ulonglong *local_670;
  ulonglong *local_668;
  undefined8 local_660;
  undefined8 local_658;
  longlong *local_650;
  longlong *local_648;
  ulonglong local_640;
  longlong *local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  ulonglong local_5b0 [6];
  longlong local_580 [3];
  ulonglong *local_568;
  undefined8 uStack_560;
  longlong local_558 [2];
  undefined4 local_548;
  undefined4 local_544;
  undefined2 local_540;
  undefined *local_538;
  undefined4 local_530;
  undefined *local_528;
  undefined4 local_520;
  longlong local_518;
  longlong lStack_510;
  longlong *local_508;
  undefined8 uStack_500;
  longlong *local_4f8;
  undefined8 uStack_4f0;
  longlong *local_4e8;
  undefined8 uStack_4e0;
  longlong *local_4d8;
  undefined8 uStack_4d0;
  ulonglong *local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  longlong *plStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined4 local_470;
  ulonglong local_46c;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_414;
  undefined8 local_40c;
  undefined4 local_404;
  longlong local_3f8;
  longlong local_3f0;
  longlong *local_3e8;
  undefined1 local_3e0 [24];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined1 local_390 [8];
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  undefined1 local_340 [24];
  undefined1 local_328 [16];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  undefined1 local_308 [192];
  undefined4 local_248;
  undefined1 local_178 [256];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_7d8;
  local_650 = param_1 + 0x3e;
  bVar29 = false;
  local_6e0 = (ulonglong *)((ulonglong)local_6e0 & 0xffffffff00000000);
  local_628 = 0;
  local_730 = param_1;
  local_6a8 = param_2;
  TRefCountPtr<FRHIIndexBuffer>::operator=(local_650,&local_628);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_628);
  plVar12 = (longlong *)FSceneRenderTargets::Get(param_2[8]);
  local_738 = plVar12;
  lVar13 = FRenderingCompositePass::GetInputDesc(param_1,0);
  uVar4 = *(undefined8 *)(lVar13 + 0x14);
  local_6c8 = param_1 + 0x37;
  local_658 = uVar4;
  if ((int)*local_6c8 - 5U < 2) {
    cVar8 = FUN_141c49c20();
    uVar28 = 2;
    if (cVar8 == '\0') goto LAB_141c8b077;
  }
  else {
LAB_141c8b077:
    uVar28 = 1;
  }
  local_718 = (ulonglong *)0x0;
  local_668 = (ulonglong *)0x0;
  local_754 = (uint)uVar28;
  local_708 = (ulonglong *)FUN_141cf3cd0(param_1 + 8,param_2);
  local_670 = local_708;
  if ((uint)uVar28 == 2) {
    local_718 = (ulonglong *)FUN_141cf3cd0(param_1 + 0x14,param_2);
    local_668 = local_718;
  }
  bVar32 = (char)param_1[0x41] == '\0';
  if (bVar32) {
    local_398 = 0;
    local_388 = 0;
    puVar15 = &local_3a8;
    local_380 = 0;
    local_378 = 0;
    local_370 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_368 = 0;
    uStack_360 = 0;
  }
  else {
    uVar14 = FUN_141cf3cd0(param_1 + 0x20,param_2);
    puVar15 = (undefined8 *)FSceneRenderTargetItem::FSceneRenderTargetItem(local_358,uVar14);
  }
  FSceneRenderTargetItem::FSceneRenderTargetItem(&local_3f8,puVar15);
  if (bVar32) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_360);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_368);
    FUN_141a82840(&local_378);
    FUN_141a82770(local_390);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_3a0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_3a8);
  }
  else {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_310);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_318);
    FUN_141a82840(local_328);
    FUN_141a82770(local_340);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_348);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_350);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_358);
  }
  bVar32 = false;
  iVar18 = (int)param_1[0x37];
  if ((iVar18 == 1) || (iVar18 == 4)) {
    bVar29 = true;
  }
  if ((*(longlong *)param_1[0x3f] == 0) || (*(char *)(*param_2 + 0x11f4) != '\0')) {
    local_757 = '\x01';
  }
  else {
    local_757 = '\0';
  }
  if (((iVar18 != 1) || (*(char *)((longlong)param_1 + 10) != '\0')) ||
     (local_758 = '\x01', local_757 != '\0')) {
    local_758 = '\0';
  }
  if ((*(int *)((longlong)param_1 + 0x6c) == 10) || (local_755 = 1, !bVar29)) {
    local_755 = 0;
  }
  local_620 = *(undefined8 *)((longlong)param_1 + 0x1c4);
  uStack_618 = *(undefined8 *)((longlong)param_1 + 0x1cc);
  local_660 = 0;
  local_580[0] = 0;
  local_580[1] = 0;
  local_6d8 = (int)*(undefined8 *)((longlong)param_1 + 0x1d4);
  iStack_6d4 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x1d4) >> 0x20);
  iStack_6d0 = (int)*(undefined8 *)((longlong)param_1 + 0x1dc);
  uStack_6cc = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x1dc) >> 0x20);
  FScopedGPUStatEvent::Begin(local_580,param_2[8],&DAT_146a58140,&local_660);
  if (bVar29) {
    local_544 = 0xffffffff;
    local_558[1] = 0;
    local_548 = 0;
    local_540 = 0;
    local_678 = 0x10000;
    local_674 = 2;
    local_680 = *(undefined8 *)(plVar12[0xc] + 0x10);
    FUN_140c63b80(local_308,1,local_558 + 1,&local_680);
    lVar13 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar13,local_248,local_308,local_178);
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 0x54;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x2a8);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 0x54;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    lVar20 = 0;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar19 + 2,local_308);
    local_6e8 = (longlong *)*param_2;
    local_518 = local_6e8[0x354];
    lStack_510 = local_6e8[0x355];
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_518);
    lVar13 = param_2[0xc];
    local_538 = &DAT_146a51f90;
    local_530 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar13 + 0x38,&local_6b0,&local_538);
    if (local_6b0 != -1) {
      lVar20 = (longlong)local_6b0 * 0x20 + *(longlong *)(lVar13 + 0x38);
    }
    plVar12 = (longlong *)(lVar20 + 0x10);
    if (lVar20 == 0) {
      plVar12 = (longlong *)0x0;
    }
    local_520 = 0;
    local_528 = &DAT_146a57ff0;
    lVar20 = *plVar12;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar13 + 0x38,&local_6ac,&local_528);
    if (local_6ac == -1) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)local_6ac * 0x20 + *(longlong *)(lVar13 + 0x38);
    }
    plVar12 = (longlong *)0x0;
    plVar25 = (longlong *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      plVar25 = plVar12;
    }
    lVar13 = *plVar25;
    local_4b8 = 0;
    plStack_4b0 = (longlong *)0x0;
    local_4a8 = 0;
    uStack_4a0 = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_478 = 0;
    local_470 = 0;
    local_46c = 0x26;
    local_464 = 0;
    local_45c = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_448 = 0;
    local_440 = 0;
    local_438 = 0;
    local_430 = 0;
    local_428 = 0;
    local_420 = 0;
    local_418 = 0;
    local_414 = 0;
    local_40c = 0;
    local_404 = 0;
    FUN_14049afe0(param_2[8],&local_4b8);
    uStack_480 = FUN_140985530();
    local_488 = FUN_141abdd70();
    local_478 = FUN_141a15460();
    local_4b8 = DAT_1464c2720;
    local_46c = local_46c & 0xffffffff00000000;
    if (lVar20 == 0) {
      bVar32 = true;
      local_698 = 0;
    }
    else {
      lVar16 = *(longlong *)(lVar20 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      plVar12 = *(longlong **)(lVar16 + 0x38);
    }
    plStack_4b0 = plVar12;
    if (bVar32) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_698);
    }
    if (lVar13 == 0) {
      local_728 = 0;
      local_498 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_728);
    }
    else {
      lVar16 = *(longlong *)(lVar13 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      local_498 = *(undefined8 *)(lVar16 + 0x40);
    }
    FUN_141ed6ac0(param_2[8],&local_4b8,2,1);
    lVar16 = *(longlong *)(lVar20 + 0x48);
    uVar14 = *(undefined8 *)(*param_2 + 0x20);
    if (*(char *)(lVar16 + 0x28) == '\0') {
      FUN_1419f3850(lVar16);
    }
    FUN_141c07aa0(lVar20,param_2[8],*(undefined8 *)(lVar16 + 0x38),uVar14);
    lVar16 = *(longlong *)(lVar13 + 0x48);
    lVar5 = param_2[8];
    if (*(char *)(lVar16 + 0x28) == '\0') {
      FUN_1419f3850(lVar16);
    }
    uVar14 = *(undefined8 *)(lVar16 + 0x40);
    FUN_141aa9690(lVar13,lVar5,uVar14,*(undefined8 *)(*param_2 + 0x20));
    lVar16 = FSceneRenderTargets::Get(lVar5);
    local_710 = *(ulonglong *)(*(longlong *)(lVar16 + 0x70) + 0x10);
    local_748 = (longlong *)FUN_1404a0e20();
    if (*(short *)(lVar13 + 0xc2) != 0) {
      local_740 = (uint)*(ushort *)(lVar13 + 0xc0);
      puVar19 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 5;
      if (*(undefined8 **)(lVar5 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30);
        puVar19 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 5;
      }
      *(undefined8 **)(lVar5 + 0x30) = puVar15;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      **(undefined8 **)(lVar5 + 8) = puVar19;
      *(undefined8 **)(lVar5 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_143f59c80;
      *(uint *)(puVar19 + 3) = local_740;
      puVar19[4] = local_710;
      puVar19[2] = uVar14;
    }
    if (*(short *)(lVar13 + 0xc6) != 0) {
      local_740 = (uint)*(ushort *)(lVar13 + 0xc4);
      puVar19 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 5;
      if (*(undefined8 **)(lVar5 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30);
        puVar19 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 5;
      }
      *(undefined8 **)(lVar5 + 0x30) = puVar15;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      **(undefined8 **)(lVar5 + 8) = puVar19;
      *(undefined8 **)(lVar5 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_143f59c70;
      *(uint *)(puVar19 + 3) = local_740;
      puVar19[4] = local_748;
      puVar19[2] = uVar14;
    }
    local_770 = *(undefined1 *)((longlong)param_2 + 0x69);
    local_768 = 1;
    iVar18 = (int)local_6e8[0x355] - (int)local_6e8[0x354];
    local_788 = (longlong *)local_738[0x6f];
    iVar23 = *(int *)((longlong)local_6e8 + 0x1aac) - *(int *)((longlong)local_6e8 + 0x1aa4);
    local_778 = (undefined4)local_6e8[0x1ec];
    fVar33 = (float)iVar23;
    local_748 = (longlong *)CONCAT44(iVar23,iVar18);
    local_790 = local_748;
    local_798 = (undefined8 *)CONCAT44(local_798._4_4_,fVar33);
    local_7a0 = (longlong *)CONCAT44(local_7a0._4_4_,(float)iVar18);
    local_7a8 = (ulonglong **)
                CONCAT44(local_7a8._4_4_,(float)*(int *)((longlong)local_6e8 + 0x1aa4));
    local_7b0 = (ulonglong **)CONCAT44(local_7b0._4_4_,(float)(int)local_6e8[0x354]);
    local_7b8 = (longlong *)CONCAT44(local_7b8._4_4_,fVar33);
    local_780 = lVar20;
    FUN_141ce13a0(param_2[8]);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_308);
    uVar28 = (ulonglong)local_754;
  }
  iVar23 = iStack_6d0;
  iVar18 = local_6d8;
  if (*(char *)((longlong)param_1 + 10) == '\0') {
    iVar11 = *(int *)((longlong)param_1 + 0x1e4);
    local_720 = CONCAT44((int)((uStack_6cc - 1) + iVar11) / iVar11,
                         (iStack_6d0 + -1 + iVar11) / iVar11);
    local_748 = (longlong *)CONCAT44(iStack_6d4 / iVar11,local_6d8 / iVar11);
    local_638 = local_748;
    uStack_630 = local_720;
    TRenderingCompositePassBase<3,1>::WaitForInputPassComputeFences<FRHICommandListImmediate>
              (param_1);
    lVar13 = param_2[8];
    local_730 = (longlong *)local_708[1];
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    puVar19[2] = local_730;
    *puVar19 = &PTR_LAB_144e1b868;
    FUN_141c74a90(&local_720,param_2[0xc]);
    FUN_141c95020(local_720,param_2);
    lVar13 = param_2[8];
    uStack_6f8 = 0;
    iStack_6f4 = -1;
    local_6f0 = '\0';
    cStack_6ef = '\x01';
    local_690 = *(undefined8 *)(local_738[0xc] + 0x10);
    uStack_688 = 0x10000;
    uStack_684 = 0x21;
    local_5b0[3] = 0;
    local_5b0[4] = 0xffffffff00000000;
    local_5b0[5] = local_5b0[5] & 0xffffffffffff0000;
    local_700 = *local_708;
    local_5b0[2] = CONCAT62(uStack_6ee,0x100);
    local_5b0[0] = local_700;
    local_5b0[1] = 0xffffffff00000000;
    local_730 = (longlong *)local_708[1];
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x20);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    puVar19[2] = local_730;
    *puVar19 = &PTR_LAB_144e1b868;
    if (local_754 == 2) {
      lVar13 = param_2[8];
      uStack_6f8 = 0;
      iStack_6f4 = -1;
      local_700 = *local_718;
      local_6f0 = '\0';
      cStack_6ef = '\x01';
      local_5b0[3] = local_700;
      local_5b0[4] = 0xffffffff00000000;
      local_5b0[5] = CONCAT62(uStack_6ee,0x100);
      local_730 = (longlong *)local_718[1];
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x20);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 3;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar19;
      *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_144e1b868;
      puVar19[2] = local_730;
    }
    lVar13 = param_2[8];
    *(uint *)(lVar13 + 0x98) = local_754;
    uVar28 = 0;
    do {
      uVar24 = (int)uVar28 + 1;
      uVar17 = local_5b0[uVar28 * 3 + 1];
      puVar22 = (ulonglong *)(lVar13 + 0xa0 + uVar28 * 0x18);
      *puVar22 = local_5b0[uVar28 * 3];
      puVar22[1] = uVar17;
      *(ulonglong *)(lVar13 + 0xb0 + uVar28 * 0x18) = local_5b0[uVar28 * 3 + 2];
      uVar28 = (ulonglong)uVar24;
    } while (uVar24 < *(uint *)(lVar13 + 0x98));
    *(undefined8 *)(lVar13 + 0x160) = local_690;
    *(ulonglong *)(lVar13 + 0x168) = CONCAT44(uStack_684,uStack_688);
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 0x26;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x138);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 0x26;
    }
    uVar14 = uStack_630;
    plVar12 = local_638;
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    iVar11 = 0;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f59440;
    *(uint *)(puVar19 + 2) = local_754;
    puVar19[3] = 0;
    *(undefined4 *)(puVar19 + 4) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar19 + 5) = 0;
    puVar19[6] = 0;
    *(undefined4 *)(puVar19 + 7) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar19 + 8) = 0;
    puVar19[9] = 0;
    *(undefined4 *)(puVar19 + 10) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar19 + 0xb) = 0;
    puVar19[0xc] = 0;
    *(undefined4 *)(puVar19 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar19 + 0xe) = 0;
    puVar19[0xf] = 0;
    *(undefined4 *)(puVar19 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar19 + 0x11) = 0;
    puVar19[0x12] = 0;
    *(undefined4 *)(puVar19 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar19 + 0x14) = 0;
    puVar19[0x15] = 0;
    *(undefined4 *)(puVar19 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar19 + 0x17) = 0;
    puVar19[0x18] = 0;
    *(undefined4 *)(puVar19 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar19 + 0x1a) = 0;
    puVar19[0x1b] = 0;
    *(undefined4 *)(puVar19 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
    uVar28 = 0;
    if (*(int *)(puVar19 + 2) != 0) {
      do {
        uVar24 = (int)uVar28 + 1;
        uVar17 = local_5b0[uVar28 * 3 + 1];
        puVar19[uVar28 * 3 + 3] = local_5b0[uVar28 * 3];
        (puVar19 + uVar28 * 3 + 3)[1] = uVar17;
        puVar19[uVar28 * 3 + 5] = local_5b0[uVar28 * 3 + 2];
        uVar28 = (ulonglong)uVar24;
      } while (uVar24 < *(uint *)(puVar19 + 2));
      iVar11 = *(int *)(puVar19 + 0x1d);
    }
    uVar28 = 0;
    if (iVar11 != 0) {
      do {
        uVar24 = (int)uVar28 + 1;
        puVar19[uVar28 + 0x1e] = *(undefined8 *)(uVar28 * 8);
        uVar28 = (ulonglong)uVar24;
      } while (uVar24 < *(uint *)(puVar19 + 0x1d));
    }
    puVar19[0x1b] = local_690;
    puVar19[0x1c] = CONCAT44(uStack_684,uStack_688);
    local_508 = local_638;
    uStack_500 = uStack_630;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_508);
    ppuVar1 = (ulonglong **)(param_1 + 0x37);
    local_740 = *(uint *)ppuVar1;
    local_73c = *(undefined1 *)((longlong)param_1 + 0x1bc);
    local_73a = local_757;
    local_73b = 0;
    if (local_758 == '\0') {
      local_4d8 = plVar12;
      uStack_4d0 = uVar14;
      local_7a0 = (longlong *)FUN_1409853f0();
      pplVar27 = &local_4d8;
      local_7a8 = (ulonglong **)CONCAT71(local_7a8._1_7_,local_755);
    }
    else {
      local_7a0 = (longlong *)FUN_141c7d4b0();
      uVar6 = local_755;
      local_7b8 = (longlong *)param_1[0x3f];
      local_7a8._0_1_ = local_755;
      local_4f8 = plVar12;
      uStack_4f0 = uVar14;
      local_7b0 = ppuVar1;
      FUN_141c7c1d0(param_2,&local_740,uVar4,&local_4f8);
      local_7a0 = (longlong *)FUN_141c7d5f0();
      pplVar27 = &local_4e8;
      local_7a8 = (ulonglong **)CONCAT71(local_7a8._1_7_,uVar6);
      local_73b = 1;
      local_4e8 = plVar12;
      uStack_4e0 = uVar14;
    }
    local_7b8 = (longlong *)param_1[0x3f];
    local_7b0 = ppuVar1;
    FUN_141c7c1d0(param_2,&local_740,uVar4,pplVar27);
    lVar13 = param_2[8];
    local_610 = 0xffffffff00000000;
    uStack_608 = 0xffffffffffffffff;
    local_5f0 = 0xffffffff;
    uStack_5e8 = 0;
    local_600 = 0xffffffffffffffff;
    uStack_5f8 = 0xffffffffffffffff;
    local_6c0 = (longlong *)local_708[1];
    local_730 = (longlong *)*local_708;
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 10;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 10;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar19 + 2) = (undefined4)local_610;
    *(undefined4 *)((longlong)puVar19 + 0x14) = local_610._4_4_;
    *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_608;
    *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_608._4_4_;
    *(undefined4 *)(puVar19 + 4) = (undefined4)local_600;
    *(undefined4 *)((longlong)puVar19 + 0x24) = local_600._4_4_;
    *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_5f8;
    *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_5f8._4_4_;
    *(undefined4 *)(puVar19 + 6) = (undefined4)local_5f0;
    *(undefined4 *)((longlong)puVar19 + 0x34) = local_5f0._4_4_;
    *(undefined4 *)(puVar19 + 7) = (undefined4)uStack_5e8;
    *(undefined4 *)((longlong)puVar19 + 0x3c) = uStack_5e8._4_4_;
    puVar19[9] = local_6c0;
    puVar19[8] = local_730;
    lVar13 = (**(code **)(*local_730 + 8))();
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[8] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar19[8] + 0x20))();
    }
    lVar13 = (**(code **)(*(longlong *)puVar19[9] + 8))();
    if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[9] + 0x18))(), lVar13 == 0)) {
      (**(code **)(*(longlong *)puVar19[9] + 0x20))();
    }
    if (local_754 == 2) {
      local_5e0 = 0xffffffff00000000;
      uStack_5d8 = 0xffffffffffffffff;
      local_5c0 = 0xffffffff;
      uStack_5b8 = 0;
      local_5d0 = 0xffffffffffffffff;
      uStack_5c8 = 0xffffffffffffffff;
      local_6c8 = (longlong *)local_718[1];
      local_6c0 = (longlong *)*local_718;
      local_730 = (longlong *)param_2[8];
      puVar22 = (ulonglong *)((longlong)local_730 + 0x30);
      puVar19 = (undefined8 *)(*(longlong *)((longlong)local_730 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 10;
      if (*(undefined8 **)((longlong)local_730 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(puVar22,0x58);
        puVar19 = (undefined8 *)(*puVar22 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar19 + 10;
      }
      *puVar22 = (ulonglong)puVar15;
      *(int *)((longlong)local_730 + 0x14) = *(int *)((longlong)local_730 + 0x14) + 1;
      **(undefined8 **)((longlong)local_730 + 8) = puVar19;
      *(undefined8 **)((longlong)local_730 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar19 + 2) = (undefined4)local_5e0;
      *(undefined4 *)((longlong)puVar19 + 0x14) = local_5e0._4_4_;
      *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_5d8;
      *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_5d8._4_4_;
      *(undefined4 *)(puVar19 + 4) = (undefined4)local_5d0;
      *(undefined4 *)((longlong)puVar19 + 0x24) = local_5d0._4_4_;
      *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_5c8;
      *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_5c8._4_4_;
      *(undefined4 *)(puVar19 + 6) = (undefined4)local_5c0;
      *(undefined4 *)((longlong)puVar19 + 0x34) = local_5c0._4_4_;
      *(undefined4 *)(puVar19 + 7) = (undefined4)uStack_5b8;
      *(undefined4 *)((longlong)puVar19 + 0x3c) = uStack_5b8._4_4_;
      puVar19[9] = local_6c8;
      puVar19[8] = local_6c0;
      lVar13 = (**(code **)(*local_6c0 + 8))(local_6c0);
      if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[8] + 0x18))(), lVar13 == 0))
      {
        (**(code **)(*(longlong *)puVar19[8] + 0x20))();
      }
      lVar13 = (**(code **)(*(longlong *)puVar19[9] + 8))();
      if ((lVar13 == 0) && (lVar13 = (**(code **)(*(longlong *)puVar19[9] + 0x18))(), lVar13 == 0))
      {
        (**(code **)(*(longlong *)puVar19[9] + 0x20))();
      }
      lVar13 = param_2[8];
      local_730 = (longlong *)local_718[1];
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 3;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar19;
      *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      puVar19[2] = local_730;
      *puVar19 = &PTR_LAB_144e1b878;
    }
    if ((int)param_1[0x37] - 5U < 2) {
      lVar13 = param_2[8];
      local_6a0 = local_708[2];
      puVar26 = (ulonglong *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar22 = puVar26 + 1;
      if (*(ulonglong **)(lVar13 + 0x38) < puVar22) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar26 = (ulonglong *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar22 = puVar26 + 1;
      }
      *(ulonglong **)(lVar13 + 0x30) = puVar22;
      *puVar26 = local_6a0;
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 6;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 6;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar19;
      *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar19 + 2) = 1;
      puVar19[3] = puVar26;
      puVar19[4] = 0;
      puVar19[5] = 0;
      if (local_754 == 2) {
        lVar13 = param_2[8];
        local_718 = (ulonglong *)local_718[2];
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 1;
        if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
          puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar19 + 1;
        }
        *(undefined8 **)(lVar13 + 0x30) = puVar15;
        *puVar19 = local_718;
        puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 6;
        if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
          puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar21 + 6;
        }
        *(undefined8 **)(lVar13 + 0x30) = puVar15;
        *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
        **(undefined8 **)(lVar13 + 8) = puVar21;
        *(undefined8 **)(lVar13 + 8) = puVar21 + 1;
        *puVar21 = &PTR_LAB_144d91e60;
        puVar21[1] = 0;
        *(undefined4 *)(puVar21 + 2) = 1;
        puVar21[3] = puVar19;
        puVar21[4] = 0;
        puVar21[5] = 0;
      }
    }
    lVar13 = param_2[8];
    local_6a0 = local_708[1];
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    puVar19[2] = local_6a0;
    *puVar19 = &PTR_LAB_144e1b878;
    uVar24 = uStack_6cc;
    iVar11 = iStack_6d4;
    goto LAB_141c8d4a4;
  }
  iVar23 = (int)param_1[0x37];
  iStack_6f4 = 0;
  local_757 = *(char *)((longlong)param_1 + 0x1bc);
  local_6f0 = '\0';
  local_6b8 = (longlong *)CONCAT44(local_6b8._4_4_,iVar23);
  local_758 = *(longlong *)(*param_2 + 0x2e50) == 0;
  local_700 = CONCAT44(CONCAT31(local_700._5_3_,local_757),iVar23);
  uStack_6f8 = CONCAT31(uStack_6f8._1_3_,local_758);
  if (((local_3f8 == 0) && (local_3f0 == 0)) && (local_3e8 == (longlong *)0x0)) {
    local_750 = '\0';
  }
  else {
    local_750 = '\x01';
  }
  plVar12 = (longlong *)CONCAT44(uStack_6cc,iStack_6d0);
  local_720 = CONCAT44(iStack_6d0,iStack_6d4);
  local_740 = uStack_6cc;
  if ((iVar23 - 4U & 0xfffffffd) == 0) {
    if ((*(int *)(DAT_146a57d48 + 4) == 0) || (iVar23 != 1)) {
      local_6f0 = '\0';
    }
    else {
      local_6f0 = '\x01';
    }
    if ((int)uStack_618 - (int)local_620 <= iStack_6d0 - local_6d8) {
      if (uStack_618._4_4_ - local_620._4_4_ <= (int)(uStack_6cc - iStack_6d4)) {
        if ((((int)uStack_618 - (int)local_620) * 100 < (iStack_6d0 - local_6d8) * 0x47) &&
           ((uStack_618._4_4_ - local_620._4_4_) * 100 < (int)((uStack_6cc - iStack_6d4) * 0x47))) {
          iStack_6f4 = 1;
        }
        goto LAB_141c8b96b;
      }
    }
    iStack_6f4 = 2;
  }
LAB_141c8b96b:
  iVar23 = *(int *)((longlong)param_1 + 0x1e4);
  local_748 = (longlong *)
              CONCAT44((int)((uStack_6cc - 1) + iVar23) / iVar23,(iStack_6d0 + -1 + iVar23) / iVar23
                      );
  local_6e0 = (ulonglong *)CONCAT44(iStack_6d4 / iVar23,local_6d8 / iVar23);
  local_568 = local_6e0;
  uStack_560 = local_748;
  local_756 = local_6f0;
  local_738 = plVar12;
  cStack_6ef = local_750;
  FUN_141a19150(param_2[8],0,0,0);
  local_4c8 = local_568;
  uStack_4c0 = uStack_560;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_4c8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a61078) && (_Init_thread_header(&DAT_146a61078), DAT_146a61078 == -1))
  {
    FName::FName(&DAT_146a61070,L"AsyncTemporalAAEndFence",1);
    _Init_thread_footer(&DAT_146a61078);
  }
  (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_710);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x3e,&local_710);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_710);
  local_748 = *(longlong **)(DAT_146ac3d68 + 0x30);
  if (local_748 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_748 + 1) = (int)local_748[1] + 1;
    UNLOCK();
    plVar12 = (longlong *)CONCAT44(uStack_6cc,iStack_6d0);
    local_740 = uStack_6cc;
    local_720 = CONCAT44(iStack_6d0,iStack_6d4);
    local_756 = local_6f0;
    local_758 = (char)uStack_6f8;
    local_757 = local_700._4_1_;
    local_6b8 = (longlong *)CONCAT44(local_6b8._4_4_,(undefined4)local_700);
    local_718 = local_668;
    local_708 = local_670;
    local_738 = plVar12;
    iVar18 = local_6d8;
  }
  puVar26 = local_708;
  puVar22 = local_718;
  iVar23 = (int)plVar12;
  local_6e8 = local_748;
  cVar8 = FUN_141d6a650(*param_2);
  if (cVar8 != '\0') {
    lVar13 = FViewInfo::GetEyeAdaptation(*param_2,param_2[8]);
    TRefCountPtr<FRHITexture>::operator=(&local_748,*(undefined8 *)(lVar13 + 8));
    local_6e8 = local_748;
  }
  local_648 = (longlong *)puVar26[2];
  if ((int)uVar28 == 2) {
    local_640 = puVar22[2];
  }
  if (((*(char *)((longlong)param_1 + 10) == '\0') || (*(char *)((longlong)param_1 + 0xb) == '\0'))
     || (DAT_146ab62f0 == '\0')) {
    local_698 = uVar28;
    TRenderingCompositePassBase<3,1>::WaitForInputPassComputeFences<FRHICommandListImmediate>
              (param_1);
    local_728 = puVar26[1];
    lVar13 = param_2[8];
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_144e1b868;
    puVar19[2] = local_728;
    if (local_754 == 2) {
      lVar13 = param_2[8];
      local_728 = local_718[1];
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30,0x20);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 3;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar19;
      *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_144e1b868;
      puVar19[2] = local_728;
    }
    lVar13 = param_2[8];
    puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar17 = (ulonglong)(local_754 * 8) + (longlong)puVar15;
    if (*(ulonglong *)(lVar13 + 0x38) < uVar17) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,local_754 * 8 + 8);
      puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar17 = (ulonglong)(local_754 * 8) + (longlong)puVar15;
    }
    *(ulonglong *)(lVar13 + 0x30) = uVar17;
    puVar19 = puVar15;
    do {
      *puVar19 = *(undefined8 *)(((longlong)&local_648 - (longlong)puVar15) + (longlong)puVar19);
      puVar19 = puVar19 + 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar19 = puVar21 + 6;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar19) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
      puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar21 + 6;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar19;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar21;
    *(undefined8 **)(lVar13 + 8) = puVar21 + 1;
    puVar21[1] = 0;
    *(uint *)(puVar21 + 2) = local_754;
    *puVar21 = &PTR_LAB_144d91e60;
    puVar21[3] = puVar15;
    puVar21[4] = 2;
    puVar21[5] = 0;
    local_738 = local_3e8;
    if (((local_3f8 != 0) || (local_3f0 != 0)) || (local_3e8 != (longlong *)0x0)) {
      lVar13 = param_2[8];
      local_6b8 = local_3e8;
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 1;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 1;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *puVar19 = local_6b8;
      puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar21 + 6;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 6;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar21;
      *(undefined8 **)(lVar13 + 8) = puVar21 + 1;
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar21 + 2) = 1;
      puVar21[3] = puVar19;
      puVar21[4] = 2;
      puVar21[5] = 0;
    }
    local_728 = param_1[0x3f];
    uVar28 = param_2[8];
    local_738 = local_3e8;
    local_710 = uVar28;
    FUN_141c74b90(local_558,param_2[0xc],&local_700);
    lVar13 = *(longlong *)(local_558[0] + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar4 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar4);
    puVar19 = (undefined8 *)(*(longlong *)(uVar28 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
    if (*(undefined8 **)(uVar28 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(uVar28 + 0x30);
      puVar19 = (undefined8 *)(*(longlong *)(uVar28 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
    }
    *(undefined8 **)(uVar28 + 0x30) = puVar15;
    *(int *)(uVar28 + 0x14) = *(int *)(uVar28 + 0x14) + 1;
    **(undefined8 **)(uVar28 + 8) = puVar19;
    *(undefined8 **)(uVar28 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_144d91e50;
    local_788 = local_6e8;
    local_790 = CONCAT71(local_790._1_7_,local_755);
    local_798 = &local_658;
    puVar19[2] = uVar4;
    local_7a0 = local_738;
    local_7a8 = &local_670;
    local_7b0 = &local_568;
    iVar11 = *(int *)((longlong)local_6c8 + 0x24);
    lVar13 = local_6c8[5];
    iVar2 = *(int *)((longlong)local_6c8 + 0x1c);
    lVar20 = local_6c8[4];
    iVar3 = *(int *)((longlong)local_6c8 + 0x2c);
    local_7b8 = local_6c8;
    FUN_141c67890(local_558[0],local_710,param_2,local_728);
    local_7b8 = (longlong *)CONCAT44(local_7b8._4_4_,1);
    iVar10 = (iVar3 + -1 + ((int)lVar13 - (int)lVar20)) / iVar3 + 7;
    iVar11 = ((iVar11 - iVar2) + -1 + iVar3) / iVar3 + 7;
    DispatchComputeShader
              (local_710,local_558[0],(int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3,
               (int)((iVar10 >> 0x1f & 7U) + iVar10) >> 3);
    FUN_141c742c0(local_558[0],local_710);
    lVar13 = param_2[8];
    local_6c8 = (longlong *)*local_650;
    puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar24 = local_754 * 8;
    uVar28 = (ulonglong)uVar24 + (longlong)puVar15;
    if (*(ulonglong *)(lVar13 + 0x38) < uVar28) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30,uVar24 + 8);
      puVar15 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar28 = (ulonglong)uVar24 + (longlong)puVar15;
    }
    *(ulonglong *)(lVar13 + 0x30) = uVar28;
    puVar19 = puVar15;
    uVar28 = local_698;
    do {
      *puVar19 = *(undefined8 *)(((longlong)&local_648 - (longlong)puVar15) + (longlong)puVar19);
      puVar19 = puVar19 + 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar19 = puVar21 + 6;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar19) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
      puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar21 + 6;
    }
    param_2 = local_6a8;
    *(undefined8 **)(lVar13 + 0x30) = puVar19;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar21;
    *(undefined8 **)(lVar13 + 8) = puVar21 + 1;
    puVar21[1] = 0;
    *(uint *)(puVar21 + 2) = local_754;
    puVar21[5] = local_6c8;
    *puVar21 = &PTR_LAB_144d91e60;
    puVar21[3] = puVar15;
    *(undefined4 *)(puVar21 + 4) = 0;
    *(undefined4 *)((longlong)puVar21 + 0x24) = 1;
    if (((local_3f8 != 0) || (local_3f0 != 0)) || (local_3e8 != (longlong *)0x0)) {
      lVar13 = local_6a8[8];
      local_6c0 = local_3e8;
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 1;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 1;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *puVar19 = local_6c0;
      puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar21 + 6;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar21 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 6;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar21;
      *(undefined8 **)(lVar13 + 8) = puVar21 + 1;
      puVar21[1] = 0;
      *(undefined4 *)(puVar21 + 4) = 0;
      puVar21[5] = 0;
      *puVar21 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar21 + 2) = 1;
      puVar21[3] = puVar19;
      *(undefined4 *)((longlong)puVar21 + 0x24) = 1;
    }
    lVar13 = param_2[8];
    uVar28 = local_708[1];
    puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
    if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar15;
    *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
    **(undefined8 **)(lVar13 + 8) = puVar19;
    *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_144e1b878;
    puVar19[2] = uVar28;
    if (local_754 == 2) {
      lVar13 = param_2[8];
      uVar28 = local_718[1];
      puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
      if (*(undefined8 **)(lVar13 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(lVar13 + 0x30);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 3;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar15;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar19;
      *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_144e1b878;
      puVar19[2] = uVar28;
    }
  }
  else {
    plVar25 = param_1 + 2;
    local_710 = uVar28;
    if (plVar25 != param_1 + 8) {
      do {
        plVar12 = (longlong *)*plVar25;
        if ((((plVar12 == (longlong *)0x0) || (*(char *)((longlong)plVar12 + 10) == '\0')) ||
            (*(char *)((longlong)plVar12 + 0xb) == '\0')) || (DAT_146ab62f0 == '\0')) {
          cVar8 = '\0';
        }
        else {
          cVar8 = '\x01';
        }
        cVar9 = FRenderingCompositePass::IsAsyncComputePass(param_1);
        if (((cVar9 != cVar8) && (plVar12 != (longlong *)0x0)) &&
           (lVar13 = (**(code **)(*plVar12 + 0x80))(plVar12), lVar13 != 0)) {
          puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar19 + 3;
          if (DAT_146ab7068 < puVar19 + 3) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
            puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
            puVar15 = puVar19 + 3;
          }
          DAT_146ab7060 = puVar15;
          _DAT_146ab7044 = _DAT_146ab7044 + 1;
          *DAT_146ab7038 = puVar19;
          DAT_146ab7038 = puVar19 + 1;
          *DAT_146ab7038 = 0;
          *puVar19 = &PTR_LAB_144dc9d10;
          puVar19[2] = lVar13;
        }
        plVar25 = plVar25 + 2;
        plVar12 = local_738;
        param_2 = local_6a8;
      } while (plVar25 != param_1 + 8);
    }
    uVar28 = local_710;
    iVar23 = (int)plVar12;
    puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    uVar24 = local_754 * 8;
    puVar15 = (undefined8 *)((ulonglong)uVar24 + (longlong)puVar19);
    if (DAT_146ab7068 < puVar15) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,uVar24 + 8);
      puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = (undefined8 *)((ulonglong)uVar24 + (longlong)puVar19);
    }
    DAT_146ab7060 = puVar15;
    if (uVar28 != 0) {
      puVar15 = puVar19;
      do {
        *puVar15 = *(undefined8 *)(((longlong)&local_648 - (longlong)puVar19) + (longlong)puVar15);
        puVar15 = puVar15 + 1;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar21 + 6;
    if (DAT_146ab7068 < puVar15) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
      puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar21 + 6;
    }
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    DAT_146ab7060 = puVar15;
    *DAT_146ab7038 = puVar21;
    DAT_146ab7038 = puVar21 + 1;
    *DAT_146ab7038 = 0;
    *puVar21 = &PTR_LAB_144dc9d00;
    *(uint *)(puVar21 + 2) = local_754;
    puVar21[3] = puVar19;
    puVar21[4] = 2;
    puVar21[5] = 0;
    if (((local_3f8 != 0) || (local_3f0 != 0)) || (local_3e8 != (longlong *)0x0)) {
      local_738 = local_3e8;
      puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 1;
      if (DAT_146ab7068 < puVar15) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 1;
      }
      DAT_146ab7060 = puVar15;
      *puVar19 = local_738;
      puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar21 + 6;
      if (DAT_146ab7068 < puVar15) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar15;
      *DAT_146ab7038 = puVar21;
      DAT_146ab7038 = puVar21 + 1;
      *DAT_146ab7038 = 0;
      *puVar21 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar21 + 2) = 1;
      puVar21[3] = puVar19;
      puVar21[4] = 2;
      puVar21[5] = 0;
    }
    bVar29 = local_756 != '\0';
    local_756 = -local_756;
    local_728 = param_1[0x3f];
    lVar13 = param_2[0xc];
    local_638 = (longlong *)&DAT_146a57ea0;
    bVar32 = local_750 != '\0';
    local_750 = -local_750;
    bVar30 = local_758 != '\0';
    local_758 = -local_758;
    bVar31 = local_757 != '\0';
    local_757 = -local_757;
    uStack_630 = CONCAT44(uStack_630._4_4_,
                          (-(uint)bVar31 & 7) +
                          (-(uint)bVar30 & 0xe) + (int)local_6b8 +
                          ((-(uint)bVar32 & 6) + (-(uint)bVar29 & 3) + iStack_6f4) * 0x1c);
    local_738 = local_3e8;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar13 + 0x38,&local_6e0,&local_638);
    plVar12 = (longlong *)0x0;
    if ((int)local_6e0 != -1) {
      plVar12 = (longlong *)((longlong)(int)local_6e0 * 0x20 + *(longlong *)(lVar13 + 0x38));
    }
    plVar25 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar25 = (longlong *)0x0;
    }
    lVar13 = *plVar25;
    lVar20 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar20 + 0x28) == '\0') {
      FUN_1419f3850(lVar20);
    }
    uVar4 = *(undefined8 *)(lVar20 + 0x60);
    FRHIComputeShader::UpdateStats(uVar4);
    puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar19 + 3;
    if (DAT_146ab7068 < puVar15) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
      puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 3;
    }
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    DAT_146ab7060 = puVar15;
    *DAT_146ab7038 = puVar19;
    DAT_146ab7038 = puVar19 + 1;
    *DAT_146ab7038 = 0;
    *puVar19 = &PTR_LAB_144dc9ce0;
    local_788 = local_6e8;
    local_790 = CONCAT71(local_790._1_7_,local_755);
    local_798 = &local_658;
    puVar19[2] = uVar4;
    local_7b8 = param_1 + 0x37;
    iVar11 = *(int *)((longlong)param_1 + 0x1dc);
    lVar20 = param_1[0x3c];
    iVar2 = *(int *)((longlong)param_1 + 0x1d4);
    lVar16 = param_1[0x3b];
    iVar3 = *(int *)((longlong)param_1 + 0x1e4);
    local_7a0 = local_738;
    local_7a8 = &local_670;
    local_7b0 = &local_708;
    FUN_141c65bf0(lVar13,&DAT_146ab7030,param_2,local_728);
    local_7b8 = (longlong *)CONCAT44(local_7b8._4_4_,1);
    iVar10 = (iVar3 + -1 + ((int)lVar20 - (int)lVar16)) / iVar3 + 7;
    iVar11 = (iVar3 + -1 + (iVar11 - iVar2)) / iVar3 + 7;
    DispatchComputeShader
              (&DAT_146ab7030,lVar13,(int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3,
               (int)((iVar10 >> 0x1f & 7U) + iVar10) >> 3);
    FUN_141c74110(lVar13,&DAT_146ab7030);
    uVar7 = local_754;
    puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    lVar13 = *local_650;
    uVar24 = local_754 * 8;
    puVar15 = (undefined8 *)((longlong)puVar19 + (ulonglong)uVar24);
    if (DAT_146ab7068 < puVar15) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,uVar24 + 8);
      puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = (undefined8 *)((longlong)puVar19 + (ulonglong)uVar24);
    }
    puVar21 = puVar19;
    uVar28 = local_710;
    DAT_146ab7060 = puVar15;
    do {
      *puVar21 = *(undefined8 *)(((longlong)&local_648 - (longlong)puVar19) + (longlong)puVar21);
      puVar21 = puVar21 + 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar15 = puVar21 + 6;
    if (DAT_146ab7068 < puVar15) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
      puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar21 + 6;
    }
    param_2 = local_6a8;
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    DAT_146ab7060 = puVar15;
    *DAT_146ab7038 = puVar21;
    DAT_146ab7038 = puVar21 + 1;
    *DAT_146ab7038 = 0;
    *puVar21 = &PTR_LAB_144dc9d00;
    *(uint *)(puVar21 + 2) = uVar7;
    puVar21[3] = puVar19;
    *(undefined4 *)(puVar21 + 4) = 0;
    *(undefined4 *)((longlong)puVar21 + 0x24) = 1;
    puVar21[5] = lVar13;
    if (((local_3f8 != 0) || (local_3f0 != 0)) || (local_3e8 != (longlong *)0x0)) {
      local_6e8 = local_3e8;
      puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar19 + 1;
      if (DAT_146ab7068 < puVar15) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x10);
        puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 1;
      }
      DAT_146ab7060 = puVar15;
      *puVar19 = local_6e8;
      puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar21 + 6;
      if (DAT_146ab7068 < puVar15) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar21 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar15;
      *DAT_146ab7038 = puVar21;
      DAT_146ab7038 = puVar21 + 1;
      *DAT_146ab7038 = 0;
      *puVar21 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar21 + 2) = 1;
      puVar21[3] = puVar19;
      *(undefined4 *)(puVar21 + 4) = 0;
      *(undefined4 *)((longlong)puVar21 + 0x24) = 1;
      puVar21[5] = 0;
    }
    FUN_141ec93f0(&DAT_146ab7030);
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_748);
  param_1 = local_730;
  uVar24 = local_740;
  iVar11 = (int)local_720;
LAB_141c8d4a4:
  FTemporalAAHistory::SafeRelease(param_1[0x40]);
  TRefCountPtr<IPooledRenderTarget>::operator=(param_1[0x40],param_1[0x12]);
  lVar13 = param_1[0x40];
  *(int *)(lVar13 + 0x18) = iVar18;
  *(int *)(lVar13 + 0x1c) = iVar11;
  *(int *)(lVar13 + 0x20) = iVar23;
  *(uint *)(lVar13 + 0x24) = uVar24;
  lVar20 = FSceneRenderTargets::Get(param_2[8]);
  lVar13 = param_1[0x40];
  uVar4 = *(undefined8 *)(lVar20 + 0x378);
  *(int *)(lVar13 + 0x10) = (int)uVar4;
  *(int *)(lVar13 + 0x14) = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(param_1[0x40] + 0x28) = *(undefined4 *)(*param_2 + 0x2f28);
  if (0 < (int)param_1[0x3d]) {
    lVar13 = param_1[0x40];
    *(int *)(lVar13 + 0x10) = (int)param_1[0x3d];
    *(undefined4 *)(lVar13 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x1ec);
  }
  if ((int)param_1[0x37] == 4) {
    *(int *)(param_2 + 1) = iVar18;
    *(int *)((longlong)param_2 + 0xc) = iVar11;
    *(int *)(param_2 + 2) = iVar23;
    *(uint *)((longlong)param_2 + 0x14) = uVar24;
    *(int *)(param_2 + 3) = (int)param_1[0x3d];
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1ec);
  }
  if (local_580[0] != 0) {
    FScopedGPUStatEvent::End(local_580);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_3b0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_3b8);
  FUN_141a82840(local_3c8);
  FUN_141a82770(local_3e0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3e8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_3f0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_3f8);
  return;
}



// FUNCTION 141c8d670 FUN_141c8d670 body=5461 status=ok
// SIG undefined FUN_141c8d670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c8d670(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined3 uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined1 uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  int iVar33;
  undefined4 uVar34;
  undefined1 auStack_6a8 [32];
  undefined4 *local_688;
  ulonglong local_680;
  undefined8 *local_678;
  float local_670;
  float local_668;
  undefined8 local_660;
  undefined8 local_658;
  longlong local_650;
  undefined4 local_648;
  undefined1 local_640;
  undefined4 local_638;
  bool local_628;
  char cStack_627;
  bool bStack_626;
  bool bStack_625;
  bool bStack_624;
  bool bStack_623;
  bool bStack_622;
  undefined1 uStack_621;
  uint local_618 [2];
  undefined8 local_610;
  undefined8 local_608;
  int local_5f8;
  uint uStack_5f4;
  int iStack_5f0;
  int iStack_5ec;
  undefined8 local_5e8;
  undefined8 *local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  uint uStack_5c8;
  uint uStack_5c4;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  int local_5a8 [2];
  undefined8 local_5a0;
  longlong local_598;
  undefined8 local_590;
  longlong local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined1 local_560 [8];
  int local_558;
  int local_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  uint uStack_4f0;
  uint uStack_4ec;
  undefined8 local_4e8;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  char local_4b0;
  undefined1 local_4af;
  longlong local_4a8;
  undefined *local_4a0;
  int local_498;
  undefined *local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  uint uStack_478;
  uint uStack_474;
  undefined8 local_470;
  undefined1 local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  uint uStack_458;
  uint uStack_454;
  undefined8 local_450;
  undefined1 local_448;
  undefined8 local_438;
  undefined8 uStack_430;
  int local_428;
  uint uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  ulonglong local_3cc;
  undefined8 local_3c4;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined8 local_36c;
  undefined4 local_364;
  undefined1 local_358 [192];
  undefined4 local_298;
  undefined1 local_1c8 [256];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  iVar20 = 0;
  local_610 = local_610 & 0xffffffff00000000;
  local_628 = false;
  cStack_627 = 0;
  bStack_626 = false;
  bStack_625 = false;
  lVar10 = FRenderingCompositePass::GetInputDesc(param_1,0);
  local_568 = 0;
  local_5b0 = (undefined8 *)(param_1 + 0xe8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(local_5b0,&local_568);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_568);
  puVar11 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x50,param_2);
  local_550 = param_2[1];
  uStack_548 = param_2[2];
  local_5e0 = puVar11;
  cVar9 = FUN_141ce5c50(param_2,puVar11);
  if (cVar9 == '\0') {
    iVar28 = (int)param_2[1];
    uVar29 = *(uint *)((longlong)param_2 + 0xc);
    uVar30 = (undefined4)param_2[2];
    uVar31 = *(undefined4 *)((longlong)param_2 + 0x14);
  }
  else {
    lVar13 = *param_2;
    if (*(int *)(lVar13 + 0x1a14) == 2) {
      iVar28 = *(int *)(lVar13 + 0x1aa0);
      uVar29 = *(uint *)(lVar13 + 0x1aa4);
      uVar30 = *(undefined4 *)(lVar13 + 0x1aa8);
      uVar31 = *(undefined4 *)(lVar13 + 0x1aac);
    }
    else {
      iVar28 = *(int *)(lVar13 + 0x368);
      uVar29 = *(uint *)(lVar13 + 0x36c);
      uVar30 = *(undefined4 *)(lVar13 + 0x370);
      uVar31 = *(undefined4 *)(lVar13 + 0x374);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 100);
  uVar2 = *(undefined8 *)(lVar10 + 0x14);
  local_5f8 = iVar28;
  uStack_5f4 = uVar29;
  iStack_5f0 = uVar30;
  iStack_5ec = uVar31;
  local_5d8 = uVar1;
  local_580 = FSceneRenderTargets::Get(param_2[8]);
  uVar27 = local_5c0._4_4_;
  uVar18 = uStack_5f4;
  lVar10 = *(longlong *)(param_1 + 0xe0);
  bVar5 = false;
  uVar26 = uStack_5c8 >> 8;
  uStack_5c8 = uStack_5c8 & 0xffffff00;
  uVar25 = uStack_5c4 >> 8;
  uStack_5c4 = uStack_5c4 & 0xffffff00;
  local_628 = false;
  cStack_627 = '\0';
  bStack_626 = false;
  bStack_625 = false;
  bStack_624 = false;
  bStack_623 = false;
  bStack_622 = false;
  if ((*(char *)(param_1 + 0xd8) == '\0') &&
     (((byte)*(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0x28) & 5) == 5)) {
    bStack_625 = 0.0 < *(float *)(lVar10 + 0x165c);
    bStack_624 = 0.0 < *(float *)(lVar10 + 0x1650);
    local_628 = 0.0 < *(float *)(lVar10 + 0x1468);
    bStack_622 = 0.0 < *(float *)(lVar10 + 0x1658);
    bStack_623 = 0.0 < *(float *)(DAT_146a582b0 + 4);
  }
  else {
    bVar5 = true;
    cStack_627 = '\x01';
  }
  lVar13 = *(longlong *)(lVar10 + 0x1a40);
  if ((lVar13 == 0) || (*(char *)(lVar13 + 0xc9) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  iVar21 = *(int *)(DAT_146a58340 + 4);
  iVar33 = iVar21;
  if ((0.0 < *(float *)(DAT_146a58370 + 4)) && (iVar33 = 2, 1 < iVar21)) {
    iVar33 = iVar21;
  }
  if (-1 < iVar33) {
    iVar20 = 7;
    if (iVar33 < 7) {
      iVar20 = iVar33;
    }
    if ((iVar20 - 3U < 4) && (lVar13 != 0)) {
      bStack_626 = *(char *)(lVar13 + 0xca) != '\0';
    }
  }
  uVar4 = CONCAT12(bStack_626,CONCAT11(cStack_627,local_628));
  uVar23 = CONCAT13(bStack_625,uVar4);
  local_5b8 = CONCAT17(uStack_621,
                       CONCAT16(bStack_622,CONCAT15(bStack_623,CONCAT14(bStack_624,uVar23))));
  if (!bVar5) {
    uStack_5c4 = CONCAT31((int3)uVar25,1);
    uStack_5c8 = CONCAT31((int3)uVar26,0.01 < *(float *)(lVar10 + 0x145c));
  }
  if ((*(char *)(lVar10 + 0x1202) != '\0') && (!bVar6)) {
    iVar20 = 0;
  }
  uStack_5cc = (undefined4)((ulonglong)local_5b8 >> 0x20);
  local_5c0 = CONCAT44(local_5c0._4_4_,iVar20);
  local_4f8 = CONCAT44(uStack_5cc,uVar23);
  uStack_4f0 = uStack_5c8;
  uStack_4ec = uStack_5c4;
  local_4e8 = local_5c0;
  uVar24 = uStack_5cc;
  if (cStack_627 == '\0') {
    if ((bStack_625 != false) || (bStack_622 != false)) {
      local_5b8 = CONCAT44(uStack_5cc,CONCAT13(1,uVar4));
      local_5b8 = CONCAT17(uStack_621,CONCAT25(0x101,(undefined5)local_5b8));
      uStack_4f0 = CONCAT31((int3)(uStack_5c8 >> 8),1);
    }
    uVar7 = local_5b8;
    local_5b8 = CONCAT71(local_5b8._1_7_,1);
    local_4f8 = local_5b8;
    uVar8 = local_4f8;
    uStack_4ec = CONCAT31((int3)(uStack_5c4 >> 8),1);
    local_4f8._0_4_ = (undefined4)local_5b8;
    local_4f8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar23 = (undefined4)local_4f8;
    uVar24 = local_4f8._4_4_;
    local_4f8 = uVar8;
  }
  uVar26 = uStack_4ec;
  uVar25 = uStack_4f0;
  local_4c8 = local_5c0;
  _local_5d0 = CONCAT44(uVar24,uVar23);
  iVar21 = (int)uVar1;
  uStack_5c8 = uStack_4f0;
  uStack_5c4 = uStack_4ec;
  local_4d8 = uVar23;
  uStack_4d4 = uVar24;
  uStack_4d0 = uStack_4f0;
  uStack_4cc = uStack_4ec;
  if (*(char *)(param_1 + 10) != '\0') {
    local_608 = CONCAT44(local_608._4_4_,local_5f8);
    iVar21 = local_5f8 + iVar21;
    iVar28 = uStack_5f4 + local_5d8._4_4_;
    local_610 = CONCAT44(iVar28,iVar21);
    local_5e8 = CONCAT44(local_5e8._4_4_,iVar21);
    iStack_5f0 = iVar21;
    iStack_5ec = iVar28;
    FUN_141a19150(param_2[8],0,0,0);
    local_438 = CONCAT44(uStack_5f4,local_5f8);
    uStack_430 = CONCAT44(iStack_5ec,iStack_5f0);
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_438);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a611f8) &&
       (_Init_thread_header(&DAT_146a611f8), DAT_146a611f8 == -1)) {
      FName::FName(&DAT_146a611f0,L"AsyncTonemapEndFence",1);
      _Init_thread_footer(&DAT_146a611f8);
    }
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,local_560,&DAT_146a611f0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe8,local_560);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_560);
    lVar10 = *(longlong *)(DAT_146ac3d68 + 0x30);
    uVar30 = uVar23;
    uVar31 = uVar24;
    uVar29 = uVar25;
    uVar32 = uVar26;
    iVar33 = iVar20;
    uVar34 = uVar27;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
      iVar33 = (int)local_5c0;
      uVar34 = (undefined4)((ulonglong)local_5c0 >> 0x20);
      iVar20 = (int)local_4c8;
      uVar27 = (undefined4)((ulonglong)local_4c8 >> 0x20);
      local_5e8 = CONCAT44(local_5e8._4_4_,iStack_5f0);
      local_608 = CONCAT44(local_608._4_4_,local_5f8);
      uVar23 = local_4d8;
      uVar24 = uStack_4d4;
      uVar25 = uStack_4d0;
      uVar26 = uStack_4cc;
      uVar30 = local_5d0;
      uVar31 = uStack_5cc;
      uVar29 = uStack_5c8;
      uVar32 = uStack_5c4;
      iVar21 = iStack_5f0;
      uVar18 = uStack_5f4;
      iVar28 = iStack_5ec;
    }
    local_610 = lVar10;
    cVar9 = FUN_141d6a650(*param_2);
    if (cVar9 != '\0') {
      lVar10 = FViewInfo::GetEyeAdaptation(*param_2,param_2[8]);
      TRefCountPtr<FRHITexture>::operator=(&local_610,*(undefined8 *)(lVar10 + 8));
      lVar10 = local_610;
    }
    local_680 = lVar10;
    if (((*(char *)(param_1 + 10) != '\0') && (*(char *)(param_1 + 0xb) != '\0')) &&
       (DAT_146ab62f0 != '\0')) {
      FUN_141c74470(param_1);
      puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      local_5e8 = local_5e0[2];
      puVar11 = puVar17 + 1;
      if (DAT_146ab7068 < puVar11) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar17 + 1;
      }
      DAT_146ab7060 = puVar11;
      *puVar17 = local_5e8;
      puVar15 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 6;
      if (DAT_146ab7068 < puVar11) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar15 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar15 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar11;
      *DAT_146ab7038 = puVar15;
      DAT_146ab7038 = puVar15 + 1;
      *DAT_146ab7038 = 0;
      *puVar15 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar15 + 2) = 1;
      puVar15[3] = puVar17;
      puVar15[4] = 2;
      puVar15[5] = 0;
      local_5d8 = local_5e0[2];
      uVar19 = *(undefined1 *)(param_1 + 0xda);
      FUN_141c74d70(&local_480);
      local_470 = CONCAT44(uVar27,iVar20);
      local_480 = uVar23;
      uStack_47c = uVar24;
      uStack_478 = uVar25;
      uStack_474 = uVar26;
      local_468 = uVar19;
      FUN_141c74c50(&local_598,param_2[0xc],&local_480);
      lVar10 = *(longlong *)(local_598 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      uVar1 = *(undefined8 *)(lVar10 + 0x60);
      FRHIComputeShader::UpdateStats(uVar1);
      puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar17 + 3;
      if (DAT_146ab7068 < puVar11) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar17 + 3;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      iVar21 = iVar21 - (int)local_608;
      DAT_146ab7060 = puVar11;
      *DAT_146ab7038 = puVar17;
      DAT_146ab7038 = puVar17 + 1;
      *DAT_146ab7038 = 0;
      *puVar17 = &PTR_LAB_144dc9ce0;
      puVar17[2] = uVar1;
      local_688 = (undefined4 *)local_5d8;
      local_558 = iVar21;
      local_554 = iVar28 - uVar18;
      FUN_141c66030(local_598,&DAT_146ab7030,param_2,&local_558);
      iVar20 = (iVar28 - uVar18) + 7;
      local_688 = (undefined4 *)CONCAT44(local_688._4_4_,1);
      iVar21 = iVar21 + 7;
      DispatchComputeShader
                (&DAT_146ab7030,local_598,(int)((iVar21 >> 0x1f & 7U) + iVar21) >> 3,
                 (int)((iVar20 >> 0x1f & 7U) + iVar20) >> 3);
      lVar10 = *(longlong *)(local_598 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      FRWShaderParameter::UnsetUAV<FRHICommandList>
                (local_598 + 0x1bc,&DAT_146ab7030,*(undefined8 *)(lVar10 + 0x60));
      puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      uVar1 = *local_5b0;
      local_608 = local_5e0[2];
      puVar11 = puVar17 + 1;
      if (DAT_146ab7068 < puVar11) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar17 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar17 + 1;
      }
      DAT_146ab7060 = puVar11;
      *puVar17 = local_608;
      puVar15 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 6;
      if (DAT_146ab7068 < puVar11) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060);
        puVar15 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar11 = puVar15 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar11;
      *DAT_146ab7038 = puVar15;
      DAT_146ab7038 = puVar15 + 1;
      *DAT_146ab7038 = 0;
      *puVar15 = &PTR_LAB_144dc9d00;
      *(undefined4 *)(puVar15 + 2) = 1;
      puVar15[3] = puVar17;
      *(undefined4 *)(puVar15 + 4) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = 1;
      puVar15[5] = uVar1;
      FUN_141ec93f0(&DAT_146ab7030);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_610);
      return;
    }
    FUN_141c74580(param_1);
    lVar10 = param_2[8];
    local_590 = local_5e0[2];
    puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar17 + 1;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
      puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar17 + 1;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar11;
    *puVar17 = local_590;
    puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 6;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
      puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 6;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar11;
    *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
    **(undefined8 **)(lVar10 + 8) = puVar15;
    *(undefined8 **)(lVar10 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar15 + 2) = 1;
    puVar15[3] = puVar17;
    puVar15[4] = 2;
    puVar15[5] = 0;
    local_590 = local_5e0[2];
    uVar19 = *(undefined1 *)(param_1 + 0xda);
    lVar10 = param_2[8];
    FUN_141c74d70(&local_460);
    local_450 = CONCAT44(uVar34,iVar33);
    local_460 = uVar30;
    uStack_45c = uVar31;
    uStack_458 = uVar29;
    uStack_454 = uVar32;
    local_448 = uVar19;
    FUN_141c74c50(&local_588,param_2[0xc],&local_460);
    lVar3 = local_588;
    lVar13 = *(longlong *)(local_588 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    local_588 = *(longlong *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(local_588);
    puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
      puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar17 + 3;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar11;
    *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
    iVar20 = (int)local_5e8 - (int)local_608;
    **(undefined8 **)(lVar10 + 8) = puVar17;
    *(undefined8 **)(lVar10 + 8) = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &PTR_LAB_144d91e50;
    puVar17[2] = local_588;
    local_688 = (undefined4 *)local_590;
    local_5d8 = CONCAT44(iVar28 - uVar18,iVar20);
    FUN_141c67cd0(lVar3,lVar10,param_2,&local_5d8);
    iVar28 = (iVar28 - uVar18) + 7;
    local_688 = (undefined4 *)CONCAT44(local_688._4_4_,1);
    iVar20 = iVar20 + 7;
    DispatchComputeShader
              (lVar10,lVar3,(int)((iVar20 >> 0x1f & 7U) + iVar20) >> 3,
               (int)((iVar28 >> 0x1f & 7U) + iVar28) >> 3);
    lVar13 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    FRWShaderParameter::UnsetUAV<FRHICommandList>
              (lVar3 + 0x1bc,lVar10,*(undefined8 *)(lVar13 + 0x60));
    lVar10 = param_2[8];
    uVar1 = *local_5b0;
    puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    local_580 = local_5e0[2];
    puVar11 = puVar17 + 1;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
      puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar17 + 1;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar11;
    *puVar17 = local_580;
    puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 6;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
      puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 6;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar11;
    *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
    **(undefined8 **)(lVar10 + 8) = puVar15;
    *(undefined8 **)(lVar10 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar15 + 2) = 1;
    puVar15[3] = puVar17;
    *(undefined4 *)(puVar15 + 4) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x24) = 1;
    puVar15[5] = uVar1;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_610);
    return;
  }
  FUN_141c74580(param_1);
  lVar10 = param_2[0xc];
  uVar25 = (&DAT_1464c9c48)[(int)param_2[0xb]];
  local_618[0] = uVar25;
  if (*(char *)(param_1 + 0xda) == '\0') {
    cVar9 = FUN_141d6a650(*param_2);
    if (cVar9 != '\0') {
      lVar10 = FViewInfo::GetEyeAdaptation(*param_2);
      local_4a8 = *(longlong *)(lVar10 + 8);
      if (local_4a8 != 0) {
        lVar10 = param_2[8];
        plVar22 = (longlong *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar12 = plVar22 + 1;
        if (*(longlong **)(lVar10 + 0x38) < plVar12) {
          FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
          plVar22 = (longlong *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar12 = plVar22 + 1;
        }
        *(longlong **)(lVar10 + 0x30) = plVar12;
        *plVar22 = local_4a8;
        puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar17 = puVar15 + 5;
        if (*(undefined8 **)(lVar10 + 0x38) < puVar17) {
          FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar17 = puVar15 + 5;
        }
        *(undefined8 **)(lVar10 + 0x30) = puVar17;
        *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
        **(undefined8 **)(lVar10 + 8) = puVar15;
        *(undefined8 **)(lVar10 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar15 + 2) = 1;
        puVar15[3] = plVar22;
        *(undefined4 *)(puVar15 + 4) = 0;
        *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
        uVar25 = local_618[0];
      }
    }
  }
  else {
    local_488 = 0;
    local_490 = &DAT_146a60f20;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,local_618,&local_490);
    if (local_618[0] == 0xffffffff) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)(int)local_618[0] * 0x20 + *(longlong *)(lVar10 + 0x38);
    }
    puVar17 = (undefined8 *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      puVar17 = (undefined8 *)0x0;
    }
    FUN_141c95020(*puVar17,param_2);
  }
  iVar20 = local_5f8;
  local_608 = CONCAT44(local_608._4_4_,iStack_5ec);
  local_5e8 = CONCAT44(local_5e8._4_4_,iStack_5f0);
  local_618[0] = uStack_5f4;
  local_628 = SUB41(local_5f8,0);
  cStack_627 = (char)((uint)local_5f8 >> 8);
  bStack_626 = SUB41((uint)local_5f8 >> 0x10,0);
  bStack_625 = SUB41((uint)local_5f8 >> 0x18,0);
  if ((0x1d < uVar25) || ((0x25e2cf88U >> (uVar25 & 0x1f) & 1) == 0)) {
    cVar9 = FUN_141ce5c50(param_2,puVar11);
    if (cVar9 == '\0') {
      local_4b0 = '\0';
      if (*(char *)((longlong)param_2 + 0x69) != '\0') {
        local_4b0 = '\x02';
      }
    }
    else {
      local_4b0 = (*param_2 == *(longlong *)**(undefined8 **)(*param_2 + 0x10)) + '\x01';
    }
    if (*(int *)(*param_2 + 0x1a10) == 1) {
      local_4b0 = '\x02';
    }
    if (*(int *)(DAT_146a583d0 + 4) != 0) {
      if ((((int)local_5e8 - iVar20 == iVar21) && ((int)local_608 - local_618[0] == local_5d8._4_4_)
          ) && ((iVar20 == 0 && (local_618[0] == 0)))) {
        local_4b0 = '\0';
      }
    }
    local_4c0 = *puVar11;
    local_4b8 = 0;
    local_4b4 = 0xffffffff;
    local_4af = 1;
    local_578 = 0;
    local_570 = 0;
    FUN_140c63b80(local_358,1,&local_4c0,&local_578);
    lVar10 = param_2[8];
    FRHICommandListBase::CacheActiveRenderTargets(lVar10,local_298,local_358,local_1c8);
    puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar15 + 0x54;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x2a8);
      puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar15 + 0x54;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar17;
    *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
    **(undefined8 **)(lVar10 + 8) = puVar15;
    *(undefined8 **)(lVar10 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar15 + 2,local_358);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_358);
    goto LAB_141c8e49e;
  }
  lVar10 = *(longlong *)(param_1 + 0xe0);
  if (*(int *)(lVar10 + 0xf60) == 0) {
    if (lVar10 == *(longlong *)**(undefined8 **)(lVar10 + 0x10)) {
LAB_141c8e308:
      local_680 = local_680 & 0xffffffffffffff00;
      local_688 = (undefined4 *)CONCAT44(local_688._4_4_,0x22);
      FUN_141ad74f0(param_2[8],*puVar11,0,5);
      goto LAB_141c8e49e;
    }
  }
  else if (*(int *)(lVar10 + 0xf60) == 1) goto LAB_141c8e308;
  FUN_141a19150(param_2[8],*puVar11,0,0);
LAB_141c8e49e:
  local_428 = iVar28;
  uStack_424 = uVar29;
  uStack_420 = uVar30;
  uStack_41c = uVar31;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_428);
  local_3d8 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3d0 = 0;
  local_3cc = 0x26;
  local_3c4 = 0;
  local_3bc = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_374 = 0;
  local_36c = 0;
  local_364 = 0;
  FUN_14049afe0(param_2[8]);
  local_3e8 = FUN_1404a0ce0();
  uStack_3e0 = FUN_140985530();
  local_3d8 = FUN_1409853f0();
  lVar10 = param_2[0xc];
  if (*(char *)(param_1 + 0xda) == '\0') {
    lVar13 = FUN_141c5fef0();
  }
  else {
    lVar13 = FUN_141c5fe90();
  }
  local_498 = (-(uint)((char)uStack_5cc != '\0') & 0x10) + (-(uint)(local_5d0._3_1_ != '\0') & 8) +
              (-(uint)(local_5d0._2_1_ != '\0') & 4) + (-(uint)(local_5d0._1_1_ != '\0') & 2) +
              (uint)((char)local_5d0 != '\0') + (-(uint)((char)uStack_5c4 != '\0') & 0x100) +
              (-(uint)((char)uStack_5c8 != '\0') & 0x80) +
              (-(uint)(uStack_5cc._2_1_ != '\0') & 0x40) +
              (-(uint)(uStack_5cc._1_1_ != '\0') & 0x20) + (int)local_5c0 * 0x200;
  local_4a0 = &DAT_146a58480;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 0x38,local_5a8,&local_4a0);
  plVar12 = (longlong *)0x0;
  if (local_5a8[0] != -1) {
    plVar12 = (longlong *)((longlong)local_5a8[0] * 0x20 + *(longlong *)(lVar10 + 0x38));
  }
  plVar22 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar22 = (longlong *)0x0;
  }
  lVar10 = *plVar22;
  local_418 = DAT_1464c2720;
  lVar3 = *(longlong *)(lVar13 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uStack_410 = *(undefined8 *)(lVar3 + 0x38);
  if (lVar10 == 0) {
    local_3f8 = 0;
    uVar29 = 1;
    local_510 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_3f8 = *(undefined8 *)(lVar3 + 0x40);
    uVar29 = (uint)local_610;
  }
  if ((uVar29 & 1) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_510);
  }
  local_3cc = local_3cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_418,2,1);
  if (*(char *)(param_1 + 0xda) == '\0') {
    FUN_141c74b10(&local_500,param_2[0xc]);
    FUN_141c93c30(local_500,param_2);
  }
  else {
    FUN_141c74a90(&local_508);
    FUN_141c93910(local_508,param_2);
  }
  lVar3 = *(longlong *)(lVar10 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_5a0 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9690(lVar10,param_2[8],local_5a0,*(undefined8 *)(*param_2 + 0x20));
  local_c8 = FUN_141a156e0();
  local_c0 = FUN_141a156e0();
  local_b8 = FUN_1404a0e20();
  local_b0 = FUN_141a156e0();
  local_678 = &local_c8;
  uVar14 = 0;
  local_680 = local_680 & 0xffffffff00000000;
  local_688 = (undefined4 *)0x0;
  thunk_FUN_141ca99a0(lVar10 + 0xc0,param_2[8],&local_5a0,param_2);
  if (0 < *(int *)(lVar10 + 0x10)) {
    uVar16 = uVar14;
    do {
      iVar20 = (int)uVar16;
      if (*(undefined **)(*(longlong *)(lVar10 + 8) + uVar14 * 8) == &DAT_146a583f0) {
        if (iVar20 != -1) {
          local_688 = *(undefined4 **)(*(longlong *)(lVar10 + 0x18) + (longlong)iVar20 * 8);
          *local_688 = *(undefined4 *)(lVar10 + 0xb8);
          goto LAB_141c8e882;
        }
        break;
      }
      uVar16 = (ulonglong)(iVar20 + 1);
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)*(int *)(lVar10 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a61290) && (_Init_thread_header(&DAT_146a61290), DAT_146a61290 == -1))
  {
    _DAT_146a61288 = 0;
    _DAT_146a6128c = 0;
    DAT_146a6128e = 0;
    _Init_thread_footer(&DAT_146a61290);
  }
  local_688 = (undefined4 *)&DAT_146a61288;
LAB_141c8e882:
  FUN_141c62550(lVar10 + 0x1bc,param_2[8],local_5a0,param_2);
  local_688 = (undefined4 *)((ulonglong)local_688 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_5a0,lVar10 + 0x21a,*param_2 + 0xf40);
  local_638 = 1;
  local_5b0 = (undefined8 *)
              CONCAT44((int)local_608 - local_618[0],
                       (int)local_5e8 -
                       CONCAT13(bStack_625,CONCAT12(bStack_626,CONCAT11(cStack_627,local_628))));
  local_640 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_648 = *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 0xf60);
  local_660 = local_5b0;
  local_668 = (float)(uStack_548._4_4_ - local_550._4_4_);
  local_670 = (float)((int)uStack_548 - (int)local_550);
  local_678 = (undefined8 *)CONCAT44(local_678._4_4_,(float)local_550._4_4_);
  local_680 = CONCAT44(local_680._4_4_,(float)(int)local_550);
  local_688 = (undefined4 *)CONCAT44(local_688._4_4_,(float)(int)((int)local_608 - local_618[0]));
  local_658 = uVar2;
  local_650 = lVar13;
  FUN_141ce13a0(param_2[8]);
  lVar10 = param_2[8];
  uVar1 = puVar11[1];
  plVar12 = (longlong *)*puVar11;
  local_540 = 0xffffffff00000000;
  uStack_538 = 0xffffffffffffffff;
  local_520 = 0xffffffff;
  uStack_518 = 0;
  local_530 = 0xffffffffffffffff;
  uStack_528 = 0xffffffffffffffff;
  puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar17 + 10;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30);
    puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar17 + 10;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar11;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar17;
  *(undefined8 **)(lVar10 + 8) = puVar17 + 1;
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar17 + 2) = (undefined4)local_540;
  *(undefined4 *)((longlong)puVar17 + 0x14) = local_540._4_4_;
  *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_538;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_538._4_4_;
  *(undefined4 *)(puVar17 + 4) = (undefined4)local_530;
  *(undefined4 *)((longlong)puVar17 + 0x24) = local_530._4_4_;
  *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_528;
  *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_528._4_4_;
  *(undefined4 *)(puVar17 + 6) = (undefined4)local_520;
  *(undefined4 *)((longlong)puVar17 + 0x34) = local_520._4_4_;
  *(undefined4 *)(puVar17 + 7) = (undefined4)uStack_518;
  *(undefined4 *)((longlong)puVar17 + 0x3c) = uStack_518._4_4_;
  puVar17[8] = plVar12;
  puVar17[9] = uVar1;
  lVar10 = (**(code **)(*plVar12 + 8))(plVar12);
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar17[8] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar17[8] + 0x20))();
  }
  lVar10 = (**(code **)(*(longlong *)puVar17[9] + 8))();
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar17[9] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar17[9] + 0x20))();
  }
  plVar12 = *(longlong **)(*param_2 + 0x10);
  if (*(longlong *)(*plVar12 + -8 + (longlong)(int)plVar12[1] * 8) == *param_2) {
    FUN_141d04b60(local_580,0);
  }
  return;
}



// FUNCTION 141c8ebd0 FUN_141c8ebd0 body=1471 status=ok
// SIG undefined FUN_141c8ebd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c8ebd0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_208 [32];
  float local_1e8;
  float local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  int local_198 [2];
  char local_190;
  char local_18f;
  char local_18e;
  char local_18d;
  char local_18c;
  char local_18b;
  char local_18a;
  char local_188;
  char local_187;
  char local_186;
  char local_185;
  char local_184;
  char local_183;
  char local_182;
  ulonglong local_180;
  undefined *local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 *local_120;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar13 = (longlong *)0x0;
  local_180 = local_180 & 0xffffffff00000000;
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  local_120 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x40,param_2);
  lVar8 = *(longlong *)(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0x54);
  uVar2 = *(undefined8 *)(lVar6 + 0x14);
  local_168 = *(undefined8 *)(lVar8 + 0x1aa0);
  uStack_160 = *(undefined8 *)(lVar8 + 0x1aa8);
  lVar6 = 0x368;
  if (*(char *)(param_1 + 200) == '\0') {
    lVar6 = 0x1aa0;
  }
  puVar4 = *(undefined **)(lVar6 + lVar8);
  uVar5 = ((undefined8 *)(lVar6 + lVar8))[1];
  local_128 = uVar1;
  if (*(int *)(lVar8 + 0xf60) == 0) {
    if (lVar8 == *(longlong *)**(undefined8 **)(lVar8 + 0x10)) {
LAB_141c8ed06:
      local_1e0 = (float)((uint)local_1e0 & 0xffffff00);
      local_1e8 = 4.76441e-44;
      FUN_141ad74f0(*(undefined8 *)(param_2 + 0x40),*local_120,0,5);
      goto LAB_141c8ec98;
    }
  }
  else if (*(int *)(lVar8 + 0xf60) == 1) goto LAB_141c8ed06;
  FUN_141a19150(*(undefined8 *)(param_2 + 0x40),*local_120,0,0);
LAB_141c8ec98:
  local_178 = puVar4;
  uStack_170 = uVar5;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_178);
  FUN_141c77a10(&local_190,*(undefined8 *)(param_1 + 0xd0));
  lVar8 = *(longlong *)(param_2 + 0x60);
  local_178 = &DAT_146a58720;
  uStack_170 = uStack_170 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,local_198,&local_178);
  plVar10 = plVar13;
  if (local_198[0] != -1) {
    plVar10 = (longlong *)((longlong)local_198[0] * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  plVar11 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_178 = &DAT_146a58870;
  lVar6 = *plVar11;
  uStack_170 = CONCAT44(uStack_170._4_4_,
                        ((-(uint)(local_182 != '\0') & 0x200) + (-(uint)(local_183 != '\0') & 0x100)
                         + (-(uint)(local_184 != '\0') & 0x80) + (uint)(local_18c != '\0') +
                         (-(uint)(local_18b != '\0') & 2) + (-(uint)(local_18a != '\0') & 4) +
                         (-(uint)(local_188 != '\0') & 8) + (-(uint)(local_185 != '\0') & 0x40) +
                         (-(uint)(local_186 != '\0') & 0x20) + (-(uint)(local_187 != '\0') & 0x10))
                        * 0x10 + (uint)(local_190 != '\0') + (-(uint)(local_18f != '\0') & 2) +
                        (-(uint)(local_18e != '\0') & 4) + (-(uint)(local_18d != '\0') & 8));
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,local_198,&local_178);
  plVar10 = plVar13;
  if (local_198[0] != -1) {
    plVar10 = (longlong *)((longlong)local_198[0] * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  local_d8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d0 = 0;
  plVar11 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  lVar8 = *plVar11;
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
  FUN_14049afe0(*(undefined8 *)(param_2 + 0x40),&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  lVar3 = *(longlong *)(lVar6 + 0x48);
  *(undefined1 *)(lVar6 + 0x1de) = *(undefined1 *)(param_1 + 0xd8);
  local_118 = DAT_1464c2720;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uStack_110 = *(undefined8 *)(lVar3 + 0x38);
  if (lVar8 == 0) {
    uVar9 = 2;
    local_180 = 0;
    local_f8 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_f8 = *(undefined8 *)(lVar3 + 0x40);
    uVar9 = (uint)local_180;
  }
  if ((uVar9 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_180);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),&local_118,2,1);
  FUN_141c942a0(lVar6,param_2);
  local_1e8 = (float)CONCAT31(local_1e8._1_3_,*(undefined1 *)(param_1 + 0xd9));
  FUN_141c65380(lVar8,*(undefined8 *)(param_2 + 0x40),param_2,&local_190);
  local_1a0 = 1;
  local_1a8 = 1;
  local_1d8 = (float)local_168._4_4_;
  local_1d0 = (float)((int)uStack_160 - (int)local_168);
  local_1e0 = (float)(int)local_168;
  local_1e8 = (float)local_128._4_4_;
  local_1c8 = (float)(uStack_160._4_4_ - local_168._4_4_);
  local_1c0 = uVar1;
  local_1b8 = uVar2;
  local_1b0 = lVar6;
  DrawRectangle(*(undefined8 *)(param_2 + 0x40));
  lVar8 = *(longlong *)(param_2 + 0x40);
  uVar1 = local_120[1];
  plVar13 = (longlong *)*local_120;
  local_158 = 0xffffffff00000000;
  uStack_150 = 0xffffffffffffffff;
  local_138 = 0xffffffff;
  uStack_130 = 0;
  local_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar12 + 10;
  if (*(undefined8 **)(lVar8 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
    puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar12 + 10;
  }
  *(undefined8 **)(lVar8 + 0x30) = puVar7;
  *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
  **(undefined8 **)(lVar8 + 8) = puVar12;
  *(undefined8 **)(lVar8 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_158;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_158._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_150;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_150._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_148;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_148._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_140._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_138._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_130._4_4_;
  puVar12[8] = plVar13;
  puVar12[9] = uVar1;
  lVar8 = (**(code **)(*plVar13 + 8))(plVar13);
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar8 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar8 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c8f190 FUN_141c8f190 body=1751 status=ok
// SIG undefined FUN_141c8f190(void)

void FUN_141c8f190(longlong param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar11 = *param_2;
  local_res18 = lVar11;
  puVar8 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x30,param_2);
  local_res20 = puVar8;
  puVar9 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x90,param_2);
  lVar3 = param_2[0xc];
  local_b8 = &DAT_146a57360;
  uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res8,&local_b8);
  plVar10 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar10 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  local_res10 = 0;
  local_res8 = 0;
  plVar14 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  lVar3 = *plVar14;
  FUN_141a19150(param_2[8],0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  local_b8 = *(undefined **)(lVar11 + 0x1aa0);
  uStack_b0 = *(undefined8 *)(lVar11 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_b8,0,0x3f800000);
  lVar11 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar11 + 0x28) == '\0') {
    FUN_1419f3850(lVar11);
  }
  uVar4 = *(undefined8 *)(lVar11 + 0x60);
  lVar11 = param_2[8];
  FRHIComputeShader::UpdateStats(uVar4);
  puVar12 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar12 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar12;
  *(undefined8 **)(lVar11 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  puVar12[2] = uVar4;
  lVar11 = *(longlong *)(lVar3 + 0x48);
  uVar4 = puVar8[2];
  local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(lVar3 + 0xc2));
  if (*(char *)(lVar11 + 0x28) == '\0') {
    FUN_1419f3850(lVar11);
  }
  lVar5 = param_2[8];
  uVar6 = *(undefined8 *)(lVar11 + 0x60);
  puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 5;
  if (*(undefined8 **)(lVar5 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 5;
  }
  *(undefined8 **)(lVar5 + 0x30) = puVar8;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar13;
  *(undefined8 **)(lVar5 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e40;
  *(int *)(puVar13 + 3) = (int)local_res8;
  puVar13[2] = uVar6;
  puVar13[4] = uVar4;
  lVar11 = *(longlong *)(lVar3 + 0x48);
  uVar4 = puVar9[2];
  local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(lVar3 + 200));
  if (*(char *)(lVar11 + 0x28) == '\0') {
    FUN_1419f3850(lVar11);
  }
  lVar5 = param_2[8];
  uVar6 = *(undefined8 *)(lVar11 + 0x60);
  puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 5;
  if (*(undefined8 **)(lVar5 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 5;
  }
  lVar11 = local_res18;
  *(undefined8 **)(lVar5 + 0x30) = puVar8;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar13;
  *(undefined8 **)(lVar5 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e40;
  *(int *)(puVar13 + 3) = (int)local_res8;
  puVar13[2] = uVar6;
  puVar13[4] = uVar4;
  FUN_141c919a0(lVar3,param_2[8],param_2,local_res18);
  iVar7 = (*(int *)(lVar11 + 0x1aa8) - *(int *)(lVar11 + 0x1aa0)) + 0xf;
  iVar1 = (*(int *)(lVar11 + 0x1aac) - *(int *)(lVar11 + 0x1aa4)) + 0xf;
  DispatchComputeShader
            (param_2[8],lVar3,(int)((iVar7 >> 0x1f & 0xfU) + iVar7) >> 4,
             (int)((iVar1 >> 0x1f & 0xfU) + iVar1) >> 4,1);
  lVar11 = param_2[8];
  puVar13 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 2;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x18);
    puVar13 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 2;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar13;
  *(undefined8 **)(lVar11 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144dc9c50;
  lVar11 = *(longlong *)(lVar3 + 0x48);
  uVar2 = *(ushort *)(lVar3 + 0xc2);
  if (*(char *)(lVar11 + 0x28) == '\0') {
    FUN_1419f3850(lVar11);
  }
  lVar5 = param_2[8];
  uVar4 = *(undefined8 *)(lVar11 + 0x60);
  puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 5;
  if (*(undefined8 **)(lVar5 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 5;
  }
  *(undefined8 **)(lVar5 + 0x30) = puVar8;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar13;
  *(undefined8 **)(lVar5 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *(uint *)(puVar13 + 3) = (uint)uVar2;
  *puVar13 = &PTR_LAB_144d91e40;
  puVar13[4] = 0;
  puVar13[2] = uVar4;
  uVar2 = *(ushort *)(lVar3 + 200);
  lVar11 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar11 + 0x28) == '\0') {
    FUN_1419f3850(lVar11);
  }
  lVar3 = param_2[8];
  uVar4 = *(undefined8 *)(lVar11 + 0x60);
  puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 5;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 5;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar8;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  local_a8 = 0xffffffff00000000;
  uStack_a0 = 0xffffffffffffffff;
  **(undefined8 **)(lVar3 + 8) = puVar13;
  *(undefined8 **)(lVar3 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e40;
  *(uint *)(puVar13 + 3) = (uint)uVar2;
  puVar13[2] = uVar4;
  puVar13[4] = 0;
  lVar11 = param_2[8];
  uVar4 = local_res20[1];
  plVar10 = (longlong *)*local_res20;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  local_88 = 0xffffffff;
  uStack_80 = 0;
  puVar13 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 10;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x58);
    puVar13 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 10;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar13;
  *(undefined8 **)(lVar11 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar13 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar13 + 0x14) = local_a8._4_4_;
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_a0._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar13 + 0x24) = local_98._4_4_;
  *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_90._4_4_;
  *(undefined4 *)(puVar13 + 6) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar13 + 0x34) = local_88._4_4_;
  *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_80._4_4_;
  puVar13[8] = plVar10;
  puVar13[9] = uVar4;
  lVar11 = (**(code **)(*plVar10 + 8))(plVar10);
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar13[8] + 0x20))();
  }
  lVar11 = (**(code **)(*(longlong *)puVar13[9] + 8))();
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar13[9] + 0x20))();
  }
  lVar11 = param_2[8];
  uVar4 = puVar9[1];
  plVar10 = (longlong *)*puVar9;
  local_78 = 0xffffffff00000000;
  uStack_70 = 0xffffffffffffffff;
  local_58 = 0xffffffff;
  uStack_50 = 0;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 10;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x58);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 10;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar9 + 2) = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar9 + 0x14) = local_78._4_4_;
  *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_70._4_4_;
  *(undefined4 *)(puVar9 + 4) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar9 + 0x24) = local_68._4_4_;
  *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_60._4_4_;
  *(undefined4 *)(puVar9 + 6) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar9 + 0x34) = local_58._4_4_;
  *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_50._4_4_;
  puVar9[8] = plVar10;
  puVar9[9] = uVar4;
  lVar11 = (**(code **)(*plVar10 + 8))(plVar10);
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar9[8] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar9[8] + 0x20))();
  }
  lVar11 = (**(code **)(*(longlong *)puVar9[9] + 8))();
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar9[9] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar9[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c8f870 FUN_141c8f870 body=1337 status=ok
// SIG undefined FUN_141c8f870(void)

void FUN_141c8f870(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  int local_res10;
  uint local_res18;
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar10 = *param_2;
  iVar6 = (*(int *)(lVar10 + 0x1aa8) - *(int *)(lVar10 + 0x1aa0)) + 0xf;
  iVar7 = (*(int *)(lVar10 + 0x1aac) - *(int *)(lVar10 + 0x1aa4)) + 0xf;
  iVar6 = (int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4;
  uVar15 = (int)((iVar7 >> 0x1f & 0xfU) + iVar7) >> 4;
  local_res10 = iVar6;
  local_res18 = uVar15;
  puVar8 = (undefined8 *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  local_res20 = 0;
  local_res8 = 0;
  FUN_141a19150(param_2[8],0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  fVar18 = 1.0;
  local_98 = (undefined *)0x0;
  uStack_90._0_4_ = iVar6;
  uStack_90._4_4_ = uVar15;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_98);
  lVar10 = param_2[0xc];
  local_98 = &DAT_146a57750;
  uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 0x38,&local_res8,&local_98);
  plVar11 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar10 + 0x38));
  }
  plVar13 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar10 = *plVar13;
  lVar2 = *(longlong *)(lVar10 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = param_2[8];
  FRHIComputeShader::UpdateStats(uVar3);
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar12 + 3;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar12 + 3;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar14;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar12;
  *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  puVar12[2] = uVar3;
  lVar2 = *(longlong *)(lVar10 + 0x48);
  uVar3 = puVar8[2];
  uVar1 = *(ushort *)(lVar10 + 0xc2);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  lVar4 = param_2[8];
  uVar5 = *(undefined8 *)(lVar2 + 0x60);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar12 + 5;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar12 + 5;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar14;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar12;
  *(undefined8 **)(lVar4 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = uVar5;
  *(uint *)(puVar12 + 3) = (uint)uVar1;
  puVar12[4] = uVar3;
  lVar2 = *(longlong *)(lVar10 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa9420(lVar10,param_2[8],local_res8,*(undefined8 *)(*param_2 + 0x20));
  uVar9 = FUN_1404a0e20();
  FUN_141caac70(lVar10 + 0xc6,&local_res8,param_2,param_2[8],uVar9,0,0);
  fVar16 = (float)((int)param_2[2] - (int)param_2[1]);
  if (param_2[4] != 0) {
    fVar18 = *(float *)(param_2[4] + 0x204);
  }
  fVar17 = fVar16 * 0.5;
  fVar18 = fVar17 * fVar18 * *(float *)(*param_2 + 0x177c) * 0.5;
  local_98 = (undefined *)
             CONCAT44(fVar18,(float)(*(int *)((longlong)param_2 + 0x14) -
                                    *(int *)((longlong)param_2 + 0xc)) / fVar16);
  uStack_90 = CONCAT44(ABS(fVar17) * *(float *)(*param_2 + 0x1780) * 0.01,fVar18 * 0.0625);
  FUN_141a120e0(param_2[8],local_res8,lVar10 + 0x1c2,&local_98,uVar9 & 0xffffffff00000000);
  DispatchComputeShader
            (param_2[8],lVar10,(int)((local_res10 + 0xf >> 0x1f & 0xfU) + local_res10 + 0xf) >> 4,
             (int)(((int)(local_res18 + 0xf) >> 0x1f & 0xfU) + local_res18 + 0xf) >> 4,1);
  uVar1 = *(ushort *)(lVar10 + 0xc2);
  lVar10 = *(longlong *)(lVar10 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  lVar2 = param_2[8];
  uVar3 = *(undefined8 *)(lVar10 + 0x60);
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar12 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar12 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar14;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  local_88 = 0xffffffff00000000;
  uStack_80 = 0xffffffffffffffff;
  **(undefined8 **)(lVar2 + 8) = puVar12;
  *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = uVar3;
  *(uint *)(puVar12 + 3) = (uint)uVar1;
  puVar12[4] = 0;
  lVar10 = param_2[8];
  uVar3 = puVar8[1];
  plVar11 = (longlong *)*puVar8;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0xffffffff;
  uStack_60 = 0;
  puVar14 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar14 + 10;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x58);
    puVar14 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar14 + 10;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar8;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar14;
  *(undefined8 **)(lVar10 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar14 + 2) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar14 + 0x14) = local_88._4_4_;
  *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_80._4_4_;
  *(undefined4 *)(puVar14 + 4) = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar14 + 0x24) = local_78._4_4_;
  *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_70._4_4_;
  *(undefined4 *)(puVar14 + 6) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar14 + 0x34) = local_68._4_4_;
  *(undefined4 *)(puVar14 + 7) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_60._4_4_;
  puVar14[8] = plVar11;
  puVar14[9] = uVar3;
  lVar10 = (**(code **)(*plVar11 + 8))(plVar11);
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar14[8] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar14[8] + 0x20))();
  }
  lVar10 = (**(code **)(*(longlong *)puVar14[9] + 8))();
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar14[9] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar14[9] + 0x20))();
  }
  return;
}



// FUNCTION 141c8fdb0 FUN_141c8fdb0 body=3999 status=ok
// SIG undefined FUN_141c8fdb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c8fdb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_5e8 [32];
  wchar_t *local_5c8;
  undefined1 local_5c0;
  undefined1 local_5b8;
  int local_5a4;
  int local_5a0;
  undefined8 local_598;
  int local_590;
  int local_58c;
  longlong *local_588;
  longlong *local_580;
  longlong local_578;
  undefined4 local_570;
  undefined4 local_56c;
  longlong local_568;
  undefined1 local_560 [8];
  longlong local_558;
  undefined1 local_550 [8];
  longlong local_548;
  undefined1 local_540 [8];
  longlong local_538;
  undefined1 local_530 [8];
  longlong local_528;
  undefined1 local_520 [8];
  longlong local_518;
  undefined8 local_508;
  int iStack_500;
  int iStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  longlong local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined2 local_4b8;
  undefined *local_4b0;
  undefined4 local_4a8;
  undefined *local_4a0;
  undefined4 local_498;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478 [24];
  undefined1 local_460 [24];
  undefined1 local_448 [24];
  undefined1 local_430 [24];
  undefined1 local_418 [24];
  undefined1 local_400 [24];
  undefined8 local_3e8;
  longlong *plStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  longlong *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  ulonglong local_39c;
  undefined8 local_394;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_344;
  undefined8 local_33c;
  undefined4 local_334;
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
  undefined1 local_2d8 [192];
  undefined4 local_218;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5e8;
  bVar5 = false;
  bVar4 = false;
  local_5a0 = 0;
  FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar11 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x34);
  iVar8 = (*(int *)(lVar11 + 0x1aa8) - *(int *)(lVar11 + 0x1aa0)) + 0xf;
  iVar18 = (*(int *)(lVar11 + 0x1aac) - *(int *)(lVar11 + 0x1aa4)) + 0xf;
  iVar8 = (int)((iVar8 >> 0x1f & 0xfU) + iVar8) >> 4;
  iVar18 = (int)((iVar18 >> 0x1f & 0xfU) + iVar18) >> 4;
  local_598 = uVar2;
  plVar10 = (longlong *)FUN_141cf3cd0(param_1 + 0x20,param_2);
  local_318 = DAT_1464c9ce0;
  local_314 = (undefined4)uVar2;
  local_2e8 = L"UnknownTexture2D";
  local_310 = local_598._4_4_;
  local_5b8 = 1;
  local_5c0 = 1;
  local_5c8 = L"VelocityScatterDepth";
  local_588 = (longlong *)0x0;
  local_328 = _DAT_1464c9cd0;
  uStack_320 = uRam00000001464c9cd8;
  local_30c = 0;
  local_308 = 1;
  local_304 = 0x10000;
  local_300 = 1;
  local_2fc = 0xc;
  local_2f4 = 4;
  local_2f0 = 0;
  local_2e0 = 1;
  local_580 = plVar10;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2[8],&local_328,&local_588);
  local_4c8 = *plVar10;
  local_4c0 = 0;
  local_4bc = 0xffffffff;
  local_4b8 = 0x101;
  local_578 = local_588[1];
  local_570 = 0x1010102;
  local_56c = 0x22;
  FUN_140c63b80(local_2d8,1,&local_4c8,&local_578);
  lVar11 = param_2[8];
  FRHICommandListBase::CacheActiveRenderTargets(lVar11,local_218,local_2d8,local_148);
  puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x54;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x2a8);
    puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x54;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar15;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar16;
  *(undefined8 **)(lVar11 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar16 + 2,local_2d8);
  local_508 = 0;
  uStack_480 = CONCAT44(iVar18,iVar8);
  local_488 = 0;
  iStack_500 = iVar8;
  iStack_4fc = iVar18;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_488,0,0x3f800000);
  local_3a8 = 0;
  local_3e8 = 0;
  plStack_3e0 = (longlong *)0x0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = (longlong *)0x0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_3a0 = 0;
  local_39c = 0x26;
  local_394 = 0;
  local_38c = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_344 = 0;
  local_33c = 0;
  local_334 = 0;
  FUN_14049afe0(param_2[8],&local_3e8);
  local_5a4 = 0;
  iVar18 = iVar8 * iVar18 + 7;
  local_5a0 = (int)(iVar18 + (iVar18 >> 0x1f & 7U)) >> 3;
  plVar10 = local_580;
  plVar19 = local_580;
  do {
    plVar13 = (longlong *)0x0;
    if (local_5a4 == 0) {
      if (DAT_146852b40 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_560);
            plVar12 = (longlong *)FUN_14049e3d0(local_478,0,0xff);
            lVar11 = *plVar12;
            *(undefined1 **)(lVar11 + 0x10) = &LAB_1404a0f60;
            *(undefined1 **)(lVar11 + 0x18) = local_560;
            lVar11 = *plVar12;
            lVar6 = plVar12[2];
            lVar3 = plVar12[1];
            lVar14 = *(longlong *)(lVar11 + 0x28);
            piVar1 = (int *)(lVar14 + 0x48);
            if (lVar14 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_568 = lVar14;
            FUN_1404a4fe0(lVar11,lVar3,(int)lVar6,1);
            if (lVar14 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_568);
              }
            }
            FScopedEvent::~FScopedEvent(local_560);
          }
          else {
            lVar11 = operator_new(0x38);
            if (lVar11 == 0) {
              DAT_146852b40 = 0;
            }
            else {
              DAT_146852b40 =
                   TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar11);
            }
          }
        }
        else {
          lVar11 = operator_new(0x38);
          if (lVar11 == 0) {
            LOCK();
            if (DAT_146852b40 == 0) {
              DAT_146852b40 = 0;
            }
            UNLOCK();
          }
          else {
            lVar11 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar11);
            LOCK();
            if (DAT_146852b40 != 0) {
              lVar11 = DAT_146852b40;
            }
            DAT_146852b40 = lVar11;
            UNLOCK();
          }
        }
      }
      local_3b8 = *(undefined8 *)(DAT_146852b40 + 0x30);
      if (DAT_146864320 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_550);
            plVar12 = (longlong *)FUN_14049e3d0(local_460,0,0xff);
            lVar11 = *plVar12;
            *(undefined1 **)(lVar11 + 0x10) = &LAB_140985690;
            *(undefined1 **)(lVar11 + 0x18) = local_550;
            lVar11 = *plVar12;
            lVar6 = plVar12[2];
            lVar3 = plVar12[1];
            lVar14 = *(longlong *)(lVar11 + 0x28);
            piVar1 = (int *)(lVar14 + 0x48);
            if (lVar14 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_558 = lVar14;
            FUN_1404a4fe0(lVar11,lVar3,(int)lVar6,1);
            if (lVar14 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_558);
              }
            }
            FScopedEvent::~FScopedEvent(local_550);
          }
          else {
            lVar11 = operator_new(0x38);
            if (lVar11 == 0) {
              DAT_146864320 = 0;
            }
            else {
              DAT_146864320 =
                   TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar11);
            }
          }
        }
        else {
          lVar11 = operator_new(0x38);
          if (lVar11 == 0) {
            LOCK();
            if (DAT_146864320 == 0) {
              DAT_146864320 = 0;
            }
            UNLOCK();
          }
          else {
            lVar11 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar11);
            LOCK();
            if (DAT_146864320 != 0) {
              lVar11 = DAT_146864320;
            }
            DAT_146864320 = lVar11;
            UNLOCK();
          }
        }
      }
      uStack_3b0 = *(undefined8 *)(DAT_146864320 + 0x30);
      lVar11 = DAT_146a61230;
      if (DAT_146a61230 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_540);
            plVar12 = (longlong *)FUN_14049e3d0(local_448,0,0xff);
            lVar11 = *plVar12;
            *(undefined1 **)(lVar11 + 0x10) = &LAB_141c7d890;
            *(undefined1 **)(lVar11 + 0x18) = local_540;
            lVar11 = *plVar12;
            lVar6 = plVar12[2];
            lVar3 = plVar12[1];
            lVar14 = *(longlong *)(lVar11 + 0x28);
            piVar1 = (int *)(lVar14 + 0x48);
            if (lVar14 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_548 = lVar14;
            FUN_1404a4fe0(lVar11,lVar3,(int)lVar6,1);
            if (lVar14 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_548);
              }
            }
            FScopedEvent::~FScopedEvent(local_540);
            lVar11 = DAT_146a61230;
          }
          else {
            lVar11 = operator_new(0x38);
            if (lVar11 == 0) {
              DAT_146a61230 = 0;
              lVar11 = DAT_146a61230;
            }
            else {
              DAT_146a61230 =
                   TStaticStateRHI<TStaticDepthStencilState<1,0,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar11);
              lVar11 = DAT_146a61230;
            }
          }
        }
        else {
          lVar11 = operator_new(0x38);
          if (lVar11 == 0) {
            LOCK();
            if (DAT_146a61230 == 0) {
              DAT_146a61230 = 0;
            }
            UNLOCK();
            lVar11 = DAT_146a61230;
          }
          else {
            lVar11 = TStaticStateRHI<TStaticDepthStencilState<1,0,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar11);
            LOCK();
            if (DAT_146a61230 != 0) {
              lVar11 = DAT_146a61230;
            }
            DAT_146a61230 = lVar11;
            UNLOCK();
            lVar11 = DAT_146a61230;
          }
        }
      }
    }
    else {
      if (DAT_146a61228 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_530);
            plVar12 = (longlong *)FUN_14049e3d0(local_430,0,0xff);
            lVar11 = *plVar12;
            *(undefined1 **)(lVar11 + 0x10) = &LAB_141c7d870;
            *(undefined1 **)(lVar11 + 0x18) = local_530;
            lVar11 = *plVar12;
            lVar6 = plVar12[2];
            lVar3 = plVar12[1];
            lVar14 = *(longlong *)(lVar11 + 0x28);
            piVar1 = (int *)(lVar14 + 0x48);
            if (lVar14 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_538 = lVar14;
            FUN_1404a4fe0(lVar11,lVar3,(int)lVar6,1);
            if (lVar14 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_538);
              }
            }
            FScopedEvent::~FScopedEvent(local_530);
          }
          else {
            lVar11 = operator_new(0x38);
            if (lVar11 == 0) {
              DAT_146a61228 = 0;
            }
            else {
              DAT_146a61228 =
                   TStaticStateRHI<TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar11);
            }
          }
        }
        else {
          lVar11 = operator_new(0x38);
          if (lVar11 == 0) {
            LOCK();
            if (DAT_146a61228 == 0) {
              DAT_146a61228 = 0;
            }
            UNLOCK();
          }
          else {
            lVar11 = TStaticStateRHI<TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar11);
            LOCK();
            if (DAT_146a61228 != 0) {
              lVar11 = DAT_146a61228;
            }
            DAT_146a61228 = lVar11;
            UNLOCK();
          }
        }
      }
      local_3b8 = *(undefined8 *)(DAT_146a61228 + 0x30);
      if (DAT_146864320 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_520);
            plVar12 = (longlong *)FUN_14049e3d0(local_418,0,0xff);
            lVar11 = *plVar12;
            *(undefined1 **)(lVar11 + 0x10) = &LAB_140985690;
            *(undefined1 **)(lVar11 + 0x18) = local_520;
            lVar11 = *plVar12;
            lVar6 = plVar12[2];
            lVar3 = plVar12[1];
            lVar14 = *(longlong *)(lVar11 + 0x28);
            piVar1 = (int *)(lVar14 + 0x48);
            if (lVar14 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_528 = lVar14;
            FUN_1404a4fe0(lVar11,lVar3,(int)lVar6,1);
            if (lVar14 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_528);
              }
            }
            FScopedEvent::~FScopedEvent(local_520);
          }
          else {
            lVar11 = operator_new(0x38);
            if (lVar11 == 0) {
              DAT_146864320 = 0;
            }
            else {
              DAT_146864320 =
                   TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar11);
            }
          }
        }
        else {
          lVar11 = operator_new(0x38);
          if (lVar11 == 0) {
            LOCK();
            if (DAT_146864320 == 0) {
              DAT_146864320 = 0;
            }
            UNLOCK();
          }
          else {
            lVar11 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar11);
            LOCK();
            if (DAT_146864320 != 0) {
              lVar11 = DAT_146864320;
            }
            DAT_146864320 = lVar11;
            UNLOCK();
          }
        }
      }
      uStack_3b0 = *(undefined8 *)(DAT_146864320 + 0x30);
      lVar11 = DAT_146a61220;
      if (DAT_146a61220 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(&local_598);
            plVar12 = (longlong *)FUN_14049e3d0(local_400,0,0xff);
            lVar11 = *plVar12;
            *(undefined1 **)(lVar11 + 0x10) = &LAB_141c7d880;
            *(undefined8 **)(lVar11 + 0x18) = &local_598;
            lVar11 = *plVar12;
            lVar6 = plVar12[2];
            lVar3 = plVar12[1];
            lVar14 = *(longlong *)(lVar11 + 0x28);
            piVar1 = (int *)(lVar14 + 0x48);
            if (lVar14 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_518 = lVar14;
            FUN_1404a4fe0(lVar11,lVar3,(int)lVar6,1);
            if (lVar14 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_518);
              }
            }
            FScopedEvent::~FScopedEvent(&local_598);
            lVar11 = DAT_146a61220;
          }
          else {
            lVar11 = operator_new(0x38);
            if (lVar11 == 0) {
              DAT_146a61220 = 0;
              lVar11 = DAT_146a61220;
            }
            else {
              DAT_146a61220 =
                   TStaticStateRHI<TStaticDepthStencilState<1,2,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar11);
              lVar11 = DAT_146a61220;
            }
          }
        }
        else {
          lVar11 = operator_new(0x38);
          if (lVar11 == 0) {
            LOCK();
            if (DAT_146a61220 == 0) {
              DAT_146a61220 = 0;
            }
            UNLOCK();
            lVar11 = DAT_146a61220;
          }
          else {
            lVar11 = TStaticStateRHI<TStaticDepthStencilState<1,2,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar11);
            LOCK();
            if (DAT_146a61220 != 0) {
              lVar11 = DAT_146a61220;
            }
            DAT_146a61220 = lVar11;
            UNLOCK();
            lVar11 = DAT_146a61220;
          }
        }
      }
    }
    local_3a8 = *(undefined8 *)(lVar11 + 0x30);
    lVar11 = param_2[0xc];
    local_4b0 = &DAT_146a574b0;
    local_4a8 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_590,&local_4b0);
    plVar12 = plVar13;
    if (local_590 != -1) {
      plVar12 = (longlong *)((longlong)local_590 * 0x20 + *(longlong *)(lVar11 + 0x38));
    }
    local_498 = 0;
    plVar17 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar17 = plVar13;
    }
    local_4a0 = &DAT_146a57600;
    lVar3 = *plVar17;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_58c,&local_4a0);
    plVar12 = plVar13;
    if (local_58c != -1) {
      plVar12 = (longlong *)((longlong)local_58c * 0x20 + *(longlong *)(lVar11 + 0x38));
    }
    plVar17 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar17 = plVar13;
    }
    lVar11 = *plVar17;
    local_3e8 = DAT_1464c2758;
    if (lVar3 == 0) {
      bVar4 = true;
      plVar10 = plVar13;
    }
    else {
      lVar14 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar14 + 0x28) == '\0') {
        FUN_1419f3850(lVar14);
      }
      plVar13 = *(longlong **)(lVar14 + 0x38);
    }
    plVar12 = (longlong *)0x0;
    plStack_3e0 = plVar13;
    if ((bVar4) && (bVar4 = false, plVar10 != (longlong *)0x0)) {
      LOCK();
      plVar13 = plVar10 + 1;
      lVar14 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        if (((char)plVar10[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')
            ))) {
          LOCK();
          bVar20 = *(int *)((longlong)plVar10 + 0xc) == 0;
          if (bVar20) {
            *(int *)((longlong)plVar10 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar20) {
            uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
            plVar13 = plVar12;
            if (uVar9 != 0) {
              plVar13 = (longlong *)
                        ((&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18);
            }
            plVar13[1] = (longlong)plVar10;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar10)(plVar10,1);
        }
      }
    }
    if (lVar11 == 0) {
      bVar5 = true;
      plVar19 = plVar12;
    }
    else {
      lVar14 = *(longlong *)(lVar11 + 0x48);
      if (*(char *)(lVar14 + 0x28) == '\0') {
        FUN_1419f3850(lVar14);
      }
      plVar12 = *(longlong **)(lVar14 + 0x40);
    }
    lVar14 = 0;
    local_3c8 = plVar12;
    if ((bVar5) && (bVar5 = false, plVar19 != (longlong *)0x0)) {
      LOCK();
      plVar13 = plVar19 + 1;
      lVar6 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (((char)plVar19[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')
            ))) {
          LOCK();
          bVar20 = *(int *)((longlong)plVar19 + 0xc) == 0;
          if (bVar20) {
            *(int *)((longlong)plVar19 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar20) {
            uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar9 != 0) {
              lVar14 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar14 + 8) = plVar19;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar19)(plVar19,1);
        }
      }
    }
    local_39c = local_39c & 0xffffffff00000000;
    FUN_141ed6ac0(param_2[8],&local_3e8,2,1);
    FUN_141c92d80(lVar3,param_2,local_5a4);
    lVar3 = *(longlong *)(lVar11 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    FUN_141aa9690(lVar11,param_2[8],*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(*param_2 + 0x20));
    lVar11 = param_2[8];
    puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 5;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
      puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar16 + 5;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar15;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar16;
    *(undefined8 **)(lVar11 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar16 + 2) = 0;
    puVar16[3] = 0;
    *(undefined4 *)(puVar16 + 4) = 0;
    lVar3 = DAT_1464c2540;
    lVar11 = param_2[8];
    if (DAT_1464c2540 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x8d8,
                 L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    }
    puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 7;
    if (*(undefined8 **)(lVar11 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
      puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar16 + 7;
    }
    *(undefined8 **)(lVar11 + 0x30) = puVar15;
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
    **(undefined8 **)(lVar11 + 8) = puVar16;
    *(undefined8 **)(lVar11 + 8) = puVar16 + 1;
    puVar16[2] = lVar3;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_143f489d0;
    *(int *)(puVar16 + 6) = local_5a0;
    puVar16[3] = 0;
    *(undefined4 *)(puVar16 + 4) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x24) = 0x20;
    *(undefined4 *)((longlong)puVar16 + 0x2c) = 0x10;
    local_5a4 = local_5a4 + 1;
  } while (local_5a4 < 2);
  lVar11 = param_2[8];
  local_4f8 = 0xffffffff00000000;
  uStack_4f0 = 0xffffffffffffffff;
  lVar3 = local_580[1];
  plVar10 = (longlong *)*local_580;
  local_4d8 = 0xffffffff;
  uStack_4d0 = 0;
  local_4e8 = 0xffffffffffffffff;
  uStack_4e0 = 0xffffffffffffffff;
  puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 10;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar15) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x58);
    puVar16 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 10;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar15;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar16;
  *(undefined8 **)(lVar11 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar16 + 2) = (undefined4)local_4f8;
  *(undefined4 *)((longlong)puVar16 + 0x14) = local_4f8._4_4_;
  *(undefined4 *)(puVar16 + 3) = (undefined4)uStack_4f0;
  *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_4f0._4_4_;
  *(undefined4 *)(puVar16 + 4) = (undefined4)local_4e8;
  *(undefined4 *)((longlong)puVar16 + 0x24) = local_4e8._4_4_;
  *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_4e0;
  *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_4e0._4_4_;
  *(undefined4 *)(puVar16 + 6) = (undefined4)local_4d8;
  *(undefined4 *)((longlong)puVar16 + 0x34) = local_4d8._4_4_;
  *(undefined4 *)(puVar16 + 7) = (undefined4)uStack_4d0;
  *(undefined4 *)((longlong)puVar16 + 0x3c) = uStack_4d0._4_4_;
  puVar16[8] = plVar10;
  puVar16[9] = lVar3;
  lVar11 = (**(code **)(*plVar10 + 8))(plVar10);
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar16[8] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar16[8] + 0x20))();
  }
  lVar11 = (**(code **)(*(longlong *)puVar16[9] + 8))();
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar16[9] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar16[9] + 0x20))();
  }
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2d8);
  if (local_588 != (longlong *)0x0) {
    (**(code **)(*local_588 + 0x30))();
  }
  return;
}



// FUNCTION 141c90d50 FUN_141c90d50 body=2312 status=ok
// SIG undefined FUN_141c90d50(void)

void FUN_141c90d50(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  float fVar32;
  
  fVar1 = param_1[0x60];
  fVar2 = param_1[0x61];
  fVar3 = param_1[0x62];
  fVar4 = param_1[99];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  fVar12 = param_1[7];
  fVar13 = param_1[8];
  fVar14 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  fVar17 = param_1[0xc];
  fVar18 = param_1[0xd];
  fVar19 = param_1[0xe];
  fVar20 = param_1[0xf];
  fVar21 = param_1[100];
  fVar22 = param_1[0x65];
  fVar23 = param_1[0x66];
  fVar24 = param_1[0x67];
  fVar25 = param_1[0x68];
  fVar26 = param_1[0x69];
  fVar27 = param_1[0x6a];
  fVar28 = param_1[0x6b];
  fVar29 = param_1[0x6c];
  fVar30 = param_1[0x6d];
  fVar31 = param_1[0x6e];
  fVar32 = param_1[0x6f];
  param_1[0x80] = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0x81] = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0x82] = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0x83] = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0x84] = fVar21 * fVar5 + fVar22 * fVar9 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0x85] = fVar21 * fVar6 + fVar22 * fVar10 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0x86] = fVar21 * fVar7 + fVar22 * fVar11 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0x87] = fVar21 * fVar8 + fVar22 * fVar12 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0x88] = fVar25 * fVar5 + fVar26 * fVar9 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0x89] = fVar25 * fVar6 + fVar26 * fVar10 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0x8a] = fVar25 * fVar7 + fVar26 * fVar11 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[0x8b] = fVar25 * fVar8 + fVar26 * fVar12 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[0x8c] = fVar29 * fVar5 + fVar30 * fVar9 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0x8d] = fVar29 * fVar6 + fVar30 * fVar10 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0x8e] = fVar29 * fVar7 + fVar30 * fVar11 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0x8f] = fVar29 * fVar8 + fVar30 * fVar12 + fVar31 * fVar16 + fVar32 * fVar20;
  fVar1 = param_1[0x60];
  fVar2 = param_1[0x61];
  fVar3 = param_1[0x62];
  fVar4 = param_1[99];
  fVar5 = param_1[0x30];
  fVar6 = param_1[0x31];
  fVar7 = param_1[0x32];
  fVar8 = param_1[0x33];
  fVar9 = param_1[0x34];
  fVar10 = param_1[0x35];
  fVar11 = param_1[0x36];
  fVar12 = param_1[0x37];
  fVar13 = param_1[0x38];
  fVar14 = param_1[0x39];
  fVar15 = param_1[0x3a];
  fVar16 = param_1[0x3b];
  fVar17 = param_1[0x3c];
  fVar18 = param_1[0x3d];
  fVar19 = param_1[0x3e];
  fVar20 = param_1[0x3f];
  fVar21 = param_1[100];
  fVar22 = param_1[0x65];
  fVar23 = param_1[0x66];
  fVar24 = param_1[0x67];
  fVar25 = param_1[0x68];
  fVar26 = param_1[0x69];
  fVar27 = param_1[0x6a];
  fVar28 = param_1[0x6b];
  fVar29 = param_1[0x6c];
  fVar30 = param_1[0x6d];
  fVar31 = param_1[0x6e];
  fVar32 = param_1[0x6f];
  param_1[0x90] = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0x91] = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0x92] = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0x93] = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0x94] = fVar21 * fVar5 + fVar22 * fVar9 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0x95] = fVar21 * fVar6 + fVar22 * fVar10 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0x96] = fVar21 * fVar7 + fVar22 * fVar11 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0x97] = fVar21 * fVar8 + fVar22 * fVar12 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0x98] = fVar25 * fVar5 + fVar26 * fVar9 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0x99] = fVar25 * fVar6 + fVar26 * fVar10 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0x9a] = fVar25 * fVar7 + fVar26 * fVar11 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[0x9b] = fVar25 * fVar8 + fVar26 * fVar12 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[0x9c] = fVar29 * fVar5 + fVar30 * fVar9 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0x9d] = fVar29 * fVar6 + fVar30 * fVar10 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0x9e] = fVar29 * fVar7 + fVar30 * fVar11 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0x9f] = fVar29 * fVar8 + fVar30 * fVar12 + fVar31 * fVar16 + fVar32 * fVar20;
  fVar1 = param_1[0x20];
  fVar2 = param_1[0x21];
  fVar3 = param_1[0x22];
  fVar4 = param_1[0x23];
  fVar5 = param_1[0x74];
  fVar6 = param_1[0x75];
  fVar7 = param_1[0x76];
  fVar8 = param_1[0x77];
  fVar9 = param_1[0x70];
  fVar10 = param_1[0x71];
  fVar11 = param_1[0x72];
  fVar12 = param_1[0x73];
  fVar13 = param_1[0x78];
  fVar14 = param_1[0x79];
  fVar15 = param_1[0x7a];
  fVar16 = param_1[0x7b];
  fVar17 = param_1[0x7c];
  fVar18 = param_1[0x7d];
  fVar19 = param_1[0x7e];
  fVar20 = param_1[0x7f];
  fVar21 = param_1[0x24];
  fVar22 = param_1[0x25];
  fVar23 = param_1[0x26];
  fVar24 = param_1[0x27];
  fVar25 = param_1[0x28];
  fVar26 = param_1[0x29];
  fVar27 = param_1[0x2a];
  fVar28 = param_1[0x2b];
  fVar29 = param_1[0x2c];
  fVar30 = param_1[0x2d];
  fVar31 = param_1[0x2e];
  fVar32 = param_1[0x2f];
  param_1[0xa0] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0xa1] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0xa2] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0xa3] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0xa4] = fVar21 * fVar9 + fVar22 * fVar5 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0xa5] = fVar21 * fVar10 + fVar22 * fVar6 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0xa6] = fVar21 * fVar11 + fVar22 * fVar7 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0xa7] = fVar21 * fVar12 + fVar22 * fVar8 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0xa8] = fVar25 * fVar9 + fVar26 * fVar5 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0xa9] = fVar25 * fVar10 + fVar26 * fVar6 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0xaa] = fVar25 * fVar11 + fVar26 * fVar7 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[0xab] = fVar25 * fVar12 + fVar26 * fVar8 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[0xac] = fVar29 * fVar9 + fVar30 * fVar5 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0xad] = fVar29 * fVar10 + fVar30 * fVar6 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0xae] = fVar29 * fVar11 + fVar30 * fVar7 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0xaf] = fVar29 * fVar12 + fVar30 * fVar8 + fVar31 * fVar16 + fVar32 * fVar20;
  fVar1 = param_1[0x40];
  fVar2 = param_1[0x41];
  fVar3 = param_1[0x42];
  fVar4 = param_1[0x43];
  fVar5 = param_1[0x74];
  fVar6 = param_1[0x75];
  fVar7 = param_1[0x76];
  fVar8 = param_1[0x77];
  fVar9 = param_1[0x70];
  fVar10 = param_1[0x71];
  fVar11 = param_1[0x72];
  fVar12 = param_1[0x73];
  fVar13 = param_1[0x78];
  fVar14 = param_1[0x79];
  fVar15 = param_1[0x7a];
  fVar16 = param_1[0x7b];
  fVar17 = param_1[0x7c];
  fVar18 = param_1[0x7d];
  fVar19 = param_1[0x7e];
  fVar20 = param_1[0x7f];
  fVar21 = param_1[0x44];
  fVar22 = param_1[0x45];
  fVar23 = param_1[0x46];
  fVar24 = param_1[0x47];
  fVar25 = param_1[0x48];
  fVar26 = param_1[0x49];
  fVar27 = param_1[0x4a];
  fVar28 = param_1[0x4b];
  fVar29 = param_1[0x4c];
  fVar30 = param_1[0x4d];
  fVar31 = param_1[0x4e];
  fVar32 = param_1[0x4f];
  param_1[0xb0] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0xb1] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0xb2] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0xb3] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0xb4] = fVar21 * fVar9 + fVar22 * fVar5 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0xb5] = fVar21 * fVar10 + fVar22 * fVar6 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0xb6] = fVar21 * fVar11 + fVar22 * fVar7 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0xb7] = fVar21 * fVar12 + fVar22 * fVar8 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0xb8] = fVar25 * fVar9 + fVar26 * fVar5 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0xb9] = fVar25 * fVar10 + fVar26 * fVar6 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0xba] = fVar25 * fVar11 + fVar26 * fVar7 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[0xbb] = fVar25 * fVar12 + fVar26 * fVar8 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[0xbc] = fVar29 * fVar9 + fVar30 * fVar5 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0xbd] = fVar29 * fVar10 + fVar30 * fVar6 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0xbe] = fVar29 * fVar11 + fVar30 * fVar7 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0xbf] = fVar29 * fVar12 + fVar30 * fVar8 + fVar31 * fVar16 + fVar32 * fVar20;
  fVar1 = param_1[0xd0];
  fVar2 = param_1[0xd1];
  fVar3 = param_1[0xd2];
  fVar4 = param_1[0xd3];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar8 = param_1[7];
  fVar9 = *param_1;
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  fVar13 = param_1[8];
  fVar14 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  fVar17 = param_1[0xc];
  fVar18 = param_1[0xd];
  fVar19 = param_1[0xe];
  fVar20 = param_1[0xf];
  fVar21 = param_1[0xd4];
  fVar22 = param_1[0xd5];
  fVar23 = param_1[0xd6];
  fVar24 = param_1[0xd7];
  fVar25 = param_1[0xd8];
  fVar26 = param_1[0xd9];
  fVar27 = param_1[0xda];
  fVar28 = param_1[0xdb];
  fVar29 = param_1[0xdc];
  fVar30 = param_1[0xdd];
  fVar31 = param_1[0xde];
  fVar32 = param_1[0xdf];
  param_1[0x110] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0x111] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0x112] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0x113] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0x114] = fVar21 * fVar9 + fVar22 * fVar5 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0x115] = fVar21 * fVar10 + fVar22 * fVar6 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0x116] = fVar21 * fVar11 + fVar22 * fVar7 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0x117] = fVar21 * fVar12 + fVar22 * fVar8 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0x118] = fVar25 * fVar9 + fVar26 * fVar5 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0x119] = fVar25 * fVar10 + fVar26 * fVar6 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0x11a] = fVar25 * fVar11 + fVar26 * fVar7 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[0x11b] = fVar25 * fVar12 + fVar26 * fVar8 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[0x11c] = fVar29 * fVar9 + fVar30 * fVar5 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0x11d] = fVar29 * fVar10 + fVar30 * fVar6 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0x11e] = fVar29 * fVar11 + fVar30 * fVar7 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0x11f] = fVar29 * fVar12 + fVar30 * fVar8 + fVar31 * fVar16 + fVar32 * fVar20;
  fVar1 = param_1[0xd0];
  fVar2 = param_1[0xd1];
  fVar3 = param_1[0xd2];
  fVar4 = param_1[0xd3];
  fVar5 = param_1[0x34];
  fVar6 = param_1[0x35];
  fVar7 = param_1[0x36];
  fVar8 = param_1[0x37];
  fVar9 = param_1[0x30];
  fVar10 = param_1[0x31];
  fVar11 = param_1[0x32];
  fVar12 = param_1[0x33];
  fVar13 = param_1[0x38];
  fVar14 = param_1[0x39];
  fVar15 = param_1[0x3a];
  fVar16 = param_1[0x3b];
  fVar17 = param_1[0x3c];
  fVar18 = param_1[0x3d];
  fVar19 = param_1[0x3e];
  fVar20 = param_1[0x3f];
  fVar21 = param_1[0xd4];
  fVar22 = param_1[0xd5];
  fVar23 = param_1[0xd6];
  fVar24 = param_1[0xd7];
  fVar25 = param_1[0xd8];
  fVar26 = param_1[0xd9];
  fVar27 = param_1[0xda];
  fVar28 = param_1[0xdb];
  fVar29 = param_1[0xdc];
  fVar30 = param_1[0xdd];
  fVar31 = param_1[0xde];
  fVar32 = param_1[0xdf];
  param_1[0x120] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0x121] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0x122] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0x123] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0x124] = fVar21 * fVar9 + fVar22 * fVar5 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0x125] = fVar21 * fVar10 + fVar22 * fVar6 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0x126] = fVar21 * fVar11 + fVar22 * fVar7 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0x127] = fVar21 * fVar12 + fVar22 * fVar8 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0x128] = fVar25 * fVar9 + fVar26 * fVar5 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0x129] = fVar25 * fVar10 + fVar26 * fVar6 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0x12a] = fVar25 * fVar11 + fVar26 * fVar7 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[299] = fVar25 * fVar12 + fVar26 * fVar8 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[300] = fVar29 * fVar9 + fVar30 * fVar5 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0x12d] = fVar29 * fVar10 + fVar30 * fVar6 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0x12e] = fVar29 * fVar11 + fVar30 * fVar7 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0x12f] = fVar29 * fVar12 + fVar30 * fVar8 + fVar31 * fVar16 + fVar32 * fVar20;
  fVar1 = param_1[0x20];
  fVar2 = param_1[0x21];
  fVar3 = param_1[0x22];
  fVar4 = param_1[0x23];
  fVar5 = param_1[0xe4];
  fVar6 = param_1[0xe5];
  fVar7 = param_1[0xe6];
  fVar8 = param_1[0xe7];
  fVar9 = param_1[0xe0];
  fVar10 = param_1[0xe1];
  fVar11 = param_1[0xe2];
  fVar12 = param_1[0xe3];
  fVar13 = param_1[0xe8];
  fVar14 = param_1[0xe9];
  fVar15 = param_1[0xea];
  fVar16 = param_1[0xeb];
  fVar17 = param_1[0xec];
  fVar18 = param_1[0xed];
  fVar19 = param_1[0xee];
  fVar20 = param_1[0xef];
  fVar21 = param_1[0x24];
  fVar22 = param_1[0x25];
  fVar23 = param_1[0x26];
  fVar24 = param_1[0x27];
  fVar25 = param_1[0x28];
  fVar26 = param_1[0x29];
  fVar27 = param_1[0x2a];
  fVar28 = param_1[0x2b];
  fVar29 = param_1[0x2c];
  fVar30 = param_1[0x2d];
  fVar31 = param_1[0x2e];
  fVar32 = param_1[0x2f];
  param_1[0x130] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0x131] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0x132] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0x133] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0x134] = fVar21 * fVar9 + fVar22 * fVar5 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0x135] = fVar21 * fVar10 + fVar22 * fVar6 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0x136] = fVar21 * fVar11 + fVar22 * fVar7 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0x137] = fVar21 * fVar12 + fVar22 * fVar8 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0x138] = fVar25 * fVar9 + fVar26 * fVar5 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0x139] = fVar25 * fVar10 + fVar26 * fVar6 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0x13a] = fVar25 * fVar11 + fVar26 * fVar7 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[0x13b] = fVar25 * fVar12 + fVar26 * fVar8 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[0x13c] = fVar29 * fVar9 + fVar30 * fVar5 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0x13d] = fVar29 * fVar10 + fVar30 * fVar6 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0x13e] = fVar29 * fVar11 + fVar30 * fVar7 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0x13f] = fVar29 * fVar12 + fVar30 * fVar8 + fVar31 * fVar16 + fVar32 * fVar20;
  fVar1 = param_1[0x40];
  fVar2 = param_1[0x41];
  fVar3 = param_1[0x42];
  fVar4 = param_1[0x43];
  fVar5 = param_1[0xe4];
  fVar6 = param_1[0xe5];
  fVar7 = param_1[0xe6];
  fVar8 = param_1[0xe7];
  fVar9 = param_1[0xe0];
  fVar10 = param_1[0xe1];
  fVar11 = param_1[0xe2];
  fVar12 = param_1[0xe3];
  fVar13 = param_1[0xe8];
  fVar14 = param_1[0xe9];
  fVar15 = param_1[0xea];
  fVar16 = param_1[0xeb];
  fVar17 = param_1[0xec];
  fVar18 = param_1[0xed];
  fVar19 = param_1[0xee];
  fVar20 = param_1[0xef];
  fVar21 = param_1[0x44];
  fVar22 = param_1[0x45];
  fVar23 = param_1[0x46];
  fVar24 = param_1[0x47];
  fVar25 = param_1[0x48];
  fVar26 = param_1[0x49];
  fVar27 = param_1[0x4a];
  fVar28 = param_1[0x4b];
  fVar29 = param_1[0x4c];
  fVar30 = param_1[0x4d];
  fVar31 = param_1[0x4e];
  fVar32 = param_1[0x4f];
  param_1[0x140] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar4 * fVar17;
  param_1[0x141] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar4 * fVar18;
  param_1[0x142] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar4 * fVar19;
  param_1[0x143] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar4 * fVar20;
  param_1[0x144] = fVar21 * fVar9 + fVar22 * fVar5 + fVar23 * fVar13 + fVar24 * fVar17;
  param_1[0x145] = fVar21 * fVar10 + fVar22 * fVar6 + fVar23 * fVar14 + fVar24 * fVar18;
  param_1[0x146] = fVar21 * fVar11 + fVar22 * fVar7 + fVar23 * fVar15 + fVar24 * fVar19;
  param_1[0x147] = fVar21 * fVar12 + fVar22 * fVar8 + fVar23 * fVar16 + fVar24 * fVar20;
  param_1[0x148] = fVar25 * fVar9 + fVar26 * fVar5 + fVar27 * fVar13 + fVar28 * fVar17;
  param_1[0x149] = fVar25 * fVar10 + fVar26 * fVar6 + fVar27 * fVar14 + fVar28 * fVar18;
  param_1[0x14a] = fVar25 * fVar11 + fVar26 * fVar7 + fVar27 * fVar15 + fVar28 * fVar19;
  param_1[0x14b] = fVar25 * fVar12 + fVar26 * fVar8 + fVar27 * fVar16 + fVar28 * fVar20;
  param_1[0x14c] = fVar29 * fVar9 + fVar30 * fVar5 + fVar31 * fVar13 + fVar32 * fVar17;
  param_1[0x14d] = fVar29 * fVar10 + fVar30 * fVar6 + fVar31 * fVar14 + fVar32 * fVar18;
  param_1[0x14e] = fVar29 * fVar11 + fVar30 * fVar7 + fVar31 * fVar15 + fVar32 * fVar19;
  param_1[0x14f] = fVar29 * fVar12 + fVar30 * fVar8 + fVar31 * fVar16 + fVar32 * fVar20;
  return;
}



// FUNCTION 141c91660 FUN_141c91660 body=331 status=ok
// SIG undefined FUN_141c91660(void)

undefined8 * FUN_141c91660(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  bool local_res8;
  bool bStackX_9;
  bool bStackX_c;
  undefined1 uStackX_f;
  byte bStack_11;
  byte bStack_9;
  
  lVar2 = *param_2;
  *(undefined4 *)((longlong)param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  cVar1 = (char)lVar2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  if (*(char *)((longlong)param_2 + 0xb) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  }
  bStackX_9 = (char)((ulonglong)lVar2 >> 8) == '\0';
  if (bStackX_9) {
    *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  }
  else {
    *param_2 = (ulonglong)bStack_11 << 0x38;
    param_2[1] = (ulonglong)bStack_9 << 0x38;
    lVar2 = *param_2;
    cVar1 = (char)lVar2;
  }
  bStackX_9 = !bStackX_9;
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  }
  if ((char)param_2[1] != '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  local_res8 = *(char *)((longlong)param_2 + 9) != '\0';
  if (local_res8) {
    *(undefined2 *)((longlong)param_1 + 9) = 0x101;
  }
  bStackX_c = local_res8 || (char)((ulonglong)lVar2 >> 0x20) != '\0';
  local_res8 = local_res8 || cVar1 != '\0';
  if (*(char *)((longlong)param_2 + 10) != '\0') {
    *(undefined1 *)((longlong)param_1 + 10) = 1;
    bStackX_c = true;
    local_res8 = true;
  }
  if (*(char *)((longlong)param_2 + 0xd) != '\0') {
    *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  }
  *param_1 = CONCAT17(uStackX_f,
                      (uint7)CONCAT14(bStackX_c,
                                      CONCAT13((char)((ulonglong)lVar2 >> 0x18) != '\0',
                                               (uint3)CONCAT11(bStackX_9,local_res8))));
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  return param_1;
}



// FUNCTION 141c917b0 FUN_141c917b0 body=35 status=ok
// SIG undefined FUN_141c917b0(void)

longlong FUN_141c917b0(int param_1)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)DAT_146a57b80 >> 8);
  if ((*(int *)(DAT_146a57b80 + 4) != 0) &&
     ((*(int *)(DAT_146a57b80 + 4) != 2 || ((param_1 != 1 && (param_1 != 10)))))) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



// FUNCTION 141c917e0 SafeRelease body=75 status=ok
// SIG undefined SafeRelease(void)

void FTemporalAAHistory::SafeRelease(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 2;
  do {
    plVar1 = (longlong *)*param_1;
    *param_1 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    param_1 = param_1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 141c91830 Serialize body=360 status=ok
// SIG undefined Serialize(void)

void FTemporalAAParameters::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = ::operator<<(param_2,param_1);
  FUN_141ad3f10(param_1 + 0xfc,uVar1);
  FUN_141ad3f10(param_1 + 0x104,uVar1);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0x10c);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x112);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x118);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x11e);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x124);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x12a);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x130);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x136);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x13a);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x13e);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x142);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x146);
  FUN_1419e0a40(uVar1,param_1 + 0x14c);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0x152);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x158);
  FUN_1419e0a40(uVar1,param_1 + 0x15e);
  return;
}



// FUNCTION 141c919a0 FUN_141c919a0 body=769 status=ok
// SIG undefined FUN_141c919a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c919a0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

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
  float fVar11;
  undefined4 local_res8 [2];
  undefined8 local_res18 [2];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  uVar5 = 0;
  uVar4 = *(undefined8 *)(*param_3 + 0x20);
  local_res18[0] = uVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146b096e0) {
        if (iVar7 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141c91a52;
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
LAB_141c91a52:
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
    *puVar9 = &PTR_LAB_144dcb3c8;
    puVar9[2] = uVar3;
    puVar9[4] = uVar4;
  }
  uVar5 = FUN_1404a0e20();
  FUN_141caac70(param_1 + 0xcc,local_res18,param_3,param_3[8],uVar5,0,0);
  local_44 = (float)((int)param_3[2] - (int)param_3[1]);
  local_48 = (float)(*(int *)((longlong)param_3 + 0x14) - *(int *)((longlong)param_3 + 0xc)) /
             local_44;
  if (param_3[4] == 0) {
    fVar11 = 1.0;
  }
  else {
    fVar11 = *(float *)(param_3[4] + 0x204);
  }
  local_44 = local_44 * 0.5;
  uVar5 = uVar5 & 0xffffffff00000000;
  local_3c = ABS(local_44) * *(float *)(*param_3 + 0x1780) * 0.01;
  local_44 = local_44 * fVar11 * *(float *)(*param_3 + 0x177c) * 0.5;
  local_40 = local_44 * 0.0625;
  FUN_141a120e0(param_3[8],local_res18[0],param_1 + 0x1c8,&local_48,uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_3[8],local_res18[0],param_1 + 0x1ce,param_4 + 0x1788,uVar5);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_3[8],local_res18[0],param_1 + 0x1d4,param_4 + 0x178c,uVar5);
  local_res8[0] = *(undefined4 *)(DAT_146a57340 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_3[8],local_res18[0],param_1 + 0x1da,local_res8,uVar5 & 0xffffffff00000000);
  return;
}



// FUNCTION 141c91cf0 SetOutputDumpFilename body=157 status=ok
// SIG undefined SetOutputDumpFilename(void)

void TRenderingCompositePassBase<3,3>::SetOutputDumpFilename
               (longlong param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(((longlong)param_2 + 0x16) * 0x10 + param_1);
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



// FUNCTION 141c91d90 FUN_141c91d90 body=1812 status=ok
// SIG undefined FUN_141c91d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c91d90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  float fVar33;
  double dVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_218 [32];
  ulonglong local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  double local_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  double local_148;
  double local_140;
  double local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  double local_110;
  double local_108;
  double local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_1d0 = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa9690(param_1,param_2[8],local_1d0,*(undefined8 *)(*param_2 + 0x20));
  local_1f8 = FUN_141a156e0();
  local_1e8 = 0;
  local_1f0 = 0;
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2[8],&local_1d0,param_2);
  lVar1 = *param_2;
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_1d8 = (ulonglong)local_1d8._4_4_ << 0x20;
  }
  else {
    fVar35 = *(float *)(lVar1 + 0x510);
    fVar37 = *(float *)(lVar1 + 0x514);
    fVar34 = *(float *)(lVar1 + 0x518);
    fVar8 = *(float *)(lVar1 + 0x51c);
    fVar9 = *(float *)(lVar1 + 0x3b8);
    fVar10 = *(float *)(lVar1 + 0x3bc);
    fVar11 = *(float *)(lVar1 + 0x3a0);
    fVar31 = *(float *)(lVar1 + 0x3a4);
    fVar33 = *(float *)(lVar1 + 0x3a8);
    fVar39 = *(float *)(lVar1 + 0x3ac);
    fVar30 = *(float *)(lVar1 + 0x3b0) - *(float *)(lVar1 + 0x8f0);
    fVar36 = *(float *)(lVar1 + 0x3b4) - *(float *)(lVar1 + 0x8f4);
    fStack_120 = *(float *)(lVar1 + 0x2908);
    fStack_11c = *(float *)(lVar1 + 0x290c);
    fVar40 = *(float *)(lVar1 + 0x390);
    fVar41 = *(float *)(lVar1 + 0x394);
    fVar12 = *(float *)(lVar1 + 0x398);
    fVar13 = *(float *)(lVar1 + 0x39c);
    local_128 = *(float *)(lVar1 + 0x2900) - *(float *)(lVar1 + 0x2e40);
    fVar14 = *(float *)(lVar1 + 0x3c0);
    fVar15 = *(float *)(lVar1 + 0x3c4);
    fVar16 = *(float *)(lVar1 + 0x3c8);
    fVar17 = *(float *)(lVar1 + 0x3cc);
    fStack_124 = *(float *)(lVar1 + 0x2904) - *(float *)(lVar1 + 0x2e44);
    fVar18 = *(float *)(lVar1 + 0x2910);
    fVar19 = *(float *)(lVar1 + 0x2914);
    fVar20 = *(float *)(lVar1 + 0x2918);
    fVar21 = *(float *)(lVar1 + 0x291c);
    fVar22 = *(float *)(lVar1 + 0x28f0);
    fVar23 = *(float *)(lVar1 + 0x28f4);
    fVar24 = *(float *)(lVar1 + 0x28f8);
    fVar25 = *(float *)(lVar1 + 0x28fc);
    fVar26 = *(float *)(lVar1 + 0x28e0);
    fVar27 = *(float *)(lVar1 + 0x28e4);
    fVar28 = *(float *)(lVar1 + 0x28e8);
    fVar29 = *(float *)(lVar1 + 0x28ec);
    local_1c8 = fVar37 * fVar11 + fVar35 * fVar40 + fVar34 * fVar30 + fVar8 * fVar14;
    local_1b8 = fVar37 * fVar31 + fVar35 * fVar41 + fVar34 * fVar36 + fVar8 * fVar15;
    local_1a8 = fVar37 * fVar33 + fVar35 * fVar12 + fVar34 * fVar9 + fVar8 * fVar16;
    local_198 = fVar37 * fVar39 + fVar35 * fVar13 + fVar34 * fVar10 + fVar8 * fVar17;
    fVar35 = *(float *)(lVar1 + 0x520);
    fVar37 = *(float *)(lVar1 + 0x524);
    fVar34 = *(float *)(lVar1 + 0x528);
    fVar8 = *(float *)(lVar1 + 0x52c);
    local_1c4 = fVar37 * fVar11 + fVar35 * fVar40 + fVar34 * fVar30 + fVar8 * fVar14;
    local_1b4 = fVar37 * fVar31 + fVar35 * fVar41 + fVar34 * fVar36 + fVar8 * fVar15;
    fStack_1a4 = fVar37 * fVar33 + fVar35 * fVar12 + fVar34 * fVar9 + fVar8 * fVar16;
    local_194 = fVar37 * fVar39 + fVar35 * fVar13 + fVar34 * fVar10 + fVar8 * fVar17;
    fVar35 = *(float *)(lVar1 + 0x530);
    fVar37 = *(float *)(lVar1 + 0x534);
    fVar34 = *(float *)(lVar1 + 0x538);
    fVar8 = *(float *)(lVar1 + 0x53c);
    local_1c0 = fVar37 * fVar11 + fVar35 * fVar40 + fVar34 * fVar30 + fVar8 * fVar14;
    local_1b0 = fVar37 * fVar31 + fVar35 * fVar41 + fVar34 * fVar36 + fVar8 * fVar15;
    fStack_1a0 = fVar37 * fVar33 + fVar35 * fVar12 + fVar34 * fVar9 + fVar8 * fVar16;
    local_190 = fVar37 * fVar39 + fVar35 * fVar13 + fVar34 * fVar10 + fVar8 * fVar17;
    fVar35 = *(float *)(lVar1 + 0x540);
    fVar37 = *(float *)(lVar1 + 0x544);
    fVar34 = *(float *)(lVar1 + 0x548);
    fVar8 = *(float *)(lVar1 + 0x54c);
    local_1bc = fVar37 * fVar11 + fVar35 * fVar40 + fVar34 * fVar30 + fVar8 * fVar14;
    local_1ac = fVar37 * fVar31 + fVar35 * fVar41 + fVar34 * fVar36 + fVar8 * fVar15;
    fStack_19c = fVar37 * fVar33 + fVar35 * fVar12 + fVar34 * fVar9 + fVar8 * fVar16;
    local_18c = fVar37 * fVar39 + fVar35 * fVar13 + fVar34 * fVar10 + fVar8 * fVar17;
    fVar35 = *(float *)(lVar1 + 0x2a60);
    fVar37 = *(float *)(lVar1 + 0x2a64);
    fVar34 = *(float *)(lVar1 + 0x2a68);
    fVar8 = *(float *)(lVar1 + 0x2a6c);
    local_178 = fVar37 * fVar22 + fVar35 * fVar26 + fVar34 * local_128 + fVar8 * fVar18;
    fStack_174 = fVar37 * fVar23 + fVar35 * fVar27 + fVar34 * fStack_124 + fVar8 * fVar19;
    fStack_170 = fVar37 * fVar24 + fVar35 * fVar28 + fVar34 * fStack_120 + fVar8 * fVar20;
    fVar41 = fVar37 * fVar25 + fVar35 * fVar29 + fVar34 * fStack_11c + fVar8 * fVar21;
    fVar35 = *(float *)(lVar1 + 0x2a70);
    fVar37 = *(float *)(lVar1 + 0x2a74);
    fVar34 = *(float *)(lVar1 + 0x2a78);
    fVar8 = *(float *)(lVar1 + 0x2a7c);
    local_168 = fVar37 * fVar22 + fVar35 * fVar26 + fVar34 * local_128 + fVar8 * fVar18;
    fStack_164 = fVar37 * fVar23 + fVar35 * fVar27 + fVar34 * fStack_124 + fVar8 * fVar19;
    fStack_160 = fVar37 * fVar24 + fVar35 * fVar28 + fVar34 * fStack_120 + fVar8 * fVar20;
    fVar40 = fVar37 * fVar25 + fVar35 * fVar29 + fVar34 * fStack_11c + fVar8 * fVar21;
    fVar35 = *(float *)(lVar1 + 0x2a80);
    fVar37 = *(float *)(lVar1 + 0x2a84);
    fVar34 = *(float *)(lVar1 + 0x2a88);
    fVar8 = *(float *)(lVar1 + 0x2a8c);
    local_158 = fVar37 * fVar22 + fVar35 * fVar26 + fVar34 * local_128 + fVar8 * fVar18;
    fStack_154 = fVar37 * fVar23 + fVar35 * fVar27 + fVar34 * fStack_124 + fVar8 * fVar19;
    fStack_150 = fVar37 * fVar24 + fVar35 * fVar28 + fVar34 * fStack_120 + fVar8 * fVar20;
    fVar39 = fVar37 * fVar25 + fVar35 * fVar29 + fVar34 * fStack_11c + fVar8 * fVar21;
    fVar35 = *(float *)(lVar1 + 0x2a90);
    fVar37 = *(float *)(lVar1 + 0x2a94);
    fVar34 = *(float *)(lVar1 + 0x2a98);
    fVar8 = *(float *)(lVar1 + 0x2a9c);
    fVar31 = fVar34 * local_128;
    fVar33 = fVar34 * fStack_124;
    fVar34 = fVar34 * fStack_11c;
    fVar9 = *(float *)(lVar1 + 0x2910);
    fVar10 = *(float *)(lVar1 + 0x2914);
    fVar11 = *(float *)(lVar1 + 0x291c);
    fStack_16c = fVar41;
    fStack_15c = fVar40;
    fStack_14c = fVar39;
    Inverse4x4(&local_148,&local_1c8);
    dVar6 = (double)(fVar37 * fVar23 + fVar35 * fVar27 + fVar33 + fVar8 * fVar10);
    local_140 = (local_130 - local_148) + local_140;
    dVar5 = (local_110 - (double)CONCAT44(fStack_124,local_128)) +
            (double)CONCAT44(fStack_11c,fStack_120);
    local_188 = (double)fVar40;
    dVar7 = (double)fVar41;
    dVar2 = (double)fVar39;
    dVar4 = (double)(fVar37 * fVar25 + fVar35 * fVar29 + fVar34 + fVar8 * fVar11);
    dVar3 = local_e0 * dVar4;
    dVar38 = local_d0 * dVar4 - local_e8 * dVar4;
    local_100 = (local_f0 - local_108) + local_100;
    dVar32 = (double)(fVar37 * fVar22 + fVar35 * fVar26 + fVar31 + fVar8 * fVar9) + dVar4;
    fVar37 = 1.0 / (float)(dVar3 + dVar3 + dVar38 + dVar38 + local_140 * dVar7 + local_140 * dVar7 +
                           dVar5 * local_188 + dVar5 * local_188 +
                          local_100 * dVar2 + local_100 * dVar2);
    fVar35 = (float)(((local_d0 + local_e0) * dVar32 - local_e8 * dVar32) +
                     ((double)local_178 + dVar7) * local_140 +
                     ((double)local_168 + local_188) * dVar5 +
                    ((double)local_158 + dVar2) * local_100) * fVar37;
    fVar37 = (float)((((dVar4 - dVar6) * local_d0 + dVar3) - local_e0 * dVar6) +
                     (dVar6 - dVar4) * local_e8 + (dVar7 - (double)fStack_174) * local_140 +
                     (local_188 - (double)fStack_164) * dVar5 +
                    (dVar2 - (double)fStack_154) * local_100) * fVar37;
    fVar35 = fVar37 * fVar37 + fVar35 * fVar35;
    if (0.0 < fVar35) {
      fVar35 = SQRT(fVar35);
    }
    fVar35 = 0.25 - fVar35 * 8.0;
    local_1d8._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
    local_1d8 = CONCAT44(local_1d8._4_4_,fVar35);
    if (fVar35 < 0.0) {
      local_1d8 = (ulonglong)local_1d8._4_4_ << 0x20;
    }
  }
  local_1f8 = local_1f8 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2[8],local_1d0,param_1 + 0x1bc,&local_1d8);
  return;
}



// FUNCTION 141c924b0 FUN_141c924b0 body=1011 status=ok
// SIG undefined FUN_141c924b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c924b0(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar3 = 0;
  uVar6 = *(undefined8 *)(lVar5 + 0x38);
  lVar5 = *param_3;
  local_res18[0] = uVar6;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar3;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141c92558;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a0e8b8) && (_Init_thread_header(&DAT_146a0e8b8), DAT_146a0e8b8 == -1))
  {
    _DAT_146a0e8b0 = 0;
    DAT_146a0e8b4 = 0;
    DAT_146a0e8b6 = 0;
    _Init_thread_footer(&DAT_146a0e8b8);
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141c92558:
  FUN_141aad730(param_2,uVar6,puVar10,lVar5 + 0x20);
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar4 = (undefined8 *)FUN_141d9d800(param_1,local_res8,param_2,lVar5);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *puVar4;
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar6;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar2 = *(undefined8 *)(lVar5 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar6;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
    uVar2 = *(undefined8 *)(lVar5 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar6;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
  }
  if ((*(char *)(lVar5 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))) {
    lVar5 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar5 + 0x10),-(*(int *)(lVar5 + 0xf60) != 0) & 2);
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar9 = uVar3;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b09780) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                      (param_2,uVar6,puVar10,*(undefined8 *)(lVar5 + 0x20));
            goto LAB_141c927f0;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a0e8c8) &&
       (_Init_thread_header(&DAT_146a0e8c8), DAT_146a0e8c8 == -1)) {
      _DAT_146a0e8c0 = 0;
      _DAT_146a0e8c4 = 0;
      DAT_146a0e8c6 = 0;
      _Init_thread_footer(&DAT_146a0e8c8);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar6,&DAT_146a0e8c0,*(undefined8 *)(lVar5 + 0x20));
  }
LAB_141c927f0:
  uVar6 = FUN_1404a0e20();
  FPostProcessPassParameters::SetVS(param_1 + 0x110,local_res18,param_3,uVar6,0,0);
  return;
}



// FUNCTION 141c928b0 FUN_141c928b0 body=618 status=ok
// SIG undefined FUN_141c928b0(void)

void FUN_141c928b0(longlong param_1,longlong *param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar10;
  undefined8 local_48 [2];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_48[0] = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,param_2[8],local_48[0],*(undefined8 *)(*param_2 + 0x20));
  FUN_141aa6fa0(param_1 + 0x1bc,param_2[8],local_48,*(undefined4 *)(*param_2 + 0x1a38),
                CONCAT44(uVar10,0xf));
  uVar5 = FUN_1404a0e20();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2[8],local_48,param_2,uVar5,0,0);
  fVar8 = (float)((int)param_2[2] - (int)param_2[1]);
  local_38 = (float)(*(int *)((longlong)param_2 + 0x14) - *(int *)((longlong)param_2 + 0xc)) / fVar8
  ;
  if (param_2[4] == 0) {
    fVar9 = 1.0;
  }
  else {
    fVar9 = *(float *)(param_2[4] + 0x204);
  }
  uVar5 = uVar5 & 0xffffffff00000000;
  fVar8 = fVar8 * param_3 * 0.5;
  local_34 = fVar8 * fVar9 * 0.5 * *(float *)(*param_2 + 0x177c);
  local_2c = ABS(fVar8) * *(float *)(*param_2 + 0x1780) * 0.01;
  local_30 = local_34 * 0.0625;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_48[0],param_1 + 0x1cc,&local_38,uVar5);
  uVar6 = FUN_141c7d8d0(&local_38,param_2);
  uVar5 = uVar5 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_48[0],param_1 + 0x1d2,uVar6,uVar5);
  if (*(short *)(param_1 + 0x1dc) != 0) {
    lVar7 = FSceneRenderTargets::Get(param_2[8]);
    lVar2 = *param_2;
    iVar3 = (*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0)) + 0xf;
    iVar4 = (int)*(undefined8 *)(lVar7 + 0x378) + 0xf;
    iVar1 = (*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4)) + 0xf;
    local_38 = ((float)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) - 0.5) /
               (float)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
    iVar3 = (int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20) + 0xf;
    local_34 = ((float)((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4) - 0.5) /
               (float)((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4);
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2[8],local_48[0],param_1 + 0x1d8,&local_38,uVar5 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141c92b20 FUN_141c92b20 body=597 status=ok
// SIG undefined FUN_141c92b20(void)

void FUN_141c92b20(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  float param_5,undefined4 param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong _Size;
  float fVar9;
  undefined8 local_res10;
  undefined8 local_58;
  undefined8 local_50;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res10 = *(undefined8 *)(lVar3 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res10,*(undefined8 *)(*param_2 + 0x20));
  uVar5 = FUN_141a156e0();
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,&local_res10,param_2,uVar5,0,0);
  uVar5 = local_res10;
  lVar3 = param_2[8];
  local_50 = CONCAT44(param_4,param_4);
  uVar4 = (uint)*(ushort *)(param_1 + 0x1c0);
  if (0xf < *(ushort *)(param_1 + 0x1c0)) {
    uVar4 = 0x10;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1be);
    uVar2 = *(ushort *)(param_1 + 0x1bc);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)_Dst + _Size;
    local_58 = param_3;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_58,_Size);
    puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar7;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar8;
    *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f4d340;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    puVar8[2] = uVar5;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar4;
  }
  fVar9 = param_5 * param_5;
  local_50 = 0;
  if (fVar9 <= 1.0) {
    fVar9 = 1.0;
  }
  local_58 = CONCAT44(param_6,1.0 / fVar9);
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1c8,&local_58,0);
  local_58 = CONCAT44(param_5,param_5);
  local_50 = 0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1c2,&local_58,0);
  return;
}



// FUNCTION 141c92d80 FUN_141c92d80 body=612 status=ok
// SIG undefined FUN_141c92d80(void)

void FUN_141c92d80(longlong param_1,longlong *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong _Size;
  float fVar9;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = param_3;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res20 = *(undefined8 *)(lVar3 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res20,*(undefined8 *)(*param_2 + 0x20));
  uVar5 = FUN_1404a0e20();
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,&local_res20,param_2,uVar5,0,0);
  uVar5 = local_res20;
  lVar3 = param_2[8];
  uVar4 = (uint)*(ushort *)(param_1 + 0x1c0);
  if (3 < *(ushort *)(param_1 + 0x1c0)) {
    uVar4 = 4;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1be);
    uVar2 = *(ushort *)(param_1 + 0x1bc);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,local_res18,_Size);
    puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar7;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar8;
    *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f4d340;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    puVar8[3] = _Dst;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    puVar8[2] = uVar5;
    *(uint *)(puVar8 + 5) = uVar4;
  }
  local_54 = (float)((int)param_2[2] - (int)param_2[1]);
  local_58 = (float)(*(int *)((longlong)param_2 + 0x14) - *(int *)((longlong)param_2 + 0xc)) /
             local_54;
  if (param_2[4] == 0) {
    fVar9 = 1.0;
  }
  else {
    fVar9 = *(float *)(param_2[4] + 0x204);
  }
  local_54 = local_54 * 0.5;
  local_4c = ABS(local_54) * *(float *)(*param_2 + 0x1780) * 0.01;
  local_54 = fVar9 * *(float *)(*param_2 + 0x177c) * 0.5 * local_54;
  local_50 = local_54 * 0.0625;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res20,param_1 + 0x1c2,&local_58,0);
  return;
}



// FUNCTION 141c92ff0 FUN_141c92ff0 body=463 status=ok
// SIG undefined FUN_141c92ff0(void)

void FUN_141c92ff0(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  float fVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float local_28;
  float local_24;
  undefined8 local_20;
  
  FSceneRenderTargets::Get(param_2);
  fVar1 = *(float *)(*param_4 + 0x390);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a5e278) {
    _Init_thread_header(&DAT_146a5e278);
    if (DAT_146a5e278 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SSS.Scale");
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
      }
      DAT_146a5e270 = lVar8;
      _Init_thread_footer(&DAT_146a5e278);
    }
  }
  local_24 = *(float *)(DAT_146a5e270 + 4);
  if (local_24 <= 0.0) {
    local_24 = 0.0;
  }
  local_20 = 0;
  local_24 = local_24 * fVar1;
  local_28 = local_24 * 0.16666667;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_4[8],*param_3,param_1,&local_28,0);
  lVar5 = GetSubsufaceProfileTexture_RT(param_4[8]);
  uVar3 = *param_3;
  lVar8 = param_4[8];
  if (lVar5 == 0) {
    lVar5 = DAT_1464c3318;
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  if (*(short *)(param_1 + 8) != 0) {
    uVar2 = *(ushort *)(param_1 + 6);
    puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar6;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar9;
    *(undefined8 **)(lVar8 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *(uint *)(puVar9 + 3) = (uint)uVar2;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar3;
    puVar9[4] = uVar4;
  }
  return;
}



// FUNCTION 141c931c0 FUN_141c931c0 body=770 status=ok
// SIG undefined FUN_141c931c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c931c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  ulonglong local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
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
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_2[0xc];
  local_108 = 0;
  local_110 = &DAT_146a55500;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar5;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_110 = &DAT_146a55650;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar5;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar5;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_118 = *(ulonglong *)(lVar3 + 0x38);
  FUN_141c07aa0(lVar2,param_2[8],local_118,*(undefined8 *)(*param_2 + 0x20));
  uVar6 = FUN_141a156e0();
  local_130 = 0;
  local_138 = (ulonglong)local_138._4_4_ << 0x20;
  FPostProcessPassParameters::SetVS(lVar2 + 0xc0,&local_118,param_2,uVar6);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  lVar3 = param_2[8];
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  lVar2 = *param_2;
  FUN_141aa9690(lVar1,lVar3,local_118,*(undefined8 *)(lVar2 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = local_130 & 0xffffffff00000000;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,lVar3,&local_118,param_2);
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (lVar3,local_118,lVar1 + 0x1bc,lVar2 + 0x146c);
  return;
}



// FUNCTION 141c934d0 FUN_141c934d0 body=1085 status=ok
// SIG undefined FUN_141c934d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c934d0(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  ulonglong local_140;
  undefined8 local_138;
  ulonglong local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar6 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
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
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar2 = param_2[0xc];
  local_118 = 0.0;
  local_120 = &DAT_146a564c0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar9 = plVar6;
  if ((int)local_128 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_118 = 0.0;
  plVar8 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  local_120 = &DAT_146a56370;
  lVar3 = *plVar8;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar9 = plVar6;
  if ((int)local_128 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar8 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  lVar2 = *plVar8;
  local_f8 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_128 = 0;
    plVar9 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_f0 = *(longlong **)(lVar4 + 0x38);
    plVar9 = plVar6;
  }
  if (plVar9 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar2 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plVar6 = *(longlong **)(lVar4 + 0x40);
  }
  local_d8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_128 = *(ulonglong *)(lVar4 + 0x38);
  FUN_141c07aa0(lVar3,param_2[8],local_128,*(undefined8 *)(*param_2 + 0x20));
  uVar7 = FUN_141a156e0();
  local_140 = 0;
  local_148 = (ulonglong)local_148._4_4_ << 0x20;
  FPostProcessPassParameters::SetVS(lVar3 + 0xc0,&local_128,param_2,uVar7);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_128 = *(ulonglong *)(lVar3 + 0x40);
  lVar3 = *param_2;
  FUN_141aa9690(lVar2,param_2[8],local_128,*(undefined8 *)(lVar3 + 0x20));
  local_148 = FUN_141a156e0();
  local_138 = 0;
  local_140 = local_140 & 0xffffffff00000000;
  thunk_FUN_141ca99a0(lVar2 + 0xc0,param_2[8],&local_128,param_2);
  local_108 = *(undefined8 *)(*param_2 + 0x3000);
  _uStack_100 = CONCAT44(*(undefined4 *)(lVar3 + 0x1650),*(undefined4 *)(*param_2 + 0x3008));
  local_148 = local_148 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_128,lVar2 + 0x1bc,&local_108);
  lVar3 = *param_2;
  fVar1 = *(float *)(lVar3 + 0x1468);
  local_148 = local_148 & 0xffffffff00000000;
  local_118 = *(float *)(lVar3 + 0x1494) * fVar1 * 0.5;
  local_114 = *(float *)(lVar3 + 0x1498) * fVar1 * 0.5;
  local_120 = (undefined *)
              CONCAT44(*(float *)(lVar3 + 0x1490) * fVar1 * 0.5,
                       fVar1 * *(float *)(lVar3 + 0x148c) * 0.5);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_128,lVar2 + 0x1c8,&local_120);
  lVar3 = *param_2;
  local_148 = local_148 & 0xffffffff00000000;
  fVar1 = *(float *)(lVar3 + 0x1468);
  local_114 = fVar1 * *(float *)(lVar3 + 0x14a8);
  local_118 = fVar1 * *(float *)(lVar3 + 0x14a4);
  local_120 = (undefined *)
              CONCAT44(fVar1 * *(float *)(lVar3 + 0x14a0),fVar1 * *(float *)(lVar3 + 0x149c));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_128,lVar2 + 0x1ce,&local_120);
  return;
}



// FUNCTION 141c93910 FUN_141c93910 body=790 status=ok
// SIG undefined FUN_141c93910(void)

void FUN_141c93910(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 local_res8;
  undefined1 local_68 [16];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res8,*(undefined8 *)(*param_2 + 0x20));
  uVar6 = FUN_141a156e0();
  puVar8 = &local_res8;
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,puVar8,param_2,uVar6,0,0);
  uVar12 = (ulonglong)puVar8 & 0xffffffffffffff00;
  plVar3 = *(longlong **)(*param_2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar3 + 0x70))(plVar3,uVar12);
    uVar12 = (ulonglong)uVar5;
  }
  GrainRandomFromFrame(local_68,uVar12 & 0xff);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1c0,local_68,0);
  cVar4 = FUN_141d6a650(*param_2);
  uVar6 = local_res8;
  if (cVar4 == '\0') {
    lVar2 = param_2[8];
    uVar14 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
    if (*(short *)(param_1 + 0x1be) == 0) goto LAB_141c93ae6;
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar10;
    puVar8 = puVar10 + 1;
    *(undefined8 **)(lVar2 + 8) = puVar8;
  }
  else {
    lVar7 = FViewInfo::GetEyeAdaptation(*param_2,param_2[8]);
    uVar6 = local_res8;
    lVar2 = param_2[8];
    uVar14 = *(undefined8 *)(lVar7 + 8);
    if (*(short *)(param_1 + 0x1be) == 0) goto LAB_141c93ae6;
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar10;
    puVar8 = puVar10 + 1;
    *(undefined8 **)(lVar2 + 8) = puVar8;
  }
  *puVar8 = 0;
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  puVar10[4] = uVar14;
  puVar10[2] = uVar6;
  *puVar10 = &PTR_LAB_143f59c50;
LAB_141c93ae6:
  iVar11 = (int)param_2[1];
  iVar13 = (int)((ulonglong)param_2[1] >> 0x20);
  iVar9 = *(int *)((longlong)param_2 + 0x14) - iVar13;
  local_58 = (float)((int)param_2[2] - iVar11) * 0.5;
  local_54 = (float)-iVar9 * 0.5;
  local_50 = ((float)iVar11 + local_58) - 0.5;
  local_4c = ((float)iVar9 * 0.5 + (float)iVar13) - 0.5;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1cc,&local_58,0);
  local_40 = *(undefined4 *)(*param_2 + 0x1654);
  local_48 = *(undefined4 *)(*param_2 + 0x1650);
  local_44 = 0;
  local_3c = 0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1d2,&local_48,0);
  local_34 = *(undefined4 *)(*param_2 + 0x1810);
  local_38 = *(undefined4 *)(*param_2 + 0x180c);
  local_30 = 0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1d8,&local_38,0);
  return;
}



// FUNCTION 141c93c30 FUN_141c93c30 body=826 status=ok
// SIG undefined FUN_141c93c30(void)

void FUN_141c93c30(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined1 local_78 [16];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res10 = *(undefined8 *)(lVar2 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res10,*(undefined8 *)(*param_2 + 0x20));
  uVar6 = FUN_141a156e0();
  puVar8 = &local_res10;
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,puVar8,param_2,uVar6,0,0);
  uVar12 = (ulonglong)puVar8 & 0xffffffffffffff00;
  plVar3 = *(longlong **)(*param_2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar3 + 0x70))(plVar3,uVar12);
    uVar12 = (ulonglong)uVar5;
  }
  GrainRandomFromFrame(local_78,uVar12 & 0xff);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1c0,local_78,0);
  cVar4 = FUN_141d6a650(*param_2);
  uVar6 = local_res10;
  if (cVar4 == '\0') {
    lVar2 = param_2[8];
    uVar14 = *(undefined8 *)(DAT_146ac3d68 + 0x30);
    if (*(short *)(param_1 + 0x1be) == 0) goto LAB_141c93e03;
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar10;
    puVar8 = puVar10 + 1;
    *(undefined8 **)(lVar2 + 8) = puVar8;
  }
  else {
    lVar7 = FViewInfo::GetEyeAdaptation(*param_2,param_2[8]);
    uVar6 = local_res10;
    lVar2 = param_2[8];
    uVar14 = *(undefined8 *)(lVar7 + 8);
    if (*(short *)(param_1 + 0x1be) == 0) goto LAB_141c93e03;
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar10;
    puVar8 = puVar10 + 1;
    *(undefined8 **)(lVar2 + 8) = puVar8;
  }
  *puVar8 = 0;
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  puVar10[4] = uVar14;
  puVar10[2] = uVar6;
  *puVar10 = &PTR_LAB_143f59c50;
LAB_141c93e03:
  local_res8[0] = FRCPassPostProcessEyeAdaptation::GetFixedExposure(*param_2);
  FUN_1404986d0(param_2[8],local_res10,param_1 + 0x1c6,local_res8,0);
  iVar11 = (int)param_2[1];
  iVar13 = (int)((ulonglong)param_2[1] >> 0x20);
  iVar9 = *(int *)((longlong)param_2 + 0x14) - iVar13;
  local_68 = (float)((int)param_2[2] - iVar11) * 0.5;
  local_64 = (float)-iVar9 * 0.5;
  local_60 = ((float)iVar11 + local_68) - 0.5;
  local_5c = ((float)iVar9 * 0.5 + (float)iVar13) - 0.5;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1cc,&local_68,0);
  local_50 = *(undefined4 *)(*param_2 + 0x1654);
  local_58 = *(undefined4 *)(*param_2 + 0x1650);
  local_54 = 0;
  local_4c = 0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1d2,&local_58,0);
  local_44 = *(undefined4 *)(*param_2 + 0x1810);
  local_48 = *(undefined4 *)(*param_2 + 0x180c);
  local_40 = 0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1d8,&local_48,0);
  return;
}



// FUNCTION 141c93f70 FUN_141c93f70 body=122 status=ok
// SIG undefined FUN_141c93f70(void)

void FUN_141c93f70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res8,*(undefined8 *)(*param_2 + 0x20));
  uVar2 = FUN_141a156e0();
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,&local_res8,param_2,uVar2,0,0);
  return;
}



// FUNCTION 141c93ff0 FUN_141c93ff0 body=394 status=ok
// SIG undefined FUN_141c93ff0(void)

void FUN_141c93ff0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong _Size;
  undefined8 local_res8;
  undefined8 local_48 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_48[0] = param_3;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res8 = *(undefined8 *)(lVar3 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res8,*(undefined8 *)(*param_2 + 0x20));
  uVar5 = FUN_141a156e0();
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,&local_res8,param_2,uVar5,0,0);
  uVar5 = local_res8;
  lVar3 = param_2[8];
  uVar4 = (uint)*(ushort *)(param_1 + 0x1c0);
  if (7 < *(ushort *)(param_1 + 0x1c0)) {
    uVar4 = 8;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1bc);
    uVar2 = *(ushort *)(param_1 + 0x1be);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,local_48,_Size);
    puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar7;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar8;
    *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar2;
    *puVar8 = &PTR_LAB_143f4d340;
    puVar8[2] = uVar5;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar4;
  }
  return;
}



// FUNCTION 141c94180 FUN_141c94180 body=122 status=ok
// SIG undefined FUN_141c94180(void)

void FUN_141c94180(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res8,*(undefined8 *)(*param_2 + 0x20));
  uVar2 = FUN_1404a0e20();
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,&local_res8,param_2,uVar2,0,0);
  return;
}



// FUNCTION 141c94200 FUN_141c94200 body=157 status=ok
// SIG undefined FUN_141c94200(void)

void FUN_141c94200(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res8,*(undefined8 *)(*param_2 + 0x20));
  uVar2 = FUN_141a156e0();
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,&local_res8,param_2,uVar2,0,0);
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res8,param_1 + 0x1bc,*param_2 + 0x2fe0,0);
  return;
}



// FUNCTION 141c942a0 FUN_141c942a0 body=572 status=ok
// SIG undefined FUN_141c942a0(void)

void FUN_141c942a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  float local_res8 [2];
  undefined8 local_res10;
  undefined1 local_58 [8];
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res10 = *(undefined8 *)(lVar1 + 0x38);
  FUN_141c07aa0(param_1,param_2[8],local_res10,*(undefined8 *)(*param_2 + 0x20));
  uVar5 = FUN_141a156e0();
  puVar8 = &local_res10;
  bVar3 = 0;
  FPostProcessPassParameters::SetVS(param_1 + 0xc0,puVar8,param_2,uVar5,0,0);
  uVar9 = (ulonglong)puVar8 & 0xffffffffffffff00;
  plVar2 = *(longlong **)(*param_2 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,uVar9);
    uVar9 = (ulonglong)uVar4;
  }
  GrainRandomFromFrame(local_58,uVar9 & 0xff);
  if (*(char *)(param_1 + 0x1de) == '\0') {
    local_50 = 0x3f800000;
  }
  else {
    local_50 = 0;
  }
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1c0,local_58,0);
  local_res8[0] = ABS(*(float *)(*param_2 + 0x145c)) * 0.01;
  FUN_1404986d0(param_2[8],local_res10,param_1 + 0x1c6,local_res8,0);
  iVar7 = (int)param_2[1];
  iVar10 = (int)((ulonglong)param_2[1] >> 0x20);
  iVar6 = *(int *)((longlong)param_2 + 0x14) - iVar10;
  local_48 = (float)((int)param_2[2] - iVar7) * 0.5;
  local_44 = (float)-iVar6 * 0.5;
  local_40 = ((float)iVar7 + local_48) - 0.5;
  local_3c = ((float)iVar6 * 0.5 + (float)iVar10) - 0.5;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1cc,&local_48,0);
  local_30 = *(undefined4 *)(*param_2 + 0x1654);
  local_38 = *(undefined4 *)(*param_2 + 0x1650);
  local_34 = 0;
  local_2c = 0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1d2,&local_38,0);
  lVar1 = *param_2;
  if (*(longlong *)(lVar1 + 0x1a40) != 0) {
    bVar3 = *(byte *)(*(longlong *)(lVar1 + 0x1a40) + 0xcd);
  }
  local_24 = *(undefined4 *)(lVar1 + 0x1810);
  local_28 = *(undefined4 *)(lVar1 + 0x180c);
  local_20 = (float)bVar3;
  local_1c = 0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_res10,param_1 + 0x1d8,&local_28,0);
  return;
}



// FUNCTION 141c944e0 FUN_141c944e0 body=351 status=ok
// SIG undefined FUN_141c944e0(void)

ulonglong FUN_141c944e0(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  char cStack_20;
  int local_18;
  
  local_28 = (undefined4)*param_1;
  uStack_24 = *(undefined4 *)((longlong)param_1 + 4);
  local_res8 = *param_1;
  cStack_20 = (char)(int)param_1[1];
  cVar4 = (char)*(undefined4 *)((longlong)param_1 + 0xc);
  uVar3 = *param_1;
  if ((char)((uint)local_28 >> 8) == '\0') {
    if (((char)((uint)local_28 >> 0x18) != '\0') || ((char)((uint)uStack_24 >> 0x10) != '\0')) {
      local_res8 = CONCAT44(uStack_24,CONCAT13(1,(int3)local_28));
      local_res8 = (ulonglong)CONCAT25(0x101,(undefined5)local_res8);
      cStack_20 = '\x01';
    }
    uVar2 = local_res8;
    local_res8 = CONCAT71(local_res8._1_7_,1);
    local_28 = (undefined4)local_res8;
    uStack_24 = (undefined4)(uVar2 >> 0x20);
    cVar4 = '\x01';
  }
  if ((((((char)local_28 == (char)uVar3) &&
        ((char)((uint)local_28 >> 8) == *(char *)((longlong)param_1 + 1))) &&
       ((char)((uint)local_28 >> 0x10) == *(char *)((longlong)param_1 + 2))) &&
      (((((char)((uint)local_28 >> 0x18) == *(char *)((longlong)param_1 + 3) &&
         ((char)uStack_24 == *(char *)((longlong)param_1 + 4))) &&
        (((char)((uint)uStack_24 >> 8) == *(char *)((longlong)param_1 + 5) &&
         (((char)((uint)uStack_24 >> 0x10) == *(char *)((longlong)param_1 + 6) &&
          (cStack_20 == (char)param_1[1])))))) && (cVar4 == *(char *)((longlong)param_1 + 0xc)))))
     && (local_18 = (int)param_1[2], local_18 == (int)param_1[2])) {
    cVar4 = (char)(uVar3 >> 8);
    if (cVar4 == '\0') {
      iVar1 = 0x10;
    }
    else {
      if (((((char)uVar3 != '\0') || ((char)(uVar3 >> 0x18) != '\0')) ||
          ((char)(uVar3 >> 0x20) != '\0')) || ((char)(uVar3 >> 0x28) != '\0')) goto LAB_141c94638;
      iVar1 = 0x30;
    }
    uVar3 = uVar3 >> iVar1;
    if (((char)uVar3 == '\0') &&
       ((cVar4 == '\0' ||
        (((char)param_1[1] == '\0' && (*(char *)((longlong)param_1 + 0xc) == '\0')))))) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
LAB_141c94638:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141c94660 ShouldCompilePermutation body=62 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 FPostProcessMaterialPS<1,0>::ShouldCompilePermutation(uint param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  if (((iVar2 == 4) && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_142753a10();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141c946a0 FUN_141c946a0 body=49 status=ok
// SIG undefined FUN_141c946a0(void)

bool FUN_141c946a0(undefined4 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (iVar1 == 4) {
    iVar1 = FUN_1419ef5f0(param_1);
    return 1 < iVar1;
  }
  return false;
}



// FUNCTION 141c946e0 ShouldCompilePermutation body=72 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined1 FPostProcessMorpheusPS::ShouldCompilePermutation(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  cVar1 = FConfigCacheIni::GetBool
                    (DAT_1468b6148,L"/Script/MorpheusEditor.MorpheusRuntimeSettings",
                     L"bEnableMorpheus",local_res10,&DAT_1468e2360);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_res10[0];
  }
  return uVar2;
}



// FUNCTION 141c94730 FUN_141c94730 body=396 status=ok
// SIG undefined FUN_141c94730(void)

ulonglong FUN_141c94730(uint *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  undefined1 uStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  FUN_141c74df0(&local_38,param_1[1]);
  uVar3 = CONCAT17(uStack_31,
                   CONCAT16(cStack_32,
                            CONCAT15(cStack_33,
                                     CONCAT14(cStack_34,
                                              CONCAT13(cStack_35,
                                                       CONCAT12(cStack_36,
                                                                CONCAT11(cStack_37,local_38)))))));
  if (cStack_37 == '\0') {
    iVar2 = 0x10;
  }
  else {
    pcVar5 = (char *)(uVar3 >> 8);
    if ((((local_38 != '\0') || (pcVar5 = (char *)(uVar3 >> 0x18), cStack_35 != '\0')) ||
        (pcVar5 = (char *)(uVar3 >> 0x20), cStack_34 != '\0')) ||
       (pcVar5 = (char *)(uVar3 >> 0x28), cStack_33 != '\0')) goto LAB_141c948af;
    iVar2 = 0x30;
  }
  pcVar5 = (char *)(uVar3 >> iVar2);
  if ((char)(char *)(uVar3 >> iVar2) == '\0') {
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    pcVar4 = (char *)FUN_141c91660(local_18,local_28);
    pcVar5 = pcVar4;
    if ((((((*pcVar4 == local_38) && (pcVar4[1] == cStack_37)) &&
          ((pcVar4[2] == cStack_36 &&
           ((pcVar5 = (char *)0x0, pcVar4[3] == cStack_35 &&
            (pcVar5 = (char *)0x0, pcVar4[4] == cStack_34)))))) &&
         (pcVar5 = (char *)0x0, pcVar4[5] == cStack_33)) &&
        (((pcVar5 = (char *)0x0, pcVar4[6] == cStack_32 &&
          (pcVar5 = (char *)0x0, pcVar4[8] == (char)uStack_30)) &&
         (pcVar5 = (char *)0x0, pcVar4[9] == uStack_30._1_1_)))) &&
       (((pcVar5 = (char *)0x0, pcVar4[10] == uStack_30._2_1_ && (pcVar4[0xb] == uStack_30._3_1_))
        && ((pcVar5 = (char *)0x0, pcVar4[0xc] == (char)uStack_2c &&
            ((pcVar5 = (char *)0x0, pcVar4[0xd] == uStack_2c._1_1_ &&
             (pcVar5 = (char *)0x0, pcVar4[0xe] == uStack_2c._2_1_)))))))) {
      uVar1 = *param_1;
      pcVar5 = (char *)(ulonglong)uVar1;
      if (((uVar1 < 0x1e) &&
          (((0x25e2cf88U >> (uVar1 & 0x1f) & 1) != 0 && (uStack_30._3_1_ == '\0')))) ||
         ((uVar1 == 8 ||
          ((((uVar1 < 0x1e && ((0x25e2ce88U >> (uVar1 & 0x1f) & 1) != 0)) && (uVar1 < 0x1c)) &&
           ((0x8dfc0ebU >> (uVar1 & 0x1f) & 1) != 0)))))) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
LAB_141c948af:
  return (ulonglong)pcVar5 & 0xffffffffffffff00;
}



// FUNCTION 141c948c0 ShouldCompilePermutationImpl body=234 status=ok
// SIG undefined ShouldCompilePermutationImpl(void)

bool FPostProcessTemporalAACS::ShouldCompilePermutationImpl(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = (int)param_1[1] / 7;
  iVar5 = (int)param_1[1] % 7;
  uVar4 = uVar2 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  iVar1 = ((int)uVar2 >> 0x1f & 3U) + uVar2;
  iVar7 = iVar1 >> 2;
  uVar2 = iVar7 / 3 + (iVar1 >> 0x1f) +
          (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
  uVar6 = uVar2 & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  uVar3 = (int)uVar2 / 2 & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  if ((((((iVar5 - 4U & 0xfffffffd) == 0) || (iVar7 + uVar2 * -3 == 0)) &&
       ((uVar4 != 1 || ((iVar5 == 1 || (iVar5 - 4U < 3)))))) && ((uVar6 != 1 || (iVar5 != 1)))) &&
     (((uVar3 != 1 || (iVar5 == 1)) || (iVar5 == 4)))) {
    iVar5 = FUN_1419ef5f0(*param_1);
    return 2 < iVar5;
  }
  return false;
}



// FUNCTION 141c949b0 ShouldCompilePermutationImpl body=134 status=ok
// SIG undefined ShouldCompilePermutationImpl(void)

bool FPostProcessTemporalAAPS::ShouldCompilePermutationImpl(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (int)param_1[1] / 7;
  iVar3 = (int)param_1[1] % 7;
  uVar2 = iVar1 / 2 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if ((((iVar3 - 4U & 0xfffffffd) != 0) && ((iVar1 % 2 != 1 || ((iVar3 - 1U & 0xfffffffb) == 0))))
     && ((uVar2 != 1 || (iVar3 == 1)))) {
    iVar1 = FUN_1419ef5f0(*param_1);
    return 1 < iVar1;
  }
  return false;
}



// FUNCTION 141c94a40 FUN_141c94a40 body=98 status=ok
// SIG undefined FUN_141c94a40(void)

uint FUN_141c94a40(undefined4 *param_1)

{
  uint uVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar1 = FUN_1419ef5f0(*param_1);
  if ((int)uVar1 < 3) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = param_1[1] & 0x80000fff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffff000) + 1;
  }
  FUN_141c74d70(&local_28,uVar1);
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  local_38 = local_18;
  uVar1 = FUN_141c944e0(&local_48);
  return uVar1;
}



// FUNCTION 141c94ab0 FUN_141c94ab0 body=181 status=ok
// SIG undefined FUN_141c94ab0(void)

ulonglong FUN_141c94ab0(undefined4 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar2 = FUN_1419ef5f0(*param_1);
  if ((int)uVar2 < 0) {
    return uVar2 & 0xffffffffffffff00;
  }
  uVar3 = (int)param_1[1] >> 0x1f & 0x7f;
  uVar1 = param_1[1] + uVar3;
  uVar4 = (int)uVar1 >> 7;
  FUN_141c7ced0(&local_48,(uVar1 & 0x7f) - uVar3);
  uVar1 = uVar4 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uStack_40 = CONCAT31(uStack_40._1_3_,uVar1 == 1);
  uVar1 = (int)uVar4 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uStack_3c = CONCAT31(uStack_3c._1_3_,uVar1 == 1);
  local_38 = ((int)uVar4 / 2) / 2 & 0x80000007;
  if ((int)local_38 < 0) {
    local_38 = (local_38 - 1 | 0xfffffff8) + 1;
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uVar2 = FUN_141c944e0(&local_28);
  return uVar2;
}



// FUNCTION 141c94b80 FUN_141c94b80 body=740 status=ok
// SIG undefined FUN_141c94b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c94b80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  ulonglong local_130;
  undefined8 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_b8 = 0;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a56ca0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar5;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_110 = &DAT_146a56b50;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar5;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar5;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_118 = *(ulonglong *)(lVar3 + 0x38);
  FUN_141c07aa0(lVar2,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  uVar6 = FUN_141a156e0();
  local_130 = 0;
  local_138 = (ulonglong)local_138._4_4_ << 0x20;
  FPostProcessPassParameters::SetVS(lVar2 + 0xc0,&local_118,param_1,uVar6);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = local_130 & 0xffffffff00000000;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  return;
}



// FUNCTION 141c94e70 FUN_141c94e70 body=424 status=ok
// SIG undefined FUN_141c94e70(void)

ulonglong FUN_141c94e70(longlong param_1)

{
  bool bVar1;
  uint7 uVar5;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar6;
  
  lVar4 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a61088) && (_Init_thread_header(&DAT_146a61088), DAT_146a61088 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.GrainQuantization");
    lVar2 = lVar4;
    if (plVar3 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a61080 = lVar2;
    _Init_thread_footer(&DAT_146a61088);
  }
  if ((*piVar6 < DAT_146a61098) && (_Init_thread_header(&DAT_146a61098), DAT_146a61098 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"SceneCapture.AllowPostProcessGrainQuantization");
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a61090 = lVar4;
    _Init_thread_footer(&DAT_146a61098);
  }
  lVar4 = *(longlong *)(param_1 + 0x1a40);
  uVar5 = (uint7)((ulonglong)lVar4 >> 8);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0xd5) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(char *)(param_1 + 0x1202) == '\0') {
    return (ulonglong)(0 < *(int *)(DAT_146a61080 + 4));
  }
  if ((((*(int *)(DAT_146a61090 + 4) < 1) || (*(int *)(DAT_146a61080 + 4) < 1)) || (bVar1)) &&
     (*(int *)(DAT_146a61090 + 4) < 2)) {
    return (ulonglong)uVar5 << 8;
  }
  return CONCAT71(uVar5,1);
}



// FUNCTION 141c95020 FUN_141c95020 body=255 status=ok
// SIG undefined FUN_141c95020(void)

void FUN_141c95020(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  cVar2 = FUN_141d6a650(*param_2);
  if (cVar2 != '\0') {
    lVar3 = FViewInfo::GetEyeAdaptation(*param_2);
    lVar3 = *(longlong *)(lVar3 + 8);
    if (lVar3 != 0) {
      lVar1 = param_2[8];
      plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar4 = plVar7 + 1;
      if (*(longlong **)(lVar1 + 0x38) < plVar4) {
        FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
        plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar4 = plVar7 + 1;
      }
      *(longlong **)(lVar1 + 0x30) = plVar4;
      *plVar7 = lVar3;
      puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(lVar1 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
        puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(lVar1 + 0x30) = puVar5;
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
      **(undefined8 **)(lVar1 + 8) = puVar6;
      *(undefined8 **)(lVar1 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar6 + 2) = 1;
      puVar6[3] = plVar7;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
    }
  }
  return;
}



// FUNCTION 141c95120 FUN_141c95120 body=200 status=ok
// SIG undefined FUN_141c95120(void)

undefined1 FUN_141c95120(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(uVar1,param_1 + 0xc6);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xcc);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xdc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xe2);
  FUN_1419e0a40(uVar1,param_1 + 0xe8);
  return 0;
}



// FUNCTION 141c951f0 Serialize body=221 status=ok
// SIG undefined Serialize(void)

ulonglong TFilterPS<1,1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xdc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xe2);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xe8);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c952d0 FUN_141c952d0 body=77 status=ok
// SIG undefined FUN_141c952d0(void)

ulonglong FUN_141c952d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1c4);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c95320 FUN_141c95320 body=316 status=ok
// SIG undefined FUN_141c95320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c95320(longlong param_1)

{
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined1 local_a8 [8];
  undefined **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_38 = 0x10000;
  uStack_34 = 0x20002;
  uStack_30 = 0x30001;
  uStack_2c = 0x40000;
  local_98 = (undefined8 *)0x0;
  local_90 = 9;
  local_a0 = &PTR_GetBoundProgramCounterForTimerManager_144e09148;
  local_88 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  local_b8 = &local_78;
  local_c0 = 1;
  *local_98 = CONCAT44(uStack_34,local_38);
  local_98[1] = CONCAT44(uStack_2c,uStack_30);
  *(undefined2 *)(local_98 + 2) = 5;
  local_70 = &local_a0;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_78 = 0;
  local_c8 = (int)local_90 * 2;
  local_68 = 1;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_a8,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_a8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a8);
  if (local_98 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141c95460 FUN_141c95460 body=89 status=ok
// SIG undefined FUN_141c95460(void)

undefined8 * FUN_141c95460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e33468;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c954c0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e334a8;
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



// FUNCTION 141c95530 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e334e8;
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



// FUNCTION 141c955a0 FUN_141c955a0 body=89 status=ok
// SIG undefined FUN_141c955a0(void)

undefined8 * FUN_141c955a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e33528;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144e345b0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c95600 FUN_141c95600 body=50 status=ok
// SIG undefined FUN_141c95600(void)

ulonglong FUN_141c95600(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar2 = FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c95640 ReleaseDynamicRHI body=147 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FRenderTargetPool::ReleaseDynamicRHI(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FUN_141d066f0();
  FVisualizeTexture::Destroy(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x108);
  for (iVar2 = *(int *)(param_1 + 0x110); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FUN_141cf2980();
    }
    plVar1 = plVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x108,0);
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_141ce1220(param_1);
  }
  return;
}



// FUNCTION 141c956e0 Serialize body=163 status=ok
// SIG undefined Serialize(void)

ulonglong FVisualizeComplexityApplyPS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1c2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1d2);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c95790 Serialize body=376 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessVisualizeHDRPS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1c2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1de);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1ea);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1f0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1f6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1fc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x202);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x208);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c95910 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144e34270;
  FRenderResource::ReleaseResource();
  FUN_141cd8c50(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x448);
  }
  return this;
}



// FUNCTION 141c95960 FUN_141c95960 body=25 status=ok
// SIG undefined FUN_141c95960(void)

void FUN_141c95960(void)

{
  FUN_141cf2c40();
  FUN_141ce4020(&PTR_PTR_1464c2560);
  return;
}



// FUNCTION 141c95980 FUN_141c95980 body=350 status=ok
// SIG undefined FUN_141c95980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c95980(longlong param_1)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined1 local_88 [8];
  undefined **local_80;
  short *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined ***local_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_70 = 0xf00;
  local_78 = (short *)0x0;
  local_68 = 0;
  local_80 = &PTR_GetBoundProgramCounterForTimerManager_144e09148;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  psVar2 = local_78;
  uVar4 = 0;
  do {
    uVar3 = 0;
    do {
      sVar1 = (short)uVar3 + (short)uVar4 * 0x21;
      uVar3 = uVar3 + 1;
      *psVar2 = sVar1;
      psVar2[1] = sVar1 + 0x21;
      psVar2[2] = sVar1 + 1;
      psVar2[3] = sVar1 + 0x22;
      psVar2[4] = sVar1 + 1;
      psVar2[5] = sVar1 + 0x21;
      psVar2 = psVar2 + 6;
    } while (uVar3 < 0x20);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x14);
  local_50 = &local_80;
  local_98 = &local_58;
  local_a8 = (int)local_70 * 2;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_58 = 0;
  local_48 = 1;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_a0 = 1;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_88,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  if (local_78 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141c95ae0 FUN_141c95ae0 body=256 status=ok
// SIG undefined FUN_141c95ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c95ae0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  _DAT_146a61380 = 1;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e34308;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
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
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141c95be0 FUN_141c95be0 body=97 status=ok
// SIG undefined FUN_141c95be0(void)

undefined8 * FUN_141c95be0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e34308;
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



// FUNCTION 141c95c50 Serialize body=117 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessVisualizeBufferPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1cc);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1d0);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141c95cd0 FUN_141c95cd0 body=52 status=ok
// SIG undefined FUN_141c95cd0(void)

undefined8 FUN_141c95cd0(undefined8 param_1,ulonglong param_2)

{
  FUN_141cd8c50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 141c95d10 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FRenderTargetPool>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e34480;
  FRenderResource::ReleaseResource();
  FRenderTargetPool::~FRenderTargetPool(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141c95d60 FUN_141c95d60 body=441 status=ok
// SIG undefined FUN_141c95d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c95d60(longlong param_1)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined ***local_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_78 = 6;
  local_80 = (undefined8 *)0x0;
  local_88 = &PTR_GetBoundProgramCounterForTimerManager_144177478;
  local_70 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeGrow(&local_80,0);
  local_90 = &local_58;
  local_98 = 1;
  *local_80 = 0x3f8000003f800000;
  local_80[1] = 0x3f80000000000000;
  *(undefined4 *)(local_80 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)local_80 + 0x14) = 0x3f800000;
  local_80[4] = 0x3f80000000000000;
  local_80[5] = 0x3f80000000000000;
  *(undefined4 *)(local_80 + 6) = 0;
  *(undefined4 *)((longlong)local_80 + 0x34) = 0x3f800000;
  local_80[8] = 0x3f800000;
  local_80[9] = 0x3f80000000000000;
  local_80[10] = 0x3f800000;
  local_80[0xc] = 0;
  local_80[0xd] = 0x3f80000000000000;
  local_80[0xe] = 0;
  local_80[0x10] = 0x3f800000bf800000;
  local_80[0x11] = 0x3f80000000000000;
  *(undefined4 *)(local_80 + 0x12) = 0xbf800000;
  *(undefined4 *)((longlong)local_80 + 0x94) = 0x3f800000;
  local_80[0x14] = 0xbf8000003f800000;
  local_80[0x15] = 0x3f80000000000000;
  *(undefined4 *)(local_80 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)local_80 + 0xb4) = 0xbf800000;
  local_50 = &local_88;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_58 = 0;
  local_48 = 1;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,(int)local_78 << 5);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  if (local_80 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141c95f20 FUN_141c95f20 body=122 status=ok
// SIG undefined FUN_141c95f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c95f20(longlong param_1)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [256];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 141c95fa0 FUN_141c95fa0 body=74 status=ok
// SIG undefined FUN_141c95fa0(void)

undefined8 * FUN_141c95fa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e345b0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c95ff0 FUN_141c95ff0 body=1129 status=ok
// SIG undefined FUN_141c95ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c95ff0(longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
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
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar10 = (longlong *)0x0;
  local_170 = 0;
  local_178 = 1;
  local_180 = 0;
  local_168 = 0;
  local_188 = 0;
  local_120 = param_4;
  FUN_141ad7ef0(param_1,4,param_3,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_168);
  local_d8 = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
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
  FUN_14049afe0(param_1,&local_118);
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_1404a0ce0();
  local_138 = (undefined *)0x0;
  uStack_130 = 0;
  uStack_12c = DAT_1464c32d8;
  local_128 = DAT_1464c32d8;
  uStack_124 = DAT_1464c32d8;
  lVar3 = FUN_1419ef210((&DAT_1464c9c48)[param_2]);
  uStack_150 = 0;
  local_158 = &DAT_146b198c0;
  plVar9 = (longlong *)(lVar3 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_168,&local_158);
  plVar6 = plVar10;
  if ((int)local_168 != -1) {
    plVar6 = (longlong *)((longlong)(int)local_168 * 0x20 + *plVar9);
  }
  uStack_150 = 0;
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar10;
  }
  local_158 = &DAT_146b19770;
  lVar3 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_168,&local_158);
  plVar6 = plVar10;
  if ((int)local_168 != -1) {
    plVar6 = (longlong *)((longlong)(int)local_168 * 0x20 + *plVar9);
  }
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar10;
  }
  plVar6 = plVar10;
  if (plVar11 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar11;
  }
  uStack_150 = 0;
  local_158 = &DAT_1469f98e0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_168,&local_158);
  plVar11 = plVar10;
  if ((int)local_168 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_168 * 0x20 + *plVar9);
  }
  plVar9 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = plVar10;
  }
  plVar9 = (longlong *)*plVar9;
  local_118 = DAT_146534c78;
  if (lVar3 == 0) {
    local_168 = 0;
    plVar11 = (longlong *)0x1;
    plStack_110 = plVar10;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    plStack_110 = *(longlong **)(lVar1 + 0x38);
    plVar11 = plVar10;
  }
  uVar4 = 0;
  if (plVar11 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  bVar2 = false;
  if (plVar6 == (longlong *)0x0) {
    bVar2 = true;
    local_168 = 0;
  }
  else {
    lVar1 = plVar6[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x58);
  }
  uStack_f0 = uVar4;
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  bVar2 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar2 = true;
    local_168 = 0;
    local_f8 = 0;
  }
  else {
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_f8 = *(undefined8 *)(lVar1 + 0x40);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  local_cc = CONCAT44(local_cc._4_4_,1);
  FUN_141ed6ac0(param_1,&local_118,2,1);
  local_168 = CONCAT44(DAT_1464c32d8,DAT_1464c32d8);
  local_160 = DAT_1464c32d8;
  local_188 = local_188 & 0xffffff00;
  FUN_141cab0e0(lVar3,param_1,&local_138,&local_168);
  if (plVar6 != (longlong *)0x0) {
    FWriteToSliceGS::SetParameters<FRHICommandList>(plVar6,param_1,uStack_130);
  }
  (**(code **)(*plVar9 + 0x30))(plVar9,param_1,local_120,4);
  local_148 = CONCAT44(uStack_124,local_128);
  local_158 = local_138;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  FUN_1428d37c0(param_1,&local_158,0);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar8 + 4;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 4;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *puVar8 = *param_3;
  puVar8[1] = param_3[1];
  puVar8[2] = param_3[2];
  puVar8[3] = param_3[3];
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar7 + 2) = 4;
  puVar7[3] = puVar8;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
  return;
}



// FUNCTION 141c96460 FUN_141c96460 body=1147 status=ok
// SIG undefined FUN_141c96460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c96460(longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
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
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar10 = (longlong *)0x0;
  local_170 = 0;
  local_178 = 1;
  local_180 = 0;
  local_168 = 0;
  local_188 = 0;
  local_120 = param_4;
  FUN_141ad7ef0(param_1,6,param_3,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_168);
  local_d8 = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
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
  FUN_14049afe0(param_1,&local_118);
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_e8 = FUN_1404a0ce0();
  local_138 = (undefined *)0x0;
  uStack_130 = 0;
  uStack_12c = DAT_1464c32d8;
  local_128 = DAT_1464c32d8;
  uStack_124 = DAT_1464c32d8;
  lVar3 = FUN_1419ef210((&DAT_1464c9c48)[param_2]);
  uStack_150 = 0;
  local_158 = &DAT_146b198c0;
  plVar9 = (longlong *)(lVar3 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_168,&local_158);
  plVar6 = plVar10;
  if ((int)local_168 != -1) {
    plVar6 = (longlong *)((longlong)(int)local_168 * 0x20 + *plVar9);
  }
  uStack_150 = 0;
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar10;
  }
  local_158 = &DAT_146b19770;
  lVar3 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_168,&local_158);
  plVar6 = plVar10;
  if ((int)local_168 != -1) {
    plVar6 = (longlong *)((longlong)(int)local_168 * 0x20 + *plVar9);
  }
  plVar11 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = plVar10;
  }
  plVar6 = plVar10;
  if (plVar11 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar11;
  }
  uStack_150 = 0;
  local_158 = &DAT_1469f9b80;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_168,&local_158);
  plVar11 = plVar10;
  if ((int)local_168 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_168 * 0x20 + *plVar9);
  }
  plVar9 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = plVar10;
  }
  plVar9 = (longlong *)*plVar9;
  local_118 = DAT_146534c78;
  if (lVar3 == 0) {
    local_168 = 0;
    plVar11 = (longlong *)0x1;
    plStack_110 = plVar10;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    plStack_110 = *(longlong **)(lVar1 + 0x38);
    plVar11 = plVar10;
  }
  uVar4 = 0;
  if (plVar11 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  bVar2 = false;
  if (plVar6 == (longlong *)0x0) {
    bVar2 = true;
    local_168 = 0;
  }
  else {
    lVar1 = plVar6[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x58);
  }
  uStack_f0 = uVar4;
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  bVar2 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar2 = true;
    local_168 = 0;
    local_f8 = 0;
  }
  else {
    lVar1 = plVar9[9];
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    local_f8 = *(undefined8 *)(lVar1 + 0x40);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  }
  local_cc = CONCAT44(local_cc._4_4_,1);
  FUN_141ed6ac0(param_1,&local_118,2,1);
  local_168 = CONCAT44(DAT_1464c32d8,DAT_1464c32d8);
  local_160 = DAT_1464c32d8;
  local_188 = local_188 & 0xffffff00;
  FUN_141cab0e0(lVar3,param_1,&local_138,&local_168);
  if (plVar6 != (longlong *)0x0) {
    FWriteToSliceGS::SetParameters<FRHICommandList>(plVar6,param_1,uStack_130);
  }
  (**(code **)(*plVar9 + 0x30))(plVar9,param_1,local_120,6);
  local_148 = CONCAT44(uStack_124,local_128);
  local_158 = local_138;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  FUN_1428d37c0(param_1,&local_158,0);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar8 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *puVar8 = *param_3;
  puVar8[1] = param_3[1];
  puVar8[2] = param_3[2];
  puVar8[3] = param_3[3];
  puVar8[4] = param_3[4];
  puVar8[5] = param_3[5];
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar7 + 2) = 6;
  puVar7[3] = puVar8;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
  return;
}



// FUNCTION 141c968e0 CreateMobileSceneTextureUniformBufferSingleDraw<FRHIAsyncComputeCommandListImmediate> body=124 status=ok
// SIG undefined CreateMobileSceneTextureUniformBufferSingleDraw<FRHIAsyncComputeCommandListImmediate>(void)

longlong *
CreateMobileSceneTextureUniformBufferSingleDraw<FRHIAsyncComputeCommandListImmediate>
          (longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong local_res8 [4];
  undefined1 local_58 [80];
  
  FUN_141d05b30(&DAT_146a61f30,param_3,1,local_58);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res8,local_58,&DAT_146a63368,0);
  *param_1 = local_res8[0];
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return param_1;
}



// FUNCTION 141c96960 CreateMobileSceneTextureUniformBufferSingleDraw<FRHICommandList> body=141 status=ok
// SIG undefined CreateMobileSceneTextureUniformBufferSingleDraw<FRHICommandList>(void)

longlong *
CreateMobileSceneTextureUniformBufferSingleDraw<FRHICommandList>
          (longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong local_res8 [4];
  undefined1 local_58 [80];
  
  puVar1 = &DAT_146a61f30;
  if (*(undefined8 **)(param_2 + 0x90) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x90);
  }
  FUN_141d05b30(puVar1,param_3,1,local_58);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res8,local_58,&DAT_146a63368,0);
  *param_1 = local_res8[0];
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return param_1;
}



// FUNCTION 141c969f0 FUN_141c969f0 body=121 status=ok
// SIG undefined FUN_141c969f0(void)

longlong * FUN_141c969f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong local_res8 [4];
  undefined1 local_138 [304];
  
  FUN_141d05c90(&DAT_146a61f30,param_4,param_3,local_138);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res8,local_138,&DAT_146a632d8,0);
  *param_1 = local_res8[0];
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return param_1;
}



// FUNCTION 141c96a70 FUN_141c96a70 body=138 status=ok
// SIG undefined FUN_141c96a70(void)

longlong * FUN_141c96a70(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong local_res8 [4];
  undefined1 local_138 [304];
  
  puVar1 = &DAT_146a61f30;
  if (*(undefined8 **)(param_2 + 0x90) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x90);
  }
  FUN_141d05c90(puVar1,param_4,param_3,local_138);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res8,local_138,&DAT_146a632d8,0);
  *param_1 = local_res8[0];
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return param_1;
}



// FUNCTION 141c96b00 FUN_141c96b00 body=1108 status=ok
// SIG undefined FUN_141c96b00(void)

void FUN_141c96b00(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int *param_5,longlong param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong local_res8;
  undefined4 uVar13;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined1 local_68 [48];
  
  piVar6 = param_5;
  local_74 = param_5[1];
  local_78 = *param_5;
  FUN_141cdf580(local_68,param_2,param_3,param_4,(float)local_74);
  local_a0 = 0;
  local_a8 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_a0);
  lVar7 = param_6;
  lVar4 = *(longlong *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar12 = *(undefined8 *)(lVar4 + 0x60);
  param_6 = uVar12;
  uVar8 = FUN_1404a0e20();
  FUN_141ca8620(param_1 + 0xc0,*(undefined8 *)(param_3 + 0x40),&param_6,param_3,uVar8,0,0);
  if (*(short *)(param_1 + 0x1c6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c4);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    *puVar10 = &PTR_LAB_144d91e40;
    puVar10[2] = uVar12;
    puVar10[4] = uVar5;
  }
  uVar13 = (undefined4)(uVar8 >> 0x20);
  if (*(char *)(param_1 + 0x1c2) != '\0') {
    uVar8 = uVar8 & 0xffffffff00000000;
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,&local_78,&DAT_146a61578,uVar8);
    uVar13 = (undefined4)(uVar8 >> 0x20);
    param_5 = (int *)local_res8;
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
      uVar12 = param_6;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_98 = local_res8;
    param_5 = (int *)0x0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar12,param_1 + 0x1bc,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  }
  iVar2 = *piVar6;
  iVar3 = piVar6[1];
  lVar4 = *(longlong *)(param_3 + 0x40);
  local_90 = *(undefined8 *)(lVar7 + 0x10);
  puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 1;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x10);
    puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 1;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar9;
  *puVar10 = local_90;
  puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 6;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x38);
    puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 6;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar9;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar11;
  *(undefined8 **)(lVar4 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar11 + 2) = 1;
  puVar11[3] = puVar10;
  puVar11[4] = 1;
  puVar11[5] = 0;
  DispatchComputeShader(param_2,param_1,iVar2 + 0xfU >> 4,iVar3 + 0xfU >> 4,CONCAT44(uVar13,1));
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x60);
  local_88 = 0;
  if (*(short *)(param_1 + 0x1c6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1c4);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d91e40;
    puVar10[2] = uVar5;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  lVar4 = *(longlong *)(param_3 + 0x40);
  local_80 = *(undefined8 *)(lVar7 + 0x10);
  puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 1;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x10);
    puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 1;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar9;
  *puVar10 = local_80;
  puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 6;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x38);
    puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 6;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar9;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar11;
  *(undefined8 **)(lVar4 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  puVar11[3] = puVar10;
  *puVar11 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar11 + 2) = 1;
  *(undefined4 *)(puVar11 + 4) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 1;
  puVar11[5] = 0;
  return;
}



// FUNCTION 141c96f60 FUN_141c96f60 body=5103 status=ok
// SIG undefined FUN_141c96f60(void)

void FUN_141c96f60(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9,undefined8 param_10,uint param_11)

{
  if (((0x20 < param_11) && (*(int *)(DAT_146a615e8 + 4) != 0)) ||
     (*(int *)(DAT_146a615e8 + 4) == 2)) {
    if (param_8 == 0) {
      FUN_141c9e040();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9de00(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9dbc0();
    return;
  }
  switch(param_11) {
  case 1:
    break;
  case 2:
    if (param_8 == 0) {
      FUN_141c9a380();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9a140(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c99f00();
    return;
  case 3:
    if (param_8 == 0) {
      FUN_141c9aa40();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9a800(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9a5c0();
    return;
  case 4:
    if (param_8 == 0) {
      FUN_141c9b100();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9aec0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9ac80();
    return;
  case 5:
    if (param_8 == 0) {
      FUN_141c9b7c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9b580(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9b340();
    return;
  case 6:
    if (param_8 == 0) {
      FUN_141c9be80();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9bc40(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9ba00();
    return;
  case 7:
    if (param_8 == 0) {
      FUN_141c9c540();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9c300(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9c0c0();
    return;
  case 8:
    if (param_8 == 0) {
      FUN_141c9cc00();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9c9c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9c780();
    return;
  case 9:
    if (param_8 == 0) {
      FUN_141c9d2c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9d080(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9ce40();
    return;
  case 10:
    if (param_8 == 0) {
      FUN_141c9d980();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9d740(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9d500();
    return;
  case 0xb:
    if (param_8 == 0) {
      FUN_141ca59c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca5780(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca5540();
    return;
  case 0xc:
    if (param_8 == 0) {
      FUN_141ca6080();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca5e40(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca5c00();
    return;
  case 0xd:
    if (param_8 == 0) {
      FUN_141ca6740();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca6500(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca62c0();
    return;
  case 0xe:
    if (param_8 == 0) {
      FUN_141ca6e00();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca6bc0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca6980();
    return;
  case 0xf:
    if (param_8 == 0) {
      FUN_141ca74c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca7280(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca7040();
    return;
  case 0x10:
    if (param_8 == 0) {
      FUN_141c9e700();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9e4c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9e280();
    return;
  case 0x11:
    if (param_8 == 0) {
      FUN_141c9edc0();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9eb80(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9e940();
    return;
  case 0x12:
    if (param_8 == 0) {
      FUN_141c9f480();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9f240(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9f000();
    return;
  case 0x13:
    if (param_8 == 0) {
      FUN_141c9fb40();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9f900(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9f6c0();
    return;
  case 0x14:
    if (param_8 == 0) {
      FUN_141ca0200();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9ffc0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9fd80();
    return;
  case 0x15:
    if (param_8 == 0) {
      FUN_141ca08c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca0680(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca0440();
    return;
  case 0x16:
    if (param_8 == 0) {
      FUN_141ca0f80();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca0d40(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca0b00();
    return;
  case 0x17:
    if (param_8 == 0) {
      FUN_141ca1640();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca1400(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca11c0();
    return;
  case 0x18:
    if (param_8 == 0) {
      FUN_141ca1d00();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca1ac0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca1880();
    return;
  case 0x19:
    if (param_8 == 0) {
      FUN_141ca23c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca2180(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca1f40();
    return;
  case 0x1a:
    if (param_8 == 0) {
      FUN_141ca2a80();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca2840(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca2600();
    return;
  case 0x1b:
    if (param_8 == 0) {
      FUN_141ca3140();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca2f00(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca2cc0();
    return;
  case 0x1c:
    if (param_8 == 0) {
      FUN_141ca3800();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca35c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca3380();
    return;
  case 0x1d:
    if (param_8 == 0) {
      FUN_141ca3ec0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca3c80(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca3a40();
    return;
  case 0x1e:
    if (param_8 == 0) {
      FUN_141ca4580();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca4340(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca4100();
    return;
  case 0x1f:
    if (param_8 == 0) {
      FUN_141ca4c40();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca4a00(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca47c0();
    return;
  case 0x20:
    if (param_8 == 0) {
      FUN_141ca5300();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca50c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca4e80();
    return;
  default:
    LowLevelFatalErrorHandler("Unknown",0x490,L"Invalid number of samples: %u",param_11);
    FDebug::AssertFailed(&DAT_144e27562,"Unknown",0x490,L"Invalid number of samples: %u");
    return;
  }
  if (param_8 == 0) {
    FUN_141c99cc0();
    return;
  }
  if (param_8 != 1) {
    FUN_141c99a80(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                  param_10,param_11);
    return;
  }
  FUN_141c99840();
  return;
}



// FUNCTION 141c983d0 FUN_141c983d0 body=5103 status=ok
// SIG undefined FUN_141c983d0(void)

void FUN_141c983d0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9,undefined8 param_10,uint param_11)

{
  if (((0x20 < param_11) && (*(int *)(DAT_146a615e8 + 4) != 0)) ||
     (*(int *)(DAT_146a615e8 + 4) == 2)) {
    if (param_8 == 0) {
      FUN_141c9e040();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9de00(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9dbc0();
    return;
  }
  switch(param_11) {
  case 1:
    break;
  case 2:
    if (param_8 == 0) {
      FUN_141c9a380();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9a140(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c99f00();
    return;
  case 3:
    if (param_8 == 0) {
      FUN_141c9aa40();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9a800(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9a5c0();
    return;
  case 4:
    if (param_8 == 0) {
      FUN_141c9b100();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9aec0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9ac80();
    return;
  case 5:
    if (param_8 == 0) {
      FUN_141c9b7c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9b580(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9b340();
    return;
  case 6:
    if (param_8 == 0) {
      FUN_141c9be80();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9bc40(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9ba00();
    return;
  case 7:
    if (param_8 == 0) {
      FUN_141c9c540();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9c300(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9c0c0();
    return;
  case 8:
    if (param_8 == 0) {
      FUN_141c9cc00();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9c9c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9c780();
    return;
  case 9:
    if (param_8 == 0) {
      FUN_141c9d2c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9d080(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9ce40();
    return;
  case 10:
    if (param_8 == 0) {
      FUN_141c9d980();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9d740(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9d500();
    return;
  case 0xb:
    if (param_8 == 0) {
      FUN_141ca59c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca5780(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca5540();
    return;
  case 0xc:
    if (param_8 == 0) {
      FUN_141ca6080();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca5e40(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca5c00();
    return;
  case 0xd:
    if (param_8 == 0) {
      FUN_141ca6740();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca6500(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca62c0();
    return;
  case 0xe:
    if (param_8 == 0) {
      FUN_141ca6e00();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca6bc0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca6980();
    return;
  case 0xf:
    if (param_8 == 0) {
      FUN_141ca74c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca7280(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca7040();
    return;
  case 0x10:
    if (param_8 == 0) {
      FUN_141c9e700();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9e4c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9e280();
    return;
  case 0x11:
    if (param_8 == 0) {
      FUN_141c9edc0();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9eb80(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9e940();
    return;
  case 0x12:
    if (param_8 == 0) {
      FUN_141c9f480();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9f240(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9f000();
    return;
  case 0x13:
    if (param_8 == 0) {
      FUN_141c9fb40();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9f900(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9f6c0();
    return;
  case 0x14:
    if (param_8 == 0) {
      FUN_141ca0200();
      return;
    }
    if (param_8 != 1) {
      FUN_141c9ffc0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141c9fd80();
    return;
  case 0x15:
    if (param_8 == 0) {
      FUN_141ca08c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca0680(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca0440();
    return;
  case 0x16:
    if (param_8 == 0) {
      FUN_141ca0f80();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca0d40(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca0b00();
    return;
  case 0x17:
    if (param_8 == 0) {
      FUN_141ca1640();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca1400(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca11c0();
    return;
  case 0x18:
    if (param_8 == 0) {
      FUN_141ca1d00();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca1ac0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca1880();
    return;
  case 0x19:
    if (param_8 == 0) {
      FUN_141ca23c0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca2180(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca1f40();
    return;
  case 0x1a:
    if (param_8 == 0) {
      FUN_141ca2a80();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca2840(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca2600();
    return;
  case 0x1b:
    if (param_8 == 0) {
      FUN_141ca3140();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca2f00(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca2cc0();
    return;
  case 0x1c:
    if (param_8 == 0) {
      FUN_141ca3800();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca35c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca3380();
    return;
  case 0x1d:
    if (param_8 == 0) {
      FUN_141ca3ec0();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca3c80(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca3a40();
    return;
  case 0x1e:
    if (param_8 == 0) {
      FUN_141ca4580();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca4340(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca4100();
    return;
  case 0x1f:
    if (param_8 == 0) {
      FUN_141ca4c40();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca4a00(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca47c0();
    return;
  case 0x20:
    if (param_8 == 0) {
      FUN_141ca5300();
      return;
    }
    if (param_8 != 1) {
      FUN_141ca50c0(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                    param_10,param_11);
      return;
    }
    FUN_141ca4e80();
    return;
  default:
    LowLevelFatalErrorHandler("Unknown",0x490,L"Invalid number of samples: %u",param_11);
    FDebug::AssertFailed(&DAT_144e27563,"Unknown",0x490,L"Invalid number of samples: %u");
    return;
  }
  if (param_8 == 0) {
    FUN_141c99cc0();
    return;
  }
  if (param_8 != 1) {
    FUN_141c99a80(*(undefined8 *)(param_3 + 0x40),param_3,param_4,param_5,param_6,param_7,param_9,
                  param_10,param_11);
    return;
  }
  FUN_141c99840();
  return;
}



// FUNCTION 141c99840 FUN_141c99840 body=570 status=ok
// SIG undefined FUN_141c99840(void)

void FUN_141c99840(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a77c90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cab420(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c99a80 FUN_141c99a80 body=570 status=ok
// SIG undefined FUN_141c99a80(void)

void FUN_141c99a80(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a77de0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141caba40(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c99cc0 FUN_141c99cc0 body=570 status=ok
// SIG undefined FUN_141c99cc0(void)

void FUN_141c99cc0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a77b40;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cac060(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c99f00 FUN_141c99f00 body=570 status=ok
// SIG undefined FUN_141c99f00(void)

void FUN_141c99f00(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78080;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cac680(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9a140 FUN_141c9a140 body=570 status=ok
// SIG undefined FUN_141c9a140(void)

void FUN_141c9a140(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a781d0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cacca0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9a380 FUN_141c9a380 body=570 status=ok
// SIG undefined FUN_141c9a380(void)

void FUN_141c9a380(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a77f30;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cad2c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9a5c0 FUN_141c9a5c0 body=570 status=ok
// SIG undefined FUN_141c9a5c0(void)

void FUN_141c9a5c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78470;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cad8e0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9a800 FUN_141c9a800 body=570 status=ok
// SIG undefined FUN_141c9a800(void)

void FUN_141c9a800(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a785c0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cadf00(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9aa40 FUN_141c9aa40 body=570 status=ok
// SIG undefined FUN_141c9aa40(void)

void FUN_141c9aa40(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78320;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cae520(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9ac80 FUN_141c9ac80 body=570 status=ok
// SIG undefined FUN_141c9ac80(void)

void FUN_141c9ac80(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78860;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141caeb40(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9aec0 FUN_141c9aec0 body=570 status=ok
// SIG undefined FUN_141c9aec0(void)

void FUN_141c9aec0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a789b0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141caf160(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9b100 FUN_141c9b100 body=570 status=ok
// SIG undefined FUN_141c9b100(void)

void FUN_141c9b100(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78710;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141caf780(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9b340 FUN_141c9b340 body=570 status=ok
// SIG undefined FUN_141c9b340(void)

void FUN_141c9b340(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78c50;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cafda0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9b580 FUN_141c9b580 body=570 status=ok
// SIG undefined FUN_141c9b580(void)

void FUN_141c9b580(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78da0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb03c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9b7c0 FUN_141c9b7c0 body=570 status=ok
// SIG undefined FUN_141c9b7c0(void)

void FUN_141c9b7c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78b00;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb09e0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9ba00 FUN_141c9ba00 body=570 status=ok
// SIG undefined FUN_141c9ba00(void)

void FUN_141c9ba00(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79040;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb1000(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9bc40 FUN_141c9bc40 body=570 status=ok
// SIG undefined FUN_141c9bc40(void)

void FUN_141c9bc40(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79190;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb1620(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9be80 FUN_141c9be80 body=570 status=ok
// SIG undefined FUN_141c9be80(void)

void FUN_141c9be80(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a78ef0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb1c40(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9c0c0 FUN_141c9c0c0 body=570 status=ok
// SIG undefined FUN_141c9c0c0(void)

void FUN_141c9c0c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79430;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb2260(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9c300 FUN_141c9c300 body=570 status=ok
// SIG undefined FUN_141c9c300(void)

void FUN_141c9c300(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79580;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb2880(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9c540 FUN_141c9c540 body=570 status=ok
// SIG undefined FUN_141c9c540(void)

void FUN_141c9c540(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a792e0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb2ea0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9c780 FUN_141c9c780 body=570 status=ok
// SIG undefined FUN_141c9c780(void)

void FUN_141c9c780(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79820;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb34c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9c9c0 FUN_141c9c9c0 body=570 status=ok
// SIG undefined FUN_141c9c9c0(void)

void FUN_141c9c9c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79970;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb3ae0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9cc00 FUN_141c9cc00 body=570 status=ok
// SIG undefined FUN_141c9cc00(void)

void FUN_141c9cc00(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a796d0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb4100(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9ce40 FUN_141c9ce40 body=570 status=ok
// SIG undefined FUN_141c9ce40(void)

void FUN_141c9ce40(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79c10;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb4720(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9d080 FUN_141c9d080 body=570 status=ok
// SIG undefined FUN_141c9d080(void)

void FUN_141c9d080(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79d60;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb4d40(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9d2c0 FUN_141c9d2c0 body=570 status=ok
// SIG undefined FUN_141c9d2c0(void)

void FUN_141c9d2c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79ac0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb5360(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9d500 FUN_141c9d500 body=570 status=ok
// SIG undefined FUN_141c9d500(void)

void FUN_141c9d500(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7a000;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb5980(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9d740 FUN_141c9d740 body=570 status=ok
// SIG undefined FUN_141c9d740(void)

void FUN_141c9d740(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7a150;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb5fa0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9d980 FUN_141c9d980 body=570 status=ok
// SIG undefined FUN_141c9d980(void)

void FUN_141c9d980(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a79eb0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb65c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9dbc0 FUN_141c9dbc0 body=570 status=ok
// SIG undefined FUN_141c9dbc0(void)

void FUN_141c9dbc0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a778a0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb6be0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9de00 FUN_141c9de00 body=570 status=ok
// SIG undefined FUN_141c9de00(void)

void FUN_141c9de00(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a779f0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb7220(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9e040 FUN_141c9e040 body=570 status=ok
// SIG undefined FUN_141c9e040(void)

void FUN_141c9e040(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a77750;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb7860(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9e280 FUN_141c9e280 body=570 status=ok
// SIG undefined FUN_141c9e280(void)

void FUN_141c9e280(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7b7a0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb7ea0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9e4c0 FUN_141c9e4c0 body=570 status=ok
// SIG undefined FUN_141c9e4c0(void)

void FUN_141c9e4c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7b8f0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb84c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9e700 FUN_141c9e700 body=570 status=ok
// SIG undefined FUN_141c9e700(void)

void FUN_141c9e700(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7b650;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb8ae0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9e940 FUN_141c9e940 body=570 status=ok
// SIG undefined FUN_141c9e940(void)

void FUN_141c9e940(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7bb90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb9100(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9eb80 FUN_141c9eb80 body=570 status=ok
// SIG undefined FUN_141c9eb80(void)

void FUN_141c9eb80(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7bce0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb9720(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9edc0 FUN_141c9edc0 body=570 status=ok
// SIG undefined FUN_141c9edc0(void)

void FUN_141c9edc0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7ba40;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cb9d40(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9f000 FUN_141c9f000 body=570 status=ok
// SIG undefined FUN_141c9f000(void)

void FUN_141c9f000(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7bf80;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cba360(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9f240 FUN_141c9f240 body=570 status=ok
// SIG undefined FUN_141c9f240(void)

void FUN_141c9f240(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7c0d0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cba980(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9f480 FUN_141c9f480 body=570 status=ok
// SIG undefined FUN_141c9f480(void)

void FUN_141c9f480(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7be30;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbafa0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9f6c0 FUN_141c9f6c0 body=570 status=ok
// SIG undefined FUN_141c9f6c0(void)

void FUN_141c9f6c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7c370;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbb5c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9f900 FUN_141c9f900 body=570 status=ok
// SIG undefined FUN_141c9f900(void)

void FUN_141c9f900(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7c4c0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbbbe0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9fb40 FUN_141c9fb40 body=570 status=ok
// SIG undefined FUN_141c9fb40(void)

void FUN_141c9fb40(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7c220;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbc200(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9fd80 FUN_141c9fd80 body=570 status=ok
// SIG undefined FUN_141c9fd80(void)

void FUN_141c9fd80(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7c760;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbc820(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141c9ffc0 FUN_141c9ffc0 body=570 status=ok
// SIG undefined FUN_141c9ffc0(void)

void FUN_141c9ffc0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7c8b0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbce40(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca0200 FUN_141ca0200 body=570 status=ok
// SIG undefined FUN_141ca0200(void)

void FUN_141ca0200(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7c610;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbd460(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca0440 FUN_141ca0440 body=570 status=ok
// SIG undefined FUN_141ca0440(void)

void FUN_141ca0440(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7cb50;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbda80(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca0680 FUN_141ca0680 body=570 status=ok
// SIG undefined FUN_141ca0680(void)

void FUN_141ca0680(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7cca0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbe0a0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca08c0 FUN_141ca08c0 body=570 status=ok
// SIG undefined FUN_141ca08c0(void)

void FUN_141ca08c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7ca00;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbe6c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca0b00 FUN_141ca0b00 body=570 status=ok
// SIG undefined FUN_141ca0b00(void)

void FUN_141ca0b00(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7cf40;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbece0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca0d40 FUN_141ca0d40 body=570 status=ok
// SIG undefined FUN_141ca0d40(void)

void FUN_141ca0d40(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d090;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbf300(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca0f80 FUN_141ca0f80 body=570 status=ok
// SIG undefined FUN_141ca0f80(void)

void FUN_141ca0f80(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7cdf0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbf920(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca11c0 FUN_141ca11c0 body=570 status=ok
// SIG undefined FUN_141ca11c0(void)

void FUN_141ca11c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d330;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cbff40(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca1400 FUN_141ca1400 body=570 status=ok
// SIG undefined FUN_141ca1400(void)

void FUN_141ca1400(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d480;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc0560(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca1640 FUN_141ca1640 body=570 status=ok
// SIG undefined FUN_141ca1640(void)

void FUN_141ca1640(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d1e0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc0b80(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca1880 FUN_141ca1880 body=570 status=ok
// SIG undefined FUN_141ca1880(void)

void FUN_141ca1880(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d720;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc11a0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca1ac0 FUN_141ca1ac0 body=570 status=ok
// SIG undefined FUN_141ca1ac0(void)

void FUN_141ca1ac0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d870;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc17c0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca1d00 FUN_141ca1d00 body=570 status=ok
// SIG undefined FUN_141ca1d00(void)

void FUN_141ca1d00(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d5d0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc1de0(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca1f40 FUN_141ca1f40 body=570 status=ok
// SIG undefined FUN_141ca1f40(void)

void FUN_141ca1f40(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7db10;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc2400(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca2180 FUN_141ca2180 body=570 status=ok
// SIG undefined FUN_141ca2180(void)

void FUN_141ca2180(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7dc60;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc2a20(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141ca23c0 FUN_141ca23c0 body=570 status=ok
// SIG undefined FUN_141ca23c0(void)

void FUN_141ca23c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res10;
  int local_res14;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a7d9c0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res10,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res10 != -1) {
    plVar10 = (longlong *)((longlong)local_res10 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar4 = *param_3;
  iVar5 = param_3[1];
  local_res10 = iVar2 - iVar4;
  local_res14 = iVar3 - iVar5;
  FUN_141cc3040(lVar6,param_1,param_2,&local_res10,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_1,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 200);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}


