// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141b54120 FCullObjectsToGridCS body=168 status=ok
// SIG undefined FCullObjectsToGridCS(void)

undefined8 * FCullObjectsToGridCS::FCullObjectsToGridCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de96e8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 141b541d0 FForwardLightData body=245 status=ok
// SIG undefined FForwardLightData(void)

void * FForwardLightData::FForwardLightData(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  ::_guard_xfg_dispatch_icall_nop(param_1,0,0x280);
  *(undefined8 *)((longlong)param_1 + 0x240) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  uVar1 = FUN_1404a0e20();
  *(undefined8 *)((longlong)param_1 + 0x248) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x250) = *(undefined8 *)(DAT_146ac3e00 + 0x30);
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 600) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  return param_1;
}



// FUNCTION 141b542d0 FGSComplexTransformBaseCS body=331 status=ok
// SIG undefined FGSComplexTransformBaseCS(void)

undefined8 *
GPUFFT::FGSComplexTransformBaseCS::FGSComplexTransformBaseCS(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9c80;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x18,uVar1,L"SrcTexture",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0xc4,uVar1,L"DstTexture",0);
  FShaderParameter::Bind(param_1 + 0x19,uVar1,L"TransformType",0);
  FShaderParameter::Bind((longlong)param_1 + 0xce,uVar1,L"SrcRectMin",0);
  FShaderParameter::Bind((longlong)param_1 + 0xd4,uVar1,L"SrcRectMax",0);
  FShaderParameter::Bind((longlong)param_1 + 0xda,uVar1,L"DstExtent",0);
  FShaderParameter::Bind(param_1 + 0x1c,uVar1,L"DstRect",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe6,uVar1,L"BrightPixelGain",0);
  return param_1;
}



// FUNCTION 141b54420 FGSConvolutionWithTextureKernelBaseCS body=320 status=ok
// SIG undefined FGSConvolutionWithTextureKernelBaseCS(void)

undefined8 *
GPUFFT::FGSConvolutionWithTextureKernelBaseCS::FGSConvolutionWithTextureKernelBaseCS
          (undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9d28;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x18,uVar1,L"SrcTexture",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0xc4,uVar1,L"DstTexture",0);
  FShaderParameter::Bind(param_1 + 0x19,uVar1,L"SrcRectMin",0);
  FShaderParameter::Bind((longlong)param_1 + 0xce,uVar1,L"SrcRectMax",0);
  FShaderParameter::Bind((longlong)param_1 + 0xd4,uVar1,L"DstExtent",0);
  FShaderParameter::Bind((longlong)param_1 + 0xda,uVar1,L"TransformType",0);
  *param_1 = &PTR__scalar_deleting_destructor__144de9d58;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"FilterTexture",0);
  return param_1;
}



// FUNCTION 141b54560 FUN_141b54560 body=410 status=ok
// SIG undefined FUN_141b54560(void)

undefined8 * FUN_141b54560(undefined8 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144deb730;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xbff0000000000000;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  lVar5 = (longlong)*(int *)(param_1 + 2);
  iVar1 = *(int *)(param_1 + 2) + 7;
  *(int *)(param_1 + 2) = iVar1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
  }
  lVar4 = param_1[1];
  *(undefined8 *)(lVar4 + lVar5 * 8) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar5 * 8) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5 * 8) = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar5 * 8) = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar5 * 8) = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar5 * 8) = 0;
  *(undefined8 *)(lVar4 + 0x30 + lVar5 * 8) = 0;
  lVar5 = (longlong)*(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 4) + 7;
  *(int *)(param_1 + 4) = iVar1;
  if (*(int *)((longlong)param_1 + 0x24) < iVar1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
  }
  lVar4 = param_1[3];
  *(undefined8 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar5 * 4) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5 * 4) = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5 * 4) = 0;
  lVar5 = (longlong)*(int *)(param_1 + 6);
  iVar1 = *(int *)(param_1 + 6) + 7;
  *(int *)(param_1 + 6) = iVar1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
  }
  lVar4 = param_1[5];
  *(undefined8 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar5 * 4) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5 * 4) = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5 * 4) = 0;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 7;
  if (*(int *)((longlong)param_1 + 0x44) < iVar1 + 7) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 7,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 + param_1[7]);
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 6) = 0;
  lVar5 = 0;
  do {
    lVar3 = operator_new(0x88);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = FLatentGPUTimer::FLatentGPUTimer(lVar3,5);
    }
    *(longlong *)(lVar5 + param_1[1]) = lVar4;
    lVar5 = lVar5 + 8;
  } while (lVar5 < 0x38);
  return param_1;
}



// FUNCTION 141b54700 FUN_141b54700 body=359 status=ok
// SIG undefined FUN_141b54700(void)

undefined8 * FUN_141b54700(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144deb738;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  iVar1 = DAT_1464c1cc8;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < *(int *)(param_1 + 0x29)) {
    TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
    ResizeGrow(param_1 + 0x19,0);
  }
  puVar2 = (undefined8 *)param_1[0x28];
  if ((undefined8 *)param_1[0x28] == (undefined8 *)0x0) {
    puVar2 = param_1 + 0x19;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
    uVar3 = (undefined2)iVar1;
    *(undefined2 *)((longlong)puVar2 + 0xe) = uVar3;
    *(undefined2 *)(puVar2 + 2) = uVar3;
    *(undefined2 *)((longlong)puVar2 + 0x12) = uVar3;
    *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(int *)(param_1 + 0x2a) = DAT_1464c1cc8 + 1;
  *(int *)((longlong)param_1 + 0x34) = DAT_1464c1cc8;
  return param_1;
}



// FUNCTION 141b54870 FUN_141b54870 body=630 status=ok
// SIG undefined FUN_141b54870(void)

undefined8 * FUN_141b54870(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x100;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  return param_1;
}



// FUNCTION 141b54af0 FUN_141b54af0 body=408 status=ok
// SIG undefined FUN_141b54af0(void)

undefined8 * FUN_141b54af0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141d89a50();
  *param_1 = &PTR__scalar_deleting_destructor__144dea380;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x122) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x22,uVar1,L"HeightfieldDescriptions",0);
  FShaderParameter::Bind((longlong)param_1 + 0x114,uVar1,L"NumHeightfields",0);
  FGlobalHeightfieldParameters::Bind((longlong)param_1 + 0x11a,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x12a,*(undefined8 *)(param_2 + 0x18),L"LightDirection",0);
  FShaderParameter::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"LightColor",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x136,*(undefined8 *)(param_2 + 0x18),L"SkyLightIndirectScale",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x13c,*(undefined8 *)(param_2 + 0x18),L"HeightfieldShadowing",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x28,*(undefined8 *)(param_2 + 0x18),L"HeightfieldShadowingSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x144,*(undefined8 *)(param_2 + 0x18),L"WorldToLight",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x14a,*(undefined8 *)(param_2 + 0x18),L"LightFunctionParameters",0)
  ;
  return param_1;
}



// FUNCTION 141b54c90 FUN_141b54c90 body=599 status=ok
// SIG undefined FUN_141b54c90(void)

longlong FUN_141b54c90(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar2 = *(longlong *)(param_2 + 0x78);
  if (*(longlong *)(param_2 + 0x78) == 0) {
    lVar2 = param_2;
  }
  FUN_141b4d050(param_1,lVar2,*(undefined4 *)(param_2 + 0x80),0,0);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + 0x89);
  *(uint *)(param_1 + 0x8c) =
       *(uint *)(param_1 + 0x8c) ^ (*(uint *)(param_1 + 0x8c) ^ *(uint *)(param_2 + 0x8c)) & 1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ *(uint *)(param_1 + 0x8c)) & 2 ^ *(uint *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x3f000 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x1c0000 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x400000 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x800000 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x1000000 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar1 = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x2000000 ^ uVar1;
  *(uint *)(param_1 + 0x8c) = uVar1;
  *(uint *)(param_1 + 0x8c) = (*(uint *)(param_2 + 0x8c) ^ uVar1) & 0x4000000 ^ uVar1;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  return param_1;
}



// FUNCTION 141b54ef0 FUN_141b54ef0 body=599 status=ok
// SIG undefined FUN_141b54ef0(void)

undefined8 * FUN_141b54ef0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9df8;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xea) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x102) = 0;
  *(undefined2 *)((longlong)param_1 + 0x106) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x122) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x132) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x18,uVar1,L"HeightfieldDescriptions",0);
  FShaderParameter::Bind((longlong)param_1 + 0xc4,uVar1,L"NumHeightfields",0);
  FGlobalHeightfieldParameters::Bind((longlong)param_1 + 0xca,*(undefined8 *)(param_2 + 0x18));
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((longlong)param_1 + 0xda,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"LightDirection",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10e,*(undefined8 *)(param_2 + 0x18),L"TanLightAngle",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"CascadeDepthMinMax",0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FRWShaderParameter::Bind((longlong)param_1 + 0x11a,uVar1,L"ShadowTileNumCulledObjects");
  FRWShaderParameter::Bind
            ((undefined8 *)((longlong)param_1 + 0x122),uVar1,L"ShadowTileStartOffsets");
  FRWShaderParameter::Bind((undefined8 *)((longlong)param_1 + 0x12a),uVar1,L"NextStartOffset");
  FRWShaderParameter::Bind((undefined8 *)((longlong)param_1 + 0x132),uVar1,L"ShadowTileArrayData");
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x13a),uVar1,L"ShadowTileListGroupSize",0);
  FShaderParameter::Bind(param_1 + 0x28,uVar1,L"ShadowAverageObjectsPerTile",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x146,*(undefined8 *)(param_2 + 0x18),L"WorldToShadow",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x14c,*(undefined8 *)(param_2 + 0x18),L"TwoSidedMeshDistanceBias",0
            );
  return param_1;
}



// FUNCTION 141b55150 FCullObjectsToGridCS body=168 status=ok
// SIG undefined FCullObjectsToGridCS(void)

undefined8 * FCullObjectsToGridCS::FCullObjectsToGridCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9df8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 141b55200 FSceneRenderTargetItem body=340 status=ok
// SIG undefined FSceneRenderTargetItem(void)

longlong * FSceneRenderTargetItem::FSceneRenderTargetItem(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  iVar5 = (int)param_2[5];
  plVar2 = (longlong *)param_2[4];
  *(int *)(param_1 + 5) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
    ResizeForCopy(param_1 + 3,iVar5,0);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = param_2 + 3;
    }
    plVar3 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar3 = param_1 + 3;
    }
    lVar4 = (longlong)plVar3 - (longlong)plVar2;
    do {
      lVar1 = *plVar2;
      *(longlong *)(lVar4 + (longlong)plVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      plVar2 = plVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[6] = 0;
  iVar5 = (int)param_2[7];
  plVar2 = (longlong *)param_2[6];
  *(int *)(param_1 + 7) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 6,iVar5,0);
    plVar3 = (longlong *)param_1[6];
    do {
      lVar4 = *plVar2;
      *plVar3 = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar3 = plVar3 + 1;
      plVar2 = plVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar4 = param_2[8];
  param_1[8] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  lVar4 = param_2[9];
  param_1[9] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141b55360 FScopedUAVBind body=186 status=ok
// SIG undefined FScopedUAVBind(void)

undefined8 *
GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
          undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_4;
  uVar1 = *param_5;
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar3;
  *(undefined8 **)(param_2 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_144d91e40;
  *(undefined4 *)(puVar3 + 3) = param_4;
  puVar3[2] = param_3;
  puVar3[4] = uVar1;
  return param_1;
}



// FUNCTION 141b55420 FShadowHeightfieldsPS body=364 status=ok
// SIG undefined FShadowHeightfieldsPS(void)

undefined8 * FShadowHeightfieldsPS::FShadowHeightfieldsPS(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144deb4e0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xda) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xea) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x18,uVar1,L"HeightfieldDescriptions",0);
  FShaderParameter::Bind((longlong)param_1 + 0xc4,uVar1,L"NumHeightfields",0);
  FGlobalHeightfieldParameters::Bind((longlong)param_1 + 0xca,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0xda,*(undefined8 *)(param_2 + 0x18),L"WorldToShadow",0);
  FShaderParameter::Bind(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"ShadowmapMinMax",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe6,*(undefined8 *)(param_2 + 0x18),L"ShadowDepthBias",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"CascadeDepthMinMax",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf2,*(undefined8 *)(param_2 + 0x18),L"ShadowDepthTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf6,*(undefined8 *)(param_2 + 0x18),L"ShadowDepthTextureSampler",0
            );
  return param_1;
}



// FUNCTION 141b55590 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<1,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144deb880;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<1,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b55620 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,3,1,1,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144deb840;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,3,1,1,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b556b0 FUN_141b556b0 body=217 status=ok
// SIG undefined FUN_141b556b0(void)

void FUN_141b556b0(longlong param_1)

{
  FUN_141ace450(param_1 + 0x2d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2e8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2e0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2d8);
  FUN_141ace450(param_1 + 0x2b0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2c0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2b0);
  *(undefined ***)(param_1 + 0x288) = &PTR__scalar_deleting_destructor__144deb628;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x290,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x298,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x298);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x290);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x280);
  return;
}



// FUNCTION 141b55790 FUN_141b55790 body=91 status=ok
// SIG undefined FUN_141b55790(void)

void FUN_141b55790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144deb730;
  FUN_141b69970();
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141b557f0 operator= body=387 status=ok
// SIG undefined operator=(void)

longlong *
TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::operator=
          (longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  if (param_1 != param_2) {
    iVar10 = (int)param_1[2];
    plVar7 = (longlong *)param_1[1];
    if ((longlong *)param_1[1] == (longlong *)0x0) {
      plVar7 = param_1;
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = (undefined8 *)*plVar7;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar11) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar11) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              lVar9 = 0;
              if (uVar6 != 0) {
                lVar9 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar9 + 8) = puVar3;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 1;
    }
    iVar10 = (int)param_2[2];
    plVar7 = (longlong *)param_2[1];
    *(int *)(param_1 + 2) = iVar10;
    if ((iVar10 == 0) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      ResizeForCopy(param_1,iVar10);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_2;
      }
      plVar8 = (longlong *)param_1[1];
      if ((longlong *)param_1[1] == (longlong *)0x0) {
        plVar8 = param_1;
      }
      if (iVar10 != 0) {
        lVar9 = (longlong)plVar8 - (longlong)plVar7;
        do {
          lVar4 = *plVar7;
          *(longlong *)(lVar9 + (longlong)plVar7) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar7 = plVar7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 141b55980 operator= body=415 status=ok
// SIG undefined operator=(void)

longlong FSceneRenderTargetItem::operator=(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  
  TRefCountPtr<FRHITexture>::operator=(param_1,*param_2);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 8,param_2[1]);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x10,param_2[2]);
  TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::operator=
            (param_1 + 0x18,param_2 + 3);
  puVar1 = (undefined8 *)(param_1 + 0x30);
  if (puVar1 != param_2 + 6) {
    plVar10 = (longlong *)*puVar1;
    for (iVar9 = *(int *)(param_1 + 0x38); iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar4 = (undefined8 *)*plVar10;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
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
      plVar10 = plVar10 + 1;
    }
    iVar9 = *(int *)(param_2 + 7);
    plVar10 = (longlong *)param_2[6];
    *(int *)(param_1 + 0x38) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar9);
      plVar8 = (longlong *)*puVar1;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        lVar7 = *plVar10;
        *plVar8 = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        plVar8 = plVar8 + 1;
        plVar10 = plVar10 + 1;
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,param_2[8]);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,param_2[9]);
  return param_1;
}



// FUNCTION 141b55b20 operator<< body=192 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60();
  FUN_1419e0b60(uVar1,param_2 + 4);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 8);
  FUN_1419e0b60(uVar1,param_2 + 0xc);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x10);
  FUN_1419e0b60(uVar1,param_2 + 0x14);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x18);
  FUN_1419e0b60(uVar1,param_2 + 0x1c);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x20);
  FUN_1419e0b60(uVar1,param_2 + 0x24);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x28);
  FUN_1419e0b60(uVar1,param_2 + 0x2c);
  return param_1;
}



// FUNCTION 141b55be0 FUN_141b55be0 body=89 status=ok
// SIG undefined FUN_141b55be0(void)

undefined8 * FUN_141b55be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144deb800;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144deb7c0;
  FUN_141b556b0(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 141b55c40 FUN_141b55c40 body=97 status=ok
// SIG undefined FUN_141b55c40(void)

undefined8 * FUN_141b55c40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144deb720;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141b55cb0 FUN_141b55cb0 body=97 status=ok
// SIG undefined FUN_141b55cb0(void)

undefined8 * FUN_141b55cb0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144deb7b0;
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



// FUNCTION 141b55d20 `scalar_deleting_destructor' body=127 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FDynamicReadBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144deb628;
  *(undefined4 *)(param_1 + 3) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141b55da0 FUN_141b55da0 body=119 status=ok
// SIG undefined FUN_141b55da0(void)

undefined8 * FUN_141b55da0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144deb730;
  FUN_141b69970();
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141b55e20 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FHeightfieldLightingAtlas::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141b55eb0 FUN_141b55eb0 body=248 status=ok
// SIG undefined FUN_141b55eb0(void)

longlong FUN_141b55eb0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x158);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x68);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 141b55fb0 FUN_141b55fb0 body=74 status=ok
// SIG undefined FUN_141b55fb0(void)

undefined8 * FUN_141b55fb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144deb7c0;
  FUN_141b556b0(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 141b56000 FUN_141b56000 body=43 status=ok
// SIG undefined FUN_141b56000(void)

undefined8 * FUN_141b56000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144deb640;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141b56030 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FRenderQueryPool::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FRenderQueryPool();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141b56070 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144deb880;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b560c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144deb840;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b56110 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FViewElementPDI::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_144deb640;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141b56170 AddAmbient body=549 status=ok
// SIG undefined AddAmbient(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TSHVectorRGB<3>::AddAmbient(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8 [12];
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_d8[0] = 0.28209478;
  local_d8[1] = 0.0;
  local_d8[2] = 0.0;
  local_d8[3] = 0.0;
  local_d8[4] = 0.0;
  local_d8[5] = 0.0;
  local_d8[6] = 0.0;
  local_d8[7] = 0.0;
  local_d8[8] = 0.0;
  local_d8[9] = 0.0;
  local_d8[10] = 0.0;
  local_d8[0xb] = 0.0;
  ::_guard_xfg_dispatch_icall_nop(&local_a8,0,0x90);
  fVar2 = *param_2;
  lVar8 = 3;
  local_108 = 0;
  uStack_100 = 0;
  lVar9 = 3;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar7 = 0;
  do {
    fVar3 = *(float *)((longlong)local_d8 + lVar7 + 4);
    fVar4 = *(float *)((longlong)local_d8 + lVar7 + 8);
    fVar5 = *(float *)((longlong)local_d8 + lVar7 + 0xc);
    *(float *)((longlong)&local_108 + lVar7) = *(float *)((longlong)local_d8 + lVar7) * fVar2;
    *(float *)((longlong)&local_108 + lVar7 + 4) = fVar3 * fVar2;
    *(float *)((longlong)&uStack_100 + lVar7) = fVar4 * fVar2;
    *(float *)((longlong)&uStack_100 + lVar7 + 4) = fVar5 * fVar2;
    lVar9 = lVar9 + -1;
    lVar7 = lVar7 + 0x10;
  } while (lVar9 != 0);
  lVar9 = 3;
  local_98 = local_f8;
  uStack_90 = uStack_f0;
  fVar2 = param_2[1];
  local_a8 = local_108;
  uStack_a0 = uStack_100;
  local_88 = local_e8;
  uStack_80 = uStack_e0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar7 = 0;
  do {
    fVar3 = *(float *)((longlong)local_d8 + lVar7 + 4);
    fVar4 = *(float *)((longlong)local_d8 + lVar7 + 8);
    fVar5 = *(float *)((longlong)local_d8 + lVar7 + 0xc);
    *(float *)((longlong)&local_108 + lVar7) = *(float *)((longlong)local_d8 + lVar7) * fVar2;
    *(float *)((longlong)&local_108 + lVar7 + 4) = fVar3 * fVar2;
    *(float *)((longlong)&uStack_100 + lVar7) = fVar4 * fVar2;
    *(float *)((longlong)&uStack_100 + lVar7 + 4) = fVar5 * fVar2;
    uStack_50 = uStack_e0;
    local_58 = local_e8;
    lVar9 = lVar9 + -1;
    lVar7 = lVar7 + 0x10;
  } while (lVar9 != 0);
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  fVar2 = param_2[2];
  local_78 = local_108;
  uStack_70 = uStack_100;
  local_e8 = 0;
  uStack_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar9 = 3;
  lVar7 = 0;
  do {
    fVar3 = *(float *)((longlong)local_d8 + lVar7 + 4);
    fVar4 = *(float *)((longlong)local_d8 + lVar7 + 8);
    fVar5 = *(float *)((longlong)local_d8 + lVar7 + 0xc);
    *(float *)((longlong)&local_108 + lVar7) = *(float *)((longlong)local_d8 + lVar7) * fVar2;
    *(float *)((longlong)&local_108 + lVar7 + 4) = fVar3 * fVar2;
    *(float *)((longlong)&uStack_100 + lVar7) = fVar4 * fVar2;
    *(float *)((longlong)&uStack_100 + lVar7 + 4) = fVar5 * fVar2;
    lVar9 = lVar9 + -1;
    lVar7 = lVar7 + 0x10;
  } while (lVar9 != 0);
  local_48 = local_108;
  uStack_40 = uStack_100;
  lVar7 = 3;
  local_28 = local_e8;
  uStack_20 = uStack_e0;
  local_38 = local_f8;
  uStack_30 = uStack_f0;
  pfVar6 = param_1;
  do {
    pfVar1 = (float *)(((longlong)&local_a8 - (longlong)param_1) + (longlong)pfVar6);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    *pfVar6 = *pfVar1 + *pfVar6;
    pfVar6[1] = fVar2 + pfVar6[1];
    pfVar6[2] = fVar3 + pfVar6[2];
    pfVar6[3] = fVar4 + pfVar6[3];
    pfVar6 = pfVar6 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pfVar6 = param_1 + 0xc;
  lVar7 = 3;
  lVar9 = (longlong)&local_78 - (longlong)pfVar6;
  do {
    pfVar1 = (float *)(lVar9 + (longlong)pfVar6);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    *pfVar6 = *pfVar1 + *pfVar6;
    pfVar6[1] = fVar2 + pfVar6[1];
    pfVar6[2] = fVar3 + pfVar6[2];
    pfVar6[3] = fVar4 + pfVar6[3];
    pfVar6 = pfVar6 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1 = param_1 + 0x18;
  lVar7 = (longlong)&local_48 - (longlong)param_1;
  do {
    pfVar6 = (float *)(lVar7 + (longlong)param_1);
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    *param_1 = *pfVar6 + *param_1;
    param_1[1] = fVar2 + param_1[1];
    param_1[2] = fVar3 + param_1[2];
    param_1[3] = fVar4 + param_1[3];
    param_1 = param_1 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 141b563a0 AddElement body=559 status=ok
// SIG undefined AddElement(void)

undefined8
FTextureLayout3d::AddElement
          (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,uint param_6,
          uint param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  
  if (((param_5 == 0) || (param_6 == 0)) || (param_7 == 0)) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xd) != '\0') {
      param_5 = param_5 + 3 & 0xfffffffc;
      param_6 = param_6 + 3 & 0xfffffffc;
      param_7 = param_7 + 3 & 0xfffffffc;
    }
    iVar1 = AddSurfaceInner(param_1,0,param_5,param_6,param_7,0);
    if ((iVar1 == -1) && (iVar1 = AddSurfaceInner(param_1,0,param_5,param_6,param_7,1), iVar1 == -1)
       ) {
      return 0;
    }
    puVar7 = *(uint **)(param_1 + 0x22);
    if (*(uint **)(param_1 + 0x22) == (uint *)0x0) {
      puVar7 = param_1 + 4;
    }
    lVar2 = (longlong)iVar1;
    *(undefined1 *)(puVar7 + lVar2 * 6 + 5) = 1;
    *param_2 = (uint)(ushort)puVar7[lVar2 * 6 + 2];
    *param_3 = (uint)*(ushort *)((longlong)puVar7 + lVar2 * 0x18 + 10);
    *param_4 = (uint)(ushort)puVar7[lVar2 * 6 + 3];
    param_5 = (ushort)puVar7[lVar2 * 6 + 2] + param_5;
    if ((char)param_1[3] == '\0') {
      if (param_5 <= *param_1) {
        param_5 = *param_1;
      }
      *param_1 = param_5;
      param_6 = *(ushort *)((longlong)puVar7 + lVar2 * 0x18 + 10) + param_6;
      if (param_6 <= param_1[1]) {
        param_6 = param_1[1];
      }
      param_1[1] = param_6;
      param_7 = (ushort)puVar7[lVar2 * 6 + 3] + param_7;
      if (param_7 <= param_1[2]) {
        param_7 = param_1[2];
      }
      param_1[2] = param_7;
    }
    else {
      iVar1 = 0x1f;
      if (param_5 != 0) {
        for (; param_5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar4 = 0x20;
      cVar8 = '\0';
      iVar3 = iVar4;
      if (param_5 != 0) {
        iVar3 = 0x1f - iVar1;
      }
      param_5 = param_5 - 1;
      iVar1 = 0x1f;
      if (param_5 != 0) {
        for (; param_5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      cVar5 = cVar8;
      if (param_5 != 0) {
        cVar5 = '\x1f' - (char)iVar1;
      }
      uVar6 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & -cVar5 & 0x1f);
      if (uVar6 <= *param_1) {
        uVar6 = *param_1;
      }
      *param_1 = uVar6;
      param_6 = *(ushort *)((longlong)puVar7 + lVar2 * 0x18 + 10) + param_6;
      iVar1 = 0x1f;
      if (param_6 != 0) {
        for (; param_6 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (param_6 == 0) {
        iVar1 = 0x20;
      }
      else {
        iVar1 = 0x1f - iVar1;
      }
      param_6 = param_6 - 1;
      iVar3 = 0x1f;
      if (param_6 != 0) {
        for (; param_6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      cVar5 = cVar8;
      if (param_6 != 0) {
        cVar5 = '\x1f' - (char)iVar3;
      }
      uVar6 = 1 << (~(byte)((iVar1 << 0x1a) >> 0x1f) & -cVar5 & 0x1f);
      if (uVar6 <= param_1[1]) {
        uVar6 = param_1[1];
      }
      param_1[1] = uVar6;
      param_7 = (ushort)puVar7[lVar2 * 6 + 3] + param_7;
      iVar1 = 0x1f;
      if (param_7 != 0) {
        for (; param_7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (param_7 != 0) {
        iVar4 = 0x1f - iVar1;
      }
      param_7 = param_7 - 1;
      iVar1 = 0x1f;
      if (param_7 != 0) {
        for (; param_7 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (param_7 != 0) {
        cVar8 = '\x1f' - (char)iVar1;
      }
      uVar6 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
      if (uVar6 <= param_1[2]) {
        uVar6 = param_1[2];
      }
      param_1[2] = uVar6;
    }
  }
  return 1;
}



// FUNCTION 141b56630 AddSurfaceInner body=1548 status=ok
// SIG undefined AddSurfaceInner(void)

ulonglong FTextureLayout3d::AddSurfaceInner
                    (uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,char param_6)

{
  uint *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint *puVar13;
  short sVar14;
  short sStack_78;
  short sStack_76;
  short sStack_74;
  short sStack_72;
  short local_70;
  short sStack_6e;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  
  puVar1 = param_1 + 4;
  puVar12 = *(uint **)(param_1 + 0x22);
  do {
    while( true ) {
      lVar10 = (longlong)(int)param_2;
      puVar13 = puVar12;
      if (puVar12 == (uint *)0x0) {
        puVar13 = puVar1;
      }
      puVar13 = puVar13 + lVar10 * 6;
      if (*puVar13 == 0xffffffff) break;
      uVar11 = AddSurfaceInner(param_1,*puVar13,param_3,param_4,param_5,param_6);
      if ((int)uVar11 != -1) {
        return uVar11;
      }
      puVar12 = *(uint **)(param_1 + 0x22);
      puVar13 = puVar12;
      if (puVar12 == (uint *)0x0) {
        puVar13 = puVar1;
      }
      param_2 = puVar13[lVar10 * 6 + 1];
    }
    if ((char)puVar13[5] != '\0') {
      return 0xffffffff;
    }
    uVar3 = *(ushort *)((longlong)puVar13 + 0xe);
    if (uVar3 < param_3) {
      return 0xffffffff;
    }
    uVar4 = (ushort)puVar13[4];
    if (uVar4 < param_4) {
      return 0xffffffff;
    }
    uVar5 = *(ushort *)((longlong)puVar13 + 0x12);
    if (uVar5 < param_5) {
      return 0xffffffff;
    }
    if (param_6 == '\0') {
      if (*param_1 < (ushort)puVar13[2] + param_3) {
        return 0xffffffff;
      }
      if (param_1[1] < *(ushort *)((longlong)puVar13 + 10) + param_4) {
        return 0xffffffff;
      }
      if (param_1[2] < (ushort)puVar13[3] + param_4) {
        return 0xffffffff;
      }
    }
    if (((uVar3 == param_3) && (uVar4 == param_4)) && (uVar5 == param_5)) {
      return (ulonglong)param_2;
    }
    sVar14 = (short)param_5;
    if (uVar4 - param_4 < uVar3 - param_3) {
      if (puVar12 == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar2 = *(undefined8 *)(puVar12 + lVar10 * 6 + 4);
      puVar12 = puVar12 + lVar10 * 6;
      uVar9 = puVar12[2];
      uVar7 = puVar12[3];
      *puVar12 = param_1[0x24];
      uVar6 = param_1[0x24];
      uVar8 = uVar6 + 1;
      param_1[0x24] = uVar8;
      local_70 = (short)uVar2;
      sStack_6e = (short)((ulonglong)uVar2 >> 0x10);
      sStack_74 = (short)uVar7;
      sStack_72 = (short)(uVar7 >> 0x10);
      sStack_78 = (short)uVar9;
      sStack_76 = (short)(uVar9 >> 0x10);
      if (uVar5 - param_5 < uVar3 - param_3) {
        if ((int)param_1[0x25] < (int)uVar8) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar13 = *(uint **)(param_1 + 0x22);
        puVar12 = puVar13;
        if (puVar13 == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        sVar14 = (short)param_3;
        if (puVar12 != (uint *)0x0) {
          *(short *)((longlong)puVar12 + 0xe) = sVar14;
          puVar12[0] = 0xffffffff;
          puVar12[1] = 0xffffffff;
          *(short *)(puVar12 + 2) = sStack_78;
          *(short *)((longlong)puVar12 + 10) = sStack_76;
          *(short *)(puVar12 + 3) = sStack_74;
          *(short *)(puVar12 + 4) = local_70;
          *(short *)((longlong)puVar12 + 0x12) = sStack_6e;
          *(undefined1 *)(puVar12 + 5) = 0;
          puVar13 = *(uint **)(param_1 + 0x22);
        }
        if (puVar13 == (uint *)0x0) {
          puVar13 = puVar1;
        }
        puVar13[lVar10 * 6 + 1] = param_1[0x24];
        uVar6 = param_1[0x24];
        uVar9 = uVar6 + 1;
        param_1[0x24] = uVar9;
        if ((int)param_1[0x25] < (int)uVar9) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar12 = *(uint **)(param_1 + 0x22);
        if (*(uint **)(param_1 + 0x22) == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        if (puVar12 != (uint *)0x0) {
          *(short *)(puVar12 + 3) = sStack_74;
          *(short *)(puVar12 + 4) = local_70;
          *(short *)((longlong)puVar12 + 0x12) = sStack_6e;
          *(short *)(puVar12 + 2) = sVar14 + sStack_78;
          *(short *)((longlong)puVar12 + 0xe) = sStack_72 - sVar14;
LAB_141b56be8:
          *(undefined1 *)(puVar12 + 5) = 0;
          *(short *)((longlong)puVar12 + 10) = sStack_76;
          puVar12[0] = 0xffffffff;
          puVar12[1] = 0xffffffff;
        }
      }
      else {
        if ((int)param_1[0x25] < (int)uVar8) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar13 = *(uint **)(param_1 + 0x22);
        puVar12 = puVar13;
        if (puVar13 == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        if (puVar12 != (uint *)0x0) {
          *(short *)((longlong)puVar12 + 0x12) = sVar14;
          puVar12[0] = 0xffffffff;
          puVar12[1] = 0xffffffff;
          *(short *)(puVar12 + 2) = sStack_78;
          *(short *)((longlong)puVar12 + 10) = sStack_76;
          *(short *)(puVar12 + 3) = sStack_74;
          *(short *)((longlong)puVar12 + 0xe) = sStack_72;
          *(short *)(puVar12 + 4) = local_70;
          *(undefined1 *)(puVar12 + 5) = 0;
          puVar13 = *(uint **)(param_1 + 0x22);
        }
        if (puVar13 == (uint *)0x0) {
          puVar13 = puVar1;
        }
        puVar13[lVar10 * 6 + 1] = param_1[0x24];
        uVar6 = param_1[0x24];
        uVar9 = uVar6 + 1;
        param_1[0x24] = uVar9;
        if ((int)param_1[0x25] < (int)uVar9) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar12 = *(uint **)(param_1 + 0x22);
        if (*(uint **)(param_1 + 0x22) == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        if (puVar12 != (uint *)0x0) {
          *(short *)(puVar12 + 3) = sStack_74 + sVar14;
LAB_141b56bd1:
          *(short *)((longlong)puVar12 + 0x12) = sStack_6e - sVar14;
          *(short *)(puVar12 + 4) = local_70;
          *(short *)((longlong)puVar12 + 0xe) = sStack_72;
          *(short *)(puVar12 + 2) = sStack_78;
          goto LAB_141b56be8;
        }
      }
    }
    else {
      if (puVar12 == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar2 = *(undefined8 *)(puVar12 + lVar10 * 6 + 4);
      puVar12 = puVar12 + lVar10 * 6;
      uVar9 = puVar12[2];
      uVar7 = puVar12[3];
      *puVar12 = param_1[0x24];
      uVar6 = param_1[0x24];
      uVar8 = uVar6 + 1;
      param_1[0x24] = uVar8;
      local_58 = (short)uVar2;
      sStack_56 = (short)((ulonglong)uVar2 >> 0x10);
      sStack_5c = (short)uVar7;
      sStack_5a = (short)(uVar7 >> 0x10);
      sStack_60 = (short)uVar9;
      sStack_5e = (short)(uVar9 >> 0x10);
      if (uVar5 - param_5 < uVar4 - param_4) {
        if ((int)param_1[0x25] < (int)uVar8) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar13 = *(uint **)(param_1 + 0x22);
        puVar12 = puVar13;
        if (puVar13 == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        sVar14 = (short)param_4;
        if (puVar12 != (uint *)0x0) {
          *(short *)(puVar12 + 4) = sVar14;
          puVar12[0] = 0xffffffff;
          puVar12[1] = 0xffffffff;
          *(short *)(puVar12 + 2) = sStack_60;
          *(short *)((longlong)puVar12 + 10) = sStack_5e;
          *(short *)(puVar12 + 3) = sStack_5c;
          *(short *)((longlong)puVar12 + 0xe) = sStack_5a;
          *(short *)((longlong)puVar12 + 0x12) = sStack_56;
          *(undefined1 *)(puVar12 + 5) = 0;
          puVar13 = *(uint **)(param_1 + 0x22);
        }
        if (puVar13 == (uint *)0x0) {
          puVar13 = puVar1;
        }
        puVar13[lVar10 * 6 + 1] = param_1[0x24];
        uVar6 = param_1[0x24];
        uVar9 = uVar6 + 1;
        param_1[0x24] = uVar9;
        if ((int)param_1[0x25] < (int)uVar9) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar12 = *(uint **)(param_1 + 0x22);
        if (*(uint **)(param_1 + 0x22) == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        if (puVar12 != (uint *)0x0) {
          *(short *)(puVar12 + 2) = sStack_60;
          puVar12[0] = 0xffffffff;
          puVar12[1] = 0xffffffff;
          *(short *)(puVar12 + 3) = sStack_5c;
          *(short *)((longlong)puVar12 + 0xe) = sStack_5a;
          *(short *)((longlong)puVar12 + 0x12) = sStack_56;
          *(short *)((longlong)puVar12 + 10) = sStack_5e + sVar14;
          *(undefined1 *)(puVar12 + 5) = 0;
          *(short *)(puVar12 + 4) = local_58 - sVar14;
        }
      }
      else {
        if ((int)param_1[0x25] < (int)uVar8) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar13 = *(uint **)(param_1 + 0x22);
        puVar12 = puVar13;
        if (puVar13 == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        if (puVar12 != (uint *)0x0) {
          *(short *)((longlong)puVar12 + 0x12) = sVar14;
          puVar12[0] = 0xffffffff;
          puVar12[1] = 0xffffffff;
          *(short *)(puVar12 + 2) = sStack_60;
          *(short *)((longlong)puVar12 + 10) = sStack_5e;
          *(short *)(puVar12 + 3) = sStack_5c;
          *(short *)((longlong)puVar12 + 0xe) = sStack_5a;
          *(short *)(puVar12 + 4) = local_58;
          *(undefined1 *)(puVar12 + 5) = 0;
          puVar13 = *(uint **)(param_1 + 0x22);
        }
        if (puVar13 == (uint *)0x0) {
          puVar13 = puVar1;
        }
        puVar13[lVar10 * 6 + 1] = param_1[0x24];
        uVar6 = param_1[0x24];
        uVar9 = uVar6 + 1;
        param_1[0x24] = uVar9;
        if ((int)param_1[0x25] < (int)uVar9) {
          TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
          ResizeGrow(puVar1);
        }
        puVar12 = *(uint **)(param_1 + 0x22);
        if (*(uint **)(param_1 + 0x22) == (uint *)0x0) {
          puVar12 = puVar1;
        }
        puVar12 = puVar12 + (longlong)(int)uVar6 * 6;
        if (puVar12 != (uint *)0x0) {
          *(short *)(puVar12 + 3) = sStack_5c + sVar14;
          sStack_76 = sStack_5e;
          local_70 = local_58;
          sStack_72 = sStack_5a;
          sStack_78 = sStack_60;
          sStack_6e = sStack_56;
          goto LAB_141b56bd1;
        }
      }
    }
    puVar12 = *(uint **)(param_1 + 0x22);
    puVar13 = puVar12;
    if (puVar12 == (uint *)0x0) {
      puVar13 = puVar1;
    }
    param_2 = puVar13[lVar10 * 6];
  } while( true );
}



// FUNCTION 141b56c40 AddUpdateRegionForPrimitive body=747 status=ok
// SIG undefined AddUpdateRegionForPrimitive(void)

void AddUpdateRegionForPrimitive
               (float *param_1,float param_2,float *param_3,float param_4,longlong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_9c;
  float local_98;
  undefined4 uStack_90;
  
  fVar16 = param_1[3];
  fVar13 = 1.0 / param_4;
  fVar14 = (float)((int)ROUND(((*param_1 - fVar16) - param_2) * (fVar13 + fVar13) - 0.5) >> 1) *
           param_4;
  if (fVar14 <= *param_3) {
    fVar14 = *param_3;
  }
  fVar15 = (float)((int)ROUND(((param_1[1] - fVar16) - param_2) * (fVar13 + fVar13) - 0.5) >> 1) *
           param_4;
  if (fVar15 <= param_3[1]) {
    fVar15 = param_3[1];
  }
  fVar11 = (fVar16 + fVar16 + param_2 + param_2) * fVar13;
  fVar16 = (float)((int)ROUND(((param_1[2] - fVar16) - param_2) * (fVar13 + fVar13) - 0.5) >> 1) *
           param_4;
  if (fVar16 <= param_3[2]) {
    fVar16 = param_3[2];
  }
  param_4 = (float)-((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1) * param_4;
  fVar10 = fVar14 + param_4;
  fVar12 = fVar15 + param_4;
  fVar11 = param_3[3];
  fStack_9c = fVar10;
  if (fVar11 < fVar10) {
    fStack_9c = fVar11;
  }
  fVar9 = param_3[4];
  if (fVar10 <= fVar11) {
    fVar11 = fVar10;
  }
  local_98 = fVar12;
  if (fVar9 < fVar12) {
    local_98 = fVar9;
  }
  fVar10 = param_3[5];
  if (fVar12 <= fVar9) {
    fVar9 = fVar12;
  }
  if (fVar16 + param_4 <= fVar10) {
    fVar10 = fVar16 + param_4;
  }
  iVar3 = (int)((fVar11 - fVar14) * fVar13 + 0.5);
  iVar5 = (int)((fVar10 - fVar16) * fVar13 + 0.5);
  iVar7 = (int)((fVar9 - fVar15) * fVar13 + 0.5);
  if (((0 < iVar3) && (0 < iVar7)) && (0 < iVar5)) {
    iVar2 = *(int *)(param_5 + 0x90);
    iVar4 = iVar2 + 1;
    *(int *)(param_5 + 0x90) = iVar4;
    if (*(int *)(param_5 + 0x94) < iVar4) {
      TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(param_5);
    }
    lVar8 = *(longlong *)(param_5 + 0x88);
    if (*(longlong *)(param_5 + 0x88) == 0) {
      lVar8 = param_5;
    }
    lVar6 = (longlong)iVar2 * 0x2c;
    *(undefined8 *)(lVar8 + lVar6) = CONCAT44(fVar15,fVar14);
    ((undefined8 *)(lVar8 + lVar6))[1] = CONCAT44(fStack_9c,fVar16);
    puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar6);
    *puVar1 = CONCAT44(fVar10,local_98);
    puVar1[1] = CONCAT44(iVar3,uStack_90) & 0xffffffffffffff00;
    *(ulonglong *)(lVar8 + 0x20 + lVar6) = CONCAT44(iVar5,iVar7);
    *(undefined4 *)(lVar8 + 0x28 + lVar6) = 3;
  }
  return;
}



// FUNCTION 141b56f30 AllocateClipmapTexture body=285 status=ok
// SIG undefined AllocateClipmapTexture(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AllocateClipmapTexture(undefined8 param_1,int param_2,int param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = L"GlobalDistanceField0";
  if (param_3 == 0) {
    local_88 = L"MostlyStaticGlobalDistanceField0";
  }
  if (param_2 == 1) {
    pwVar1 = L"MostlyStaticGlobalDistanceField1";
    local_88 = L"GlobalDistanceField1";
  }
  else if (param_2 == 2) {
    pwVar1 = L"MostlyStaticGlobalDistanceField2";
    local_88 = L"GlobalDistanceField2";
  }
  else {
    if (param_2 != 3) goto LAB_141b56fa5;
    pwVar1 = L"MostlyStaticGlobalDistanceField3";
    local_88 = L"GlobalDistanceField3";
  }
  if (param_3 == 0) {
    local_88 = pwVar1;
  }
LAB_141b56fa5:
  local_58 = DAT_146ab6938;
  local_54 = DAT_1464c1c64;
  local_50 = DAT_1464c1c64;
  local_4c = DAT_1464c1c64;
  local_78 = 0;
  local_48 = 1;
  local_40 = 1;
  local_80 = 1;
  local_28 = L"UnknownTextureVolume";
  local_20 = 0;
  local_68 = _DAT_146ab6928;
  uStack_64 = uRam0000000146ab692c;
  uStack_60 = uRam0000000146ab6930;
  uStack_5c = uRam0000000146ab6934;
  local_44 = 0x10000;
  local_3c = 0x15;
  local_34 = 0x40010009;
  local_30 = 0;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_68);
  return;
}



// FUNCTION 141b57050 FUN_141b57050 body=160 status=ok
// SIG undefined FUN_141b57050(void)

undefined8 FUN_141b57050(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  char cVar2;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_18;
  undefined8 *local_10;
  
  if ((*(int *)(*(longlong *)(param_2 + 8) + 0x74) == 1) || (param_3 != '\0')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  uVar1 = DAT_1464c1cc4;
  if (cVar2 != '\0') {
    uVar1 = 1;
  }
  local_res10 = FUN_141b60940(param_1,uVar1,*(longlong *)(param_2 + 8) + 0xc0,cVar2,param_3);
  local_18 = param_2 + 0x10;
  local_10 = &local_res10;
  TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_&&>_>
            (param_1 + 0x158,local_res8,&local_18,0);
  return *(undefined8 *)(*(longlong *)(param_1 + 0x158) + 8 + (longlong)local_res8[0] * 0x18);
}



// FUNCTION 141b570f0 FUN_141b570f0 body=38 status=ok
// SIG undefined FUN_141b570f0(void)

void FUN_141b570f0(undefined8 param_1,longlong param_2,int param_3)

{
  if (*(longlong *)(param_2 + 0x1ab0) != 0) {
    FUN_141d1f100(*(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x1ab0) + 0x17b0) + (longlong)param_3 * 8)
                  ,param_1);
    return;
  }
  return;
}



// FUNCTION 141b57120 Bind body=133 status=ok
// SIG undefined Bind(void)

void FForwardCullingParameters::Bind(longlong param_1,undefined8 param_2)

{
  FRWShaderParameter::Bind(param_1,param_2,L"NextCulledLightLink");
  FRWShaderParameter::Bind(param_1 + 8,param_2,L"StartOffsetGrid");
  FRWShaderParameter::Bind(param_1 + 0x10,param_2,L"CulledLightLinks");
  FRWShaderParameter::Bind(param_1 + 0x18,param_2,L"NextCulledLightData");
  FRWShaderParameter::Bind(param_1 + 0x20,param_2,L"NumCulledLightsGrid");
  FRWShaderParameter::Bind(param_1 + 0x28,param_2,L"CulledLightDataGrid");
  return;
}



// FUNCTION 141b571b0 Bind body=107 status=ok
// SIG undefined Bind(void)

void FGlobalHeightfieldParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"GlobalHeightfieldTexture",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"GlobalNormalTexture",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"GlobalDiffuseColorTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"GlobalHeightfieldSampler",0);
  return;
}



// FUNCTION 141b57220 Bind body=107 status=ok
// SIG undefined Bind(void)

void FHeightfieldTextureParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"HeightfieldTexture",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"HeightfieldSampler",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"DiffuseColorTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"DiffuseColorSampler",0);
  return;
}



// FUNCTION 141b57290 Bind body=107 status=ok
// SIG undefined Bind(void)

void FStencilingGeometryShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"StencilingGeometryPosAndScale",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"StencilingConeParameters",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"StencilingConeTransform",0);
  FShaderParameter::Bind(param_1 + 0x12,param_2,L"StencilingPreViewTranslation",0);
  return;
}



// FUNCTION 141b57300 CalcDiffuseTransfer body=401 status=ok
// SIG undefined CalcDiffuseTransfer(void)

undefined8 * TSHVector<3>::CalcDiffuseTransfer(undefined8 *param_1,float *param_2)

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
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)param_1 = 0x3e906ec1;
  fVar1 = param_2[1];
  *(float *)((longlong)param_1 + 4) = fVar1 * -0.488603;
  fVar2 = param_2[2];
  *(float *)(param_1 + 1) = fVar2 * 0.488603;
  fVar3 = *param_2;
  *(float *)((longlong)param_1 + 0xc) = fVar3 * -0.488603;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar9 = fVar4 * 1.092548 * fVar5;
  *(float *)(param_1 + 2) = fVar9;
  fVar10 = fVar6 * fVar6 * 0.94617593 - 0.315392;
  fVar8 = param_2[1] * -1.092548 * param_2[2];
  *(float *)(param_1 + 3) = fVar10;
  *(float *)((longlong)param_1 + 0x14) = fVar8;
  fVar6 = *param_2;
  fVar7 = param_2[2];
  *(undefined4 *)param_1 = 0x3f62dfcf;
  *(float *)((longlong)param_1 + 4) = fVar1 * -0.488603 * 2.0943952;
  *(float *)(param_1 + 1) = fVar2 * 0.488603 * 2.0943952;
  *(float *)((longlong)param_1 + 0xc) = fVar3 * -0.488603 * 2.0943952;
  *(float *)(param_1 + 3) = fVar10 * 0.7853982;
  *(float *)(param_1 + 4) = (fVar4 * fVar4 - fVar5 * fVar5) * 0.546274 * 0.7853982;
  *(float *)((longlong)param_1 + 0x1c) = fVar6 * -1.092548 * fVar7 * 0.7853982;
  *(float *)(param_1 + 2) = fVar9 * 0.7853982;
  *(float *)((longlong)param_1 + 0x14) = fVar8 * 0.7853982;
  return param_1;
}



// FUNCTION 141b574a0 CalculateBlockPositionAndSize body=753 status=ok
// SIG undefined CalculateBlockPositionAndSize(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FIndirectLightingCache::CalculateBlockPositionAndSize
               (undefined8 param_1,float *param_2,int param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_60;
  
  fVar7 = 1.0 / _DAT_146a1c434;
  fVar2 = ::_guard_xfg_dispatch_icall_nop(param_2[3] + param_2[3]);
  fVar2 = fVar2 * fVar7;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(param_2[4] + param_2[4]);
  fVar3 = fVar3 * fVar7;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  fVar4 = ::_guard_xfg_dispatch_icall_nop(param_2[5] + param_2[5]);
  fVar6 = DAT_1464c1cdc;
  fVar4 = fVar4 * fVar7;
  iVar1 = 5;
  if (2 < param_3) {
    iVar1 = param_3;
  }
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  fVar9 = 1.0 / (float)(iVar1 + -2);
  fVar2 = ::_guard_xfg_dispatch_icall_nop(DAT_1464c1cdc,(float)((int)fVar2 + 1));
  fVar2 = fVar2 * fVar9;
  fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar6,(float)((int)fVar3 + 1));
  fVar7 = fVar7 * fVar9;
  local_60 = ::_guard_xfg_dispatch_icall_nop(fVar6,(float)((int)fVar4 + 1));
  local_60 = local_60 * fVar9;
  fVar3 = *param_2 - param_2[3];
  fVar6 = param_2[1] - param_2[4];
  fVar4 = param_2[2] - param_2[5];
  if (param_3 < 3) {
    fVar3 = (fVar2 * 0.5 + *param_2) / fVar2;
    fVar6 = (fVar7 * 0.5 + param_2[1]) / fVar7;
    fVar4 = (local_60 * 0.5 + param_2[2]) / local_60;
    *param_4 = CONCAT44((float)((int)ROUND((fVar6 + fVar6) - 0.5) >> 1) * fVar7,
                        (float)((int)ROUND((fVar3 + fVar3) - 0.5) >> 1) * fVar2);
    fVar4 = (float)((int)ROUND((fVar4 + fVar4) - 0.5) >> 1) * local_60;
    fVar9 = 0.0;
    fVar8 = 0.0;
    local_60 = 0.0;
  }
  else {
    fVar5 = (float)param_3;
    fVar9 = fVar2 * fVar5;
    fVar4 = (float)((int)ROUND((fVar4 + fVar4) / local_60 - 0.5) >> 1) * local_60 - local_60 * 0.5;
    fVar8 = fVar7 * fVar5;
    local_60 = local_60 * fVar5;
    *param_4 = CONCAT44((float)((int)ROUND((fVar6 + fVar6) / fVar7 - 0.5) >> 1) * fVar7 -
                        fVar7 * 0.5,
                        (float)((int)ROUND((fVar3 + fVar3) / fVar2 - 0.5) >> 1) * fVar2 -
                        fVar2 * 0.5);
  }
  *(float *)(param_4 + 1) = fVar4;
  *param_5 = CONCAT44(fVar8,fVar9);
  *(float *)(param_5 + 1) = local_60;
  return;
}



// FUNCTION 141b577a0 FUN_141b577a0 body=670 status=ok
// SIG undefined FUN_141b577a0(void)

void FUN_141b577a0(longlong param_1,int *param_2,int param_3,float *param_4,float *param_5,
                  undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

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
  
  fVar3 = 1.0 / (float)*(int *)(param_1 + 0x34);
  fVar10 = (float)*param_2 * fVar3;
  fVar7 = (float)param_2[1] * fVar3;
  fVar8 = (float)param_2[2] * fVar3;
  fVar3 = fVar3 * 0.5;
  *param_8 = CONCAT44(fVar3 + fVar7,fVar3 + fVar10);
  *(float *)(param_8 + 1) = fVar3 + fVar8;
  if (param_3 < 3) {
    *param_6 = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    fVar3 = 0.5 / (float)*(int *)(param_1 + 0x34);
    *param_7 = CONCAT44(fVar3 + fVar7,fVar3 + fVar10);
    *(float *)(param_7 + 1) = fVar3 + fVar8;
    *param_9 = *param_8;
    fVar3 = *(float *)(param_8 + 1);
  }
  else {
    fVar9 = (float)param_3 / (float)*(int *)(param_1 + 0x34);
    fVar6 = 0.01;
    fVar3 = *param_5;
    if (*param_5 == 0.0) {
      *param_5 = 0.01;
      fVar3 = fVar6;
    }
    fVar4 = param_5[1];
    if (param_5[1] == 0.0) {
      param_5[1] = 0.01;
      fVar4 = fVar6;
    }
    fVar5 = param_5[2];
    if (param_5[2] == 0.0) {
      param_5[2] = 0.01;
      fVar5 = fVar6;
    }
    fVar6 = *param_4;
    fVar1 = param_4[2];
    *param_6 = CONCAT44((1.0 / fVar4) * fVar9,(1.0 / fVar3) * fVar9);
    fVar2 = param_4[1];
    *(float *)(param_6 + 1) = (1.0 / fVar5) * fVar9;
    *param_7 = CONCAT44(fVar7 - fVar9 * fVar2 * (1.0 / fVar4),fVar10 - fVar9 * fVar6 * (1.0 / fVar3)
                       );
    *(float *)(param_7 + 1) = fVar8 - fVar9 * fVar1 * (1.0 / fVar5);
    fVar6 = 0.5 / (float)*(int *)(param_1 + 0x34);
    fVar3 = (fVar8 + fVar9) - fVar6;
    *param_9 = CONCAT44((fVar7 + fVar9) - fVar6,(fVar9 + fVar10) - fVar6);
  }
  *(float *)(param_9 + 1) = fVar3;
  return;
}



// FUNCTION 141b57a40 FUN_141b57a40 body=333 status=ok
// SIG undefined FUN_141b57a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b57a40(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float extraout_XMM0_Da;
  undefined1 local_res18 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x170);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))
              (plVar2,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),local_res18);
    cVar3 = (**(code **)(_DAT_00000000 + 0x98))();
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))
                (*(longlong **)(param_2 + 0x30),&local_48);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 200)) {
        lVar6 = 0;
        do {
          lVar7 = *(longlong *)(param_1 + 0xc0) + lVar6;
          if (*(char *)(*(longlong *)(param_2 + 0x30) + 0x188) == '\0') {
            local_48 = *(undefined8 *)(lVar7 + 0x8dc);
            uStack_40 = *(undefined4 *)(lVar7 + 0x8e4);
          }
          uVar1 = *(uint *)(param_2 + 0x58);
          if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar7 + 0x1e20))) {
            lVar8 = *(longlong *)(lVar7 + 0x1e18);
            if (*(longlong *)(lVar7 + 0x1e18) == 0) {
              lVar8 = lVar7 + 0x1e08;
            }
            uVar4 = uVar1;
            if ((int)uVar1 < 0) {
              uVar4 = uVar1 + 0x1f;
            }
            if ((*(uint *)(lVar8 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
              local_38 = (undefined4)local_48;
              uStack_34 = local_48._4_4_;
              uStack_30 = uStack_40;
              uStack_2c = uStack_3c;
              FUN_141b64db0(lVar7,&local_38);
              if (0.00390625 < extraout_XMM0_Da) {
                return 1;
              }
            }
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x30d0;
        } while (iVar5 < *(int *)(param_1 + 200));
      }
    }
  }
  return 0;
}



// FUNCTION 141b57b90 FUN_141b57b90 body=202 status=ok
// SIG undefined FUN_141b57b90(void)

void FUN_141b57b90(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  
  if (((DAT_1464c1c74 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) && (DAT_146a153b0 != 0)) {
    iVar1 = *(int *)(param_2 + 0x1a38);
    iVar2 = FUN_14274f980(param_2);
    if (((2 < iVar1) && (iVar2 == 0)) &&
       ((0 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c) &&
        ((*(char *)(*(longlong *)(param_4 + 0x30) + 0x188) == '\0' &&
         ((*(uint *)(*(longlong *)(param_4 + 0x30) + 0x180) >> 4 & 1) != 0)))))) {
      FUN_141ad74f0(param_3,*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1170) + 0x48) + 8),0
                    ,4,0x22,0);
    }
  }
  return;
}



// FUNCTION 141b57c60 FUN_141b57c60 body=2224 status=ok
// SIG undefined FUN_141b57c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b57c60(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,longlong param_6,int param_7,float *param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 *puVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  longlong local_290;
  int local_288;
  float *local_280;
  undefined8 local_278;
  undefined4 local_270;
  int local_268 [2];
  undefined8 local_260;
  undefined1 *puStack_258;
  undefined4 local_250;
  undefined8 uStack_24c;
  undefined4 uStack_244;
  int local_240 [2];
  undefined *local_238;
  undefined8 *local_230;
  undefined1 *local_228;
  longlong local_220;
  longlong local_218;
  longlong *local_210;
  undefined8 uStack_208;
  undefined1 local_200 [16];
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_ac;
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_88;
  undefined1 *puVar20;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_1e8 = param_6;
  if (DAT_1464c1c6c != 0) {
    iVar11 = *(int *)(param_3 + 0x1618);
    if (((0 < iVar11) &&
        (local_220 = param_4, local_218 = param_3,
        cVar7 = SupportsDistanceFieldAO
                          ((longlong)*(int *)(param_3 + 8),(&DAT_1464c9c48)[*(int *)(param_3 + 8)]),
        cVar7 != '\0')) &&
       ((0x1b < (uint)(&DAT_1464c9c48)[*(int *)(param_3 + 8)] ||
        ((0x8c51800U >> ((&DAT_1464c9c48)[*(int *)(param_3 + 8)] & 0x1f) & 1) == 0)))) {
      puVar13 = (undefined1 *)0x0;
      local_d8 = 0;
      local_c0 = 0;
      uVar19 = 0;
      local_ac = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 1;
      uStack_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d4 = 0;
      local_b8 = 0;
      local_b0 = 0xffffffff;
      local_a0 = 0;
      local_98 = 0;
      puVar21 = puVar13;
      local_b8._0_4_ = uVar19;
      if (0 < iVar11) {
        do {
          plVar15 = *(longlong **)
                     (*(longlong *)(*(longlong *)(param_3 + 0x1610) + (longlong)puVar21 * 8) + 8);
          fVar25 = *(float *)(plVar15 + 0x18) - *(float *)((longlong)plVar15 + 0xcc);
          fVar23 = *(float *)((longlong)plVar15 + 0xc4) - *(float *)(plVar15 + 0x1a);
          fVar24 = *(float *)(plVar15 + 0x19) - *(float *)((longlong)plVar15 + 0xd4);
          if (((((*(float *)((longlong)plVar15 + 0xcc) + *(float *)(plVar15 + 0x18) < *param_8) ||
                (param_8[3] <= fVar25 && fVar25 != param_8[3])) ||
               (*(float *)(plVar15 + 0x1a) + *(float *)((longlong)plVar15 + 0xc4) < param_8[1])) ||
              ((param_8[4] <= fVar23 && fVar23 != param_8[4] ||
               (*(float *)((longlong)plVar15 + 0xd4) + *(float *)(plVar15 + 0x19) < param_8[2]))))
             || (param_8[5] <= fVar24 && fVar24 != param_8[5])) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            local_1d8 = 0;
            uStack_1d0 = 0x3f80000000000000;
            local_1c8 = 0;
            uStack_1c0 = 0x3f80000000000000;
            local_238 = (undefined *)0x0;
            local_228 = (undefined1 *)0x0;
            local_1b8 = plVar15[0x10];
            lStack_1b0 = plVar15[0x11];
            local_1a8 = plVar15[0x12];
            lStack_1a0 = plVar15[0x13];
            local_198 = plVar15[0x14];
            lStack_190 = plVar15[0x15];
            local_188 = plVar15[0x16];
            lStack_180 = plVar15[0x17];
            local_158 = 0;
            uStack_150 = 0x3f80000000000000;
            uStack_170 = 0;
            local_168 = 0;
            (**(code **)(*plVar15 + 0xa8))(plVar15,&local_238,&local_228,&local_1d8);
            if ((local_238 != (undefined *)0x0) &&
               (*(longlong *)(*(longlong *)(local_238 + 0x60) + 0x30) != 0)) {
              if ((uStack_100._4_4_ - local_108._4_4_) * ((int)uStack_100 - (int)local_108) == 0) {
                local_108 = uStack_170;
                uStack_100 = local_168;
                FMatrix::GetScaleVector(&local_1b8,local_120,0x322bcc77);
              }
              else {
                iVar8 = (int)uStack_170;
                if ((int)local_108 <= (int)uStack_170) {
                  iVar8 = (int)local_108;
                }
                iVar9 = uStack_170._4_4_;
                if (local_108._4_4_ <= uStack_170._4_4_) {
                  iVar9 = local_108._4_4_;
                }
                local_108 = CONCAT44(iVar9,iVar8);
                iVar8 = (int)local_168;
                if ((int)local_168 <= (int)uStack_100) {
                  iVar8 = (int)uStack_100;
                }
                iVar9 = local_168._4_4_;
                if (local_168._4_4_ <= uStack_100._4_4_) {
                  iVar9 = uStack_100._4_4_;
                }
                uStack_100 = CONCAT44(iVar9,iVar8);
              }
              local_260 = local_238;
              puStack_258 = local_228;
              TSet<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>,0>,FDefaultSetAllocator>
              ::FindId(&local_e0,local_240,&local_260);
              if ((local_240[0] == -1) ||
                 (lVar16 = local_e0 + (longlong)local_240[0] * 0x28, lVar16 == 0)) {
                local_230 = &local_260;
                FUN_141b4d210(&local_e0,local_268,&local_230,0);
                lVar16 = local_e0 + (longlong)local_268[0] * 0x28;
              }
              iVar8 = *(int *)(lVar16 + 0x18);
              lVar18 = (longlong)iVar8;
              *(int *)(lVar16 + 0x18) = iVar8 + 1;
              if (*(int *)(lVar16 + 0x1c) < iVar8 + 1) {
                TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                          (lVar16 + 0x10,iVar8);
              }
              lVar16 = *(longlong *)(lVar16 + 0x10);
              puVar12 = (undefined8 *)(lVar16 + lVar18 * 0x90);
              *puVar12 = local_1d8;
              puVar12[1] = uStack_1d0;
              puVar12 = (undefined8 *)(lVar16 + 0x10 + lVar18 * 0x90);
              *puVar12 = local_1c8;
              puVar12[1] = uStack_1c0;
              plVar15 = (longlong *)(lVar16 + 0x20 + lVar18 * 0x90);
              *plVar15 = local_1b8;
              plVar15[1] = lStack_1b0;
              plVar15 = (longlong *)(lVar16 + 0x30 + lVar18 * 0x90);
              *plVar15 = local_1a8;
              plVar15[1] = lStack_1a0;
              plVar15 = (longlong *)(lVar16 + 0x40 + lVar18 * 0x90);
              *plVar15 = local_198;
              plVar15[1] = lStack_190;
              plVar15 = (longlong *)(lVar16 + 0x50 + lVar18 * 0x90);
              *plVar15 = local_188;
              plVar15[1] = lStack_180;
              puVar12 = (undefined8 *)(lVar16 + 0x60 + lVar18 * 0x90);
              *puVar12 = local_178;
              puVar12[1] = uStack_170;
              puVar12 = (undefined8 *)(lVar16 + 0x70 + lVar18 * 0x90);
              *puVar12 = local_168;
              puVar12[1] = uStack_160;
              puVar12 = (undefined8 *)(lVar16 + 0x80 + lVar18 * 0x90);
              *puVar12 = local_158;
              puVar12[1] = uStack_150;
              param_3 = local_218;
            }
          }
          puVar21 = puVar21 + 1;
        } while ((longlong)puVar21 < (longlong)iVar11);
      }
      if (0 < local_d8 - local_ac) {
        local_260 = (undefined *)0x100000000;
        puStack_258 = local_d0;
        uStack_24c = 0;
        if ((uint)local_b8 != 0) {
          puVar21 = local_d0;
          if (local_c0 != 0) {
            puVar21 = puVar13;
          }
          uVar10 = *(uint *)((ulonglong)puVar21 | local_c0);
          puVar20 = puVar13;
          while (uVar10 == 0) {
            iVar11 = (int)puVar13;
            uVar19 = (int)puVar20 + 0x20;
            puVar20 = (undefined1 *)(ulonglong)uVar19;
            puVar13 = (undefined1 *)(ulonglong)(iVar11 + 1U);
            uStack_24c = (ulonglong)uVar19 << 0x20;
            uVar6 = (ulonglong)local_260 >> 0x20;
            local_260 = (undefined *)CONCAT44((int)uVar6,iVar11 + 1U);
            if ((int)(((uint)local_b8 - 1) + ((int)((uint)local_b8 - 1) >> 0x1f & 0x1fU)) >> 5 <=
                iVar11) {
              uStack_24c = CONCAT44(uVar19,(uint)local_b8);
              goto LAB_141b5817d;
            }
            uVar10 = ((uint *)((ulonglong)puVar21 | local_c0))[(longlong)iVar11 + 1];
          }
          uVar10 = -uVar10 & uVar10;
          iVar11 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          local_260 = (undefined *)CONCAT44(uVar10,SUB84(local_260,0));
          if (uVar10 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          uVar19 = (uVar19 - iVar11) + 0x1f;
          if ((int)(uint)local_b8 < (int)uVar19) {
            uVar19 = (uint)local_b8;
          }
          uStack_24c._4_4_ = (undefined4)((ulonglong)uStack_24c >> 0x20);
          uStack_24c = CONCAT44(uStack_24c._4_4_,uVar19);
        }
LAB_141b5817d:
        local_250 = 0xffffffff;
        local_210 = &local_e0;
        puStack_140 = local_260;
        uStack_130 = 0xffffffff;
        iStack_12c = (int)uStack_24c;
        uStack_128 = uStack_24c._4_4_;
        uStack_124 = uStack_244;
        local_200._8_4_ = 0xffffffff;
        local_200._0_8_ = puStack_258;
        local_200._12_4_ = (int)uStack_24c;
        uStack_208 = local_260;
        auVar4._4_8_ = local_260;
        auVar4._0_4_ = (int)uStack_24c;
        auVar22._0_8_ = auVar4._0_8_ << 0x20;
        auVar22._8_4_ = uStack_24c._4_4_;
        auVar22._12_4_ = uStack_244;
        local_1f0 = auVar22._8_8_;
        iVar11 = (int)uStack_24c;
        local_148 = local_210;
        puStack_138 = puStack_258;
        if ((int)uStack_24c < (int)(uint)local_b8) {
          do {
            plVar15 = local_210;
            lVar18 = (longlong)iVar11;
            lVar16 = *local_210 + lVar18 * 0x28;
            if (0 < *(int *)(*local_210 + 0x18 + lVar18 * 0x28)) {
              FUN_141b79ab0(lVar16 + 0x10,0x3f8000003f800000,1.0 / (float)(int)local_f8);
              local_260 = &DAT_146a1c960;
              puStack_258 = (undefined1 *)((ulonglong)puStack_258 & 0xffffffff00000000);
              uVar1 = *(undefined8 *)(*plVar15 + lVar18 * 0x28);
              lVar18 = *(longlong *)(local_220 + 0x3090);
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(lVar18 + 0x38,local_268,&local_260);
              plVar15 = (longlong *)0x0;
              if (local_268[0] != -1) {
                plVar15 = (longlong *)((longlong)local_268[0] * 0x20 + *(longlong *)(lVar18 + 0x38))
                ;
              }
              plVar17 = plVar15 + 2;
              if (plVar15 == (longlong *)0x0) {
                plVar17 = (longlong *)0x0;
              }
              lVar18 = *plVar17;
              lVar2 = *(longlong *)(lVar18 + 0x48);
              if (*(char *)(lVar2 + 0x28) == '\0') {
                FUN_1419f3850(lVar2);
              }
              uVar3 = *(undefined8 *)(lVar2 + 0x60);
              FRHIComputeShader::UpdateStats(uVar3);
              puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar12 = puVar14 + 3;
              if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
                puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar12 = puVar14 + 3;
              }
              lVar2 = local_1e8;
              *(undefined8 **)(param_2 + 0x30) = puVar12;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar14;
              *(undefined8 **)(param_2 + 8) = puVar14 + 1;
              puVar14[2] = uVar3;
              puVar14[1] = 0;
              *puVar14 = &PTR_LAB_144d91e50;
              local_270 = *(undefined4 *)(lVar16 + 0x18);
              local_280 = param_8;
              local_288 = param_7;
              local_290 = local_1e8;
              local_298 = param_5;
              local_278 = uVar1;
              FUN_141b70730(lVar18,param_2,local_218,local_220);
              local_298 = 1;
              DispatchComputeShader
                        (param_2,lVar18,
                         (int)(((int)param_8[7] + 7 >> 0x1f & 7U) + (int)param_8[7] + 7) >> 3,
                         (int)(((int)param_8[8] + 7 >> 0x1f & 7U) + (int)param_8[8] + 7) >> 3);
              lVar16 = *(longlong *)(lVar18 + 0x48);
              if (*(char *)(lVar16 + 0x28) == '\0') {
                FUN_1419f3850(lVar16);
              }
              FRWShaderParameter::UnsetUAV<FRHICommandList>
                        (lVar18 + 0xfe,param_2,*(undefined8 *)(lVar16 + 0x60));
              plVar17 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_230 = *(undefined8 **)
                           (*(longlong *)
                             ((longlong)param_7 * 200 + 0xc0 + *(longlong *)(lVar2 + 0x18)) + 0x18);
              plVar15 = plVar17 + 1;
              if (*(longlong **)(param_2 + 0x38) < plVar15) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
                plVar17 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                plVar15 = plVar17 + 1;
              }
              *(longlong **)(param_2 + 0x30) = plVar15;
              *plVar17 = (longlong)local_230;
              puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar12 = puVar14 + 6;
              if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
                puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar12 = puVar14 + 6;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar12;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar14;
              *(undefined8 **)(param_2 + 8) = puVar14 + 1;
              puVar14[1] = 0;
              *puVar14 = &PTR_LAB_144d91e60;
              *(undefined4 *)(puVar14 + 2) = 1;
              puVar14[3] = plVar17;
              *(undefined4 *)(puVar14 + 4) = 0;
              *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
              puVar14[5] = 0;
            }
            local_200._8_4_ = local_200._8_4_ & ~uStack_208._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_208);
            iVar11 = local_200._12_4_;
          } while ((int)local_200._12_4_ < *(int *)(local_200._0_8_ + 0x18));
        }
      }
      local_98 = 0;
      if (local_a0 != 0) {
        FMemory::Free(local_a0);
      }
      TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_e0);
    }
  }
  return;
}



// FUNCTION 141b58510 FUN_141b58510 body=1271 status=ok
// SIG undefined FUN_141b58510(void)

void FUN_141b58510(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint *puVar18;
  undefined1 auVar19 [16];
  longlong local_res8;
  longlong local_res10;
  undefined *local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  longlong local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  
  if ((((0 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c)) && (DAT_1464c1c74 != 0)) &&
      (*(longlong *)(param_2 + 0x18) != 0)) &&
     (((DAT_146a153b0 != 0 &&
       (iVar1 = *(int *)(param_2 + 0x1a38), local_res8 = param_1, local_res10 = param_2,
       iVar8 = FUN_14274f980(param_2), 2 < iVar1)) && (iVar8 == 0)))) {
    puVar16 = (undefined *)0x0;
    local_70 = (longlong *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x50);
    puStack_60 = (uint *)(param_1 + 0x38);
    local_78 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1170);
    local_b8 = (undefined *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    local_a8 = (longlong *)0x100000000;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    local_80 = 1.0 / (float)(int)*(undefined8 *)(local_78 + 0x58);
    fStack_7c = 1.0 / (float)(int)((ulonglong)*(undefined8 *)(local_78 + 0x58) >> 0x20);
    if (iVar1 != 0) {
      puVar18 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar18 = puStack_60;
      }
      uVar9 = *puVar18;
      puVar12 = puVar16;
      puVar17 = puVar16;
      while (uVar9 == 0) {
        iVar8 = (int)puVar12;
        uStack_90 = (int)puVar17 + 0x20;
        puVar17 = (undefined *)(ulonglong)uStack_90;
        puVar12 = (undefined *)(ulonglong)(iVar8 + 1U);
        uVar7 = (ulonglong)local_a8 >> 0x20;
        local_a8 = (longlong *)CONCAT44((int)uVar7,iVar8 + 1U);
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141b586af;
        uVar9 = puVar18[(longlong)iVar8 + 1];
      }
      uVar9 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      local_a8 = (longlong *)CONCAT44(uVar9,SUB84(local_a8,0));
      if (uVar9 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      local_98._4_4_ = (uStack_90 - iVar8) + 0x1f;
      if (iVar1 < local_98._4_4_) {
LAB_141b586af:
        local_98._4_4_ = iVar1;
      }
    }
    uStack_58 = 0xffffffff;
    iStack_54 = local_98._4_4_;
    uStack_50 = uStack_90;
    uStack_4c = iStack_8c;
    uStack_68 = local_a8;
    uStack_a0 = local_a8;
    auVar6._4_8_ = local_a8;
    auVar6._0_4_ = local_98._4_4_;
    auVar19._0_8_ = auVar6._0_8_ << 0x20;
    auVar19._8_4_ = uStack_90;
    auVar19._12_4_ = iStack_8c;
    local_88 = auVar19._8_8_;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    bVar5 = local_98._4_4_ < iVar1;
    puVar12 = puVar16;
    puVar17 = puVar16;
    local_a8 = local_70;
    local_98 = puStack_60;
    if (bVar5) {
      do {
        lVar10 = (longlong)iStack_8c;
        lVar2 = *local_a8;
        iVar1 = *(int *)(lVar2 + 0x18 + lVar10 * 0x28);
        if (iVar1 != 0) {
          uVar9 = (uint)puVar16;
          if ((int)puVar12 < (int)((uint)puVar16 + iVar1)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
            ResizeTo(&local_b8);
            puVar12 = (undefined *)(ulonglong)uStack_ac;
            puVar17 = local_b8;
            uVar9 = local_b0;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar17 + (longlong)(int)uVar9 * 0x90,*(void **)(lVar2 + 0x10 + lVar10 * 0x28),
                     (longlong)iVar1 * 0x90);
          local_b0 = uVar9 + iVar1;
          puVar16 = (undefined *)(ulonglong)local_b0;
        }
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
      if (0 < (int)puVar16) {
        FUN_141b79ab0(&local_b8,CONCAT44(fStack_7c,local_80),
                      1.0 / (float)*(int *)(local_res8 + 0x10));
        lVar10 = local_res10;
        local_b8 = &DAT_146a1e540;
        local_b0 = 0;
        lVar2 = *(longlong *)(local_res10 + 0x3090);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar2 + 0x38,&local_res8,&local_b8);
        plVar14 = (longlong *)0x0;
        if ((int)local_res8 != -1) {
          plVar14 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar2 + 0x38));
        }
        plVar15 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
        }
        lVar2 = *plVar15;
        lVar3 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1419f3850(lVar3);
        }
        uVar4 = *(undefined8 *)(lVar3 + 0x60);
        FRHIComputeShader::UpdateStats(uVar4);
        puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 3;
        if (*(undefined8 **)(param_3 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x20);
          puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar13 + 3;
        }
        *(undefined8 **)(param_3 + 0x30) = puVar11;
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
        **(undefined8 **)(param_3 + 8) = puVar13;
        *(undefined8 **)(param_3 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144d91e50;
        puVar13[2] = uVar4;
        FUN_141b6fad0(lVar2,param_3,lVar10,puVar16,param_4,param_5,param_6,local_78);
        DispatchComputeShader
                  (param_3,lVar2,(*(int *)(lVar10 + 0x1aa8) - *(int *)(lVar10 + 0x1aa0)) / 2,
                   (*(int *)(lVar10 + 0x1aac) - *(int *)(lVar10 + 0x1aa4)) / 2,1);
        lVar10 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar10 + 0x28) == '\0') {
          FUN_1419f3850(lVar10);
        }
        FRWShaderParameter::UnsetUAV<FRHICommandList>
                  (lVar2 + 0x102,param_3,*(undefined8 *)(lVar10 + 0x60));
        local_res8 = *(longlong *)(param_5 + 0xe8);
        plVar15 = (longlong *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        plVar14 = plVar15 + 1;
        if (*(longlong **)(param_3 + 0x38) < plVar14) {
          FMemStackBase::AllocateNewChunk(param_3 + 0x30);
          plVar15 = (longlong *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar14 = plVar15 + 1;
        }
        *(longlong **)(param_3 + 0x30) = plVar14;
        *plVar15 = local_res8;
        puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 6;
        if (*(undefined8 **)(param_3 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(param_3 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar13 + 6;
        }
        *(undefined8 **)(param_3 + 0x30) = puVar11;
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
        **(undefined8 **)(param_3 + 8) = puVar13;
        *(undefined8 **)(param_3 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar13 + 2) = 1;
        puVar13[3] = plVar15;
        *(undefined4 *)(puVar13 + 4) = 0;
        *(undefined4 *)((longlong)puVar13 + 0x24) = 3;
        puVar13[5] = 0;
      }
      if (puVar17 != (undefined *)0x0) {
        FMemory::Free(puVar17);
      }
    }
  }
  return;
}



// FUNCTION 141b58a10 FUN_141b58a10 body=11492 status=ok
// SIG undefined FUN_141b58a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b58a10(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  double dVar7;
  int iVar8;
  ushort uVar9;
  byte bVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  float *pfVar22;
  undefined8 uVar23;
  uint uVar24;
  uint *puVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  undefined4 uVar33;
  uint *puVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  longlong lVar38;
  undefined4 *puVar39;
  undefined4 uVar40;
  ulonglong uVar41;
  longlong lVar42;
  ulonglong uVar43;
  void *pvVar44;
  int iVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_998 [32];
  undefined8 local_978;
  undefined8 *local_970;
  char local_968;
  char local_967;
  ushort local_964;
  ushort local_960;
  ushort local_95c;
  ulonglong local_958;
  float local_950;
  undefined8 local_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  void *local_938;
  uint local_930;
  int local_92c;
  ulonglong local_928;
  longlong local_920;
  uint local_918;
  longlong local_910;
  ulonglong *local_908;
  undefined8 local_8f8;
  float fStack_8f0;
  float fStack_8ec;
  int local_8e8;
  int local_8e4;
  int local_8e0 [2];
  uint local_8d8;
  uint uStack_8d4;
  uint *puStack_8d0;
  undefined4 local_8c8;
  undefined8 uStack_8c4;
  undefined4 uStack_8bc;
  longlong local_8b8;
  undefined8 local_8b0;
  longlong local_8a8;
  undefined8 local_8a0;
  longlong local_898;
  undefined8 local_890;
  undefined1 local_888 [8];
  undefined1 local_880 [8];
  undefined1 local_878 [8];
  undefined1 local_870 [8];
  undefined1 local_868 [8];
  undefined1 local_860 [8];
  undefined1 local_858 [8];
  undefined1 local_850 [8];
  undefined1 local_848 [8];
  undefined1 local_840 [8];
  undefined1 local_838 [8];
  undefined1 local_830 [8];
  undefined1 local_828 [8];
  undefined1 local_820 [8];
  undefined1 local_818 [8];
  undefined1 local_810 [8];
  longlong local_808;
  longlong local_800;
  undefined1 local_7f8 [8];
  float local_7f0;
  float local_7ec;
  undefined1 local_7e8 [16];
  undefined8 local_7d8;
  ulonglong uStack_7d0;
  undefined8 local_7c8;
  ulonglong uStack_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  uint local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_794;
  undefined4 local_790;
  uint local_78c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  undefined4 uStack_74c;
  float local_748;
  float local_744;
  float local_740;
  float local_73c;
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  undefined8 local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  int iStack_70c;
  longlong *local_708;
  undefined8 local_700;
  uint *puStack_6f8;
  uint local_6f0;
  uint uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined8 local_6e0 [2];
  float local_6d0;
  float local_6c0;
  undefined4 local_6b0;
  uint *local_6a8;
  uint local_6a0;
  longlong local_698 [2];
  undefined8 local_688;
  undefined8 local_680;
  longlong local_678 [3];
  undefined4 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined4 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined4 local_5e8;
  undefined8 local_5e0;
  undefined *local_5d8;
  undefined4 local_5d0;
  undefined *local_5c8;
  undefined4 local_5c0;
  undefined *local_5b8;
  undefined4 local_5b0;
  float local_5a0;
  undefined4 local_590;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578 [4];
  undefined1 local_568 [64];
  undefined8 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined8 uStack_50c;
  undefined1 local_504;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d4;
  undefined8 uStack_4cc;
  undefined1 local_4c4;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_494;
  undefined8 uStack_48c;
  undefined1 local_484;
  wchar_t *local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_454;
  undefined8 uStack_44c;
  undefined1 local_444;
  wchar_t *local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_414;
  undefined8 uStack_40c;
  undefined1 local_404;
  wchar_t *local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined1 local_3c4;
  wchar_t *local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8 [6];
  undefined8 *local_378;
  int local_370;
  int iStack_36c;
  undefined1 local_368 [640];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_998;
  local_920 = param_2;
  local_910 = param_1;
  if ((param_3 == '\0') || (*(int *)(param_1 + 0x2a0) < 3)) {
    lVar38 = *(longlong *)(param_1 + 0xc0);
    lVar42 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar38;
    plVar26 = DAT_146a25128;
    for (; lVar38 != lVar42; lVar38 = lVar38 + 0x30d0) {
      if (plVar26 == (longlong *)0x0) {
        plVar26 = (longlong *)operator_new(0x330);
        if (plVar26 == (longlong *)0x0) {
          plVar26 = (longlong *)0x0;
          DAT_146a25128 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar26 + 1) = 4;
          plVar26[2] = 0;
          plVar26[3] = 0;
          *(undefined1 *)(plVar26 + 5) = 0;
          *plVar26 = (longlong)&PTR_FUN_144deb7c0;
          FForwardLightData::FForwardLightData(plVar26 + 6);
          plVar26[0x56] = 0;
          plVar26[0x58] = 0;
          plVar26[0x59] = 0;
          *(undefined4 *)(plVar26 + 0x5a) = 0;
          plVar26[0x57] = (longlong)&PTR__scalar_deleting_destructor__144deb628;
          plVar26[0x5b] = 0;
          plVar26[0x5c] = 0;
          plVar26[0x5d] = 0;
          plVar26[0x5e] = 0;
          *(undefined4 *)(plVar26 + 0x5f) = 0;
          plVar26[0x60] = 0;
          plVar26[0x61] = 0;
          plVar26[0x62] = 0;
          plVar26[99] = 0;
          *(undefined4 *)(plVar26 + 100) = 0;
          plVar26[0x65] = 0;
          *plVar26 = (longlong)&PTR_FUN_144deb800;
          cVar11 = IsInRenderingThread();
          if (cVar11 == '\0') {
            FUN_141edf270(plVar26);
            DAT_146a25128 = plVar26;
          }
          else {
            (**(code **)(*plVar26 + 0x28))();
            DAT_146a25128 = plVar26;
          }
        }
      }
      *(longlong **)(lVar38 + 0x1a30) = plVar26 + 6;
    }
  }
  else {
    uVar41 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a253d8) &&
       (_Init_thread_header(&DAT_146a253d8), DAT_146a253d8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar26 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
      uVar43 = uVar41;
      if (plVar26 != (longlong *)0x0) {
        uVar43 = (**(code **)(*plVar26 + 0x38))(plVar26);
      }
      DAT_146a253d0 = uVar43;
      _Init_thread_footer(&DAT_146a253d8);
    }
    if ((DAT_146a253d0 == 0) || (local_968 = '\0', *(int *)(DAT_146a253d0 + 4) != 0)) {
      local_968 = '\x01';
    }
    iVar45 = *(int *)(param_1 + 200);
    bVar6 = false;
    uVar43 = uVar41;
    uVar36 = uVar41;
    if (0 < iVar45) {
      do {
        if ((*(uint *)(uVar43 + 0x28cc + *(longlong *)(param_1 + 0xc0)) & 0x800) == 0) {
          cVar11 = FDeferredShadingSceneRenderer::ShouldRenderVolumetricFog(param_1);
          bVar10 = 0;
          if (cVar11 != '\0') goto LAB_141b58ae0;
        }
        else {
LAB_141b58ae0:
          bVar10 = 1;
        }
        bVar6 = (bool)(bVar6 | bVar10);
        uVar35 = (int)uVar36 + 1;
        iVar45 = *(int *)(param_1 + 200);
        param_2 = local_920;
        uVar43 = uVar43 + 0x30d0;
        uVar36 = (ulonglong)uVar35;
      } while ((int)uVar35 < iVar45);
    }
    if ((DAT_1464c1c9c == 0) ||
       (((DAT_146ac3ac0 == 0 || (*(int *)(param_1 + 0x2a0) < 3)) && (!bVar6)))) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x01';
    }
    local_8b8 = 0;
    local_8b0 = 0;
    local_8a8 = 0;
    local_8a0 = 0;
    local_898 = 0;
    local_890 = 0;
    local_967 = cVar11;
    if (cVar11 != '\0') {
      FUN_141b9c040(param_1 + 0x10,param_1 + 0xc0,&local_8b8);
      iVar45 = *(int *)(param_1 + 200);
    }
    local_918 = 0;
    if (0 < iVar45) {
      local_908 = (ulonglong *)(param_2 + 0x30);
      local_800 = 0;
      do {
        uVar43 = local_800 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        local_928 = uVar43;
        FString::PrintfImpl(local_698,L"ComputeLightGrid_View%d",uVar41);
        AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
        if (local_698[0] != 0) {
          FMemory::Free();
        }
        puVar34 = *(uint **)(uVar43 + 0x1a30);
        local_6a8 = puVar34;
        puVar20 = (uint *)FForwardLightData::FForwardLightData(local_368);
        lVar38 = 2;
        *puVar34 = *puVar20;
        puVar34[1] = puVar20[1];
        puVar34[2] = puVar20[2];
        puVar34[3] = puVar20[3];
        puVar25 = puVar20 + 0x24;
        puVar34[4] = puVar20[4];
        puVar34[5] = puVar20[5];
        puVar34[6] = puVar20[6];
        puVar34[7] = puVar20[7];
        puVar34[8] = puVar20[8];
        *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puVar20 + 0xc);
        puVar34[0xe] = puVar20[0xe];
        *(undefined8 *)(puVar34 + 0x10) = *(undefined8 *)(puVar20 + 0x10);
        puVar34[0x12] = puVar20[0x12];
        *(undefined8 *)(puVar34 + 0x14) = *(undefined8 *)(puVar20 + 0x14);
        puVar34[0x16] = puVar20[0x16];
        puVar34[0x17] = puVar20[0x17];
        puVar34[0x18] = puVar20[0x18];
        *(undefined8 *)(puVar34 + 0x1a) = *(undefined8 *)(puVar20 + 0x1a);
        puVar34[0x1c] = puVar20[0x1c];
        uVar23 = *(undefined8 *)(puVar20 + 0x22);
        *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(puVar20 + 0x20);
        *(undefined8 *)(puVar34 + 0x22) = uVar23;
        puVar21 = puVar34 + 0x24;
        do {
          uVar23 = *(undefined8 *)(puVar25 + 2);
          *(undefined8 *)puVar21 = *(undefined8 *)puVar25;
          *(undefined8 *)(puVar21 + 2) = uVar23;
          uVar23 = *(undefined8 *)(puVar25 + 6);
          *(undefined8 *)(puVar21 + 4) = *(undefined8 *)(puVar25 + 4);
          *(undefined8 *)(puVar21 + 6) = uVar23;
          uVar23 = *(undefined8 *)(puVar25 + 10);
          *(undefined8 *)(puVar21 + 8) = *(undefined8 *)(puVar25 + 8);
          *(undefined8 *)(puVar21 + 10) = uVar23;
          uVar23 = *(undefined8 *)(puVar25 + 0xe);
          *(undefined8 *)(puVar21 + 0xc) = *(undefined8 *)(puVar25 + 0xc);
          *(undefined8 *)(puVar21 + 0xe) = uVar23;
          uVar23 = *(undefined8 *)(puVar25 + 0x12);
          *(undefined8 *)(puVar21 + 0x10) = *(undefined8 *)(puVar25 + 0x10);
          *(undefined8 *)(puVar21 + 0x12) = uVar23;
          uVar23 = *(undefined8 *)(puVar25 + 0x16);
          *(undefined8 *)(puVar21 + 0x14) = *(undefined8 *)(puVar25 + 0x14);
          *(undefined8 *)(puVar21 + 0x16) = uVar23;
          uVar23 = *(undefined8 *)(puVar25 + 0x1a);
          *(undefined8 *)(puVar21 + 0x18) = *(undefined8 *)(puVar25 + 0x18);
          *(undefined8 *)(puVar21 + 0x1a) = uVar23;
          puVar1 = puVar25 + 0x1c;
          uVar23 = *(undefined8 *)(puVar25 + 0x1e);
          puVar25 = puVar25 + 0x20;
          *(undefined8 *)(puVar21 + 0x1c) = *(undefined8 *)puVar1;
          *(undefined8 *)(puVar21 + 0x1e) = uVar23;
          lVar38 = lVar38 + -1;
          puVar21 = puVar21 + 0x20;
        } while (lVar38 != 0);
        local_950 = 1000.0;
        local_938 = (void *)0x0;
        fVar55 = 1000.0;
        local_930 = 0;
        uVar23 = *(undefined8 *)(puVar20 + 0x66);
        *(undefined8 *)(puVar34 + 100) = *(undefined8 *)(puVar20 + 100);
        *(undefined8 *)(puVar34 + 0x66) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x6a);
        *(undefined8 *)(puVar34 + 0x68) = *(undefined8 *)(puVar20 + 0x68);
        *(undefined8 *)(puVar34 + 0x6a) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x6e);
        *(undefined8 *)(puVar34 + 0x6c) = *(undefined8 *)(puVar20 + 0x6c);
        *(undefined8 *)(puVar34 + 0x6e) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x72);
        *(undefined8 *)(puVar34 + 0x70) = *(undefined8 *)(puVar20 + 0x70);
        *(undefined8 *)(puVar34 + 0x72) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x76);
        *(undefined8 *)(puVar34 + 0x74) = *(undefined8 *)(puVar20 + 0x74);
        *(undefined8 *)(puVar34 + 0x76) = uVar23;
        puVar34[0x78] = puVar20[0x78];
        puVar34[0x79] = puVar20[0x79];
        uVar23 = *(undefined8 *)(puVar20 + 0x7e);
        *(undefined8 *)(puVar34 + 0x7c) = *(undefined8 *)(puVar20 + 0x7c);
        *(undefined8 *)(puVar34 + 0x7e) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x82);
        *(undefined8 *)(puVar34 + 0x80) = *(undefined8 *)(puVar20 + 0x80);
        *(undefined8 *)(puVar34 + 0x82) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x86);
        *(undefined8 *)(puVar34 + 0x84) = *(undefined8 *)(puVar20 + 0x84);
        *(undefined8 *)(puVar34 + 0x86) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x8a);
        *(undefined8 *)(puVar34 + 0x88) = *(undefined8 *)(puVar20 + 0x88);
        *(undefined8 *)(puVar34 + 0x8a) = uVar23;
        uVar23 = *(undefined8 *)(puVar20 + 0x8e);
        *(undefined8 *)(puVar34 + 0x8c) = *(undefined8 *)(puVar20 + 0x8c);
        *(undefined8 *)(puVar34 + 0x8e) = uVar23;
        *(undefined8 *)(puVar34 + 0x90) = *(undefined8 *)(puVar20 + 0x90);
        *(undefined8 *)(puVar34 + 0x92) = *(undefined8 *)(puVar20 + 0x92);
        *(undefined8 *)(puVar34 + 0x94) = *(undefined8 *)(puVar20 + 0x94);
        *(undefined8 *)(puVar34 + 0x96) = *(undefined8 *)(puVar20 + 0x96);
        *(undefined8 *)(puVar34 + 0x98) = *(undefined8 *)(puVar20 + 0x98);
        *(undefined8 *)(puVar34 + 0x9a) = *(undefined8 *)(puVar20 + 0x9a);
        *(undefined8 *)(puVar34 + 0x9c) = *(undefined8 *)(puVar20 + 0x9c);
        local_92c = 0;
        uVar35 = 0;
        if (cVar11 != '\0') {
          if ((*(int *)(*(longlong *)(param_1 + 8) + 0x1078) -
              *(int *)(*(longlong *)(param_1 + 8) + 0x10a4)) + (int)local_8b0 != 0) {
            FUN_141b6cd90(&local_938);
          }
          uVar35 = local_930;
          AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
          local_708 = (longlong *)(uVar43 + 0x1df8);
          uStack_8d4 = 1;
          iVar45 = *(int *)(uVar43 + 0x1e20);
          puStack_8d0 = (uint *)(uVar43 + 0x1e08);
          uVar37 = 0;
          local_8d8 = 0;
          uStack_8c4 = 0;
          uVar24 = 0;
          if (iVar45 != 0) {
            puVar25 = *(uint **)(uVar43 + 0x1e18);
            if (*(uint **)(uVar43 + 0x1e18) == (uint *)0x0) {
              puVar25 = puStack_8d0;
            }
            uVar24 = *puVar25;
            while (uVar24 == 0) {
              lVar38 = (longlong)(int)local_8d8;
              uVar37 = uVar37 + 0x20;
              uVar24 = local_8d8 + 1;
              uStack_8c4 = (ulonglong)uVar37 << 0x20;
              bVar6 = (int)(iVar45 + -1 + (iVar45 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_8d8;
              local_8d8 = uVar24;
              if (bVar6) goto LAB_141b58fa5;
              uVar24 = puVar25[lVar38 + 1];
            }
            uStack_8d4 = -uVar24 & uVar24;
            local_6a0 = 0x1f;
            if (uStack_8d4 != 0) {
              for (; uStack_8d4 >> local_6a0 == 0; local_6a0 = local_6a0 - 1) {
              }
            }
            if (uStack_8d4 == 0) {
              iVar13 = 0x20;
            }
            else {
              iVar13 = 0x1f - local_6a0;
            }
            iVar13 = (uVar37 - iVar13) + 0x1f;
            uStack_8c4._4_4_ = (undefined4)((ulonglong)uStack_8c4 >> 0x20);
            uStack_8c4 = CONCAT44(uStack_8c4._4_4_,iVar13);
            uVar24 = local_6a0;
            if (iVar45 < iVar13) {
LAB_141b58fa5:
              uStack_8c4 = CONCAT44(uStack_8c4._4_4_,iVar45);
            }
          }
          local_8c8 = 0xffffffff;
          local_700 = CONCAT44(uStack_8d4,local_8d8);
          local_6f0 = 0xffffffff;
          uStack_6ec = (uint)uStack_8c4;
          uStack_6e8 = uStack_8c4._4_4_;
          uStack_6e4 = uStack_8bc;
          fVar46 = fVar55;
          puStack_6f8 = puStack_8d0;
          if ((int)(uint)uStack_8c4 < iVar45) {
            do {
              uVar41 = 0;
              lVar38 = *(longlong *)((longlong)(int)uStack_6ec * 0x78 + 0x70 + *local_708);
              lVar42 = *(longlong *)(lVar38 + 0x20);
              plVar26 = *(longlong **)(lVar42 + 0x30);
              fVar55 = fVar46;
              local_948 = lVar42;
              if (((((1e-05 <= *(float *)(plVar26 + 0x20) * *(float *)(plVar26 + 0x20)) ||
                    (1e-05 <= *(float *)((longlong)plVar26 + 0x104) *
                              *(float *)((longlong)plVar26 + 0x104))) ||
                   (1e-05 <= *(float *)(plVar26 + 0x21) * *(float *)(plVar26 + 0x21))) &&
                  (((*(uint *)(plVar26 + 0x30) >> 2 & 1) == 0 ||
                   (cVar11 = FUN_141ba17a0(lVar42), cVar11 == '\0')))) &&
                 (cVar11 = FUN_141be7b80(lVar42), cVar11 != '\0')) {
                local_7d8 = 0;
                uStack_7d0 = 0x3f80000000000000;
                local_7c8 = 0;
                uStack_7c0 = 0x3f80000000000000;
                (**(code **)(*plVar26 + 0x68))(plVar26,&local_7d8);
                cVar11 = (**(code **)(*plVar26 + 0x30))(plVar26);
                if (cVar11 != '\0') {
                  uStack_7c0 = uStack_7c0 & 0xffffffff;
                }
                fVar48 = (float)uStack_7c0;
                fVar49 = (float)local_7c8;
                fVar50 = local_7c8._4_4_;
                if (*(char *)(uVar43 + 0x1203) != '\0') {
                  fVar48 = *(float *)(plVar26 + 0x22);
                  fVar49 = (float)local_7c8 * fVar48;
                  fVar50 = local_7c8._4_4_ * fVar48;
                  fVar48 = (float)uStack_7c0 * fVar48;
                  local_7c8 = CONCAT44(fVar50,fVar49);
                  uStack_7c0 = CONCAT44(uStack_7c0._4_4_,fVar48);
                }
                if ((*(uint *)(*(longlong *)(lVar42 + 0x30) + 0x180) >> 3 & 1) == 0) {
                  iVar45 = *(int *)(lVar42 + 0x88);
                }
                else {
                  iVar45 = *(int *)(*(longlong *)(lVar42 + 0x30) + 0x14c);
                }
                iVar13 = (int)plVar26[0x29];
                if (local_968 == '\0') {
                  iVar13 = -1;
                }
                uVar37 = 0;
                if (iVar45 == 3) {
                  uVar37 = 0x80;
                }
                uVar18 = 0;
                uVar24 = uVar18;
                if (iVar45 == 2) {
                  uVar24 = 0x40;
                }
                uVar19 = uVar18;
                if (iVar45 == 1) {
                  uVar19 = 0x20;
                }
                uVar14 = uVar18;
                if (iVar45 == 0) {
                  uVar14 = 0x10;
                }
                if (iVar13 == 3) {
                  uVar18 = 8;
                }
                uVar15 = 0;
                uVar16 = uVar15;
                if (iVar13 == 2) {
                  uVar16 = 4;
                }
                if (iVar13 == 1) {
                  uVar15 = 2;
                }
                uVar24 = (uint)*(byte *)((longlong)plVar26 + 0x189) << 8 | uVar37 | uVar24 | uVar19
                         | uVar14 | uVar18 | uVar16 | uVar15 | (uint)(iVar13 == 0);
                uVar37 = *(uint *)(lVar38 + 0x28) & 3;
                local_958 = CONCAT44(local_958._4_4_,uVar24);
                if (uVar37 == 1) {
                  uVar37 = *(uint *)(local_910 + 0x38) & 0x8000;
                }
                else if (uVar37 == 2) {
                  uVar37 = *(uint *)(local_910 + 0x38) & 0x10000;
                }
                else {
                  if (uVar37 != 3) {
                    if (uVar37 == 0) {
                      puVar34[2] = 1;
                      *(ulonglong *)(puVar34 + 0x14) = CONCAT44(fVar50,fVar49);
                      puVar34[0x16] = (uint)fVar48;
                      puVar34[0x17] = *(uint *)((longlong)plVar26 + 0x114);
                      *(ulonglong *)(puVar34 + 0x10) = CONCAT44(uStack_7b4,local_7b8);
                      puVar34[0x18] = uVar24;
                      puVar34[0x12] = local_7b0;
                      uVar33 = *(undefined4 *)(uVar43 + 0x1a38);
                      lVar38 = *plVar26;
                      local_5a0 = fVar48;
                      uVar12 = FUN_141ba17a0(lVar42);
                      local_970 = (undefined8 *)
                                  CONCAT44(local_970._4_4_,*(undefined4 *)(uVar43 + 0x388));
                      local_978 = CONCAT71(local_978._1_7_,uVar12);
                      (**(code **)(lVar38 + 0x70))(plVar26,&local_7f0,uVar43,uVar33);
                      puVar34[0x1a] = (uint)local_7ec;
                      puVar34[0x1b] = (uint)-(local_7ec * local_7f0);
                      if ((*(byte *)(local_910 + 0x3c) & 0x40) != 0) {
                        iVar45 = *(int *)(lVar42 + 0x58);
                        puVar2 = (ulonglong *)(local_910 + 0x1c8);
                        cVar11 = FScriptMap::IsValidIndex(puVar2);
                        if (cVar11 != '\0') {
                          local_958 = *puVar2;
                          lVar38 = (longlong)iVar45 * 0x70;
                          if ((0 < *(int *)(lVar38 + 0x18 + local_958)) &&
                             (puVar34[0x1c] = 0, uVar36 = uVar41, uVar43 = local_928,
                             0 < *(int *)(lVar38 + 0x18 + local_958))) {
                            do {
                              lVar42 = *(longlong *)
                                        (uVar41 + *(longlong *)(lVar38 + 0x10 + local_958));
                              uVar35 = *(uint *)(lVar42 + 0x560);
                              uVar37 = *(uint *)(lVar42 + 0x524);
                              if (((uVar35 & 0x40) != 0) &&
                                 ((((-1 < (int)uVar37 && ((uVar35 & 0x10) != 0)) &&
                                   ((uVar35 & 1) != 0)) && ((int)uVar37 < 4)))) {
                                puVar34[0x1c] = puVar34[0x1c] + 1;
                                uVar43 = (ulonglong)uVar37;
                                puVar29 = (undefined8 *)
                                          FProjectedShadowInfo::GetWorldToShadowMatrix
                                                    (lVar42,local_568,puVar34 + (uVar43 + 0x19) * 4,
                                                     0);
                                uVar23 = puVar29[1];
                                *(undefined8 *)(puVar34 + uVar43 * 0x10 + 0x24) = *puVar29;
                                *(undefined8 *)(puVar34 + uVar43 * 0x10 + 0x24 + 2) = uVar23;
                                uVar23 = puVar29[3];
                                *(undefined8 *)(puVar34 + uVar43 * 0x10 + 0x28) = puVar29[2];
                                *(undefined8 *)(puVar34 + uVar43 * 0x10 + 0x28 + 2) = uVar23;
                                uVar23 = puVar29[5];
                                *(undefined8 *)(puVar34 + uVar43 * 0x10 + 0x2c) = puVar29[4];
                                *(undefined8 *)(puVar34 + uVar43 * 0x10 + 0x2c + 2) = uVar23;
                                *(undefined1 (*) [16])(puVar34 + uVar43 * 0x10 + 0x30) =
                                     *(undefined1 (*) [16])(puVar29 + 6);
                                puVar34[(longlong)(int)uVar37 + 0x20] = *(uint *)(lVar42 + 0x3c4);
                                if (uVar37 == 0) {
                                  *(undefined8 *)(puVar34 + 0x90) =
                                       *(undefined8 *)(*(longlong *)(lVar42 + 0x28) + 0x10);
                                  puVar34[0x78] = *(uint *)(lVar42 + 0x6b8);
                                  lVar42 = (**(code **)(**(longlong **)(lVar42 + 0x28) + 0x10))();
                                  fVar48 = (float)(int)*(undefined8 *)(lVar42 + 0x14);
                                  fStack_8f0 = 1.0 / fVar48;
                                  fVar46 = (float)(int)((ulonglong)*(undefined8 *)(lVar42 + 0x14) >>
                                                       0x20);
                                  fStack_8ec = 1.0 / fVar46;
                                  local_8f8 = CONCAT44(fVar46,fVar48);
                                  puVar34[0x74] = (uint)fVar48;
                                  puVar34[0x75] = (uint)fVar46;
                                  puVar34[0x76] = (uint)fStack_8f0;
                                  puVar34[0x77] = (uint)fStack_8ec;
                                }
                              }
                              uVar35 = (int)uVar36 + 1;
                              uVar41 = uVar41 + 8;
                              lVar42 = local_948;
                              uVar36 = (ulonglong)uVar35;
                              uVar43 = local_928;
                            } while ((int)uVar35 < *(int *)(lVar38 + 0x18 + local_958));
                          }
                        }
                      }
                      lVar38 = *(longlong *)(*(longlong *)(lVar42 + 0x30) + 0x150);
                      cVar11 = FUN_141ba17a0(lVar42);
                      if (((cVar11 == '\0') || (lVar38 == 0)) ||
                         ((*(longlong *)(lVar38 + 0x68) == 0 || (*(longlong *)(lVar38 + 0x30) == 0))
                         )) {
                        bVar6 = false;
                        puVar34[0x79] = 0;
                        local_578[0] = 0.0;
                        local_578[1] = 0.0;
                        local_578[2] = 0.0;
                        local_578[3] = 0.0;
                        pfVar22 = local_578;
                      }
                      else {
                        bVar6 = true;
                        puVar34[0x79] = 1;
                        pfVar22 = &local_738;
                        local_738 = (float)*(int *)(*(longlong *)(lVar38 + 0x68) + 0x40);
                        fStack_734 = (float)*(int *)(*(longlong *)(lVar38 + 0x68) + 0x44);
                        fStack_72c = 1.0 / fStack_734;
                        fStack_730 = 1.0 / local_738;
                      }
                      uVar23 = *(undefined8 *)(pfVar22 + 2);
                      *(undefined8 *)(puVar34 + 0x7c) = *(undefined8 *)pfVar22;
                      *(undefined8 *)(puVar34 + 0x7e) = uVar23;
                      if (bVar6) {
                        puVar29 = *(undefined8 **)(lVar38 + 0x68);
                      }
                      else {
                        puVar29 = (undefined8 *)&DAT_1464aa7d0;
                      }
                      uVar23 = puVar29[1];
                      *(undefined8 *)(puVar34 + 0x80) = *puVar29;
                      *(undefined8 *)(puVar34 + 0x82) = uVar23;
                      uVar23 = puVar29[3];
                      *(undefined8 *)(puVar34 + 0x84) = puVar29[2];
                      *(undefined8 *)(puVar34 + 0x86) = uVar23;
                      uVar23 = puVar29[5];
                      *(undefined8 *)(puVar34 + 0x88) = puVar29[4];
                      *(undefined8 *)(puVar34 + 0x8a) = uVar23;
                      uVar35 = *(uint *)((longlong)puVar29 + 0x34);
                      uVar37 = *(uint *)(puVar29 + 7);
                      uVar24 = *(uint *)((longlong)puVar29 + 0x3c);
                      puVar34[0x8c] = *(uint *)(puVar29 + 6);
                      puVar34[0x8d] = uVar35;
                      puVar34[0x8e] = uVar37;
                      puVar34[0x8f] = uVar24;
                      lVar42 = DAT_146ac3d68;
                      if (bVar6) {
                        lVar42 = lVar38;
                      }
                      *(undefined8 *)(puVar34 + 0x94) = *(undefined8 *)(lVar42 + 0x30);
                      uVar35 = local_930;
                    }
                    goto LAB_141b59cb9;
                  }
                  uVar37 = *(uint *)(local_910 + 0x38) & 0x20000;
                }
                if (uVar37 != 0) {
                  local_930 = uVar35 + 1;
                  if (local_92c < (int)local_930) {
                    TArray<FRayTracingGeometryInstance,TMemStackAllocator<0>_>::ResizeGrow
                              (&local_938,uVar35);
                  }
                  uVar35 = local_930;
                  puVar29 = (undefined8 *)
                            ((longlong)(int)(local_930 - 1) * 0x90 + (longlong)local_938);
                  fVar55 = (float)FUN_141b9c370(uVar43,plVar26);
                  local_7c8 = CONCAT44(local_7c8._4_4_ * fVar55,(float)local_7c8 * fVar55);
                  uStack_7c0 = CONCAT44(uStack_7c0._4_4_,(float)uStack_7c0 * fVar55);
                  if ((*(byte *)(plVar26 + 0x30) & 1) == 0) {
                    fVar48 = 0.0;
                    fVar55 = 0.0;
                    fVar49 = 0.0;
                    fVar50 = 0.0;
                    puVar29[10] = 0;
                    puVar29[0xb] = 0;
                    *(undefined4 *)(puVar29 + 0xc) = 0;
                    *(undefined4 *)((longlong)puVar29 + 100) = 0;
                    *(undefined4 *)(puVar29 + 0xd) = 0;
                    *(undefined4 *)((longlong)puVar29 + 0x6c) = 0;
                    puVar29[0xe] = 0;
                    puVar29[0xf] = 0;
                  }
                  else {
                    uVar23 = *(undefined8 *)((longlong)plVar26 + 0xcc);
                    uStack_770 = (undefined4)plVar26[0x19];
                    local_778 = (undefined4)plVar26[0x18];
                    uStack_774 = *(undefined4 *)((longlong)plVar26 + 0xc4);
                    fVar46 = *(float *)(plVar26 + 0x17);
                    fVar4 = *(float *)((longlong)plVar26 + 0xb4);
                    fVar5 = *(float *)(plVar26 + 0x16);
                    fVar48 = *(float *)((longlong)plVar26 + 0xbc);
                    uStack_7d0 = uStack_7d0 ^ 0x8000000000000000;
                    fVar54 = 1.0 / (float)((ulonglong)plVar26[0x1b] >> 0x20);
                    local_6c0 = *(float *)((longlong)plVar26 + 0xd4);
                    local_6d0 = *(float *)(plVar26 + 0x1c);
                    fVar49 = 1.0 / local_6d0;
                    fVar53 = 1.0 / (float)plVar26[0x1b];
                    fVar52 = -fVar4 + -fVar4;
                    fVar50 = -1.0 / (1.0 - fVar49 * local_6c0);
                    fVar51 = fVar46 + fVar46;
                    uStack_76c = 0;
                    *(undefined4 *)(puVar29 + 10) = local_778;
                    *(undefined4 *)((longlong)puVar29 + 0x54) = uStack_774;
                    *(undefined4 *)(puVar29 + 0xb) = uStack_770;
                    *(undefined4 *)((longlong)puVar29 + 0x5c) = 0;
                    fVar55 = fVar5 + fVar5;
                    *(float *)(puVar29 + 0xc) = ((fVar4 * fVar52 - fVar51 * fVar46) + 1.0) * fVar53;
                    *(float *)((longlong)puVar29 + 100) =
                         (fVar48 * fVar51 - fVar5 * fVar52) * fVar53;
                    *(float *)(puVar29 + 0xd) = (fVar5 * fVar51 + fVar48 * fVar52) * fVar53;
                    *(float *)((longlong)puVar29 + 0x6c) = -1.0 / (1.0 - fVar53 * (float)uVar23);
                    fVar52 = -fVar46 + -fVar46;
                    fVar51 = fVar4 + fVar4;
                    *(float *)(puVar29 + 0xe) = fVar54 * (fVar55 * fVar4 + fVar48 * fVar52);
                    *(float *)((longlong)puVar29 + 0x74) =
                         fVar54 * ((fVar52 * fVar46 - fVar55 * fVar5) + 1.0);
                    *(float *)(puVar29 + 0xf) = fVar54 * (fVar48 * fVar55 - fVar4 * fVar52);
                    *(float *)((longlong)puVar29 + 0x7c) =
                         -1.0 / (1.0 - fVar54 * (float)((ulonglong)uVar23 >> 0x20));
                    fVar52 = -fVar5 + -fVar5;
                    fVar55 = fVar49 * (fVar46 * fVar51 + fVar48 * fVar52);
                    fVar48 = fVar49 * (fVar48 * fVar51 - fVar46 * fVar52);
                    fVar49 = fVar49 * ((fVar5 * fVar52 - fVar4 * fVar51) + 1.0);
                    fVar46 = local_950;
                    local_6b0 = uStack_770;
                  }
                  *(float *)(puVar29 + 0x10) = fVar48;
                  *(float *)((longlong)puVar29 + 0x84) = fVar55;
                  *(float *)(puVar29 + 0x11) = fVar49;
                  *(float *)((longlong)puVar29 + 0x8c) = fVar50;
                  *puVar29 = local_7d8;
                  puVar29[1] = uStack_7d0;
                  puVar29[2] = local_7c8;
                  puVar29[3] = uStack_7c0;
                  *(undefined4 *)(puVar29 + 4) = local_7b8;
                  *(undefined4 *)((longlong)puVar29 + 0x24) = uStack_7b4;
                  *(uint *)(puVar29 + 5) = local_7b0;
                  *(int *)((longlong)puVar29 + 0x2c) = (int)local_958;
                  *(undefined4 *)(puVar29 + 6) = local_7a0;
                  *(undefined4 *)((longlong)puVar29 + 0x34) = local_79c;
                  *(undefined4 *)(puVar29 + 7) = local_794;
                  *(undefined4 *)((longlong)puVar29 + 0x3c) = 0;
                  local_768 = local_7a0;
                  uStack_764 = local_79c;
                  uStack_760 = local_794;
                  uStack_75c = 0;
                  *(undefined4 *)(puVar29 + 8) = local_7ac;
                  *(undefined4 *)((longlong)puVar29 + 0x44) = local_7a8;
                  *(undefined4 *)(puVar29 + 9) = local_7a4;
                  *(undefined4 *)((longlong)puVar29 + 0x4c) = local_790;
                  uVar24 = *(uint *)(lVar42 + 0x58);
                  uVar37 = *(uint *)((longlong)plVar26 + 0x114);
                  local_948 = CONCAT44(local_7a8,local_7ac);
                  uStack_940 = local_7a4;
                  uStack_93c = local_790;
                  if ((-1 < (int)uVar24) && ((int)uVar24 < *(int *)(local_910 + 0x1f0))) {
                    lVar38 = *(longlong *)(local_910 + 0x1e8);
                    if (*(longlong *)(local_910 + 0x1e8) == 0) {
                      lVar38 = local_910 + 0x1d8;
                    }
                    uVar18 = uVar24;
                    if ((int)uVar24 < 0) {
                      uVar18 = uVar24 + 0x1f;
                    }
                    if (((*(uint *)(lVar38 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar24 & 0x1f) &
                         1) != 0) &&
                       (cVar11 = FUN_141e01980(lVar42,(longlong)(int)uVar24 * 0x70 +
                                                      *(longlong *)(local_910 + 0x1c8)),
                       cVar11 != '\0')) {
                      uVar37 = 0;
                    }
                  }
                  uVar9 = (ushort)(local_78c >> 0x10);
                  local_964 = uVar9 & 0x8000;
                  uVar18 = (uint)local_964;
                  uVar24 = local_78c >> 0x17 & 0xff;
                  if (uVar24 < 0x71) {
                    iVar45 = -uVar24 + 0x7e;
                    if (iVar45 < 0x19) {
                      uVar19 = local_78c & 0x7fffff | 0x800000;
                      local_964 = (ushort)(uVar19 >> ((byte)iVar45 & 0x1f)) & 0x3ff | local_964;
                      uVar18 = (uint)local_964;
                      if ((uVar19 >> ((char)-uVar24 + 0x7dU & 0x1f) & 1) != 0) {
                        local_964 = local_964 + 1;
                        uVar18 = (uint)local_964;
                      }
                    }
                  }
                  else if (uVar24 < 0x8f) {
                    local_964 = (ushort)(local_78c >> 0xd) & 0x3ff |
                                ((uVar9 >> 7) - 0x10 & 0x1f) << 10 | local_964;
                    uVar18 = (uint)local_964;
                  }
                  else {
                    local_964 = local_964 | 0x7bff;
                    uVar18 = (uint)local_964;
                  }
                  uVar9 = (ushort)(uVar37 >> 0x10);
                  local_960 = uVar9 & 0x8000;
                  uVar24 = uVar37 >> 0x17 & 0xff;
                  if (uVar24 < 0x71) {
                    iVar45 = -uVar24 + 0x7e;
                    if ((iVar45 < 0x19) &&
                       (uVar37 = uVar37 & 0x7fffff | 0x800000,
                       local_960 = (ushort)(uVar37 >> ((byte)iVar45 & 0x1f)) & 0x3ff | local_960,
                       (uVar37 >> ((char)-uVar24 + 0x7dU & 0x1f) & 1) != 0)) {
                      local_960 = local_960 + 1;
                    }
                  }
                  else if (uVar24 < 0x8f) {
                    local_960 = ((uVar9 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar37 >> 0xd) & 0x3ff
                                | local_960;
                  }
                  else {
                    local_960 = local_960 | 0x7bff;
                  }
                  uVar18 = (uint)local_960 << 0x10 | uVar18;
                  local_958 = CONCAT44(local_958._4_4_,uVar18);
                  *(uint *)((longlong)puVar29 + 0x3c) = uVar18;
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                  local_758 = local_748;
                  fStack_754 = local_744;
                  fStack_750 = local_740;
                  uStack_74c = 0x3f800000;
                  local_588 = *(float *)(uVar43 + 0x540) * 1.0 +
                              local_740 * *(float *)(uVar43 + 0x530) +
                              local_744 * *(float *)(uVar43 + 0x520) +
                              local_748 * *(float *)(uVar43 + 0x510);
                  fStack_584 = *(float *)(uVar43 + 0x544) * 1.0 +
                               local_740 * *(float *)(uVar43 + 0x534) +
                               local_744 * *(float *)(uVar43 + 0x524) +
                               local_748 * *(float *)(uVar43 + 0x514);
                  fStack_580 = *(float *)(uVar43 + 0x548) * 1.0 +
                               local_740 * *(float *)(uVar43 + 0x538) +
                               local_744 * *(float *)(uVar43 + 0x528) +
                               local_748 * *(float *)(uVar43 + 0x518);
                  fStack_57c = *(float *)(uVar43 + 0x54c) * 1.0 +
                               local_740 * *(float *)(uVar43 + 0x53c) +
                               local_744 * *(float *)(uVar43 + 0x52c) +
                               local_748 * *(float *)(uVar43 + 0x51c);
                  fVar55 = local_73c + fStack_580;
                  local_950 = fVar55;
                  if (fVar55 <= fVar46) {
                    fVar55 = fVar46;
                    local_950 = fVar46;
                  }
                }
              }
LAB_141b59cb9:
              local_6f0 = local_6f0 & ~local_700._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_700);
              fVar46 = fVar55;
              uVar24 = uStack_6ec;
            } while ((int)uStack_6ec < (int)puStack_6f8[6]);
          }
          lVar38 = 0;
          AK::MemoryMgr::StartProfileThreadUsage(uVar24);
          iVar45 = 0;
          if (0 < (int)local_8b0) {
            local_958 = CONCAT44(local_958._4_4_,0x700);
            uStack_71c = 0x700;
            local_728 = 0x3f800000;
            uStack_720 = 0;
            local_718 = 0xc0000000;
            uStack_714 = 0x3f800000;
            uStack_710 = 0;
            lVar42 = lVar38;
            pvVar44 = local_938;
            iVar13 = local_92c;
            do {
              local_930 = uVar35 + 1;
              iVar17 = (int)local_8b0;
              if (iVar13 < (int)local_930) {
                TArray<FRayTracingGeometryInstance,TMemStackAllocator<0>_>::ResizeGrow
                          (&local_938,uVar35);
                pvVar44 = local_938;
                iVar17 = (int)local_8b0;
                iVar13 = local_92c;
              }
              puVar39 = (undefined4 *)((longlong)(int)(local_930 - 1) * 0x90 + (longlong)pvVar44);
              iVar8 = iVar45;
              if (iVar17 != (int)local_8a0) {
                uVar35 = 0;
                if ((int)((ulonglong)*(undefined8 *)(lVar42 + local_898) >> 0x20) != 0) {
                  uVar35 = local_918;
                }
                iVar8 = ((uint)*(undefined8 *)(lVar42 + local_898) & 0x7fffffff) + uVar35;
              }
              fVar46 = *(float *)(lVar38 + 0xc + local_8b8);
              if (fVar46 <= 0.0001) {
                fVar46 = 0.0001;
              }
              uVar33 = *(undefined4 *)(local_8a8 + 4 + (longlong)iVar8 * 0xc);
              puVar3 = (undefined4 *)(local_8a8 + (longlong)iVar8 * 0xc);
              uVar40 = puVar3[2];
              *puVar39 = *puVar3;
              puVar39[1] = uVar33;
              puVar39[2] = uVar40;
              puVar39[3] = 1.0 / fVar46;
              uVar33 = *(undefined4 *)(lVar38 + 4 + local_8b8);
              uVar40 = *(undefined4 *)(lVar38 + local_8b8);
              uStack_940 = *(undefined4 *)(lVar38 + 8 + local_8b8);
              uStack_93c = *(undefined4 *)(lVar38 + 0x10 + local_8b8);
              puVar39[4] = uVar40;
              puVar39[5] = uVar33;
              puVar39[6] = uStack_940;
              puVar39[7] = uStack_93c;
              *(undefined8 *)(puVar39 + 8) = 0x3f800000;
              *(undefined8 *)(puVar39 + 10) = 0x70000000000;
              uVar35 = *(uint *)(lVar38 + 0x14 + local_8b8);
              local_958 = CONCAT44(local_958._4_4_,uVar35);
              uVar9 = (ushort)(uVar35 >> 0x10);
              local_95c = uVar9 & 0x8000;
              uVar37 = uVar35 >> 0x17 & 0xff;
              local_948 = CONCAT44(uVar33,uVar40);
              if (uVar37 < 0x71) {
                iVar17 = -uVar37 + 0x7e;
                if ((iVar17 < 0x19) &&
                   (uVar35 = uVar35 & 0x7fffff | 0x800000,
                   local_95c = (ushort)(uVar35 >> ((byte)iVar17 & 0x1f)) & 0x3ff | local_95c,
                   (uVar35 >> ((char)-uVar37 + 0x7dU & 0x1f) & 1) != 0)) {
                  local_95c = local_95c + 1;
                }
              }
              else if (uVar37 < 0x8f) {
                local_95c = local_95c |
                            (ushort)(uVar35 >> 0xd) & 0x3ff | ((uVar9 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                local_95c = local_95c | 0x7bff;
              }
              iVar45 = iVar45 + 1;
              iStack_70c = (uint)local_95c << 0x10;
              lVar38 = lVar38 + 0x1c;
              lVar42 = lVar42 + 8;
              *(ulonglong *)(puVar39 + 0xc) = CONCAT44(uStack_714,local_718);
              *(ulonglong *)(puVar39 + 0xe) = CONCAT44(iStack_70c,uStack_710);
              *(undefined8 *)(puVar39 + 0x10) = 0x3f800000;
              *(undefined8 *)(puVar39 + 0x12) = 0;
              *(undefined8 *)(puVar39 + 0x14) = 0;
              *(undefined8 *)(puVar39 + 0x16) = 0;
              *(undefined8 *)(puVar39 + 0x18) = 0;
              *(undefined8 *)(puVar39 + 0x1a) = 0;
              *(undefined8 *)(puVar39 + 0x1c) = 0;
              *(undefined8 *)(puVar39 + 0x1e) = 0;
              *(undefined8 *)(puVar39 + 0x20) = 0;
              *(undefined8 *)(puVar39 + 0x22) = 0;
              puVar34 = local_6a8;
              uVar43 = local_928;
              uVar35 = local_930;
            } while (iVar45 < (int)local_8b0);
          }
        }
        lVar38 = 0;
        uVar37 = uVar35;
        if (uVar35 == 0) {
          local_930 = 1;
          if (local_92c < 1) {
            TArray<FRayTracingGeometryInstance,TMemStackAllocator<0>_>::ResizeGrow(&local_938);
          }
          uVar37 = local_930;
          _guard_xfg_dispatch_icall_nop(local_938,0,0x90);
        }
        lVar42 = *(longlong *)(uVar43 + 0x1a30);
        if (*(uint *)(lVar42 + 0x2a0) < uVar37 * 0x90) {
          *(undefined4 *)(lVar42 + 0x2a0) = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar42 + 0x290,0);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar42 + 0x298,0);
          plVar26 = (longlong *)(*(longlong *)(uVar43 + 0x1a30) + 0x288);
          local_978 = CONCAT44(local_978._4_4_,4);
          (**(code **)(*plVar26 + 8))(plVar26,0x10,uVar37 * 9 & 0xfffffff,1);
          lVar42 = *(longlong *)(uVar43 + 0x1a30);
        }
        *(undefined8 *)(puVar34 + 0x98) = *(undefined8 *)(lVar42 + 0x298);
        lVar42 = *(longlong *)(uVar43 + 0x1a30);
        local_970 = (undefined8 *)CONCAT44(local_970._4_4_,1);
        local_978._0_4_ = *(undefined4 *)(lVar42 + 0x2a0);
        uVar23 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                           (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar42 + 0x290),0);
        *(undefined8 *)(lVar42 + 0x2a8) = uVar23;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(*(longlong *)(uVar43 + 0x1a30) + 0x2a8),local_938,
                   (ulonglong)(uVar37 * 0x90));
        lVar42 = *(longlong *)(uVar43 + 0x1a30);
        (**(code **)(*DAT_146ab6358 + 0x4b8))
                  (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar42 + 0x290));
        *(undefined8 *)(lVar42 + 0x2a8) = 0;
        uVar24 = DAT_1464c1c8c;
        iVar45 = *(int *)(uVar43 + 0x1aac);
        iVar13 = *(int *)(uVar43 + 0x1aa4);
        iVar17 = (*(int *)(uVar43 + 0x1aa8) - *(int *)(uVar43 + 0x1aa0)) + -1 + DAT_1464c1c8c;
        *puVar34 = uVar35;
        uVar18 = iVar17 / (int)uVar24;
        local_958 = CONCAT44(local_958._4_4_,uVar18);
        iVar45 = (uVar24 - 1) + (iVar45 - iVar13);
        uVar19 = iVar45 / (int)uVar24;
        puVar34[1] = *(int *)(uVar43 + 0x2fa4) + *(int *)(uVar43 + 0x2fa0);
        local_928 = CONCAT44(local_928._4_4_,uVar19);
        puVar34[3] = uVar19 * uVar18 * DAT_1464c1c90;
        uVar35 = DAT_1464c1c90;
        puVar34[5] = uVar19;
        puVar34[4] = uVar18;
        puVar34[6] = uVar35;
        puVar34[7] = DAT_1464c1c94;
        local_950 = 4.34403e-44;
        if (DAT_1464c1c8c != 0) {
          for (; DAT_1464c1c8c >> (int)local_950 == 0; local_950 = (float)((int)local_950 - 1)) {
          }
        }
        uVar35 = 0;
        if (DAT_1464c1c8c != 0) {
          uVar35 = (uint)local_950;
        }
        puVar34[8] = uVar35;
        fVar46 = *(float *)(uVar43 + 0x2fa8);
        if (*(float *)(uVar43 + 0x2fa8) <= fVar55) {
          fVar46 = fVar55;
        }
        if (209715.2 <= fVar46) {
          fVar46 = 209715.2;
        }
        dVar7 = (double)*(float *)(uVar43 + 0x11b0) + 9.5;
        dVar47 = (double)exp2((double)(int)(DAT_1464c1c90 - 1) * 0.2469135802469136,
                              (longlong)iVar45 % (longlong)(int)uVar24 & 0xffffffff);
        dVar47 = ((double)(fVar46 + 10.0) - dVar47 * dVar7) / ((double)(fVar46 + 10.0) - dVar7);
        local_590 = 0x4081999a;
        *(ulonglong *)(puVar34 + 0xc) = CONCAT44((float)dVar47,(float)((1.0 - dVar47) / dVar7));
        puVar34[0xe] = 0x4081999a;
        if ((0x10000 < uVar37) && (DAT_146a253dc == '\0')) {
          DAT_146a253dc = '\x01';
        }
        AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
        lVar42 = *(longlong *)(uVar43 + 0x1a30);
        iVar45 = uVar19 * uVar18 * DAT_1464c1ca4 * DAT_1464c1c90;
        if ((ulonglong)*(uint *)(lVar42 + 0x2c8) != (longlong)(iVar45 * DAT_1464c1ca0) * 4) {
          local_528 = 0;
          local_518 = 1;
          local_970 = &local_528;
          local_504 = 0;
          local_4f8 = 0;
          puVar29 = (undefined8 *)(lVar42 + 0x2b0);
          local_4f0 = 0;
          local_520 = 0;
          local_500 = 0;
          *(int *)(lVar42 + 0x2c8) = iVar45 * DAT_1464c1ca0 * 4;
          local_978 = CONCAT44(local_978._4_4_,0x208);
          local_514 = _DAT_1468b5d78;
          uStack_50c = uRam00000001468b5d80;
          (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_7e8,&DAT_146ab6e78);
          TRefCountPtr<FRHIIndexBuffer>::operator=(puVar29,local_7e8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_7e8);
          local_978 = CONCAT71(local_978._1_7_,0x1c);
          (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_888,&DAT_146ab6e78,*puVar29);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar42 + 0x2b8,local_888);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_888);
          local_970 = (undefined8 *)CONCAT71(local_970._1_7_,0x1c);
          local_978._0_4_ = 4;
          (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_880,&DAT_146ab6e78,*puVar29);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar42 + 0x2c0,local_880);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_880);
          lVar42 = *(longlong *)(uVar43 + 0x1a30);
        }
        if ((ulonglong)*(uint *)(lVar42 + 0x2f0) != (longlong)(int)(iVar45 * DAT_1464c1c94) * 2) {
          local_4e8 = 0;
          local_4d8 = 1;
          local_970 = &local_4e8;
          local_4c4 = 0;
          local_4b8 = 0;
          puVar29 = (undefined8 *)(lVar42 + 0x2d8);
          local_4b0 = 0;
          local_4e0 = 0;
          local_4c0 = 0;
          *(uint *)(lVar42 + 0x2f0) = iVar45 * DAT_1464c1c94 * 2;
          local_978 = CONCAT44(local_978._4_4_,0x208);
          local_4d4 = _DAT_1468b5d78;
          uStack_4cc = uRam00000001468b5d80;
          (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_878,&DAT_146ab6e78);
          TRefCountPtr<FRHIIndexBuffer>::operator=(puVar29,local_878);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_878);
          local_978 = CONCAT71(local_978._1_7_,0x20);
          (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_870,&DAT_146ab6e78,*puVar29);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar42 + 0x2e0,local_870);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_870);
          local_970 = (undefined8 *)CONCAT71(local_970._1_7_,0x20);
          local_978._0_4_ = 2;
          (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_868,&DAT_146ab6e78,*puVar29);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar42 + 0x2e8,local_868);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_868);
        }
        local_678[0] = 0;
        local_678[1] = 0;
        local_678[2] = 0;
        local_660 = 0;
        local_658 = 0;
        uStack_650 = 0;
        local_648 = 0;
        uStack_640 = 0;
        local_638 = 0;
        local_630 = 0;
        local_628 = 0;
        uStack_620 = 0;
        local_618 = 0;
        local_610 = 0;
        local_608 = 0;
        uStack_600 = 0;
        local_5f8 = 0;
        uStack_5f0 = 0;
        local_5e8 = 0;
        local_5e0 = 0;
        if (*(longlong *)(uVar43 + 0x1ab0) == 0) {
          plVar26 = local_678;
        }
        else {
          plVar26 = (longlong *)(*(longlong *)(uVar43 + 0x1ab0) + 0x1328);
        }
        uVar35 = DAT_1464c1ca8 * iVar45 * DAT_1464c1c94;
        if (((ulonglong)*(uint *)(plVar26 + 0xd) != (ulonglong)uVar35 << 2) ||
           ((DAT_146a9dad4 != '\0' && (*(uint *)(plVar26 + 0xd) != 0)))) {
          if ((DAT_146ab62f3 == 0) || (uVar37 = 0x2000, *(int *)(DAT_146a9d500 + 4) == 0)) {
            uVar37 = 0;
          }
          uVar37 = DAT_146a9dad0 | uVar37;
          *(uint *)(plVar26 + 0xd) = uVar35 * 4;
          local_970 = &local_4a8;
          local_4a8 = 0;
          local_498 = 1;
          local_484 = 0;
          local_480 = L"CulledLightLinks";
          local_494 = _DAT_1468b5d78;
          uStack_48c = uRam00000001468b5d80;
          local_478 = 0;
          local_470 = 0;
          local_4a0 = 0;
          local_978 = CONCAT44(local_978._4_4_,uVar37) | 0x208;
          (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_860,&DAT_146ab6e78);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 10,local_860);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_860);
          local_978 = CONCAT71(local_978._1_7_,0x1c);
          (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_858,&DAT_146ab6e78,plVar26[10]);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 0xb,local_858);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_858);
          local_970 = (undefined8 *)CONCAT71(local_970._1_7_,0x1c);
          local_978._0_4_ = 4;
          (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_850,&DAT_146ab6e78,plVar26[10]);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 0xc,local_850);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_850);
          local_468 = 0;
          *(undefined4 *)(plVar26 + 3) = 4;
          local_970 = &local_468;
          local_458 = 1;
          local_444 = 0;
          local_454 = _DAT_1468b5d78;
          uStack_44c = uRam00000001468b5d80;
          local_438 = 0;
          local_430 = 0;
          local_460 = 0;
          local_440 = L"NextCulledLightLink";
          local_978 = CONCAT44(local_978._4_4_,uVar37) | 0x208;
          (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_848,&DAT_146ab6e78,4);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26,local_848);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_848);
          local_978 = CONCAT71(local_978._1_7_,0x1c);
          (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_840,&DAT_146ab6e78,*plVar26);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 1,local_840);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_840);
          local_970 = (undefined8 *)CONCAT71(local_970._1_7_,0x1c);
          local_978._0_4_ = 4;
          (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_838,&DAT_146ab6e78,*plVar26);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 2,local_838);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_838);
          local_428 = 0;
          *(int *)(plVar26 + 8) = iVar45 * 4;
          local_970 = &local_428;
          local_418 = 1;
          local_404 = 0;
          local_414 = _DAT_1468b5d78;
          uStack_40c = uRam00000001468b5d80;
          local_3f8 = 0;
          local_3f0 = 0;
          local_420 = 0;
          local_400 = L"StartOffsetGrid";
          local_978 = CONCAT44(local_978._4_4_,uVar37) | 0x208;
          (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_7f8,&DAT_146ab6e78);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 5,local_7f8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_7f8);
          local_978 = CONCAT71(local_978._1_7_,0x1c);
          (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_830,&DAT_146ab6e78,plVar26[5]);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 6,local_830);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_830);
          local_970 = (undefined8 *)CONCAT71(local_970._1_7_,0x1c);
          local_978._0_4_ = 4;
          (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_828,&DAT_146ab6e78,plVar26[5]);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 7,local_828);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_828);
          *(undefined4 *)(plVar26 + 0x12) = 4;
          local_3d8 = 1;
          local_3e8 = 0;
          local_3d4 = _DAT_1468b5d78;
          uStack_3cc = uRam00000001468b5d80;
          local_3c4 = 0;
          local_970 = &local_3e8;
          local_3b8 = 0;
          local_3b0 = 0;
          local_3e0 = 0;
          local_3c0 = L"NextCulledLightData";
          local_978 = CONCAT44(local_978._4_4_,uVar37) | 0x208;
          (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_820,&DAT_146ab6e78,4);
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 0xf,local_820);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_820);
          local_978 = CONCAT71(local_978._1_7_,0x1c);
          (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_818,&DAT_146ab6e78,plVar26[0xf])
          ;
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 0x10,local_818);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_818);
          local_970 = (undefined8 *)CONCAT71(local_970._1_7_,0x1c);
          local_978._0_4_ = 4;
          (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_810,&DAT_146ab6e78,plVar26[0xf])
          ;
          TRefCountPtr<FRHIIndexBuffer>::operator=(plVar26 + 0x11,local_810);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_810);
        }
        local_978 = CONCAT44(local_978._4_4_,1);
        *(undefined8 *)(puVar34 + 0x9a) = *(undefined8 *)(*(longlong *)(uVar43 + 0x1a30) + 0x2c0);
        *(undefined8 *)(puVar34 + 0x9c) = *(undefined8 *)(*(longlong *)(uVar43 + 0x1a30) + 0x2e8);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_808,puVar34,&DAT_146a1ea78);
        local_8f8 = local_808;
        if (local_808 != 0) {
          LOCK();
          *(int *)(local_808 + 8) = *(int *)(local_808 + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_808);
        TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(uVar43 + 0x1a30) + 0x280,&local_8f8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_8f8);
        uVar35 = (uint)DAT_146ab62f3;
        if ((DAT_146ab62f3 != 0) && (*(int *)(DAT_146a9d500 + 4) != 0)) {
          lVar42 = plVar26[10];
          if (*(char *)(lVar42 + 0x11) == '\0') {
            (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar42);
            *(undefined1 *)(lVar42 + 0x11) = 1;
            uVar35 = (uint)DAT_146ab62f3;
          }
          lVar42 = *plVar26;
          if (*(char *)(lVar42 + 0x11) == '\0') {
            if ((char)uVar35 != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar42);
            }
            *(undefined1 *)(lVar42 + 0x11) = 1;
            uVar35 = (uint)DAT_146ab62f3;
          }
          lVar42 = plVar26[5];
          if (*(char *)(lVar42 + 0x11) == '\0') {
            if ((char)uVar35 != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar42);
            }
            *(undefined1 *)(lVar42 + 0x11) = 1;
            uVar35 = (uint)DAT_146ab62f3;
          }
          lVar42 = plVar26[0xf];
          if (*(char *)(lVar42 + 0x11) == '\0') {
            if ((char)uVar35 != '\0') {
              plVar32 = DAT_146ab6358;
              (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar42);
              uVar35 = (uint)plVar32;
            }
            *(undefined1 *)(lVar42 + 0x11) = 1;
          }
        }
        AK::MemoryMgr::StartProfileThreadUsage(uVar35);
        AK::MemoryMgr::StartProfileThreadUsage(0x464aa748);
        local_378 = (undefined8 *)0x0;
        local_958 = CONCAT44(local_958._4_4_,((int)local_958 + -1 + DAT_1464c1cac) / DAT_1464c1cac);
        local_928 = CONCAT44(local_928._4_4_,((int)local_928 + -1 + DAT_1464c1cac) / DAT_1464c1cac);
        local_950 = (float)((int)((DAT_1464c1c90 - 1) + DAT_1464c1cac) / DAT_1464c1cac);
        uVar23 = *(undefined8 *)(*(longlong *)(uVar43 + 0x1a30) + 0x2b8);
        local_370 = 1;
        iStack_36c = 0;
        TArray<FRHIUnorderedAccessView_*,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                  (local_3a8,0);
        puVar29 = local_3a8;
        if (local_378 != (undefined8 *)0x0) {
          puVar29 = local_378;
        }
        *puVar29 = uVar23;
        iVar45 = local_370;
        lVar42 = (longlong)local_370;
        uVar23 = *(undefined8 *)(*(longlong *)(uVar43 + 0x1a30) + 0x2e0);
        local_370 = local_370 + 1;
        if (iStack_36c < local_370) {
          TArray<FRHIUnorderedAccessView_*,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                    (local_3a8,iVar45);
        }
        puVar29 = local_3a8;
        if (local_378 != (undefined8 *)0x0) {
          puVar29 = local_378;
        }
        puVar29[lVar42] = uVar23;
        iVar45 = local_370;
        lVar30 = (longlong)local_370;
        lVar42 = plVar26[1];
        local_370 = local_370 + 1;
        if (iStack_36c < local_370) {
          TArray<FRHIUnorderedAccessView_*,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                    (local_3a8,iVar45);
        }
        puVar29 = local_3a8;
        if (local_378 != (undefined8 *)0x0) {
          puVar29 = local_378;
        }
        puVar29[lVar30] = lVar42;
        iVar45 = local_370;
        lVar30 = (longlong)local_370;
        lVar42 = plVar26[6];
        local_370 = local_370 + 1;
        if (iStack_36c < local_370) {
          TArray<FRHIUnorderedAccessView_*,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                    (local_3a8,iVar45);
        }
        puVar29 = local_3a8;
        if (local_378 != (undefined8 *)0x0) {
          puVar29 = local_378;
        }
        puVar29[lVar30] = lVar42;
        iVar45 = local_370;
        lVar30 = (longlong)local_370;
        lVar42 = plVar26[0xb];
        local_370 = local_370 + 1;
        if (iStack_36c < local_370) {
          TArray<FRHIUnorderedAccessView_*,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                    (local_3a8,iVar45);
        }
        puVar29 = local_3a8;
        if (local_378 != (undefined8 *)0x0) {
          puVar29 = local_378;
        }
        puVar29[lVar30] = lVar42;
        iVar45 = local_370;
        lVar30 = (longlong)local_370;
        lVar42 = plVar26[0x10];
        local_370 = local_370 + 1;
        if (iStack_36c < local_370) {
          TArray<FRHIUnorderedAccessView_*,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
                    (local_3a8,iVar45);
        }
        puVar29 = local_3a8;
        if (local_378 != (undefined8 *)0x0) {
          puVar29 = local_378;
        }
        puVar29[lVar30] = lVar42;
        iVar45 = local_370;
        lVar42 = (longlong)local_370;
        puVar29 = local_3a8;
        if (local_378 != (undefined8 *)0x0) {
          puVar29 = local_378;
        }
        puVar31 = (undefined8 *)(*local_908 + 7 & 0xfffffffffffffff8);
        iVar13 = local_370 * 8;
        uVar41 = (longlong)puVar31 + (longlong)iVar13;
        if (local_908[1] < uVar41) {
          FMemStackBase::AllocateNewChunk(local_908,iVar13 + 8);
          puVar31 = (undefined8 *)(*local_908 + 7 & 0xfffffffffffffff8);
          uVar41 = (longlong)puVar31 + (longlong)iVar13;
        }
        *local_908 = uVar41;
        if (0 < iVar45) {
          puVar27 = puVar31;
          do {
            *puVar27 = *(undefined8 *)(((longlong)puVar29 - (longlong)puVar31) + (longlong)puVar27);
            puVar27 = puVar27 + 1;
            lVar42 = lVar42 + -1;
          } while (lVar42 != 0);
        }
        puVar27 = (undefined8 *)(*local_908 + 7 & 0xfffffffffffffff8);
        puVar29 = puVar27 + 6;
        if ((undefined8 *)local_908[1] < puVar29) {
          FMemStackBase::AllocateNewChunk(local_908,0x38);
          puVar27 = (undefined8 *)(*local_908 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar27 + 6;
        }
        lVar42 = local_920;
        *local_908 = (ulonglong)puVar29;
        *(int *)(local_920 + 0x14) = *(int *)(local_920 + 0x14) + 1;
        **(undefined8 **)(local_920 + 8) = puVar27;
        *(undefined8 **)(local_920 + 8) = puVar27 + 1;
        puVar27[1] = 0;
        *puVar27 = &PTR_LAB_144d91e60;
        *(int *)(puVar27 + 2) = iVar45;
        puVar27[3] = puVar31;
        puVar27[4] = 1;
        puVar27[5] = 0;
        if (DAT_1464c1c98 == 0) {
          ClearUAV(local_920,*(longlong *)(uVar43 + 0x1a30) + 0x2b0,0);
          lVar30 = *(longlong *)(uVar43 + 0x3090);
          local_5c8 = &DAT_146a25280;
          local_5c0 = 0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar30 + 0x38,&local_8e4,&local_5c8);
          lVar28 = lVar38;
          if (local_8e4 != -1) {
            lVar28 = (longlong)local_8e4 * 0x20 + *(longlong *)(lVar30 + 0x38);
          }
          plVar32 = (longlong *)(lVar28 + 0x10);
          if (lVar28 == 0) {
            plVar32 = (longlong *)0x0;
          }
          lVar30 = *plVar32;
          lVar28 = *(longlong *)(lVar30 + 0x48);
          if (*(char *)(lVar28 + 0x28) == '\0') {
            FUN_1419f3850(lVar28);
          }
          uVar23 = *(undefined8 *)(lVar28 + 0x60);
          FRHIComputeShader::UpdateStats(uVar23);
          puVar31 = (undefined8 *)(*(longlong *)(lVar42 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar29 = puVar31 + 3;
          if (*(undefined8 **)(lVar42 + 0x38) < puVar29) {
            FMemStackBase::AllocateNewChunk(lVar42 + 0x30,0x20);
            puVar31 = (undefined8 *)(*(longlong *)(lVar42 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar29 = puVar31 + 3;
          }
          *(undefined8 **)(lVar42 + 0x30) = puVar29;
          *(int *)(lVar42 + 0x14) = *(int *)(lVar42 + 0x14) + 1;
          **(undefined8 **)(lVar42 + 8) = puVar31;
          *(undefined8 **)(lVar42 + 8) = puVar31 + 1;
          puVar31[1] = 0;
          *puVar31 = &PTR_LAB_144d91e50;
          puVar31[2] = uVar23;
          FUN_141b6f840(lVar30,lVar42,uVar43,plVar26);
          uVar40 = (int)local_928;
          uVar33 = (int)local_958;
          local_978 = CONCAT44(local_978._4_4_,local_950);
          DispatchComputeShader(local_920,lVar30,local_958 & 0xffffffff,local_928 & 0xffffffff);
          lVar42 = *(longlong *)(lVar30 + 0x48);
          if (*(char *)(lVar42 + 0x28) == '\0') {
            FUN_1419f3850(lVar42);
          }
          local_680 = *(undefined8 *)(lVar42 + 0x60);
          puVar29 = &local_680;
        }
        else {
          ClearUAV(local_920,plVar26 + 5,0xffffffff);
          ClearUAV(lVar42,plVar26,0);
          ClearUAV(lVar42,plVar26 + 0xf,0);
          lVar30 = *(longlong *)(uVar43 + 0x3090);
          local_5d8 = &DAT_146a25130;
          local_5d0 = 0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar30 + 0x38,&local_8e8,&local_5d8);
          lVar28 = lVar38;
          if (local_8e8 != -1) {
            lVar28 = (longlong)local_8e8 * 0x20 + *(longlong *)(lVar30 + 0x38);
          }
          plVar32 = (longlong *)(lVar28 + 0x10);
          if (lVar28 == 0) {
            plVar32 = (longlong *)0x0;
          }
          lVar30 = *plVar32;
          lVar28 = *(longlong *)(lVar30 + 0x48);
          if (*(char *)(lVar28 + 0x28) == '\0') {
            FUN_1419f3850(lVar28);
          }
          uVar23 = *(undefined8 *)(lVar28 + 0x60);
          FRHIComputeShader::UpdateStats(uVar23);
          puVar31 = (undefined8 *)(*(longlong *)(lVar42 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar29 = puVar31 + 3;
          if (*(undefined8 **)(lVar42 + 0x38) < puVar29) {
            FMemStackBase::AllocateNewChunk(lVar42 + 0x30,0x20);
            puVar31 = (undefined8 *)(*(longlong *)(lVar42 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar29 = puVar31 + 3;
          }
          *(undefined8 **)(lVar42 + 0x30) = puVar29;
          *(int *)(lVar42 + 0x14) = *(int *)(lVar42 + 0x14) + 1;
          **(undefined8 **)(lVar42 + 8) = puVar31;
          *(undefined8 **)(lVar42 + 8) = puVar31 + 1;
          puVar31[1] = 0;
          *puVar31 = &PTR_LAB_144d91e50;
          puVar31[2] = uVar23;
          FUN_141b6f840(lVar30,lVar42,uVar43,plVar26);
          uVar40 = (int)local_928;
          uVar33 = (int)local_958;
          local_978 = CONCAT44(local_978._4_4_,local_950);
          DispatchComputeShader(local_920,lVar30,local_958 & 0xffffffff,local_928 & 0xffffffff);
          lVar42 = *(longlong *)(lVar30 + 0x48);
          if (*(char *)(lVar42 + 0x28) == '\0') {
            FUN_1419f3850(lVar42);
          }
          local_688 = *(undefined8 *)(lVar42 + 0x60);
          puVar29 = &local_688;
        }
        local_978 = *(undefined8 *)(uVar43 + 0x1a30);
        FUN_141b51bf0(lVar30 + 0xc0,local_920,puVar29);
        if (local_378 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        if (DAT_1464c1c98 != 0) {
          lVar42 = *(longlong *)(uVar43 + 0x3090);
          local_5b8 = &DAT_146a1eae0;
          local_5b0 = 0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar42 + 0x38,local_8e0,&local_5b8);
          if (local_8e0[0] != -1) {
            lVar38 = (longlong)local_8e0[0] * 0x20 + *(longlong *)(lVar42 + 0x38);
          }
          plVar32 = (longlong *)(lVar38 + 0x10);
          if (lVar38 == 0) {
            plVar32 = (longlong *)0x0;
          }
          lVar38 = *plVar32;
          lVar42 = *(longlong *)(lVar38 + 0x48);
          if (*(char *)(lVar42 + 0x28) == '\0') {
            FUN_1419f3850(lVar42);
          }
          uVar23 = *(undefined8 *)(lVar42 + 0x60);
          FRHIComputeShader::UpdateStats(uVar23);
          puVar31 = (undefined8 *)(*local_908 + 7 & 0xfffffffffffffff8);
          puVar29 = puVar31 + 3;
          if ((undefined8 *)local_908[1] < puVar29) {
            FMemStackBase::AllocateNewChunk(local_908,0x20);
            puVar31 = (undefined8 *)(*local_908 + 7 & 0xfffffffffffffff8);
            puVar29 = puVar31 + 3;
          }
          *local_908 = (ulonglong)puVar29;
          *(int *)(local_920 + 0x14) = *(int *)(local_920 + 0x14) + 1;
          **(undefined8 **)(local_920 + 8) = puVar31;
          *(undefined8 **)(local_920 + 8) = puVar31 + 1;
          puVar31[1] = 0;
          *puVar31 = &PTR_LAB_144d91e50;
          puVar31[2] = uVar23;
          FUN_141b6f840(lVar38,local_920,uVar43,plVar26);
          lVar30 = local_920;
          local_978 = CONCAT44(local_978._4_4_,local_950);
          DispatchComputeShader(local_920,lVar38,uVar33,uVar40);
          lVar42 = *(longlong *)(lVar38 + 0x48);
          if (*(char *)(lVar42 + 0x28) == '\0') {
            FUN_1419f3850(lVar42);
          }
          local_6e0[0] = *(undefined8 *)(lVar42 + 0x60);
          local_978 = *(undefined8 *)(uVar43 + 0x1a30);
          FUN_141b51bf0(lVar38 + 0xc0,lVar30,local_6e0);
        }
        uVar35 = (uint)DAT_146ab62f3;
        if ((DAT_146ab62f3 != 0) && (*(int *)(DAT_146a9d500 + 4) != 0)) {
          lVar38 = plVar26[10];
          if (*(char *)(lVar38 + 0x11) != '\0') {
            (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar38);
            *(undefined1 *)(lVar38 + 0x11) = 0;
            uVar35 = (uint)DAT_146ab62f3;
          }
          lVar38 = *plVar26;
          if (*(char *)(lVar38 + 0x11) != '\0') {
            if ((char)uVar35 != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar38);
            }
            *(undefined1 *)(lVar38 + 0x11) = 0;
            uVar35 = (uint)DAT_146ab62f3;
          }
          lVar38 = plVar26[5];
          if (*(char *)(lVar38 + 0x11) != '\0') {
            if ((char)uVar35 != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar38);
            }
            *(undefined1 *)(lVar38 + 0x11) = 0;
            uVar35 = (uint)DAT_146ab62f3;
          }
          lVar38 = plVar26[0xf];
          if (*(char *)(lVar38 + 0x11) != '\0') {
            if ((char)uVar35 != '\0') {
              plVar26 = DAT_146ab6358;
              (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar38);
              uVar35 = (uint)plVar26;
            }
            *(undefined1 *)(lVar38 + 0x11) = 0;
          }
        }
        AK::MemoryMgr::StartProfileThreadUsage(uVar35);
        AK::MemoryMgr::StartProfileThreadUsage(uVar35);
        FUN_141ace450(&uStack_600);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_5f0);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_5f8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_600);
        FUN_141ace450(&local_628);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_618);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_620);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_628);
        FUN_141ace450(&uStack_650);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_640);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_648);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_650);
        FUN_141ace450(local_678);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_678 + 2);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_678 + 1);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_678);
        local_918 = local_918 + 1;
        uVar41 = (ulonglong)local_918;
        local_800 = local_800 + 1;
        param_1 = local_910;
        cVar11 = local_967;
      } while ((int)local_918 < *(int *)(local_910 + 200));
    }
  }
  return;
}



// FUNCTION 141b5b700 FUN_141b5b700 body=1843 status=ok
// SIG undefined FUN_141b5b700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b5b700(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auVar8 [12];
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  uchar *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  uint *puVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  uint local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  WriteBytesMem *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  uint uStack_1a8;
  int iStack_1a4;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined8 uStack_160;
  uint *puStack_158;
  undefined4 uStack_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
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
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  bVar10 = false;
  bVar9 = false;
  local_1d8 = (WriteBytesMem *)((ulonglong)local_1d8 & 0xffffffff00000000);
  iVar2 = *(int *)(param_2 + 0x1a38);
  if (DAT_1464c1c74 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  if (DAT_146a153b0 == 0) {
    return;
  }
  local_198 = param_1;
  local_188 = param_2;
  local_178 = param_4;
  iVar13 = FUN_14274f980(param_2);
  if (iVar2 < 3) {
    return;
  }
  if (iVar13 != 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_4 + 0x30) + 0x188) != '\0') {
    return;
  }
  if ((*(uint *)(*(longlong *)(param_4 + 0x30) + 0x180) >> 4 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c) < 1) {
    return;
  }
  local_180 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1170);
  local_1f0 = local_1f0 & 0xffffff00;
  local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,0x22);
  uVar4 = *(ulonglong *)(local_180 + 0x58);
  local_190 = CONCAT44(1.0 / (float)(int)(uVar4 >> 0x20),1.0 / (float)(int)uVar4);
  local_1c8 = uVar4;
  FUN_141ad74f0(param_3,*(undefined8 *)(*(longlong *)(local_180 + 0x50) + 8),0,4);
  uVar22 = uVar4 & 0xffffffff;
  if (((*(byte *)(*(longlong *)(param_2 + 0x10) + 0x2c) & 4) != 0) &&
     (plVar15 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x170), plVar15 != (longlong *)0x0))
  {
    local_1d0 = (longlong *)0x0;
    (**(code **)(*plVar15 + 0x40))(plVar15,iVar2,&local_1d8,&local_1d0);
    cVar12 = (**(code **)(*local_1d0 + 0x98))();
    if (cVar12 != '\0') {
      plVar15 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x170);
      uVar22 = uVar4;
      goto LAB_141b5b8bc;
    }
  }
  plVar15 = (longlong *)UMaterial::GetDefaultMaterial(2);
  plVar15 = (longlong *)(**(code **)(*plVar15 + 0x2a8))(plVar15,0,0);
LAB_141b5b8bc:
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
  local_1d0 = plVar15;
  cVar12 = FUN_141b192e0(lVar5);
  if (cVar12 == '\0') {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined4 *)(*(longlong *)(lVar5 + 0x1150) + 0x104);
  }
  local_1d8 = (WriteBytesMem *)0x0;
  (**(code **)(*plVar15 + 0x40))(plVar15,iVar2,local_170,&local_1d8);
  cVar12 = (**(code **)(*(longlong *)local_1d8 + 0x98))();
  if (cVar12 != '\0') {
    uVar3 = local_1c8._4_4_;
    puVar21 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar21 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar20) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30);
      puVar21 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar21 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar20;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar21;
    *(undefined8 **)(param_3 + 8) = puVar21 + 1;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(undefined4 *)(puVar21 + 4) = uVar3;
    *puVar21 = &PTR_LAB_143f59420;
    *(int *)((longlong)puVar21 + 0x1c) = (int)uVar22;
    *(undefined4 *)((longlong)puVar21 + 0x24) = 0x3f800000;
    local_f0 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_8c = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
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
    local_94 = 0;
    local_84 = 0;
    FUN_14049afe0(param_3,&local_138);
    uStack_100 = FUN_140985530();
    local_f8 = FUN_1409853f0();
    local_108 = FUN_1404a0ce0();
    uVar11 = DAT_1464c1ea8;
    puVar21 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar21 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar20) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar21 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar21 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar20;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar21;
    *(undefined8 **)(param_3 + 8) = puVar21 + 1;
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar21 + 2) = 0;
    puVar21[3] = uVar11;
    *(undefined4 *)(puVar21 + 4) = 0;
    FUN_141b535c0(&local_1c8,*(undefined8 *)(param_2 + 0x3090));
    local_1d8 = (WriteBytesMem *)0x0;
    (**(code **)(*local_1d0 + 0x40))(local_1d0,iVar2,local_170,&local_1d8);
    local_1c0 = (longlong *)&DAT_146a1e2a0;
    uStack_1b8 = (ulonglong)uStack_1b8._4_4_ << 0x20;
    puVar16 = AK::WriteBytesMem::Bytes(local_1d8);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(puVar16 + 0x38,&local_1d8,&local_1c0);
    uVar11 = local_190;
    uVar4 = local_1c8;
    plVar15 = (longlong *)0x0;
    if ((int)local_1d8 != -1) {
      plVar15 = (longlong *)((longlong)(int)local_1d8 * 0x20 + *(longlong *)(puVar16 + 0x38));
    }
    plVar17 = plVar15 + 2;
    if (plVar15 == (longlong *)0x0) {
      plVar17 = (longlong *)0x0;
    }
    local_1c0 = (longlong *)0x100000000;
    local_168 = (longlong *)(local_198 + 0x28);
    local_1b0._4_4_ = 0;
    uStack_1a8 = 0;
    iVar2 = *(int *)(local_198 + 0x50);
    puStack_158 = (uint *)(local_198 + 0x38);
    lVar5 = *plVar17;
    if (iVar2 != 0) {
      puVar23 = *(uint **)(local_198 + 0x48);
      if (*(uint **)(local_198 + 0x48) == (uint *)0x0) {
        puVar23 = puStack_158;
      }
      uVar14 = *puVar23;
      uStack_1a8 = 0;
      iVar13 = 0;
      while (uVar14 == 0) {
        uStack_1a8 = uStack_1a8 + 0x20;
        uVar22 = (ulonglong)local_1c0 >> 0x20;
        local_1c0 = (longlong *)CONCAT44((int)uVar22,iVar13 + 1);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) goto LAB_141b5bbc4;
        uVar14 = puVar23[(longlong)iVar13 + 1];
        iVar13 = iVar13 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar13 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      local_1c0 = (longlong *)CONCAT44(uVar14,SUB84(local_1c0,0));
      if (uVar14 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      local_1b0._4_4_ = (uStack_1a8 - iVar13) + 0x1f;
      if (iVar2 < local_1b0._4_4_) {
LAB_141b5bbc4:
        local_1b0._4_4_ = iVar2;
      }
    }
    uStack_150 = 0xffffffff;
    iStack_14c = local_1b0._4_4_;
    iStack_148 = uStack_1a8;
    uStack_144 = iStack_1a4;
    uStack_160 = local_1c0;
    uStack_1b8 = (longlong)local_1c0;
    auVar8._4_8_ = local_1c0;
    auVar8._0_4_ = local_1b0._4_4_;
    auVar24._0_8_ = auVar8._0_8_ << 0x20;
    auVar24._8_4_ = uStack_1a8;
    auVar24._12_4_ = iStack_1a4;
    local_1a0 = auVar24._8_8_;
    uStack_1a8 = 0xffffffff;
    iStack_1a4 = local_1b0._4_4_;
    bVar7 = local_1b0._4_4_ < iVar2;
    local_1c0 = local_168;
    local_1b0 = puStack_158;
    if (bVar7) {
      do {
        uVar18 = 0;
        lVar1 = *local_1c0 + (longlong)iStack_1a4 * 0x28;
        if (0 < *(int *)(*local_1c0 + 0x18 + (longlong)iStack_1a4 * 0x28)) {
          FUN_141b79ab0(lVar1 + 0x10,uVar11,1.0 / (float)*(int *)(local_198 + 0x10));
          local_138 = DAT_146534c78;
          if (uVar4 == 0) {
            bVar9 = true;
            local_1c8 = 0;
          }
          else {
            lVar6 = *(longlong *)(uVar4 + 0x48);
            if (*(char *)(lVar6 + 0x28) == '\0') {
              FUN_1419f3850(lVar6);
            }
            uVar18 = *(undefined8 *)(lVar6 + 0x38);
          }
          uVar19 = 0;
          uStack_130 = uVar18;
          if (bVar9) {
            bVar9 = false;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1c8);
          }
          if (lVar5 == 0) {
            bVar10 = true;
            local_190 = 0;
          }
          else {
            lVar6 = *(longlong *)(lVar5 + 0x48);
            if (*(char *)(lVar6 + 0x28) == '\0') {
              FUN_1419f3850(lVar6);
            }
            uVar19 = *(undefined8 *)(lVar6 + 0x40);
          }
          local_118 = uVar19;
          if (bVar10) {
            bVar10 = false;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
          }
          local_ec = local_ec & 0xffffffff00000000;
          FUN_141ed6ac0(param_3,&local_138,2,1);
          FUN_141b716b0(uVar4,param_3,local_188,*(undefined4 *)(lVar1 + 0x18));
          local_1e8 = local_180;
          local_1f0 = *(uint *)(lVar1 + 0x18);
          local_1f8 = local_1d0;
          local_1e0 = uVar25;
          FUN_141b72470(lVar5,param_3,local_188,local_178);
          uVar3 = *(undefined4 *)(lVar1 + 0x18);
          puVar21 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar20 = puVar21 + 4;
          if (*(undefined8 **)(param_3 + 0x38) < puVar20) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30);
            puVar21 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar20 = puVar21 + 4;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar20;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          **(undefined8 **)(param_3 + 8) = puVar21;
          *(undefined8 **)(param_3 + 8) = puVar21 + 1;
          puVar21[1] = 0;
          *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar3;
          *puVar21 = &PTR_LAB_143f59410;
          puVar21[2] = 0;
          *(undefined4 *)(puVar21 + 3) = 2;
        }
        uStack_1a8 = uStack_1a8 & ~uStack_1b8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b8);
      } while (iStack_1a4 < (int)local_1b0[6]);
    }
  }
  return;
}



// FUNCTION 141b5be40 FUN_141b5be40 body=1129 status=ok
// SIG undefined FUN_141b5be40(void)

void FUN_141b5be40(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined1 auVar17 [16];
  undefined8 local_c8;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  int iStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined *puStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  if ((0 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c)) && (DAT_146a1c424 != 0)) {
    local_98 = (longlong *)(param_1 + 0x28);
    iVar9 = *(int *)(param_1 + 0x50);
    puStack_c0 = (uint *)(param_1 + 0x38);
    local_c8 = (undefined *)0x100000000;
    iStack_b4 = 0;
    iStack_b0 = 0;
    if (iVar9 != 0) {
      puVar16 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar16 = puStack_c0;
      }
      uVar7 = *puVar16;
      iStack_b0 = 0;
      iVar8 = 0;
      while (uVar7 == 0) {
        iStack_b0 = iStack_b0 + 0x20;
        uVar6 = (ulonglong)local_c8 >> 0x20;
        local_c8 = (undefined *)CONCAT44((int)uVar6,iVar8 + 1);
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141b5bf3d;
        uVar7 = puVar16[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar8 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      local_c8 = (undefined *)CONCAT44(uVar7,SUB84(local_c8,0));
      if (uVar7 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_b4 = (iStack_b0 - iVar8) + 0x1f;
      if (iVar9 < iStack_b4) {
LAB_141b5bf3d:
        iStack_b4 = iVar9;
      }
    }
    local_b8 = 0xffffffff;
    uStack_58 = 0xffffffff;
    iStack_54 = iStack_b4;
    iStack_50 = iStack_b0;
    puStack_68 = local_c8;
    uStack_80 = 0xffffffff;
    iStack_7c = iStack_b4;
    uStack_90 = local_c8;
    auVar5._4_8_ = local_c8;
    auVar5._0_4_ = iStack_b4;
    auVar17._0_8_ = auVar5._0_8_ << 0x20;
    auVar17._8_4_ = iStack_b0;
    auVar17._12_4_ = uStack_ac;
    local_78 = auVar17._8_8_;
    local_88 = puStack_c0;
    local_70 = local_98;
    puStack_60 = puStack_c0;
    if (iStack_b4 < iVar9) {
      do {
        plVar14 = local_98;
        lVar10 = (longlong)iStack_7c;
        lVar1 = *local_98 + lVar10 * 0x28;
        if (0 < *(int *)(*local_98 + 0x18 + lVar10 * 0x28)) {
          FUN_141b79ab0(lVar1 + 0x10,0x3f8000003f800000,1.0 / (float)*(int *)(param_1 + 0x10));
          puStack_c0 = (uint *)((ulonglong)puStack_c0 & 0xffffffff00000000);
          uVar2 = *(undefined8 *)(*plVar14 + lVar10 * 0x28);
          lVar10 = *(longlong *)(param_2 + 0x3090);
          iVar9 = (*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) / 2 + 7;
          local_a0 = CONCAT44(local_a0._4_4_,(int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3);
          iVar9 = (*(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4)) / 2 + 7;
          local_a4 = (int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3;
          local_c8 = &DAT_146a1e3f0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar10 + 0x38,&local_a8,&local_c8);
          plVar14 = (longlong *)0x0;
          if (local_a8 != -1) {
            plVar14 = (longlong *)((longlong)local_a8 * 0x20 + *(longlong *)(lVar10 + 0x38));
          }
          plVar15 = plVar14 + 2;
          if (plVar14 == (longlong *)0x0) {
            plVar15 = (longlong *)0x0;
          }
          lVar10 = *plVar15;
          lVar3 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          uVar4 = *(undefined8 *)(lVar3 + 0x60);
          FRHIComputeShader::UpdateStats(uVar4);
          puVar12 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar12 + 3;
          if (*(undefined8 **)(param_3 + 0x38) < puVar11) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x20);
            puVar12 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar12 + 3;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar11;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          **(undefined8 **)(param_3 + 8) = puVar12;
          *(undefined8 **)(param_3 + 8) = puVar12 + 1;
          puVar12[1] = 0;
          *puVar12 = &PTR_LAB_144d91e50;
          puVar12[2] = uVar4;
          FUN_141b70270(lVar10,param_3,param_2,uVar2,*(undefined4 *)(lVar1 + 0x18),param_4,param_5,
                        param_6);
          DispatchComputeShader(param_3,lVar10,local_a0 & 0xffffffff,local_a4,1);
          lVar1 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar1 + 0x28) == '\0') {
            FUN_1419f3850(lVar1);
          }
          FRWShaderParameter::UnsetUAV<FRHICommandList>
                    (lVar10 + 0x112,param_3,*(undefined8 *)(lVar1 + 0x60));
          local_a0 = *(undefined8 *)(param_5 + 0x40);
          puVar12 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar12 + 1;
          if (*(undefined8 **)(param_3 + 0x38) < puVar11) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x10);
            puVar12 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar12 + 1;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar11;
          *puVar12 = local_a0;
          puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar13 + 6;
          if (*(undefined8 **)(param_3 + 0x38) < puVar11) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x38);
            puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar13 + 6;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar11;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          **(undefined8 **)(param_3 + 8) = puVar13;
          *(undefined8 **)(param_3 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          *puVar13 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar13 + 2) = 1;
          puVar13[3] = puVar12;
          *(undefined4 *)(puVar13 + 4) = 0;
          *(undefined4 *)((longlong)puVar13 + 0x24) = 3;
          puVar13[5] = 0;
        }
        uStack_80 = uStack_80 & ~uStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while (iStack_7c < (int)local_88[6]);
    }
  }
  return;
}



// FUNCTION 141b5c2b0 FUN_141b5c2b0 body=1601 status=ok
// SIG undefined FUN_141b5c2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b5c2b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [12];
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  uint uStack_190;
  int iStack_18c;
  undefined8 local_188;
  float local_178;
  float fStack_174;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined4 uStack_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong *plStack_120;
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
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  plVar17 = (longlong *)0x0;
  local_160 = param_5;
  local_1b8[0] = 0;
  local_168 = param_6;
  if ((((((DAT_1464c1c74 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) && (DAT_146a153b0 != 0)) &&
       ((iVar14 = *(int *)(param_2 + 0x1a38), local_170 = param_4, iVar9 = FUN_14274f980(param_2),
        2 < iVar14 && (iVar9 == 0)))) &&
      ((0 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c) &&
       ((uVar10 = *(uint *)(param_4 + 0x560), (uVar10 & 0x40) != 0 &&
        (-1 < *(int *)(param_4 + 0x524))))))) &&
     (((uVar10 & 0x10) != 0 &&
      ((*(longlong *)(param_4 + 0x38) == param_2 && ((uVar10 >> 9 & 1) != 0)))))) {
    local_158 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1170);
    iVar9 = (int)*(undefined8 *)(local_158 + 0x58);
    local_178 = 1.0 / (float)iVar9;
    iVar14 = (int)((ulonglong)*(undefined8 *)(local_158 + 0x58) >> 0x20);
    fStack_174 = 1.0 / (float)iVar14;
    FUN_141a19150(param_3,*(undefined8 *)(*(longlong *)(local_158 + 0x48) + 8),0,0);
    local_e8 = 0;
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
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
    FUN_14049afe0(param_3,&local_128);
    puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar12;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar13;
    *(undefined8 **)(param_3 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f59420;
    puVar13[2] = 0;
    *(undefined4 *)(puVar13 + 3) = 0;
    *(int *)((longlong)puVar13 + 0x1c) = iVar9;
    *(int *)(puVar13 + 4) = iVar14;
    *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
    uStack_f0 = FUN_140985530();
    local_e8 = FUN_1409853f0();
    local_f8 = FUN_141b65330();
    uVar11 = DAT_1464c1ea8;
    puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar12;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar13;
    *(undefined8 **)(param_3 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar13 + 2) = 0;
    puVar13[3] = uVar11;
    *(undefined4 *)(puVar13 + 4) = 0;
    FUN_141b535c0(&local_1b0,*(undefined8 *)(param_2 + 0x3090));
    lVar3 = *(longlong *)(param_2 + 0x3090);
    local_1a8 = (longlong *)&DAT_146a1e150;
    uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x38,local_1b8,&local_1a8);
    lVar8 = local_1b0;
    plVar18 = plVar17;
    if (local_1b8[0] != -1) {
      plVar18 = (longlong *)((longlong)local_1b8[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
    }
    plVar15 = plVar18 + 2;
    if (plVar18 == (longlong *)0x0) {
      plVar15 = plVar17;
    }
    lVar3 = *plVar15;
    local_128 = DAT_146534c78;
    if (local_1b0 == 0) {
      local_1b0 = 0;
      plVar18 = (longlong *)0x1;
      plStack_120 = plVar17;
    }
    else {
      lVar4 = *(longlong *)(local_1b0 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      plStack_120 = *(longlong **)(lVar4 + 0x38);
      plVar18 = plVar17;
    }
    uVar11 = 0;
    if (plVar18 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
    }
    bVar6 = false;
    if (lVar3 == 0) {
      bVar6 = true;
      local_1b0 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x40);
    }
    local_108 = uVar11;
    if (bVar6) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
    }
    local_dc = local_dc & 0xffffffff00000000;
    FUN_141ed6ac0(param_3,&local_128,2,1);
    lVar4 = local_170;
    local_150 = (longlong *)(param_1 + 0x28);
    iVar14 = *(int *)(param_1 + 0x50);
    puStack_140 = (uint *)(param_1 + 0x38);
    local_1a8 = (longlong *)0x100000000;
    local_198._4_4_ = 0;
    uStack_190 = 0;
    if (iVar14 != 0) {
      puVar16 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar16 = puStack_140;
      }
      uVar10 = *puVar16;
      iVar9 = 0;
      uStack_190 = 0;
      while (uVar10 == 0) {
        uStack_190 = uStack_190 + 0x20;
        uVar7 = (ulonglong)local_1a8 >> 0x20;
        local_1a8 = (longlong *)CONCAT44((int)uVar7,iVar9 + 1);
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141b5c734;
        uVar10 = puVar16[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_1a8 = (longlong *)CONCAT44(uVar10,SUB84(local_1a8,0));
      if (uVar10 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_198._4_4_ = (uStack_190 - iVar9) + 0x1f;
      if (iVar14 < local_198._4_4_) {
LAB_141b5c734:
        local_198._4_4_ = iVar14;
      }
    }
    uStack_138 = 0xffffffff;
    iStack_134 = local_198._4_4_;
    iStack_130 = uStack_190;
    uStack_12c = iStack_18c;
    uStack_148 = local_1a8;
    uStack_1a0 = (longlong)local_1a8;
    auVar5._4_8_ = local_1a8;
    auVar5._0_4_ = local_198._4_4_;
    auVar19._0_8_ = auVar5._0_8_ << 0x20;
    auVar19._8_4_ = uStack_190;
    auVar19._12_4_ = iStack_18c;
    local_188 = auVar19._8_8_;
    uStack_190 = 0xffffffff;
    iStack_18c = local_198._4_4_;
    if (local_198._4_4_ < iVar14) {
      uVar11 = CONCAT44(fStack_174,local_178);
      local_1a8 = local_150;
      local_198 = puStack_140;
      do {
        lVar1 = *local_1a8 + (longlong)iStack_18c * 0x28;
        if (0 < *(int *)(*local_1a8 + 0x18 + (longlong)iStack_18c * 0x28)) {
          FUN_141b79ab0(lVar1 + 0x10,uVar11,1.0 / (float)*(int *)(param_1 + 0x10));
          FUN_141b716b0(lVar8,param_3,param_2,*(undefined4 *)(lVar1 + 0x18));
          local_1c0 = local_168;
          local_1c8 = local_160;
          local_1d0 = local_158;
          local_1d8 = *(undefined4 *)(lVar1 + 0x18);
          FUN_141b72a60(lVar3,param_3,param_2,lVar4);
          uVar2 = *(undefined4 *)(lVar1 + 0x18);
          puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 4;
          if (*(undefined8 **)(param_3 + 0x38) < puVar12) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar12 = puVar13 + 4;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar12;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          **(undefined8 **)(param_3 + 8) = puVar13;
          *(undefined8 **)(param_3 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          *puVar13 = &PTR_LAB_143f59410;
          puVar13[2] = 0;
          *(undefined4 *)(puVar13 + 3) = 2;
          *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar2;
        }
        uStack_190 = uStack_190 & ~uStack_1a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a0);
      } while (iStack_18c < (int)local_198[6]);
    }
  }
  return;
}



// FUNCTION 141b5c900 FUN_141b5c900 body=1564 status=ok
// SIG undefined FUN_141b5c900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b5c900(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [12];
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  longlong local_1b0;
  int local_1a8 [2];
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint uStack_180;
  int iStack_17c;
  undefined8 local_178;
  float local_168;
  float fStack_164;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined4 uStack_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong *plStack_120;
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
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar17 = (longlong *)0x0;
  local_1a8[0] = 0;
  if ((((((DAT_1464c1c74 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) && (DAT_146a153b0 != 0)) &&
       ((iVar14 = *(int *)(param_2 + 0x1a38), local_160 = param_4, iVar9 = FUN_14274f980(param_2),
        2 < iVar14 && (iVar9 == 0)))) &&
      ((0 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c) &&
       ((uVar10 = *(uint *)(param_4 + 0x560), (uVar10 & 0x40) != 0 &&
        (-1 < *(int *)(param_4 + 0x524))))))) &&
     (((uVar10 & 0x10) != 0 &&
      ((*(longlong *)(param_4 + 0x38) == param_2 && ((uVar10 >> 9 & 1) == 0)))))) {
    local_158 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1170);
    iVar9 = (int)*(undefined8 *)(local_158 + 0x58);
    local_168 = 1.0 / (float)iVar9;
    iVar14 = (int)((ulonglong)*(undefined8 *)(local_158 + 0x58) >> 0x20);
    fStack_164 = 1.0 / (float)iVar14;
    FUN_141a19150(param_3,*(undefined8 *)(*(longlong *)(local_158 + 0x48) + 8),0,0);
    local_e8 = 0;
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
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
    FUN_14049afe0(param_3,&local_128);
    puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar12;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar13;
    *(undefined8 **)(param_3 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f59420;
    puVar13[2] = 0;
    *(undefined4 *)(puVar13 + 3) = 0;
    *(int *)((longlong)puVar13 + 0x1c) = iVar9;
    *(int *)(puVar13 + 4) = iVar14;
    *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
    uStack_f0 = FUN_140985530();
    local_e8 = FUN_1409853f0();
    local_f8 = FUN_141b65330();
    uVar11 = DAT_1464c1ea8;
    puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 5;
    if (*(undefined8 **)(param_3 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 5;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar12;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    **(undefined8 **)(param_3 + 8) = puVar13;
    *(undefined8 **)(param_3 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar13 + 2) = 0;
    puVar13[3] = uVar11;
    *(undefined4 *)(puVar13 + 4) = 0;
    FUN_141b535c0(&local_1a0,*(undefined8 *)(param_2 + 0x3090));
    lVar3 = *(longlong *)(param_2 + 0x3090);
    local_198 = (longlong *)&DAT_146a1e000;
    uStack_190 = (ulonglong)uStack_190._4_4_ << 0x20;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x38,local_1a8,&local_198);
    lVar8 = local_1a0;
    plVar18 = plVar17;
    if (local_1a8[0] != -1) {
      plVar18 = (longlong *)((longlong)local_1a8[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
    }
    plVar15 = plVar18 + 2;
    if (plVar18 == (longlong *)0x0) {
      plVar15 = plVar17;
    }
    lVar3 = *plVar15;
    local_128 = DAT_146534c78;
    if (local_1a0 == 0) {
      local_1a0 = 0;
      plVar18 = (longlong *)0x1;
      plStack_120 = plVar17;
    }
    else {
      lVar4 = *(longlong *)(local_1a0 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      plStack_120 = *(longlong **)(lVar4 + 0x38);
      plVar18 = plVar17;
    }
    uVar11 = 0;
    if (plVar18 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
    }
    bVar6 = false;
    if (lVar3 == 0) {
      bVar6 = true;
      local_1a0 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x40);
    }
    local_108 = uVar11;
    if (bVar6) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
    }
    local_dc = local_dc & 0xffffffff00000000;
    FUN_141ed6ac0(param_3,&local_128,2,1);
    lVar4 = local_160;
    local_150 = (longlong *)(param_1 + 0x28);
    iVar14 = *(int *)(param_1 + 0x50);
    puStack_140 = (uint *)(param_1 + 0x38);
    local_198 = (longlong *)0x100000000;
    local_188._4_4_ = 0;
    uStack_180 = 0;
    if (iVar14 != 0) {
      puVar16 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar16 = puStack_140;
      }
      uVar10 = *puVar16;
      iVar9 = 0;
      uStack_180 = 0;
      while (uVar10 == 0) {
        uStack_180 = uStack_180 + 0x20;
        uVar7 = (ulonglong)local_198 >> 0x20;
        local_198 = (longlong *)CONCAT44((int)uVar7,iVar9 + 1);
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141b5cd74;
        uVar10 = puVar16[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_198 = (longlong *)CONCAT44(uVar10,SUB84(local_198,0));
      if (uVar10 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_188._4_4_ = (uStack_180 - iVar9) + 0x1f;
      if (iVar14 < local_188._4_4_) {
LAB_141b5cd74:
        local_188._4_4_ = iVar14;
      }
    }
    uStack_138 = 0xffffffff;
    iStack_134 = local_188._4_4_;
    iStack_130 = uStack_180;
    uStack_12c = iStack_17c;
    uStack_148 = local_198;
    uStack_190 = (longlong)local_198;
    auVar5._4_8_ = local_198;
    auVar5._0_4_ = local_188._4_4_;
    auVar19._0_8_ = auVar5._0_8_ << 0x20;
    auVar19._8_4_ = uStack_180;
    auVar19._12_4_ = iStack_17c;
    local_178 = auVar19._8_8_;
    uStack_180 = 0xffffffff;
    iStack_17c = local_188._4_4_;
    if (local_188._4_4_ < iVar14) {
      uVar11 = CONCAT44(fStack_164,local_168);
      local_198 = local_150;
      local_188 = puStack_140;
      do {
        lVar1 = *local_198 + (longlong)iStack_17c * 0x28;
        if (0 < *(int *)(*local_198 + 0x18 + (longlong)iStack_17c * 0x28)) {
          FUN_141b79ab0(lVar1 + 0x10,uVar11,1.0 / (float)*(int *)(param_1 + 0x10));
          FUN_141b716b0(lVar8,param_3,param_2,*(undefined4 *)(lVar1 + 0x18));
          local_1b0 = local_158;
          local_1b8 = *(undefined4 *)(lVar1 + 0x18);
          FUN_141b72e20(lVar3,param_3,param_2,lVar4);
          uVar2 = *(undefined4 *)(lVar1 + 0x18);
          puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 4;
          if (*(undefined8 **)(param_3 + 0x38) < puVar12) {
            FMemStackBase::AllocateNewChunk(param_3 + 0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar12 = puVar13 + 4;
          }
          *(undefined8 **)(param_3 + 0x30) = puVar12;
          *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
          **(undefined8 **)(param_3 + 8) = puVar13;
          *(undefined8 **)(param_3 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          *puVar13 = &PTR_LAB_143f59410;
          puVar13[2] = 0;
          *(undefined4 *)(puVar13 + 3) = 2;
          *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar2;
        }
        uStack_180 = uStack_180 & ~uStack_190._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
      } while (iStack_17c < (int)local_188[6]);
    }
  }
  return;
}



// FUNCTION 141b5cf20 FUN_141b5cf20 body=6233 status=ok
// SIG undefined FUN_141b5cf20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b5cf20(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,float param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  bool bVar7;
  float *pfVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  void *_Src;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  float *pfVar28;
  float *pfVar29;
  int *piVar30;
  int iVar31;
  ulonglong uVar32;
  float *pfVar33;
  ulonglong uVar34;
  longlong *plVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint local_234;
  int local_220;
  float local_218;
  int local_214;
  undefined8 local_210;
  float local_1f8;
  float local_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  undefined8 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  int local_1a0;
  int local_19c;
  float local_198;
  ulonglong local_190;
  undefined8 local_188;
  float local_180;
  float *local_178;
  int local_170;
  int iStack_16c;
  float local_168;
  int local_160;
  int local_15c;
  int iStack_158;
  undefined8 local_150;
  float local_144;
  float fStack_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  ulonglong local_128;
  longlong *local_120;
  float local_110;
  undefined8 local_108;
  float local_f8;
  
  iVar17 = *(int *)(param_4 + 0x20);
  iVar10 = iVar17 + param_5;
  *(int *)(param_4 + 0x20) = iVar10;
  if (*(int *)(param_4 + 0x24) < iVar10) {
    FUN_140ae1ad0(param_4 + 0x18);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar17 * 200 + *(longlong *)(param_4 + 0x18)),0,
             (longlong)param_5 * 200);
  iVar17 = *(int *)(param_4 + 0x10);
  plVar35 = (longlong *)(param_4 + 8);
  iVar10 = iVar17 + param_5;
  *(int *)(param_4 + 0x10) = iVar10;
  local_120 = plVar35;
  if (*(int *)(param_4 + 0x14) < iVar10) {
    FUN_140ae1ad0(plVar35);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar17 * 200 + *plVar35),0,(longlong)param_5 * 200);
  pfVar22 = (float *)0x0;
  local_178 = (float *)0x0;
  local_1b8 = (float *)0x0;
  local_218 = 0.0;
  plVar18 = *(longlong **)(param_3 + 0x1610);
  fStack_1ac = 0.0;
  pfVar28 = (float *)((longlong)*(int *)(param_3 + 0x1618) & 0x1fffffffffffffff);
  if (plVar18 + *(int *)(param_3 + 0x1618) < plVar18) {
    pfVar28 = pfVar22;
  }
  pfVar29 = pfVar22;
  pfVar33 = pfVar22;
  pfVar8 = local_178;
  if (pfVar28 != (float *)0x0) {
    do {
      lVar11 = *plVar18;
      cVar9 = (**(code **)(**(longlong **)(lVar11 + 8) + 0xa0))();
      if (cVar9 != '\0') {
        lVar11 = *(longlong *)(lVar11 + 8);
        lVar24 = (longlong)(int)local_218;
        local_1f8 = (float)CONCAT31(local_1f8._1_3_,1);
        fVar51 = *(float *)(lVar11 + 0xc0);
        fStack_1b0 = (float)((int)local_218 + 1);
        fVar39 = *(float *)(lVar11 + 0xcc);
        fVar38 = *(float *)(lVar11 + 0xd0);
        fVar42 = *(float *)(lVar11 + 0xc4);
        fVar37 = *(float *)(lVar11 + 0xd4) + *(float *)(lVar11 + 200);
        fVar46 = *(float *)(lVar11 + 200) - *(float *)(lVar11 + 0xd4);
        local_210 = CONCAT44(fVar42 - fVar38,fVar51 - fVar39);
        local_180 = fVar46;
        local_168 = fVar37;
        if ((int)pfVar33 < (int)fStack_1b0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_1b8,local_218);
          pfVar33 = (float *)(ulonglong)(uint)fStack_1ac;
          pfVar29 = local_1b8;
        }
        *(undefined8 *)(pfVar29 + lVar24 * 7) = local_210;
        *(ulonglong *)(pfVar29 + lVar24 * 7 + 2) = CONCAT44(fVar39 + fVar51,fVar46);
        *(ulonglong *)(pfVar29 + lVar24 * 7 + 4) = CONCAT44(fVar37,fVar38 + fVar42);
        pfVar29[lVar24 * 7 + 6] = local_1f8;
        local_218 = fStack_1b0;
      }
      plVar18 = plVar18 + 1;
      pfVar22 = (float *)((longlong)pfVar22 + 1);
      pfVar8 = pfVar29;
    } while (pfVar22 != pfVar28);
  }
  local_178 = pfVar8;
  uVar25 = 0;
  if (*(longlong *)(param_2 + 0x1ab0) == 0) {
    uVar23 = uVar25;
    if (0 < param_5) {
      do {
        uVar20 = (uint)(DAT_1464c1c54 == 0);
        do {
          if (uVar20 == 0) {
            lVar11 = *plVar35;
          }
          else {
            lVar11 = *(longlong *)(param_4 + 0x18);
          }
          AllocateClipmapTexture(param_1,uVar25,uVar20,uVar23 + 0xc0 + lVar11);
          *(undefined8 *)(lVar11 + 0x1c + uVar23) = _DAT_1468b5d90;
          *(undefined4 *)(lVar11 + 0x24 + uVar23) = DAT_1468b5d98;
          fVar39 = DAT_1464c1c60;
          fVar38 = _guard_xfg_dispatch_icall_nop(DAT_1464c1c60,3.0);
          fVar51 = *(float *)(param_3 + 0x5fec);
          fVar39 = _guard_xfg_dispatch_icall_nop(fVar39,(float)(int)uVar25);
          local_180 = *(float *)(param_2 + 0x8e4);
          fVar39 = (fVar51 / fVar38) * fVar39;
          local_1f8 = (float)CONCAT31(local_1f8._1_3_,1);
          fVar51 = (fVar39 + fVar39) / (float)DAT_1464c1c64;
          fVar37 = 1.0 / fVar51;
          fVar38 = (float)*(undefined8 *)(param_2 + 0x8dc) * fVar37;
          fVar42 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x8dc) >> 0x20) * fVar37;
          fVar53 = (float)((int)ROUND((fVar38 + fVar38) - 0.5) >> 1) * fVar51;
          fVar46 = fVar53 + fVar39;
          fVar53 = fVar53 - fVar39;
          fVar42 = (float)((int)ROUND((fVar42 + fVar42) - 0.5) >> 1) * fVar51;
          fVar52 = fVar42 - fVar39;
          fVar42 = fVar42 + fVar39;
          fVar51 = (float)((int)ROUND((local_180 * fVar37 + local_180 * fVar37) - 0.5) >> 1) *
                   fVar51;
          fVar38 = fVar51 - fVar39;
          fVar51 = fVar51 + fVar39;
          pfVar28 = (float *)(lVar11 + uVar23);
          *pfVar28 = fVar53;
          pfVar28[1] = fVar52;
          pfVar28[2] = fVar38;
          pfVar28[3] = fVar46;
          *(ulonglong *)(lVar11 + 0x10 + uVar23) = CONCAT44(fVar51,fVar42);
          *(float *)(lVar11 + 0x18 + uVar23) = local_1f8;
          iVar10 = DAT_1464c1c64;
          lVar11 = lVar11 + 0x28 + uVar23;
          iVar17 = *(int *)(lVar11 + 0x90);
          iVar31 = iVar17 + 1;
          *(int *)(lVar11 + 0x90) = iVar31;
          local_168 = fVar51;
          local_110 = fVar38;
          if (*(int *)(lVar11 + 0x94) < iVar31) {
            TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(lVar11);
          }
          lVar24 = *(longlong *)(lVar11 + 0x88);
          if (*(longlong *)(lVar11 + 0x88) == 0) {
            lVar24 = lVar11;
          }
          uVar20 = uVar20 + 1;
          lVar11 = (longlong)iVar17 * 0x2c;
          pfVar28 = (float *)(lVar24 + lVar11);
          *pfVar28 = fVar53;
          pfVar28[1] = fVar52;
          pfVar28[2] = fVar38;
          pfVar28[3] = fVar46;
          puVar1 = (undefined8 *)(lVar24 + 0x10 + lVar11);
          *puVar1 = CONCAT44(fVar51,fVar42);
          puVar1[1] = CONCAT44(iVar10,local_1f8);
          *(ulonglong *)(lVar24 + 0x20 + lVar11) = CONCAT44(iVar10,iVar10);
          *(undefined4 *)(lVar24 + 0x28 + lVar11) = 3;
        } while (uVar20 < 2);
        uVar20 = (int)uVar25 + 1;
        uVar25 = (ulonglong)uVar20;
        uVar23 = uVar23 + 200;
      } while ((int)uVar20 < param_5);
    }
  }
  else {
    piVar19 = (int *)(*(longlong *)(param_2 + 0x1ab0) + 0x1548);
    *piVar19 = *piVar19 + 1;
    if (4 < *(int *)(*(longlong *)(param_2 + 0x1ab0) + 0x1548)) {
      *(undefined4 *)(*(longlong *)(param_2 + 0x1ab0) + 0x1548) = 0;
    }
    local_234 = 0;
    if (0 < param_5) {
      do {
        fVar39 = DAT_1464c1c60;
        piVar30 = (int *)(*(longlong *)(param_2 + 0x1ab0) + (longlong)(int)uVar25 * 0x58 + 0x13e8);
        fVar38 = _guard_xfg_dispatch_icall_nop(DAT_1464c1c60,3.0);
        fVar51 = *(float *)(param_3 + 0x5fec);
        fVar39 = _guard_xfg_dispatch_icall_nop(fVar39,(float)(int)uVar25);
        fVar39 = (fVar51 / fVar38) * fVar39;
        piVar19 = piVar30 + 0xc;
        bVar7 = false;
        uVar20 = 0;
        fVar51 = (fVar39 + fVar39) / (float)DAT_1464c1c64;
        local_198 = fVar39;
        do {
          uVar25 = 1;
          if (DAT_1464c1c54 != 0) {
            uVar25 = (ulonglong)uVar20;
          }
          iVar17 = *(int *)(param_3 + 8 + (uVar25 + 0x177) * 0x10);
          if (iVar17 != 0) {
            iVar10 = *piVar19;
            if (piVar19[1] < iVar10 + iVar17) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(piVar19 + -2);
              iVar10 = *piVar19;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar10 * 0x10 + *(longlong *)(piVar19 + -2)),
                       *(void **)(param_3 + (uVar25 + 0x177) * 0x10),(longlong)iVar17 << 4);
            *piVar19 = *piVar19 + iVar17;
          }
          if (((uVar20 == 1) || (DAT_1464c1c54 != 0)) &&
             ((*(longlong **)(piVar19 + 2) == (longlong *)0x0 ||
              (lVar11 = (**(code **)(**(longlong **)(piVar19 + 2) + 0x10))(),
              *(int *)(lVar11 + 0x14) != DAT_1464c1c64)))) {
            AllocateClipmapTexture(param_1,local_234);
            bVar7 = true;
          }
          uVar20 = uVar20 + 1;
          piVar19 = piVar19 + 6;
        } while (uVar20 < 2);
        if ((((bVar7) || (*(char *)(*(longlong *)(param_2 + 0x1ab0) + 0x13e0) == '\0')) ||
            (param_6 != (float)piVar30[6])) ||
           ((*(float *)(param_3 + 0x5fec) != (float)piVar30[7] || (piVar30[8] != DAT_1464c1c54)))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if ((local_234 == 0) || (DAT_1464c1c5c == 0)) {
          iVar17 = 1;
LAB_141b5d3c6:
          iVar10 = 0;
        }
        else {
          if (local_234 == 1) {
            iVar17 = 2;
            goto LAB_141b5d3c6;
          }
          iVar17 = 4;
          if (local_234 == 2) {
            iVar10 = 1;
          }
          else {
            iVar10 = 3;
          }
        }
        if ((*(int *)(*(longlong *)(param_2 + 0x1ab0) + 0x1548) % iVar17 == iVar10) || (bVar7)) {
          local_f8 = *(float *)(param_2 + 0x8e4);
          fVar37 = 1.0 / fVar51;
          local_1f8 = (float)CONCAT31(local_1f8._1_3_,1);
          fVar38 = fVar37 * (float)*(undefined8 *)(param_2 + 0x8dc);
          fVar42 = fVar37 * (float)((ulonglong)*(undefined8 *)(param_2 + 0x8dc) >> 0x20);
          local_1a0 = (int)ROUND((fVar38 + fVar38) - 0.5) >> 1;
          iStack_16c = (int)ROUND((fVar42 + fVar42) - 0.5) >> 1;
          fVar52 = (float)local_1a0 * fVar51 + fVar39;
          fVar38 = (float)local_1a0 * fVar51 - local_198;
          fVar39 = (float)iStack_16c * fVar51 + fVar39;
          fVar46 = (float)iStack_16c * fVar51 - local_198;
          local_19c = (int)ROUND((local_f8 * fVar37 + local_f8 * fVar37) - 0.5) >> 1;
          local_210 = CONCAT44(fVar46,fVar38);
          fVar42 = (float)local_19c * fVar51 - local_198;
          fVar53 = (float)local_19c * fVar51 + local_198;
          if ((DAT_1464c1c58 == 0) || (bVar7)) {
            *piVar30 = local_1a0;
            bVar7 = false;
            piVar30[1] = iStack_16c;
            piVar30[2] = local_19c;
            *(undefined1 *)(*(longlong *)(param_2 + 0x1ab0) + 0x13e0) = 1;
          }
          else {
            bVar7 = true;
          }
          local_108 = CONCAT44(iStack_16c,local_1a0);
          local_1a8 = CONCAT44(fVar53,fVar39);
          local_128 = (ulonglong)(DAT_1464c1c54 == 0);
          local_1b8 = (float *)CONCAT44(fVar46,fVar38);
          uVar25 = local_128;
          fVar45 = fVar38;
          fVar44 = fVar46;
          fVar48 = fVar42;
          fVar49 = fVar52;
          fStack_1b0 = fVar42;
          fStack_1ac = fVar52;
          local_170 = local_1a0;
          local_160 = iStack_16c;
          do {
            uVar6 = local_1a8;
            iVar17 = DAT_1464c1c64;
            lVar11 = (longlong)(int)local_234 * 200;
            if ((int)local_128 == 0) {
              lVar24 = *plVar35;
            }
            else {
              lVar24 = *(longlong *)(param_4 + 0x18);
            }
            lVar24 = lVar11 + lVar24;
            local_190 = uVar25;
            if ((bVar7) && (piVar30[uVar25 * 6 + 0xc] < 100)) {
              uVar20 = local_1a0 - piVar30[3];
              uVar21 = local_19c - piVar30[5];
              local_150._4_4_ = (int)((ulonglong)local_108 >> 0x20);
              bVar36 = true;
              local_150 = CONCAT44(local_150._4_4_ - piVar30[4],uVar20);
              if (((int)local_128 == 0) || (DAT_1464c1c54 == 0)) {
                lVar11 = lVar24 + 0x28;
                iVar31 = (uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f);
                iVar10 = DAT_1464c1c64;
                if (iVar31 <= DAT_1464c1c64) {
                  iVar10 = iVar31;
                }
                fStack_1e4 = fVar49;
                if ((int)uVar20 < 1) {
                  local_1f0 = fVar45;
                  if (((int)uVar20 < 0) &&
                     (fStack_1e4 = fVar38 - (float)(int)uVar20 * fVar51, fVar52 <= fStack_1e4)) {
                    fStack_1e4 = fVar52;
                  }
                }
                else {
                  local_1f0 = fVar52 - (float)(int)uVar20 * fVar51;
                  if (local_1f0 <= fVar38) {
                    local_1f0 = fVar38;
                  }
                }
                if (0 < iVar10) {
                  iVar31 = *(int *)(lVar24 + 0xb8);
                  *(int *)(lVar24 + 0xb8) = iVar31 + 1;
                  fVar43 = fVar44;
                  fVar47 = fVar48;
                  if (*(int *)(lVar24 + 0xbc) < iVar31 + 1) {
                    TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
                              (lVar11,iVar31);
                    fVar45 = (float)local_1b8;
                    fVar43 = local_1b8._4_4_;
                    fVar47 = fStack_1b0;
                    fVar49 = fStack_1ac;
                  }
                  auVar4._8_4_ = local_1f8;
                  auVar4._0_8_ = uVar6;
                  auVar4._12_4_ = iVar10;
                  lVar14 = *(longlong *)(lVar24 + 0xb0);
                  if (*(longlong *)(lVar24 + 0xb0) == 0) {
                    lVar14 = lVar11;
                  }
                  lVar27 = (longlong)iVar31 * 0x2c;
                  *(undefined8 *)(lVar14 + lVar27) = CONCAT44(fVar44,local_1f0);
                  ((undefined8 *)(lVar14 + lVar27))[1] = CONCAT44(fStack_1e4,fVar48);
                  *(undefined1 (*) [16])(lVar14 + 0x10 + lVar27) = auVar4;
                  *(ulonglong *)(lVar14 + 0x20 + lVar27) = CONCAT44(iVar17,iVar17);
                  *(undefined4 *)(lVar14 + 0x28 + lVar27) = 3;
                  fVar44 = fVar43;
                  fVar48 = fVar47;
                }
                iVar10 = DAT_1464c1c64;
                uVar20 = (uint)((ulonglong)local_150 >> 0x20);
                local_1e0 = (float)local_1a8;
                fStack_1dc = (float)((ulonglong)local_1a8 >> 0x20);
                iVar31 = (uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f);
                iVar17 = DAT_1464c1c64;
                if (iVar31 <= DAT_1464c1c64) {
                  iVar17 = iVar31;
                }
                if (uVar20 == 0 || local_150 < 0) {
                  fVar43 = fVar44;
                  if ((local_150 < 0) &&
                     (local_1e0 = fVar46 - (float)(int)uVar20 * fVar51, fVar39 <= local_1e0)) {
                    local_1e0 = fVar39;
                  }
                }
                else {
                  fVar43 = fVar39 - (float)(int)uVar20 * fVar51;
                  if (fVar43 <= fVar46) {
                    fVar43 = fVar46;
                  }
                }
                fVar47 = fVar45;
                fStack_1e8 = fVar48;
                fVar50 = fVar49;
                if (0 < iVar17) {
                  iVar31 = *(int *)(lVar24 + 0xb8);
                  *(int *)(lVar24 + 0xb8) = iVar31 + 1;
                  if (*(int *)(lVar24 + 0xbc) < iVar31 + 1) {
                    TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
                              (lVar11,iVar31);
                    fVar47 = (float)local_1b8;
                    fVar44 = local_1b8._4_4_;
                    fStack_1e8 = fStack_1b0;
                    fVar50 = fStack_1ac;
                  }
                  lVar14 = *(longlong *)(lVar24 + 0xb0);
                  if (*(longlong *)(lVar24 + 0xb0) == 0) {
                    lVar14 = lVar11;
                  }
                  lVar27 = (longlong)iVar31 * 0x2c;
                  pfVar28 = (float *)(lVar14 + lVar27);
                  *pfVar28 = fVar45;
                  pfVar28[1] = fVar43;
                  pfVar28[2] = fVar48;
                  pfVar28[3] = fVar49;
                  puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar27);
                  *puVar1 = CONCAT44(fStack_1dc,local_1e0);
                  puVar1[1] = CONCAT44(iVar10,local_1f8);
                  *(ulonglong *)(lVar14 + 0x20 + lVar27) = CONCAT44(iVar10,iVar17);
                  *(undefined4 *)(lVar14 + 0x28 + lVar27) = 3;
                }
                iVar17 = DAT_1464c1c64;
                iVar31 = (uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f);
                local_1e0 = (float)local_1a8;
                fStack_1dc = (float)((ulonglong)local_1a8 >> 0x20);
                iVar10 = DAT_1464c1c64;
                if (iVar31 <= DAT_1464c1c64) {
                  iVar10 = iVar31;
                }
                if ((int)uVar21 < 1) {
                  if (((int)uVar21 < 0) &&
                     (fStack_1dc = fVar42 - (float)(int)uVar21 * fVar51, fVar53 <= fStack_1dc)) {
                    fStack_1dc = fVar53;
                  }
                }
                else {
                  fStack_1e8 = fVar53 - (float)(int)uVar21 * fVar51;
                  if (fStack_1e8 <= fVar42) {
                    fStack_1e8 = fVar42;
                  }
                }
                if (0 < iVar10) {
                  iVar31 = *(int *)(lVar24 + 0xb8);
                  *(int *)(lVar24 + 0xb8) = iVar31 + 1;
                  if (*(int *)(lVar24 + 0xbc) < iVar31 + 1) {
                    TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
                              (lVar11,iVar31);
                  }
                  lVar14 = *(longlong *)(lVar24 + 0xb0);
                  if (*(longlong *)(lVar24 + 0xb0) == 0) {
                    lVar14 = lVar11;
                  }
                  lVar11 = (longlong)iVar31 * 0x2c;
                  pfVar28 = (float *)(lVar14 + lVar11);
                  *pfVar28 = fVar47;
                  pfVar28[1] = fVar44;
                  pfVar28[2] = fStack_1e8;
                  pfVar28[3] = fVar50;
                  puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar11);
                  *puVar1 = CONCAT44(fStack_1dc,local_1e0);
                  puVar1[1] = CONCAT44(iVar17,local_1f8);
                  *(ulonglong *)(lVar14 + 0x20 + lVar11) = CONCAT44(iVar10,iVar17);
                  *(undefined4 *)(lVar14 + 0x28 + lVar11) = 3;
                }
              }
              else {
                lVar14 = *(longlong *)(param_4 + 8);
                iVar17 = *(int *)(lVar11 + 0xb8 + lVar14);
                if (iVar17 != 0) {
                  iVar10 = *(int *)(lVar24 + 0xb8);
                  if (*(int *)(lVar24 + 0xbc) < iVar17 + iVar10) {
                    FUN_141b6cdb0(lVar24 + 0x28);
                    iVar10 = *(int *)(lVar24 + 0xb8);
                  }
                  _Src = *(void **)(lVar11 + 0xb0 + lVar14);
                  if (_Src == (void *)0x0) {
                    _Src = (void *)(lVar14 + 0x28 + lVar11);
                  }
                  lVar11 = *(longlong *)(lVar24 + 0xb0);
                  if (*(longlong *)(lVar24 + 0xb0) == 0) {
                    lVar11 = lVar24 + 0x28;
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar11 + (longlong)iVar10 * 0x2c),_Src,(longlong)iVar17 * 0x2c
                            );
                  *(int *)(lVar24 + 0xb8) = *(int *)(lVar24 + 0xb8) + iVar17;
                }
              }
              lVar11 = lVar24 + 0x28;
              _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
              uVar23 = local_190;
              iVar17 = 0;
              if (0 < piVar30[uVar25 * 6 + 0xc]) {
                do {
                  AddUpdateRegionForPrimitive
                            ((longlong)iVar17 * 0x10 + *(longlong *)(piVar30 + uVar23 * 6 + 10));
                  iVar17 = iVar17 + 1;
                } while (iVar17 < piVar30[uVar25 * 6 + 0xc]);
              }
              uVar25 = 0;
              iVar17 = *(int *)(lVar24 + 0xb8);
              local_214 = 0;
              if (0 < iVar17) {
                iVar10 = 1;
                uVar23 = uVar25;
                uVar34 = uVar25;
                do {
                  uVar26 = 0;
                  iVar31 = (int)uVar34;
                  lVar14 = *(longlong *)(lVar24 + 0xb0);
                  if (*(longlong *)(lVar24 + 0xb0) == 0) {
                    lVar14 = lVar11;
                  }
                  if (0 < iVar17) {
                    pfVar28 = (float *)(lVar14 + 4);
                    do {
                      if (uVar23 != uVar26) {
                        if ((pfVar28[-1] <= *(float *)(uVar25 + lVar14)) &&
                           (*(float *)(uVar25 + lVar14) <= pfVar28[2])) {
                          fVar45 = *(float *)(uVar25 + 4 + lVar14);
                          if ((*pfVar28 <= fVar45) && (fVar45 <= pfVar28[3])) {
                            fVar45 = *(float *)(uVar25 + 8 + lVar14);
                            if (((((pfVar28[1] <= fVar45) && (fVar45 <= pfVar28[4])) &&
                                 (fVar45 = *(float *)(uVar25 + 0xc + lVar14), pfVar28[-1] <= fVar45)
                                 ) && (((fVar45 <= pfVar28[2] &&
                                        (fVar45 = *(float *)(uVar25 + 0x10 + lVar14),
                                        *pfVar28 <= fVar45)) && (fVar45 <= pfVar28[3])))) &&
                               ((fVar45 = *(float *)(uVar25 + 0x14 + lVar14), pfVar28[1] <= fVar45
                                && (fVar45 <= pfVar28[4])))) {
                              iVar17 = *(int *)(lVar24 + 0xb8);
                              iVar13 = (iVar17 - iVar31) + -1;
                              if (iVar13 != 0) {
                                lVar14 = *(longlong *)(lVar24 + 0xb0);
                                if (*(longlong *)(lVar24 + 0xb0) == 0) {
                                  lVar14 = lVar11;
                                }
                                _guard_xfg_dispatch_icall_nop
                                          ((void *)((longlong)iVar31 * 0x2c + lVar14),
                                           (void *)((longlong)iVar10 * 0x2c + lVar14),
                                           (longlong)iVar13 * 0x2c);
                                iVar17 = *(int *)(lVar24 + 0xb8);
                              }
                              *(int *)(lVar24 + 0xb8) = iVar17 + -1;
                              TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::
                              ResizeShrink(lVar11);
                              iVar31 = iVar31 + -1;
                              iVar10 = iVar10 + -1;
                              uVar23 = uVar23 - 1;
                              uVar25 = uVar25 - 0x2c;
                              break;
                            }
                          }
                        }
                      }
                      uVar26 = uVar26 + 1;
                      pfVar28 = pfVar28 + 0xb;
                    } while ((longlong)uVar26 < (longlong)iVar17);
                  }
                  iVar17 = *(int *)(lVar24 + 0xb8);
                  uVar34 = (ulonglong)(iVar31 + 1U);
                  iVar10 = iVar10 + 1;
                  uVar23 = uVar23 + 1;
                  uVar25 = uVar25 + 0x2c;
                } while ((int)(iVar31 + 1U) < iVar17);
              }
              uVar25 = 0;
              if (0 < iVar17) {
                local_220 = 1;
                uVar23 = uVar25;
                uVar34 = uVar25;
                do {
                  uVar26 = 0;
                  iVar10 = (int)uVar25;
                  lVar14 = *(longlong *)(lVar24 + 0xb0);
                  if (*(longlong *)(lVar24 + 0xb0) == 0) {
                    lVar14 = lVar11;
                  }
                  pfVar28 = (float *)(lVar14 + uVar23);
                  uVar25 = uVar26;
                  uVar32 = uVar26;
                  if (0 < iVar17) {
                    do {
                      if (uVar34 != uVar26) {
                        lVar14 = *(longlong *)(lVar24 + 0xb0);
                        if (*(longlong *)(lVar24 + 0xb0) == 0) {
                          lVar14 = lVar11;
                        }
                        pfVar22 = (float *)(lVar14 + uVar25);
                        if ((((*pfVar22 <= pfVar28[3]) && (*pfVar28 <= pfVar22[3])) &&
                            (pfVar22[1] <= pfVar28[4])) &&
                           (((pfVar28[1] <= pfVar22[4] && (pfVar22[2] <= pfVar28[5])) &&
                            (pfVar28[2] <= pfVar22[5])))) {
                          TrimOverlappingAxis(0);
                          if (((pfVar28[5] <= pfVar22[5]) &&
                              (pfVar22[2] < pfVar28[2] || pfVar22[2] == pfVar28[2])) &&
                             ((pfVar28[3] <= pfVar22[3] &&
                              (*pfVar22 < *pfVar28 || *pfVar22 == *pfVar28)))) {
                            fVar45 = pfVar28[1];
                            fVar44 = pfVar22[1];
                            if ((fVar45 < fVar44) || (fVar48 = pfVar22[4], fVar48 < fVar45)) {
                              pfVar28[4] = fVar44;
                            }
                            else {
                              pfVar28[1] = fVar48;
                              fVar44 = pfVar28[4];
                              fVar45 = fVar48;
                            }
                            fVar44 = fVar44 - fVar45;
                            if (fVar44 <= 0.0) {
                              fVar44 = 0.0;
                            }
                            pfVar28[8] = (float)(int)(fVar44 * fVar37 + 0.5);
                          }
                          if ((((pfVar28[3] <= pfVar22[3]) &&
                               (*pfVar22 < *pfVar28 || *pfVar22 == *pfVar28)) &&
                              (pfVar28[4] <= pfVar22[4])) &&
                             (pfVar22[1] < pfVar28[1] || pfVar22[1] == pfVar28[1])) {
                            fVar44 = pfVar28[2];
                            fVar45 = pfVar22[2];
                            if ((fVar44 < fVar45) || (fVar48 = pfVar22[5], fVar48 < fVar44)) {
                              pfVar28[5] = fVar45;
                            }
                            else {
                              pfVar28[2] = fVar48;
                              fVar45 = pfVar28[5];
                              fVar44 = fVar48;
                            }
                            fVar45 = fVar45 - fVar44;
                            if (fVar45 <= 0.0) {
                              fVar45 = 0.0;
                            }
                            pfVar28[9] = (float)(int)(fVar45 * fVar37 + 0.5);
                          }
                          if (((pfVar28[7] == 0.0) || (pfVar28[8] == 0.0)) || (pfVar28[9] == 0.0)) {
                            iVar17 = *(int *)(lVar24 + 0xb8);
                            iVar31 = (iVar17 - iVar10) + -1;
                            if (iVar31 != 0) {
                              lVar14 = *(longlong *)(lVar24 + 0xb0);
                              if (*(longlong *)(lVar24 + 0xb0) == 0) {
                                lVar14 = lVar11;
                              }
                              _guard_xfg_dispatch_icall_nop
                                        ((void *)((longlong)iVar10 * 0x2c + lVar14),
                                         (void *)((longlong)local_220 * 0x2c + lVar14),
                                         (longlong)iVar31 * 0x2c);
                              iVar17 = *(int *)(lVar24 + 0xb8);
                            }
                            *(int *)(lVar24 + 0xb8) = iVar17 + -1;
                            TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::
                            ResizeShrink(lVar11);
                            iVar10 = iVar10 + -1;
                            uVar34 = uVar34 - 1;
                            local_220 = local_220 + -1;
                            uVar23 = uVar23 - 0x2c;
                            iVar17 = *(int *)(lVar24 + 0xb8);
                            break;
                          }
                        }
                      }
                      iVar17 = *(int *)(lVar24 + 0xb8);
                      uVar20 = (int)uVar32 + 1;
                      uVar26 = uVar26 + 1;
                      uVar25 = uVar25 + 0x2c;
                      uVar32 = (ulonglong)uVar20;
                    } while ((int)uVar20 < iVar17);
                  }
                  local_220 = local_220 + 1;
                  uVar25 = (ulonglong)(iVar10 + 1U);
                  uVar34 = uVar34 + 1;
                  uVar23 = uVar23 + 0x2c;
                } while ((int)(iVar10 + 1U) < iVar17);
              }
              lVar14 = 0;
              lVar27 = (longlong)iVar17;
              if (0 < iVar17) {
                lVar16 = *(longlong *)(lVar24 + 0xb0);
                if (*(longlong *)(lVar24 + 0xb0) == 0) {
                  lVar16 = lVar11;
                }
                do {
                  local_214 = local_214 +
                              *(int *)(lVar14 + 0x24 + lVar16) * *(int *)(lVar14 + 0x20 + lVar16) *
                              *(int *)(lVar14 + 0x1c + lVar16);
                  lVar27 = lVar27 + -1;
                  lVar14 = lVar14 + 0x2c;
                } while (lVar27 != 0);
              }
              if (DAT_1464c1c64 * DAT_1464c1c64 * DAT_1464c1c64 <= local_214) {
                *(undefined4 *)(lVar24 + 0xb8) = 0;
                if ((*(int *)(lVar24 + 0xbc) < 0) && (*(int *)(lVar24 + 0xbc) != 0)) {
                  FUN_141b6cdb0(lVar11,0);
                }
                bVar36 = false;
              }
              fVar45 = (float)local_1b8;
              fVar44 = local_1b8._4_4_;
              fVar48 = fStack_1b0;
              fVar49 = fStack_1ac;
            }
            else {
              bVar36 = false;
            }
            uVar25 = local_190;
            uVar6 = local_1a8;
            iVar17 = DAT_1464c1c64;
            if (!bVar36) {
              iVar10 = *(int *)(lVar24 + 0xb8);
              *(int *)(lVar24 + 0xb8) = iVar10 + 1;
              if (*(int *)(lVar24 + 0xbc) < iVar10 + 1) {
                TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
                          (lVar24 + 0x28,iVar10);
                fVar45 = (float)local_1b8;
                fVar44 = local_1b8._4_4_;
                fVar48 = fStack_1b0;
                fVar49 = fStack_1ac;
              }
              auVar5._8_4_ = local_1f8;
              auVar5._0_8_ = uVar6;
              auVar5._12_4_ = iVar17;
              lVar11 = *(longlong *)(lVar24 + 0xb0);
              if (*(longlong *)(lVar24 + 0xb0) == 0) {
                lVar11 = lVar24 + 0x28;
              }
              lVar14 = (longlong)iVar10 * 0x2c;
              pfVar28 = (float *)(lVar11 + lVar14);
              *pfVar28 = fVar45;
              pfVar28[1] = fVar44;
              pfVar28[2] = fVar48;
              pfVar28[3] = fVar49;
              *(undefined1 (*) [16])(lVar11 + 0x10 + lVar14) = auVar5;
              *(ulonglong *)(lVar11 + 0x20 + lVar14) = CONCAT44(iVar17,iVar17);
              *(undefined4 *)(lVar11 + 0x28 + lVar14) = 3;
            }
            uVar23 = 0;
            bVar36 = false;
            if (local_178 != local_178 + (longlong)(int)local_218 * 7) {
              pfVar28 = local_178 + 4;
              do {
                if (((((fVar38 < pfVar28[-1] || fVar38 == pfVar28[-1]) && (pfVar28[-4] <= fVar52))
                     && (fVar46 < *pfVar28 || fVar46 == *pfVar28)) &&
                    ((pfVar28[-3] <= fVar39 && (fVar42 < pfVar28[1] || fVar42 == pfVar28[1])))) &&
                   (pfVar28[-2] <= fVar53)) {
                  bVar36 = true;
                  break;
                }
                pfVar22 = pfVar28 + 3;
                pfVar28 = pfVar28 + 7;
              } while (pfVar22 != local_178 + (longlong)(int)local_218 * 7);
            }
            plVar35 = (longlong *)((uVar25 + 0x36) * 0x10 + *(longlong *)(param_2 + 0x1ab0));
            if (bVar36) {
              puVar15 = (uint *)*plVar35;
              iVar17 = (int)plVar35[1];
              for (puVar12 = puVar15; puVar12 != puVar15 + iVar17; puVar12 = puVar12 + 1) {
                if (*puVar12 == local_234) {
                  if ((int)((longlong)puVar12 - (longlong)puVar15 >> 2) != -1) goto LAB_141b5dfe7;
                  break;
                }
              }
              *(int *)(plVar35 + 1) = iVar17 + 1;
              if (*(int *)((longlong)plVar35 + 0xc) < iVar17 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar35,iVar17);
                fVar45 = (float)local_1b8;
                fVar44 = local_1b8._4_4_;
                fVar48 = fStack_1b0;
                fVar49 = fStack_1ac;
              }
              *(uint *)(*plVar35 + (longlong)iVar17 * 4) = local_234;
LAB_141b5dfe7:
              lVar11 = *(longlong *)(lVar24 + 0xb0);
              if (*(longlong *)(lVar24 + 0xb0) == 0) {
                lVar11 = lVar24 + 0x28;
              }
              lVar24 = (longlong)*(int *)(lVar24 + 0xb8) * 0x2c + lVar11;
              for (; lVar11 != lVar24; lVar11 = lVar11 + 0x2c) {
                *(uint *)(lVar11 + 0x28) = *(uint *)(lVar11 + 0x28) & 0xfffffffd;
              }
            }
            else {
              iVar17 = (int)plVar35[1];
              lVar11 = (longlong)iVar17;
              if (iVar17 == 0) {
                iVar17 = 0;
              }
              else {
                bVar36 = *(uint *)*plVar35 != local_234;
                uVar25 = uVar23;
                uVar34 = uVar23;
                do {
                  iVar10 = (int)uVar25;
                  uVar23 = uVar23 + 1;
                  uVar25 = (ulonglong)(iVar10 + 1);
                  if ((longlong)uVar23 < lVar11) {
                    puVar15 = (uint *)(*plVar35 + uVar23 * 4);
                    do {
                      if (bVar36 != (*puVar15 != local_234)) break;
                      uVar25 = (ulonglong)((int)uVar25 + 1);
                      uVar23 = uVar23 + 1;
                      puVar15 = puVar15 + 1;
                    } while ((longlong)uVar23 < lVar11);
                  }
                  iVar31 = (int)uVar25 - iVar10;
                  if (bVar36 != false) {
                    iVar13 = (int)uVar34;
                    if (iVar13 != iVar10) {
                      _guard_xfg_dispatch_icall_nop
                                ((void *)(*plVar35 + (longlong)iVar13 * 4),
                                 (void *)(*plVar35 + (longlong)iVar10 * 4),(longlong)iVar31 << 2);
                    }
                    uVar34 = (ulonglong)(uint)(iVar13 + iVar31);
                  }
                  bVar36 = (bool)(bVar36 ^ 1);
                } while ((longlong)uVar23 < lVar11);
                *(int *)(plVar35 + 1) = (int)uVar34;
                iVar17 = iVar17 - (int)uVar34;
                uVar25 = local_190;
                fVar45 = (float)local_1b8;
                fVar44 = local_1b8._4_4_;
                fVar48 = fStack_1b0;
                fVar49 = fStack_1ac;
              }
              uVar6 = local_1a8;
              if (0 < iVar17) {
                lVar11 = lVar24 + 0x28;
                iVar17 = *(int *)(lVar24 + 0xb8);
                lVar14 = *(longlong *)(lVar24 + 0xb0);
                if (*(longlong *)(lVar24 + 0xb0) == 0) {
                  lVar14 = lVar11;
                }
                lVar27 = (longlong)iVar17 * 0x2c + lVar14;
                if (lVar14 != lVar27) {
                  do {
                    *(uint *)(lVar14 + 0x28) = *(uint *)(lVar14 + 0x28) & 0xfffffffd;
                    lVar14 = lVar14 + 0x2c;
                  } while (lVar14 != lVar27);
                  iVar17 = *(int *)(lVar24 + 0xb8);
                }
                iVar10 = DAT_1464c1c64;
                *(int *)(lVar24 + 0xb8) = iVar17 + 1;
                if (*(int *)(lVar24 + 0xbc) < iVar17 + 1) {
                  TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
                            (lVar11,iVar17);
                  fVar45 = (float)local_1b8;
                  fVar44 = local_1b8._4_4_;
                  fVar48 = fStack_1b0;
                  fVar49 = fStack_1ac;
                }
                lVar14 = *(longlong *)(lVar24 + 0xb0);
                if (*(longlong *)(lVar24 + 0xb0) == 0) {
                  lVar14 = lVar11;
                }
                lVar11 = (longlong)iVar17 * 0x2c;
                pfVar28 = (float *)(lVar14 + lVar11);
                *pfVar28 = fVar45;
                pfVar28[1] = fVar44;
                pfVar28[2] = fVar48;
                pfVar28[3] = fVar49;
                puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar11);
                *puVar1 = uVar6;
                puVar1[1] = CONCAT44(iVar10,local_1f8);
                *(ulonglong *)(lVar14 + 0x20 + lVar11) = CONCAT44(iVar10,iVar10);
                *(undefined4 *)(lVar14 + 0x28 + lVar11) = 2;
              }
            }
            lVar11 = uVar25 * 3 + 5;
            iVar17 = piVar30[lVar11 * 2 + 3];
            (piVar30 + lVar11 * 2)[2] = 0;
            if ((iVar17 < 0) && (iVar17 != 0)) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(piVar30 + lVar11 * 2,0);
              fVar45 = (float)local_1b8;
              fVar44 = local_1b8._4_4_;
              fVar48 = fStack_1b0;
              fVar49 = fStack_1ac;
            }
            uVar25 = uVar25 + 1;
            uVar20 = (int)local_128 + 1;
            local_128 = (ulonglong)uVar20;
            plVar35 = local_120;
          } while (uVar20 < 2);
          piVar30[4] = local_160;
          piVar30[5] = local_19c;
          piVar30[3] = local_1a0;
          fVar39 = local_198;
          local_190 = uVar25;
        }
        local_188 = *(undefined8 *)(piVar30 + 3);
        uVar25 = (ulonglong)(DAT_1464c1c54 == 0);
        fStack_134 = (float)(int)((ulonglong)local_188 >> 0x20) * fVar51;
        fVar38 = (float)(int)local_188 * fVar51 + fVar39;
        local_138 = (float)(int)local_188 * fVar51 - fVar39;
        lVar11 = (longlong)(int)local_234 * 200;
        fVar37 = fStack_134 + fVar39;
        fVar42 = (float)piVar30[5] * fVar51 + fVar39;
        fStack_134 = fStack_134 - fVar39;
        fVar39 = (float)piVar30[5] * fVar51 - fVar39;
        plVar35 = (longlong *)(piVar30 + uVar25 * 6 + 0xe);
        uVar6 = CONCAT44(fStack_134,local_138);
        local_144 = fVar38;
        fStack_140 = fVar37;
        local_13c = fVar42;
        local_130 = fVar39;
        do {
          auVar40 = ZEXT416(0);
          if ((int)uVar25 == 0) {
            lVar24 = *(longlong *)(param_4 + 8);
          }
          else {
            lVar24 = *(longlong *)(param_4 + 0x18);
          }
          plVar18 = (longlong *)*plVar35;
          plVar2 = *(longlong **)(lVar24 + 0xc0 + lVar11);
          *(longlong **)(lVar24 + 0xc0 + lVar11) = plVar18;
          if (plVar18 != (longlong *)0x0) {
            auVar40._0_8_ = (**(code **)(*plVar18 + 0x28))();
            auVar40._8_8_ = extraout_XMM0_Qb;
          }
          if (plVar2 != (longlong *)0x0) {
            auVar40._0_8_ = (**(code **)(*plVar2 + 0x30))(plVar2);
            auVar40._8_8_ = extraout_XMM0_Qb_00;
          }
          uVar20 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar20;
          plVar35 = plVar35 + 3;
          auVar3._4_8_ = auVar40._8_8_;
          auVar3._0_4_ = local_210._4_4_;
          auVar41._0_8_ = auVar3._0_8_ << 0x20;
          auVar41._8_4_ = fVar39;
          auVar41._12_4_ = fVar38;
          local_1f8 = (float)CONCAT31(local_1f8._1_3_,1);
          *(undefined8 *)(lVar24 + lVar11) = uVar6;
          ((undefined8 *)(lVar24 + lVar11))[1] = auVar41._8_8_;
          *(ulonglong *)(lVar24 + 0x10 + lVar11) = CONCAT44(fVar42,fVar37);
          *(float *)(lVar24 + 0x18 + lVar11) = local_1f8;
          iStack_158 = (int)((ulonglong)*(undefined8 *)(piVar30 + 3) >> 0x20);
          iStack_158 = iStack_158 - piVar30[1];
          local_15c = (int)*(undefined8 *)(piVar30 + 3);
          local_15c = local_15c - *piVar30;
          local_110 = (float)(piVar30[5] - piVar30[2]) * fVar51;
          *(ulonglong *)(lVar24 + 0x1c + lVar11) =
               CONCAT44((float)iStack_158 * fVar51,(float)local_15c * fVar51);
          *(float *)(lVar24 + 0x24 + lVar11) = local_110;
          local_210 = uVar6;
        } while (uVar20 < 2);
        piVar30[6] = (int)param_6;
        piVar30[7] = *(int *)(param_3 + 0x5fec);
        piVar30[8] = DAT_1464c1c54;
        local_234 = local_234 + 1;
        uVar25 = (ulonglong)local_234;
        plVar35 = local_120;
      } while ((int)local_234 < param_5);
    }
  }
  pfVar28 = local_178;
  FGlobalDistanceFieldInfo::UpdateParameterData(param_4);
  if (pfVar28 != (float *)0x0) {
    FMemory::Free(pfVar28);
  }
  return;
}



// FUNCTION 141b5e790 ComputeValue body=850 status=ok
// SIG undefined ComputeValue(void)

void FTimingSeries::ComputeValue(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8;
  longlong local_d8;
  int local_d0;
  int local_cc;
  
  lVar10 = 0;
  iVar4 = 0;
  iVar9 = 0;
  uVar8 = (int)param_1[1] / 3;
  local_d8 = 0;
  local_cc = 0;
  if (uVar8 < *(uint *)(param_1 + 1)) {
    do {
      lVar7 = *param_1;
      local_d0 = iVar9 + 1;
      if (iVar4 < local_d0) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d8,iVar9);
        lVar10 = local_d8;
        iVar4 = local_cc;
      }
      lVar5 = (longlong)(int)uVar8;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar10 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar7 + lVar5 * 4);
      iVar9 = local_d0;
    } while (uVar8 < *(uint *)(param_1 + 1));
  }
  AlgoImpl::IntroSortInternal<float,FIdentityFunctor,TDereferenceWrapper<float,TLess<float>_>_>
            (lVar10,(longlong)iVar9,local_res8);
  *param_2 = 0.0;
  fVar20 = (float)(iVar9 / 2);
  uVar8 = 0;
  do {
    uVar13 = uVar8 + 1;
    uVar12 = 0;
    fVar17 = 0.0;
    fVar18 = 3.4028235e+38;
    fVar15 = -3.4028235e+38;
    lVar7 = (longlong)(int)(fVar20 - fVar20 * (float)uVar13 * 0.1);
    iVar4 = (int)((float)(iVar9 - iVar9 / 2) * (float)uVar13 * 0.1 + fVar20);
    lVar5 = (longlong)iVar4;
    if (lVar7 < lVar5) {
      if (3 < lVar5 - lVar7) {
        pfVar11 = (float *)(lVar10 + (lVar7 + 2) * 4);
        lVar6 = ((lVar5 - lVar7) - 4U >> 2) + 1;
        lVar7 = lVar7 + lVar6 * 4;
        uVar12 = (int)lVar6 * 4;
        do {
          fVar16 = pfVar11[-2];
          fVar1 = pfVar11[-1];
          fVar2 = *pfVar11;
          fVar3 = pfVar11[1];
          fVar19 = fVar16;
          if (fVar18 <= fVar16) {
            fVar19 = fVar18;
          }
          fVar14 = fVar16;
          if (fVar16 <= fVar15) {
            fVar14 = fVar15;
          }
          pfVar11 = pfVar11 + 4;
          if (fVar1 <= fVar19) {
            fVar19 = fVar1;
          }
          if (fVar14 <= fVar1) {
            fVar14 = fVar1;
          }
          if (fVar2 <= fVar19) {
            fVar19 = fVar2;
          }
          if (fVar14 <= fVar2) {
            fVar14 = fVar2;
          }
          fVar17 = fVar17 + fVar16 + fVar1 + fVar2 + fVar3;
          fVar18 = fVar19;
          if (fVar3 <= fVar19) {
            fVar18 = fVar3;
          }
          fVar15 = fVar14;
          if (fVar14 <= fVar3) {
            fVar15 = fVar3;
          }
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lVar7 < lVar5) {
        uVar12 = uVar12 + (iVar4 - (int)lVar7);
        fVar16 = fVar15;
        do {
          fVar15 = *(float *)(lVar10 + lVar7 * 4);
          lVar7 = lVar7 + 1;
          fVar17 = fVar17 + fVar15;
          fVar1 = fVar15;
          if (fVar18 <= fVar15) {
            fVar1 = fVar18;
          }
          fVar18 = fVar1;
          if (fVar15 <= fVar16) {
            fVar15 = fVar16;
          }
          fVar16 = fVar15;
        } while (lVar7 < lVar5);
      }
      if (uVar12 == 0) goto LAB_141b5ea3d;
      fVar18 = (fVar15 - fVar18) * 0.5;
      fVar17 = fVar17 / (float)uVar12;
      fVar15 = ((float)uVar12 * 100.0) / (float)iVar9;
    }
    else {
LAB_141b5ea3d:
      fVar18 = 0.0;
      fVar15 = 0.0;
      fVar17 = 0.0;
    }
    if (((uVar8 != 0) && (fVar17 * 0.5 < fVar18)) || (*param_2 = fVar15, uVar8 = uVar13, 9 < uVar13)
       ) {
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
      return;
    }
  } while( true );
}



// FUNCTION 141b5eaf0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FIntVector,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<FIntVector,FBlockUpdateInfo,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b5eba0 FUN_141b5eba0 body=46 status=ok
// SIG undefined FUN_141b5eba0(void)

void FUN_141b5eba0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b51f70(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5ebd0 FUN_141b5ebd0 body=46 status=ok
// SIG undefined FUN_141b5ebd0(void)

void FUN_141b5ebd0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b52360(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5ec00 FUN_141b5ec00 body=46 status=ok
// SIG undefined FUN_141b5ec00(void)

void FUN_141b5ec00(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b52750(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5ec30 FUN_141b5ec30 body=46 status=ok
// SIG undefined FUN_141b5ec30(void)

void FUN_141b5ec30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b52b40(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5ec60 FUN_141b5ec60 body=46 status=ok
// SIG undefined FUN_141b5ec60(void)

void FUN_141b5ec60(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b52f30(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5ec90 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBenchmarkPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf7d0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InputTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"InputTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5ed30 FUN_141b5ed30 body=46 status=ok
// SIG undefined FUN_141b5ed30(void)

void FUN_141b5ed30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x160);
  if (lVar1 != 0) {
    FUN_141b53320(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5ed60 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * GPUFFT::TGSComplexTransformCS<2>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGSComplexTransformBaseCS::FGSComplexTransformBaseCS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144de9e48;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5edb0 FUN_141b5edb0 body=77 status=ok
// SIG undefined FUN_141b5edb0(void)

undefined8 * FUN_141b5edb0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    GPUFFT::FGSConvolutionWithTextureKernelBaseCS::FGSConvolutionWithTextureKernelBaseCS
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dea198;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5ee00 ConstructCompiledInstance body=118 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TLightGridInjectionCS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deb2a0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    FForwardCullingParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5ee80 FUN_141b5ee80 body=46 status=ok
// SIG undefined FUN_141b5ee80(void)

void FUN_141b5ee80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FCalculateHeightfieldIrradianceScreenGridCS::FCalculateHeightfieldIrradianceScreenGridCS
              (lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5eeb0 FUN_141b5eeb0 body=46 status=ok
// SIG undefined FUN_141b5eeb0(void)

void FUN_141b5eeb0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FCalculateHeightfieldOcclusionScreenGridCS::FCalculateHeightfieldOcclusionScreenGridCS
              (lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5eee0 ConstructCompiledInstance body=353 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * GPUFFT::FComplexFFTPassCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144de91a8;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xdc) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xe4) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcSRV",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"DstUAV",0);
    FShaderParameter::Bind(puVar2 + 0x19,uVar1,L"TransformType",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xce,uVar1,L"SrcRect",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xd4,uVar1,L"DstRect",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xda,uVar1,L"BitCount",0);
    FShaderParameter::Bind(puVar2 + 0x1c,uVar1,L"PowTwoLength",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f050 ConstructCompiledInstance body=264 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * GPUFFT::FComplexMultiplyImagesCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xd8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144de9bb8;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xd4) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcSRV",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"KnlSRV",0);
    FShaderResourceParameter::Bind(puVar2 + 0x19,uVar1,L"DstUAV",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xcc,uVar1,L"SrcRect",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xd2,uVar1,L"DataLayout",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f160 FUN_141b5f160 body=46 status=ok
// SIG undefined FUN_141b5f160(void)

void FUN_141b5f160(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FCompositeHeightfieldsIntoGlobalDistanceFieldCS::FCompositeHeightfieldsIntoGlobalDistanceFieldCS
              (lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5f190 ConstructCompiledInstance body=271 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * GPUFFT::FCopyWindowCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144dde018;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined2 *)(puVar2 + 0x1b) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcSRV",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"DstUAV",0);
    FShaderParameter::Bind(puVar2 + 0x19,uVar1,L"SrcRect",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xce,uVar1,L"DstRect",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xd4,uVar1,L"BrightPixelGain",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f2a0 FUN_141b5f2a0 body=46 status=ok
// SIG undefined FUN_141b5f2a0(void)

void FUN_141b5f2a0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x128);
  if (lVar1 != 0) {
    FUN_141b53d60(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5f2d0 FUN_141b5f2d0 body=46 status=ok
// SIG undefined FUN_141b5f2d0(void)

void FUN_141b5f2d0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x158);
  if (lVar1 != 0) {
    FCullObjectsToGridCS::FCullObjectsToGridCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5f300 FUN_141b5f300 body=197 status=ok
// SIG undefined FUN_141b5f300(void)

undefined8 * FUN_141b5f300(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deb0f0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CubeDepthMapUAV",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SceneDepthTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"SceneDepthTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f3d0 ConstructCompiledInstance body=320 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * GPUFFT::FGroupShardSubFFTPassCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144de9458;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xdc) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcTexture",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"DstTexture",0);
    FShaderParameter::Bind(puVar2 + 0x19,uVar1,L"TransformType",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xce,uVar1,L"SrcWindow",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xd4,uVar1,L"TransformLength",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xda,uVar1,L"NumSubRegions",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f510 ConstructCompiledInstance body=108 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FHdrCustomResolve2xPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d913d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),&DAT_144dea4b8,1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f580 ConstructCompiledInstance body=150 status=ok
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
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),&DAT_144dea4b8,1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"FMaskTex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f620 ConstructCompiledInstance body=151 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FHeightfieldComponentQuadVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xd0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144deb4b0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined2 *)(puVar2 + 0x19) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"HeightfieldDescriptions",0);
    FShaderParameter::Bind((undefined4 *)((longlong)puVar2 + 0xc4),uVar1,L"NumHeightfields",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f6c0 ConstructCompiledInstance body=107 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FHeightfieldSubsectionQuadVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d913d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SubsectionHeightfieldDescriptions",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f730 ConstructCompiledInstance body=102 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FInitializeHeightfieldsPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deaaf0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    FHeightfieldTextureParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f7a0 FUN_141b5f7a0 body=200 status=ok
// SIG undefined FUN_141b5f7a0(void)

undefined8 * FUN_141b5f7a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89a50(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dea210;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x116) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x11e) = 0;
    FShaderParameter::Bind(puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),L"SvPositionToLight",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x116,*(undefined8 *)(param_1 + 0x18),L"LightFunctionParameters",0
              );
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x11c,*(undefined8 *)(param_1 + 0x18),L"LightFunctionParameters2",
               0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f870 ConstructCompiledInstance body=155 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FOcclusionQueryVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89a50(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dea1e0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    *(undefined4 *)(puVar1 + 0x25) = 0;
    *(undefined2 *)((longlong)puVar1 + 300) = 0;
    FStencilingGeometryShaderParameters::Bind(puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind(puVar1 + 0x25,*(undefined8 *)(param_1 + 0x18),L"LayerIndex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5f910 FUN_141b5f910 body=46 status=ok
// SIG undefined FUN_141b5f910(void)

void FUN_141b5f910(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x150);
  if (lVar1 != 0) {
    FUN_141b54af0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5f940 ConstructCompiledInstance body=236 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * GPUFFT::FPackTwoForOneFFTPassCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xd8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144de9950;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcSRV",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"DstUAV",0);
    FShaderParameter::Bind(puVar2 + 0x19,uVar1,L"TransformType",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xce,uVar1,L"DstRect",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5fa30 FUN_141b5fa30 body=46 status=ok
// SIG undefined FUN_141b5fa30(void)

void FUN_141b5fa30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x158);
  if (lVar1 != 0) {
    FUN_141b54ef0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5fa60 ConstructCompiledInstance body=353 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * GPUFFT::FReorderFFTPassCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144de91a8;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xdc) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xe4) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderResourceParameter::Bind(puVar2 + 0x18,uVar1,L"SrcSRV",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0xc4,uVar1,L"DstUAV",0);
    FShaderParameter::Bind(puVar2 + 0x19,uVar1,L"TransformType",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xce,uVar1,L"SrcRect",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xd4,uVar1,L"DstRect",0);
    FShaderParameter::Bind((longlong)puVar2 + 0xda,uVar1,L"LogTwoLength",0);
    FShaderParameter::Bind(puVar2 + 0x1c,uVar1,L"BitCount",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5fbd0 FUN_141b5fbd0 body=46 status=ok
// SIG undefined FUN_141b5fbd0(void)

void FUN_141b5fbd0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x100);
  if (lVar1 != 0) {
    FShadowHeightfieldsPS::FShadowHeightfieldsPS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b5fc00 FUN_141b5fc00 body=36 status=ok
// SIG undefined FUN_141b5fc00(void)

void FUN_141b5fc00(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b522b0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fc30 FUN_141b5fc30 body=36 status=ok
// SIG undefined FUN_141b5fc30(void)

void FUN_141b5fc30(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b526a0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fc60 FUN_141b5fc60 body=36 status=ok
// SIG undefined FUN_141b5fc60(void)

void FUN_141b5fc60(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b52a90(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fc90 FUN_141b5fc90 body=36 status=ok
// SIG undefined FUN_141b5fc90(void)

void FUN_141b5fc90(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b52e80(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fcc0 FUN_141b5fcc0 body=36 status=ok
// SIG undefined FUN_141b5fcc0(void)

void FUN_141b5fcc0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b53270(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fcf0 FUN_141b5fcf0 body=36 status=ok
// SIG undefined FUN_141b5fcf0(void)

void FUN_141b5fcf0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x160);
  if (lVar1 != 0) {
    TCompositeObjectDistanceFieldsCS<1,1>::TCompositeObjectDistanceFieldsCS<1,1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fd20 ConstructSerializedInstance body=100 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * GPUFFT::TGSComplexTransformCS<2>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144de9e48;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5fd90 FUN_141b5fd90 body=93 status=ok
// SIG undefined FUN_141b5fd90(void)

undefined8 * FUN_141b5fd90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144dea198;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5fdf0 ConstructSerializedInstance body=101 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TLightGridInjectionCS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deb2a0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5fe60 FUN_141b5fe60 body=36 status=ok
// SIG undefined FUN_141b5fe60(void)

void FUN_141b5fe60(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b53860(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fe90 FUN_141b5fe90 body=36 status=ok
// SIG undefined FUN_141b5fe90(void)

void FUN_141b5fe90(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FCalculateHeightfieldOcclusionScreenGridCS::FCalculateHeightfieldOcclusionScreenGridCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5fec0 FUN_141b5fec0 body=100 status=ok
// SIG undefined FUN_141b5fec0(void)

undefined8 * FUN_141b5fec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144de91a8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5ff30 FUN_141b5ff30 body=80 status=ok
// SIG undefined FUN_141b5ff30(void)

undefined8 * FUN_141b5ff30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144de9bb8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b5ff80 FUN_141b5ff80 body=36 status=ok
// SIG undefined FUN_141b5ff80(void)

void FUN_141b5ff80(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141b53cc0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5ffb0 ConstructSerializedInstance body=36 status=ok
// SIG undefined ConstructSerializedInstance(void)

void FCullObjectsForVolumeCS::ConstructSerializedInstance(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x128);
  if (lVar1 != 0) {
    FCullObjectsForVolumeCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b5ffe0 FUN_141b5ffe0 body=36 status=ok
// SIG undefined FUN_141b5ffe0(void)

void FUN_141b5ffe0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x158);
  if (lVar1 != 0) {
    FCullObjectsToGridCS::FCullObjectsToGridCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b60010 FUN_141b60010 body=79 status=ok
// SIG undefined FUN_141b60010(void)

undefined8 * FUN_141b60010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deb0f0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b60060 FUN_141b60060 body=87 status=ok
// SIG undefined FUN_141b60060(void)

undefined8 * FUN_141b60060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144de9458;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b600c0 FUN_141b600c0 body=73 status=ok
// SIG undefined FUN_141b600c0(void)

undefined8 * FUN_141b600c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deb4b0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b60110 FUN_141b60110 body=73 status=ok
// SIG undefined FUN_141b60110(void)

undefined8 * FUN_141b60110(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deaaf0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b60160 FUN_141b60160 body=80 status=ok
// SIG undefined FUN_141b60160(void)

undefined8 * FUN_141b60160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    *puVar1 = &PTR_FUN_144dea210;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    *(undefined2 *)(puVar1 + 0x24) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b601b0 FUN_141b601b0 body=93 status=ok
// SIG undefined FUN_141b601b0(void)

undefined8 * FUN_141b601b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    *puVar1 = &PTR_FUN_144dea1e0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    *(undefined4 *)(puVar1 + 0x25) = 0;
    *(undefined2 *)((longlong)puVar1 + 300) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b60210 FUN_141b60210 body=115 status=ok
// SIG undefined FUN_141b60210(void)

undefined8 * FUN_141b60210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dea380;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b60290 FUN_141b60290 body=79 status=ok
// SIG undefined FUN_141b60290(void)

undefined8 * FUN_141b60290(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144de9950;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b602e0 FUN_141b602e0 body=36 status=ok
// SIG undefined FUN_141b602e0(void)

void FUN_141b602e0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x158);
  if (lVar1 != 0) {
    FCullObjectsToGridCS::FCullObjectsToGridCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b60310 ConstructSerializedInstance body=115 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FShadowHeightfieldsPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x100);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144deb4e0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined2 *)(puVar1 + 0x1f) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b60390 Convolution2DBufferSize body=159 status=ok
// SIG undefined Convolution2DBufferSize(void)

uint * GPUFFT::Convolution2DBufferSize(uint *param_1,uint *param_2,byte param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_res8;
  uint uStackX_c;
  
  if (param_3 == 0) {
    uVar1 = param_2[1];
    uVar2 = *param_4;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_4[1];
    param_2 = param_2 + 1;
  }
  uVar3 = *param_2;
  uStackX_c = uVar1 + 2;
  if (uVar3 < 0x1001) {
    uVar3 = uVar1 + 2;
    param_3 = (param_3 ^ 1) & 0xfd;
    uStackX_c = uVar2;
  }
  local_res8 = uVar3;
  if (param_3 != 0) {
    local_res8 = uStackX_c;
    uStackX_c = uVar3;
  }
  *param_1 = local_res8;
  param_1[1] = uStackX_c;
  return param_1;
}



// FUNCTION 141b60430 ConvolutionWithTextureImage2D body=1289 status=ok
// SIG undefined ConvolutionWithTextureImage2D(void)

/* WARNING: Removing unreachable block (ram,0x000141b60515) */

wchar_t * GPUFFT::ConvolutionWithTextureImage2D
                    (longlong *param_1,uint *param_2,byte param_3,undefined8 param_4,int *param_5,
                    undefined8 param_6,undefined8 param_7,longlong param_8,longlong param_9,
                    undefined8 param_10)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint local_80;
  uint uStack_7c;
  int local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
  piVar4 = param_5;
  lVar2 = *param_1;
  local_80 = param_3 ^ 1;
  if (param_3 == 0) {
    uStack_7c = param_2[1];
  }
  else {
    uStack_7c = *param_2;
  }
  local_78 = param_5[2] - *param_5;
  if (param_3 != 0) {
    local_78 = param_5[3] - param_5[1];
  }
  param_5._4_4_ = uStack_7c + 2;
  param_5._0_4_ = local_78;
  if (((CONCAT44(uStack_7c,(uint)param_3) ^ 1) & 0xfffffffd) == 0) {
    param_5._0_4_ = param_5._4_4_;
    param_5._4_4_ = local_78;
  }
  local_48 = (int)param_5;
  local_50 = 0;
  local_44 = param_5._4_4_;
  local_70 = (uint)param_3;
  local_4c = 0;
  if (param_3 == 0) {
    uVar8 = *param_2;
  }
  else {
    uVar8 = param_2[1];
  }
  local_68 = uStack_7c + 2;
  local_60 = CONCAT44(uStack_7c,local_80 + 2) & 0xffffffff80000003;
  local_6c = uVar8;
  local_58 = local_78;
  if (uStack_7c < 0x1001) {
    FUN_141b62560(param_1,&local_80,param_6,piVar4,param_8 + 0x10,&local_50);
    bVar11 = true;
  }
  else {
    cVar5 = TwoForOneRealFFTImage1D::MultiPass
                      (param_1,&local_80,piVar4,param_6,param_8,param_9,param_10);
    bVar11 = cVar5 != '\0';
  }
  uVar3 = *(undefined8 *)(param_8 + 0x10);
  puVar1 = (ulonglong *)(lVar2 + 0x30);
  puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 1;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(puVar1,0x10);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 1;
  }
  *puVar1 = (ulonglong)puVar6;
  *puVar10 = uVar3;
  puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar7 + 6;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(puVar1,0x38);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
  }
  *puVar1 = (ulonglong)puVar6;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar7;
  *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar10;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  puVar7[5] = 0;
  if (uVar8 < 0x1001) {
    if (bVar11) {
      FUN_141b61ea0(param_1,&local_70,param_4,param_8 + 8,&local_50,param_9 + 0x10);
      bVar11 = true;
    }
    else {
LAB_141b606c2:
      bVar11 = false;
    }
  }
  else {
    if ((!bVar11) ||
       (cVar5 = ConvolutionWithTextureImage1D::MultiPass
                          (param_1,&local_70,param_4,&local_50,param_8 + 8,param_9,param_8),
       cVar5 == '\0')) goto LAB_141b606c2;
    bVar11 = true;
  }
  uVar3 = *(undefined8 *)(param_9 + 0x10);
  puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar10 + 1;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(puVar1,0x10);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 1;
  }
  *puVar1 = (ulonglong)puVar6;
  *puVar10 = uVar3;
  puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar7 + 6;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(puVar1,0x38);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
  }
  *puVar1 = (ulonglong)puVar6;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar7;
  *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar10;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  puVar7[5] = 0;
  if (local_60._4_4_ < 0x1001) {
    if (bVar11) {
      local_70 = 0x7f7fffff;
      local_68 = 0;
      local_6c = 0xff7fffff;
      FUN_141b62560(param_1,&local_60,param_9 + 8,&local_50,param_7,piVar4,&local_70);
      return (wchar_t *)0x1;
    }
    return L"Texture";
  }
  if (bVar11) {
    local_68 = 0;
    local_70 = 0x7f7fffff;
    local_6c = 0xff7fffff;
    cVar5 = TwoForOneRealFFTImage1D::MultiPass
                      (param_1,&local_60,&local_50,param_9 + 8,param_8,param_9,&local_70);
    if (cVar5 != '\0') {
      pwVar9 = (wchar_t *)0x1;
      goto LAB_141b60830;
    }
  }
  pwVar9 = (wchar_t *)0x0;
LAB_141b60830:
  uVar3 = *(undefined8 *)(param_8 + 0x10);
  puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar10 + 1;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(puVar1,0x10);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 1;
  }
  *puVar1 = (ulonglong)puVar6;
  *puVar10 = uVar3;
  puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar7 + 6;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(puVar1,0x38);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
  }
  *puVar1 = (ulonglong)puVar6;
  local_60 = 0xff7fffff7f7fffff;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar7;
  *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar7 + 4) = 0;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar10;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  local_58 = 0;
  FUN_141b61860(param_1,&local_50,param_8 + 8,piVar4,param_7,&local_60);
  return pwVar9;
}



// FUNCTION 141b60940 FUN_141b60940 body=506 status=ok
// SIG undefined FUN_141b60940(void)

undefined8 *
FUN_141b60940(longlong param_1,int param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [8];
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar6;
  undefined8 local_b8;
  int *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  lVar2 = operator_new(0x270);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_141b54870(lVar2);
  }
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  if (param_2 == 1) {
    local_a8 = *(int *)(param_1 + 0x150);
    uStack_a4 = 0;
    *(int *)(param_1 + 0x150) = local_a8 + 1;
  }
  else {
    cVar1 = FTextureLayout3d::AddElement
                      (param_1 + 0xb8,&local_a8,&uStack_a4,&uStack_a0,CONCAT44(uVar4,param_2),
                       CONCAT44(uVar5,param_2),CONCAT44(uVar6,param_2));
    if (cVar1 == '\0') {
      return puVar3;
    }
  }
  uStack_a0._4_4_ = param_2;
  FIndirectLightingCache::CalculateBlockPositionAndSize
            (param_1,param_3,param_2,&local_98,&uStack_8c);
  local_78 = CONCAT44(uStack_88,uStack_8c);
  local_70 = uStack_84;
  local_60 = uStack_90;
  local_b0 = (int *)CONCAT44(local_b0._4_4_,(undefined4)uStack_a0);
  local_68 = local_98;
  local_b8._0_4_ = local_a8;
  local_b8._4_4_ = uStack_a4;
  FUN_141b577a0(param_1,&local_b8,uStack_a0._4_4_,&local_68,&local_78,&local_48,&local_58,&local_38,
                &local_28);
  local_b8 = &local_a8;
  local_b0 = &local_a8;
  FUN_141b4d7b0(param_1 + 0x68,local_res10,&local_b8,0);
  *puVar3 = local_58;
  *(undefined4 *)(puVar3 + 1) = local_50;
  *(undefined8 *)((longlong)puVar3 + 0xc) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_40;
  puVar3[3] = local_38;
  *(undefined4 *)(puVar3 + 4) = local_30;
  *(undefined8 *)((longlong)puVar3 + 0x24) = local_28;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = local_20;
  *(int *)(puVar3 + 6) = local_a8;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_a4;
  *(undefined1 *)((longlong)puVar3 + 0x263) = param_5;
  *(int *)((longlong)puVar3 + 0x3c) = uStack_a0._4_4_;
  *(undefined1 *)((longlong)puVar3 + 0x262) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x261) = param_4;
  return puVar3;
}



// FUNCTION 141b60b40 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<1,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10102;
  local_84 = 0x10001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b60c10 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,3,1,1,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x3010103;
  local_84 = 0xf0101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b60ce0 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FUpdateCachePrimitivesTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_144deb7b0;
  *(undefined1 *)(plVar8 + 8) = 0;
  plVar8[9] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 141b60e90 FUN_141b60e90 body=53 status=ok
// SIG undefined FUN_141b60e90(void)

void FUN_141b60e90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x11) != '\0') {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,lVar1);
    }
    *(undefined1 *)(lVar1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 141b60ed0 FUN_141b60ed0 body=1067 status=ok
// SIG undefined FUN_141b60ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b60ed0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iStackX_c;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48 [2];
  
  uVar2 = *(undefined4 *)(DAT_146a184e0 + 4);
  local_res20 = param_4;
  FSceneRenderTargets::Get(param_2);
  local_48[0] = 0;
  local_res18 = 0;
  FUN_141a19150(param_2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_48);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = uVar4;
  lVar3 = *(longlong *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x60);
  uVar7 = 0;
  uVar12 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar6 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146b096e0) {
        if (iVar6 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b61038;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar6 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
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
LAB_141b61038:
  if (*(char *)((longlong)puVar11 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar11 + 1);
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
    *puVar9 = &PTR_LAB_144dcb3c8;
    puVar9[2] = uVar5;
    puVar9[4] = uVar4;
  }
  uVar4 = local_res20;
  uVar7 = 0;
  FUN_141b6d880(param_1,param_2,local_res20,param_3,uVar2);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar6 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146a1c440) {
        if (iVar6 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b6112c;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar6 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x38) <
      DAT_146a1c3d8) {
    _Init_thread_header(&DAT_146a1c3d8);
    if (DAT_146a1c3d8 == -1) {
      _DAT_146a1c3d0 = 0;
      _DAT_146a1c3d4 = 0;
      DAT_146a1c3d6 = 0;
      _Init_thread_footer(&DAT_146a1c3d8);
    }
  }
  puVar11 = (undefined4 *)&DAT_146a1c3d0;
LAB_141b6112c:
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141b1d720(*(undefined8 *)(lVar3 + 0x60),puVar11,param_2,param_3);
  iVar6 = (int)*(undefined8 *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
  iStackX_c = (int)((ulonglong)*(undefined8 *)(param_3 + 0x1aa8) >> 0x20);
  iStackX_c = iStackX_c - *(int *)(param_3 + 0x1aa4);
  DispatchComputeShader
            (param_2,param_1,(uint)(0 < iVar6 % DAT_1464c1cd0) + iVar6 / DAT_1464c1cd0,
             (uint)(0 < iStackX_c % DAT_1464c1cd4) + iStackX_c / DAT_1464c1cd4,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144dc9c50;
  FUN_141b74f50(param_1,param_2,uVar4);
  return;
}



// FUNCTION 141b61300 FUN_141b61300 body=717 status=ok
// SIG undefined FUN_141b61300(void)

void FUN_141b61300(longlong *param_1,uint *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 local_res20;
  undefined *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar1 = param_2[1];
  local_res18 = param_3;
  local_res20 = param_4;
  GPUFFT::FFTDescription::FFT_TypeName(param_2,local_78);
  if ((*param_2 & 0xfffffffd) == 0) {
    uVar2 = param_2[1];
    uVar8 = param_2[2];
  }
  else {
    uVar2 = param_2[2];
    uVar8 = param_2[1];
  }
  local_res8 = CONCAT44(uVar8,uVar2);
  uVar7 = local_res8;
  local_88 = &DAT_146a1cd50;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_res8,&local_88);
  plVar11 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  local_res10 = 0;
  local_res8 = 0;
  plVar9 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar3 = *plVar9;
  FUN_141a19150(lVar4,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar5 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  FRHIComputeShader::UpdateStats(uVar6);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 3;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 3;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar12;
  *(undefined8 **)(lVar4 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  puVar12[2] = uVar6;
  lVar5 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_68,lVar4,*(undefined8 *)(lVar5 + 0x60),*(undefined2 *)(lVar3 + 0xc4),param_6);
  local_res8 = 0;
  local_88 = (undefined *)0x0;
  local_80 = uVar7;
  FUN_141b6ce30(lVar3,lVar4,param_2,local_res20,param_5,&local_88,uVar1,local_res18,param_7);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 4;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 4;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar12;
  *(undefined8 **)(lVar4 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x14) = 1;
  *(uint *)(puVar12 + 3) = uVar1 >> 1;
  puVar12 = (undefined8 *)(*(longlong *)(local_60 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(local_60 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(local_60 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(local_60 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(local_60 + 0x30) = puVar10;
  *(int *)(local_60 + 0x14) = *(int *)(local_60 + 0x14) + 1;
  **(undefined8 **)(local_60 + 8) = puVar12;
  *(undefined8 **)(local_60 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = local_68;
  *(undefined4 *)(puVar12 + 3) = local_58;
  puVar12[4] = 0;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b615d0 FUN_141b615d0 body=655 status=ok
// SIG undefined FUN_141b615d0(void)

void FUN_141b615d0(longlong *param_1,char param_2,int *param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  iVar1 = param_3[2];
  iVar2 = param_3[3];
  lVar5 = param_1[1];
  iVar3 = *param_3;
  iVar4 = param_3[1];
  lVar6 = *param_1;
  local_68 = &DAT_146a1d140;
  local_60 = 0;
  local_res20 = param_4;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x38,local_res10,&local_68);
  plVar12 = (longlong *)0x0;
  if (local_res10[0] != -1) {
    plVar12 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(lVar5 + 0x38));
  }
  local_res18 = 0;
  local_res8 = 0;
  plVar10 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  lVar5 = *plVar10;
  FUN_141a19150(lVar6,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
  lVar7 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 3;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x20);
    puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 3;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar11;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar13;
  *(undefined8 **)(lVar6 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e50;
  puVar13[2] = uVar8;
  lVar7 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_68,lVar6,*(undefined8 *)(lVar7 + 0x60),*(undefined2 *)(lVar5 + 200),param_6);
  FUN_141b6d040(lVar5,lVar6,param_2,param_3,local_res20,param_5);
  iVar1 = iVar1 - iVar3;
  if (param_2 != '\0') {
    iVar1 = iVar2 - iVar4;
  }
  puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 4;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x28);
    puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 4;
  }
  puVar9 = local_68;
  *(undefined8 **)(lVar6 + 0x30) = puVar11;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  lVar5 = CONCAT44(uStack_5c,local_60);
  **(undefined8 **)(lVar6 + 8) = puVar13;
  *(undefined8 **)(lVar6 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)((longlong)puVar13 + 0x14) = 1;
  *(int *)(puVar13 + 3) = iVar1;
  puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 5;
  if (*(undefined8 **)(lVar5 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
  }
  *(undefined8 **)(lVar5 + 0x30) = puVar11;
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  **(undefined8 **)(lVar5 + 8) = puVar13;
  *(undefined8 **)(lVar5 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e40;
  puVar13[2] = puVar9;
  *(undefined4 *)(puVar13 + 3) = local_58;
  puVar13[4] = 0;
  return;
}



// FUNCTION 141b61860 FUN_141b61860 body=880 status=ok
// SIG undefined FUN_141b61860(void)

void FUN_141b61860(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  ulonglong param_5,undefined8 param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 local_res8;
  undefined8 local_res10;
  int local_res18;
  undefined8 local_res20;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  
  iVar2 = param_4[3];
  iVar3 = param_4[1];
  iVar14 = param_4[2];
  iVar4 = *param_4;
  lVar5 = param_1[1];
  puVar6 = (undefined *)*param_1;
  local_78 = &DAT_146a1cff0;
  local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffff00000000);
  local_res10 = param_2;
  local_res18 = iVar14 - iVar4;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x38,&local_res8,&local_78);
  plVar12 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar5 + 0x38));
  }
  local_res20 = 0;
  local_res8 = 0;
  plVar9 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  lVar5 = *plVar9;
  FUN_141a19150(puVar6,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  lVar7 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar10 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar10);
  puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 3;
  if (*(undefined8 **)(puVar6 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(puVar6 + 0x30,0x20);
    puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 3;
  }
  *(undefined8 **)(puVar6 + 0x30) = puVar11;
  *(int *)(puVar6 + 0x14) = *(int *)(puVar6 + 0x14) + 1;
  **(undefined8 **)(puVar6 + 8) = puVar13;
  *(undefined8 **)(puVar6 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e50;
  puVar13[2] = uVar10;
  lVar7 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_68,puVar6,*(undefined8 *)(lVar7 + 0x60),*(undefined2 *)(lVar5 + 0xc4),param_5);
  lVar7 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  local_70 = &local_res8;
  uVar10 = *(undefined8 *)(lVar7 + 0x60);
  iVar14 = iVar14 - iVar4;
  local_res8 = uVar10;
  local_78 = puVar6;
  if (*(short *)(lVar5 + 0xc2) != 0) {
    uVar8 = *param_3;
    uVar1 = *(ushort *)(lVar5 + 0xc0);
    puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
    if (*(undefined8 **)(puVar6 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar6 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
    }
    *(undefined8 **)(puVar6 + 0x30) = puVar11;
    *(int *)(puVar6 + 0x14) = *(int *)(puVar6 + 0x14) + 1;
    **(undefined8 **)(puVar6 + 8) = puVar13;
    *(undefined8 **)(puVar6 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *(uint *)(puVar13 + 3) = (uint)uVar1;
    *puVar13 = &PTR_LAB_144d92090;
    puVar13[2] = uVar10;
    puVar13[4] = uVar8;
    iVar14 = local_res18;
  }
  uVar10 = GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                     (&local_78,lVar5 + 200,local_res10);
  puVar11 = (undefined8 *)
            GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                      (uVar10,lVar5 + 0xce,param_4);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (*puVar11,*(undefined8 *)puVar11[1],lVar5 + 0xd4,param_6,param_5 & 0xffffffff00000000);
  puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 4;
  if (*(undefined8 **)(puVar6 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(puVar6 + 0x30,0x28);
    puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 4;
  }
  *(undefined8 **)(puVar6 + 0x30) = puVar11;
  *(int *)(puVar6 + 0x14) = *(int *)(puVar6 + 0x14) + 1;
  **(undefined8 **)(puVar6 + 8) = puVar13;
  *(undefined8 **)(puVar6 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d8df50;
  *(int *)(puVar13 + 2) = iVar14;
  *(uint *)((longlong)puVar13 + 0x14) =
       (uint)((uint)(iVar2 - iVar3) % 0x20 != 0) + (uint)(iVar2 - iVar3) / 0x20;
  *(undefined4 *)(puVar13 + 3) = 1;
  puVar13 = (undefined8 *)(*(longlong *)(local_60 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 5;
  if (*(undefined8 **)(local_60 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(local_60 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(local_60 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
  }
  *(undefined8 **)(local_60 + 0x30) = puVar11;
  *(int *)(local_60 + 0x14) = *(int *)(local_60 + 0x14) + 1;
  **(undefined8 **)(local_60 + 8) = puVar13;
  *(undefined8 **)(local_60 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e40;
  puVar13[2] = local_68;
  *(undefined4 *)(puVar13 + 3) = local_58;
  puVar13[4] = 0;
  return;
}



// FUNCTION 141b61bd0 FUN_141b61bd0 body=715 status=ok
// SIG undefined FUN_141b61bd0(void)

void FUN_141b61bd0(longlong *param_1,uint *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar1 = param_2[1];
  local_res18 = param_3;
  GPUFFT::FFTDescription::FFT_TypeName(param_2,local_68);
  if ((*param_2 & 0xfffffffd) == 0) {
    uVar2 = param_2[1];
    uVar7 = param_2[2];
  }
  else {
    uVar2 = param_2[2];
    uVar7 = param_2[1];
  }
  local_res8 = CONCAT44(uVar7,uVar2);
  uVar6 = local_res8;
  lVar8 = FUN_141b64930(lVar3,uVar1);
  local_res10 = 0;
  local_res8 = 0;
  local_88 = lVar8;
  FUN_141a19150(lVar4,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar3 = *(longlong *)(lVar8 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar5);
  puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 3;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 3;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar9;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar10;
  *(undefined8 **)(lVar4 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar5;
  lVar3 = *(longlong *)(lVar8 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  lVar8 = local_88;
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_58,lVar4,*(undefined8 *)(lVar3 + 0x60),*(undefined2 *)(local_88 + 0xc4),param_5)
  ;
  local_78 = 0;
  local_88 = -0x80000080800001;
  local_80 = 0;
  local_res8 = 0;
  local_70 = uVar6;
  FUN_141b6d210(lVar8,lVar4,param_2,local_res18,param_4,&local_78,&local_88);
  if ((*param_2 & 0xfffffffd) == 0) {
    iVar11 = param_4[3] - param_4[1];
  }
  else {
    iVar11 = param_4[2] - *param_4;
  }
  puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 4;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x28);
    puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 4;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar9;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar10;
  *(undefined8 **)(lVar4 + 8) = puVar10 + 1;
  *(int *)(puVar10 + 3) = iVar11;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)((longlong)puVar10 + 0x14) = 1;
  puVar10 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 5;
  if (*(undefined8 **)(local_50 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(local_50 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
  }
  *(undefined8 **)(local_50 + 0x30) = puVar9;
  *(int *)(local_50 + 0x14) = *(int *)(local_50 + 0x14) + 1;
  **(undefined8 **)(local_50 + 8) = puVar10;
  *(undefined8 **)(local_50 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = local_58;
  *(undefined4 *)(puVar10 + 3) = local_48;
  puVar10[4] = 0;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b61ea0 FUN_141b61ea0 body=678 status=ok
// SIG undefined FUN_141b61ea0(void)

void FUN_141b61ea0(longlong *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  longlong local_68 [2];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  uVar1 = param_2[1];
  GPUFFT::FFTDescription::FFT_TypeName(param_2,local_68);
  piVar6 = param_5;
  iVar5 = param_5[2] - *param_5;
  if ((*param_2 & 0xfffffffd) == 0) {
    iVar5 = param_5[3] - param_5[1];
  }
  lVar7 = FUN_141b64b70(lVar2,uVar1);
  local_res8 = 0;
  param_5 = (int *)0x0;
  FUN_141a19150(lVar3,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&param_5);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  lVar2 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 3;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 3;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar8;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar9;
  *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = uVar4;
  lVar2 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_58,lVar3,*(undefined8 *)(lVar2 + 0x60),*(undefined2 *)(lVar7 + 0xc4),param_6);
  param_5 = (int *)CONCAT44(piVar6[3] - piVar6[1],piVar6[2] - *piVar6);
  FUN_141b6d440(lVar7,lVar3,param_2,param_3,param_4,piVar6,&param_5);
  puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 4;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 4;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar8;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar9;
  *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar9 + 2) = 1;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 1;
  *(int *)(puVar9 + 3) = iVar5;
  puVar9 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 5;
  if (*(undefined8 **)(local_50 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(local_50 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
  }
  *(undefined8 **)(local_50 + 0x30) = puVar8;
  *(int *)(local_50 + 0x14) = *(int *)(local_50 + 0x14) + 1;
  **(undefined8 **)(local_50 + 8) = puVar9;
  *(undefined8 **)(local_50 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e40;
  puVar9[2] = local_58;
  *(undefined4 *)(puVar9 + 3) = local_48;
  puVar9[4] = 0;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b62150 FUN_141b62150 body=1026 status=ok
// SIG undefined FUN_141b62150(void)

void FUN_141b62150(longlong *param_1,uint *param_2,undefined8 *param_3,int *param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  bool bVar17;
  undefined8 local_res8;
  uint *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint local_98 [2];
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58 [3];
  
  uVar16 = param_2[1];
  lVar4 = param_1[1];
  puVar5 = (undefined *)*param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = uVar16;
  GPUFFT::FFTDescription::FFT_TypeName(param_2,local_58);
  local_a8 = *param_4;
  iStack_a4 = param_4[1];
  iStack_a0 = param_4[2];
  iStack_9c = param_4[3];
  if ((*param_2 & 0xfffffffd) == 0) {
    iStack_a0 = local_a8 + 0x800;
  }
  else {
    iStack_9c = iStack_a4 + 0x800;
  }
  local_88 = &DAT_146a1cc00;
  local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8,&local_88);
  plVar13 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  local_90 = 0;
  local_res8 = 0;
  plVar11 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar4 = *plVar11;
  FUN_141a19150(puVar5,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_90);
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x60);
  FRHIComputeShader::UpdateStats(uVar7);
  puVar1 = (ulonglong *)(puVar5 + 0x30);
  puVar14 = (undefined8 *)(*(longlong *)(puVar5 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar14 + 3;
  if (*(undefined8 **)(puVar5 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(puVar1,0x20);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar14 + 3;
  }
  *puVar1 = (ulonglong)puVar12;
  puVar12 = (undefined8 *)(puVar5 + 8);
  piVar2 = (int *)(puVar5 + 0x14);
  *piVar2 = *piVar2 + 1;
  *(undefined8 **)*puVar12 = puVar14;
  *puVar12 = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_144d91e50;
  puVar14[2] = uVar7;
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_70,puVar5,*(undefined8 *)(lVar6 + 0x60),*(undefined2 *)(lVar4 + 0xc4),param_5);
  lVar6 = *(longlong *)(lVar4 + 0x48);
  local_90 = CONCAT44(local_90._4_4_,uVar16 >> 0xb);
  local_98[0] = local_res20;
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  local_80 = &local_78;
  uVar7 = *(undefined8 *)(lVar6 + 0x60);
  local_78 = uVar7;
  local_88 = puVar5;
  if (*(short *)(lVar4 + 0xc2) != 0) {
    uVar3 = *(ushort *)(lVar4 + 0xc0);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    uVar8 = *local_res18;
    puVar14 = puVar15 + 5;
    if (*(undefined8 **)(puVar5 + 0x38) < puVar14) {
      FMemStackBase::AllocateNewChunk(puVar1,0x30);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar15 + 5;
    }
    *puVar1 = (ulonglong)puVar14;
    *piVar2 = *piVar2 + 1;
    *(undefined8 **)*puVar12 = puVar15;
    *puVar12 = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_144d92090;
    puVar15[2] = uVar7;
    *(uint *)(puVar15 + 3) = (uint)uVar3;
    puVar15[4] = uVar8;
  }
  puVar10 = local_res10;
  param_5 = param_5 & 0xffffffff00000000;
  bVar17 = (*local_res10 & 0xfffffffd) == 0;
  uVar16 = bVar17 | 2;
  if (1 < *local_res10) {
    uVar16 = (uint)bVar17;
  }
  local_res8 = CONCAT44(local_res8._4_4_,uVar16);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (local_88,*local_80,lVar4 + 200,&local_res8,param_5);
  puVar14 = (undefined8 *)
            GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                      (&local_88,lVar4 + 0xce,&local_a8);
  param_5 = param_5 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (*puVar14,*(undefined8 *)puVar14[1],lVar4 + 0xd4,local_98,param_5);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (*puVar14,*(undefined8 *)puVar14[1],lVar4 + 0xda,&local_90,param_5 & 0xffffffff00000000)
  ;
  iVar9 = iStack_a0 - local_a8;
  if ((*puVar10 & 0xfffffffd) == 0) {
    iVar9 = iStack_9c - iStack_a4;
  }
  puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar15 + 4;
  if (*(undefined8 **)(puVar5 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(puVar1);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar15 + 4;
  }
  *puVar1 = (ulonglong)puVar14;
  *piVar2 = *piVar2 + 1;
  *(undefined8 **)*puVar12 = puVar15;
  *puVar12 = puVar15 + 1;
  *(int *)(puVar15 + 3) = iVar9;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar15 + 2) = 1;
  *(undefined4 *)((longlong)puVar15 + 0x14) = 1;
  puVar14 = (undefined8 *)(*(longlong *)(local_68 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar14 + 5;
  if (*(undefined8 **)(local_68 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(local_68 + 0x30);
    puVar14 = (undefined8 *)(*(longlong *)(local_68 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar14 + 5;
  }
  *(undefined8 **)(local_68 + 0x30) = puVar12;
  *(int *)(local_68 + 0x14) = *(int *)(local_68 + 0x14) + 1;
  **(undefined8 **)(local_68 + 8) = puVar14;
  *(undefined8 **)(local_68 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_144d91e40;
  puVar14[2] = local_70;
  *(undefined4 *)(puVar14 + 3) = local_60;
  puVar14[4] = 0;
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b62560 FUN_141b62560 body=629 status=ok
// SIG undefined FUN_141b62560(void)

void FUN_141b62560(longlong *param_1,uint *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_68 [2];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  uVar1 = param_2[1];
  GPUFFT::FFTDescription::FFT_TypeName(param_2,local_68);
  lVar5 = FUN_141b655e0(lVar2,uVar1);
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(lVar3,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar2 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 3;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar6;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar7;
  *(undefined8 **)(lVar3 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e50;
  puVar7[2] = uVar4;
  lVar2 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_58,lVar3,*(undefined8 *)(lVar2 + 0x60),*(undefined2 *)(lVar5 + 0xc4),param_5);
  FUN_141b6d210(lVar5,lVar3,param_2,param_3,param_4,param_6,param_7);
  if ((*param_2 & 0xfffffffd) == 0) {
    iVar8 = param_4[3] - param_4[1];
  }
  else {
    iVar8 = param_4[2] - *param_4;
  }
  puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 4;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x28);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 4;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar6;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar7;
  *(undefined8 **)(lVar3 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar7 + 2) = 1;
  *(undefined4 *)((longlong)puVar7 + 0x14) = 1;
  *(int *)(puVar7 + 3) = iVar8;
  puVar7 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 5;
  if (*(undefined8 **)(local_50 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(local_50 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
  }
  *(undefined8 **)(local_50 + 0x30) = puVar6;
  *(int *)(local_50 + 0x14) = *(int *)(local_50 + 0x14) + 1;
  **(undefined8 **)(local_50 + 8) = puVar7;
  *(undefined8 **)(local_50 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e40;
  puVar7[2] = local_58;
  *(undefined4 *)(puVar7 + 3) = local_48;
  puVar7[4] = 0;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b627e0 FUN_141b627e0 body=978 status=ok
// SIG undefined FUN_141b627e0(void)

void FUN_141b627e0(longlong *param_1,uint *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  longlong local_98;
  undefined **local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar10 = param_2[1];
  local_res18 = param_3;
  GPUFFT::FFTDescription::FFT_TypeName(param_2,local_68);
  uVar13 = *param_2;
  iVar14 = (uVar10 >> 1) + 1;
  uVar6 = iVar14 * 2;
  if (1 < uVar13) {
    uVar6 = uVar10;
  }
  if ((uVar13 & 0xfffffffd) == 0) {
    uVar10 = param_2[1];
    uVar7 = param_2[2];
  }
  else {
    uVar10 = param_2[2];
    uVar7 = param_2[1];
  }
  local_res8 = CONCAT44(uVar7,uVar10);
  if ((uVar13 & 0xfffffffd) == 0) {
    local_res10 = CONCAT44(uVar7,uVar6);
  }
  else {
    local_res10 = CONCAT44(uVar6,uVar10);
  }
  local_88 = &DAT_146a1cea0;
  local_80 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res8,&local_88);
  plVar11 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_88 = (undefined *)0x0;
  local_res8 = 0;
  plVar8 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  lVar1 = *plVar8;
  FUN_141a19150(lVar2,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_88);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 3;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 3;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar12;
  *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  puVar12[2] = uVar4;
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_58,lVar2,*(undefined8 *)(lVar3 + 0x60),*(undefined2 *)(lVar1 + 0xc4),param_4);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  local_98 = 0;
  local_78 = 0;
  local_70 = local_res10;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  puVar9 = local_res18;
  local_90 = &local_88;
  puVar5 = *(undefined **)(lVar3 + 0x60);
  local_98 = lVar2;
  local_88 = puVar5;
  if (*(short *)(lVar1 + 0xc2) != 0) {
    local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,(uint)*(ushort *)(lVar1 + 0xc0));
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar4 = *puVar9;
    puVar9 = puVar12 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar9;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar12;
    *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_144d92090;
    puVar12[4] = uVar4;
    *(undefined4 *)(puVar12 + 3) = local_res18._0_4_;
    puVar12[2] = puVar5;
  }
  uVar13 = (uint)((*param_2 & 0xfffffffd) == 0);
  uVar10 = uVar13 | 2;
  if (1 < *param_2) {
    uVar10 = uVar13;
  }
  local_res8 = CONCAT44(local_res8._4_4_,uVar10);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (lVar2,local_88,lVar1 + 200,&local_res8,param_4 & 0xffffffff00000000);
  GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
            (&local_98,lVar1 + 0xce,&local_78);
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 4;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 4;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar9;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar12;
  *(undefined8 **)(lVar2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar12 + 2) = 1;
  *(undefined4 *)((longlong)puVar12 + 0x14) = 1;
  *(int *)(puVar12 + 3) = iVar14;
  puVar12 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 5;
  if (*(undefined8 **)(local_50 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(local_50 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(local_50 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
  }
  *(undefined8 **)(local_50 + 0x30) = puVar9;
  *(int *)(local_50 + 0x14) = *(int *)(local_50 + 0x14) + 1;
  **(undefined8 **)(local_50 + 8) = puVar12;
  *(undefined8 **)(local_50 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = local_58;
  *(undefined4 *)(puVar12 + 3) = local_48;
  puVar12[4] = 0;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b62bc0 FUN_141b62bc0 body=716 status=ok
// SIG undefined FUN_141b62bc0(void)

void FUN_141b62bc0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  longlong local_50 [3];
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  uVar1 = *(uint *)(param_2 + 4);
  local_res18 = param_3;
  GPUFFT::FFTDescription::FFT_TypeName(param_2,local_50);
  local_68 = &DAT_146a1cab0;
  local_60 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res8,&local_68);
  plVar9 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_res10 = 0;
  local_res8 = 0;
  plVar7 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  lVar2 = *plVar7;
  FUN_141a19150(lVar3,0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x60);
  FRHIComputeShader::UpdateStats(uVar5);
  puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar8;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar10;
  *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar5;
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  GPUFFTComputeShaderUtils::FScopedUAVBind::FScopedUAVBind
            (&local_68,lVar3,*(undefined8 *)(lVar4 + 0x60),*(undefined2 *)(lVar2 + 0xc4),param_6);
  FUN_141b6d660(lVar2,lVar3,param_2,param_4,local_res18,param_5,uVar1,uVar1 >> 0xb,param_7);
  puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 4;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x28);
    puVar10 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 4;
  }
  puVar6 = local_68;
  *(undefined8 **)(lVar3 + 0x30) = puVar8;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  lVar2 = CONCAT44(uStack_5c,local_60);
  **(undefined8 **)(lVar3 + 8) = puVar10;
  *(undefined8 **)(lVar3 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d8df50;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)((longlong)puVar10 + 0x14) = 1;
  *(uint *)(puVar10 + 3) = uVar1 >> 1;
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
  *(undefined8 **)(lVar2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = puVar6;
  *(undefined4 *)(puVar10 + 3) = local_58;
  puVar10[4] = 0;
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b62e90 FUN_141b62e90 body=131 status=ok
// SIG undefined FUN_141b62e90(void)

void FUN_141b62e90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x2278);
  *(int *)(lVar2 + 0x2278) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x227c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x2270,iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x2270) + (longlong)iVar1 * 8) = param_1[1];
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141b62f70 FUN_141b62f70 body=347 status=ok
// SIG undefined FUN_141b62f70(void)

undefined8 FUN_141b62f70(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar10;
  
  lVar12 = (longlong)*(int *)(param_2 + 0x80);
  uVar7 = 0;
  bVar4 = true;
  if (0 < lVar12) {
    uVar11 = uVar7;
    lVar13 = *(longlong *)(param_2 + 0x78);
    if (*(longlong *)(param_2 + 0x78) == 0) {
      lVar13 = param_2;
    }
    do {
      if (bVar4) {
        lVar5 = *(longlong *)(uVar11 + 0x30 + lVar13);
        if (lVar5 == 0) {
          lVar5 = lVar13 + 0x28 + uVar11;
        }
        lVar2 = lVar5 + (longlong)*(int *)(uVar11 + 0x38 + lVar13) * 8;
        uVar10 = uVar7;
        if (lVar5 == lVar2) goto LAB_141b62ffe;
        do {
          uVar9 = (int)uVar10 + *(int *)(lVar5 + 4);
          uVar10 = (ulonglong)uVar9;
          lVar5 = lVar5 + 8;
        } while (lVar5 != lVar2);
        if (((int)uVar9 < 1) || (*(int *)(uVar11 + 0x40 + lVar13) == 0)) goto LAB_141b62ffe;
        bVar4 = true;
      }
      else {
LAB_141b62ffe:
        bVar4 = false;
      }
      lVar12 = lVar12 + -1;
      uVar11 = uVar11 + 0x78;
    } while (lVar12 != 0);
    if (!bVar4) {
      return 0;
    }
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x28cc);
  *puVar1 = *puVar1 | 0x10;
  lVar12 = 0x2260;
  if (((byte)(*(uint *)(param_2 + 0x8c) >> 0x12) & 7) != 1) {
    lVar12 = 0x2250;
  }
  plVar8 = (longlong *)(lVar12 + *(longlong *)(param_1 + 0x10));
  uVar6 = FMemory::Malloc(0xb8,0);
  iVar3 = (int)plVar8[1];
  *(int *)(plVar8 + 1) = iVar3 + 1;
  if (*(int *)((longlong)plVar8 + 0xc) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
  }
  *(undefined8 *)(*plVar8 + (longlong)iVar3 * 8) = uVar6;
  lVar12 = *(longlong *)(*plVar8 + (longlong)iVar3 * 8);
  if (lVar12 != 0) {
    uVar7 = FUN_141b54c90(lVar12,param_2);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(uVar7 + 0xb0) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18);
  }
  return 1;
}



// FUNCTION 141b63190 FUN_141b63190 body=2588 status=ok
// SIG undefined FUN_141b63190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b63190(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  float *pfVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  float local_138;
  longlong *local_130;
  longlong *local_128;
  float local_120;
  float local_11c;
  float local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar13 = 0;
  iVar4 = *(int *)(param_3 + 0xc);
  local_110 = param_6;
  local_108 = param_7;
  local_100 = param_8;
  local_128 = param_5;
  local_130 = param_4;
  if (0 < iVar4) {
    do {
      iVar12 = 0;
      if (0 < iVar4) {
        do {
          iVar14 = 0;
          if (0 < iVar4) {
            do {
              lVar8 = (longlong)((iVar4 * iVar13 + iVar12) * iVar4 + iVar14);
              lVar2 = *param_5;
              pfVar1 = (float *)(lVar2 + lVar8 * 0x30);
              local_e8 = *pfVar1;
              fStack_e4 = pfVar1[1];
              fStack_e0 = pfVar1[2];
              fStack_dc = pfVar1[3];
              pfVar1 = (float *)(lVar2 + 0x10 + lVar8 * 0x30);
              local_d8 = *pfVar1;
              fStack_d4 = pfVar1[1];
              fStack_d0 = pfVar1[2];
              fStack_cc = pfVar1[3];
              pfVar1 = (float *)(lVar2 + 0x20 + lVar8 * 0x30);
              local_c8 = *pfVar1;
              fStack_c4 = pfVar1[1];
              fStack_c0 = pfVar1[2];
              fStack_bc = pfVar1[3];
              fVar16 = *(float *)(*param_4 + lVar8 * 4);
              if (0.0 < fVar16) {
                local_138 = 1.0 / fVar16;
                local_f8 = 0;
                uStack_f0 = 0;
                local_e8 = local_e8 * local_138;
                fStack_e4 = fStack_e4 * local_138;
                fStack_e0 = fStack_e0 * local_138;
                fStack_dc = fStack_dc * local_138;
                local_d8 = local_d8 * local_138;
                fStack_d4 = fStack_d4 * local_138;
                fStack_d0 = fStack_d0 * local_138;
                fStack_cc = fStack_cc * local_138;
                local_c8 = local_c8 * local_138;
                fStack_c4 = fStack_c4 * local_138;
                fStack_c0 = fStack_c0 * local_138;
                fStack_bc = fStack_bc * local_138;
                if (DAT_1464c1cb8 != 0) {
                  FUN_141b4dc20(&local_e8);
                }
              }
              if ((DAT_146a1c42c != 0) && (param_2 != 0)) {
                fVar15 = 1.0 / (float)*(int *)(param_3 + 0xc);
                local_11c = ((float)iVar12 + 0.5) * fVar15 * *(float *)(param_3 + 0x20) +
                            *(float *)(param_3 + 0x14);
                local_120 = ((float)iVar14 + 0.5) * fVar15 * *(float *)(param_3 + 0x1c) +
                            *(float *)(param_3 + 0x10);
                fVar16 = 10.0;
                local_118 = ((float)iVar13 + 0.5) * fVar15 * *(float *)(param_3 + 0x24) +
                            *(float *)(param_3 + 0x18);
                local_f8 = 0;
                uStack_f0 = 0x3f8000003f800000;
                if (1.0 < *(float *)(param_2 + 0x3cc) || *(float *)(param_2 + 0x3cc) == 1.0) {
                  fVar16 = *(float *)(param_2 + 0x3a4);
                  if (*(float *)(param_2 + 0x390) <= *(float *)(param_2 + 0x3a4)) {
                    fVar16 = *(float *)(param_2 + 0x390);
                  }
                  fVar16 = 10.0 / fVar16;
                }
                local_148 = 0xffffffff;
                FUN_1422e3300(param_2 + 0x1e40,&local_120,fVar16,&local_f8);
              }
              uVar10 = (ushort)((uint)local_e8 >> 0x10);
              uVar11 = uVar10 & 0x8000;
              uVar5 = (uint)local_e8 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)local_e8 & 0x7fffff | 0x800000,
                   uVar11 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar11,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar11 = uVar11 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar11 = uVar11 | ((uVar10 >> 7) - 0x10 & 0x1f) << 10 |
                                  (ushort)((uint)local_e8 >> 0xd) & 0x3ff;
              }
              else {
                uVar11 = uVar11 | 0x7bff;
              }
              uVar9 = (ushort)((uint)local_d8 >> 0x10);
              uVar10 = uVar9 & 0x8000;
              uVar5 = (uint)local_d8 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)local_d8 & 0x7fffff | 0x800000,
                   uVar10 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar10,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar10 = uVar10 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar10 = uVar10 | ((uVar9 >> 7) - 0x10 & 0x1f) << 10 |
                                  (ushort)((uint)local_d8 >> 0xd) & 0x3ff;
              }
              else {
                uVar10 = uVar10 | 0x7bff;
              }
              uVar6 = (ushort)((uint)local_c8 >> 0x10);
              uVar9 = uVar6 & 0x8000;
              uVar5 = (uint)local_c8 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)local_c8 & 0x7fffff | 0x800000,
                   uVar9 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar9,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar9 = uVar9 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar9 = uVar9 | ((uVar6 >> 7) - 0x10 & 0x1f) << 10 |
                                (ushort)((uint)local_c8 >> 0xd) & 0x3ff;
              }
              else {
                uVar9 = uVar9 | 0x7bff;
              }
              uVar3 = (ushort)((uint)fStack_dc >> 0x10);
              uVar6 = uVar3 & 0x8000;
              uVar5 = (uint)fStack_dc >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_dc & 0x7fffff | 0x800000,
                   uVar6 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar6,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar6 = uVar6 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar6 = uVar6 | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 |
                                (ushort)((uint)fStack_dc >> 0xd) & 0x3ff;
              }
              else {
                uVar6 = uVar6 | 0x7bff;
              }
              lVar2 = *local_110;
              *(ushort *)(lVar2 + lVar8 * 8) = uVar11;
              *(ushort *)(lVar2 + 2 + lVar8 * 8) = uVar10;
              *(ushort *)(lVar2 + 4 + lVar8 * 8) = uVar9;
              *(ushort *)(lVar2 + 6 + lVar8 * 8) = uVar6;
              uVar10 = (ushort)((uint)fStack_e4 >> 0x10);
              uVar11 = uVar10 & 0x8000;
              uVar5 = (uint)fStack_e4 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_e4 & 0x7fffff | 0x800000,
                   uVar11 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar11,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar11 = uVar11 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar11 = uVar11 | (ushort)((uint)fStack_e4 >> 0xd) & 0x3ff |
                                  ((uVar10 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar11 = uVar11 | 0x7bff;
              }
              uVar9 = (ushort)((uint)fStack_d4 >> 0x10);
              uVar10 = uVar9 & 0x8000;
              uVar5 = (uint)fStack_d4 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_d4 & 0x7fffff | 0x800000,
                   uVar10 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar10,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar10 = uVar10 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar10 = uVar10 | (ushort)((uint)fStack_d4 >> 0xd) & 0x3ff |
                                  ((uVar9 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar10 = uVar10 | 0x7bff;
              }
              uVar6 = (ushort)((uint)fStack_c4 >> 0x10);
              uVar9 = uVar6 & 0x8000;
              uVar5 = (uint)fStack_c4 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_c4 & 0x7fffff | 0x800000,
                   uVar9 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar9,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar9 = uVar9 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar9 = uVar9 | (ushort)((uint)fStack_c4 >> 0xd) & 0x3ff |
                                ((uVar6 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar9 = uVar9 | 0x7bff;
              }
              uVar3 = (ushort)((uint)fStack_cc >> 0x10);
              uVar6 = uVar3 & 0x8000;
              uVar5 = (uint)fStack_cc >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_cc & 0x7fffff | 0x800000,
                   uVar6 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar6,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar6 = uVar6 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar6 = uVar6 | (ushort)((uint)fStack_cc >> 0xd) & 0x3ff |
                                ((uVar3 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar6 = uVar6 | 0x7bff;
              }
              lVar2 = *local_108;
              *(ushort *)(lVar2 + lVar8 * 8) = uVar11;
              *(ushort *)(lVar2 + 2 + lVar8 * 8) = uVar10;
              *(ushort *)(lVar2 + 4 + lVar8 * 8) = uVar9;
              *(ushort *)(lVar2 + 6 + lVar8 * 8) = uVar6;
              uVar10 = (ushort)((uint)fStack_e0 >> 0x10);
              uVar11 = uVar10 & 0x8000;
              uVar5 = (uint)fStack_e0 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_e0 & 0x7fffff | 0x800000,
                   uVar11 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar11,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar11 = uVar11 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar11 = uVar11 | (ushort)((uint)fStack_e0 >> 0xd) & 0x3ff |
                                  ((uVar10 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar11 = uVar11 | 0x7bff;
              }
              uVar9 = (ushort)((uint)fStack_d0 >> 0x10);
              uVar10 = uVar9 & 0x8000;
              uVar5 = (uint)fStack_d0 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_d0 & 0x7fffff | 0x800000,
                   uVar10 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar10,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar10 = uVar10 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar10 = uVar10 | (ushort)((uint)fStack_d0 >> 0xd) & 0x3ff |
                                  ((uVar9 >> 7) - 0x10 & 0x1f) << 10;
              }
              else {
                uVar10 = uVar10 | 0x7bff;
              }
              uVar9 = (ushort)((uint)fStack_c0 >> 0x10);
              uVar6 = uVar9 & 0x8000;
              uVar5 = (uint)fStack_c0 >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_c0 & 0x7fffff | 0x800000,
                   uVar6 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar6,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar6 = uVar6 + 1;
                }
              }
              else if (uVar5 < 0x8f) {
                uVar6 = uVar6 | ((uVar9 >> 7) - 0x10 & 0x1f) << 10 |
                                (ushort)((uint)fStack_c0 >> 0xd) & 0x3ff;
              }
              else {
                uVar6 = uVar6 | 0x7bff;
              }
              local_138 = fStack_bc;
              uVar3 = (ushort)((uint)fStack_bc >> 0x10);
              uVar9 = uVar3 & 0x8000;
              uVar5 = (uint)fStack_bc >> 0x17 & 0xff;
              if (uVar5 < 0x71) {
                iVar4 = -uVar5 + 0x7e;
                if ((iVar4 < 0x19) &&
                   (uVar7 = (uint)fStack_bc & 0x7fffff | 0x800000,
                   uVar9 = (ushort)(uVar7 >> ((byte)iVar4 & 0x1f)) & 0x3ff | uVar9,
                   (uVar7 >> ((char)-uVar5 + 0x7dU & 0x1f) & 1) != 0)) {
                  uVar9 = uVar9 + 1;
                }
              }
              else {
                if (uVar5 < 0x8f) {
                  uVar3 = (ushort)((uint)fStack_bc >> 0xd) & 0x3ff |
                          ((uVar3 >> 7) - 0x10 & 0x1f) << 10;
                }
                else {
                  uVar3 = 0x7bff;
                }
                uVar9 = uVar9 | uVar3;
              }
              iVar14 = iVar14 + 1;
              lVar2 = *local_100;
              *(ushort *)(lVar2 + lVar8 * 8) = uVar11;
              *(ushort *)(lVar2 + 2 + lVar8 * 8) = uVar10;
              *(ushort *)(lVar2 + 4 + lVar8 * 8) = uVar6;
              *(ushort *)(lVar2 + 6 + lVar8 * 8) = uVar9;
              iVar4 = *(int *)(param_3 + 0xc);
              param_5 = local_128;
              param_4 = local_130;
            } while (iVar14 < iVar4);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar4);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar4);
  }
  return;
}



// FUNCTION 141b63bb0 FUN_141b63bb0 body=38 status=ok
// SIG undefined FUN_141b63bb0(void)

void FUN_141b63bb0(undefined8 param_1,longlong param_2,int param_3)

{
  if (*(longlong *)(param_2 + 0x1ab0) != 0) {
    FUN_141d2dde0(*(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x1ab0) + 0x17b0) + (longlong)param_3 * 8)
                  ,param_1);
    return;
  }
  return;
}



// FUNCTION 141b63be0 FUN_141b63be0 body=237 status=ok
// SIG undefined FUN_141b63be0(void)

void FUN_141b63be0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141b62e90(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144deb720;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141b63cd0 ExecuteTask body=285 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FUpdateCachePrimitivesTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141b767a0(param_1[2],param_1[3],param_1[4],*(undefined1 *)(param_1 + 7),param_1[5],param_1[6])
  ;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_141591a60(param_1[9],param_2,param_3);
  *param_1 = &PTR_FUN_144deb7b0;
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



// FUNCTION 141b63df0 FFTImage2D body=704 status=ok
// SIG undefined FFTImage2D(void)

undefined8
GPUFFT::FFTImage2D(longlong *param_1,uint *param_2,char param_3,int *param_4,undefined8 param_5,
                  longlong param_6,longlong param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_res8;
  uint *puVar10;
  uint local_68;
  uint uStack_64;
  uint local_60;
  undefined8 local_58;
  uint local_50;
  uint local_48;
  uint uStack_44;
  uint local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = *param_1;
  if (param_3 == '\0') {
    uVar7 = param_2[1];
    uVar5 = *param_2;
    local_50 = uVar5;
    local_58._4_4_ = uVar7;
  }
  else {
    uVar5 = *param_2;
    uVar7 = param_2[1];
    local_50 = uVar7;
    local_58._4_4_ = uVar5;
  }
  local_58._0_4_ = (uint)(param_3 == '\0');
  local_60 = local_50;
  local_68 = (uint)local_58;
  uStack_64 = local_58._4_4_;
  uStack_44 = uVar5;
  local_40 = uVar7;
  if (param_3 != '\0') {
    uStack_44 = uVar7;
    local_40 = uVar5;
  }
  local_48 = (uint)(param_3 != '\0');
  uVar2 = CONCAT44(uStack_44,local_48);
  local_50 = local_40 + 2;
  if (param_3 == '\0') {
    local_res8 = CONCAT44(uVar7 + 2,param_4[2] - *param_4);
  }
  else {
    local_res8 = CONCAT44(param_4[3] - param_4[1],uVar5 + 2);
  }
  local_30 = local_res8;
  local_48 = 0x7f7fffff;
  uStack_44 = 0xff7fffff;
  local_40 = 0;
  local_38 = 0;
  local_58 = uVar2;
  if (local_58._4_4_ < 0x1001) {
    puVar10 = &local_48;
    FUN_141b62560(param_1,&local_68,param_5,param_4,param_7 + 0x10,&local_38,puVar10);
    bVar9 = true;
  }
  else {
    puVar10 = &local_48;
    cVar3 = TwoForOneRealFFTImage1D::MultiPass
                      (param_1,&local_68,param_4,param_5,param_7,param_6,puVar10);
    bVar9 = cVar3 != '\0';
  }
  uVar2 = *(undefined8 *)(param_7 + 0x10);
  puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar8 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar8 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar4;
  *puVar8 = uVar2;
  puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 6;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 6;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar4;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar6;
  *(undefined8 **)(lVar1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[3] = puVar8;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = 0;
  if (local_58._4_4_ < 0x1001) {
    if (bVar9) {
      FUN_141b61bd0(param_1,&local_58,param_7 + 8,&local_38,param_6 + 0x10);
      return 1;
    }
  }
  else if ((bVar9) &&
          (cVar3 = ComplexFFTImage1D::MultiPass
                             (param_1,&local_58,&local_38,param_7 + 8,param_6,param_7,
                              (ulonglong)puVar10 & 0xffffffffffffff00), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141b640b0 FFT_TypeName body=262 status=ok
// SIG undefined FFT_TypeName(void)

undefined8 * GPUFFT::FFTDescription::FFT_TypeName(int *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = 0;
  if (iVar1 == 0) {
    param_2[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    FGenericPlatformString::Memcpy(*param_2,L"Forward Horizontal",0x26);
    return param_2;
  }
  if (iVar1 == 2) {
    param_2[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Inverse Horizontal",0x26);
    return param_2;
  }
  if (iVar1 == 1) {
    param_2[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Forward Vertical",0x22);
    return param_2;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  if (iVar1 == 3) {
    *(undefined4 *)(param_2 + 1) = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Inverse Vertical",0x22);
    return param_2;
  }
  *(undefined4 *)(param_2 + 1) = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Error",0xc);
  return param_2;
}



// FUNCTION 141b641c0 FinalizeCacheUpdates body=272 status=ok
// SIG undefined FinalizeCacheUpdates(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FIndirectLightingCache::FinalizeCacheUpdates
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_70 [4];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  uVar5 = DAT_1464a8214;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar6 = (longlong *)FTaskGraphInterface::Get();
  local_48 = 1;
  local_50 = (longlong *)0x0;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_70,0);
  lVar3 = *param_4;
  plVar7 = local_70;
  if (local_50 != (longlong *)0x0) {
    plVar7 = local_50;
  }
  *plVar7 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar6 + 0x48))(plVar6,local_70,uVar5);
  plVar7 = local_70;
  iVar4 = (int)local_48;
  if (local_50 != (longlong *)0x0) {
    plVar7 = local_50;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar7 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar7 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar7 = plVar7 + 1;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_88 = param_4 + 0xb;
  FUN_141b642d0(param_1,param_2,param_3,param_4 + 1);
  return;
}



// FUNCTION 141b642d0 FUN_141b642d0 body=958 status=ok
// SIG undefined FUN_141b642d0(void)

void FUN_141b642d0(longlong *param_1,longlong param_2,longlong param_3,undefined **param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined1 local_a8 [16];
  undefined **local_98;
  undefined2 local_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  cVar5 = FUN_141b65820();
  uVar9 = 0;
  if (cVar5 != '\0') {
    uVar13 = *(undefined8 *)(param_3 + 0xc0);
    if ((0 < *(int *)(param_4 + 1) - *(int *)((longlong)param_4 + 0x34)) &&
       ((char)param_1[5] == '\0')) {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    iVar8 = *(int *)(param_4 + 5);
    ppuStack_78 = param_4 + 2;
    local_c8._0_4_ = 0.0;
    local_c8._4_4_ = 1.4013e-45;
    local_b8._4_4_ = 0;
    uStack_b0 = 0;
    if (iVar8 != 0) {
      ppuVar12 = (undefined **)param_4[4];
      if ((undefined **)param_4[4] == (undefined **)0x0) {
        ppuVar12 = ppuStack_78;
      }
      uVar10 = *(uint *)ppuVar12;
      uVar7 = uVar9;
      uVar11 = uVar9;
      while (uVar10 == 0) {
        iVar6 = (int)uVar7;
        uStack_b0 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_b0;
        local_c8._0_4_ = (float)(iVar6 + 1);
        uVar7 = (ulonglong)(uint)(float)local_c8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141b643df;
        uVar10 = *(uint *)((longlong)ppuVar12 + ((longlong)iVar6 + 1) * 4);
      }
      local_c8._4_4_ = (float)(-uVar10 & uVar10);
      iVar6 = 0x1f;
      if (local_c8._4_4_ != 0.0) {
        for (; (uint)local_c8._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (local_c8._4_4_ == 0.0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_b8._4_4_ = (uStack_b0 - iVar6) + 0x1f;
      if (iVar8 < local_b8._4_4_) {
LAB_141b643df:
        local_b8._4_4_ = iVar8;
      }
    }
    puStack_70 = (undefined8 *)CONCAT44(local_b8._4_4_,0xffffffff);
    auVar4._8_4_ = uStack_b0;
    auVar4._0_8_ = puStack_70;
    auVar4._12_4_ = iStack_ac;
    local_60 = SUB84(param_4,0);
    uStack_5c = (undefined4)((ulonglong)param_4 >> 0x20);
    uStack_80._0_4_ = (uint)(float)local_c8;
    uStack_80._4_4_ = (uint)local_c8._4_4_;
    local_90 = 0;
    uStack_b0 = 0xffffffff;
    iStack_ac = local_b8._4_4_;
    uStack_c0._0_4_ = (float)local_c8;
    uStack_c0._4_4_ = local_c8._4_4_;
    uStack_68 = auVar4._8_8_;
    local_a8._8_4_ = local_60;
    local_a8._0_8_ = uStack_68;
    local_a8._12_4_ = uStack_5c;
    bVar3 = local_b8._4_4_ < *(int *)(param_4 + 5);
    local_c8 = param_4;
    local_98 = param_4;
    local_88 = param_4;
    local_b8 = ppuStack_78;
    if (bVar3) {
      do {
        FUN_141b750f0(param_1,param_2,uVar13,*local_c8 + (longlong)iStack_ac * 0x50 + 0x10);
        uStack_b0 = uStack_b0 & ~(uint)uStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      } while (iStack_ac < (int)*(uint *)(local_b8 + 3));
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        TSet<TTuple<FIntVector,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<FIntVector,FBlockUpdateInfo,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_98,*(int *)(local_98 + 1) - *(int *)((longlong)local_98 + 0x34),1)
        ;
      }
    }
    FUN_141b78ff0(param_1,param_5,*(undefined4 *)(param_3 + 100));
  }
  if (DAT_146a1c428 != 0) {
    uStack_80 = *(undefined8 *)(param_3 + 0xc0);
    local_88 = &PTR__scalar_deleting_destructor__144deb6d0;
    puStack_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    local_c8 = (undefined **)0x0;
    uStack_c0 = 0;
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x1168) == 0)) {
      uStack_c0._4_4_ = 0.0;
      uStack_c0._0_4_ = 0.0;
      local_c8._4_4_ = 0.0;
      local_c8._0_4_ = 0.0;
      fVar14 = (float)local_c8;
      fVar15 = local_c8._4_4_;
      fVar16 = (float)uStack_c0;
      fVar17 = uStack_c0._4_4_;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x1168) + 0x30);
      fVar14 = *(float *)(lVar2 + 0x100) * 0.31830987;
      fVar15 = *(float *)(lVar2 + 0x104) * 0.31830987;
      fVar16 = *(float *)(lVar2 + 0x108) * 0.31830987;
      fVar17 = *(float *)(lVar2 + 0x10c) * 0.31830987;
    }
    uVar7 = uVar9;
    iVar8 = DAT_146a1c428;
    ppuStack_78 = (undefined **)uStack_80;
    if (0 < *(int *)(param_2 + 0x13e0)) {
      do {
        switch(iVar8) {
        case 1:
          uVar13 = 1;
          break;
        case 2:
          uVar13 = 2;
          break;
        case 3:
          uVar13 = 3;
          break;
        case 4:
          uVar13 = 4;
          break;
        case 5:
          uVar13 = 5;
          break;
        case 6:
          uVar13 = 6;
          break;
        case 7:
          uVar13 = 7;
          break;
        default:
          goto switchD_141b645c0_default;
        }
        local_c8 = (undefined **)CONCAT44(fVar15,fVar14);
        uStack_c0 = CONCAT44(fVar17,fVar16);
        FUN_142701140(*(undefined8 *)(uVar9 + *(longlong *)(param_2 + 0x13d8)),&local_88,&local_c8,
                      uVar13);
        iVar8 = DAT_146a1c428;
switchD_141b645c0_default:
        uVar10 = (int)uVar7 + 1;
        uVar9 = uVar9 + 0x10;
        uVar7 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(param_2 + 0x13e0));
      if (puStack_70 != (undefined8 *)0x0) {
        piVar1 = (int *)(puStack_70 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puStack_70)(puStack_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141b646b0 FindId body=185 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FIntVector,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<FIntVector,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc_DEPRECATED(param_3,0xc);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x40;
        if (((*(int *)(lVar4 + lVar1) == *param_3) && (*(int *)(lVar4 + 4 + lVar1) == param_3[1]))
           && (*(int *)(lVar4 + 8 + lVar1) == param_3[2])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x38 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141b64770 FindId body=292 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (int)(*param_3 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar3 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar7 = (iVar6 - uVar5) - uVar3 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 10;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar2 +
                    (((longlong)(int)((uVar3 - uVar5) - uVar7) ^ (ulonglong)(uVar5 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar6;
        if ((*(ulonglong *)(lVar1 + lVar4 * 0x28) == *param_3) &&
           (*(ulonglong *)(lVar1 + 8 + lVar4 * 0x28) == param_3[1])) {
          *param_2 = iVar6;
          return param_2;
        }
        iVar6 = *(int *)(lVar1 + 0x20 + lVar4 * 0x28);
      } while (iVar6 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141b648a0 FUN_141b648a0 body=129 status=ok
// SIG undefined FUN_141b648a0(void)

undefined8 FUN_141b648a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
    lVar2 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar2 = param_1 + 400;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x1a0) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x158);
      do {
        lVar3 = (longlong)iVar1;
        if (*(int *)(lVar2 + lVar3 * 0x18) == param_2) {
          if (iVar1 == -1) {
            return 0;
          }
          lVar2 = lVar2 + lVar3 * 0x18;
          if (lVar2 == 0) {
            return 0;
          }
          return *(undefined8 *)(lVar2 + 8);
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar3 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 141b64930 FUN_141b64930 body=476 status=ok
// SIG undefined FUN_141b64930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141b64930(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  plVar4 = (longlong *)0x0;
  if (param_2 < 0x81) {
    if (param_2 == 0x80) {
      local_18 = &DAT_146a22370;
    }
    else {
      switch(param_2) {
      case 2:
        local_18 = &DAT_146a220d0;
        break;
      default:
        goto switchD_141b64980_caseD_3;
      case 4:
        local_18 = &DAT_146a22610;
        break;
      case 8:
        local_18 = &DAT_146a22b50;
        break;
      case 0x10:
        local_18 = &DAT_146a22220;
        break;
      case 0x20:
        local_18 = &DAT_146a22760;
        break;
      case 0x40:
        local_18 = &DAT_146a22ca0;
      }
    }
  }
  else {
    if (param_2 == 0x100) {
      local_10 = 0;
      local_18 = &DAT_146a228b0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
      plVar1 = plVar4;
      if (local_res10[0] != -1) {
        plVar1 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      plVar3 = plVar1 + 2;
      if (plVar1 == (longlong *)0x0) {
        plVar3 = plVar4;
      }
      plVar4 = (longlong *)*plVar3;
switchD_141b64980_caseD_3:
      return plVar4;
    }
    if (param_2 == 0x200) {
      local_18 = &DAT_146a22df0;
    }
    else if (param_2 == 0x400) {
      local_18 = &DAT_146a224c0;
    }
    else if (param_2 == 0x800) {
      local_18 = &DAT_146a22a00;
    }
    else {
      if (param_2 != 0x1000) {
        return (longlong *)0x0;
      }
      local_18 = &DAT_146a22f40;
    }
  }
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  if (local_res10[0] != -1) {
    lVar2 = (longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38);
    plVar1 = (longlong *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      plVar1 = plVar4;
    }
    return (longlong *)*plVar1;
  }
  return _DAT_00000000;
}



// FUNCTION 141b64b70 FUN_141b64b70 body=476 status=ok
// SIG undefined FUN_141b64b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141b64b70(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  plVar4 = (longlong *)0x0;
  if (param_2 < 0x81) {
    if (param_2 == 0x80) {
      local_18 = &DAT_146a242f0;
    }
    else {
      switch(param_2) {
      case 2:
        local_18 = &DAT_146a24050;
        break;
      default:
        goto switchD_141b64bc0_caseD_3;
      case 4:
        local_18 = &DAT_146a24590;
        break;
      case 8:
        local_18 = &DAT_146a24ad0;
        break;
      case 0x10:
        local_18 = &DAT_146a241a0;
        break;
      case 0x20:
        local_18 = &DAT_146a246e0;
        break;
      case 0x40:
        local_18 = &DAT_146a24c20;
      }
    }
  }
  else {
    if (param_2 == 0x100) {
      local_10 = 0;
      local_18 = &DAT_146a24830;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
      plVar1 = plVar4;
      if (local_res10[0] != -1) {
        plVar1 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      plVar3 = plVar1 + 2;
      if (plVar1 == (longlong *)0x0) {
        plVar3 = plVar4;
      }
      plVar4 = (longlong *)*plVar3;
switchD_141b64bc0_caseD_3:
      return plVar4;
    }
    if (param_2 == 0x200) {
      local_18 = &DAT_146a24d70;
    }
    else if (param_2 == 0x400) {
      local_18 = &DAT_146a24440;
    }
    else if (param_2 == 0x800) {
      local_18 = &DAT_146a24980;
    }
    else {
      if (param_2 != 0x1000) {
        return (longlong *)0x0;
      }
      local_18 = &DAT_146a24ec0;
    }
  }
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  if (local_res10[0] != -1) {
    lVar2 = (longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38);
    plVar1 = (longlong *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      plVar1 = plVar4;
    }
    return (longlong *)*plVar1;
  }
  return _DAT_00000000;
}



// FUNCTION 141b64db0 FUN_141b64db0 body=652 status=ok
// SIG undefined FUN_141b64db0(void)

void FUN_141b64db0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 local_38 [12];
  float local_2c;
  
  uVar4 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a25100) &&
     (_Init_thread_header(&DAT_146a25100), DAT_146a25100 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.MinResolution");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a250f8 = uVar2;
    _Init_thread_footer(&DAT_146a25100);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a25110) &&
     (_Init_thread_header(&DAT_146a25110), DAT_146a25110 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.FadeResolution");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a25108 = uVar2;
    _Init_thread_footer(&DAT_146a25110);
  }
  iVar5 = *(int *)(DAT_146a250f8 + 4);
  if (*(int *)(DAT_146a250f8 + 4) < 1) {
    iVar5 = 0;
  }
  uVar2 = (ulonglong)*(uint *)(DAT_146a25108 + 4);
  if ((int)*(uint *)(DAT_146a25108 + 4) < 1) {
    uVar2 = uVar4;
  }
  FUN_1427633e0(param_1,local_38,param_2,0);
  if (local_2c <= 1.0) {
    local_2c = 1.0;
  }
  fVar7 = (float)(*(int *)(param_1 + 0x1aa8) - *(int *)(param_1 + 0x1aa0)) * 0.5 *
          *(float *)(param_1 + 0x390);
  fVar6 = (float)(*(int *)(param_1 + 0x1aac) - *(int *)(param_1 + 0x1aa4)) * 0.5 *
          *(float *)(param_1 + 0x3a4);
  if (fVar7 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar6 = *(float *)(param_2 + 0xc);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a25120) &&
     (_Init_thread_header(&DAT_146a25120), DAT_146a25120 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.TexelsPerPixel");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146a25118 = uVar4;
    _Init_thread_footer(&DAT_146a25120);
  }
  CalculateShadowFadeAlpha(*(float *)(DAT_146a25118 + 4) * ((fVar7 * fVar6) / local_2c),uVar2,iVar5)
  ;
  return;
}



// FUNCTION 141b65040 GetLuminance body=438 status=ok
// SIG undefined GetLuminance(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * TSHVectorRGB<3>::GetLuminance(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  float local_a8 [36];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)local_e8;
  lVar10 = 3;
  lVar11 = 3;
  local_a8[0x18] = 0.0;
  local_a8[0x19] = 0.0;
  local_a8[0x1a] = 0.0;
  local_a8[0x1b] = 0.0;
  local_a8[0x1c] = 0.0;
  local_a8[0x1d] = 0.0;
  local_a8[0x1e] = 0.0;
  local_a8[0x1f] = 0.0;
  local_a8[0x20] = 0.0;
  local_a8[0x21] = 0.0;
  local_a8[0x22] = 0.0;
  local_a8[0x23] = 0.0;
  lVar8 = 0;
  do {
    pfVar9 = (float *)(lVar8 + 0x60 + (longlong)param_1);
    fVar2 = pfVar9[1];
    fVar3 = pfVar9[2];
    fVar4 = pfVar9[3];
    *(float *)((longlong)local_a8 + lVar8 + 0x60) = *pfVar9 * 0.11;
    *(float *)((longlong)local_a8 + lVar8 + 100) = fVar2 * 0.11;
    *(float *)((longlong)local_a8 + lVar8 + 0x68) = fVar3 * 0.11;
    *(float *)((longlong)local_a8 + lVar8 + 0x6c) = fVar4 * 0.11;
    lVar11 = lVar11 + -1;
    lVar8 = lVar8 + 0x10;
  } while (lVar11 != 0);
  lVar11 = 3;
  local_a8[0xc] = 0.0;
  local_a8[0xd] = 0.0;
  local_a8[0xe] = 0.0;
  local_a8[0xf] = 0.0;
  local_a8[0x10] = 0.0;
  local_a8[0x11] = 0.0;
  local_a8[0x12] = 0.0;
  local_a8[0x13] = 0.0;
  local_a8[0x14] = 0.0;
  local_a8[0x15] = 0.0;
  local_a8[0x16] = 0.0;
  local_a8[0x17] = 0.0;
  lVar8 = 0;
  do {
    pfVar9 = (float *)(lVar8 + 0x30 + (longlong)param_1);
    fVar2 = pfVar9[1];
    fVar3 = pfVar9[2];
    fVar4 = pfVar9[3];
    *(float *)((longlong)local_a8 + lVar8 + 0x30) = *pfVar9 * 0.59;
    *(float *)((longlong)local_a8 + lVar8 + 0x34) = fVar2 * 0.59;
    *(float *)((longlong)local_a8 + lVar8 + 0x38) = fVar3 * 0.59;
    *(float *)((longlong)local_a8 + lVar8 + 0x3c) = fVar4 * 0.59;
    lVar11 = lVar11 + -1;
    lVar8 = lVar8 + 0x10;
  } while (lVar11 != 0);
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[6] = 0.0;
  local_a8[7] = 0.0;
  local_a8[8] = 0.0;
  local_a8[9] = 0.0;
  local_a8[10] = 0.0;
  local_a8[0xb] = 0.0;
  local_d8 = 3;
  pfVar9 = param_1;
  do {
    fVar2 = *pfVar9;
    fVar3 = pfVar9[1];
    fVar4 = pfVar9[2];
    fVar5 = pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar1 = (float *)(((longlong)&local_b8 - (longlong)param_1) + (longlong)pfVar9);
    *pfVar1 = fVar2 * 0.3;
    pfVar1[1] = fVar3 * 0.3;
    pfVar1[2] = fVar4 * 0.3;
    pfVar1[3] = fVar5 * 0.3;
    local_d8 = local_d8 + -1;
  } while (local_d8 != 0);
  lVar11 = 3;
  uStack_d0 = local_d8;
  lStack_c8 = local_d8;
  local_c0 = local_d8;
  local_b8 = local_d8;
  local_b0 = local_d8;
  lVar8 = 0;
  do {
    fVar2 = *(float *)((longlong)local_a8 + lVar8 + 4);
    fVar3 = *(float *)((longlong)local_a8 + lVar8 + 8);
    fVar4 = *(float *)((longlong)local_a8 + lVar8 + 0xc);
    fVar5 = *(float *)((longlong)local_a8 + lVar8 + 0x34);
    fVar6 = *(float *)((longlong)local_a8 + lVar8 + 0x38);
    fVar7 = *(float *)((longlong)local_a8 + lVar8 + 0x3c);
    *(float *)((longlong)&local_d8 + lVar8) =
         *(float *)((longlong)local_a8 + lVar8) + *(float *)((longlong)local_a8 + lVar8 + 0x30);
    *(float *)((longlong)&local_d8 + lVar8 + 4) = fVar2 + fVar5;
    *(float *)((longlong)&uStack_d0 + lVar8) = fVar3 + fVar6;
    *(float *)((longlong)&uStack_d0 + lVar8 + 4) = fVar4 + fVar7;
    lVar8 = lVar8 + 0x10;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  lVar8 = 0;
  do {
    fVar2 = *(float *)((longlong)local_a8 + lVar8 + 100);
    fVar3 = *(float *)((longlong)local_a8 + lVar8 + 0x68);
    fVar4 = *(float *)((longlong)local_a8 + lVar8 + 0x6c);
    fVar5 = *(float *)((longlong)&local_d8 + lVar8 + 4);
    fVar6 = *(float *)((longlong)&uStack_d0 + lVar8);
    fVar7 = *(float *)((longlong)&uStack_d0 + lVar8 + 4);
    pfVar9 = (float *)(((longlong)param_2 - (longlong)&local_d8) + (longlong)&local_d8 + lVar8);
    *pfVar9 = *(float *)((longlong)local_a8 + lVar8 + 0x60) +
              *(float *)((longlong)&local_d8 + lVar8);
    pfVar9[1] = fVar2 + fVar5;
    pfVar9[2] = fVar3 + fVar6;
    pfVar9[3] = fVar4 + fVar7;
    lVar10 = lVar10 + -1;
    lVar8 = lVar8 + 0x10;
  } while (lVar10 != 0);
  return param_2;
}



// FUNCTION 141b65200 FUN_141b65200 body=293 status=ok
// SIG undefined FUN_141b65200(void)

longlong * FUN_141b65200(void)

{
  char cVar1;
  longlong *plVar2;
  
  if (DAT_146a25128 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x330);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar2 + 1) = 4;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined1 *)(plVar2 + 5) = 0;
      *plVar2 = (longlong)&PTR_FUN_144deb7c0;
      FForwardLightData::FForwardLightData(plVar2 + 6);
      plVar2[0x56] = 0;
      plVar2[0x58] = 0;
      plVar2[0x59] = 0;
      *(undefined4 *)(plVar2 + 0x5a) = 0;
      plVar2[0x57] = (longlong)&PTR__scalar_deleting_destructor__144deb628;
      plVar2[0x5b] = 0;
      plVar2[0x5c] = 0;
      plVar2[0x5d] = 0;
      plVar2[0x5e] = 0;
      *(undefined4 *)(plVar2 + 0x5f) = 0;
      plVar2[0x60] = 0;
      plVar2[0x61] = 0;
      plVar2[0x62] = 0;
      plVar2[99] = 0;
      *(undefined4 *)(plVar2 + 100) = 0;
      plVar2[0x65] = 0;
      *plVar2 = (longlong)&PTR_FUN_144deb800;
      cVar1 = IsInRenderingThread();
      if (cVar1 == '\0') {
        FUN_141edf270(plVar2);
      }
      else {
        (**(code **)(*plVar2 + 0x28))();
      }
    }
    DAT_146a25128 = plVar2;
    return plVar2 + 6;
  }
  return (longlong *)((longlong)DAT_146a25128 + 0x30);
}



// FUNCTION 141b65330 FUN_141b65330 body=320 status=ok
// SIG undefined FUN_141b65330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b65330(void)

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
  
  if (DAT_146a253e8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b655b0;
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
        return *(undefined8 *)(DAT_146a253e8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a253e8 = 0;
        return _DAT_00000030;
      }
      DAT_146a253e8 =
           TStaticStateRHI<TStaticBlendState<1,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a253e8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<1,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a253e8 != 0) {
      lVar7 = DAT_146a253e8;
    }
    DAT_146a253e8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a253e8 + 0x30);
}



// FUNCTION 141b65470 FUN_141b65470 body=320 status=ok
// SIG undefined FUN_141b65470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b65470(void)

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
  
  if (DAT_146a253e0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b655c0;
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
        return *(undefined8 *)(DAT_146a253e0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a253e0 = 0;
        return _DAT_00000030;
      }
      DAT_146a253e0 =
           TStaticStateRHI<TStaticBlendState<15,3,1,1,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a253e0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,3,1,1,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a253e0 != 0) {
      lVar7 = DAT_146a253e0;
    }
    DAT_146a253e0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a253e0 + 0x30);
}



// FUNCTION 141b655e0 FUN_141b655e0 body=476 status=ok
// SIG undefined FUN_141b655e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141b655e0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  plVar4 = (longlong *)0x0;
  if (param_2 < 0x81) {
    if (param_2 == 0x80) {
      local_18 = &DAT_146a23330;
    }
    else {
      switch(param_2) {
      case 2:
        local_18 = &DAT_146a23090;
        break;
      default:
        goto switchD_141b65630_caseD_3;
      case 4:
        local_18 = &DAT_146a235d0;
        break;
      case 8:
        local_18 = &DAT_146a23b10;
        break;
      case 0x10:
        local_18 = &DAT_146a231e0;
        break;
      case 0x20:
        local_18 = &DAT_146a23720;
        break;
      case 0x40:
        local_18 = &DAT_146a23c60;
      }
    }
  }
  else {
    if (param_2 == 0x100) {
      local_10 = 0;
      local_18 = &DAT_146a23870;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
      plVar1 = plVar4;
      if (local_res10[0] != -1) {
        plVar1 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
      }
      plVar3 = plVar1 + 2;
      if (plVar1 == (longlong *)0x0) {
        plVar3 = plVar4;
      }
      plVar4 = (longlong *)*plVar3;
switchD_141b65630_caseD_3:
      return plVar4;
    }
    if (param_2 == 0x200) {
      local_18 = &DAT_146a23db0;
    }
    else if (param_2 == 0x400) {
      local_18 = &DAT_146a23480;
    }
    else if (param_2 == 0x800) {
      local_18 = &DAT_146a239c0;
    }
    else {
      if (param_2 != 0x1000) {
        return (longlong *)0x0;
      }
      local_18 = &DAT_146a23f00;
    }
  }
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  if (local_res10[0] != -1) {
    lVar2 = (longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38);
    plVar1 = (longlong *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      plVar1 = plVar4;
    }
    return (longlong *)*plVar1;
  }
  return _DAT_00000000;
}



// FUNCTION 141b65820 FUN_141b65820 body=277 status=ok
// SIG undefined FUN_141b65820(void)

byte FUN_141b65820(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  
  bVar3 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a25018) {
    _Init_thread_header(&DAT_146a25018);
    if (DAT_146a25018 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
      lVar5 = 0;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      DAT_146a25010 = lVar5;
      _Init_thread_footer(&DAT_146a25018);
    }
  }
  if ((DAT_146a25010 == 0) || (*(int *)(DAT_146a25010 + 4) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((((DAT_1464c1cb0 != 0) && (bVar2)) && (0 < *(int *)(param_2 + 0x13e0))) &&
     (lVar5 = (longlong)*(int *)(param_3 + 200), 0 < lVar5)) {
    plVar4 = (longlong *)(*(longlong *)(param_3 + 0xc0) + 0x10);
    do {
      lVar1 = *plVar4;
      plVar4 = plVar4 + 0x61a;
      bVar3 = bVar3 | *(byte *)(lVar1 + 0x2c) & 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return bVar3;
}



// FUNCTION 141b65940 FUN_141b65940 body=837 status=ok
// SIG undefined FUN_141b65940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b65940(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined1 local_180;
  wchar_t *local_178;
  undefined2 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined2 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_130;
  wchar_t *local_128;
  undefined2 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined1 local_e0;
  wchar_t *local_d8;
  undefined2 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  wchar_t *local_88;
  undefined2 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  wchar_t *local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  iVar2 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
    iVar2 = *(int *)(param_1 + 0x58);
  }
  if (0 < iVar2) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    local_1a4 = (undefined4)uVar1;
    local_1c8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_1a0 = local_1c8._4_4_;
    local_1a8 = DAT_1464c9cc8;
    local_1d8 = 1;
    local_1e0 = 1;
    local_1e8 = L"HeightAtlas";
    local_1b8 = _DAT_1464c9cb8;
    uStack_1b4 = uRam00000001464c9cbc;
    uStack_1b0 = uRam00000001464c9cc0;
    uStack_1ac = DAT_1464c9cc4;
    local_19c = 0;
    local_198 = 1;
    local_194 = 0x10000;
    local_190 = 1;
    local_18c = 4;
    local_184 = 1;
    local_180 = 0;
    local_178 = L"UnknownTexture2D";
    local_170 = 1;
    local_1c8 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_1b8,param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    local_154 = (undefined4)uVar1;
    local_1c8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_150 = local_1c8._4_4_;
    local_158 = DAT_1464c9cc8;
    local_1d8 = 1;
    local_1e0 = 1;
    local_1e8 = L"NormalAtlas";
    local_168 = _DAT_1464c9cb8;
    uStack_164 = uRam00000001464c9cbc;
    uStack_160 = uRam00000001464c9cc0;
    uStack_15c = DAT_1464c9cc4;
    local_14c = 0;
    local_148 = 1;
    local_144 = 0x10000;
    local_140 = 1;
    local_13c = 0x28;
    local_134 = 1;
    local_130 = 0;
    local_128 = L"UnknownTexture2D";
    local_120 = 1;
    local_1c8 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_168,param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    local_104 = (undefined4)uVar1;
    local_1c8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_1d8 = 1;
    local_118 = _DAT_1464c9cb8;
    uStack_114 = uRam00000001464c9cbc;
    uStack_110 = uRam00000001464c9cc0;
    uStack_10c = DAT_1464c9cc4;
    local_100 = local_1c8._4_4_;
    local_108 = DAT_1464c9cc8;
    local_fc = 0;
    local_f8 = 1;
    local_f4 = 0x10000;
    local_f0 = 1;
    local_ec = 0x25;
    local_e4 = 1;
    local_e0 = 0;
    local_d8 = L"UnknownTexture2D";
    local_d0 = 1;
    local_1e0 = 1;
    local_1e8 = L"DiffuseColorAtlas";
    local_1c8 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_118,param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    local_b4 = (undefined4)uVar1;
    local_1c8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_b0 = local_1c8._4_4_;
    local_b8 = DAT_1464c9cb0;
    local_1d8 = 1;
    local_1e0 = 1;
    local_1e8 = L"HeightfieldShadowingAtlas";
    local_c8 = _DAT_1464c9ca0;
    uStack_c4 = uRam00000001464c9ca4;
    uStack_c0 = uRam00000001464c9ca8;
    uStack_bc = uRam00000001464c9cac;
    local_ac = 0;
    local_a8 = 1;
    local_a4 = 0x10000;
    local_a0 = 1;
    local_9c = 3;
    local_94 = 1;
    local_90 = 0;
    local_88 = L"UnknownTexture2D";
    local_80 = 1;
    local_1c8 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_c8,param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    local_64 = (undefined4)uVar1;
    local_1c8._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_60 = local_1c8._4_4_;
    local_68 = DAT_1464c9c98;
    local_1d8 = 1;
    local_1e0 = 1;
    local_1e8 = L"HeightfieldLightingAtlas";
    local_78 = _DAT_1464c9c88;
    uStack_74 = uRam00000001464c9c8c;
    uStack_70 = uRam00000001464c9c90;
    uStack_6c = uRam00000001464c9c94;
    local_5c = 0;
    local_58 = 1;
    local_54 = 0x10000;
    local_50 = 1;
    local_4c = 0x1a;
    local_44 = 1;
    local_40 = 0;
    local_38 = L"UnknownTexture2D";
    local_30 = 0;
    local_1c8 = uVar1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_78,param_1 + 0x50);
  }
  return;
}



// FUNCTION 141b65c90 FUN_141b65c90 body=489 status=ok
// SIG undefined FUN_141b65c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b65c90(longlong param_1)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 local_30;
  wchar_t *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar1 = DAT_1464c9c14;
  }
  if ((1 < iVar1) && (DAT_1464c9c1a != '\0')) {
    local_20 = 1;
    local_58 = DAT_146ab6938;
    local_54 = *(undefined4 *)(param_1 + 0x34);
    local_48 = 1;
    local_40 = 1;
    local_68 = _DAT_146ab6928;
    uStack_64 = uRam0000000146ab692c;
    uStack_60 = uRam0000000146ab6930;
    uStack_5c = uRam0000000146ab6934;
    local_44 = 0x10000;
    local_3c = 10;
    local_38 = 0x48;
    local_30 = 0;
    local_28 = L"UnknownTextureVolume";
    local_78 = 1;
    local_80 = 1;
    local_88 = L"IndirectLightingCache_0";
    local_50 = local_54;
    local_4c = local_54;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_68,param_1 + 0x38);
    local_78 = 1;
    local_80 = 1;
    local_88 = L"IndirectLightingCache_1";
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_68,param_1 + 0x40);
    local_78 = 1;
    local_80 = 1;
    local_88 = L"IndirectLightingCache_2";
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_68,param_1 + 0x48);
    local_78 = 1;
    local_80 = 1;
    local_88 = L"IndirectLightingCache_0_TimeOfDay";
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_68,param_1 + 0x50);
    local_78 = 1;
    local_80 = 1;
    local_88 = L"IndirectLightingCache_1_TimeOfDay";
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_68,param_1 + 0x58);
    local_78 = 1;
    local_80 = 1;
    local_88 = L"IndirectLightingCache_2_TimeOfDay";
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_68,param_1 + 0x60);
  }
  return;
}



// FUNCTION 141b65e80 FUN_141b65e80 body=341 status=ok
// SIG undefined FUN_141b65e80(void)

void FUN_141b65e80(longlong param_1)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (1 < DAT_1464c9c14) {
    if (DAT_1464c9c14 < 3) {
      *(undefined8 *)(param_1 + 0x290) = DAT_146ac3da8;
      *(undefined8 *)(param_1 + 0x298) = DAT_146ac3da8;
      *(undefined8 *)(param_1 + 0x2a0) = DAT_146ac3da8;
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x2b8) + 8))((longlong *)(param_1 + 0x2b8),0x10,9,1,2);
      FUN_141ac25e0(param_1 + 0x2e0,4,1,0x1c,0,0,0);
      FUN_141ac25e0(param_1 + 0x308,2,1,0x20,0,0,0);
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x2f0);
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x318);
    }
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&local_res10,param_1 + 0x30,&DAT_146a1ea78,2);
    local_res18[0] = local_res10;
    if (local_res10 != 0) {
      LOCK();
      *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2b0,local_res18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141b65fe0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<1,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<1,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b66010 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,3,1,1,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,3,1,1,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b66040 FUN_141b66040 body=267 status=ok
// SIG undefined FUN_141b66040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b66040(longlong param_1,int param_2,int param_3,undefined1 param_4,uint param_5)

{
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_58 = 1;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_80 = &local_68;
  local_44 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_88 = param_5 | 0x200;
  *(int *)(param_1 + 0x18) = param_2 * param_3;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_78,&DAT_146ab6e78);
  TRefCountPtr<FRHIIndexBuffer>::operator=((undefined8 *)(param_1 + 8),local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  local_80 = (undefined8 *)CONCAT71(local_80._1_7_,param_4);
  local_88 = param_2;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,local_78,&DAT_146ab6e78,*(undefined8 *)(param_1 + 8));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x10,local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  return;
}



// FUNCTION 141b66150 FUN_141b66150 body=1516 status=ok
// SIG undefined FUN_141b66150(void)

void FUN_141b66150(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
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
  undefined8 local_158;
  int local_150;
  undefined8 local_148;
  int local_140;
  float local_138;
  int local_134;
  int local_130;
  undefined8 local_12c;
  int local_124;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  int local_f0;
  float local_ec;
  longlong local_e8;
  ulonglong uVar9;
  
  iVar4 = *(int *)(param_3 + 0xc);
  fVar15 = 1.0 / (float)iVar4;
  fVar21 = *(float *)(param_3 + 0x20) * 0.5;
  fVar22 = *(float *)(param_3 + 0x24) * 0.5;
  fVar20 = *(float *)(param_3 + 0x1c) * 0.5;
  fVar17 = *(float *)(param_3 + 0x14);
  fVar24 = fVar15 * fVar21;
  fVar18 = *(float *)(param_3 + 0x18);
  fVar13 = *(float *)(param_3 + 0x10);
  local_f4 = fVar24;
  if ((DAT_1464c1cc0 == 0) || (iVar4 < 3)) {
    uVar9 = 0;
    if (0 < *(int *)(param_2 + 0x13e0)) {
      uVar10 = uVar9;
      do {
        local_150 = *(undefined4 *)(param_3 + 0xc);
        local_148 = CONCAT44(local_150,local_150);
        local_158 = CONCAT44(local_150,local_150);
        local_12c = 0;
        local_124 = 0;
        local_10c = 0;
        local_fc = 0;
        local_140 = local_150;
        local_118 = fVar15 * fVar20 + fVar20 + fVar13;
        local_114 = fVar21 + fVar17 + fVar24;
        local_110 = fVar15 * fVar22 + fVar22 + fVar18;
        local_108 = fVar20;
        local_104 = fVar21;
        local_100 = fVar22;
        FUN_14270efd0(*(undefined8 *)(uVar10 + *(longlong *)(param_2 + 0x13d8)),&local_118,
                      &local_158,&local_148,&local_12c,param_4,param_5,param_6);
        uVar10 = uVar10 + 0x10;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_2 + 0x13e0));
    }
  }
  else {
    local_130 = 0;
    if (0 < *(int *)(param_2 + 0x13e0)) {
      local_e8 = 0;
      do {
        lVar1 = *(longlong *)(local_e8 + *(longlong *)(param_2 + 0x13d8));
        uVar8 = 0xc;
        if (DAT_1464c1cbc < 0xc) {
          uVar8 = DAT_1464c1cbc;
        }
        lVar2 = *(longlong *)(lVar1 + 0x20);
        fVar13 = _guard_xfg_dispatch_icall_nop(0.53125,(float)(int)uVar8);
        fVar13 = fVar13 * *(float *)(lVar2 + 0x70);
        local_158 = 0;
        local_150 = 0;
        local_148 = 0;
        fVar13 = fVar13 + fVar13;
        fVar16 = *(float *)(param_3 + 0x1c) / (float)iVar4;
        fVar17 = 1.0 / (float)iVar4;
        fVar21 = fVar13 / fVar16;
        fVar18 = fVar17 * *(float *)(param_3 + 0x24);
        fVar17 = fVar17 * *(float *)(param_3 + 0x20);
        fVar14 = fVar13 / fVar18;
        iVar7 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
        if (iVar7 < 2) {
          iVar7 = 1;
        }
        fVar13 = fVar13 / fVar17;
        fVar16 = (float)iVar7 * fVar16;
        fVar21 = *(float *)(param_3 + 0x18);
        local_f0 = (int)ROUND((fVar13 + fVar13) - 0.5) >> 1;
        if (local_f0 < 2) {
          local_f0 = 1;
        }
        local_134 = (int)ROUND((fVar14 + fVar14) - 0.5) >> 1;
        if (local_134 < 2) {
          local_134 = 1;
        }
        local_140 = 0;
        fVar18 = (float)local_134 * fVar18;
        fVar17 = (float)local_f0 * fVar17;
        iVar3 = iVar4;
        local_138 = fVar21;
        local_f8 = fVar17;
        local_ec = fVar18;
        iVar12 = local_f0;
        if (0 < iVar4) {
          do {
            fVar13 = fVar18;
            local_150 = local_134;
            if (iVar3 < local_134 + local_140) {
              local_150 = iVar3 - local_140;
              fVar13 = (*(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x18)) - fVar21;
            }
            fVar14 = *(float *)(param_3 + 0x14);
            iVar5 = 0;
            local_148 = local_148 & 0xffffffff;
            local_138 = fVar21;
            if (0 < iVar3) {
              do {
                fVar18 = fVar17;
                iVar11 = iVar12;
                if (iVar3 < iVar12 + iVar5) {
                  iVar11 = iVar3 - iVar5;
                  fVar18 = (*(float *)(param_3 + 0x20) + *(float *)(param_3 + 0x14)) - fVar14;
                }
                local_158 = CONCAT44(iVar11,(undefined4)local_158);
                fVar19 = *(float *)(param_3 + 0x10);
                iVar6 = 0;
                local_148 = local_148 & 0xffffffff00000000;
                if (0 < iVar3) {
                  fVar23 = fVar14 + fVar24;
                  fVar25 = fVar21 + fVar15 * fVar22;
                  local_124 = iVar3;
                  while( true ) {
                    local_108 = fVar16;
                    iVar4 = iVar7;
                    if (local_124 < iVar7 + iVar6) {
                      iVar4 = local_124 - iVar6;
                      local_108 = (*(float *)(param_3 + 0x1c) + *(float *)(param_3 + 0x10)) - fVar19
                      ;
                    }
                    local_158 = CONCAT44(local_158._4_4_,iVar4);
                    local_108 = local_108 * 0.5;
                    if (iVar4 == 1) {
                      local_108 = 0.0;
                    }
                    local_104 = fVar18 * 0.5;
                    if (iVar11 == 1) {
                      local_104 = 0.0;
                    }
                    local_100 = fVar13 * 0.5;
                    if (local_150 == 1) {
                      local_100 = 0.0;
                    }
                    local_12c = CONCAT44(local_124,local_124);
                    local_114 = fVar23 + local_104;
                    local_110 = fVar25 + local_100;
                    local_118 = local_108 + fVar19 + fVar15 * fVar20;
                    local_10c = 0;
                    local_fc = 0;
                    FUN_14270efd0(lVar1,&local_118,&local_158,&local_12c,&local_148,param_4,param_5,
                                  param_6);
                    fVar19 = fVar19 + fVar16;
                    iVar4 = *(int *)(param_3 + 0xc);
                    iVar6 = (int)local_148 + iVar7;
                    local_148 = CONCAT44(local_148._4_4_,iVar6);
                    fVar24 = local_f4;
                    iVar5 = local_148._4_4_;
                    fVar17 = local_f8;
                    fVar21 = local_138;
                    iVar12 = local_f0;
                    iVar3 = iVar4;
                    if (iVar4 <= iVar6) break;
                    iVar11 = local_158._4_4_;
                    local_124 = iVar4;
                  }
                }
                iVar5 = iVar5 + iVar12;
                fVar14 = fVar14 + fVar17;
                local_148 = CONCAT44(iVar5,(int)local_148);
                fVar18 = local_ec;
              } while (iVar5 < iVar3);
            }
            local_140 = local_140 + local_134;
            fVar21 = fVar21 + fVar18;
            local_138 = fVar21;
          } while (local_140 < iVar3);
        }
        local_130 = local_130 + 1;
        local_e8 = local_e8 + 0x10;
      } while (local_130 < *(int *)(param_2 + 0x13e0));
    }
  }
  return;
}



// FUNCTION 141b66740 FUN_141b66740 body=1442 status=ok
// SIG undefined FUN_141b66740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b66740(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  float *local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  undefined8 local_288;
  float local_280;
  undefined8 *local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [144];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_278 = param_7;
  local_2a8 = param_4;
  _guard_xfg_dispatch_icall_nop(&local_238,0,0x90);
  _guard_xfg_dispatch_icall_nop(&local_1a8,0,0x90);
  uVar22 = 0;
  local_288 = 0;
  local_280 = 0.0;
  local_29c = 0.0;
  local_2a0 = 0.0;
  uVar24 = uVar22;
  uVar25 = uVar22;
  if (0 < *(int *)(param_2 + 0x13e0)) {
    do {
      lVar20 = *(longlong *)(uVar25 + *(longlong *)(param_2 + 0x13d8));
      if (lVar20 != 0) {
        local_2b8 = &local_288;
        local_2c0 = &local_1a8;
        local_2c8 = &local_238;
        local_298 = *(float *)(param_3 + 0x1c) * 0.5 + *(float *)(param_3 + 0x10);
        local_294 = *(float *)(param_3 + 0x20) * 0.5 + *(float *)(param_3 + 0x14);
        local_290 = *(float *)(param_3 + 0x24) * 0.5 + *(float *)(param_3 + 0x18);
        FUN_14270f5e0(lVar20,&local_298,&local_2a0,&local_29c);
      }
      uVar23 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar23;
      uVar25 = uVar25 + 0x10;
    } while ((int)uVar23 < *(int *)(param_2 + 0x13e0));
    param_7 = local_278;
    if (0.0 < local_2a0) {
      fVar27 = 1.0 / local_2a0;
      *local_2a8 = fVar27 * local_29c;
      _guard_xfg_dispatch_icall_nop(local_118,0,0x90);
      lVar26 = 3;
      lVar21 = 3;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      lVar20 = 0;
      do {
        fVar1 = *(float *)((longlong)&local_238 + lVar20 + 4);
        fVar2 = *(float *)((longlong)&uStack_230 + lVar20);
        fVar3 = *(float *)((longlong)&uStack_230 + lVar20 + 4);
        *(float *)((longlong)&local_268 + lVar20) =
             *(float *)((longlong)&local_238 + lVar20) * fVar27;
        uVar5 = local_268;
        *(float *)((longlong)&local_268 + lVar20 + 4) = fVar1 * fVar27;
        *(float *)((longlong)&uStack_260 + lVar20) = fVar2 * fVar27;
        uVar9 = uStack_260;
        *(float *)((longlong)&uStack_260 + lVar20 + 4) = fVar3 * fVar27;
        uVar18 = uStack_240;
        uVar16 = local_248;
        uVar14 = uStack_250;
        uVar12 = local_258;
        lVar21 = lVar21 + -1;
        lVar20 = lVar20 + 0x10;
      } while (lVar21 != 0);
      lVar21 = 3;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      lVar20 = 0;
      do {
        fVar1 = *(float *)((longlong)&local_208 + lVar20 + 4);
        fVar2 = *(float *)((longlong)&uStack_200 + lVar20);
        fVar3 = *(float *)((longlong)&uStack_200 + lVar20 + 4);
        *(float *)((longlong)&local_268 + lVar20) =
             *(float *)((longlong)&local_208 + lVar20) * fVar27;
        uVar6 = local_268;
        *(float *)((longlong)&local_268 + lVar20 + 4) = fVar1 * fVar27;
        *(float *)((longlong)&uStack_260 + lVar20) = fVar2 * fVar27;
        uVar10 = uStack_260;
        *(float *)((longlong)&uStack_260 + lVar20 + 4) = fVar3 * fVar27;
        uVar19 = uStack_240;
        uVar17 = local_248;
        uVar15 = uStack_250;
        uVar13 = local_258;
        lVar21 = lVar21 + -1;
        lVar20 = lVar20 + 0x10;
      } while (lVar21 != 0);
      lVar21 = 3;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      lVar20 = 0;
      do {
        fVar1 = *(float *)((longlong)&local_1d8 + lVar20 + 4);
        fVar2 = *(float *)((longlong)&uStack_1d0 + lVar20);
        fVar3 = *(float *)((longlong)&uStack_1d0 + lVar20 + 4);
        *(float *)((longlong)&local_268 + lVar20) =
             *(float *)((longlong)&local_1d8 + lVar20) * fVar27;
        *(float *)((longlong)&local_268 + lVar20 + 4) = fVar1 * fVar27;
        *(float *)((longlong)&uStack_260 + lVar20) = fVar2 * fVar27;
        *(float *)((longlong)&uStack_260 + lVar20 + 4) = fVar3 * fVar27;
        lVar21 = lVar21 + -1;
        lVar20 = lVar20 + 0x10;
      } while (lVar21 != 0);
      *param_5 = uVar5;
      param_5[1] = uVar9;
      param_5[2] = uVar12;
      param_5[3] = uVar14;
      param_5[4] = uVar16;
      param_5[5] = uVar18;
      param_5[6] = uVar6;
      param_5[7] = uVar10;
      param_5[8] = uVar13;
      param_5[9] = uVar15;
      param_5[10] = uVar17;
      param_5[0xb] = uVar19;
      param_5[0xc] = local_268;
      param_5[0xd] = uStack_260;
      param_5[0xe] = local_258;
      param_5[0xf] = uStack_250;
      param_5[0x10] = local_248;
      param_5[0x11] = uStack_240;
      local_2a8._0_4_ = fVar27;
      _guard_xfg_dispatch_icall_nop(local_118,0,0x90);
      lVar21 = 3;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      lVar20 = 0;
      do {
        fVar1 = *(float *)((longlong)&local_1a8 + lVar20 + 4);
        fVar2 = *(float *)((longlong)&uStack_1a0 + lVar20);
        fVar3 = *(float *)((longlong)&uStack_1a0 + lVar20 + 4);
        *(float *)((longlong)&local_268 + lVar20) =
             *(float *)((longlong)&local_1a8 + lVar20) * fVar27;
        uVar5 = local_268;
        *(float *)((longlong)&local_268 + lVar20 + 4) = fVar1 * fVar27;
        *(float *)((longlong)&uStack_260 + lVar20) = fVar2 * fVar27;
        uVar9 = uStack_260;
        *(float *)((longlong)&uStack_260 + lVar20 + 4) = fVar3 * fVar27;
        uVar18 = uStack_240;
        uVar16 = local_248;
        uVar14 = uStack_250;
        uVar12 = local_258;
        lVar21 = lVar21 + -1;
        lVar20 = lVar20 + 0x10;
      } while (lVar21 != 0);
      lVar21 = 3;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      lVar20 = 0;
      do {
        fVar1 = *(float *)((longlong)&local_178 + lVar20 + 4);
        fVar2 = *(float *)((longlong)&uStack_170 + lVar20);
        fVar3 = *(float *)((longlong)&uStack_170 + lVar20 + 4);
        *(float *)((longlong)&local_268 + lVar20) =
             *(float *)((longlong)&local_178 + lVar20) * fVar27;
        *(float *)((longlong)&local_268 + lVar20 + 4) = fVar1 * fVar27;
        *(float *)((longlong)&uStack_260 + lVar20) = fVar2 * fVar27;
        *(float *)((longlong)&uStack_260 + lVar20 + 4) = fVar3 * fVar27;
        uVar15 = uStack_240;
        uVar13 = local_248;
        uVar10 = uStack_250;
        uVar6 = local_258;
        lVar21 = lVar21 + -1;
        lVar20 = lVar20 + 0x10;
      } while (lVar21 != 0);
      uVar4 = (undefined4)local_268;
      uVar7 = local_268._4_4_;
      uVar8 = (undefined4)uStack_260;
      uVar11 = uStack_260._4_4_;
      local_2a8 = (float *)CONCAT44(local_2a8._4_4_,fVar27);
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      do {
        fVar1 = *(float *)((longlong)&local_148 + uVar22 + 4);
        fVar2 = *(float *)((longlong)&uStack_140 + uVar22);
        fVar3 = *(float *)((longlong)&uStack_140 + uVar22 + 4);
        *(float *)((longlong)&local_268 + uVar22) =
             *(float *)((longlong)&local_148 + uVar22) * fVar27;
        *(float *)((longlong)&local_268 + uVar22 + 4) = fVar1 * fVar27;
        *(float *)((longlong)&uStack_260 + uVar22) = fVar2 * fVar27;
        *(float *)((longlong)&uStack_260 + uVar22 + 4) = fVar3 * fVar27;
        lVar26 = lVar26 + -1;
        uVar22 = uVar22 + 0x10;
      } while (lVar26 != 0);
      *param_6 = uVar5;
      param_6[1] = uVar9;
      param_6[2] = uVar12;
      param_6[3] = uVar14;
      param_6[4] = uVar16;
      param_6[5] = uVar18;
      *(undefined4 *)(param_6 + 6) = uVar4;
      *(undefined4 *)((longlong)param_6 + 0x34) = uVar7;
      *(undefined4 *)(param_6 + 7) = uVar8;
      *(undefined4 *)((longlong)param_6 + 0x3c) = uVar11;
      param_6[8] = uVar6;
      param_6[9] = uVar10;
      param_6[10] = uVar13;
      param_6[0xb] = uVar15;
      param_6[0xc] = local_268;
      param_6[0xd] = uStack_260;
      param_6[0xe] = local_258;
      param_6[0xf] = uStack_250;
      param_6[0x10] = local_248;
      param_6[0x11] = uStack_240;
      local_290 = local_280 * fVar27;
      *local_278 = CONCAT44(local_288._4_4_ * fVar27,(float)local_288 * fVar27);
      *(float *)(local_278 + 1) = local_290;
      if (DAT_1464c1cb8 == 0) {
        return;
      }
      FUN_141b4e070(param_5);
      FUN_141b4e070(param_6);
      return;
    }
  }
  *param_5 = local_238;
  param_5[1] = uStack_230;
  param_5[2] = local_228;
  param_5[3] = uStack_220;
  param_5[4] = local_218;
  param_5[5] = uStack_210;
  param_5[6] = local_208;
  param_5[7] = uStack_200;
  param_5[8] = local_1f8;
  param_5[9] = uStack_1f0;
  param_5[10] = local_1e8;
  param_5[0xb] = uStack_1e0;
  param_5[0xc] = local_1d8;
  param_5[0xd] = uStack_1d0;
  param_5[0xe] = local_1c8;
  param_5[0xf] = uStack_1c0;
  param_5[0x10] = local_1b8;
  param_5[0x11] = uStack_1b0;
  *param_6 = local_1a8;
  param_6[1] = uStack_1a0;
  param_6[2] = local_198;
  param_6[3] = uStack_190;
  param_6[4] = local_188;
  param_6[5] = uStack_180;
  param_6[6] = local_178;
  param_6[7] = uStack_170;
  param_6[8] = local_168;
  param_6[9] = uStack_160;
  param_6[10] = local_158;
  param_6[0xb] = uStack_150;
  param_6[0xc] = local_148;
  param_6[0xd] = uStack_140;
  param_6[0xe] = local_138;
  param_6[0xf] = uStack_130;
  param_6[0x10] = local_128;
  param_6[0x11] = uStack_120;
  *local_2a8 = 1.0;
  *param_7 = 0;
  *(undefined4 *)(param_7 + 1) = 0x3f800000;
  return;
}



// FUNCTION 141b66cf0 FUN_141b66cf0 body=191 status=ok
// SIG undefined FUN_141b66cf0(void)

undefined8 FUN_141b66cf0(void)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a25018) {
    _Init_thread_header(&DAT_146a25018);
    if (DAT_146a25018 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
      lVar3 = 0;
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      DAT_146a25010 = lVar3;
      _Init_thread_footer(&DAT_146a25018);
    }
  }
  if ((DAT_146a25010 == 0) || (*(int *)(DAT_146a25010 + 4) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((DAT_1464c1cb0 != 0) && (bVar1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141b66db0 IsNodeUsed body=173 status=ok
// SIG undefined IsNodeUsed(void)

longlong FTextureLayout3d::IsNodeUsed(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  uint7 uVar6;
  longlong lVar5;
  longlong lVar7;
  
  lVar5 = param_1 + 0x10;
  bVar2 = false;
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar4 = lVar5;
  }
  lVar1 = (longlong)param_2 * 0x18;
  if (*(int *)(lVar4 + lVar1) != -1) {
    cVar3 = IsNodeUsed();
    if (cVar3 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar4 = lVar5;
      }
      cVar3 = IsNodeUsed(param_1,*(undefined4 *)(lVar4 + 4 + lVar1));
      if (cVar3 == '\0') {
        bVar2 = false;
        goto LAB_141b66e28;
      }
    }
    bVar2 = true;
  }
LAB_141b66e28:
  lVar4 = *(longlong *)(param_1 + 0x88);
  lVar7 = lVar4;
  if (lVar4 == 0) {
    lVar7 = lVar5;
  }
  uVar6 = (uint7)((ulonglong)lVar4 >> 8);
  if ((*(char *)(lVar7 + 0x14 + lVar1) != '\0') || (bVar2)) {
    lVar5 = CONCAT71(uVar6,1);
  }
  else {
    lVar5 = (ulonglong)uVar6 << 8;
  }
  return lVar5;
}



// FUNCTION 141b66e60 IsValidIndex body=67 status=ok
// SIG undefined IsValidIndex(void)

ulonglong FScriptMap::IsValidIndex(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x28))) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1 + 0x10;
    }
    uVar1 = *(uint *)(lVar2 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    in_RAX = (ulonglong)uVar1;
    if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141b66eb0 FUN_141b66eb0 body=6 status=ok
// SIG undefined FUN_141b66eb0(void)

undefined8 FUN_141b66eb0(void)

{
  return 0x1000;
}



// FUNCTION 141b66ec0 FUN_141b66ec0 body=119 status=ok
// SIG undefined FUN_141b66ec0(void)

void FUN_141b66ec0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",1);
  return;
}



// FUNCTION 141b66f40 FUN_141b66f40 body=116 status=ok
// SIG undefined FUN_141b66f40(void)

void FUN_141b66f40(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",1);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",0);
  return;
}



// FUNCTION 141b66fc0 FUN_141b66fc0 body=119 status=ok
// SIG undefined FUN_141b66fc0(void)

void FUN_141b66fc0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",2);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",1);
  return;
}



// FUNCTION 141b67040 FUN_141b67040 body=116 status=ok
// SIG undefined FUN_141b67040(void)

void FUN_141b67040(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",2);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",0);
  return;
}



// FUNCTION 141b670c0 FUN_141b670c0 body=119 status=ok
// SIG undefined FUN_141b670c0(void)

void FUN_141b670c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",4);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",1);
  return;
}



// FUNCTION 141b67140 FUN_141b67140 body=116 status=ok
// SIG undefined FUN_141b67140(void)

void FUN_141b67140(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",4);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",0);
  return;
}



// FUNCTION 141b671c0 FUN_141b671c0 body=119 status=ok
// SIG undefined FUN_141b671c0(void)

void FUN_141b671c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",8);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",1);
  return;
}



// FUNCTION 141b67240 FUN_141b67240 body=116 status=ok
// SIG undefined FUN_141b67240(void)

void FUN_141b67240(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",8);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",0);
  return;
}



// FUNCTION 141b672c0 FUN_141b672c0 body=119 status=ok
// SIG undefined FUN_141b672c0(void)

void FUN_141b672c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",1);
  return;
}



// FUNCTION 141b67340 FUN_141b67340 body=116 status=ok
// SIG undefined FUN_141b67340(void)

void FUN_141b67340(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_X",0x10);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_Y",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"GBXSKY_DEBUG",0);
  return;
}



// FUNCTION 141b674e0 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",1);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",8);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",1);
  return;
}



// FUNCTION 141b67570 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<1,2>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",1);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",1);
  return;
}



// FUNCTION 141b67600 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<1,3>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",4);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",4);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",4);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",1);
  return;
}



// FUNCTION 141b67690 ModifyCompilationEnvironment body=140 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",1);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",8);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",1);
  return;
}



// FUNCTION 141b67720 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",1);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",8);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",0);
  return;
}



// FUNCTION 141b677b0 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<0,2>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",1);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",0);
  return;
}



// FUNCTION 141b67840 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<0,3>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",4);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",4);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",4);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",0);
  return;
}



// FUNCTION 141b678d0 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TCompositeObjectDistanceFieldsCS<0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEX",1);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"COMPOSITE_THREADGROUP_SIZEZ",8);
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  FUN_141a172f0(param_2,L"USE_PARENT_DISTANCE_FIELD",0);
  return;
}



// FUNCTION 141b67960 FUN_141b67960 body=56 status=ok
// SIG undefined FUN_141b67960(void)

void FUN_141b67960(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",2);
  return;
}



// FUNCTION 141b679a0 FUN_141b679a0 body=56 status=ok
// SIG undefined FUN_141b679a0(void)

void FUN_141b679a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",4);
  return;
}



// FUNCTION 141b679e0 FUN_141b679e0 body=56 status=ok
// SIG undefined FUN_141b679e0(void)

void FUN_141b679e0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",8);
  return;
}



// FUNCTION 141b67a20 FUN_141b67a20 body=56 status=ok
// SIG undefined FUN_141b67a20(void)

void FUN_141b67a20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x10);
  return;
}



// FUNCTION 141b67a60 FUN_141b67a60 body=56 status=ok
// SIG undefined FUN_141b67a60(void)

void FUN_141b67a60(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x100);
  return;
}



// FUNCTION 141b67aa0 FUN_141b67aa0 body=56 status=ok
// SIG undefined FUN_141b67aa0(void)

void FUN_141b67aa0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x1000);
  return;
}



// FUNCTION 141b67ae0 FUN_141b67ae0 body=56 status=ok
// SIG undefined FUN_141b67ae0(void)

void FUN_141b67ae0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x20);
  return;
}



// FUNCTION 141b67b20 FUN_141b67b20 body=56 status=ok
// SIG undefined FUN_141b67b20(void)

void FUN_141b67b20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x200);
  return;
}



// FUNCTION 141b67b60 FUN_141b67b60 body=56 status=ok
// SIG undefined FUN_141b67b60(void)

void FUN_141b67b60(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x40);
  return;
}



// FUNCTION 141b67ba0 FUN_141b67ba0 body=56 status=ok
// SIG undefined FUN_141b67ba0(void)

void FUN_141b67ba0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x400);
  return;
}



// FUNCTION 141b67be0 FUN_141b67be0 body=56 status=ok
// SIG undefined FUN_141b67be0(void)

void FUN_141b67be0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x80);
  return;
}



// FUNCTION 141b67c20 FUN_141b67c20 body=56 status=ok
// SIG undefined FUN_141b67c20(void)

void FUN_141b67c20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_COMPLEX_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x800);
  return;
}



// FUNCTION 141b67c60 FUN_141b67c60 body=56 status=ok
// SIG undefined FUN_141b67c60(void)

void FUN_141b67c60(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",2);
  return;
}



// FUNCTION 141b67ca0 FUN_141b67ca0 body=56 status=ok
// SIG undefined FUN_141b67ca0(void)

void FUN_141b67ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",4);
  return;
}



// FUNCTION 141b67ce0 FUN_141b67ce0 body=56 status=ok
// SIG undefined FUN_141b67ce0(void)

void FUN_141b67ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",8);
  return;
}



// FUNCTION 141b67d20 FUN_141b67d20 body=56 status=ok
// SIG undefined FUN_141b67d20(void)

void FUN_141b67d20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x10);
  return;
}



// FUNCTION 141b67d60 FUN_141b67d60 body=56 status=ok
// SIG undefined FUN_141b67d60(void)

void FUN_141b67d60(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x100);
  return;
}



// FUNCTION 141b67da0 FUN_141b67da0 body=56 status=ok
// SIG undefined FUN_141b67da0(void)

void FUN_141b67da0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x1000);
  return;
}



// FUNCTION 141b67de0 FUN_141b67de0 body=56 status=ok
// SIG undefined FUN_141b67de0(void)

void FUN_141b67de0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x20);
  return;
}



// FUNCTION 141b67e20 FUN_141b67e20 body=56 status=ok
// SIG undefined FUN_141b67e20(void)

void FUN_141b67e20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x200);
  return;
}



// FUNCTION 141b67e60 FUN_141b67e60 body=56 status=ok
// SIG undefined FUN_141b67e60(void)

void FUN_141b67e60(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x40);
  return;
}



// FUNCTION 141b67ea0 FUN_141b67ea0 body=56 status=ok
// SIG undefined FUN_141b67ea0(void)

void FUN_141b67ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x400);
  return;
}



// FUNCTION 141b67ee0 FUN_141b67ee0 body=56 status=ok
// SIG undefined FUN_141b67ee0(void)

void FUN_141b67ee0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x80);
  return;
}



// FUNCTION 141b67f20 FUN_141b67f20 body=56 status=ok
// SIG undefined FUN_141b67f20(void)

void FUN_141b67f20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_CONVOLUTION_WITH_TEXTURE",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x800);
  return;
}



// FUNCTION 141b67f60 FUN_141b67f60 body=56 status=ok
// SIG undefined FUN_141b67f60(void)

void FUN_141b67f60(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",2);
  return;
}



// FUNCTION 141b67fa0 FUN_141b67fa0 body=56 status=ok
// SIG undefined FUN_141b67fa0(void)

void FUN_141b67fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",4);
  return;
}



// FUNCTION 141b67fe0 FUN_141b67fe0 body=56 status=ok
// SIG undefined FUN_141b67fe0(void)

void FUN_141b67fe0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",8);
  return;
}



// FUNCTION 141b68020 FUN_141b68020 body=56 status=ok
// SIG undefined FUN_141b68020(void)

void FUN_141b68020(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x10);
  return;
}



// FUNCTION 141b68060 FUN_141b68060 body=56 status=ok
// SIG undefined FUN_141b68060(void)

void FUN_141b68060(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x100);
  return;
}



// FUNCTION 141b680a0 FUN_141b680a0 body=56 status=ok
// SIG undefined FUN_141b680a0(void)

void FUN_141b680a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x1000);
  return;
}



// FUNCTION 141b680e0 FUN_141b680e0 body=56 status=ok
// SIG undefined FUN_141b680e0(void)

void FUN_141b680e0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x20);
  return;
}



// FUNCTION 141b68120 FUN_141b68120 body=56 status=ok
// SIG undefined FUN_141b68120(void)

void FUN_141b68120(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x200);
  return;
}



// FUNCTION 141b68160 FUN_141b68160 body=56 status=ok
// SIG undefined FUN_141b68160(void)

void FUN_141b68160(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x40);
  return;
}



// FUNCTION 141b681a0 FUN_141b681a0 body=56 status=ok
// SIG undefined FUN_141b681a0(void)

void FUN_141b681a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x400);
  return;
}



// FUNCTION 141b681e0 FUN_141b681e0 body=56 status=ok
// SIG undefined FUN_141b681e0(void)

void FUN_141b681e0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x80);
  return;
}



// FUNCTION 141b68220 FUN_141b68220 body=56 status=ok
// SIG undefined FUN_141b68220(void)

void FUN_141b68220(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_TWO_FOR_ONE_FFT",1);
  FUN_141a172f0(param_2,L"SCAN_LINE_LENGTH",0x800);
  return;
}



// FUNCTION 141b68260 FUN_141b68260 body=161 status=ok
// SIG undefined FUN_141b68260(void)

void FUN_141b68260(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZE",DAT_1464c1cac);
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FUN_141a172f0(param_2,L"LIGHT_LINK_STRIDE",DAT_1464c1ca8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_LINKED_CULL_LIST",1);
  return;
}



// FUNCTION 141b68310 FUN_141b68310 body=158 status=ok
// SIG undefined FUN_141b68310(void)

void FUN_141b68310(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZE",DAT_1464c1cac);
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FUN_141a172f0(param_2,L"LIGHT_LINK_STRIDE",DAT_1464c1ca8);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_LINKED_CULL_LIST",0);
  return;
}



// FUNCTION 141b683b0 ModifyCompilationEnvironment body=119 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FCalculateHeightfieldIrradianceScreenGridCS::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"HEIGHTFIELD_OCCLUSION_DISPATCH_SIZEX",8);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b68490 ModifyCompilationEnvironment body=85 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void GPUFFT::FCopyWindowCS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_COPY_WINDOW",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"X_THREAD_COUNT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"Y_THREAD_COUNT",0x20);
  return;
}



// FUNCTION 141b68510 ModifyCompilationEnvironment body=56 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FCullObjectsToGridCS::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"CULL_GRID_TILE_SIZE",0x10);
  FUN_141a172f0(param_2,L"MAX_GRID_CULLED_DF_OBJECTS",0x7ff);
  return;
}



// FUNCTION 141b68550 FUN_141b68550 body=80 status=ok
// SIG undefined FUN_141b68550(void)

void FUN_141b68550(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c1cd0);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c1cd4);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c1cd8);
  return;
}



// FUNCTION 141b685a0 ModifyCompilationEnvironment body=85 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void GPUFFT::FGroupShardSubFFTPassCS::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"INCLUDE_GROUP_SHARED_SUB_COMPLEX_FFT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SCAN_LINE_LENGTH",0x800);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"RADIX",2);
  return;
}



// FUNCTION 141b68660 FUN_141b68660 body=56 status=ok
// SIG undefined FUN_141b68660(void)

void FUN_141b68660(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"HDR_RESOLVE_NUM_SAMPLES",2);
  FUN_141a172f0(param_2,L"HDR_CUSTOM_RESOLVE_USES_FMASK",1);
  return;
}



// FUNCTION 141b686a0 FUN_141b686a0 body=56 status=ok
// SIG undefined FUN_141b686a0(void)

void FUN_141b686a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"HDR_RESOLVE_NUM_SAMPLES",4);
  FUN_141a172f0(param_2,L"HDR_CUSTOM_RESOLVE_USES_FMASK",1);
  return;
}



// FUNCTION 141b686e0 FUN_141b686e0 body=56 status=ok
// SIG undefined FUN_141b686e0(void)

void FUN_141b686e0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"HDR_RESOLVE_NUM_SAMPLES",8);
  FUN_141a172f0(param_2,L"HDR_CUSTOM_RESOLVE_USES_FMASK",1);
  return;
}



// FUNCTION 141b68720 FUN_141b68720 body=148 status=ok
// SIG undefined FUN_141b68720(void)

void FUN_141b68720(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"THREADGROUP_SIZE",DAT_1464c1cac);
  FUN_141a172f0(param_2,L"LOCAL_LIGHT_DATA_STRIDE",9);
  FUN_141a172f0(param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",DAT_1464c1ca0);
  FUN_141a172f0(param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",DAT_1464c1ca4);
  FUN_141a172f0(param_2,L"LIGHT_LINK_STRIDE",DAT_1464c1ca8);
  FUN_141a172f0(param_2,L"MAX_CAPTURES",0x155);
  return;
}



// FUNCTION 141b68840 MultiPass body=747 status=ok
// SIG undefined MultiPass(void)

undefined8
GPUFFT::ComplexFFTImage1D::MultiPass
          (longlong *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,longlong param_5,
          longlong param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  longlong local_50 [3];
  
  uVar1 = param_2[1];
  lVar2 = *param_1;
  local_50[0] = param_6;
  param_6 = *(longlong *)(param_2 + 1);
  local_50[1] = param_5;
  if ((*param_2 & 0xfffffffd) != 0) {
    param_6 = CONCAT44(uVar1,param_2[2]);
  }
  local_60 = param_6;
  local_68 = 0;
  FUN_141b62bc0(param_1,param_2,param_3,param_4,&local_68,(undefined8 *)(param_5 + 0x10),0);
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar7 + 1;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar7 + 1;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar8;
  *puVar7 = uVar3;
  puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar6 + 6;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar6 + 6;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar8;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar6;
  *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  uVar5 = 1;
  puVar6[3] = puVar7;
  puVar6[5] = 0;
  uVar9 = 1;
  local_58 = 1;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar8 = (undefined8 *)(local_50[0] + 0x10);
  FUN_141b62150(param_1,param_2,local_50[1] + 8,&local_68,puVar8);
  uVar4 = 0x800;
  if (0x800 < uVar1) {
    do {
      uVar3 = *puVar8;
      puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 1;
      if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(lVar2 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar7 + 1;
      }
      *(undefined8 **)(lVar2 + 0x30) = puVar8;
      *puVar7 = uVar3;
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar6 + 6;
      if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(lVar2 + 0x30);
        puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar6 + 6;
      }
      *(undefined8 **)(lVar2 + 0x30) = puVar8;
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
      **(undefined8 **)(lVar2 + 8) = puVar6;
      *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
      puVar6[3] = puVar7;
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 2) = 1;
      *(undefined4 *)(puVar6 + 4) = 2;
      *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d91e60;
      uVar5 = 1 - uVar9;
      puVar8 = (undefined8 *)(local_50[1 - uVar5] + 0x10);
      local_58 = uVar5;
      FUN_141b61300(param_1,param_2,uVar4,local_50[uVar5] + 8,&local_68,puVar8,0);
      uVar4 = uVar4 * 2;
      uVar9 = uVar5;
    } while (uVar4 < uVar1);
  }
  if (uVar5 != 0) {
    SwapContents(local_50[0],local_50[1]);
  }
  return 1;
}



// FUNCTION 141b68b30 MultiPass body=950 status=ok
// SIG undefined MultiPass(void)

undefined8
GPUFFT::ConvolutionWithTextureImage1D::MultiPass
          (longlong *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          longlong param_6,longlong param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_res8;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if ((*param_2 & 0xfffffffd) == 0) {
    uVar5 = param_2[1];
    uVar4 = param_2[2];
  }
  else {
    uVar5 = param_2[2];
    uVar4 = param_2[1];
  }
  local_res8 = CONCAT44(uVar4,uVar5);
  local_58 = 0;
  local_50 = local_res8;
  cVar3 = ComplexFFTImage1D::MultiPass(param_1,param_2,param_4,param_5,param_6,param_7,0);
  lVar1 = *param_1;
  uVar10 = *(undefined8 *)(param_6 + 0x10);
  puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
    puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar6;
  *puVar9 = uVar10;
  puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 6;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar6;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar7;
  *(undefined8 **)(lVar1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  puVar7[3] = puVar9;
  puVar9 = (undefined8 *)(param_7 + 0x10);
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 2) = 1;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  FUN_141b615d0(param_1,(*param_2 & 0xfffffffd) == 0,&local_58,param_6 + 8,param_3,puVar9);
  uVar10 = *puVar9;
  lVar1 = *param_1;
  puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar6;
  *puVar7 = uVar10;
  puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar6;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar8;
  *(undefined8 **)(lVar1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar7;
  *(undefined4 *)(puVar8 + 4) = 2;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
  puVar8[5] = 0;
  local_60 = param_2[2];
  uVar5 = *param_2 + 2 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  local_68 = CONCAT44((int)((ulonglong)*(undefined8 *)param_2 >> 0x20),uVar5);
  if (cVar3 != '\0') {
    cVar3 = ComplexFFTImage1D::MultiPass(param_1,&local_68,&local_58,param_7 + 8,param_6,param_7,0);
    if (cVar3 != '\0') {
      uVar10 = 1;
      goto LAB_141b68dbf;
    }
  }
  uVar10 = 0;
LAB_141b68dbf:
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_6 + 0x10);
  puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 1;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar6;
  *puVar7 = uVar2;
  puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar6;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar8;
  *(undefined8 **)(lVar1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar7;
  *(undefined4 *)(puVar8 + 4) = 2;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
  puVar8[5] = 0;
  local_68 = 0xff7fffff7f7fffff;
  local_60 = 0;
  FUN_141b61860(param_1,&local_58,param_6 + 8,param_4,puVar9,&local_68);
  SwapContents(param_7,param_6);
  return uVar10;
}



// FUNCTION 141b68ef0 MultiPass body=939 status=ok
// SIG undefined MultiPass(void)

bool GPUFFT::TwoForOneRealFFTImage1D::MultiPass
               (longlong *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,longlong param_6,float *param_7)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*param_2 < 2) {
    fVar1 = param_7[1];
    if (fVar1 < *param_7 || fVar1 == *param_7) {
      cVar4 = ComplexFFTImage1D::MultiPass();
      SwapContents(param_5,param_6);
    }
    else {
      FUN_141b61860(fVar1,param_3,param_4,param_3,(undefined8 *)(param_5 + 0x10),param_7);
      uVar2 = *(undefined8 *)(param_5 + 0x10);
      lVar3 = *param_1;
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
      if (*(undefined8 **)(lVar3 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
        puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar7 + 1;
      }
      *(undefined8 **)(lVar3 + 0x30) = puVar5;
      *puVar7 = uVar2;
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
      if (*(undefined8 **)(lVar3 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
        puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 6;
      }
      *(undefined8 **)(lVar3 + 0x30) = puVar5;
      *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      **(undefined8 **)(lVar3 + 8) = puVar6;
      *(undefined8 **)(lVar3 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar6 + 2) = 1;
      puVar6[3] = puVar7;
      *(undefined4 *)(puVar6 + 4) = 2;
      *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
      puVar6[5] = 0;
      cVar4 = ComplexFFTImage1D::MultiPass(param_1,param_2,param_3,param_5 + 8,param_6,param_5,1);
    }
    lVar3 = *param_1;
    uVar2 = *(undefined8 *)(param_6 + 0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar5;
    *puVar7 = uVar2;
    puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar5;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar6;
    *(undefined8 **)(lVar3 + 8) = puVar6 + 1;
    *puVar6 = &PTR_LAB_144d91e60;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar7;
    *(undefined4 *)(puVar6 + 4) = 2;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
    puVar6[5] = 0;
    FUN_141b627e0(param_1,param_2,param_6 + 8,param_5 + 0x10);
  }
  else {
    FUN_141b627e0(param_1,param_2,param_4,param_5 + 0x10);
    lVar3 = *param_1;
    uVar2 = *(undefined8 *)(param_5 + 0x10);
    puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 1;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
      puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 1;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar5;
    *puVar7 = uVar2;
    puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar5;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar6;
    *(undefined8 **)(lVar3 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = puVar7;
    *(undefined4 *)(puVar6 + 4) = 2;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
    puVar6[5] = 0;
    cVar4 = ComplexFFTImage1D::MultiPass(param_1,param_2,param_3,param_5 + 8,param_6,param_5,0);
    SwapContents(param_6,param_5);
  }
  return cVar4 != '\0';
}



// FUNCTION 141b692a0 FUN_141b692a0 body=653 status=ok
// SIG undefined FUN_141b692a0(void)

void FUN_141b692a0(longlong param_1,longlong param_2)

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
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    iVar10 = *(int *)(lVar7 + 0x2278);
    *(int *)(lVar7 + 0x2278) = iVar10 + 1;
    if (*(int *)(lVar7 + 0x227c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x2270,iVar10);
    }
    *(longlong *)(*(longlong *)(lVar7 + 0x2270) + (longlong)iVar10 * 8) = param_2;
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    iVar10 = *(int *)(lVar7 + 0x2278);
    *(int *)(lVar7 + 0x2278) = iVar10 + 1;
    if (*(int *)(lVar7 + 0x227c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x2270,iVar10);
    }
    *(longlong *)(*(longlong *)(lVar7 + 0x2270) + (longlong)iVar10 * 8) = param_2;
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
  *plVar9 = (longlong)&PTR_FUN_144deb720;
  plVar9[5] = 0;
  plVar9[2] = *(longlong *)(param_1 + 0x10);
  plVar9[3] = param_2;
  lVar7 = plVar9[5];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar7;
  FUN_141b731c0(plVar9,0,0xff,1);
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



// FUNCTION 141b69530 Rehash body=539 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FIntVector,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<FIntVector,FBlockUpdateInfo,0>,FDefaultSetAllocator>
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
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141b6965f;
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
LAB_141b6965f:
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
        lVar6 = (longlong)iStack_2c * 0x50 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0xc);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x4c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x48) =
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



// FUNCTION 141b69750 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FIntVector,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<FIntVector,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141b6987f;
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
LAB_141b6987f:
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
        lVar6 = (longlong)iStack_2c * 0x40 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0xc);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x3c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x38) =
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



// FUNCTION 141b69970 FUN_141b69970 body=151 status=ok
// SIG undefined FUN_141b69970(void)

void FUN_141b69970(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar1 = 0;
    do {
      FLatentGPUTimer::Release(*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar1));
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  return;
}



// FUNCTION 141b69a10 ReleaseDynamicRHI body=94 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FHeightfieldLightingAtlas::ReleaseDynamicRHI(longlong param_1)

{
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x30);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x38);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x40);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x48);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x50);
  return;
}



// FUNCTION 141b69a70 FUN_141b69a70 body=110 status=ok
// SIG undefined FUN_141b69a70(void)

void FUN_141b69a70(longlong param_1)

{
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x38);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x40);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x48);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x50);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x58);
  FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x60);
  return;
}



// FUNCTION 141b69ae0 FUN_141b69ae0 body=267 status=ok
// SIG undefined FUN_141b69ae0(void)

void FUN_141b69ae0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_18;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
    lVar2 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar2 = param_1 + 400;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x1a0) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x158);
      while (lVar3 = (longlong)iVar1, *(int *)(lVar2 + lVar3 * 0x18) != param_2) {
        iVar1 = *(int *)(lVar2 + 0x10 + lVar3 * 0x18);
        if (iVar1 == -1) {
          return;
        }
      }
      if (iVar1 != -1) {
        lVar2 = *(longlong *)(lVar2 + 8 + lVar3 * 0x18);
        TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x158));
        if ((((-1 < *(int *)(lVar2 + 0x30)) && (-1 < *(int *)(lVar2 + 0x34))) &&
            (-1 < *(int *)(lVar2 + 0x38))) && (iVar1 = *(int *)(lVar2 + 0x3c), 0 < iVar1)) {
          local_18 = *(ulonglong *)(lVar2 + 0x30);
          local_10 = *(undefined4 *)(lVar2 + 0x38);
          if (1 < iVar1) {
            FTextureLayout3d::RemoveElement
                      (param_1 + 0xb8,local_18 & 0xffffffff,local_18 >> 0x20,local_10,iVar1,iVar1,
                       iVar1);
          }
          TSet<TTuple<FIntVector,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<FIntVector,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x68,&local_18);
        }
        FMemory::operator_delete(lVar2,0x270);
      }
    }
  }
  return;
}



// FUNCTION 141b69bf0 FUN_141b69bf0 body=99 status=ok
// SIG undefined FUN_141b69bf0(void)

void FUN_141b69bf0(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2b0,0);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2c0,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2c8,0);
  FUN_141ace450(param_1 + 0x2e0);
  FUN_141ace450(param_1 + 0x308);
  return;
}



// FUNCTION 141b69c60 Remove body=346 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FIntVector,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<FIntVector,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = FCrc::MemCrc_DEPRECATED(param_2,0xc,0);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    uVar10 = (longlong)(int)param_1[9] - 1;
    iVar4 = *(int *)((longlong)plVar8 + ((longlong)iVar4 & uVar10) * 4);
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar9 = (longlong)iVar4 * 0x40;
        if (((*(int *)(lVar9 + lVar2) == *param_2) && (*(int *)(lVar9 + 4 + lVar2) == param_2[1]))
           && (*(int *)(lVar9 + 8 + lVar2) == param_2[2])) {
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_141b69d41;
          uVar10 = (longlong)*(int *)(lVar9 + 0x3c + lVar2) & uVar10;
          piVar7 = (int *)((longlong)plVar8 + uVar10 * 4);
          iVar5 = *(int *)((longlong)plVar8 + uVar10 * 4);
          if (iVar5 != -1) goto LAB_141b69d20;
          goto LAB_141b69d41;
        }
        iVar4 = *(int *)(lVar9 + 0x38 + lVar2);
      } while (iVar4 != -1);
    }
  }
  return 0;
  while( true ) {
    piVar7 = (int *)(lVar2 + 0x38 + (longlong)iVar5 * 0x40);
    iVar5 = *piVar7;
    if (iVar5 == -1) break;
LAB_141b69d20:
    if (iVar5 == iVar4) {
      *piVar7 = *(int *)(lVar9 + 0x38 + lVar2);
      break;
    }
  }
LAB_141b69d41:
  bVar3 = (byte)iVar4 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar4;
  }
  lVar2 = *param_1;
  uVar6 = 0xffffffff;
  *(undefined4 *)(lVar2 + lVar9) = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + lVar9) = uVar6;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar4;
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
  return 1;
}



// FUNCTION 141b69dc0 Remove body=224 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)*param_2 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(int *)(lVar5 + lVar8 * 0x18) == *param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x14 + lVar8 * 0x18) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000141b69e52;
      }
      iVar3 = *(int *)(lVar5 + 0x10 + lVar8 * 0x18);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x000141b69e52:
  if (iVar4 == -1) {
LAB_141b69e77:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar8 * 0x18 + 0x10);
    goto LAB_141b69e77;
  }
  lVar1 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x000141b69e52;
}



// FUNCTION 141b69ea0 RemoveChildren body=622 status=ok
// SIG undefined RemoveChildren(void)

void FTextureLayout3d::RemoveChildren(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  lVar1 = param_1 + 0x10;
  uVar9 = 0;
  lVar7 = *(longlong *)(param_1 + 0x88);
  lVar5 = lVar7;
  if (lVar7 == 0) {
    lVar5 = lVar1;
  }
  lVar2 = (longlong)param_2 * 0x18;
  if (*(int *)(lVar5 + lVar2) != -1) {
    RemoveChildren(param_1);
    lVar7 = *(longlong *)(param_1 + 0x88);
  }
  lVar5 = lVar7;
  if (lVar7 == 0) {
    lVar5 = lVar1;
  }
  if (*(int *)(lVar5 + 4 + lVar2) != -1) {
    RemoveChildren(param_1);
    lVar7 = *(longlong *)(param_1 + 0x88);
  }
  if (lVar7 == 0) {
    lVar7 = lVar1;
  }
  iVar3 = *(int *)(lVar7 + lVar2);
  if (iVar3 != -1) {
    iVar6 = *(int *)(param_1 + 0x90);
    iVar4 = (iVar6 - iVar3) + -1;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar7 + (longlong)iVar3 * 0x18),
                 (void *)(lVar7 + (longlong)(iVar3 + 1) * 0x18),(longlong)iVar4 * 0x18);
      iVar6 = *(int *)(param_1 + 0x90);
    }
    *(int *)(param_1 + 0x90) = iVar6 + -1;
    TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
    ResizeShrink(lVar1);
    uVar8 = uVar9;
    uVar11 = uVar9;
    if (0 < *(int *)(param_1 + 0x90)) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar7 = lVar1;
        }
        if (iVar3 <= *(int *)(lVar7 + uVar8)) {
          *(int *)(lVar7 + uVar8) = *(int *)(lVar7 + uVar8) + -1;
        }
        lVar7 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar7 = lVar1;
        }
        iVar6 = *(int *)(lVar7 + 4 + uVar8);
        if (iVar3 <= iVar6) {
          *(int *)(lVar7 + 4 + uVar8) = iVar6 + -1;
        }
        uVar10 = (int)uVar11 + 1;
        uVar8 = uVar8 + 0x18;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(param_1 + 0x90));
    }
    lVar7 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar7 = lVar1;
    }
    *(undefined4 *)(lVar7 + lVar2) = 0xffffffff;
  }
  lVar7 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar7 = lVar1;
  }
  iVar3 = *(int *)(lVar7 + 4 + lVar2);
  if (iVar3 != -1) {
    iVar6 = *(int *)(param_1 + 0x90);
    iVar4 = (iVar6 - iVar3) + -1;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar7 + (longlong)iVar3 * 0x18),
                 (void *)(lVar7 + (longlong)(iVar3 + 1) * 0x18),(longlong)iVar4 * 0x18);
      iVar6 = *(int *)(param_1 + 0x90);
    }
    *(int *)(param_1 + 0x90) = iVar6 + -1;
    TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
    ResizeShrink(lVar1);
    uVar8 = uVar9;
    if (0 < *(int *)(param_1 + 0x90)) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar7 = lVar1;
        }
        if (iVar3 <= *(int *)(lVar7 + uVar9)) {
          *(int *)(lVar7 + uVar9) = *(int *)(lVar7 + uVar9) + -1;
        }
        lVar7 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar7 = lVar1;
        }
        iVar6 = *(int *)(lVar7 + 4 + uVar9);
        if (iVar3 <= iVar6) {
          *(int *)(lVar7 + 4 + uVar9) = iVar6 + -1;
        }
        uVar10 = (int)uVar8 + 1;
        uVar9 = uVar9 + 0x18;
        uVar8 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(param_1 + 0x90));
    }
    lVar7 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar7 = lVar1;
    }
    *(undefined4 *)(lVar7 + 4 + lVar2) = 0xffffffff;
  }
  return;
}



// FUNCTION 141b6a110 RemoveElement body=643 status=ok
// SIG undefined RemoveElement(void)

undefined8
FTextureLayout3d::RemoveElement
          (longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar11 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x90)) {
    piVar1 = (int *)(param_1 + 0x10);
    piVar5 = *(int **)(param_1 + 0x88);
    lVar12 = 0;
    piVar8 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar8 = piVar1;
    }
    lVar6 = 0;
    do {
      if (((((*(ushort *)(lVar6 + 8 + (longlong)piVar8) == param_2) &&
            (*(ushort *)(lVar6 + 10 + (longlong)piVar8) == param_3)) &&
           (*(ushort *)(lVar6 + 0xc + (longlong)piVar8) == param_4)) &&
          ((*(ushort *)(lVar6 + 0xe + (longlong)piVar8) == param_5 &&
           (*(ushort *)(lVar6 + 0x10 + (longlong)piVar8) == param_6)))) &&
         (*(ushort *)(lVar6 + 0x12 + (longlong)piVar8) == param_7)) {
        if (iVar11 == -1) {
          return 0;
        }
        if (piVar5 == (int *)0x0) {
          piVar5 = piVar1;
        }
        iVar9 = 0;
        iVar10 = -1;
        *(undefined1 *)(piVar5 + (longlong)iVar11 * 6 + 5) = 0;
        lVar12 = (longlong)*(int *)(param_1 + 0x90);
        iVar7 = iVar10;
        if (lVar12 < 1) goto LAB_141b6a23d;
        lVar6 = 0;
        piVar5 = *(int **)(param_1 + 0x88);
        if (*(int **)(param_1 + 0x88) == (int *)0x0) {
          piVar5 = piVar1;
        }
        lVar4 = 0;
        goto LAB_141b6a220;
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar12 < *(int *)(param_1 + 0x90));
  }
  return 0;
  while( true ) {
    iVar9 = iVar9 + 1;
    lVar6 = lVar6 + 1;
    lVar4 = lVar4 + 0x18;
    iVar7 = iVar10;
    if (lVar12 <= lVar6) break;
LAB_141b6a220:
    iVar7 = iVar9;
    if ((*(int *)(lVar4 + (longlong)piVar5) == iVar11) ||
       (*(int *)(lVar4 + 4 + (longlong)piVar5) == iVar11)) break;
  }
LAB_141b6a23d:
  cVar3 = IsNodeUsed(param_1);
  if (cVar3 != '\0') {
    iVar7 = iVar10;
  }
  if (iVar7 != -1) {
    lVar6 = (longlong)iVar7;
    iVar11 = iVar7;
    while( true ) {
      iVar9 = iVar7;
      piVar5 = *(int **)(param_1 + 0x88);
      piVar8 = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar8 = piVar1;
      }
      bVar2 = false;
      iVar7 = piVar8[lVar6 * 6];
      if (piVar8[(longlong)iVar7 * 6] != -1) {
        cVar3 = IsNodeUsed(param_1);
        if ((cVar3 == '\0') && (cVar3 = IsNodeUsed(param_1), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      piVar8 = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar8 = piVar1;
      }
      if (((char)piVar8[(longlong)iVar7 * 6 + 5] != '\0') || (bVar2)) break;
      iVar7 = piVar8[lVar6 * 6 + 1];
      bVar2 = false;
      if (piVar8[(longlong)iVar7 * 6] != -1) {
        cVar3 = IsNodeUsed();
        if ((cVar3 == '\0') && (cVar3 = IsNodeUsed(), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      if (piVar5 == (int *)0x0) {
        piVar5 = piVar1;
      }
      if (((char)piVar5[(longlong)iVar7 * 6 + 5] != '\0') || (bVar2)) break;
      iVar7 = 0;
      lVar6 = 0;
      iVar11 = iVar9;
      if (lVar12 < 1) break;
      while ((*piVar5 != iVar9 && (piVar5[1] != iVar9))) {
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
        piVar5 = piVar5 + 6;
        if (lVar12 <= lVar6) goto LAB_141b6a37b;
      }
      if (iVar7 == -1) break;
    }
LAB_141b6a37b:
    if (iVar11 != -1) {
      RemoveChildren(param_1,iVar11);
    }
  }
  return 1;
}



// FUNCTION 141b6a3a0 FUN_141b6a3a0 body=1264 status=ok
// SIG undefined FUN_141b6a3a0(void)

void FUN_141b6a3a0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  iVar6 = 0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 1;
  uStack_48 = (uint *)(param_1 + 0x1d8);
  iVar7 = *(int *)(param_1 + 0x1f0);
  bVar3 = false;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar7 != 0) {
    puVar12 = *(uint **)(param_1 + 0x1e8);
    if (*(uint **)(param_1 + 0x1e8) == (uint *)0x0) {
      puVar12 = uStack_48;
    }
    uVar4 = *puVar12;
    iStack_60 = iVar6;
    uStack_50._0_4_ = iVar6;
    while (uVar4 == 0) {
      lVar8 = (longlong)(int)uStack_50;
      iStack_60 = iStack_60 + 0x20;
      iVar13 = (int)uStack_50 + 1;
      bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uStack_50;
      uStack_50._0_4_ = iVar13;
      if (bVar2) goto LAB_141b6a48a;
      uVar4 = puVar12[lVar8 + 1];
    }
    uStack_50._4_4_ = -uVar4 & uVar4;
    iVar13 = 0x1f;
    if (uStack_50._4_4_ != 0) {
      for (; uStack_50._4_4_ >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_50._4_4_ == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    iStack_64 = (iStack_60 - iVar13) + 0x1f;
    if (iVar7 < iStack_64) {
LAB_141b6a48a:
      iStack_64 = iVar7;
    }
  }
  uStack_40._0_4_ = 0xffffffff;
  uStack_40._4_4_ = iStack_64;
  uStack_38 = CONCAT44(uStack_5c,iStack_60);
  if (iStack_64 < iVar7) {
    do {
      lVar8 = (longlong)uStack_40._4_4_ * 0x70 + *(longlong *)(param_1 + 0x1c8);
      if (((bVar3) || (0 < *(int *)(lVar8 + 0x28))) || (0 < *(int *)(lVar8 + 0x38))) {
        bVar3 = true;
      }
      uStack_40._0_4_ = (uint)uStack_40 & ~uStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
    } while (uStack_40._4_4_ < (int)uStack_48[6]);
    if (bVar3) {
      lVar8 = FSceneRenderTargets::Get(param_2);
      FUN_141cdd7b0(lVar8,param_2,param_3);
      FUN_141ad74f0(param_2,*(undefined8 *)(*param_3 + 8),
                    *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 8),4,CONCAT44(uVar14,0x21),1);
      lVar8 = *(longlong *)(param_1 + 8);
      iVar7 = *(int *)(lVar8 + 0x1098);
      uStack_48 = (uint *)(lVar8 + 0x1080);
      uStack_50._0_4_ = 0;
      uStack_50._4_4_ = 1;
      iStack_64 = 0;
      iStack_60 = 0;
      if (iVar7 != 0) {
        puVar12 = *(uint **)(lVar8 + 0x1090);
        if (*(uint **)(lVar8 + 0x1090) == (uint *)0x0) {
          puVar12 = uStack_48;
        }
        uVar4 = *puVar12;
        iStack_60 = iVar6;
        uStack_50._0_4_ = iVar6;
        while (uVar4 == 0) {
          lVar9 = (longlong)(int)uStack_50;
          iStack_60 = iStack_60 + 0x20;
          iVar6 = (int)uStack_50 + 1;
          bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uStack_50;
          uStack_50._0_4_ = iVar6;
          if (bVar3) goto LAB_141b6a5f9;
          uVar4 = puVar12[lVar9 + 1];
        }
        uStack_50._4_4_ = -uVar4 & uVar4;
        iVar6 = 0x1f;
        if (uStack_50._4_4_ != 0) {
          for (; uStack_50._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_50._4_4_ == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        iStack_64 = (iStack_60 - iVar6) + 0x1f;
        if (iVar7 < iStack_64) {
LAB_141b6a5f9:
          iStack_64 = iVar7;
        }
      }
      uStack_40._0_4_ = 0xffffffff;
      uStack_40._4_4_ = iStack_64;
      uStack_38 = CONCAT44(uStack_5c,iStack_60);
      if (iStack_64 < iVar7) {
        do {
          lVar9 = *(longlong *)
                   (*(longlong *)(lVar8 + 0x1070) + 0x20 + (longlong)uStack_40._4_4_ * 0x30);
          lVar15 = 0;
          lVar11 = (longlong)*(int *)(lVar9 + 0x58) * 0x70 + *(longlong *)(param_1 + 0x1c8);
          uVar16 = 0;
          AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(lVar9 + 0x30));
          if (0 < *(int *)(lVar11 + 0x28)) {
            FUN_141daa4a0(param_1,param_2,lVar9,*param_3,1,0);
          }
          FUN_141ad03e0(param_1,param_2,lVar9,*param_3,lVar11 + 0x30,1);
          lVar11 = *(longlong *)(lVar9 + 0x30);
          uVar4 = *(uint *)(lVar11 + 0x180) >> 3;
          if ((uVar4 & 1) == 0) {
            iVar7 = *(int *)(lVar9 + 0x88);
          }
          else {
            iVar7 = *(int *)(lVar11 + 0x14c);
          }
          if (-1 < iVar7) {
            if ((uVar4 & 1) == 0) {
              iVar7 = *(int *)(lVar9 + 0x88);
            }
            else {
              iVar7 = *(int *)(lVar11 + 0x14c);
            }
            if ((iVar7 < 4) && ((*(byte *)(param_1 + 0x3c) & 4) != 0)) {
              FUN_141b6a8e0(param_1,param_2,lVar9,*param_3,*(undefined8 *)(lVar11 + 0x170),1,1,0,
                            lVar15,uVar16);
            }
          }
          if (lVar15 != 0) {
            FMemory::Free();
          }
          uStack_40._0_4_ = (uint)uStack_40 & ~uStack_50._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
        } while (uStack_40._4_4_ < (int)uStack_48[6]);
      }
      uStack_50 = 0xffffffffffffffff;
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uStack_48 = (uint *)0xffffffffffffffff;
      uStack_40 = 0xffffffffffffffff;
      uStack_38 = 0xffffffff;
      local_30 = 0;
      uVar16 = *(undefined8 *)(*param_3 + 0x10);
      plVar1 = *(longlong **)(*param_3 + 8);
      puVar5 = puVar10 + 10;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar10 + 10;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar10 + 2) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x14) = 0xffffffff;
      *(int *)(puVar10 + 3) = (int)uStack_50;
      *(uint *)((longlong)puVar10 + 0x1c) = uStack_50._4_4_;
      *(undefined4 *)(puVar10 + 4) = (undefined4)uStack_48;
      *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_48._4_4_;
      *(uint *)(puVar10 + 5) = (uint)uStack_40;
      *(int *)((longlong)puVar10 + 0x2c) = uStack_40._4_4_;
      *(undefined4 *)(puVar10 + 6) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_38._4_4_;
      *(undefined4 *)(puVar10 + 7) = (undefined4)local_30;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = local_30._4_4_;
      puVar10[8] = plVar1;
      puVar10[9] = uVar16;
      lVar8 = (**(code **)(*plVar1 + 8))(plVar1);
      if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar8 == 0)) {
        (**(code **)(*(longlong *)puVar10[8] + 0x20))();
      }
      lVar8 = (**(code **)(*(longlong *)puVar10[9] + 8))();
      if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar8 == 0)) {
        (**(code **)(*(longlong *)puVar10[9] + 0x20))();
      }
    }
  }
  return;
}


