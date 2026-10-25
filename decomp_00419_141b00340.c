// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141b00340 FUN_141b00340 body=111 status=ok
// SIG undefined FUN_141b00340(void)

undefined8 * FUN_141b00340(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"EdgeDetectionShaderBuffer",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b003b0 ConstructCompiledInstance body=254 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessLpvDirectionalOcclusionPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4600;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1c4),(longlong)puVar1 + 0x1cc);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"gLpv3DTextureSampler",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"gAOVolumeTexture",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b004b0 ConstructCompiledInstance body=115 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessPassThroughPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd45d0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00530 FUN_141b00530 body=86 status=ok
// SIG undefined FUN_141b00530(void)

undefined8 * FUN_141b00530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4ed8;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00590 FUN_141b00590 body=117 status=ok
// SIG undefined FUN_141b00590(void)

undefined8 * FUN_141b00590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4c38;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00610 FUN_141b00610 body=80 status=ok
// SIG undefined FUN_141b00610(void)

undefined8 * FUN_141b00610(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144dd4c08;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    *(undefined2 *)(puVar1 + 0x2c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00660 FUN_141b00660 body=138 status=ok
// SIG undefined FUN_141b00660(void)

undefined8 * FUN_141b00660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4900;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined2 *)(puVar1 + 0x1e) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b006f0 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TPostProcessLpvIndirectPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f8);
  if (puVar1 != (undefined8 *)0x0) {
    FPostProcessLpvIndirectPS::FPostProcessLpvIndirectPS(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4508;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00730 ConstructSerializedInstance body=138 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FComputeDistanceFieldNormalCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4790;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xf4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b007c0 ConstructSerializedInstance body=131 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FComputeDistanceFieldNormalPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4760;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xec) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00850 ConstructSerializedInstance body=97 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FMobileCopySceneAlphaPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd46e8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b008c0 FUN_141b008c0 body=72 status=ok
// SIG undefined FUN_141b008c0(void)

undefined8 * FUN_141b008c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144dd4f08;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00910 FUN_141b00910 body=72 status=ok
// SIG undefined FUN_141b00910(void)

undefined8 * FUN_141b00910(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144dd4a38;
    puVar1[0x2a] = 0;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00960 FUN_141b00960 body=100 status=ok
// SIG undefined FUN_141b00960(void)

undefined8 * FUN_141b00960(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x140);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4ce8;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b009d0 ConstructSerializedInstance body=131 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FDownsampleSceneDepthPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4b38;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xda) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xe2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00a60 FUN_141b00a60 body=101 status=ok
// SIG undefined FUN_141b00a60(void)

undefined8 * FUN_141b00a60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x140);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4930;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    *(undefined2 *)(puVar1 + 0x27) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00ad0 ConstructSerializedInstance body=71 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FMissingShaderPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4a68;
    puVar1[0x18] = &PTR_LAB_144dd4a98;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00b20 ConstructSerializedInstance body=116 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessLpvDirectionalOcclusionPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4600;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    puVar1[0x38] = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00ba0 ConstructSerializedInstance body=69 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessPassThroughPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd45d0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00bf0 FUN_141b00bf0 body=3219 status=ok
// SIG undefined FUN_141b00bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_141b00bf0(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                 undefined4 param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  longlong *local_260;
  longlong local_258;
  undefined8 *local_250;
  undefined4 local_248;
  int local_238;
  uint local_234;
  int local_230;
  ulonglong local_228;
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  ulonglong local_208;
  undefined4 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  uint local_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined1 local_164;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong local_120;
  longlong local_118;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  uVar26 = 0;
  local_e0 = param_6;
  local_f8 = param_7;
  local_f0 = param_8;
  local_200 = *(undefined4 *)(param_3 + 0x1a38);
  local_218 = 0;
  local_210 = 0;
  local_1a8 = *(longlong **)(param_4 + 8);
  local_234 = 0;
  local_228 = param_3;
  local_220 = param_1;
  (**(code **)(*local_1a8 + 0x48))(local_1a8,param_5);
  iVar21 = 0;
  local_230 = 0;
  local_238 = 0;
  if (0 < (int)local_210) {
    local_208 = 0;
    do {
      uVar22 = local_208;
      lVar13 = local_218;
      iVar23 = local_238;
      if ((*(uint *)(local_208 + 0x8c + local_218) & 0x3f000) == 0) {
        lVar11 = (**(code **)(**(longlong **)(local_208 + 0xa0 + local_218) + 0x40))();
        pwVar12 = _guard_xfg_dispatch_icall_nop(*(wchar_t **)(lVar11 + 0x10),L"LocalVertexFactory");
        if (pwVar12 == (wchar_t *)0x0) {
          lVar13 = (**(code **)(**(longlong **)(uVar22 + 0xa0 + lVar13) + 0x40))();
          pwVar12 = _guard_xfg_dispatch_icall_nop
                              (*(wchar_t **)(lVar13 + 0x10),L"InstancedStaticMeshVertexFactory");
          if (pwVar12 == (wchar_t *)0x0) goto LAB_141b00e3c;
        }
        iVar21 = 0;
        lVar13 = local_218 + uVar22;
        lVar11 = (longlong)*(int *)(lVar13 + 0x80);
        if (0 < lVar11) {
          lVar15 = *(longlong *)(lVar13 + 0x78);
          if (*(longlong *)(lVar13 + 0x78) == 0) {
            lVar15 = lVar13;
          }
          piVar25 = (int *)(lVar15 + 0x38);
          do {
            if ((*(char *)((longlong)piVar25 + 0x31) == '\0') ||
               (lVar13 = *(longlong *)(piVar25 + -8), lVar13 == 0)) {
              iVar23 = 0;
              piVar18 = *(int **)(piVar25 + -2);
              if (*(int **)(piVar25 + -2) == (int *)0x0) {
                piVar18 = piVar25 + -4;
              }
              piVar14 = piVar18 + (longlong)*piVar25 * 2;
              for (; piVar18 != piVar14; piVar18 = piVar18 + 2) {
                iVar23 = iVar23 + piVar18[1];
              }
              iVar21 = iVar21 + piVar25[2] * iVar23;
            }
            else {
              uVar24 = 0;
              if (piVar25[2] != 0) {
                piVar18 = *(int **)(piVar25 + -2);
                if (*(int **)(piVar25 + -2) == (int *)0x0) {
                  piVar18 = piVar25 + -4;
                }
                do {
                  iVar23 = 0;
                  for (piVar14 = piVar18; piVar14 != piVar18 + (longlong)*piVar25 * 2;
                      piVar14 = piVar14 + 2) {
                    iVar23 = iVar23 + piVar14[1];
                  }
                  uVar5 = uVar24 * 2;
                  uVar24 = uVar24 + 1;
                  iVar21 = iVar21 + ((*(int *)(lVar13 + (ulonglong)(uVar5 + 1) * 4) -
                                     *(int *)(lVar13 + (ulonglong)uVar5 * 4)) + 1) * iVar23;
                } while (uVar24 < (uint)piVar25[2]);
              }
            }
            piVar25 = piVar25 + 0x1e;
            lVar11 = lVar11 + -1;
            uVar22 = local_208;
            iVar23 = local_238;
          } while (lVar11 != 0);
        }
        local_230 = local_230 + iVar21;
        iVar21 = local_230;
      }
LAB_141b00e3c:
      local_238 = iVar23 + 1;
      local_208 = uVar22 + 0xb8;
    } while (local_238 < (int)local_210);
    if (0 < iVar21) {
      if (DAT_146a0f5f0 < iVar21 * 3) {
        DAT_146a0f5f0 = iVar21 * 3;
        TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a0f5f8,0);
        TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a0f600,0);
        FUN_141ace450(&DAT_146a0f608);
        FUN_141ace450(&DAT_146a0f630);
        if (0 < DAT_146a0f5f0) {
          iVar23 = FUN_141aff4c0();
          local_260 = &local_88;
          local_78 = 1;
          local_64 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_74 = _DAT_1468b5d78;
          uStack_70 = uRam00000001468b5d7c;
          uStack_6c = uRam00000001468b5d80;
          uStack_68 = uRam00000001468b5d84;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_268._0_4_ = 0x280;
          (**(code **)(*DAT_146ab6358 + 0x490))
                    (DAT_146ab6358,local_1e0,&DAT_146ab6e78,iVar23 * DAT_1464ca3cc * DAT_146a0f5f0);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a0f5f8,local_1e0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1e0);
          local_260 = (longlong *)CONCAT71(local_260._1_7_,0xd);
          local_268._0_4_ = DAT_1464ca3cc;
          (**(code **)(*DAT_146ab6358 + 0x4a8))
                    (DAT_146ab6358,local_1d8,&DAT_146ab6e78,DAT_146a0f5f8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a0f600,local_1d8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1d8);
          local_258 = 0;
          local_260 = (longlong *)0x0;
          local_268._0_4_ = 0;
          FUN_141ac25e0(&DAT_146a0f608,4,DAT_146a0f5f0,0xd);
          local_258 = 0;
          local_260 = (longlong *)0x0;
          local_268 = (ulonglong *)((ulonglong)local_268._4_4_ << 0x20);
          FUN_141ac25e0(&DAT_146a0f630,4,DAT_146a0f5f0,0xd);
        }
      }
      lVar13 = local_220;
      local_1f0 = 0;
      uStack_1e8 = 0;
      *(undefined4 *)(local_220 + 0x98) = 0;
      *(undefined4 *)(local_220 + 0x160) = 0;
      *(undefined4 *)(local_220 + 0x164) = 0;
      *(undefined4 *)(local_220 + 0x168) = 0;
      *(undefined4 *)(local_220 + 0x16c) = 0;
      puVar19 = (undefined8 *)(*(longlong *)(local_220 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar17 = puVar19 + 0x26;
      if (*(undefined8 **)(local_220 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(local_220 + 0x30,0x138);
        puVar19 = (undefined8 *)(*(longlong *)(lVar13 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar17 = puVar19 + 0x26;
      }
      *(undefined8 **)(lVar13 + 0x30) = puVar17;
      iVar23 = 0;
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
      **(undefined8 **)(lVar13 + 8) = puVar19;
      *(undefined8 **)(lVar13 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_143f59440;
      *(undefined4 *)(puVar19 + 2) = 0;
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
      uVar22 = 0;
      if (*(int *)(puVar19 + 2) != 0) {
        do {
          uVar24 = (int)uVar22 + 1;
          puVar1 = (undefined4 *)(uVar22 * 0x18);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar17 = puVar19 + uVar22 * 3 + 3;
          *(undefined4 *)puVar17 = *puVar1;
          *(undefined4 *)((longlong)puVar17 + 4) = uVar6;
          *(undefined4 *)(puVar17 + 1) = uVar7;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uVar8;
          puVar19[uVar22 * 3 + 5] = *(undefined8 *)(uVar22 * 0x18 + 0x10);
          uVar22 = (ulonglong)uVar24;
        } while (uVar24 < *(uint *)(puVar19 + 2));
        iVar23 = *(int *)(puVar19 + 0x1d);
      }
      uVar22 = 0;
      if (iVar23 != 0) {
        do {
          uVar24 = (int)uVar22 + 1;
          puVar19[uVar22 + 0x1e] = *(undefined8 *)(uVar22 * 8);
          uVar22 = (ulonglong)uVar24;
        } while (uVar24 < *(uint *)(puVar19 + 0x1d));
      }
      local_108 = DAT_146a0f5f8;
      local_208 = local_208 & 0xffffffff00000000;
      if (*(int *)(lVar13 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,lVar13);
      }
      FUN_141ed93a0(lVar13);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(lVar13);
      }
      FRHICommandListBase::WaitForTasks(lVar13,1);
      (**(code **)(*DAT_146ab6358 + 0x3c8))(DAT_146ab6358,1,&local_108,&local_208);
      local_238 = 0;
      if (0 < (int)local_210) {
        local_1a0 = 0;
        do {
          lVar11 = local_1a0 + local_218;
          if ((*(uint *)(lVar11 + 0x8c) & 0x3f000) == 0) {
            lVar15 = (**(code **)(**(longlong **)(lVar11 + 0xa0) + 0x40))();
            pwVar12 = _guard_xfg_dispatch_icall_nop
                                (*(wchar_t **)(lVar15 + 0x10),L"LocalVertexFactory");
            if (pwVar12 == (wchar_t *)0x0) {
              lVar15 = (**(code **)(**(longlong **)(lVar11 + 0xa0) + 0x40))();
              pwVar12 = _guard_xfg_dispatch_icall_nop
                                  (*(wchar_t **)(lVar15 + 0x10),L"InstancedStaticMeshVertexFactory")
              ;
              if (pwVar12 == (wchar_t *)0x0) goto LAB_141b0129d;
            }
            bVar9 = true;
          }
          else {
LAB_141b0129d:
            bVar9 = false;
          }
          if (bVar9) {
            uVar24 = *(uint *)(lVar11 + 0x8c);
            local_1c8 = 0;
            uStack_1cc = uVar24 >> 0xc & 0x3f;
            local_1d0 = ((uVar24 >> 0x13 & 0x80 | uVar24 & 0x100) >> 2 | uVar24 & 0x10) >> 4 |
                        uVar24 & 8;
            local_100 = CONCAT44(uVar24 >> 0xc,local_1d0) & 0x3fffffffff;
            (**(code **)(**(longlong **)(lVar11 + 0xa8) + 0x40))
                      (*(longlong **)(lVar11 + 0xa8),local_200,local_d8,&local_1c8);
            uVar3 = local_1c8;
            local_268 = &local_100;
            plVar2 = *(longlong **)(lVar11 + 0xa0);
            local_260 = (longlong *)((ulonglong)local_260 & 0xffffffff00000000);
            FUN_141b279e0(&local_158,plVar2,*(undefined8 *)(lVar11 + 0xa8),local_1c8);
            uVar16 = (**(code **)(*plVar2 + 0x40))(plVar2);
            local_120 = FUN_1425939a0(uVar3,&DAT_146a0f350,uVar16,1);
            uVar16 = (**(code **)(*plVar2 + 0x40))(plVar2);
            local_118 = FUN_1425939a0(uVar3,&DAT_146a0f4a0,uVar16,1);
            local_158 = local_120;
            *local_f8 = *(undefined8 *)(lVar11 + 0xa8);
            local_180 = *(longlong *)(param_3 + 0x20);
            local_188 = 0x11;
            local_198 = 0;
            uStack_190 = 0;
            if (local_180 != 0) {
              LOCK();
              *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
              UNLOCK();
            }
            local_178 = 0;
            local_170 = 0;
            local_168 = 0;
            local_164 = 0;
            local_16c = (uint)(*(char *)(param_3 + 0x1205) != '\0') |
                        -(uint)(*(char *)(param_3 + 0x11b4) != '\0') & 8;
            local_198 = FUN_1404a0ce0();
            uStack_190 = FUN_1409853f0();
            local_170 = 0;
            lVar15 = *(longlong *)(local_118 + 0x48);
            if (*(char *)(lVar15 + 0x28) == '\0') {
              FUN_1419f3850(lVar15);
            }
            uVar3 = *(undefined8 *)(lVar15 + 0x58);
            lVar15 = *(longlong *)(local_120 + 0x48);
            if (*(char *)(lVar15 + 0x28) == '\0') {
              FUN_1419f3850(lVar15);
            }
            uVar16 = *(undefined8 *)(lVar15 + 0x38);
            puVar17 = (undefined8 *)FUN_141b34160(&local_158);
            local_a0 = 0;
            local_c0 = *puVar17;
            local_b0 = 0;
            uStack_a8 = 0;
            local_b8 = uVar16;
            local_98 = uVar3;
            FUN_141a9adc0(lVar13,&local_158,&local_198,&local_c0);
            local_268 = (ulonglong *)((ulonglong)local_268 & 0xffffffffffffff00);
            FUN_141b45c10(&local_158,lVar13,&local_198,param_3);
            lVar4 = local_120;
            plVar2 = local_148;
            lVar15 = local_220;
            FUN_141c96a70(&local_1b8,local_220,0,*(undefined4 *)(param_3 + 0x1a38));
            uVar3 = local_1b8;
            local_1c0 = 0;
            (**(code **)(*plVar2 + 0x40))
                      (plVar2,*(undefined4 *)(local_228 + 0x1a38),local_d0,&local_1c0);
            lVar13 = *(longlong *)(lVar4 + 0x48);
            local_1f8 = local_1c0;
            if (*(char *)(lVar13 + 0x28) == '\0') {
              FUN_1419f3850(lVar13);
            }
            uVar22 = local_228;
            local_250 = (undefined8 *)uVar3;
            local_258 = local_228 + 0x20;
            local_260 = (longlong *)local_228;
            local_268 = (ulonglong *)local_1f8;
            FUN_141aa8c40(lVar4,lVar15,*(undefined8 *)(lVar13 + 0x38),plVar2);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
            lVar4 = local_118;
            plVar2 = local_148;
            FUN_141c96a70(&local_1b0,lVar15,0,*(undefined4 *)(uVar22 + 0x1a38));
            puVar17 = local_1b0;
            local_1f8 = 0;
            (**(code **)(*plVar2 + 0x40))
                      (plVar2,*(undefined4 *)(uVar22 + 0x1a38),local_c8,&local_1f8);
            lVar15 = local_1f8;
            lVar13 = *(longlong *)(lVar4 + 0x48);
            if (*(char *)(lVar13 + 0x28) == '\0') {
              FUN_1419f3850(lVar13);
            }
            local_250 = puVar17;
            local_258 = local_228 + 0x20;
            local_260 = (longlong *)local_228;
            local_268 = (ulonglong *)lVar15;
            FUN_141af68c0(lVar4,local_220,*(undefined8 *)(lVar13 + 0x58),plVar2);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
            uVar20 = 0;
            param_3 = local_228;
            lVar13 = local_220;
            uVar22 = uVar20;
            if (0 < *(int *)(lVar11 + 0x80)) {
              do {
                lVar13 = *(longlong *)(lVar11 + 0x78);
                if (*(longlong *)(lVar11 + 0x78) == 0) {
                  lVar13 = lVar11;
                }
                iVar21 = (int)uVar20;
                if (*(longlong *)(uVar22 + 8 + lVar13) == 0) {
                  lVar13 = *(longlong *)(*(longlong *)(uVar22 + lVar13) + 0x38);
                  if (lVar13 != 0) {
                    LOCK();
                    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                    UNLOCK();
                  }
                  local_234 = uVar26 | 1;
                  local_e8 = lVar13;
                  uVar26 = local_234;
                }
                else {
                  lVar13 = *(longlong *)((longlong)iVar21 * 0x78 + 8 + lVar13);
                }
                *local_f0 = lVar13;
                if ((uVar26 & 1) != 0) {
                  local_234 = uVar26 & 0xfffffffe;
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e8);
                }
                lVar13 = local_120;
                uVar3 = local_150;
                lVar15 = *(longlong *)(lVar11 + 0x78);
                if (*(longlong *)(lVar11 + 0x78) == 0) {
                  lVar15 = lVar11;
                }
                lVar4 = *(longlong *)(local_120 + 0x48);
                lVar15 = lVar15 + (longlong)iVar21 * 0x78;
                if (*(char *)(lVar4 + 0x28) == '\0') {
                  FUN_1419f3850(lVar4);
                }
                local_250 = &local_198;
                local_248 = 0;
                local_260 = local_1a8;
                local_268 = (ulonglong *)local_228;
                local_258 = lVar15;
                FUN_141d84f90(lVar13,local_220,*(undefined8 *)(lVar4 + 0x38),uVar3);
                lVar10 = local_118;
                uVar3 = local_150;
                lVar4 = *(longlong *)(local_118 + 0x48);
                if (*(char *)(lVar4 + 0x28) == '\0') {
                  FUN_1419f3850(lVar4);
                }
                lVar13 = local_220;
                local_250 = &local_198;
                local_248 = 0;
                local_260 = local_1a8;
                local_268 = (ulonglong *)local_228;
                local_258 = lVar15;
                FUN_141d84270(lVar10,local_220,*(undefined8 *)(lVar4 + 0x58),uVar3);
                param_3 = local_228;
                local_260 = (longlong *)((ulonglong)local_260 & 0xffffffffffffff00);
                local_268 = (ulonglong *)CONCAT44(local_268._4_4_,iVar21);
                FUN_141b315b0(&local_158,lVar13,local_228,lVar11);
                uVar20 = (ulonglong)(iVar21 + 1U);
                uVar22 = uVar22 + 0x78;
                uVar26 = local_234;
              } while ((int)(iVar21 + 1U) < *(int *)(lVar11 + 0x80));
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_180);
          }
          local_238 = local_238 + 1;
          local_1a0 = local_1a0 + 0xb8;
          iVar21 = local_230;
        } while (local_238 < (int)local_210);
      }
      if (*(int *)(lVar13 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,lVar13);
      }
      FUN_141ed93a0(lVar13);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(lVar13);
      }
      FRHICommandListBase::WaitForTasks(lVar13,1);
      (**(code **)(*DAT_146ab6358 + 0x3c8))(DAT_146ab6358,1,0,&local_208);
    }
  }
  *local_e0 = &DAT_146a0f5f0;
  lVar13 = local_218;
  for (iVar23 = (int)local_210; iVar23 != 0; iVar23 = iVar23 + -1) {
    FUN_1408bbda0(lVar13);
    lVar13 = lVar13 + 0xb8;
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  return iVar21;
}



// FUNCTION 141b01890 FUN_141b01890 body=828 status=ok
// SIG undefined FUN_141b01890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b01890(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_198 [32];
  float local_178;
  float local_170;
  float local_168;
  float local_160;
  float local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined4 local_128;
  ulonglong local_118;
  undefined *local_110;
  undefined4 local_108;
  longlong local_100;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar11 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  plVar3 = *(longlong **)(*param_1 + 0x10);
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
  local_100 = param_2;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  if ((int)plVar3[1] != 0) {
    lVar4 = param_1[0xc];
    local_110 = &DAT_146a51f90;
    local_108 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x38,&local_118,&local_110);
    plVar12 = plVar11;
    if ((int)local_118 != -1) {
      plVar12 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar4 + 0x38));
    }
    local_108 = 0;
    plVar9 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar9 = plVar11;
    }
    local_110 = &DAT_146a0f200;
    lVar5 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x38,&local_118,&local_110);
    plVar12 = plVar11;
    if ((int)local_118 != -1) {
      plVar12 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar4 + 0x38));
    }
    plVar9 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar9 = plVar11;
    }
    lVar4 = *plVar9;
    local_f8 = DAT_1464c2720;
    if (lVar5 == 0) {
      local_118 = 0;
      plVar12 = (longlong *)0x1;
      plStack_f0 = plVar11;
    }
    else {
      lVar8 = *(longlong *)(lVar5 + 0x48);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      plStack_f0 = *(longlong **)(lVar8 + 0x38);
      plVar12 = plVar11;
    }
    if (plVar12 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
    }
    bVar7 = false;
    if (lVar4 == 0) {
      bVar7 = true;
      local_118 = 0;
      local_d8 = plVar11;
    }
    else {
      lVar8 = *(longlong *)(lVar4 + 0x48);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      local_d8 = *(longlong **)(lVar8 + 0x40);
    }
    if (bVar7) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
    }
    local_ac = local_ac & 0xffffffff00000000;
    FUN_141ed6ac0(param_1[8],&local_f8,2,1);
    FUN_141ad70c0(lVar5,param_1);
    FUN_141af7550(lVar4,param_1[8],param_1);
    lVar8 = FSceneRenderTargets::Get(param_1[8]);
    lVar4 = local_100;
    uVar2 = *(uint *)(plVar3 + 1);
    uVar6 = *(undefined8 *)(lVar8 + 0x378);
    if (uVar2 != 0) {
      do {
        lVar8 = *(longlong *)(*plVar3 + (longlong)(int)plVar11 * 8);
        if (lVar8 != lVar4) {
          auVar1 = *(undefined1 (*) [16])(lVar8 + 0x1aa0);
          local_128 = 1;
          local_170 = (float)auVar1._0_4_;
          local_130 = *(undefined1 *)((longlong)param_1 + 0x69);
          local_138 = *(undefined4 *)(lVar8 + 0xf60);
          local_178 = (float)(auVar1._12_4_ - auVar1._4_4_);
          local_160 = (float)(auVar1._8_4_ - auVar1._0_4_);
          local_168 = (float)auVar1._4_4_;
          local_158 = local_178;
          local_150 = uVar6;
          local_148 = uVar6;
          local_140 = lVar5;
          FUN_141ce13a0(param_1[8]);
        }
        uVar10 = (int)plVar11 + 1;
        plVar11 = (longlong *)(ulonglong)uVar10;
      } while (uVar10 < uVar2);
    }
  }
  return;
}



// FUNCTION 141b01bd0 FUN_141b01bd0 body=2229 status=ok
// SIG undefined FUN_141b01bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b01bd0(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_248 [32];
  float local_228;
  float local_220;
  float local_218;
  float local_210;
  float local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  ulonglong local_1d8;
  int local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  int iStack_18c;
  longlong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined4 local_128;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  lVar20 = (longlong)(int)param_1[0x19];
  uVar21 = 0;
  bVar22 = false;
  local_1d8 = local_1d8 & 0xffffffff00000000;
  uVar12 = uVar21;
  if (0 < lVar20) {
    do {
      if ((bVar22) || ((*(uint *)(uVar12 + 0x28cc + param_1[0x18]) & 0x400) != 0)) {
        bVar22 = true;
      }
      else {
        bVar22 = false;
      }
      lVar20 = lVar20 + -1;
      uVar12 = uVar12 + 0x30d0;
    } while (lVar20 != 0);
    if (bVar22) {
      local_1c8 = param_2;
      local_198 = param_1;
      lVar20 = FSceneRenderTargets::Get(param_2);
      puVar1 = (ulonglong *)(param_2 + 0x30);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_148 = *(undefined8 *)(*(longlong *)(lVar20 + 0x60) + 0x10);
      puVar11 = puVar16 + 1;
      local_188 = lVar20;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar1,0x10);
        puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 1;
      }
      *puVar1 = (ulonglong)puVar11;
      *puVar16 = local_148;
      puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar1,0x30);
        puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar13 + 5;
      }
      *puVar1 = (ulonglong)puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar13 + 2) = 1;
      puVar13[3] = puVar16;
      *(undefined4 *)(puVar13 + 4) = 0;
      *(undefined1 *)((longlong)puVar13 + 0x24) = 0;
      FUN_141cdd070(lVar20,param_2);
      local_220 = (float)CONCAT31(local_220._1_3_,1);
      local_150 = 0;
      local_228 = 0.0;
      FUN_141ad74f0(param_2,*(undefined8 *)(*(longlong *)(lVar20 + 0x80) + 8),0,0);
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
      FUN_14049afe0(param_2);
      local_e8 = FUN_1404a0ce0();
      uStack_e0 = FUN_140985530();
      local_d8 = FUN_1409853f0();
      local_118 = DAT_1464c2720;
      local_1d0 = 0;
      lVar14 = param_2;
      if (0 < (int)param_1[0x19]) {
        local_1c0 = 0;
        plVar17 = local_198;
        plVar19 = local_198;
        do {
          local_1a0 = param_1[0x18];
          local_140 = &DAT_146b09c50;
          local_138 = 0;
          lVar20 = *(longlong *)(local_1a0 + 0x3090 + local_1c0);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar20 + 0x38,&local_1b8,&local_140);
          if (local_1b8 == -1) {
            lVar14 = 0;
          }
          else {
            lVar14 = (longlong)local_1b8 * 0x20 + *(longlong *)(lVar20 + 0x38);
          }
          plVar9 = (longlong *)0x0;
          local_128 = 0;
          plVar15 = (longlong *)(lVar14 + 0x10);
          if (lVar14 == 0) {
            plVar15 = plVar9;
          }
          local_130 = &DAT_146a102e0;
          lVar6 = *plVar15;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar20 + 0x38,&local_1b4,&local_130);
          plVar15 = plVar9;
          if (local_1b4 != -1) {
            plVar15 = (longlong *)((longlong)local_1b4 * 0x20 + *(longlong *)(lVar20 + 0x38));
          }
          plVar18 = plVar15 + 2;
          if (plVar15 == (longlong *)0x0) {
            plVar18 = plVar9;
          }
          lVar20 = *plVar18;
          if (lVar6 == 0) {
            uVar21 = (ulonglong)((uint)uVar21 | 1);
            plVar17 = plVar9;
          }
          else {
            lVar14 = *(longlong *)(lVar6 + 0x48);
            if (*(char *)(lVar14 + 0x28) == '\0') {
              FUN_1419f3850(lVar14);
            }
            plVar9 = *(longlong **)(lVar14 + 0x38);
          }
          plVar15 = (longlong *)0x0;
          plStack_110 = plVar9;
          if (((uVar21 & 1) != 0) &&
             (uVar21 = (ulonglong)((uint)uVar21 & 0xfffffffe), plVar17 != (longlong *)0x0)) {
            LOCK();
            plVar9 = plVar17 + 1;
            lVar14 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              if (((char)plVar17[2] == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                LOCK();
                bVar22 = *(int *)((longlong)plVar17 + 0xc) == 0;
                if (bVar22) {
                  *(int *)((longlong)plVar17 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar22) {
                  uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  plVar9 = plVar15;
                  if (uVar8 != 0) {
                    plVar9 = (longlong *)
                             ((&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18);
                  }
                  plVar9[1] = (longlong)plVar17;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*plVar17)(plVar17,1);
              }
            }
          }
          if (lVar20 == 0) {
            uVar21 = (ulonglong)((uint)uVar21 | 2);
            local_f8 = 0;
          }
          else {
            lVar14 = *(longlong *)(lVar20 + 0x48);
            if (*(char *)(lVar14 + 0x28) == '\0') {
              FUN_1419f3850(lVar14);
            }
            local_f8 = *(undefined8 *)(lVar14 + 0x40);
            plVar15 = plVar19;
          }
          lVar14 = 0;
          if (((uVar21 & 2) != 0) &&
             (uVar21 = (ulonglong)((uint)uVar21 & 0xfffffffd), plVar15 != (longlong *)0x0)) {
            LOCK();
            plVar19 = plVar15 + 1;
            lVar10 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              if (((char)plVar15[2] == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                LOCK();
                bVar22 = *(int *)((longlong)plVar15 + 0xc) == 0;
                if (bVar22) {
                  *(int *)((longlong)plVar15 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar22) {
                  uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar8 != 0) {
                    lVar14 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                  }
                  *(longlong **)(lVar14 + 8) = plVar15;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*plVar15)(plVar15,1);
              }
            }
          }
          local_cc = local_cc & 0xffffffff00000000;
          FUN_141ed6ac0(local_1c8,&local_118,2,1);
          lVar14 = *(longlong *)(lVar20 + 0x48);
          local_1d8 = *(undefined8 *)(local_1c0 + 0x20 + local_1a0);
          if (*(char *)(lVar14 + 0x28) == '\0') {
            FUN_1419f3850(lVar14);
          }
          FUN_141aa9590(lVar20,local_1c8,*(undefined8 *)(lVar14 + 0x40),local_1d8);
          lVar10 = FSceneRenderTargets::Get(local_1c8);
          lVar14 = *(longlong *)(lVar20 + 0x48);
          local_1a8 = *(undefined8 *)(lVar10 + 0x78);
          if (*(char *)(lVar14 + 0x28) == '\0') {
            FUN_1419f3850(lVar14);
          }
          local_1d8 = *(undefined8 *)(lVar14 + 0x40);
          if (*(short *)(lVar20 + 0xc2) != 0) {
            uVar2 = *(ushort *)(lVar20 + 0xc0);
            puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar16 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
              FMemStackBase::AllocateNewChunk(puVar1);
              puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar16 + 5;
            }
            *puVar1 = (ulonglong)puVar11;
            *(int *)(local_1c8 + 0x14) = *(int *)(local_1c8 + 0x14) + 1;
            **(undefined8 **)(local_1c8 + 8) = puVar16;
            *(undefined8 **)(local_1c8 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_144d8e600;
            puVar16[2] = local_1d8;
            puVar16[4] = local_1a8;
            *(uint *)(puVar16 + 3) = (uint)uVar2;
          }
          lVar14 = local_1c8;
          uVar3 = *(undefined4 *)(local_1c0 + 0x1aac + local_1a0);
          local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(local_1c0 + 0x1aa8 + local_1a0));
          local_1a8 = CONCAT44(local_1a8._4_4_,*(undefined4 *)(local_1c0 + 0x1aa4 + local_1a0));
          local_1b0 = *(undefined4 *)(local_1c0 + 0x1aa0 + local_1a0);
          puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
            FMemStackBase::AllocateNewChunk(puVar1);
            puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar16 + 5;
          }
          lVar20 = local_1c0;
          *puVar1 = (ulonglong)puVar11;
          *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
          **(undefined8 **)(lVar14 + 8) = puVar16;
          *(undefined8 **)(lVar14 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *puVar16 = &PTR_LAB_143f59420;
          *(undefined4 *)(puVar16 + 2) = local_1b0;
          *(undefined4 *)((longlong)puVar16 + 0x14) = (undefined4)local_1a8;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = (undefined4)local_1d8;
          *(undefined4 *)(puVar16 + 4) = uVar3;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
          local_1f8 = *(undefined8 *)(local_188 + 0x378);
          iVar4 = *(int *)(local_1a0 + 0x1aa4 + local_1c0);
          iStack_18c = *(int *)(local_1a0 + 0x1aac + local_1c0) - iVar4;
          iVar5 = *(int *)(local_1a0 + 0x1aa0 + local_1c0);
          local_190 = *(int *)(local_1a0 + 0x1aa8 + local_1c0) - iVar5;
          local_1e0 = 1;
          local_1e8 = 1;
          local_228 = (float)iStack_18c;
          local_200 = CONCAT44(iStack_18c,local_190);
          local_210 = (float)local_190;
          local_220 = (float)iVar5;
          local_218 = (float)iVar4;
          local_208 = local_228;
          local_1f0 = lVar6;
          DrawRectangle(lVar14);
          local_1d0 = local_1d0 + 1;
          local_1c0 = lVar20 + 0x30d0;
          lVar20 = local_188;
          plVar19 = plVar15;
          param_1 = local_198;
        } while (local_1d0 < (int)local_198[0x19]);
      }
      local_180 = 0xffffffff00000000;
      uStack_178 = 0xffffffffffffffff;
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      local_160 = 0xffffffff;
      uStack_158 = 0;
      local_170 = 0xffffffffffffffff;
      uStack_168 = 0xffffffffffffffff;
      plVar17 = *(longlong **)(*(longlong *)(lVar20 + 0x80) + 8);
      puVar11 = puVar16 + 10;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar1,0x58);
        puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 10;
      }
      *puVar1 = (ulonglong)puVar11;
      *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
      **(undefined8 **)(lVar14 + 8) = puVar16;
      *(undefined8 **)(lVar14 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar16 + 2) = (undefined4)local_180;
      *(undefined4 *)((longlong)puVar16 + 0x14) = local_180._4_4_;
      *(undefined4 *)(puVar16 + 3) = (undefined4)uStack_178;
      *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_178._4_4_;
      *(undefined4 *)(puVar16 + 4) = (undefined4)local_170;
      *(undefined4 *)((longlong)puVar16 + 0x24) = local_170._4_4_;
      *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_168;
      *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_168._4_4_;
      *(undefined4 *)(puVar16 + 6) = (undefined4)local_160;
      *(undefined4 *)((longlong)puVar16 + 0x34) = local_160._4_4_;
      *(undefined4 *)(puVar16 + 7) = (undefined4)uStack_158;
      *(undefined4 *)((longlong)puVar16 + 0x3c) = uStack_158._4_4_;
      puVar16[8] = plVar17;
      puVar16[9] = plVar17;
      lVar20 = (**(code **)(*plVar17 + 8))(plVar17);
      if ((lVar20 == 0) && (lVar20 = (**(code **)(*(longlong *)puVar16[8] + 0x18))(), lVar20 == 0))
      {
        (**(code **)(*(longlong *)puVar16[8] + 0x20))();
      }
      lVar20 = (**(code **)(*(longlong *)puVar16[9] + 8))();
      if ((lVar20 == 0) && (lVar20 = (**(code **)(*(longlong *)puVar16[9] + 0x18))(), lVar20 == 0))
      {
        (**(code **)(*(longlong *)puVar16[9] + 0x20))();
      }
    }
  }
  return;
}



// FUNCTION 141b02490 FUN_141b02490 body=2175 status=ok
// SIG undefined FUN_141b02490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b02490(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  undefined1 auStack_248 [32];
  float local_228;
  float local_220;
  float local_218;
  float local_210;
  float local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  ulonglong local_1d8;
  int local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  int iStack_18c;
  longlong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined4 local_128;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  bVar8 = false;
  bVar7 = false;
  local_1d8 = local_1d8 & 0xffffffff00000000;
  local_1c8 = param_2;
  local_198 = param_1;
  lVar11 = FSceneRenderTargets::Get(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x30);
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar18 + 1;
  local_148 = *(undefined8 *)(*(longlong *)(lVar11 + 0x60) + 0x10);
  local_188 = lVar11;
  if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(puVar1,0x10);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar18 + 1;
  }
  *puVar1 = (ulonglong)puVar14;
  *puVar18 = local_148;
  puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar15 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(puVar1,0x30);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar15 + 5;
  }
  *puVar1 = (ulonglong)puVar14;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar15;
  *(undefined8 **)(param_2 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar15 + 2) = 1;
  puVar15[3] = puVar18;
  *(undefined4 *)(puVar15 + 4) = 0;
  *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
  FUN_141cdd8b0(lVar11,param_2);
  local_220 = (float)CONCAT31(local_220._1_3_,1);
  local_150 = 0;
  local_228 = 0.0;
  FUN_141ad74f0(param_2,*(undefined8 *)(*(longlong *)(lVar11 + 0x88) + 8),0,0);
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
  FUN_14049afe0(param_2);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_118 = DAT_1464c2720;
  local_1d0 = 0;
  lVar16 = param_2;
  if (0 < (int)param_1[0x19]) {
    local_1c0 = 0;
    plVar19 = local_198;
    plVar21 = local_198;
    do {
      local_1a0 = param_1[0x18];
      local_140 = &DAT_146b09c50;
      local_138 = 0;
      lVar11 = *(longlong *)(local_1a0 + 0x3090 + local_1c0);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar11 + 0x38,&local_1b8,&local_140);
      if (local_1b8 == -1) {
        lVar16 = 0;
      }
      else {
        lVar16 = (longlong)local_1b8 * 0x20 + *(longlong *)(lVar11 + 0x38);
      }
      plVar12 = (longlong *)0x0;
      local_128 = 0;
      plVar17 = (longlong *)(lVar16 + 0x10);
      if (lVar16 == 0) {
        plVar17 = plVar12;
      }
      local_130 = &DAT_146a10430;
      lVar6 = *plVar17;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar11 + 0x38,&local_1b4,&local_130);
      plVar17 = plVar12;
      if (local_1b4 != -1) {
        plVar17 = (longlong *)((longlong)local_1b4 * 0x20 + *(longlong *)(lVar11 + 0x38));
      }
      plVar20 = plVar17 + 2;
      if (plVar17 == (longlong *)0x0) {
        plVar20 = plVar12;
      }
      lVar11 = *plVar20;
      if (lVar6 == 0) {
        bVar7 = true;
        plVar19 = plVar12;
      }
      else {
        lVar16 = *(longlong *)(lVar6 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        plVar12 = *(longlong **)(lVar16 + 0x38);
      }
      plVar17 = (longlong *)0x0;
      plStack_110 = plVar12;
      if ((bVar7) && (bVar7 = false, plVar19 != (longlong *)0x0)) {
        LOCK();
        plVar12 = plVar19 + 1;
        lVar16 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          if (((char)plVar19[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
            LOCK();
            bVar22 = *(int *)((longlong)plVar19 + 0xc) == 0;
            if (bVar22) {
              *(int *)((longlong)plVar19 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar22) {
              uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
              plVar12 = plVar17;
              if (uVar10 != 0) {
                plVar12 = (longlong *)
                          ((&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18);
              }
              plVar12[1] = (longlong)plVar19;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar19)(plVar19,1);
          }
        }
      }
      if (lVar11 == 0) {
        bVar8 = true;
        local_f8 = 0;
      }
      else {
        lVar16 = *(longlong *)(lVar11 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        local_f8 = *(undefined8 *)(lVar16 + 0x40);
        plVar17 = plVar21;
      }
      lVar16 = 0;
      if ((bVar8) && (bVar8 = false, plVar17 != (longlong *)0x0)) {
        LOCK();
        plVar21 = plVar17 + 1;
        lVar13 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          if (((char)plVar17[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
            LOCK();
            bVar22 = *(int *)((longlong)plVar17 + 0xc) == 0;
            if (bVar22) {
              *(int *)((longlong)plVar17 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar22) {
              uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar10 != 0) {
                lVar16 = (&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18;
              }
              *(longlong **)(lVar16 + 8) = plVar17;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*plVar17)(plVar17,1);
          }
        }
      }
      local_cc = local_cc & 0xffffffff00000000;
      FUN_141ed6ac0(local_1c8,&local_118,2,1);
      lVar16 = *(longlong *)(lVar11 + 0x48);
      local_1d8 = *(undefined8 *)(local_1c0 + 0x20 + local_1a0);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      FUN_141aa9590(lVar11,local_1c8,*(undefined8 *)(lVar16 + 0x40),local_1d8);
      lVar13 = FSceneRenderTargets::Get(local_1c8);
      lVar16 = *(longlong *)(lVar11 + 0x48);
      local_1a8 = *(undefined8 *)(lVar13 + 0x78);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      local_1d8 = *(undefined8 *)(lVar16 + 0x40);
      if (*(short *)(lVar11 + 0xc2) != 0) {
        uVar2 = *(ushort *)(lVar11 + 0xc0);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar18 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
          FMemStackBase::AllocateNewChunk(puVar1);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar18 + 5;
        }
        *puVar1 = (ulonglong)puVar14;
        *(int *)(local_1c8 + 0x14) = *(int *)(local_1c8 + 0x14) + 1;
        **(undefined8 **)(local_1c8 + 8) = puVar18;
        *(undefined8 **)(local_1c8 + 8) = puVar18 + 1;
        puVar18[1] = 0;
        *puVar18 = &PTR_LAB_144d8e600;
        puVar18[2] = local_1d8;
        puVar18[4] = local_1a8;
        *(uint *)(puVar18 + 3) = (uint)uVar2;
      }
      lVar16 = local_1c8;
      uVar3 = *(undefined4 *)(local_1c0 + 0x1aac + local_1a0);
      local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(local_1c0 + 0x1aa8 + local_1a0));
      local_1a8 = CONCAT44(local_1a8._4_4_,*(undefined4 *)(local_1c0 + 0x1aa4 + local_1a0));
      local_1b0 = *(undefined4 *)(local_1c0 + 0x1aa0 + local_1a0);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar18 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(puVar1);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar18 + 5;
      }
      lVar11 = local_1c0;
      *puVar1 = (ulonglong)puVar14;
      *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + 1;
      **(undefined8 **)(lVar16 + 8) = puVar18;
      *(undefined8 **)(lVar16 + 8) = puVar18 + 1;
      puVar18[1] = 0;
      *puVar18 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar18 + 2) = local_1b0;
      *(undefined4 *)((longlong)puVar18 + 0x14) = (undefined4)local_1a8;
      *(undefined4 *)((longlong)puVar18 + 0x1c) = (undefined4)local_1d8;
      *(undefined4 *)(puVar18 + 4) = uVar3;
      *(undefined4 *)(puVar18 + 3) = 0;
      *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
      local_1f8 = *(undefined8 *)(local_188 + 0x378);
      iVar4 = *(int *)(local_1a0 + 0x1aa4 + local_1c0);
      iStack_18c = *(int *)(local_1a0 + 0x1aac + local_1c0) - iVar4;
      iVar5 = *(int *)(local_1a0 + 0x1aa0 + local_1c0);
      local_190 = *(int *)(local_1a0 + 0x1aa8 + local_1c0) - iVar5;
      local_1e0 = 1;
      local_1e8 = 1;
      local_228 = (float)iStack_18c;
      local_200 = CONCAT44(iStack_18c,local_190);
      local_210 = (float)local_190;
      local_220 = (float)iVar5;
      local_218 = (float)iVar4;
      local_208 = local_228;
      local_1f0 = lVar6;
      DrawRectangle(lVar16);
      local_1d0 = local_1d0 + 1;
      local_1c0 = lVar11 + 0x30d0;
      lVar11 = local_188;
      plVar21 = plVar17;
      param_1 = local_198;
    } while (local_1d0 < (int)local_198[0x19]);
  }
  puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  local_180 = 0xffffffff00000000;
  uStack_178 = 0xffffffffffffffff;
  local_160 = 0xffffffff;
  uStack_158 = 0;
  local_170 = 0xffffffffffffffff;
  uStack_168 = 0xffffffffffffffff;
  plVar19 = *(longlong **)(*(longlong *)(lVar11 + 0x88) + 8);
  puVar14 = puVar18 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(puVar1,0x58);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar18 + 10;
  }
  *puVar1 = (ulonglong)puVar14;
  *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + 1;
  **(undefined8 **)(lVar16 + 8) = puVar18;
  *(undefined8 **)(lVar16 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar18 + 2) = (undefined4)local_180;
  *(undefined4 *)((longlong)puVar18 + 0x14) = local_180._4_4_;
  *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_178;
  *(undefined4 *)((longlong)puVar18 + 0x1c) = uStack_178._4_4_;
  *(undefined4 *)(puVar18 + 4) = (undefined4)local_170;
  *(undefined4 *)((longlong)puVar18 + 0x24) = local_170._4_4_;
  *(undefined4 *)(puVar18 + 5) = (undefined4)uStack_168;
  *(undefined4 *)((longlong)puVar18 + 0x2c) = uStack_168._4_4_;
  *(undefined4 *)(puVar18 + 6) = (undefined4)local_160;
  *(undefined4 *)((longlong)puVar18 + 0x34) = local_160._4_4_;
  *(undefined4 *)(puVar18 + 7) = (undefined4)uStack_158;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = uStack_158._4_4_;
  puVar18[8] = plVar19;
  puVar18[9] = plVar19;
  lVar11 = (**(code **)(*plVar19 + 8))(plVar19);
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar18[8] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar18[8] + 0x20))();
  }
  lVar11 = (**(code **)(*(longlong *)puVar18[9] + 8))();
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar18[9] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar18[9] + 0x20))();
  }
  return;
}



// FUNCTION 141b02d10 FUN_141b02d10 body=198 status=ok
// SIG undefined FUN_141b02d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141b02d10(undefined8 param_1)

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
  local_7c = 0x1000300;
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



// FUNCTION 141b02de0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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



// FUNCTION 141b02eb0 CreateTask body=378 status=ok
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
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144dd56f8;
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



// FUNCTION 141b03030 CreateTask body=378 status=ok
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
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144dd56d0;
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



// FUNCTION 141b031b0 CreateTask body=372 status=ok
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
  *plVar8 = (longlong)&PTR_FUN_144dd55a8;
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



// FUNCTION 141b03330 FUN_141b03330 body=1417 status=ok
// SIG undefined FUN_141b03330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b03330(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_288 [32];
  float local_268;
  float local_260;
  float local_258;
  float local_250;
  float local_248;
  undefined8 local_240;
  undefined8 local_238;
  longlong local_230;
  undefined4 local_228;
  undefined1 local_220;
  undefined4 local_218;
  int local_208 [2];
  int local_200;
  int iStack_1fc;
  int local_1f8 [2];
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  undefined1 local_1b8 [8];
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *plStack_100;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  bVar4 = false;
  local_208[0] = 0;
  local_1c0 = FSceneRenderTargets::Get(param_2[8]);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(local_1c0 + 0x58);
  lVar6 = *(longlong *)(lVar1 + 0x18);
  if (lVar6 != 0) {
    lVar5 = FUN_141ae7a70(lVar1 + 0x19d8);
    lVar6 = FSceneViewState::GetLightPropagationVolume(lVar6,(int)param_2[0xb],0);
    if ((lVar6 != 0) && (*(float *)(lVar5 + 4) != 0.0)) {
      local_1e0 = *(undefined8 *)(lVar2 + 8);
      plVar7 = (longlong *)0x0;
      local_258 = (float)((uint)local_258 & 0xffffff00);
      local_260 = 1.4013e-45;
      local_1e8 = 1;
      local_268 = 0.0;
      FUN_141ad8260(param_2[8],1,&local_1e0,0);
      local_118 = *(undefined8 *)(lVar1 + 0x1aa0);
      uStack_110 = *(undefined8 *)(lVar1 + 0x1aa8);
      FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_118);
      local_c8 = 0;
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
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
      FUN_14049afe0(param_2[8],&local_108);
      local_d8 = FUN_1404a0ce0();
      uStack_d0 = FUN_140985530();
      local_c8 = FUN_1409853f0();
      lVar2 = *(longlong *)(lVar1 + 0x3090);
      local_1b0 = &DAT_146a51f90;
      local_1a8 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar2 + 0x38,local_1f8,&local_1b0);
      plVar9 = plVar7;
      if (local_1f8[0] != -1) {
        plVar9 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar2 + 0x38));
      }
      local_198 = 0;
      plVar10 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      local_1a0 = &DAT_146a0eb70;
      lVar5 = *plVar10;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar2 + 0x38,local_208,&local_1a0);
      plVar9 = plVar7;
      if (local_208[0] != -1) {
        plVar9 = (longlong *)((longlong)local_208[0] * 0x20 + *(longlong *)(lVar2 + 0x38));
      }
      plVar10 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      lVar2 = *plVar10;
      local_108 = DAT_1464c2720;
      if (lVar5 == 0) {
        local_1d8 = 0;
        bVar4 = true;
      }
      else {
        lVar3 = *(longlong *)(lVar5 + 0x48);
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1419f3850(lVar3);
        }
        plVar7 = *(longlong **)(lVar3 + 0x38);
      }
      uVar8 = 0;
      plStack_100 = plVar7;
      if (bVar4) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d8);
      }
      bVar4 = false;
      if (lVar2 == 0) {
        bVar4 = true;
        local_1d0 = 0;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x48);
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1419f3850(lVar3);
        }
        uVar8 = *(undefined8 *)(lVar3 + 0x40);
      }
      local_e8 = uVar8;
      if (bVar4) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d0);
      }
      local_bc = local_bc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2[8],&local_108,2,1);
      local_188 = *(undefined4 *)(lVar6 + 0xb0);
      local_184 = *(undefined4 *)(lVar6 + 0xb4);
      local_180 = *(undefined4 *)(lVar6 + 0xb8);
      local_17c = *(undefined4 *)(lVar6 + 0xbc);
      local_178 = *(undefined4 *)(lVar6 + 0xc0);
      local_174 = *(undefined4 *)(lVar6 + 0xc4);
      local_170 = *(undefined4 *)(lVar6 + 200);
      local_16c = *(undefined4 *)(lVar6 + 0xcc);
      local_168 = *(undefined4 *)(lVar6 + 0xd0);
      local_164 = *(undefined4 *)(lVar6 + 0xd4);
      local_160 = *(undefined4 *)(lVar6 + 0xd8);
      local_15c = *(undefined4 *)(lVar6 + 0xdc);
      local_158 = *(undefined4 *)(lVar6 + 0xe0);
      local_148 = *(undefined8 *)(lVar6 + 0xf0);
      local_140 = *(undefined4 *)(lVar6 + 0xf8);
      local_138 = *(undefined8 *)(lVar6 + 0x100);
      local_130 = *(undefined4 *)(lVar6 + 0x108);
      local_12c = *(undefined4 *)(lVar6 + 0x10c);
      local_128 = *(undefined4 *)(lVar6 + 0x110);
      local_268 = 0.0;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_200,&local_188,&DAT_146a0eaf8);
      lVar3 = CONCAT44(iStack_1fc,local_200);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_200);
      local_1f0 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1f0);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      FUN_141b179b0(lVar2,*(undefined8 *)(*(longlong *)(lVar6 + 0x150) + 0x10),local_1c8,param_2);
      local_200 = *(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0);
      local_238 = *(undefined8 *)(local_1c0 + 0x378);
      iStack_1fc = *(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4);
      local_218 = 0;
      local_220 = *(undefined1 *)((longlong)param_2 + 0x69);
      local_228 = *(undefined4 *)(lVar1 + 0xf60);
      local_268 = (float)iStack_1fc;
      local_240 = CONCAT44(iStack_1fc,local_200);
      local_250 = (float)local_200;
      local_260 = (float)*(int *)(lVar1 + 0x1aa0);
      local_258 = (float)*(int *)(lVar1 + 0x1aa4);
      local_248 = local_268;
      local_230 = lVar5;
      FUN_141ce13a0(param_2[8],0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1b8);
    }
  }
  return;
}



// FUNCTION 141b038c0 FUN_141b038c0 body=450 status=ok
// SIG undefined FUN_141b038c0(void)

void FUN_141b038c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1[0xe] == 0) {
    uVar1 = *(undefined2 *)(param_1 + 10);
    if ((char)uVar1 == '\0') {
      FUN_141ae6c30(*param_1,param_1[1],param_1[2],uVar1,param_1 + 3,param_1[0xb],param_1[0xc],0);
    }
    else {
      FUN_141ae70d0(*param_1,param_1[1],param_1[0xf],uVar1,param_1 + 3,0,0,param_1 + 0xf,
                    *(undefined4 *)(param_1 + 0xd),*(undefined4 *)((longlong)param_1 + 0x6c),1);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xd);
    uVar5 = (ulonglong)iVar2;
    iVar8 = *(int *)((longlong)param_1 + 0x6c);
    if (iVar2 <= iVar8) {
      uVar6 = uVar5;
      if (iVar8 < iVar2) goto LAB_141b03929;
      do {
        psVar3 = (short *)(*(longlong *)param_1[0xe] + uVar6 * 2);
        do {
          if (*psVar3 != 0) break;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          uVar6 = uVar6 + 1;
          psVar3 = psVar3 + 1;
        } while ((longlong)uVar6 <= (longlong)iVar8);
LAB_141b03929:
        uVar4 = (uint)uVar5;
        if ((int)uVar4 <= iVar8) {
          uVar5 = uVar5 & 0xffffffff;
          uVar7 = uVar4;
          if ((int)uVar4 < iVar8) {
            psVar3 = (short *)(*(longlong *)param_1[0xe] + 2 + uVar6 * 2);
            do {
              uVar7 = (uint)uVar5;
              if (*psVar3 == 0) break;
              uVar7 = uVar7 + 1;
              uVar5 = (ulonglong)uVar7;
              uVar6 = uVar6 + 1;
              psVar3 = psVar3 + 1;
            } while ((longlong)uVar6 < (longlong)iVar8);
          }
          uVar1 = *(undefined2 *)(param_1 + 10);
          if ((char)uVar1 == '\0') {
            FUN_141ae6c30(*param_1,param_1[1],param_1[2],uVar1,param_1 + 3,param_1[0xb],param_1[0xc]
                          ,0);
          }
          else {
            FUN_141ae70d0(*param_1,param_1[1],param_1[0xf],uVar1,param_1 + 3,0,0,param_1 + 0xf,uVar4
                          ,uVar7,1);
          }
          iVar8 = *(int *)((longlong)param_1 + 0x6c);
          uVar5 = (ulonglong)(uVar7 + 1);
          uVar6 = uVar6 + 1;
        }
      } while ((int)uVar5 <= iVar8);
    }
  }
  FUN_141ec9240(param_1[1],param_3);
  return;
}



// FUNCTION 141b03a90 FUN_141b03a90 body=450 status=ok
// SIG undefined FUN_141b03a90(void)

void FUN_141b03a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1[0xe] == 0) {
    uVar1 = *(undefined2 *)(param_1 + 10);
    if ((char)uVar1 == '\0') {
      FUN_141ae6e80(*param_1,param_1[1],param_1[2],uVar1,param_1 + 3,param_1[0xb],param_1[0xc],0);
    }
    else {
      FUN_141ae7340(*param_1,param_1[1],param_1[0xf],uVar1,param_1 + 3,0,0,param_1 + 0xf,
                    *(undefined4 *)(param_1 + 0xd),*(undefined4 *)((longlong)param_1 + 0x6c),1);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xd);
    uVar5 = (ulonglong)iVar2;
    iVar8 = *(int *)((longlong)param_1 + 0x6c);
    if (iVar2 <= iVar8) {
      uVar6 = uVar5;
      if (iVar8 < iVar2) goto LAB_141b03af9;
      do {
        psVar3 = (short *)(*(longlong *)param_1[0xe] + uVar6 * 2);
        do {
          if (*psVar3 != 0) break;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          uVar6 = uVar6 + 1;
          psVar3 = psVar3 + 1;
        } while ((longlong)uVar6 <= (longlong)iVar8);
LAB_141b03af9:
        uVar4 = (uint)uVar5;
        if ((int)uVar4 <= iVar8) {
          uVar5 = uVar5 & 0xffffffff;
          uVar7 = uVar4;
          if ((int)uVar4 < iVar8) {
            psVar3 = (short *)(*(longlong *)param_1[0xe] + 2 + uVar6 * 2);
            do {
              uVar7 = (uint)uVar5;
              if (*psVar3 == 0) break;
              uVar7 = uVar7 + 1;
              uVar5 = (ulonglong)uVar7;
              uVar6 = uVar6 + 1;
              psVar3 = psVar3 + 1;
            } while ((longlong)uVar6 < (longlong)iVar8);
          }
          uVar1 = *(undefined2 *)(param_1 + 10);
          if ((char)uVar1 == '\0') {
            FUN_141ae6e80(*param_1,param_1[1],param_1[2],uVar1,param_1 + 3,param_1[0xb],param_1[0xc]
                          ,0);
          }
          else {
            FUN_141ae7340(*param_1,param_1[1],param_1[0xf],uVar1,param_1 + 3,0,0,param_1 + 0xf,uVar4
                          ,uVar7,1);
          }
          iVar8 = *(int *)((longlong)param_1 + 0x6c);
          uVar5 = (ulonglong)(uVar7 + 1);
          uVar6 = uVar6 + 1;
        }
      } while ((int)uVar5 <= iVar8);
    }
  }
  FUN_141ec9240(param_1[1],param_3);
  return;
}



// FUNCTION 141b03c60 FUN_141b03c60 body=86 status=ok
// SIG undefined FUN_141b03c60(void)

undefined8 FUN_141b03c60(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((0x1e < param_1) || ((0x40000015U >> (param_1 & 0x1f) & 1) == 0)) {
    if ((param_1 < 0x1c) &&
       ((((0x8c51800U >> (param_1 & 0x1f) & 1) != 0 && (iVar1 = FUN_1419ef5f0(), 2 < iVar1)) &&
        (uVar2 = RHIGetShaderLanguageVersion(param_1), 1 < uVar2)))) {
      return 1;
    }
    if ((param_1 - 0x14 & 0xfffffff7) != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141b03cc0 FUN_141b03cc0 body=1215 status=ok
// SIG undefined FUN_141b03cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b03cc0(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  float param_5,undefined1 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_198 [32];
  float local_178;
  float local_170;
  float local_168;
  float local_160;
  float local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_130;
  int local_128 [2];
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong *plStack_100;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar15 = (longlong *)0x0;
  local_120 = (undefined *)((ulonglong)local_120 & 0xffffffff00000000);
  local_110 = FSceneRenderTargets::Get(param_2);
  FUN_141a19150(param_2,0,*param_3,0);
  lVar2 = *(longlong *)(param_4 + 0x3090);
  local_120 = &DAT_146b09c50;
  local_118 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,local_128,&local_120);
  plVar12 = plVar15;
  if (local_128[0] != -1) {
    plVar12 = (longlong *)((longlong)local_128[0] * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_118 = 0;
  plVar10 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar10 = plVar15;
  }
  local_120 = &DAT_146a10190;
  lVar3 = *plVar10;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,local_128,&local_120);
  plVar12 = plVar15;
  if (local_128[0] != -1) {
    plVar12 = (longlong *)((longlong)local_128[0] * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar10 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar10 = plVar15;
  }
  lVar2 = *plVar10;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
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
  local_d8 = FUN_141b08790();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_141a15460();
  local_108 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_120 = (undefined *)0x0;
    plVar12 = (longlong *)0x1;
    plStack_100 = plVar15;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_100 = *(longlong **)(lVar4 + 0x38);
    plVar12 = plVar15;
  }
  uVar6 = 0;
  if (plVar12 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_120);
  }
  bVar5 = false;
  if (lVar2 == 0) {
    bVar5 = true;
    local_120 = (undefined *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_e8 = uVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_120);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_2,&local_108,2,1);
  FUN_141b17150(lVar2,param_2,param_4,param_6);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_128[0] = (int)((float)*(int *)(param_4 + 0x1aa0) * param_5);
  uVar11 = (uint)((float)(*(int *)(param_4 + 0x1aa8) - *(int *)(param_4 + 0x1aa0)) * param_5);
  puVar7 = puVar8 + 5;
  uVar14 = (uint)((float)(*(int *)(param_4 + 0x1aac) - *(int *)(param_4 + 0x1aa4)) * param_5);
  iVar13 = (int)((float)*(int *)(param_4 + 0x1aa4) * param_5);
  local_120 = (undefined *)CONCAT44(local_120._4_4_,iVar13);
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    iVar13 = (int)local_120;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_130 = 1;
  local_138 = 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f59420;
  *(uint *)((longlong)puVar8 + 0x1c) = uVar11 + local_128[0];
  *(uint *)(puVar8 + 4) = uVar14 + iVar13;
  *(int *)(puVar8 + 2) = local_128[0];
  *(int *)((longlong)puVar8 + 0x14) = iVar13;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  iVar13 = *(int *)(param_4 + 0x1aa4);
  iVar1 = *(int *)(param_4 + 0x1aa0);
  local_148 = *(undefined8 *)(local_110 + 0x378);
  local_168 = (float)iVar13;
  local_120 = (undefined *)CONCAT44(uVar14,uVar11);
  local_150 = local_120;
  local_160 = (float)(*(int *)(param_4 + 0x1aa8) - iVar1);
  local_178 = (float)uVar14;
  local_158 = (float)(*(int *)(param_4 + 0x1aac) - iVar13);
  local_170 = (float)iVar1;
  local_140 = lVar3;
  DrawRectangle(param_2,iVar13,iVar1,(float)uVar11);
  local_110 = *param_3;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *puVar8 = local_110;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar9 + 2) = 1;
  puVar9[3] = puVar8;
  *(undefined4 *)(puVar9 + 4) = 0;
  *(undefined1 *)((longlong)puVar9 + 0x24) = 0;
  return;
}



// FUNCTION 141b04180 FUN_141b04180 body=171 status=ok
// SIG undefined FUN_141b04180(void)

void FUN_141b04180(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined1 param_10,undefined1 param_11)

{
  int iVar1;
  longlong local_res18 [2];
  undefined8 local_18;
  undefined4 local_10;
  
  iVar1 = 1;
  if (*(int *)(param_4 + 0x80) != 1) {
    iVar1 = (1 << ((byte)*(int *)(param_4 + 0x80) & 0x1f)) + -1;
  }
  local_18 = *param_3;
  local_res18[0] = (longlong)iVar1;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_141b05620(param_1,param_2,&local_18,param_4,local_res18,param_6,param_5,param_7,param_8,
                param_9,param_10,param_11);
  return;
}



// FUNCTION 141b04230 FUN_141b04230 body=3037 status=ok
// SIG undefined FUN_141b04230(void)

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_141b04230(undefined8 param_1,longlong *param_2,int *param_3,longlong param_4,ulonglong *param_5,
             longlong param_6,undefined8 param_7,longlong param_8,undefined8 param_9,
             undefined4 param_10,char param_11,undefined1 param_12)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong local_res20;
  ulonglong *puVar17;
  ulonglong uVar18;
  undefined8 in_stack_fffffffffffffd90;
  undefined4 uVar19;
  ulonglong local_248;
  longlong *local_240;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  longlong local_220;
  uint local_218 [2];
  uint local_210 [2];
  ulonglong local_208;
  longlong local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [8];
  undefined8 local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  char local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined *local_110;
  undefined4 local_108;
  undefined1 local_f8 [8];
  longlong local_f0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffd90 >> 0x20);
  bVar3 = false;
  local_res20 = local_res20 & 0xffffffff00000000;
  if ((((*(byte *)(param_4 + 0x8c) & 0x80) == 0) && ((char)param_3[2] != '\0')) && (*param_3 != 3))
  {
    return 0;
  }
  local_240 = (longlong *)0x0;
  plVar9 = *(longlong **)(param_4 + 0xa8);
  (**(code **)(*plVar9 + 0x40))(plVar9,(int)param_2[0x347],local_78,&local_240);
  plVar4 = local_240;
  iVar7 = (**(code **)(*local_240 + 0x1e8))(local_240);
  if (iVar7 == 0) {
    cVar6 = (**(code **)(**(longlong **)(param_4 + 0xa0) + 0x50))();
    if (((cVar6 != '\0') && (cVar6 = FUN_14259cbc0(plVar4), cVar6 == '\0')) &&
       (cVar6 = FUN_141b196e0(plVar4), cVar6 != '\0')) {
      plVar9 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2a8))(plVar9,0,0);
      uVar8 = *(uint *)(param_4 + 0x8c);
      local_res20 = CONCAT44(uVar8 >> 0xc,
                             ((uVar8 >> 0x13 & 0x80 | uVar8 & 0x100) >> 2 | uVar8 & 0x10) >> 4 |
                             uVar8 & 8) & 0x3fffffffff;
      local_230 = local_res20;
      cVar6 = (**(code **)(*plVar4 + 0xb8))();
      local_230 = CONCAT44(local_230._4_4_,(uint)local_230 | -(uint)(cVar6 != '\0') & 4);
      cVar6 = (**(code **)(*plVar4 + 0x88))(plVar4);
      if (((cVar6 == '\0') || (uVar8 = (**(code **)(*plVar4 + 0x1e8))(plVar4), 1 < uVar8)) ||
         (cVar6 = (**(code **)(*plVar4 + 200))(plVar4), cVar6 != '\0')) {
        uVar8 = 0x10;
      }
      else {
        uVar8 = 0;
      }
      puVar16 = (undefined8 *)0x0;
      local_230._0_4_ = (uint)local_230 | uVar8;
      cVar6 = (**(code **)(*plVar4 + 0x90))();
      local_238 = 0;
      local_230 = CONCAT44(local_230._4_4_,(uint)local_230 | -(uint)(cVar6 != '\0') & 0x20);
      (**(code **)(*plVar9 + 0x40))(plVar9,(int)param_2[0x347],local_70,&local_238);
      puVar17 = &local_230;
      FUN_141afa9e0(local_f8,*(undefined8 *)(param_4 + 0xa0),plVar9,local_238,puVar17);
      local_108 = 0;
      local_110 = &DAT_1469f8530;
      lVar10 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x38,&local_res20,&local_110);
      puVar15 = puVar16;
      if ((int)local_res20 != -1) {
        puVar15 = (undefined8 *)((longlong)(int)local_res20 * 0x20 + *(longlong *)(lVar10 + 0x38));
      }
      puVar11 = puVar15 + 2;
      if (puVar15 == (undefined8 *)0x0) {
        puVar11 = puVar16;
      }
      local_b0 = (longlong *)*puVar11;
      local_140 = *(undefined8 *)(param_6 + 8);
      local_138 = *(undefined4 *)(param_6 + 0x10);
      local_130 = *(longlong *)(param_6 + 0x18);
      if (local_130 != 0) {
        LOCK();
        *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
        UNLOCK();
      }
      local_128 = *(undefined8 *)(param_6 + 0x20);
      local_118 = *(undefined4 *)(param_6 + 0x30);
      local_120 = *(undefined4 *)(param_6 + 0x28);
      local_11c = *(undefined4 *)(param_6 + 0x2c);
      local_114 = 0;
      local_148 = FUN_1404a0ce0();
      local_1f8 = 0;
      local_200 = 0;
      local_208 = 0;
      local_60 = *(undefined8 *)(local_f0 + 0x650);
      local_150 = 0;
      lVar10 = *(longlong *)(local_b8 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      local_58 = *(undefined8 *)(lVar10 + 0x38);
      local_50 = 0;
      uStack_48 = 0;
      local_38 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_208);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_200);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1f8);
      lVar10 = local_b0[9];
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      local_40 = *(undefined8 *)(lVar10 + 0x40);
      FUN_141a9adc0(param_1,local_f8,&local_148,&local_60);
      local_res20 = CONCAT71(CONCAT61(local_res20._2_6_,param_12),param_11);
      uVar18 = CONCAT62((int6)((ulonglong)puVar17 >> 0x10),(undefined2)local_res20);
      FUN_141b184b0(local_f8,param_1,&local_148,param_2,uVar18,CONCAT44(uVar19,param_10));
      local_res20 = local_res20 & 0xffffffff00000000;
      local_248 = 0;
      local_238 = *param_5;
      do {
        uVar8 = 0;
        iVar7 = (int)puVar16;
        local_208 = local_238;
        if ((local_238 & 1) != 0) {
          if (param_11 == '\0') {
LAB_141b04654:
            local_240 = (longlong *)CONCAT44(local_240._4_4_,1);
          }
          else {
            local_240 = (longlong *)CONCAT44(local_240._4_4_,2);
            lVar10 = *(longlong *)(param_4 + 0x78);
            if (*(longlong *)(param_4 + 0x78) == 0) {
              lVar10 = param_4;
            }
            if (*(char *)(lVar10 + 0x67 + local_248) == '\0') goto LAB_141b04654;
          }
          local_1f8 = (longlong)(int)puVar16 * 0x78;
          do {
            lVar10 = local_b8;
            local_218[0] = uVar8;
            if (*(short *)(local_b8 + 0x154) != 0) {
              lVar12 = *(longlong *)(local_b8 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              FUN_1404986d0(param_1,*(undefined8 *)(lVar12 + 0x38),lVar10 + 0x150,local_218,
                            uVar18 & 0xffffffff00000000);
            }
            lVar5 = local_b8;
            lVar10 = *(longlong *)(local_b8 + 0x48);
            lVar12 = *(longlong *)(param_4 + 0x78);
            local_200 = local_f0;
            if (*(char *)(lVar10 + 0x28) == '\0') {
              FUN_1419f3850();
            }
            if (lVar12 == 0) {
              lVar12 = param_4;
            }
            plVar9 = param_2;
            FUN_141d84f90(lVar5,param_1,*(undefined8 *)(lVar10 + 0x38),local_200,param_2,param_8,
                          lVar12 + local_1f8,param_6,0);
            uVar19 = (undefined4)((ulonglong)plVar9 >> 0x20);
            (**(code **)(*local_b0 + 0x30))
                      (local_b0,param_1,((longlong)(int)param_2[0x34b] + 3) * 0x10 + param_8,1);
            uVar18 = CONCAT44(uVar19,(int)local_res20);
            FUN_141b315b0(local_f8,param_1,param_2,param_4,uVar18,param_11);
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)local_240);
          iVar7 = (int)local_res20;
        }
        local_238 = local_238 >> 1;
        puVar16 = (undefined8 *)(ulonglong)(iVar7 + 1U);
        local_248 = local_248 + 0x78;
        local_res20 = CONCAT44(local_res20._4_4_,iVar7 + 1U);
      } while (1 < local_208);
      plVar9 = &local_130;
      goto LAB_141b04dde;
    }
  }
  else if ((iVar7 != 1) && (cVar6 = (**(code **)(*plVar4 + 0x38))(plVar4), cVar6 == '\0')) {
    return 0;
  }
  cVar6 = FUN_141b196e0(plVar4);
  if ((cVar6 == '\0') || (cVar6 = (**(code **)(*plVar4 + 0x38))(plVar4), cVar6 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (*param_3 == 1) {
    if (bVar2) {
      return 0;
    }
LAB_141b04813:
    cVar6 = FUN_14259cbc0(plVar4);
    if (cVar6 == '\0') {
      plVar9 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2a8))(plVar9,0,0);
    }
  }
  else if (!bVar2) goto LAB_141b04813;
  uVar8 = *(uint *)(param_4 + 0x8c);
  local_res20 = CONCAT44(uVar8 >> 0xc,
                         ((uVar8 >> 0x13 & 0x80 | uVar8 & 0x100) >> 2 | uVar8 & 0x10) >> 4 |
                         uVar8 & 8) & 0x3fffffffff;
  local_248 = local_res20;
  cVar6 = (**(code **)(*plVar4 + 0x28))(plVar4);
  local_248 = CONCAT44(local_248._4_4_,(uint)local_248 | cVar6 != '\0');
  cVar6 = (**(code **)(*plVar4 + 0x88))(plVar4);
  if (((cVar6 == '\0') || (uVar8 = (**(code **)(*plVar4 + 0x1e8))(plVar4), 1 < uVar8)) ||
     (cVar6 = (**(code **)(*plVar4 + 200))(plVar4), cVar6 != '\0')) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = 0;
  }
  local_248._0_4_ = (uint)local_248 | uVar8;
  cVar6 = (**(code **)(*plVar4 + 0x90))();
  lVar10 = param_2[0x347];
  local_228 = 0;
  local_248 = CONCAT44(local_248._4_4_,(uint)local_248 | -(uint)(cVar6 != '\0') & 0x20);
  (**(code **)(*plVar9 + 0x40))(plVar9,(int)lVar10,local_68,&local_228);
  FUN_141af9ed0(local_1e8,*(undefined8 *)(param_4 + 0xa0),plVar9,local_228,&local_248,
                CONCAT44(uVar19,(int)lVar10));
  local_180 = *(undefined8 *)(param_6 + 8);
  local_178 = *(undefined4 *)(param_6 + 0x10);
  local_170 = *(longlong *)(param_6 + 0x18);
  if (local_170 != 0) {
    LOCK();
    *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
    UNLOCK();
  }
  local_168 = *(longlong *)(param_6 + 0x20);
  local_158 = *(undefined4 *)(param_6 + 0x30);
  local_160 = *(undefined4 *)(param_6 + 0x28);
  local_15c = *(undefined4 *)(param_6 + 0x2c);
  local_154 = 0;
  local_188 = FUN_1404a0ce0();
  if (local_1a0 == 0) {
    uVar13 = 0;
    local_220 = 0;
    bVar3 = true;
  }
  else {
    lVar10 = *(longlong *)(local_1a0 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    uVar13 = *(undefined8 *)(lVar10 + 0x50);
  }
  bVar2 = false;
  uVar14 = 0;
  if (local_1a8 == 0) {
    bVar2 = true;
    local_1f0 = 0;
  }
  else {
    lVar10 = *(longlong *)(local_1a8 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    uVar14 = *(undefined8 *)(lVar10 + 0x48);
  }
  lVar10 = local_190[9];
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  local_res20 = *(ulonglong *)(lVar10 + 0x40);
  lVar10 = *(longlong *)(local_198 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  uVar1 = *(undefined8 *)(lVar10 + 0x38);
  puVar15 = (undefined8 *)FUN_141b34160(local_1e8);
  local_a8 = *puVar15;
  local_88 = local_res20;
  local_80 = 0;
  local_a0 = uVar1;
  local_98 = uVar14;
  local_90 = uVar13;
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1f0);
  }
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_220);
  }
  FUN_141a9adc0(param_1,local_1e8,&local_188,&local_a8);
  plVar9 = param_2;
  FUN_141b15f20(local_198,param_1,local_1d8,local_1d0,param_2,&local_188,param_11,param_12,param_10)
  ;
  if ((local_1a8 != 0) && (local_1a0 != 0)) {
    FUN_141ad6a40(local_1a8,param_1,local_1d8,param_2,&local_170,local_168);
    plVar9 = &local_170;
    FUN_141ad69a0(local_1a0,param_1,local_1d8,param_2,plVar9,local_168);
  }
  plVar4 = local_190;
  if (local_1b0 != '\0') {
    lVar10 = local_190[9];
    local_res20 = local_1d8;
    local_220 = local_168;
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    FUN_141aa87d0(plVar4,param_1,*(undefined8 *)(lVar10 + 0x40),local_res20,local_1d0,param_2,
                  &local_170,local_220);
    plVar9 = local_1d0;
  }
  uVar18 = CONCAT71((int7)((ulonglong)plVar9 >> 8),param_11);
  FUN_141b45c10(local_1e8,param_1,&local_188,param_2,uVar18);
  iVar7 = 0;
  local_res20 = local_res20 & 0xffffffff00000000;
  local_238 = 0;
  local_228 = *param_5;
  do {
    uVar8 = 0;
    local_1f0 = local_228;
    if ((local_228 & 1) != 0) {
      if (param_11 == '\0') {
LAB_141b04c25:
        local_240 = (longlong *)CONCAT44(local_240._4_4_,1);
      }
      else {
        local_240 = (longlong *)CONCAT44(local_240._4_4_,2);
        lVar10 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar10 = param_4;
        }
        if (*(char *)(lVar10 + 0x67 + local_238) == '\0') goto LAB_141b04c25;
      }
      local_220 = (longlong)iVar7 * 0x78;
      do {
        lVar10 = local_198;
        local_210[0] = uVar8;
        if (*(short *)(local_198 + 0x154) != 0) {
          lVar12 = *(longlong *)(local_198 + 0x48);
          if (*(char *)(lVar12 + 0x28) == '\0') {
            FUN_1419f3850(lVar12);
          }
          FUN_1404986d0(param_1,*(undefined8 *)(lVar12 + 0x38),lVar10 + 0x150,local_210,
                        uVar18 & 0xffffffff00000000);
        }
        lVar10 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar10 = param_4;
        }
        lVar10 = lVar10 + local_220;
        lVar12 = param_8;
        TDepthOnlyVS<0>::SetMesh(local_198,param_1,local_1e0,param_2,param_8,lVar10,param_6);
        uVar19 = (undefined4)((ulonglong)lVar12 >> 0x20);
        if ((local_1a8 != 0) && (local_1a0 != 0)) {
          FBaseHS::SetMesh(local_1a8,param_1,local_1e0,param_2,param_8,lVar10,param_6);
          lVar12 = param_8;
          FBaseDS::SetMesh(local_1a0,param_1,local_1e0,param_2,param_8,lVar10,param_6);
          uVar19 = (undefined4)((ulonglong)lVar12 >> 0x20);
        }
        if (local_1b0 == '\0') {
          (**(code **)(*local_190 + 0x30))
                    (local_190,param_1,((longlong)(int)param_2[0x34b] + 3) * 0x10 + param_8,1);
        }
        else {
          lVar12 = param_8;
          FUN_141b15880(local_190,param_1,local_1e0,param_2,param_8,lVar10,param_6);
          uVar19 = (undefined4)((ulonglong)lVar12 >> 0x20);
        }
        uVar18 = CONCAT44(uVar19,(int)local_res20);
        FUN_141b315b0(local_1e8,param_1,param_2,param_4,uVar18,param_11);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)local_240);
      iVar7 = (int)local_res20;
    }
    local_228 = local_228 >> 1;
    iVar7 = iVar7 + 1;
    local_238 = local_238 + 0x78;
    local_res20 = CONCAT44(local_res20._4_4_,iVar7);
  } while (1 < local_1f0);
  plVar9 = &local_170;
LAB_141b04dde:
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar9);
  return 1;
}



// FUNCTION 141b04e10 FUN_141b04e10 body=1995 status=ok
// SIG undefined FUN_141b04e10(void)

undefined8
FUN_141b04e10(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
             ulonglong *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  WriteBytesMem *this;
  uchar *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  bool bVar22;
  longlong lVar23;
  undefined8 in_stack_fffffffffffffe50;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  uint local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar19 = (uint)((ulonglong)in_stack_fffffffffffffe50 >> 0x20);
  local_160 = *(longlong **)(param_4 + 0xa8);
  local_b8 = param_8;
  local_168 = 0;
  local_a0 = param_4;
  this = (WriteBytesMem *)
         (**(code **)(*local_160 + 0x48))(local_160,*(undefined4 *)(param_2 + 0x1a38));
  if ((this == (WriteBytesMem *)0x0) ||
     (cVar4 = (**(code **)(*(longlong *)this + 0xa8))(this), cVar4 == '\0')) {
    return 0;
  }
  puVar12 = AK::WriteBytesMem::Bytes(this);
  if (puVar12 == (uchar *)0x0) {
    return 0;
  }
  uVar6 = (**(code **)(*(longlong *)this + 0x2b8))(this);
  uVar7 = FUN_14274f980(param_2);
  iVar8 = FUN_141aff430(uVar7,uVar6);
  if (*(int *)(param_3 + 1) != iVar8) {
    return 0;
  }
  local_150 = *param_7;
  local_148 = param_7[1];
  local_140 = *(undefined4 *)(param_7 + 2);
  local_138 = param_7[3];
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    UNLOCK();
  }
  local_130 = param_7[4];
  local_120 = *(undefined4 *)(param_7 + 6);
  local_128 = *(undefined4 *)(param_7 + 5);
  local_124 = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_11c = 0;
  local_180 = *(longlong **)*param_3;
  cVar4 = (**(code **)(*(longlong *)this + 0x2c8))(this);
  uVar9 = (**(code **)(*(longlong *)this + 0x2b8))(this);
  uVar16 = 7;
  if (cVar4 == '\0') {
    if (uVar9 == 4) {
      uVar9 = 7;
    }
    else if (uVar9 == 9) {
      uVar9 = 10;
    }
  }
  cVar1 = *(char *)(param_3 + 0xf);
  uVar10 = FUN_14274f980(local_180);
  local_170 = (longlong *)CONCAT44(local_170._4_4_,uVar10);
  if ((uVar10 < 0x1e) && ((0x25e2cf88U >> (uVar10 & 0x1f) & 1) != 0)) {
switchD_141b04fe9_caseD_3:
    uVar16 = 6;
  }
  else {
    iVar8 = FUN_1419ef5f0(uVar10);
    if ((((DAT_146ac3ac0 != 0) && (2 < iVar8)) ||
        (cVar5 = FUN_141ee4480((ulonglong)local_170 & 0xffffffff), cVar5 != '\0')) && (uVar9 < 3)) {
      uVar16 = 6;
      goto switchD_141b04fe9_caseD_e;
    }
    switch(uVar9) {
    case 0:
    case 1:
      uVar16 = (uint)(cVar1 == '\0');
      break;
    case 2:
      uVar16 = 5;
      break;
    case 3:
      goto switchD_141b04fe9_caseD_3;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      uVar16 = 4;
      break;
    case 0xc:
      uVar16 = 3 - (cVar1 != '\0');
      break;
    case 0xd:
      uVar16 = 1;
      break;
    case 0xe:
      break;
    default:
      uVar16 = 0xffffffff;
    }
  }
switchD_141b04fe9_caseD_e:
  plVar17 = local_180;
  if (*(uint *)((longlong)param_3 + 0xc) != uVar16) {
    *(uint *)((longlong)param_3 + 0xc) = uVar16;
    FUN_141ad7770(param_3 + 3,uVar16,cVar4);
    local_148 = FUN_141abfb70();
    plVar17 = local_180;
    local_128 = 0;
    local_58 = (undefined4)local_180[0x354];
    uStack_54 = *(undefined4 *)((longlong)local_180 + 0x1aa4);
    uStack_50 = (undefined4)local_180[0x355];
    uStack_4c = *(undefined4 *)((longlong)local_180 + 0x1aac);
    FRenderingCompositePassContext::SetViewportAndCallRHI(*param_3,&local_58,0,0x3f800000);
  }
  if (*(uint *)(param_3 + 2) != uVar9) {
    *(uint *)(param_3 + 2) = uVar9;
    local_150 = FUN_141abc880((int)plVar17[0x347],*(undefined4 *)(param_3 + 1),uVar9,cVar4);
  }
  uVar9 = *(uint *)(param_4 + 0x8c);
  plVar17 = *(longlong **)(param_4 + 0xa0);
  iVar8 = *(int *)(param_2 + 0x1a38);
  local_180 = (longlong *)
              (CONCAT44(uVar9 >> 0xc,uVar9 & 8 | uVar9 >> 6 & 4 | uVar9 >> 0x19 & 2 | uVar9 >> 4 & 1
                       ) & 0x3fffffffff);
  local_b0 = local_180;
  FUN_141b279e0(&local_118,plVar17,local_160,this,&local_b0,(ulonglong)uVar19 << 0x20);
  local_d8 = 0;
  lStack_d0 = 0;
  iVar11 = (**(code **)(*local_100 + 0x178))();
  cVar4 = FUN_141ed13a0((&DAT_1464c9c48)[iVar8]);
  if (cVar4 != '\0') {
    lVar13 = (**(code **)(*plVar17 + 0x40))(plVar17);
    cVar4 = (**(code **)(lVar13 + 0x48))();
    if ((cVar4 != '\0') && (iVar11 != 0)) {
      uVar14 = (**(code **)(*local_110 + 0x40))();
      local_d8 = FUN_1425939a0(this,&DAT_146a0ee10,uVar14,1);
      uVar14 = (**(code **)(*local_110 + 0x40))();
      lStack_d0 = FUN_1425939a0(this,&DAT_146a0ef60,uVar14,1);
    }
  }
  uVar14 = (**(code **)(*plVar17 + 0x40))(plVar17);
  local_e0 = FUN_1425939a0(this,&DAT_146a0ecc0,uVar14,1);
  uVar14 = (**(code **)(*plVar17 + 0x40))(plVar17);
  local_c8 = FUN_1425939a0(this,&DAT_146a0f0b0,uVar14,1);
  local_118 = local_e0;
  if (lStack_d0 == 0) {
    local_178 = (longlong *)0x0;
    uVar19 = 1;
    uVar14 = 0;
  }
  else {
    lVar13 = *(longlong *)(lStack_d0 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar14 = *(undefined8 *)(lVar13 + 0x50);
    uVar19 = local_168;
  }
  if (local_d8 == 0) {
    uVar19 = uVar19 | 2;
    local_158 = 0;
    uVar21 = 0;
  }
  else {
    lVar13 = *(longlong *)(local_d8 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar21 = *(undefined8 *)(lVar13 + 0x48);
  }
  local_a8 = 0;
  lVar13 = *(longlong *)(local_c8 + 0x48);
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  local_160 = *(longlong **)(lVar13 + 0x40);
  lVar13 = *(longlong *)(local_e0 + 0x48);
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  uVar2 = *(undefined8 *)(lVar13 + 0x38);
  puVar15 = (undefined8 *)FUN_141b34160(&local_118);
  local_98 = *puVar15;
  local_78 = local_160;
  local_70 = 0;
  local_90 = uVar2;
  local_88 = uVar21;
  local_80 = uVar14;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  if ((uVar19 & 2) != 0) {
    uVar19 = uVar19 & 0xfffffffd;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  if ((uVar19 & 1) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_178);
  }
  FUN_141a9adc0(param_1,&local_118,&local_150,&local_98);
  FUN_141b45c10(&local_118,param_1,&local_150,param_2,param_10);
  lVar18 = local_e0;
  plVar17 = local_108;
  uVar14 = local_130;
  local_180 = (longlong *)0x0;
  (**(code **)(*local_108 + 0x40))(local_108,*(undefined4 *)(param_2 + 0x1a38),local_68,&local_180);
  lVar13 = *(longlong *)(lVar18 + 0x48);
  local_178 = local_180;
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  FUN_141aa8c40(lVar18,param_1,*(undefined8 *)(lVar13 + 0x38),plVar17,local_178,param_2,&local_138,
                uVar14);
  if ((local_d8 != 0) && (lStack_d0 != 0)) {
    FUN_141ad6a40(local_d8,param_1,local_108,param_2,&local_138,local_130);
    FUN_141ad69a0(lStack_d0,param_1,local_108,param_2,&local_138,local_130);
  }
  lVar18 = local_c8;
  uVar14 = local_130;
  local_170 = (longlong *)0x0;
  (**(code **)(*local_108 + 0x40))(local_108,*(undefined4 *)(param_2 + 0x1a38),local_60,&local_170);
  lVar13 = *(longlong *)(lVar18 + 0x48);
  local_178 = local_170;
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  FUN_141aa87d0(lVar18,param_1,*(undefined8 *)(lVar13 + 0x40),local_108,local_178,param_2,&local_138
                ,uVar14);
  iVar8 = 0;
  uVar20 = *param_5;
  do {
    lVar13 = local_e0;
    if ((uVar20 & 1) != 0) {
      lVar18 = *(longlong *)(param_4 + 0x78);
      if (*(longlong *)(param_4 + 0x78) == 0) {
        lVar18 = param_4;
      }
      lVar3 = *(longlong *)(local_e0 + 0x48);
      lVar18 = lVar18 + (longlong)iVar8 * 0x78;
      local_178 = local_110;
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      lVar23 = param_2;
      FUN_141d84f90(lVar13,param_1,*(undefined8 *)(lVar3 + 0x38),local_178,param_2,local_b8,lVar18,
                    &local_150,0);
      uVar14 = local_b8;
      uVar6 = (undefined4)((ulonglong)lVar23 >> 0x20);
      if ((local_d8 != 0) && (lStack_d0 != 0)) {
        FBaseHS::SetMesh(local_d8,param_1,local_110,param_2,local_b8,lVar18,&local_150);
        FBaseDS::SetMesh(lStack_d0,param_1,local_110,param_2,uVar14,lVar18,&local_150);
        uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      }
      param_4 = local_a0;
      FUN_141b315b0(&local_118,param_1,param_2,local_a0,CONCAT44(uVar6,iVar8),param_10);
    }
    iVar8 = iVar8 + 1;
    bVar22 = 1 < uVar20;
    uVar20 = uVar20 >> 1;
  } while (bVar22);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  return 1;
}



// FUNCTION 141b05620 FUN_141b05620 body=2777 status=ok
// SIG undefined FUN_141b05620(void)

undefined8
FUN_141b05620(undefined8 param_1,longlong param_2,int *param_3,longlong param_4,ulonglong *param_5,
             undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined4 param_10,char param_11,undefined1 param_12)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_res10;
  undefined1 uStackX_11;
  undefined2 uStackX_12;
  undefined8 local_res20;
  ulonglong *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 in_stack_fffffffffffffd90;
  undefined4 uVar17;
  undefined8 in_stack_fffffffffffffd98;
  undefined4 uVar18;
  longlong local_248;
  ulonglong local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  longlong local_218;
  uint local_210 [2];
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_194;
  undefined1 local_188 [8];
  longlong local_180;
  char local_150;
  longlong local_148;
  longlong local_140;
  longlong local_130;
  longlong local_128;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong local_f0;
  longlong local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [64];
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffd90 >> 0x20);
  local_238 = (longlong *)0x0;
  local_230 = *(longlong **)(param_4 + 0xa8);
  (**(code **)(*local_230 + 0x40))(local_230,*(undefined4 *)(param_2 + 0x1a38),local_118,&local_238)
  ;
  plVar12 = local_238;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a15208) && (_Init_thread_header(&DAT_146a15208), DAT_146a15208 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a15200 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BasePassDepthWriteEnabled");
    _Init_thread_footer(&DAT_146a15208);
  }
  if (DAT_146a15200 == (longlong *)0x0) {
LAB_141b056b5:
    bVar2 = false;
  }
  else {
    iVar5 = (**(code **)(*DAT_146a15200 + 0x68))();
    bVar2 = true;
    if (iVar5 != 1) goto LAB_141b056b5;
  }
  if ((((((*(byte *)(param_4 + 0x8c) & 0x80) == 0) && ((char)param_3[2] != '\0')) && (*param_3 != 3)
       ) && (bVar2)) || (iVar5 = (**(code **)(*plVar12 + 0x20))(plVar12), iVar5 == 3)) {
    return 0;
  }
  uVar6 = (**(code **)(*plVar12 + 0x1e8))(plVar12);
  fVar1 = (float)param_3[1];
  local_res20 = CONCAT44(local_res20._4_4_,uVar6);
  uVar7 = *(uint *)(param_4 + 0x8c);
  local_240 = CONCAT44(uVar7 >> 0xc,
                       ((uVar7 >> 0x13 & 0x80 | uVar7 & 0x100) >> 2 | uVar7 & 0x10) >> 4 | uVar7 & 8
                      ) & 0x3fffffffff;
  cVar3 = (**(code **)(*plVar12 + 0x28))(plVar12);
  local_240 = CONCAT44(local_240._4_4_,(uint)local_240 | cVar3 != '\0');
  cVar3 = (**(code **)(*plVar12 + 0x88))(plVar12);
  if (((cVar3 == '\0') || (uVar7 = (**(code **)(*plVar12 + 0x1e8))(plVar12), 1 < uVar7)) ||
     (cVar3 = (**(code **)(*plVar12 + 200))(plVar12), cVar3 != '\0')) {
    local_res10 = 0;
    uVar11 = 0;
    uVar7 = 0x10;
  }
  else {
    local_res10 = 1;
    uVar11 = 1;
    uVar7 = 0;
  }
  local_240._0_4_ = (uint)local_240 | uVar7;
  cVar3 = (**(code **)(*plVar12 + 0x90))();
  local_240._0_4_ = (uint)local_240 | -(uint)(cVar3 != '\0') & 0x20;
  if ((uint)local_res20 == 0) {
    cVar3 = (**(code **)(**(longlong **)(param_4 + 0xa0) + 0x50))();
    if ((((cVar3 != '\0') && (cVar3 = FUN_14259cbc0(plVar12), cVar3 == '\0')) &&
        (cVar3 = FUN_141b196e0(plVar12), cVar3 != '\0')) && (fVar1 == 0.0)) {
      plVar8 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2a8))(plVar8,0,0);
      cVar3 = (**(code **)(*plVar12 + 0xb8))();
      local_res20 = 0;
      local_240._0_4_ = (uint)local_240 | -(uint)(cVar3 != '\0') & 4;
      (**(code **)(*plVar8 + 0x40))(plVar8,*(undefined4 *)(param_2 + 0x1a38),local_110,&local_res20)
      ;
      puVar14 = &local_240;
      FUN_141afa9e0(local_f8,*(undefined8 *)(param_4 + 0xa0),plVar8,local_res20,puVar14);
      local_1c8 = *param_6;
      local_1c0 = param_6[1];
      local_1b8 = *(undefined4 *)(param_6 + 2);
      local_1b0 = param_6[3];
      if (local_1b0 != 0) {
        LOCK();
        *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
        UNLOCK();
      }
      local_1a8 = param_6[4];
      local_198 = *(undefined4 *)(param_6 + 6);
      local_1a0 = *(undefined4 *)(param_6 + 5);
      local_19c = *(undefined4 *)((longlong)param_6 + 0x2c);
      local_194 = 0;
      if (*(char *)((longlong)param_3 + 9) == '\0') {
        uVar4 = (**(code **)(*plVar12 + 0x90))(plVar12);
        puVar14 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar14 >> 8),uVar4);
        FUN_141afd3a0(&local_1c8,param_2,param_8,uVar11,puVar14);
      }
      iVar5 = 0;
      local_248 = 0;
      local_218 = 0;
      local_220 = (longlong *)0x0;
      uVar11 = *(undefined8 *)(local_f0 + 0x650);
      local_1d0 = 0;
      lVar9 = *(longlong *)(local_b8 + 0x48);
      if (*(char *)(lVar9 + 0x28) == '\0') {
        FUN_1419f3850(lVar9);
      }
      local_a0 = *(undefined8 *)(lVar9 + 0x38);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_a8 = uVar11;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_220);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_218);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_248);
      FUN_141a9adc0(param_1,local_f8,&local_1c8,&local_a8);
      uVar15 = CONCAT62((int6)((ulonglong)puVar14 >> 0x10),CONCAT11(param_12,param_11));
      FUN_141b184b0(local_f8,param_1,&local_1c8,param_2,uVar15,CONCAT44(uVar17,param_10));
      local_res10 = 0;
      uStackX_11 = 0;
      uStackX_12 = 0;
      local_230 = (longlong *)0x0;
      local_238 = (longlong *)*param_5;
      do {
        uVar7 = 0;
        local_220 = local_238;
        if (((ulonglong)local_238 & 1) != 0) {
          if (param_11 == '\0') {
LAB_141b05a97:
            local_res20 = CONCAT44(local_res20._4_4_,1);
          }
          else {
            local_res20 = CONCAT44(local_res20._4_4_,2);
            lVar9 = *(longlong *)(param_4 + 0x78);
            if (*(longlong *)(param_4 + 0x78) == 0) {
              lVar9 = param_4;
            }
            if (*(char *)(lVar9 + 0x67 + (longlong)local_230) == '\0') goto LAB_141b05a97;
          }
          local_248 = (longlong)iVar5 * 0x78;
          do {
            lVar9 = local_b8;
            local_210[0] = uVar7;
            if (*(short *)(local_b8 + 0x154) != 0) {
              lVar10 = *(longlong *)(local_b8 + 0x48);
              if (*(char *)(lVar10 + 0x28) == '\0') {
                FUN_1419f3850(lVar10);
              }
              FUN_1404986d0(param_1,*(undefined8 *)(lVar10 + 0x38),lVar9 + 0x150,local_210,
                            uVar15 & 0xffffffff00000000);
            }
            lVar13 = local_b8;
            lVar9 = *(longlong *)(local_b8 + 0x48);
            lVar10 = *(longlong *)(param_4 + 0x78);
            local_218 = local_f0;
            if (*(char *)(lVar9 + 0x28) == '\0') {
              FUN_1419f3850(lVar9);
            }
            if (lVar10 == 0) {
              lVar10 = param_4;
            }
            lVar16 = param_2;
            FUN_141d84f90(lVar13,param_1,*(undefined8 *)(lVar9 + 0x38),local_218,param_2,param_8,
                          lVar10 + local_248,&local_1c8,0);
            uVar15 = CONCAT44((int)((ulonglong)lVar16 >> 0x20),
                              CONCAT22(uStackX_12,CONCAT11(uStackX_11,local_res10)));
            FUN_141b315b0(local_f8,param_1,param_2,param_4,uVar15,param_11);
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)local_res20);
          iVar5 = CONCAT22(uStackX_12,CONCAT11(uStackX_11,local_res10));
        }
        local_238 = (longlong *)((ulonglong)local_238 >> 1);
        iVar5 = iVar5 + 1;
        local_230 = local_230 + 0xf;
        local_res10 = (undefined1)iVar5;
        uStackX_11 = (undefined1)((uint)iVar5 >> 8);
        uStackX_12 = (undefined2)((uint)iVar5 >> 0x10);
      } while ((longlong *)0x1 < local_220);
      plVar12 = &local_1b0;
      goto LAB_141b0606e;
    }
  }
  else if (((uint)local_res20 != 1) &&
          (cVar3 = (**(code **)(*plVar12 + 0x38))(plVar12), cVar3 == '\0')) {
    return 0;
  }
  cVar3 = FUN_141b196e0(plVar12);
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar12 + 0x38))(plVar12), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (*param_3 == 1) {
    if (bVar2) {
      return 0;
    }
LAB_141b05c29:
    cVar3 = FUN_14259cbc0(plVar12);
    plVar8 = local_230;
    if (cVar3 == '\0') {
      plVar8 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2a8))(plVar8,0,0);
    }
  }
  else {
    plVar8 = local_230;
    if (!bVar2) goto LAB_141b05c29;
  }
  uVar6 = *(undefined4 *)(param_2 + 0x1a38);
  local_228 = (longlong *)0x0;
  (**(code **)(*plVar8 + 0x40))(plVar8,uVar6,local_108,&local_228);
  puVar14 = &local_240;
  uVar11 = CONCAT44(uVar17,uVar6);
  FUN_141afa440(local_188,*(undefined8 *)(param_4 + 0xa0),plVar8,local_228,puVar14,uVar11,
                CONCAT44(uVar18,fVar1));
  uVar17 = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_208 = *param_6;
  local_200 = param_6[1];
  local_1f8 = *(undefined4 *)(param_6 + 2);
  local_1f0 = param_6[3];
  if (local_1f0 != 0) {
    LOCK();
    *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
    UNLOCK();
  }
  local_1e8 = param_6[4];
  local_1d8 = *(undefined4 *)(param_6 + 6);
  local_1e0 = *(undefined4 *)(param_6 + 5);
  local_1dc = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_1d4 = 0;
  if (*(char *)((longlong)param_3 + 9) == '\0') {
    uVar4 = (**(code **)(*plVar12 + 0x90))(plVar12);
    puVar14 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar14 >> 8),uVar4);
    FUN_141afd3a0(&local_208,param_2,param_8,local_res10,puVar14);
  }
  uVar11 = FUN_141b08340(local_188,local_78,*(undefined4 *)(param_2 + 0x1a38));
  FUN_141a9adc0(param_1,local_188,&local_208,uVar11);
  uVar15 = CONCAT62((int6)((ulonglong)puVar14 >> 0x10),CONCAT11(param_12,param_11));
  FUN_141b18390(local_188,param_1,&local_208,param_2,uVar15,CONCAT44(uVar17,param_10));
  iVar5 = 0;
  local_res10 = 0;
  uStackX_11 = 0;
  uStackX_12 = 0;
  local_238 = (longlong *)0x0;
  local_228 = (longlong *)*param_5;
  do {
    local_220 = local_228;
    if (((ulonglong)local_228 & 1) != 0) {
      if (param_11 == '\0') {
LAB_141b05df6:
        local_res20 = CONCAT44(local_res20._4_4_,1);
      }
      else {
        local_res20 = CONCAT44(local_res20._4_4_,2);
        lVar9 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar9 = param_4;
        }
        if (*(char *)(lVar9 + 0x67 + (longlong)local_238) == '\0') goto LAB_141b05df6;
      }
      uVar7 = 0;
      local_218 = (longlong)iVar5 * 0x78;
      do {
        lVar10 = local_130;
        lVar9 = local_218;
        local_230 = (longlong *)CONCAT44(local_230._4_4_,uVar7);
        if (*(short *)(local_130 + 0x154) != 0) {
          lVar13 = *(longlong *)(local_130 + 0x48);
          if (*(char *)(lVar13 + 0x28) == '\0') {
            FUN_1419f3850(lVar13);
          }
          FUN_1404986d0(param_1,*(undefined8 *)(lVar13 + 0x38),lVar10 + 0x150,&local_230,
                        uVar15 & 0xffffffff00000000);
        }
        lVar10 = local_130;
        lVar13 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar13 = param_4;
        }
        lVar13 = lVar13 + lVar9;
        local_248 = local_180;
        lVar9 = *(longlong *)(local_130 + 0x48);
        if (*(char *)(lVar9 + 0x28) == '\0') {
          FUN_1419f3850(lVar9);
        }
        lVar16 = param_2;
        FUN_141d84f90(lVar10,param_1,*(undefined8 *)(lVar9 + 0x38),local_248,param_2,param_8,lVar13,
                      &local_208,0);
        lVar9 = local_148;
        uVar17 = (undefined4)((ulonglong)lVar16 >> 0x20);
        if ((local_148 != 0) && (local_140 != 0)) {
          lVar10 = *(longlong *)(local_148 + 0x48);
          local_248 = local_180;
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          FUN_141d84710(lVar9,param_1,*(undefined8 *)(lVar10 + 0x48),local_248,param_2,param_8,
                        lVar13,&local_208,0);
          lVar10 = local_140;
          local_248 = local_180;
          lVar9 = *(longlong *)(local_140 + 0x48);
          if (*(char *)(lVar9 + 0x28) == '\0') {
            FUN_1419f3850(lVar9);
          }
          lVar16 = param_2;
          FUN_141d83e90(lVar10,param_1,*(undefined8 *)(lVar9 + 0x50),local_248,param_2,param_8,
                        lVar13,&local_208,0);
          uVar17 = (undefined4)((ulonglong)lVar16 >> 0x20);
        }
        lVar9 = local_128;
        if (local_150 != '\0') {
          local_248 = local_180;
          lVar10 = *(longlong *)(local_128 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          lVar16 = param_2;
          FUN_141d84bb0(lVar9,param_1,*(undefined8 *)(lVar10 + 0x40),local_248,param_2,param_8,
                        lVar13,&local_208,0);
          uVar17 = (undefined4)((ulonglong)lVar16 >> 0x20);
        }
        uVar15 = CONCAT44(uVar17,CONCAT22(uStackX_12,CONCAT11(uStackX_11,local_res10)));
        FUN_141b315b0(local_188,param_1,param_2,param_4,uVar15,param_11);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)local_res20);
      iVar5 = CONCAT22(uStackX_12,CONCAT11(uStackX_11,local_res10));
    }
    local_228 = (longlong *)((ulonglong)local_228 >> 1);
    iVar5 = iVar5 + 1;
    local_238 = local_238 + 0xf;
    local_res10 = (undefined1)iVar5;
    uStackX_11 = (undefined1)((uint)iVar5 >> 8);
    uStackX_12 = (undefined2)((uint)iVar5 >> 0x10);
  } while ((longlong *)0x1 < local_220);
  plVar12 = &local_1f0;
LAB_141b0606e:
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar12);
  return 1;
}



// FUNCTION 141b06100 FUN_141b06100 body=331 status=ok
// SIG undefined FUN_141b06100(void)

void FUN_141b06100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a14df8) && (_Init_thread_header(&DAT_146a14df8), DAT_146a14df8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.CustomColor");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a14df0 = lVar4;
    _Init_thread_footer(&DAT_146a14df8);
  }
  lVar4 = DAT_146a14df0;
  if (DAT_146a14df0 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    if (*(int *)(lVar5 + lVar4) != 0) {
      FUN_141af8b40(param_2,param_3,param_4,param_5,param_1);
      return;
    }
  }
  FUN_141af9390(param_2,param_3,param_4,param_5,param_1);
  return;
}



// FUNCTION 141b06250 FUN_141b06250 body=224 status=ok
// SIG undefined FUN_141b06250(void)

void FUN_141b06250(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,undefined1 param_11)

{
  longlong *local_res10;
  undefined1 local_res18 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  local_res10 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
            (*(longlong **)(param_4 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_res18,
             &local_res10);
  (**(code **)(*local_res10 + 0x1f8))();
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  FUN_141b05620(param_1,param_2,&local_28,param_4,param_5,param_7,param_6,param_8,param_9,0,param_10
                ,param_11);
  return;
}



// FUNCTION 141b06330 FUN_141b06330 body=219 status=ok
// SIG undefined FUN_141b06330(void)

undefined1 FUN_141b06330(void)

{
  undefined1 uVar1;
  longlong in_R9;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_30 = *(longlong *)(in_R9 + 0x18);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = *(undefined8 *)(in_R9 + 0x20);
  local_18 = *(undefined4 *)(in_R9 + 0x30);
  local_20 = *(undefined4 *)(in_R9 + 0x28);
  local_1c = *(undefined4 *)(in_R9 + 0x2c);
  local_14 = 0;
  uVar1 = FUN_141ae6c30();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
  return uVar1;
}



// FUNCTION 141b06410 FUN_141b06410 body=206 status=ok
// SIG undefined FUN_141b06410(void)

undefined1
FUN_141b06410(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_48 = *param_4;
  local_40 = param_4[1];
  local_38 = *(undefined4 *)(param_4 + 2);
  local_30 = param_4[3];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_4[4];
  local_18 = *(undefined4 *)(param_4 + 6);
  local_20 = *(undefined4 *)(param_4 + 5);
  local_1c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_14 = 0;
  uVar1 = FUN_141ae70d0(local_18,param_2,*param_3,1,&local_48,0,0,param_3,0,
                        *(int *)(param_1 + 0x38) + -1,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
  return uVar1;
}



// FUNCTION 141b064e0 FUN_141b064e0 body=2707 status=ok
// SIG undefined FUN_141b064e0(void)

/* WARNING: Removing unreachable block (ram,0x000141b06e48) */
/* WARNING: Removing unreachable block (ram,0x000141b06e55) */
/* WARNING: Removing unreachable block (ram,0x000141b06e61) */

void FUN_141b064e0(longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined2 local_res10 [4];
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
          *plVar26 = (longlong)&PTR__scalar_deleting_destructor__144dd56f8;
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
          FUN_141af9de0(plVar26 + 2,param_1,local_180,*(undefined8 *)(param_6 + 8),local_168,
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
                if (lVar28 <= (longlong)plVar27) goto LAB_141b06ba1;
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
                FUN_141af9de0(*plVar18 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
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
                FUN_141af9de0(*plVar26 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
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
LAB_141b06ba1:
          if (iVar14 <= (int)uVar30) {
            uVar19 = FUN_141d6b6f0(param_6);
            uVar4 = *(undefined8 *)(param_6 + 8);
            plVar17 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_68,0,local_178);
            plVar27 = (longlong *)0x0;
            if (bVar12) {
              plVar27 = plVar31;
            }
            FUN_141af9de0(*plVar17 + 0x10,param_1,uVar19,uVar4,param_6 + 0x18,local_res10,
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



// FUNCTION 141b06f80 FUN_141b06f80 body=2707 status=ok
// SIG undefined FUN_141b06f80(void)

/* WARNING: Removing unreachable block (ram,0x000141b078e8) */
/* WARNING: Removing unreachable block (ram,0x000141b078f5) */
/* WARNING: Removing unreachable block (ram,0x000141b07901) */

void FUN_141b06f80(longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined2 local_res10 [4];
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
          *plVar26 = (longlong)&PTR__scalar_deleting_destructor__144dd56d0;
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
          FUN_141af9de0(plVar26 + 2,param_1,local_180,*(undefined8 *)(param_6 + 8),local_168,
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
        local_108 = &LAB_141afda90;
        local_a8 = &LAB_141afda90;
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
                               *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)plVar17 * 4) * 200
                               + 0xb8 + *(longlong *)(param_1 + 0x40));
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
                if (lVar28 <= (longlong)plVar27) goto LAB_141b07641;
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
                FUN_141af9de0(*plVar18 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
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
                FUN_141af9de0(*plVar26 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
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
LAB_141b07641:
          if (iVar14 <= (int)uVar30) {
            uVar19 = FUN_141d6b6f0(param_6);
            uVar4 = *(undefined8 *)(param_6 + 8);
            plVar17 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_68,0,local_178);
            plVar27 = (longlong *)0x0;
            if (bVar12) {
              plVar27 = plVar31;
            }
            FUN_141af9de0(*plVar17 + 0x10,param_1,uVar19,uVar4,param_6 + 0x18,local_res10,
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



// FUNCTION 141b07a40 FUN_141b07a40 body=277 status=ok
// SIG undefined FUN_141b07a40(void)

void FUN_141b07a40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141b038c0(param_1 + 2,param_3,param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_141591a60(param_1[0x18],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144dd56f8;
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



// FUNCTION 141b07b60 FUN_141b07b60 body=277 status=ok
// SIG undefined FUN_141b07b60(void)

void FUN_141b07b60(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141b03a90(param_1 + 2,param_3,param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_141591a60(param_1[0x18],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144dd56d0;
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



// FUNCTION 141b07c80 ExecuteTask body=288 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FRenderPrepassDynamicDataThreadTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141b14b60(param_1[2],param_1[3],param_1[4],param_1 + 5);
  FUN_141ec9240(param_1[3],param_1 + 0xd);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_141591a60(param_1[0xd],param_2,param_3);
  *param_1 = &PTR_FUN_144dd55a8;
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



// FUNCTION 141b07da0 FindId body=341 status=ok
// SIG undefined FindId(void)

int * TSet<TStaticMeshDrawList<FDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  uint local_res8 [2];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = (longlong *)param_1[8];
    iVar4 = FMeshDrawingPolicy::GetTypeHash(param_3);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar2 = *param_1;
      uVar7 = local_res8[0];
      do {
        lVar1 = (longlong)iVar4 * 0xf0 + lVar2;
        puVar6 = (uint *)FUN_141ac2bf0(lVar1 + 0x20,local_res8,param_3,0);
        uVar7 = (*puVar6 ^ uVar7) & 1 ^ uVar7;
        if ((uVar7 & 1) != 0) {
          bVar8 = *(char *)(lVar1 + 0x58) == *(char *)(param_3 + 0x38);
          uVar7 = (uint)bVar8;
          bVar3 = false;
          if (bVar8) {
            bVar8 = *(longlong *)(lVar1 + 0x78) == *(longlong *)(param_3 + 0x58);
            uVar7 = (uint)bVar8;
            bVar3 = false;
            if (bVar8) {
              bVar8 = *(longlong *)(lVar1 + 0x80) == *(longlong *)(param_3 + 0x60);
              uVar7 = (uint)bVar8;
              bVar3 = false;
              if (bVar8) {
                bVar3 = *(float *)(param_3 + 0x68) == *(float *)(lVar1 + 0x88);
                uVar7 = (uint)bVar3;
              }
            }
          }
          if (bVar3) {
            *param_2 = iVar4;
            return param_2;
          }
        }
        iVar4 = *(int *)((longlong)iVar4 * 0xf0 + 0xe8 + lVar2);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141b07f00 FindId body=241 status=ok
// SIG undefined FindId(void)

int * TSet<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
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
        lVar6 = (longlong)iVar2 * 200;
        puVar4 = (uint *)FUN_141ac2bf0(lVar1 + 0x20 + lVar6,local_res8,param_3,0);
        uVar5 = (*puVar4 ^ uVar5) & 1 ^ uVar5;
        if ((uVar5 & 1) != 0) {
          uVar5 = (uint)(*(longlong *)(lVar6 + 0x60 + lVar1) == *(longlong *)(param_3 + 0x40));
        }
        if ((uVar5 & 1) != 0) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar6 + 0xc0 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141b08000 FUN_141b08000 body=126 status=ok
// SIG undefined FUN_141b08000(void)

void FUN_141b08000(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x2f0) == 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar1) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar1 = puVar2 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar1;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar2;
    *(undefined8 **)(param_2 + 8) = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &PTR_LAB_143f594a0;
  }
  return;
}



// FUNCTION 141b08080 FUN_141b08080 body=697 status=ok
// SIG undefined FUN_141b08080(void)

void FUN_141b08080(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,int param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uchar *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  WriteBytesMem *local_res10;
  undefined1 local_res20 [8];
  undefined *local_38;
  undefined4 local_30;
  
  local_res10 = (WriteBytesMem *)0x0;
  (**(code **)(*param_4 + 0x40))(param_4,*(undefined4 *)(param_2 + 0x1a38),local_res20,&local_res10)
  ;
  local_38 = &DAT_146a0f660;
  local_30 = 0;
  puVar4 = AK::WriteBytesMem::Bytes(local_res10);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(puVar4 + 0x38,&local_res10,&local_38);
  plVar9 = (longlong *)0x0;
  if ((int)local_res10 != -1) {
    plVar9 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(puVar4 + 0x38));
  }
  plVar5 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  lVar1 = *plVar5;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar7;
  *(undefined8 **)(param_1 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e50;
  puVar7[2] = uVar3;
  FUN_141b17480(lVar1,param_1,param_2,param_7,param_8,param_4,param_5,param_6);
  DispatchComputeShader
            (param_1,lVar1,
             (longlong)(param_8 + -1 + DAT_1464c17d4) / (longlong)DAT_1464c17d4 & 0xffffffff,1,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0x110,param_1,uVar3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0x118,param_1,uVar3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0x120,param_1,uVar3);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 1;
  local_res10 = *(WriteBytesMem **)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) + 0x1620) + 0x38
                 );
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *puVar7 = local_res10;
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar8;
  *(undefined8 **)(param_1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  puVar8[3] = puVar7;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
  puVar8[5] = 0;
  return;
}



// FUNCTION 141b08340 FUN_141b08340 body=289 status=ok
// SIG undefined FUN_141b08340(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_141b08340(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong local_res8 [2];
  
  bVar4 = false;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar7 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar7 = *(undefined8 *)(lVar1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_res8[1] = 0;
    uVar8 = 0;
    bVar4 = true;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar8 = *(undefined8 *)(lVar1 + 0x50);
  }
  bVar3 = false;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    bVar3 = true;
    local_res8[0] = 0;
    uVar6 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x48);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  puVar5 = (undefined8 *)FUN_141b34160(param_1);
  param_2[1] = uVar2;
  param_2[2] = uVar6;
  param_2[3] = uVar8;
  *param_2 = *puVar5;
  param_2[4] = uVar7;
  param_2[5] = 0;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8 + 1);
  }
  return param_2;
}



// FUNCTION 141b08470 FUN_141b08470 body=153 status=ok
// SIG undefined FUN_141b08470(void)

undefined8 * FUN_141b08470(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  local_res20 = 0;
  local_res10 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x650);
  local_res8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  param_2[1] = *(undefined8 *)(lVar2 + 0x38);
  *param_2 = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_28);
  return param_2;
}



// FUNCTION 141b08510 FUN_141b08510 body=55 status=ok
// SIG undefined FUN_141b08510(void)

int * FUN_141b08510(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FSceneRenderTargets::Get();
  uVar1 = *(undefined8 *)(lVar2 + 0x378);
  *param_1 = (int)uVar1 / 2;
  param_1[1] = (int)((ulonglong)uVar1 >> 0x20) / 2;
  return param_1;
}



// FUNCTION 141b08550 FUN_141b08550 body=249 status=ok
// SIG undefined FUN_141b08550(void)

void FUN_141b08550(undefined4 param_1,undefined4 *param_2,undefined1 *param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 1;
  *param_3 = 0;
  lVar4 = DAT_146a10000;
  cVar2 = FUN_1415ad720();
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_141b085bb;
    }
  }
  lVar5 = 0;
LAB_141b085bb:
  iVar1 = *(int *)(lVar5 + lVar4);
  if (iVar1 == 0) {
    *param_2 = 0;
  }
  else if (iVar1 == 1) {
    *param_2 = 1;
  }
  else if (iVar1 == 2) {
    *param_2 = 2;
  }
  cVar2 = FUN_141b18ec0(param_1,param_4);
  if (cVar2 != '\0') {
    *param_2 = 3;
    *param_3 = 1;
  }
  if (param_4 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_4 + 0xe0))(param_4);
    if (lVar4 != 0) {
      lVar4 = (**(code **)(*param_4 + 0xe0))(param_4);
      if (*(char *)(lVar4 + 0xce) != '\0') {
        *param_2 = 0;
        *param_3 = 0;
      }
    }
  }
  return;
}



// FUNCTION 141b08650 FUN_141b08650 body=320 status=ok
// SIG undefined FUN_141b08650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b08650(void)

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
  
  if (DAT_146a15368 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09a50;
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
        return *(undefined8 *)(DAT_146a15368 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15368 = 0;
        return _DAT_00000030;
      }
      DAT_146a15368 = FUN_141afb0a0(lVar7);
      return *(undefined8 *)(DAT_146a15368 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141afb0a0(lVar7);
    }
    LOCK();
    if (DAT_146a15368 != 0) {
      lVar7 = DAT_146a15368;
    }
    DAT_146a15368 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15368 + 0x30);
}



// FUNCTION 141b08790 FUN_141b08790 body=320 status=ok
// SIG undefined FUN_141b08790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b08790(void)

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
  
  if (DAT_146a15238 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09a60;
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
        return *(undefined8 *)(DAT_146a15238 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15238 = 0;
        return _DAT_00000030;
      }
      DAT_146a15238 =
           TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15238 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15238 != 0) {
      lVar7 = DAT_146a15238;
    }
    DAT_146a15238 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15238 + 0x30);
}



// FUNCTION 141b088d0 FUN_141b088d0 body=320 status=ok
// SIG undefined FUN_141b088d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b088d0(void)

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
  
  if (DAT_146a15350 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09a70;
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
        return *(undefined8 *)(DAT_146a15350 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15350 = 0;
        return _DAT_00000030;
      }
      DAT_146a15350 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15350 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15350 != 0) {
      lVar7 = DAT_146a15350;
    }
    DAT_146a15350 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15350 + 0x30);
}



// FUNCTION 141b08a10 FUN_141b08a10 body=320 status=ok
// SIG undefined FUN_141b08a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b08a10(void)

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
  
  if (DAT_146a15348 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09a80;
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
        return *(undefined8 *)(DAT_146a15348 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15348 = 0;
        return _DAT_00000030;
      }
      DAT_146a15348 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,2>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15348 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,2>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15348 != 0) {
      lVar7 = DAT_146a15348;
    }
    DAT_146a15348 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15348 + 0x30);
}



// FUNCTION 141b08b50 FUN_141b08b50 body=320 status=ok
// SIG undefined FUN_141b08b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b08b50(void)

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
  
  if (DAT_146a15340 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09a90;
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
        return *(undefined8 *)(DAT_146a15340 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15340 = 0;
        return _DAT_00000030;
      }
      DAT_146a15340 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,4>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15340 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,4>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15340 != 0) {
      lVar7 = DAT_146a15340;
    }
    DAT_146a15340 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15340 + 0x30);
}



// FUNCTION 141b08c90 FUN_141b08c90 body=320 status=ok
// SIG undefined FUN_141b08c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b08c90(void)

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
  
  if (DAT_146a15338 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09aa0;
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
        return *(undefined8 *)(DAT_146a15338 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15338 = 0;
        return _DAT_00000030;
      }
      DAT_146a15338 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15338 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15338 != 0) {
      lVar7 = DAT_146a15338;
    }
    DAT_146a15338 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15338 + 0x30);
}



// FUNCTION 141b08dd0 FUN_141b08dd0 body=320 status=ok
// SIG undefined FUN_141b08dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b08dd0(void)

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
  
  if (DAT_146a15330 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09ab0;
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
        return *(undefined8 *)(DAT_146a15330 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15330 = 0;
        return _DAT_00000030;
      }
      DAT_146a15330 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,16>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15330 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,16>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15330 != 0) {
      lVar7 = DAT_146a15330;
    }
    DAT_146a15330 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15330 + 0x30);
}



// FUNCTION 141b08f10 FUN_141b08f10 body=320 status=ok
// SIG undefined FUN_141b08f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b08f10(void)

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
  
  if (DAT_146a15328 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09ac0;
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
        return *(undefined8 *)(DAT_146a15328 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15328 = 0;
        return _DAT_00000030;
      }
      DAT_146a15328 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,32>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15328 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,32>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15328 != 0) {
      lVar7 = DAT_146a15328;
    }
    DAT_146a15328 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15328 + 0x30);
}



// FUNCTION 141b09050 FUN_141b09050 body=320 status=ok
// SIG undefined FUN_141b09050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b09050(void)

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
  
  if (DAT_146a15320 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09ad0;
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
        return *(undefined8 *)(DAT_146a15320 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15320 = 0;
        return _DAT_00000030;
      }
      DAT_146a15320 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,64>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15320 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,64>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15320 != 0) {
      lVar7 = DAT_146a15320;
    }
    DAT_146a15320 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15320 + 0x30);
}



// FUNCTION 141b09190 FUN_141b09190 body=320 status=ok
// SIG undefined FUN_141b09190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b09190(void)

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
  
  if (DAT_146a15318 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09ae0;
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
        return *(undefined8 *)(DAT_146a15318 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15318 = 0;
        return _DAT_00000030;
      }
      DAT_146a15318 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15318 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15318 != 0) {
      lVar7 = DAT_146a15318;
    }
    DAT_146a15318 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15318 + 0x30);
}



// FUNCTION 141b092d0 FUN_141b092d0 body=320 status=ok
// SIG undefined FUN_141b092d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b092d0(void)

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
  
  if (DAT_146a15358 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09af0;
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
        return *(undefined8 *)(DAT_146a15358 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15358 = 0;
        return _DAT_00000030;
      }
      DAT_146a15358 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15358 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15358 != 0) {
      lVar7 = DAT_146a15358;
    }
    DAT_146a15358 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15358 + 0x30);
}



// FUNCTION 141b09410 FUN_141b09410 body=320 status=ok
// SIG undefined FUN_141b09410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b09410(void)

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
  
  if (DAT_146a15228 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09b00;
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
        return *(undefined8 *)(DAT_146a15228 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15228 = 0;
        return _DAT_00000030;
      }
      DAT_146a15228 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15228 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15228 != 0) {
      lVar7 = DAT_146a15228;
    }
    DAT_146a15228 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15228 + 0x30);
}



// FUNCTION 141b09550 FUN_141b09550 body=320 status=ok
// SIG undefined FUN_141b09550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b09550(void)

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
  
  if (DAT_146a15230 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09b10;
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
        return *(undefined8 *)(DAT_146a15230 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15230 = 0;
        return _DAT_00000030;
      }
      DAT_146a15230 = FUN_141afb940(lVar7);
      return *(undefined8 *)(DAT_146a15230 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141afb940(lVar7);
    }
    LOCK();
    if (DAT_146a15230 != 0) {
      lVar7 = DAT_146a15230;
    }
    DAT_146a15230 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15230 + 0x30);
}



// FUNCTION 141b09690 FUN_141b09690 body=320 status=ok
// SIG undefined FUN_141b09690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b09690(void)

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
  
  if (DAT_146a15220 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09b20;
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
        return *(undefined8 *)(DAT_146a15220 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15220 = 0;
        return _DAT_00000030;
      }
      DAT_146a15220 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15220 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15220 != 0) {
      lVar7 = DAT_146a15220;
    }
    DAT_146a15220 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15220 + 0x30);
}



// FUNCTION 141b097d0 FUN_141b097d0 body=320 status=ok
// SIG undefined FUN_141b097d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b097d0(void)

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
  
  if (DAT_146a15370 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09b30;
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
        return *(undefined8 *)(DAT_146a15370 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15370 = 0;
        return _DAT_00000030;
      }
      DAT_146a15370 = FUN_141afbac0(lVar7);
      return *(undefined8 *)(DAT_146a15370 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141afbac0(lVar7);
    }
    LOCK();
    if (DAT_146a15370 != 0) {
      lVar7 = DAT_146a15370;
    }
    DAT_146a15370 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15370 + 0x30);
}



// FUNCTION 141b09910 FUN_141b09910 body=320 status=ok
// SIG undefined FUN_141b09910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b09910(void)

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
  
  if (DAT_146a15360 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09b40;
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
        return *(undefined8 *)(DAT_146a15360 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a15360 = 0;
        return _DAT_00000030;
      }
      DAT_146a15360 =
           TStaticStateRHI<TStaticSamplerState<1,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a15360 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<1,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a15360 != 0) {
      lVar7 = DAT_146a15360;
    }
    DAT_146a15360 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a15360 + 0x30);
}



// FUNCTION 141b09b50 GetSpacedVectors body=523 status=ok
// SIG undefined GetSpacedVectors(void)

void GetSpacedVectors(uint param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fStack_24;
  
  *(undefined4 *)(param_2 + 0x78) = 0;
  if (*(int *)(param_2 + 0x7c) != 9) {
    TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeTo(param_2);
  }
  uVar6 = 0;
  if (DAT_1464c17b0 == 0) {
    puVar4 = &DAT_1464c1910;
    do {
      iVar5 = *(int *)(param_2 + 0x78);
      *(int *)(param_2 + 0x78) = iVar5 + 1;
      if (*(int *)(param_2 + 0x7c) < iVar5 + 1) {
        TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow(param_2);
      }
      lVar3 = *(longlong *)(param_2 + 0x70);
      if (*(longlong *)(param_2 + 0x70) == 0) {
        lVar3 = param_2;
      }
      uVar6 = uVar6 + 1;
      *(undefined8 *)(lVar3 + (longlong)iVar5 * 0xc) = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar5 * 0xc) = *(undefined4 *)puVar1;
    } while (uVar6 < 9);
  }
  else {
    puVar4 = &DAT_1464c1980;
    do {
      iVar5 = *(int *)(param_2 + 0x78);
      *(int *)(param_2 + 0x78) = iVar5 + 1;
      if (*(int *)(param_2 + 0x7c) < iVar5 + 1) {
        TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow(param_2);
      }
      lVar3 = *(longlong *)(param_2 + 0x70);
      if (*(longlong *)(param_2 + 0x70) == 0) {
        lVar3 = param_2;
      }
      uVar6 = uVar6 + 1;
      *(undefined8 *)(lVar3 + (longlong)iVar5 * 0xc) = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar5 * 0xc) = *(undefined4 *)puVar1;
    } while (uVar6 < 9);
  }
  if (DAT_146a0e8dc != 0) {
    fVar10 = 0.0;
    fVar9 = 0.5;
    param_1 = param_1 & 0x3ff;
    if (param_1 != 0) {
      do {
        uVar6 = param_1 & 0x80000001;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
        }
        param_1 = (int)param_1 / 2;
        fVar7 = (float)(int)uVar6 * fVar9;
        fVar9 = fVar9 * 0.5;
        fVar10 = fVar10 + fVar7;
      } while (0 < (int)param_1);
    }
    uVar8 = __libm_sse2_sincosf_(fVar10 * 6.2831855);
    iVar5 = 0;
    fVar9 = (float)((ulonglong)uVar8 >> 0x20);
    if (0 < *(int *)(param_2 + 0x78)) {
      lVar3 = 0;
      do {
        lVar2 = *(longlong *)(param_2 + 0x70);
        if (*(longlong *)(param_2 + 0x70) == 0) {
          lVar2 = param_2;
        }
        fStack_24 = (float)((ulonglong)*(undefined8 *)(lVar2 + lVar3) >> 0x20);
        fVar10 = (float)*(undefined8 *)(lVar2 + lVar3);
        *(float *)(lVar2 + lVar3) = fVar9 * fVar10 - (float)uVar8 * fStack_24;
        lVar2 = *(longlong *)(param_2 + 0x70);
        if (*(longlong *)(param_2 + 0x70) == 0) {
          lVar2 = param_2;
        }
        iVar5 = iVar5 + 1;
        *(float *)(lVar2 + 4 + lVar3) = fVar9 * fStack_24 + (float)uVar8 * fVar10;
        lVar3 = lVar3 + 0xc;
      } while (iVar5 < *(int *)(param_2 + 0x78));
    }
  }
  return;
}



// FUNCTION 141b09d60 GetStreamOutElements body=121 status=ok
// SIG undefined GetStreamOutElements(void)

void FConvertToUniformMeshGS::GetStreamOutElements
               (undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_141aff4c0();
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar2 << 2;
  FUN_141b09de0(param_1);
  *param_3 = 0xffffffff;
  return;
}



// FUNCTION 141b09de0 FUN_141b09de0 body=646 status=ok
// SIG undefined FUN_141b09de0(void)

void FUN_141b09de0(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uStack_24;
  undefined1 uStack_11;
  
  iVar3 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x300) = iVar3 + 1;
  if (*(int *)(param_1 + 0x304) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar3);
  }
  puVar1 = (undefined4 *)(param_1 + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = uStack_24;
  puVar1[2] = 0x44dcb968;
  puVar1[3] = 1;
  *(ulonglong *)(param_1 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT17(uStack_11,0x40000000000);
  iVar3 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x300) = iVar3 + 1;
  if (*(int *)(param_1 + 0x304) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar3);
  }
  puVar1 = (undefined4 *)(param_1 + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = uStack_24;
  puVar1[2] = 0x44dcb978;
  puVar1[3] = 1;
  *(ulonglong *)(param_1 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT17(uStack_11,0x30000000000);
  iVar3 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x300) = iVar3 + 1;
  if (*(int *)(param_1 + 0x304) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar3);
  }
  puVar1 = (undefined4 *)(param_1 + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = uStack_24;
  puVar1[2] = 0x44dcb980;
  puVar1[3] = 1;
  *(ulonglong *)(param_1 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT17(uStack_11,0x30000000001);
  iVar3 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x300) = iVar3 + 1;
  if (*(int *)(param_1 + 0x304) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar3);
  }
  puVar1 = (undefined4 *)(param_1 + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = uStack_24;
  puVar1[2] = 0x44dcb988;
  puVar1[3] = 1;
  *(ulonglong *)(param_1 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT17(uStack_11,0x30000000002);
  iVar3 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x300) = iVar3 + 1;
  if (*(int *)(param_1 + 0x304) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar3);
  }
  puVar1 = (undefined4 *)(param_1 + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = uStack_24;
  puVar1[2] = 0x44dcb76c;
  puVar1[3] = 1;
  *(ulonglong *)(param_1 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT17(uStack_11,0x20000000000);
  iVar3 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x300) = iVar3 + 1;
  if (*(int *)(param_1 + 0x304) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar3);
  }
  puVar1 = (undefined4 *)(param_1 + (longlong)iVar3 * 0x18);
  *puVar1 = 0;
  puVar1[1] = uStack_24;
  puVar1[2] = 0x44dcb7cc;
  puVar1[3] = 1;
  *(ulonglong *)(param_1 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT17(uStack_11,0x20000000001);
  iVar3 = *(int *)(param_1 + 0x300);
  *(int *)(param_1 + 0x300) = iVar3 + 1;
  if (*(int *)(param_1 + 0x304) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar3);
  }
  plVar2 = (longlong *)(param_1 + (longlong)iVar3 * 0x18);
  *plVar2 = (ulonglong)uStack_24 << 0x20;
  plVar2[1] = (longlong)"COLOR";
  *(ulonglong *)(param_1 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT17(uStack_11,0x40000000000);
  return;
}



// FUNCTION 141b0a070 FUN_141b0a070 body=47 status=ok
// SIG undefined FUN_141b0a070(void)

void FUN_141b0a070(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = FUN_141b02d10(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a0a0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a0d0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x1ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a130 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,2>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x2ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a190 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,4>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x4ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a1f0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x8ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a250 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,16>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x10ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a2b0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,32>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x20ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a310 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,64>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x40ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a370 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0x80ff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a3d0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20200;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a430 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a490 FUN_141b0a490 body=93 status=ok
// SIG undefined FUN_141b0a490(void)

void FUN_141b0a490(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010700;
  local_14 = 0x20202;
  local_10 = 0x2020207;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a4f0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010700;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a550 FUN_141b0a550 body=86 status=ok
// SIG undefined FUN_141b0a550(void)

void FUN_141b0a550(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000700;
  local_10 = 7;
  local_c = 0xff02;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a5b0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<1,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x3030301;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b0a620 IsAsyncComputePass body=27 status=ok
// SIG undefined IsAsyncComputePass(void)

undefined1 FRenderingCompositePass::IsAsyncComputePass(longlong param_1)

{
  if (((*(char *)(param_1 + 10) != '\0') && (*(char *)(param_1 + 0xb) != '\0')) &&
     (DAT_146ab62f0 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141b0a640 FUN_141b0a640 body=55 status=ok
// SIG undefined FUN_141b0a640(void)

ulonglong FUN_141b0a640(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14274f980();
  if ((((int)uVar1 == 0) && (DAT_146a153b0 != 0)) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x10), (*(uint *)(uVar1 + 0x28) & 0x100) != 0)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141b0a6c0 FUN_141b0a6c0 body=137 status=ok
// SIG undefined FUN_141b0a6c0(void)

void FUN_141b0a6c0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0a750 FUN_141b0a750 body=134 status=ok
// SIG undefined FUN_141b0a750(void)

void FUN_141b0a750(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0a7e0 FUN_141b0a7e0 body=137 status=ok
// SIG undefined FUN_141b0a7e0(void)

void FUN_141b0a7e0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",2);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0a870 FUN_141b0a870 body=134 status=ok
// SIG undefined FUN_141b0a870(void)

void FUN_141b0a870(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",2);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0a900 FUN_141b0a900 body=137 status=ok
// SIG undefined FUN_141b0a900(void)

void FUN_141b0a900(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",3);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0a990 FUN_141b0a990 body=134 status=ok
// SIG undefined FUN_141b0a990(void)

void FUN_141b0a990(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",3);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0aa20 FUN_141b0aa20 body=137 status=ok
// SIG undefined FUN_141b0aa20(void)

void FUN_141b0aa20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",4);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0aab0 FUN_141b0aab0 body=134 status=ok
// SIG undefined FUN_141b0aab0(void)

void FUN_141b0aab0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",4);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0ab40 FUN_141b0ab40 body=137 status=ok
// SIG undefined FUN_141b0ab40(void)

void FUN_141b0ab40(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",5);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0abd0 FUN_141b0abd0 body=134 status=ok
// SIG undefined FUN_141b0abd0(void)

void FUN_141b0abd0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",5);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"PIXEL_SHADER",1);
  return;
}



// FUNCTION 141b0ac60 FUN_141b0ac60 body=179 status=ok
// SIG undefined FUN_141b0ac60(void)

void FUN_141b0ac60(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0ad20 FUN_141b0ad20 body=176 status=ok
// SIG undefined FUN_141b0ad20(void)

void FUN_141b0ad20(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0add0 FUN_141b0add0 body=176 status=ok
// SIG undefined FUN_141b0add0(void)

void FUN_141b0add0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0ae80 FUN_141b0ae80 body=173 status=ok
// SIG undefined FUN_141b0ae80(void)

void FUN_141b0ae80(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0af30 FUN_141b0af30 body=179 status=ok
// SIG undefined FUN_141b0af30(void)

void FUN_141b0af30(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",2);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0aff0 FUN_141b0aff0 body=176 status=ok
// SIG undefined FUN_141b0aff0(void)

void FUN_141b0aff0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",2);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b0a0 FUN_141b0b0a0 body=176 status=ok
// SIG undefined FUN_141b0b0a0(void)

void FUN_141b0b0a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",2);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b150 FUN_141b0b150 body=173 status=ok
// SIG undefined FUN_141b0b150(void)

void FUN_141b0b150(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",2);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b200 FUN_141b0b200 body=179 status=ok
// SIG undefined FUN_141b0b200(void)

void FUN_141b0b200(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",3);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b2c0 FUN_141b0b2c0 body=176 status=ok
// SIG undefined FUN_141b0b2c0(void)

void FUN_141b0b2c0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",3);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b370 FUN_141b0b370 body=176 status=ok
// SIG undefined FUN_141b0b370(void)

void FUN_141b0b370(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",3);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b420 FUN_141b0b420 body=173 status=ok
// SIG undefined FUN_141b0b420(void)

void FUN_141b0b420(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",3);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b4d0 FUN_141b0b4d0 body=179 status=ok
// SIG undefined FUN_141b0b4d0(void)

void FUN_141b0b4d0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",4);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b590 FUN_141b0b590 body=176 status=ok
// SIG undefined FUN_141b0b590(void)

void FUN_141b0b590(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",4);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b640 FUN_141b0b640 body=176 status=ok
// SIG undefined FUN_141b0b640(void)

void FUN_141b0b640(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",4);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b6f0 FUN_141b0b6f0 body=173 status=ok
// SIG undefined FUN_141b0b6f0(void)

void FUN_141b0b6f0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",4);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b7a0 FUN_141b0b7a0 body=179 status=ok
// SIG undefined FUN_141b0b7a0(void)

void FUN_141b0b7a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",5);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b860 FUN_141b0b860 body=176 status=ok
// SIG undefined FUN_141b0b860(void)

void FUN_141b0b860(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",5);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",1);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b910 FUN_141b0b910 body=176 status=ok
// SIG undefined FUN_141b0b910(void)

void FUN_141b0b910(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",5);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",1);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0b9c0 FUN_141b0b9c0 body=173 status=ok
// SIG undefined FUN_141b0b9c0(void)

void FUN_141b0b9c0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"EDGE_DETECT_BIT_ID",1);
  FUN_141a172f0(param_2,L"INNER_EDGE_BIT_ID",0);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  FUN_141a172f0(param_2,L"MAX_KERNEL_SIZE",5);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_WRITE_VELOCITY",0);
  FUN_141a172f0(param_2,L"EDGE_DETECTION_DISABLE_GDS",0);
  FUN_141a172f0(param_2,L"COMPUTE_SHADER",1);
  return;
}



// FUNCTION 141b0bab0 FUN_141b0bab0 body=79 status=ok
// SIG undefined FUN_141b0bab0(void)

void FUN_141b0bab0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1794);
  return;
}



// FUNCTION 141b0bb00 ModifyCompilationEnvironment body=94 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FCopyStencilToLightingChannelsPS::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  FUN_141a172f0(param_2,L"STENCIL_LIGHTING_CHANNELS_SHIFT",4);
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 0x20;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141b0bb60 ModifyCompilationEnvironment body=67 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TPageTableUpdatePS<32>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  local_18 = local_res18;
  local_res18[0] = 0;
  local_10 = local_res10;
  local_res10[0] = 0x20;
  TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_char_const_&>_>
            (param_2 + 0xc0,local_res20,&local_18,0);
  return;
}



// FUNCTION 141b0bbb0 FUN_141b0bbb0 body=153 status=ok
// SIG undefined FUN_141b0bbb0(void)

void FUN_141b0bbb0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  
  FUN_141b15750();
  FUN_141ac7cb0(param_1,param_2,param_3);
  plVar4 = (longlong *)(param_3 + 0xb0);
  piVar2 = (int *)*plVar4;
  iVar1 = *(int *)(param_3 + 0xb8);
  piVar3 = piVar2;
  do {
    if (piVar3 == piVar2 + iVar1) {
LAB_141b0bc1c:
      *(int *)(param_3 + 0xb8) = iVar1 + 1;
      if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4);
      }
      *(undefined4 *)((longlong)iVar1 * 4 + *plVar4) = 0x10;
      return;
    }
    if (*piVar3 == 0x10) {
      if ((int)((longlong)piVar3 - (longlong)piVar2 >> 2) != -1) {
        return;
      }
      goto LAB_141b0bc1c;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}



// FUNCTION 141b0bc50 FUN_141b0bc50 body=112 status=ok
// SIG undefined FUN_141b0bc50(void)

void FUN_141b0bc50(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141a172f0(param_3,L"SECONDARY_DECAL_STENCIL_BIT",2);
  FUN_141a172f0(param_3,L"RECEIVE_DECAL_STENCIL_BIT",7);
  iVar1 = (**(code **)(*param_2 + 0x2b8))(param_2);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"DBUFFER_DECAL",iVar1 - 4U < 8);
  return;
}



// FUNCTION 141b0bcc0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FEvaluateSurfelMaterialCS::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"EVALUATE_SURFEL_MATERIAL_GROUP_SIZE",DAT_1464c17d4);
  FUN_141a172f0(param_3,L"HAS_PRIMITIVE_UNIFORM_BUFFER",1);
  return;
}



// FUNCTION 141b0bd00 FUN_141b0bd00 body=332 status=ok
// SIG undefined FUN_141b0bd00(void)

void FUN_141b0bd00(undefined8 param_1,longlong param_2)

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
  local_38[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"UNDEFINED_VALUE",0x20);
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



// FUNCTION 141b0be70 FUN_141b0be70 body=1666 status=ok
// SIG undefined FUN_141b0be70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b0be70(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_1d8 [32];
  float local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_170;
  int local_168 [2];
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *plStack_100;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_120 = param_5;
  bVar5 = false;
  local_160 = (undefined *)((ulonglong)local_160 & 0xffffffff00000000);
  local_110 = param_4;
  local_118 = FSceneRenderTargets::Get(param_2);
  local_150 = 0xffffffff00000000;
  uStack_148 = 0xffffffffffffffff;
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_140 = 0xffffffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  local_130 = 0xffffffff;
  uStack_128 = 0;
  uVar8 = *(undefined8 *)(*param_4 + 0x10);
  puVar9 = puVar12 + 10;
  plVar7 = *(longlong **)(*param_4 + 8);
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar12;
  *(undefined8 **)(param_2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_150;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_150._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_148;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_148._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_140;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_140._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_138;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_138._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_130;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_130._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_128;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_128._4_4_;
  puVar12[8] = plVar7;
  puVar12[9] = uVar8;
  lVar6 = (**(code **)(*plVar7 + 8))(plVar7);
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar6 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  plVar7 = (longlong *)0x0;
  local_1b0 = (float)((uint)local_1b0 & 0xffffff00);
  local_1b8 = 0.0;
  FUN_141ad74f0(param_2,*(undefined8 *)(*local_120 + 8),0,0);
  lVar6 = *(longlong *)(param_3 + 0x3090);
  local_160 = &DAT_146b09c50;
  local_158 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_168,&local_160);
  plVar11 = plVar7;
  if (local_168[0] != -1) {
    plVar11 = (longlong *)((longlong)local_168[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  local_158 = 0;
  plVar13 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar13 = plVar7;
  }
  local_160 = &DAT_146a10580;
  lVar3 = *plVar13;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,local_168,&local_160);
  plVar11 = plVar7;
  if (local_168[0] != -1) {
    plVar11 = (longlong *)((longlong)local_168[0] * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar13 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar13 = plVar7;
  }
  lVar6 = *plVar13;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_a8 = 0;
  uStack_a0 = 0;
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
  FUN_14049afe0(param_2);
  uStack_d0 = FUN_140985530();
  local_d8 = FUN_1404a0ce0();
  local_c8 = FUN_1409853f0();
  local_108 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_160 = (undefined *)0x0;
    bVar5 = true;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plVar7 = *(longlong **)(lVar4 + 0x38);
  }
  uVar8 = 0;
  plStack_100 = plVar7;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
  }
  bVar5 = false;
  if (lVar6 == 0) {
    bVar5 = true;
    local_160 = (undefined *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar8 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_e8 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
  }
  uVar1 = *(undefined4 *)(param_3 + 0x1aac);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_160 = (undefined *)CONCAT44(local_160._4_4_,*(undefined4 *)(param_3 + 0x1aa4));
  local_168[0] = *(int *)(param_3 + 0x1aa0);
  local_bc = local_bc & 0xffffffff00000000;
  uVar2 = *(undefined4 *)(param_3 + 0x1aa8);
  puVar9 = puVar12 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar12;
  *(undefined8 **)(param_2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59420;
  *(int *)(puVar12 + 2) = local_168[0];
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x14) = (undefined4)local_160;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar2;
  *(undefined4 *)(puVar12 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  FUN_141ed6ac0(param_2,&local_108,2,1);
  lVar4 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_160 = *(undefined **)(lVar4 + 0x40);
  local_1b8 = 2.10195e-44;
  FUN_141aa6800(lVar6 + 0xc0,param_2,&local_160,*(undefined4 *)(param_3 + 0x1a38));
  local_188 = *(undefined8 *)(local_118 + 0x378);
  iVar14 = *(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0);
  local_170 = 1;
  iVar10 = *(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4);
  local_178 = 1;
  local_1b8 = (float)iVar10;
  local_160 = (undefined *)CONCAT44(iVar10,iVar14);
  local_190 = local_160;
  local_1a0 = (float)iVar14;
  local_1b0 = (float)*(int *)(param_3 + 0x1aa0);
  local_1a8 = (float)*(int *)(param_3 + 0x1aa4);
  local_198 = local_1b8;
  local_180 = lVar3;
  DrawRectangle();
  plVar11 = local_120;
  local_150 = 0xffffffff00000000;
  uStack_148 = 0xffffffffffffffff;
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_140 = 0xffffffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  local_130 = 0xffffffff;
  uStack_128 = 0;
  uVar8 = *(undefined8 *)(*local_120 + 0x10);
  plVar7 = *(longlong **)(*local_120 + 8);
  puVar9 = puVar12 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar12;
  *(undefined8 **)(param_2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_150;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_150._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_148;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_148._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_140;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_140._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_138;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_138._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_130;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_130._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_128;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_128._4_4_;
  puVar12[8] = plVar7;
  puVar12[9] = uVar8;
  lVar6 = (**(code **)(*plVar7 + 8))(plVar7);
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar6 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  if ((longlong *)*local_110 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*local_110 + 0x30))();
  }
  if ((longlong *)*plVar11 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar11 + 0x30))();
  }
  return;
}



// FUNCTION 141b0c500 FUN_141b0c500 body=1645 status=ok
// SIG undefined FUN_141b0c500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141b0c500(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  float local_1d0;
  float local_1c8;
  float local_1c0;
  float local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  uint local_188;
  undefined1 local_184;
  undefined8 local_180;
  int local_178;
  int local_174;
  longlong local_170;
  int local_168;
  int local_164;
  undefined4 local_160 [2];
  longlong *local_158;
  longlong local_150;
  ulonglong *local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_174 = 0;
  local_188 = 0;
  local_170 = param_2;
  local_158 = param_1;
  FRHICommandListImmediate::SetCurrentStat(param_2,local_184);
  cVar9 = FUN_141b143c0(param_1,param_2);
  lVar11 = FSceneRenderTargets::Get(param_2);
  FUN_141cde700(lVar11,param_2,cVar9 == '\0');
  if (*(char *)((longlong)param_1 + 0x2e5) != '\0') {
    local_d8 = 0;
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = (longlong *)0x0;
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
    FUN_14049afe0(param_2,&local_118);
    uStack_e0 = FUN_140985530();
    local_e8 = FUN_1404a0ce0();
    local_d8 = FUN_141b09690();
    uVar5 = *(undefined8 *)(lVar11 + 0x378);
    local_178 = 0;
    if (0 < (int)param_1[0x19]) {
      local_180._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
      puVar20 = (ulonglong *)(param_2 + 0x30);
      local_150 = 0;
      local_174 = local_180._4_4_;
      plVar17 = local_158;
      plVar19 = local_158;
      local_148 = puVar20;
      do {
        local_180 = param_1[0x18] + local_150;
        puVar16 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
        uVar1 = *(undefined4 *)(local_180 + 0x1aac);
        uVar2 = *(undefined4 *)(local_180 + 0x1aa8);
        uVar3 = *(undefined4 *)(local_180 + 0x1aa4);
        uVar4 = *(undefined4 *)(local_180 + 0x1aa0);
        puVar15 = puVar16 + 5;
        if ((undefined8 *)puVar20[1] < puVar15) {
          FMemStackBase::AllocateNewChunk(puVar20,0x30);
          puVar16 = (undefined8 *)(*local_148 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar16 + 5;
          param_2 = local_170;
          puVar20 = local_148;
        }
        *puVar20 = (ulonglong)puVar15;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar16;
        *(undefined8 **)(param_2 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f59420;
        *(undefined4 *)(puVar16 + 2) = uVar4;
        *(undefined4 *)((longlong)puVar16 + 0x14) = uVar3;
        plVar12 = (longlong *)0x0;
        *(undefined4 *)(puVar16 + 3) = 0;
        *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar2;
        *(undefined4 *)(puVar16 + 4) = uVar1;
        *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
        local_140 = &DAT_146b09c50;
        local_138 = 0;
        lVar11 = *(longlong *)(local_180 + 0x3090);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar11 + 0x38,&local_168,&local_140);
        plVar13 = plVar12;
        if (local_168 != -1) {
          plVar13 = (longlong *)((longlong)local_168 * 0x20 + *(longlong *)(lVar11 + 0x38));
        }
        local_128 = 0;
        plVar18 = plVar13 + 2;
        if (plVar13 == (longlong *)0x0) {
          plVar18 = plVar12;
        }
        local_130 = &DAT_146a10c80;
        lVar6 = *plVar18;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar11 + 0x38,&local_164,&local_130);
        plVar13 = plVar12;
        if (local_164 != -1) {
          plVar13 = (longlong *)((longlong)local_164 * 0x20 + *(longlong *)(lVar11 + 0x38));
        }
        plVar18 = plVar13 + 2;
        if (plVar13 == (longlong *)0x0) {
          plVar18 = plVar12;
        }
        lVar11 = *plVar18;
        local_118 = DAT_1464c2720;
        if (lVar6 == 0) {
          local_188 = local_188 | 1;
          plVar17 = plVar12;
        }
        else {
          lVar14 = *(longlong *)(lVar6 + 0x48);
          if (*(char *)(lVar14 + 0x28) == '\0') {
            FUN_1419f3850(lVar14);
          }
          plVar12 = *(longlong **)(lVar14 + 0x38);
        }
        plVar13 = (longlong *)0x0;
        uVar21 = local_188;
        plStack_110 = plVar12;
        if (((local_188 & 1) != 0) &&
           (uVar21 = local_188 & 0xfffffffe, local_188 = uVar21, plVar17 != (longlong *)0x0)) {
          LOCK();
          plVar12 = plVar17 + 1;
          lVar14 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            if (((char)plVar17[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
              LOCK();
              bVar22 = *(int *)((longlong)plVar17 + 0xc) == 0;
              if (bVar22) {
                *(int *)((longlong)plVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar22) {
                uVar10 = FLockFreeLinkPolicy::AllocLockFreeLink();
                plVar12 = plVar13;
                if (uVar10 != 0) {
                  plVar12 = (longlong *)
                            ((&DAT_1468a81f8)[uVar10 >> 0xe] + (ulonglong)(uVar10 & 0x3fff) * 0x18);
                }
                plVar12[1] = (longlong)plVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar17)(plVar17,1);
            }
          }
        }
        if (lVar11 == 0) {
          uVar21 = uVar21 | 2;
          plVar19 = plVar13;
          local_188 = uVar21;
        }
        else {
          lVar14 = *(longlong *)(lVar11 + 0x48);
          if (*(char *)(lVar14 + 0x28) == '\0') {
            FUN_1419f3850(lVar14);
          }
          plVar13 = *(longlong **)(lVar14 + 0x40);
        }
        lVar14 = 0;
        local_f8 = plVar13;
        if (((uVar21 & 2) != 0) && (local_188 = uVar21 & 0xfffffffd, plVar19 != (longlong *)0x0)) {
          LOCK();
          plVar12 = plVar19 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            if (((char)plVar19[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
              LOCK();
              bVar22 = *(int *)((longlong)plVar19 + 0xc) == 0;
              if (bVar22) {
                *(int *)((longlong)plVar19 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar22) {
                uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar21 != 0) {
                  lVar14 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
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
        lVar14 = local_170;
        local_cc = local_cc & 0xffffffff00000000;
        FUN_141ed6ac0(local_170,&local_118,2,1);
        puVar16 = (undefined8 *)(*(longlong *)(lVar14 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar16 + 3;
        if (*(undefined8 **)(lVar14 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(lVar14 + 0x30);
          puVar16 = (undefined8 *)(*(longlong *)(lVar14 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar16 + 3;
        }
        *(undefined8 **)(lVar14 + 0x30) = puVar15;
        *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
        **(undefined8 **)(lVar14 + 8) = puVar16;
        *(undefined8 **)(lVar14 + 8) = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_143f489c0;
        *(undefined4 *)(puVar16 + 2) = 1;
        lVar14 = *(longlong *)(lVar11 + 0x48);
        uVar7 = *(undefined8 *)(local_180 + 0x20);
        if (*(char *)(lVar14 + 0x28) == '\0') {
          FUN_1419f3850(lVar14);
        }
        param_2 = local_170;
        FUN_141aa9590(lVar11,local_170,*(undefined8 *)(lVar14 + 0x40),uVar7);
        local_160[0] = FUN_14274fcb0(local_180);
        lVar14 = *(longlong *)(lVar11 + 0x48);
        if (*(char *)(lVar14 + 0x28) == '\0') {
          FUN_1419f3850(lVar14);
        }
        local_1d8 = 0.0;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_2,*(undefined8 *)(lVar14 + 0x40),lVar11 + 0xc0,local_160);
        local_1d8 = (float)local_174;
        local_1c8 = (float)*(int *)(local_180 + 0x1aa4);
        local_1d0 = (float)*(int *)(local_180 + 0x1aa0);
        local_190 = 1;
        local_198 = 1;
        local_1b8 = (float)(*(int *)(local_180 + 0x1aac) - *(int *)(local_180 + 0x1aa4));
        local_1c0 = (float)(*(int *)(local_180 + 0x1aa8) - *(int *)(local_180 + 0x1aa0));
        local_1b0 = uVar5;
        local_1a8 = uVar5;
        local_1a0 = lVar6;
        DrawRectangle(param_2);
        puVar20 = (ulonglong *)(param_2 + 0x30);
        local_178 = local_178 + 1;
        local_150 = local_150 + 0x30d0;
        param_1 = local_158;
      } while (local_178 < (int)local_158[0x19]);
    }
  }
  return 1;
}



// FUNCTION 141b0cb70 FUN_141b0cb70 body=345 status=ok
// SIG undefined FUN_141b0cb70(void)

void FUN_141b0cb70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong *plVar8;
  
  lVar1 = param_2[8];
  for (plVar8 = (longlong *)(param_1 + 0x10); plVar8 != (longlong *)(param_1 + 0x20);
      plVar8 = plVar8 + 2) {
    plVar2 = (longlong *)*plVar8;
    if ((((plVar2 == (longlong *)0x0) || (*(char *)((longlong)plVar2 + 10) == '\0')) ||
        (*(char *)((longlong)plVar2 + 0xb) == '\0')) || (DAT_146ab62f0 == '\0')) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    cVar3 = FRenderingCompositePass::IsAsyncComputePass(param_1);
    if (((cVar3 != cVar7) && (plVar2 != (longlong *)0x0)) &&
       (lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2), lVar4 != 0)) {
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 3;
      if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x20);
        puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar5 + 3;
      }
      *(undefined8 **)(lVar1 + 0x30) = puVar6;
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
      **(undefined8 **)(lVar1 + 8) = puVar5;
      *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144dc9cc0;
      puVar5[2] = lVar4;
    }
  }
  if (((*(int *)(*param_2 + 0x1a10) == 2) && (DAT_1464c17c4 != 0)) &&
     (*(longlong *)(param_1 + 0xa8) != 0)) {
    FUN_141af7be0(param_2);
    return;
  }
  FUN_141af81e0(param_2,0);
  return;
}



// FUNCTION 141b0ccd0 FUN_141b0ccd0 body=902 status=ok
// SIG undefined FUN_141b0ccd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b0ccd0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_res10;
  int iStackX_14;
  
  lVar3 = *param_2;
  FSceneRenderTargets::Get(param_2[8]);
  uVar8 = 0;
  iStackX_14 = (int)((ulonglong)_DAT_1468b5ca0 >> 0x20);
  local_res10 = (int)_DAT_1468b5ca0;
  uVar6 = (ulonglong)(int)(*(ulonglong **)(*param_2 + 0x10))[1];
  plVar7 = (longlong *)**(ulonglong **)(*param_2 + 0x10);
  uVar9 = uVar6 & 0x1fffffffffffffff;
  if (plVar7 + uVar6 < plVar7) {
    uVar9 = uVar8;
  }
  if (uVar9 != 0) {
    do {
      lVar4 = *plVar7;
      plVar7 = plVar7 + 1;
      iVar1 = *(int *)(lVar4 + 0x380);
      iVar2 = *(int *)(lVar4 + 900);
      if (iVar1 <= local_res10) {
        iVar1 = local_res10;
      }
      local_res10 = iVar1;
      if (iVar2 <= iStackX_14) {
        iVar2 = iStackX_14;
      }
      iStackX_14 = iVar2;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar9);
  }
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (*(int *)(DAT_146a0e920 + 4) == 0) {
    FUN_141ae5a90();
  }
  else {
    FUN_141ae58f0(*(undefined4 *)(lVar3 + 0x17f0));
  }
  return;
}



// FUNCTION 141b0d060 FUN_141b0d060 body=2649 status=ok
// SIG undefined FUN_141b0d060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b0d060(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  char cVar16;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  longlong *local_340;
  float local_338;
  float local_330;
  float local_328;
  undefined8 local_320;
  undefined8 local_318;
  longlong local_310;
  undefined4 local_308;
  undefined1 local_300;
  undefined4 local_2f8;
  char local_2e8;
  int local_2e4;
  undefined8 local_2e0;
  int local_2d8;
  int local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  undefined8 *local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong local_238;
  longlong local_230;
  undefined8 *local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined4 local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  ulonglong local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_2e4 = 0;
  plVar15 = (longlong *)0x0;
  local_2e0 = FSceneRenderTargets::Get(param_2[8]);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,0);
  plVar4 = (longlong *)FRenderingCompositeOutputRef::GetOutput(uVar3);
  plVar6 = (longlong *)param_1[0x10];
  plVar7 = (longlong *)plVar4[10];
  param_1[0x10] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x30))(plVar6);
  }
  plVar4[8] = param_1[0xe];
  lVar10 = plVar4[1];
  param_1[6] = *plVar4;
  param_1[7] = lVar10;
  *(int *)(param_1 + 8) = (int)plVar4[2];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)plVar4 + 0x14);
  *(int *)(param_1 + 9) = (int)plVar4[3];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)plVar4 + 0x1c);
  *(int *)(param_1 + 10) = (int)plVar4[4];
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)plVar4 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)plVar4 + 0x25);
  *(undefined2 *)((longlong)param_1 + 0x56) = *(undefined2 *)((longlong)plVar4 + 0x26);
  *(short *)(param_1 + 0xb) = (short)plVar4[5];
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)plVar4 + 0x2c);
  *(int *)(param_1 + 0xc) = (int)plVar4[6];
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)plVar4 + 0x34);
  *(char *)(param_1 + 0xd) = (char)plVar4[7];
  param_1[0xe] = plVar4[8];
  *(char *)(param_1 + 0xf) = (char)plVar4[9];
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)plVar4 + 0x49);
  lVar10 = *param_2;
  if (*(longlong *)(lVar10 + 0x18) == 0) {
    return;
  }
  local_230 = lVar10;
  lVar5 = FSceneViewState::GetLightPropagationVolume
                    (*(longlong *)(lVar10 + 0x18),(int)param_2[0xb],1);
  local_2b8 = FUN_141ae7a70(lVar10 + 0x19d8);
  lVar11 = local_2e0;
  if (lVar5 == 0) {
    return;
  }
  if (*(float *)(local_2b8 + 4) == 0.0) {
    return;
  }
  if (((*(uint *)(*(longlong *)(lVar10 + 0x10) + 0x28) & 0x2000000) == 0) ||
     (*(int *)(DAT_146a0eb68 + 4) == 0)) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  local_2e8 = cVar16;
  FUN_141cdcf70(local_2e0,param_2[8]);
  plVar6 = (longlong *)FUN_141ce54b0(lVar11);
  puVar14 = (undefined8 *)(*(longlong *)(lVar11 + 0x50) + 8);
  local_2c0 = (undefined8 *)(*plVar6 + 8);
  local_228 = puVar14;
  AK::MemoryMgr::StartProfileThreadUsage((long)lVar5);
  if (0.0001 < *(float *)(local_2b8 + 0x20)) {
    FUN_141b03330(param_1,param_2);
  }
  local_338 = (float)((uint)local_338 & 0xffffff00);
  local_218 = *local_2c0;
  local_210 = *puVar14;
  local_340 = (longlong *)CONCAT44(local_340._4_4_,1);
  local_348 = (longlong *)((ulonglong)local_348._4_4_ << 0x20);
  local_250 = 1;
  FUN_141ad8260(param_2[8],cVar16 + '\x01',&local_218,0);
  local_168 = *(undefined8 *)(lVar10 + 0x1aa0);
  uStack_160 = *(undefined8 *)(lVar10 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_168);
  local_118 = 0;
  local_158 = 0;
  plStack_150 = (longlong *)0x0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = (longlong *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_110 = 0;
  local_10c = 0x26;
  local_104 = 0;
  local_fc = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  FUN_14049afe0(param_2[8],&local_158);
  local_128 = FUN_141abce70();
  uStack_120 = FUN_140985530();
  local_118 = FUN_1409853f0();
  local_200 = 0;
  lVar10 = param_2[0xc];
  local_208 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 0x38,&local_2d8,&local_208);
  if (local_2d8 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)local_2d8 * 0x20 + *(longlong *)(lVar10 + 0x38);
  }
  plVar6 = (longlong *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    plVar6 = plVar15;
  }
  lVar10 = *plVar6;
  local_158 = DAT_1464c2720;
  if (lVar10 == 0) {
    local_248 = 0;
    plVar6 = (longlong *)0x1;
    plStack_150 = plVar15;
  }
  else {
    lVar11 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_1419f3850(lVar11);
    }
    plStack_150 = *(longlong **)(lVar11 + 0x38);
    plVar6 = plVar15;
  }
  if (plVar6 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_248);
  }
  bVar2 = false;
  lVar11 = param_2[0xc];
  if (cVar16 == '\0') {
    local_1e8 = &DAT_146a14b50;
    local_1e0 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_2e4,&local_1e8);
    if (local_2e4 != -1) {
      lVar11 = (longlong)local_2e4 * 0x20 + *(longlong *)(lVar11 + 0x38);
      goto LAB_141b0d495;
    }
  }
  else {
    local_1f8 = &DAT_146a14ca0;
    local_1f0 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_2d4,&local_1f8);
    if (local_2d4 != -1) {
      lVar11 = (longlong)local_2d4 * 0x20 + *(longlong *)(lVar11 + 0x38);
      goto LAB_141b0d495;
    }
  }
  lVar11 = 0;
LAB_141b0d495:
  plVar6 = (longlong *)0x0;
  plVar7 = (longlong *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    plVar7 = plVar6;
  }
  lVar11 = *plVar7;
  if (lVar11 == 0) {
    bVar2 = true;
    local_240 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar11 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    plVar6 = *(longlong **)(lVar1 + 0x40);
  }
  local_138 = plVar6;
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_240);
  }
  local_10c = local_10c & 0xffffffff00000000;
  FUN_141ed6ac0(param_2[8],&local_158,2,1);
  local_1d8 = *(undefined4 *)(lVar5 + 0xb0);
  local_1d4 = *(undefined4 *)(lVar5 + 0xb4);
  local_1d0 = *(undefined4 *)(lVar5 + 0xb8);
  local_1cc = *(undefined4 *)(lVar5 + 0xbc);
  local_1c8 = *(undefined4 *)(lVar5 + 0xc0);
  local_1c4 = *(undefined4 *)(lVar5 + 0xc4);
  local_1c0 = *(undefined4 *)(lVar5 + 200);
  local_1bc = *(undefined4 *)(lVar5 + 0xcc);
  local_1b8 = *(undefined4 *)(lVar5 + 0xd0);
  local_1b4 = *(undefined4 *)(lVar5 + 0xd4);
  local_1b0 = *(undefined4 *)(lVar5 + 0xd8);
  local_1ac = *(undefined4 *)(lVar5 + 0xdc);
  local_1a8 = *(undefined4 *)(lVar5 + 0xe0);
  local_198 = *(undefined8 *)(lVar5 + 0xf0);
  local_190 = *(undefined4 *)(lVar5 + 0xf8);
  local_188 = *(undefined8 *)(lVar5 + 0x100);
  local_180 = *(undefined4 *)(lVar5 + 0x108);
  local_17c = *(undefined4 *)(lVar5 + 0x10c);
  local_178 = *(undefined4 *)(lVar5 + 0x110);
  local_348 = (longlong *)((ulonglong)local_348 & 0xffffffff00000000);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_2c8,&local_1d8,&DAT_146a0eaf8);
  local_2d0 = local_2c8;
  if (local_2c8 != 0) {
    LOCK();
    *(int *)(local_2c8 + 8) = *(int *)(local_2c8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c8);
  local_220 = local_2c8;
  local_2d0 = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2d0);
  uVar8 = (ulonglong)(1 - *(int *)(lVar5 + 0x16c));
  local_238 = local_2c8;
  local_98 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10 + uVar8 * 0x38) + 0x10);
  local_90 = *(undefined8 *)(*(longlong *)(lVar5 + 0x18 + uVar8 * 0x38) + 0x10);
  local_88 = *(undefined8 *)(*(longlong *)(lVar5 + 0x20 + uVar8 * 0x38) + 0x10);
  local_80 = *(undefined8 *)(*(longlong *)(lVar5 + 0x28 + uVar8 * 0x38) + 0x10);
  local_78 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30 + uVar8 * 0x38) + 0x10);
  local_70 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38 + uVar8 * 0x38) + 0x10);
  local_68 = *(undefined8 *)(*(longlong *)(lVar5 + 0x40 + uVar8 * 0x38) + 0x10);
  if (local_2c8 != 0) {
    LOCK();
    *(int *)(local_2c8 + 8) = *(int *)(local_2c8 + 8) + 1;
    UNLOCK();
  }
  local_348 = &local_238;
  local_340 = param_2;
  FUN_141af6f30(lVar11,param_2[8],&local_98,*(undefined8 *)(*(longlong *)(lVar5 + 0x150) + 0x10));
  local_2f8 = 0;
  iVar9 = *(int *)(local_230 + 0x1aac) - *(int *)(local_230 + 0x1aa4);
  local_318 = *(undefined8 *)(local_2e0 + 0x378);
  iVar12 = *(int *)(local_230 + 0x1aa8) - *(int *)(local_230 + 0x1aa0);
  local_300 = *(undefined1 *)((longlong)param_2 + 0x69);
  local_308 = *(undefined4 *)(local_230 + 0xf60);
  local_328 = (float)iVar9;
  local_2e0 = CONCAT44(iVar9,iVar12);
  local_320 = local_2e0;
  local_330 = (float)iVar12;
  local_338 = (float)*(int *)(local_230 + 0x1aa4);
  local_340 = (longlong *)CONCAT44(local_340._4_4_,(float)*(int *)(local_230 + 0x1aa0));
  local_348 = (longlong *)CONCAT44(local_348._4_4_,local_328);
  local_310 = lVar10;
  FUN_141ce13a0(param_2[8]);
  lVar10 = param_2[8];
  uVar3 = local_2c0[1];
  plVar6 = (longlong *)*local_2c0;
  local_2b0 = 0xffffffff00000000;
  uStack_2a8 = 0xffffffffffffffff;
  local_290 = 0xffffffff;
  uStack_288 = 0;
  local_2a0 = 0xffffffffffffffff;
  uStack_298 = 0xffffffffffffffff;
  puVar13 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar13 + 10;
  if (*(undefined8 **)(lVar10 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x58);
    puVar13 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar13 + 10;
  }
  *(undefined8 **)(lVar10 + 0x30) = puVar14;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  **(undefined8 **)(lVar10 + 8) = puVar13;
  *(undefined8 **)(lVar10 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar13 + 2) = (undefined4)local_2b0;
  *(undefined4 *)((longlong)puVar13 + 0x14) = local_2b0._4_4_;
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_2a8;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_2a8._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)local_2a0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = local_2a0._4_4_;
  *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_298;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_298._4_4_;
  *(undefined4 *)(puVar13 + 6) = (undefined4)local_290;
  *(undefined4 *)((longlong)puVar13 + 0x34) = local_290._4_4_;
  *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_288;
  *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_288._4_4_;
  puVar13[8] = plVar6;
  puVar13[9] = uVar3;
  lVar10 = (**(code **)(*plVar6 + 8))(plVar6);
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar13[8] + 0x20))();
  }
  lVar10 = (**(code **)(*(longlong *)puVar13[9] + 8))();
  if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar10 == 0)) {
    (**(code **)(*(longlong *)puVar13[9] + 0x20))();
  }
  if (local_2e8 != '\0') {
    lVar10 = param_2[8];
    local_280 = 0xffffffff00000000;
    uStack_278 = 0xffffffffffffffff;
    uVar3 = local_228[1];
    plVar6 = (longlong *)*local_228;
    local_260 = 0xffffffff;
    uStack_258 = 0;
    local_270 = 0xffffffffffffffff;
    uStack_268 = 0xffffffffffffffff;
    puVar13 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar13 + 10;
    if (*(undefined8 **)(lVar10 + 0x38) < puVar14) {
      FMemStackBase::AllocateNewChunk(lVar10 + 0x30,0x58);
      puVar13 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar13 + 10;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar14;
    *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
    **(undefined8 **)(lVar10 + 8) = puVar13;
    *(undefined8 **)(lVar10 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar13 + 2) = (undefined4)local_280;
    *(undefined4 *)((longlong)puVar13 + 0x14) = local_280._4_4_;
    *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_278;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_278._4_4_;
    *(undefined4 *)(puVar13 + 4) = (undefined4)local_270;
    *(undefined4 *)((longlong)puVar13 + 0x24) = local_270._4_4_;
    *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_268;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_268._4_4_;
    *(undefined4 *)(puVar13 + 6) = (undefined4)local_260;
    *(undefined4 *)((longlong)puVar13 + 0x34) = local_260._4_4_;
    *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_258;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_258._4_4_;
    puVar13[8] = plVar6;
    puVar13[9] = uVar3;
    lVar10 = (**(code **)(*plVar6 + 8))(plVar6);
    if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar10 == 0)) {
      (**(code **)(*(longlong *)puVar13[8] + 0x20))();
    }
    lVar10 = (**(code **)(*(longlong *)puVar13[9] + 8))();
    if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar10 == 0)) {
      (**(code **)(*(longlong *)puVar13[9] + 0x20))();
    }
  }
  if (0.0001 < *(float *)(local_2b8 + 0x20)) {
    AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_220);
  return;
}



// FUNCTION 141b0dac0 FUN_141b0dac0 body=1675 status=ok
// SIG undefined FUN_141b0dac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b0dac0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_228 [32];
  float local_208;
  float local_200;
  float local_1f8;
  float local_1f0;
  float local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_130;
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
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_198 = local_198 & 0xffffffff00000000;
  local_188 = (longlong *)((ulonglong)local_188 & 0xffffffff00000000);
  local_188 = (longlong *)FRenderingCompositePass::GetInputDesc(param_1,0);
  if (local_188 != (longlong *)0x0) {
    lVar8 = param_2[8];
    plVar12 = param_1 + 2;
    uVar13 = 0;
    if (plVar12 != param_1 + 4) {
      do {
        plVar1 = (longlong *)*plVar12;
        if ((((plVar1 == (longlong *)0x0) || (*(char *)((longlong)plVar1 + 10) == '\0')) ||
            (*(char *)((longlong)plVar1 + 0xb) == '\0')) || (DAT_146ab62f0 == '\0')) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        cVar4 = FRenderingCompositePass::IsAsyncComputePass(param_1);
        if (((cVar4 != cVar5) && (plVar1 != (longlong *)0x0)) &&
           (lVar6 = (**(code **)(*plVar1 + 0x80))(plVar1), lVar6 != 0)) {
          puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar10 + 3;
          if (*(undefined8 **)(lVar8 + 0x38) < puVar9) {
            FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x20);
            puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar9 = puVar10 + 3;
          }
          *(undefined8 **)(lVar8 + 0x30) = puVar9;
          *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
          **(undefined8 **)(lVar8 + 8) = puVar10;
          *(undefined8 **)(lVar8 + 8) = puVar10 + 1;
          puVar10[1] = 0;
          *puVar10 = &PTR_LAB_144dc9cc0;
          puVar10[2] = lVar6;
        }
        plVar12 = plVar12 + 2;
      } while (plVar12 != param_1 + 4);
      uVar13 = (uint)local_198;
    }
    plVar1 = local_188;
    plVar12 = (longlong *)param_1[0x15];
    local_130 = *param_2;
    if (plVar12 == (longlong *)0x0) {
      plVar7 = (longlong *)FUN_141cf3cd0(param_1 + 4,param_2);
      plVar12 = (longlong *)param_1[0x15];
    }
    else {
      plVar7 = plVar12 + 1;
    }
    uVar2 = *(undefined8 *)((longlong)plVar1 + 0x14);
    local_188 = plVar7;
    if (plVar12 == (longlong *)0x0) {
      puVar9 = (undefined8 *)((longlong)param_1 + 0x34);
    }
    else {
      lVar8 = (**(code **)(*plVar12 + 0x10))();
      puVar9 = (undefined8 *)(lVar8 + 0x14);
    }
    uVar3 = *puVar9;
    local_1a8 = (undefined *)uVar3;
    FSceneRenderTargets::Get(param_2[8]);
    local_170 = param_2[1];
    uStack_168 = param_2[2];
    cVar5 = FUN_141ce5c50(param_2,plVar7);
    if (cVar5 == '\0') {
      local_180 = param_2[1];
      uStack_178 = param_2[2];
    }
    else {
      lVar8 = *param_2;
      if (*(int *)(lVar8 + 0x1a14) == 2) {
        local_180 = *(longlong *)(lVar8 + 0x1aa0);
        uStack_178 = *(longlong *)(lVar8 + 0x1aa8);
      }
      else {
        local_180 = *(longlong *)(lVar8 + 0x368);
        uStack_178 = *(longlong *)(lVar8 + 0x370);
      }
    }
    lVar8 = 0;
    local_198 = 0;
    FUN_141a19150(param_2[8],*plVar7,0,0);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_198);
    uStack_18c = local_1a8._4_4_;
    local_198 = 0;
    uStack_190 = (undefined4)uVar3;
    uStack_1a0 = CONCAT44(local_1a8._4_4_,uStack_190);
    local_1a8 = (undefined *)0x0;
    FRenderingCompositePassContext::SetViewportAndCallRHI(param_2,&local_1a8);
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
    if ((char)param_1[0x16] == '\0') {
      local_f8 = FUN_1404a0ce0();
    }
    else {
      local_f8 = FUN_141abce70();
    }
    uStack_f0 = FUN_140985530();
    local_e8 = FUN_1409853f0();
    lVar6 = param_2[0xc];
    uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
    local_1a8 = &DAT_146a51f90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar6 + 0x38,&local_198,&local_1a8);
    if ((uint)local_198 != -1) {
      lVar8 = (longlong)(int)(uint)local_198 * 0x20 + *(longlong *)(lVar6 + 0x38);
    }
    plVar12 = (longlong *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      plVar12 = (longlong *)0x0;
    }
    uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
    local_1a8 = &DAT_146a0f200;
    lVar8 = *plVar12;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar6 + 0x38,&local_198,&local_1a8);
    if ((uint)local_198 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)(int)(uint)local_198 * 0x20 + *(longlong *)(lVar6 + 0x38);
    }
    plVar12 = (longlong *)(lVar6 + 0x10);
    uVar11 = 0;
    if (lVar6 == 0) {
      plVar12 = (longlong *)0x0;
    }
    lVar6 = *plVar12;
    local_128 = DAT_1464c2720;
    if (lVar8 == 0) {
      local_1a8 = (undefined *)0x0;
      uVar13 = 1;
    }
    else {
      local_1a8 = *(undefined **)(lVar8 + 0x48);
      if (*(char *)((longlong)local_1a8 + 0x28) == '\0') {
        FUN_1419f3850(local_1a8);
      }
      uVar11 = *(undefined8 *)((longlong)local_1a8 + 0x38);
    }
    uStack_120 = uVar11;
    if ((uVar13 & 1) != 0) {
      uVar13 = uVar13 & 0xfffffffe;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
    }
    if (lVar6 == 0) {
      uVar13 = uVar13 | 2;
      local_108 = 0;
      local_1a8 = (undefined *)0x0;
    }
    else {
      local_1a8 = *(undefined **)(lVar6 + 0x48);
      if (*(char *)((longlong)local_1a8 + 0x28) == '\0') {
        FUN_1419f3850(local_1a8);
      }
      local_108 = *(undefined8 *)((longlong)local_1a8 + 0x40);
    }
    if ((uVar13 & 2) != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
    }
    local_dc = local_dc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2[8],&local_128,2,1);
    FUN_141ad70c0(lVar8,param_2);
    FUN_141af7550(lVar6,param_2[8],param_2);
    local_1b8 = 1;
    local_1f8 = (float)local_170._4_4_;
    local_1f0 = (float)((int)uStack_168 - (int)local_170);
    local_208 = (float)(uStack_178._4_4_ - local_180._4_4_);
    local_1c0 = *(undefined1 *)((longlong)param_2 + 0x69);
    local_1e8 = (float)(uStack_168._4_4_ - local_170._4_4_);
    local_1c8 = *(undefined4 *)(local_130 + 0xf60);
    local_200 = (float)(int)local_170;
    local_1e0 = uVar3;
    local_1d8 = uVar2;
    local_1d0 = lVar8;
    FUN_141ce13a0(param_2[8]);
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
    lVar8 = param_2[8];
    lVar6 = local_188[1];
    plVar12 = (longlong *)*local_188;
    local_160 = 0xffffffff00000000;
    uStack_158 = 0xffffffffffffffff;
    local_140 = 0xffffffff;
    uStack_138 = 0;
    local_150 = 0xffffffffffffffff;
    uStack_148 = 0xffffffffffffffff;
    puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 10;
    if (*(undefined8 **)(lVar8 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(lVar8 + 0x30,0x58);
      puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 10;
    }
    *(undefined8 **)(lVar8 + 0x30) = puVar9;
    *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
    **(undefined8 **)(lVar8 + 8) = puVar10;
    *(undefined8 **)(lVar8 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_160;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_160._4_4_;
    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_158;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_158._4_4_;
    *(undefined4 *)(puVar10 + 4) = (undefined4)local_150;
    *(undefined4 *)((longlong)puVar10 + 0x24) = local_150._4_4_;
    *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_148;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_148._4_4_;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_140;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_140._4_4_;
    *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_138;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_138._4_4_;
    puVar10[8] = plVar12;
    puVar10[9] = lVar6;
    lVar8 = (**(code **)(*plVar12 + 8))(plVar12);
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar10[8] + 0x20))();
    }
    lVar8 = (**(code **)(*(longlong *)puVar10[9] + 8))();
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar8 == 0)) {
      (**(code **)(*(longlong *)puVar10[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 141b0e150 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141b0e27f;
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
LAB_141b0e27f:
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
        lVar6 = (longlong)iStack_2c * 200 + *param_1;
        uVar5 = FMeshDrawingPolicy::GetTypeHash(lVar6 + 0x20);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0xc4) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xc0) =
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



// FUNCTION 141b0e370 FUN_141b0e370 body=1008 status=ok
// SIG undefined FUN_141b0e370(void)

void FUN_141b0e370(longlong param_1,char param_2)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x1c);
  lVar13 = (longlong)iVar8;
  plVar12 = (longlong *)((longlong)*(int *)(param_1 + 0x18) * 0xf0 + *(longlong *)(lVar3 + 0x40));
  if (param_2 != '\0') {
    FUN_141d78430(*(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]),param_1);
  }
  iVar16 = 0;
  *(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]) = 0;
  iVar6 = *(int *)((longlong)plVar12 + 0x1c);
  iVar15 = *(int *)((longlong)plVar12 + 0xc);
  TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
  ::RemoveAtSwapImpl(plVar12 + 2,iVar8,1,1);
  iVar7 = (int)plVar12[1];
  iVar5 = (iVar7 - iVar8) + -1;
  if (0 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar12 + lVar13 * 4),(void *)(*plVar12 + (longlong)(iVar7 - iVar5) * 4),
               (longlong)iVar5 << 2);
    iVar7 = (int)plVar12[1];
  }
  *(int *)(plVar12 + 1) = iVar7 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar12);
  DAT_146a81050 =
       DAT_146a81050 -
       (ulonglong)
       (uint)((iVar6 * 0xe + iVar15) * 4 +
             (*(int *)((longlong)plVar12 + 0x1c) * 0xe + *(int *)((longlong)plVar12 + 0xc)) * -4);
  iVar6 = (int)plVar12[3];
  if (iVar8 < iVar6) {
    *(int *)(*(longlong *)(lVar13 * 0x38 + 0x30 + plVar12[2]) + 0x1c) = iVar8;
    iVar6 = (int)plVar12[3];
  }
  if (iVar6 == 0) {
    DAT_146a81050 =
         DAT_146a81050 +
         ((-0xe8 - (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0x1c) * 0x38)) -
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0xc) << 2));
    iVar6 = *(int *)(lVar3 + 0x38);
    iVar8 = iVar6 + -1;
    if (0 < iVar8) {
      lVar13 = *(longlong *)(lVar3 + 0x40);
      iVar15 = iVar16;
      do {
        iVar7 = (iVar8 + iVar15) / 2;
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 4) * 0xf0;
        uVar4 = *(ulonglong *)(lVar10 + 0x78 + lVar13);
        if (uVar4 < (ulonglong)plVar12[0xf]) {
          uVar9 = 0xffffffff;
        }
        else if ((ulonglong)plVar12[0xf] < uVar4) {
          uVar9 = 1;
        }
        else {
          uVar4 = *(ulonglong *)(lVar10 + 0x60 + lVar13);
          if (uVar4 < (ulonglong)plVar12[0xc]) {
            uVar9 = 0xffffffff;
          }
          else if ((ulonglong)plVar12[0xc] < uVar4) {
            uVar9 = 1;
          }
          else {
            uVar4 = *(ulonglong *)(lVar10 + 0x68 + lVar13);
            if (uVar4 < (ulonglong)plVar12[0xd]) {
              uVar9 = 0xffffffff;
            }
            else if ((ulonglong)plVar12[0xd] < uVar4) {
              uVar9 = 1;
            }
            else {
              bVar2 = *(byte *)(lVar10 + 0x58 + lVar13);
              if (bVar2 < *(byte *)(plVar12 + 0xb)) {
                uVar9 = 0xffffffff;
              }
              else if (*(byte *)(plVar12 + 0xb) < bVar2) {
                uVar9 = 1;
              }
              else {
                uVar4 = *(ulonglong *)(lVar10 + 0x80 + lVar13);
                if (uVar4 < (ulonglong)plVar12[0x10]) {
                  uVar9 = 0xffffffff;
                }
                else if ((ulonglong)plVar12[0x10] < uVar4) {
                  uVar9 = 1;
                }
                else {
                  uVar4 = *(ulonglong *)(lVar10 + 0x28 + lVar13);
                  if (uVar4 < (ulonglong)plVar12[5]) {
                    uVar9 = 0xffffffff;
                  }
                  else if ((ulonglong)plVar12[5] < uVar4) {
                    uVar9 = 1;
                  }
                  else {
                    uVar4 = *(ulonglong *)(lVar10 + 0x30 + lVar13);
                    if (uVar4 < (ulonglong)plVar12[6]) {
                      uVar9 = 0xffffffff;
                    }
                    else if ((ulonglong)plVar12[6] < uVar4) {
                      uVar9 = 1;
                    }
                    else {
                      fVar1 = *(float *)(lVar10 + 0x88 + lVar13);
                      if (*(float *)(plVar12 + 0x11) <= fVar1) {
                        uVar9 = (uint)(fVar1 != *(float *)(plVar12 + 0x11));
                      }
                      else {
                        uVar9 = 0xffffffff;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar16 = iVar7 + 1;
        if (-1 < (int)uVar9) {
          iVar16 = iVar15;
          iVar8 = iVar7;
        }
        iVar15 = iVar16;
      } while (iVar16 < iVar8);
    }
    plVar17 = (longlong *)(lVar3 + 0x40);
    if (iVar16 < iVar6) {
      lVar13 = (longlong)iVar16;
      piVar11 = (int *)(*(longlong *)(lVar3 + 0x30) + lVar13 * 4);
      do {
        if (*piVar11 == *(int *)(param_1 + 0x18)) break;
        iVar16 = iVar16 + 1;
        lVar13 = lVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (lVar13 < iVar6);
    }
    if (iVar16 < iVar6) {
      iVar8 = (iVar6 - iVar16) + -1;
      if (iVar8 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar16 * 4),
                   (void *)(*(longlong *)(lVar3 + 0x30) + (longlong)(iVar16 + 1) * 4),
                   (longlong)iVar8 << 2);
        iVar6 = *(int *)(lVar3 + 0x38);
      }
      *(int *)(lVar3 + 0x38) = iVar6 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar3 + 0x30);
    }
    else {
      TArray<FSetElementId,FDefaultAllocator>::RemoveSingle(lVar3 + 0x30,(longlong)plVar12 + 0xd4);
    }
    iVar8 = *(int *)((longlong)plVar12 + 0xd4);
    if (*(int *)(lVar3 + 0x48) != *(int *)(lVar3 + 0x74)) {
      lVar13 = *plVar17;
      lVar14 = (longlong)iVar8 * 0xf0;
      lVar10 = *(longlong *)(lVar3 + 0x80);
      if (*(longlong *)(lVar3 + 0x80) == 0) {
        lVar10 = lVar3 + 0x78;
      }
      piVar11 = (int *)((longlong)
                        (int)(*(int *)(lVar3 + 0x88) - 1U & *(uint *)(lVar14 + 0xec + lVar13)) * 4 +
                       lVar10);
      iVar6 = *piVar11;
      while (iVar6 != -1) {
        if (iVar6 == iVar8) {
          *piVar11 = *(int *)(lVar14 + 0xe8 + lVar13);
          break;
        }
        piVar11 = (int *)(lVar13 + 0xe8 + (longlong)iVar6 * 0xf0);
        iVar6 = *piVar11;
      }
    }
    plVar12 = (longlong *)((longlong)iVar8 * 0xf0 + *plVar17);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (plVar12 + 2);
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(plVar17,iVar8,1);
  }
  return;
}



// FUNCTION 141b0e760 Remove body=807 status=ok
// SIG undefined Remove(void)

void TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FElementHandle::Remove
               (longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x1c);
  lVar13 = (longlong)iVar8;
  plVar12 = (longlong *)((longlong)*(int *)(param_1 + 0x18) * 200 + *(longlong *)(lVar2 + 0x40));
  if (param_2 != '\0') {
    FUN_141d78430(*(undefined8 *)(lVar13 * 0x38 + 8 + plVar12[2]),param_1);
  }
  iVar16 = 0;
  *(undefined8 *)(plVar12[2] + 8 + lVar13 * 0x38) = 0;
  iVar6 = *(int *)((longlong)plVar12 + 0x1c);
  iVar15 = *(int *)((longlong)plVar12 + 0xc);
  TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
  ::RemoveAtSwapImpl(plVar12 + 2,iVar8,1,1);
  iVar5 = (int)plVar12[1];
  iVar4 = (iVar5 - iVar8) + -1;
  if (0 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*plVar12 + lVar13 * 4),(void *)(*plVar12 + (longlong)(iVar5 - iVar4) * 4),
               (longlong)iVar4 << 2);
    iVar5 = (int)plVar12[1];
  }
  *(int *)(plVar12 + 1) = iVar5 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar12);
  DAT_146a81050 =
       DAT_146a81050 -
       (ulonglong)
       (uint)((iVar6 * 0xe + iVar15) * 4 +
             (*(int *)((longlong)plVar12 + 0x1c) * 0xe + *(int *)((longlong)plVar12 + 0xc)) * -4);
  iVar6 = (int)plVar12[3];
  if (iVar8 < iVar6) {
    *(int *)(*(longlong *)(plVar12[2] + 0x30 + lVar13 * 0x38) + 0x1c) = iVar8;
    iVar6 = (int)plVar12[3];
  }
  if (iVar6 == 0) {
    DAT_146a81050 =
         DAT_146a81050 +
         ((-0xc0 - (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0x1c) * 0x38)) -
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0xc) << 2));
    iVar6 = *(int *)(lVar2 + 0x38);
    iVar8 = iVar6 + -1;
    if (0 < iVar8) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      iVar15 = iVar16;
      do {
        iVar5 = (iVar8 + iVar15) / 2;
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 4) * 200;
        uVar3 = *(ulonglong *)(lVar10 + 0x60 + lVar13);
        if (uVar3 < (ulonglong)plVar12[0xc]) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = 1;
          if (uVar3 <= (ulonglong)plVar12[0xc]) {
            uVar3 = *(ulonglong *)(lVar10 + 0x28 + lVar13);
            if (uVar3 < (ulonglong)plVar12[5]) {
              uVar7 = 0xffffffff;
            }
            else if (uVar3 <= (ulonglong)plVar12[5]) {
              uVar3 = *(ulonglong *)(lVar10 + 0x30 + lVar13);
              if (uVar3 < (ulonglong)plVar12[6]) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)((ulonglong)plVar12[6] < uVar3);
              }
            }
          }
        }
        iVar16 = iVar5 + 1;
        if (-1 < (int)uVar7) {
          iVar16 = iVar15;
          iVar8 = iVar5;
        }
        iVar15 = iVar16;
      } while (iVar16 < iVar8);
    }
    if (iVar16 < iVar6) {
      lVar13 = (longlong)iVar16;
      piVar11 = (int *)(*(longlong *)(lVar2 + 0x30) + lVar13 * 4);
      do {
        if (*piVar11 == *(int *)(param_1 + 0x18)) break;
        iVar16 = iVar16 + 1;
        lVar13 = lVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (lVar13 < iVar6);
    }
    plVar1 = (longlong *)(lVar2 + 0x30);
    if (iVar16 < iVar6) {
      iVar8 = *(int *)(lVar2 + 0x38);
      iVar6 = (iVar8 - iVar16) + -1;
      if (iVar6 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar16 * 4),
                   (void *)(*plVar1 + (longlong)(iVar16 + 1) * 4),(longlong)iVar6 << 2);
        iVar8 = *(int *)(lVar2 + 0x38);
      }
      *(int *)(lVar2 + 0x38) = iVar8 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    else {
      TArray<FSetElementId,FDefaultAllocator>::RemoveSingle(plVar1,(longlong)plVar12 + 0xac);
    }
    iVar8 = *(int *)((longlong)plVar12 + 0xac);
    if (*(int *)(lVar2 + 0x48) != *(int *)(lVar2 + 0x74)) {
      lVar13 = *(longlong *)(lVar2 + 0x40);
      lVar14 = (longlong)iVar8 * 200;
      lVar9 = (longlong)(int)(*(int *)(lVar2 + 0x88) - 1U & *(uint *)(lVar14 + 0xc4 + lVar13));
      lVar10 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar10 = lVar2 + 0x78;
      }
      piVar11 = (int *)(lVar10 + lVar9 * 4);
      iVar6 = *(int *)(lVar10 + lVar9 * 4);
      while (iVar6 != -1) {
        if (iVar6 == iVar8) {
          *piVar11 = *(int *)(lVar14 + 0xc0 + lVar13);
          break;
        }
        piVar11 = (int *)(lVar13 + 0xc0 + (longlong)iVar6 * 200);
        iVar6 = *piVar11;
      }
    }
    plVar12 = (longlong *)((longlong)iVar8 * 200 + *(longlong *)(lVar2 + 0x40));
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (plVar12 + 2);
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(lVar2 + 0x40,iVar8,1);
  }
  return;
}



// FUNCTION 141b0ea90 FUN_141b0ea90 body=15122 status=ok
// SIG undefined FUN_141b0ea90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b0ea90(longlong **param_1,longlong param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  longlong **pplVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong **pplVar16;
  byte *pbVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  short *psVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  byte bVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  undefined1 uVar30;
  longlong **pplVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  bool bVar35;
  float fVar36;
  undefined4 uVar37;
  undefined1 auStack_af8 [32];
  longlong **local_ad8;
  undefined1 *local_ad0;
  undefined8 *local_ac8;
  undefined4 local_ac0;
  longlong local_ab8;
  undefined8 *local_ab0;
  undefined1 local_aa8;
  char local_aa7;
  char local_aa6;
  char local_aa5;
  char local_aa4;
  char local_aa3;
  char local_aa2;
  byte local_aa1;
  int local_aa0;
  int local_a9c;
  char local_a98;
  byte local_a97;
  byte local_a96;
  char local_a95;
  char local_a94;
  longlong local_a90;
  undefined1 local_a88;
  char local_a87;
  char local_a86;
  uint local_a84;
  longlong *local_a80;
  longlong **local_a78;
  longlong local_a70;
  undefined8 local_a68;
  longlong *local_a60;
  longlong local_a58;
  longlong *local_a50;
  longlong *local_a48;
  undefined8 *local_a40;
  undefined8 *local_a38;
  float local_a30;
  float local_a2c;
  undefined4 local_a28;
  undefined8 *local_a20;
  void *local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined2 local_9f8;
  undefined6 uStack_9f6;
  longlong **local_9f0;
  longlong local_9e8;
  undefined8 *local_9e0;
  longlong *local_9d8;
  undefined8 *local_9d0;
  undefined4 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  longlong local_9b0 [3];
  undefined1 local_998 [8];
  undefined8 local_990;
  undefined8 local_988;
  longlong local_980;
  longlong local_978;
  longlong local_970;
  longlong local_968 [2];
  undefined4 local_958;
  undefined4 local_954;
  undefined8 local_950;
  undefined4 local_948;
  undefined4 local_944;
  undefined8 local_940;
  undefined4 local_938;
  undefined4 local_934;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918 [2];
  LARGE_INTEGER local_908;
  longlong **local_900;
  LARGE_INTEGER local_8f8;
  LARGE_INTEGER local_8f0;
  longlong local_8e8 [2];
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined8 local_8c8;
  longlong local_8c0 [7];
  undefined1 *local_888;
  undefined1 **ppuStack_880;
  undefined1 *local_878;
  char local_870;
  longlong **local_868;
  longlong local_860;
  longlong *local_858;
  undefined1 *local_850;
  longlong *local_848;
  undefined1 local_840;
  char local_83f;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined1 *local_7f8;
  undefined1 **ppuStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined1 local_7a8 [304];
  undefined1 local_678 [304];
  longlong local_548 [4];
  undefined8 local_528;
  undefined8 local_520;
  longlong local_518 [5];
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  longlong local_4d0;
  undefined4 local_4c8;
  longlong local_4c0;
  undefined8 local_4b8;
  undefined1 local_4a8 [32];
  undefined8 local_488;
  undefined8 local_480;
  undefined1 local_478 [32];
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_448 [192];
  longlong local_388;
  undefined8 local_380;
  undefined1 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined1 local_2f0;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_af8;
  local_9f0 = param_1;
  if ((0 < DAT_1468c21e8) && (*(char *)((longlong)param_1 + 0x26b) == '\0')) {
    (**(code **)(*param_1[1] + 0x290))();
  }
  lVar12 = (**(code **)(*param_1[1] + 0xe0))();
  if ((lVar12 != 0) &&
     (lVar12 = (**(code **)(*param_1[1] + 0xe0))(), *(char *)(lVar12 + 0xd2) != '\0')) {
    QueryPerformanceCounter(&local_8f8);
    *(float *)((longlong)param_1 + 100) =
         (float)(((double)local_8f8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                (double)*(float *)(param_1 + 0xc));
    QueryPerformanceCounter(&local_8f0);
    *(float *)(param_1 + 0xc) = (float)((double)local_8f0.QuadPart * DAT_1468b02f8 + 16777216.0);
    QueryPerformanceCounter(&local_908);
    *(float *)(param_1 + 0xd) = (float)((double)local_908.QuadPart * DAT_1468b02f8 + 16777216.0);
  }
  *(undefined4 *)((longlong)param_1 + 0x274) = 1;
  uVar29 = 0;
  _DAT_1464c2fd8 = *(undefined4 *)(param_1 + 0x4e);
  if (((*(char *)((longlong)param_1 + 0x26b) != '\0') &&
      (*(char *)((longlong)param_1 + 0x26d) != '\0')) &&
     (uVar33 = uVar29, uVar22 = uVar29, 0 < *(int *)(param_1 + 0x19))) {
    do {
      uVar15 = *(undefined8 *)((longlong)param_1[0x18] + uVar33 + 0x1ab8);
      *(undefined8 *)((longlong)param_1[0x18] + uVar33 + 0x1ab8) = 0;
      FMemory::operator_delete(uVar15,0xf30);
      uVar27 = (int)uVar22 + 1;
      uVar33 = uVar33 + 0x30d0;
      uVar22 = (ulonglong)uVar27;
    } while ((int)uVar27 < *(int *)(param_1 + 0x19));
  }
  FUN_141d6bf80(param_1);
  if (((DAT_1468b5000 != 0) && (cVar8 = (**(code **)(*param_1[1] + 0xf0))(), cVar8 == '\0')) &&
     (DAT_146ab6e8c != 0)) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  lVar12 = FSceneRenderTargets::Get(param_2);
  if (*(int *)((longlong)param_1 + 0x27c) == -1) {
    *(int *)((longlong)param_1 + 0x27c) = *(int *)(lVar12 + 0x440);
  }
  else if (*(int *)((longlong)param_1 + 0x27c) < *(int *)(lVar12 + 0x440)) {
    *(undefined1 *)((longlong)param_1 + 0x26c) = 1;
    return;
  }
  lVar13 = DAT_146a10120;
  local_a90 = lVar12;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar11 = GetCurrentThreadId();
    uVar33 = 4;
    if (DVar11 == DAT_1468c21c0) goto LAB_141b0ecd6;
  }
  else {
LAB_141b0ecd6:
    uVar33 = uVar29;
  }
  if ((*(int *)(uVar33 + lVar13) == 2) ||
     ((*(int *)(uVar33 + lVar13) == 1 && (*(char *)((longlong)param_1 + 0x26a) == '\0')))) {
    FUN_141d06530(&PTR_PTR_1464c2560,param_2);
  }
  FUN_141cf37d0(lVar12);
  if (((ulonglong)param_1[7] & 0x1000) == 0) {
LAB_141b0ed1d:
    local_a98 = '\0';
  }
  else {
    cVar8 = FUN_141ac2820();
    local_a98 = '\x01';
    if (cVar8 == '\0') goto LAB_141b0ed1d;
  }
  FUN_141d7b8a0(param_1,param_2);
  if ((*(uint *)((longlong)param_1 + 0x3c) & 0x800000) == 0) {
    return;
  }
  local_9b0[2] = 0;
  local_8c0[2] = 0;
  local_8c0[3] = 0;
  FScopedGPUStatEvent::Begin(local_8c0 + 2,param_2,&DAT_146a10148,local_9b0 + 2);
  if ((DAT_1464c338c == '\0') || (DAT_1464c3388 < *(int *)(param_1 + 0x54))) {
    FUN_141dd3910(&PTR_PTR_1464c32e0,param_2);
  }
  lVar13 = (**(code **)(*param_1[1] + 0xe0))();
  if ((lVar13 == 0) ||
     ((lVar13 = (**(code **)(*param_1[1] + 0xe0))(), lVar13 != 0 &&
      (lVar13 = (**(code **)(*param_1[1] + 0xe0))(), *(char *)(lVar13 + 0xd1) == '\0')))) {
    FUN_141cda560(lVar12,param_2,param_1);
  }
  local_458 = 0;
  local_518[0] = 0;
  local_518[1] = 0;
  local_450 = 0;
  local_528 = 0;
  local_520 = 0;
  local_488 = 0;
  local_480 = 0;
  local_518[2] = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0 = 0xffffffff;
  local_4dc = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  if (*(int *)(param_2 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
  }
  local_ad0 = local_4a8;
  local_ad8 = (longlong **)local_548;
  cVar8 = FUN_141d9e5e0(param_1,param_2,local_518);
  local_a18 = (void *)0x0;
  local_a10 = 0;
  local_a95 = cVar8;
  local_a9c = FUN_141e03090(param_1,param_2);
  local_aa8 = DAT_146b09435;
  DAT_146b09435 = 1;
  cVar9 = FUN_141636a40();
  if ((cVar9 != '\0') &&
     (((DAT_1464c9c18 != '\0' || (DAT_146ab6383 == '\0')) && (0 < *(int *)(param_1 + 0x19))))) {
    do {
      FViewInfo::GetEyeAdaptation(param_1[0x18] + (longlong)(int)uVar29 * 0x61a,param_2);
      uVar27 = (int)uVar29 + 1;
      uVar29 = (ulonglong)uVar27;
    } while ((int)uVar27 < *(int *)(param_1 + 0x19));
  }
  if ((DAT_1464c17c0 != 0) && (cVar9 = (**(code **)(*param_1[1] + 0xf0))(), cVar9 == '\0')) {
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    FRHICommandListBase::WaitForTasks(param_2,1);
    FUN_141ec65b0();
    FUN_141ec6070(0);
  }
  if (param_1[1] == (longlong *)0x0) {
LAB_141b0f12b:
    if (DAT_1464c17c0 == 0) goto LAB_141b0f134;
  }
  else {
    cVar9 = IsRHIDeviceIntel();
    if (cVar9 != '\0') goto LAB_141b0f12b;
    lVar13 = param_1[1][1];
    uVar37 = (&DAT_1464c9c48)[(int)lVar13];
    if (((DAT_1464c179c == 0) || (DAT_1464c17a0 < 1)) ||
       ((DAT_146ab62dc != '\0' ||
        ((((cVar9 = IsRHIDeviceIntel(), cVar9 != '\0' || ((int)lVar13 < 3)) ||
          (cVar9 = FUN_141b03c60(uVar37), cVar9 == '\0')) ||
         (cVar9 = FUN_141b190f0(param_1), cVar9 == '\0')))))) {
      bVar35 = false;
    }
    else {
      bVar35 = true;
    }
    cVar9 = FUN_141b19200(param_1);
    cVar10 = FUN_141ae21c0(param_1);
    if ((cVar9 == '\0') && (!bVar35)) {
      cVar9 = FUN_141b46090(param_1);
      if ((cVar9 == '\0') && (cVar10 == '\0')) goto LAB_141b0f12b;
    }
    FUN_142426380(&PTR_PTR_146532040);
    FUN_141b472d0(param_1,param_2);
    if ((DAT_1464c17c0 == 0) && (*(int *)(param_2 + 0x14) != 0)) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    iVar23 = 0;
    if (0 < *(int *)(param_1 + 0x19)) {
      do {
        FUN_141b736f0(param_1[0x18] + (longlong)iVar23 * 0x61a + 0x603);
        cVar9 = FUN_141b19200(param_1);
        if (cVar9 != '\0') {
          plVar14 = param_1[1];
          lVar13 = plVar14[0x22a];
          uVar37 = (undefined4)plVar14[0xbfd];
          if (((lVar13 != 0) && (*(char *)(lVar13 + 0x27) != '\0')) &&
             (*(char *)(lVar13 + 0x28) == '\0')) {
            uVar37 = *(undefined4 *)(lVar13 + 0x10c);
          }
          local_ad8 = (longlong **)(param_1[0x18] + (longlong)iVar23 * 0x61a + 0x392);
          FUN_141b76cc0(param_2,param_1[0x18] + (longlong)iVar23 * 0x61a,plVar14,uVar37);
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < *(int *)(param_1 + 0x19));
    }
    if (DAT_1464c17c0 != 0) {
      if (*(int *)(param_2 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
      goto LAB_141b0f12b;
    }
LAB_141b0f134:
    cVar9 = (**(code **)(*param_1[1] + 0xf0))();
    if (cVar9 == '\0') {
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      FUN_141ec65b0();
      FUN_141ec6070(0);
    }
  }
  cVar9 = (**(code **)(*param_1[1] + 0xf0))();
  if ((cVar9 == '\0') && (0 < (int)*(uint *)(param_1 + 3))) {
    plVar14 = param_1[2];
    uVar29 = (ulonglong)*(uint *)(param_1 + 3);
    iVar23 = 0;
    do {
      iVar32 = iVar23 + 1;
      if (*(char *)(*plVar14 + 0x1a98) == '\0') {
        iVar32 = iVar23;
      }
      plVar14 = plVar14 + 1;
      uVar29 = uVar29 - 1;
      iVar23 = iVar32;
    } while (uVar29 != 0);
    if (0 < iVar32) {
      FUN_141dd8740(param_1,param_2);
    }
  }
  puVar28 = *(undefined8 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_a38 = puVar28;
  if ((*(int *)(puVar28 + 7) < DAT_146a14eb0) &&
     (_Init_thread_header(&DAT_146a14eb0), DAT_146a14eb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar14 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    lVar13 = 0;
    if (plVar14 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    DAT_146a14ea8 = lVar13;
    _Init_thread_footer(&DAT_146a14eb0);
  }
  local_aa4 = '\x01';
  local_aa3 = '\0';
  uVar37 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x54)];
  iVar23 = FUN_1419ef5f0(uVar37);
  if (((DAT_146ac3ac0 == 0) || (iVar23 < 3)) && (cVar9 = FUN_141ee4480(uVar37), cVar9 == '\0')) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  if ((((*(uint *)((longlong)param_1 + 0x3c) >> 0xc & 1) == 0) || (*(int *)(param_1 + 0x54) < 2)) ||
     (((*(uint *)((longlong)param_1 + 0x3c) >> 0xd & 1) == 0 || (cVar9 == '\0')))) {
LAB_141b0f315:
    bVar26 = 0;
  }
  else {
    iVar23 = 0;
    if ((int)*(uint *)(param_1 + 3) < 1) goto LAB_141b0f315;
    plVar14 = param_1[2];
    uVar29 = (ulonglong)*(uint *)(param_1 + 3);
    do {
      iVar32 = iVar23 + 1;
      if (*(char *)(*plVar14 + 0x1a98) == '\0') {
        iVar32 = iVar23;
      }
      iVar23 = iVar32;
      plVar14 = plVar14 + 1;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
    if (iVar23 < 1) goto LAB_141b0f315;
    bVar26 = 1;
  }
  local_a84 = local_a84 & 0xffffff00;
  local_aa2 = cVar9;
  local_aa1 = bVar26;
  cVar10 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)(param_1 + 0x54)]);
  if (cVar10 == '\0') {
    if (cVar9 == '\0') {
      uVar29 = (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) >> 0xc) & 0xffffffffffffff01;
    }
    else {
      uVar29 = (ulonglong)bVar26;
    }
    cVar9 = FDeferredShadingSceneRenderer::ShouldRenderVolumetricFog(param_1);
    if ((cVar9 != '\0') || (bVar26 = 0, *(int *)(param_1 + 4) != 3)) {
      bVar26 = 1;
    }
    local_a84 = (uint)CONCAT71((int7)(uVar29 >> 8),(byte)uVar29 | bVar26);
  }
  if (DAT_146a14ea8 != 0) {
    iVar23 = *(int *)(DAT_146a14ea8 + 4);
    if (iVar23 == 0) {
      if ((*(uint *)((longlong)param_1 + 0x3c) & 0x20000) == 0) {
        iVar23 = 1;
      }
      if (iVar23 != 0) goto LAB_141b0f393;
      local_aa3 = '\0';
LAB_141b0f3b4:
      local_aa4 = '\0';
    }
    else {
LAB_141b0f393:
      if (iVar23 == 1) {
        local_aa4 = '\x01';
        local_aa3 = '\0';
      }
      else if (iVar23 == 2) {
        local_aa3 = '\x01';
        goto LAB_141b0f3b4;
      }
    }
  }
  cVar9 = FUN_141d66670(param_1,*(undefined4 *)(param_1 + 0x54));
  if (cVar9 == '\0') {
    local_a80._0_4_ = 0;
  }
  else {
    local_a80._0_4_ = 3;
    if (*(int *)(param_1 + 0x5c) - 2U < 2) {
      local_a80._0_4_ = 2;
      if ((*(int *)(puVar28 + 7) < DAT_146a14ec0) &&
         (_Init_thread_header(&DAT_146a14ec0), DAT_146a14ec0 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146a14eb8 =
             (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HZBOcclusion");
        _Init_thread_footer(&DAT_146a14ec0);
      }
      iVar23 = (**(code **)(*DAT_146a14eb8 + 0x68))();
      if (((*(int *)(DAT_146a0ffd0 + 4) != 0) && (*(char *)(lVar12 + 0x398) == '\0')) &&
         (local_a80._0_4_ = 2, iVar23 == 0)) {
        local_a80._0_4_ = 1;
      }
    }
  }
  if (cVar8 == '\0') {
    TBaseMulticastDelegate<void>::Broadcast(DAT_146b17150 + 0x9b8);
    uVar15 = FUN_141ee2d40();
    FUN_141edffd0(uVar15);
    uVar15 = FUN_141ee2ba0();
    FUN_141edfcb0(uVar15);
    uVar15 = FUN_141ee2c80();
    FUN_141edfd60(uVar15);
  }
  pplVar31 = param_1 + 0x18;
  plVar14 = *pplVar31;
  if (((*(char *)((longlong)plVar14 + 0x1204) == '\0') &&
      (*(char *)((longlong)plVar14 + 0x1202) == '\0')) &&
     (*(char *)((longlong)plVar14 + 0x1203) == '\0')) {
    local_a94 = '\x01';
  }
  else {
    local_a94 = '\0';
  }
  plVar14 = param_1[1];
  iVar23 = *(int *)(DAT_146a100b8 + 4);
  if (((plVar14[3] == 0) || (*(int *)(param_1 + 0x19) < 1)) || (local_a94 == '\0')) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  local_900 = pplVar31;
  if ((iVar23 < 1) && (cVar9 != '\0')) {
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    (**(code **)(*(longlong *)param_1[1][3] + 0x40))
              ((longlong *)param_1[1][3],param_2,*pplVar31 + 0x398);
    plVar14 = param_1[1];
  }
  local_878 = &local_a88;
  local_a88 = 0;
  local_858 = local_518;
  local_850 = local_478;
  local_848 = local_548;
  local_870 = cVar8;
  local_868 = param_1;
  local_860 = param_2;
  local_840 = 0 < iVar23;
  local_83f = cVar9;
  lVar12 = (**(code **)(*plVar14 + 0x220))();
  if (lVar12 != 0) {
    FGPUSkinCache::TransitionAllToReadable(lVar12,param_2);
  }
  if (0 < (int)local_520) {
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x48))(plVar14,local_548,DAT_1464a8210);
  }
  cVar8 = '\0';
  local_a70 = 0;
  local_a68 = 0;
  local_aa5 = '\0';
  if ((*(int *)(puVar28 + 7) < DAT_146a14e90) &&
     (_Init_thread_header(&DAT_146a14e90), DAT_146a14e90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a14e88 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HZBOcclusion");
    _Init_thread_footer(&DAT_146a14e90);
  }
  iVar23 = (**(code **)(*DAT_146a14e88 + 0x68))();
  local_aa6 = iVar23 != 0;
  local_aa0 = 0;
  if (0 < *(int *)(param_1 + 0x19)) {
    local_a58 = 0;
    cVar9 = local_aa6;
    do {
      iVar23 = local_aa0;
      plVar14 = *pplVar31 + local_a58 * 0x61a;
      cVar10 = FUN_141d4f490(plVar14);
      cVar8 = FUN_141ae24b0(plVar14);
      if (((cVar8 != '\0') || (cVar9 != '\0')) || (cVar8 = local_aa5, cVar10 != '\0')) {
        local_aa5 = '\x01';
        FUN_141d5cd00(param_2,plVar14);
        lVar12 = plVar14[0x5f1];
        iVar32 = 0;
        cVar9 = local_aa6;
        cVar8 = '\x01';
        if (0 < *(int *)(lVar12 + 0x30)) {
          lVar13 = 0;
          do {
            uVar29 = local_a68;
            lVar25 = (longlong)(int)local_a68;
            lVar18 = *(longlong *)(lVar12 + 0x28);
            if (*(longlong *)(lVar12 + 0x28) == 0) {
              lVar18 = lVar12 + 0x20;
            }
            iVar23 = (int)local_a68 + 1;
            uVar15 = *(undefined8 *)(lVar18 + lVar13);
            local_a68 = CONCAT44(local_a68._4_4_,iVar23);
            if (local_a68._4_4_ < iVar23) {
              FUN_140822430(&local_a70,uVar29 & 0xffffffff);
            }
            iVar32 = iVar32 + 1;
            lVar13 = lVar13 + 8;
            *(undefined8 *)(local_a70 + lVar25 * 8) = uVar15;
            pplVar31 = local_900;
            iVar23 = local_aa0;
            cVar9 = local_aa6;
            cVar8 = local_aa5;
          } while (iVar32 < *(int *)(lVar12 + 0x30));
        }
      }
      local_aa0 = iVar23 + 1;
      local_a58 = local_a58 + 1;
      param_1 = local_9f0;
    } while (local_aa0 < *(int *)(pplVar31 + 1));
  }
  cVar9 = FUN_141d76d60();
  if ((cVar9 == '\0') || (cVar8 == '\0')) {
    bVar35 = false;
  }
  else {
    bVar35 = true;
  }
  cVar8 = FUN_141ab3c00(param_2,pplVar31,&local_a70);
  puVar28 = local_a38;
  iVar23 = local_a9c;
  if (((bVar35) || (cVar8 != '\0')) || (local_aa7 = '\0', local_a9c == 2)) {
    local_aa7 = '\x01';
  }
  local_a40 = (undefined8 *)0x0;
  if ((*(int *)(local_a38 + 7) < DAT_146a14ed0) &&
     (_Init_thread_header(&DAT_146a14ed0), DAT_146a14ed0 == -1)) {
    FName::FName(&DAT_146a14ec8,L"ZPrePassAsyncBeginFence",1);
    _Init_thread_footer(&DAT_146a14ed0);
  }
  local_a20 = (undefined8 *)0x0;
  if ((*(int *)(puVar28 + 7) < DAT_146a14ee0) &&
     (_Init_thread_header(&DAT_146a14ee0), DAT_146a14ee0 == -1)) {
    FName::FName(&DAT_146a14ed8,L"ZPrePassAsyncEndFence",1);
    _Init_thread_footer(&DAT_146a14ee0);
  }
  local_a58 = 0;
  if (iVar23 == 1) {
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_9d0,&DAT_146a14ec8);
    local_a38 = local_9d0;
    local_a20 = local_9d0;
    local_9d0 = (undefined8 *)0x0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_9d0);
    (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_9e8,&DAT_146a14ed8);
    lVar12 = local_9e8;
    local_a58 = local_9e8;
    local_9e8 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_9e8);
    pvVar7 = local_a18;
    puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_aa0 = (int)local_a10;
    iVar23 = (int)local_a10 * 8;
    uVar29 = (longlong)puVar28 + (longlong)iVar23;
    if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar23 + 8);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar29 = (longlong)puVar28 + (longlong)iVar23;
    }
    iVar23 = local_aa0;
    lVar13 = (longlong)local_aa0;
    *(ulonglong *)(param_2 + 0x30) = uVar29;
    if (0 < local_aa0) {
      puVar20 = puVar28;
      do {
        *puVar20 = *(undefined8 *)(((longlong)pvVar7 - (longlong)puVar28) + (longlong)puVar20);
        puVar20 = puVar20 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar19 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar20) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar19 + 6;
    }
    puVar6 = local_a38;
    *(undefined8 **)(param_2 + 0x30) = puVar20;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar19;
    *(undefined8 **)(param_2 + 8) = puVar19 + 1;
    puVar19[3] = puVar28;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_144d91e60;
    puVar19[5] = local_a38;
    *(int *)(puVar19 + 2) = iVar23;
    puVar19[4] = 2;
    puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar28 = puVar20 + 3;
    if (DAT_146ab7068 < puVar28) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
      puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 3;
    }
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    DAT_146ab7060 = puVar28;
    *DAT_146ab7038 = puVar20;
    DAT_146ab7038 = puVar20 + 1;
    *DAT_146ab7038 = 0;
    *puVar20 = &PTR_LAB_144dc9d10;
    puVar20[2] = puVar6;
    FUN_141e01310(param_1,&DAT_146ab7030);
    pvVar7 = local_a18;
    iVar23 = (int)local_a10;
    lVar13 = (longlong)(int)local_a10;
    puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    iVar32 = (int)local_a10 * 8;
    puVar28 = (undefined8 *)((longlong)puVar20 + (longlong)iVar32);
    if (DAT_146ab7068 < puVar28) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,iVar32 + 8);
      puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar28 = (undefined8 *)((longlong)puVar20 + (longlong)iVar32);
    }
    DAT_146ab7060 = puVar28;
    if (0 < iVar23) {
      puVar28 = puVar20;
      do {
        *puVar28 = *(undefined8 *)(((longlong)pvVar7 - (longlong)puVar20) + (longlong)puVar28);
        puVar28 = puVar28 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar28 = puVar19 + 6;
    if (DAT_146ab7068 < puVar28) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
      puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 6;
    }
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    DAT_146ab7060 = puVar28;
    *DAT_146ab7038 = puVar19;
    DAT_146ab7038 = puVar19 + 1;
    puVar19[3] = puVar20;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_144dc9d00;
    *(undefined4 *)((longlong)puVar19 + 0x24) = 1;
    *(int *)(puVar19 + 2) = iVar23;
    *(undefined4 *)(puVar19 + 4) = 0;
    puVar19[5] = lVar12;
    FUN_141ec93f0(&DAT_146ab7030);
    iVar23 = local_a9c;
  }
  lVar12 = 0;
  puVar28 = (undefined8 *)0x0;
  if ((int)local_480 != 0) {
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x48))(plVar14,local_4a8,DAT_1464a8210);
    puVar28 = local_a40;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  iVar32 = FSceneViewFamily::GetFeatureLevel(param_1 + 2);
  if ((((uint)(&DAT_1464c9c48)[iVar32] < 0x19) &&
      ((0x1000d00U >> ((&DAT_1464c9c48)[iVar32] & 0x1f) & 1) != 0)) ||
     ((*(int *)(param_1 + 0x5c) == 0 && (*(char *)((longlong)param_1 + 0x2e4) == '\0')))) {
    FUN_141afbd90(&local_878);
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    local_a97 = FUN_141b143c0(param_1,param_2);
  }
  else {
    ppuStack_880 = &local_878;
    local_888 = &LAB_141afdaa0;
    local_7f8 = &LAB_141afdaa0;
    ppuStack_7f0 = ppuStack_880;
    local_a97 = FUN_141b13280(param_1,param_2,&local_7f8);
    if (local_aa7 != '\0') {
      if (iVar23 == 2) {
        iVar23 = (int)local_a10;
        lVar13 = (longlong)(int)local_a10;
        if ((int)local_a10 != 0) {
          if (local_a68._4_4_ < (int)local_a10 + (int)local_a68) {
            FUN_140848da0(&local_a70);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(local_a70 + (longlong)(int)local_a68 * 8),local_a18,lVar13 << 3);
          local_a68 = CONCAT44(local_a68._4_4_,(int)local_a68 + iVar23);
        }
      }
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar13 + 0x38) < DAT_146a14ef0) &&
         (_Init_thread_header(&DAT_146a14ef0), DAT_146a14ef0 == -1)) {
        FName::FName(&DAT_146a14ee8,L"PostZPrePassBeginComputeFence",1);
        _Init_thread_footer(&DAT_146a14ef0);
      }
      (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,&local_9e0,&DAT_146a14ee8);
      local_a40 = local_9e0;
      local_9e0 = (undefined8 *)0x0;
      if (puVar28 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar28 + 1);
        iVar23 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          if ((*(char *)(puVar28 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
            LOCK();
            bVar35 = *(int *)((longlong)puVar28 + 0xc) == 0;
            if (bVar35) {
              *(int *)((longlong)puVar28 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar35) {
              uVar27 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar27 != 0) {
                lVar12 = (&DAT_1468a81f8)[uVar27 >> 0xe] + (ulonglong)(uVar27 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar12 + 8) = puVar28;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar27);
            }
          }
          else {
            (**(code **)*puVar28)(puVar28,1);
          }
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_9e0);
      if ((*(int *)(lVar13 + 0x38) < DAT_146a14f00) &&
         (_Init_thread_header(&DAT_146a14f00), DAT_146a14f00 == -1)) {
        FName::FName(&DAT_146a14ef8,L"PostZPrePassEndComputeFence",1);
        _Init_thread_footer(&DAT_146a14f00);
      }
      (**(code **)(*DAT_146ab6358 + 0xd0))(DAT_146ab6358,local_998,&DAT_146a14ef8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x5e,local_998);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_998);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_8c8 = *(undefined8 *)(*(longlong *)(local_a90 + 0x60) + 8);
      puVar28 = puVar20 + 1;
      if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
        puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar28 = puVar20 + 1;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar28;
      *puVar20 = local_8c8;
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar28 = puVar19 + 5;
      }
      lVar12 = local_a70;
      *(undefined8 **)(param_2 + 0x30) = puVar28;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar19;
      *(undefined8 **)(param_2 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_143f59470;
      puVar19[3] = puVar20;
      *(undefined4 *)(puVar19 + 4) = 0;
      *(undefined4 *)(puVar19 + 2) = 1;
      *(undefined1 *)((longlong)puVar19 + 0x24) = 1;
      iVar23 = (int)local_a68;
      lVar13 = (longlong)(int)local_a68;
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_a38 = local_a40;
      iVar32 = (int)local_a68 * 8;
      uVar29 = (longlong)iVar32 + (longlong)puVar28;
      if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar32 + 8);
        puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar29 = (longlong)iVar32 + (longlong)puVar28;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar29;
      if (0 < iVar23) {
        puVar20 = puVar28;
        do {
          *puVar20 = *(undefined8 *)((lVar12 - (longlong)puVar28) + (longlong)puVar20);
          puVar20 = puVar20 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar19 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar20) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar20 = puVar19 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar20;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar19;
      *(undefined8 **)(param_2 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_144d91e60;
      *(int *)(puVar19 + 2) = iVar23;
      puVar19[5] = local_a38;
      puVar19[3] = puVar28;
      puVar19[4] = 2;
    }
    if (0 < (int)*(uint *)(param_1 + 3)) {
      plVar14 = param_1[2];
      uVar29 = (ulonglong)*(uint *)(param_1 + 3);
      iVar23 = 0;
      do {
        lVar12 = *plVar14;
        plVar14 = plVar14 + 1;
        iVar32 = iVar23 + 1;
        if (*(char *)(lVar12 + 0x1a98) == '\0') {
          iVar32 = iVar23;
        }
        uVar29 = uVar29 - 1;
        iVar23 = iVar32;
      } while (uVar29 != 0);
      if (0 < iVar32) {
        FUN_141b02490(param_1,param_2);
        FUN_141b01bd0(param_1,param_2);
        FUN_141afe090(param_1,param_2);
      }
    }
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  local_a87 = FUN_141e0b970(param_1);
  local_aa6 = FUN_141e02d40();
  local_a86 = FUN_141ae37e0();
  if ((*(int *)(param_1 + 0x5c) == 3) && (*(int *)(DAT_146a100f0 + 4) == 0)) {
    local_a96 = 1;
  }
  else {
    local_a96 = 0;
  }
  local_aa0 = (local_a96 ^ 1) + 0x21;
  if (local_aa7 != '\0') {
    puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
    puVar28 = puVar20 + 3;
    if (DAT_146ab7068 < puVar28) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x20);
      puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 3;
    }
    _DAT_146ab7044 = _DAT_146ab7044 + 1;
    DAT_146ab7060 = puVar28;
    *DAT_146ab7038 = puVar20;
    DAT_146ab7038 = puVar20 + 1;
    *DAT_146ab7038 = 0;
    *puVar20 = &PTR_LAB_144dc9d10;
    puVar20[2] = local_a40;
    if (local_a9c == 2) {
      FUN_141e01310(param_1,&DAT_146ab7030);
    }
  }
  lVar12 = local_a90;
  local_954 = *(undefined4 *)((longlong)param_1 + 0x2b4);
  local_958 = *(undefined4 *)(param_1 + 0x56);
  local_968[1] = 0;
  FUN_141cf4990(local_a90,param_2,local_968 + 1);
  FUN_141cf4cf0(lVar12,param_2);
  FUN_141b58a10(param_1,param_2,(undefined1)local_a84);
  if ((local_aa2 != '\0') ||
     (cVar8 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)(param_1 + 0x54)]), cVar8 != '\0')) {
    FUN_141ceedd0(lVar12);
    FUN_141cd9780(lVar12,param_2);
  }
  FUN_141acc410(&DAT_1464c1750,param_2,param_1 + 0x18);
  iVar23 = (int)local_a80;
  local_a9c = *(int *)(DAT_146a10070 + 4);
  if ((int)local_a80 - 1U < 2) {
    local_aa7 = '\x01';
    if ((int)local_a80 == 2) {
      FUN_141b13200(param_1,param_2);
    }
    cVar8 = FUN_141d76d60();
    if ((cVar8 == '\0') || (local_aa5 == '\0')) {
      FUN_141b12d80(param_1,param_2);
    }
    else {
      FSceneRenderTargets::Get(&DAT_146ab7030);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146a14ea0) &&
         (_Init_thread_header(&DAT_146a14ea0), DAT_146a14ea0 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146a14e98 =
             (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HZBOcclusion");
        _Init_thread_footer(&DAT_146a14ea0);
      }
      iVar23 = (**(code **)(*DAT_146a14e98 + 0x68))();
      iVar32 = 0;
      if (0 < *(int *)(param_1 + 0x19)) {
        do {
          plVar14 = param_1[0x18];
          cVar8 = FUN_141d4f490(plVar14 + (longlong)iVar32 * 0x61a);
          cVar9 = FUN_141ae24b0(plVar14 + (longlong)iVar32 * 0x61a);
          if (((cVar9 != '\0') || (iVar23 != 0)) || (cVar8 != '\0')) {
            thunk_FUN_141d55e00(&DAT_146ab7030,param_1[0x18] + (longlong)iVar32 * 0x61a);
          }
          iVar32 = iVar32 + 1;
        } while (iVar32 < *(int *)(param_1 + 0x19));
      }
      cVar8 = FUN_141ab5cd0(&DAT_1464c1750,param_1 + 0x18);
      iVar23 = (int)local_a80;
      if (cVar8 != '\0') {
        FUN_141acc9c0(&DAT_1464c1750,param_2,param_1 + 0x18);
        iVar23 = (int)local_a80;
      }
    }
    lVar12 = local_a70;
    plVar14 = param_1[0x5e];
    if (plVar14 != (longlong *)0x0) {
      iVar23 = (int)local_a68;
      lVar13 = (longlong)(int)local_a68;
      puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      iVar32 = (int)local_a68 * 8;
      puVar28 = (undefined8 *)((longlong)iVar32 + (longlong)puVar20);
      if (DAT_146ab7068 < puVar28) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,iVar32 + 8);
        puVar20 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar28 = (undefined8 *)((longlong)iVar32 + (longlong)puVar20);
      }
      DAT_146ab7060 = puVar28;
      if (0 < iVar23) {
        puVar28 = puVar20;
        do {
          *puVar28 = *(undefined8 *)((lVar12 - (longlong)puVar20) + (longlong)puVar28);
          puVar28 = puVar28 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 6;
      if (DAT_146ab7068 < puVar28) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab7060,0x38);
        puVar19 = (undefined8 *)((longlong)DAT_146ab7060 + 7U & 0xfffffffffffffff8);
        puVar28 = puVar19 + 6;
      }
      _DAT_146ab7044 = _DAT_146ab7044 + 1;
      DAT_146ab7060 = puVar28;
      *DAT_146ab7038 = puVar19;
      DAT_146ab7038 = puVar19 + 1;
      *DAT_146ab7038 = 0;
      *puVar19 = &PTR_LAB_144dc9d00;
      *(undefined4 *)((longlong)puVar19 + 0x24) = 1;
      *(int *)(puVar19 + 2) = iVar23;
      puVar19[3] = puVar20;
      *(undefined4 *)(puVar19 + 4) = 0;
      puVar19[5] = plVar14;
      FUN_141ec93f0(&DAT_146ab7030);
      iVar23 = (int)local_a80;
    }
    local_990 = 0;
    local_8e8[0] = 0;
    local_8e8[1] = 0;
    FScopedGPUStatEvent::Begin(local_8e8,param_2,&DAT_146a10138);
    if (iVar23 == 2) {
      FUN_141b08000(param_1,param_2);
      FUN_141d689e0(param_1,param_2);
    }
    if (local_8e8[0] != 0) {
      FScopedGPUStatEvent::End(local_8e8);
    }
    cVar8 = '\x01';
  }
  else {
    cVar8 = '\0';
    local_aa7 = '\0';
  }
  iVar32 = local_a9c;
  pplVar31 = param_1 + 0x18;
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14);
  if ((cVar8 != '\0') && (iVar32 != 1)) {
    if ((local_a95 != '\0') && (0 < (int)local_520)) {
      plVar14 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar14 + 0x48))(plVar14,local_548,DAT_1464a8210);
    }
    FUN_141da84f0(param_1,param_2);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14);
  }
  if (2 < *(int *)(param_1 + 0x54)) {
    FUN_141b91790(param_1,param_2);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14);
  }
  iVar32 = *(int *)(DAT_146a10058 + 4);
  if (iVar32 < 0) {
LAB_141b105cd:
    FUN_141d70860(param_1);
  }
  else {
    iVar24 = 1;
    if (iVar32 < 1) {
      iVar24 = iVar32;
    }
    if (iVar24 == 0) goto LAB_141b105cd;
  }
  lVar12 = local_a58;
  if (iVar23 == 2) {
    if (local_a58 != 0) {
      puVar1 = (ulonglong *)(param_2 + 0x30);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
        FMemStackBase::AllocateNewChunk(puVar1);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar20 + 3;
      }
      *puVar1 = (ulonglong)puVar28;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar20;
      *(undefined8 **)(param_2 + 8) = puVar20 + 1;
      puVar20[1] = 0;
      *puVar20 = &PTR_LAB_144dc9cc0;
      puVar20[2] = lVar12;
      TRefCountPtr<FRHIIndexBuffer>::operator=(&local_a58);
    }
    plVar14 = param_1[0x5e];
    if (plVar14 != (longlong *)0x0) {
      puVar1 = (ulonglong *)(param_2 + 0x30);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
        FMemStackBase::AllocateNewChunk(puVar1);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar20 + 3;
      }
      *puVar1 = (ulonglong)puVar28;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar20;
      *(undefined8 **)(param_2 + 8) = puVar20 + 1;
      puVar20[1] = 0;
      *puVar20 = &PTR_LAB_144dc9cc0;
      puVar20[2] = plVar14;
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x5e);
    }
  }
  if (cVar8 != '\0') {
    FUN_141dfa630(param_1);
  }
  local_9d8 = (longlong *)0x0;
  if ((DAT_146ac3ac0 != 0) && (2 < *(int *)(param_1 + 0x54))) {
    FUN_141b6a3a0(param_1,param_2);
    FUN_141ad2370(param_1);
  }
  if (local_a98 != '\0') {
    iVar23 = 0;
    DAT_1464c1760 = 1;
    if (0 < *(int *)(param_1 + 0x19)) {
      do {
        FUN_141acd000(&DAT_1464c1750,param_2,*pplVar31 + (longlong)iVar23 * 0x61a);
        iVar23 = iVar23 + 1;
      } while (iVar23 < *(int *)(param_1 + 0x19));
    }
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14);
  }
  if (local_aa1 != 0) {
    iVar23 = 0;
    if (0 < *(int *)(param_1 + 0x19) * 3) {
      lVar12 = *(longlong *)(local_a90 + 0x1b8);
      if (*(longlong *)(local_a90 + 0x1b8) == 0) {
        lVar12 = local_a90 + 0x1a0;
      }
      lVar13 = 0;
      do {
        if (*(longlong *)(lVar13 + lVar12) == 0) {
LAB_141b107e3:
          FUN_141cdb1c0(local_a90,param_2,1);
          break;
        }
        lVar18 = *(longlong *)(local_a90 + 0x1e0);
        if (*(longlong *)(local_a90 + 0x1e0) == 0) {
          lVar18 = local_a90 + 0x1c8;
        }
        if (*(longlong *)(lVar18 + lVar13) == 0) goto LAB_141b107e3;
        iVar23 = iVar23 + 1;
        lVar13 = lVar13 + 8;
      } while (iVar23 < *(int *)(param_1 + 0x19) * 3);
    }
    if ((DAT_146a0e904 != 0) && (DAT_146ab62f0 != '\0')) {
      FUN_141dc4c40(param_1,param_2);
    }
  }
  lVar12 = (**(code **)(*param_1[1] + 0xe0))();
  if (((lVar12 == 0) ||
      (lVar12 = (**(code **)(*param_1[1] + 0xe0))(), *(char *)(lVar12 + 0xcb) == '\0')) ||
     (lVar12 = (**(code **)(*param_1[1] + 0xe0))(), *(char *)(lVar12 + 0xd3) == '\0')) {
    cVar9 = (local_a97 ^ 1) + 1;
    if (local_aa4 == '\0') {
      local_ac8 = &local_808;
      local_ad0 = (undefined1 *)((ulonglong)local_ad0 & 0xffffffffffffff00);
      local_ad8 = (longlong **)CONCAT44(local_ad8._4_4_,local_aa0);
      local_808 = 0;
      uStack_800 = 0x3f80000000000000;
      FUN_141cddcd0(local_a90,param_2,0,cVar9);
    }
    else {
      plVar14 = *pplVar31;
      local_818 = (undefined4)plVar14[0x1e6];
      uStack_814 = *(undefined4 *)((longlong)plVar14 + 0xf34);
      uStack_810 = (undefined4)plVar14[0x1e7];
      local_8d8 = (undefined4)plVar14[0x1e6];
      uStack_8d4 = *(undefined4 *)((longlong)plVar14 + 0xf34);
      uStack_8d0 = (undefined4)plVar14[0x1e7];
      uStack_8cc = 0x3f800000;
      uStack_80c = 0x3f800000;
      uVar15 = FSceneRenderTargets::Get(param_2);
      local_ac8 = (undefined8 *)&local_818;
      local_ad0 = (undefined1 *)((ulonglong)local_ad0 & 0xffffffffffffff00);
      local_ad8 = (longlong **)CONCAT44(local_ad8._4_4_,local_aa0);
      FUN_141cddcd0(uVar15,param_2,2,cVar9);
      plVar14 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
    }
  }
  else {
    local_ac8 = &local_838;
    local_ad0 = (undefined1 *)((ulonglong)local_ad0 & 0xffffffffffffff00);
    local_ad8 = (longlong **)CONCAT44(local_ad8._4_4_,local_aa0);
    local_838 = 0;
    uStack_830 = 0x3f80000000000000;
    FUN_141cddcd0(local_a90,param_2,0,0);
    plVar14 = *pplVar31;
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar37 = *(undefined4 *)((longlong)plVar14 + 0x1aac);
    lVar12 = plVar14[0x355];
    uVar4 = *(undefined4 *)((longlong)plVar14 + 0x1aa4);
    lVar13 = plVar14[0x354];
    puVar28 = puVar20 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar20 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar28;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_7b8 = 0;
    uStack_7b0 = 0;
    local_828 = 0;
    uStack_820 = 0;
    **(undefined8 **)(param_2 + 8) = puVar20;
    *(undefined8 **)(param_2 + 8) = puVar20 + 1;
    *(undefined4 *)((longlong)puVar20 + 0x14) = uVar4;
    *(undefined4 *)(puVar20 + 3) = 0;
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_143f59420;
    *(int *)(puVar20 + 2) = (int)lVar13;
    *(int *)((longlong)puVar20 + 0x1c) = (int)lVar12;
    *(undefined4 *)(puVar20 + 4) = uVar37;
    *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
    local_ab0 = &local_828;
    local_ab8 = param_1[0x18][0x355];
    local_ac0 = 0;
    local_ac8 = (undefined8 *)CONCAT71(local_ac8._1_7_,1);
    local_ad0 = (undefined1 *)((ulonglong)local_ad0 & 0xffffffff00000000);
    local_ad8 = (longlong **)CONCAT71(local_ad8._1_7_,1);
    FUN_141a149c0(param_2,1,1,&DAT_1464aa6e0);
    cVar8 = local_aa7;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
  FUN_141acf4c0(param_1,param_2,local_aa0,local_9d8);
  FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  iVar23 = 0;
  if (0 < *(int *)(param_1 + 0x13)) {
    lVar12 = 0;
    do {
      iVar32 = 0;
      if (0 < *(int *)(param_1 + 3)) {
        do {
          (**(code **)(**(longlong **)((longlong)param_1[0x12] + lVar12) + 0x40))
                    (*(longlong **)((longlong)param_1[0x12] + lVar12),param_2,
                     param_1[0x18] + (longlong)iVar32 * 0x61a);
          iVar32 = iVar32 + 1;
        } while (iVar32 < *(int *)(param_1 + 3));
      }
      iVar23 = iVar23 + 1;
      lVar12 = lVar12 + 0x10;
    } while (iVar23 < *(int *)(param_1 + 0x13));
  }
  lVar12 = local_a90;
  uVar29 = 0;
  if (local_a96 == 0) {
    local_944 = *(undefined4 *)((longlong)param_1 + 0x2b4);
    local_948 = *(undefined4 *)(param_1 + 0x56);
    local_950 = 0;
    FUN_141cf4990(local_a90,param_2,&local_950);
    FUN_141cf4cf0(lVar12,param_2);
  }
  plVar14 = *(longlong **)(lVar12 + 0xe8);
  *(undefined8 *)(lVar12 + 0xe8) = 0;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x30))();
  }
  plVar14 = *(longlong **)(lVar12 + 0xf0);
  *(undefined8 *)(lVar12 + 0xf0) = 0;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x30))();
  }
  plVar14 = *(longlong **)(lVar12 + 0xf8);
  *(undefined8 *)(lVar12 + 0xf8) = 0;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x30))();
  }
  plVar14 = *(longlong **)(lVar12 + 0x100);
  *(undefined8 *)(lVar12 + 0x100) = 0;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x30))();
  }
  plVar14 = *(longlong **)(lVar12 + 0x110);
  *(undefined8 *)(lVar12 + 0x110) = 0;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x30))();
  }
  if (local_aa3 != '\0') {
    FUN_141afdab0(param_1,param_2);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  FUN_141e0c4e0(param_1,param_2);
  FUN_141cf4cf0(lVar12,param_2);
  iVar23 = (int)local_a80;
  if (cVar8 == '\0') {
    if ((int)local_a80 == 3) {
      FUN_141b13200(param_1,param_2);
    }
    cVar9 = FUN_141b12d80(param_1,param_2);
    local_988 = 0;
    local_8c0[4] = 0;
    local_8c0[5] = 0;
    FScopedGPUStatEvent::Begin(local_8c0 + 4,param_2,&DAT_146a10138,&local_988);
    if (((cVar9 != '\0') || (iVar23 == 3)) && (FUN_141b08000(param_1,param_2), iVar23 == 3)) {
      FUN_141d689e0(param_1,param_2);
    }
    lVar12 = local_a90;
    if (local_8c0[4] != 0) {
      FScopedGPUStatEvent::End(local_8c0 + 4);
      lVar12 = local_a90;
    }
  }
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  if (local_aa2 != '\0') {
    FUN_141ce32a0(lVar12,param_2,local_aa0);
  }
  if ((cVar8 == '\0') || (local_a9c == 1)) {
    if ((local_a95 != '\0') && (0 < (int)local_520)) {
      plVar14 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar14 + 0x48))(plVar14,local_548,DAT_1464a8210);
    }
    FUN_141da84f0(param_1,param_2);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  if (cVar8 == '\0') {
    FUN_141dfa630(param_1,param_2);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  iVar23 = *(int *)(DAT_146a10058 + 4);
  if (-1 < iVar23) {
    iVar32 = 1;
    if (iVar23 < 1) {
      iVar32 = iVar23;
    }
    if (iVar32 == 1) {
      FUN_141d70860(param_1,param_2,1);
    }
  }
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  if (((param_1[1][3] != 0) && (0 < *(int *)(param_1 + 0x19))) && (local_a94 != '\0')) {
    FUN_141d05c90(lVar12,*(undefined4 *)(param_1 + 0x54),3,local_7a8);
    local_ad8 = (longlong **)CONCAT44(local_ad8._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_980,local_7a8,&DAT_146a632d8);
    local_978 = local_980;
    if (local_980 != 0) {
      LOCK();
      *(int *)(local_980 + 8) = *(int *)(local_980 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_980);
    local_ad8 = (longlong **)local_980;
    (**(code **)(*(longlong *)param_1[1][3] + 0x48))
              ((longlong *)param_1[1][3],param_2,param_1[0x18][4],&DAT_146a632b0);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_978);
  }
  plVar14 = (longlong *)GetRendererModule();
  local_a80 = plVar14;
  cVar8 = (**(code **)(*plVar14 + 0x118))(plVar14);
  if (cVar8 != '\0') {
    FUN_141d05c90(lVar12,*(undefined4 *)(param_1 + 0x54),3,local_678);
    local_ad8 = (longlong **)CONCAT44(local_ad8._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_970,local_678,&DAT_146a632d8);
    local_968[0] = local_970;
    if (local_970 != 0) {
      LOCK();
      *(int *)(local_970 + 8) = *(int *)(local_970 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_970);
    local_9c8 = 0x22;
    local_ad8 = (longlong **)CONCAT71(local_ad8._1_7_,1);
    FUN_141cdeb70(lVar12,param_2,2);
    uVar33 = uVar29;
    if (0 < *(int *)(param_1 + 0x19)) {
      do {
        lVar12 = (longlong)param_1[0x18] + uVar33;
        puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        local_a9c = *(int *)(lVar12 + 0x1aa8);
        uVar37 = *(undefined4 *)(lVar12 + 0x1aac);
        local_aa0 = *(int *)(lVar12 + 0x1aa4);
        local_a84 = *(uint *)(lVar12 + 0x1aa0);
        puVar28 = puVar20 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar28 = puVar20 + 5;
        }
        plVar14 = local_a80;
        *(undefined8 **)(param_2 + 0x30) = puVar28;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar20;
        *(undefined8 **)(param_2 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *puVar20 = &PTR_LAB_143f59420;
        *(uint *)(puVar20 + 2) = local_a84;
        *(undefined4 *)(puVar20 + 4) = uVar37;
        *(int *)((longlong)puVar20 + 0x14) = local_aa0;
        *(undefined4 *)(puVar20 + 3) = 0;
        *(int *)((longlong)puVar20 + 0x1c) = local_a9c;
        *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
        local_ad8 = (longlong **)local_968;
        (**(code **)(*local_a80 + 0x108))(local_a80,lVar12,param_2,local_a90);
        uVar27 = (int)uVar29 + 1;
        uVar29 = (ulonglong)uVar27;
        uVar33 = uVar33 + 0x30d0;
        lVar12 = local_a90;
      } while ((int)uVar27 < *(int *)(param_1 + 0x19));
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_968);
  }
  iVar23 = 0;
  pplVar31 = param_1 + 0x18;
  local_ad0 = (undefined1 *)((ulonglong)local_ad0 & 0xffffffffffffff00);
  local_ad8 = (longlong **)0x0;
  SetRenderTarget(param_2,0,0,0);
  (**(code **)(*plVar14 + 0x130))(plVar14,param_2,(*pplVar31)[4]);
  local_a78 = (longlong **)0x0;
  if (local_aa6 != '\0') {
    pplVar16 = (longlong **)FUN_141ce4ec0(lVar12);
    pplVar5 = local_a78;
    local_a78 = pplVar16;
    if (pplVar16 != (longlong **)0x0) {
      (*(code *)(*pplVar16)[5])(pplVar16);
    }
    if (pplVar5 != (longlong **)0x0) {
      (*(code *)(*pplVar5)[6])(pplVar5);
    }
  }
  if ((local_a87 != '\0') && ((local_aa6 == '\0' || (local_a86 != '\0')))) {
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    FUN_141e06320(param_1,param_2,&local_a78);
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  FUN_141ac1440(&DAT_1464c1750);
  if (1 < *(int *)(param_1 + 0x54)) {
    AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
    if ((DAT_146ac3ac0 == 0) || (*(int *)(param_1 + 0x54) < 3)) {
      local_934 = *(undefined4 *)((longlong)param_1 + 0x2b4);
      local_938 = *(undefined4 *)(param_1 + 0x56);
      local_940 = 0;
      FUN_141cf4990(lVar12,param_2,&local_940);
      FUN_141cf4cf0(lVar12,param_2);
    }
    if (((byte)*(undefined4 *)(param_1 + 7) & 0x21) == 0x21) {
      FUN_141cdbd00(lVar12);
      if (0 < *(int *)(param_1 + 0x19)) {
        pbVar17 = (byte *)(*pplVar31 + 0x2fb);
        do {
          if ((*pbVar17 & 1) != 0) {
            lVar13 = *(longlong *)(lVar12 + 0x2e0);
            puVar1 = (ulonglong *)(param_2 + 0x30);
            lVar12 = *(longlong *)(lVar12 + 0x2e8);
            local_930 = *(undefined8 *)(lVar13 + 8);
            puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar28 = puVar20 + 1;
            if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
              FMemStackBase::AllocateNewChunk(puVar1);
              puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar20 + 1;
            }
            *puVar1 = (ulonglong)puVar28;
            *puVar20 = local_930;
            puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar28 = puVar19 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
              FMemStackBase::AllocateNewChunk(puVar1);
              puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar19 + 5;
            }
            *puVar1 = (ulonglong)puVar28;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar19;
            *(undefined8 **)(param_2 + 8) = puVar19 + 1;
            puVar19[3] = puVar20;
            puVar19[1] = 0;
            *puVar19 = &PTR_LAB_143f59470;
            *(undefined4 *)(puVar19 + 2) = 1;
            *(undefined4 *)(puVar19 + 4) = 1;
            *(undefined1 *)((longlong)puVar19 + 0x24) = 0;
            local_928 = *(undefined8 *)(lVar12 + 8);
            puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar28 = puVar20 + 1;
            if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
              FMemStackBase::AllocateNewChunk(puVar1);
              puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar20 + 1;
            }
            *puVar1 = (ulonglong)puVar28;
            *puVar20 = local_928;
            puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar28 = puVar19 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
              FMemStackBase::AllocateNewChunk(puVar1);
              puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar19 + 5;
            }
            *puVar1 = (ulonglong)puVar28;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            local_7d8 = CONCAT62(uStack_9f6,2);
            **(undefined8 **)(param_2 + 8) = puVar19;
            *(undefined8 **)(param_2 + 8) = puVar19 + 1;
            puVar19[1] = 0;
            *puVar19 = &PTR_LAB_143f59470;
            *(undefined4 *)(puVar19 + 2) = 1;
            *(undefined4 *)(puVar19 + 4) = 1;
            puVar19[3] = puVar20;
            *(undefined1 *)((longlong)puVar19 + 0x24) = 0;
            local_7e8 = *(undefined8 *)(lVar13 + 8);
            uStack_7e0 = 0xffffffff00000000;
            local_a08 = *(undefined8 *)(lVar12 + 8);
            uStack_a00 = 0;
            uStack_9fc = 0xffffffff;
            uStack_7c8 = 0xffffffff00000000;
            local_9f8 = 2;
            local_7c0 = CONCAT62(uStack_9f6,2);
            local_7d0 = local_a08;
            if ((((((DAT_1464c17c8 == 0) || (*(int *)(DAT_146a0e920 + 4) == 0)) ||
                  (*(int *)(param_1 + 0x19) != 1)) ||
                 ((plVar14 = *pplVar31, (int)plVar14[0x354] != 0 ||
                  (*(int *)((longlong)plVar14 + 0x1aa4) != 0)))) ||
                ((int)plVar14[0x355] != (int)*(undefined8 *)(local_a90 + 0x378))) ||
               (*(int *)((longlong)plVar14 + 0x1aac) !=
                (int)((ulonglong)*(undefined8 *)(local_a90 + 0x378) >> 0x20))) {
              local_9c0 = 0;
              local_9b8 = 0;
              FUN_140c63b80(local_2e8,2,&local_7e8,&local_9c0);
              FRHICommandListBase::CacheActiveRenderTargets(param_2,local_228,local_2e8,local_158);
              puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar20 + 0x54;
              if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
                FMemStackBase::AllocateNewChunk(puVar1,0x2a8);
                puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar28 = puVar20 + 0x54;
              }
              *puVar1 = (ulonglong)puVar28;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar20;
              *(undefined8 **)(param_2 + 8) = puVar20 + 1;
              puVar20[1] = 0;
              *puVar20 = &PTR_FUN_1444d5488;
              FUN_140c63680(puVar20 + 2,local_2e8);
              FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
            }
            break;
          }
          iVar23 = iVar23 + 1;
          pbVar17 = pbVar17 + 0x30d0;
        } while (iVar23 < *(int *)(param_1 + 0x19));
        goto LAB_141b114c1;
      }
    }
    else {
LAB_141b114c1:
      iVar23 = 0;
      if (0 < *(int *)(param_1 + 0x19)) {
        do {
          pplVar5 = local_a78;
          plVar14 = *pplVar31;
          cVar8 = FUN_141ab5cd0(&DAT_1464c1750,pplVar31);
          local_ad8 = (longlong **)CONCAT71(local_ad8._1_7_,cVar8 == '\0');
          FUN_141acafb0(&DAT_1464c1750,param_2,plVar14 + (longlong)iVar23 * 0x61a,pplVar5);
          iVar23 = iVar23 + 1;
        } while (iVar23 < *(int *)(param_1 + 0x19));
      }
    }
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14);
  }
  lVar12 = 0;
  if (((DAT_146ac3ac0 == 0) || (lVar13 = local_a90, *(int *)(param_1 + 0x54) < 3)) &&
     ((lVar13 = (**(code **)(*param_1[1] + 0xe0))(), lVar13 == 0 ||
      (lVar18 = (**(code **)(*param_1[1] + 0xe0))(), lVar13 = local_a90,
      *(char *)(lVar18 + 0xcb) == '\0')))) {
    lVar13 = local_a90;
    lVar18 = *(longlong *)(local_a90 + 0x60);
    local_388 = *(longlong *)(lVar18 + 8);
    local_368 = 0xffffffffffffffff;
    uStack_360 = 0xffffffffffffffff;
    local_358 = 0xffffffffffffffff;
    uStack_350 = 0xffffffff;
    local_36c = 0xffffffff;
    local_338 = 0xffffffff;
    local_328 = 0;
    uStack_320 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_370 = 0;
    local_348 = 0;
    local_340 = 0;
    local_334 = 0;
    local_330 = 0;
    local_2f8 = 0;
    local_380 = 0;
    local_378 = 9;
    local_2f0 = 1 < *(uint *)(local_388 + 0x38);
    _guard_xfg_dispatch_icall_nop(local_448,0,0xc0);
    local_374 = 0x20;
    uVar15 = *(undefined8 *)(lVar18 + 8);
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = (ulonglong *)(param_2 + 0x30);
    puVar28 = puVar20 + 4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
      FMemStackBase::AllocateNewChunk(puVar1,0x28);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar20 + 4;
    }
    *puVar1 = (ulonglong)puVar28;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar20;
    *(undefined8 **)(param_2 + 8) = puVar20 + 1;
    puVar20[1] = 0;
    puVar20[3] = uVar15;
    *puVar20 = &PTR_LAB_144dc9c70;
    *(undefined4 *)(puVar20 + 2) = 0x20;
    uVar33 = *puVar1 + 1 & 0xfffffffffffffffe;
    uVar29 = uVar33 + 0x32;
    if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
      FMemStackBase::AllocateNewChunk(puVar1,0x34);
      uVar33 = *puVar1 + 1 & 0xfffffffffffffffe;
      uVar29 = uVar33 + 0x32;
    }
    psVar21 = &DAT_144dd0a50;
    *puVar1 = uVar29;
    do {
      sVar3 = *psVar21;
      *(short *)((longlong)psVar21 + (uVar33 - 0x144dd0a50)) = sVar3;
      psVar21 = psVar21 + 1;
    } while (sVar3 != 0);
    uVar22 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar29 = uVar22 + 0x178;
    if (*(ulonglong *)(param_2 + 0x38) < uVar29) {
      FMemStackBase::AllocateNewChunk(puVar1,0x180);
      uVar22 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar29 = uVar22 + 0x178;
    }
    *puVar1 = uVar29;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(ulonglong **)(param_2 + 8) = uVar22;
    *(ulonglong *)(param_2 + 8) = uVar22 + 8;
    FUN_140499730(uVar22,local_448,uVar33);
    *(undefined1 *)(param_2 + 0x1ac) = 1;
    FUN_14049c2a0(param_2,local_448);
    *(undefined1 *)(param_2 + 0x1ac) = 1;
    puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar28 = puVar20 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
      FMemStackBase::AllocateNewChunk(puVar1,0x18);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar20 + 2;
    }
    *puVar1 = (ulonglong)puVar28;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar20;
    *(undefined8 **)(param_2 + 8) = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_143f59460;
    *(undefined1 *)(param_2 + 0x1ac) = 0;
    puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    local_920 = *(undefined8 *)(*(longlong *)(lVar13 + 0x60) + 8);
    puVar28 = puVar20 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
      FMemStackBase::AllocateNewChunk(puVar1,0x10);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar20 + 1;
    }
    *puVar1 = (ulonglong)puVar28;
    *puVar20 = local_920;
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar28 = puVar19 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
      FMemStackBase::AllocateNewChunk(puVar1,0x30);
      puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar19 + 5;
    }
    *puVar1 = (ulonglong)puVar28;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar19;
    *(undefined8 **)(param_2 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar19 + 2) = 1;
    puVar19[3] = puVar20;
    *(undefined4 *)(puVar19 + 4) = 0;
    *(undefined1 *)((longlong)puVar19 + 0x24) = 0;
    FRHIRenderPassInfo::~FRHIRenderPassInfo(local_448);
  }
  if (local_aa1 == 0) goto LAB_141b11e52;
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  if (*(char *)(lVar13 + 0x2d8) == '\0') {
    local_918[0] = 0;
    lVar34 = 2;
    lVar18 = lVar12;
    lVar25 = lVar12;
  }
  else {
    local_9b0[0] = *(longlong *)(*(longlong *)(lVar13 + 0x120) + 8);
    if (local_9b0[0] != 0) {
      LOCK();
      *(int *)(local_9b0[0] + 8) = *(int *)(local_9b0[0] + 8) + 1;
      UNLOCK();
    }
    lVar18 = local_9b0[0];
    lVar25 = 1;
    lVar34 = lVar12;
  }
  puVar28 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(lVar13);
  FUN_141ad2370(param_1,param_2,*puVar28,lVar18);
  if ((int)lVar34 != 0) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_918);
  }
  if ((int)lVar25 != 0) {
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_9b0);
  }
  local_a50 = (longlong *)0x0;
  if ((((DAT_146a0e8d0 != 0) && (DAT_146532078 != 0)) &&
      (plVar14 = param_1[1], (int)plVar14[0x2be] != 0)) &&
     ((*(uint *)((longlong)param_1 + 0x3c) & 0x40000000) != 0)) {
    lVar12 = plVar14[0x22a];
    if ((lVar12 == 0) || (*(char *)(lVar12 + 0x28) != '\0')) {
      fVar36 = *(float *)(plVar14 + 0xbfd);
    }
    else {
      fVar36 = *(float *)(lVar12 + 0x10c);
    }
    local_a28 = 0x3c23d70a;
    local_a30 = 2.0;
    if ((2.0 <= fVar36) && (local_a30 = fVar36, 3000.0 <= fVar36)) {
      local_a30 = 3000.0;
    }
    local_a2c = local_a30;
    if (DAT_1464c1c88 == 0) {
LAB_141b119ee:
      local_a30 = 0.0;
    }
    else {
      if (local_a30 >= DAT_1464c1c68 && local_a30 != DAT_1464c1c68) {
        local_a2c = DAT_1464c1c68;
      }
      if (local_a30 < DAT_1464c1c68) goto LAB_141b119ee;
    }
    local_ac8 = (undefined8 *)((ulonglong)local_ac8 & 0xffffffffffffff00);
    local_ad8 = &local_a50;
    local_ad0 = (undefined1 *)CONCAT71(local_ad0._1_7_,1);
    FUN_141b125b0(param_1,param_2,&local_a30,&local_a78);
  }
  if (((DAT_146a0e904 == 0) || (DAT_146ab62f0 == '\0')) &&
     (iVar23 = 0, 0 < *(int *)(param_1 + 0x19))) {
    do {
      FDeferredShadingSceneRenderer::ClearTranslucentVolumeLighting(param_1,param_2,iVar23);
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0x19));
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
  FUN_141bb7c20(param_1,param_2);
  FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  iVar23 = 0;
  if (0 < *(int *)(param_1 + 0x19)) {
    do {
      FUN_141dd1090(param_1,param_2,*pplVar31 + (longlong)iVar23 * 0x61a,iVar23);
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0x19));
  }
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  iVar23 = 0;
  if (0 < *(int *)(param_1 + 0x19)) {
    do {
      FUN_141dcbbc0(param_1,param_2,*pplVar31 + (longlong)iVar23 * 0x61a,iVar23);
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0x19));
  }
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  iVar23 = 0;
  if (0 < *(int *)(param_1 + 0x19)) {
    do {
      cVar8 = FUN_141ac2900(*pplVar31 + (longlong)iVar23 * 0x61a);
      if (cVar8 != '\0') {
        iVar23 = 0;
        if (0 < *(int *)(param_1 + 0x19)) {
          do {
            plVar14 = *pplVar31;
            cVar8 = FUN_141ac2900(plVar14 + (longlong)iVar23 * 0x61a);
            if (cVar8 != '\0') {
              FUN_141acdb10(&DAT_1464c1750,param_2,plVar14 + (longlong)iVar23 * 0x61a);
              plVar14 = (longlong *)FTaskGraphInterface::Get();
              (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
            }
            iVar23 = iVar23 + 1;
          } while (iVar23 < *(int *)(param_1 + 0x19));
        }
        break;
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(param_1 + 0x19));
  }
  FUN_141d4a2a0(param_1,param_2,&local_a50,&local_a78);
  plVar14 = local_a50;
  local_a50 = (longlong *)0x0;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x30))();
  }
  FUN_141d71a00(param_1,param_2);
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a14f10) && (_Init_thread_header(&DAT_146a14f10), DAT_146a14f10 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a14f08 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))
                   (DAT_1468b1f88,L"r.CompositionAfterLightingViewPassOrder");
    _Init_thread_footer(&DAT_146a14f10);
  }
  if ((DAT_146a14f08 == (longlong *)0x0) ||
     (iVar23 = (**(code **)(*DAT_146a14f08 + 0x68))(), iVar23 != 1)) {
    bVar35 = false;
  }
  else {
    bVar35 = true;
  }
  iVar23 = *(int *)(param_1 + 0x19);
  iVar32 = 0;
  uVar30 = 1;
  if (0 < iVar23) {
    lVar12 = 0;
    do {
      lVar13 = (longlong)param_1[0x18] + lVar12;
      iVar23 = FUN_141ab5fb0(lVar13);
      if ((iVar23 != 0) && ((*(byte *)(lVar13 + 0x1694) & 1) != 0)) {
        *(undefined1 *)(lVar13 + 0x3011) = uVar30;
        uVar30 = 0;
      }
      iVar23 = *(int *)(param_1 + 0x19);
      iVar32 = iVar32 + 1;
      lVar12 = lVar12 + 0x30d0;
    } while (iVar32 < iVar23);
  }
  if (bVar35) {
    iVar32 = 0;
    do {
      iVar24 = 0;
      if (0 < iVar23) {
        do {
          local_ad8 = local_a78;
          FUN_141acbb60(&DAT_1464c1750,param_2,param_1[0x18] + (longlong)iVar24 * 0x61a,iVar32);
          iVar23 = *(int *)(param_1 + 0x19);
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar23);
      }
      iVar32 = iVar32 + 1;
    } while (iVar32 < 4);
  }
  else {
    iVar32 = 0;
    if (0 < iVar23) {
      do {
        local_ad8 = local_a78;
        FUN_141acbb60(&DAT_1464c1750,param_2,param_1[0x18] + (longlong)iVar32 * 0x61a,0xffffffff);
        iVar32 = iVar32 + 1;
      } while (iVar32 < *(int *)(param_1 + 0x19));
    }
  }
  uVar15 = FSceneRenderTargets::Get(param_2);
  FUN_141cf3480(uVar15);
  FUN_141cf3690(uVar15);
  if (*(int *)(DAT_146a0ffe8 + 4) == 1) {
    puVar1 = (ulonglong *)(param_2 + 0x30);
    puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    uVar15 = *(undefined8 *)(*(longlong *)(local_a90 + 0x60) + 0x10);
    puVar28 = puVar20 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
      FMemStackBase::AllocateNewChunk(puVar1,0x20);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar20 + 3;
    }
    *puVar1 = (ulonglong)puVar28;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar20;
    *(undefined8 **)(param_2 + 8) = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_144dd5308;
    puVar20[2] = uVar15;
  }
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  if (local_a50 != (longlong *)0x0) {
    (**(code **)(*local_a50 + 0x30))();
  }
LAB_141b11e52:
  iVar23 = 0;
  local_a60 = (longlong *)0x0;
  if ((*(uint *)((longlong)param_1 + 0x3c) & 0x80000) != 0) {
    FUN_141bb7590(param_1,param_2,&local_a60);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  pplVar31 = param_1 + 2;
  cVar8 = FUN_141ae2360(pplVar31);
  if ((cVar8 != '\0') && (lVar12 = param_1[1][0x321], lVar12 != 0)) {
    uVar27 = *(uint *)(lVar12 + 0x80) | 4;
    if (local_a60 != (longlong *)0x0) {
      uVar27 = *(uint *)(lVar12 + 0x80) & 0xfffffffb;
    }
    *(uint *)(lVar12 + 0x80) = uVar27;
    FUN_141acefd0(param_1,param_2,&local_a60);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  plVar14 = param_1[0x5f];
  if (plVar14 != (longlong *)0x0) {
    puVar1 = (ulonglong *)(param_2 + 0x30);
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar28 = puVar20 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
      FMemStackBase::AllocateNewChunk(puVar1,0x20);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar20 + 3;
    }
    *puVar1 = (ulonglong)puVar28;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar20;
    *(undefined8 **)(param_2 + 8) = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_144dc9cc0;
    puVar20[2] = plVar14;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x5f,0);
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  if ((*(uint *)((longlong)param_1 + 0x3c) & 0x200) != 0) {
    FUN_141b3b5e0(param_1,param_2);
  }
  FUN_141c57f30(&DAT_146a503f0,param_2,param_1);
  cVar8 = FUN_141b46200(pplVar31);
  if (cVar8 != '\0') {
    FUN_141b3b2c0(param_1,param_2,&local_a60);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  plVar14 = local_a60;
  lVar12 = 0;
  local_a60 = (longlong *)0x0;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x30))();
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2560);
  if ((*(uint *)((longlong)param_1 + 0x3c) & 0x200) != 0) {
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    local_a48 = (longlong *)0x0;
    FUN_141dfc6d0(param_1,param_2,&local_a48);
    cVar8 = FUN_1427476e0(pplVar31);
    if (cVar8 == '\0') {
      uVar15 = 3;
    }
    else {
      FUN_141e05bb0(param_1,param_2,0,local_a48);
      uVar15 = 1;
    }
    FUN_141e05bb0(param_1,param_2,uVar15,local_a48);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a14f20) &&
       (_Init_thread_header(&DAT_146a14f20), DAT_146a14f20 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar14 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DisableDistortion");
      lVar13 = lVar12;
      if (plVar14 != (longlong *)0x0) {
        lVar13 = (**(code **)(*plVar14 + 0x38))(plVar14);
      }
      DAT_146a14f18 = lVar13;
      _Init_thread_footer(&DAT_146a14f20);
    }
    iVar32 = FUN_1419f1b20(DAT_146a14f18,0);
    iVar24 = FUN_141b33eb0(pplVar31);
    if ((0 < iVar24) && (iVar32 != 1)) {
      FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
      FUN_141b39390(param_1,param_2);
      plVar14 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
    }
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    if (local_a48 != (longlong *)0x0) {
      (**(code **)(*local_a48 + 0x30))();
    }
  }
  if ((*(uint *)((longlong)param_1 + 0x3c) & 0x80000) != 0) {
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    FUN_141bb72c0(param_1,param_2);
    plVar14 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  }
  FUN_141ac12b0(&DAT_1464c1750);
  if (0 < *(int *)(param_1 + 0x19)) {
    do {
      lVar13 = (longlong)param_1[0x18] + lVar12;
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_a9c = *(int *)(lVar13 + 0x1aa8);
      uVar37 = *(undefined4 *)(lVar13 + 0x1aac);
      local_aa0 = *(int *)(lVar13 + 0x1aa4);
      local_a84 = *(uint *)(lVar13 + 0x1aa0);
      puVar28 = puVar20 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar28) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar28 = puVar20 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar28;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar20;
      *(undefined8 **)(param_2 + 8) = puVar20 + 1;
      puVar20[1] = 0;
      *puVar20 = &PTR_LAB_143f59420;
      *(uint *)(puVar20 + 2) = local_a84;
      *(int *)((longlong)puVar20 + 0x14) = local_aa0;
      *(undefined4 *)(puVar20 + 3) = 0;
      *(int *)((longlong)puVar20 + 0x1c) = local_a9c;
      *(undefined4 *)(puVar20 + 4) = uVar37;
      *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
      (**(code **)(*local_a80 + 0x110))(local_a80,lVar13,param_2,local_a90);
      iVar23 = iVar23 + 1;
      lVar12 = lVar12 + 0x30d0;
    } while (iVar23 < *(int *)(param_1 + 0x19));
  }
  iVar23 = 0;
  FUN_141d71a00(param_1,param_2);
  plVar14 = (longlong *)GetRendererModule();
  lVar12 = local_a90;
  (**(code **)(*plVar14 + 0x140))(plVar14,param_2,local_a90);
  lVar13 = (longlong)*(int *)(param_1 + 3);
  if (0 < lVar13) {
    plVar14 = param_1[2];
    iVar32 = iVar23;
    do {
      lVar18 = *plVar14;
      plVar14 = plVar14 + 1;
      iVar24 = iVar32 + 1;
      if (*(char *)(lVar18 + 0x1202) == '\0') {
        iVar24 = iVar32;
      }
      lVar13 = lVar13 + -1;
      iVar32 = iVar24;
    } while (lVar13 != 0);
    if (0 < iVar24) {
      FUN_141d635a0(param_1,param_2);
    }
  }
  if (*(char *)((longlong)param_1 + 0x72) == '\0') {
    FUN_141cd9760(lVar12,param_2,0xffffffff);
  }
  else {
    local_9b0[1] = 0;
    local_8c0[0] = 0;
    local_8c0[1] = 0;
    FScopedGPUStatEvent::Begin(local_8c0,param_2,&DAT_146a10128,local_9b0 + 1);
    FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
    if (0 < *(int *)(param_1 + 0x19)) {
      do {
        local_ad8 = param_1;
        FUN_141c4b9d0(&DAT_146a503f0,param_2,param_1[0x18] + (longlong)iVar23 * 0x61a,&local_a78);
        iVar23 = iVar23 + 1;
      } while (iVar23 < *(int *)(param_1 + 0x19));
    }
    lVar12 = FSceneRenderTargets::Get(param_2);
    plVar14 = *(longlong **)(lVar12 + 0x220);
    if (plVar14 != (longlong *)0x0) {
      *(undefined8 *)(lVar12 + 0x220) = 0;
      (**(code **)(*plVar14 + 0x30))();
    }
    if (local_8c0[0] != 0) {
      FScopedGPUStatEvent::End(local_8c0);
    }
  }
  pplVar31 = local_a78;
  if (local_a78 != (longlong **)0x0) {
    local_a78 = (longlong **)0x0;
    (*(code *)(*pplVar31)[6])();
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
  FUN_141d70910(param_1,param_2);
  uVar15 = FSceneRenderTargets::Get(param_2);
  FSceneRenderTargets::SetLightAttenuation(uVar15,0);
  _DAT_1464c2fd8 = 0xffffffff;
  *(int *)(param_1 + 0x4f) = *(int *)(param_1 + 0x4f) + 1;
  *(undefined4 *)((longlong)param_1 + 0x274) = 2;
  *(undefined1 *)((longlong)param_1 + 0x26d) = 0;
  if (DAT_146a632a8 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,0);
  }
  FRHICommandListImmediate::SetCurrentStat(param_2,local_aa8);
  plVar14 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar14 + 0x30))(plVar14,DAT_1464a8214);
  if ((DAT_1468b5000 != 0) && (DAT_146ab6e8c != 0)) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  if (local_a60 != (longlong *)0x0) {
    (**(code **)(*local_a60 + 0x30))();
  }
  if (local_a78 != (longlong **)0x0) {
    (*(code *)(*local_a78)[6])();
  }
  if (local_9d8 != (longlong *)0x0) {
    (**(code **)(*local_9d8 + 0x30))();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a58);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a40);
  DAT_146b09435 = local_aa8;
  if (local_4c0 != 0) {
    FMemory::Free();
  }
  local_4c8 = 0;
  if (local_4d0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_518 + 1);
  if (local_518[0] != 0) {
    LOCK();
    piVar2 = (int *)(local_518[0] + 0x48);
    iVar23 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_14158cb50(local_4a8);
  FUN_14158cb50(local_548);
  FUN_14158cb50(local_478);
  if (local_8c0[2] != 0) {
    FScopedGPUStatEvent::End(local_8c0 + 2);
  }
  return;
}



// FUNCTION 141b125b0 FUN_141b125b0 body=1986 status=ok
// SIG undefined FUN_141b125b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141b125b0(longlong param_1,longlong param_2,wchar_t *param_3,undefined8 param_4,
             longlong *param_5,char param_6,char param_7)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  longlong **local_100;
  longlong **local_f8;
  longlong *local_e8;
  longlong *local_e0;
  uint local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  wchar_t *local_68;
  undefined2 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar7 = *(longlong *)(param_1 + 0xc0);
  local_b0 = param_4;
  local_b8 = FSceneRenderTargets::Get(param_2);
  iVar1 = *(int *)(lVar7 + 0x1a38);
  FUN_14274f980(lVar7);
  if ((((((DAT_1464c179c == 0) || (DAT_1464c17a0 < 1)) || (DAT_146ab62dc != '\0')) ||
       ((cVar4 = IsRHIDeviceIntel(), cVar4 != '\0' || (iVar1 < 3)))) ||
      ((cVar4 = FUN_141b03c60(), cVar4 == '\0' ||
       ((*(int *)(param_1 + 200) != 1 || (*(longlong *)(lVar7 + 0x18) == 0)))))) ||
     ((1.0 < *(float *)(lVar7 + 0x3cc) || *(float *)(lVar7 + 0x3cc) == 1.0 ||
      ((DAT_146532078 == 0 || (*(int *)(*(longlong *)(param_1 + 8) + 0x15f0) == 0)))))) {
    return 0;
  }
  if (DAT_146a0e900 != '\0') {
    DAT_146a0e900 = '\0';
    uVar11 = 0;
    uVar8 = 0;
    local_d8 = 0;
    uStack_d4 = 1;
    lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x20);
    local_a8 = lVar9 + 0x1070;
    uStack_c4 = 0;
    iVar1 = *(int *)(lVar9 + 0x1098);
    puStack_d0 = (uint *)(lVar9 + 0x1080);
    if (iVar1 != 0) {
      puVar12 = *(uint **)(lVar9 + 0x1090);
      if (*(uint **)(lVar9 + 0x1090) == (uint *)0x0) {
        puVar12 = puStack_d0;
      }
      uVar8 = *puVar12;
      local_d8 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)(int)local_d8;
        uVar11 = uVar11 + 0x20;
        uVar8 = local_d8 + 1;
        uStack_c4 = (ulonglong)uVar11 << 0x20;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_d8;
        local_d8 = uVar8;
        if (bVar3) goto LAB_141b12772;
        uVar8 = puVar12[lVar9 + 1];
      }
      uStack_d4 = -uVar8 & uVar8;
      uVar8 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - uVar8;
      }
      iVar5 = (uVar11 - iVar5) + 0x1f;
      uStack_c4._4_4_ = (undefined4)((ulonglong)uStack_c4 >> 0x20);
      uStack_c4 = CONCAT44(uStack_c4._4_4_,iVar5);
      if (iVar1 < iVar5) {
LAB_141b12772:
        uStack_c4 = CONCAT44(uStack_c4._4_4_,iVar1);
      }
    }
    local_c8 = 0xffffffff;
    uStack_a0 = CONCAT44(uStack_d4,local_d8);
    uStack_90 = CONCAT44((int)uStack_c4,0xffffffff);
    uStack_88 = CONCAT44(uStack_bc,uStack_c4._4_4_);
    uStack_98 = puStack_d0;
    if ((int)uStack_c4 < iVar1) {
      do {
        uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        uVar8 = uStack_98[6];
      } while (uStack_90._4_4_ < (int)uVar8);
    }
    AK::MemoryMgr::StartProfileThreadUsage(uVar8);
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
  }
  if (DAT_146a0e901 != '\0') {
    DAT_146a0e901 = '\0';
    FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields(&PTR_PTR_146532040);
  }
  if ((DAT_1464c17b4 != 0) && (1 < DAT_1464c17a0)) {
    local_108 = (wchar_t *)&DAT_146a163c0;
    FUN_141b2f050(param_2,*(undefined8 *)(param_1 + 8),lVar7,param_3);
  }
  local_e0 = (longlong *)0x0;
  lVar9 = FSceneRenderTargets::Get();
  local_f8 = (longlong **)CONCAT71(local_f8._1_7_,1);
  local_100 = (longlong **)CONCAT71(local_100._1_7_,1);
  local_a8 = _DAT_1464c9cb8;
  uStack_a0 = uRam00000001464c9cc0;
  uStack_98 = (uint *)CONCAT44((int)*(undefined8 *)(lVar9 + 0x378) / 2,DAT_1464c9cc8);
  uStack_88 = 0x1000000000001;
  uStack_90 = (ulonglong)(uint)((int)((ulonglong)*(undefined8 *)(lVar9 + 0x378) >> 0x20) / 2);
  local_80 = CONCAT62(local_80._2_6_,1);
  local_68 = L"UnknownTexture2D";
  local_78 = DAT_146a9da58;
  local_108 = L"DistanceFieldNormal";
  local_80 = CONCAT44(10,(undefined4)local_80);
  local_74 = 0x10001;
  local_70 = 0;
  local_60 = 1;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_a8,&local_e0);
  FUN_141afe660(param_2,param_1 + 0xc0,local_e0 + 1,param_3);
  if ((DAT_1464c17b4 != 0) && (1 < DAT_1464c17a0)) {
    local_108 = param_3;
    FUN_141b2aab0(param_2,*(undefined8 *)(param_1 + 8),param_1 + 0xc0,local_e0 + 1);
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  local_f8 = &local_e8;
  local_e8 = (longlong *)0x0;
  local_100 = &local_e0;
  local_108 = (wchar_t *)local_b0;
  FUN_141b38280(param_1,param_2,lVar7,param_3);
  lVar9 = DAT_146a16448;
  if ((((DAT_146ab62f3 != '\0') && (*(int *)(DAT_146a9d500 + 4) != 0)) && (DAT_1464c17b4 != 0)) &&
     (1 < DAT_1464c17a0)) {
    if (*(char *)(DAT_146a16448 + 0x11) != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,DAT_146a16448);
      *(undefined1 *)(lVar9 + 0x11) = 0;
    }
    lVar9 = DAT_146a16470;
    if (*(char *)(DAT_146a16470 + 0x11) != '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,DAT_146a16470);
      }
      *(undefined1 *)(lVar9 + 0x11) = 0;
    }
    lVar9 = DAT_146a16498;
    if ((DAT_146a163f0 != '\0') && (*(char *)(DAT_146a16498 + 0x11) != '\0')) {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,DAT_146a16498);
      }
      *(undefined1 *)(lVar9 + 0x11) = 0;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x13d0);
    lVar9 = *(longlong *)(lVar7 + 0x30);
    if (*(char *)(lVar9 + 0x11) != '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar9);
      }
      *(undefined1 *)(lVar9 + 0x11) = 0;
    }
    lVar9 = *(longlong *)(lVar7 + 0x58);
    if (*(char *)(lVar9 + 0x11) != '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar9);
      }
      *(undefined1 *)(lVar9 + 0x11) = 0;
    }
    lVar9 = *(longlong *)(lVar7 + 0x80);
    if (*(char *)(lVar9 + 0x11) != '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar9);
      }
      *(undefined1 *)(lVar9 + 0x11) = 0;
    }
    lVar9 = *(longlong *)(lVar7 + 0xa8);
    if (*(char *)(lVar9 + 0x11) != '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar9);
      }
      *(undefined1 *)(lVar9 + 0x11) = 0;
    }
    lVar7 = *(longlong *)(lVar7 + 0xd0);
    if (*(char *)(lVar7 + 0x11) != '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar7);
      }
      *(undefined1 *)(lVar7 + 0x11) = 0;
    }
  }
  FUN_141ad1ee0(param_1,param_2,&local_e8);
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  if (param_7 == '\0') {
    uVar13 = *(undefined8 *)(*(longlong *)(local_b8 + 0x60) + 8);
    puVar6 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface();
    local_100 = (longlong **)((ulonglong)local_100 & 0xffffffffffffff00);
    local_108 = (wchar_t *)CONCAT44(local_108._4_4_,1);
    FUN_141ad74f0(param_2,*puVar6,uVar13,0);
  }
  else {
    local_108 = (wchar_t *)CONCAT71(local_108._1_7_,1);
    FUN_141cdeb70(local_b8,param_2,0,1);
  }
  if (param_6 == '\0') {
    if (param_7 == '\0') goto LAB_141b12bb4;
LAB_141b12b9d:
    uVar13 = 0;
  }
  else {
    if (param_7 != '\0') goto LAB_141b12b9d;
    uVar13 = 1;
  }
  FUN_141b4a370(param_2,param_1 + 0xc0,&local_e8,uVar13);
LAB_141b12bb4:
  plVar2 = (longlong *)*param_5;
  *param_5 = (longlong)local_e8;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x28))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (param_7 == '\0') {
    local_a8 = 0xffffffff00000000;
    uStack_a0 = 0xffffffffffffffff;
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uStack_98 = (uint *)0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    uStack_88 = 0xffffffff;
    local_80 = 0;
    uVar13 = *(undefined8 *)(*param_5 + 0x10);
    plVar2 = *(longlong **)(*param_5 + 8);
    puVar6 = puVar10 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_a0;
    *(uint *)((longlong)puVar10 + 0x1c) = uStack_a0._4_4_;
    *(undefined4 *)(puVar10 + 4) = (undefined4)uStack_98;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_98._4_4_;
    *(uint *)(puVar10 + 5) = (uint)uStack_90;
    *(int *)((longlong)puVar10 + 0x2c) = uStack_90._4_4_;
    *(undefined4 *)(puVar10 + 6) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_88._4_4_;
    *(undefined4 *)(puVar10 + 7) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = local_80._4_4_;
    puVar10[8] = plVar2;
    puVar10[9] = uVar13;
    lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar10[8] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar10[8] + 0x20))();
    }
    lVar7 = (**(code **)(*(longlong *)puVar10[9] + 8))();
    if ((lVar7 == 0) && (lVar7 = (**(code **)(*(longlong *)puVar10[9] + 0x18))(), lVar7 == 0)) {
      (**(code **)(*(longlong *)puVar10[9] + 0x20))();
    }
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x30))();
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x30))();
  }
  return 1;
}



// FUNCTION 141b12d80 FUN_141b12d80 body=700 status=ok
// SIG undefined FUN_141b12d80(void)

bool FUN_141b12d80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_48 [2];
  
  lVar6 = FSceneRenderTargets::Get(param_2);
  uVar11 = 0;
  local_res18 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FScopedGPUStatEvent::Begin(local_48,param_2,&DAT_146a10138,&local_res18);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_res20 = *(undefined8 *)(*(longlong *)(lVar6 + 0x60) + 8);
  puVar7 = puVar9 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *puVar9 = local_res20;
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
  *puVar8 = &PTR_LAB_143f59470;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar9;
  *(undefined4 *)(puVar8 + 4) = 0;
  *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146a14e80)
     && (_Init_thread_header(&DAT_146a14e80), DAT_146a14e80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a14e78 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HZBOcclusion");
    _Init_thread_footer(&DAT_146a14e80);
  }
  iVar5 = (**(code **)(*DAT_146a14e78 + 0x68))();
  bVar14 = iVar5 != 0;
  plVar1 = (longlong *)(param_1 + 0xc0);
  uVar13 = uVar11;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      lVar10 = uVar11 * 0x30d0 + *plVar1;
      lVar6 = *(longlong *)(lVar10 + 0x18);
      cVar3 = FUN_141d4f490(lVar10);
      cVar4 = FUN_141ae24b0(lVar10);
      if ((((cVar4 != '\0') || (bVar14)) || (cVar3 != '\0')) &&
         (((FUN_141d60950(param_2,(longlong)(int)uVar13 * 0x30d0 + *plVar1), bVar14 && (lVar6 != 0))
          && (*(int *)(lVar6 + 0x1b0) != 0)))) {
        FUN_141d76d90(lVar6 + 0x178,param_2,lVar10);
      }
      uVar12 = (int)uVar13 + 1;
      uVar11 = uVar11 + 1;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 200));
  }
  cVar3 = FUN_141ab5cd0(&DAT_1464c1750,plVar1);
  if (cVar3 != '\0') {
    FUN_141acc9c0(&DAT_1464c1750,param_2,plVar1);
  }
  if (local_48[0] != 0) {
    FScopedGPUStatEvent::End(local_48);
  }
  return bVar14;
}



// FUNCTION 141b13040 FUN_141b13040 body=436 status=ok
// SIG undefined FUN_141b13040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141b13040(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  longlong local_228;
  longlong local_220 [3];
  undefined4 local_208;
  longlong local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined1 local_1d8 [304];
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  uVar3 = FSceneRenderTargets::Get(param_1[8]);
  lVar1 = *param_1;
  local_9c = 0xffffffff;
  local_98 = 0xf;
  local_a8 = param_1;
  local_a0 = param_2;
  FUN_141aaf420(local_90,param_1[8],(&DAT_1464c9c48)[(int)param_1[0xb]],param_2);
  FUN_141d05c90(uVar3,*(undefined4 *)(lVar1 + 0x1a38),0xf,local_1d8);
  local_238 = 1;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_228,local_1d8,&DAT_146a632d8);
  local_220[0] = local_228;
  if (local_228 != 0) {
    LOCK();
    *(int *)(local_228 + 8) = *(int *)(local_228 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_228);
  lVar2 = *param_1;
  local_220[1] = 0;
  local_220[2] = 0;
  local_208 = 0x11;
  local_200 = *(longlong *)(lVar2 + 0x20);
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
    UNLOCK();
  }
  lVar4 = 0;
  lVar5 = (longlong)*(int *)(lVar1 + 0x1db0);
  local_1f8 = local_220[0];
  local_1e8 = 0;
  local_1f0 = 0;
  local_1e4 = 0;
  local_1ec = (uint)(*(char *)(lVar2 + 0x1205) != '\0') |
              -(uint)(*(char *)(lVar2 + 0x11b4) != '\0') & 8;
  if (0 < lVar5) {
    do {
      FUN_141b15330(param_1,&local_a8,local_220 + 1,
                    *(undefined8 *)(*(longlong *)(lVar1 + 0x1da8) + lVar4));
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_200);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_220);
  return;
}



// FUNCTION 141b13200 FUN_141b13200 body=128 status=ok
// SIG undefined FUN_141b13200(void)

void FUN_141b13200(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res8;
  longlong local_18 [2];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))();
  if (cVar1 == '\0') {
    local_res8 = 0;
    local_18[0] = 0;
    local_18[1] = 0;
    FScopedGPUStatEvent::Begin(local_18,param_2,&DAT_146a10138,&local_res8);
    FUN_141b19410(param_1,param_2);
    FUN_141d5e420(param_1,param_2,1);
    if (local_18[0] != 0) {
      FScopedGPUStatEvent::End(local_18);
    }
  }
  return;
}



// FUNCTION 141b13280 FUN_141b13280 body=4415 status=ok
// SIG undefined FUN_141b13280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

char FUN_141b13280(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 unaff_R12;
  uint7 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  char cVar24;
  bool bVar25;
  undefined1 auStack_908 [32];
  undefined4 *local_8e8;
  undefined4 local_8e0;
  undefined1 local_8d8;
  undefined4 local_8d0;
  char local_8c8;
  char local_8c7;
  char local_8c6;
  longlong local_8c0;
  undefined4 local_8b8;
  longlong local_8b0;
  int local_8a8;
  int iStack_8a4;
  int iStack_8a0;
  int iStack_89c;
  undefined8 *local_898;
  undefined8 local_890;
  undefined4 local_888;
  undefined4 local_884;
  undefined1 local_880 [8];
  undefined1 local_878 [8];
  longlong local_870;
  longlong local_868;
  undefined1 local_860 [8];
  undefined1 local_858 [8];
  longlong local_850 [3];
  undefined1 local_838 [8];
  undefined1 local_830 [8];
  longlong local_828 [3];
  undefined8 local_810;
  undefined8 uStack_808;
  undefined4 local_800;
  longlong local_7f8;
  longlong local_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined1 local_7dc;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined4 local_7c8;
  longlong local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined4 local_7a8;
  undefined1 local_7a4;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined4 local_790;
  longlong local_788;
  longlong local_780;
  undefined8 local_778;
  undefined4 local_770;
  undefined1 local_76c;
  longlong local_768 [5];
  undefined4 local_740;
  undefined4 local_73c;
  undefined2 local_738;
  longlong local_730;
  undefined1 local_728;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined1 local_708 [24];
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [24];
  undefined1 local_6c0 [24];
  undefined1 local_6a8 [24];
  undefined1 local_690 [24];
  undefined1 local_678 [304];
  undefined1 local_548 [304];
  undefined1 local_418 [304];
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_908;
  local_828[1] = 0;
  local_8c8 = '\0';
  local_768[2] = 0;
  local_768[3] = 0;
  local_8c6 = param_4;
  local_8c0 = param_2;
  local_898 = param_3;
  FScopedGPUStatEvent::Begin(local_768 + 2,param_2,&DAT_146a10718,local_828 + 1);
  local_8c7 = '\0';
  lVar7 = FSceneRenderTargets::Get(param_2);
  local_8b0 = lVar7;
  cVar5 = FUN_141636a40();
  uVar19 = (uint7)((ulonglong)unaff_R12 >> 8);
  if ((cVar5 == '\0') ||
     (((DAT_1464c9c18 == '\0' && (DAT_146ab6383 != '\0')) || (*(int *)(DAT_146a106f8 + 4) == 0)))) {
    uVar18 = (ulonglong)uVar19 << 8;
  }
  else {
    uVar18 = CONCAT71(uVar19,1);
    local_8b8 = (undefined4)uVar18;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))();
    if (cVar5 == '\0') goto LAB_141b13379;
    uVar18 = (ulonglong)(*(int *)(DAT_146a10108 + 4) != 0);
  }
  local_8b8 = (undefined4)uVar18;
LAB_141b13379:
  cVar5 = (char)uVar18;
  if ((0 < *(int *)(param_1 + 200)) && (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x1a10) == 2)) {
    FUN_141cdbea0(lVar7,param_2);
    iVar20 = 0;
    local_73c = 0xffffffff;
    local_768[4] = 0;
    local_740 = 0;
    local_890 = *(undefined8 *)(*(longlong *)(lVar7 + 0x70) + 8);
    local_738 = 0;
    local_888 = 0x1020102;
    local_884 = 0x22;
    FUN_140c63b80(local_2e8,1,local_768 + 4,&local_890);
    FRHICommandListBase::CacheActiveRenderTargets(param_2,local_228,local_2e8,local_158);
    puVar1 = (ulonglong *)(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 0x54;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(puVar1,0x2a8);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar10 + 0x54;
    }
    *puVar1 = (ulonglong)puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar10 + 2);
    lVar14 = local_8c0;
    if (0 < *(int *)(param_1 + 200)) {
      lVar23 = 0;
      do {
        lVar13 = *(longlong *)(param_1 + 0xc0) + lVar23;
        FUN_141d05c90(lVar7,*(undefined4 *)(lVar13 + 0x1a38),0,local_678);
        local_8e8 = (undefined4 *)CONCAT44(local_8e8._4_4_,1);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_828 + 2,local_678,&DAT_146a632d8);
        local_870 = local_828[2];
        if (local_828[2] != 0) {
          LOCK();
          *(int *)(local_828[2] + 8) = *(int *)(local_828[2] + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        local_7c8 = 0x11;
        local_7d8 = 0;
        uStack_7d0 = 0;
        local_7c0 = *(longlong *)(lVar13 + 0x20);
        if (local_7c0 != 0) {
          LOCK();
          *(int *)(local_7c0 + 8) = *(int *)(local_7c0 + 8) + 1;
          UNLOCK();
        }
        local_7b8 = local_870;
        local_7a8 = 0;
        local_7a4 = 0;
        local_7b0._4_4_ =
             (uint)(*(char *)(lVar13 + 0x1205) != '\0') |
             -(uint)(*(char *)(lVar13 + 0x11b4) != '\0') & 8;
        local_7b0._0_4_ = 0;
        if (DAT_146a0e790 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar5 = IsInRenderingThread();
            if (cVar5 == '\0') {
              FScopedEvent::FScopedEvent(local_880);
              plVar9 = (longlong *)FUN_14049e3d0(local_708,0,0xff);
              lVar7 = *plVar9;
              *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ee0;
              *(undefined1 **)(lVar7 + 0x18) = local_880;
              lVar3 = plVar9[2];
              lVar7 = plVar9[1];
              lVar2 = *plVar9;
              lVar4 = *(longlong *)(lVar2 + 0x28);
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
                UNLOCK();
              }
              FUN_1404a4fe0(lVar2,lVar7,(int)lVar3,1);
              if (lVar4 != 0) {
                LOCK();
                piVar11 = (int *)(lVar4 + 0x48);
                iVar12 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  FGraphEvent::Recycle(lVar4);
                }
              }
              FScopedEvent::~FScopedEvent(local_880);
            }
            else {
              lVar7 = operator_new(0x38);
              if (lVar7 == 0) {
                DAT_146a0e790 = 0;
              }
              else {
                DAT_146a0e790 =
                     TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar7);
              }
            }
          }
          else {
            lVar7 = operator_new(0x38);
            if (lVar7 == 0) {
              LOCK();
              if (DAT_146a0e790 == 0) {
                DAT_146a0e790 = 0;
              }
              UNLOCK();
            }
            else {
              lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                      ::FStaticStateResource::FStaticStateResource(lVar7);
              LOCK();
              if (DAT_146a0e790 != 0) {
                lVar7 = DAT_146a0e790;
              }
              DAT_146a0e790 = lVar7;
              UNLOCK();
            }
          }
        }
        uStack_7d0 = *(undefined8 *)(DAT_146a0e790 + 0x30);
        local_7b0 = (ulonglong)local_7b0._4_4_ << 0x20;
        if (((*(byte *)(lVar13 + 0x28cc) & 8) == 0) && (*(char *)(lVar13 + 0x1a98) != '\0')) {
          if (*(char *)(lVar13 + 0x1209) == '\0') {
            if (*(char *)(lVar13 + 0x120b) != '\0') {
LAB_141b136d5:
              if (((*(int *)(lVar13 + 0xf60) == 2) || (*(longlong *)(lVar13 + 0x10) == 0)) ||
                 (*(int *)(*(longlong *)(lVar13 + 0x10) + 8) < 2)) goto LAB_141b1382b;
            }
          }
          else if (*(int *)(lVar13 + 0xf60) == 2) {
            if (*(char *)(lVar13 + 0x120b) != '\0') goto LAB_141b136d5;
            goto LAB_141b1382b;
          }
          if (DAT_146a15238 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar5 = IsInRenderingThread();
              if (cVar5 == '\0') {
                FScopedEvent::FScopedEvent(local_878);
                plVar9 = (longlong *)FUN_14049e3d0(local_6f0,0,0xff);
                lVar7 = *plVar9;
                *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09a60;
                *(undefined1 **)(lVar7 + 0x18) = local_878;
                lVar3 = plVar9[2];
                lVar7 = plVar9[1];
                lVar2 = *plVar9;
                lVar4 = *(longlong *)(lVar2 + 0x28);
                if (lVar4 != 0) {
                  LOCK();
                  *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_1404a4fe0(lVar2,lVar7,(int)lVar3,1);
                if (lVar4 != 0) {
                  LOCK();
                  piVar11 = (int *)(lVar4 + 0x48);
                  iVar12 = *piVar11;
                  *piVar11 = *piVar11 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    FGraphEvent::Recycle(lVar4);
                  }
                }
                FScopedEvent::~FScopedEvent(local_878);
              }
              else {
                lVar7 = operator_new(0x38);
                if (lVar7 == 0) {
                  DAT_146a15238 = 0;
                }
                else {
                  DAT_146a15238 =
                       TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar7);
                }
              }
            }
            else {
              lVar7 = operator_new(0x38);
              if (lVar7 == 0) {
                LOCK();
                if (DAT_146a15238 == 0) {
                  DAT_146a15238 = 0;
                }
                UNLOCK();
              }
              else {
                lVar7 = TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                        ::FStaticStateResource::FStaticStateResource(lVar7);
                LOCK();
                if (DAT_146a15238 != 0) {
                  lVar7 = DAT_146a15238;
                }
                DAT_146a15238 = lVar7;
                UNLOCK();
              }
            }
          }
          local_8e8 = (undefined4 *)CONCAT71(local_8e8._1_7_,1);
          local_7d8 = *(undefined8 *)(DAT_146a15238 + 0x30);
          FUN_141ad3490(param_1,lVar14,lVar13,&local_7d8);
        }
LAB_141b1382b:
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7c0);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_870);
        iVar20 = iVar20 + 1;
        lVar23 = lVar23 + 0x30d0;
        lVar7 = local_8b0;
      } while (iVar20 < *(int *)(param_1 + 200));
      cVar5 = (char)local_8b8;
      param_2 = local_8c0;
    }
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
    param_3 = local_898;
  }
  cVar6 = '\0';
  cVar24 = cVar5 == '\0';
  if ((bool)cVar24) {
    (*(code *)*param_3)(param_3[1]);
    cVar6 = FUN_141b0c500(param_1);
    local_8c7 = '\x01';
    local_8c8 = cVar6;
  }
  lVar14 = local_8b0;
  if (*(int *)(param_1 + 0x2e0) != 0) {
    if ((cVar5 == '\0') || ((*(int *)(DAT_146a10710 + 4) < 1 && (*(int *)(DAT_146ab6d10 + 4) < 1))))
    {
      local_728 = 0;
    }
    else {
      local_728 = 1;
    }
    uVar17 = 0;
    uVar18 = uVar17;
    local_730 = param_2;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        lVar14 = *(longlong *)(param_1 + 0xc0) + uVar18;
        FUN_141d05c90(lVar7,*(undefined4 *)(lVar14 + 0x1a38),0,local_548);
        local_8e8 = (undefined4 *)CONCAT44(local_8e8._4_4_,1);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_868,local_548,&DAT_146a632d8);
        local_850[0] = local_868;
        if (local_868 != 0) {
          LOCK();
          *(int *)(local_868 + 8) = *(int *)(local_868 + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        local_800 = 0x11;
        local_810 = 0;
        uStack_808 = 0;
        local_7f8 = *(longlong *)(lVar14 + 0x20);
        if (local_7f8 != 0) {
          LOCK();
          *(int *)(local_7f8 + 8) = *(int *)(local_7f8 + 8) + 1;
          UNLOCK();
        }
        local_7f0 = local_850[0];
        local_7e0 = 0;
        local_7dc = 0;
        local_7e8._4_4_ =
             (uint)(*(char *)(lVar14 + 0x1205) != '\0') |
             -(uint)(*(char *)(lVar14 + 0x11b4) != '\0') & 8;
        local_7e8._0_4_ = 0;
        if (DAT_146a0e790 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar6 = IsInRenderingThread();
            if (cVar6 == '\0') {
              FScopedEvent::FScopedEvent(local_860);
              plVar9 = (longlong *)FUN_14049e3d0(local_690,0,0xff);
              lVar7 = *plVar9;
              *(undefined1 **)(lVar7 + 0x10) = &LAB_141ac0ee0;
              *(undefined1 **)(lVar7 + 0x18) = local_860;
              lVar7 = *plVar9;
              lVar2 = plVar9[2];
              lVar23 = plVar9[1];
              lVar13 = *(longlong *)(lVar7 + 0x28);
              if (lVar13 != 0) {
                LOCK();
                *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
                UNLOCK();
              }
              FUN_1404a4fe0(lVar7,lVar23,(int)lVar2,1);
              if (lVar13 != 0) {
                LOCK();
                piVar11 = (int *)(lVar13 + 0x48);
                iVar20 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  FGraphEvent::Recycle(lVar13);
                }
              }
              FScopedEvent::~FScopedEvent(local_860);
            }
            else {
              lVar7 = operator_new(0x38);
              if (lVar7 == 0) {
                DAT_146a0e790 = 0;
              }
              else {
                DAT_146a0e790 =
                     TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar7);
              }
            }
          }
          else {
            lVar7 = operator_new(0x38);
            if (lVar7 == 0) {
              LOCK();
              if (DAT_146a0e790 == 0) {
                DAT_146a0e790 = 0;
              }
              UNLOCK();
            }
            else {
              lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                      ::FStaticStateResource::FStaticStateResource(lVar7);
              LOCK();
              if (DAT_146a0e790 != 0) {
                lVar7 = DAT_146a0e790;
              }
              DAT_146a0e790 = lVar7;
              UNLOCK();
            }
          }
        }
        uStack_808 = *(undefined8 *)(DAT_146a0e790 + 0x30);
        local_7e8 = (ulonglong)local_7e8._4_4_ << 0x20;
        if (((*(byte *)(lVar14 + 0x28cc) & 8) == 0) && (*(char *)(lVar14 + 0x1a98) != '\0')) {
          if (*(char *)(lVar14 + 0x1209) == '\0') {
            if (*(char *)(lVar14 + 0x120b) != '\0') {
LAB_141b13b22:
              if (((*(int *)(lVar14 + 0xf60) == 2) || (*(longlong *)(lVar14 + 0x10) == 0)) ||
                 (*(int *)(*(longlong *)(lVar14 + 0x10) + 8) < 2)) goto LAB_141b13cc3;
            }
          }
          else if (*(int *)(lVar14 + 0xf60) == 2) {
            if (*(char *)(lVar14 + 0x120b) != '\0') goto LAB_141b13b22;
            goto LAB_141b13cc3;
          }
          if (DAT_146a15238 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar6 = IsInRenderingThread();
              if (cVar6 == '\0') {
                FScopedEvent::FScopedEvent(local_858);
                plVar9 = (longlong *)FUN_14049e3d0(local_6d8,0,0xff);
                lVar7 = *plVar9;
                *(undefined1 **)(lVar7 + 0x10) = &LAB_141b09a60;
                *(undefined1 **)(lVar7 + 0x18) = local_858;
                lVar7 = *plVar9;
                lVar2 = plVar9[2];
                lVar23 = plVar9[1];
                lVar13 = *(longlong *)(lVar7 + 0x28);
                if (lVar13 != 0) {
                  LOCK();
                  *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_1404a4fe0(lVar7,lVar23,(int)lVar2,1);
                if (lVar13 != 0) {
                  LOCK();
                  piVar11 = (int *)(lVar13 + 0x48);
                  iVar20 = *piVar11;
                  *piVar11 = *piVar11 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    FGraphEvent::Recycle(lVar13);
                  }
                }
                FScopedEvent::~FScopedEvent(local_858);
              }
              else {
                lVar7 = operator_new(0x38);
                if (lVar7 == 0) {
                  DAT_146a15238 = 0;
                }
                else {
                  DAT_146a15238 =
                       TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar7);
                }
              }
            }
            else {
              lVar7 = operator_new(0x38);
              if (lVar7 == 0) {
                LOCK();
                if (DAT_146a15238 == 0) {
                  DAT_146a15238 = 0;
                }
                UNLOCK();
              }
              else {
                lVar7 = TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                        ::FStaticStateResource::FStaticStateResource(lVar7);
                LOCK();
                if (DAT_146a15238 != 0) {
                  lVar7 = DAT_146a15238;
                }
                DAT_146a15238 = lVar7;
                UNLOCK();
              }
            }
          }
          local_810 = *(undefined8 *)(DAT_146a15238 + 0x30);
          if (cVar5 == '\0') {
            FUN_141b14880(param_1,local_8c0,lVar14,&local_810);
          }
          else {
            local_718 = *(undefined4 *)local_898;
            uStack_714 = *(undefined4 *)((longlong)local_898 + 4);
            uStack_710 = *(undefined4 *)(local_898 + 1);
            uStack_70c = *(undefined4 *)((longlong)local_898 + 0xc);
            local_8e0 = CONCAT31(local_8e0._1_3_,local_8c7 == '\0');
            local_8e8 = &local_718;
            cVar6 = FUN_141b14d80(param_1,lVar14);
            if ((cVar6 != '\0') || (bVar25 = local_8c8 != '\0', local_8c8 = '\0', bVar25)) {
              local_8c8 = '\x01';
            }
            local_8c7 = '\x01';
          }
        }
LAB_141b13cc3:
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_7f8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_850);
        uVar21 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar21;
        lVar7 = local_8b0;
        param_2 = local_8c0;
        uVar18 = uVar18 + 0x30d0;
      } while ((int)uVar21 < *(int *)(param_1 + 200));
    }
    uVar18 = 0;
    if (local_8c6 != '\0') {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))();
      if (cVar5 == '\0') {
        local_850[1] = 0;
        local_768[0] = 0;
        local_768[1] = 0;
        FScopedGPUStatEvent::Begin(local_768,param_2,&DAT_146a10138,local_850 + 1);
        FUN_141b19410(param_1,param_2);
        FUN_141d5e420(param_1,param_2,1);
        if (local_768[0] != 0) {
          FScopedGPUStatEvent::End(local_768);
        }
      }
      if (*(longlong *)(param_1 + 0x2f0) == 0) {
        puVar1 = (ulonglong *)(param_2 + 0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar10 + 2;
        if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(puVar1,0x18);
          puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar10 + 2;
        }
        *puVar1 = (ulonglong)puVar8;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar10;
        *(undefined8 **)(param_2 + 8) = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_143f594a0;
      }
      FUN_141d689e0(param_1,param_2);
    }
    lVar14 = local_8b0;
    FUN_141cde700(local_8b0,param_2,0);
    uVar17 = uVar18;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        lVar7 = *(longlong *)(param_1 + 0xc0) + uVar17;
        FUN_141d05c90(lVar14,*(undefined4 *)(lVar7 + 0x1a38),0,local_418);
        local_8e8 = (undefined4 *)CONCAT44(local_8e8._4_4_,1);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_850 + 2,local_418,&DAT_146a632d8);
        local_828[0] = local_850[2];
        if (local_850[2] != 0) {
          LOCK();
          *(int *)(local_850[2] + 8) = *(int *)(local_850[2] + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        local_790 = 0x11;
        local_7a0 = 0;
        uStack_798 = 0;
        local_788 = *(longlong *)(lVar7 + 0x20);
        if (local_788 != 0) {
          LOCK();
          *(int *)(local_788 + 8) = *(int *)(local_788 + 8) + 1;
          UNLOCK();
        }
        local_780 = local_828[0];
        local_770 = 0;
        local_76c = 0;
        local_778._4_4_ =
             (uint)(*(char *)(lVar7 + 0x1205) != '\0') |
             -(uint)(*(char *)(lVar7 + 0x11b4) != '\0') & 8;
        local_778._0_4_ = 0;
        if (DAT_146a0e790 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar5 = IsInRenderingThread();
            if (cVar5 == '\0') {
              FScopedEvent::FScopedEvent(local_838);
              plVar9 = (longlong *)FUN_14049e3d0(local_6c0,0,0xff);
              lVar23 = *plVar9;
              *(undefined1 **)(lVar23 + 0x10) = &LAB_141ac0ee0;
              *(undefined1 **)(lVar23 + 0x18) = local_838;
              lVar23 = *plVar9;
              lVar4 = plVar9[2];
              lVar13 = plVar9[1];
              lVar2 = *(longlong *)(lVar23 + 0x28);
              if (lVar2 != 0) {
                LOCK();
                *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
                UNLOCK();
              }
              FUN_1404a4fe0(lVar23,lVar13,(int)lVar4,1);
              if (lVar2 != 0) {
                LOCK();
                piVar11 = (int *)(lVar2 + 0x48);
                iVar20 = *piVar11;
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  FGraphEvent::Recycle(lVar2);
                }
              }
              FScopedEvent::~FScopedEvent(local_838);
            }
            else {
              lVar23 = operator_new(0x38);
              if (lVar23 == 0) {
                DAT_146a0e790 = 0;
              }
              else {
                DAT_146a0e790 =
                     TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar23);
              }
            }
          }
          else {
            lVar23 = operator_new(0x38);
            if (lVar23 == 0) {
              LOCK();
              if (DAT_146a0e790 == 0) {
                DAT_146a0e790 = 0;
              }
              UNLOCK();
            }
            else {
              lVar23 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar23);
              LOCK();
              if (DAT_146a0e790 != 0) {
                lVar23 = DAT_146a0e790;
              }
              DAT_146a0e790 = lVar23;
              UNLOCK();
            }
          }
        }
        uStack_798 = *(undefined8 *)(DAT_146a0e790 + 0x30);
        local_778 = (ulonglong)local_778._4_4_ << 0x20;
        if (((*(byte *)(lVar7 + 0x28cc) & 8) == 0) && (*(char *)(lVar7 + 0x1a98) != '\0')) {
          if (*(char *)(lVar7 + 0x1209) == '\0') {
            if (*(char *)(lVar7 + 0x120b) != '\0') {
LAB_141b1404a:
              if (((*(int *)(lVar7 + 0xf60) == 2) || (*(longlong *)(lVar7 + 0x10) == 0)) ||
                 (*(int *)(*(longlong *)(lVar7 + 0x10) + 8) < 2)) goto LAB_141b141b2;
            }
          }
          else if (*(int *)(lVar7 + 0xf60) == 2) {
            if (*(char *)(lVar7 + 0x120b) != '\0') goto LAB_141b1404a;
            goto LAB_141b141b2;
          }
          if (DAT_146a15238 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar5 = IsInRenderingThread();
              if (cVar5 == '\0') {
                FScopedEvent::FScopedEvent(local_830);
                plVar9 = (longlong *)FUN_14049e3d0(local_6a8,0,0xff);
                lVar23 = *plVar9;
                *(undefined1 **)(lVar23 + 0x10) = &LAB_141b09a60;
                *(undefined1 **)(lVar23 + 0x18) = local_830;
                lVar23 = *plVar9;
                lVar4 = plVar9[2];
                lVar13 = plVar9[1];
                lVar2 = *(longlong *)(lVar23 + 0x28);
                if (lVar2 != 0) {
                  LOCK();
                  *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_1404a4fe0(lVar23,lVar13,(int)lVar4,1);
                if (lVar2 != 0) {
                  LOCK();
                  piVar11 = (int *)(lVar2 + 0x48);
                  iVar20 = *piVar11;
                  *piVar11 = *piVar11 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    FGraphEvent::Recycle(lVar2);
                  }
                }
                FScopedEvent::~FScopedEvent(local_830);
              }
              else {
                lVar23 = operator_new(0x38);
                if (lVar23 == 0) {
                  DAT_146a15238 = 0;
                }
                else {
                  DAT_146a15238 =
                       TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar23);
                }
              }
            }
            else {
              lVar23 = operator_new(0x38);
              if (lVar23 == 0) {
                LOCK();
                if (DAT_146a15238 == 0) {
                  DAT_146a15238 = 0;
                }
                UNLOCK();
              }
              else {
                lVar23 = TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar23);
                LOCK();
                if (DAT_146a15238 != 0) {
                  lVar23 = DAT_146a15238;
                }
                DAT_146a15238 = lVar23;
                UNLOCK();
              }
            }
          }
          local_7a0 = *(undefined8 *)(DAT_146a15238 + 0x30);
          FUN_141b18780(local_8c0,lVar7,param_1,0);
          local_8e8 = (undefined4 *)((ulonglong)local_8e8 & 0xffffffffffffff00);
          FUN_141ad3490(param_1,local_8c0,lVar7,&local_7a0);
        }
LAB_141b141b2:
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_788);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_828);
        uVar21 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar21;
        param_2 = local_8c0;
        uVar17 = uVar17 + 0x30d0;
      } while ((int)uVar21 < *(int *)(param_1 + 200));
    }
    FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(&local_730);
    cVar6 = local_8c8;
    cVar24 = local_8c7;
  }
  if (cVar24 == '\0') {
    (*(code *)*local_898)(local_898[1]);
    cVar6 = FUN_141b0c500(param_1);
    local_8c8 = cVar6;
  }
  if (*(char *)(param_1 + 0x2e5) != '\0') {
    iVar20 = *(int *)(param_1 + 200);
    if (1 < iVar20) {
      lVar7 = *(longlong *)(param_1 + 0xc0);
      local_8a8 = *(int *)(lVar7 + 0x1aa0);
      iStack_8a4 = *(int *)(lVar7 + 0x1aa4);
      iStack_8a0 = *(int *)(lVar7 + 0x1aa8);
      iStack_89c = *(int *)(lVar7 + 0x1aac);
      iVar12 = iStack_89c;
      iVar16 = iStack_8a0;
      iVar15 = iStack_8a4;
      iVar22 = local_8a8;
      if (1 < (longlong)iVar20) {
        lVar23 = (longlong)iVar20 + -1;
        piVar11 = (int *)(lVar7 + 0x4b78);
        do {
          iVar20 = piVar11[-2];
          if (iVar22 <= piVar11[-2]) {
            iVar20 = iVar22;
          }
          iVar22 = iVar20;
          iVar20 = piVar11[-1];
          if (iVar15 <= piVar11[-1]) {
            iVar20 = iVar15;
          }
          iVar15 = iVar20;
          iVar20 = *piVar11;
          if (*piVar11 <= iVar16) {
            iVar20 = iVar16;
          }
          iVar16 = iVar20;
          iVar20 = piVar11[1];
          if (piVar11[1] <= iVar12) {
            iVar20 = iVar12;
          }
          iVar12 = iVar20;
          lVar23 = lVar23 + -1;
          piVar11 = piVar11 + 0xc34;
        } while (lVar23 != 0);
      }
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(local_8c0 + 0x14) = *(int *)(local_8c0 + 0x14) + 1;
      **(undefined8 **)(local_8c0 + 8) = puVar10;
      *(undefined8 **)(local_8c0 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *(int *)(puVar10 + 4) = iVar12;
      *puVar10 = &PTR_LAB_143f59420;
      *(int *)(puVar10 + 2) = iVar22;
      *(int *)((longlong)puVar10 + 0x14) = iVar15;
      *(undefined4 *)(puVar10 + 3) = 0;
      *(int *)((longlong)puVar10 + 0x1c) = iVar16;
      *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
      param_2 = local_8c0;
      cVar6 = local_8c8;
    }
    local_8d0 = 0;
    local_8d8 = 1;
    local_8e0 = 0;
    local_8e8 = (undefined4 *)((ulonglong)local_8e8 & 0xffffffffffffff00);
    DrawClearQuadMRT(param_2,0,1,&DAT_1468b5d78);
  }
  FSceneRenderTargets::FinishRenderingPrePass(lVar14,param_2);
  if (local_768[2] != 0) {
    FScopedGPUStatEvent::End(local_768 + 2);
  }
  return cVar6;
}



// FUNCTION 141b143c0 FUN_141b143c0 body=1207 status=ok
// SIG undefined FUN_141b143c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141b143c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_168 [32];
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar9 = 0;
  local_148 = 0;
  local_130 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a15218) && (_Init_thread_header(&DAT_146a15218), DAT_146a15218 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.HiddenAreaMask");
    uVar10 = uVar9;
    if (plVar4 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a15210 = uVar10;
    _Init_thread_footer(&DAT_146a15218);
  }
  if ((((DAT_146a15210 != 0) && (*(int *)(DAT_146a15210 + 4) == 1)) && (DAT_146b17150 != 0)) &&
     ((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0 &&
      (lVar3 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(), lVar3 != 0)))) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    cVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (cVar2 != '\0') {
      local_128 = FSceneRenderTargets::Get(param_2);
      FUN_141cde700(local_128,param_2,1);
      local_c8 = 0;
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
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
      FUN_14049afe0(param_2);
      local_d8 = FUN_141b08790();
      local_c8 = FUN_141abf3f0();
      uStack_d0 = FUN_140985530();
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_143f59430;
      *(undefined1 *)(puVar8 + 2) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
      uVar10 = uVar9;
      uVar12 = uVar9;
      if (0 < *(int *)(param_1 + 200)) {
        do {
          lVar3 = *(longlong *)(param_1 + 0xc0);
          if (*(int *)(uVar9 + 0xf60 + lVar3) != 0) {
            local_13c = *(undefined4 *)(uVar9 + 0x1aa8 + lVar3);
            uVar1 = *(undefined4 *)(uVar9 + 0x1aac + lVar3);
            puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            local_140 = *(undefined4 *)(uVar9 + 0x1aa4 + lVar3);
            local_144 = *(undefined4 *)(uVar9 + 0x1aa0 + lVar3);
            puVar5 = puVar8 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30);
              puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar5 = puVar8 + 5;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar5;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            local_118 = 0;
            **(undefined8 **)(param_2 + 8) = puVar8;
            *(undefined8 **)(param_2 + 8) = puVar8 + 1;
            puVar8[1] = 0;
            *puVar8 = &PTR_LAB_143f59420;
            *(undefined4 *)(puVar8 + 2) = local_144;
            *(undefined4 *)((longlong)puVar8 + 0x14) = local_140;
            *(undefined4 *)((longlong)puVar8 + 0x1c) = local_13c;
            *(undefined4 *)(puVar8 + 3) = 0;
            *(undefined4 *)(puVar8 + 4) = uVar1;
            *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
            local_120 = &DAT_1469f93a0;
            lVar6 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar6 + 0x38,&local_148,&local_120);
            if (local_148 == -1) {
              lVar6 = 0;
            }
            else {
              lVar6 = (longlong)local_148 * 0x20 + *(longlong *)(lVar6 + 0x38);
            }
            plVar4 = (longlong *)0x0;
            plVar7 = (longlong *)(lVar6 + 0x10);
            if (lVar6 == 0) {
              plVar7 = plVar4;
            }
            local_108 = DAT_1464c2720;
            if (*plVar7 == 0) {
              uVar10 = 1;
              local_138 = 0;
            }
            else {
              lVar6 = *(longlong *)(*plVar7 + 0x48);
              if (*(char *)(lVar6 + 0x28) == '\0') {
                FUN_1419f3850(lVar6);
              }
              plVar4 = *(longlong **)(lVar6 + 0x38);
            }
            plStack_100 = plVar4;
            if (uVar10 != 0) {
              uVar10 = 0;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
            }
            local_bc = local_bc & 0xffffffff00000000;
            FUN_141ed6ac0(param_2,&local_108,2,1);
            lVar6 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
            if (lVar6 != 0) {
              plVar4 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
              (**(code **)(*plVar4 + 0x108))(plVar4,param_2,*(undefined4 *)(uVar9 + 0xf60 + lVar3));
            }
          }
          uVar11 = (int)uVar12 + 1;
          uVar9 = uVar9 + 0x30d0;
          uVar12 = (ulonglong)uVar11;
          param_1 = local_130;
        } while ((int)uVar11 < *(int *)(local_130 + 200));
      }
      FSceneRenderTargets::FinishRenderingPrePass(local_128,param_2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b14880 FUN_141b14880 body=730 status=ok
// SIG undefined FUN_141b14880(void)

byte FUN_141b14880(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  FUN_141b18780(param_2,param_3,param_1,0);
  if ((*(char *)(param_3 + 0x1209) == '\0') || (*(int *)(param_3 + 0xf60) != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (bVar3) {
    local_c8 = *(longlong *)(param_1 + 0xc0);
    local_c0 = local_c8 + 0x30d0;
    local_b8 = local_c8 + 0x1b60;
    local_b0 = local_c8 + 0x4c30;
    local_a8 = local_c8 + 0x1c50;
    local_a0 = local_c8 + 0x4d20;
    local_60 = *param_4;
    local_58 = param_4[1];
    local_50 = *(undefined4 *)(param_4 + 2);
    local_48 = param_4[3];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    local_40 = param_4[4];
    local_30 = *(undefined4 *)(param_4 + 6);
    local_38 = *(undefined4 *)(param_4 + 5);
    local_34 = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_2c = 0;
    bVar4 = FUN_141ae7340(lVar2 + 0x70,param_2,local_c8,1,&local_60,0,0,&local_c8,0,
                          *(int *)(lVar2 + 0xa8) + -1,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    bVar5 = FUN_141b06410(*(longlong *)(param_1 + 8) + 0x108,param_2,&local_c8,param_4);
    bVar5 = bVar5 | bVar4;
    if (*(int *)(param_1 + 0x2e0) < 2) goto LAB_141b14b1e;
    bVar4 = FUN_141b06410(*(longlong *)(param_1 + 8) + 0x1a0,param_2,&local_c8,param_4);
  }
  else {
    local_98 = *param_4;
    local_90 = param_4[1];
    local_88 = *(undefined4 *)(param_4 + 2);
    local_80 = param_4[3];
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    local_78 = param_4[4];
    lVar1 = param_3 + 0x1c50;
    local_68 = *(undefined4 *)(param_4 + 6);
    local_70 = *(undefined4 *)(param_4 + 5);
    local_6c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_64 = 0;
    bVar4 = FUN_141ae6e80(lVar2 + 0x70,param_2,param_3,0,&local_98,param_3 + 0x1b60,lVar1,0,0,
                          *(int *)(lVar2 + 0xa8) + -1,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_80);
    bVar5 = FUN_141b06330(*(longlong *)(param_1 + 8) + 0x108,param_2,param_3,param_4,
                          param_3 + 0x1b60,lVar1);
    bVar5 = bVar5 | bVar4;
    if (*(int *)(param_1 + 0x2e0) < 2) goto LAB_141b14b1e;
    bVar4 = FUN_141b06330(*(longlong *)(param_1 + 8) + 0x1a0,param_2,param_3,param_4,
                          param_3 + 0x1b60,lVar1);
  }
  bVar5 = bVar5 | bVar4;
LAB_141b14b1e:
  bVar4 = FUN_141b14b60(param_1,param_2,param_3,param_4);
  return bVar4 | bVar5;
}



// FUNCTION 141b14b60 FUN_141b14b60 body=539 status=ok
// SIG undefined FUN_141b14b60(void)

undefined8 FUN_141b14b60(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_res8;
  undefined8 local_res10;
  ulonglong local_58;
  undefined2 local_50;
  undefined2 uStack_4e;
  
  iVar9 = 0;
  local_58 = (ulonglong)*(uint *)(param_1 + 0x2e0);
  uVar4 = local_58;
  _local_50 = CONCAT22(uStack_4e,1);
  uVar5 = _local_50;
  if (0 < *(int *)(param_3 + 0x2288)) {
    lVar7 = 0;
    fVar13 = DAT_1464c3118;
    local_res10 = param_2;
    do {
      lVar2 = *(longlong *)(param_3 + 0x2280);
      uVar1 = *(uint *)(lVar7 + 0x10 + lVar2);
      if (((uVar1 & 3) != 0) && ((uVar1 >> 3 & 1) != 0)) {
        lVar3 = *(longlong *)(lVar7 + lVar2);
        lVar2 = *(longlong *)(lVar7 + 8 + lVar2);
        if (*(int *)(param_1 + 0x2e0) < 3) {
          fVar12 = *(float *)(lVar2 + 0xc4) - *(float *)(param_3 + 0x8e0);
          fVar11 = *(float *)(lVar2 + 0xc0) - *(float *)(param_3 + 0x8dc);
          fVar10 = *(float *)(lVar2 + 200) - *(float *)(param_3 + 0x8e4);
          if (((*(uint *)(lVar2 + 0x1c) >> 0x1b & 1) == 0) ||
             (((*(int *)(lVar2 + 0x10) - 1U < 2 && (*(char *)(param_1 + 0x2e4) == '\0')) ||
              (*(float *)(lVar2 + 0xd8) * *(float *)(lVar2 + 0xd8) <=
               fVar13 * fVar13 *
               (fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10) *
               *(float *)(param_3 + 0x11ec) * *(float *)(param_3 + 0x11ec))))) goto LAB_141b14d31;
        }
        uVar6 = FUN_141ac28e0(param_3);
        iVar8 = 1;
        if (*(int *)(lVar3 + 0x80) != 1) {
          iVar8 = (1 << ((byte)*(int *)(lVar3 + 0x80) & 0x1f)) + -1;
        }
        local_res8 = (longlong)iVar8;
        local_58 = uVar4;
        _local_50 = uVar5;
        FUN_141b05620(local_res10,param_3,&local_58,lVar3,&local_res8,param_4,1,lVar2,
                      *(undefined4 *)(lVar3 + 0xb0),0,uVar6,0);
        fVar13 = DAT_1464c3118;
      }
LAB_141b14d31:
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 0x18;
    } while (iVar9 < *(int *)(param_3 + 0x2288));
  }
  return 1;
}



// FUNCTION 141b14d80 FUN_141b14d80 body=1443 status=ok
// SIG undefined FUN_141b14d80(void)

undefined1
FUN_141b14d80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res10;
  longlong *plVar10;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
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
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  uVar5 = 0;
  if ((*(int *)(DAT_146a10710 + 4) == 0) && (*(int *)(DAT_146ab6d10 + 4) == 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  FUN_141d59a10(&local_1e8,local_res10,param_2,param_1,param_3,0 < *(int *)(DAT_146a106e0 + 4),uVar7
                ,param_4);
  local_1e8 = &PTR__scalar_deleting_destructor__144dd5598;
  if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    local_218 = *(longlong *)(param_1 + 0xc0);
    local_210 = local_218 + 0x30d0;
    local_208 = local_218 + 0x1b60;
    local_200 = local_218 + 0x4c30;
    local_1f8 = local_218 + 0x1c50;
    local_1f0 = local_218 + 0x4d20;
    FUN_141b06f80(*(longlong *)(param_1 + 8) + 0x70,1,0,0,&local_218,&local_1e8);
    local_res10 = 1;
    FUN_141b064e0(*(longlong *)(param_1 + 8) + 0x108,1,0,0,&local_218,&local_1e8);
    if (*(int *)(param_1 + 0x2e0) < 2) goto LAB_141b14fd8;
    local_res10 = 1;
    lVar9 = 0;
    plVar10 = &local_218;
    lVar8 = 0;
  }
  else {
    lVar8 = param_2 + 0x1b60;
    FUN_141b06f80(*(longlong *)(param_1 + 8) + 0x70,0,lVar8,param_2 + 0x1c50,0,&local_1e8);
    local_res10 = 0;
    FUN_141b064e0(*(longlong *)(param_1 + 8) + 0x108,0,lVar8,param_2 + 0x1c50,0,&local_1e8);
    if (*(int *)(param_1 + 0x2e0) < 2) goto LAB_141b14fd8;
    local_res10 = 0;
    lVar9 = param_2 + 0x1c50;
    plVar10 = (longlong *)0x0;
  }
  FUN_141b064e0(*(longlong *)(param_1 + 8) + 0x1a0,local_res10,lVar8,lVar9,plVar10,&local_1e8);
LAB_141b14fd8:
  if (DAT_146a0e908 == 0) {
    if (param_6 != '\0') {
      (*(code *)*param_5)(param_5[1]);
      uVar5 = FUN_141b0c500(param_1,param_3);
    }
    uVar6 = FUN_141d6b6f0(&local_1e8);
    plVar10 = (longlong *)TGraphTask<FFunctionGraphTask>::CreateTask(local_68,0,DAT_1464a8210);
    lVar8 = *plVar10;
    *(longlong *)(lVar8 + 0x10) = param_1;
    *(undefined8 *)(lVar8 + 0x18) = uVar6;
    *(longlong *)(lVar8 + 0x20) = param_2;
    *(undefined8 *)(lVar8 + 0x28) = local_1d0;
    *(undefined8 *)(lVar8 + 0x30) = local_1c8;
    *(undefined4 *)(lVar8 + 0x38) = local_1c0;
    *(longlong *)(lVar8 + 0x40) = local_1b8;
    if (local_1b8 != 0) {
      LOCK();
      *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(lVar8 + 0x48) = local_1b0;
    *(undefined4 *)(lVar8 + 0x50) = local_1a8;
    *(undefined4 *)(lVar8 + 0x54) = local_1a4;
    *(undefined4 *)(lVar8 + 0x58) = local_1a0;
    *(undefined1 *)(lVar8 + 0x5c) = 0;
    lVar8 = *plVar10;
    lVar4 = plVar10[2];
    lVar9 = plVar10[1];
    local_228 = *(longlong *)(lVar8 + 0x68);
    if (local_228 != 0) {
      LOCK();
      *(int *)(local_228 + 0x48) = *(int *)(local_228 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141ada340(lVar8,lVar9,(int)lVar4,1);
    FParallelCommandListSet::AddParallelCommandList(&local_1e8,uVar6,&local_228,0xffffffff);
    if (local_228 != 0) {
      LOCK();
      piVar1 = (int *)(local_228 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  else if (param_6 != '\0') {
    uVar5 = FUN_141b0c500(param_1,param_3);
  }
  local_1e8 = &PTR__scalar_deleting_destructor__144dd5598;
  uVar6 = FSceneRenderTargets::Get(local_198);
  FUN_141cde700(uVar6,local_198,0);
  FUN_141b18780(local_198,local_1e0,local_1d8,0);
  FUN_141d662d0(&local_1e8,1);
  FParallelCommandListSet::~FParallelCommandListSet();
  if (DAT_146a0e908 != 0) {
    if (param_6 != '\0') {
      (*(code *)*param_5)();
    }
    if ((*(int *)(DAT_146a10710 + 4) == 0) && (*(int *)(DAT_146ab6d10 + 4) == 0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    FUN_141d59a10(&local_128,local_res10,param_2,param_1,param_3,0 < *(int *)(DAT_146a106e0 + 4),
                  uVar7,param_4);
    local_128 = &PTR__scalar_deleting_destructor__144dd5598;
    uVar6 = FSceneRenderTargets::Get(param_3);
    FUN_141cde700(uVar6,param_3,0);
    uVar6 = FUN_141d6b6f0(&local_128);
    plVar10 = (longlong *)TGraphTask<FFunctionGraphTask>::CreateTask(local_50,0,DAT_1464a8210);
    lVar8 = *plVar10;
    *(longlong *)(lVar8 + 0x10) = param_1;
    *(undefined8 *)(lVar8 + 0x18) = uVar6;
    *(longlong *)(lVar8 + 0x20) = param_2;
    *(undefined8 *)(lVar8 + 0x28) = local_110;
    *(undefined8 *)(lVar8 + 0x30) = local_108;
    *(undefined4 *)(lVar8 + 0x38) = local_100;
    *(longlong *)(lVar8 + 0x40) = local_f8;
    if (local_f8 != 0) {
      LOCK();
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(lVar8 + 0x48) = local_f0;
    *(undefined4 *)(lVar8 + 0x50) = local_e8;
    *(undefined4 *)(lVar8 + 0x54) = local_e4;
    *(undefined4 *)(lVar8 + 0x58) = local_e0;
    *(undefined1 *)(lVar8 + 0x5c) = 0;
    lVar8 = *plVar10;
    lVar4 = plVar10[2];
    lVar9 = plVar10[1];
    local_220 = *(longlong *)(lVar8 + 0x68);
    if (local_220 != 0) {
      LOCK();
      *(int *)(local_220 + 0x48) = *(int *)(local_220 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141ada340(lVar8,lVar9,(int)lVar4,1);
    FParallelCommandListSet::AddParallelCommandList(&local_128,uVar6,&local_220,0xffffffff);
    if (local_220 != 0) {
      LOCK();
      piVar1 = (int *)(local_220 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    local_128 = &PTR__scalar_deleting_destructor__144dd5598;
    uVar6 = FSceneRenderTargets::Get(local_d8);
    FUN_141cde700(uVar6,local_d8,0);
    FUN_141b18780(local_d8,local_120,local_118,0);
    FUN_141d662d0(&local_128,1);
    FParallelCommandListSet::~FParallelCommandListSet(&local_128);
  }
  return uVar5;
}



// FUNCTION 141b15330 FUN_141b15330 body=906 status=ok
// SIG undefined FUN_141b15330(void)

void FUN_141b15330(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *local_res8;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148 [16];
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar2 = param_1[8];
  FSceneRenderTargets::Get(lVar2);
  lVar3 = *param_1;
  lVar7 = (longlong)*(int *)(param_4 + 0xe8);
  local_res8 = *(longlong **)(lVar3 + 0x1b30);
  uVar5 = *(uint *)((longlong)local_res8 + lVar7 * 8 + 4);
  if ((uVar5 >> 10 & 1) != 0) {
    iVar8 = 0;
    if (*(int *)(param_4 + 0xe8) != 0) {
      iVar8 = *(int *)(*(longlong *)(lVar3 + 0x2290) + -4 + lVar7 * 4);
    }
    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x2290) + lVar7 * 4);
    if (iVar8 < iVar1) {
      lVar10 = (longlong)iVar8 * 0x18;
      uVar11 = (ulonglong)(uint)(iVar1 - iVar8);
      do {
        iVar8 = 1;
        lVar9 = *(longlong *)(lVar10 + *(longlong *)(lVar3 + 0x2280));
        if (*(int *)(lVar9 + 0x80) != 1) {
          iVar8 = (1 << ((byte)*(int *)(lVar9 + 0x80) & 0x1f)) + -1;
        }
        local_138 = *param_2;
        uStack_130 = param_2[1];
        local_128 = param_2[2];
        uStack_120 = param_2[3];
        local_118 = param_2[4];
        uStack_110 = param_2[5];
        local_190 = (longlong)iVar8;
        local_108 = param_2[6];
        uStack_100 = param_2[7];
        local_f8 = param_2[8];
        uStack_f0 = param_2[9];
        local_e8 = param_2[10];
        uStack_e0 = param_2[0xb];
        local_d8 = *(undefined4 *)(param_2 + 0xc);
        uStack_d4 = *(undefined4 *)((longlong)param_2 + 100);
        uStack_d0 = *(undefined4 *)(param_2 + 0xd);
        uStack_cc = *(undefined4 *)((longlong)param_2 + 0x6c);
        local_c8 = *(undefined4 *)(param_2 + 0xe);
        uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x74);
        uStack_c0 = *(undefined4 *)(param_2 + 0xf);
        uStack_bc = *(undefined4 *)((longlong)param_2 + 0x7c);
        FUN_141b04e10(lVar2,lVar3,&local_138,lVar9,&local_190,0,param_3,
                      *(undefined8 *)(lVar10 + 8 + *(longlong *)(lVar3 + 0x2280)),
                      *(undefined4 *)(lVar9 + 0xb0),0,0);
        lVar10 = lVar10 + 0x18;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar5 = *(uint *)((longlong)local_res8 + lVar7 * 8 + 4);
    }
    if (((uVar5 >> 8 & 1) != 0) && (iVar8 = *(int *)(param_4 + 0x38), 0 < (longlong)iVar8)) {
      lVar7 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(param_4 + 0x30) + lVar7 * 8);
        uVar5 = *(uint *)(lVar10 + 200);
        lVar9 = *(longlong *)(lVar3 + 0x1b50);
        if (*(longlong *)(lVar3 + 0x1b50) == 0) {
          lVar9 = lVar3 + 0x1b40;
        }
        uVar6 = uVar5;
        if ((int)uVar5 < 0) {
          uVar6 = uVar5 + 0x1f;
        }
        if ((*(uint *)(lVar9 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
          local_res8 = (longlong *)0x0;
          (**(code **)(**(longlong **)(lVar10 + 0xa8) + 0x40))
                    (*(longlong **)(lVar10 + 0xa8),*(undefined4 *)(lVar3 + 0x1a38),local_148,
                     &local_res8);
          cVar4 = (**(code **)(*local_res8 + 0xa8))();
          if (cVar4 != '\0') {
            local_180 = *param_3;
            local_178 = param_3[1];
            local_170 = *(undefined4 *)(param_3 + 2);
            local_168 = param_3[3];
            if (local_168 != 0) {
              LOCK();
              *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
              UNLOCK();
            }
            local_160 = param_3[4];
            local_150 = *(undefined4 *)(param_3 + 6);
            local_158 = *(undefined4 *)(param_3 + 5);
            local_154 = *(undefined4 *)((longlong)param_3 + 0x2c);
            local_14c = 0;
            FUN_141b36960(&local_180,lVar3,lVar10,0);
            if ((*(uint *)(lVar10 + 0x8c) & 0x2000000) == 0) {
              local_188 = (1L << ((byte)*(undefined4 *)(lVar10 + 0x80) & 0x3f)) + -1;
            }
            else {
              local_188 = *(longlong *)
                           (*(longlong *)(lVar3 + 0x1c50) + (longlong)*(int *)(lVar10 + 0xcc) * 8);
            }
            local_b8 = *param_2;
            uStack_b0 = param_2[1];
            local_a8 = param_2[2];
            uStack_a0 = param_2[3];
            local_98 = param_2[4];
            uStack_90 = param_2[5];
            local_88 = param_2[6];
            uStack_80 = param_2[7];
            local_78 = param_2[8];
            uStack_70 = param_2[9];
            local_68 = param_2[10];
            uStack_60 = param_2[0xb];
            local_58 = *(undefined4 *)(param_2 + 0xc);
            uStack_54 = *(undefined4 *)((longlong)param_2 + 100);
            uStack_50 = *(undefined4 *)(param_2 + 0xd);
            uStack_4c = *(undefined4 *)((longlong)param_2 + 0x6c);
            local_48 = *(undefined4 *)(param_2 + 0xe);
            uStack_44 = *(undefined4 *)((longlong)param_2 + 0x74);
            uStack_40 = *(undefined4 *)(param_2 + 0xf);
            uStack_3c = *(undefined4 *)((longlong)param_2 + 0x7c);
            FUN_141b04e10(lVar2,lVar3,&local_b8,lVar10,&local_188,0,&local_180,
                          *(undefined8 *)(param_4 + 8),*(undefined4 *)(lVar10 + 0xb0),0,0);
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar8);
    }
  }
  return;
}



// FUNCTION 141b156c0 ResizeGrow body=65 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTransientDecalRenderData,TMemStackAllocator<0>_>::ResizeGrow
               (longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_140848a70(param_1,param_2,iVar2,0x28);
  return;
}



// FUNCTION 141b15710 FUN_141b15710 body=26 status=ok
// SIG undefined FUN_141b15710(void)

void FUN_141b15710(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140848a70(param_1,*(undefined4 *)(param_1 + 8),param_2,0x28);
    return;
  }
  return;
}



// FUNCTION 141b15730 FUN_141b15730 body=29 status=ok
// SIG undefined FUN_141b15730(void)

void FUN_141b15730(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FTaskGraphInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x000141b15749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,DAT_1464a8214);
  return;
}



// FUNCTION 141b15750 FUN_141b15750 body=143 status=ok
// SIG undefined FUN_141b15750(void)

void FUN_141b15750(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
  if (cVar1 == '\0') {
    iVar2 = FUN_1419ef5f0(param_1);
    if (2 < iVar2) {
      cVar1 = (**(code **)(*param_2 + 0x138))(param_2);
      if (cVar1 == '\0') goto LAB_141b1579e;
    }
    uVar3 = 1;
    uVar4 = 2;
  }
  else {
LAB_141b1579e:
    uVar3 = 2;
    uVar4 = 4;
  }
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MIN_MATERIAL_TEXCOORDS",uVar4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MIN_MATERIAL_COLORS",uVar3);
  return;
}



// FUNCTION 141b157e0 SetMesh body=153 status=ok
// SIG undefined SetMesh(void)

void TDepthOnlyVS<0>::SetMesh
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141d84f90(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),param_3,param_4,param_5,param_6,
                param_7,0);
  return;
}



// FUNCTION 141b15880 FUN_141b15880 body=443 status=ok
// SIG undefined FUN_141b15880(void)

void FUN_141b15880(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FUN_141d84bb0(param_1,param_2,*(undefined8 *)(lVar4 + 0x40),param_3,param_4,param_5,param_6,
                param_7,0);
  lVar4 = *(longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(param_4 + 0x1a58);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  uVar6 = (uint)*(ushort *)(param_1 + 0x154);
  if (0xf < *(ushort *)(param_1 + 0x154)) {
    uVar6 = 0x10;
  }
  _Size = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x152);
    uVar2 = *(ushort *)(param_1 + 0x150);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)(((longlong)iVar3 + 3) * 0x10 + param_5),_Size);
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
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    puVar9[2] = uVar5;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141b15a40 FUN_141b15a40 body=318 status=ok
// SIG undefined FUN_141b15a40(void)

void FUN_141b15a40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,int param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_5 + 0x78);
  if (*(longlong *)(param_5 + 0x78) == 0) {
    lVar4 = param_5;
  }
  lVar4 = lVar4 + (longlong)param_6 * 0x78;
  TDepthOnlyVS<0>::SetMesh
            (*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 8),param_3,param_4,
             lVar4,param_7);
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FBaseHS::SetMesh(*(longlong *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 8),param_3,
                     param_4,lVar4,param_7);
    FBaseDS::SetMesh(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 8),param_3,
                     param_4,lVar4,param_7);
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    FUN_141d84bb0(lVar1,param_2,*(undefined8 *)(lVar3 + 0x40),uVar2,param_3,param_4,lVar4,param_7,0)
    ;
  }
  return;
}



// FUNCTION 141b15b80 FUN_141b15b80 body=201 status=ok
// SIG undefined FUN_141b15b80(void)

void FUN_141b15b80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141d84f90(lVar1,param_2,*(undefined8 *)(lVar3 + 0x38),uVar2);
  return;
}



// FUNCTION 141b15c50 FUN_141b15c50 body=718 status=ok
// SIG undefined FUN_141b15c50(void)

void FUN_141b15c50(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,param_2[8],uVar3,*(undefined8 *)(*param_2 + 0x20));
  uVar4 = FUN_1404a0e20();
  lVar2 = param_2[8];
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar5;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar6;
    *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar3;
    puVar6[4] = param_3;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar5;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar6;
    *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  lVar2 = param_2[8];
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar5;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar6;
    *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_4;
  }
  lVar2 = param_2[8];
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar5;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar6;
    *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    puVar6[4] = param_5;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  lVar2 = *param_2;
  local_30 = *(undefined4 *)(lVar2 + 0x1804);
  local_34 = *(undefined4 *)(lVar2 + 0x1800);
  local_38 = *(undefined4 *)(lVar2 + 0x17fc);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2[8],uVar3,param_1 + 0xd0,&local_38,0);
  return;
}



// FUNCTION 141b15f20 FUN_141b15f20 body=366 status=ok
// SIG undefined FUN_141b15f20(void)

void FUN_141b15f20(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,longlong param_6,byte param_7,byte param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_6;
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_6 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa8c40(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),param_3,param_4,param_5,lVar3 + 0x18,
                uVar2);
  if (*(short *)(param_1 + 0x15a) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    param_6._0_4_ = (uint)param_7;
    param_4 = param_4 & 0xffffffff00000000;
    FUN_1404986d0(param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0x156,&param_6,param_4);
  }
  if (*(short *)(param_1 + 0x160) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    param_6._0_4_ = (uint)param_8;
    param_4 = param_4 & 0xffffffff00000000;
    FUN_1404986d0(param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0x15c,&param_6,param_4);
  }
  if (*(short *)(param_1 + 0x154) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    param_6._0_4_ = 0;
    if (*(char *)(lVar1 + 0x28) == '\0') {
      FUN_1419f3850(lVar1);
    }
    FUN_1404986d0(param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0x150,&param_6,
                  param_4 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141b16090 FUN_141b16090 body=983 status=ok
// SIG undefined FUN_141b16090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b16090(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res8;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  uVar6 = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  local_res20 = uVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar6;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar6 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b16138;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x10));
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
  puVar12 = (undefined4 *)&DAT_146a0e8b0;
LAB_141b16138:
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,uVar3,puVar12,uVar4);
  local_res8 = *(undefined8 *)(param_4 + 0x10);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar11 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *puVar11 = local_res8;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar10 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar10 + 2) = 1;
  puVar10[3] = puVar11;
  *(undefined4 *)(puVar10 + 4) = 2;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 3;
  puVar10[5] = 0;
  uVar4 = *(undefined8 *)(param_4 + 8);
  cVar5 = SetUAVParameterIfCS<FRHICommandList>
                    (param_2,uVar3,param_1 + 0xc4,*(undefined8 *)(param_4 + 0x10));
  if ((cVar5 == '\0') && (*(short *)(param_1 + 0xc2) != 0)) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144d92090;
    puVar11[2] = uVar3;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar4;
  }
  puVar12 = (undefined4 *)CONCAT44(param_5._4_4_,(float)param_5);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd8,puVar12 + 1,0);
  fVar13 = _guard_xfg_dispatch_icall_nop(2.0,-((float)(DAT_1464c17b8 - 1) * _DAT_1464c17a8));
  fVar14 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  param_5._0_4_ = fVar13 * ((float)puVar12[1] / (fVar14 + 1.0));
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0xde,&param_5,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe4,&DAT_1464c17a8,0);
  fVar13 = DAT_1464c17ac;
  if (65000.0 <= DAT_1464c17ac) {
    fVar13 = 65000.0;
  }
  local_res8 = CONCAT44(local_res8._4_4_,fVar13);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xea,&local_res8,0);
  local_res18[0] = *puVar12;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xf0,local_res18,0);
  FUN_141aa5e80(param_1 + 200,param_2,&local_res20,*(undefined4 *)(param_3 + 0x1a38),0xf);
  return;
}



// FUNCTION 141b16470 FUN_141b16470 body=2477 status=ok
// SIG undefined FUN_141b16470(void)

void FUN_141b16470(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,float param_6)

{
  float *pfVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
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
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  void *pvVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulonglong local_res8;
  uint local_res18 [4];
  undefined8 local_178;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
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
  
  lVar20 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar20 + 0x28) == '\0') {
    FUN_1419f3850(lVar20);
  }
  uVar3 = *(undefined8 *)(lVar20 + 0x40);
  local_res8 = 0;
  (**(code **)(*param_4 + 0x40))(param_4,*(undefined4 *)(param_3 + 0x1a38),local_res18,&local_res8);
  uVar19 = local_res8;
  FUN_141d857a0(param_1,param_2,uVar3,param_4,local_res8,param_3,param_3 + 0x20,0x1f);
  pfVar1 = (float *)(param_5 + 0x80);
  FMatrix::InverseFast(pfVar1,&local_118);
  if (*(short *)(param_1 + 0x114) != 0) {
    fVar30 = *(float *)(param_3 + 0x610);
    fVar31 = *(float *)(param_3 + 0x614);
    fVar32 = *(float *)(param_3 + 0x618);
    fVar33 = *(float *)(param_3 + 0x61c);
    fVar6 = *(float *)(param_3 + 0x620);
    fVar7 = *(float *)(param_3 + 0x624);
    fVar8 = *(float *)(param_3 + 0x628);
    fVar9 = *(float *)(param_3 + 0x62c);
    fVar10 = *(float *)(param_3 + 0x630);
    fVar11 = *(float *)(param_3 + 0x634);
    fVar12 = *(float *)(param_3 + 0x638);
    fVar13 = *(float *)(param_3 + 0x63c);
    fVar24 = (float)*(int *)(param_3 + 0x1aa0);
    fVar25 = 1.0 / (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0));
    fVar26 = fVar25 + fVar25;
    fVar14 = *(float *)(param_3 + 0x640);
    fVar15 = *(float *)(param_3 + 0x644);
    fVar16 = *(float *)(param_3 + 0x648);
    fVar17 = *(float *)(param_3 + 0x64c);
    fVar29 = -1.0 - (fVar24 + fVar24) * fVar25;
    fVar24 = 1.0 / (float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4));
    fVar25 = (float)*(int *)(param_3 + 0x1aa4);
    fVar27 = fVar24 * -2.0;
    fVar39 = fVar26 * fVar30 + fVar6 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0;
    fVar40 = fVar26 * fVar31 + fVar7 * 0.0 + fVar11 * 0.0 + fVar15 * 0.0;
    fVar41 = fVar26 * fVar32 + fVar8 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
    fVar42 = fVar26 * fVar33 + fVar9 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
    fVar34 = (fVar25 + fVar25) * fVar24 + 1.0;
    fVar24 = fVar30 * 0.0 + fVar27 * fVar6 + fVar10 * 0.0 + fVar14 * 0.0;
    fVar25 = fVar31 * 0.0 + fVar27 * fVar7 + fVar11 * 0.0 + fVar15 * 0.0;
    fVar26 = fVar32 * 0.0 + fVar27 * fVar8 + fVar12 * 0.0 + fVar16 * 0.0;
    fVar27 = fVar33 * 0.0 + fVar27 * fVar9 + fVar13 * 0.0 + fVar17 * 0.0;
    fVar35 = fVar30 * 0.0 + fVar6 * 0.0 + fVar10 * 1.0 + fVar14 * 0.0;
    fVar36 = fVar31 * 0.0 + fVar7 * 0.0 + fVar11 * 1.0 + fVar15 * 0.0;
    fVar37 = fVar32 * 0.0 + fVar8 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
    fVar38 = fVar33 * 0.0 + fVar9 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
    fVar30 = fVar29 * fVar30 + fVar34 * fVar6 + fVar10 * 0.0 + fVar14 * 1.0;
    fVar31 = fVar29 * fVar31 + fVar34 * fVar7 + fVar11 * 0.0 + fVar15 * 1.0;
    fVar32 = fVar29 * fVar32 + fVar34 * fVar8 + fVar12 * 0.0 + fVar16 * 1.0;
    fVar33 = fVar29 * fVar33 + fVar34 * fVar9 + fVar13 * 0.0 + fVar17 * 1.0;
    local_158 = fVar40 * local_108 + fVar39 * local_118 + fVar41 * local_f8 + fVar42 * local_e8;
    fStack_154 = fVar40 * fStack_104 + fVar39 * fStack_114 + fVar41 * fStack_f4 + fVar42 * fStack_e4
    ;
    fStack_150 = fVar40 * fStack_100 + fVar39 * fStack_110 + fVar41 * fStack_f0 + fVar42 * fStack_e0
    ;
    fStack_14c = fVar40 * fStack_fc + fVar39 * fStack_10c + fVar41 * fStack_ec + fVar42 * fStack_dc;
    fStack_148 = fVar25 * local_108 + fVar24 * local_118 + fVar26 * local_f8 + fVar27 * local_e8;
    fStack_144 = fVar25 * fStack_104 + fVar24 * fStack_114 + fVar26 * fStack_f4 + fVar27 * fStack_e4
    ;
    uStack_140 = CONCAT44(fVar25 * fStack_fc + fVar24 * fStack_10c + fVar26 * fStack_ec +
                          fVar27 * fStack_dc,
                          fVar25 * fStack_100 + fVar24 * fStack_110 + fVar26 * fStack_f0 +
                          fVar27 * fStack_e0);
    local_138 = fVar36 * local_108 + fVar35 * local_118 + fVar37 * local_f8 + fVar38 * local_e8;
    fStack_134 = fVar36 * fStack_104 + fVar35 * fStack_114 + fVar37 * fStack_f4 + fVar38 * fStack_e4
    ;
    fStack_130 = fVar36 * fStack_100 + fVar35 * fStack_110 + fVar37 * fStack_f0 + fVar38 * fStack_e0
    ;
    fStack_12c = fVar36 * fStack_fc + fVar35 * fStack_10c + fVar37 * fStack_ec + fVar38 * fStack_dc;
    uVar19 = uVar19 & 0xffffffff00000000;
    local_128 = fVar31 * local_108 + fVar30 * local_118 + fVar32 * local_f8 + fVar33 * local_e8;
    fStack_124 = fVar31 * fStack_104 + fVar30 * fStack_114 + fVar32 * fStack_f4 + fVar33 * fStack_e4
    ;
    fStack_120 = fVar31 * fStack_100 + fVar30 * fStack_110 + fVar32 * fStack_f0 + fVar33 * fStack_e0
    ;
    fStack_11c = fVar31 * fStack_fc + fVar30 * fStack_10c + fVar32 * fStack_ec + fVar33 * fStack_dc;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar3,param_1 + 0x110,&local_158,uVar19);
  }
  if (*(short *)(param_1 + 0x11a) != 0) {
    uStack_140 = *(undefined8 *)(param_5 + 0x98);
    local_158 = (float)*(undefined8 *)pfVar1;
    fStack_154 = (float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
    fStack_150 = (float)*(undefined8 *)(param_5 + 0x88);
    fStack_14c = (float)((ulonglong)*(undefined8 *)(param_5 + 0x88) >> 0x20);
    local_138 = *(float *)(param_5 + 0xa0);
    fStack_134 = *(float *)(param_5 + 0xa4);
    fStack_130 = *(float *)(param_5 + 0xa8);
    fStack_12c = *(float *)(param_5 + 0xac);
    fStack_148 = (float)*(undefined8 *)(param_5 + 0x90);
    fStack_144 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x90) >> 0x20);
    local_128 = *(float *)(param_5 + 0xb0);
    fStack_124 = *(float *)(param_5 + 0xb4);
    fStack_120 = *(float *)(param_5 + 0xb8);
    fStack_11c = *(float *)(param_5 + 0xbc);
    uVar19 = uVar19 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar3,param_1 + 0x116,&local_158,uVar19);
  }
  uVar19 = uVar19 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar3,param_1 + 0x11c,&local_118,uVar19);
  if (*(short *)(param_1 + 0x126) != 0) {
    local_168 = *pfVar1;
    fStack_164 = *(float *)(param_5 + 0x84);
    local_178 = *(undefined8 *)pfVar1;
    local_160 = *(float *)(param_5 + 0x88);
    fVar30 = fStack_164 * fStack_164 + local_168 * local_168 + local_160 * local_160;
    local_170 = local_160;
    if (fVar30 != 1.0) {
      if (1e-08 <= fVar30) {
        auVar28 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
        fVar31 = auVar28._0_4_;
        fVar31 = fVar31 + fVar31 * (0.5 - fVar30 * 0.5 * fVar31 * fVar31);
        fVar31 = fVar31 + fVar31 * (0.5 - fVar30 * 0.5 * fVar31 * fVar31);
        local_res8 = CONCAT44(local_res8._4_4_,fVar31);
        fVar30 = fVar31 * local_168;
        local_170 = fVar31 * local_160;
        fVar31 = fVar31 * fStack_164;
      }
      else {
        local_170 = DAT_1468b5d98;
        fVar31 = DAT_1468b5d94;
        fVar30 = DAT_1468b5d90;
      }
      local_178 = CONCAT44(fVar31,fVar30);
    }
    uVar5 = (uint)*(ushort *)(param_1 + 0x126);
    if (0xb < *(ushort *)(param_1 + 0x126)) {
      uVar5 = 0xc;
    }
    if (uVar5 != 0) {
      local_res18[0] = (uint)*(ushort *)(param_1 + 0x124);
      pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0x122));
      uVar18 = (ulonglong)uVar5 + (longlong)pvVar23;
      if (*(ulonglong *)(param_2 + 0x38) < uVar18) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
        pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar18 = (ulonglong)uVar5 + (longlong)pvVar23;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar18;
      _guard_xfg_dispatch_icall_nop(pvVar23,&local_178,(ulonglong)uVar5);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar21 = puVar22 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar21;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar22;
      *(undefined8 **)(param_2 + 8) = puVar22 + 1;
      puVar22[1] = 0;
      *puVar22 = &PTR_LAB_143f594b0;
      *(undefined4 *)(puVar22 + 4) = (undefined4)local_res8;
      *(uint *)((longlong)puVar22 + 0x24) = local_res18[0];
      puVar22[2] = uVar3;
      puVar22[3] = pvVar23;
      *(uint *)(puVar22 + 5) = uVar5;
    }
  }
  fVar30 = *(float *)(param_5 + 0x3bc) -
           *(float *)(*(longlong *)(param_3 + 0x10) + 0x50) * *(float *)(param_5 + 0x3b8);
  fStack_164 = 0.0;
  if ((0.0 <= fVar30) && (fStack_164 = fVar30, 1.0 <= fVar30)) {
    fStack_164 = 1.0;
  }
  local_168 = param_6;
  local_160 = *(float *)(DAT_146a0fd18 + 4);
  local_15c = (float)*(uint *)(param_5 + 0x138);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar3,param_1 + 0x128,&local_168,uVar19 & 0xffffffff00000000);
  param_6 = (float)(uint)(*(char *)(param_5 + 0x3b3) != '\0');
  uVar5 = (uint)*(ushort *)(param_1 + 0x132);
  if (3 < *(ushort *)(param_1 + 0x132)) {
    uVar5 = 4;
  }
  if (uVar5 != 0) {
    local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0x130));
    uVar2 = *(ushort *)(param_1 + 0x12e);
    pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar19 = (ulonglong)uVar5 + (longlong)pvVar23;
    if (*(ulonglong *)(param_2 + 0x38) < uVar19) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      pvVar23 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar19 = (ulonglong)uVar5 + (longlong)pvVar23;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar19;
    _guard_xfg_dispatch_icall_nop(pvVar23,&param_6,(ulonglong)uVar5);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f594b0;
    *(uint *)(puVar22 + 4) = (uint)uVar2;
    *(undefined4 *)((longlong)puVar22 + 0x24) = (undefined4)local_res8;
    puVar22[2] = uVar3;
    puVar22[3] = pvVar23;
    *(uint *)(puVar22 + 5) = uVar5;
  }
  lVar20 = FSceneRenderTargets::Get(param_2);
  uVar4 = *(undefined8 *)(*(longlong *)(lVar20 + 0x88) + 0x10);
  if (*(short *)(param_1 + 0x136) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x134);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *(uint *)(puVar22 + 3) = (uint)uVar2;
    *puVar22 = &PTR_LAB_143f59c80;
    puVar22[2] = uVar3;
    puVar22[4] = uVar4;
  }
  puVar21 = (undefined8 *)GetEyeAdaptation(param_3);
  uVar4 = *puVar21;
  if (*(short *)(param_1 + 0x13a) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x138);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f59c80;
    puVar22[2] = uVar3;
    *(uint *)(puVar22 + 3) = (uint)uVar2;
    puVar22[4] = uVar4;
  }
  return;
}



// FUNCTION 141b16e20 FUN_141b16e20 body=308 status=ok
// SIG undefined FUN_141b16e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b16e20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar3 = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar5 = uVar3;
    do {
      iVar4 = (int)uVar5;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b096e0) {
        if (iVar4 != -1) {
          puVar6 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 8);
          *puVar6 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b16ebb;
        }
        break;
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
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
  puVar6 = (undefined4 *)&DAT_146a0e8b0;
LAB_141b16ebb:
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,uVar2,puVar6,param_3);
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar2,param_1 + 0xc0,param_4,0);
  return;
}



// FUNCTION 141b16f60 FUN_141b16f60 body=481 status=ok
// SIG undefined FUN_141b16f60(void)

void FUN_141b16f60(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,longlong param_6)

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
  ulonglong _Size;
  void *_Dst;
  
  lVar6 = param_6;
  lVar3 = *(longlong *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_6 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141aa87d0(param_1,param_2,*(undefined8 *)(lVar3 + 0x40),param_3,param_4,param_5,lVar6 + 0x18,
                uVar4);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  param_6._0_4_ = 1;
  uVar5 = (uint)*(ushort *)(param_1 + 0x154);
  if (3 < *(ushort *)(param_1 + 0x154)) {
    uVar5 = 4;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x150);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(ushort *)(param_1 + 0x152);
    uVar7 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&param_6,_Size);
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
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar2;
    *(uint *)(puVar9 + 4) = (uint)uVar1;
    puVar9[2] = uVar4;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 5) = uVar5;
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar3 + 0x40),param_1 + 0x156,&stack0x00000038,
             param_4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141b17150 FUN_141b17150 body=802 status=ok
// SIG undefined FUN_141b17150(void)

void FUN_141b17150(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong uVar9;
  float fVar10;
  undefined8 local_res8;
  undefined4 local_res18;
  undefined4 local_res1c;
  uint local_res20 [2];
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar1 + 0x40),uVar2);
  lVar4 = FSceneRenderTargets::Get(param_2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_res18 = *(undefined4 *)(param_3 + 0x3b8);
  local_res1c = *(undefined4 *)(param_3 + 0x3c8);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  uVar3 = (uint)*(ushort *)(param_1 + 0xc4);
  if (7 < *(ushort *)(param_1 + 0xc4)) {
    uVar3 = 8;
  }
  if (uVar3 != 0) {
    local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0xc2));
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res20[0] = (uint)*(ushort *)(param_1 + 0xc0);
    uVar5 = (longlong)_Dst + (ulonglong)uVar3;
    if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar5 = (longlong)_Dst + (ulonglong)uVar3;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar5;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_res18,(ulonglong)uVar3);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f594b0;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 4) = local_res20[0];
    *(undefined4 *)((longlong)puVar8 + 0x24) = (undefined4)local_res8;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar3;
  }
  local_res20[0] = 0;
  if (param_4 != '\0') {
    local_res20[0] = 0x3f800000;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0xe4,local_res20,0);
  uVar5 = *(ulonglong *)(lVar4 + 0x378);
  uVar9 = (ulonglong)*(uint *)(lVar4 + 0x394);
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_78 = 0;
  uVar7 = uVar5 & 0xffffffff;
  local_6c = 0;
  fVar10 = 1.0 / (float)(uVar7 / uVar9);
  local_70 = fVar10;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1,uVar7 % uVar9);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0xc6,&local_78,0);
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_68 = 0;
  local_64 = 1.0 / (float)((uVar5 >> 0x20) / uVar9);
  local_60 = fVar10;
  local_5c = local_64;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0xcc,&local_68,0);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa6800(param_1 + 0xd4,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  return;
}



// FUNCTION 141b17480 FUN_141b17480 body=1004 status=ok
// SIG undefined FUN_141b17480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b17480(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *_Dst;
  ulonglong uVar15;
  undefined4 *puVar16;
  ulonglong local_res8;
  undefined4 local_res20 [2];
  undefined1 local_78 [64];
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res20[0] = param_4;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  plVar8 = param_6;
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar9 = 0;
  local_res8 = 0;
  (**(code **)(*param_6 + 0x40))(param_6,*(undefined4 *)(param_3 + 0x1a38),&param_6,&local_res8);
  uVar15 = local_res8;
  FUN_141d85370(param_1,param_2,uVar4,plVar8,local_res8,param_3,param_3 + 0x20,0);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar12 = uVar9;
    do {
      iVar11 = (int)uVar12;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar9 * 8) == &DAT_146b09640) {
        if (iVar11 != -1) {
          puVar16 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *puVar16 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b17582;
        }
        break;
      }
      uVar12 = (ulonglong)(iVar11 + 1);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a15258) {
    _Init_thread_header(&DAT_146a15258);
    if (DAT_146a15258 == -1) {
      _DAT_146a15250 = 0;
      DAT_146a15254 = 0;
      DAT_146a15256 = 0;
      _Init_thread_footer(&DAT_146a15258);
    }
  }
  puVar16 = (undefined4 *)&DAT_146a15250;
LAB_141b17582:
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,uVar4,puVar16,param_7);
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20);
  puVar10 = puVar14 + 1;
  uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x1620) + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar14 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar10;
  *puVar14 = uVar5;
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar10;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar14;
  *(undefined4 *)(puVar13 + 4) = 2;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 3;
  puVar13[5] = 0;
  lVar6 = *(longlong *)(lVar3 + 0x1620);
  lVar3 = *(longlong *)(lVar3 + 0x1690);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x110,param_2,uVar4,lVar6 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x118,param_2,uVar4,lVar6 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x120,param_2,uVar4,lVar3 + 8);
  uVar15 = uVar15 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar4,param_1 + 0x128,local_res20,uVar15);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar4,param_1 + 0x12e,&param_5,uVar15 & 0xffffffff00000000);
  param_6 = (longlong *)FMatrix::Inverse(param_8,local_78);
  uVar7 = (uint)*(ushort *)(param_1 + 0x138);
  if (0x3f < *(ushort *)(param_1 + 0x138)) {
    uVar7 = 0x40;
  }
  uVar15 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x136);
    uVar2 = *(ushort *)(param_1 + 0x134);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar9 = (longlong)_Dst + uVar15;
    if (*(ulonglong *)(param_2 + 0x38) < uVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar7 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar9 = uVar15 + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar9;
    _guard_xfg_dispatch_icall_nop(_Dst,param_6,uVar15);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar14 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar14 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_144d92080;
    puVar14[2] = uVar4;
    puVar14[3] = _Dst;
    *(uint *)(puVar14 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar14 + 0x24) = (uint)uVar1;
    *(uint *)(puVar14 + 5) = uVar7;
  }
  return;
}



// FUNCTION 141b17870 FUN_141b17870 body=309 status=ok
// SIG undefined FUN_141b17870(void)

void FUN_141b17870(longlong param_1,longlong param_2,void *param_3)

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
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  uVar5 = (uint)*(ushort *)(param_1 + 0xc4);
  if (0xaf < *(ushort *)(param_1 + 0xc4)) {
    uVar5 = 0xb0;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    uVar2 = *(ushort *)(param_1 + 0xc2);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
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
    *puVar8 = &PTR_LAB_143f4d340;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar2;
    *(uint *)(puVar8 + 4) = (uint)uVar1;
    puVar8[2] = uVar4;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  return;
}



// FUNCTION 141b179b0 FUN_141b179b0 body=664 status=ok
// SIG undefined FUN_141b179b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b179b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x40);
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar3;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146a0ead0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b17a52;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a15248) {
    _Init_thread_header(&DAT_146a15248);
    if (DAT_146a15248 == -1) {
      _DAT_146a15240 = 0;
      _DAT_146a15244 = 0;
      DAT_146a15246 = 0;
      _Init_thread_footer(&DAT_146a15248);
    }
  }
  puVar10 = (undefined4 *)&DAT_146a15240;
LAB_141b17a52:
  FUN_141aad5c0(param_4[8],local_res8,puVar10,param_3);
  uVar6 = local_res8;
  if (*(short *)(param_1 + 0x1c2) != 0) {
    lVar2 = param_4[8];
    uVar1 = *(ushort *)(param_1 + 0x1c0);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar4;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar7;
    *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar6;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = param_2;
  }
  uVar1 = *(ushort *)(param_1 + 0x1bc);
  uVar5 = FUN_141a156e0();
  uVar6 = local_res8;
  lVar2 = param_4[8];
  puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar7 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar4;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar7;
  *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f59c70;
  puVar7[2] = uVar6;
  *(uint *)(puVar7 + 3) = (uint)uVar1;
  puVar7[4] = uVar5;
  FUN_141aa9690(param_1,param_4[8],local_res8,*(undefined8 *)(*param_4 + 0x20));
  uVar6 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_4[8],&local_res8,param_4,uVar6,0,0);
  FUN_141aa6fa0(param_1 + 0x1c4,param_4[8],&local_res8,*(undefined4 *)(*param_4 + 0x1a38),0xf);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_3);
  return;
}



// FUNCTION 141b17c50 SetRenderTarget body=584 status=ok
// SIG undefined SetRenderTarget(void)

void SetRenderTarget(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                    undefined8 param_5,char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18 [8];
  
  local_20 = param_3;
  local_28 = param_2;
  local_1c = param_4;
  local_18[0] = 0x101;
  if (param_6 != '\0') {
    FUN_141ae34d0(param_1,param_2,param_5,0x22);
  }
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
  iVar7 = 0;
  uVar6 = uVar8;
  do {
    uVar5 = (int)uVar6 + 1;
    uVar2 = *(undefined8 *)(&local_20 + uVar6 * 6);
    uVar1 = *(undefined8 *)(local_18 + uVar6 * 0xc);
    puVar4 = (undefined8 *)(param_1 + 0xa0 + uVar6 * 0x18);
    *puVar4 = (&local_28)[uVar6 * 3];
    puVar4[1] = uVar2;
    *(undefined8 *)(param_1 + 0xb0 + uVar6 * 0x18) = uVar1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < *(uint *)(param_1 + 0x98));
  local_38 = (undefined4)param_5;
  uStack_34 = (undefined4)((ulonglong)param_5 >> 0x20);
  *(undefined4 *)(param_1 + 0x160) = local_38;
  *(undefined4 *)(param_1 + 0x164) = uStack_34;
  *(undefined4 *)(param_1 + 0x168) = 0x1010101;
  *(undefined4 *)(param_1 + 0x16c) = 0x22;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar3 + 0x26;
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
  *(undefined4 *)(puVar3 + 2) = 1;
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
  uVar6 = uVar8;
  if (*(int *)(puVar3 + 2) != 0) {
    do {
      uVar5 = (int)uVar6 + 1;
      uVar1 = *(undefined8 *)(&local_20 + uVar6 * 6);
      puVar3[uVar6 * 3 + 3] = (&local_28)[uVar6 * 3];
      (puVar3 + uVar6 * 3 + 3)[1] = uVar1;
      puVar3[uVar6 * 3 + 5] = *(undefined8 *)(local_18 + uVar6 * 0xc);
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(puVar3 + 2));
    iVar7 = *(int *)(puVar3 + 0x1d);
  }
  if (iVar7 != 0) {
    do {
      uVar5 = (int)uVar8 + 1;
      puVar3[uVar8 + 0x1e] = *(undefined8 *)(uVar8 * 8);
      uVar8 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(puVar3 + 0x1d));
  }
  puVar3[0x1b] = param_5;
  puVar3[0x1c] = 0x2201010101;
  return;
}



// FUNCTION 141b17ea0 FUN_141b17ea0 body=1249 status=ok
// SIG undefined FUN_141b17ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b17ea0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uchar *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulonglong local_58;
  undefined *local_50;
  undefined4 local_48;
  
  plVar17 = (longlong *)0x0;
  local_58 = local_58 & 0xffffffff00000000;
  puVar8 = AK::WriteBytesMem::Bytes((WriteBytesMem *)param_4[1]);
  local_48 = 0;
  local_50 = &DAT_146a0fe70;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(puVar8 + 0x38,&local_58,&local_50);
  plVar10 = plVar17;
  if ((int)local_58 != -1) {
    plVar10 = (longlong *)((longlong)(int)local_58 * 0x20 + *(longlong *)(puVar8 + 0x38));
  }
  lVar2 = *(longlong *)(param_3 + 0x3090);
  local_48 = 0;
  plVar16 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar16 = plVar17;
  }
  lVar3 = *plVar16;
  local_50 = &DAT_146a0fd20;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_58,&local_50);
  plVar10 = plVar17;
  if ((int)local_58 != -1) {
    plVar10 = (longlong *)((longlong)(int)local_58 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar16 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar16 = plVar17;
  }
  lVar2 = *plVar16;
  puVar9 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar9;
  if (lVar2 == 0) {
    local_58 = 0;
    plVar16 = (longlong *)&DAT_00000004;
    plVar10 = plVar17;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plVar10 = *(longlong **)(lVar4 + 0x38);
    plVar16 = plVar17;
  }
  param_2[1] = plVar10;
  if (plVar16 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  }
  lVar4 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar12 = 0;
  param_2[4] = *(undefined8 *)(lVar4 + 0x40);
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  FUN_141b16470(lVar3,param_1,param_3,*param_4,param_4[2],*(undefined4 *)(param_4 + 3));
  puVar19 = (undefined4 *)&DAT_146a15250;
  uVar18 = (ulonglong)_tls_index;
  if (0 < *(int *)(lVar2 + 0x10)) {
    uVar11 = uVar12;
    uVar15 = uVar12;
    do {
      iVar14 = (int)uVar15;
      if (*(undefined **)(*(longlong *)(lVar2 + 8) + uVar11 * 8) == &DAT_146b09640) {
        if (iVar14 != -1) {
          puVar20 = *(undefined4 **)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar14 * 8);
          *puVar20 = *(undefined4 *)(lVar2 + 0xb8);
          goto LAB_141b18093;
        }
        break;
      }
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)*(int *)(lVar2 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x38) <
       DAT_146a15258) && (_Init_thread_header(&DAT_146a15258), DAT_146a15258 == -1)) {
    _DAT_146a15250 = 0;
    DAT_146a15254 = 0;
    DAT_146a15256 = 0;
    _Init_thread_footer(&DAT_146a15258);
  }
  puVar20 = (undefined4 *)&DAT_146a15250;
LAB_141b18093:
  if (0 < *(int *)(lVar3 + 0x10)) {
    uVar11 = uVar12;
    do {
      iVar14 = (int)uVar11;
      if (*(undefined **)(*(longlong *)(lVar3 + 8) + uVar12 * 8) == &DAT_146b09640) {
        if (iVar14 != -1) {
          puVar19 = *(undefined4 **)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar14 * 8);
          *puVar19 = *(undefined4 *)(lVar3 + 0xb8);
          goto LAB_141b180e4;
        }
        break;
      }
      uVar11 = (ulonglong)(iVar14 + 1);
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)*(int *)(lVar3 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x38) <
       DAT_146a15258) && (_Init_thread_header(&DAT_146a15258), DAT_146a15258 == -1)) {
    _DAT_146a15250 = 0;
    DAT_146a15254 = 0;
    DAT_146a15256 = 0;
    _Init_thread_footer(&DAT_146a15258);
  }
LAB_141b180e4:
  lVar4 = *(longlong *)(lVar2 + 0x48);
  lVar5 = param_4[2];
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar6 = *(undefined8 *)(lVar4 + 0x38);
  if (*(char *)((longlong)puVar20 + 6) != '\0') {
    uVar7 = *(undefined8 *)(lVar5 + 0x1c0);
    uVar1 = *(ushort *)(puVar20 + 1);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar13 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar13 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar13;
    *(undefined8 **)(param_1 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_144dcb388;
    puVar13[2] = uVar6;
    *(uint *)(puVar13 + 3) = (uint)uVar1;
    puVar13[4] = uVar7;
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  lVar4 = param_4[2];
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar6 = *(undefined8 *)(lVar3 + 0x40);
  if (*(char *)((longlong)puVar19 + 6) != '\0') {
    uVar7 = *(undefined8 *)(lVar4 + 0x1c0);
    uVar1 = *(ushort *)(puVar19 + 1);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar13 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar13 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar13;
    *(undefined8 **)(param_1 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_144d920a0;
    puVar13[2] = uVar6;
    *(uint *)(puVar13 + 3) = (uint)uVar1;
    puVar13[4] = uVar7;
  }
  FUN_141b16e20(lVar2,param_1,*(undefined8 *)(param_3 + 0x20),param_5);
  puVar9 = (undefined8 *)FUN_141ee3600();
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar6 = *puVar9;
  puVar9 = puVar13 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar13 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar9;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar13 + 2) = 0;
  puVar13[3] = uVar6;
  *(undefined4 *)(puVar13 + 4) = 0;
  return;
}



// FUNCTION 141b18390 FUN_141b18390 body=275 status=ok
// SIG undefined FUN_141b18390(void)

void FUN_141b18390(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined2 param_5,undefined4 param_6)

{
  FUN_141b15f20(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),param_4,param_3,(char)param_5,
                (char)((ushort)param_5 >> 8),param_6);
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_141ad6a40(*(longlong *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  param_3 + 0x18,*(undefined8 *)(param_3 + 0x20));
    FUN_141ad69a0(*(undefined8 *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  param_3 + 0x18,*(undefined8 *)(param_3 + 0x20));
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_141b16f60(*(undefined8 *)(param_1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18),param_4,param_3,*(undefined4 *)(param_1 + 0x68));
  }
  FUN_141b45c10(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141b184b0 FUN_141b184b0 body=411 status=ok
// SIG undefined FUN_141b184b0(void)

void FUN_141b184b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = param_5;
  uVar6 = *(ulonglong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141aa8c40(lVar1,param_2,*(undefined8 *)(lVar3 + 0x38),uVar2,uVar6,param_4,param_3 + 0x18,uVar4
               );
  if (*(short *)(lVar1 + 0x15a) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    param_5 = uVar5 & 0xff;
    uVar6 = uVar6 & 0xffffffff00000000;
    FUN_1404986d0(param_2,*(undefined8 *)(lVar3 + 0x38),lVar1 + 0x156,&param_5,uVar6);
  }
  if (*(short *)(lVar1 + 0x160) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    param_5 = uVar5 >> 8 & 0xff;
    uVar6 = uVar6 & 0xffffffff00000000;
    FUN_1404986d0(param_2,*(undefined8 *)(lVar3 + 0x38),lVar1 + 0x15c,&param_5,uVar6);
  }
  if (*(short *)(lVar1 + 0x154) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    param_5 = 0;
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    FUN_1404986d0(param_2,*(undefined8 *)(lVar3 + 0x38),lVar1 + 0x150,&param_5,
                  uVar6 & 0xffffffff00000000);
  }
  FUN_141a0cf10(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 141b18650 SetStateOnCommandList body=67 status=ok
// SIG undefined SetStateOnCommandList(void)

void FPrePassParallelCommandListSet::SetStateOnCommandList(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FSceneRenderTargets::Get(param_2);
  FUN_141cde700(uVar1,param_2,0);
  FUN_141b18780(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0);
  return;
}



// FUNCTION 141b186a0 FUN_141b186a0 body=221 status=ok
// SIG undefined FUN_141b186a0(void)

void FUN_141b186a0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res10 [2];
  undefined *local_38;
  undefined4 local_30;
  
  lVar1 = *(longlong *)(param_3 + 0x3090);
  local_38 = &DAT_146a0fd20;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res10,&local_38);
  plVar4 = (longlong *)0x0;
  if (local_res10[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar5 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  lVar1 = *plVar5;
  puVar3 = (undefined8 *)FUN_141ee3620();
  *param_2 = *puVar3;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  param_2[1] = *(undefined8 *)(lVar2 + 0x38);
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  FUN_141b16e20(lVar1,param_1,*(undefined8 *)(param_3 + 0x20),param_4);
  return;
}



// FUNCTION 141b18780 FUN_141b18780 body=641 status=ok
// SIG undefined FUN_141b18780(void)

void FUN_141b18780(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar10;
  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar10 + 2) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
  if (((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) ||
     (param_4 != '\0')) {
    uVar1 = *(undefined4 *)(param_2 + 0x1aac);
    uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
    uVar9 = *(undefined4 *)(param_2 + 0x1aa0);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    ppuVar7 = &PTR_LAB_143f59420;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar2;
    *(undefined4 *)(puVar10 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
  }
  else {
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    if (*(char *)(param_2 + 0x120a) == '\0') {
      uVar9 = *(undefined4 *)(param_2 + 0x1aac);
      puVar8 = puVar10 + 5;
      uVar1 = *(undefined4 *)(param_3 + 0x2a4);
      if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar10 + 5;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar8;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar10;
      *(undefined8 **)(param_1 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      ppuVar7 = &PTR_LAB_143f59420;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar1;
      *(undefined4 *)(puVar10 + 4) = uVar9;
      *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
      goto LAB_141b189ee;
    }
    lVar6 = *(longlong *)(param_3 + 0xc0);
    uVar9 = *(undefined4 *)(lVar6 + 0x1aa0);
    uVar1 = *(undefined4 *)(lVar6 + 0x1aa8);
    uVar2 = *(undefined4 *)(lVar6 + 0x4b70);
    uVar3 = *(undefined4 *)(lVar6 + 0x4b78);
    uVar4 = *(undefined4 *)(lVar6 + 0x1aac);
    uVar5 = *(undefined4 *)(lVar6 + 0x4b7c);
    puVar8 = puVar10 + 7;
    if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 7;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar10;
    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    ppuVar7 = &PTR_LAB_144dc9c30;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar4;
    *(undefined4 *)(puVar10 + 6) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar2;
    puVar10[3] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar1;
    *(undefined4 *)(puVar10 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar10 + 0x34) = 0x3f800000;
  }
  *(undefined4 *)(puVar10 + 2) = uVar9;
LAB_141b189ee:
  *puVar10 = ppuVar7;
  return;
}



// FUNCTION 141b18a10 FUN_141b18a10 body=45 status=ok
// SIG undefined FUN_141b18a10(void)

undefined8 FUN_141b18a10(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  if ((*(uint *)(param_3 + 0x28) >> 4 & 1) != 0) {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b18a40 FUN_141b18a40 body=78 status=ok
// SIG undefined FUN_141b18a40(void)

undefined1 FUN_141b18a40(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_141b196e0(param_2,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_14259cb20(param_2);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 141b18a90 FUN_141b18a90 body=100 status=ok
// SIG undefined FUN_141b18a90(void)

undefined8 FUN_141b18a90(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(uVar1);
  if (iVar2 < 3) {
    return 0;
  }
  if ((0x1e < uVar1) || ((0x40000015U >> (uVar1 & 0x1f) & 1) == 0)) {
    if ((uVar1 < 0x1c) &&
       ((((0x8c51800U >> (uVar1 & 0x1f) & 1) != 0 && (iVar2 = FUN_1419ef5f0(uVar1), 2 < iVar2)) &&
        (uVar3 = RHIGetShaderLanguageVersion(uVar1), 1 < uVar3)))) {
      return 1;
    }
    if ((uVar1 - 0x14 & 0xfffffff7) != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141b18b00 ShouldCompilePermutation body=97 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8
FConvertToUniformMeshGS::ShouldCompilePermutation(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  
  iVar1 = FUN_1419ef5f0();
  if ((iVar1 < 3) || (param_1 != 0)) {
    return 0;
  }
  pwVar2 = ::_guard_xfg_dispatch_icall_nop(*(wchar_t **)(param_3 + 0x10),L"LocalVertexFactory");
  if ((pwVar2 == (wchar_t *)0x0) &&
     (pwVar2 = ::_guard_xfg_dispatch_icall_nop
                         (*(wchar_t **)(param_3 + 0x10),L"InstancedStaticMeshVertexFactory"),
     pwVar2 == (wchar_t *)0x0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 141b18b70 FUN_141b18b70 body=50 status=ok
// SIG undefined FUN_141b18b70(void)

undefined1 FUN_141b18b70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_141b196e0(param_2,0);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141b18bb0 FUN_141b18bb0 body=67 status=ok
// SIG undefined FUN_141b18bb0(void)

ulonglong FUN_141b18bb0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141ed13a0();
  if ((char)uVar1 != '\0') {
    if (param_3 != 0) {
      uVar1 = (**(code **)(param_3 + 0x48))();
      if ((char)uVar1 == '\0') goto LAB_141b18be6;
    }
    if (param_2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*param_2 + 0x178))(param_2);
    }
  }
LAB_141b18be6:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141b18c10 FUN_141b18c10 body=139 status=ok
// SIG undefined FUN_141b18c10(void)

undefined8 FUN_141b18c10(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if ((param_2 != (longlong *)0x0) &&
       (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) {
      cVar1 = (**(code **)(*param_2 + 200))(param_2);
      if ((cVar1 == '\0') &&
         (((cVar1 = FUN_141b196e0(param_2,0), cVar1 != '\0' &&
           (cVar1 = FUN_14259cb20(param_2), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*param_2 + 0x38))(param_2), cVar1 == '\0')))) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b18ca0 FUN_141b18ca0 body=127 status=ok
// SIG undefined FUN_141b18ca0(void)

undefined8 FUN_141b18ca0(uint param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_141b196e0(param_2,0);
  if (((cVar1 != '\0') && (cVar1 = (**(code **)(*param_2 + 0x2a8))(param_2), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*param_2 + 0x38))(param_2), cVar1 == '\0')) {
    if ((0x1d < param_1) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) {
      return 0;
    }
    cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
    if ((cVar1 == '\0') && (cVar1 = FUN_14259cb20(param_2), cVar1 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141b18d20 FUN_141b18d20 body=38 status=ok
// SIG undefined FUN_141b18d20(void)

undefined4 FUN_141b18d20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1419ef5f0();
  if ((2 < iVar1) && (param_1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141b18d50 FUN_141b18d50 body=129 status=ok
// SIG undefined FUN_141b18d50(void)

undefined8 FUN_141b18d50(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if ((((param_2 != (longlong *)0x0) &&
         (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
        (cVar1 = (**(code **)(*param_2 + 0xa8))(param_2), cVar1 != '\0')) &&
       (iVar2 = FUN_1419ef5f0(param_1), 1 < iVar2)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b18de0 FUN_141b18de0 body=57 status=ok
// SIG undefined FUN_141b18de0(void)

undefined8 FUN_141b18de0(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xa8))(param_2);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419ef5f0(param_1);
      if (1 < iVar2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141b18e20 FUN_141b18e20 body=101 status=ok
// SIG undefined FUN_141b18e20(void)

ulonglong FUN_141b18e20(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1419ef5f0(uVar1);
  if ((2 < (int)uVar2) && (uVar2 = FUN_1419ef5f0(uVar1), 2 < (int)uVar2)) {
    uVar2 = 0;
    switch(uVar1) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
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
      if ((0x1f < uVar1) || (uVar2 = 0xc8c51814, (0xc8c51814U >> (uVar1 & 0x1f) & 1) == 0)) break;
    case 0:
    case 5:
    case 7:
    case 0xe:
    case 0x1f:
      if (uVar1 != 4) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b18ec0 FUN_141b18ec0 body=549 status=ok
// SIG undefined FUN_141b18ec0(void)

undefined1 FUN_141b18ec0(int param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  bool bVar10;
  
  if (((param_2 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_2 + 0xe0))(param_2), lVar5 != 0)
      ) && (lVar5 = (**(code **)(*param_2 + 0xe0))(param_2), *(char *)(lVar5 + 0xce) != '\0')) {
    return 0;
  }
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_146a14e08) && (_Init_thread_header(&DAT_146a14e08), DAT_146a14e08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a14e00 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DBuffer");
    _Init_thread_footer(&DAT_146a14e08);
  }
  if (DAT_146a14e00 == (longlong *)0x0) {
    bVar10 = false;
  }
  else {
    iVar3 = (**(code **)(*DAT_146a14e00 + 0x68))();
    bVar10 = iVar3 != 0;
  }
  if ((*piVar8 < DAT_146a14e18) && (_Init_thread_header(&DAT_146a14e18), DAT_146a14e18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.StencilForLODDither");
    lVar5 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a14e10 = lVar5;
    _Init_thread_footer(&DAT_146a14e18);
  }
  lVar5 = DAT_146a14e10;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar9 = 4;
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  lVar1 = DAT_146a10028;
  iVar3 = *(int *)(lVar6 + lVar5);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) goto LAB_141b18fe1;
  }
  lVar9 = 0;
LAB_141b18fe1:
  if (((!bVar10) && (iVar3 == 0)) &&
     ((*(int *)(lVar9 + lVar1) == 0 &&
      (((DAT_146ac3ac0 == 0 || (param_1 < 3)) && (cVar2 = FUN_141ae37e0(), cVar2 == '\0')))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 141b190f0 FUN_141b190f0 body=264 status=ok
// SIG undefined FUN_141b190f0(void)

undefined8 FUN_141b190f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((DAT_146532078 != 0) && (*(int *)(*(longlong *)(param_1 + 8) + 0x15f0) != 0)) {
    cVar2 = SupportsDistanceFieldAO();
    if (cVar2 == '\0') {
      return 0;
    }
    lVar6 = (longlong)*(int *)(param_1 + 0x18);
    if (0 < lVar6) {
      plVar5 = *(longlong **)(param_1 + 0x10);
      iVar4 = 0;
      do {
        lVar1 = *plVar5;
        plVar5 = plVar5 + 1;
        iVar3 = iVar4 + 1;
        if (*(char *)(lVar1 + 0x1a98) == '\0') {
          iVar3 = iVar4;
        }
        lVar6 = lVar6 + -1;
        iVar4 = iVar3;
      } while (lVar6 != 0);
      if (((((0 < iVar3) && (lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1150), lVar6 != 0)
            ) && ((*(longlong *)(lVar6 + 8) != 0 || (*(char *)(lVar6 + 0x24) != '\0')))) &&
          (((((*(char *)(lVar6 + 0x28) == '\0' && (*(char *)(lVar6 + 0x29) == '\0')) &&
             ((*(uint *)(param_1 + 0x3c) & 0x8000000) != 0)) &&
            ((iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 8), 1 < iVar4 &&
             (cVar2 = IsAnyForwardShadingEnabled((&DAT_1464c9c48)[iVar4]), cVar2 == '\0')))) &&
           (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1150) + 0x27) != '\0')))) &&
         ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0)) {
        return 1;
      }
    }
    if ((DAT_146a0e8d0 != 0) && ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b19200 FUN_141b19200 body=215 status=ok
// SIG undefined FUN_141b19200(void)

undefined8 FUN_141b19200(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  uVar2 = (&DAT_1464c9c48)[iVar1];
  if (((((DAT_1464c179c != 0) && (0 < DAT_1464c17a0)) && (DAT_146ab62dc == '\0')) &&
      ((cVar4 = IsRHIDeviceIntel(), cVar4 == '\0' && (2 < iVar1)))) &&
     (cVar4 = FUN_141b03c60(uVar2), cVar4 != '\0')) {
    cVar4 = FUN_141b190f0(param_1);
    if ((cVar4 == '\0') &&
       ((*(int *)(param_1 + 200) < 1 ||
        ((*(uint *)(*(longlong *)(param_1 + 0xc0) + 0x28cc) & 0x200) == 0)))) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      cVar4 = (**(code **)(*plVar3 + 0x38))();
      if (cVar4 == '\0') {
        return 0;
      }
    }
    if (DAT_1464c1c88 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b192e0 FUN_141b192e0 body=155 status=ok
// SIG undefined FUN_141b192e0(void)

undefined8 FUN_141b192e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = (longlong)*(int *)(param_2 + 1);
  iVar4 = 0;
  if (0 < lVar6) {
    plVar5 = (longlong *)*param_2;
    do {
      lVar1 = *plVar5;
      plVar5 = plVar5 + 1;
      iVar2 = iVar4 + 1;
      if (*(char *)(lVar1 + 0x1a98) == '\0') {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (((((0 < iVar4) && (lVar6 = *(longlong *)(param_1 + 0x1150), lVar6 != 0)) &&
         ((*(longlong *)(lVar6 + 8) != 0 || (*(char *)(lVar6 + 0x24) != '\0')))) &&
        (((*(char *)(lVar6 + 0x28) == '\0' && (*(char *)(lVar6 + 0x29) == '\0')) &&
         ((*(uint *)((longlong)param_2 + 0x2c) & 0x8000000) != 0)))) && (1 < *(int *)(param_1 + 8)))
    {
      cVar3 = IsAnyForwardShadingEnabled((&DAT_1464c9c48)[*(int *)(param_1 + 8)]);
      if (cVar3 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141b19380 FUN_141b19380 body=38 status=ok
// SIG undefined FUN_141b19380(void)

ulonglong FUN_141b19380(longlong param_1)

{
  ulonglong in_RAX;
  
  if (((DAT_146532078 != 0) &&
      (in_RAX = *(ulonglong *)(param_1 + 8), *(int *)(in_RAX + 0x15f0) != 0)) &&
     ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141b193b0 SupportsDistanceFieldAO body=92 status=ok
// SIG undefined SupportsDistanceFieldAO(void)

undefined1 SupportsDistanceFieldAO(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (((DAT_1464c179c != 0) && (0 < DAT_1464c17a0)) && (DAT_146ab62dc == '\0')) {
    cVar1 = IsRHIDeviceIntel();
    if ((cVar1 == '\0') && (2 < param_1)) {
      cVar1 = FUN_141b03c60(param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141b19410 FUN_141b19410 body=683 status=ok
// SIG undefined FUN_141b19410(void)

void FUN_141b19410(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar6 = FSceneRenderTargets::Get(param_2);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a14f30) &&
     (_Init_thread_header(&DAT_146a14f30), DAT_146a14f30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a14f28 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.BufferDownSampleFactor");
    _Init_thread_footer(&DAT_146a14f30);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a14f40) &&
     (_Init_thread_header(&DAT_146a14f40), DAT_146a14f40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a14f38 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.DepthTest");
    _Init_thread_footer(&DAT_146a14f40);
  }
  bVar3 = false;
  if ((DAT_146a14f28 != (longlong *)0x0) && (DAT_146a14f38 != (longlong *)0x0)) {
    iVar4 = (**(code **)(*DAT_146a14f38 + 0x68))();
    if ((iVar4 == 1) &&
       (iVar4 = *(int *)(lVar6 + 0x394), iVar5 = (**(code **)(*DAT_146a14f28 + 0x68))(),
       iVar5 == iVar4)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  if (((*(char *)(lVar6 + 0x398) != '\0') || (bVar3)) && (1 < *(int *)(param_1 + 0x2a0))) {
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar6 + 0x60) + 8);
    puVar7 = puVar9 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *puVar9 = uVar2;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    iVar4 = 0;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = puVar9;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
    if (0 < *(int *)(param_1 + 200)) {
      do {
        FUN_141b03cc0(param_1,param_2,*(longlong *)(lVar6 + 0xa0) + 8,
                      (longlong)iVar4 * 0x30d0 + *(longlong *)(param_1 + 0xc0),
                      1.0 / (float)*(uint *)(lVar6 + 0x394),1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 200));
    }
  }
  return;
}



// FUNCTION 141b196c0 FUN_141b196c0 body=24 status=ok
// SIG undefined FUN_141b196c0(void)

undefined1 FUN_141b196c0(void)

{
  if ((DAT_1464c17b4 != 0) && (1 < DAT_1464c17a0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141b196e0 FUN_141b196e0 body=320 status=ok
// SIG undefined FUN_141b196e0(void)

undefined8 FUN_141b196e0(longlong *param_1,char param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a11428) && (_Init_thread_header(&DAT_146a11428), DAT_146a11428 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.StencilForLODDither");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a11420 = lVar4;
    _Init_thread_footer(&DAT_146a11428);
  }
  cVar1 = (**(code **)(*param_1 + 0x1d0))(param_1);
  lVar4 = DAT_146a11420;
  if (cVar1 != '\0') {
    return 0;
  }
  if (param_2 == '\0') {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    if (*(int *)(lVar5 + lVar4) != 0) goto LAB_141b19780;
  }
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
LAB_141b19780:
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 141b19820 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvReadUniformBufferParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"mLpvGridOffset";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 2;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 3;
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
  *puVar3 = L"LpvScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0xc;
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
  *puVar3 = L"OneOverLpvScale";
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
  *puVar3 = L"SpecularIntensity";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x14;
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
  *puVar3 = L"DiffuseIntensity";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000018;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141b19a80 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvReadUniformBufferParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"DiffuseOcclusionIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x2c;
  puVar2[1] = 4;
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
  *puVar1 = L"PostprocessSpecularIntensityThreshold";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x30;
  puVar2[1] = 4;
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
  *puVar1 = L"LpvGridOffsetSmooth";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x40;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
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
  *puVar1 = L"DirectionalOcclusionDefaultValue";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000050;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b19c80 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvReadUniformBufferParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"DirectionalOcclusionIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1c;
  puVar2[1] = 4;
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
  *puVar1 = L"DiffuseOcclusionExponent";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x20;
  puVar2[1] = 4;
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
  *puVar1 = L"SpecularOcclusionExponent";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x24;
  puVar2[1] = 4;
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
  *puVar1 = L"SpecularOcclusionIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000028;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b19e90 Serialize body=234 status=ok
// SIG undefined Serialize(void)

undefined1 FCullVPLsForViewCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(uVar1,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xea);
  FUN_1419e0a40(param_2,param_1 + 0xf0);
  FUN_1419e0a40(param_2,param_1 + 0xf6);
  FUN_1419e0a40(param_2,param_1 + 0xfc);
  return 0;
}



// FUNCTION 141b19f80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCullVPLsForViewCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141b19fd0 Serialize body=99 status=ok
// SIG undefined Serialize(void)

undefined1 FSetupLightVPLsIndirectArgumentsCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  ::operator<<(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xf6);
  return 0;
}



// FUNCTION 141b1a040 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FSetupLightVPLsIndirectArgumentsCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 141b1a090 Serialize body=324 status=ok
// SIG undefined Serialize(void)

undefined1 FLightVPLsCS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xea);
  FUN_1419e0a40(param_2,param_1 + 0xf0);
  FUN_1419e0a40(param_2,param_1 + 0xf6);
  ::operator<<(param_2,param_1 + 0xfc);
  ::operator<<(param_2,param_1 + 0x12a);
  ::operator<<(param_2,param_1 + 0x142);
  FUN_1419e0a40(param_2,param_1 + 0x16e);
  FUN_1419e0b60(param_2,param_1 + 0x174);
  FUN_1419e0b60(param_2,param_1 + 0x178);
  FUN_1419e0b60(param_2,param_1 + 0x17c);
  FUN_1419e0a40(param_2,param_1 + 0x180);
  FUN_1419e0a40(param_2,param_1 + 0x186);
  return 0;
}



// FUNCTION 141b1a1e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FLightVPLsCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 141b1a220 FUN_141b1a220 body=104 status=ok
// SIG undefined FUN_141b1a220(void)

undefined1 FUN_141b1a220(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  operator<<(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0b60(uVar1,param_1 + 0xe8);
  return 0;
}



// FUNCTION 141b1a290 Serialize body=306 status=ok
// SIG undefined Serialize(void)

undefined1
TConeTraceScreenGridObjectOcclusionCS<1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  ::operator<<(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  FUN_1419e0a40(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0x10a);
  FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x116);
  ::operator<<(param_2,param_1 + 0x11c);
  ::operator<<(param_2,param_1 + 0x136);
  FUN_1419e0b60(param_2,param_1 + 0x174);
  ::operator<<(param_2,param_1 + 0x178);
  FUN_1419e0a40(param_2,param_1 + 0x19e);
  FUN_1419e0a40(param_2,param_1 + 0x1a4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x1aa);
  FUN_1419e0b60(uVar1,param_1 + 0x1ae);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x1b2);
  FUN_1419e0b60(uVar1,param_1 + 0x1b6);
  return 0;
}



// FUNCTION 141b1a3d0 Serialize body=276 status=ok
// SIG undefined Serialize(void)

undefined1 FComputeIrradianceScreenGridCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  ::operator<<(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  FUN_1419e0a40(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0x10a);
  FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x116);
  ::operator<<(param_2,param_1 + 0x11c);
  ::operator<<(param_2,param_1 + 0x136);
  FUN_1419e0b60(param_2,param_1 + 0x14e);
  FUN_1419e0a40(param_2,param_1 + 0x152);
  FUN_1419e0a40(param_2,param_1 + 0x158);
  FUN_1419e0b60(param_2,param_1 + 0x15e);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x162);
  FUN_1419e0b60(uVar1,param_1 + 0x166);
  return 0;
}



// FUNCTION 141b1a500 Serialize body=276 status=ok
// SIG undefined Serialize(void)

undefined1 TConeTraceScreenGridGlobalOcclusionCS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  ::operator<<(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  FUN_1419e0a40(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0x10a);
  FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x116);
  ::operator<<(param_2,param_1 + 0x11c);
  ::operator<<(param_2,param_1 + 0x136);
  FUN_1419e0b60(param_2,param_1 + 0x174);
  FUN_1419e0a40(param_2,param_1 + 0x178);
  FUN_1419e0a40(param_2,param_1 + 0x17e);
  FUN_1419e0a40(param_2,param_1 + 0x184);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x18a);
  FUN_1419e0b60(uVar1,param_1 + 0x18e);
  return 0;
}



// FUNCTION 141b1a620 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TConeTraceScreenGridGlobalOcclusionCS<1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 141b1a660 Serialize body=114 status=ok
// SIG undefined Serialize(void)

undefined1 FCombineIrradianceScreenGridCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  return 0;
}



// FUNCTION 141b1a6e0 Serialize body=144 status=ok
// SIG undefined Serialize(void)

undefined1 FCombineConeVisibilityCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  ::operator<<(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  FUN_1419e0b60(param_2,param_1 + 0xec);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xf0);
  FUN_1419e0b60(uVar1,param_1 + 0xf4);
  FUN_1419e0a40(param_2,param_1 + 0xe0);
  FUN_1419e0a40(param_2,param_1 + 0xe6);
  return 0;
}



// FUNCTION 141b1a770 Serialize body=133 status=ok
// SIG undefined Serialize(void)

ulonglong GPUFFT::FCopyWindowCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xce);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xd4);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b1a800 Serialize body=134 status=ok
// SIG undefined Serialize(void)

undefined1 FCullObjectsForShadowCS::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  ::operator<<(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0x112);
  FUN_1419e0a40(param_2,param_1 + 0x118);
  FUN_1419e0a40(param_2,param_1 + 0x11e);
  FUN_1419e0a40(param_2,param_1 + 0x124);
  FUN_1419e0a40(param_2,param_1 + 0x12a);
  return 0;
}



// FUNCTION 141b1a890 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FCullObjectsForShadowCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141b1a8d0 Serialize body=74 status=ok
// SIG undefined Serialize(void)

undefined1 FShadowObjectCullVS::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xee);
  FUN_1419e0a40(param_2,param_1 + 0xf4);
  return 0;
}



// FUNCTION 141b1a920 Serialize body=59 status=ok
// SIG undefined Serialize(void)

undefined1 FShadowObjectCullPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  ::operator<<(param_2,param_1 + 0xee);
  return 0;
}



// FUNCTION 141b1a960 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShadowObjectCullPS<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141b1a9b0 Serialize body=309 status=ok
// SIG undefined Serialize(void)

undefined1 TDistanceFieldShadowingCS<1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  FUN_1419e0a40(param_2,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  FUN_1419e0a40(param_2,param_1 + 0xe0);
  FUN_1419e0a40(param_2,param_1 + 0xe6);
  FUN_1419e0a40(param_2,param_1 + 0xec);
  ::operator<<(param_2,param_1 + 0xf2);
  FUN_141ad3f10(param_1 + 0x120,param_2);
  FUN_141ad3f10(param_1 + 0x128,param_2);
  ::operator<<(param_2,param_1 + 0x130);
  FUN_1419e0a40(param_2,param_1 + 0x15c);
  FUN_1419e0a40(param_2,param_1 + 0x162);
  FUN_1419e0a40(param_2,param_1 + 0x168);
  FUN_1419e0a40(param_2,param_1 + 0x16e);
  FUN_1419e0a40(param_2,param_1 + 0x174);
  return 0;
}



// FUNCTION 141b1aaf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TDistanceFieldShadowingCS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141b1ab30 Serialize body=171 status=ok
// SIG undefined Serialize(void)

undefined1 TDistanceFieldShadowingUpsamplePS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xea);
  FUN_1419e0a40(param_2,param_1 + 0xf0);
  return 0;
}



// FUNCTION 141b1abe0 Serialize body=29 status=ok
// SIG undefined Serialize(void)

ulonglong FComputeCulledObjectStartOffsetCS::Serialize(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141b1ac00 Serialize body=219 status=ok
// SIG undefined Serialize(void)

undefined1 TVisualizeMeshDistanceFieldCS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  ::operator<<(param_2,param_1 + 0xce);
  FUN_141ad3f10(param_1 + 0xfc,param_2);
  FUN_141ad3f10(param_1 + 0x104,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x10c);
  FUN_1419e0a40(param_2,param_1 + 0x112);
  FUN_1419e0a40(param_2,param_1 + 0x118);
  FUN_1419e0a40(param_2,param_1 + 0x11e);
  FUN_1419e0a40(param_2,param_1 + 0x124);
  ::operator<<(param_2,param_1 + 0x12a);
  return 0;
}



// FUNCTION 141b1ace0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TVisualizeMeshDistanceFieldCS<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 141b1ad20 Serialize body=96 status=ok
// SIG undefined Serialize(void)

undefined1 TExponentialHeightFogPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  return 0;
}



// FUNCTION 141b1ad80 Serialize body=104 status=ok
// SIG undefined Serialize(void)

undefined1 FParticleSortKeyGenCS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  return 0;
}



// FUNCTION 141b1adf0 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FOcclusionQueryVS::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd8);
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141b1ae40 Serialize body=291 status=ok
// SIG undefined Serialize(void)

undefined1 FUpdateHistoryDepthRejectionPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(param_2,param_1 + 0xe2);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  ::operator<<(param_2,param_1 + 0xee);
  FUN_1419e0b60(param_2,param_1 + 0x122);
  FUN_1419e0b60(param_2,param_1 + 0x126);
  FUN_1419e0a40(param_2,param_1 + 0x12a);
  FUN_1419e0a40(param_2,param_1 + 0x130);
  FUN_1419e0a40(param_2,param_1 + 0x136);
  FUN_1419e0b60(param_2,param_1 + 0x13c);
  FUN_1419e0b60(param_2,param_1 + 0x140);
  FUN_1419e0a40(param_2,param_1 + 0x144);
  FUN_1419e0a40(param_2,param_1 + 0x14a);
  return 0;
}



// FUNCTION 141b1af70 FUN_141b1af70 body=89 status=ok
// SIG undefined FUN_141b1af70(void)

undefined1 FUN_141b1af70(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  return 0;
}



// FUNCTION 141b1afd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FUpdateHistoryDepthRejectionPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141b1b010 FUN_141b1b010 body=93 status=ok
// SIG undefined FUN_141b1b010(void)

undefined1 FUN_141b1b010(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  FUN_1419e0a40(param_2,param_1 + 0x156);
  FUN_1419e0a40(param_2,param_1 + 0x15c);
  return uVar1;
}



// FUNCTION 141b1b070 Serialize body=134 status=ok
// SIG undefined Serialize(void)

undefined1 TFilterHistoryPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  FUN_1419e0a40(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xda);
  FUN_1419e0b60(param_2,param_1 + 0xde);
  return 0;
}



// FUNCTION 141b1b100 FUN_141b1b100 body=93 status=ok
// SIG undefined FUN_141b1b100(void)

undefined1 FUN_141b1b100(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0b60(param_2,param_1 + 0x150);
  FUN_1419e0b60(param_2,param_1 + 0x154);
  FUN_1419e0a40(param_2,param_1 + 0x158);
  return uVar1;
}



// FUNCTION 141b1b170 Serialize body=129 status=ok
// SIG undefined Serialize(void)

undefined1 FGeometryAwareUpsamplePS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  ::operator<<(param_2,param_1 + 0xde);
  return 0;
}



// FUNCTION 141b1b200 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141b1b240 FUN_141b1b240 body=212 status=ok
// SIG undefined FUN_141b1b240(void)

void FUN_141b1b240(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_141ac25e0(param_1 + 0x38,4,2,0x1c,1,0,0);
    FUN_141ac25e0(param_1 + 0x60,4,3,0x1c,0x101,0,0);
    iVar1 = *(int *)(param_1 + 0x30) * 3;
    FUN_141ac25e0(param_1 + 0x88,0x10,(int)((iVar1 >> 0x1f & 0xfU) + iVar1) >> 4,1,1,0,0);
    FUN_141ac25e0(param_1 + 0xb0,0x10,*(int *)(param_1 + 0x30) * 3,1,1,0,0);
  }
  return;
}



// FUNCTION 141b1b320 FUN_141b1b320 body=56 status=ok
// SIG undefined FUN_141b1b320(void)

void FUN_141b1b320(longlong param_1)

{
  FUN_141ace450(param_1 + 0x38);
  FUN_141ace450(param_1 + 0x60);
  FUN_141ace450(param_1 + 0x88);
  FUN_141ace450(param_1 + 0xb0);
  return;
}



// FUNCTION 141b1b360 FUN_141b1b360 body=126 status=ok
// SIG undefined FUN_141b1b360(void)

undefined1 FUN_141b1b360(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  return 0;
}



// FUNCTION 141b1b3e0 FUN_141b1b3e0 body=636 status=ok
// SIG undefined FUN_141b1b3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b1b3e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong local_e0 [3];
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar3 = 0;
  local_c8 = 1;
  local_b4 = 0;
  local_b0 = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_c4 = _DAT_1468b5d78;
  uStack_bc = uRam00000001468b5d80;
  local_a8 = 0;
  local_a0 = 0;
  local_f8 = local_e0;
  local_100 = local_e0 + 1;
  local_108 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))
            (DAT_146ab6358,local_e8,&DAT_146ab6e78,*(int *)(param_1 + 0x38) * 0x30);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_e8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_e8);
  lVar2 = local_e0[0];
  iVar1 = *(int *)(param_1 + 0x38);
  fVar7 = _guard_xfg_dispatch_icall_nop(3.1415927 / (float)iVar1);
  fVar7 = 1.0 / fVar7;
  if (0 < iVar1) {
    lVar6 = lVar2 + 4;
    uVar5 = uVar3;
    do {
      uVar4 = (int)uVar3 + 1;
      uVar8 = __libm_sse2_sincosf_();
      uVar9 = __libm_sse2_sincosf_();
      *(float *)(lVar6 + 4) = (float)((ulonglong)uVar8 >> 0x20) * fVar7;
      uVar3 = (ulonglong)uVar4;
      *(float *)(lVar6 + 8) = (float)uVar8 * fVar7;
      *(undefined8 *)(lVar6 + -4) = 0;
      lVar6 = lVar6 + 0x30;
      *(undefined8 *)(uVar5 + 0x10 + lVar2) = 0;
      *(undefined8 *)(uVar5 + 0x20 + lVar2) = 0;
      *(undefined4 *)(uVar5 + 0x28 + lVar2) = 0x3f000000;
      *(undefined4 *)(uVar5 + 0x2c + lVar2) = 0x3f000000;
      *(float *)(uVar5 + 0x18 + lVar2) = (float)((ulonglong)uVar9 >> 0x20) * fVar7;
      *(float *)(uVar5 + 0x1c + lVar2) = (float)uVar9 * fVar7;
      uVar5 = uVar5 + 0x30;
    } while ((int)uVar4 < *(int *)(param_1 + 0x38));
  }
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141b1b660 FUN_141b1b660 body=89 status=ok
// SIG undefined FUN_141b1b660(void)

undefined8 * FUN_141b1b660(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ddf528;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141b1b6d0 Serialize body=189 status=ok
// SIG undefined Serialize(void)

undefined1 FCullObjectsForViewCS::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  ::operator<<(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0x112);
  FUN_1419e0a40(param_2,param_1 + 0x118);
  FUN_1419e0a40(param_2,param_1 + 0x11e);
  FUN_1419e0a40(param_2,param_1 + 0x124);
  FUN_1419e0a40(param_2,param_1 + 0x12a);
  FUN_1419e0a40(param_2,param_1 + 0x130);
  FUN_1419e0a40(param_2,param_1 + 0x136);
  FUN_1419e0a40(param_2,param_1 + 0x13c);
  return 0;
}



// FUNCTION 141b1b790 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCullObjectsForViewCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 141b1b7d0 Serialize body=105 status=ok
// SIG undefined Serialize(void)

ulonglong TDistortionApplyScreenPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 200);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b1b840 Serialize body=261 status=ok
// SIG undefined Serialize(void)

undefined1 FBuildTileConesCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(param_2,param_1 + 0xe2);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xee);
  FUN_1419e0b60(uVar1,param_1 + 0xf2);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xf6);
  FUN_1419e0b60(uVar1,param_1 + 0xfa);
  FUN_1419e0a40(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0xfe);
  FUN_1419e0b60(param_2,param_1 + 0x10a);
  FUN_1419e0b60(param_2,param_1 + 0x10e);
  return 0;
}



// FUNCTION 141b1b950 Serialize body=50 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessBenchmarkPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b1b990 Serialize body=144 status=ok
// SIG undefined Serialize(void)

undefined1 FObjectCullVS::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xee);
  FUN_1419e0a40(param_2,param_1 + 0xf4);
  FUN_1419e0a40(param_2,param_1 + 0xfa);
  FUN_1419e0a40(param_2,param_1 + 0x100);
  FUN_1419e0a40(param_2,param_1 + 0x106);
  FUN_1419e0a40(param_2,param_1 + 0x10c);
  return 0;
}



// FUNCTION 141b1ba20 Serialize body=189 status=ok
// SIG undefined Serialize(void)

undefined1 TObjectCullPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xee);
  FUN_1419e0a40(param_2,param_1 + 0xf4);
  FUN_1419e0a40(param_2,param_1 + 0xfa);
  FUN_1419e0a40(param_2,param_1 + 0x100);
  FUN_1419e0a40(param_2,param_1 + 0x106);
  ::operator<<(param_2,param_1 + 0x10c);
  FUN_1419e0b60(param_2,param_1 + 0x132);
  FUN_1419e0b60(param_2,param_1 + 0x136);
  FUN_1419e0a40(param_2,param_1 + 0x13a);
  return 0;
}



// FUNCTION 141b1bae0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 TObjectCullPS<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 141b1bb20 Serialize body=59 status=ok
// SIG undefined Serialize(void)

undefined1 FComputeCulledTilesStartOffsetCS::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  ::operator<<(param_2,param_1 + 0xee);
  return 0;
}



// FUNCTION 141b1bb70 ReleaseDynamicRHI body=36 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FDistanceFieldRemoveIndicesResource::ReleaseDynamicRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x40,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,0);
  return;
}



// FUNCTION 141b1bba0 `scalar_deleting_destructor' body=88 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDistanceFieldRemoveIndicesResource>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ddf900;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141b1bc00 FUN_141b1bc00 body=324 status=ok
// SIG undefined FUN_141b1bc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b1bc00(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (0 < *(int *)(param_1 + 0x34)) {
    if ((DAT_146ab62f3 == '\0') || (uVar1 = 0x2000, *(int *)(DAT_146a9d500 + 4) == 0)) {
      uVar1 = 0;
    }
    uVar1 = uVar1 | _DAT_146a9dac4;
    FUN_141ac25e0(param_1 + 0x38,4,5,0x1c,0x101,0,0);
    uVar3 = 0;
    uVar2 = 0;
    FUN_141ac25e0(param_1 + 0x60,4,3,0x1c,0x101,0,0);
    uVar3 = uVar3 & 0xffffffffffffff00;
    uVar1 = uVar1 | 1;
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_141b34f10(param_1 + 0x88,0x10,*(undefined4 *)(param_1 + 0x34),uVar1,
                  L"FDistanceFieldCulledObjectBuffers::Bounds",uVar2,uVar3);
    uVar3 = uVar3 & 0xffffffffffffff00;
    uVar2 = uVar2 & 0xffffffffffffff00;
    FUN_141b34f10(param_1 + 0xb0,0x10,*(int *)(param_1 + 0x34) * DAT_1464c1a3c,uVar1,
                  L"FDistanceFieldCulledObjectBuffers::Data",uVar2,uVar3);
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_141b34f10(param_1 + 0xd8,0x10,*(int *)(param_1 + 0x34) * DAT_1464c1a40,uVar1,
                    L"FDistanceFieldCulledObjectBuffers::BoxBounds",uVar2 & 0xffffffffffffff00,
                    uVar3 & 0xffffffffffffff00);
    }
  }
  return;
}


