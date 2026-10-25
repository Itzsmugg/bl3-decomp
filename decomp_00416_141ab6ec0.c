// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ab6ec0 FUN_141ab6ec0 body=46 status=ok
// SIG undefined FUN_141ab6ec0(void)

void FUN_141ab6ec0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1f0);
  if (lVar1 != 0) {
    FUN_141aaf8a0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141ab6ef0 ConstructCompiledInstance body=231 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBasePassAOPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc93f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"ScreenSpaceAOParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6fe0 FUN_141ab6fe0 body=365 status=ok
// SIG undefined FUN_141ab6fe0(void)

undefined8 * FUN_141ab6fe0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc7178;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    FShaderParameter::Bind
              ((undefined4 *)((longlong)puVar1 + 0xdc),*(undefined8 *)(param_1 + 0x18),
               L"RTWriteMaskDimensions",0);
    FShaderParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutCombinedRTWriteMask",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"RTWriteMaskInput0",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"RTWriteMaskInput1",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"RTWriteMaskInput2",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"RTWriteMaskInput3",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xd6,*(undefined8 *)(param_1 + 0x18),L"UtilizeMask",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7150 ConstructCompiledInstance body=240 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FScatterCopyCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc9960;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"NumScatters",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"ScatterBuffer",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"SrcBuffer",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"DstBuffer",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7240 FUN_141ab7240 body=162 status=ok
// SIG undefined FUN_141ab7240(void)

undefined8 * FUN_141ab7240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc7830;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xc6);
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1e4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab72f0 ConstructSerializedInstance body=122 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessAmbientOcclusionSetupPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc93f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7370 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FRecomputeTangentsPerTrianglePassCS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaea40(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8ef8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab73b0 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144dc7048;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab73f0 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TTranslucencyShadowDepthVS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144dc7018;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7430 FUN_141ab7430 body=72 status=ok
// SIG undefined FUN_141ab7430(void)

undefined8 * FUN_141ab7430(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aadc00(puVar1);
    *puVar1 = &PTR_FUN_144db9070;
    *(undefined4 *)(puVar1 + 0x39) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1cc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7480 FUN_141ab7480 body=72 status=ok
// SIG undefined FUN_141ab7480(void)

undefined8 * FUN_141ab7480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaddd0(puVar1);
    *puVar1 = &PTR_FUN_144dc8e40;
    *(undefined4 *)(puVar1 + 0x3e) = 0;
    *(undefined2 *)((longlong)puVar1 + 500) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab74d0 FUN_141ab74d0 body=72 status=ok
// SIG undefined FUN_141ab74d0(void)

undefined8 * FUN_141ab74d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aadf90(puVar1);
    *puVar1 = &PTR_FUN_144dc8cd0;
    *(undefined4 *)(puVar1 + 0x3d) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1ec) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7520 FUN_141ab7520 body=118 status=ok
// SIG undefined FUN_141ab7520(void)

undefined8 * FUN_141ab7520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x178);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x15e) = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    *puVar1 = &PTR_FUN_144dc6fe8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab75a0 FUN_141ab75a0 body=99 status=ok
// SIG undefined FUN_141ab75a0(void)

undefined8 * FUN_141ab75a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *puVar1 = &PTR_FUN_144dc8b48;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7610 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TCapsuleShadowingCS<1,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    TCapsuleShadowingBaseCS<1>::TCapsuleShadowingBaseCS<1>(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8450;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7650 ConstructSerializedInstance body=117 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TCapsuleShadowingUpsamplePS<1,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8c68;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab76d0 FUN_141ab76d0 body=86 status=ok
// SIG undefined FUN_141ab76d0(void)

undefined8 * FUN_141ab76d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8b78;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7730 FUN_141ab7730 body=101 status=ok
// SIG undefined FUN_141ab7730(void)

undefined8 * FUN_141ab7730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc81a0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab77a0 FUN_141ab77a0 body=87 status=ok
// SIG undefined FUN_141ab77a0(void)

undefined8 * FUN_141ab77a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc9898;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7800 FUN_141ab7800 body=138 status=ok
// SIG undefined FUN_141ab7800(void)

undefined8 * FUN_141ab7800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc9038;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1de) = 0;
    *(undefined4 *)(puVar1 + 0x3c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1e4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1e6) = 0;
    puVar1[0x3d] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7890 ConstructSerializedInstance body=94 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FTranslucentObjectShadowingPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc7178;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab78f0 FUN_141ab78f0 body=80 status=ok
// SIG undefined FUN_141ab78f0(void)

undefined8 * FUN_141ab78f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc9960;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab7940 FUN_141ab7940 body=1554 status=ok
// SIG undefined FUN_141ab7940(void)

void FUN_141ab7940(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
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
  float local_res8;
  float local_res10;
  float local_res18;
  float local_res20;
  int local_138;
  longlong local_130;
  float local_128;
  float local_124;
  float local_120;
  longlong *local_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  
  lVar8 = *(longlong *)(param_1 + 8);
  local_138 = 0;
  if (0 < *(int *)(lVar8 + 0x11d0)) {
    local_130 = 0;
    do {
      uVar10 = 0;
      lVar8 = *(longlong *)(local_130 + *(longlong *)(lVar8 + 0x11c8));
      plVar5 = *(longlong **)(lVar8 + 8);
      if (((*(uint *)((longlong)plVar5 + 0x1c) >> 2 & 1) != 0) &&
         ((*(uint *)((longlong)plVar5 + 0x1c) >> 8 & 1) != 0)) {
        local_118 = (longlong *)0x0;
        local_110 = 0;
        FUN_141d34970(lVar8,&local_118);
        lVar11 = *(longlong *)(*local_118 + 8);
        fVar20 = *(float *)(lVar11 + 0xc0);
        fVar16 = *(float *)(lVar11 + 0xc4);
        fVar15 = *(float *)(lVar11 + 200);
        fVar17 = *(float *)(lVar11 + 0xcc);
        uVar3 = *(undefined8 *)(lVar11 + 0xd0);
        local_res8 = *(float *)(lVar11 + 0xd8);
        local_108 = fVar20;
        fStack_104 = fVar16;
        fStack_100 = fVar15;
        fStack_fc = fVar17;
        local_f8 = uVar3;
        local_f0 = local_res8;
        if (1 < (int)local_110) {
          uVar12 = (ulonglong)((int)local_110 - 1);
          local_f8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          local_f8._0_4_ = (float)uVar3;
          fVar18 = local_f8._4_4_;
          fVar23 = (float)local_f8;
          plVar9 = local_118;
          local_res10 = fVar20;
          local_res18 = fVar16;
          local_res20 = fVar15;
          do {
            plVar9 = plVar9 + 1;
            lVar11 = *(longlong *)(*plVar9 + 8);
            if ((*(uint *)(lVar11 + 0x1c) >> 2 & 1) != 0) {
              fVar14 = fVar20 + fVar17;
              fVar20 = fVar20 - fVar17;
              fVar17 = fVar16 - fVar23;
              fVar19 = fVar15 - fVar18;
              fVar16 = fVar16 + fVar23;
              fVar15 = fVar15 + fVar18;
              fVar26 = fVar20;
              if (fVar14 < fVar20) {
                fVar26 = fVar14;
              }
              fVar25 = fVar17;
              if (fVar16 < fVar17) {
                fVar25 = fVar16;
              }
              fVar24 = fVar19;
              if (fVar15 < fVar19) {
                fVar24 = fVar15;
              }
              if (fVar14 <= fVar20) {
                fVar14 = fVar20;
              }
              if (fVar16 <= fVar17) {
                fVar16 = fVar17;
              }
              if (fVar15 <= fVar19) {
                fVar15 = fVar19;
              }
              fVar19 = *(float *)(lVar11 + 0xc0);
              fVar1 = *(float *)(lVar11 + 0xc4);
              fVar17 = fVar19 - *(float *)(lVar11 + 0xcc);
              fVar2 = *(float *)(lVar11 + 200);
              fVar20 = fVar1 - *(float *)(lVar11 + 0xd0);
              fVar18 = fVar2 - *(float *)(lVar11 + 0xd4);
              if (fVar17 < fVar26) {
                fVar26 = fVar17;
              }
              if (fVar20 < fVar25) {
                fVar25 = fVar20;
              }
              if (fVar18 < fVar24) {
                fVar24 = fVar18;
              }
              if (fVar14 < fVar17) {
                fVar14 = fVar17;
              }
              if (fVar16 < fVar20) {
                fVar16 = fVar20;
              }
              if (fVar15 < fVar18) {
                fVar15 = fVar18;
              }
              fVar17 = fVar19 + *(float *)(lVar11 + 0xcc);
              fVar20 = fVar1 + *(float *)(lVar11 + 0xd0);
              fVar18 = fVar2 + *(float *)(lVar11 + 0xd4);
              if (fVar17 < fVar26) {
                fVar26 = fVar17;
              }
              if (fVar20 < fVar25) {
                fVar25 = fVar20;
              }
              if (fVar18 < fVar24) {
                fVar24 = fVar18;
              }
              if (fVar14 < fVar17) {
                fVar14 = fVar17;
              }
              if (fVar16 < fVar20) {
                fVar16 = fVar20;
              }
              if (fVar15 < fVar18) {
                fVar15 = fVar18;
              }
              fVar21 = fVar15 - fVar24;
              fVar14 = fVar14 - fVar26;
              fVar22 = fVar16 - fVar25;
              fVar18 = fVar21 * 0.5;
              fVar17 = fVar14 * 0.5;
              fVar23 = fVar22 * 0.5;
              fVar15 = fVar18 + fVar24;
              fVar20 = fVar17 + fVar26;
              fVar16 = fVar23 + fVar25;
              local_f0 = SQRT((fVar1 - fVar16) * (fVar1 - fVar16) +
                              (fVar19 - fVar20) * (fVar19 - fVar20) +
                              (fVar2 - fVar15) * (fVar2 - fVar15)) + *(float *)(lVar11 + 0xd8);
              local_res8 = SQRT((local_res18 - fVar16) * (local_res18 - fVar16) +
                                (local_res10 - fVar20) * (local_res10 - fVar20) +
                                (local_res20 - fVar15) * (local_res20 - fVar15)) + local_res8;
              if (local_f0 <= local_res8) {
                local_f0 = local_res8;
              }
              local_f8 = CONCAT44(fVar18,fVar23);
              fVar14 = SQRT((fVar22 * fVar22 + fVar14 * fVar14 + fVar21 * fVar21) * 0.25);
              local_res8 = local_f0;
              local_res10 = fVar20;
              local_res18 = fVar16;
              local_res20 = fVar15;
              local_108 = fVar20;
              fStack_104 = fVar16;
              fStack_100 = fVar15;
              fStack_fc = fVar17;
              if (fVar14 <= local_f0) {
                local_res8 = fVar14;
                local_f0 = fVar14;
              }
            }
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        uVar12 = uVar10;
        if (0 < *(int *)(param_1 + 200)) {
          do {
            fVar20 = DAT_1464c1644;
            lVar11 = *(longlong *)(param_1 + 0xc0);
            cVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
            if (cVar7 != '\0') {
              fVar20 = fVar20 + local_f0 * 0.5;
            }
            plVar9 = *(longlong **)(uVar10 + 0x30a0 + lVar11);
            if ((plVar9 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar9 + 0x20))(), cVar7 == '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            local_128 = fStack_fc + fVar20;
            local_124 = (float)local_f8 + fVar20;
            local_120 = local_f8._4_4_ + fVar20;
            cVar7 = FConvexVolume::IntersectBox(lVar11 + 0x1070 + uVar10,&local_108,&local_128);
            if ((cVar7 != '\0') &&
               ((!bVar6 ||
                (plVar9 = *(longlong **)(uVar10 + 0x30a0 + lVar11),
                cVar7 = (**(code **)(*plVar9 + 0x28))(plVar9,0xffffffff,&local_108), cVar7 != '\0'))
               )) {
              lVar11 = lVar11 + uVar10;
              iVar4 = *(int *)(lVar11 + 0x30b0);
              *(int *)(lVar11 + 0x30b0) = iVar4 + 1;
              if (*(int *)(lVar11 + 0x30b4) < iVar4 + 1) {
                FUN_140822430(lVar11 + 0x30a8,iVar4);
              }
              *(longlong *)(*(longlong *)(lVar11 + 0x30a8) + (longlong)iVar4 * 8) = lVar8;
            }
            uVar13 = (int)uVar12 + 1;
            uVar10 = uVar10 + 0x30d0;
            uVar12 = (ulonglong)uVar13;
          } while ((int)uVar13 < *(int *)(param_1 + 200));
        }
      }
      local_138 = local_138 + 1;
      lVar8 = *(longlong *)(param_1 + 8);
      local_130 = local_130 + 8;
    } while (local_138 < *(int *)(lVar8 + 0x11d0));
  }
  return;
}



// FUNCTION 141ab7f60 FUN_141ab7f60 body=1129 status=ok
// SIG undefined FUN_141ab7f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ab7f60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_748 [32];
  undefined4 local_728;
  undefined4 local_718;
  undefined4 uStack_714;
  longlong local_710;
  longlong *local_708;
  longlong *local_700;
  undefined1 local_6f8 [640];
  undefined1 local_478 [640];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_748;
  plVar7 = (longlong *)0x0;
  local_718 = 0;
  lVar4 = FSceneRenderTargets::Get();
  FForwardLightData::FForwardLightData(local_6f8);
  FForwardLightData::FForwardLightData(local_478);
  local_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0x3f800000;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3f800000;
  local_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0x3f800000;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0x3f800000;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0x3f800000;
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0x3f800000;
  FForwardLightData::operator=(local_6f8,0);
  if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
    uVar5 = *(undefined8 *)(param_2 + 0x1a30);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(**(longlong **)(param_2 + 0x10) + 8) + 0x1a30);
  }
  FForwardLightData::operator=(local_478,uVar5);
  uVar5 = FSceneRenderTargets::Get(param_1);
  FUN_141d4f100(uVar5,param_2,&local_1f8);
  FUN_141b45c30(param_2,&local_188);
  lVar6 = GetSubsufaceProfileTexture_RT(param_1);
  if (lVar6 == 0) {
    lVar6 = DAT_1464c3318;
  }
  if (param_3 == 0) {
    param_3 = DAT_1464c3310;
  }
  local_e8 = *(undefined8 *)(lVar6 + 0x10);
  local_d8 = *(undefined8 *)(param_3 + 0x10);
  local_d0 = FUN_141ac0bb0();
  lVar6 = *(longlong *)(lVar4 + 0x120);
  if (*(char *)(lVar4 + 0x2d8) == '\0') {
    lVar6 = DAT_1464c3310;
  }
  local_c8 = *(undefined8 *)(lVar6 + 0x10);
  local_c0 = FUN_141ac0bb0();
  local_b8 = *(undefined8 *)(DAT_1464c3310 + 0x10);
  if (1 < *(int *)(lVar4 + 0x3bc)) {
    local_b8 = *(undefined8 *)(*(longlong *)(lVar4 + 0x60) + 0x10);
  }
  cVar3 = FUN_141ac2820();
  if (DAT_146ab62ee == '\0') {
    if ((cVar3 == '\0') || (lVar6 = *(longlong *)(lVar4 + 0xe8), *(longlong *)(lVar4 + 0xe8) == 0))
    {
      lVar6 = DAT_1464c3320;
    }
    if ((cVar3 == '\0') || (lVar12 = *(longlong *)(lVar4 + 0xf0), *(longlong *)(lVar4 + 0xf0) == 0))
    {
      lVar12 = DAT_1464c3378;
    }
    if ((cVar3 == '\0') || (lVar10 = *(longlong *)(lVar4 + 0xf8), *(longlong *)(lVar4 + 0xf8) == 0))
    {
      lVar10 = DAT_1464c3370;
    }
    if ((cVar3 == '\0') || (lVar9 = *(longlong *)(lVar4 + 0x100), *(longlong *)(lVar4 + 0x100) == 0)
       ) {
      lVar9 = DAT_1464c3318;
    }
    local_b0 = *(undefined8 *)(lVar6 + 0x10);
    local_a0 = *(undefined8 *)(lVar12 + 0x10);
    local_90 = *(undefined8 *)(lVar10 + 0x10);
    local_80 = *(undefined8 *)(lVar9 + 0x10);
    local_70 = *(undefined8 *)(DAT_1464c3380 + 0x10);
  }
  else {
    lVar6 = DAT_1464c3380;
    if (*(longlong *)(lVar4 + 0x110) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x110);
    }
    local_b0 = *(undefined8 *)(DAT_1464c3320 + 0x10);
    local_a0 = *(undefined8 *)(DAT_1464c3378 + 0x10);
    local_90 = *(undefined8 *)(DAT_1464c3370 + 0x10);
    local_80 = *(undefined8 *)(DAT_1464c3318 + 0x10);
    local_70 = *(undefined8 *)(lVar6 + 0x10);
  }
  local_a8 = FUN_1404a0e20();
  local_98 = FUN_1404a0e20();
  local_88 = FUN_1404a0e20();
  local_78 = FUN_1404a0e20();
  local_68 = FUN_1404a0e20();
  if ((cVar3 == '\0') || (plVar11 = *(longlong **)(lVar4 + 0x88), plVar11 == (longlong *)0x0)) {
    local_708 = (longlong *)0x0;
    bVar2 = false;
    bVar1 = true;
    plVar11 = local_700;
  }
  else {
    local_700 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
    bVar2 = true;
    bVar1 = false;
    plVar7 = plVar11;
  }
  if ((bVar1) && (local_708 != (longlong *)0x0)) {
    (**(code **)(*local_708 + 0x30))(local_708);
  }
  if ((bVar2) && (plVar11 != (longlong *)0x0)) {
    (**(code **)(*plVar11 + 0x30))(plVar11);
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)(DAT_146ac3e10 + 0x30);
  }
  else {
    plVar7 = plVar7 + 2;
  }
  local_60 = *plVar7;
  if ((DAT_146ab62ed == '\0') || (*(longlong *)(lVar4 + 0x108) == 0)) {
    local_58 = *(undefined8 *)(DAT_1464c3310 + 8);
  }
  else {
    local_58 = *(undefined8 *)(*(longlong *)(lVar4 + 0x108) + 8);
  }
  cVar3 = FUN_141d6a650(param_2);
  if (cVar3 != '\0') {
    lVar4 = FViewInfo::GetEyeAdaptationRT(param_2);
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)(lVar4 + 8);
      goto LAB_141ab8338;
    }
  }
  puVar8 = (undefined8 *)(DAT_146ac3d68 + 0x30);
LAB_141ab8338:
  local_50 = *puVar8;
  local_728 = 1;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_718,local_6f8,&DAT_1469fd998);
  local_710 = CONCAT44(uStack_714,local_718);
  if (local_710 != 0) {
    LOCK();
    *(int *)(local_710 + 8) = *(int *)(local_710 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_718);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_4,&local_710);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_710);
  return;
}



// FUNCTION 141ab83d0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<1,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x800;
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



// FUNCTION 141ab84a0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10100;
  local_84 = 0x70101;
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



// FUNCTION 141ab8570 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x40100;
  local_84 = 0x70001;
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



// FUNCTION 141ab8640 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50100;
  local_84 = 0x70100;
  local_80 = 0x501;
  local_7c = 0x1000701;
  local_78 = 0x1000005;
  local_74 = 0x5010007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab8710 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,1,5,0,0,1,7,0,0,1,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50100;
  local_84 = 0x70100;
  local_80 = 0x100;
  local_7c = 0x1000701;
  local_78 = 0x1000005;
  local_74 = 0x5010007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab87e0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10400;
  local_84 = 0x70001;
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



// FUNCTION 141ab88b0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10400;
  local_84 = 0x70100;
  local_80 = 0x104;
  local_7c = 0x4000701;
  local_78 = 0x1000001;
  local_74 = 0x1040007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab8980 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10400;
  local_84 = 0x70100;
  local_80 = 0x504;
  local_7c = 0x4000701;
  local_78 = 0x1000005;
  local_74 = 0x5040007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab8a50 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10400;
  local_84 = 0x70100;
  local_80 = 0x504;
  local_7c = 0x4000701;
  local_78 = 0x1000005;
  local_74 = 0x5080007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab8b20 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10400;
  local_84 = 0x70100;
  local_80 = 0x100;
  local_7c = 0x4000701;
  local_78 = 0x1000005;
  local_74 = 0x5040007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab8bf0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10400;
  local_84 = 0x70100;
  local_80 = 0x100;
  local_7c = 0x4000701;
  local_78 = 0x1000005;
  local_74 = 0x5080007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab8cc0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0x70001;
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



// FUNCTION 141ab8d90 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0x70100;
  local_80 = 0x504;
  local_7c = 0x4000701;
  local_78 = 0x1000005;
  local_74 = 0x5040007;
  local_70 = 0x7010000;
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



// FUNCTION 141ab8e60 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x800;
  local_84 = 0x70001;
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



// FUNCTION 141ab8f30 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,8,0,0,0,1,1,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x800;
  local_84 = 0x70100;
  local_80 = 8;
  local_7c = 0x1000101;
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



// FUNCTION 141ab9000 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0x100;
  local_80 = 0x504;
  local_7c = 0x4000001;
  local_78 = 0x1000005;
  local_74 = 0x5040000;
  local_70 = 0x10000;
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



// FUNCTION 141ab90d0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10100;
  local_84 = 0xf0100;
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



// FUNCTION 141ab91a0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10100;
  local_84 = 0xf0500;
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



// FUNCTION 141ab9270 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50100;
  local_84 = 0xf0500;
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



// FUNCTION 141ab9340 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_84 = 0xf0001;
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
  local_58 = 0x10000;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141ab9410 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0xf0500;
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



// FUNCTION 141ab94e0 FUN_141ab94e0 body=198 status=ok
// SIG undefined FUN_141ab94e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141ab94e0(undefined8 param_1)

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
  local_88 = 0x50400;
  local_84 = 0xf0500;
  local_80 = 0x504;
  local_7c = 0x4000f05;
  local_78 = 0x5000005;
  local_74 = 0x101000f;
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



// FUNCTION 141ab95b0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0xf0500;
  local_80 = 0x504;
  local_7c = 0x4000f05;
  local_78 = 0x5000005;
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



// FUNCTION 141ab9680 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0xf0500;
  local_80 = 0x504;
  local_7c = 0xf05;
  local_78 = 0x1000001;
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



// FUNCTION 141ab9750 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0xf0500;
  local_80 = 0x100;
  local_7c = 0x4000f01;
  local_78 = 0x5000005;
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



// FUNCTION 141ab9820 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x50400;
  local_84 = 0xf0500;
  local_80 = 0x100;
  local_7c = 0xf01;
  local_78 = 0x1000001;
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



// FUNCTION 141ab98f0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,8,0,0,6,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x800;
  local_84 = 0xf0006;
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



// FUNCTION 141ab99c0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10000;
  local_84 = 0xf0100;
  local_80 = 0x504;
  local_7c = 0x4000f05;
  local_78 = 0x5000005;
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



// FUNCTION 141ab9a90 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10000;
  local_84 = 0xf0100;
  local_80 = 0x504;
  local_7c = 0xf05;
  local_78 = 0x1000001;
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



// FUNCTION 141ab9b60 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_88 = 0x10000;
  local_84 = 0xf0100;
  local_80 = 0x100;
  local_7c = 0x4000f01;
  local_78 = 0x5000005;
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



// FUNCTION 141ab9c30 CreateTask body=378 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FTranscodeTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144dcb110;
  *(undefined1 *)(plVar8 + 0x17) = 0;
  plVar8[0x18] = local_res10;
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



// FUNCTION 141ab9db0 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FFunctionGraphTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144dc9f00;
  *(undefined1 *)(plVar8 + 0xc) = 0;
  plVar8[0xd] = local_res10;
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



// FUNCTION 141ab9f30 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FFunctionGraphTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144dc9ef0;
  *(undefined1 *)(plVar8 + 0xc) = 0;
  plVar8[0xd] = local_res10;
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



// FUNCTION 141aba0b0 FUN_141aba0b0 body=372 status=ok
// SIG undefined FUN_141aba0b0(void)

undefined8 * FUN_141aba0b0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144dc9ed0;
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[6] = local_res10;
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



// FUNCTION 141aba230 FUN_141aba230 body=372 status=ok
// SIG undefined FUN_141aba230(void)

undefined8 * FUN_141aba230(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_144dc9ee0;
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[6] = local_res10;
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



// FUNCTION 141aba3b0 FUN_141aba3b0 body=1780 status=ok
// SIG undefined FUN_141aba3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aba3b0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  undefined1 local_130;
  undefined1 local_128;
  uint local_118 [2];
  undefined8 local_110;
  uint local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar4 = *(longlong *)(param_2 + 0x40);
  lVar7 = FSceneRenderTargets::Get(lVar4);
  plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0xe8) + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_f0 = plVar11;
  lVar8 = (**(code **)(*plVar11 + 8))(plVar11);
  iVar2 = *(int *)(lVar8 + 100);
  lVar8 = (**(code **)(*plVar11 + 8))(plVar11);
  local_128 = 1;
  local_90 = iVar2 + 7U >> 3;
  local_108 = *(int *)(lVar8 + 0x60) + 7U >> 3;
  local_98 = DAT_1464c9cb0;
  local_88 = 1;
  local_80 = 1;
  local_78 = DAT_146a9daa4;
  local_100 = CONCAT44(local_100._4_4_,local_90);
  local_110 = CONCAT44(local_90,local_108);
  local_130 = 1;
  local_138 = L"DBufferMask";
  local_a8 = _DAT_1464c9ca0;
  uStack_a4 = uRam00000001464c9ca4;
  uStack_a0 = uRam00000001464c9ca8;
  uStack_9c = uRam00000001464c9cac;
  local_8c = 0;
  local_84 = 0x10000;
  local_7c = 0x39;
  local_74 = 0x10001;
  local_70 = 0;
  local_68 = L"UnknownTexture2D";
  local_60 = 1;
  local_94 = local_108;
  FUN_141ce20b0(&PTR_PTR_1464c2560,*(undefined8 *)(param_2 + 0x40),&local_a8,lVar7 + 0x108);
  lVar8 = (**(code **)(*plVar11 + 8))(plVar11);
  uVar3 = *(undefined4 *)(lVar8 + 100);
  lVar9 = (**(code **)(*plVar11 + 8))(plVar11);
  lVar8 = *(longlong *)(param_2 + 0x60);
  local_e8 = 0;
  uStack_e0 = *(undefined4 *)(lVar9 + 0x60);
  local_c8 = 0;
  local_d0 = &DAT_1469fe480;
  uStack_dc = uVar3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x38,local_118,&local_d0);
  plVar11 = (longlong *)0x0;
  if (local_118[0] != 0xffffffff) {
    plVar11 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar8 + 0x38));
  }
  local_f8 = 0;
  local_d8 = 0;
  plVar14 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  lVar8 = *plVar14;
  FUN_141a19150(*(undefined8 *)(param_2 + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_d8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_f8);
  local_b8 = (undefined4)local_e8;
  uStack_b4 = local_e8._4_4_;
  uStack_b0 = uStack_e0;
  uStack_ac = uStack_dc;
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_b8,0,0x3f800000);
  lVar9 = *(longlong *)(lVar8 + 0x48);
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  uVar5 = *(undefined8 *)(lVar9 + 0x60);
  lVar9 = *(longlong *)(param_2 + 0x40);
  FRHIComputeShader::UpdateStats(uVar5);
  puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 3;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 3;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar10;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar12;
  *(undefined8 **)(lVar9 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  puVar12[2] = uVar5;
  lVar9 = *(longlong *)(lVar8 + 0x48);
  local_f8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x108) + 0x18);
  local_118[0] = (uint)*(ushort *)(lVar8 + 0xc2);
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  lVar6 = *(longlong *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(lVar9 + 0x60);
  puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(lVar6 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar6 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar6 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(lVar6 + 0x30) = puVar10;
  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
  **(undefined8 **)(lVar6 + 8) = puVar12;
  *(undefined8 **)(lVar6 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  *(uint *)(puVar12 + 3) = local_118[0];
  puVar12[4] = local_f8;
  puVar12[2] = uVar5;
  FUN_141ad4290(lVar8,*(undefined8 *)(param_2 + 0x40),param_2,local_110);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  local_110 = *(undefined8 *)(*(longlong *)(lVar7 + 0x108) + 0x18);
  puVar10 = puVar12 + 1;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 1;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *puVar12 = local_110;
  puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 6;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 6;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar13;
  *(undefined8 **)(lVar4 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  puVar13[5] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar12;
  puVar13[4] = 1;
  local_138 = (wchar_t *)CONCAT44(local_138._4_4_,1);
  DispatchComputeShader
            (*(undefined8 *)(param_2 + 0x40),lVar8,local_108 + 7 >> 3,(int)local_100 + 7U >> 3);
  lVar9 = *(longlong *)(param_2 + 0x40);
  puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 2;
  if (*(undefined8 **)(lVar9 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar9 + 0x30,0x18);
    puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 2;
  }
  *(undefined8 **)(lVar9 + 0x30) = puVar10;
  *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
  **(undefined8 **)(lVar9 + 8) = puVar12;
  *(undefined8 **)(lVar9 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144dc9c50;
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  local_100 = *(undefined8 *)(*(longlong *)(lVar7 + 0x108) + 0x18);
  puVar10 = puVar12 + 1;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x10);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 1;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *puVar12 = local_100;
  puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 6;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 6;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar13;
  *(undefined8 **)(lVar4 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  puVar13[3] = puVar12;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  local_58 = *(undefined8 *)(*(longlong *)(lVar7 + 0xe8) + 8);
  local_50 = *(undefined8 *)(*(longlong *)(lVar7 + 0xf0) + 8);
  local_48 = *(undefined8 *)(*(longlong *)(lVar7 + 0xf8) + 8);
  local_40 = *(undefined8 *)(*(longlong *)(lVar7 + 0x100) + 8);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 4;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x28);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 4;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *puVar12 = local_58;
  puVar12[1] = local_50;
  puVar12[2] = local_48;
  puVar12[3] = local_40;
  puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 5;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 5;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar10;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar13;
  *(undefined8 **)(lVar4 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar13 + 2) = 4;
  puVar13[3] = puVar12;
  *(undefined4 *)(puVar13 + 4) = 5;
  *(undefined1 *)((longlong)puVar13 + 0x24) = 0;
  uVar1 = *(ushort *)(lVar8 + 0xc2);
  lVar4 = *(longlong *)(lVar8 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  lVar7 = *(longlong *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(lVar4 + 0x60);
  puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar10;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar12;
  *(undefined8 **)(lVar7 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = uVar5;
  *(uint *)(puVar12 + 3) = (uint)uVar1;
  puVar12[4] = 0;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_f0);
  return;
}



// FUNCTION 141abaab0 FUN_141abaab0 body=450 status=ok
// SIG undefined FUN_141abaab0(void)

void FUN_141abaab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1[0xe] == 0) {
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_141aa21d0(*param_1,param_1[1],param_1[2],0,param_1 + 3,param_1[0xb],param_1[0xc],0);
    }
    else {
      FUN_141aa2420(*param_1,param_1[1],param_1[0xf],*(char *)(param_1 + 10),param_1 + 3,0,0,
                    param_1 + 0xf,*(undefined4 *)(param_1 + 0xd),
                    *(undefined4 *)((longlong)param_1 + 0x6c),1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd);
    uVar4 = (ulonglong)iVar1;
    iVar7 = *(int *)((longlong)param_1 + 0x6c);
    if (iVar1 <= iVar7) {
      uVar5 = uVar4;
      if (iVar7 < iVar1) goto LAB_141abab19;
      do {
        psVar2 = (short *)(*(longlong *)param_1[0xe] + uVar5 * 2);
        do {
          if (*psVar2 != 0) break;
          uVar4 = (ulonglong)((int)uVar4 + 1);
          uVar5 = uVar5 + 1;
          psVar2 = psVar2 + 1;
        } while ((longlong)uVar5 <= (longlong)iVar7);
LAB_141abab19:
        uVar3 = (uint)uVar4;
        if ((int)uVar3 <= iVar7) {
          uVar4 = uVar4 & 0xffffffff;
          uVar6 = uVar3;
          if ((int)uVar3 < iVar7) {
            psVar2 = (short *)(*(longlong *)param_1[0xe] + 2 + uVar5 * 2);
            do {
              uVar6 = (uint)uVar4;
              if (*psVar2 == 0) break;
              uVar6 = uVar6 + 1;
              uVar4 = (ulonglong)uVar6;
              uVar5 = uVar5 + 1;
              psVar2 = psVar2 + 1;
            } while ((longlong)uVar5 < (longlong)iVar7);
          }
          if (*(char *)(param_1 + 10) == '\0') {
            FUN_141aa21d0(*param_1,param_1[1],param_1[2],0,param_1 + 3,param_1[0xb],param_1[0xc],0);
          }
          else {
            FUN_141aa2420(*param_1,param_1[1],param_1[0xf],*(char *)(param_1 + 10),param_1 + 3,0,0,
                          param_1 + 0xf,uVar3,uVar6,1);
          }
          iVar7 = *(int *)((longlong)param_1 + 0x6c);
          uVar4 = (ulonglong)(uVar6 + 1);
          uVar5 = uVar5 + 1;
        }
      } while ((int)uVar4 <= iVar7);
    }
  }
  FUN_141ec9240(param_1[1],param_3);
  return;
}



// FUNCTION 141abac80 FUN_141abac80 body=105 status=ok
// SIG undefined FUN_141abac80(void)

void FUN_141abac80(longlong *param_1)

{
  undefined8 *puVar1;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  puVar1 = *(undefined8 **)(*param_1 + 0x1908);
  if ((puVar1 != (undefined8 *)0x0) && (puVar1[6] == param_1[1])) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(*param_1 + 0x1908) = 0;
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141abacf0 FUN_141abacf0 body=365 status=ok
// SIG undefined FUN_141abacf0(void)

undefined8
FUN_141abacf0(undefined8 param_1,longlong param_2,undefined1 param_3,longlong param_4,byte param_5,
             undefined8 *param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,
             undefined1 param_10)

{
  undefined4 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *local_res10 [2];
  undefined1 local_res20 [8];
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  
  local_res10[0] = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
            (*(longlong **)(param_4 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_res20,
             local_res10);
  plVar2 = local_res10[0];
  uVar3 = (**(code **)(*local_res10[0] + 0x1e8))(local_res10[0]);
  if ((uVar3 < 2) && (iVar4 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar4 != 3)) {
    local_38 = *(undefined4 *)(param_4 + 0x90);
    local_68 = *param_6;
    local_60 = param_6[1];
    local_58 = *(undefined4 *)(param_6 + 2);
    local_50 = param_6[3];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_48 = param_6[4];
    uVar1 = *(undefined4 *)(param_2 + 0x1a38);
    local_40 = *(undefined4 *)(param_6 + 5);
    local_3c = *(undefined4 *)((longlong)param_6 + 0x2c);
    local_30 = param_8;
    iVar4 = 1;
    local_34 = 0;
    if (*(int *)(param_4 + 0x80) != 1) {
      iVar4 = (1 << ((byte)*(int *)(param_4 + 0x80) & 0x1f)) + -1;
    }
    local_a0 = (longlong)iVar4;
    local_90 = param_7;
    local_98 = plVar2;
    local_a8 = param_4;
    local_70 = param_2;
    local_88 = (**(code **)(*plVar2 + 0x1e8))(plVar2);
    local_84 = (**(code **)(*plVar2 + 0x1f8))(plVar2);
    local_80 = param_5 ^ 1;
    local_78 = param_9;
    local_74 = param_10;
    local_7c = uVar1;
    local_73 = param_3;
    FUN_141aa4670(param_1,&local_a8,&local_70);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
    return 1;
  }
  return 0;
}



// FUNCTION 141abae60 FUN_141abae60 body=700 status=ok
// SIG undefined FUN_141abae60(void)

void FUN_141abae60(longlong param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                  void *param_6,int param_7,void *param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Dst;
  undefined8 *puVar11;
  void *_Dst_00;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  switch(param_2) {
  case 0:
    iVar12 = param_5 * 3;
    break;
  case 1:
    iVar12 = param_5 + 2;
    break;
  case 2:
    iVar12 = param_5 * 2;
    break;
  default:
    LowLevelFatalErrorHandler("Unknown",0x3a6,L"Unknown primitive type: %u",param_2);
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x3a6,L"Unknown primitive type: %u",param_2);
    iVar12 = 0;
    break;
  case 4:
    iVar12 = param_5;
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
    iVar12 = (param_2 + -5) * param_5;
  }
  uVar15 = param_4 * param_9;
  _Dst_00 = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (longlong)(int)uVar15 + (longlong)_Dst_00;
  if (*(ulonglong *)(param_1 + 0x38) < uVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar15 + 0x10);
    _Dst_00 = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar10 = (longlong)(int)uVar15 + (longlong)_Dst_00;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar10;
  uVar13 = iVar12 * param_7;
  _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
  uVar10 = (longlong)(int)uVar13 + (longlong)_Dst;
  if (*(ulonglong *)(param_1 + 0x38) < uVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar13 + 0x10);
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar10 = (longlong)(int)uVar13 + (longlong)_Dst;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar10;
  *(int *)(param_1 + 0x178) = param_4;
  *(int *)(param_1 + 0x17c) = param_9;
  *(undefined4 *)(param_1 + 0x188) = param_3;
  *(int *)(param_1 + 400) = param_7;
  *(int *)(param_1 + 0x170) = param_2;
  *(int *)(param_1 + 0x174) = param_5;
  *(void **)(param_1 + 0x180) = _Dst_00;
  *(int *)(param_1 + 0x18c) = iVar12;
  *(void **)(param_1 + 0x198) = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst_00,param_8,(ulonglong)uVar15);
  _guard_xfg_dispatch_icall_nop(_Dst,param_6,(ulonglong)uVar13);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar14 + 8;
  if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x48);
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar14 + 8;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar14;
  uVar1 = *(undefined4 *)(param_1 + 0x18c);
  uVar8 = *(undefined8 *)(param_1 + 0x198);
  uVar9 = *(undefined8 *)(param_1 + 0x180);
  uVar2 = *(undefined4 *)(param_1 + 0x178);
  uVar3 = *(undefined4 *)(param_1 + 400);
  uVar4 = *(undefined4 *)(param_1 + 0x188);
  uVar5 = *(undefined4 *)(param_1 + 0x17c);
  uVar6 = *(undefined4 *)(param_1 + 0x174);
  uVar7 = *(undefined4 *)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 8) = puVar14 + 1;
  puVar14[1] = 0;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar1;
  *puVar14 = &PTR_LAB_144dc9c40;
  *(undefined4 *)(puVar14 + 2) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x14) = uVar6;
  *(undefined4 *)(puVar14 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar5;
  puVar14[4] = uVar9;
  *(undefined4 *)(puVar14 + 5) = uVar4;
  *(undefined4 *)(puVar14 + 6) = uVar3;
  puVar14[7] = uVar8;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 141abb160 FUN_141abb160 body=2707 status=ok
// SIG undefined FUN_141abb160(void)

/* WARNING: Removing unreachable block (ram,0x000141abbac8) */
/* WARNING: Removing unreachable block (ram,0x000141abbad5) */
/* WARNING: Removing unreachable block (ram,0x000141abbae1) */

void FUN_141abb160(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  DWORD *pDVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong *puVar23;
  ushort *puVar24;
  undefined2 uVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong *plVar31;
  uint uVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_194;
  uint local_18c;
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  undefined8 local_180;
  undefined4 local_178;
  int local_174;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140 [3];
  undefined *local_128;
  undefined1 *puStack_120;
  code *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  iVar36 = *(int *)(param_1 + 0x38);
  lVar28 = (longlong)iVar36;
  plVar27 = (longlong *)0x0;
  local_174 = 0;
  iVar22 = *(int *)(param_6 + 0x6c);
  if (iVar36 <= *(int *)(param_6 + 0x6c)) {
    iVar22 = iVar36;
  }
  if (iVar22 != 0) {
    local_178 = DAT_1464a8210;
    local_res10[0] = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (*(char *)(param_6 + 0x78) == '\0') {
      iVar36 = *(int *)(param_1 + 0x38);
      iVar14 = iVar36 / iVar22;
      if (0 < iVar22) {
        local_168 = param_6 + 0x18;
        plVar31 = plVar27;
        plVar17 = plVar27;
        do {
          local_184 = (uint)((int)plVar31 < iVar36 - iVar14 * iVar22) + (int)plVar17 + iVar14;
          local_174 = local_184 - 1;
          local_180 = FUN_141d6b6f0(param_6);
          pDVar20 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          plVar18 = TlsGetValue(*pDVar20);
          if (plVar18 == (longlong *)0x0) {
            plVar26 = (longlong *)operator_new(0x18);
            plVar18 = plVar27;
            if (plVar26 != (longlong *)0x0) {
              *plVar26 = 0;
              plVar26[1] = 0;
              *(undefined4 *)(plVar26 + 2) = 0;
              plVar18 = plVar26;
            }
            TlsSetValue(*pDVar20,plVar18);
          }
          plVar26 = (longlong *)plVar18[1];
          if (plVar26 == (longlong *)0x0) {
            if (*plVar18 == 0) {
              lVar28 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar20 + 2);
              plVar18[1] = lVar28;
              if (lVar28 == 0) {
                puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar18[1] = (longlong)puVar21;
                lVar28 = 0x1f;
                do {
                  puVar2 = puVar21 + 0x20;
                  *puVar21 = puVar2;
                  lVar28 = lVar28 + -1;
                  puVar21 = puVar2;
                } while (lVar28 != 0);
                *puVar2 = 0;
              }
            }
            else {
              plVar18[1] = *plVar18;
              *plVar18 = 0;
            }
            plVar26 = (longlong *)plVar18[1];
            iVar15 = 0x20;
            *(undefined4 *)(plVar18 + 2) = 0x20;
          }
          else {
            iVar15 = (int)plVar18[2];
          }
          plVar18[1] = *plVar26;
          *(int *)(plVar18 + 2) = iVar15 + -1;
          plVar18 = (longlong *)FUN_1415914c0(local_140);
          local_d0 = *plVar18;
          *plVar18 = 0;
          *plVar26 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar26 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar26 + 0xc) = 1;
          *plVar26 = (longlong)&PTR__scalar_deleting_destructor__144dcb110;
          *(undefined1 *)(plVar26 + 0x17) = 0;
          plVar26[0x18] = local_d0;
          if (local_140[0] != 0) {
            LOCK();
            piVar1 = (int *)(local_140[0] + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          uVar4 = local_180;
          FUN_141aad8b0(plVar26 + 2,param_1,local_180,*(undefined8 *)(param_6 + 8),local_168,
                        local_res10,local_res18,local_res20,param_5,(int)plVar17,local_174,0);
          local_148 = plVar26[0x18];
          if (local_148 != 0) {
            LOCK();
            *(int *)(local_148 + 0x48) = *(int *)(local_148 + 0x48) + 1;
            UNLOCK();
          }
          FUN_141ada070(plVar26,0,local_178,1);
          FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_148,0xffffffff);
          if (local_148 != 0) {
            LOCK();
            piVar1 = (int *)(local_148 + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar17 = (longlong *)(ulonglong)local_184;
          uVar29 = (int)plVar31 + 1;
          plVar31 = (longlong *)(ulonglong)uVar29;
        } while ((int)uVar29 < iVar22);
      }
    }
    else {
      puStack_120 = &local_188;
      local_188 = 0;
      local_128 = &DAT_14060d670;
      local_c8 = &DAT_14060d670;
      local_184 = iVar36;
      puStack_c0 = puStack_120;
      lVar16 = FUN_1415d8310(&local_c8,&DAT_146216a38);
      plVar17 = (longlong *)operator_new(0x10,lVar16 + 0x18,1,0);
      plVar31 = plVar27;
      if (plVar17 != (longlong *)0x0) {
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar31 = plVar17;
      }
      lVar16 = plVar31[1];
      iVar14 = (int)lVar16 + iVar36;
      *(int *)(plVar31 + 1) = iVar14;
      if (*(int *)((longlong)plVar31 + 0xc) < iVar14) {
        FUN_141ad3a00(plVar31);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar31 + (longlong)(int)lVar16 * 2),0,lVar28 * 2);
      bVar11 = false;
      bVar12 = false;
      iVar14 = FColorVertexBuffer::GetAllocatedSize(*(undefined8 *)(param_6 + 8));
      iVar15 = FUN_14274f350(*(undefined8 *)(param_6 + 8));
      if ((((*(char *)(param_6 + 0x7a) == '\0') || (iVar14 == 0)) ||
          (*(int *)(param_1 + 0x94) != iVar14)) || (*(int *)(param_1 + 0x90) + 1 != iVar15)) {
        puStack_110 = local_187;
        local_187[0] = 0;
        local_118 = FUN_141ab5cb0;
        local_e8 = &local_res18;
        local_e0 = &local_res20;
        local_b8 = FUN_141ab5cb0;
        local_d8 = param_5;
        local_108 = &LAB_141ab5ca0;
        local_a8 = &LAB_141ab5ca0;
        plStack_100 = &local_f8;
        local_f8 = param_1;
        local_f0 = plVar31;
        puStack_b0 = puStack_110;
        plStack_a0 = &local_f8;
        FUN_141ac7f60(iVar36,&local_a8,&local_b8,0);
        bVar11 = true;
        bVar12 = true;
      }
      else {
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            uVar29 = *(uint *)((longlong)
                               *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)plVar17 * 4) *
                               0xf0 + 0xe0 + *(longlong *)(param_1 + 0x40));
            uVar25 = 0xffff;
            if (uVar29 < 0x10000) {
              uVar25 = (short)uVar29;
            }
            *(undefined2 *)(*plVar31 + (longlong)plVar17 * 2) = uVar25;
            plVar17 = (longlong *)((longlong)plVar17 + 1);
          } while ((longlong)plVar17 < lVar28);
        }
      }
      *(int *)(param_1 + 0x90) = iVar15;
      uVar29 = 0;
      *(int *)(param_1 + 0x94) = iVar14;
      puVar23 = (ulonglong *)*plVar31;
      plVar17 = (longlong *)((longlong)(int)plVar31[1] & 0x7fffffffffffffff);
      if ((ulonglong *)((longlong)(int)plVar31[1] * 2 + (longlong)puVar23) < puVar23) {
        plVar17 = plVar27;
      }
      if (plVar17 != (longlong *)0x0) {
        plVar26 = plVar27;
        plVar18 = plVar27;
        if ((longlong *)0x7 < plVar17) {
          iVar36 = 0;
          iVar15 = 0;
          iVar38 = 0;
          iVar40 = 0;
          iVar14 = 0;
          iVar37 = 0;
          iVar39 = 0;
          iVar41 = 0;
          do {
            uVar3 = *puVar23;
            auVar5._8_4_ = 0;
            auVar5._0_8_ = uVar3;
            auVar5._12_2_ = (short)(uVar3 >> 0x30);
            auVar7._8_2_ = (short)(uVar3 >> 0x20);
            auVar7._0_8_ = uVar3;
            auVar7._10_4_ = auVar5._10_4_;
            auVar9._6_8_ = 0;
            auVar9._0_6_ = auVar7._8_6_;
            plVar26 = plVar26 + 1;
            iVar36 = (uint)(ushort)uVar3 + iVar36;
            iVar15 = (int)CONCAT82(SUB148(auVar9 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar15;
            iVar38 = auVar7._8_4_ + iVar38;
            iVar40 = (auVar5._10_4_ >> 0x10) + iVar40;
            uVar3 = puVar23[1];
            auVar6._8_4_ = 0;
            auVar6._0_8_ = uVar3;
            auVar6._12_2_ = (short)(uVar3 >> 0x30);
            auVar8._8_2_ = (short)(uVar3 >> 0x20);
            auVar8._0_8_ = uVar3;
            auVar8._10_4_ = auVar6._10_4_;
            auVar10._6_8_ = 0;
            auVar10._0_6_ = auVar8._8_6_;
            puVar23 = puVar23 + 2;
            iVar14 = (uint)(ushort)uVar3 + iVar14;
            iVar37 = (int)CONCAT82(SUB148(auVar10 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar37;
            iVar39 = auVar8._8_4_ + iVar39;
            iVar41 = (auVar6._10_4_ >> 0x10) + iVar41;
          } while (plVar26 != (longlong *)((ulonglong)plVar17 & 0xfffffffffffffff8));
          plVar18 = (longlong *)
                    (ulonglong)
                    (uint)(iVar36 + iVar14 + iVar38 + iVar39 + iVar15 + iVar37 + iVar40 + iVar41);
        }
        uVar29 = (uint)plVar18;
        for (; plVar26 != plVar17; plVar26 = (longlong *)((longlong)plVar26 + 1)) {
          uVar3 = *puVar23;
          puVar23 = (ulonglong *)((longlong)puVar23 + 2);
          uVar29 = (int)plVar18 + (uint)(ushort)uVar3;
          plVar18 = (longlong *)(ulonglong)uVar29;
        }
      }
      if ((!bVar11) || (uVar29 != 0)) {
        local_18c = 0;
        if ((int)uVar29 < 2) {
          uVar29 = 1;
        }
        uVar30 = 0xfffffffe;
        local_194 = 0xfffffffe;
        iVar36 = (int)(*(int *)(param_6 + 0x74) + -1 + uVar29) / *(int *)(param_6 + 0x74);
        if (iVar22 <= iVar36) {
          iVar36 = iVar22;
        }
        iVar36 = (int)((uVar29 - 1) + iVar36) / iVar36;
        iVar22 = iVar36 + 2;
        local_174 = (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar22 / 3 + (iVar22 >> 0x1f);
        local_180._0_4_ = 0xffffffff;
        plVar18 = (longlong *)0xffffffff;
        plVar26 = plVar27;
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            iVar14 = (int)plVar18;
            iVar22 = (int)plVar26;
            if (bVar11) {
              while( true ) {
                if (lVar28 <= (longlong)plVar27) goto LAB_141abb821;
                if (*(short *)(*plVar31 + (longlong)plVar27 * 2) != 0) break;
                plVar17 = (longlong *)(ulonglong)((int)plVar17 + 1);
                plVar27 = (longlong *)((longlong)plVar27 + 1);
              }
            }
            if (lVar28 <= (longlong)plVar27) break;
            uVar35 = (uint)plVar17;
            puVar24 = (ushort *)(*plVar31 + (longlong)plVar27 * 2);
            uVar34 = (uint)*puVar24;
            uVar29 = uVar35;
            uVar32 = uVar35;
            plVar26 = plVar17;
            plVar33 = plVar17;
            while ((int)uVar29 < (int)(local_184 + -1)) {
              uVar29 = (uint)plVar26;
              uVar32 = (uint)plVar33;
              if (iVar36 <= (int)uVar34) break;
              uVar29 = uVar29 + 1;
              plVar26 = (longlong *)(ulonglong)uVar29;
              plVar27 = (longlong *)((longlong)plVar27 + 1);
              puVar24 = puVar24 + 1;
              if ((!bVar11) || (*puVar24 != 0)) {
                uVar34 = uVar34 + *puVar24;
                plVar33 = plVar26;
              }
              uVar32 = (uint)plVar33;
            }
            if ((uVar34 == 0) && (bVar11)) {
              plVar26 = (longlong *)(ulonglong)local_18c;
              plVar17 = plVar18;
            }
            else if ((int)uVar30 < iVar14) {
              plVar26 = (longlong *)(ulonglong)uVar34;
              local_194 = uVar32;
              local_18c = uVar34;
              uVar30 = uVar32;
              local_180._0_4_ = uVar35;
            }
            else {
              local_170 = FUN_141d6b6f0(param_6);
              local_168 = *(undefined8 *)(param_6 + 8);
              bVar11 = bVar12;
              if ((int)uVar34 < local_174) {
                plVar18 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_98,0,local_178);
                uVar4 = local_170;
                plVar17 = (longlong *)0x0;
                if (bVar12) {
                  plVar17 = plVar31;
                }
                FUN_141aad8b0(*plVar18 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
                              ,local_res18,local_res20,param_5,(uint)local_180,uVar32,plVar17);
                lVar28 = *plVar18;
                lVar13 = plVar18[2];
                lVar16 = plVar18[1];
                local_160 = *(longlong *)(lVar28 + 0xc0);
                if (local_160 != 0) {
                  LOCK();
                  *(int *)(local_160 + 0x48) = *(int *)(local_160 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
                iVar22 = local_18c + uVar34;
                if ((int)(local_18c + uVar34) < 2) {
                  iVar22 = 1;
                }
                FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_160,iVar22);
                local_18c = 0;
                local_180._0_4_ = 0xffffffff;
                local_194 = 0xfffffffe;
                plVar17 = (longlong *)0xffffffff;
                plVar26 = (longlong *)0x0;
                uVar30 = local_194;
                if (local_160 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_160 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                    plVar17 = (longlong *)(ulonglong)(uint)local_180;
                  }
                }
              }
              else {
                plVar26 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_80,0,local_178);
                plVar18 = (longlong *)0x0;
                if (bVar12) {
                  plVar18 = plVar31;
                }
                FUN_141aad8b0(*plVar26 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
                              ,local_res18,local_res20,param_5,(uint)local_180,local_194,plVar18);
                lVar28 = *plVar26;
                lVar13 = plVar26[2];
                lVar16 = plVar26[1];
                local_158 = *(longlong *)(lVar28 + 0xc0);
                if (local_158 != 0) {
                  LOCK();
                  *(int *)(local_158 + 0x48) = *(int *)(local_158 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
                if ((int)local_18c < 2) {
                  local_18c = 1;
                }
                FParallelCommandListSet::AddParallelCommandList
                          (param_6,local_170,&local_158,local_18c);
                plVar26 = (longlong *)(ulonglong)uVar34;
                local_194 = uVar32;
                local_18c = uVar34;
                uVar30 = uVar32;
                local_180._0_4_ = uVar35;
                if (local_158 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_158 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                  }
                }
              }
            }
            iVar14 = (int)plVar17;
            iVar22 = (int)plVar26;
            lVar28 = (longlong)(int)local_184;
            plVar27 = (longlong *)((longlong)plVar27 + 1);
            plVar18 = plVar17;
            plVar17 = (longlong *)(ulonglong)(uVar29 + 1);
          } while ((longlong)plVar27 < lVar28);
LAB_141abb821:
          if (iVar14 <= (int)uVar30) {
            uVar19 = FUN_141d6b6f0(param_6);
            uVar4 = *(undefined8 *)(param_6 + 8);
            plVar17 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_68,0,local_178);
            plVar27 = (longlong *)0x0;
            if (bVar12) {
              plVar27 = plVar31;
            }
            FUN_141aad8b0(*plVar17 + 0x10,param_1,uVar19,uVar4,param_6 + 0x18,local_res10,
                          local_res18,local_res20,param_5,(uint)local_180,local_194,plVar27);
            lVar28 = *plVar17;
            lVar13 = plVar17[2];
            lVar16 = plVar17[1];
            local_150 = *(longlong *)(lVar28 + 0xc0);
            if (local_150 != 0) {
              LOCK();
              *(int *)(local_150 + 0x48) = *(int *)(local_150 + 0x48) + 1;
              UNLOCK();
            }
            FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
            if (iVar22 < 2) {
              iVar22 = 1;
            }
            FParallelCommandListSet::AddParallelCommandList(param_6,uVar19,&local_150,iVar22);
            if (local_150 != 0) {
              LOCK();
              piVar1 = (int *)(local_150 + 0x48);
              iVar36 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                FGraphEvent::Recycle();
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141abbd50 FUN_141abbd50 body=277 status=ok
// SIG undefined FUN_141abbd50(void)

void FUN_141abbd50(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141abaab0(param_1 + 2,param_3,param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_141591a60(param_1[0x18],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144dcb110;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
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



// FUNCTION 141abbe70 ExecuteTask body=298 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FRenderBasePassDynamicDataThreadTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  FUN_141acf970(param_1[2],param_1[3],param_1[4],param_1 + 5,local_res8);
  FUN_141ec9240(param_1[3],param_1 + 0xd);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_141591a60(param_1[0xd],param_2,param_3);
  *param_1 = &PTR_FUN_144dc9f00;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
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



// FUNCTION 141abbfa0 ExecuteTask body=298 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FRenderBasePassDynamicDataThreadTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  FUN_141acfa40(param_1[2],param_1[3],param_1[4],param_1 + 5,local_res8);
  FUN_141ec9240(param_1[3],param_1 + 0xd);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_141591a60(param_1[0xd],param_2,param_3);
  *param_1 = &PTR_FUN_144dc9ef0;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
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



// FUNCTION 141abc0d0 ExecuteTask body=277 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FSortFrontToBackTask<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_1[3];
  local_10 = *(undefined4 *)(param_1 + 4);
  FUN_141ae2840(param_1[2],&local_18);
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_144dc9ed0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 141abc1f0 ExecuteTask body=277 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FSortFrontToBackTask<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_1[3];
  local_10 = *(undefined4 *)(param_1 + 4);
  FUN_141ae2dd0(param_1[2],&local_18);
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_144dc9ee0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 141abc310 FUN_141abc310 body=287 status=ok
// SIG undefined FUN_141abc310(void)

void FUN_141abc310(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar6 = param_1[2];
  puVar3 = *(undefined8 **)(lVar6 + 0x1908);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    lVar6 = param_1[2];
  }
  *(undefined8 *)(lVar6 + 0x1908) = param_1[3];
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144dc9eb0;
  *(undefined1 *)(param_1 + 4) = 0;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141abc430 FUN_141abc430 body=237 status=ok
// SIG undefined FUN_141abc430(void)

void FUN_141abc430(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141abac80(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144dc9ec0;
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



// FUNCTION 141abc520 FindId body=434 status=ok
// SIG undefined FindId(void)

int * TSet<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  uint local_res8 [2];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    iVar2 = FMeshDrawingPolicy::GetTypeHash(param_3);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      uVar5 = local_res8[0];
      do {
        lVar6 = (longlong)iVar2 * 0xf0 + lVar1;
        puVar4 = (uint *)FUN_141ac2bf0(lVar6 + 0x20,local_res8,param_3,0);
        uVar5 = (*puVar4 ^ uVar5) & 1 ^ uVar5;
        if (((((uVar5 & 1) == 0) ||
             (bVar7 = *(longlong *)(lVar6 + 0x60) == *(longlong *)(param_3 + 0x40),
             uVar5 = (uint)bVar7, !bVar7)) ||
            (bVar7 = *(longlong *)(lVar6 + 0x78) == *(longlong *)(param_3 + 0x58),
            uVar5 = (uint)bVar7, !bVar7)) ||
           ((bVar7 = *(longlong *)(lVar6 + 0x68) == *(longlong *)(param_3 + 0x48),
            uVar5 = (uint)bVar7, !bVar7 ||
            (bVar7 = *(longlong *)(lVar6 + 0x70) == *(longlong *)(param_3 + 0x50),
            uVar5 = (uint)bVar7, !bVar7)))) {
LAB_141abc698:
          if ((uVar5 & 1) != 0) {
            *param_2 = iVar2;
            return param_2;
          }
        }
        else {
          uVar5 = (~*(uint *)(lVar6 + 0x88) ^ *(uint *)(param_3 + 0x68) ^ uVar5) & 1 ^ uVar5;
          if ((char)uVar5 != '\0') {
            bVar7 = *(int *)(lVar6 + 0x80) == *(int *)(param_3 + 0x60);
            uVar5 = (uint)bVar7;
            if (bVar7) {
              uVar5 = (~*(uint *)(lVar6 + 0x58) ^ *(uint *)(param_3 + 0x38) ^ 1) & 1 ^ 1;
              if ((char)uVar5 == '\0') goto LAB_141abc69c;
              uVar5 = 1;
            }
            goto LAB_141abc698;
          }
        }
LAB_141abc69c:
        iVar2 = *(int *)(lVar6 + 0xe8);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141abc740 FUN_141abc740 body=287 status=ok
// SIG undefined FUN_141abc740(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_141abc740(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8 [2];
  undefined8 local_res20;
  
  uVar6 = 0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_res20 = 0;
    uVar5 = 1;
    uVar7 = uVar6;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar5 = uVar6;
    uVar7 = *(ulonglong *)(lVar1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar5 = (ulonglong)((uint)uVar5 | 2);
    local_res8[1] = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar6 = *(ulonglong *)(lVar1 + 0x48);
  }
  local_res8[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  puVar4 = (undefined8 *)FUN_141b34160(param_1);
  *param_2 = *puVar4;
  param_2[1] = uVar3;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  param_2[4] = uVar2;
  param_2[5] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  if ((uVar5 & 2) != 0) {
    uVar5 = (ulonglong)((uint)uVar5 & 0xfffffffd);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8 + 1);
  }
  if ((uVar5 & 1) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  }
  return param_2;
}



// FUNCTION 141abc880 FUN_141abc880 body=232 status=ok
// SIG undefined FUN_141abc880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abc880(int param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStackX_10 [8];
  undefined1 auStack_28 [32];
  
  if (param_2 == 0) {
    if (param_1 != 2) {
      switch(param_3) {
      case 4:
        break;
      case 5:
        uVar7 = FUN_141abec70();
        return uVar7;
      case 6:
        uVar7 = FUN_141abe9f0();
        return uVar7;
      case 7:
        uVar7 = FUN_141abeb30();
        return uVar7;
      case 8:
        uVar7 = FUN_141abf030();
        return uVar7;
      case 9:
        uVar7 = FUN_141abeef0();
        return uVar7;
      case 10:
        uVar7 = FUN_141abf170();
        return uVar7;
      case 0xb:
        uVar7 = FUN_141abe770();
        return uVar7;
      default:
        return 0;
      }
    }
    uVar7 = FUN_141abe8b0();
    return uVar7;
  }
  if (param_2 == 1) {
    if (DAT_146852b40 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar6 = IsInRenderingThread();
        if (cVar6 == '\0') {
          FScopedEvent::FScopedEvent(auStackX_10);
          plVar9 = (longlong *)FUN_14049e3d0(auStack_28,0,0xff);
          lVar8 = *plVar9;
          *(undefined1 **)(lVar8 + 0x10) = &LAB_1404a0f60;
          *(undefined1 **)(lVar8 + 0x18) = auStackX_10;
          lVar5 = plVar9[2];
          lVar8 = plVar9[1];
          lVar3 = *plVar9;
          lVar4 = *(longlong *)(lVar3 + 0x28);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
            UNLOCK();
          }
          FUN_1404a4fe0(lVar3,lVar8,(int)lVar5,1);
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
          FScopedEvent::~FScopedEvent(auStackX_10);
          return *(undefined8 *)(DAT_146852b40 + 0x30);
        }
        lVar8 = operator_new();
        if (lVar8 != 0) {
          DAT_146852b40 =
               TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
               ::FStaticStateResource::FStaticStateResource(lVar8);
          return *(undefined8 *)(DAT_146852b40 + 0x30);
        }
        DAT_146852b40 = 0;
        return _DAT_00000030;
      }
      lVar8 = operator_new();
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                ::FStaticStateResource::FStaticStateResource(lVar8);
      }
      LOCK();
      if (DAT_146852b40 != 0) {
        lVar8 = DAT_146852b40;
      }
      DAT_146852b40 = lVar8;
      UNLOCK();
    }
    return *(undefined8 *)(DAT_146852b40 + 0x30);
  }
  if (param_2 == 4) {
    if (DAT_146a0e730 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar6 = IsInRenderingThread();
        if (cVar6 == '\0') {
          FScopedEvent::FScopedEvent(auStackX_10);
          plVar9 = (longlong *)FUN_14049e3d0(auStack_28,0,0xff);
          lVar8 = *plVar9;
          *(undefined1 **)(lVar8 + 0x10) = &LAB_141ac0cf0;
          *(undefined1 **)(lVar8 + 0x18) = auStackX_10;
          lVar5 = plVar9[2];
          lVar8 = plVar9[1];
          lVar3 = *plVar9;
          lVar4 = *(longlong *)(lVar3 + 0x28);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
            UNLOCK();
          }
          FUN_1404a4fe0(lVar3,lVar8,(int)lVar5,1);
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
          FScopedEvent::~FScopedEvent(auStackX_10);
          return *(undefined8 *)(DAT_146a0e730 + 0x30);
        }
        lVar8 = operator_new();
        if (lVar8 != 0) {
          DAT_146a0e730 = FUN_141aafd80(lVar8);
          return *(undefined8 *)(DAT_146a0e730 + 0x30);
        }
        DAT_146a0e730 = 0;
        return _DAT_00000030;
      }
      lVar8 = operator_new();
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_141aafd80(lVar8);
      }
      LOCK();
      if (DAT_146a0e730 != 0) {
        lVar8 = DAT_146a0e730;
      }
      DAT_146a0e730 = lVar8;
      UNLOCK();
    }
    return *(undefined8 *)(DAT_146a0e730 + 0x30);
  }
  if (param_3 == 0) {
    if (DAT_146ab62e8 != '\0') {
      if (param_4 == '\0') {
        uVar7 = FUN_141abd870();
        return uVar7;
      }
      if (DAT_146a0e728 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar6 = IsInRenderingThread();
          if (cVar6 == '\0') {
            FScopedEvent::FScopedEvent(auStackX_10);
            plVar9 = (longlong *)FUN_14049e3d0(auStack_28,0,0xff);
            lVar8 = *plVar9;
            *(undefined1 **)(lVar8 + 0x10) = &LAB_141ac0d60;
            *(undefined1 **)(lVar8 + 0x18) = auStackX_10;
            lVar5 = plVar9[2];
            lVar8 = plVar9[1];
            lVar3 = *plVar9;
            lVar4 = *(longlong *)(lVar3 + 0x28);
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
              UNLOCK();
            }
            FUN_1404a4fe0(lVar3,lVar8,(int)lVar5,1);
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
            FScopedEvent::~FScopedEvent(auStackX_10);
            return *(undefined8 *)(DAT_146a0e728 + 0x30);
          }
          lVar8 = operator_new();
          if (lVar8 != 0) {
            DAT_146a0e728 =
                 TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar8);
            return *(undefined8 *)(DAT_146a0e728 + 0x30);
          }
          DAT_146a0e728 = 0;
          return _DAT_00000030;
        }
        lVar8 = operator_new();
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                  ::FStaticStateResource::FStaticStateResource(lVar8);
        }
        LOCK();
        if (DAT_146a0e728 != 0) {
          lVar8 = DAT_146a0e728;
        }
        DAT_146a0e728 = lVar8;
        UNLOCK();
      }
      return *(undefined8 *)(DAT_146a0e728 + 0x30);
    }
    if (param_1 == 2) {
      if (DAT_146a0e718 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar6 = IsInRenderingThread();
          if (cVar6 == '\0') {
            FScopedEvent::FScopedEvent(auStackX_10);
            plVar9 = (longlong *)FUN_14049e3d0(auStack_28,0,0xff);
            lVar8 = *plVar9;
            *(undefined1 **)(lVar8 + 0x10) = &LAB_141ac0d50;
            *(undefined1 **)(lVar8 + 0x18) = auStackX_10;
            lVar5 = plVar9[2];
            lVar8 = plVar9[1];
            lVar3 = *plVar9;
            lVar4 = *(longlong *)(lVar3 + 0x28);
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
              UNLOCK();
            }
            FUN_1404a4fe0(lVar3,lVar8,(int)lVar5,1);
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
            FScopedEvent::~FScopedEvent(auStackX_10);
            return *(undefined8 *)(DAT_146a0e718 + 0x30);
          }
          lVar8 = operator_new();
          if (lVar8 != 0) {
            DAT_146a0e718 =
                 TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar8);
            return *(undefined8 *)(DAT_146a0e718 + 0x30);
          }
          DAT_146a0e718 = 0;
          return _DAT_00000030;
        }
        lVar8 = operator_new();
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                  ::FStaticStateResource::FStaticStateResource(lVar8);
        }
        LOCK();
        if (DAT_146a0e718 != 0) {
          lVar8 = DAT_146a0e718;
        }
        DAT_146a0e718 = lVar8;
        UNLOCK();
      }
      return *(undefined8 *)(DAT_146a0e718 + 0x30);
    }
  }
  else if (param_3 == 1) {
    if (DAT_146ab62e8 != '\0') {
      if (param_4 == '\0') {
        uVar7 = FUN_141abd9b0();
        return uVar7;
      }
      if (DAT_146a0e710 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar6 = IsInRenderingThread();
          if (cVar6 == '\0') {
            FScopedEvent::FScopedEvent(auStackX_10);
            plVar9 = (longlong *)FUN_14049e3d0(auStack_28,0,0xff);
            lVar8 = *plVar9;
            *(undefined1 **)(lVar8 + 0x10) = &LAB_141ac0d70;
            *(undefined1 **)(lVar8 + 0x18) = auStackX_10;
            lVar5 = plVar9[2];
            lVar8 = plVar9[1];
            lVar3 = *plVar9;
            lVar4 = *(longlong *)(lVar3 + 0x28);
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
              UNLOCK();
            }
            FUN_1404a4fe0(lVar3,lVar8,(int)lVar5,1);
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
            FScopedEvent::~FScopedEvent(auStackX_10);
            return *(undefined8 *)(DAT_146a0e710 + 0x30);
          }
          lVar8 = operator_new();
          if (lVar8 != 0) {
            DAT_146a0e710 =
                 TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar8);
            return *(undefined8 *)(DAT_146a0e710 + 0x30);
          }
          DAT_146a0e710 = 0;
          return _DAT_00000030;
        }
        lVar8 = operator_new();
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                  ::FStaticStateResource::FStaticStateResource(lVar8);
        }
        LOCK();
        if (DAT_146a0e710 != 0) {
          lVar8 = DAT_146a0e710;
        }
        DAT_146a0e710 = lVar8;
        UNLOCK();
      }
      return *(undefined8 *)(DAT_146a0e710 + 0x30);
    }
    if (param_1 == 2) {
      uVar7 = FUN_141abdc30();
      return uVar7;
    }
  }
  else if (param_3 != 2) {
    if (param_3 == 3) {
      uVar7 = FUN_141abd370();
      return uVar7;
    }
    if (param_3 != 0xd) {
      return 0;
    }
    if (DAT_146ab62e8 == '\0') {
      if (param_1 != 2) {
        return 0;
      }
      if (DAT_146a0e6e0 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar6 = IsInRenderingThread();
          if (cVar6 == '\0') {
            FScopedEvent::FScopedEvent(auStackX_10);
            plVar9 = (longlong *)FUN_14049e3d0(auStack_28,0,0xff);
            lVar8 = *plVar9;
            *(undefined1 **)(lVar8 + 0x10) = &LAB_141ac0d20;
            *(undefined1 **)(lVar8 + 0x18) = auStackX_10;
            lVar5 = plVar9[2];
            lVar8 = plVar9[1];
            lVar3 = *plVar9;
            lVar4 = *(longlong *)(lVar3 + 0x28);
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
              UNLOCK();
            }
            FUN_1404a4fe0(lVar3,lVar8,(int)lVar5,1);
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
            FScopedEvent::~FScopedEvent(auStackX_10);
            return *(undefined8 *)(DAT_146a0e6e0 + 0x30);
          }
          lVar8 = operator_new();
          if (lVar8 != 0) {
            DAT_146a0e6e0 = FUN_141aaff30(lVar8);
            return *(undefined8 *)(DAT_146a0e6e0 + 0x30);
          }
          DAT_146a0e6e0 = 0;
          return _DAT_00000030;
        }
        lVar8 = operator_new();
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = FUN_141aaff30(lVar8);
        }
        LOCK();
        if (DAT_146a0e6e0 != 0) {
          lVar8 = DAT_146a0e6e0;
        }
        DAT_146a0e6e0 = lVar8;
        UNLOCK();
      }
      return *(undefined8 *)(DAT_146a0e6e0 + 0x30);
    }
    if (DAT_146a0e6e8 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar6 = IsInRenderingThread();
        if (cVar6 == '\0') {
          FScopedEvent::FScopedEvent(auStackX_10);
          plVar9 = (longlong *)FUN_14049e3d0(auStack_28,0,0xff);
          lVar8 = *plVar9;
          *(undefined1 **)(lVar8 + 0x10) = &LAB_141ac0d30;
          *(undefined1 **)(lVar8 + 0x18) = auStackX_10;
          lVar5 = plVar9[2];
          lVar8 = plVar9[1];
          lVar3 = *plVar9;
          lVar4 = *(longlong *)(lVar3 + 0x28);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
            UNLOCK();
          }
          FUN_1404a4fe0(lVar3,lVar8,(int)lVar5,1);
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
          FScopedEvent::~FScopedEvent(auStackX_10);
          return *(undefined8 *)(DAT_146a0e6e8 + 0x30);
        }
        lVar8 = operator_new();
        if (lVar8 != 0) {
          DAT_146a0e6e8 = FUN_141aaffc0(lVar8);
          return *(undefined8 *)(DAT_146a0e6e8 + 0x30);
        }
        DAT_146a0e6e8 = 0;
        return _DAT_00000030;
      }
      lVar8 = operator_new();
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_141aaffc0(lVar8);
      }
      LOCK();
      if (DAT_146a0e6e8 != 0) {
        lVar8 = DAT_146a0e6e8;
      }
      DAT_146a0e6e8 = lVar8;
      UNLOCK();
    }
    return *(undefined8 *)(DAT_146a0e6e8 + 0x30);
  }
  uVar7 = FUN_141abdaf0();
  return uVar7;
}



// FUNCTION 141abc990 GetDependency body=49 status=ok
// SIG undefined GetDependency(void)

void TRenderingCompositePassBase<1,1>::GetDependency(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2 + -1);
  }
  return;
}



// FUNCTION 141abc9d0 GetDependency body=49 status=ok
// SIG undefined GetDependency(void)

void TRenderingCompositePassBase<2,1>::GetDependency(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2 + -2);
  }
  return;
}



// FUNCTION 141abca10 GetDependency body=49 status=ok
// SIG undefined GetDependency(void)

void TRenderingCompositePassBase<4,1>::GetDependency(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2 + -4);
  }
  return;
}



// FUNCTION 141abca50 GetDependency body=48 status=ok
// SIG undefined GetDependency(void)

void TRenderingCompositePassBase<0,1>::GetDependency(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
  return;
}



// FUNCTION 141abca80 FUN_141abca80 body=32 status=ok
// SIG undefined FUN_141abca80(void)

undefined4 FUN_141abca80(longlong param_1)

{
  if ((*(uint *)(*(longlong *)(param_1 + 0x30) + 0x180) >> 3 & 1) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x14c);
  }
  return *(undefined4 *)(param_1 + 0x88);
}



// FUNCTION 141abcaa0 GetEyeAdaptation body=58 status=ok
// SIG undefined GetEyeAdaptation(void)

longlong GetEyeAdaptation(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_141d6a650();
  if (cVar1 != '\0') {
    lVar2 = FViewInfo::GetEyeAdaptationRT(param_1);
    if (lVar2 != 0) {
      return lVar2 + 8;
    }
  }
  return DAT_146ac3d68 + 0x30;
}



// FUNCTION 141abcb40 GetMaximumDirection body=300 status=ok
// SIG undefined GetMaximumDirection(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * TSHVector<2>::GetMaximumDirection(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  fVar3 = DAT_1468b5d98;
  fVar5 = -*(float *)(param_1 + 0xc);
  fVar6 = -*(float *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1;
  if (fVar2 == 1.0) {
    *(ulonglong *)param_2 = CONCAT44(fVar6,fVar5);
    param_2[2] = fVar1;
  }
  else if (1e-08 <= fVar2) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    *param_2 = fVar5 * fVar3;
    param_2[1] = fVar6 * fVar3;
    param_2[2] = fVar1 * fVar3;
  }
  else {
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar3;
  }
  return param_2;
}



// FUNCTION 141abcd30 FUN_141abcd30 body=320 status=ok
// SIG undefined FUN_141abcd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abcd30(void)

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
  
  if (DAT_146a0e730 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0cf0;
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
        return *(undefined8 *)(DAT_146a0e730 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e730 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e730 = FUN_141aafd80(lVar7);
      return *(undefined8 *)(DAT_146a0e730 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141aafd80(lVar7);
    }
    LOCK();
    if (DAT_146a0e730 != 0) {
      lVar7 = DAT_146a0e730;
    }
    DAT_146a0e730 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e730 + 0x30);
}



// FUNCTION 141abce70 FUN_141abce70 body=320 status=ok
// SIG undefined FUN_141abce70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abce70(void)

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
  
  if (DAT_146a0e780 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d00;
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
        return *(undefined8 *)(DAT_146a0e780 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e780 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e780 =
           TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e780 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e780 != 0) {
      lVar7 = DAT_146a0e780;
    }
    DAT_146a0e780 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e780 + 0x30);
}



// FUNCTION 141abcfb0 FUN_141abcfb0 body=320 status=ok
// SIG undefined FUN_141abcfb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abcfb0(void)

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
  
  if (DAT_146a0e7b8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d10;
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
        return *(undefined8 *)(DAT_146a0e7b8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7b8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7b8 =
           TStaticStateRHI<TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7b8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7b8 != 0) {
      lVar7 = DAT_146a0e7b8;
    }
    DAT_146a0e7b8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7b8 + 0x30);
}



// FUNCTION 141abd0f0 FUN_141abd0f0 body=320 status=ok
// SIG undefined FUN_141abd0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd0f0(void)

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
  
  if (DAT_146a0e6e0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d20;
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
        return *(undefined8 *)(DAT_146a0e6e0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6e0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6e0 = FUN_141aaff30(lVar7);
      return *(undefined8 *)(DAT_146a0e6e0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141aaff30(lVar7);
    }
    LOCK();
    if (DAT_146a0e6e0 != 0) {
      lVar7 = DAT_146a0e6e0;
    }
    DAT_146a0e6e0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6e0 + 0x30);
}



// FUNCTION 141abd230 FUN_141abd230 body=320 status=ok
// SIG undefined FUN_141abd230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd230(void)

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
  
  if (DAT_146a0e6e8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d30;
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
        return *(undefined8 *)(DAT_146a0e6e8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6e8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6e8 = FUN_141aaffc0(lVar7);
      return *(undefined8 *)(DAT_146a0e6e8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141aaffc0(lVar7);
    }
    LOCK();
    if (DAT_146a0e6e8 != 0) {
      lVar7 = DAT_146a0e6e8;
    }
    DAT_146a0e6e8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6e8 + 0x30);
}



// FUNCTION 141abd370 FUN_141abd370 body=320 status=ok
// SIG undefined FUN_141abd370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd370(void)

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
  
  if (DAT_146a0e6f0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d40;
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
        return *(undefined8 *)(DAT_146a0e6f0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6f0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6f0 =
           TStaticStateRHI<TStaticBlendState<7,0,4,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6f0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6f0 != 0) {
      lVar7 = DAT_146a0e6f0;
    }
    DAT_146a0e6f0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6f0 + 0x30);
}



// FUNCTION 141abd4b0 FUN_141abd4b0 body=320 status=ok
// SIG undefined FUN_141abd4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd4b0(void)

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
  
  if (DAT_146a0e718 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d50;
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
        return *(undefined8 *)(DAT_146a0e718 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e718 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e718 =
           TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e718 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e718 != 0) {
      lVar7 = DAT_146a0e718;
    }
    DAT_146a0e718 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e718 + 0x30);
}



// FUNCTION 141abd5f0 FUN_141abd5f0 body=320 status=ok
// SIG undefined FUN_141abd5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd5f0(void)

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
  
  if (DAT_146a0e728 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d60;
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
        return *(undefined8 *)(DAT_146a0e728 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e728 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e728 =
           TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e728 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e728 != 0) {
      lVar7 = DAT_146a0e728;
    }
    DAT_146a0e728 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e728 + 0x30);
}



// FUNCTION 141abd730 FUN_141abd730 body=320 status=ok
// SIG undefined FUN_141abd730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd730(void)

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
  
  if (DAT_146a0e710 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d70;
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
        return *(undefined8 *)(DAT_146a0e710 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e710 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e710 =
           TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e710 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e710 != 0) {
      lVar7 = DAT_146a0e710;
    }
    DAT_146a0e710 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e710 + 0x30);
}



// FUNCTION 141abd870 FUN_141abd870 body=320 status=ok
// SIG undefined FUN_141abd870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd870(void)

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
  
  if (DAT_146a0e720 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d80;
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
        return *(undefined8 *)(DAT_146a0e720 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e720 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e720 =
           TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e720 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e720 != 0) {
      lVar7 = DAT_146a0e720;
    }
    DAT_146a0e720 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e720 + 0x30);
}



// FUNCTION 141abd9b0 FUN_141abd9b0 body=320 status=ok
// SIG undefined FUN_141abd9b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abd9b0(void)

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
  
  if (DAT_146a0e708 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0d90;
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
        return *(undefined8 *)(DAT_146a0e708 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e708 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e708 =
           TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e708 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e708 != 0) {
      lVar7 = DAT_146a0e708;
    }
    DAT_146a0e708 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e708 + 0x30);
}



// FUNCTION 141abdaf0 FUN_141abdaf0 body=320 status=ok
// SIG undefined FUN_141abdaf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abdaf0(void)

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
  
  if (DAT_146a0e6f8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0da0;
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
        return *(undefined8 *)(DAT_146a0e6f8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6f8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6f8 =
           TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6f8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6f8 != 0) {
      lVar7 = DAT_146a0e6f8;
    }
    DAT_146a0e6f8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6f8 + 0x30);
}



// FUNCTION 141abdc30 FUN_141abdc30 body=320 status=ok
// SIG undefined FUN_141abdc30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abdc30(void)

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
  
  if (DAT_146a0e700 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0db0;
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
        return *(undefined8 *)(DAT_146a0e700 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e700 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e700 =
           TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e700 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e700 != 0) {
      lVar7 = DAT_146a0e700;
    }
    DAT_146a0e700 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e700 + 0x30);
}



// FUNCTION 141abdd70 FUN_141abdd70 body=320 status=ok
// SIG undefined FUN_141abdd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abdd70(void)

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
  
  if (DAT_146a0e7c8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0dc0;
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
        return *(undefined8 *)(DAT_146a0e7c8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7c8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7c8 =
           TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7c8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7c8 != 0) {
      lVar7 = DAT_146a0e7c8;
    }
    DAT_146a0e7c8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7c8 + 0x30);
}



// FUNCTION 141abdeb0 FUN_141abdeb0 body=320 status=ok
// SIG undefined FUN_141abdeb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abdeb0(void)

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
  
  if (DAT_146a0e788 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0dd0;
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
        return *(undefined8 *)(DAT_146a0e788 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e788 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e788 =
           TStaticStateRHI<TStaticBlendState<7,0,8,0,0,0,1,1,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e788 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,8,0,0,0,1,1,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e788 != 0) {
      lVar7 = DAT_146a0e788;
    }
    DAT_146a0e788 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e788 + 0x30);
}



// FUNCTION 141abdff0 FUN_141abdff0 body=320 status=ok
// SIG undefined FUN_141abdff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abdff0(void)

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
  
  if (DAT_146a0e6d8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0de0;
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
        return *(undefined8 *)(DAT_146a0e6d8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6d8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6d8 =
           TStaticStateRHI<TStaticBlendState<0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6d8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6d8 != 0) {
      lVar7 = DAT_146a0e6d8;
    }
    DAT_146a0e6d8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6d8 + 0x30);
}



// FUNCTION 141abe130 FUN_141abe130 body=320 status=ok
// SIG undefined FUN_141abe130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe130(void)

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
  
  if (DAT_146a0e7a8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0df0;
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
        return *(undefined8 *)(DAT_146a0e7a8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7a8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7a8 =
           TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7a8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7a8 != 0) {
      lVar7 = DAT_146a0e7a8;
    }
    DAT_146a0e7a8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7a8 + 0x30);
}



// FUNCTION 141abe270 FUN_141abe270 body=320 status=ok
// SIG undefined FUN_141abe270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe270(void)

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
  
  if (DAT_146a0e7d0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e00;
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
        return *(undefined8 *)(DAT_146a0e7d0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7d0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7d0 =
           TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7d0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7d0 != 0) {
      lVar7 = DAT_146a0e7d0;
    }
    DAT_146a0e7d0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7d0 + 0x30);
}



// FUNCTION 141abe3b0 FUN_141abe3b0 body=320 status=ok
// SIG undefined FUN_141abe3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe3b0(void)

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
  
  if (DAT_146a0e7c0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e10;
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
        return *(undefined8 *)(DAT_146a0e7c0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7c0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7c0 =
           TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7c0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7c0 != 0) {
      lVar7 = DAT_146a0e7c0;
    }
    DAT_146a0e7c0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7c0 + 0x30);
}



// FUNCTION 141abe4f0 FUN_141abe4f0 body=320 status=ok
// SIG undefined FUN_141abe4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe4f0(void)

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
  
  if (DAT_146a0e798 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e20;
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
        return *(undefined8 *)(DAT_146a0e798 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e798 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e798 =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e798 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e798 != 0) {
      lVar7 = DAT_146a0e798;
    }
    DAT_146a0e798 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e798 + 0x30);
}



// FUNCTION 141abe630 FUN_141abe630 body=320 status=ok
// SIG undefined FUN_141abe630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe630(void)

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
  
  if (DAT_146a0e7d8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e30;
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
        return *(undefined8 *)(DAT_146a0e7d8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7d8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7d8 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7d8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7d8 != 0) {
      lVar7 = DAT_146a0e7d8;
    }
    DAT_146a0e7d8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7d8 + 0x30);
}



// FUNCTION 141abe770 FUN_141abe770 body=320 status=ok
// SIG undefined FUN_141abe770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe770(void)

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
  
  if (DAT_146a0e738 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e40;
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
        return *(undefined8 *)(DAT_146a0e738 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e738 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e738 = FUN_141ab0950(lVar7);
      return *(undefined8 *)(DAT_146a0e738 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141ab0950(lVar7);
    }
    LOCK();
    if (DAT_146a0e738 != 0) {
      lVar7 = DAT_146a0e738;
    }
    DAT_146a0e738 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e738 + 0x30);
}



// FUNCTION 141abe8b0 FUN_141abe8b0 body=320 status=ok
// SIG undefined FUN_141abe8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe8b0(void)

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
  
  if (DAT_146a0e770 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e50;
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
        return *(undefined8 *)(DAT_146a0e770 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e770 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e770 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e770 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e770 != 0) {
      lVar7 = DAT_146a0e770;
    }
    DAT_146a0e770 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e770 + 0x30);
}



// FUNCTION 141abe9f0 FUN_141abe9f0 body=320 status=ok
// SIG undefined FUN_141abe9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abe9f0(void)

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
  
  if (DAT_146a0e760 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e60;
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
        return *(undefined8 *)(DAT_146a0e760 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e760 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e760 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e760 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e760 != 0) {
      lVar7 = DAT_146a0e760;
    }
    DAT_146a0e760 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e760 + 0x30);
}



// FUNCTION 141abeb30 FUN_141abeb30 body=320 status=ok
// SIG undefined FUN_141abeb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abeb30(void)

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
  
  if (DAT_146a0e758 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e70;
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
        return *(undefined8 *)(DAT_146a0e758 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e758 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e758 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e758 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e758 != 0) {
      lVar7 = DAT_146a0e758;
    }
    DAT_146a0e758 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e758 + 0x30);
}



// FUNCTION 141abec70 FUN_141abec70 body=320 status=ok
// SIG undefined FUN_141abec70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abec70(void)

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
  
  if (DAT_146a0e768 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e80;
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
        return *(undefined8 *)(DAT_146a0e768 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e768 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e768 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e768 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e768 != 0) {
      lVar7 = DAT_146a0e768;
    }
    DAT_146a0e768 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e768 + 0x30);
}



// FUNCTION 141abedb0 FUN_141abedb0 body=320 status=ok
// SIG undefined FUN_141abedb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abedb0(void)

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
  
  if (DAT_146a0e778 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0e90;
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
        return *(undefined8 *)(DAT_146a0e778 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e778 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e778 =
           TStaticStateRHI<TStaticBlendState<15,0,8,0,0,6,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e778 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,8,0,0,6,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e778 != 0) {
      lVar7 = DAT_146a0e778;
    }
    DAT_146a0e778 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e778 + 0x30);
}



// FUNCTION 141abeef0 FUN_141abeef0 body=320 status=ok
// SIG undefined FUN_141abeef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abeef0(void)

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
  
  if (DAT_146a0e748 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ea0;
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
        return *(undefined8 *)(DAT_146a0e748 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e748 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e748 =
           TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e748 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e748 != 0) {
      lVar7 = DAT_146a0e748;
    }
    DAT_146a0e748 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e748 + 0x30);
}



// FUNCTION 141abf030 FUN_141abf030 body=320 status=ok
// SIG undefined FUN_141abf030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf030(void)

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
  
  if (DAT_146a0e750 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0eb0;
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
        return *(undefined8 *)(DAT_146a0e750 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e750 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e750 =
           TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e750 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e750 != 0) {
      lVar7 = DAT_146a0e750;
    }
    DAT_146a0e750 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e750 + 0x30);
}



// FUNCTION 141abf170 FUN_141abf170 body=320 status=ok
// SIG undefined FUN_141abf170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf170(void)

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
  
  if (DAT_146a0e740 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ec0;
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
        return *(undefined8 *)(DAT_146a0e740 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e740 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e740 =
           TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e740 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e740 != 0) {
      lVar7 = DAT_146a0e740;
    }
    DAT_146a0e740 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e740 + 0x30);
}



// FUNCTION 141abf2b0 FUN_141abf2b0 body=320 status=ok
// SIG undefined FUN_141abf2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf2b0(void)

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
  
  if (DAT_146a0e868 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ed0;
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
        return *(undefined8 *)(DAT_146a0e868 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e868 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e868 = FUN_141ab0e60(lVar7);
      return *(undefined8 *)(DAT_146a0e868 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141ab0e60(lVar7);
    }
    LOCK();
    if (DAT_146a0e868 != 0) {
      lVar7 = DAT_146a0e868;
    }
    DAT_146a0e868 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e868 + 0x30);
}



// FUNCTION 141abf3f0 FUN_141abf3f0 body=320 status=ok
// SIG undefined FUN_141abf3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf3f0(void)

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
  
  if (DAT_146a0e790 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ee0;
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
        return *(undefined8 *)(DAT_146a0e790 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e790 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e790 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e790 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e790 != 0) {
      lVar7 = DAT_146a0e790;
    }
    DAT_146a0e790 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e790 + 0x30);
}



// FUNCTION 141abf530 FUN_141abf530 body=320 status=ok
// SIG undefined FUN_141abf530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf530(void)

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
  
  if (DAT_146a0e878 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ef0;
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
        return *(undefined8 *)(DAT_146a0e878 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e878 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e878 = FUN_141ab0fc0(lVar7);
      return *(undefined8 *)(DAT_146a0e878 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141ab0fc0(lVar7);
    }
    LOCK();
    if (DAT_146a0e878 != 0) {
      lVar7 = DAT_146a0e878;
    }
    DAT_146a0e878 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e878 + 0x30);
}



// FUNCTION 141abf670 FUN_141abf670 body=320 status=ok
// SIG undefined FUN_141abf670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf670(void)

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
  
  if (DAT_146a0e6d0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f00;
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
        return *(undefined8 *)(DAT_146a0e6d0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6d0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6d0 =
           TStaticStateRHI<TStaticDepthStencilState<0,1,1,7,0,0,5,1,7,0,0,5,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6d0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,1,1,7,0,0,5,1,7,0,0,5,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6d0 != 0) {
      lVar7 = DAT_146a0e6d0;
    }
    DAT_146a0e6d0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6d0 + 0x30);
}



// FUNCTION 141abf7b0 FUN_141abf7b0 body=320 status=ok
// SIG undefined FUN_141abf7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf7b0(void)

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
  
  if (DAT_146a0e6a8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f10;
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
        return *(undefined8 *)(DAT_146a0e6a8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6a8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6a8 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6a8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6a8 != 0) {
      lVar7 = DAT_146a0e6a8;
    }
    DAT_146a0e6a8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6a8 + 0x30);
}



// FUNCTION 141abf8f0 FUN_141abf8f0 body=320 status=ok
// SIG undefined FUN_141abf8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abf8f0(void)

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
  
  if (DAT_146a0e6b0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f20;
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
        return *(undefined8 *)(DAT_146a0e6b0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6b0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6b0 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6b0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6b0 != 0) {
      lVar7 = DAT_146a0e6b0;
    }
    DAT_146a0e6b0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6b0 + 0x30);
}



// FUNCTION 141abfa30 FUN_141abfa30 body=320 status=ok
// SIG undefined FUN_141abfa30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abfa30(void)

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
  
  if (DAT_146a0e6a0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f30;
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
        return *(undefined8 *)(DAT_146a0e6a0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6a0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6a0 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6a0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6a0 != 0) {
      lVar7 = DAT_146a0e6a0;
    }
    DAT_146a0e6a0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6a0 + 0x30);
}



// FUNCTION 141abfb70 FUN_141abfb70 body=320 status=ok
// SIG undefined FUN_141abfb70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abfb70(void)

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
  
  if (DAT_146a0e7a0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f40;
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
        return *(undefined8 *)(DAT_146a0e7a0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7a0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7a0 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7a0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7a0 != 0) {
      lVar7 = DAT_146a0e7a0;
    }
    DAT_146a0e7a0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7a0 + 0x30);
}



// FUNCTION 141abfcb0 FUN_141abfcb0 body=320 status=ok
// SIG undefined FUN_141abfcb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abfcb0(void)

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
  
  if (DAT_146a0e870 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f50;
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
        return *(undefined8 *)(DAT_146a0e870 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e870 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e870 = FUN_141ab1410(lVar7);
      return *(undefined8 *)(DAT_146a0e870 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141ab1410(lVar7);
    }
    LOCK();
    if (DAT_146a0e870 != 0) {
      lVar7 = DAT_146a0e870;
    }
    DAT_146a0e870 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e870 + 0x30);
}



// FUNCTION 141abfdf0 FUN_141abfdf0 body=320 status=ok
// SIG undefined FUN_141abfdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abfdf0(void)

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
  
  if (DAT_146a0e6c0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f60;
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
        return *(undefined8 *)(DAT_146a0e6c0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6c0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6c0 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6c0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6c0 != 0) {
      lVar7 = DAT_146a0e6c0;
    }
    DAT_146a0e6c0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6c0 + 0x30);
}



// FUNCTION 141abff30 FUN_141abff30 body=320 status=ok
// SIG undefined FUN_141abff30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141abff30(void)

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
  
  if (DAT_146a0e6c8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f70;
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
        return *(undefined8 *)(DAT_146a0e6c8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6c8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6c8 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6c8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6c8 != 0) {
      lVar7 = DAT_146a0e6c8;
    }
    DAT_146a0e6c8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6c8 + 0x30);
}



// FUNCTION 141ac0070 FUN_141ac0070 body=320 status=ok
// SIG undefined FUN_141ac0070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac0070(void)

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
  
  if (DAT_146a0e6b8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f80;
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
        return *(undefined8 *)(DAT_146a0e6b8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e6b8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e6b8 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e6b8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e6b8 != 0) {
      lVar7 = DAT_146a0e6b8;
    }
    DAT_146a0e6b8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e6b8 + 0x30);
}



// FUNCTION 141ac01b0 FUN_141ac01b0 body=320 status=ok
// SIG undefined FUN_141ac01b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac01b0(void)

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
  
  if (DAT_146a0e8a8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0f90;
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
        return *(undefined8 *)(DAT_146a0e8a8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e8a8 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e8a8 =
           TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e8a8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e8a8 != 0) {
      lVar7 = DAT_146a0e8a8;
    }
    DAT_146a0e8a8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e8a8 + 0x30);
}



// FUNCTION 141ac02f0 FUN_141ac02f0 body=320 status=ok
// SIG undefined FUN_141ac02f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac02f0(void)

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
  
  if (DAT_146a0e8a0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0fa0;
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
        return *(undefined8 *)(DAT_146a0e8a0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e8a0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e8a0 =
           TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e8a0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e8a0 != 0) {
      lVar7 = DAT_146a0e8a0;
    }
    DAT_146a0e8a0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e8a0 + 0x30);
}



// FUNCTION 141ac0430 FUN_141ac0430 body=320 status=ok
// SIG undefined FUN_141ac0430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac0430(void)

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
  
  if (DAT_146a0e898 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0fb0;
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
        return *(undefined8 *)(DAT_146a0e898 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e898 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e898 =
           TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e898 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e898 != 0) {
      lVar7 = DAT_146a0e898;
    }
    DAT_146a0e898 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e898 + 0x30);
}



// FUNCTION 141ac0570 FUN_141ac0570 body=320 status=ok
// SIG undefined FUN_141ac0570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac0570(void)

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
  
  if (DAT_146a0e698 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0fc0;
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
        return *(undefined8 *)(DAT_146a0e698 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e698 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e698 =
           TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e698 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e698 != 0) {
      lVar7 = DAT_146a0e698;
    }
    DAT_146a0e698 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e698 + 0x30);
}



// FUNCTION 141ac06b0 FUN_141ac06b0 body=320 status=ok
// SIG undefined FUN_141ac06b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac06b0(void)

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
  
  if (DAT_146a0e690 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0fd0;
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
        return *(undefined8 *)(DAT_146a0e690 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e690 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e690 =
           TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e690 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e690 != 0) {
      lVar7 = DAT_146a0e690;
    }
    DAT_146a0e690 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e690 + 0x30);
}



// FUNCTION 141ac07f0 FUN_141ac07f0 body=320 status=ok
// SIG undefined FUN_141ac07f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac07f0(void)

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
  
  if (DAT_146a0e890 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0fe0;
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
        return *(undefined8 *)(DAT_146a0e890 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e890 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e890 =
           TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e890 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e890 != 0) {
      lVar7 = DAT_146a0e890;
    }
    DAT_146a0e890 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e890 + 0x30);
}



// FUNCTION 141ac0930 FUN_141ac0930 body=320 status=ok
// SIG undefined FUN_141ac0930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac0930(void)

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
  
  if (DAT_146a0e888 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ff0;
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
        return *(undefined8 *)(DAT_146a0e888 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e888 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e888 =
           TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e888 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e888 != 0) {
      lVar7 = DAT_146a0e888;
    }
    DAT_146a0e888 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e888 + 0x30);
}



// FUNCTION 141ac0a70 FUN_141ac0a70 body=320 status=ok
// SIG undefined FUN_141ac0a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac0a70(void)

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
  
  if (DAT_146a0e880 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac1000;
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
        return *(undefined8 *)(DAT_146a0e880 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e880 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e880 =
           TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e880 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e880 != 0) {
      lVar7 = DAT_146a0e880;
    }
    DAT_146a0e880 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e880 + 0x30);
}



// FUNCTION 141ac0bb0 FUN_141ac0bb0 body=320 status=ok
// SIG undefined FUN_141ac0bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac0bb0(void)

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
  
  if (DAT_146a0e7b0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac1010;
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
        return *(undefined8 *)(DAT_146a0e7b0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a0e7b0 = 0;
        return _DAT_00000030;
      }
      DAT_146a0e7b0 =
           TStaticStateRHI<TStaticSamplerState<0,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a0e7b0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<0,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a0e7b0 != 0) {
      lVar7 = DAT_146a0e7b0;
    }
    DAT_146a0e7b0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a0e7b0 + 0x30);
}



// FUNCTION 141ac1020 GetScaleVector body=380 status=ok
// SIG undefined GetScaleVector(void)

float * FMatrix::GetScaleVector(longlong param_1,float *param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  
  pfVar1 = param_2 + 1;
  *pfVar1 = 1.0;
  pfVar4 = (float *)(param_1 + 0x18);
  iVar2 = 0;
  *param_2 = 1.0;
  param_2[2] = 1.0;
  do {
    fVar5 = pfVar4[-6] * pfVar4[-6] + pfVar4[-5] * pfVar4[-5] + pfVar4[-4] * pfVar4[-4];
    if (fVar5 <= param_3) {
      pfVar3 = param_2;
      if ((iVar2 != 0) && (pfVar3 = param_2 + 2, iVar2 == 1)) {
        pfVar3 = pfVar1;
      }
      *pfVar3 = 0.0;
    }
    else {
      fVar5 = SQRT(fVar5);
      if (iVar2 == 0) {
        *param_2 = fVar5;
      }
      else {
        pfVar3 = param_2 + 2;
        if (iVar2 == 1) {
          pfVar3 = pfVar1;
        }
        *pfVar3 = fVar5;
      }
    }
    fVar5 = pfVar4[-2] * pfVar4[-2] + pfVar4[-1] * pfVar4[-1] + *pfVar4 * *pfVar4;
    if (fVar5 <= param_3) {
      pfVar3 = param_2;
      if ((iVar2 != -1) && (pfVar3 = param_2 + 2, iVar2 == 0)) {
        pfVar3 = pfVar1;
      }
      *pfVar3 = 0.0;
    }
    else {
      fVar5 = SQRT(fVar5);
      if (iVar2 == -1) {
        *param_2 = fVar5;
      }
      else {
        pfVar3 = param_2 + 2;
        if (iVar2 == 0) {
          pfVar3 = pfVar1;
        }
        *pfVar3 = fVar5;
      }
    }
    fVar5 = pfVar4[2] * pfVar4[2] + pfVar4[3] * pfVar4[3] + pfVar4[4] * pfVar4[4];
    if (fVar5 <= param_3) {
      pfVar3 = param_2;
      if ((iVar2 != -2) && (pfVar3 = param_2 + 2, iVar2 == -1)) {
        pfVar3 = pfVar1;
      }
      *pfVar3 = 0.0;
    }
    else {
      fVar5 = SQRT(fVar5);
      if (iVar2 == -2) {
        *param_2 = fVar5;
      }
      else {
        pfVar3 = param_2 + 2;
        if (iVar2 == -1) {
          pfVar3 = pfVar1;
        }
        *pfVar3 = fVar5;
      }
    }
    iVar2 = iVar2 + 3;
    pfVar4 = pfVar4 + 0xc;
  } while (iVar2 < 3);
  return param_2;
}



// FUNCTION 141ac11a0 GetTypeHash body=264 status=ok
// SIG undefined GetTypeHash(void)

uint FMeshDrawingPolicy::GetTypeHash(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)(*(ulonglong *)(param_1 + 0x10) >> 4);
  uVar3 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar4 = -(uVar3 + iVar1) ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar3) - uVar4 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (int)(*(ulonglong *)(param_1 + 8) >> 4) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}



// FUNCTION 141ac12b0 FUN_141ac12b0 body=393 status=ok
// SIG undefined FUN_141ac12b0(void)

void FUN_141ac12b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(int *)(DAT_1469fe118 + 4) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar4 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar4;
      *(undefined8 **)(param_2 + 8) = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &PTR_LAB_144dc9cc0;
      puVar4[2] = lVar2;
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,0);
      lVar2 = FSceneRenderTargets::Get(param_2);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x2f8) + 0x18);
      puVar3 = puVar4 + 1;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar4 + 1;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *puVar4 = uVar1;
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar5 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      puVar5[5] = 0;
      *puVar5 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar5 + 2) = 1;
      puVar5[3] = puVar4;
      *(undefined4 *)((longlong)puVar5 + 0x24) = 1;
    }
  }
  return;
}



// FUNCTION 141ac1440 FUN_141ac1440 body=160 status=ok
// SIG undefined FUN_141ac1440(void)

void FUN_141ac1440(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144dc9cc0;
    puVar3[2] = lVar1;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
  }
  return;
}



// FUNCTION 141ac14e0 FUN_141ac14e0 body=868 status=ok
// SIG undefined FUN_141ac14e0(void)

void FUN_141ac14e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar14 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (0 < (int)*(uint *)(puVar1 + 1)) {
    plVar10 = (longlong *)*puVar1;
    uVar15 = (ulonglong)*(uint *)(puVar1 + 1);
    uVar11 = uVar14;
    do {
      lVar2 = *plVar10;
      plVar10 = plVar10 + 1;
      uVar12 = (uint)uVar11 + 1;
      if (*(char *)(lVar2 + 0x1a98) == '\0') {
        uVar12 = (uint)uVar11;
      }
      uVar11 = (ulonglong)uVar12;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    if (0 < (int)uVar12) {
      local_38 = *(undefined4 *)(puVar1 + 6);
      local_40 = puVar1[5];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146a00298) &&
         (_Init_thread_header(&DAT_146a00298), DAT_146a00298 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar10 = (longlong *)
                  (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
        uVar11 = uVar14;
        if (plVar10 != (longlong *)0x0) {
          uVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        DAT_146a00290 = uVar11;
        _Init_thread_footer(&DAT_146a00298);
      }
      uVar11 = DAT_146a00290;
      if (((DAT_1464c9c1a != '\0') && ((local_40._4_4_ >> 0x15 & 1) != 0)) &&
         ((local_40._4_4_ >> 0x10 & 1) != 0)) {
        cVar8 = FUN_1415ad720(&DAT_1468e2448);
        bVar7 = true;
        bVar6 = false;
        if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)) {
          uVar14 = 4;
        }
        if (((*(int *)(uVar14 + uVar11) != 0) &&
            (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20), lVar2 != 0)) &&
           (lVar2 = *(longlong *)(lVar2 + 0x1908), lVar2 != 0)) {
          if ((*(longlong *)(lVar2 + 0x88) == 0) ||
             (uVar14 = *(ulonglong *)(*(longlong *)(lVar2 + 0x88) + 0x38), uVar14 == 0)) {
            local_res8 = *(ulonglong *)(DAT_146ac3e00 + 0x30);
            if (local_res8 != 0) {
              LOCK();
              *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
              UNLOCK();
            }
            puVar13 = &local_res8;
            bVar5 = false;
            bVar4 = true;
          }
          else {
            LOCK();
            *(int *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1;
            UNLOCK();
            puVar13 = &local_res10;
            bVar5 = true;
            bVar4 = false;
            local_res10 = uVar14;
          }
          TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1a18,puVar13);
          if (bVar4) {
            TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
          }
          if (bVar5) {
            TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
          }
          if ((*(longlong *)(lVar2 + 0x90) == 0) ||
             (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x38), lVar3 == 0)) {
            local_res18 = *(longlong *)(DAT_146ac3e00 + 0x30);
            if (local_res18 != 0) {
              LOCK();
              *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
              UNLOCK();
            }
            plVar10 = &local_res18;
            bVar7 = false;
            bVar6 = true;
          }
          else {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
            plVar10 = &local_res20;
            local_res20 = lVar3;
          }
          TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1a20,plVar10);
          if (bVar6) {
            TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
          }
          if (bVar7) {
            TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
          }
          if ((*(longlong *)(lVar2 + 0x98) == 0) ||
             (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x38), lVar2 == 0)) {
            local_48 = *(longlong *)(DAT_146ac3e30 + 0x30);
            if (local_48 != 0) {
              LOCK();
              *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
              UNLOCK();
            }
            plVar10 = &local_48;
            bVar7 = false;
            bVar6 = true;
          }
          else {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
            plVar10 = &local_40;
            bVar7 = true;
            bVar6 = false;
            local_40 = lVar2;
          }
          TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1a28,plVar10);
          if (bVar6) {
            TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_48);
          }
          if (!bVar7) {
            return;
          }
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_40);
          return;
        }
      }
    }
  }
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x1a18,*(undefined8 *)(DAT_146ac3e00 + 0x30));
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x1a20,*(undefined8 *)(DAT_146ac3e00 + 0x30));
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x1a28,*(undefined8 *)(DAT_146ac3e30 + 0x30));
  return;
}



// FUNCTION 141ac1850 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<1,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<1,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1880 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac18b0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac18e0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1910 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,1,5,0,0,1,7,0,0,1,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,1,5,0,0,1,7,0,0,1,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1940 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1970 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac19a0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac19d0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1a00 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1a30 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1a60 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1a90 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1ac0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1af0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,8,0,0,0,1,1,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,8,0,0,0,1,1,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1b20 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1b50 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1b80 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1bb0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1be0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1c10 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1c40 FUN_141ac1c40 body=47 status=ok
// SIG undefined FUN_141ac1c40(void)

void FUN_141ac1c40(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = FUN_141ab94e0(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1c70 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1ca0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1cd0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1d00 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1d30 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,8,0,0,6,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,8,0,0,6,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1d60 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1d90 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1dc0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1df0 FUN_141ac1df0 body=93 status=ok
// SIG undefined FUN_141ac1df0(void)

void FUN_141ac1df0(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000301;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1e50 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000301;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1eb0 FUN_141ac1eb0 body=93 status=ok
// SIG undefined FUN_141ac1eb0(void)

void FUN_141ac1eb0(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000401;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1f10 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,1,1,7,0,0,5,1,7,0,0,5,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010100;
  local_14 = 0x1050000;
  local_10 = 0x5000007;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1f70 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010300;
  local_14 = 0x1010101;
  local_10 = 0x1010104;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac1fd0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010300;
  local_14 = 0x1010101;
  local_10 = 0x1010104;
  local_c = 0x181;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2030 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010300;
  local_10 = 7;
  local_c = 0x81;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2090 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000300;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac20f0 FUN_141ac20f0 body=93 status=ok
// SIG undefined FUN_141ac20f0(void)

void FUN_141ac20f0(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000400;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2150 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_14 = 0x1010101;
  local_10 = 0x1010104;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac21b0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_14 = 0x1010101;
  local_10 = 0x1010104;
  local_c = 0x181;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2210 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_10 = 7;
  local_c = 0x81;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2270 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 0x101;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac22d0 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 0x201;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2330 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 1;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2390 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 0x102;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac23f0 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 0x202;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2450 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 0x100;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac24b0 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 0x200;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2510 InitRHI body=85 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  local_18[0] = 0;
  local_14 = 0;
  local_c = 1;
  (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac2570 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<0,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141ac25e0 FUN_141ac25e0 body=346 status=ok
// SIG undefined FUN_141ac25e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ac25e0(undefined8 *param_1,int param_2,int param_3,undefined1 param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
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
  local_80 = &local_68;
  local_60 = param_7;
  local_40 = param_6;
  local_88 = param_5 | 0x208;
  *(int *)(param_1 + 3) = param_2 * param_3;
  local_68 = 0;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_78,&DAT_146ab6e78);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  local_88 = CONCAT31(local_88._1_3_,param_4);
  (**(code **)(*DAT_146ab6358 + 0x608))(DAT_146ab6358,local_78,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  local_80 = (undefined8 *)CONCAT71(local_80._1_7_,param_4);
  local_88 = param_2;
  (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,local_78,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,local_78);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  return;
}



// FUNCTION 141ac2740 FUN_141ac2740 body=70 status=ok
// SIG undefined FUN_141ac2740(void)

undefined4 FUN_141ac2740(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1900) != 0) {
    uVar2 = FUN_14274f980();
    if ((DAT_146ac3ac0 != 0) && (iVar3 = FUN_1419ef5f0(uVar2), 2 < iVar3)) {
      return 0;
    }
    cVar1 = FUN_141ee4480(uVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ac2790 IsAnyForwardShadingEnabled body=52 status=ok
// SIG undefined IsAnyForwardShadingEnabled(void)

undefined1 IsAnyForwardShadingEnabled(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  if ((DAT_146ac3ac0 != 0) && (iVar2 = FUN_1419ef5f0(), 2 < iVar2)) {
    return 1;
  }
  cVar1 = FUN_141ee4480(param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 141ac27d0 FUN_141ac27d0 body=78 status=ok
// SIG undefined FUN_141ac27d0(void)

undefined4 FUN_141ac27d0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (0.01 < *(float *)(param_1 + 0x1664) || *(float *)(param_1 + 0x1664) == 0.01) {
    uVar2 = FUN_14274f980();
    if ((DAT_146ac3ac0 != 0) && (iVar3 = FUN_1419ef5f0(uVar2), 2 < iVar3)) {
      return 0;
    }
    cVar1 = FUN_141ee4480(uVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ac2820 FUN_141ac2820 body=156 status=ok
// SIG undefined FUN_141ac2820(void)

bool FUN_141ac2820(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e688) {
    _Init_thread_header(&DAT_146a0e688);
    if (DAT_146a0e688 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DBuffer");
      lVar2 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      DAT_146a0e680 = lVar2;
      _Init_thread_footer(&DAT_146a0e688);
    }
  }
  return 0 < *(int *)(DAT_146a0e680 + 4);
}



// FUNCTION 141ac28e0 FUN_141ac28e0 body=24 status=ok
// SIG undefined FUN_141ac28e0(void)

undefined1 FUN_141ac28e0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x1209) != '\0') && (*(int *)(param_1 + 0xf60) == 1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ac2900 FUN_141ac2900 body=619 status=ok
// SIG undefined FUN_141ac2900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141ac2900(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = FSceneViewState::GetLightPropagationVolume
                      (*(longlong *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1a38),1);
    if (lVar1 != 0) {
      lVar4 = 0;
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar1 + 0x38) < DAT_14685f078) &&
         (_Init_thread_header(&DAT_14685f078), DAT_14685f078 == -1)) {
        FName::FName(&DAT_14685f070,L"FLightPropagationVolumeSettings",1);
        _Init_thread_footer(&DAT_14685f078);
      }
      do {
        lVar2 = *(longlong *)(param_1 + 0x19d8);
        if (lVar4 != 0) {
          lVar2 = (ulonglong)*(uint *)(lVar4 + 0x14) + 0x18 + lVar4 +
                  (ulonglong)*(uint *)(lVar4 + 0x10);
        }
        lVar4 = 0;
        if (lVar2 != (longlong)*(int *)(param_1 + 0x19e0) + *(longlong *)(param_1 + 0x19d8)) {
          lVar4 = lVar2;
        }
        if (lVar4 == 0) goto LAB_141ac29d1;
      } while (*(longlong *)(lVar4 + 8) != DAT_14685f070);
      puVar3 = (undefined *)(lVar4 + 0x18 + (ulonglong)*(uint *)(lVar4 + 0x14));
      if (puVar3 == (undefined *)0x0) {
LAB_141ac29d1:
        if ((*(int *)(lVar1 + 0x38) < DAT_146a0e860) &&
           (_Init_thread_header(&DAT_146a0e860), DAT_146a0e860 == -1)) {
          _DAT_146a0e850 = 0x3f8000003f800000;
          _DAT_146a0e858 = 0;
          _DAT_146a0e820 = 0x3f80000000000000;
          DAT_146a0e82c = 0x45a60000;
          DAT_146a0e830 = 0;
          DAT_146a0e834 = 0;
          DAT_146a0e828 = 0x3f23d70a;
          _DAT_146a0e838 = 0x3f8000003ec49ba6;
          _DAT_146a0e840 = 0x4100000000000000;
          _DAT_146a0e848 = 0x40e000003f800000;
          _Init_thread_footer(&DAT_146a0e860);
        }
        puVar3 = &DAT_146a0e820;
        _DAT_146a0e820 = 0x3f80000000000000;
        DAT_146a0e830 = 0;
        DAT_146a0e834 = 0;
        _DAT_146a0e838 = 0x3f8000003ec49ba6;
        DAT_146a0e828 = 0x3f23d70a;
        DAT_146a0e82c = 0x45a60000;
        _DAT_146a0e850 = 0x3f8000003f800000;
        _DAT_146a0e858 = 0;
        _DAT_146a0e840 = 0x4100000000000000;
        _DAT_146a0e848 = 0x40e000003f800000;
      }
      if (0.0 < *(float *)(puVar3 + 4)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141ac2b70 FUN_141ac2b70 body=128 status=ok
// SIG undefined FUN_141ac2b70(void)

undefined8 FUN_141ac2b70(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*DAT_1469fdab0 + 0x68))();
  lVar1 = DAT_1469fd968;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_141ac2bc8;
    }
  }
  lVar5 = 0;
LAB_141ac2bc8:
  if ((iVar3 != 0) && (0.0 < *(float *)(lVar5 + lVar1))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ac2bf0 FUN_141ac2bf0 body=295 status=ok
// SIG undefined FUN_141ac2bf0(void)

uint * FUN_141ac2bf0(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(char *)(param_1 + 0x34) == *(char *)(param_3 + 0x34);
  uVar3 = *param_2 & 0xfffffffe;
  *param_2 = bVar4 | uVar3;
  if (((bVar4) &&
      (bVar4 = *(char *)(param_1 + 0x35) == *(char *)(param_3 + 0x35), *param_2 = bVar4 | uVar3,
      bVar4)) &&
     (bVar4 = *(longlong *)(param_1 + 8) == *(longlong *)(param_3 + 8), *param_2 = bVar4 | uVar3,
     bVar4)) {
    bVar4 = *(longlong *)(param_1 + 0x10) == *(longlong *)(param_3 + 0x10);
    uVar3 = bVar4 | uVar3;
    *param_2 = uVar3;
    if (bVar4) {
      uVar1 = *(uint *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_3 + 0x30);
      uVar3 = (~uVar1 ^ uVar3 ^ uVar2) & 1 ^ uVar3;
      *param_2 = uVar3;
      if ((uVar3 & 1) != 0) {
        uVar3 = (~(uVar2 >> 1) ^ uVar1 >> 1 ^ uVar3) & 1 ^ uVar3;
        *param_2 = uVar3;
        if ((uVar3 & 1) != 0) {
          bVar4 = *(int *)(param_1 + 0x20) == *(int *)(param_3 + 0x20);
          uVar3 = uVar3 & 0xfffffffe;
          *param_2 = bVar4 | uVar3;
          if ((bVar4) &&
             (bVar4 = *(int *)(param_1 + 0x24) == *(int *)(param_3 + 0x24), *param_2 = bVar4 | uVar3
             , bVar4)) {
            *param_2 = *(int *)(param_1 + 0x28) == *(int *)(param_3 + 0x28) | uVar3;
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141ac2d20 ModifyCompilationEnvironment body=165 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac2dd0 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac2e40 ModifyCompilationEnvironment body=165 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac2ef0 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac2f60 ModifyCompilationEnvironment body=165 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3010 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3080 ModifyCompilationEnvironment body=165 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3130 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac31a0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3250 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac32b0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3360 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac33c0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3470 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac34d0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3580 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac35e0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3690 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac36f0 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3790 ModifyCompilationEnvironment body=93 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac37f0 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac38a0 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3900 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac39b0 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3a10 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3ac0 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3b20 ModifyCompilationEnvironment body=162 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3bd0 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3c30 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3cd0 ModifyCompilationEnvironment body=93 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3d30 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3dd0 ModifyCompilationEnvironment body=93 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3e30 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3ed0 ModifyCompilationEnvironment body=93 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac3f30 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac3fd0 ModifyCompilationEnvironment body=93 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac4030 ModifyCompilationEnvironment body=159 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac40d0 ModifyCompilationEnvironment body=93 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac4130 ModifyCompilationEnvironment body=156 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_SHADER",1);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",0x10);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",0x10);
  return;
}



// FUNCTION 141ac41d0 ModifyCompilationEnvironment body=90 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessAmbientOcclusionPSandCS<0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_UPSAMPLE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_AO_SETUP_AS_INPUT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADER_QUALITY",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"COMPUTE_SHADER",0);
  return;
}



// FUNCTION 141ac4270 FUN_141ac4270 body=113 status=ok
// SIG undefined FUN_141ac4270(void)

void FUN_141ac4270(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac42f0 FUN_141ac42f0 body=110 status=ok
// SIG undefined FUN_141ac42f0(void)

void FUN_141ac42f0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141ac4360 FUN_141ac4360 body=113 status=ok
// SIG undefined FUN_141ac4360(void)

void FUN_141ac4360(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac43e0 FUN_141ac43e0 body=110 status=ok
// SIG undefined FUN_141ac43e0(void)

void FUN_141ac43e0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141ac4450 FUN_141ac4450 body=116 status=ok
// SIG undefined FUN_141ac4450(void)

void FUN_141ac4450(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac44d0 FUN_141ac44d0 body=113 status=ok
// SIG undefined FUN_141ac44d0(void)

void FUN_141ac44d0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141ac4550 FUN_141ac4550 body=113 status=ok
// SIG undefined FUN_141ac4550(void)

void FUN_141ac4550(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac45d0 FUN_141ac45d0 body=110 status=ok
// SIG undefined FUN_141ac45d0(void)

void FUN_141ac45d0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141ac4640 FUN_141ac4640 body=116 status=ok
// SIG undefined FUN_141ac4640(void)

void FUN_141ac4640(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac46c0 FUN_141ac46c0 body=113 status=ok
// SIG undefined FUN_141ac46c0(void)

void FUN_141ac46c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141ac4740 FUN_141ac4740 body=116 status=ok
// SIG undefined FUN_141ac4740(void)

void FUN_141ac4740(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141ac47c0 FUN_141ac47c0 body=113 status=ok
// SIG undefined FUN_141ac47c0(void)

void FUN_141ac47c0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_SUN_DISK",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_GROUND_SCATTERING",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"ATMOSPHERIC_NO_LIGHT_SHAFT",4);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}


