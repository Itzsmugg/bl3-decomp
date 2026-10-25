// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425dcbf0 FUN_1425dcbf0 body=199 status=ok
// SIG undefined FUN_1425dcbf0(void)

void FUN_1425dcbf0(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"InstanceData",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"BoneMatrices",0);
  FShaderResourceParameter::Bind(param_1 + 0x10,param_2,L"DynamicParameters",0);
  FShaderResourceParameter::Bind(param_1 + 0x14,param_2,L"PackedBoneMap",0);
  FShaderResourceParameter::Bind(param_1 + 0x18,param_2,L"BoneMapRanges",0);
  FShaderParameter::Bind(param_1 + 0x1c,param_2,L"NumBones",0);
  FShaderParameter::Bind(param_1 + 0x22,param_2,L"NumBoneMapRanges",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"bUseExtraBoneIndicies",0);
  return;
}



// FUNCTION 1425dccc0 FUN_1425dccc0 body=483 status=ok
// SIG undefined FUN_1425dccc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425dccc0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  longlong local_b0 [3];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0xd0);
  FWeakObjectPtr::operator=(&local_d8,lVar2);
  FWeakObjectPtr::operator=(&local_d0,param_1);
  local_c8 = local_d8;
  local_c4 = local_d4;
  local_c0 = local_d0;
  local_bc = local_cc;
  local_b8 = param_2;
  FString::FString(local_b0,param_3);
  if (lVar2 == 0) {
    FUN_1425da320(&local_c8);
  }
  else {
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    plVar1 = (longlong *)FMemory::Realloc(0,0x40);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_GetPoolName_14512c1b0;
      *(undefined4 *)(plVar1 + 1) = local_c8;
      *(undefined4 *)((longlong)plVar1 + 0xc) = local_c4;
      *(undefined4 *)(plVar1 + 2) = local_c0;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_bc;
      *(undefined4 *)(plVar1 + 3) = local_b8;
      FString::FString(plVar1 + 4,local_b0);
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[7] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_14512c1f8;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    FUN_142880af0(uVar3,&local_98);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425dceb0 FUN_1425dceb0 body=11953 status=ok
// SIG undefined FUN_1425dceb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425dceb0(longlong param_1,undefined1 (*param_2) [16],float *param_3,float param_4,
                  undefined8 *param_5,float *param_6,undefined8 param_7,undefined8 param_8,
                  float *param_9,undefined8 *param_10,undefined8 *param_11,float *param_12,
                  float *param_13,float *param_14)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
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
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
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
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float local_res8;
  float local_res10;
  float local_res18;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  float local_320;
  undefined8 local_318;
  float local_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  float local_2f0;
  undefined8 local_2e8;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float local_2b4;
  float local_2a8;
  float local_298;
  float local_294;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  float local_1f0;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108 [224];
  
  pfVar6 = param_14;
  fVar60 = -1.0;
  local_res18 = DAT_1468b5d90;
  local_res10 = DAT_1468b5d94;
  local_res8 = DAT_1468b5d98;
  if (*(char *)(param_1 + 0x1ec) != '\0') {
    switch(*(char *)(param_1 + 0x1ec)) {
    case '\x01':
    case '\x05':
    case '\t':
      local_res8 = 1.0;
      local_res18 = 0.0;
      local_res10 = 0.0;
      break;
    case '\x02':
    case '\x06':
    case '\n':
      local_res8 = -1.0;
      local_res18 = 0.0;
      local_res10 = 0.0;
      break;
    case '\x03':
    case '\a':
    case '\v':
      local_res10 = 1.0;
      local_res18 = 0.0;
      local_res8 = 0.0;
      break;
    case '\x04':
    case '\b':
    case '\f':
      local_res10 = -1.0;
      local_res18 = 0.0;
      local_res8 = 0.0;
    }
  }
  if (*(char *)(param_1 + 0xfd) == '\0') {
    param_11 = (undefined8 *)(param_1 + 0x128);
  }
  local_2f8 = *param_11;
  local_2f0 = *(float *)(param_11 + 1);
  if ((*(byte *)(param_1 + 0x1e8) & 2) != 0) {
    local_2e8 = 0x3f800000;
    fStack_2e0 = 0.0;
    puVar7 = (undefined8 *)FQuat::FindBetweenNormals(&local_278,&local_2e8,&local_2f8);
    local_338 = *puVar7;
    uStack_330 = puVar7[1];
  }
  uVar9 = CONCAT44(fRam00000001464aa7dc,DAT_1464aa7d8);
  fStack_11c = 1.0;
  *(ulonglong *)param_14 = CONCAT44(DAT_1464aa7d4,DAT_1464aa7d0);
  *(undefined8 *)(param_14 + 2) = uVar9;
  uVar9 = _DAT_1464aa7e8;
  *(undefined8 *)(param_14 + 4) = _DAT_1464aa7e0;
  *(undefined8 *)(param_14 + 6) = uVar9;
  uVar9 = CONCAT44(fRam00000001464aa7fc,DAT_1464aa7f8);
  *(ulonglong *)(param_14 + 8) = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
  *(undefined8 *)(param_14 + 10) = uVar9;
  uVar5 = uRam00000001464aa808;
  *(undefined8 *)(param_14 + 0xc) = _DAT_1464aa800;
  *(ulonglong *)(param_14 + 0xe) = uVar5;
  local_248 = *(float *)*param_2;
  fStack_244 = *(float *)(*param_2 + 4);
  fStack_240 = *(float *)(*param_2 + 8);
  fStack_23c = *(float *)(*param_2 + 0xc);
  _local_1e8 = *param_2;
  fVar10 = *(float *)param_2[1];
  fVar12 = *(float *)(param_2[1] + 4);
  fVar23 = *(float *)(param_2[1] + 8);
  fVar65 = *(float *)(param_2[1] + 0xc);
  local_228 = *(float *)param_2[2];
  fStack_224 = *(float *)(param_2[2] + 4);
  fStack_220 = *(float *)(param_2[2] + 8);
  fStack_21c = *(float *)(param_2[2] + 0xc);
  local_218 = *(float *)param_2[3];
  fStack_214 = *(float *)(param_2[3] + 4);
  fStack_210 = *(float *)(param_2[3] + 8);
  fStack_20c = *(float *)(param_2[3] + 0xc);
  fStack_124 = param_3[1] + param_9[1];
  fStack_120 = param_3[2] + param_9[2];
  local_128 = *param_9 + *param_3;
  uVar3 = *(uint *)(param_1 + 0x1e8);
  local_2c8 = _DAT_1464aa810;
  uStack_2c0 = _DAT_1464aa818;
  fStack_170 = *(float *)(param_1 + 0x78) * param_6[2];
  uStack_194 = 0;
  local_198 = *(float *)(param_1 + 0x70) * *param_6;
  uStack_18c = 0;
  fStack_184 = *(float *)(param_1 + 0x74) * param_6[1];
  uStack_180 = 0;
  local_1b8 = _DAT_1464aa7e0;
  uStack_1b0 = _DAT_1464aa7e8;
  local_2d8 = _DAT_1464aa800;
  uStack_2d0 = uRam00000001464aa808;
  local_2a8 = (float)local_338;
  local_308 = (float)local_338;
  param_9._0_4_ = local_338._4_4_;
  fStack_304 = local_338._4_4_;
  param_14._0_4_ = (float)uStack_330;
  fStack_300 = (float)uStack_330;
  local_298 = uStack_330._4_4_;
  fStack_2fc = uStack_330._4_4_;
  local_178 = 0;
  fStack_16c = 0.0;
  local_1c8 = DAT_1464aa7d0;
  fStack_1c4 = DAT_1464aa7d4;
  fStack_1c0 = DAT_1464aa7d8;
  fStack_1bc = fRam00000001464aa7dc;
  local_258 = DAT_1464aa7f0;
  local_258 = DAT_1464aa7f0;
  fStack_254 = DAT_1464aa7f4;
  fStack_250 = DAT_1464aa7f8;
  fStack_24c = fRam00000001464aa7fc;
  local_238 = fVar10;
  fStack_234 = fVar12;
  fStack_230 = fVar23;
  fStack_22c = fVar65;
  local_288 = fVar10;
  fStack_284 = fVar12;
  fStack_280 = fVar23;
  fStack_27c = fVar65;
  local_208 = local_228;
  fStack_204 = fStack_224;
  fStack_200 = fStack_220;
  fStack_1fc = fStack_21c;
  local_268 = local_218;
  fStack_264 = fStack_214;
  fStack_260 = fStack_210;
  fStack_25c = fStack_20c;
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) != 0) {
      param_4 = param_4 * 0.5;
      if (param_4 < 0.0) {
        fVar10 = param_4 * 0.15915494 - 0.5;
      }
      else {
        fVar10 = param_4 * 0.15915494 + 0.5;
      }
      param_4 = param_4 - (float)(int)fVar10 * 6.2831855;
      if (param_4 <= 1.5707964) {
        if (-1.5707964 <= param_4) {
          fVar60 = 1.0;
        }
        else {
          param_4 = -3.1415927 - param_4;
        }
      }
      else {
        param_4 = 3.1415927 - param_4;
      }
      fVar10 = param_4 * param_4;
      param_4 = (((((2.7525562e-06 - fVar10 * 2.3889859e-08) * fVar10 - 0.00019840874) * fVar10 +
                  0.008333331) * fVar10 - 0.16666667) * fVar10 + 1.0) * param_4;
      fVar60 = (((((2.4760495e-05 - fVar10 * 2.6051615e-07) * fVar10 - 0.0013888378) * fVar10 +
                 0.041666638) * fVar10 - 0.5) * fVar10 + 1.0) * fVar60;
      fVar12 = param_4 * (float)local_2f8;
      fVar10 = param_4 * local_2f8._4_4_;
      param_4 = param_4 * local_2f0;
      local_2c8 = CONCAT44((float)uStack_330 * fVar12 * fRam0000000146b04994 +
                           fVar60 * local_338._4_4_ +
                           uStack_330._4_4_ * fVar10 * fRam0000000146b04984 +
                           (float)local_338 * param_4 * fRam0000000146b04974,
                           uStack_330._4_4_ * fVar12 * _DAT_146b04990 + fVar60 * (float)local_338 +
                           (float)uStack_330 * fVar10 * _DAT_146b04980 +
                           local_338._4_4_ * param_4 * _DAT_146b04970);
      uStack_2c0 = CONCAT44((float)local_338 * fVar12 * fRam0000000146b0499c +
                            fVar60 * uStack_330._4_4_ +
                            local_338._4_4_ * fVar10 * fRam0000000146b0498c +
                            (float)uStack_330 * param_4 * fRam0000000146b0497c,
                            local_338._4_4_ * fVar12 * fRam0000000146b04998 +
                            fVar60 * (float)uStack_330 +
                            (float)local_338 * fVar10 * fRam0000000146b04988 +
                            uStack_330._4_4_ * param_4 * fRam0000000146b04978);
      goto LAB_1425ddfc8;
    }
    if (*(char *)(param_1 + 0xee) == '\x05') {
      if (*(char *)(param_1 + 0xec) != '\0') {
        local_258 = 0.0;
        fStack_254 = 0.0;
        fStack_250 = 0.0;
        local_2d8 = CONCAT44(fStack_124,local_128);
        uStack_2d0 = CONCAT44(0x3f800000,fStack_120);
        fVar65 = local_128 * fStack_244;
        fVar30 = local_128 * fStack_240;
        fVar23 = fStack_124 * fVar23;
        local_288 = 0.0;
        fStack_284 = 1.0;
        fStack_280 = 0.0;
        fStack_27c = 0.0;
        local_268 = 0.0;
        fStack_264 = 0.0;
        fStack_260 = 0.0;
        fStack_25c = 1.0;
        local_128 = local_218 * 1.0 + fStack_120 * local_228 +
                    fStack_124 * fVar10 + local_128 * local_248;
        fStack_124 = fStack_214 * 1.0 + fStack_120 * fStack_224 + fStack_124 * fVar12 + fVar65;
        fStack_120 = fStack_210 * 1.0 + fStack_120 * fStack_220 + fVar23 + fVar30;
        _local_1e8 = ZEXT816(0x3f800000);
        local_208 = 0.0;
        fStack_204 = 0.0;
        fStack_200 = 1.0;
        fStack_1fc = 0.0;
      }
      fVar23 = *param_12 - local_128;
      fVar12 = param_12[1] - fStack_124;
      local_320 = param_12[2] - fStack_120;
      local_328 = CONCAT44(fVar12,fVar23);
      fVar10 = fVar12 * fVar12 + fVar23 * fVar23 + local_320 * local_320;
      if (1e-08 < fVar10) {
        auVar25 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar65 = auVar25._0_4_;
        fVar65 = fVar65 + fVar65 * (0.5 - fVar10 * 0.5 * fVar65 * fVar65);
        fVar65 = fVar65 + fVar65 * (0.5 - fVar10 * 0.5 * fVar65 * fVar65);
        fVar23 = fVar23 * fVar65;
        fVar12 = fVar12 * fVar65;
        local_320 = local_320 * fVar65;
        local_328 = CONCAT44(fVar12,fVar23);
      }
      if (fVar12 * fVar12 + fVar23 * fVar23 + local_320 * local_320 < 0.5) {
        local_328 = 0x3f800000;
        local_320 = 0.0;
      }
      local_1f0 = 0.0;
      local_1f8 = 0x3f800000;
      uStack_330._0_4_ = 1.0;
      local_110 = 0x3f800000;
      local_118 = 0;
      if (*(char *)(param_1 + 0x124) == '\x02') {
        FQuat::FindBetweenNormals(&local_308,&local_118,&local_2f8);
        fVar60 = local_2f8._4_4_ * local_328._4_4_ + (float)local_2f8 * (float)local_328 +
                 local_2f0 * local_320;
        fVar12 = (float)local_328 - fVar60 * (float)local_2f8;
        fVar10 = local_328._4_4_ - fVar60 * local_2f8._4_4_;
        fStack_2e0 = local_320 - fVar60 * local_2f0;
        local_2e8 = CONCAT44(fVar10,fVar12);
        fVar60 = fVar10 * fVar10 + fVar12 * fVar12 + fStack_2e0 * fStack_2e0;
        if (1e-08 < fVar60) {
          auVar25 = rsqrtss(ZEXT416((uint)fVar60),ZEXT416((uint)fVar60));
          fVar23 = auVar25._0_4_;
          fVar23 = fVar23 + fVar23 * (0.5 - fVar60 * 0.5 * fVar23 * fVar23);
          fVar23 = fVar23 + fVar23 * (0.5 - fVar60 * 0.5 * fVar23 * fVar23);
          fStack_2e0 = fVar23 * fStack_2e0;
          local_2e8 = CONCAT44(fVar23 * fVar10,fVar23 * fVar12);
        }
        fVar12 = local_1f0 * fStack_304 - local_1f8._4_4_ * fStack_300;
        fVar10 = (float)local_1f8 * fStack_300 - local_1f0 * local_308;
        fVar12 = fVar12 + fVar12;
        fVar60 = local_1f8._4_4_ * local_308 - (float)local_1f8 * fStack_304;
        fVar10 = fVar10 + fVar10;
        fVar60 = fVar60 + fVar60;
        local_338 = CONCAT44((fStack_300 * fVar12 - local_308 * fVar60) +
                             fStack_2fc * fVar10 + local_1f8._4_4_,
                             (fStack_304 * fVar60 - fStack_300 * fVar10) +
                             fStack_2fc * fVar12 + (float)local_1f8);
        uStack_330 = CONCAT44(uStack_330._4_4_,
                              (local_308 * fVar10 - fStack_304 * fVar12) +
                              fStack_2fc * fVar60 + local_1f0);
        FQuat::FindBetweenNormals(&local_278,&local_338,&local_2e8);
        pfVar8 = &local_1a8;
        local_1a8 = fStack_2fc * local_278 * _DAT_146b04990 + fStack_26c * local_308 +
                    fStack_300 * fStack_274 * _DAT_146b04980 +
                    fStack_304 * fStack_270 * _DAT_146b04970;
        fStack_1a4 = fStack_300 * local_278 * fRam0000000146b04994 + fStack_26c * fStack_304 +
                     fStack_2fc * fStack_274 * fRam0000000146b04984 +
                     local_308 * fStack_270 * fRam0000000146b04974;
        fStack_1a0 = fStack_304 * local_278 * fRam0000000146b04998 + fStack_26c * fStack_300 +
                     local_308 * fStack_274 * fRam0000000146b04988 +
                     fStack_2fc * fStack_270 * fRam0000000146b04978;
        fStack_19c = local_308 * local_278 * fRam0000000146b0499c + fStack_26c * fStack_2fc +
                     fStack_304 * fStack_274 * fRam0000000146b0498c +
                     fStack_300 * fStack_270 * fRam0000000146b0497c;
      }
      else {
        if (*(char *)(param_1 + 0x124) == '\x01') {
          uVar9 = FQuat::FindBetweenNormals(&local_278,&local_1f8,&local_328);
          FRotator::FRotator(&local_338,uVar9);
          fVar12 = -local_328._4_4_;
          uStack_330 = (ulonglong)(uint)uStack_330._4_4_ << 0x20;
          fVar23 = fVar12 * fVar12 + (float)local_328 * (float)local_328;
          fVar10 = (float)local_328;
          if (1e-08 < fVar23) {
            auVar25 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
            fVar65 = auVar25._0_4_;
            fVar65 = fVar65 + fVar65 * (0.5 - fVar23 * 0.5 * fVar65 * fVar65);
            fVar65 = fVar65 + fVar65 * (0.5 - fVar23 * 0.5 * fVar65 * fVar65);
            fVar10 = fVar65 * (float)local_328;
            fVar12 = fVar65 * fVar12;
          }
          if (fVar10 * fVar10 + fVar12 * fVar12 < 0.5) {
            fVar12 = 1.0;
            fVar10 = 0.0;
          }
          param_4 = param_4 * 0.5;
          if (param_4 < 0.0) {
            fVar23 = param_4 * 0.15915494 - 0.5;
          }
          else {
            fVar23 = param_4 * 0.15915494 + 0.5;
          }
          param_4 = param_4 - (float)(int)fVar23 * 6.2831855;
          if (param_4 <= 1.5707964) {
            if (-1.5707964 <= param_4) {
              fVar60 = 1.0;
            }
            else {
              param_4 = -3.1415927 - param_4;
            }
          }
          else {
            param_4 = 3.1415927 - param_4;
          }
          uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
          fVar23 = param_4 * param_4;
          param_4 = (((((2.7525562e-06 - fVar23 * 2.3889859e-08) * fVar23 - 0.00019840874) * fVar23
                      + 0.008333331) * fVar23 - 0.16666667) * fVar23 + 1.0) * param_4;
          fVar10 = param_4 * fVar10;
          param_4 = param_4 * fVar12;
          fVar60 = (((((2.4760495e-05 - fVar23 * 2.6051615e-07) * fVar23 - 0.0013888378) * fVar23 +
                     0.041666638) * fVar23 - 0.5) * fVar23 + 1.0) * fVar60;
          pfVar8 = (float *)FRotator::Quaternion(&local_338,&local_278);
          fVar12 = *pfVar8;
          fVar23 = pfVar8[1];
          fVar65 = pfVar8[2];
          fVar30 = pfVar8[3];
          local_2d8 = CONCAT44(fVar10,param_4);
          uStack_2d0 = CONCAT44(fVar60,(float)uStack_2d0);
          local_278 = param_4 * fVar30 * _DAT_146b04990 + fVar60 * fVar12 +
                      fVar10 * fVar65 * _DAT_146b04980 + (float)uStack_2d0 * fVar23 * _DAT_146b04970
          ;
          fStack_274 = param_4 * fVar65 * fRam0000000146b04994 + fVar60 * fVar23 +
                       fVar10 * fVar30 * fRam0000000146b04984 +
                       (float)uStack_2d0 * fVar12 * fRam0000000146b04974;
          fStack_270 = param_4 * fVar23 * fRam0000000146b04998 + fVar60 * fVar65 +
                       fVar10 * fVar12 * fRam0000000146b04988 +
                       (float)uStack_2d0 * fVar30 * fRam0000000146b04978;
          fStack_26c = param_4 * fVar12 * fRam0000000146b0499c + fVar60 * fVar30 +
                       fVar10 * fVar23 * fRam0000000146b0498c +
                       (float)uStack_2d0 * fVar65 * fRam0000000146b0497c;
        }
        else {
          uVar9 = FQuat::FindBetweenNormals(&local_278,&local_1f8,&local_328);
          FRotator::FRotator(&local_338,uVar9);
          param_4 = param_4 * 0.5;
          uStack_330 = (ulonglong)(uint)uStack_330._4_4_ << 0x20;
          if (param_4 < 0.0) {
            fVar10 = param_4 * 0.15915494 - 0.5;
          }
          else {
            fVar10 = param_4 * 0.15915494 + 0.5;
          }
          param_4 = param_4 - (float)(int)fVar10 * 6.2831855;
          if (param_4 <= 1.5707964) {
            if (-1.5707964 <= param_4) {
              fVar60 = 1.0;
            }
            else {
              param_4 = -3.1415927 - param_4;
            }
          }
          else {
            param_4 = 3.1415927 - param_4;
          }
          fVar10 = param_4 * param_4;
          param_4 = (((((2.7525562e-06 - fVar10 * 2.3889859e-08) * fVar10 - 0.00019840874) * fVar10
                      + 0.008333331) * fVar10 - 0.16666667) * fVar10 + 1.0) * param_4;
          fVar16 = param_4 * (float)local_328;
          fVar30 = param_4 * local_328._4_4_;
          param_4 = param_4 * local_320;
          fVar60 = (((((2.4760495e-05 - fVar10 * 2.6051615e-07) * fVar10 - 0.0013888378) * fVar10 +
                     0.041666638) * fVar10 - 0.5) * fVar10 + 1.0) * fVar60;
          pfVar8 = (float *)FRotator::Quaternion(&local_338,&local_278);
          fVar10 = *pfVar8;
          fVar12 = pfVar8[1];
          fVar23 = pfVar8[2];
          fVar65 = pfVar8[3];
          local_2d8 = CONCAT44(fVar30,fVar16);
          uStack_2d0 = CONCAT44(fVar60,param_4);
          local_278 = fVar16 * fVar65 * _DAT_146b04990 + fVar60 * fVar10 +
                      fVar30 * fVar23 * _DAT_146b04980 + param_4 * fVar12 * _DAT_146b04970;
          fStack_274 = fVar16 * fVar23 * fRam0000000146b04994 + fVar60 * fVar12 +
                       fVar30 * fVar65 * fRam0000000146b04984 +
                       param_4 * fVar10 * fRam0000000146b04974;
          fStack_270 = fVar16 * fVar12 * fRam0000000146b04998 + fVar60 * fVar23 +
                       fVar30 * fVar10 * fRam0000000146b04988 +
                       param_4 * fVar65 * fRam0000000146b04978;
          fStack_26c = fVar16 * fVar10 * fRam0000000146b0499c + fVar60 * fVar65 +
                       fVar30 * fVar12 * fRam0000000146b0498c +
                       param_4 * fVar23 * fRam0000000146b0497c;
        }
        pfVar8 = &local_278;
      }
      pfVar8 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_108,pfVar8);
      fVar60 = *pfVar8;
      fVar30 = pfVar8[1];
      fVar16 = pfVar8[2];
      fVar18 = pfVar8[3];
      fVar20 = pfVar8[4];
      fVar37 = pfVar8[5];
      fVar11 = pfVar8[6];
      fVar42 = pfVar8[7];
      fVar17 = pfVar8[8];
      fVar19 = pfVar8[9];
      fVar21 = pfVar8[10];
      fVar22 = pfVar8[0xb];
      fVar24 = pfVar8[0xc];
      fVar26 = pfVar8[0xd];
      fVar27 = pfVar8[0xe];
      fVar28 = pfVar8[0xf];
      fVar10 = local_288;
      fVar12 = fStack_284;
      fVar23 = fStack_280;
      fVar65 = fStack_27c;
    }
    else {
      param_4 = param_4 * 57.295776;
      local_338 = CONCAT44(param_4,param_4);
      uStack_330 = CONCAT44(uStack_330._4_4_,param_4);
      FRotator::MakeFromEuler(&local_318,&local_338);
      pfVar8 = (float *)FRotator::MakeFromEuler(&local_2e8,param_8);
      local_318 = CONCAT44(local_318._4_4_ + pfVar8[1],(float)local_318 + *pfVar8);
      local_310 = local_310 + pfVar8[2];
      pfVar8 = (float *)FRotationMatrix::FRotationMatrix(local_108,&local_318);
      fVar60 = *pfVar8;
      fVar30 = pfVar8[1];
      fVar16 = pfVar8[2];
      fVar18 = pfVar8[3];
      fVar20 = pfVar8[4];
      fVar37 = pfVar8[5];
      fVar11 = pfVar8[6];
      fVar42 = pfVar8[7];
      fVar17 = pfVar8[8];
      fVar19 = pfVar8[9];
      fVar21 = pfVar8[10];
      fVar22 = pfVar8[0xb];
      fVar24 = pfVar8[0xc];
      fVar26 = pfVar8[0xd];
      fVar27 = pfVar8[0xe];
      fVar28 = pfVar8[0xf];
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0xec);
    uVar9 = *param_5;
    local_310 = *(float *)(param_5 + 1);
    local_318._0_4_ = (float)uVar9;
    local_318._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
    param_6._0_4_ = local_128;
    local_2b8 = fStack_124;
    local_2b4 = fStack_120;
    fVar60 = (float)local_318;
    fVar30 = local_318._4_4_;
    local_318 = uVar9;
    if (cVar1 == '\0') {
LAB_1425dd531:
      uStack_330._4_4_ = 0.0;
    }
    else {
      local_338 = CONCAT44(fStack_124,local_128);
      uStack_330 = CONCAT44(0x3f800000,fStack_120);
      param_6._0_4_ =
           local_218 * 1.0 + fStack_120 * local_228 + fStack_124 * fVar10 + local_128 * local_248;
      local_2b8 = fStack_214 * 1.0 + fStack_120 * fStack_224 +
                  fStack_124 * fVar12 + local_128 * fStack_244;
      local_2b4 = fStack_210 * 1.0 + fStack_120 * fStack_220 +
                  fStack_124 * fVar23 + local_128 * fStack_240;
      fStack_2dc = fStack_20c * 1.0 + fStack_120 * fStack_21c +
                   fStack_124 * fVar65 + local_128 * fStack_23c;
      local_2e8 = CONCAT44(local_2b8,param_6._0_4_);
      fStack_2e0 = local_2b4;
      local_278 = local_2b4;
      fStack_274 = local_2b4;
      fStack_270 = local_2b4;
      fStack_26c = local_2b4;
      local_1a8 = local_2b8;
      fStack_1a4 = local_2b8;
      fStack_1a0 = local_2b8;
      fStack_19c = local_2b8;
      if (*(byte *)(param_1 + 0x1ec) < 5) {
        uStack_330._4_4_ = 0.0;
      }
      else {
        if (*(byte *)(param_1 + 0x1ec) < 9) goto LAB_1425dd531;
        pfVar8 = (float *)FMatrix::InverseFast(&local_248,local_108);
        local_248 = *pfVar8;
        local_218 = pfVar8[3];
        fStack_214 = pfVar8[7];
        fStack_210 = pfVar8[0xb];
        fStack_20c = pfVar8[0xf];
        local_228 = pfVar8[2];
        fStack_224 = pfVar8[6];
        fStack_220 = pfVar8[10];
        fStack_21c = pfVar8[0xe];
        fStack_244 = pfVar8[4];
        fStack_240 = pfVar8[8];
        fStack_23c = pfVar8[0xc];
        fVar60 = local_218 * 0.0 + local_310 * local_228 +
                 local_318._4_4_ * pfVar8[1] + (float)local_318 * local_248;
        fVar30 = fStack_214 * 0.0 + local_310 * fStack_224 +
                 local_318._4_4_ * pfVar8[5] + (float)local_318 * fStack_244;
        local_310 = fStack_210 * 0.0 + local_310 * fStack_220 +
                    local_318._4_4_ * pfVar8[9] + (float)local_318 * fStack_240;
        local_318 = CONCAT44(fVar30,fVar60);
        param_6._0_4_ = (float)local_2e8;
        uStack_330._4_4_ = local_310;
        local_238 = pfVar8[1];
        fStack_234 = pfVar8[5];
        fStack_230 = pfVar8[9];
        fStack_22c = pfVar8[0xd];
      }
      local_288 = 0.0;
      fStack_284 = 1.0;
      fStack_280 = 0.0;
      fStack_27c = 0.0;
      local_268 = 0.0;
      fStack_264 = 0.0;
      fStack_260 = 0.0;
      fStack_25c = 1.0;
      _local_1e8 = ZEXT816(0x3f800000);
      local_208 = 0.0;
      fStack_204 = 0.0;
      fStack_200 = 1.0;
      fStack_1fc = 0.0;
      local_2b8 = local_1a8;
      local_2b4 = local_278;
      local_128 = param_6._0_4_;
      fStack_124 = local_1a8;
      fStack_120 = local_278;
    }
    fVar12 = -1.0;
    fVar10 = fVar60 * fVar60 + fVar30 * fVar30 + local_310 * local_310;
    if (1e-08 < fVar10) {
      auVar25 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar23 = auVar25._0_4_;
      fVar23 = fVar23 + fVar23 * (0.5 - fVar10 * 0.5 * fVar23 * fVar23);
      fVar23 = fVar23 + fVar23 * (0.5 - fVar10 * 0.5 * fVar23 * fVar23);
      local_310 = local_310 * fVar23;
      fVar60 = fVar60 * fVar23;
      fVar30 = fVar30 * fVar23;
      local_318 = CONCAT44(fVar30,fVar60);
    }
    if ((uVar3 & 0x10) == 0) {
      param_6._0_4_ = *param_12 - param_6._0_4_;
      local_2b8 = param_12[1] - local_2b8;
      local_2b4 = param_12[2] - local_2b4;
    }
    else {
      param_6._0_4_ = -*param_13;
      local_2b8 = -param_13[1];
      local_2b4 = -param_13[2];
    }
    local_328 = CONCAT44(local_2b8,param_6._0_4_);
    fVar10 = local_2b8 * local_2b8 + param_6._0_4_ * param_6._0_4_ + local_2b4 * local_2b4;
    if (1e-08 < fVar10) {
      auVar25 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar23 = auVar25._0_4_;
      fVar23 = fVar23 + fVar23 * (0.5 - fVar10 * 0.5 * fVar23 * fVar23);
      fVar23 = fVar23 + fVar23 * (0.5 - fVar10 * 0.5 * fVar23 * fVar23);
      param_6._0_4_ = param_6._0_4_ * fVar23;
      local_2b8 = local_2b8 * fVar23;
      local_2b4 = local_2b4 * fVar23;
      local_328 = CONCAT44(local_2b8,param_6._0_4_);
    }
    if (local_2b8 * local_2b8 + param_6._0_4_ * param_6._0_4_ + local_2b4 * local_2b4 < 0.5) {
      param_6._0_4_ = 1.0;
      local_2b8 = 0.0;
      local_2b4 = 0.0;
      local_328 = 0x3f800000;
    }
    bVar2 = *(byte *)(param_1 + 0x1ec);
    bVar4 = true;
    local_320 = local_2b4;
    if (bVar2 == 0) {
      local_338 = 0x3f800000;
      uStack_330 = (ulonglong)(uint)uStack_330._4_4_ << 0x20;
      pfVar8 = (float *)FQuat::FindBetweenNormals(&local_278,&local_338,&local_328);
      param_4 = param_4 * 0.5;
      fVar60 = *pfVar8;
      fVar10 = pfVar8[1];
      fVar23 = pfVar8[2];
      fVar65 = pfVar8[3];
      if (param_4 < 0.0) {
        fVar30 = param_4 * 0.15915494 - 0.5;
      }
      else {
        fVar30 = param_4 * 0.15915494 + 0.5;
      }
      param_4 = param_4 - (float)(int)fVar30 * 6.2831855;
      if (param_4 <= 1.5707964) {
        if (-1.5707964 <= param_4) {
          fVar12 = 1.0;
        }
        else {
          param_4 = -3.1415927 - param_4;
        }
      }
      else {
        param_4 = 3.1415927 - param_4;
      }
      fVar16 = param_4 * param_4;
      param_4 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
                  0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * param_4;
      fVar37 = param_4 * (float)local_328;
      fVar30 = param_4 * local_328._4_4_;
      param_4 = param_4 * local_320;
      fVar12 = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
                 0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fVar12;
      fVar16 = fVar65 * fVar37 * _DAT_146b04990 + fVar12 * fVar60 + fVar23 * fVar30 * _DAT_146b04980
               + fVar10 * param_4 * _DAT_146b04970;
      fVar18 = fVar23 * fVar37 * fRam0000000146b04994 + fVar12 * fVar10 +
               fVar65 * fVar30 * fRam0000000146b04984 + fVar60 * param_4 * fRam0000000146b04974;
      fVar20 = fVar10 * fVar37 * fRam0000000146b04998 + fVar12 * fVar23 +
               fVar60 * fVar30 * fRam0000000146b04988 + fVar65 * param_4 * fRam0000000146b04978;
      fVar60 = fVar60 * fVar37 * fRam0000000146b0499c + fVar12 * fVar65 +
               fVar10 * fVar30 * fRam0000000146b0498c + fVar23 * param_4 * fRam0000000146b0497c;
    }
    else {
      if ((byte)(bVar2 - 9) < 4) {
        if (((0.0001 < ABS(fVar60)) || (0.0001 < ABS(fVar30))) || (0.0001 < ABS(local_310))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        local_338 = 0x3f800000;
        uStack_330._0_4_ = 0.0;
        pfVar8 = (float *)FQuat::FindBetweenNormals(&local_1a8,&local_338,&local_318);
        local_308 = *pfVar8;
        param_9._0_4_ = pfVar8[1];
        param_14._0_4_ = pfVar8[2];
        fStack_2fc = pfVar8[3];
        fVar60 = (float)local_328;
        fVar10 = local_328._4_4_;
        fVar12 = local_320;
        fVar23 = local_318._4_4_;
        fVar65 = local_310;
        fVar30 = (float)local_318;
        fStack_304 = param_9._0_4_;
        fStack_300 = param_14._0_4_;
        local_2a8 = local_308;
        local_298 = fStack_2fc;
      }
      else if (bVar2 < 5) {
        local_338 = 0x3f800000;
        uStack_330._0_4_ = 0.0;
        pfVar8 = (float *)FQuat::FindBetweenNormals(&local_1a8,&local_338,&local_328);
        fVar12 = 1.0;
        fVar60 = 0.0;
        fVar10 = 0.0;
        local_308 = *pfVar8;
        param_9._0_4_ = pfVar8[1];
        param_14._0_4_ = pfVar8[2];
        fStack_2fc = pfVar8[3];
        local_294 = local_320;
        fVar23 = local_328._4_4_;
        fVar65 = local_320;
        fVar30 = (float)local_328;
        fStack_304 = param_9._0_4_;
        fStack_300 = param_14._0_4_;
        local_2a8 = local_308;
        local_298 = fStack_2fc;
      }
      else {
        local_1d8 = local_2f8._4_4_;
        local_294 = local_2f0;
        fVar60 = param_6._0_4_;
        fVar10 = local_2b8;
        fVar12 = local_2b4;
        fVar23 = local_2f8._4_4_;
        fVar65 = local_2f0;
        fVar30 = (float)local_2f8;
        if (cVar1 != '\0') {
          uStack_330._4_4_ = fStack_25c * 0.0;
          local_218 = fStack_1dc;
          fStack_214 = fStack_27c;
          fStack_210 = fStack_1fc;
          fStack_20c = fStack_25c;
          local_228 = fStack_1e0;
          fStack_224 = fStack_280;
          fStack_220 = fStack_200;
          fStack_21c = fStack_260;
          local_238 = (float)local_1e8._4_4_;
          fStack_234 = fStack_284;
          fStack_230 = fStack_204;
          fStack_22c = fStack_264;
          local_248 = (float)local_1e8._0_4_;
          fStack_244 = local_288;
          fStack_240 = local_208;
          fStack_23c = local_268;
          fVar60 = fStack_1dc * 0.0 + local_2b4 * fStack_1e0 +
                   local_2b8 * (float)local_1e8._4_4_ + param_6._0_4_ * (float)local_1e8._0_4_;
          fVar10 = fStack_27c * 0.0 + local_2b4 * fStack_280 +
                   local_2b8 * fStack_284 + param_6._0_4_ * local_288;
          fVar12 = fStack_1fc * 0.0 + local_2b4 * fStack_200 +
                   local_2b8 * fStack_204 + param_6._0_4_ * local_208;
        }
      }
      fVar37 = fStack_2fc;
      fVar20 = fStack_300;
      fVar18 = fStack_304;
      fVar16 = local_308;
      fVar11 = fVar10 * fVar23 + fVar60 * fVar30 + fVar12 * fVar65;
      fVar60 = fVar60 - fVar11 * fVar30;
      fStack_2e0 = fVar12 - fVar11 * fVar65;
      fVar10 = fVar10 - fVar11 * fVar23;
      local_2e8 = CONCAT44(fVar10,fVar60);
      fVar12 = fVar10 * fVar10 + fVar60 * fVar60 + fStack_2e0 * fStack_2e0;
      if (1e-08 < fVar12) {
        auVar25 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar11 = auVar25._0_4_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar12 * 0.5 * fVar11 * fVar11);
        fVar11 = fVar11 + fVar11 * (0.5 - fVar12 * 0.5 * fVar11 * fVar11);
        fStack_2e0 = fStack_2e0 * fVar11;
        local_2e8 = CONCAT44(fVar10 * fVar11,fVar60 * fVar11);
      }
      fVar10 = param_9._0_4_ * local_res8 - param_14._0_4_ * local_res10;
      fVar10 = fVar10 + fVar10;
      fVar12 = param_14._0_4_ * local_res18 - local_2a8 * local_res8;
      fVar60 = local_2a8 * local_res10 - param_9._0_4_ * local_res18;
      fVar12 = fVar12 + fVar12;
      fVar60 = fVar60 + fVar60;
      local_338 = CONCAT44((fVar10 * param_14._0_4_ - fVar60 * local_2a8) +
                           fVar12 * local_298 + local_res10,
                           (fVar60 * param_9._0_4_ - fVar12 * param_14._0_4_) +
                           fVar10 * local_298 + local_res18);
      uStack_330 = CONCAT44(uStack_330._4_4_,
                            (fVar12 * local_2a8 - fVar10 * param_9._0_4_) +
                            fVar60 * local_298 + local_res8);
      FQuat::FindBetweenNormals(&local_278,&local_338,&local_2e8);
      local_308 = fVar37 * local_278 * _DAT_146b04990 + fStack_26c * fVar16 +
                  fVar20 * fStack_274 * _DAT_146b04980 + fVar18 * fStack_270 * _DAT_146b04970;
      fStack_304 = fVar20 * local_278 * fRam0000000146b04994 + fStack_26c * fVar18 +
                   fVar37 * fStack_274 * fRam0000000146b04984 +
                   fVar16 * fStack_270 * fRam0000000146b04974;
      fStack_300 = fVar18 * local_278 * fRam0000000146b04998 + fStack_26c * fVar20 +
                   fVar16 * fStack_274 * fRam0000000146b04988 +
                   fVar37 * fStack_270 * fRam0000000146b04978;
      fStack_2fc = fVar16 * local_278 * fRam0000000146b0499c + fStack_26c * fVar37 +
                   fVar18 * fStack_274 * fRam0000000146b0498c +
                   fVar20 * fStack_270 * fRam0000000146b0497c;
      if ((*(byte *)(param_1 + 0x1e8) & 8) == 0) {
        param_4 = param_4 * 0.5;
        if (param_4 < 0.0) {
          fVar60 = param_4 * 0.15915494 - 0.5;
        }
        else {
          fVar60 = param_4 * 0.15915494 + 0.5;
        }
        param_4 = param_4 - (float)(int)fVar60 * 6.2831855;
        if (param_4 <= 1.5707964) {
          if (param_4 < -1.5707964) {
            fVar60 = -3.1415927;
            goto LAB_1425de32b;
          }
          fVar10 = 1.0;
        }
        else {
          fVar60 = 3.1415927;
LAB_1425de32b:
          fVar10 = -1.0;
          param_4 = fVar60 - param_4;
        }
        fVar12 = param_4 * param_4;
        param_4 = (((((2.7525562e-06 - fVar12 * 2.3889859e-08) * fVar12 - 0.00019840874) * fVar12 +
                    0.008333331) * fVar12 - 0.16666667) * fVar12 + 1.0) * param_4;
        fVar23 = (float)local_328 * param_4;
        fVar60 = local_328._4_4_ * param_4;
        param_4 = local_320 * param_4;
        fVar10 = (((((2.4760495e-05 - fVar12 * 2.6051615e-07) * fVar12 - 0.0013888378) * fVar12 +
                   0.041666638) * fVar12 - 0.5) * fVar12 + 1.0) * fVar10;
        local_2c8 = CONCAT44(fStack_300 * fVar23 * fRam0000000146b04994 + fVar10 * fStack_304 +
                             fStack_2fc * fVar60 * fRam0000000146b04984 +
                             local_308 * param_4 * fRam0000000146b04974,
                             fStack_2fc * fVar23 * _DAT_146b04990 + fVar10 * local_308 +
                             fStack_300 * fVar60 * _DAT_146b04980 +
                             fStack_304 * param_4 * _DAT_146b04970);
        uStack_2c0 = CONCAT44(local_308 * fVar23 * fRam0000000146b0499c + fVar10 * fStack_2fc +
                              fStack_304 * fVar60 * fRam0000000146b0498c +
                              fStack_300 * param_4 * fRam0000000146b0497c,
                              fStack_304 * fVar23 * fRam0000000146b04998 + fVar10 * fStack_300 +
                              local_308 * fVar60 * fRam0000000146b04988 +
                              fStack_2fc * param_4 * fRam0000000146b04978);
        goto LAB_1425ddfc8;
      }
      if (!bVar4) goto LAB_1425ddfc8;
      param_4 = param_4 * 0.5;
      if (param_4 < 0.0) {
        fVar60 = param_4 * 0.15915494 - 0.5;
      }
      else {
        fVar60 = param_4 * 0.15915494 + 0.5;
      }
      param_4 = param_4 - (float)(int)fVar60 * 6.2831855;
      if (param_4 <= 1.5707964) {
        if (param_4 < -1.5707964) {
          fVar60 = -3.1415927;
          goto LAB_1425dde60;
        }
        fVar10 = 1.0;
      }
      else {
        fVar60 = 3.1415927;
LAB_1425dde60:
        fVar10 = -1.0;
        param_4 = fVar60 - param_4;
      }
      fVar60 = param_4 * param_4;
      param_4 = (((((2.7525562e-06 - fVar60 * 2.3889859e-08) * fVar60 - 0.00019840874) * fVar60 +
                  0.008333331) * fVar60 - 0.16666667) * fVar60 + 1.0) * param_4;
      fVar30 = fVar30 * param_4;
      fVar23 = fVar23 * param_4;
      fVar65 = fVar65 * param_4;
      fVar10 = (((((2.4760495e-05 - fVar60 * 2.6051615e-07) * fVar60 - 0.0013888378) * fVar60 +
                 0.041666638) * fVar60 - 0.5) * fVar60 + 1.0) * fVar10;
      local_338 = CONCAT44(fVar23,fVar30);
      uStack_330 = CONCAT44(fVar10,fVar65);
      fVar16 = fVar30 * fStack_2fc * _DAT_146b04990 + fVar10 * local_308 +
               fVar23 * fStack_300 * _DAT_146b04980 + fVar65 * fStack_304 * _DAT_146b04970;
      fVar18 = fVar30 * fStack_300 * fRam0000000146b04994 + fVar10 * fStack_304 +
               fVar23 * fStack_2fc * fRam0000000146b04984 +
               fVar65 * local_308 * fRam0000000146b04974;
      fVar20 = fVar30 * fStack_304 * fRam0000000146b04998 + fVar10 * fStack_300 +
               fVar23 * local_308 * fRam0000000146b04988 +
               fVar65 * fStack_2fc * fRam0000000146b04978;
      fVar60 = fVar30 * local_308 * fRam0000000146b0499c + fVar10 * fStack_2fc +
               fVar23 * fStack_304 * fRam0000000146b0498c +
               fVar65 * fStack_300 * fRam0000000146b0497c;
    }
    local_2c8 = CONCAT44(fVar18,fVar16);
    uStack_2c0 = CONCAT44(fVar60,fVar20);
LAB_1425ddfc8:
    fVar60 = local_1c8;
    fVar30 = fStack_1c4;
    fVar16 = fStack_1c0;
    fVar18 = fStack_1bc;
    fVar10 = local_288;
    fVar12 = fStack_284;
    fVar23 = fStack_280;
    fVar65 = fStack_27c;
    fVar20 = (float)local_1b8;
    fVar37 = local_1b8._4_4_;
    fVar11 = (float)uStack_1b0;
    fVar42 = uStack_1b0._4_4_;
    fVar17 = local_258;
    fVar19 = fStack_254;
    fVar21 = fStack_250;
    fVar22 = fStack_24c;
    fVar24 = (float)local_2d8;
    fVar26 = local_2d8._4_4_;
    fVar27 = (float)uStack_2d0;
    fVar28 = uStack_2d0._4_4_;
  }
  if ((*(uint *)(param_1 + 0x1e8) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x1e8) & 6) == 0) {
      fVar54 = (float)uStack_194 * fVar20 + local_198 * fVar60 + uStack_194._4_4_ * fVar17 +
               (float)uStack_18c * fVar24;
      fVar56 = (float)uStack_194 * fVar37 + local_198 * fVar30 + uStack_194._4_4_ * fVar19 +
               (float)uStack_18c * fVar26;
      fVar58 = (float)uStack_194 * fVar11 + local_198 * fVar16 + uStack_194._4_4_ * fVar21 +
               (float)uStack_18c * fVar27;
      fVar44 = (float)uStack_194 * fVar42 + local_198 * fVar18 + uStack_194._4_4_ * fVar22 +
               (float)uStack_18c * fVar28;
      fVar13 = fStack_184 * fVar20 + uStack_18c._4_4_ * fVar60 + (float)uStack_180 * fVar17 +
               uStack_180._4_4_ * fVar24;
      fVar14 = fStack_184 * fVar37 + uStack_18c._4_4_ * fVar30 + (float)uStack_180 * fVar19 +
               uStack_180._4_4_ * fVar26;
      fVar15 = fStack_184 * fVar11 + uStack_18c._4_4_ * fVar16 + (float)uStack_180 * fVar21 +
               uStack_180._4_4_ * fVar27;
      fVar52 = fStack_184 * fVar42 + uStack_18c._4_4_ * fVar18 + (float)uStack_180 * fVar22 +
               uStack_180._4_4_ * fVar28;
      fVar29 = local_178._4_4_ * fVar20 + (float)local_178 * fVar60 + fStack_170 * fVar17 +
               fStack_16c * fVar24;
      fVar31 = local_178._4_4_ * fVar37 + (float)local_178 * fVar30 + fStack_170 * fVar19 +
               fStack_16c * fVar26;
      fVar32 = local_178._4_4_ * fVar11 + (float)local_178 * fVar16 + fStack_170 * fVar21 +
               fStack_16c * fVar27;
      fVar34 = local_178._4_4_ * fVar42 + (float)local_178 * fVar18 + fStack_170 * fVar22 +
               fStack_16c * fVar28;
      fVar20 = fVar20 * 0.0 + fVar60 * 0.0 + fVar17 * 0.0 + fVar24 * 1.0;
      fVar37 = fVar37 * 0.0 + fVar30 * 0.0 + fVar19 * 0.0 + fVar26 * 1.0;
      fVar11 = fVar11 * 0.0 + fVar16 * 0.0 + fVar21 * 0.0 + fVar27 * 1.0;
      fVar42 = fVar42 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0 + fVar28 * 1.0;
      fVar60 = fVar56 * 0.0 + fVar54 * 1.0 + fVar58 * 0.0 + fVar44 * local_128;
      fVar30 = fVar56 * 1.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_124;
      fVar16 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 1.0 + fVar44 * fStack_120;
      fVar18 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_11c;
      goto LAB_1425df545;
    }
    pfVar8 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_108,&local_2c8);
    fVar13 = *pfVar8;
    fVar14 = pfVar8[1];
    fVar15 = pfVar8[2];
    fVar52 = pfVar8[3];
    fVar54 = pfVar8[4];
    fVar56 = pfVar8[5];
    fVar58 = pfVar8[6];
    fVar44 = pfVar8[7];
    fVar29 = pfVar8[8];
    fVar31 = pfVar8[9];
    fVar32 = pfVar8[10];
    fVar34 = pfVar8[0xb];
    fVar33 = pfVar8[0xc];
    fVar36 = pfVar8[0xd];
    fVar39 = pfVar8[0xe];
    fVar41 = pfVar8[0xf];
    fVar47 = local_198 * fVar13 + (float)uStack_194 * fVar54 + uStack_194._4_4_ * fVar29 +
             (float)uStack_18c * fVar33;
    fVar49 = local_198 * fVar14 + (float)uStack_194 * fVar56 + uStack_194._4_4_ * fVar31 +
             (float)uStack_18c * fVar36;
    fVar51 = local_198 * fVar15 + (float)uStack_194 * fVar58 + uStack_194._4_4_ * fVar32 +
             (float)uStack_18c * fVar39;
    fVar53 = local_198 * fVar52 + (float)uStack_194 * fVar44 + uStack_194._4_4_ * fVar34 +
             (float)uStack_18c * fVar41;
    fVar38 = uStack_18c._4_4_ * fVar13 + fStack_184 * fVar54 + (float)uStack_180 * fVar29 +
             uStack_180._4_4_ * fVar33;
    fVar40 = uStack_18c._4_4_ * fVar14 + fStack_184 * fVar56 + (float)uStack_180 * fVar31 +
             uStack_180._4_4_ * fVar36;
    fVar43 = uStack_18c._4_4_ * fVar15 + fStack_184 * fVar58 + (float)uStack_180 * fVar32 +
             uStack_180._4_4_ * fVar39;
    fVar45 = uStack_18c._4_4_ * fVar52 + fStack_184 * fVar44 + (float)uStack_180 * fVar34 +
             uStack_180._4_4_ * fVar41;
    fVar46 = (float)local_178 * fVar13 + local_178._4_4_ * fVar54 + fStack_170 * fVar29 +
             fStack_16c * fVar33;
    fVar48 = (float)local_178 * fVar14 + local_178._4_4_ * fVar56 + fStack_170 * fVar31 +
             fStack_16c * fVar36;
    fVar50 = (float)local_178 * fVar15 + local_178._4_4_ * fVar58 + fStack_170 * fVar32 +
             fStack_16c * fVar39;
    fVar35 = (float)local_178 * fVar52 + local_178._4_4_ * fVar44 + fStack_170 * fVar34 +
             fStack_16c * fVar41;
    fVar13 = fVar13 * 0.0 + fVar54 * 0.0 + fVar29 * 0.0 + fVar33 * 1.0;
    fVar14 = fVar14 * 0.0 + fVar56 * 0.0 + fVar31 * 0.0 + fVar36 * 1.0;
    fVar15 = fVar15 * 0.0 + fVar58 * 0.0 + fVar32 * 0.0 + fVar39 * 1.0;
    fVar52 = fVar52 * 0.0 + fVar44 * 0.0 + fVar34 * 0.0 + fVar41 * 1.0;
    fVar54 = fVar47 * fVar60 + fVar49 * fVar20 + fVar51 * fVar17 + fVar53 * fVar24;
    fVar56 = fVar47 * fVar30 + fVar49 * fVar37 + fVar51 * fVar19 + fVar53 * fVar26;
    fVar58 = fVar47 * fVar16 + fVar49 * fVar11 + fVar51 * fVar21 + fVar53 * fVar27;
    fVar44 = fVar47 * fVar18 + fVar49 * fVar42 + fVar51 * fVar22 + fVar53 * fVar28;
    fVar33 = fVar40 * fVar20 + fVar38 * fVar60 + fVar43 * fVar17 + fVar45 * fVar24;
    fVar36 = fVar40 * fVar37 + fVar38 * fVar30 + fVar43 * fVar19 + fVar45 * fVar26;
    fVar39 = fVar40 * fVar11 + fVar38 * fVar16 + fVar43 * fVar21 + fVar45 * fVar27;
    fVar41 = fVar40 * fVar42 + fVar38 * fVar18 + fVar43 * fVar22 + fVar45 * fVar28;
    fVar29 = fVar48 * fVar20 + fVar46 * fVar60 + fVar50 * fVar17 + fVar35 * fVar24;
    fVar31 = fVar48 * fVar37 + fVar46 * fVar30 + fVar50 * fVar19 + fVar35 * fVar26;
    fVar32 = fVar48 * fVar11 + fVar46 * fVar16 + fVar50 * fVar21 + fVar35 * fVar27;
    fVar34 = fVar48 * fVar42 + fVar46 * fVar18 + fVar50 * fVar22 + fVar35 * fVar28;
    fVar20 = fVar14 * fVar20 + fVar13 * fVar60 + fVar15 * fVar17 + fVar52 * fVar24;
    fVar37 = fVar14 * fVar37 + fVar13 * fVar30 + fVar15 * fVar19 + fVar52 * fVar26;
    fVar11 = fVar14 * fVar11 + fVar13 * fVar16 + fVar15 * fVar21 + fVar52 * fVar27;
    fVar42 = fVar14 * fVar42 + fVar13 * fVar18 + fVar15 * fVar22 + fVar52 * fVar28;
    fVar60 = fVar56 * 0.0 + fVar54 * 1.0 + fVar58 * 0.0 + fVar44 * local_128;
    fVar30 = fVar56 * 1.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_124;
    fVar16 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 1.0 + fVar44 * fStack_120;
    fVar18 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_11c;
    fVar24 = fVar36 * 0.0 + fVar33 * 1.0 + fVar39 * 0.0 + fVar41 * local_128;
    fVar26 = fVar36 * 1.0 + fVar33 * 0.0 + fVar39 * 0.0 + fVar41 * fStack_124;
    fVar27 = fVar36 * 0.0 + fVar33 * 0.0 + fVar39 * 1.0 + fVar41 * fStack_120;
    fVar28 = fVar36 * 0.0 + fVar33 * 0.0 + fVar39 * 0.0 + fVar41 * fStack_11c;
    fVar17 = fVar31 * 0.0 + fVar29 * 1.0 + fVar32 * 0.0;
    fVar19 = fVar31 * 1.0 + fVar29 * 0.0 + fVar32 * 0.0;
    fVar21 = fVar31 * 0.0 + fVar29 * 0.0 + fVar32 * 1.0;
    fVar22 = fVar31 * 0.0 + fVar29 * 0.0 + fVar32 * 0.0;
  }
  else {
    FRotator::MakeFromEuler(&local_338,param_7);
    FRotationMatrix::FRotationMatrix(&local_248,&local_338);
    if ((*(byte *)(param_1 + 0x1e8) & 6) != 0) {
      fVar35 = fStack_244 * uStack_18c._4_4_ + local_248 * local_198 + fStack_240 * (float)local_178
               + fStack_23c * 0.0;
      fVar38 = fStack_244 * fStack_184 + local_248 * (float)uStack_194 +
               fStack_240 * local_178._4_4_ + fStack_23c * 0.0;
      fVar40 = fStack_244 * (float)uStack_180 + local_248 * uStack_194._4_4_ +
               fStack_240 * fStack_170 + fStack_23c * 0.0;
      fVar43 = fStack_244 * uStack_180._4_4_ + local_248 * (float)uStack_18c +
               fStack_240 * fStack_16c + fStack_23c * 1.0;
      fVar45 = fStack_234 * uStack_18c._4_4_ + local_238 * local_198 + fStack_230 * (float)local_178
               + fStack_22c * 0.0;
      fVar47 = fStack_234 * fStack_184 + local_238 * (float)uStack_194 +
               fStack_230 * local_178._4_4_ + fStack_22c * 0.0;
      fVar49 = fStack_234 * (float)uStack_180 + local_238 * uStack_194._4_4_ +
               fStack_230 * fStack_170 + fStack_22c * 0.0;
      fVar51 = fStack_234 * uStack_180._4_4_ + local_238 * (float)uStack_18c +
               fStack_230 * fStack_16c + fStack_22c * 1.0;
      fVar53 = fStack_224 * uStack_18c._4_4_ + local_228 * local_198 + fStack_220 * (float)local_178
               + fStack_21c * 0.0;
      fVar55 = fStack_224 * fStack_184 + local_228 * (float)uStack_194 +
               fStack_220 * local_178._4_4_ + fStack_21c * 0.0;
      fVar57 = fStack_224 * (float)uStack_180 + local_228 * uStack_194._4_4_ +
               fStack_220 * fStack_170 + fStack_21c * 0.0;
      fVar59 = fStack_224 * uStack_180._4_4_ + local_228 * (float)uStack_18c +
               fStack_220 * fStack_16c + fStack_21c * 1.0;
      fVar61 = fStack_214 * uStack_18c._4_4_ + local_218 * local_198 + fStack_210 * (float)local_178
               + fStack_20c * 0.0;
      fVar62 = fStack_214 * fStack_184 + local_218 * (float)uStack_194 +
               fStack_210 * local_178._4_4_ + fStack_20c * 0.0;
      fVar63 = fStack_214 * (float)uStack_180 + local_218 * uStack_194._4_4_ +
               fStack_210 * fStack_170 + fStack_20c * 0.0;
      fVar64 = fStack_214 * uStack_180._4_4_ + local_218 * (float)uStack_18c +
               fStack_210 * fStack_16c + fStack_20c * 1.0;
      pfVar8 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_108,&local_2c8);
      fVar13 = pfVar8[4];
      fVar14 = pfVar8[5];
      fVar15 = pfVar8[6];
      fVar52 = pfVar8[7];
      fVar54 = *pfVar8;
      fVar56 = pfVar8[1];
      fVar58 = pfVar8[2];
      fVar44 = pfVar8[3];
      fVar29 = pfVar8[8];
      fVar31 = pfVar8[9];
      fVar32 = pfVar8[10];
      fVar34 = pfVar8[0xb];
      fVar33 = pfVar8[0xc];
      fVar36 = pfVar8[0xd];
      fVar39 = pfVar8[0xe];
      fVar41 = pfVar8[0xf];
      fVar46 = fVar35 * fVar54 + fVar38 * fVar13 + fVar40 * fVar29 + fVar43 * fVar33;
      fVar48 = fVar35 * fVar56 + fVar38 * fVar14 + fVar40 * fVar31 + fVar43 * fVar36;
      fVar50 = fVar35 * fVar58 + fVar38 * fVar15 + fVar40 * fVar32 + fVar43 * fVar39;
      fVar35 = fVar35 * fVar44 + fVar38 * fVar52 + fVar40 * fVar34 + fVar43 * fVar41;
      fVar38 = fVar45 * fVar54 + fVar47 * fVar13 + fVar49 * fVar29 + fVar51 * fVar33;
      fVar40 = fVar45 * fVar56 + fVar47 * fVar14 + fVar49 * fVar31 + fVar51 * fVar36;
      fVar43 = fVar45 * fVar58 + fVar47 * fVar15 + fVar49 * fVar32 + fVar51 * fVar39;
      fVar45 = fVar45 * fVar44 + fVar47 * fVar52 + fVar49 * fVar34 + fVar51 * fVar41;
      fVar47 = fVar53 * fVar54 + fVar55 * fVar13 + fVar57 * fVar29 + fVar59 * fVar33;
      fVar49 = fVar53 * fVar56 + fVar55 * fVar14 + fVar57 * fVar31 + fVar59 * fVar36;
      fVar51 = fVar53 * fVar58 + fVar55 * fVar15 + fVar57 * fVar32 + fVar59 * fVar39;
      fVar53 = fVar53 * fVar44 + fVar55 * fVar52 + fVar57 * fVar34 + fVar59 * fVar41;
      fVar33 = fVar61 * fVar54 + fVar62 * fVar13 + fVar63 * fVar29 + fVar64 * fVar33;
      fVar36 = fVar61 * fVar56 + fVar62 * fVar14 + fVar63 * fVar31 + fVar64 * fVar36;
      fVar39 = fVar61 * fVar58 + fVar62 * fVar15 + fVar63 * fVar32 + fVar64 * fVar39;
      fVar41 = fVar61 * fVar44 + fVar62 * fVar52 + fVar63 * fVar34 + fVar64 * fVar41;
      fVar54 = fVar48 * fVar20 + fVar46 * fVar60 + fVar50 * fVar17 + fVar35 * fVar24;
      fVar56 = fVar48 * fVar37 + fVar46 * fVar30 + fVar50 * fVar19 + fVar35 * fVar26;
      fVar58 = fVar48 * fVar11 + fVar46 * fVar16 + fVar50 * fVar21 + fVar35 * fVar27;
      fVar44 = fVar48 * fVar42 + fVar46 * fVar18 + fVar50 * fVar22 + fVar35 * fVar28;
      fVar13 = fVar40 * fVar20 + fVar38 * fVar60 + fVar43 * fVar17 + fVar45 * fVar24;
      fVar14 = fVar40 * fVar37 + fVar38 * fVar30 + fVar43 * fVar19 + fVar45 * fVar26;
      fVar15 = fVar40 * fVar11 + fVar38 * fVar16 + fVar43 * fVar21 + fVar45 * fVar27;
      fVar52 = fVar40 * fVar42 + fVar38 * fVar18 + fVar43 * fVar22 + fVar45 * fVar28;
      fVar29 = fVar49 * fVar20 + fVar47 * fVar60 + fVar51 * fVar17 + fVar53 * fVar24;
      fVar31 = fVar49 * fVar37 + fVar47 * fVar30 + fVar51 * fVar19 + fVar53 * fVar26;
      fVar32 = fVar49 * fVar11 + fVar47 * fVar16 + fVar51 * fVar21 + fVar53 * fVar27;
      fVar34 = fVar49 * fVar42 + fVar47 * fVar18 + fVar51 * fVar22 + fVar53 * fVar28;
      fVar20 = fVar36 * fVar20 + fVar33 * fVar60 + fVar39 * fVar17 + fVar41 * fVar24;
      fVar37 = fVar36 * fVar37 + fVar33 * fVar30 + fVar39 * fVar19 + fVar41 * fVar26;
      fVar11 = fVar36 * fVar11 + fVar33 * fVar16 + fVar39 * fVar21 + fVar41 * fVar27;
      fVar42 = fVar36 * fVar42 + fVar33 * fVar18 + fVar39 * fVar22 + fVar41 * fVar28;
      fVar60 = fVar56 * 0.0 + fVar54 * 1.0 + fVar58 * 0.0 + fVar44 * local_128;
      fVar30 = fVar56 * 1.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_124;
      fVar16 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 1.0 + fVar44 * fStack_120;
      fVar18 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_11c;
LAB_1425df545:
      fVar24 = fVar14 * 0.0 + fVar13 * 1.0 + fVar15 * 0.0 + fVar52 * local_128;
      fVar26 = fVar14 * 1.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar52 * fStack_124;
      fVar27 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 1.0 + fVar52 * fStack_120;
      fVar28 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar52 * fStack_11c;
      fVar17 = fVar31 * 0.0 + fVar29 * 1.0 + fVar32 * 0.0 + fVar34 * local_128;
      fVar19 = fVar31 * 1.0 + fVar29 * 0.0 + fVar32 * 0.0 + fVar34 * fStack_124;
      fVar21 = fVar31 * 0.0 + fVar29 * 0.0 + fVar32 * 1.0 + fVar34 * fStack_120;
      fVar22 = fVar31 * 0.0 + fVar29 * 0.0 + fVar32 * 0.0 + fVar34 * fStack_11c;
      fVar13 = fVar37 * 0.0 + fVar20 * 1.0 + fVar11 * 0.0 + fVar42 * local_128;
      fVar14 = fVar37 * 1.0 + fVar20 * 0.0 + fVar11 * 0.0 + fVar42 * fStack_124;
      fVar15 = fVar37 * 0.0 + fVar20 * 0.0 + fVar11 * 1.0 + fVar42 * fStack_120;
      fVar20 = fVar37 * 0.0 + fVar20 * 0.0 + fVar11 * 0.0 + fVar42 * fStack_11c;
      goto LAB_1425dfa09;
    }
    fVar52 = fStack_244 * uStack_18c._4_4_ + local_248 * local_198 + fStack_240 * (float)local_178 +
             fStack_23c * 0.0;
    fVar54 = fStack_244 * fStack_184 + local_248 * (float)uStack_194 + fStack_240 * local_178._4_4_
             + fStack_23c * 0.0;
    fVar56 = fStack_244 * (float)uStack_180 + local_248 * uStack_194._4_4_ + fStack_240 * fStack_170
             + fStack_23c * 0.0;
    fVar58 = fStack_244 * uStack_180._4_4_ + local_248 * (float)uStack_18c + fStack_240 * fStack_16c
             + fStack_23c * 1.0;
    fVar44 = fStack_234 * uStack_18c._4_4_ + local_238 * local_198 + fStack_230 * (float)local_178 +
             fStack_22c * 0.0;
    fVar46 = fStack_234 * fStack_184 + local_238 * (float)uStack_194 + fStack_230 * local_178._4_4_
             + fStack_22c * 0.0;
    fVar48 = fStack_234 * (float)uStack_180 + local_238 * uStack_194._4_4_ + fStack_230 * fStack_170
             + fStack_22c * 0.0;
    fVar50 = fStack_234 * uStack_180._4_4_ + local_238 * (float)uStack_18c + fStack_230 * fStack_16c
             + fStack_22c * 1.0;
    fVar34 = fStack_224 * uStack_18c._4_4_ + local_228 * local_198 + fStack_220 * (float)local_178 +
             fStack_21c * 0.0;
    fVar36 = fStack_224 * fStack_184 + local_228 * (float)uStack_194 + fStack_220 * local_178._4_4_
             + fStack_21c * 0.0;
    fVar39 = fStack_224 * (float)uStack_180 + local_228 * uStack_194._4_4_ + fStack_220 * fStack_170
             + fStack_21c * 0.0;
    fVar41 = fStack_224 * uStack_180._4_4_ + local_228 * (float)uStack_18c + fStack_220 * fStack_16c
             + fStack_21c * 1.0;
    fVar29 = fStack_214 * uStack_18c._4_4_ + local_218 * local_198 + fStack_210 * (float)local_178 +
             fStack_20c * 0.0;
    fVar31 = fStack_214 * fStack_184 + local_218 * (float)uStack_194 + fStack_210 * local_178._4_4_
             + fStack_20c * 0.0;
    fVar32 = fStack_214 * (float)uStack_180 + local_218 * uStack_194._4_4_ + fStack_210 * fStack_170
             + fStack_20c * 0.0;
    fVar33 = fStack_214 * uStack_180._4_4_ + local_218 * (float)uStack_18c + fStack_210 * fStack_16c
             + fStack_20c * 1.0;
    fVar13 = fVar52 * fVar60 + fVar54 * fVar20 + fVar56 * fVar17 + fVar58 * fVar24;
    fVar14 = fVar52 * fVar30 + fVar54 * fVar37 + fVar56 * fVar19 + fVar58 * fVar26;
    fVar15 = fVar52 * fVar16 + fVar54 * fVar11 + fVar56 * fVar21 + fVar58 * fVar27;
    fVar52 = fVar52 * fVar18 + fVar54 * fVar42 + fVar56 * fVar22 + fVar58 * fVar28;
    fVar54 = fVar46 * fVar20 + fVar44 * fVar60 + fVar48 * fVar17 + fVar50 * fVar24;
    fVar56 = fVar46 * fVar37 + fVar44 * fVar30 + fVar48 * fVar19 + fVar50 * fVar26;
    fVar58 = fVar46 * fVar11 + fVar44 * fVar16 + fVar48 * fVar21 + fVar50 * fVar27;
    fVar44 = fVar46 * fVar42 + fVar44 * fVar18 + fVar48 * fVar22 + fVar50 * fVar28;
    fVar46 = fVar36 * fVar20 + fVar34 * fVar60 + fVar39 * fVar17 + fVar41 * fVar24;
    fVar48 = fVar36 * fVar37 + fVar34 * fVar30 + fVar39 * fVar19 + fVar41 * fVar26;
    fVar50 = fVar36 * fVar11 + fVar34 * fVar16 + fVar39 * fVar21 + fVar41 * fVar27;
    fVar34 = fVar36 * fVar42 + fVar34 * fVar18 + fVar39 * fVar22 + fVar41 * fVar28;
    fVar20 = fVar31 * fVar20 + fVar29 * fVar60 + fVar32 * fVar17 + fVar33 * fVar24;
    fVar37 = fVar31 * fVar37 + fVar29 * fVar30 + fVar32 * fVar19 + fVar33 * fVar26;
    fVar11 = fVar31 * fVar11 + fVar29 * fVar16 + fVar32 * fVar21 + fVar33 * fVar27;
    fVar42 = fVar31 * fVar42 + fVar29 * fVar18 + fVar32 * fVar22 + fVar33 * fVar28;
    fVar60 = fVar14 * 0.0 + fVar13 * 1.0 + fVar15 * 0.0 + fVar52 * local_128;
    fVar30 = fVar14 * 1.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar52 * fStack_124;
    fVar16 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 1.0 + fVar52 * fStack_120;
    fVar18 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar52 * fStack_11c;
    fVar24 = fVar56 * 0.0 + fVar54 * 1.0 + fVar58 * 0.0 + fVar44 * local_128;
    fVar26 = fVar56 * 1.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_124;
    fVar27 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 1.0 + fVar44 * fStack_120;
    fVar28 = fVar56 * 0.0 + fVar54 * 0.0 + fVar58 * 0.0 + fVar44 * fStack_11c;
    fVar17 = fVar48 * 0.0 + fVar46 * 1.0 + fVar50 * 0.0;
    fVar19 = fVar48 * 1.0 + fVar46 * 0.0 + fVar50 * 0.0;
    fVar21 = fVar48 * 0.0 + fVar46 * 0.0 + fVar50 * 1.0;
    fVar22 = fVar48 * 0.0 + fVar46 * 0.0 + fVar50 * 0.0;
  }
  fVar17 = fVar17 + fVar34 * local_128;
  fVar19 = fVar19 + fVar34 * fStack_124;
  fVar21 = fVar21 + fVar34 * fStack_120;
  fVar22 = fVar22 + fVar34 * fStack_11c;
  fVar13 = fVar37 * 0.0 + fVar20 * 1.0 + fVar11 * 0.0 + fVar42 * local_128;
  fVar14 = fVar37 * 1.0 + fVar20 * 0.0 + fVar11 * 0.0 + fVar42 * fStack_124;
  fVar15 = fVar37 * 0.0 + fVar20 * 0.0 + fVar11 * 1.0 + fVar42 * fStack_120;
  fVar20 = fVar37 * 0.0 + fVar20 * 0.0 + fVar11 * 0.0 + fVar42 * fStack_11c;
LAB_1425dfa09:
  *pfVar6 = fVar60;
  pfVar6[1] = fVar30;
  pfVar6[2] = fVar16;
  pfVar6[3] = fVar18;
  pfVar6[4] = fVar24;
  pfVar6[5] = fVar26;
  pfVar6[6] = fVar27;
  pfVar6[7] = fVar28;
  pfVar6[8] = fVar17;
  pfVar6[9] = fVar19;
  pfVar6[10] = fVar21;
  pfVar6[0xb] = fVar22;
  pfVar6[0xc] = fVar13;
  pfVar6[0xd] = fVar14;
  pfVar6[0xe] = fVar15;
  pfVar6[0xf] = fVar20;
  fVar60 = *(float *)(param_10 + 1);
  local_2f8._0_4_ = (float)*param_10;
  local_2f8._4_4_ = (float)((ulonglong)*param_10 >> 0x20);
  if (*(char *)(param_1 + 0xec) == '\0') {
    fVar16 = (float)local_2f8 * (float)local_1e8._4_4_;
    fVar18 = (float)local_2f8 * fStack_1e0;
    fVar30 = local_2f8._4_4_ * fVar23;
    local_2f8._0_4_ =
         local_268 * 0.0 + fVar60 * local_208 +
         local_2f8._4_4_ * fVar10 + (float)local_2f8 * (float)local_1e8._0_4_;
    local_2f8._4_4_ = fStack_264 * 0.0 + fVar60 * fStack_204 + local_2f8._4_4_ * fVar12 + fVar16;
    fVar60 = fStack_260 * 0.0 + fVar60 * fStack_200 + fVar30 + fVar18;
  }
  fVar30 = pfVar6[4];
  fVar16 = pfVar6[5];
  fVar18 = pfVar6[6];
  fVar20 = pfVar6[7];
  fVar37 = fVar16 * 0.0 + fVar30 * 1.0 + fVar18 * 0.0 + fVar20 * (float)local_2f8;
  fVar11 = fVar16 * 1.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * local_2f8._4_4_;
  fVar42 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 1.0 + fVar20 * fVar60;
  fVar17 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * 1.0;
  fVar30 = pfVar6[8];
  fVar16 = pfVar6[9];
  fVar18 = pfVar6[10];
  fVar20 = pfVar6[0xb];
  pfVar6[4] = fVar37;
  pfVar6[5] = fVar11;
  pfVar6[6] = fVar42;
  pfVar6[7] = fVar17;
  fVar19 = fVar16 * 0.0 + fVar30 * 1.0 + fVar18 * 0.0 + fVar20 * (float)local_2f8;
  fVar21 = fVar16 * 1.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * local_2f8._4_4_;
  fVar22 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 1.0 + fVar20 * fVar60;
  fVar24 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * 1.0;
  fVar30 = pfVar6[0xc];
  fVar16 = pfVar6[0xd];
  fVar18 = pfVar6[0xe];
  fVar20 = pfVar6[0xf];
  pfVar6[8] = fVar19;
  pfVar6[9] = fVar21;
  pfVar6[10] = fVar22;
  pfVar6[0xb] = fVar24;
  fVar26 = fVar16 * 0.0 + fVar30 * 1.0 + fVar18 * 0.0 + fVar20 * (float)local_2f8;
  fVar27 = fVar16 * 1.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * local_2f8._4_4_;
  fVar28 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 1.0 + fVar20 * fVar60;
  fVar13 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * 1.0;
  fVar30 = *pfVar6;
  fVar16 = pfVar6[1];
  fVar18 = pfVar6[2];
  fVar20 = pfVar6[3];
  pfVar6[0xc] = fVar26;
  pfVar6[0xd] = fVar27;
  pfVar6[0xe] = fVar28;
  pfVar6[0xf] = fVar13;
  fVar14 = fVar16 * 0.0 + fVar30 * 1.0 + fVar18 * 0.0 + fVar20 * (float)local_2f8;
  fVar15 = fVar16 * 1.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * local_2f8._4_4_;
  fVar60 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 1.0 + fVar20 * fVar60;
  fVar30 = fVar16 * 0.0 + fVar30 * 0.0 + fVar18 * 0.0 + fVar20 * 1.0;
  *pfVar6 = fVar14;
  pfVar6[1] = fVar15;
  pfVar6[2] = fVar60;
  pfVar6[3] = fVar30;
  if (*(char *)(param_1 + 0xec) != '\0') {
    *pfVar6 = fVar15 * fVar10 + fVar14 * (float)local_1e8._0_4_ + fVar60 * local_208 +
              fVar30 * local_268;
    pfVar6[1] = fVar15 * fVar12 + fVar14 * (float)local_1e8._4_4_ + fVar60 * fStack_204 +
                fVar30 * fStack_264;
    pfVar6[2] = fVar15 * fVar23 + fVar14 * fStack_1e0 + fVar60 * fStack_200 + fVar30 * fStack_260;
    pfVar6[3] = fVar15 * fVar65 + fVar14 * fStack_1dc + fVar60 * fStack_1fc + fVar30 * fStack_25c;
    pfVar6[4] = fVar11 * fVar10 + fVar37 * (float)local_1e8._0_4_ + fVar42 * local_208 +
                fVar17 * local_268;
    pfVar6[5] = fVar11 * fVar12 + fVar37 * (float)local_1e8._4_4_ + fVar42 * fStack_204 +
                fVar17 * fStack_264;
    pfVar6[6] = fVar11 * fVar23 + fVar37 * fStack_1e0 + fVar42 * fStack_200 + fVar17 * fStack_260;
    pfVar6[7] = fVar11 * fVar65 + fVar37 * fStack_1dc + fVar42 * fStack_1fc + fVar17 * fStack_25c;
    pfVar6[8] = fVar21 * fVar10 + fVar19 * (float)local_1e8._0_4_ + fVar22 * local_208 +
                fVar24 * local_268;
    pfVar6[9] = fVar21 * fVar12 + fVar19 * (float)local_1e8._4_4_ + fVar22 * fStack_204 +
                fVar24 * fStack_264;
    pfVar6[10] = fVar21 * fVar23 + fVar19 * fStack_1e0 + fVar22 * fStack_200 + fVar24 * fStack_260;
    pfVar6[0xb] = fVar21 * fVar65 + fVar19 * fStack_1dc + fVar22 * fStack_1fc + fVar24 * fStack_25c;
    pfVar6[0xc] = fVar27 * fVar10 + fVar26 * (float)local_1e8._0_4_ + fVar28 * local_208 +
                  fVar13 * local_268;
    pfVar6[0xd] = fVar27 * fVar12 + fVar26 * (float)local_1e8._4_4_ + fVar28 * fStack_204 +
                  fVar13 * fStack_264;
    pfVar6[0xe] = fVar27 * fVar23 + fVar26 * fStack_1e0 + fVar28 * fStack_200 + fVar13 * fStack_260;
    pfVar6[0xf] = fVar27 * fVar65 + fVar26 * fStack_1dc + fVar28 * fStack_1fc + fVar13 * fStack_25c;
  }
  return;
}



// FUNCTION 1425dfda0 CanClientLoadObject body=176 status=ok
// SIG undefined CanClientLoadObject(void)

undefined8 FNetGUIDCache::CanClientLoadObject(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = *param_3;
  if ((iVar1 == 0) || (((longlong)iVar1 & 1U) == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (iVar1 != 1) {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = param_1 + 7;
        }
        iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
        if (iVar2 != -1) {
          do {
            piVar6 = (int *)((longlong)iVar2 * 0x40 + *param_1);
            if (*piVar6 == iVar1) {
              if (iVar2 != -1) goto LAB_1425dfe31;
              break;
            }
            iVar2 = piVar6[0xe];
          } while (iVar2 != -1);
        }
      }
      piVar6 = (int *)0x0;
LAB_1425dfe31:
      piVar5 = piVar6 + 2;
      if (piVar6 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 10) & 1) != 0)) {
        return 0;
      }
    }
  }
  else {
    lVar3 = UObjectBaseUtility::GetOutermost(param_2);
    if ((*(uint *)(lVar3 + 0x50) >> 0x11 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1425dfe50 FUN_1425dfe50 body=210 status=ok
// SIG undefined FUN_1425dfe50(void)

void FUN_1425dfe50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined **local_18;
  longlong local_10;
  
  if (*(float *)(param_1 + 0x4a4) <= 0.0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    lVar2 = UDamageType::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x4a8);
    for (lVar3 = lVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) {
        if (lVar1 != 0) {
          if (lVar1 == 0) goto LAB_1425dff1e;
          lVar3 = UDamageType::GetPrivateStaticClass();
          local_10 = *(longlong *)(param_1 + 0x4a8);
          lVar1 = local_10;
          goto joined_r0x0001425dff0c;
        }
        break;
      }
    }
  }
  local_10 = UDamageType::GetPrivateStaticClass();
LAB_1425dfea6:
  local_18 = &PTR_FUN_14503cd78;
  (**(code **)(*param_2 + 0x5a0))
            (param_2,*(float *)(param_1 + 0x4b0) * *(float *)(param_1 + 0x4a4),&local_18,
             *(undefined8 *)(param_1 + 0x4b8),param_1);
  return;
joined_r0x0001425dff0c:
  if (lVar1 == 0) goto LAB_1425dff1e;
  if (lVar1 == lVar3) goto LAB_1425dfea6;
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x0001425dff0c;
LAB_1425dff1e:
  local_10 = 0;
  goto LAB_1425dfea6;
}



// FUNCTION 1425dff30 FUN_1425dff30 body=2191 status=ok
// SIG undefined FUN_1425dff30(void)

void FUN_1425dff30(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  uint *puVar19;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  int local_178;
  uint uStack_174;
  int iStack_170;
  uint uStack_16c;
  undefined8 local_168;
  uint uStack_160;
  int iStack_15c;
  undefined1 local_158 [16];
  longlong *local_148;
  undefined2 local_140;
  longlong *local_138;
  int iStack_130;
  uint uStack_12c;
  uint *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined **local_108 [5];
  byte local_de;
  undefined8 local_78;
  
  iVar14 = (int)param_1[5];
  puVar19 = (uint *)(param_1 + 2);
  local_178 = 0;
  uStack_174 = 1;
  local_168._4_4_ = 0;
  uStack_160 = 0;
  if (iVar14 != 0) {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar19;
    }
    uVar1 = *puVar18;
    local_178 = 0;
    while (uVar1 == 0) {
      lVar17 = (longlong)local_178;
      uStack_160 = uStack_160 + 0x20;
      iVar16 = local_178 + 1;
      bVar2 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar16;
      if (bVar2) goto LAB_1425e0002;
      uVar1 = puVar18[lVar17 + 1];
    }
    uStack_174 = -uVar1 & uVar1;
    iVar16 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - iVar16;
    }
    local_168._4_4_ = (uStack_160 - iVar16) + 0x1f;
    if (iVar14 < local_168._4_4_) {
LAB_1425e0002:
      local_168._4_4_ = iVar14;
    }
  }
  uStack_120 = CONCAT44(local_168._4_4_,0xffffffff);
  auVar3._8_4_ = uStack_160;
  auVar3._0_8_ = uStack_120;
  auVar3._12_4_ = iStack_15c;
  local_110._0_4_ = SUB84(param_1,0);
  uVar8 = (undefined4)local_110;
  local_110._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar10 = local_110._4_4_;
  iStack_130 = local_178;
  uStack_12c = uStack_174;
  local_140._0_1_ = '\0';
  local_140._1_1_ = '\0';
  uStack_160 = 0xffffffff;
  iStack_15c = local_168._4_4_;
  iStack_170 = local_178;
  uStack_16c = uStack_174;
  uStack_118 = auVar3._8_8_;
  local_158._8_4_ = (undefined4)local_110;
  local_158._0_8_ = uStack_118;
  local_158._12_4_ = local_110._4_4_;
  bVar2 = local_168._4_4_ < (int)param_1[5];
  local_148 = param_1;
  local_138 = param_1;
  puStack_128 = puVar19;
  local_168 = puVar19;
  if (bVar2) {
    do {
      iVar14 = iStack_15c;
      lVar17 = (longlong)iStack_15c * 0x40;
      if (*(double *)(*param_1 + 0x28 + lVar17) == 0.0) {
        cVar12 = FWeakObjectPtr::IsValid(*param_1 + 8 + lVar17);
        if ((cVar12 == '\0') || ((*(byte *)(lVar17 + *param_1) & 1) != 0)) {
          QueryPerformanceCounter(&local_res10);
          *(double *)(*param_1 + 0x28 + lVar17) =
               (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
        }
      }
      else {
        QueryPerformanceCounter(&local_res8);
        if (90.0 < ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                   *(double *)(*param_1 + 0x28 + lVar17)) {
          TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
          ::Remove(local_158._8_8_,iVar14);
          local_140._0_1_ = '\x01';
        }
      }
      uStack_160 = uStack_160 & ~uStack_16c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (iStack_15c < (int)local_168[6]);
    if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
      TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34));
    }
  }
  plVar7 = param_1 + 10;
  local_178 = 0;
  uStack_174 = 1;
  iVar14 = (int)param_1[0xf];
  puStack_128 = (uint *)(param_1 + 0xc);
  local_168._4_4_ = 0;
  uStack_160 = 0;
  if (iVar14 != 0) {
    puVar18 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar18 = puStack_128;
    }
    uVar1 = *puVar18;
    local_178 = 0;
    while (uVar1 == 0) {
      lVar17 = (longlong)local_178;
      uStack_160 = uStack_160 + 0x20;
      iVar16 = local_178 + 1;
      bVar2 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar16;
      if (bVar2) goto LAB_1425e0274;
      uVar1 = puVar18[lVar17 + 1];
    }
    uStack_174 = -uVar1 & uVar1;
    iVar16 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - iVar16;
    }
    local_168._4_4_ = (uStack_160 - iVar16) + 0x1f;
    if (iVar14 < local_168._4_4_) {
LAB_1425e0274:
      local_168._4_4_ = iVar14;
    }
  }
  uStack_120 = CONCAT44(local_168._4_4_,0xffffffff);
  auVar4._8_4_ = uStack_160;
  auVar4._0_8_ = uStack_120;
  auVar4._12_4_ = iStack_15c;
  local_110._0_4_ = SUB84(plVar7,0);
  uVar9 = (undefined4)local_110;
  local_110._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
  uVar11 = local_110._4_4_;
  iStack_130 = local_178;
  uStack_12c = uStack_174;
  local_140._0_1_ = '\0';
  local_140._1_1_ = '\0';
  uStack_160 = 0xffffffff;
  iStack_15c = local_168._4_4_;
  iStack_170 = local_178;
  uStack_16c = uStack_174;
  uStack_118 = auVar4._8_8_;
  local_158._8_4_ = (undefined4)local_110;
  local_158._0_8_ = uStack_118;
  local_158._12_4_ = local_110._4_4_;
  bVar2 = local_168._4_4_ < (int)param_1[0xf];
  local_148 = plVar7;
  local_138 = plVar7;
  local_168 = puStack_128;
  local_110 = plVar7;
  if (bVar2) {
    do {
      iVar14 = iStack_15c;
      lVar17 = (longlong)iStack_15c;
      cVar12 = FWeakObjectPtr::IsValid(*plVar7 + lVar17 * 0x14);
      if ((cVar12 != '\0') && ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
        iVar16 = *(int *)(*plVar7 + 8 + lVar17 * 0x14);
        plVar15 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar15 = param_1 + 7;
        }
        iVar13 = *(int *)((longlong)plVar15 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)iVar16) * 4);
        if (iVar13 != -1) {
          do {
            if (*(int *)((longlong)iVar13 * 0x40 + *param_1) == iVar16) {
              if (iVar13 != -1) goto LAB_1425e037e;
              break;
            }
            iVar13 = *(int *)((longlong)iVar13 * 0x40 + 0x38 + *param_1);
          } while (iVar13 != -1);
        }
      }
      FUN_1425f02e0(local_158._8_8_,iVar14);
      local_140._0_1_ = '\x01';
LAB_1425e037e:
      uStack_160 = uStack_160 & ~uStack_16c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (iStack_15c < (int)local_168[6]);
    if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34));
    }
  }
  iVar14 = (int)param_1[5];
  local_178 = 0;
  uStack_174 = 1;
  local_168._4_4_ = 0;
  uStack_160 = 0;
  if (iVar14 != 0) {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar19;
    }
    uVar1 = *puVar18;
    local_178 = 0;
    while (uVar1 == 0) {
      lVar17 = (longlong)local_178;
      uStack_160 = uStack_160 + 0x20;
      iVar16 = local_178 + 1;
      bVar2 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar16;
      if (bVar2) goto LAB_1425e0484;
      uVar1 = puVar18[lVar17 + 1];
    }
    uStack_174 = -uVar1 & uVar1;
    iVar16 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - iVar16;
    }
    local_168._4_4_ = (uStack_160 - iVar16) + 0x1f;
    if (iVar14 < local_168._4_4_) {
LAB_1425e0484:
      local_168._4_4_ = iVar14;
    }
  }
  uStack_120 = CONCAT44(local_168._4_4_,0xffffffff);
  auVar5._8_4_ = uStack_160;
  auVar5._0_8_ = uStack_120;
  auVar5._12_4_ = iStack_15c;
  iStack_130 = local_178;
  uStack_12c = uStack_174;
  local_140 = 0;
  uStack_160 = 0xffffffff;
  iStack_15c = local_168._4_4_;
  iStack_170 = local_178;
  uStack_16c = uStack_174;
  uStack_118 = auVar5._8_8_;
  local_158._8_4_ = uVar8;
  local_158._0_8_ = uStack_118;
  local_158._12_4_ = uVar10;
  bVar2 = local_168._4_4_ < (int)param_1[5];
  local_148 = param_1;
  local_138 = param_1;
  puStack_128 = puVar19;
  local_110._0_4_ = uVar8;
  local_110._4_4_ = uVar10;
  local_168 = puVar19;
  if (bVar2) {
    do {
      uStack_160 = uStack_160 & ~uStack_16c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_170);
    } while (iStack_15c < (int)local_168[6]);
    if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
      TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34));
    }
  }
  iVar14 = (int)param_1[0xf];
  puStack_128 = (uint *)(param_1 + 0xc);
  local_178 = 0;
  uStack_174 = 1;
  local_168._4_4_ = 0;
  uStack_160 = 0;
  if (iVar14 != 0) {
    puVar19 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar19 = puStack_128;
    }
    uVar1 = *puVar19;
    local_178 = 0;
    uStack_160 = 0;
    while (uVar1 == 0) {
      lVar17 = (longlong)local_178;
      uStack_160 = uStack_160 + 0x20;
      iVar16 = local_178 + 1;
      bVar2 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar16;
      if (bVar2) goto LAB_1425e05f1;
      uVar1 = puVar19[lVar17 + 1];
    }
    uStack_174 = -uVar1 & uVar1;
    iVar16 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - iVar16;
    }
    local_168._4_4_ = (uStack_160 - iVar16) + 0x1f;
    if (iVar14 < local_168._4_4_) {
LAB_1425e05f1:
      local_168._4_4_ = iVar14;
    }
  }
  uStack_120 = CONCAT44(local_168._4_4_,0xffffffff);
  auVar6._8_4_ = uStack_160;
  auVar6._0_8_ = uStack_120;
  auVar6._12_4_ = iStack_15c;
  uStack_118 = auVar6._8_8_;
  iStack_130 = local_178;
  uStack_12c = uStack_174;
  local_140 = 0;
  uStack_160 = 0xffffffff;
  iStack_15c = local_168._4_4_;
  iStack_170 = local_178;
  uStack_16c = uStack_174;
  local_158._8_4_ = uVar9;
  local_158._0_8_ = uStack_118;
  local_158._12_4_ = uVar11;
  bVar2 = local_168._4_4_ < (int)param_1[0xf];
  local_148 = plVar7;
  local_138 = plVar7;
  local_110 = plVar7;
  local_168 = puStack_128;
  if (bVar2) {
    do {
      uStack_160 = uStack_160 & ~uStack_16c;
      local_110 = plVar7;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_170);
      plVar7 = local_110;
    } while (iStack_15c < (int)local_168[6]);
    if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34),1);
    }
  }
  FArchive::FArchive(local_108);
  local_de = local_de | 0x20;
  local_108[0] = &PTR__scalar_deleting_destructor__145129118;
  local_78 = 0;
  FArchiveFileWriterDummy::Serialize
            (local_108,(longlong)(int)param_1[1] << 6,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 6);
  iVar14 = *(int *)((longlong)param_1 + 0x2c) + 0x1f;
  iVar16 = (int)param_1[5] + 0x1f;
  (*(code *)local_108[0][0xf])
            (local_108,(longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) << 2);
  lVar17 = (longlong)(int)param_1[9] << 2;
  (*(code *)local_108[0][0xf])(local_108,lVar17,lVar17);
  (*(code *)local_108[0][0xf])
            (local_108,(longlong)(int)param_1[0xb] * 0x14,
             (longlong)*(int *)((longlong)param_1 + 0x5c) * 0x14);
  iVar14 = *(int *)((longlong)param_1 + 0x7c) + 0x1f;
  iVar16 = (int)param_1[0xf] + 0x1f;
  (*(code *)local_108[0][0xf])
            (local_108,(longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) << 2);
  lVar17 = (longlong)(int)param_1[0x13] << 2;
  (*(code *)local_108[0][0xf])(local_108,lVar17,lVar17);
  FArchive::~FArchive(local_108);
  return;
}



// FUNCTION 1425e07c0 ClearLoaded body=83 status=ok
// SIG undefined ClearLoaded(void)

void UObjectLibrary::ClearLoaded(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_1412bdbc0(param_1 + 0x60,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
    return;
  }
  return;
}



// FUNCTION 1425e0820 ClearRecentlyDormantConnection body=77 status=ok
// SIG undefined ClearRecentlyDormantConnection(void)

void FNetworkObjectList::ClearRecentlyDormantConnection
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_1425e3cc0(param_1,param_2,param_4,0);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    FWeakObjectPtr::operator=(local_18,param_3);
    TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Remove(lVar1 + 0x80,local_18);
  }
  return;
}



// FUNCTION 1425e0870 Compact body=574 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong in_RAX;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = (int)param_1[1];
  uVar16 = 0;
  iVar17 = iVar3 - iVar2;
  lVar5 = *param_1;
  iVar12 = iVar3;
  iVar8 = (int)param_1[6];
  if ((int)param_1[6] != -1) {
    do {
      iVar14 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x10);
      if (iVar8 < iVar17) {
        bVar6 = (byte)iVar12 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        do {
          iVar13 = iVar12 + -1;
          uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
          iVar15 = iVar13;
          if (iVar13 < 0) {
            iVar15 = iVar12 + 0x1e;
          }
          iVar12 = iVar13;
        } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4) & uVar10) == 0);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(lVar5 + (longlong)iVar8 * 0x10),
                   (void *)((longlong)iVar13 * 0x10 + lVar5),0x10);
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        iVar15 = iVar8;
        if (iVar8 < 0) {
          iVar15 = iVar8 + 0x1f;
        }
        uVar16 = 1;
        puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      }
      iVar8 = iVar14;
    } while (iVar14 != -1);
    iVar12 = (int)param_1[1];
  }
  iVar8 = (iVar12 - iVar17) - iVar2;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar17 * 0x10 + *param_1),
               (void *)((longlong)iVar3 * 0x10 + *param_1),(longlong)iVar8 << 4);
    iVar12 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar12 - iVar2;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
  iVar12 = (int)param_1[5];
  if (iVar3 != iVar12) {
    iVar14 = 0;
    iVar8 = 0;
    iVar13 = 0;
    iVar15 = 0;
    uVar10 = 1;
    uVar11 = 1;
    if (0 < iVar12) {
      do {
        if ((iVar15 < iVar17) || (iVar3 <= iVar15)) {
          if (iVar8 != iVar15) {
            plVar9 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar9 = param_1 + 2;
            }
            uVar4 = *(uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            puVar1 = (uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            if ((*(uint *)((longlong)plVar9 + (longlong)iVar13 * 4) & uVar11) == 0) {
              *puVar1 = ~uVar10 & uVar4;
            }
            else {
              *puVar1 = uVar4 | uVar10;
            }
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 * 2;
          if (uVar10 == 0) {
            uVar10 = 1;
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = (int)param_1[5];
        uVar4 = uVar11 * 2;
        iVar15 = iVar15 + 1;
        iVar7 = iVar13 + 1;
        uVar11 = 1;
        if (uVar4 != 0) {
          iVar7 = iVar13;
          uVar11 = uVar4;
        }
        iVar13 = iVar7;
      } while (iVar15 < iVar12);
    }
  }
  *(int *)(param_1 + 5) = iVar12 - iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return uVar16;
}



// FUNCTION 1425e0ab0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
ConditionalRehash(longlong param_1,uint param_2,char param_3)

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



// FUNCTION 1425e0b60 FUN_1425e0b60 body=161 status=ok
// SIG undefined FUN_1425e0b60(void)

undefined8 FUN_1425e0b60(longlong param_1,uint param_2,char param_3)

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
      FUN_1415b32e0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1425e0c10 FUN_1425e0c10 body=94 status=ok
// SIG undefined FUN_1425e0c10(void)

undefined8 * FUN_1425e0c10(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x30);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *puVar1 = &PTR_FUN_145129eb8;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1a) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x22) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x2a) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425e0c70 Create body=174 status=ok
// SIG undefined Create(void)

undefined8 * FFXSystemInterface::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x98);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145129db0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = param_1;
    *(undefined4 *)((longlong)puVar1 + 0x84) = param_2;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    FFXSystem::InitGPUSimulation(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425e0d20 CreateComponentInstance body=388 status=ok
// SIG undefined CreateComponentInstance(void)

undefined8 *
UEngineHandlerComponentFactory::CreateComponentInstance
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined1 local_res18 [8];
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  pwVar6 = L"StatelessConnectHandlerComponent";
  do {
    _C = *(wchar_t *)((longlong)(puVar7 + -0xa2890a28) + (longlong)pwVar6);
    if ((_C == L'\0') && (*pwVar6 == L'\0')) goto LAB_1425e0d92;
    if (_C != *pwVar6) {
      wVar1 = towlower(_C);
      wVar2 = towlower(*pwVar6);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
LAB_1425e0d92:
          puVar3 = (undefined8 *)operator_new(0xa0);
          if (puVar3 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)0x0;
          }
          else {
            puVar4 = (undefined8 *)FName::FName(local_res18,L"StatelessConnectHandlerComponent",1);
            HandlerComponent::HandlerComponent(puVar3,*puVar4);
            *puVar3 = &PTR__scalar_deleting_destructor__145129588;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[9] = 0;
            *(undefined1 *)(puVar3 + 10) = 0xff;
            *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
            puVar3[0xb] = 0;
            puVar3[0xc] = 0;
            puVar3[0xd] = 0;
            puVar3[0xe] = 0;
            puVar3[0xf] = 0;
            *(undefined1 *)(puVar3 + 0x10) = 0;
            *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
            puVar3[0x11] = 0;
            puVar3[0x12] = 0;
            *(undefined4 *)(puVar3 + 0x13) = 0;
            HandlerComponent::SetActive(puVar3,1);
            *(undefined1 *)(puVar3 + 3) = 1;
          }
          puVar4 = (undefined8 *)0x0;
          puVar5 = (undefined8 *)operator_new(0x18);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar5 + 1) = 1;
            *puVar5 = &PTR_FUN_143f3f2e0;
            *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
            puVar5[2] = puVar3;
            puVar4 = puVar5;
          }
          *param_2 = puVar3;
          param_2[1] = puVar4;
          SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
        }
        else {
          *param_2 = 0;
          param_2[1] = 0;
        }
        return param_2;
      }
    }
    pwVar6 = pwVar6 + 1;
  } while( true );
}



// FUNCTION 1425e0eb0 FUN_1425e0eb0 body=113 status=ok
// SIG undefined FUN_1425e0eb0(void)

void FUN_1425e0eb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14512c1b0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar1 = &PTR_GetPoolName_14512c1f8;
  }
  return;
}



// FUNCTION 1425e0f30 CreateDecoder body=225 status=ok
// SIG undefined CreateDecoder(void)

undefined8 FOpusAudioInfo::CreateDecoder(longlong param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  puVar5 = (undefined8 *)operator_new(0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar8 = (ulonglong)bVar1;
    uVar2 = *(undefined2 *)(param_1 + 0x1c);
    lVar7 = uVar8 * 0x10;
    iVar3 = opus_multistream_decoder_get_size
                      (*(undefined4 *)(L"net.IgnoreNetworkChecksumMismatch" + uVar8 * 8 + 0x20),
                       *(undefined4 *)(&DAT_145121a44 + lVar7));
    uVar6 = FMemory::Malloc((longlong)iVar3,0);
    *puVar5 = uVar6;
    uVar4 = opus_multistream_decoder_init
                      (uVar6,uVar2,bVar1,
                       *(undefined4 *)(L"net.IgnoreNetworkChecksumMismatch" + uVar8 * 8 + 0x20),
                       *(undefined4 *)(&DAT_145121a44 + lVar7),&UNK_145121a48 + lVar7);
    *(undefined4 *)(puVar5 + 1) = uVar4;
  }
  *(undefined8 **)(param_1 + 0x68) = puVar5;
  if (*(int *)(puVar5 + 1) != 0) {
    if (puVar5 != (undefined8 *)0x0) {
      FMemory::Free(*puVar5);
      FMemory::operator_delete(puVar5,0x10);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    return 0;
  }
  return 1;
}



// FUNCTION 1425e1020 FUN_1425e1020 body=416 status=ok
// SIG undefined FUN_1425e1020(void)

longlong * FUN_1425e1020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  iVar1 = FUN_1419ef5f0(DAT_146ab62cc);
  if (iVar1 < 3) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)operator_new(0x440);
  if (plVar2 != (longlong *)0x0) {
    FUN_142619de0(plVar2);
    plVar2[0x3e] = 0;
    *plVar2 = (longlong)&PTR_FUN_14512a330;
    *(undefined1 *)(plVar2 + 0x3f) = 0;
    plVar2[0x40] = 0;
    plVar2[0x41] = 0;
    plVar2[0x42] = 0;
    plVar2[0x43] = 0;
    plVar2[0x44] = 0;
    plVar2[0x45] = 0;
    *(undefined1 *)(plVar2 + 0x46) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x234) = 0xffffffff;
    plVar2[0x47] = 0;
    plVar2[0x48] = 0;
    *(undefined4 *)(plVar2 + 0x49) = 0xffffffff;
    *(undefined4 *)((longlong)plVar2 + 0x24c) = 0;
    *(undefined1 *)(plVar2 + 0x4a) = 0;
    plVar2[0x4b] = 0;
    plVar2[0x4c] = 0;
    plVar2[0x4d] = 0;
    plVar2[0x4e] = 0;
    plVar2[0x4f] = 0;
    plVar2[0x50] = 0;
    plVar2[0x51] = 0;
    plVar2[0x52] = 0;
    plVar2[0x53] = 0;
    plVar2[0x54] = 0;
    plVar2[0x55] = 0;
    *(undefined1 *)((longlong)plVar2 + 0x2cc) = 1;
    plVar2[0x5a] = 0;
    plVar2[0x5b] = 0;
    FBoneContainer::FBoneContainer(plVar2 + 0x5c);
    plVar2[0x81] = 0;
    plVar2[0x82] = 0;
    plVar2[0x85] = 0;
    plVar2[0x86] = 0;
    *(undefined4 *)(plVar2 + 0x87) = 0xffffffff;
    *(undefined4 *)((longlong)plVar2 + 0x43c) = 0;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3);
  return plVar3;
}



// FUNCTION 1425e11c0 FUN_1425e11c0 body=332 status=ok
// SIG undefined FUN_1425e11c0(void)

longlong * FUN_1425e11c0(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  uVar1 = FUN_1427dd7a0(*(undefined8 *)(param_1 + 0x150));
  plVar2 = (longlong *)operator_new(0x820);
  plVar3 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(plVar2 + 1) = 3;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined1 *)(plVar2 + 5) = 0;
    plVar2[0x66] = 0;
    *(undefined2 *)(plVar2 + 0x67) = 1;
    plVar2[200] = 0;
    plVar2[0xc9] = 0;
    plVar2[0xca] = 0;
    *(undefined4 *)(plVar2 + 0xcb) = 0xffffffff;
    plVar2[0xcc] = 0;
    plVar2[0xcd] = 0;
    *(undefined4 *)(plVar2 + 0xce) = 0xbf800000;
    *(undefined4 *)((longlong)plVar2 + 0x674) = 3;
    *(undefined2 *)(plVar2 + 0xcf) = 0;
    *(undefined1 *)((longlong)plVar2 + 0x33a) = 1;
    *plVar2 = (longlong)&PTR_FUN_145129e48;
    FUN_1424b3ed0(plVar2 + 0xd1);
    plVar2[0xf9] = -1;
    plVar2[0xfa] = 0;
    plVar2[0xfb] = 0;
    plVar2[0xfc] = 0;
    plVar2[0xfd] = 0;
    plVar2[0xfe] = 0;
    plVar2[0xff] = 0;
    plVar2[0x100] = 0;
    plVar2[0x101] = 0;
    plVar2[0x102] = 0;
    plVar2[0x103] = 0;
    plVar3 = plVar2;
  }
  FUN_1425f41c0(param_1,plVar3,uVar1);
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return plVar3;
}



// FUNCTION 1425e1310 FUN_1425e1310 body=39 status=ok
// SIG undefined FUN_1425e1310(void)

void FUN_1425e1310(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_142600fa0();
  }
  *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) & 0xfffffffb;
  return;
}



// FUNCTION 1425e1340 Decode body=103 status=ok
// SIG undefined Decode(void)

undefined8 *
FOpusAudioInfo::Decode
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined2 param_4,
          undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  *param_2 = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = opus_multistream_decode
                      (*puVar1,param_3,param_4,param_5,
                       (param_6 / (int)(uint)*(byte *)(param_1 + 0x28)) * 2,0);
    *(undefined4 *)(param_2 + 1) = uVar2;
  }
  return param_2;
}



// FUNCTION 1425e13b0 FUN_1425e13b0 body=493 status=ok
// SIG undefined FUN_1425e13b0(void)

void FUN_1425e13b0(longlong *param_1)

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
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x50))(param_1,1);
    }
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
  *plVar9 = (longlong)&PTR_FUN_145129e08;
  plVar9[4] = 0;
  plVar9[2] = (longlong)param_1;
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
      return;
    }
  }
  return;
}



// FUNCTION 1425e15a0 DestroyObject body=113 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FNetworkObjectInfo,SharedPointerInternals::DefaultDeleter<FNetworkObjectInfo>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 200) = 0;
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1 + 0x80);
    *(undefined4 *)(lVar1 + 0x78) = 0;
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1 + 0x30);
    FMemory::operator_delete(lVar1,0xd0);
  }
  return;
}



// FUNCTION 1425e1620 FUN_1425e1620 body=254 status=ok
// SIG undefined FUN_1425e1620(void)

void FUN_1425e1620(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_1428bf040(param_1[1],param_1 + 2);
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x3c) == 0) {
    iVar5 = *(int *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x10) = iVar5 + 1;
    if (*(int *)(lVar3 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 8,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(lVar3 + 0x18,0);
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x38);
    iVar4 = *(int *)(lVar3 + 0x3c) + -1;
    iVar2 = *(int *)(*(longlong *)(lVar3 + 8) + 4 + (longlong)iVar5 * 8);
    *(int *)(lVar3 + 0x38) = iVar2;
    *(int *)(lVar3 + 0x3c) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*(longlong *)(lVar3 + 8) + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  lVar6 = *(longlong *)(lVar3 + 0x28);
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    lVar6 = lVar3 + 0x18;
  }
  puVar1 = (uint *)(lVar6 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  *(int *)(param_1[1] + 0xf8) = iVar5;
  *(longlong *)(*(longlong *)(*param_1 + 8) + (longlong)*(int *)(param_1[1] + 0xf8) * 8) =
       param_1[1];
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1425e1720 FUN_1425e1720 body=217 status=ok
// SIG undefined FUN_1425e1720(void)

void FUN_1425e1720(longlong *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  iVar3 = *(int *)(param_1[1] + 0xf8);
  if (iVar3 != -1) {
    lVar4 = *param_1;
    bVar5 = (byte)iVar3 & 0x1f;
    if (*(int *)(lVar4 + 0x3c) != 0) {
      *(int *)(*(longlong *)(lVar4 + 8) + (longlong)*(int *)(lVar4 + 0x38) * 8) = iVar3;
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 8) + (longlong)iVar3 * 8);
    uVar6 = 0xffffffff;
    *puVar1 = 0xffffffff;
    if (0 < *(int *)(lVar4 + 0x3c)) {
      uVar6 = *(undefined4 *)(lVar4 + 0x38);
    }
    puVar1[1] = uVar6;
    *(int *)(lVar4 + 0x3c) = *(int *)(lVar4 + 0x3c) + 1;
    *(int *)(lVar4 + 0x38) = iVar3;
    lVar7 = *(longlong *)(lVar4 + 0x28);
    if (*(longlong *)(lVar4 + 0x28) == 0) {
      lVar7 = lVar4 + 0x18;
    }
    puVar2 = (uint *)(lVar7 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      FUN_14289d270(lVar4);
      FMemory::operator_delete(lVar4,0x110);
    }
  }
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1425e1800 FUN_1425e1800 body=123 status=ok
// SIG undefined FUN_1425e1800(void)

void FUN_1425e1800(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(lVar1 + 0xc) = uVar2;
  *(undefined4 *)(lVar1 + 0x10) = uVar3;
  *(undefined4 *)(lVar1 + 0x14) = uVar4;
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xf4) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xf0) = *(undefined4 *)(param_1 + 0x74);
  FUN_1428bf040(*(undefined8 *)(param_1 + 8),param_1 + 0x30);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1425e18d0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Empty
               (longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 1425e1950 FUN_1425e1950 body=181 status=ok
// SIG undefined FUN_1425e1950(void)

void FUN_1425e1950(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1425e0b60(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1425e1a10 FUN_1425e1a10 body=63 status=ok
// SIG undefined FUN_1425e1a10(void)

void FUN_1425e1a10(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1426deda0();
  uVar1 = AActor::GetWorldTimerManager(param_1);
  FUN_142880530(uVar1,param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  return;
}



// FUNCTION 1425e1a60 FUN_1425e1a60 body=2698 status=ok
// SIG undefined FUN_1425e1a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425e1a60(longlong param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  void *pvVar12;
  void *pvVar13;
  float *pfVar14;
  uint uVar15;
  short *psVar16;
  byte *pbVar17;
  ulonglong uVar18;
  float *pfVar19;
  int iVar20;
  longlong *plVar21;
  void *_Src;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined *_Dst;
  longlong lVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
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
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  uint local_res8 [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  void *local_168;
  uint local_160;
  int local_15c;
  longlong local_158;
  void *local_150;
  int local_148;
  undefined4 local_144;
  void *local_140;
  ulonglong local_138;
  undefined8 *local_130;
  ushort local_128;
  undefined1 local_126;
  undefined1 local_120 [4];
  float local_11c;
  longlong local_118;
  undefined8 local_110;
  undefined *local_108;
  uint *puStack_100;
  undefined *local_f8;
  uint *puStack_f0;
  undefined *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  uVar22 = 0;
  if (0 < *(int *)(param_1 + 0x128)) {
    uVar15 = *(uint *)(param_1 + 0x24c);
    uVar23 = uVar22;
    do {
      plVar21 = (longlong *)0x0;
      uVar9 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + uVar23);
      lVar24 = (longlong)(int)(*(int *)(param_1 + 0x124) * uVar9) + *(longlong *)(param_1 + 0x100);
      pbVar17 = (byte *)(*(int *)(param_1 + 0x248) + lVar24);
      if (*(int *)(param_1 + 0x240) != 0) {
        plVar21 = *(longlong **)(*(longlong *)(param_1 + 0x238) + (ulonglong)*pbVar17 * 8);
      }
      _Dst = (undefined *)((ulonglong)(uVar15 * uVar9) * 0x30 + *(longlong *)(param_1 + 0x210));
      if (plVar21 == (longlong *)0x0) {
        puStack_100 = (uint *)CONCAT44(uStack_dc,uVar15);
        local_108 = _Dst;
        local_e8 = _Dst;
        uStack_e0 = uVar15;
        FUN_14224df80(&local_108,param_1 + 0x2e0);
      }
      else {
        plVar11 = plVar21;
        fVar25 = (float)(**(code **)(*plVar21 + 0x2a0))();
        if (*(char *)(*(longlong *)(param_1 + 0x208) + 0x50) == '\0') {
          fVar34 = (*(float *)(param_1 + 0x13c) - *(float *)(pbVar17 + 0xc)) *
                   *(float *)(pbVar17 + 8) + *(float *)(pbVar17 + 4);
          if ((*(char *)(*(longlong *)(param_1 + 0x208) + 200) != '\0') && (fVar25 < fVar34)) {
            if (1e-08 < ABS(fVar25)) {
              fVar25 = (float)(int)(fVar34 / fVar25) * fVar25;
              if (ABS(fVar34) < ABS(fVar25)) {
                fVar25 = fVar34;
              }
              fVar34 = fVar34 - fVar25;
            }
            else {
              AK::MemoryMgr::StartProfileThreadUsage((long)plVar11);
              fVar34 = 0.0;
            }
          }
        }
        else {
          fVar34 = fVar25 * *(float *)(lVar24 + 0xc);
        }
        puStack_100 = local_res8;
        local_res8[0] = local_res8[0] & 0xffffff00;
        local_f8 = &DAT_14060d670;
        local_108 = &DAT_14060d670;
        puStack_f0 = puStack_100;
        lVar24 = FUN_1415d8310(&local_108,&DAT_146216a38);
        local_1a8 = (undefined8 *)(lVar24 + 0x18);
        _Src = (void *)0x0;
        uStack_1a0 = *local_1a8;
        local_198 = *(longlong *)(lVar24 + 0x28);
        fStack_190 = (float)((uint)fStack_190 & 0xffffff00);
        local_188 = *(undefined8 *)(lVar24 + 0x30);
        *(undefined8 **)(lVar24 + 0x30) = &local_1a8;
        *(int *)(lVar24 + 0x38) = *(int *)(lVar24 + 0x38) + 1;
        local_158 = param_1 + 0x2e0;
        local_168 = (void *)0x0;
        local_160 = 0;
        local_15c = 0;
        iVar20 = *(int *)(param_1 + 0x2e8);
        pvVar12 = _Src;
        if (0 < iVar20) {
          FUN_140848c80(&local_168,iVar20);
          pvVar12 = (void *)(ulonglong)local_160;
        }
        local_160 = iVar20 + (int)pvVar12;
        if (local_15c < (int)local_160) {
          TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_168);
        }
        local_130 = (undefined8 *)(param_1 + 0x3a0);
        local_140 = (void *)0x0;
        local_128 = 0;
        local_126 = 0;
        if ((local_130 != (undefined8 *)0x0) &&
           (lVar24 = (longlong)*(int *)(param_1 + 0x3a8), 0 < lVar24)) {
          pvVar12 = _Src;
          psVar16 = (short *)*local_130;
          do {
            pvVar13 = (void *)(ulonglong)((int)pvVar12 + 1);
            if (*psVar16 == -1) {
              pvVar13 = pvVar12;
            }
            local_128 = (ushort)pvVar13;
            lVar24 = lVar24 + -1;
            pvVar12 = pvVar13;
            psVar16 = psVar16 + 1;
          } while (lVar24 != 0);
        }
        uVar18 = (ulonglong)local_128;
        local_138 = (ulonglong)(uint)local_128;
        if (local_128 != 0) {
          FUN_140848b80(&local_140);
        }
        _guard_xfg_dispatch_icall_nop(local_140,0,uVar18 << 3);
        local_126 = 1;
        local_120[0] = 0;
        local_118 = 0;
        local_110 = 0;
        local_11c = fVar34;
        (**(code **)(*plVar21 + 0x2d8))(plVar21,&local_168,&local_140,local_120);
        pvVar12 = local_168;
        lVar24 = (longlong)(int)local_160;
        local_150 = (void *)0x0;
        local_144 = 0;
        local_148 = local_160;
        if (local_160 != 0) {
          FUN_140615970(&local_150,local_160,0);
          _Src = local_150;
          _guard_xfg_dispatch_icall_nop(local_150,pvVar12,lVar24 * 0x30);
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)local_148 * 0x30);
        if (local_118 != 0) {
          FMemory::Free();
        }
        if (fStack_190._0_1_ == '\0') {
          fStack_190 = (float)CONCAT31(fStack_190._1_3_,1);
          *(int *)(local_1a8 + 4) = *(int *)(local_1a8 + 4) + -1;
          if (local_198 != local_1a8[2]) {
            FMemStackBase::FreeChunks();
          }
          *local_1a8 = uStack_1a0;
          local_1a8[3] = local_188;
        }
      }
      fVar8 = fRam0000000146b04a2c;
      fVar7 = fRam0000000146b04a28;
      fVar34 = fRam0000000146b04a24;
      fVar25 = _DAT_146b04a20;
      uVar18 = 0;
      uVar15 = 0;
      if (*(int *)(param_1 + 0x24c) != 0) {
        do {
          fVar45 = fRam0000000146b04a38;
          fVar36 = fRam0000000146b04a34;
          fVar35 = _DAT_146b04a30;
          fVar65 = fRam0000000146b047f8;
          fVar64 = fRam0000000146b047f4;
          fVar63 = _DAT_146b047f0;
          iVar20 = (int)uVar18;
          if (iVar20 != 0) {
            uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x158) + 8 +
                              (ulonglong)
                              *(ushort *)(*(longlong *)(param_1 + 0x2d0) + (longlong)iVar20 * 2) *
                              0x10);
            lVar24 = *(longlong *)(param_1 + 0x428);
            if (*(longlong *)(param_1 + 0x428) == 0) {
              lVar24 = param_1 + 0x418;
            }
            uVar9 = uVar15;
            if ((int)uVar15 < 0) {
              uVar9 = uVar15 + 0x1f;
            }
            if ((*(uint *)(lVar24 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar15 & 0x1f) & 1) == 0) {
              uVar15 = 0xffffffff;
            }
            else {
              uVar15 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x408) + (longlong)(int)uVar15 * 8)
              ;
            }
            pfVar14 = (float *)(_Dst + (longlong)(int)uVar15 * 0x30);
            auVar26 = *(undefined1 (*) [16])(pfVar14 + 8);
            fVar48 = auVar26._0_4_;
            fVar2 = auVar26._4_4_;
            fVar4 = auVar26._8_4_;
            fVar6 = auVar26._12_4_;
            pfVar19 = (float *)(_Dst + uVar18 * 0x30);
            auVar1 = *(undefined1 (*) [16])(pfVar19 + 8);
            fVar50 = auVar1._0_4_;
            fVar3 = auVar1._4_4_;
            fVar5 = auVar1._8_4_;
            auVar26 = minps(auVar1,auVar26);
            auVar27._4_4_ = -(uint)(auVar26._4_4_ < fRam0000000146b04a34);
            auVar27._0_4_ = -(uint)(auVar26._0_4_ < _DAT_146b04a30);
            auVar27._8_4_ = -(uint)(auVar26._8_4_ < fRam0000000146b04a38);
            auVar27._12_4_ = -(uint)(auVar26._12_4_ < fRam0000000146b04a3c);
            iVar10 = movmskps(iVar20,auVar27);
            if (iVar10 == 0) {
              fVar63 = *pfVar14;
              fVar64 = pfVar14[1];
              fVar65 = pfVar14[2];
              fVar35 = pfVar14[3];
              fVar36 = *pfVar19;
              fVar45 = pfVar19[1];
              fVar46 = pfVar19[2];
              fVar47 = pfVar19[3];
              fVar37 = pfVar19[4] * fVar48;
              fVar39 = pfVar19[5] * fVar2;
              fVar38 = pfVar19[6] * fVar4;
              fVar41 = pfVar19[7] * fVar6;
              fVar28 = fVar47 * fVar63 * _DAT_146b04990 + fVar35 * fVar36 +
                       fVar64 * fVar46 * _DAT_146b04980 + fVar65 * fVar45 * _DAT_146b04970;
              fVar31 = fVar46 * fVar63 * fRam0000000146b04994 + fVar35 * fVar45 +
                       fVar64 * fVar47 * fRam0000000146b04984 +
                       fVar65 * fVar36 * fRam0000000146b04974;
              fVar43 = fVar45 * fVar63 * fRam0000000146b04998 + fVar35 * fVar46 +
                       fVar64 * fVar36 * fRam0000000146b04988 +
                       fVar65 * fVar47 * fRam0000000146b04978;
              fVar32 = fVar36 * fVar63 * fRam0000000146b0499c + fVar35 * fVar47 +
                       fVar64 * fVar45 * fRam0000000146b0498c +
                       fVar65 * fVar46 * fRam0000000146b0497c;
              fVar45 = fVar38 * fVar64 - fVar39 * fVar65;
              fVar46 = fVar37 * fVar65 - fVar38 * fVar63;
              fVar47 = fVar39 * fVar63 - fVar37 * fVar64;
              fVar49 = fVar41 * fVar35 - fVar41 * fVar35;
              fVar45 = fVar45 + fVar45;
              fVar46 = fVar46 + fVar46;
              fVar47 = fVar47 + fVar47;
              fVar49 = fVar49 + fVar49;
              fVar36 = (fVar47 * fVar64 - fVar46 * fVar65) + fVar35 * fVar45 + fVar37 + pfVar14[4];
              fVar65 = (fVar45 * fVar65 - fVar47 * fVar63) + fVar35 * fVar46 + fVar39 + pfVar14[5];
              fVar63 = (fVar46 * fVar63 - fVar45 * fVar64) + fVar35 * fVar47 + fVar38 + pfVar14[6];
              fVar64 = (fVar49 * fVar35 - fVar49 * fVar35) + fVar35 * fVar49 + fVar41 + pfVar14[7];
            }
            else {
              fVar46 = *pfVar14;
              fVar47 = pfVar14[1];
              fVar49 = pfVar14[2];
              fVar37 = pfVar14[3];
              fVar38 = fVar47 + fVar47;
              fVar41 = fVar49 + fVar49;
              fVar43 = fVar46 * (fVar46 + fVar46);
              fVar39 = (fVar46 + fVar46) * fVar37;
              fVar60 = (fVar41 * fVar37 + fVar38 * fVar46) * fVar48;
              fVar61 = (fVar39 + fVar41 * fVar47) * fVar2;
              fVar62 = (fVar38 * fVar37 + fVar41 * fVar46) * fVar4;
              fVar51 = fVar2 * (fVar38 * fVar46 - fVar41 * fVar37);
              fVar53 = fVar4 * (fVar41 * fVar47 - fVar39);
              fVar55 = fVar48 * (fVar41 * fVar46 - fVar38 * fVar37);
              fVar46 = pfVar14[4];
              fVar37 = pfVar14[5];
              fVar39 = pfVar14[6];
              fVar28 = (float)((uint)((_DAT_146b047f0 - (fVar49 * fVar41 + fVar47 * fVar38)) *
                                     fVar48) & _DAT_146b04800);
              fVar31 = (float)((uint)((fRam0000000146b047f4 - (fVar49 * fVar41 + fVar43)) * fVar2) &
                              uRam0000000146b04804);
              fVar32 = (float)((uint)((fRam0000000146b047f8 - (fVar47 * fVar38 + fVar43)) * fVar4) &
                              uRam0000000146b04808);
              fVar33 = (float)((uint)((fRam0000000146b047fc - (fVar43 + fVar43)) * fVar6) &
                              uRam0000000146b0480c);
              fVar47 = *pfVar19;
              fVar49 = pfVar19[1];
              fVar38 = pfVar19[2];
              fVar41 = pfVar19[3];
              fVar40 = fVar49 + fVar49;
              fVar42 = fVar38 + fVar38;
              fVar44 = fVar47 * (fVar47 + fVar47);
              fVar43 = (fVar47 + fVar47) * fVar41;
              fVar57 = (fVar42 * fVar41 + fVar40 * fVar47) * fVar50;
              fVar58 = (fVar43 + fVar42 * fVar49) * fVar3;
              fVar59 = (fVar40 * fVar41 + fVar42 * fVar47) * fVar5;
              fVar52 = fVar3 * (fVar40 * fVar47 - fVar42 * fVar41);
              fVar54 = fVar5 * (fVar42 * fVar49 - fVar43);
              fVar56 = fVar50 * (fVar42 * fVar47 - fVar40 * fVar41);
              fVar41 = (float)((uint)((_DAT_146b047f0 - (fVar38 * fVar42 + fVar49 * fVar40)) *
                                     fVar50) & _DAT_146b04800);
              fVar43 = (float)((uint)((fRam0000000146b047f4 - (fVar38 * fVar42 + fVar44)) * fVar3) &
                              uRam0000000146b04804);
              fVar40 = (float)((uint)((fRam0000000146b047f8 - (fVar49 * fVar40 + fVar44)) * fVar5) &
                              uRam0000000146b04808);
              fVar42 = (float)((uint)((fRam0000000146b047fc - (fVar44 + fVar44)) * auVar1._12_4_) &
                              uRam0000000146b0480c);
              fVar47 = pfVar19[4];
              fVar49 = pfVar19[5];
              fVar38 = pfVar19[6];
              local_1a8._0_4_ =
                   fVar57 * fVar51 + fVar41 * fVar28 + fVar56 * fVar62 + fVar42 * fVar46;
              local_1a8._4_4_ =
                   fVar57 * fVar31 + fVar41 * fVar60 + fVar56 * fVar53 + fVar42 * fVar37;
              uStack_1a0._0_4_ =
                   fVar57 * fVar61 + fVar41 * fVar55 + fVar56 * fVar32 + fVar42 * fVar39;
              uStack_1a0._4_4_ =
                   fVar57 * fVar33 + fVar41 * fVar33 + fVar56 * fVar33 +
                   fVar42 * fRam0000000146b047fc;
              local_198._0_4_ =
                   fVar43 * fVar51 + fVar52 * fVar28 + fVar58 * fVar62 + fVar42 * fVar46;
              local_198._4_4_ =
                   fVar43 * fVar31 + fVar52 * fVar60 + fVar58 * fVar53 + fVar42 * fVar37;
              fStack_190 = fVar43 * fVar61 + fVar52 * fVar55 + fVar58 * fVar32 + fVar42 * fVar39;
              fStack_18c = fVar43 * fVar33 + fVar52 * fVar33 + fVar58 * fVar33 +
                           fVar42 * fRam0000000146b047fc;
              local_188._0_4_ =
                   fVar54 * fVar51 + fVar59 * fVar28 + fVar40 * fVar62 + fVar42 * fVar46;
              local_188._4_4_ =
                   fVar54 * fVar31 + fVar59 * fVar60 + fVar40 * fVar53 + fVar42 * fVar37;
              fStack_180 = fVar54 * fVar61 + fVar59 * fVar55 + fVar40 * fVar32 + fVar42 * fVar39;
              fStack_17c = fVar54 * fVar33 + fVar59 * fVar33 + fVar40 * fVar33 +
                           fVar42 * fRam0000000146b047fc;
              local_178 = fVar49 * fVar51 + fVar47 * fVar28 + fVar38 * fVar62 +
                          fRam0000000146b047fc * fVar46;
              fStack_174 = fVar49 * fVar31 + fVar47 * fVar60 + fVar38 * fVar53 +
                           fRam0000000146b047fc * fVar37;
              fStack_170 = fVar49 * fVar61 + fVar47 * fVar55 + fVar38 * fVar32 +
                           fRam0000000146b047fc * fVar39;
              fStack_16c = fVar49 * fVar33 + fVar47 * fVar33 + fVar38 * fVar33 +
                           fRam0000000146b047fc * fRam0000000146b047fc;
              FMatrix::RemoveScaling(&local_1a8);
              fVar63 = (float)(-(uint)(fVar35 <= fVar48 * fVar50) & (_DAT_146b049a0 ^ (uint)fVar63)
                              ^ _DAT_146b049a0);
              fVar64 = (float)(-(uint)(fVar36 <= fVar2 * fVar3) &
                               (uRam0000000146b049a4 ^ (uint)fVar64) ^ uRam0000000146b049a4);
              fVar65 = (float)(-(uint)(fVar45 <= fVar4 * fVar5) &
                               (uRam0000000146b049a8 ^ (uint)fVar65) ^ uRam0000000146b049a8);
              local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_ * fVar63,(float)local_1a8 * fVar63)
              ;
              uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0 * fVar63);
              fStack_190 = fStack_190 * fVar64;
              fStack_180 = fStack_180 * fVar65;
              local_198 = CONCAT44(local_198._4_4_ * fVar64,(float)local_198 * fVar64);
              local_188 = CONCAT44(local_188._4_4_ * fVar65,(float)local_188 * fVar65);
              FQuat::FQuat(&local_d8,&local_1a8);
              local_res8[0] = 0x322bcc77;
              auVar29._0_4_ = local_d8 * local_d8 + fStack_d0 * fStack_d0;
              auVar29._4_4_ = fStack_d4 * fStack_d4 + fStack_cc * fStack_cc;
              auVar29._8_4_ = fStack_d0 * fStack_d0 + local_d8 * local_d8;
              auVar29._12_4_ = fStack_cc * fStack_cc + fStack_d4 * fStack_d4;
              fVar45 = auVar29._4_4_ + auVar29._0_4_;
              fVar46 = auVar29._8_4_ + auVar29._4_4_;
              fVar47 = auVar29._12_4_ + auVar29._8_4_;
              fVar49 = auVar29._0_4_ + auVar29._12_4_;
              auVar26._4_4_ = fVar46;
              auVar26._0_4_ = fVar45;
              auVar26._8_4_ = fVar47;
              auVar26._12_4_ = fVar49;
              auVar26 = rsqrtps(auVar29,auVar26);
              fVar63 = auVar26._0_4_;
              fVar65 = auVar26._4_4_;
              fVar35 = auVar26._8_4_;
              fVar36 = auVar26._12_4_;
              fVar63 = (fVar25 - fVar63 * fVar63 * fVar45 * fVar25) * fVar63 + fVar63;
              fVar65 = (fVar34 - fVar65 * fVar65 * fVar46 * fVar34) * fVar65 + fVar65;
              fVar35 = (fVar7 - fVar35 * fVar35 * fVar47 * fVar7) * fVar35 + fVar35;
              fVar36 = (fVar8 - fVar36 * fVar36 * fVar49 * fVar8) * fVar36 + fVar36;
              fVar64 = 0.0;
              fVar28 = (float)(((uint)(((fVar25 - fVar63 * fVar63 * fVar45 * fVar25) * fVar63 +
                                       fVar63) * local_d8) ^ _DAT_146b04a10) &
                               -(uint)(1e-08 <= fVar45) ^ _DAT_146b04a10);
              fVar31 = (float)(((uint)(((fVar34 - fVar65 * fVar65 * fVar46 * fVar34) * fVar65 +
                                       fVar65) * fStack_d4) ^ uRam0000000146b04a14) &
                               -(uint)(1e-08 <= fVar46) ^ uRam0000000146b04a14);
              fVar43 = (float)(((uint)(((fVar7 - fVar35 * fVar35 * fVar47 * fVar7) * fVar35 + fVar35
                                       ) * fStack_d0) ^ uRam0000000146b04a18) &
                               -(uint)(1e-08 <= fVar47) ^ uRam0000000146b04a18);
              fVar32 = (float)(((uint)(((fVar8 - fVar36 * fVar36 * fVar49 * fVar8) * fVar36 + fVar36
                                       ) * fStack_cc) ^ uRam0000000146b04a1c) &
                               -(uint)(1e-08 <= fVar49) ^ uRam0000000146b04a1c);
              fVar36 = local_178;
              fVar65 = fStack_174;
              fVar63 = fStack_170;
              local_d8 = fVar28;
              fStack_d4 = fVar31;
              fStack_d0 = fVar43;
              fStack_cc = fVar32;
            }
            *pfVar19 = fVar28;
            pfVar19[1] = fVar31;
            pfVar19[2] = fVar43;
            pfVar19[3] = fVar32;
            pfVar19[4] = fVar36;
            pfVar19[5] = fVar65;
            pfVar19[6] = fVar63;
            pfVar19[7] = fVar64;
            pfVar19[8] = fVar48 * fVar50;
            pfVar19[9] = fVar2 * fVar3;
            pfVar19[10] = fVar4 * fVar5;
            pfVar19[0xb] = fVar6 * auVar1._12_4_;
            auVar30._0_4_ = fVar28 * fVar28 + fVar43 * fVar43;
            auVar30._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
            auVar30._8_4_ = fVar43 * fVar43 + fVar28 * fVar28;
            auVar30._12_4_ = fVar32 * fVar32 + fVar31 * fVar31;
            fVar36 = auVar30._4_4_ + auVar30._0_4_;
            fVar45 = auVar30._8_4_ + auVar30._4_4_;
            fVar48 = auVar30._12_4_ + auVar30._8_4_;
            fVar50 = auVar30._0_4_ + auVar30._12_4_;
            auVar1._4_4_ = fVar45;
            auVar1._0_4_ = fVar36;
            auVar1._8_4_ = fVar48;
            auVar1._12_4_ = fVar50;
            auVar26 = rsqrtps(auVar30,auVar1);
            fVar63 = auVar26._0_4_;
            fVar64 = auVar26._4_4_;
            fVar65 = auVar26._8_4_;
            fVar35 = auVar26._12_4_;
            fVar63 = (fVar25 - fVar63 * fVar63 * fVar36 * fVar25) * fVar63 + fVar63;
            fVar64 = (fVar34 - fVar64 * fVar64 * fVar45 * fVar34) * fVar64 + fVar64;
            fVar65 = (fVar7 - fVar65 * fVar65 * fVar48 * fVar7) * fVar65 + fVar65;
            fVar35 = (fVar8 - fVar35 * fVar35 * fVar50 * fVar8) * fVar35 + fVar35;
            fVar64 = (float)(((uint)(((fVar34 - fVar64 * fVar64 * fVar45 * fVar34) * fVar64 + fVar64
                                     ) * fVar31) ^ uRam0000000146b04a14) &
                             -(uint)(fRam0000000146b04a44 <= fVar45) ^ uRam0000000146b04a14);
            fVar65 = (float)(((uint)(((fVar7 - fVar65 * fVar65 * fVar48 * fVar7) * fVar65 + fVar65)
                                    * fVar43) ^ uRam0000000146b04a18) &
                             -(uint)(fRam0000000146b04a48 <= fVar48) ^ uRam0000000146b04a18);
            fVar35 = (float)(((uint)(((fVar8 - fVar35 * fVar35 * fVar50 * fVar8) * fVar35 + fVar35)
                                    * fVar32) ^ uRam0000000146b04a1c) &
                             -(uint)(fRam0000000146b04a4c <= fVar50) ^ uRam0000000146b04a1c);
            *pfVar19 = (float)(((uint)(((fVar25 - fVar63 * fVar63 * fVar36 * fVar25) * fVar63 +
                                       fVar63) * fVar28) ^ _DAT_146b04a10) &
                               -(uint)(_DAT_146b04a40 <= fVar36) ^ _DAT_146b04a10);
            pfVar19[1] = fVar64;
            pfVar19[2] = fVar65;
            pfVar19[3] = fVar35;
          }
          uVar15 = *(uint *)(param_1 + 0x24c);
          uVar18 = (ulonglong)(iVar20 + 1U);
        } while (iVar20 + 1U < uVar15);
      }
      uVar9 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar9;
      uVar23 = uVar23 + 2;
    } while ((int)uVar9 < *(int *)(param_1 + 0x128));
  }
  return;
}



// FUNCTION 1425e2500 FUN_1425e2500 body=20 status=ok
// SIG undefined FUN_1425e2500(void)

undefined1 FUN_1425e2500(longlong param_1)

{
  FUN_1425da320(param_1 + 8);
  return 1;
}



// FUNCTION 1425e2520 ExecuteTask body=237 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`FFXSystem::AddVectorField'::`10'::EURCMacro_FAddVectorFieldCommand>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1425e1620(param_1 + 2,param_3,param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_145129e18;
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



// FUNCTION 1425e2610 FUN_1425e2610 body=266 status=ok
// SIG undefined FUN_1425e2610(void)

void FUN_1425e2610(undefined8 *param_1)

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
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145129e08;
  *(undefined1 *)(param_1 + 3) = 0;
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



// FUNCTION 1425e2720 FUN_1425e2720 body=237 status=ok
// SIG undefined FUN_1425e2720(void)

void FUN_1425e2720(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1425e1720(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_145129e28;
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



// FUNCTION 1425e2810 ExecuteTask body=246 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`UGripMotionControllerComponent::SendRenderTransform_Concurrent'::`5'::UpdateRTRelativeTransformCommandName,<lambda_8201dd83edca6a535886efec2b736b5d>_>_>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1425e1800(param_1 + 2,param_3,param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145129e38;
  if (param_1[0x13] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x13] + 0x48);
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



// FUNCTION 1425e2910 FUN_1425e2910 body=2167 status=ok
// SIG undefined FUN_1425e2910(void)

undefined1
FUN_1425e2910(longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4,
             undefined8 param_5)

{
  byte *pbVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  void *_Src;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  int *local_res8;
  undefined4 local_res10 [2];
  undefined2 *local_e8;
  uint local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint uStack_c0;
  int iStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int local_b0 [2];
  byte local_a8 [8];
  undefined8 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined4 uStack_80;
  int iStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 uStack_68;
  uint *local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  longlong *local_48;
  
  uVar18 = 0;
  uVar15 = (ulonglong)local_res8 >> 0x20;
  local_res8 = (int *)(uVar15 << 0x20);
  local_res10[0] = param_2;
  if ((*(byte *)(*(longlong *)(param_1 + 0x130) + 0xa4) & 1) != 0) {
    uVar9 = UPackageMapClient::ExportNetGUIDForReplay(param_1,local_res10,param_3,param_4,param_5);
    if (*param_4 != 0) {
      FMemory::Free();
    }
    return uVar9;
  }
  local_res8 = (int *)(uVar15 << 0x20);
  do {
    if (*(longlong *)(param_1 + 0x300) == 0) {
      lVar14 = operator_new(0x110);
      uVar15 = uVar18;
      if (lVar14 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x130);
        iVar10 = -0x50;
        if (*(char *)(lVar5 + 0x193c) != '\0') {
          iVar10 = -0x68;
        }
        uVar15 = FOutBunch::FOutBunch
                           (lVar14,param_1,
                            (longlong)
                            ((iVar10 - *(int *)(lVar5 + 0x128)) + *(int *)(lVar5 + 0xa0) * 8));
      }
      *(ulonglong *)(param_1 + 0x300) = uVar15;
      *(undefined1 *)(uVar15 + 0xb0) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x300) + 0xb1) = 1;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x300) + 0xe9);
      *pbVar1 = *pbVar1 | 2;
      FBitWriter::WriteBit(*(undefined8 *)(param_1 + 0x300),0);
      plVar6 = *(longlong **)(param_1 + 0x300);
      *(undefined4 *)(param_1 + 0x308) = 0;
      puVar7 = *(undefined4 **)plVar6[1];
      if ((undefined4 *)((undefined8 *)plVar6[1])[1] < puVar7 + 1) {
        (**(code **)(*plVar6 + 0x50))(plVar6,param_1 + 0x308,4);
        if ((*(byte *)((longlong)plVar6 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar6,param_1 + 0x308,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x308) = *puVar7;
        *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 4;
      }
    }
    if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
      if (param_3 == 0) {
        if ((int)param_4[1] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*param_4;
        }
      }
      else {
        local_res8 = *(int **)(param_3 + 0x18);
        FName::ToString(&local_res8,&local_e8);
        uVar18 = 1;
        puVar17 = &DAT_143f3eda8;
        if (local_e0 != 0) {
          puVar17 = local_e8;
        }
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x464,L"ExportNetGUID - CurrentExportNetGUIDs.Num() != 0 (%s).",puVar17);
      if ((uVar18 != 0) && (local_e8 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      lVar14 = 0;
      puVar17 = &DAT_143f3eda8;
      if (param_3 == 0) {
        if ((int)param_4[1] != 0) {
          puVar17 = (undefined2 *)*param_4;
        }
      }
      else {
        local_res8 = *(int **)(param_3 + 0x18);
        lVar14 = 2;
        FName::ToString(&local_res8,&local_e8);
        if (local_e0 != 0) {
          puVar17 = local_e8;
        }
      }
      FDebug::AssertFailed
                (&DAT_14511e45b,"Unknown",0x464,
                 L"ExportNetGUID - CurrentExportNetGUIDs.Num() != 0 (%s).",puVar17);
LAB_1425e3146:
      if ((lVar14 != 0) && (local_e8 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      break;
    }
    local_e8 = (undefined2 *)0x0;
    local_a0 = *(undefined8 *)(*(longlong *)(param_1 + 0x300) + 0xa0);
    local_a8[0] = *(byte *)(*(longlong *)(param_1 + 0x300) + 0x28) >> 7;
    *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x148) = 1;
    local_e0 = (uint)param_4[1];
    lVar14 = (longlong)(int)local_e0;
    _Src = (void *)*param_4;
    if (local_e0 == 0) {
      local_dc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
      _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar14 * 2);
    }
    FUN_1425e9660(param_1,*(undefined8 *)(param_1 + 0x300),local_res10[0],param_3,&local_e8,param_5)
    ;
    *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x148) = 0;
    iVar10 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c);
    if (iVar10 == 0) {
      FBitWriterMark::Pop(local_a8);
      break;
    }
    plVar6 = (longlong *)(param_1 + 0x148);
    if (-1 < *(char *)(*(longlong *)(param_1 + 0x300) + 0x28)) {
      local_e8 = (undefined2 *)0x0;
      local_e0 = 0;
      local_dc = 0;
      uVar15 = uVar18;
      if (0 < iVar10) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_e8,iVar10);
        uVar15 = (ulonglong)local_e0;
      }
      uVar11 = (uint)uVar15;
      iVar10 = *(int *)(param_1 + 0x170);
      puStack_88 = (uint *)(param_1 + 0x158);
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 1;
      local_c8._4_4_ = 0;
      uStack_c0 = 0;
      if (iVar10 == 0) goto LAB_1425e2f40;
      puVar20 = *(uint **)(param_1 + 0x168);
      if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
        puVar20 = puStack_88;
      }
      uVar4 = *puVar20;
      uVar19 = uVar18;
      goto joined_r0x0001425e2ee9;
    }
    FBitWriterMark::Pop(local_a8);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(plVar6,0);
    if ((*(int *)(param_1 + 0x308) == 0) || (iVar10 = (int)local_res8, (int)local_res8 == 1)) {
      if (param_3 == 0) {
        if ((int)param_4[1] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*param_4;
        }
      }
      else {
        local_res8 = *(int **)(param_3 + 0x18);
        FName::ToString(&local_res8,&local_e8);
        uVar18 = 0x10;
        puVar17 = &DAT_143f3eda8;
        if (local_e0 != 0) {
          puVar17 = local_e8;
        }
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x48d,
                 L"ExportNetGUID - Failed to serialize NetGUID into single bunch. (%s)",puVar17);
      if ((uVar18 != 0) && (local_e8 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      lVar14 = 0;
      puVar17 = &DAT_143f3eda8;
      if (param_3 == 0) {
        if ((int)param_4[1] != 0) {
          puVar17 = (undefined2 *)*param_4;
        }
      }
      else {
        local_res8 = *(int **)(param_3 + 0x18);
        lVar14 = 0x20;
        FName::ToString(&local_res8,&local_e8);
        if (local_e0 != 0) {
          puVar17 = local_e8;
        }
      }
      FDebug::AssertFailed
                (&DAT_14511e45d,"Unknown",0x48d,
                 L"ExportNetGUID - Failed to serialize NetGUID into single bunch. (%s)",puVar17);
      goto LAB_1425e3146;
    }
    iVar13 = *(int *)(param_1 + 0x170);
    uStack_d0 = (uint *)(param_1 + 0x158);
    local_d8 = (longlong *)0x100000000;
    local_c8._4_4_ = 0;
    uStack_c0 = 0;
    if (iVar13 != 0) {
      puVar20 = *(uint **)(param_1 + 0x168);
      if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
        puVar20 = uStack_d0;
      }
      uVar11 = *puVar20;
      uVar15 = uVar18;
      uVar19 = uVar18;
      while (uVar11 == 0) {
        iVar12 = (int)uVar15;
        uStack_c0 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_c0;
        uVar15 = (ulonglong)(iVar12 + 1U);
        local_d8._4_4_ = (uint)((ulonglong)local_d8 >> 0x20);
        local_d8 = (longlong *)CONCAT44(local_d8._4_4_,iVar12 + 1U);
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_1425e2c60;
        uVar11 = puVar20[(longlong)iVar12 + 1];
      }
      uVar11 = -uVar11 & uVar11;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_d8 = (longlong *)CONCAT44(uVar11,(uint)local_d8);
      if (uVar11 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      local_c8._4_4_ = (uStack_c0 - iVar12) + 0x1f;
      if (iVar13 < local_c8._4_4_) {
LAB_1425e2c60:
        local_c8._4_4_ = iVar13;
      }
    }
    local_c8._0_4_ = 0xffffffff;
    uStack_80 = 0xffffffff;
    iStack_7c = local_c8._4_4_;
    uStack_78 = uStack_c0;
    uStack_74 = iStack_bc;
    uStack_90 = local_d8;
    uStack_58 = CONCAT44(local_c8._4_4_,0xffffffff);
    uStack_68 = local_d8;
    local_50 = uStack_c0;
    uStack_4c = iStack_bc;
    local_98 = plVar6;
    puStack_88 = uStack_d0;
    local_70 = plVar6;
    local_60 = uStack_d0;
    local_48 = plVar6;
    if (local_c8._4_4_ < iVar13) {
      plVar3 = (longlong *)(param_1 + 0xe0);
      iVar13 = local_c8._4_4_;
      do {
        piVar2 = (int *)(*local_70 + (longlong)iVar13 * 0xc);
        if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
          iVar13 = *piVar2;
          lVar14 = *(longlong *)(param_1 + 0x120);
          if (*(longlong *)(param_1 + 0x120) == 0) {
            lVar14 = param_1 + 0x118;
          }
          iVar12 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x128) - 1U & (longlong)iVar13) *
                                     4);
          if (iVar12 != -1) {
            do {
              piVar16 = (int *)((longlong)iVar12 * 0x10 + *plVar3);
              if (*piVar16 == iVar13) {
                if ((iVar12 != -1) && (piVar16 != (int *)0x0)) goto LAB_1425e2d55;
                break;
              }
              iVar12 = piVar16[2];
            } while (iVar12 != -1);
          }
        }
        local_res8 = piVar2;
        TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FNetworkGUID_const_&>_>(plVar3,local_b0,&local_res8,0);
        piVar16 = (int *)((longlong)local_b0[0] * 0x10 + *plVar3);
LAB_1425e2d55:
        piVar16[1] = piVar16[1] + -1;
        uStack_58 = CONCAT44(uStack_58._4_4_,(uint)uStack_58 & ~uStack_68._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
        iVar13 = uStack_58._4_4_;
      } while (uStack_58._4_4_ < (int)local_60[6]);
    }
    UPackageMapClient::ExportNetGUIDHeader(param_1);
    local_res8 = (int *)CONCAT44(local_res8._4_4_,iVar10 + 1);
  } while (iVar10 + 1 < 2);
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return 0;
joined_r0x0001425e2ee9:
  if (uVar4 != 0) {
    local_d8._4_4_ = -uVar4 & uVar4;
    iVar13 = 0x1f;
    if (local_d8._4_4_ != 0) {
      for (; local_d8._4_4_ >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (local_d8._4_4_ == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    local_c8._4_4_ = (uStack_c0 - iVar13) + 0x1f;
    if (iVar10 < local_c8._4_4_) {
LAB_1425e2f3c:
      local_c8._4_4_ = iVar10;
    }
LAB_1425e2f40:
    uStack_80 = 0xffffffff;
    iStack_7c = local_c8._4_4_;
    uStack_78 = uStack_c0;
    uStack_74 = iStack_bc;
    uStack_90._0_4_ = (uint)local_d8;
    uStack_90._4_4_ = local_d8._4_4_;
    uStack_d0._0_4_ = (uint)local_d8;
    uStack_d0._4_4_ = local_d8._4_4_;
    local_b8 = uStack_c0;
    uStack_b4 = iStack_bc;
    uStack_c0 = 0xffffffff;
    iStack_bc = local_c8._4_4_;
    bVar8 = local_c8._4_4_ < iVar10;
    puVar17 = local_e8;
    local_d8 = plVar6;
    local_98 = plVar6;
    local_c8 = puStack_88;
    if (bVar8) {
      do {
        iVar10 = iStack_bc;
        iVar13 = (int)uVar15;
        lVar14 = *local_d8;
        local_e0 = iVar13 + 1;
        if (local_dc < (int)local_e0) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_e8,uVar15);
          puVar17 = local_e8;
        }
        uVar11 = local_e0;
        uVar15 = (ulonglong)local_e0;
        *(undefined4 *)(puVar17 + (longlong)iVar13 * 2) =
             *(undefined4 *)(lVar14 + (longlong)iVar10 * 0xc);
        uStack_c0 = uStack_c0 & ~uStack_d0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
      } while (iStack_bc < (int)local_c8[6]);
    }
    lVar14 = *(longlong *)(param_1 + 0x300);
    if (uVar11 != 0) {
      iVar10 = *(int *)(lVar14 + 0xf8);
      if (*(int *)(lVar14 + 0xfc) < (int)(uVar11 + iVar10)) {
        TArray<float,FDefaultAllocator>::ResizeTo((longlong *)(lVar14 + 0xf0));
        iVar10 = *(int *)(lVar14 + 0xf8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(lVar14 + 0xf0) + (longlong)iVar10 * 4),puVar17,
                 (longlong)(int)uVar11 << 2);
      *(int *)(lVar14 + 0xf8) = *(int *)(lVar14 + 0xf8) + uVar11;
    }
    if (puVar17 != (undefined2 *)0x0) {
      FMemory::Free(puVar17);
    }
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(plVar6,0);
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + 1;
    if (*param_4 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  iVar13 = (int)uVar19;
  uStack_c0 = (int)uVar18 + 0x20;
  uVar18 = (ulonglong)uStack_c0;
  local_d8._0_4_ = iVar13 + 1;
  uVar19 = (ulonglong)(uint)local_d8;
  if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) goto LAB_1425e2f3c;
  uVar4 = puVar20[(longlong)iVar13 + 1];
  goto joined_r0x0001425e2ee9;
}



// FUNCTION 1425e3190 ExportNetGUIDForReplay body=662 status=ok
// SIG undefined ExportNetGUIDForReplay(void)

undefined8
UPackageMapClient::ExportNetGUIDForReplay
          (longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 local_res8;
  int *local_e8;
  undefined *local_e0;
  undefined **local_d8 [18];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  plVar2 = *(longlong **)(param_1 + 0x2e8);
  piVar11 = (int *)0x0;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar7 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar7 = plVar2 + 7;
    }
    iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)plVar2[9] - 1U & (longlong)*param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar5 * 0x10 + *plVar2);
        if (*piVar9 == *param_2) {
          if (iVar5 != -1) goto LAB_1425e3211;
          break;
        }
        iVar5 = piVar9[2];
      } while (iVar5 != -1);
    }
  }
  piVar9 = piVar11;
LAB_1425e3211:
  piVar8 = piVar9 + 1;
  if (piVar9 == (int *)0x0) {
    piVar8 = piVar11;
  }
  if (piVar8 == (int *)0x0) {
    local_e0 = &DAT_14511ddf4;
    local_e8 = param_2;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(plVar2,&local_res8,&local_e8,0);
    iVar5 = *(int *)(*plVar2 + 4 + (longlong)(int)local_res8 * 0x10);
  }
  else {
    iVar5 = *piVar8;
  }
  if (iVar5 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x310);
    uVar1 = *(undefined1 *)(lVar3 + 0x148);
    *(undefined1 *)(lVar3 + 0x148) = 1;
    iVar5 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = iVar5 + 1;
    if (*(int *)(param_1 + 0x144) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x138,iVar5);
    }
    iVar4 = DAT_146b04838;
    puVar10 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x138));
    *puVar10 = 0;
    puVar10[1] = 0;
    if (0 < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar10);
    }
    local_res8 = 0;
    FArchive::FArchive(local_d8);
    local_48 = 0;
    local_d8[0] = &PTR_FUN_143f4a100;
    local_38 = 0;
    local_40 = puVar10;
    FArchive::SetIsSaving(local_d8,1);
    FArchive::SetIsPersistent(local_d8,0);
    uVar6 = FString::FString(&local_e8,param_4);
    FUN_1425e9660(param_1,local_d8,*param_2,param_3,uVar6,param_5);
    plVar2 = *(longlong **)(param_1 + 0x2e8);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar7 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar7 = plVar2 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)plVar2[9] - 1U & (longlong)*param_2) * 4);
      if (iVar5 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar5 * 0x10 + *plVar2);
          if (*piVar9 == *param_2) {
            if (iVar5 != -1) goto LAB_1425e33c1;
            break;
          }
          iVar5 = piVar9[2];
        } while (iVar5 != -1);
      }
    }
    piVar9 = piVar11;
LAB_1425e33c1:
    piVar8 = piVar9 + 1;
    if (piVar9 == (int *)0x0) {
      piVar8 = piVar11;
    }
    if (piVar8 != (int *)0x0) {
      *piVar8 = -1;
    }
    FArchive::~FArchive(local_d8);
    *(undefined1 *)(lVar3 + 0x148) = uVar1;
  }
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(param_1 + 0x148,0);
  *(undefined4 *)(param_1 + 0x308) = 0;
  return 1;
}



// FUNCTION 1425e3430 ExportNetGUIDHeader body=143 status=ok
// SIG undefined ExportNetGUIDHeader(void)

void UPackageMapClient::ExportNetGUIDHeader(longlong param_1)

{
  int iVar1;
  
  FUN_1425ed710(*(undefined8 *)(param_1 + 0x300),0,*(undefined4 *)(param_1 + 0x308));
  if (*(int *)(*(longlong *)(param_1 + 0x300) + 0xf8) != 0) {
    iVar1 = *(int *)(param_1 + 0x2f8);
    *(int *)(param_1 + 0x2f8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2fc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2f0,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x2f0) + (longlong)iVar1 * 8) =
         *(undefined8 *)(param_1 + 0x300);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  return;
}



// FUNCTION 1425e34c0 FUN_1425e34c0 body=681 status=ok
// SIG undefined FUN_1425e34c0(void)

undefined8
FUN_1425e34c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  void *local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if ((param_5 & 0x10000000) == 0) {
    if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar5 == '\0')) {
      uVar4 = DAT_146534328;
      pvVar3 = DAT_146534320;
      if ((void **)param_2 != &DAT_146534320) {
        iVar10 = (int)DAT_146534328;
        *(int *)(param_2 + 1) = iVar10;
        if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar4 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar3,(longlong)iVar10 * 2);
        }
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&param_5);
      plVar7 = (longlong *)UOnlineEngineInterface::Get();
      puVar8 = (ulonglong *)(**(code **)(*plVar7 + 0x2a0))(plVar7,&local_38);
      plVar7 = *(longlong **)(param_1 + 8);
      if (param_5 == *puVar8) {
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x28))(plVar7,local_28);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(&local_38,&DAT_14511e1e4,puVar12);
        pvVar3 = local_38;
        iVar10 = 0;
        if (local_30 != 0) {
          iVar10 = local_30 + -1;
        }
        if (iVar10 != 0) {
          iVar2 = (int)param_2[1];
          iVar6 = (uint)(iVar2 == 0) + iVar2 + iVar10;
          *(int *)(param_2 + 1) = iVar6;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
          *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x28))(plVar7,local_18);
        puVar12 = &DAT_143f3eda8;
        if (*(int *)(puVar9 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar9;
        }
        puVar9 = (undefined8 *)FName::ToString(&param_5,local_28);
        if (*(int *)(puVar9 + 1) != 0) {
          puVar12 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(&local_38,L"%s:%s",puVar12,puVar11);
        pvVar3 = local_38;
        iVar10 = 0;
        if (local_30 != 0) {
          iVar10 = local_30 + -1;
        }
        if (iVar10 != 0) {
          iVar2 = (int)param_2[1];
          iVar6 = (uint)(iVar2 == 0) + iVar2 + iVar10;
          *(int *)(param_2 + 1) = iVar6;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar10 * 2);
          *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1425e3770 FUN_1425e3770 body=323 status=ok
// SIG undefined FUN_1425e3770(void)

ulonglong FUN_1425e3770(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar6 = FUN_142623860();
  if ((((char)uVar6 == '\0') || (lVar1 = param_1[5], lVar1 == 0)) ||
     ((*(byte *)(lVar1 + 0x2c) & 1) == 0)) {
    return uVar6 & 0xffffffffffffff00;
  }
  uVar5 = (**(code **)(*param_1 + 0x228))(param_1);
  *(undefined4 *)(param_2 + 8) = uVar5;
  plVar7 = (longlong *)param_1[0x36];
  if (plVar7 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar7 + 0x2f0))(plVar7,0xe);
    if (cVar4 != '\0') goto LAB_1425e37e8;
  }
  plVar7 = (longlong *)UMaterial::GetDefaultMaterial(0);
LAB_1425e37e8:
  *(longlong **)(param_2 + 0x60) = plVar7;
  param_1[0x36] = (longlong)plVar7;
  *(undefined8 *)(param_2 + 0x38) = 0x3f8000003f800000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  lVar2 = param_1[3];
  if (((lVar2 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 100) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x1e) & 0x80) == 0)) {
    uVar5 = *(undefined4 *)(lVar2 + 0x234);
    uVar3 = *(undefined4 *)(lVar2 + 0x238);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar2 + 0x230);
    *(undefined4 *)(param_2 + 0x3c) = uVar5;
    *(undefined4 *)(param_2 + 0x40) = uVar3;
  }
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)((longlong)param_1 + 0x234);
  *(char *)(param_2 + 0xed) = (char)param_1[0x46];
  lVar1 = param_1[0x40];
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(lVar1 + 0x160);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1425e38c0 FUN_1425e38c0 body=596 status=ok
// SIG undefined FUN_1425e38c0(void)

void FUN_1425e38c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte bVar10;
  float fVar11;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  
  lVar6 = FUN_142627a50(param_2,param_1);
  bVar10 = 0;
  if (*(char *)(lVar6 + 0x14) != '\0') {
    do {
      iVar1 = *(int *)(param_1 + 0x50);
      lVar9 = (ulonglong)bVar10 * 0x90;
      if (iVar1 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = rand();
        iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
        iVar4 = iVar1 + -1;
        if (iVar5 <= iVar1 + -1) {
          iVar4 = iVar5;
        }
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 8);
      if (lVar2 != 0) {
        local_a8 = 0xbf800000;
        local_a4 = 0;
        FQuat::FindBetweenVectors(local_58,&local_a8,lVar6 + 0x50 + lVar9);
        FQuat::Rotator(local_58,&local_b8);
        fVar11 = (float)FUN_1424116d0(param_1 + 0x70,0,0,0);
        local_b0 = local_b0 + fVar11;
        cVar3 = FUN_14263b0c0(param_2);
        if (cVar3 != '\0') {
          pfVar7 = (float *)FMatrix::Rotator(param_2 + 0xb0,local_68);
          local_b8 = local_b8 + *pfVar7;
          fStack_b4 = fStack_b4 + pfVar7[1];
          local_b0 = local_b0 + pfVar7[2];
        }
        local_98 = CONCAT44(fStack_b4,local_b8);
        local_88 = *(undefined8 *)(lVar9 + 0x2c + lVar6);
        local_90 = local_b0;
        local_80 = *(undefined4 *)(lVar9 + 0x34 + lVar6);
        local_78 = *(undefined8 *)(param_1 + 0x58);
        local_70 = *(undefined4 *)(param_1 + 0x60);
        uVar8 = FWeakObjectPtr::Get(lVar6 + 0x84 + lVar9);
        lVar9 = FUN_14245ef00(uVar8,lVar2,&local_78,&local_88,&local_98,0,0,0,0x3c23d70a);
        if (lVar9 != 0) {
          FUN_142376e80(lVar9,*(float *)(param_1 + 100) - *(float *)(param_1 + 0x68));
        }
      }
      bVar10 = bVar10 + 1;
    } while (bVar10 < *(byte *)(lVar6 + 0x14));
  }
  return;
}



// FUNCTION 1425e3b20 FUN_1425e3b20 body=144 status=ok
// SIG undefined FUN_1425e3b20(void)

undefined8 * FUN_1425e3b20(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int local_res18 [4];
  
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::FindId
            (param_1,local_res18);
  puVar2 = (undefined8 *)0x0;
  if (local_res18[0] != -1) {
    puVar2 = (undefined8 *)(*param_1 + (longlong)local_res18[0] * 0x18);
  }
  if (puVar2 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1425e3bb0 FindId body=272 status=ok
// SIG undefined FindId(void)

int * TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (**(ulonglong **)(*param_1 + (longlong)iVar4 * 0x18) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1425e3cc0 FUN_1425e3cc0 body=474 status=ok
// SIG undefined FUN_1425e3cc0(void)

longlong FUN_1425e3cc0(longlong *param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int *piVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 local_res10;
  longlong *local_28 [2];
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0xc);
    plVar7 = (longlong *)0x0;
    plVar4 = plVar7;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      plVar4 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18);
    }
    if (((*(uint *)(plVar4 + 1) >> 0x1d & 1) == 0) && ((*(byte *)(param_2 + 0x94) & 2) == 0)) {
      TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::FindId
                (param_1,&local_res10,param_2);
      if (((int)local_res10 != -1) &&
         (lVar1 = *param_1 + (longlong)(int)local_res10 * 0x18, lVar1 != 0)) {
        if (param_4 == (undefined1 *)0x0) {
          return lVar1;
        }
        *param_4 = 0;
        return lVar1;
      }
      if ((*(longlong *)(param_2 + 0x120) != param_3) && (local_res10 = 0x11e, param_3 != 0x11e)) {
        return 0;
      }
      plVar4 = (longlong *)operator_new(0xd0);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = param_2;
        FWeakObjectPtr::operator=(plVar4 + 1,param_2);
        *(uint *)(plVar4 + 5) = *(uint *)(plVar4 + 5) & 0xfffffffc;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[10] = 0;
        plVar4[0xb] = 0;
        *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
        *(undefined4 *)((longlong)plVar4 + 100) = 0;
        plVar4[0xe] = 0;
        *(undefined4 *)(plVar4 + 0xf) = 0;
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        plVar4[0x14] = 0;
        plVar4[0x15] = 0;
        *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
        *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
        plVar4[0x18] = 0;
        *(undefined4 *)(plVar4 + 0x19) = 0;
        plVar7 = plVar4;
      }
      local_28[0] = plVar7;
      piVar5 = (int *)FUN_1425d6d10(param_1,&local_res10,local_28,0);
      lVar1 = *param_1 + (longlong)*piVar5 * 0x18;
      FUN_1425d6b00(param_1 + 10,local_28,lVar1,0);
      if (param_4 == (undefined1 *)0x0) {
        return lVar1;
      }
      *param_4 = 1;
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1425e3ea0 FUN_1425e3ea0 body=284 status=ok
// SIG undefined FUN_1425e3ea0(void)

void FUN_1425e3ea0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  (**(code **)(*param_1 + 8))(0,&local_28);
  plVar8 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (*(int *)(param_2 + 8) < 2) {
    return;
  }
  uVar7 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  iVar4 = FUN_141594550(param_2,&local_38,&DAT_14511e1ec,1);
  plVar8 = local_38;
  if (iVar4 == 2) {
    if ((int)local_38[1] == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_38;
    }
    puVar5 = (undefined8 *)FName::FName(local_res10,puVar6,1);
    uVar7 = *puVar5;
    plVar8 = plVar8 + 2;
  }
  else if (iVar4 != 1) goto LAB_1425e3f7a;
  FUN_1425f6000(param_1,uVar7,plVar8);
LAB_1425e3f7a:
  plVar8 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 1425e3fc0 FUN_1425e3fc0 body=310 status=ok
// SIG undefined FUN_1425e3fc0(void)

void FUN_1425e3fc0(longlong param_1,longlong *param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined4 local_res20 [2];
  longlong local_d8;
  ulonglong local_d0;
  undefined **local_c8;
  longlong *local_c0;
  byte local_9f;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_d8 = 0;
  local_d0 = 0;
  local_res20[0] = param_4;
  FArchive::FArchive(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_143f4a100;
  local_30 = &local_d8;
  local_28 = 0;
  FArchive::SetIsSaving(&local_c8,1);
  FArchive::SetIsPersistent(&local_c8,0);
  if ((undefined4 *)local_c0[1] < (undefined4 *)*local_c0 + 1) {
    (*(code *)local_c8[10])(&local_c8,local_res20,4);
    if ((local_9f & 0x10) != 0) {
      FArchive::ByteSwap(&local_c8,local_res20,4);
    }
  }
  else {
    local_res20[0] = *(undefined4 *)*local_c0;
    *local_c0 = *local_c0 + 4;
  }
  FUN_14158ce90(&local_c8,param_2);
  lVar1 = 0x30;
  if (param_3 != '\0') {
    lVar1 = 0x40;
  }
  FSHA1::HMACBuffer(*(undefined8 *)(lVar1 + param_1),0x40,local_d8,local_d0 & 0xffffffff,param_5);
  FArchive::~FArchive(&local_c8);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425e4100 FUN_1425e4100 body=1319 status=ok
// SIG undefined FUN_1425e4100(void)

void FUN_1425e4100(longlong *param_1,int *param_2,longlong *param_3)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined2 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  ulonglong local_res10;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  piVar13 = (int *)0x0;
  iVar11 = 0;
  local_res10 = local_res10 & 0xffffffff00000000;
  iVar2 = *param_2;
  if (iVar2 != 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
      if (iVar4 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar4 * 0x40 + *param_1);
          if (*piVar9 == iVar2) {
            if (iVar4 != -1) goto LAB_1425e4191;
            break;
          }
          iVar4 = piVar9[0xe];
        } while (iVar4 != -1);
      }
    }
    piVar9 = piVar13;
LAB_1425e4191:
    piVar12 = piVar9 + 2;
    if (piVar9 == (int *)0x0) {
      piVar12 = piVar13;
    }
    if (piVar12 == (int *)0x0) {
      FString::PrintfImpl(&local_48,&DAT_143f3edc0,iVar2);
      puVar10 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar10 = local_48;
      }
      FString::PrintfImpl(&local_58,L"[%s]NOT_IN_CACHE",puVar10);
      puVar10 = local_58;
      if (local_50 != 0) {
        iVar11 = local_50 + -1;
      }
      if (iVar11 != 0) {
        iVar2 = (int)param_3[1];
        iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar11;
        *(int *)(param_3 + 1) = iVar4;
        if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
        }
        pvVar1 = (void *)(*param_3 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
        *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      FUN_1425e4100(param_1,piVar12 + 2,param_3);
      iVar2 = (int)param_3[1];
      if (1 < iVar2) {
        iVar4 = (2 - (uint)(iVar2 != 0)) + iVar2;
        *(int *)(param_3 + 1) = iVar4;
        if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
        }
        puVar10 = (undefined2 *)(*param_3 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        *puVar10 = 0x2e;
        puVar10[1] = 0;
      }
      cVar3 = FWeakObjectPtr::IsValid(piVar12);
      local_res10 = 0;
      if (cVar3 == '\0') {
        if (*(longlong *)(piVar12 + 4) == 0) {
          FString::PrintfImpl(&local_48,&DAT_143f3edc0,*param_2);
          puVar10 = &DAT_143f3eda8;
          if (local_40 != 0) {
            puVar10 = local_48;
          }
          FString::PrintfImpl(&local_38,L"[%s]EMPTY",puVar10);
          puVar10 = local_38;
          if (local_30 != 0) {
            iVar11 = local_30 + -1;
          }
          if (iVar11 != 0) {
            iVar2 = (int)param_3[1];
            iVar4 = (uint)(iVar2 == 0) + iVar11 + iVar2;
            *(int *)(param_3 + 1) = iVar4;
            if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
            }
            pvVar1 = (void *)(*param_3 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          local_58 = local_48;
          if (local_38 != (undefined2 *)0x0) {
            FMemory::Free(local_38);
            local_58 = local_48;
          }
        }
        else {
          puVar7 = (undefined8 *)FName::ToString(piVar12 + 4,&local_58);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar7;
          }
          FString::PrintfImpl(&local_48,&DAT_143f3edc0,*param_2);
          puVar8 = &DAT_143f3eda8;
          if (local_40 != 0) {
            puVar8 = local_48;
          }
          FString::PrintfImpl(&local_38,L"[%s]%s",puVar8,puVar10);
          puVar10 = local_38;
          if (local_30 != 0) {
            iVar11 = local_30 + -1;
          }
          if (iVar11 != 0) {
            iVar2 = (int)param_3[1];
            iVar4 = (uint)(iVar2 == 0) + iVar11 + iVar2;
            *(int *)(param_3 + 1) = iVar4;
            if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
            }
            pvVar1 = (void *)(*param_3 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_38 != (undefined2 *)0x0) {
            FMemory::Free(local_38);
          }
          if (local_48 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
      else {
        if (*(longlong *)(piVar12 + 4) != 0) {
          lVar6 = FWeakObjectPtr::Get(piVar12);
          local_res10 = *(ulonglong *)(lVar6 + 0x18);
          FName::ToString(&local_res10,&local_48);
          puVar7 = (undefined8 *)FName::ToString(piVar12 + 4,&local_38);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar7;
          }
          puVar8 = &DAT_143f3eda8;
          if (local_40 != 0) {
            puVar8 = local_48;
          }
          FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
          piVar13 = (int *)0x3;
        }
        if ((((ulonglong)piVar13 & 2) != 0) &&
           (piVar13 = (int *)(ulonglong)((uint)piVar13 & 0xfffffffd), local_48 != (undefined2 *)0x0)
           ) {
          FMemory::Free();
        }
        if ((((ulonglong)piVar13 & 1) != 0) && (local_38 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        lVar6 = FWeakObjectPtr::Get(piVar12);
        local_res10 = *(ulonglong *)(lVar6 + 0x18);
        FName::ToString(&local_res10,&local_38);
        puVar10 = &DAT_143f3eda8;
        if (local_30 != 0) {
          puVar10 = local_38;
        }
        FString::PrintfImpl(&local_58,&DAT_143f3edc0,*param_2);
        puVar8 = &DAT_143f3eda8;
        if (local_50 != 0) {
          puVar8 = local_58;
        }
        FString::PrintfImpl(&local_48,L"[%s]%s",puVar8,puVar10);
        puVar10 = local_48;
        if (local_40 != 0) {
          iVar11 = local_40 + -1;
        }
        if (iVar11 != 0) {
          iVar2 = (int)param_3[1];
          iVar4 = (uint)(iVar2 == 0) + iVar11 + iVar2;
          *(int *)(param_3 + 1) = iVar4;
          if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
          }
          pvVar1 = (void *)(*param_3 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar11 * 2);
          *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free(local_48);
        }
        bVar14 = local_58 != (undefined2 *)0x0;
        local_58 = local_38;
        if (bVar14) {
          FMemory::Free();
          local_58 = local_38;
        }
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1425e4630 Get body=277 status=ok
// SIG undefined Get(void)

longlong UOnlineEngineInterface::Get(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (DAT_146b047c0 == 0) {
    uVar3 = GetPrivateStaticClass();
    lVar6 = 0;
    lVar4 = FUN_141799830(uVar3,0,L"/Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl",0,0x2000
                          ,0);
    if (lVar4 == 0) {
      lVar4 = GetPrivateStaticClass();
    }
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    DAT_146b047c0 = FUN_1417985e0(lVar4,uVar3,0,0,0,0,0,0,0);
    iVar1 = *(int *)(DAT_146b047c0 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
  }
  return DAT_146b047c0;
}



// FUNCTION 1425e4760 FUN_1425e4760 body=316 status=ok
// SIG undefined FUN_1425e4760(void)

undefined8 * FUN_1425e4760(undefined8 *param_1,longlong *param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_38;
  float local_30;
  
  iVar1 = (int)param_2[0x25] + -1;
  param_3 = (float)iVar1 * param_3;
  iVar5 = (int)param_3;
  iVar6 = (int)ROUND((param_3 + param_3) - 0.5) >> 1;
  fVar7 = param_3;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != param_3)) {
    auVar8._4_4_ = param_3;
    auVar8._0_4_ = param_3;
    auVar8._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar8);
    fVar7 = (float)(int)(iVar5 - (uVar2 & 1));
  }
  param_3 = param_3 - fVar7;
  lVar3 = (**(code **)(*param_2 + 0x108))(param_2,iVar6);
  if (lVar3 == 0) {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    local_38 = *(undefined8 *)(lVar3 + 0x10);
    local_30 = *(float *)(lVar3 + 0x18);
    lVar3 = (**(code **)(*param_2 + 0x108))(param_2,iVar6 + 1);
    if (lVar3 == 0) {
      puVar4 = &local_38;
    }
    else {
      puVar4 = (undefined8 *)(lVar3 + 0x10);
    }
    fVar7 = *(float *)(puVar4 + 1);
    *param_1 = CONCAT44(((float)((ulonglong)*puVar4 >> 0x20) - local_38._4_4_) * param_3 +
                        local_38._4_4_,
                        ((float)*puVar4 - (float)local_38) * param_3 + (float)local_38);
    *(float *)(param_1 + 1) = (fVar7 - local_30) * param_3 + local_30;
    *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  }
  return param_1;
}



// FUNCTION 1425e48a0 FUN_1425e48a0 body=246 status=ok
// SIG undefined FUN_1425e48a0(void)

longlong * FUN_1425e48a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x458);
  if (plVar2 == (longlong *)0x0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x1b);
    iVar1 = (int)param_2[1] + 0x1b;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,L"No_ParticleSystemComponent",0x1b);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,local_18);
    if (param_2 != plVar2) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_2 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1425e49a0 FUN_1425e49a0 body=521 status=ok
// SIG undefined FUN_1425e49a0(void)

undefined8 * FUN_1425e49a0(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[5];
  cVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar1);
  if (((cVar2 != '\0') && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) && ((int)param_1[0x45] != 0)) {
    puVar3 = (undefined8 *)FUN_14261b0a0(0x1f0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase(puVar3,*(undefined8 *)(lVar1 + 0x30));
      *(uint *)(puVar3 + 6) = *(uint *)(puVar3 + 6) & 0xfffffffe;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *puVar3 = &PTR_FUN_145129ef0;
      FUN_142619420(puVar3 + 7);
      puVar3[0x21] = 0;
      puVar3[7] = &PTR__scalar_deleting_destructor__145129ee0;
      puVar3[0x22] = 0;
      *(undefined1 *)(puVar3 + 0x23) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x11c) = 0;
      *(undefined2 *)((longlong)puVar3 + 0x124) = 0;
      puVar3[0x27] = 0;
      puVar3[0x27] = param_1[0x44];
      param_1[0x44] = 0;
      puVar3[0x25] = 0x3f800000;
      *(undefined4 *)(puVar3 + 0x26) = 0;
      *(int *)(puVar3 + 0x28) = (int)param_1[0x45];
      *(undefined4 *)((longlong)puVar3 + 0x144) = *(undefined4 *)((longlong)param_1 + 0x22c);
      param_1[0x45] = 0;
      puVar3[0x2a] = 0;
      puVar3[0x2d] = 0;
      puVar3[0x2e] = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 0xffffffff;
      *(undefined1 *)((longlong)puVar3 + 0x17c) = 0;
      puVar3[0x30] = 0;
      puVar3[0x31] = 0;
      puVar3[0x32] = 0;
      puVar3[0x33] = 0;
      puVar3[0x34] = 0;
      puVar3[0x35] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      puVar3[0x38] = 0;
      *(undefined1 *)((longlong)puVar3 + 0x1e4) = 1;
      *(uint *)(puVar3 + 0x3d) = *(uint *)(puVar3 + 0x3d) & 0xffffffe0;
      *(undefined1 *)((longlong)puVar3 + 0x1ec) = 0;
    }
    FUN_1425d9a70(puVar3 + 0x30,param_1 + 0x4d);
    cVar2 = (**(code **)(*param_1 + 0x238))(param_1,puVar3 + 7);
    if (cVar2 != '\0') {
      FUN_1425e81f0(puVar3,param_2,param_1,*(undefined8 *)(param_1[0x40] + 0x40),param_3);
      return puVar3;
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425e4bd0 FUN_1425e4bd0 body=3596 status=ok
// SIG undefined FUN_1425e4bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425e4bd0(longlong param_1,longlong param_2,undefined8 param_3,void *param_4,
                  undefined4 param_5,longlong *param_6,longlong param_7)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  ushort *puVar25;
  float *pfVar26;
  ushort *puVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  uint local_200;
  undefined8 *local_1f8;
  undefined1 local_1e8 [8];
  int local_1e0 [2];
  uint local_1d8 [4];
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  void *local_1b8;
  longlong *local_1b0;
  int local_1a8;
  int local_1a4;
  longlong local_1a0;
  int *local_198;
  longlong *local_190;
  ushort *local_188;
  longlong *local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [8];
  longlong *local_150;
  longlong *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  puStack_170 = local_1e8;
  local_178 = (longlong *)&DAT_14060d670;
  local_150 = param_6;
  local_1e8[0] = 0;
  local_1b8 = param_4;
  local_1a0 = param_2;
  local_188 = (ushort *)param_3;
  lVar8 = FUN_1415d8310(&local_178,&DAT_146216a38);
  puVar14 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (ulonglong *)(lVar8 + 0x18);
  puVar20 = puVar14 + 2;
  if (*(undefined8 **)(lVar8 + 0x20) < puVar20) {
    FMemStackBase::AllocateNewChunk(puVar1,0x20);
    puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar20 = puVar14 + 2;
  }
  puVar18 = (undefined8 *)0x0;
  *puVar1 = (ulonglong)puVar20;
  puVar20 = puVar18;
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[1] = 0;
    *puVar14 = &PTR_FUN_1445515c0;
    puVar20 = puVar14;
  }
  iVar7 = (int)param_6[0x1a];
  *(int *)(param_6 + 0x1a) = iVar7 + 1;
  if (*(int *)((longlong)param_6 + 0xd4) < iVar7 + 1) {
    FUN_140822430(param_6 + 0x19,iVar7);
  }
  *(undefined8 **)(param_6[0x19] + (longlong)iVar7 * 8) = puVar20;
  puVar20[1] = param_7;
  iVar7 = *(int *)(param_1 + 0xc4);
  iVar24 = *(int *)(param_1 + 0x44);
  if ((-1 < iVar7) && (iVar7 < iVar24)) {
    iVar24 = iVar7;
  }
  if (iVar24 != 0) {
    plVar19 = (longlong *)(param_7 + 2000);
    uVar12 = iVar24 * 0x70;
    lVar8 = *plVar19;
    local_200 = 0;
    local_1a8 = iVar24;
    local_190 = plVar19;
    if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x1c) < uVar12)) {
      local_1f8 = &local_138;
      if (DAT_1464c9c54 == 0x14) {
        local_200 = 2;
      }
      local_200 = local_200 | 0x200;
      local_128 = 1;
      local_114 = 0;
      local_124 = _DAT_1468b5d78;
      uStack_120 = uRam00000001468b5d7c;
      uStack_11c = uRam00000001468b5d80;
      uStack_118 = uRam00000001468b5d84;
      local_110 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_108 = 0;
      local_100 = 0;
      local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar12);
      (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_1d8,&DAT_146ab6e78,0x70);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar19,local_1d8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1d8);
      (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_1e0,&DAT_146ab6e78,*plVar19);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_7 + 0x7f8,local_1e0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1e0);
      lVar8 = *plVar19;
    }
    local_200 = 1;
    local_208._0_4_ = uVar12;
    lVar9 = (**(code **)(*DAT_146ab6358 + 0x5c0))(DAT_146ab6358,&DAT_146ab6e78,lVar8,0);
    plVar17 = (longlong *)(param_7 + 0x7e0);
    uVar12 = iVar24 << 4;
    lVar8 = *plVar17;
    local_1b0 = plVar17;
    if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x1c) < uVar12)) {
      local_1f8 = &local_138;
      local_200 = 0;
      if (DAT_1464c9c54 == 0x14) {
        local_200 = 2;
      }
      local_128 = 1;
      local_200 = local_200 | 0x200;
      local_114 = 0;
      local_110 = 0;
      local_124 = _DAT_1468b5d78;
      uStack_120 = uRam00000001468b5d7c;
      uStack_11c = uRam00000001468b5d80;
      uStack_118 = uRam00000001468b5d84;
      local_108 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_100 = 0;
      local_208._0_4_ = uVar12;
      (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_1d8,&DAT_146ab6e78,0x10);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar17,local_1d8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1d8);
      (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_1e0,&DAT_146ab6e78,*plVar17);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_7 + 0x808,local_1e0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1e0);
      lVar8 = *plVar17;
    }
    local_200 = 1;
    local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar12);
    lVar8 = (**(code **)(*DAT_146ab6358 + 0x5c0))(DAT_146ab6358,&DAT_146ab6e78,lVar8,0);
    puVar27 = local_188;
    if (0 < (longlong)iVar24) {
      puVar21 = (undefined4 *)(lVar8 + 8);
      puVar15 = (undefined4 *)(lVar9 + 0x20);
      do {
        local_208 = &local_f8;
        pfVar26 = (float *)((ulonglong)
                            ((uint)*(ushort *)
                                    (*(longlong *)(param_1 + 0x68) + (longlong)puVar18 * 2) *
                            *(int *)(param_1 + 0x48)) + *(longlong *)(param_1 + 0x60));
        fVar32 = pfVar26[0x1c];
        fVar33 = pfVar26[0x1d];
        fVar34 = pfVar26[0x1e];
        puVar15[-8] = pfVar26[0x1b];
        puVar15[-7] = fVar32;
        puVar15[-6] = fVar33;
        puVar15[-5] = fVar34;
        FUN_1425e6df0(param_1,pfVar26,local_1a0,puVar27);
        puVar15[-4] = (undefined4)local_f8;
        puVar15[-3] = local_e8;
        puVar15[-2] = uStack_d8;
        puVar15[-1] = (undefined4)local_c8;
        *puVar15 = local_f8._4_4_;
        puVar15[1] = local_e4;
        puVar15[2] = local_d4;
        puVar15[3] = local_c8._4_4_;
        puVar15[4] = (undefined4)uStack_f0;
        puVar15[5] = uStack_e0;
        puVar15[6] = (undefined4)local_d0;
        puVar15[7] = local_c0;
        iVar7 = *(int *)(param_1 + 200);
        local_1c8 = (longlong *)CONCAT44(uStack_e0,(undefined4)uStack_f0);
        uStack_1c0 = (undefined4)local_d0;
        uStack_1bc = local_c0;
        fVar32 = pfVar26[4] - *pfVar26;
        fVar33 = pfVar26[5] - pfVar26[1];
        fVar34 = pfVar26[6] - pfVar26[2];
        if (iVar7 != 0) {
          fVar32 = (pfVar26[4] + *(float *)((longlong)pfVar26 + (longlong)iVar7 + 0xc)) -
                   (*pfVar26 + *(float *)((longlong)pfVar26 + (longlong)iVar7 + 0x3c));
          fVar33 = (pfVar26[5] + *(float *)((longlong)pfVar26 + (longlong)iVar7 + 0x10)) -
                   (pfVar26[1] + *(float *)((longlong)pfVar26 + (longlong)iVar7 + 0x40));
          fVar34 = (pfVar26[6] + *(float *)((longlong)pfVar26 + (longlong)iVar7 + 0x14)) -
                   (pfVar26[2] + *(float *)((longlong)pfVar26 + (longlong)iVar7 + 0x44));
        }
        if (((fVar32 == 0.0) && (fVar33 == 0.0)) && (fVar34 == 0.0)) {
          puVar15[8] = 0;
          puVar15[9] = 0;
          puVar15[10] = 0;
          puVar15[0xb] = 0x3f800000;
        }
        else {
          fVar29 = fVar34;
          if (*(char *)(param_1 + 0xec) != '\0') {
            local_1c8 = (longlong *)0x0;
            uStack_1c0 = 0;
            local_168 = (longlong *)CONCAT44(fVar33,fVar32);
            uStack_15c = 0;
            fVar29 = fVar33 * *(float *)(local_1a0 + 0x98);
            fVar30 = fVar32 * *(float *)(local_1a0 + 0x84);
            fVar31 = fVar32 * *(float *)(local_1a0 + 0x88);
            fVar32 = *(float *)(local_1a0 + 0xb0) * 0.0 + fVar34 * *(float *)(local_1a0 + 0xa0) +
                     fVar33 * *(float *)(local_1a0 + 0x90) + fVar32 * *(float *)(local_1a0 + 0x80);
            fVar33 = *(float *)(local_1a0 + 0xb4) * 0.0 + fVar34 * *(float *)(local_1a0 + 0xa4) +
                     fVar33 * *(float *)(local_1a0 + 0x94) + fVar30;
            fVar29 = *(float *)(local_1a0 + 0xb8) * 0.0 + fVar34 * *(float *)(local_1a0 + 0xa8) +
                     fVar29 + fVar31;
            fStack_160 = fVar34;
          }
          fVar34 = SQRT(fVar33 * fVar33 + fVar32 * fVar32 + fVar29 * fVar29);
          puVar15[0xb] = fVar34;
          if (fVar34 <= 1e-08) {
            *(undefined8 *)(puVar15 + 8) = _DAT_1468b5d90;
            fVar32 = DAT_1468b5d98;
          }
          else {
            fVar34 = 1.0 / fVar34;
            *(ulonglong *)(puVar15 + 8) = CONCAT44(fVar34 * fVar33,fVar34 * fVar32);
            puStack_170 = (undefined1 *)CONCAT44(puStack_170._4_4_,fVar34 * fVar29);
            fVar32 = fVar34 * fVar29;
          }
          puVar15[10] = fVar32;
        }
        if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
          puVar2 = (undefined4 *)((longlong)*(int *)(param_1 + 0xcc) + (longlong)pfVar26);
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar21[-2] = *puVar2;
          puVar21[-1] = uVar4;
          *puVar21 = uVar5;
          puVar21[1] = uVar6;
          puVar21 = puVar21 + 4;
        }
        puVar15 = puVar15 + 0x1c;
        puVar18 = (undefined8 *)((longlong)puVar18 + 1);
        plVar17 = local_1b0;
        plVar19 = local_190;
      } while ((longlong)puVar18 < (longlong)iVar24);
    }
    uVar23 = 0;
    (**(code **)(*DAT_146ab6358 + 0x5c8))(DAT_146ab6358,&DAT_146ab6e78,*plVar19);
    (**(code **)(*DAT_146ab6358 + 0x5c8))(DAT_146ab6358,&DAT_146ab6e78,*plVar17);
    FSceneViewFamily::GetFeatureLevel(local_1b8);
    FUN_1426826c0(local_1a0);
    lVar8 = *(longlong *)(param_7 + 0x7d8);
    uVar12 = *(int *)(param_1 + 0x140) * 0x30;
    local_200 = 0;
    if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x1c) < uVar12)) {
      local_1f8 = &local_138;
      if (DAT_1464c9c54 == 0x14) {
        local_200 = 2;
      }
      local_128 = 1;
      local_200 = local_200 | 0x200;
      local_114 = 0;
      local_110 = 0;
      local_124 = _DAT_1468b5d78;
      uStack_120 = uRam00000001468b5d7c;
      uStack_11c = uRam00000001468b5d80;
      uStack_118 = uRam00000001468b5d84;
      local_108 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_100 = 0;
      local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar12);
      (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_1d8,&DAT_146ab6e78,0x10);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_7 + 0x7d8,local_1d8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1d8);
      (**(code **)(*DAT_146ab6358 + 0x620))
                (DAT_146ab6358,local_1e0,&DAT_146ab6e78,*(undefined8 *)(param_7 + 0x7d8));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_7 + 0x800,local_1e0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1e0);
      lVar8 = *(longlong *)(param_7 + 0x7d8);
    }
    local_200 = 1;
    local_208._0_4_ = uVar12;
    pvVar10 = (void *)(**(code **)(*DAT_146ab6358 + 0x5c0))(DAT_146ab6358,&DAT_146ab6e78,lVar8,0);
    _guard_xfg_dispatch_icall_nop
              (pvVar10,*(void **)(param_1 + 0x138),(longlong)*(int *)(param_1 + 0x140) * 0x30);
    (**(code **)(*DAT_146ab6358 + 0x5c8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_7 + 0x7d8));
    plVar19 = (longlong *)(param_7 + 0x7f0);
    lVar8 = *plVar19;
    plVar17 = *(longlong **)
               (**(longlong **)(param_1 + 0x150) + (ulonglong)*(byte *)(param_1 + 0x17c) * 8);
    uVar13 = (int)plVar17[1] << 3;
    uVar12 = 0;
    local_178 = plVar19;
    local_148 = plVar17;
    if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x1c) < uVar13)) {
      local_1f8 = &local_138;
      local_200 = uVar12;
      if (DAT_1464c9c54 == 0x14) {
        local_200 = 2;
      }
      local_200 = local_200 | 0x200;
      local_128 = 1;
      local_114 = 0;
      local_124 = _DAT_1468b5d78;
      uStack_120 = uRam00000001468b5d7c;
      uStack_11c = uRam00000001468b5d80;
      uStack_118 = uRam00000001468b5d84;
      local_110 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_108 = 0;
      local_100 = 0;
      local_208._0_4_ = uVar13;
      (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_158,&DAT_146ab6e78,8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar19,local_158);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_158);
      (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,&local_198,&DAT_146ab6e78,*plVar19);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_7 + 0x818,&local_198);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
      lVar8 = *plVar19;
    }
    local_200 = 1;
    local_208._0_4_ = uVar13;
    local_198 = (int *)(**(code **)(*DAT_146ab6358 + 0x5c0))(DAT_146ab6358,&DAT_146ab6e78,lVar8,0);
    lVar8 = *plVar17;
    lVar9 = (longlong)(int)plVar17[1] * 0x108 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x108) {
      uVar23 = (ulonglong)((uint)uVar23 + *(int *)(lVar8 + 0x30));
    }
    plVar19 = (longlong *)(param_7 + 0x7e8);
    lVar8 = *plVar19;
    uVar13 = ((int)(uVar23 >> 1) + ((uint)uVar23 & 1)) * 4;
    local_168 = plVar19;
    if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x1c) < uVar13)) {
      local_1f8 = &local_f8;
      if (DAT_1464c9c54 == 0x14) {
        uVar12 = 2;
      }
      local_200 = uVar12 | 0x200;
      local_e8 = 1;
      local_d4 = local_d4 & 0xffffff00;
      local_e4 = _DAT_1468b5d78;
      uStack_e0 = uRam00000001468b5d7c;
      uStack_dc = uRam00000001468b5d80;
      uStack_d8 = uRam00000001468b5d84;
      local_d0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_208._0_4_ = uVar13;
      (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,&local_1b8,&DAT_146ab6e78,4);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar19,&local_1b8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
      (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,&local_1b0,&DAT_146ab6e78,*plVar19);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_7 + 0x810,&local_1b0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
      lVar8 = *plVar19;
    }
    local_200 = 1;
    local_208 = (undefined8 *)CONCAT44(local_208._4_4_,uVar13);
    local_1b8 = (void *)(**(code **)(*DAT_146ab6358 + 0x5c0))(DAT_146ab6358,&DAT_146ab6e78,lVar8,0);
    puVar27 = (ushort *)*plVar17;
    puVar25 = puVar27 + (longlong)(int)plVar17[1] * 0x84;
    local_1a4 = 0;
    local_188 = puVar25;
    if (puVar27 != puVar25) {
      do {
        plVar19 = local_150;
        lVar8 = local_1a0;
        if ((char)puVar27[0x80] == '\0') {
          local_1d8[0] = *(uint *)(local_1a0 + 0x18) & 0x300;
          local_1e0[0] = *(int *)(puVar27 + 0x18);
          iVar7 = FUN_1408bed80(local_150,1);
          plVar19 = (longlong *)
                    ((ulonglong)(uint)(iVar7 % 0x59) * 0xb8 +
                    *(longlong *)(*plVar19 + (longlong)(iVar7 / 0x59) * 8));
          plVar19[0x13] = 0;
          plVar17 = (longlong *)plVar19[0xf];
          if ((longlong *)plVar19[0xf] == (longlong *)0x0) {
            plVar17 = plVar19;
          }
          *(uint *)((longlong)plVar19 + 0x8c) = *(uint *)((longlong)plVar19 + 0x8c) & 0xfffc0fff;
          plVar19[0x14] = param_7;
          *plVar17 = lVar8 + 0x540;
          plVar17[2] = local_148[3];
          iVar7 = *(int *)((longlong)local_148 + 0x16c);
          *(undefined1 *)((longlong)plVar17 + 0x67) = 1;
          *(int *)((longlong)plVar17 + 0x4c) = iVar7 + -1;
          *(int *)(plVar17 + 8) = local_1a8;
          lVar8 = *(longlong *)(param_1 + 0x168);
          if (*(longlong *)(param_1 + 0x168) == 0) {
            lVar8 = param_1 + 0x158;
          }
          plVar16 = *(longlong **)(lVar8 + (ulonglong)*puVar27 * 8);
          local_1c8 = plVar17;
          local_1b0 = plVar19;
          lVar8 = (**(code **)(*plVar16 + 0x2a8))(plVar16,0,0);
          plVar16 = plVar17 + 5;
          plVar19[0x15] = lVar8;
          if (*(int *)(param_1 + 400) == 0) {
            iVar7 = (int)plVar17[7];
            local_190 = *(longlong **)(puVar27 + 2);
            *(int *)(plVar17 + 7) = iVar7 + 1;
            if (*(int *)((longlong)plVar17 + 0x3c) < iVar7 + 1) {
              TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
              ::ResizeGrow(plVar16,iVar7);
            }
            plVar11 = (longlong *)plVar17[6];
            if ((longlong *)plVar17[6] == (longlong *)0x0) {
              plVar11 = plVar16;
            }
            plVar11[iVar7] = (longlong)local_190;
          }
          else {
            puVar20 = (undefined8 *)
                      ((ulonglong)*(byte *)(param_1 + 0x17c) * 0x10 + *(longlong *)(param_1 + 0x188)
                      );
            iVar7 = *(int *)(puVar20 + 1);
            *(undefined4 *)(plVar17 + 7) = 0;
            if (*(int *)((longlong)plVar17 + 0x3c) != iVar7) {
              FUN_1407eed70(plVar16);
            }
            puVar22 = (uint *)*puVar20;
            puVar3 = puVar22 + (longlong)*(int *)(puVar20 + 1) * 3;
            plVar19 = local_1b0;
            puVar25 = local_188;
            for (; local_1b0 = plVar19, local_188 = puVar25, puVar22 != puVar3;
                puVar22 = puVar22 + 3) {
              if (*puVar22 == (uint)*puVar27) {
                iVar7 = (int)plVar17[7];
                *(int *)(plVar17 + 7) = iVar7 + 1;
                if (*(int *)((longlong)plVar17 + 0x3c) < iVar7 + 1) {
                  TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
                  ::ResizeGrow(plVar16,iVar7);
                }
                uVar12 = puVar22[2];
                plVar19 = (longlong *)plVar17[6];
                if ((longlong *)plVar17[6] == (longlong *)0x0) {
                  plVar19 = plVar16;
                }
                *(uint *)(plVar19 + iVar7) = puVar22[1];
                *(uint *)((longlong)plVar19 + (longlong)iVar7 * 8 + 4) = uVar12;
              }
              plVar19 = local_1b0;
              puVar25 = local_188;
            }
          }
          pvVar10 = local_1b8;
          *local_198 = *(int *)(puVar27 + 0x1c) + *(int *)(puVar27 + 8);
          local_198[1] = local_1a4;
          local_198 = local_198 + 2;
          local_1a4 = local_1a4 + local_1e0[0];
          _guard_xfg_dispatch_icall_nop
                    (local_1b8,*(void **)(puVar27 + 0x14),(longlong)*(int *)(puVar27 + 0x18) * 2);
          local_1b8 = (void *)((longlong)pvVar10 + (longlong)local_1e0[0] * 2);
          *(undefined4 *)(local_1c8 + 9) = *(undefined4 *)(puVar27 + 8);
          bVar28 = local_1d8[0] != 0;
          local_1d8[0] = -local_1d8[0];
          *(uint *)((longlong)plVar19 + 0x8c) =
               (*(byte *)(local_1a0 + 0x18) & 1 | 0x40000) << 3 | -(uint)bVar28 & 0x400000 |
               *(uint *)((longlong)plVar19 + 0x8c) & 0xffbfffd7;
          FUN_142747330(local_150,param_5,plVar19);
        }
        puVar27 = puVar27 + 0x84;
      } while (puVar27 != puVar25);
    }
    (**(code **)(*DAT_146ab6358 + 0x5c8))(DAT_146ab6358,&DAT_146ab6e78,*local_168);
    (**(code **)(*DAT_146ab6358 + 0x5c8))(DAT_146ab6358,&DAT_146ab6e78,*local_178);
  }
  return;
}



// FUNCTION 1425e59e0 GetFrameSize body=35 status=ok
// SIG undefined GetFrameSize(void)

undefined2 FOpusAudioInfo::GetFrameSize(undefined8 param_1)

{
  undefined2 local_res10 [12];
  
  local_res10[0] = 0;
  IStreamedCompressedInfo::Read(param_1,local_res10,2);
  return local_res10[0];
}



// FUNCTION 1425e5a10 FUN_1425e5a10 body=232 status=ok
// SIG undefined FUN_1425e5a10(void)

void FUN_1425e5a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b04c10) && (_Init_thread_header(&DAT_146b04c10), DAT_146b04c10 == -1))
  {
    uVar1 = AGPingUsable::GetPrivateStaticClass();
    AGPingUsable::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCurrentlyActive",1);
    DAT_146b04c08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b04c10);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b04c08 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b04c08 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b04c08 + 0x30));
  }
  return;
}



// FUNCTION 1425e5b00 GetMacroUVOverride body=19 status=ok
// SIG undefined GetMacroUVOverride(void)

longlong FDynamicEmitterDataBase::GetMacroUVOverride(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  return lVar1 + 0x48;
}



// FUNCTION 1425e5b90 FUN_1425e5b90 body=435 status=ok
// SIG undefined FUN_1425e5b90(void)

void FUN_1425e5b90(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  lVar6 = *(longlong *)(param_1 + 0x200);
  if (lVar6 != 0) {
    iVar8 = 0;
    plVar10 = *(longlong **)(lVar6 + 0xa0);
    plVar4 = plVar10 + (longlong)*(int *)(lVar6 + 0xa8) * 6;
    for (; plVar10 != plVar4; plVar10 = plVar10 + 6) {
      plVar9 = *(longlong **)(param_3 + 0x38);
      lVar6 = 0;
      plVar1 = plVar9 + *(int *)(param_3 + 0x40);
      if (plVar9 == plVar1) {
LAB_1425e5c90:
        if ((((*(byte *)(*(longlong *)(param_1 + 0x1f0) + 0xa4) & 4) == 0) ||
            ((lVar6 = *(longlong *)(param_1 + 0x1b0), lVar6 == 0 &&
             (lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x38), lVar6 == 0)))) &&
           (lVar6 = *plVar10, lVar6 == 0)) {
          lVar6 = UMaterial::GetDefaultMaterial(0);
        }
      }
      else {
        do {
          lVar7 = *plVar9;
          if (lVar7 != 0) {
            lVar5 = FUN_1429cc280();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && ((*(byte *)(lVar7 + 0x28) & 0x80) != 0)) {
              if ((iVar8 < 0) || (*(int *)(lVar7 + 0x40) <= iVar8)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + (longlong)iVar8 * 8);
              }
            }
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
        if (lVar6 == 0) goto LAB_1425e5c90;
      }
      iVar2 = *(int *)(param_2 + 0x18);
      *(int *)(param_2 + 0x18) = iVar2 + 1;
      if (*(int *)(param_2 + 0x1c) < iVar2 + 1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(param_2,iVar2);
      }
      lVar7 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar7 = param_2;
      }
      iVar8 = iVar8 + 1;
      *(longlong *)(lVar7 + (longlong)iVar2 * 8) = lVar6;
    }
  }
  return;
}



// FUNCTION 1425e5d60 FUN_1425e5d60 body=134 status=ok
// SIG undefined FUN_1425e5d60(void)

undefined8 * FUN_1425e5d60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x310);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x1b0,local_res8);
  lVar2 = 0;
  if (local_res8[0] != -1) {
    lVar2 = *(longlong *)(lVar1 + 0x1b0) + (longlong)local_res8[0] * 0x28;
  }
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar2 + 0x10);
    lVar2 = *(longlong *)(lVar2 + 0x18);
    param_2[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1425e5df0 FUN_1425e5df0 body=224 status=ok
// SIG undefined FUN_1425e5df0(void)

undefined4 * FUN_1425e5df0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  FWeakObjectPtr::operator=(&local_res20,param_3);
  if (param_3 != (longlong *)0x0) {
    local_18[0] = local_res20;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x50,local_res18,local_18);
    if (((local_res18[0] == -1) ||
        (lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)local_res18[0] * 0x14, lVar1 == 0)) ||
       (*(int *)(lVar1 + 8) == 0)) {
      cVar2 = (**(code **)(*param_3 + 0x1c0))(param_3);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_3 + 0x1c8))(param_3);
        if (cVar2 == '\0') goto LAB_1425e5eb9;
      }
    }
    local_18[0] = local_res20;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x50,local_res18,local_18);
    if ((local_res18[0] != -1) &&
       (lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)local_res18[0] * 0x14, lVar1 != 0)) {
      uVar3 = *(undefined4 *)(lVar1 + 8);
      goto LAB_1425e5ebb;
    }
  }
LAB_1425e5eb9:
  uVar3 = 0;
LAB_1425e5ebb:
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1425e5ed0 GetNetGUIDFromObject body=224 status=ok
// SIG undefined GetNetGUIDFromObject(void)

undefined4 *
UPackageMapClient::GetNetGUIDFromObject(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x310);
  FWeakObjectPtr::operator=(&local_res10,param_3);
  if (param_3 != (longlong *)0x0) {
    local_res18[0] = local_res10;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0x50,local_res8,local_res18);
    if (((local_res8[0] == -1) ||
        (lVar1 = *(longlong *)(lVar2 + 0x50) + (longlong)local_res8[0] * 0x14, lVar1 == 0)) ||
       (*(int *)(lVar1 + 8) == 0)) {
      cVar3 = (**(code **)(*param_3 + 0x1c0))(param_3);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_3 + 0x1c8))(param_3);
        if (cVar3 == '\0') goto LAB_1425e5fa1;
      }
    }
    local_res18[0] = local_res10;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0x50,local_res8,local_res18);
    if ((local_res8[0] != -1) &&
       (lVar2 = *(longlong *)(lVar2 + 0x50) + (longlong)local_res8[0] * 0x14, lVar2 != 0)) {
      *param_2 = *(undefined4 *)(lVar2 + 8);
      return param_2;
    }
  }
LAB_1425e5fa1:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1425e5fb0 GetNetGUIDStats body=445 status=ok
// SIG undefined GetNetGUIDStats(void)

void UPackageMapClient::GetNetGUIDStats(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  plVar3 = *(longlong **)(param_1 + 0x2e8);
  iVar2 = (int)plVar3[5];
  puStack_28 = (uint *)(plVar3 + 2);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar6 = (uint *)plVar3[4];
    if ((uint *)plVar3[4] == (uint *)0x0) {
      puVar6 = puStack_28;
    }
    uVar1 = *puVar6;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar1 == 0) {
      lVar5 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar4) goto LAB_1425e608d;
      uVar1 = puVar6[lVar5 + 1];
    }
    uStack_74 = -uVar1 & uVar1;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1425e608d:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar3,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < (int)plVar3[5];
  local_48 = plVar3;
  local_38 = plVar3;
  local_10 = plVar3;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      iVar2 = *(int *)(*plVar3 + 4 + (longlong)iStack_5c * 0x10);
      if (iVar2 == -2) {
        *param_3 = *param_3 + 1;
      }
      else if (iVar2 == -1) {
        *param_2 = *param_2 + 1;
      }
      else {
        *param_4 = *param_4 + 1;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1425e6170 FUN_1425e6170 body=124 status=ok
// SIG undefined FUN_1425e6170(void)

undefined4 FUN_1425e6170(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_14171bfe0();
  lVar3 = *(longlong *)(param_2 + 0x10);
  if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = param_2;
  }
  lVar3 = FUN_14171a990(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0xf0),lVar3);
  return *(undefined4 *)(lVar3 + 0x18);
}



// FUNCTION 1425e61f0 GetNumDormantActorsForConnection body=117 status=ok
// SIG undefined GetNumDormantActorsForConnection(void)

undefined4 FNetworkObjectList::GetNumDormantActorsForConnection(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_res8 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xf0,local_res8);
  puVar2 = (undefined4 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)local_res8[0] * 0x14);
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 1425e6270 FUN_1425e6270 body=1910 status=ok
// SIG undefined FUN_1425e6270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1425e6270(longlong *param_1,uint *param_2,undefined1 param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  int *piVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  undefined2 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint *puVar27;
  uint *local_res10 [2];
  longlong *local_res20;
  longlong *local_88;
  uint *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  uVar9 = *param_2;
  if (uVar9 < 2) {
    return 0;
  }
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar23 = 0;
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  iVar11 = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4)
  ;
  if (iVar11 == -1) {
    return 0;
  }
  lVar26 = *param_1;
  while( true ) {
    lVar21 = (longlong)iVar11 * 0x40;
    if (*(uint *)(lVar21 + lVar26) == uVar9) break;
    iVar11 = *(int *)(lVar21 + 0x38 + lVar26);
    if (iVar11 == -1) {
      return 0;
    }
  }
  if (iVar11 == -1) {
    return 0;
  }
  lVar26 = (longlong)iVar11 * 0x40 + lVar26;
  if (lVar26 == 0) {
    return 0;
  }
  lVar21 = lVar26 + 8;
  if (lVar21 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  lVar13 = FWeakObjectPtr::Get(lVar21);
  if (lVar13 != 0) {
    return lVar13;
  }
  bVar3 = *(byte *)(lVar26 + 0x30);
  if ((bVar3 & 8) != 0) {
    return 0;
  }
  if ((bVar3 & 4) != 0) {
    return 0;
  }
  plVar12 = (longlong *)(lVar26 + 0x18);
  local_res20 = (longlong *)0x0;
  if (*plVar12 == 0) {
    return 0;
  }
  iVar11 = *(int *)(lVar26 + 0x10);
  pbVar1 = (byte *)(lVar26 + 0x10);
  if (iVar11 != 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar11) * 4);
      if (iVar6 != -1) {
        lVar23 = *param_1;
        do {
          lVar13 = (longlong)iVar6 * 0x40;
          if (*(int *)(lVar13 + lVar23) == iVar11) {
            if (((iVar6 != -1) && (lVar23 = (longlong)iVar6 * 0x40 + lVar23, lVar23 != 0)) &&
               (lVar23 != -8)) {
              if ((*(byte *)(lVar23 + 0x30) & 8) != 0) goto LAB_1425e63c3;
              lVar23 = FUN_1425e6270(param_1,pbVar1,param_3);
              if (lVar23 == 0) {
                FUN_1425f45c0(param_1,pbVar1);
                return 0;
              }
              goto LAB_1425e6411;
            }
            break;
          }
          iVar6 = *(int *)(lVar13 + 0x38 + lVar23);
        } while (iVar6 != -1);
      }
    }
    if ((*pbVar1 & 1) == 0) {
      return 0;
    }
LAB_1425e63c3:
    *(byte *)(lVar26 + 0x30) = bVar3 | 8;
    return 0;
  }
LAB_1425e6411:
  puVar15 = (undefined8 *)FName::ToString(plVar12,local_78);
  if (*(int *)(puVar15 + 1) == 0) {
    puVar24 = &DAT_143f3eda8;
  }
  else {
    puVar24 = (undefined2 *)*puVar15;
  }
  uVar16 = UObject::GetPrivateStaticClass();
  lVar13 = FUN_141799410(uVar16,lVar23,puVar24,0);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (((*local_res10[0] & 1) == 0) || (*(int *)pbVar1 != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (lVar13 == 0) {
    if ((*(byte *)(lVar26 + 0x30) & 1) != 0) {
LAB_1425e66cd:
      if ((*(byte *)(lVar26 + 0x30) & 2) == 0) {
        *(byte *)(lVar26 + 0x30) = *(byte *)(lVar26 + 0x30) | 8;
        return 0;
      }
      return 0;
    }
    FUN_1425e9f20(param_1);
    if (bVar4) {
      cVar5 = FUN_1425f4530(param_1);
      if (cVar5 != '\0') {
        lVar23 = *plVar12;
        iVar11 = (int)param_1[0x2c];
        iVar6 = *(int *)((longlong)param_1 + 0x18c);
        if (iVar11 != iVar6) {
          plVar14 = (longlong *)param_1[0x33];
          uVar2 = (longlong)(int)param_1[0x34] - 1;
          iVar7 = (int)((ulonglong)lVar23 >> 0x20);
          iVar20 = (int)lVar23;
          uVar25 = (ulonglong)(plVar14 != (longlong *)0x0) - 1 & (ulonglong)(param_1 + 0x32) |
                   (ulonglong)plVar14;
          iVar8 = *(int *)(uVar25 + ((longlong)(iVar7 + iVar20) & uVar2) * 4);
          if (iVar8 != -1) {
            lVar21 = param_1[0x2b];
            do {
              if (*(longlong *)(lVar21 + (longlong)iVar8 * 0x18) == lVar23) {
                if (iVar8 != -1) {
                  if ((iVar11 == iVar6) ||
                     (iVar8 = *(int *)(uVar25 + ((longlong)(iVar7 + iVar20) & uVar2) * 4),
                     iVar8 == -1)) goto LAB_1425e65c0;
                  goto LAB_1425e65a0;
                }
                break;
              }
              iVar8 = *(int *)(lVar21 + 0x10 + (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
        local_80 = local_res10[0];
        local_88 = plVar12;
        FUN_1425d7460(param_1 + 0x2b,local_res10,&local_88,0);
        *(byte *)(lVar26 + 0x30) = *(byte *)(lVar26 + 0x30) | 4;
        uVar16 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                           (local_48,param_1,FUN_1425dca50);
        uVar17 = FName::ToString(plVar12,local_78);
        FUN_1416fec20(uVar17,uVar16,0,0,0xffffffff);
        goto LAB_1425e6922;
      }
      puVar15 = (undefined8 *)FName::ToString(plVar12,local_68);
      if (*(int *)(puVar15 + 1) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = (undefined2 *)*puVar15;
      }
      lVar13 = LoadPackage(0,puVar24,0,0);
    }
    else {
      puVar15 = (undefined8 *)FName::ToString(plVar12,local_58);
      if (*(int *)(puVar15 + 1) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = (undefined2 *)*puVar15;
      }
      uVar16 = UObject::GetPrivateStaticClass();
      lVar13 = FUN_141799c90(uVar16,lVar23,puVar24,0,2,0,1);
      local_68[0] = local_58[0];
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (lVar13 == 0) goto LAB_1425e66cd;
  }
  puVar27 = local_res10[0];
  if (bVar4) {
    lVar23 = UPackage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar23 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar23 + 0x90) * 8
         ) != lVar23 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      *(byte *)(lVar26 + 0x30) = *(byte *)(lVar26 + 0x30) | 8;
      return 0;
    }
    cVar5 = UPackage::IsFullyLoaded(lVar13);
    puVar27 = local_res10[0];
    if ((cVar5 == '\0') && ((*(uint *)(lVar13 + 0x50) & 0x100010) == 0)) {
      cVar5 = FUN_1425f4530(param_1);
      puVar27 = local_res10[0];
      if (cVar5 != '\0') {
        iVar11 = *(int *)(lVar13 + 0xc);
        if (iVar11 < (int)DAT_1469e91c4) {
          uVar22 = iVar11 >> 0x1f & 0xffff;
          uVar9 = iVar11 + uVar22;
          lVar23 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                   (longlong)(int)((uVar9 & 0xffff) - uVar22) * 0x18;
        }
        else {
          lVar23 = 0;
        }
        if ((*(uint *)(lVar23 + 8) >> 0x1b & 1) != 0) {
          local_80 = local_res10[0];
          local_88 = plVar12;
          FUN_1425d7460(param_1 + 0x2b,local_res10,&local_88,0);
          *(byte *)(lVar26 + 0x30) = *(byte *)(lVar26 + 0x30) | 4;
          uVar16 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                             (local_48,param_1,FUN_1425dca50);
          uVar17 = FName::ToString(plVar12,&local_88);
          FUN_1416fec20(uVar17,uVar16,0,0,0xffffffff);
          if (local_88 != (longlong *)0x0) {
            FMemory::Free();
          }
          goto LAB_1425e6846;
        }
      }
      puVar15 = (undefined8 *)FName::ToString(plVar12,local_48);
      if (*(int *)(puVar15 + 1) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = (undefined2 *)*puVar15;
      }
      lVar13 = LoadPackage(0,puVar24,0,0);
      puVar27 = local_res10[0];
      if (local_48[0] != 0) {
        FMemory::Free();
        puVar27 = local_res10[0];
      }
    }
  }
LAB_1425e6846:
  lVar23 = DAT_146b04830;
  if (*(int *)(lVar26 + 0x20) != 0) {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar10 = GetCurrentThreadId(), DVar10 != DAT_1468c21c0)) {
      lVar18 = 1;
    }
    else {
      lVar18 = 0;
    }
    if (((*(int *)(lVar23 + lVar18 * 4) == 0) &&
        (iVar11 = FUN_1425e6170(param_1,lVar13), *(int *)(lVar26 + 0x20) != iVar11)) &&
       ((int)param_1[0x35] == 1)) {
      local_88 = (longlong *)0x0;
      local_80 = (uint *)0x0;
      FUN_1425e4100(param_1,puVar27,&local_88);
      plVar12 = (longlong *)&DAT_143f3eda8;
      if ((int)local_80 != 0) {
        plVar12 = local_88;
      }
      FString::PrintfImpl(local_78,
                          L"GetObjectFromNetGUID: Network checksum mismatch. FullNetGUIDPath: %s, %u, %u"
                          ,plVar12,*(undefined4 *)(lVar26 + 0x20),iVar11);
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      *(byte *)(lVar26 + 0x30) = *(byte *)(lVar26 + 0x30) | 8;
      FUN_1425dccc0(param_1[0x2a],10,local_78);
LAB_1425e6922:
      if (local_78[0] != 0) {
        FMemory::Free();
        return 0;
      }
      return 0;
    }
  }
  if (((lVar13 != 0) && (lVar23 = param_1[0x2a], lVar23 != 0)) &&
     (*(longlong *)(lVar23 + 0xd0) != 0)) {
    uVar16 = FUN_1429a0270();
    lVar18 = UObjectBaseUtility::GetTypedOuter(lVar13,uVar16);
    if (((lVar18 != 0) && (lVar18 != *(longlong *)(*(longlong *)(lVar23 + 0xd0) + 0x30))) &&
       ((*(byte *)(lVar18 + 0x204) & 0x10) == 0)) {
      return 0;
    }
  }
  FWeakObjectPtr::operator=(lVar21,lVar13);
  if (*(double *)(lVar26 + 0x28) != 0.0) {
    FWeakObjectPtr::operator=(&local_res20,lVar13);
    local_88 = local_res20;
    piVar19 = (int *)TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
                     ::FindId(param_1 + 10,local_res10,&local_88);
    if (*piVar19 != -1) {
      return lVar13;
    }
  }
  FWeakObjectPtr::operator=(local_res10,lVar13);
  TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
  ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
            (param_1 + 10,local_res10,puVar27);
  return lVar13;
  while (iVar8 = *(int *)(lVar26 + 0x10), iVar8 != -1) {
LAB_1425e65a0:
    lVar26 = lVar21 + (longlong)iVar8 * 0x18;
    if (*(longlong *)(lVar21 + (longlong)iVar8 * 0x18) == lVar23) {
      if (iVar8 != -1) goto LAB_1425e65c2;
      break;
    }
  }
LAB_1425e65c0:
  lVar26 = 0;
LAB_1425e65c2:
  uVar9 = *local_res10[0];
  if (*(uint *)(lVar26 + 8) == uVar9) {
    return 0;
  }
  if (iVar11 != iVar6) {
    if (plVar14 == (longlong *)0x0) {
      plVar14 = param_1 + 0x32;
    }
    iVar11 = *(int *)((longlong)plVar14 +
                     ((longlong)(iVar7 + iVar20) & (longlong)(int)param_1[0x34] - 1U) * 4);
    if (iVar11 != -1) {
      while (lVar26 = lVar21 + (longlong)iVar11 * 0x18,
            *(longlong *)(lVar21 + (longlong)iVar11 * 0x18) != lVar23) {
        iVar11 = *(int *)(lVar26 + 0x10);
        if (iVar11 == -1) {
          _DAT_00000008 = uVar9;
          return 0;
        }
      }
      if (iVar11 != -1) goto LAB_1425e663b;
    }
  }
  lVar26 = 0;
LAB_1425e663b:
  *(uint *)(lVar26 + 8) = uVar9;
  return 0;
}



// FUNCTION 1425e6a00 FUN_1425e6a00 body=664 status=ok
// SIG undefined FUN_1425e6a00(void)

uint * FUN_1425e6a00(longlong *param_1,uint *param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int local_res18;
  int local_res1c;
  int local_res20;
  int local_res24;
  uint *local_88;
  int *local_80;
  int local_78;
  undefined8 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  byte local_50;
  
  if (param_4 == (int *)0x0) {
    FWeakObjectPtr::operator=(&local_res18,param_3);
    iVar12 = local_res1c;
    iVar11 = local_res18;
  }
  else {
    iVar12 = param_4[1];
    iVar11 = *param_4;
  }
  if ((param_3 == (longlong *)0x0) ||
     (local_res18 = iVar11, local_res1c = iVar12,
     cVar4 = FNetGUIDCache::SupportsObject(param_1,param_3,&local_res18), cVar4 == '\0')) {
    *param_2 = 0;
  }
  else {
    local_res20 = iVar11;
    local_res24 = iVar12;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 10,&local_res18,&local_res20);
    if ((local_res18 != -1) && (lVar1 = param_1[10] + (longlong)local_res18 * 0x14, lVar1 != 0)) {
      uVar3 = *(uint *)(lVar1 + 8);
      if (uVar3 != 0) {
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          plVar6 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar6 = param_1 + 7;
          }
          uVar5 = *(uint *)((longlong)plVar6 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
          if (uVar5 != 0xffffffff) {
            do {
              puVar10 = (uint *)((longlong)(int)uVar5 * 0x40 + *param_1);
              if (*puVar10 == uVar3) {
                if (uVar5 != 0xffffffff) goto LAB_1425e6b22;
                break;
              }
              uVar5 = puVar10[0xe];
            } while (uVar5 != 0xffffffff);
          }
        }
        puVar10 = (uint *)0x0;
LAB_1425e6b22:
        puVar7 = puVar10 + 2;
        if (puVar10 == (uint *)0x0) {
          puVar7 = (uint *)0x0;
        }
        if ((puVar7 == (uint *)0x0) || (*(double *)(puVar7 + 8) <= 0.0)) {
          *param_2 = uVar3;
          return param_2;
        }
        local_res18 = iVar11;
        local_res1c = iVar12;
        TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 10,&local_res18);
      }
    }
    if (((longlong *)param_1[0x2a] == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*(longlong *)param_1[0x2a] + 0x368))(), cVar4 != '\0')) {
      cVar4 = (**(code **)(*param_3 + 0x1c0))(param_3);
      local_58 = 0;
      local_78 = -1;
      local_74 = 0;
      uVar9 = (ulonglong)(cVar4 != '\0');
      local_68 = 0;
      local_50 = local_50 & 0xf0;
      local_60 = 0;
      piVar2 = (int *)((longlong)param_1 + uVar9 * 4 + 0xa0);
      *piVar2 = *piVar2 + 1;
      *param_2 = *(int *)((longlong)param_1 + uVar9 * 4 + 0xa0) * 2 | (uint)(cVar4 != '\0');
      FWeakObjectPtr::operator=(&local_res18,param_3);
      local_78 = local_res18;
      local_74 = CONCAT44(local_74._4_4_,local_res1c);
      puVar8 = (undefined4 *)FUN_1425e6a00(param_1,&local_res18,param_3[4],0);
      local_68 = param_3[3];
      local_74 = CONCAT44(*puVar8,(undefined4)local_74);
      local_60 = FUN_1425e6170(param_1,param_3);
      cVar4 = FNetGUIDCache::CanClientLoadObject(param_1,param_3,param_2);
      local_50 = cVar4 == '\0' | local_50 & 0xfe;
      local_50 = (local_50 * '\x02' ^ local_50) & 2 ^ local_50;
      local_80 = &local_78;
      local_88 = param_2;
      TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
                (param_1,&local_res18,&local_88,0);
      cVar4 = FUN_14044af00(&local_78,0);
      if (cVar4 != '\0') {
        TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
        ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
                  (param_1 + 10,&local_78,param_2);
      }
    }
    else {
      *param_2 = 1;
    }
  }
  return param_2;
}



// FUNCTION 1425e6ca0 GetOuterNetGUID body=144 status=ok
// SIG undefined GetOuterNetGUID(void)

uint * FNetGUIDCache::GetOuterNetGUID(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_3;
  *param_2 = 0;
  if (1 < uVar1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      uVar2 = *(uint *)((longlong)plVar3 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar1) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar2 * 0x40 + *param_1);
          if (*puVar5 == uVar1) {
            if (uVar2 != 0xffffffff) goto LAB_1425e6d11;
            break;
          }
          uVar2 = puVar5[0xe];
        } while (uVar2 != 0xffffffff);
      }
    }
    puVar5 = (uint *)0x0;
LAB_1425e6d11:
    puVar4 = puVar5 + 2;
    if (puVar5 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    if (puVar4 != (uint *)0x0) {
      *param_2 = puVar4[2];
    }
  }
  return param_2;
}



// FUNCTION 1425e6d30 FUN_1425e6d30 body=181 status=ok
// SIG undefined FUN_1425e6d30(void)

longlong FUN_1425e6d30(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14238cc80(param_1,&local_18);
  plVar1 = local_18 + (int)local_10;
  for (plVar4 = local_18; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      lVar3 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1425e6dbe;
    }
  }
  lVar5 = 0;
LAB_1425e6dbe:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return lVar5;
}



// FUNCTION 1425e6df0 FUN_1425e6df0 body=975 status=ok
// SIG undefined FUN_1425e6df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425e6df0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 local_118;
  float local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  
  fVar5 = DAT_1468b5d98;
  uVar4 = _DAT_1468b5d90;
  puVar6 = (undefined8 *)(*(int *)(param_1 + 0x11c) + param_2);
  local_c8 = *puVar6;
  local_c0 = *(undefined4 *)(puVar6 + 1);
  local_d8 = puVar6[3];
  local_d0 = *(undefined4 *)(puVar6 + 4);
  local_e8 = _DAT_1468b5d90;
  local_e0 = DAT_1468b5d98;
  if (*(int *)(param_1 + 0xd8) != 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x8dc);
    local_110 = *(float *)(param_4 + 0x8e4);
    if (*(char *)(param_1 + 0xec) == '\0') {
      local_118._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_118._0_4_ = (float)uVar2;
    }
    else {
      local_118 = uVar2;
      FMatrix::Inverse(param_3 + 0x80,&local_b8);
      uStack_fc = 0x3f800000;
      fStack_a0 = local_118._4_4_ * fStack_a0;
      fStack_b4 = (float)local_118 * fStack_b4;
      fStack_b0 = (float)local_118 * fStack_b0;
      local_118._0_4_ =
           local_88 * 1.0 + local_110 * local_98 +
           local_118._4_4_ * local_a8 + (float)local_118 * local_b8;
      local_118._4_4_ =
           fStack_84 * 1.0 + local_110 * fStack_94 + local_118._4_4_ * fStack_a4 + fStack_b4;
      local_110 = fStack_80 * 1.0 + local_110 * fStack_90 + fStack_a0 + fStack_b0;
    }
    local_118._0_4_ = (float)local_118 - *(float *)(param_2 + 0x10);
    local_118._4_4_ = local_118._4_4_ - *(float *)(param_2 + 0x14);
    local_110 = local_110 - *(float *)(param_2 + 0x18);
    fVar1 = *(float *)((longlong)*(int *)(param_1 + 0xd8) + 4 + param_2);
    fVar9 = local_118._4_4_ * local_118._4_4_ + (float)local_118 * (float)local_118 +
            local_110 * local_110;
    if (1e-08 < fVar9) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar9 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar9 * 0.5 * fVar7 * fVar7);
      local_118._0_4_ = (float)local_118 * fVar7;
      local_118._4_4_ = local_118._4_4_ * fVar7;
      local_110 = local_110 * fVar7;
    }
    local_118._0_4_ = fVar1 * (float)local_118;
    local_118._4_4_ = fVar1 * local_118._4_4_;
    local_e0 = fVar1 * local_110;
    if (fVar9 <= fVar1 * fVar1) {
      local_118._0_4_ = (float)local_118 * 1048576.0;
      local_118._4_4_ = local_118._4_4_ * 1048576.0;
      local_e0 = local_e0 * 1048576.0;
    }
    local_e8 = local_118;
  }
  iVar3 = *(int *)(param_1 + 200);
  local_f8 = uVar4;
  local_f0 = fVar5;
  if (iVar3 != 0) {
    local_f8 = *(undefined8 *)((longlong)iVar3 + 0xc + param_2);
    local_f0 = *(float *)((longlong)iVar3 + 0x14 + param_2);
  }
  local_118 = 0x3f800000;
  local_110 = 0.0;
  if (*(char *)(param_1 + 0xfd) != '\0') {
    local_118 = *(undefined8 *)(*(int *)(param_1 + 0xe8) + param_2);
    local_110 = *(float *)((longlong)*(int *)(param_1 + 0xe8) + 8 + param_2);
  }
  local_108 = *(undefined4 *)(param_4 + 0x518);
  uStack_104 = *(undefined4 *)(param_4 + 0x528);
  uStack_100 = *(undefined4 *)(param_4 + 0x538);
  FUN_1425dceb0(param_1,param_3 + 0x80,param_2 + 0x10,*(undefined4 *)(param_2 + 0x38),param_2 + 0x3c
                ,param_2 + 0x5c,&local_c8,&local_d8,&local_e8,&local_f8,&local_118,param_4 + 0x8dc,
                &local_108,param_5);
  return;
}



// FUNCTION 1425e71c0 GetPlayerNickname body=62 status=ok
// SIG undefined GetPlayerNickname(void)

undefined8 * UOnlineEngineInterface::GetPlayerNickname(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"INVALID",0x10);
  return param_2;
}



// FUNCTION 1425e7210 FUN_1425e7210 body=1132 status=ok
// SIG undefined FUN_1425e7210(void)

float * FUN_1425e7210(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
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
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_78;
  float fStack_70;
  
  cVar3 = *(char *)(param_1 + 0x16d);
  if (cVar3 == '\0') {
    fVar16 = *(float *)(param_1 + 0x170);
    fVar1 = *(float *)(param_1 + 0x174);
    fVar2 = *(float *)(param_1 + 0x178);
    fVar9 = param_3[4];
    fVar10 = param_3[5];
    fVar11 = param_3[6];
    fVar12 = param_3[7];
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    fVar8 = param_3[3];
    fVar17 = param_3[8];
    fVar18 = param_3[9];
    fVar19 = param_3[10];
    fVar20 = param_3[0xb];
    fVar21 = param_3[0xc];
    fVar22 = param_3[0xd];
    fVar23 = param_3[0xe];
    fVar24 = param_3[0xf];
    local_98 = -3.6162703e-08;
    local_78 = 1.0;
    fStack_70 = -3.6162703e-08;
    fVar13 = fVar16 * fVar5 + fVar1 * fVar9 + fVar2 * fVar17 + fVar21 * 1.0;
    fVar14 = fVar16 * fVar6 + fVar1 * fVar10 + fVar2 * fVar18 + fVar22 * 1.0;
    fVar15 = fVar16 * fVar7 + fVar1 * fVar11 + fVar2 * fVar19 + fVar23 * 1.0;
    fVar16 = fVar16 * fVar8 + fVar1 * fVar12 + fVar2 * fVar20 + fVar24 * 1.0;
    fStack_94 = 0.0;
    fStack_90 = -1.0;
  }
  else {
    if (cVar3 == '\x01') {
      fVar9 = *param_3;
      fVar10 = param_3[1];
      fVar11 = param_3[2];
      fVar12 = param_3[3];
      fVar5 = param_3[4];
      fVar6 = param_3[5];
      fVar7 = param_3[6];
      fVar8 = param_3[7];
      fVar17 = param_3[8];
      fVar18 = param_3[9];
      fVar19 = param_3[10];
      fVar20 = param_3[0xb];
      fVar16 = *(float *)(param_1 + 0x170);
      fVar1 = *(float *)(param_1 + 0x174);
      fVar2 = *(float *)(param_1 + 0x178);
      fVar21 = param_3[0xc];
      fVar22 = param_3[0xd];
      fVar23 = param_3[0xe];
      fVar24 = param_3[0xf];
      *param_2 = fVar9 * 1.0 + fVar5 * 0.0 + fVar17 * 0.0 + fVar21 * 0.0;
      param_2[1] = fVar10 * 1.0 + fVar6 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0;
      param_2[2] = fVar11 * 1.0 + fVar7 * 0.0 + fVar19 * 0.0 + fVar23 * 0.0;
      param_2[3] = fVar12 * 1.0 + fVar8 * 0.0 + fVar20 * 0.0 + fVar24 * 0.0;
      param_2[4] = fVar9 * 0.0 + fVar5 * -3.6162703e-08 + fVar17 * -1.0 + fVar21 * 0.0;
      param_2[5] = fVar10 * 0.0 + fVar6 * -3.6162703e-08 + fVar18 * -1.0 + fVar22 * 0.0;
      param_2[6] = fVar11 * 0.0 + fVar7 * -3.6162703e-08 + fVar19 * -1.0 + fVar23 * 0.0;
      param_2[7] = fVar12 * 0.0 + fVar8 * -3.6162703e-08 + fVar20 * -1.0 + fVar24 * 0.0;
      param_2[0xc] = fVar16 * fVar9 + fVar1 * fVar5 + fVar2 * fVar17 + fVar21 * 1.0;
      param_2[0xd] = fVar16 * fVar10 + fVar1 * fVar6 + fVar2 * fVar18 + fVar22 * 1.0;
      param_2[0xe] = fVar16 * fVar11 + fVar1 * fVar7 + fVar2 * fVar19 + fVar23 * 1.0;
      param_2[0xf] = fVar16 * fVar12 + fVar1 * fVar8 + fVar2 * fVar20 + fVar24 * 1.0;
      param_2[8] = fVar9 * 0.0 + fVar5 * 1.0 + fVar17 * -3.6162703e-08 + fVar21 * 0.0;
      param_2[9] = fVar10 * 0.0 + fVar6 * 1.0 + fVar18 * -3.6162703e-08 + fVar22 * 0.0;
      param_2[10] = fVar11 * 0.0 + fVar7 * 1.0 + fVar19 * -3.6162703e-08 + fVar23 * 0.0;
      param_2[0xb] = fVar12 * 0.0 + fVar8 * 1.0 + fVar20 * -3.6162703e-08 + fVar24 * 0.0;
      return param_2;
    }
    if (cVar3 != '\x02') {
      uVar4 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_2 + 6) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_2 + 10) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 0xe);
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
      *(undefined8 *)(param_2 + 0xe) = uVar4;
      return param_2;
    }
    fVar16 = *(float *)(param_1 + 0x170);
    fVar1 = *(float *)(param_1 + 0x174);
    fVar2 = *(float *)(param_1 + 0x178);
    fVar9 = param_3[4];
    fVar10 = param_3[5];
    fVar11 = param_3[6];
    fVar12 = param_3[7];
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    fVar8 = param_3[3];
    fVar17 = param_3[8];
    fVar18 = param_3[9];
    fVar19 = param_3[10];
    fVar20 = param_3[0xb];
    fVar21 = param_3[0xc];
    fVar22 = param_3[0xd];
    fVar23 = param_3[0xe];
    fVar24 = param_3[0xf];
    fStack_90 = 0.0;
    local_78 = 0.0;
    fStack_70 = 1.0;
    fVar13 = fVar16 * fVar5 + fVar1 * fVar9 + fVar2 * fVar17 + fVar21 * 1.0;
    fVar14 = fVar16 * fVar6 + fVar1 * fVar10 + fVar2 * fVar18 + fVar22 * 1.0;
    fVar15 = fVar16 * fVar7 + fVar1 * fVar11 + fVar2 * fVar19 + fVar23 * 1.0;
    fVar16 = fVar16 * fVar8 + fVar1 * fVar12 + fVar2 * fVar20 + fVar24 * 1.0;
    local_98 = 1.0;
    fStack_94 = -0.0;
  }
  *param_2 = local_98 * fVar5 + fStack_94 * fVar9 + fStack_90 * fVar17 + fVar21 * 0.0;
  param_2[1] = local_98 * fVar6 + fStack_94 * fVar10 + fStack_90 * fVar18 + fVar22 * 0.0;
  param_2[2] = local_98 * fVar7 + fStack_94 * fVar11 + fStack_90 * fVar19 + fVar23 * 0.0;
  param_2[3] = local_98 * fVar8 + fStack_94 * fVar12 + fStack_90 * fVar20 + fVar24 * 0.0;
  param_2[0xc] = fVar13;
  param_2[0xd] = fVar14;
  param_2[0xe] = fVar15;
  param_2[0xf] = fVar16;
  param_2[8] = local_78 * fVar5 + fVar9 * 0.0 + fStack_70 * fVar17 + fVar21 * 0.0;
  param_2[9] = local_78 * fVar6 + fVar10 * 0.0 + fStack_70 * fVar18 + fVar22 * 0.0;
  param_2[10] = local_78 * fVar7 + fVar11 * 0.0 + fStack_70 * fVar19 + fVar23 * 0.0;
  param_2[0xb] = local_78 * fVar8 + fVar12 * 0.0 + fStack_70 * fVar20 + fVar24 * 0.0;
  param_2[4] = fVar5 * 0.0 + fVar9 * 1.0 + fVar17 * 0.0 + fVar21 * 0.0;
  param_2[5] = fVar6 * 0.0 + fVar10 * 1.0 + fVar18 * 0.0 + fVar22 * 0.0;
  param_2[6] = fVar7 * 0.0 + fVar11 * 1.0 + fVar19 * 0.0 + fVar23 * 0.0;
  param_2[7] = fVar8 * 0.0 + fVar12 * 1.0 + fVar20 * 0.0 + fVar24 * 0.0;
  return param_2;
}



// FUNCTION 1425e7680 FUN_1425e7680 body=749 status=ok
// SIG undefined FUN_1425e7680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425e7680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined1 auStack_138 [32];
  int local_118;
  uint uStack_114;
  uint *puStack_110;
  undefined4 local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  uint uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  int local_c8;
  undefined1 local_c4 [4];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong local_88 [2];
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(local_88,param_1 + 0xa0);
  TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Empty
            (param_1 + 0xa0,0);
  puStack_110 = local_78;
  local_118 = 0;
  uStack_114 = 1;
  iStack_104 = 0;
  iStack_100 = 0;
  if ((int)local_60 != 0) {
    puVar9 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar4 = *puVar9;
    iStack_100 = 0;
    local_118 = 0;
    while (uVar4 == 0) {
      iStack_100 = iStack_100 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_118) {
        iStack_104 = (int)local_60;
        local_118 = local_118 + 1;
        goto LAB_1425e77b1;
      }
      uVar4 = puVar9[(longlong)local_118 + 1];
      local_118 = local_118 + 1;
    }
    uStack_114 = -uVar4 & uVar4;
    local_c8 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> local_c8 == 0; local_c8 = local_c8 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - local_c8;
    }
    iStack_104 = (iStack_100 - iVar6) + 0x1f;
    if ((int)local_60 < iStack_104) {
      iStack_104 = (int)local_60;
    }
  }
LAB_1425e77b1:
  local_108 = 0xffffffff;
  local_f8 = local_88;
  uStack_f0 = CONCAT44(uStack_114,local_118);
  local_d0 = local_88;
  uStack_a0 = 0xffffffff;
  iStack_9c = iStack_104;
  iStack_98 = iStack_100;
  uStack_94 = uStack_fc;
  uStack_e0 = 0xffffffff;
  iStack_dc = iStack_104;
  local_d8 = iStack_100;
  uStack_d4 = uStack_fc;
  local_e8 = puStack_110;
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  puStack_a8 = puStack_110;
  if (iStack_104 < (int)local_60) {
    do {
      plVar1 = local_f8;
      lVar3 = (longlong)iStack_dc * 0x18;
      plVar5 = *(longlong **)(lVar3 + 8 + *local_f8);
      lVar7 = *(longlong *)(lVar3 + *local_f8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (((lVar7 == 0) || (lVar7 = FWeakObjectPtr::Get(lVar7 + 8), lVar7 == 0)) ||
         ((*(byte *)(lVar7 + 0x90) & 4) == 0)) {
        lVar7 = param_1 + 0x50;
        puVar8 = local_c0;
      }
      else {
        puVar8 = local_c4;
        lVar7 = param_1 + 0xa0;
      }
      FUN_1425d6b00(lVar7,puVar8,*plVar1 + lVar3,0);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      uStack_e0 = uStack_e0 & ~uStack_f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    } while (iStack_dc < (int)local_e8[6]);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_88,0);
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425e7980 FUN_1425e7980 body=215 status=ok
// SIG undefined FUN_1425e7980(void)

void FUN_1425e7980(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = FUN_142627a50(param_2,param_1);
  if ((*(byte *)(lVar2 + 0x14) < 0x10) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_5 + 0x6c), cVar1 != '\0')) {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_5 + 0x6c);
    lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if ((lVar4 != 0) && (0 < *(int *)(param_1 + 0x50))) {
      FUN_140729f20((ulonglong)*(byte *)(lVar2 + 0x14) * 0x90 + 0x18 + lVar2,param_5);
      *(char *)(lVar2 + 0x14) = *(char *)(lVar2 + 0x14) + '\x01';
    }
  }
  FUN_142646c80(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1425e7a60 FUN_1425e7a60 body=560 status=ok
// SIG undefined FUN_1425e7a60(void)

undefined8 FUN_1425e7a60(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  undefined1 local_res10 [8];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  
  bVar4 = false;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  (**(code **)(*param_1 + 8))(0,&local_48);
  plVar14 = plStack_40;
  lVar11 = -1;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if ((short *)*param_2 == (short *)0x0) goto LAB_1425e7c68;
  puVar15 = &DAT_143f3eda8;
  puVar13 = local_58;
  bVar12 = bVar4;
  if (*(short *)*param_2 == 0) {
LAB_1425e7b5e:
    bVar4 = true;
  }
  else {
    local_58 = (undefined2 *)0x0;
    local_50 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    puVar13 = local_58;
    FGenericPlatformString::Memcpy(local_58,&DAT_14511e384,6);
    bVar12 = true;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar8 = puVar13;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*param_2,puVar8);
    if (iVar6 == 0) goto LAB_1425e7b5e;
    puVar8 = &DAT_143f3eda8;
    if ((int)DAT_146534328 != 0) {
      puVar8 = DAT_146534320;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*param_2,puVar8);
    if (iVar6 == 0) goto LAB_1425e7b5e;
  }
  if ((bVar12) && (puVar13 != (undefined2 *)0x0)) {
    FMemory::Free(puVar13);
  }
  if (bVar4) {
    return 1;
  }
  psVar3 = (short *)*param_2;
  uVar9 = 0;
  local_60 = 0;
  local_68 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    do {
      lVar11 = lVar11 + 1;
    } while (psVar3[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    local_60 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,psVar3,(longlong)(int)uVar10 * 2);
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  iVar6 = FUN_141594550(&local_68,&local_78,&DAT_14511e16c,1);
  plVar14 = local_78;
  if (iVar6 == 2) {
    if ((int)local_78[1] != 0) {
      puVar15 = (undefined2 *)*local_78;
    }
    puVar7 = (undefined8 *)FName::FName(local_res10,puVar15,1);
    uVar9 = *puVar7;
    plVar14 = plVar14 + 2;
LAB_1425e7c20:
    FUN_1425f6000(param_1,uVar9,plVar14);
  }
  else if (iVar6 == 1) goto LAB_1425e7c20;
  plVar14 = local_78;
  for (iVar6 = (int)local_70; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
LAB_1425e7c68:
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x20))();
  }
  return 1;
}



// FUNCTION 1425e7c90 FUN_1425e7c90 body=602 status=ok
// SIG undefined FUN_1425e7c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425e7c90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  byte bVar8;
  bool bVar9;
  double dVar10;
  undefined1 auStack_78 [32];
  float local_58 [2];
  undefined1 local_50 [16];
  undefined4 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  bVar8 = *(byte *)(param_2 + 5);
  if (-1 < (char)bVar8) {
    lVar4 = param_2[0x15];
    lVar5 = param_2[0x14];
    if (lVar4 < lVar5) {
      lVar1 = lVar4 + 1;
      bVar2 = *(byte *)((longlong)(int)(lVar4 >> 3) + param_2[0x12]);
      param_2[0x15] = lVar1;
      if ((bVar2 & '\x01' << ((byte)lVar4 & 7)) != 0) {
        local_58[0] = 1.0;
        if ((int)lVar5 - (int)lVar1 == 0xc1) {
          bVar9 = false;
          if (lVar1 < lVar5) {
            bVar9 = (*(byte *)((longlong)(int)(lVar1 >> 3) + param_2[0x12]) &
                    '\x01' << ((byte)lVar1 & 7)) != 0;
            param_2[0x15] = lVar4 + 2;
          }
          else {
            FUN_1416952d0(param_2);
          }
          plVar6 = (longlong *)param_2[1];
          if ((float *)plVar6[1] < (float *)*plVar6 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,local_58,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,local_58,4);
            }
          }
          else {
            local_58[0] = *(float *)*plVar6;
            *plVar6 = *plVar6 + 4;
          }
          (**(code **)(*param_2 + 0x50))(param_2,&local_40,0x14);
          bVar8 = *(byte *)(param_2 + 5);
          if (-1 < (char)bVar8) {
            iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
            if (iVar3 != 0) {
              if (iVar3 != 1) {
                return;
              }
              uVar7 = FString::FString(local_50,param_1 + 0x58);
              FUN_1425f13f0(param_1,uVar7,param_1 + 0x88);
              return;
            }
            if (1 < *(uint *)(param_1 + 0x10)) {
              return;
            }
            dVar10 = 0.0;
            if (0.0 < local_58[0]) {
              if (*(longlong *)(param_1 + 0x28) != 0) {
                dVar10 = (double)*(float *)(*(longlong *)(param_1 + 0x28) + 0x170);
              }
              *(double *)(param_1 + 0x78) = dVar10;
              FUN_1425f15c0(param_1,bVar9,local_58[0],&local_40);
              FUN_1421e2d30(param_1,1);
              return;
            }
            if (0.0 <= local_58[0]) {
              return;
            }
            if ((*(longlong *)(param_1 + 0x28) != 0) &&
               (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x90),
               plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0x330))(plVar6,local_40 & 0x3fff,local_40._2_2_ & 0x3fff);
            }
            FUN_1421e2d30(param_1,3);
            FUN_1421e2680(param_1);
            return;
          }
        }
        *(byte *)(param_2 + 5) = bVar8 | 0x80;
      }
    }
    else {
      FUN_1416952d0(param_2,1);
    }
  }
  return;
}



// FUNCTION 1425e7ef0 FUN_1425e7ef0 body=766 status=ok
// SIG undefined FUN_1425e7ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425e7ef0(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  float local_78 [2];
  undefined1 local_70 [16];
  ushort local_60;
  short sStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((char)param_3[5] < '\0') {
LAB_1425e7f41:
    bVar7 = false;
  }
  else {
    lVar2 = param_3[0x15];
    if (param_3[0x14] <= lVar2) {
      FUN_1416952d0(param_3);
      goto LAB_1425e7f41;
    }
    bVar1 = *(byte *)((longlong)(int)(lVar2 >> 3) + param_3[0x12]);
    param_3[0x15] = lVar2 + 1;
    if ((bVar1 & '\x01' << ((byte)lVar2 & 7)) == 0) goto LAB_1425e7f41;
    bVar7 = true;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x58,0);
  }
  if (bVar7) {
    local_78[0] = 1.0;
    if ((int)param_3[0x14] - (int)param_3[0x15] == 0xc1) {
      bVar7 = false;
      if (-1 < (char)param_3[5]) {
        lVar2 = param_3[0x15];
        if (lVar2 < param_3[0x14]) {
          bVar7 = (*(byte *)((longlong)(int)(lVar2 >> 3) + param_3[0x12]) &
                  '\x01' << ((byte)lVar2 & 7)) != 0;
          param_3[0x15] = lVar2 + 1;
        }
        else {
          FUN_1416952d0(param_3,1);
        }
      }
      plVar3 = (longlong *)param_3[1];
      if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,local_78,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,local_78,4);
        }
      }
      else {
        local_78[0] = *(float *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      (**(code **)(*param_3 + 0x50))(param_3,&local_60,0x14);
      if (-1 < (char)param_3[5]) {
        if (*(int *)(*(longlong *)(param_1 + 8) + 0x10) == 1) {
          if (local_78[0] == 0.0) {
            uVar6 = FString::FString(local_70,param_2);
            FUN_1425f17c0(param_1,uVar6);
          }
          else if (*(longlong *)(param_1 + 0x28) != 0) {
            fVar9 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x170) - local_78[0];
            fVar8 = local_78[0] - *(float *)(param_1 + 0x54);
            if ((fVar9 < 0.0) || (40.0 <= fVar9)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar7 == (bool)*(char *)(param_1 + 0x50)) {
              bVar4 = 0.0 <= fVar8;
            }
            else {
              bVar4 = fVar8 <= 0.0;
            }
            if ((bVar5) && (bVar4)) {
              uVar6 = FString::FString(local_70,param_2);
              local_88 = &local_48;
              FUN_1425e3fc0(param_1,uVar6,bVar7,local_78[0]);
              if ((CONCAT44(uStack_5c,CONCAT22(sStack_5e,local_60)) == local_48) &&
                 ((CONCAT44(uStack_54,uStack_58) == local_40 && (local_50 == local_38)))) {
                *(uint *)(param_1 + 0x68) = local_60 & 0x3fff;
                *(uint *)(param_1 + 0x6c) = (int)sStack_5e & 0x3fff;
                FString::operator=(param_1 + 0x58,param_2);
                uVar6 = FString::FString(local_70,param_2);
                FUN_1425f13f0(param_1,uVar6,&local_60);
                *(uint *)(param_1 + 0x88) = CONCAT22(sStack_5e,local_60);
                *(undefined4 *)(param_1 + 0x8c) = uStack_5c;
                *(undefined4 *)(param_1 + 0x90) = uStack_58;
                *(undefined4 *)(param_1 + 0x94) = uStack_54;
                *(int *)(param_1 + 0x98) = local_50;
              }
            }
          }
        }
        goto LAB_1425e81bd;
      }
    }
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x80;
  }
LAB_1425e81bd:
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425e81f0 FUN_1425e81f0 body=753 status=ok
// SIG undefined FUN_1425e81f0(void)

void FUN_1425e81f0(longlong *param_1,byte param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_10;
  
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  param_1[0x2a] = param_4;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | (uint)param_2;
  FUN_1425e5b90(param_3,param_1 + 0x2b,*(undefined8 *)(param_3 + 0x28),param_5,0);
  plVar7 = (longlong *)param_1[0x2d];
  if ((longlong *)param_1[0x2d] == (longlong *)0x0) {
    plVar7 = param_1 + 0x2b;
  }
  plVar1 = plVar7 + (int)param_1[0x2e];
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    plVar2 = (longlong *)*plVar7;
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,0xe), cVar3 == '\0')) {
      lVar4 = UMaterial::GetDefaultMaterial(0);
      *plVar7 = lVar4;
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  *(uint *)(param_1 + 6) = (uint)(0 < *(int *)(lVar4 + 0x94)) | *(uint *)(param_1 + 6) & 0xfffffffe;
  lVar4 = *(longlong *)(param_3 + 0x1f0);
  if (lVar4 == 0) goto LAB_1425e84bf;
  FUN_142410780(lVar4 + 0x48,&local_38,&local_28);
  uVar9 = 0;
  if ((local_38 * local_38 + local_34 * local_34 + local_30 * local_30 == 0.0) &&
     (local_28 * local_28 + local_24 * local_24 + local_20 * local_20 == 0.0)) {
    *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 1;
  }
  uVar5 = *(uint *)(param_1 + 0x3d);
  if ((*(byte *)(lVar4 + 0x9c) & 1) != 0) {
    uVar5 = uVar5 | 4;
    *(uint *)(param_1 + 0x3d) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0x1ec) = *(undefined1 *)(lVar4 + 0xa0);
    uVar5 = (*(int *)(lVar4 + 0xa4) << 3 ^ uVar5) & 8 ^ uVar5;
    *(uint *)(param_1 + 0x3d) = uVar5;
    uVar5 = (*(int *)(lVar4 + 0xa4) << 3 ^ uVar5) & 0x10 ^ uVar5;
    *(uint *)(param_1 + 0x3d) = uVar5;
  }
  cVar3 = *(char *)(lVar4 + 0x98);
  if ((byte)(cVar3 - 1U) < 6) {
    *(uint *)(param_1 + 0x3d) = uVar5 | 2;
    if (cVar3 == '\x03') {
      local_10 = 0x3f800000;
      uVar9 = 0;
      uVar8 = 0;
    }
    else if (cVar3 == '\x06') {
      local_10 = 0xbf800000;
      uVar9 = 0;
      uVar8 = 0;
    }
    else if (cVar3 == '\x02') {
      local_10 = 0;
      uVar9 = 0;
      uVar8 = 0x3f800000;
    }
    else if (cVar3 == '\x05') {
      local_10 = 0;
      uVar9 = 0;
      uVar8 = 0xbf800000;
    }
    else if (cVar3 == '\x01') {
      local_10 = 0;
      uVar9 = 0x3f800000;
      uVar8 = 0;
    }
    else {
      if (cVar3 == '\x04') {
        uVar9 = 0xbf800000;
      }
      local_10 = 0;
      uVar8 = 0;
    }
LAB_1425e848f:
    param_1[0x25] = CONCAT44(uVar8,uVar9);
    *(undefined4 *)(param_1 + 0x26) = local_10;
  }
  else if ((byte)(*(char *)((longlong)param_1 + 0x1ec) - 5U) < 4) {
    uVar9 = 0x3f800000;
    *(uint *)(param_1 + 0x3d) = uVar5 | 2;
    uVar8 = 0;
    local_10 = 0;
    goto LAB_1425e848f;
  }
  bVar6 = *(byte *)(lVar4 + 0x41);
  *(byte *)((longlong)param_1 + 0x17c) = bVar6;
  if (*(int *)(param_1[0x2a] + 8) <= (int)(uint)bVar6) {
    bVar6 = 0;
  }
  *(byte *)((longlong)param_1 + 0x17c) = bVar6;
LAB_1425e84bf:
  param_1[0x13] = 0;
  return;
}



// FUNCTION 1425e8500 FUN_1425e8500 body=825 status=ok
// SIG undefined FUN_1425e8500(void)

void FUN_1425e8500(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  void *pvVar10;
  byte bVar11;
  undefined2 *puVar12;
  short sVar13;
  longlong *plVar14;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  
  FParticleEmitterInstance::InitParameters();
  lVar5 = UParticleEmitter::GetLODLevel(param_2,0);
  lVar6 = *(longlong *)(lVar5 + 0x48);
  *(longlong *)(param_1 + 0x1f0) = lVar6;
  if (*(char *)(lVar6 + 0x40) == '\0') {
    lVar6 = *(longlong *)(lVar6 + 0x38);
    *(longlong *)(param_1 + 0x200) = lVar6;
  }
  else {
    lVar6 = FUN_1425e6d30(param_3);
    if (lVar6 != 0) {
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(lVar6 + 0x718);
      FUN_1425d9a70(param_1 + 0x268,lVar6 + 0x8f8);
    }
    lVar6 = *(longlong *)(param_1 + 0x200);
  }
  sVar13 = 0;
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x40) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x2d0);
    iVar9 = *(int *)(*(longlong *)(lVar6 + 0x40) + 8) + -1;
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x41);
    if (iVar9 <= (int)(uint)bVar11) {
      bVar11 = (byte)iVar9;
    }
    *(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x41) = bVar11;
    lVar6 = *(longlong *)
             (**(longlong **)(*(longlong *)(param_1 + 0x200) + 0x40) +
             (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x41) * 8);
    puVar7 = (undefined8 *)(lVar6 + 0x418);
    if (puVar1 != puVar7) {
      iVar9 = *(int *)(lVar6 + 0x420);
      pvVar10 = (void *)*puVar7;
      *(int *)(param_1 + 0x2d8) = iVar9;
      if ((iVar9 == 0) && (*(int *)(param_1 + 0x2dc) == 0)) {
        *(undefined4 *)(param_1 + 0x2dc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar9);
        _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar10,(longlong)iVar9 * 2);
      }
    }
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x2d8);
    local_48[0] = 0;
    local_40 = 0;
    local_38 = 0;
    FBoneContainer::InitializeTo(param_1 + 0x2e0,puVar1,local_48,*(undefined8 *)(param_1 + 0x200));
    lVar6 = param_1 + 0x408;
    *(undefined4 *)(param_1 + 0x410) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x414)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar6,0);
    }
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    iVar9 = *(int *)(param_1 + 0x430) + 0x1f;
    pvVar10 = *(void **)(param_1 + 0x428);
    if (*(void **)(param_1 + 0x428) == (void *)0x0) {
      pvVar10 = (void *)(param_1 + 0x418);
    }
    _guard_xfg_dispatch_icall_nop
              (pvVar10,0,(longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) << 2);
    *(undefined4 *)(param_1 + 0x430) = 0;
    FUN_141709200(lVar6,*(undefined4 *)(param_1 + 0x2d8));
    puVar12 = (undefined2 *)*puVar1;
    puVar2 = puVar12 + *(int *)(param_1 + 0x2d8);
    for (; puVar12 != puVar2; puVar12 = puVar12 + 1) {
      lVar8 = FUN_14088f0f0(lVar6,local_48,*puVar12);
      if (*(short **)(lVar8 + 8) != (short *)0x0) {
        **(short **)(lVar8 + 8) = sVar13;
      }
      sVar13 = sVar13 + 1;
    }
  }
  plVar14 = *(longlong **)(lVar5 + 0x38);
  plVar3 = plVar14 + *(int *)(lVar5 + 0x40);
  for (; plVar14 != plVar3; plVar14 = plVar14 + 1) {
    lVar6 = *plVar14;
    if (lVar6 != 0) {
      lVar5 = FUN_1429cbf10();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && ((*(byte *)(lVar6 + 0x28) & 0x80) != 0)) {
        *(longlong *)(param_1 + 0x208) = lVar6;
        puVar1 = (undefined8 *)(param_1 + 0x238);
        if (puVar1 != (undefined8 *)(lVar6 + 0x40)) {
          iVar9 = *(int *)(lVar6 + 0x48);
          pvVar10 = *(void **)(lVar6 + 0x40);
          *(int *)(param_1 + 0x240) = iVar9;
          if ((iVar9 == 0) && (*(int *)(param_1 + 0x244) == 0)) {
            *(undefined4 *)(param_1 + 0x244) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar9);
            _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar10,(longlong)iVar9 << 3);
          }
        }
      }
      lVar5 = FUN_1429c7e40();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && ((*(byte *)(lVar6 + 0x28) & 0x80) != 0)) {
        *(undefined1 *)(param_1 + 0x250) = 1;
      }
    }
  }
  *(byte *)(param_1 + 0x230) = (byte)(*(uint *)(param_2 + 0xb0) >> 3) & 1;
  return;
}



// FUNCTION 1425e8840 FUN_1425e8840 body=1392 status=ok
// SIG undefined FUN_1425e8840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425e8840(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  longlong local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [4];
  undefined2 auStack_144 [126];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar5 = 0;
  local_48 = 0;
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_168,param_1 + 0x688,0);
  lVar6 = (longlong)(int)local_48;
  iVar3 = (int)local_48 + 1;
  if (local_48._4_4_ < iVar3) {
    uVar8 = local_48 & 0xffffffff;
    local_48._0_4_ = iVar3;
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar8);
    iVar3 = (int)local_48;
  }
  local_48._0_4_ = iVar3;
  local_148[lVar6 * 8] = *puVar1;
  lVar6 = lVar6 * 8;
  local_148[lVar6 + 1] = puVar1[1];
  local_148[lVar6 + 2] = puVar1[2];
  local_148[lVar6 + 3] = puVar1[3];
  *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
  *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_168,param_1 + 0x698,1);
  iVar3 = (int)local_48;
  lVar6 = (longlong)(int)local_48;
  local_48._0_4_ = (int)local_48 + 1;
  if (local_48._4_4_ < (int)local_48) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,iVar3);
  }
  local_148[lVar6 * 8] = *puVar1;
  lVar6 = lVar6 * 8;
  local_148[lVar6 + 1] = puVar1[1];
  local_148[lVar6 + 2] = puVar1[2];
  local_148[lVar6 + 3] = puVar1[3];
  *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
  *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
  puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_168,param_1 + 0x6a8,2);
  iVar3 = (int)local_48;
  lVar6 = (longlong)(int)local_48;
  local_48._0_4_ = (int)local_48 + 1;
  if (local_48._4_4_ < (int)local_48) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,iVar3);
  }
  lVar6 = lVar6 * 8;
  local_148[lVar6] = *puVar1;
  local_148[lVar6 + 1] = puVar1[1];
  local_148[lVar6 + 2] = puVar1[2];
  local_148[lVar6 + 3] = puVar1[3];
  *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
  iVar3 = *(int *)(param_1 + 0x6f8);
  *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
  if (iVar3 != 0) {
    uVar8 = uVar5;
    if (0 < iVar3) {
      do {
        iVar4 = (int)uVar8;
        puVar1 = (undefined1 *)
                 FUN_1419e2500(param_1,local_168,param_1 + 0x6b8 + (longlong)iVar4 * 0x10,iVar4 + 5)
        ;
        uVar8 = local_48;
        lVar6 = (longlong)(int)local_48;
        iVar3 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar3);
        if (local_48._4_4_ < iVar3) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar8 & 0xffffffff);
        }
        lVar6 = lVar6 * 8;
        local_148[lVar6] = *puVar1;
        local_148[lVar6 + 1] = puVar1[1];
        local_148[lVar6 + 2] = puVar1[2];
        local_148[lVar6 + 3] = puVar1[3];
        *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
        iVar3 = *(int *)(param_1 + 0x6f8);
        *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
        uVar8 = (ulonglong)(iVar4 + 1U);
      } while ((int)(iVar4 + 1U) < iVar3);
    }
    for (; iVar3 < 4; iVar3 = iVar3 + 1) {
      puVar1 = (undefined1 *)
               FUN_1419e2500(param_1,local_168,
                             param_1 + 0x6a8 + (longlong)*(int *)(param_1 + 0x6f8) * 0x10,iVar3 + 5)
      ;
      uVar8 = local_48;
      lVar6 = (longlong)(int)local_48;
      iVar4 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar4);
      if (local_48._4_4_ < iVar4) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar8 & 0xffffffff);
      }
      lVar6 = lVar6 * 8;
      local_148[lVar6] = *puVar1;
      local_148[lVar6 + 1] = puVar1[1];
      local_148[lVar6 + 2] = puVar1[2];
      local_148[lVar6 + 3] = puVar1[3];
      *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
    }
  }
  puVar1 = (undefined1 *)(param_1 + 0x778);
  uVar8 = uVar5;
  do {
    iVar3 = (int)uVar5;
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x738) <= iVar3)) {
LAB_1425e8b28:
      local_158 = FUN_141ee2f20(*puVar1);
      plVar7 = &local_158;
      puVar2 = local_160;
      local_150 = 0;
      local_14c = 0x80000;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x730);
      if (*(longlong *)(param_1 + 0x730) == 0) {
        lVar6 = param_1 + 0x710;
      }
      plVar7 = (longlong *)(lVar6 + uVar8);
      if (*plVar7 == 0) goto LAB_1425e8b28;
      puVar2 = local_168;
    }
    puVar2 = (undefined1 *)FUN_1419e2500(param_1,puVar2,plVar7,iVar3 + 0x10);
    uVar5 = local_48;
    lVar6 = (longlong)(int)local_48;
    iVar4 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar4);
    if (local_48._4_4_ < iVar4) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar5 & 0xffffffff);
    }
    local_148[lVar6 * 8] = *puVar2;
    lVar6 = lVar6 * 8;
    uVar5 = (ulonglong)(iVar3 + 1U);
    local_148[lVar6 + 1] = puVar2[1];
    uVar8 = uVar8 + 0x10;
    puVar1 = puVar1 + 1;
    local_148[lVar6 + 2] = puVar2[2];
    local_148[lVar6 + 3] = puVar2[3];
    *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar2 + 4);
    *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar2 + 6);
    if (1 < (int)(iVar3 + 1U)) {
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_160,param_1 + 0x780,3);
      lVar6 = (longlong)(int)local_48;
      iVar3 = (int)local_48 + 1;
      if (local_48._4_4_ < iVar3) {
        uVar5 = local_48 & 0xffffffff;
        local_48._0_4_ = iVar3;
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar5);
        iVar3 = (int)local_48;
      }
      local_48._0_4_ = iVar3;
      local_148[lVar6 * 8] = *puVar1;
      lVar6 = lVar6 * 8;
      local_148[lVar6 + 1] = puVar1[1];
      local_148[lVar6 + 2] = puVar1[2];
      local_148[lVar6 + 3] = puVar1[3];
      *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_160,param_1 + 0x7a0,4);
      iVar3 = (int)local_48;
      lVar6 = (longlong)(int)local_48;
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,iVar3);
      }
      local_148[lVar6 * 8] = *puVar1;
      lVar6 = lVar6 * 8;
      local_148[lVar6 + 1] = puVar1[1];
      local_148[lVar6 + 2] = puVar1[2];
      local_148[lVar6 + 3] = puVar1[3];
      *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_160,param_1 + 0x790,0xe);
      iVar3 = (int)local_48;
      lVar6 = (longlong)(int)local_48;
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,iVar3);
      }
      local_148[lVar6 * 8] = *puVar1;
      lVar6 = lVar6 * 8;
      local_148[lVar6 + 1] = puVar1[1];
      local_148[lVar6 + 2] = puVar1[2];
      local_148[lVar6 + 3] = puVar1[3];
      *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
      puVar1 = (undefined1 *)FUN_1419e2500(param_1,local_160,param_1 + 0x7b0,0xf);
      iVar3 = (int)local_48;
      lVar6 = (longlong)(int)local_48;
      local_48._0_4_ = (int)local_48 + 1;
      if (local_48._4_4_ < (int)local_48) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,iVar3);
      }
      local_148[lVar6 * 8] = *puVar1;
      lVar6 = lVar6 * 8;
      local_148[lVar6 + 1] = puVar1[1];
      local_148[lVar6 + 2] = puVar1[2];
      local_148[lVar6 + 3] = puVar1[3];
      *(undefined2 *)(local_148 + lVar6 + 4) = *(undefined2 *)(puVar1 + 4);
      *(undefined2 *)(local_148 + lVar6 + 6) = *(undefined2 *)(puVar1 + 6);
      FUN_1419f1da0(param_1,local_148);
      return;
    }
  } while( true );
}



// FUNCTION 1425e8dc0 FUN_1425e8dc0 body=614 status=ok
// SIG undefined FUN_1425e8dc0(void)

void FUN_1425e8dc0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  uint in_stack_ffffffffffffff98;
  
  cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x40);
  if (cVar2 == '\0') {
    plVar3 = (longlong *)FName::FName(local_res10,L"NoiseScaleDstribution",1);
    local_res8 = 0;
    lVar5 = *plVar3;
    if (lVar5 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar4 = UDistributionVectorUniform::GetPrivateStaticClass();
    in_stack_ffffffffffffff98 = 0;
    lVar5 = FUN_1417985e0(uVar4,param_1,lVar5,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x88) = lVar5;
    if (lVar5 != 0) {
      lVar6 = UDistributionVectorUniform::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | 2;
        *(undefined8 *)(lVar5 + 0x38) = 0x3f8000003f800000;
        *(undefined4 *)(lVar5 + 0x40) = 0x3f800000;
        *(undefined8 *)(lVar5 + 0x44) = 0xbf800000bf800000;
        *(undefined4 *)(lVar5 + 0x4c) = 0xbf800000;
      }
    }
  }
  puVar7 = (undefined8 *)FName::FName(&local_res8,L"DistributionNoiseOffset",1);
  uVar4 = *puVar7;
  cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x98);
  if (cVar2 == '\0') {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffff00;
    lVar5 = NewObject<UDistributionVectorConstant>(param_1,uVar4,0,0,in_stack_ffffffffffffff98,0);
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined4 *)(lVar5 + 0x40) = 0;
    *(longlong *)(param_1 + 0xe0) = lVar5;
  }
  puVar7 = (undefined8 *)FName::FName(&local_res8,L"DistributionNoiseStrength",1);
  uVar4 = *puVar7;
  cVar2 = FRawDistributionVector::IsCreated(param_1 + 0xf0);
  if (cVar2 == '\0') {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffff00;
    lVar5 = NewObject<UDistributionVectorConstant>(param_1,uVar4,0,0,in_stack_ffffffffffffff98,0);
    *(undefined8 *)(lVar5 + 0x38) = 0x3f8000003f800000;
    *(undefined4 *)(lVar5 + 0x40) = 0x3f800000;
    *(longlong *)(param_1 + 0x138) = lVar5;
  }
  puVar7 = (undefined8 *)FName::FName(&local_res8,L"DistributionNoiseStrengthScale",1);
  uVar4 = *puVar7;
  cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x148);
  if (cVar2 == '\0') {
    lVar5 = NewObject<UDistributionVectorConstant>
                      (param_1,uVar4,0,0,in_stack_ffffffffffffff98 & 0xffffff00,0);
    *(undefined8 *)(lVar5 + 0x38) = 0x3f8000003f800000;
    *(undefined4 *)(lVar5 + 0x40) = 0x3f800000;
    *(longlong *)(param_1 + 400) = lVar5;
  }
  return;
}



// FUNCTION 1425e9030 FUN_1425e9030 body=1575 status=ok
// SIG undefined FUN_1425e9030(void)

uint * FUN_1425e9030(longlong *param_1,uint *param_2,longlong *param_3,longlong *param_4,
                    uint param_5)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined2 *puVar14;
  uint *puVar15;
  wchar_t *pwVar16;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff78;
  uint local_78;
  int local_74;
  int local_70;
  uint local_6c;
  longlong local_68;
  undefined2 *local_60;
  undefined8 local_58;
  longlong local_50 [5];
  
  uVar5 = param_5;
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_6c = 0;
  if (0x10 < (int)param_5) {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x80;
    *param_4 = 0;
    *param_2 = 0;
    return param_2;
  }
  local_78 = 0;
  (**(code **)(*param_3 + 0x68))(param_3,&local_78);
  if (((char)param_3[5] < '\0') || (local_78 == 0)) {
LAB_1425e9628:
    *param_4 = 0;
LAB_1425e962b:
    *param_2 = local_78;
    return param_2;
  }
  if (local_78 != 1) {
    lVar8 = (**(code **)(*param_1 + 0x2d8))
                      (param_1,&local_78,*(undefined1 *)(param_1[0x62] + 0x148));
    *param_4 = lVar8;
  }
  lVar8 = 1;
  uVar13 = param_5 >> 8;
  param_5 = param_5 & 0xffffff00;
  if ((local_78 == 1) || (*(char *)(param_1[0x62] + 0x148) != '\0')) {
    plVar1 = (longlong *)param_3[1];
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&param_5,1);
    }
    else {
      param_5 = CONCAT31((int3)uVar13,*(undefined1 *)*plVar1);
      *plVar1 = *plVar1 + 1;
    }
    if ((char)param_3[5] < '\0') goto LAB_1425e9628;
  }
  if (*(char *)(param_1[0x62] + 0x148) != '\0') {
    FUN_140ac3dd0(param_1[0x62] + 0xa8,&local_70,&local_78,0);
  }
  bVar2 = true;
  if ((param_5 & 1) == 0) {
    if (*param_4 == 0) {
      FUN_1425f45c0(param_1[0x62],&local_78);
    }
    goto LAB_1425e962b;
  }
  local_68 = 0;
  uVar9 = CONCAT44(uVar17,uVar5 + 1);
  FUN_1425e9030(param_1,&local_70,param_3,&local_68,uVar9);
  uVar17 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_60 = (undefined2 *)0x0;
  local_58 = 0;
  local_74 = 0;
  FUN_14158ce90(param_3,&local_60);
  if ((param_5 & 4) != 0) {
    plVar1 = (longlong *)param_3[1];
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_74,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_74,4);
      }
    }
    else {
      local_74 = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  if (((local_78 & 1) == 0) || (local_70 != 0)) {
    bVar2 = false;
  }
  if ((char)param_3[5] < '\0') {
    *param_4 = 0;
  }
  else {
    (**(code **)(*DAT_146b17150 + 0x400))
              (DAT_146b17150,*(undefined8 *)(param_1[0x26] + 0x58),&local_60,1);
    if (local_78 == 1) {
      if (((!bVar2) && (local_70 != 0)) && (local_68 == 0)) {
        *param_4 = 0;
        *param_2 = 1;
        goto LAB_1425e958a;
      }
      puVar14 = &DAT_143f3eda8;
      if ((int)local_58 != 0) {
        puVar14 = local_60;
      }
      uVar9 = UObject::GetPrivateStaticClass();
      uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
      lVar10 = FUN_141799410(uVar9,local_68,puVar14,0);
      *param_4 = lVar10;
      if (lVar10 == 0) {
        if (bVar2) {
          puVar14 = &DAT_143f3eda8;
          if ((int)local_58 != 0) {
            puVar14 = local_60;
          }
          lVar10 = LoadPackage(0,puVar14,0,0);
          *param_4 = lVar10;
        }
        if (lVar10 == 0) goto LAB_1425e9588;
      }
      lVar3 = DAT_146b04830;
      iVar7 = *(int *)(lVar10 + 0xc);
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar13 = iVar7 >> 0x1f & 0xffff;
        uVar5 = iVar7 + uVar13;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                 (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) {
        if ((local_74 != 0) && (*(int *)(param_1[0x62] + 0x1a8) == 1)) {
          cVar4 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar4 != '\0') ||
             ((DAT_1468c21ae == '\0' || (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
            lVar8 = 0;
          }
          if ((*(int *)(lVar3 + lVar8 * 4) == 0) &&
             (iVar7 = FUN_1425e6170(param_1[0x62],*param_4), iVar7 != local_74)) {
            if (local_68 == 0) {
              pwVar16 = L"NULL";
              uVar5 = local_6c;
            }
            else {
              puVar11 = (undefined8 *)UObjectBaseUtility::GetPathName(local_68,local_50 + 2,0);
              uVar5 = 0x40;
              if (*(int *)(puVar11 + 1) == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = (wchar_t *)*puVar11;
              }
            }
            puVar14 = &DAT_143f3eda8;
            if ((int)local_58 != 0) {
              puVar14 = local_60;
            }
            FString::PrintfImpl(local_50,
                                L"UPackageMapClient::InternalLoadObject: Default object package network checksum mismatch! PathName: %s, ObjOuter: %s, GUID1: %u, GUID2: %u "
                                ,puVar14,pwVar16,CONCAT44(uVar17,iVar7),CONCAT44(uVar18,local_74));
            if (((uVar5 & 0x40) != 0) && (local_50[2] != 0)) {
              FMemory::Free();
            }
            *param_4 = 0;
            FUN_1425dccc0(*(undefined8 *)(param_1[0x62] + 0x150),10,local_50);
            *param_2 = local_78;
            if (local_50[0] != 0) {
              FMemory::Free();
            }
            goto LAB_1425e958a;
          }
        }
        if (bVar2) {
          lVar8 = *param_4;
          if (lVar8 != 0) {
            lVar10 = UPackage::GetPrivateStaticClass();
            lVar8 = *(longlong *)(lVar8 + 0x10);
            if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
                != lVar10 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_1425e946a;
          }
          *param_4 = 0;
        }
        else {
LAB_1425e946a:
          puVar12 = (uint *)FUN_1425e6a00(param_1[0x62],&local_6c,*param_4,0);
          param_4 = (longlong *)*param_4;
          local_78 = *puVar12;
          FUN_1425e6a00(param_1[0x62],&local_6c,param_4,0);
          if ((local_6c != 1) && (param_1[0x26] != 0)) {
            lVar8 = param_1[0x60];
            if (lVar8 != 0) {
              puVar15 = *(uint **)(lVar8 + 0xf0);
              puVar12 = puVar15 + *(int *)(lVar8 + 0xf8);
              for (; puVar15 != puVar12; puVar15 = puVar15 + 1) {
                if (*puVar15 == local_6c) goto LAB_1425e9588;
              }
            }
            if (((local_6c != 0) &&
                (cVar4 = (**(code **)(*param_4 + 0x1b8))(param_4), cVar4 != '\0')) &&
               ((local_6c == 1 || (cVar4 = FUN_1425ec5e0(param_1), cVar4 == '\0')))) {
              local_50[0] = 0;
              local_50[1] = 0;
              FUN_1425e2910(param_1,local_6c,param_4,local_50,0);
            }
          }
        }
      }
      else {
        *param_4 = 0;
      }
    }
    else if (*param_4 == 0) {
      cVar4 = FUN_1425e9f50(param_1);
      if (cVar4 == '\0') {
        FUN_1425ef650(param_1[0x62],&local_78,&local_60,&local_70,CONCAT44(uVar17,local_74),
                      CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff70 >> 8),(byte)param_5 >> 1)
                      & 0xffffffffffffff01,
                      CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff78 >> 8),(byte)param_5 >> 1)
                      & 0xffffffffffffff01);
        lVar8 = FUN_1425e6270(param_1[0x62],&local_78,*(undefined1 *)(param_1[0x62] + 0x148));
        *param_4 = lVar8;
        if (lVar8 == 0) {
          FUN_1425f45c0(param_1[0x62],&local_78);
        }
        if (local_60 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        goto LAB_1425e962b;
      }
    }
    else {
      FUN_1425f1170(param_1[0x62],*param_4,&local_78,&local_60,local_68,&local_70,&param_5);
    }
  }
LAB_1425e9588:
  *param_2 = local_78;
LAB_1425e958a:
  if (local_60 == (undefined2 *)0x0) {
    return param_2;
  }
  FMemory::Free();
  return param_2;
}



// FUNCTION 1425e9660 FUN_1425e9660 body=1407 status=ok
// SIG undefined FUN_1425e9660(void)

void FUN_1425e9660(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong *param_5
                  ,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  undefined2 *puVar14;
  bool bVar15;
  byte local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  int local_68 [2];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  undefined8 local_48;
  
  local_res18[0] = param_3;
  cVar1 = FNetGUIDCache::CanClientLoadObject(*(undefined8 *)(param_1 + 0x310),param_4,local_res18);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x310) + 0x1ac);
  if (iVar3 == 0) {
    if (0 < DAT_146b047c8) goto LAB_1425e96bb;
  }
  else if ((iVar3 != 1) && (iVar3 == 2)) {
LAB_1425e96bb:
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 0x150);
    if (((plVar4 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar4 + 0x368))(), cVar2 != '\0'))
       && ((*(char *)(*(longlong *)(param_1 + 0x310) + 0x148) == '\0' && (cVar1 != '\0')))) {
      TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                (param_1 + 800,local_res18);
    }
  }
  (**(code **)(*param_2 + 0x68))(param_2);
  if (local_res18[0] == 0) {
    lVar8 = *param_5;
    goto LAB_1425e9bc9;
  }
  local_res8[0] = -(*(int *)(*(longlong *)(param_1 + 0x310) + 0x1a8) != 0) & 4;
  if (local_res18[0] == 1) {
    local_res8[0] = local_res8[0] | 1;
LAB_1425e978b:
    plVar4 = (longlong *)param_2[1];
    if ((byte *)plVar4[1] < (byte *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
  }
  else if (*(char *)(*(longlong *)(param_1 + 0x310) + 0x148) != '\0') {
    if (param_4 == 0) {
      local_res8[0] = 1 < (int)param_5[1] | local_res8[0];
    }
    else {
      cVar2 = FUN_1425f4780(param_1,param_4,local_res18);
      local_res8[0] = cVar2 != '\0' | local_res8[0] & 0xfe;
    }
    local_res8[0] = local_res8[0] & 0xfd | (cVar1 == '\0') * '\x02';
    goto LAB_1425e978b;
  }
  if ((local_res8[0] & 1) != 0) {
    bVar15 = param_4 == 0;
    if (param_4 != 0) {
      local_50 = *(int **)(param_4 + 0x18);
      FName::ToString(&local_50,&local_60);
      if (param_5 == &local_60) {
        if (local_60 != 0) {
          FMemory::Free();
        }
        param_6 = *(undefined8 *)(param_4 + 0x20);
      }
      else {
        if (*param_5 != 0) {
          FMemory::Free();
        }
        *param_5 = local_60;
        *(undefined4 *)(param_5 + 1) = local_58;
        *(undefined4 *)((longlong)param_5 + 0xc) = local_54;
        param_6 = *(undefined8 *)(param_4 + 0x20);
      }
    }
    FUN_1425e6a00(*(undefined8 *)(param_1 + 0x310),local_68,param_6,0);
    local_50 = (int *)0x0;
    local_48 = 0;
    FUN_1425e9660(param_1,param_2,local_68[0],param_6,&local_50,0);
    lVar8 = *(longlong *)(param_1 + 0x130);
    puVar14 = &DAT_143f3eda8;
    if (*(longlong *)(lVar8 + 0x58) != 0) {
      if (param_4 == 0) {
        if ((int)param_5[1] == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*param_5;
        }
        plVar4 = (longlong *)FName::FName(&local_50,puVar9,1);
        lVar8 = *(longlong *)(param_1 + 0x130);
        lVar13 = *plVar4;
      }
      else {
        lVar13 = *(longlong *)(param_4 + 0x18);
      }
      lVar8 = *(longlong *)(lVar8 + 0x58);
      if (*(int *)(lVar8 + 0x2b8) != *(int *)(lVar8 + 0x2e4)) {
        lVar10 = *(longlong *)(lVar8 + 0x2f0);
        if (*(longlong *)(lVar8 + 0x2f0) == 0) {
          lVar10 = lVar8 + 0x2e8;
        }
        iVar3 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar13 >> 0x20) + (int)lVar13) &
                                  (longlong)*(int *)(lVar8 + 0x2f8) - 1U) * 4);
        if (iVar3 != -1) {
          lVar8 = *(longlong *)(lVar8 + 0x2b0);
          do {
            lVar10 = (longlong)iVar3;
            if (*(longlong *)(lVar8 + lVar10 * 0x18) == lVar13) {
              if ((iVar3 != -1) && (lVar8 = lVar8 + lVar10 * 0x18, lVar8 != 0)) {
                local_60 = *(longlong *)(lVar8 + 8);
                goto LAB_1425e9936;
              }
              break;
            }
            iVar3 = *(int *)(lVar8 + 0x10 + lVar10 * 0x18);
          } while (iVar3 != -1);
        }
      }
      local_60 = 0;
LAB_1425e9936:
      local_50 = (int *)0x0;
      if (local_60 != 0) {
        uVar5 = FName::ToString(&local_60,&local_50);
        FString::operator=(param_5,uVar5);
        if (local_50 != (int *)0x0) {
          FMemory::Free();
        }
        bVar15 = true;
      }
    }
    cVar1 = (**(code **)(*DAT_146b17150 + 0x400))
                      (DAT_146b17150,*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x58),param_5,
                       0);
    FUN_14158ce90(param_2,param_5);
    local_res10[0] = 0;
    if ((local_res8[0] & 4) != 0) {
      local_res10[0] = FUN_1425e6170(*(undefined8 *)(param_1 + 0x310),param_4);
      plVar4 = (longlong *)param_2[1];
      if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x310);
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar6 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar6 = plVar4 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)plVar4[9] - 1U & (longlong)local_res18[0]) * 4);
      if (iVar3 != -1) {
        do {
          piVar12 = (int *)((longlong)iVar3 * 0x40 + *plVar4);
          if (*piVar12 == local_res18[0]) {
            if (iVar3 != -1) goto LAB_1425e9a92;
            break;
          }
          iVar3 = piVar12[0xe];
        } while (iVar3 != -1);
      }
    }
    piVar12 = (int *)0x0;
LAB_1425e9a92:
    piVar11 = piVar12 + 2;
    if (piVar12 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    if (piVar11 != (int *)0x0) {
      if (bVar15 || cVar1 != '\0') {
        if ((int)param_5[1] != 0) {
          puVar14 = (undefined2 *)*param_5;
        }
        puVar7 = (undefined8 *)FName::FName(&local_50,puVar14,1);
        uVar5 = *puVar7;
      }
      else {
        uVar5 = *(undefined8 *)(param_4 + 0x18);
      }
      *(undefined8 *)(piVar11 + 4) = uVar5;
      piVar11[2] = local_68[0];
      *(byte *)(piVar11 + 10) =
           *(byte *)(piVar11 + 10) ^ (local_res8[0] >> 1 ^ *(byte *)(piVar11 + 10)) & 1;
      *(byte *)(piVar11 + 10) =
           *(byte *)(piVar11 + 10) ^ (*(byte *)(piVar11 + 10) ^ local_res8[0]) & 2;
      piVar11[6] = local_res10[0];
    }
    if (*(char *)(*(longlong *)(param_1 + 0x310) + 0x148) != '\0') {
      FUN_140ac3dd0(param_1 + 0x148,&local_60,local_res18,0);
      plVar4 = (longlong *)(param_1 + 0xe0);
      if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
        lVar8 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar8 = param_1 + 0x118;
        }
        iVar3 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x128) - 1U &
                                 (longlong)local_res18[0]) * 4);
        if (iVar3 != -1) {
          do {
            piVar12 = (int *)((longlong)iVar3 * 0x10 + *plVar4);
            if (*piVar12 == local_res18[0]) {
              if ((iVar3 != -1) && (piVar12 != (int *)0x0)) goto LAB_1425e9bba;
              break;
            }
            iVar3 = piVar12[2];
          } while (iVar3 != -1);
        }
      }
      local_50 = local_res18;
      TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FNetworkGUID_const_&>_>(plVar4,&local_60,&local_50,0);
      piVar12 = (int *)((longlong)(int)local_60 * 0x10 + *plVar4);
LAB_1425e9bba:
      piVar12[1] = piVar12[1] + 1;
    }
  }
  lVar8 = *param_5;
LAB_1425e9bc9:
  if (lVar8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425e9be0 FUN_1425e9be0 body=25 status=ok
// SIG undefined FUN_1425e9be0(void)

ulonglong FUN_1425e9be0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425e9bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x2a0))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425e9c10 IsDynamicObject body=26 status=ok
// SIG undefined IsDynamicObject(void)

bool FNetGUIDCache::IsDynamicObject(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x1c0))(param_2);
  return cVar1 == '\0';
}



// FUNCTION 1425e9c30 IsGUIDBroken body=172 status=ok
// SIG undefined IsGUIDBroken(void)

ulonglong FNetGUIDCache::IsGUIDBroken(longlong *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_2;
  if (uVar1 < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    uVar2 = *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar1) * 4
                     );
    if (uVar2 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar2 * 0x40 + *param_1);
        if (*puVar5 == uVar1) {
          if (uVar2 != 0xffffffff) goto LAB_1425e9cb1;
          break;
        }
        uVar2 = puVar5[0xe];
      } while (uVar2 != 0xffffffff);
    }
  }
  puVar5 = (uint *)0x0;
LAB_1425e9cb1:
  puVar4 = puVar5 + 2;
  if (puVar5 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  if (puVar4 != (uint *)0x0) {
    return (ulonglong)((byte)puVar4[10] >> 3 & 1);
  }
  return (ulonglong)param_3;
}



// FUNCTION 1425e9cf0 IsGUIDLoaded body=123 status=ok
// SIG undefined IsGUIDLoaded(void)

ulonglong FNetGUIDCache::IsGUIDLoaded(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar1 = *param_2;
  if (1 < uVar1) {
    uVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    in_RAX = (ulonglong)uVar2;
    if (uVar2 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      uVar2 = *(uint *)((longlong)plVar3 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar1) * 4);
      in_RAX = (ulonglong)uVar2;
      if (uVar2 != 0xffffffff) {
        do {
          puVar6 = (uint *)((longlong)(int)in_RAX * 0x40 + *param_1);
          if (*puVar6 == uVar1) {
            if ((int)in_RAX != -1) goto LAB_1425e9d51;
            break;
          }
          in_RAX = (ulonglong)puVar6[0xe];
        } while (puVar6[0xe] != 0xffffffff);
      }
    }
    puVar6 = (uint *)0x0;
LAB_1425e9d51:
    puVar5 = puVar6 + 2;
    if (puVar6 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    if (puVar5 != (uint *)0x0) {
      uVar4 = FUN_14044af00(puVar5,0);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425e9d70 IsGUIDPending body=126 status=ok
// SIG undefined IsGUIDPending(void)

ulonglong FNetGUIDCache::IsGUIDPending(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_2;
  if (1 < uVar1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      uVar2 = *(uint *)((longlong)plVar3 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar1) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar5 = (uint *)((longlong)(int)uVar2 * 0x40 + *param_1);
          if (*puVar5 == uVar1) {
            if (uVar2 != 0xffffffff) goto LAB_1425e9dd1;
            break;
          }
          uVar2 = puVar5[0xe];
        } while (uVar2 != 0xffffffff);
      }
    }
    puVar5 = (uint *)0x0;
LAB_1425e9dd1:
    puVar4 = puVar5 + 2;
    if (puVar5 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    in_RAX = 0;
    if (puVar4 != (uint *)0x0) {
      return (ulonglong)((byte)puVar4[10] >> 2 & 1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425e9df0 IsGUIDPending body=285 status=ok
// SIG undefined IsGUIDPending(void)

ulonglong UPackageMapClient::IsGUIDPending(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int *in_RAX;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = *param_2;
  if (iVar7 != 0) {
    do {
      if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
        lVar4 = *(longlong *)(param_1 + 0x1d8);
        if (*(longlong *)(param_1 + 0x1d8) == 0) {
          lVar4 = param_1 + 0x1d0;
        }
        uVar1 = *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1e0) - 1U & (longlong)iVar7) * 4);
        if (uVar1 != 0xffffffff) {
          do {
            in_RAX = (int *)(ulonglong)uVar1;
            if (*(int *)(*(longlong *)(param_1 + 0x198) + (longlong)(int)uVar1 * 0xc) == iVar7) {
              if (uVar1 != 0xffffffff) goto LAB_1425e9f00;
              break;
            }
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0x198) + 4 + (longlong)(int)uVar1 * 0xc);
          } while (uVar1 != 0xffffffff);
        }
      }
      plVar2 = *(longlong **)(param_1 + 0x310);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar5 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar5 = plVar2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar5 + ((longlong)(int)plVar2[9] - 1U & (longlong)iVar7) * 4);
        if (iVar3 != -1) {
          do {
            piVar6 = (int *)((longlong)iVar3 * 0x40 + *plVar2);
            if (*piVar6 == iVar7) {
              if (iVar3 != -1) goto LAB_1425e9ed2;
              break;
            }
            iVar3 = piVar6[0xe];
          } while (iVar3 != -1);
        }
      }
      piVar6 = (int *)0x0;
LAB_1425e9ed2:
      in_RAX = piVar6 + 2;
      if (piVar6 == (int *)0x0) {
        in_RAX = (int *)0x0;
      }
      if (in_RAX == (int *)0x0) break;
      if ((*(byte *)(in_RAX + 10) & 4) != 0) {
LAB_1425e9f00:
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      iVar7 = in_RAX[2];
    } while (iVar7 != 0);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425e9f20 FUN_1425e9f20 body=41 status=ok
// SIG undefined FUN_1425e9f20(void)

undefined1 FUN_1425e9f20(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x368))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1425e9f50 FUN_1425e9f50 body=48 status=ok
// SIG undefined FUN_1425e9f50(void)

undefined1 FUN_1425e9f50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 0x150);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x368))();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1425e9f80 FUN_1425e9f80 body=609 status=ok
// SIG undefined FUN_1425e9f80(void)

ulonglong FUN_1425e9f80(longlong param_1,longlong param_2,wchar_t *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  lVar6 = *(longlong *)(param_2 + 0x48);
  if (lVar6 != 0) {
    lVar5 = FUN_1429d11b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar9 = 0;
      lVar5 = 0;
      if (*(longlong *)(lVar6 + 0x38) != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x48);
      }
      plVar8 = *(longlong **)(param_1 + 0x40);
      lVar6 = (longlong)*(int *)(param_1 + 0x48);
      plVar1 = plVar8 + lVar6;
      lVar4 = 0;
      do {
        if (plVar8 == plVar1) {
          return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        }
        lVar2 = *plVar8;
        lVar10 = lVar4;
        if (lVar2 != 0) {
          lVar6 = *(longlong *)(lVar2 + 0x38);
          lVar10 = lVar6;
          if ((lVar4 != 0) && (lVar10 = lVar4, lVar6 != lVar4)) {
            pwVar7 = L"Sequences with different skeletons";
            if (*(wchar_t **)param_3 != L"Sequences with different skeletons") {
              param_3[4] = L'\0';
              param_3[5] = L'\0';
              if (*(int *)(param_3 + 6) != 0x23) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,0x23);
                iVar9 = *(int *)(param_3 + 4);
              }
              *(int *)(param_3 + 4) = iVar9 + 0x23;
              if (*(int *)(param_3 + 6) < iVar9 + 0x23) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
              }
              builtin_wcsncpy(*(wchar_t **)param_3,L"Sequences with different skeletons",0x23);
              pwVar7 = (wchar_t *)0x0;
            }
            goto LAB_1425ea1ca;
          }
          if (lVar6 != lVar5) {
            local_res10 = *(undefined8 *)(lVar2 + 0x18);
            FName::ToString(&local_res10,&local_18);
            puVar11 = &DAT_143f3eda8;
            if (local_10 != 0) {
              puVar11 = local_18;
            }
            FString::PrintfImpl(&local_28,L"Sequence %s skeleton doesn\'t match mesh skeleton",
                                puVar11);
            pwVar7 = (wchar_t *)&local_28;
            if (param_3 == pwVar7) {
              if (local_28 != 0) {
                pwVar7 = (wchar_t *)FMemory::Free();
              }
            }
            else {
              if (*(longlong *)param_3 != 0) {
                FMemory::Free();
              }
              *(longlong *)param_3 = local_28;
              *(undefined4 *)(param_3 + 4) = (undefined4)local_20;
              pwVar7 = (wchar_t *)(ulonglong)local_20._4_4_;
              *(uint *)(param_3 + 6) = local_20._4_4_;
              local_20 = 0;
              local_28 = 0;
            }
            if (local_18 != (undefined2 *)0x0) {
              pwVar7 = (wchar_t *)FMemory::Free();
            }
            goto LAB_1425ea1ca;
          }
        }
        plVar8 = plVar8 + 1;
        lVar4 = lVar10;
      } while( true );
    }
  }
  pwVar7 = L"Skeletal Mesh Type Data required";
  if (*(wchar_t **)param_3 != L"Skeletal Mesh Type Data required") {
    iVar9 = 0;
    param_3[4] = L'\0';
    param_3[5] = L'\0';
    if (*(int *)(param_3 + 6) != 0x21) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,0x21);
      iVar9 = *(int *)(param_3 + 4);
    }
    *(int *)(param_3 + 4) = iVar9 + 0x21;
    if (*(int *)(param_3 + 6) < iVar9 + 0x21) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
    }
    builtin_wcsncpy(*(wchar_t **)param_3,L"Skeletal Mesh Type Data required",0x21);
    pwVar7 = (wchar_t *)0x0;
  }
LAB_1425ea1ca:
  return (ulonglong)pwVar7 & 0xffffffffffffff00;
}



// FUNCTION 1425ea1f0 ListNetGUIDExports body=702 status=ok
// SIG undefined ListNetGUIDExports(void)

void ListNetGUIDExports(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined1 **local_res18;
  undefined1 ***local_res20;
  longlong local_108;
  ulonglong local_100;
  int local_f8;
  int local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 *local_98;
  undefined2 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined1 auStack_70 [16];
  undefined1 local_40 [16];
  
  local_108 = 0;
  local_100 = 0;
  local_f8 = -1;
  uVar4 = UPackageMapClient::GetPrivateStaticClass();
  FUN_1417a5560(uVar4,&local_108,1,0x10,0);
  uVar8 = local_100 & 0xffffffff;
  do {
    local_f8 = local_f8 + 1;
    if ((int)local_100 <= local_f8) break;
  } while (*(longlong *)(local_108 + (longlong)local_f8 * 8) == 0);
  do {
    do {
      if ((local_f8 < 0) || ((int)uVar8 <= local_f8)) {
        if (local_108 != 0) {
          FMemory::Free(local_108);
        }
        return;
      }
      lVar5 = *(longlong *)(local_108 + (longlong)local_f8 * 8);
      local_res10 = local_res8;
      puVar6 = (undefined8 *)(lVar5 + 0xe0);
      local_res18 = &local_res10;
      if (0 < *(int *)(lVar5 + 0xe8) - *(int *)(lVar5 + 0x114)) {
        TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Compact(puVar6);
        local_res20 = &local_res18;
        AlgoImpl::
        IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<FNetworkGUID,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNetworkGUID,int>,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNetworkGUID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,int,0>_>::FValueComparisonClass<_ListNetGUIDExports_::_2_::FCompareNetGUIDCount>_>_>_>_>
                  (*puVar6,(longlong)(*(int *)(lVar5 + 0xe8) - *(int *)(lVar5 + 0x114)),
                   local_res8[0],&local_res20);
      }
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
                (puVar6);
      iVar1 = *(int *)(lVar5 + 0x108);
      puStack_e8 = (uint *)(lVar5 + 0xf0);
      local_f0 = 0;
      uStack_ec = 1;
      iStack_dc = 0;
      iStack_d8 = 0;
      if (iVar1 != 0) {
        puVar9 = *(uint **)(lVar5 + 0x100);
        if (*(uint **)(lVar5 + 0x100) == (uint *)0x0) {
          puVar9 = puStack_e8;
        }
        uVar2 = *puVar9;
        local_f0 = 0;
        iStack_d8 = 0;
        while (uVar2 == 0) {
          lVar5 = (longlong)local_f0;
          iStack_d8 = iStack_d8 + 0x20;
          iVar7 = local_f0 + 1;
          bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_f0;
          local_f0 = iVar7;
          if (bVar3) goto LAB_1425ea396;
          uVar2 = puVar9[lVar5 + 1];
        }
        uStack_ec = -uVar2 & uVar2;
        iVar7 = 0x1f;
        if (uStack_ec != 0) {
          for (; uStack_ec >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_ec == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        iStack_dc = (iStack_d8 - iVar7) + 0x1f;
        if (iVar1 < iStack_dc) {
LAB_1425ea396:
          iStack_dc = iVar1;
        }
      }
      local_e0 = 0xffffffff;
      uStack_b0 = CONCAT44(iStack_dc,0xffffffff);
      auStack_70._8_4_ = iStack_d8;
      auStack_70._0_8_ = uStack_b0;
      auStack_70._12_4_ = uStack_d4;
      uStack_c0 = CONCAT44(uStack_ec,local_f0);
      local_90 = 0;
      local_40._8_4_ = SUB84(puVar6,0);
      local_40._12_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
      local_a8._8_4_ = local_40._8_4_;
      local_a8._0_8_ = auStack_70._8_8_;
      local_a8._12_4_ = local_40._12_4_;
      local_40._0_8_ = auStack_70._8_8_;
      local_c8 = puVar6;
      local_b8 = puStack_e8;
      local_98 = puVar6;
      local_88 = puVar6;
      uStack_80 = uStack_c0;
      puStack_78 = puStack_e8;
      if (iStack_dc < iVar1) {
        do {
          uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
        } while (uStack_b0._4_4_ < (int)local_b8[6]);
        if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(local_98,*(int *)(local_98 + 1) - *(int *)((longlong)local_98 + 0x34),1)
          ;
        }
      }
      uVar8 = local_100 & 0xffffffff;
      local_f8 = local_f8 + 1;
    } while ((int)local_100 <= local_f8);
    do {
      if (*(longlong *)(local_108 + (longlong)local_f8 * 8) != 0) break;
      local_f8 = local_f8 + 1;
    } while (local_f8 < (int)local_100);
  } while( true );
}



// FUNCTION 1425ea4b0 FUN_1425ea4b0 body=155 status=ok
// SIG undefined FUN_1425ea4b0(void)

undefined4 FUN_1425ea4b0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  FString::FString(local_18,param_2);
  uVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,&local_18,1);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar1;
}



// FUNCTION 1425ea550 FUN_1425ea550 body=491 status=ok
// SIG undefined FUN_1425ea550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1425ea550(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  puVar5 = (undefined8 *)FName::FName(local_148,L"AssetRegistry",1);
  uVar2 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar2);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
  uVar11 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18);
    local_100 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_108,0);
    *local_108 = uVar2;
    local_58._0_2_ = CONCAT11(1,(undefined1)local_58);
  }
  uVar13 = uVar11;
  if (0 < (int)param_2[1]) {
    do {
      if (*(int *)(uVar11 + 8 + *param_2) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)(uVar11 + *param_2);
      }
      puVar5 = (undefined8 *)FName::FName(local_148,puVar9,1);
      uVar3 = local_120;
      lVar10 = (longlong)(int)local_120;
      iVar8 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,iVar8);
      if (local_120._4_4_ < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_128,uVar3 & 0xffffffff);
      }
      uVar12 = (int)uVar13 + 1;
      uVar11 = uVar11 + 0x10;
      *(undefined8 *)(local_128 + lVar10 * 8) = *puVar5;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)param_2[1]);
  }
  uVar1 = local_58;
  local_58 = CONCAT31(local_58._1_3_,*(undefined1 *)(param_1 + 0x71));
  uVar4 = local_58;
  local_58._3_1_ = SUB41(uVar1,3);
  local_58._0_2_ = (undefined2)uVar4;
  local_58._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x70),(undefined2)local_58);
  FUN_1412bdbc0(param_1 + 0x60,0);
  (**(code **)(*plVar7 + 0x40))(plVar7,&local_138,param_1 + 0x60);
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  FARFilter::~FARFilter(&local_138);
  return uVar1;
}



// FUNCTION 1425ea740 FUN_1425ea740 body=1320 status=ok
// SIG undefined FUN_1425ea740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1425ea740(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  uint local_1d8;
  longlong local_1d0;
  uint local_1c8;
  int local_1c4;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178 [8];
  longlong *local_170;
  longlong local_168 [2];
  longlong *local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  undefined1 local_128 [16];
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar7 = 0;
  local_1d8 = 0;
  if (*(char *)((longlong)param_1 + 0x59) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x59) = 1;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = 0;
    uVar13 = uVar7;
    if (0 < (int)param_1[0xd]) {
      do {
        plVar8 = (longlong *)
                 FName::ToString((longlong)(int)uVar13 * 0x58 + 8 + param_1[0xc],local_128);
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_188 = *plVar8;
        *plVar8 = 0;
        local_180 = (undefined4)plVar8[1];
        local_17c = *(undefined4 *)((longlong)plVar8 + 0xc);
        plVar8[1] = 0;
        FUN_1417978e0(&local_1b0,&local_188);
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        lVar5 = local_1d0;
        lVar12 = local_1d0 + (longlong)(int)local_1c8 * 0x18;
        for (lVar11 = local_1d0; lVar11 != lVar12; lVar11 = lVar11 + 0x18) {
          cVar6 = FSoftObjectPath::operator==(lVar11,&local_1b0);
          if (cVar6 != '\0') {
            if ((int)((lVar11 - lVar5) / 0x18) != -1) goto LAB_1425ea8e0;
            break;
          }
        }
        uVar17 = local_1c8;
        lVar12 = (longlong)(int)local_1c8;
        local_1c8 = local_1c8 + 1;
        if (local_1c4 < (int)local_1c8) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1d0,uVar17);
        }
        puVar9 = (undefined8 *)(local_1d0 + lVar12 * 0x18);
        *puVar9 = local_1b0;
        puVar9[1] = 0;
        puVar9[1] = local_1a8;
        local_1a8 = 0;
        *(undefined4 *)(puVar9 + 2) = (undefined4)local_1a0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = local_1a0._4_4_;
        local_1a0 = 0;
LAB_1425ea8e0:
        if (local_1a8 != 0) {
          FMemory::Free();
        }
        uVar17 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar17;
      } while ((int)uVar17 < (int)param_1[0xd]);
      if (local_1c8 != 0) {
        FUN_14282a800(local_118);
        local_1c0 = 0;
        local_1b8 = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
        FGenericPlatformString::Memcpy(local_1c0,L"RequestSyncLoad Array",0x2c);
        local_1f8 = &local_1c0;
        FStreamableManager::RequestSyncLoad(local_118,local_178,&local_1d0,0);
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_170 + 1;
          lVar12 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar1 = (int *)((longlong)local_170 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_170 + 8))(local_170,1);
            }
          }
        }
        if (local_1c0 != 0) {
          FMemory::Free();
        }
        FUN_14282cc40(local_118);
      }
      uVar13 = (ulonglong)local_1c8;
    }
    if ((int)uVar13 != 0) {
      plVar8 = (longlong *)(local_1d0 + 8);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        uVar17 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar17;
      } while (uVar17 != 0);
    }
    if (local_1d0 != 0) {
      FMemory::Free();
    }
    uVar13 = uVar7;
    uVar16 = uVar7;
    if (0 < (int)param_1[0xd]) {
      do {
        plVar8 = (longlong *)(param_1[0xc] + uVar16);
        if ((char)param_1[6] == '\0') {
          local_1c0 = 0;
          if (*plVar8 != 0) {
            puVar9 = (undefined8 *)FName::ToString(plVar8,local_168);
            if (*(int *)(puVar9 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar9;
            }
            uVar10 = UObject::GetPrivateStaticClass();
            lVar12 = FUN_141799410(uVar10,0,puVar15);
            if (local_168[0] != 0) {
              FMemory::Free();
            }
            if (lVar12 == 0) {
              FName::ToString(plVar8,local_158);
              uVar10 = UObject::GetPrivateStaticClass();
              local_1e8 = 1;
              local_1f0 = 0;
              local_1f8 = (longlong *)((ulonglong)local_1f8 & 0xffffffff00000000);
              lVar12 = FUN_141799c90(uVar10,0);
              plVar4 = local_158[0];
joined_r0x0001425eabe9:
              if (plVar4 != (longlong *)0x0) {
                FMemory::Free(plVar4);
              }
              if (lVar12 == 0) {
                uVar7 = (ulonglong)local_1d8;
                goto LAB_1425eac18;
              }
            }
            (**(code **)(*param_1 + 0x280))(param_1,lVar12);
            local_1d8 = local_1d8 + 1;
            uVar7 = (ulonglong)local_1d8;
          }
        }
        else {
          plVar8 = plVar8 + 1;
          local_1d0 = 0;
          if (*plVar8 != 0) {
            puVar9 = (undefined8 *)FName::ToString(plVar8,local_148);
            if (*(int *)(puVar9 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar9;
            }
            lVar12 = FUN_14178ae20(0,puVar15);
            if (local_148[0] != 0) {
              FMemory::Free();
            }
            if (lVar12 == 0) {
              puVar9 = (undefined8 *)FName::ToString(plVar8,local_138);
              if (*(int *)(puVar9 + 1) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = (undefined2 *)*puVar9;
              }
              lVar12 = LoadPackage(0,puVar15,0,0);
              if (local_138[0] != 0) {
                FMemory::Free();
              }
            }
            else {
              UPackage::FullyLoad();
            }
            if (lVar12 != 0) {
              local_198 = (longlong *)0x0;
              local_190 = 0;
              local_1f8 = (longlong *)((ulonglong)local_1f8 & 0xffffffff00000000);
              FUN_1417a5b30(lVar12,&local_198);
              plVar8 = local_198 + (int)local_190;
              for (plVar14 = local_198; lVar12 = 0, plVar4 = local_198, plVar14 != plVar8;
                  plVar14 = plVar14 + 1) {
                lVar12 = *plVar14;
                if (lVar12 != 0) {
                  lVar11 = UBlueprintGeneratedClass::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  plVar4 = local_198;
                  if (bVar3) break;
                }
              }
              goto joined_r0x0001425eabe9;
            }
          }
        }
LAB_1425eac18:
        uVar17 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar17;
        uVar16 = uVar16 + 0x58;
      } while ((int)uVar17 < (int)param_1[0xd]);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1425eac70 FUN_1425eac70 body=154 status=ok
// SIG undefined FUN_1425eac70(void)

undefined4 FUN_1425eac70(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  FString::FString(local_18,param_2);
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,&local_18);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar1;
}



// FUNCTION 1425ead10 FUN_1425ead10 body=411 status=ok
// SIG undefined FUN_1425ead10(void)

ulonglong FUN_1425ead10(longlong *param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  uVar10 = 0;
  if (*(char *)((longlong)param_1 + 0x59) != '\0') {
    return 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  uVar7 = uVar10;
  uVar11 = uVar10;
  uVar12 = uVar10;
  if (0 < (int)param_2[1]) {
    do {
      local_48 = 0;
      local_40 = 0;
      local_38 = (void *)0x0;
      local_30 = *(int *)(uVar12 + 8 + *param_2);
      lVar5 = (longlong)local_30;
      _Src = *(void **)(uVar12 + *param_2);
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
      }
      cVar3 = FUN_1424306e0(&local_38,&local_48);
      if ((cVar3 != '\0') &&
         (uVar6 = uVar10, uVar8 = uVar10, iVar9 = (int)local_40, 0 < (int)local_40)) {
        do {
          if (*(longlong *)(uVar8 + local_48) != 0) {
            lVar5 = param_1[5];
            if (lVar5 != 0) {
              lVar1 = *(longlong *)(*(longlong *)(uVar8 + local_48) + 0x10);
              if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
                  != lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_1425eae4c;
            }
            (**(code **)(*param_1 + 0x280))(param_1);
            uVar7 = (ulonglong)((int)uVar7 + 1);
            iVar9 = (int)local_40;
          }
LAB_1425eae4c:
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
          uVar8 = uVar8 + 8;
        } while ((int)uVar4 < iVar9);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      uVar4 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar4;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar4 < (int)param_2[1]);
  }
  return uVar7;
}



// FUNCTION 1425eaeb0 LoadBlueprintAssetDataFromPath body=155 status=ok
// SIG undefined LoadBlueprintAssetDataFromPath(void)

undefined4 UObjectLibrary::LoadBlueprintAssetDataFromPath(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  FString::FString(local_18,param_2);
  uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,&local_18,1);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar1;
}



// FUNCTION 1425eaf50 FUN_1425eaf50 body=1141 status=ok
// SIG undefined FUN_1425eaf50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1425eaf50(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined1 local_208 [8];
  undefined2 *local_200;
  int local_1f8;
  longlong local_1f0 [3];
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  undefined1 local_1a0 [8];
  undefined1 *local_198;
  int local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong uVar14;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  puVar6 = (undefined8 *)FName::FName(local_208,L"AssetRegistry",1);
  uVar1 = *puVar6;
  uVar7 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar7,uVar1);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x48))(plVar8);
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar14 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0;
    local_128 = 0;
    local_120 = 0;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_118 = 0xffffffff;
    local_c8 = 0xffffffff;
    lVar9 = UBlueprint::GetPrivateStaticClass();
    uVar16 = local_150;
    lVar15 = (longlong)(int)local_150;
    uVar1 = *(undefined8 *)(lVar9 + 0x18);
    iVar4 = (int)local_150 + 1;
    local_150 = CONCAT44(local_150._4_4_,iVar4);
    if (local_150._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_158,uVar16 & 0xffffffff);
    }
    *(undefined8 *)(local_158 + lVar15 * 8) = uVar1;
    uVar16 = uVar14;
    if (0 < (int)param_2[1]) {
      do {
        if (*(int *)(uVar16 + 8 + *param_2) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(uVar16 + *param_2);
        }
        puVar6 = (undefined8 *)FName::FName(local_208,puVar11,1);
        uVar2 = local_170;
        lVar9 = (longlong)(int)local_170;
        iVar4 = (int)local_170 + 1;
        local_170 = CONCAT44(local_170._4_4_,iVar4);
        if (local_170._4_4_ < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_178,uVar2 & 0xffffffff);
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        *(undefined8 *)(local_178 + lVar9 * 8) = *puVar6;
        uVar16 = uVar16 + 0x10;
      } while ((int)uVar13 < (int)param_2[1]);
    }
    uVar5 = local_a8;
    local_a8 = CONCAT31(local_a8._1_3_,*(undefined1 *)(param_1 + 0x71));
    uVar3 = local_a8;
    local_a8._3_1_ = SUB41(uVar5,3);
    local_a8._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x70),(short)uVar3);
    FUN_1412bdbc0(param_1 + 0x60,0);
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_188,param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      local_1d8 = 0;
      local_1d0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0xffffffff;
      local_1a4 = 0;
      local_198 = (undefined1 *)0x0;
      local_190 = 0;
      local_228 = (undefined8 *)0x0;
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18);
      local_220 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_228,0);
      local_98 = 0;
      local_90 = 0;
      local_78 = 0;
      *local_228 = uVar1;
      local_70 = 0;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*plVar8 + 0x90))(plVar8,&local_228,&local_98,&local_1d8);
      local_50 = 0;
      if (local_58 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
      iVar4 = *(int *)(param_1 + 0x68) + -1;
      if (-1 < iVar4) {
        lVar9 = (longlong)iVar4 * 0x58;
        do {
          local_218 = 0;
          local_210 = 0;
          FUN_1421b9bc0(*(longlong *)(param_1 + 0x60) + lVar9,DAT_1469e68d8,&local_218);
          if ((int)local_210 < 2) {
LAB_1425eb321:
            FUN_1421c0980(param_1 + 0x60,iVar4,1,1);
          }
          else {
            FPackageName::ExportTextPathToObjectPath(local_1f0,&local_218);
            FUN_1417005b0(&local_200,local_1f0);
            puVar11 = &DAT_143f3eda8;
            if (local_1f8 != 0) {
              puVar11 = local_200;
            }
            plVar8 = (longlong *)FName::FName(local_208,puVar11,1);
            lVar15 = *plVar8;
            if ((int)local_1d0 != local_1a4) {
              puVar10 = local_1a0;
              if (local_198 != (undefined1 *)0x0) {
                puVar10 = local_198;
              }
              for (iVar12 = *(int *)(puVar10 +
                                    (longlong)
                                    (int)((int)((ulonglong)lVar15 >> 0x20) + (int)lVar15 &
                                         local_190 - 1U) * 4); iVar12 != -1;
                  iVar12 = *(int *)(local_1d8 + 8 + (longlong)iVar12 * 0x10)) {
                if (*(longlong *)(local_1d8 + (longlong)iVar12 * 0x10) == lVar15)
                goto LAB_1425eb2fe;
              }
            }
            iVar12 = -1;
LAB_1425eb2fe:
            if (local_200 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_1f0[0] != 0) {
              FMemory::Free();
            }
            if (iVar12 == -1) goto LAB_1425eb321;
          }
          if (local_218 != 0) {
            FMemory::Free();
          }
          lVar9 = lVar9 + -0x58;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      if (local_228 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      local_190 = 0;
      if (local_198 != (undefined1 *)0x0) {
        FMemory::Free(local_198);
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_1d8);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x68);
    FARFilter::~FARFilter(&local_188);
  }
  return uVar5;
}



// FUNCTION 1425eb3d0 LoadBlueprintsFromPath body=154 status=ok
// SIG undefined LoadBlueprintsFromPath(void)

undefined4 UObjectLibrary::LoadBlueprintsFromPath(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  FString::FString(local_18,param_2);
  uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,&local_18);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar1;
}



// FUNCTION 1425eb470 FUN_1425eb470 body=431 status=ok
// SIG undefined FUN_1425eb470(void)

ulonglong FUN_1425eb470(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  uVar6 = 0;
  if (((char)param_1[6] == '\0') || (*(char *)((longlong)param_1 + 0x59) != '\0')) {
    return 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  uVar10 = uVar6;
  uVar11 = uVar6;
  if (0 < (int)param_2[1]) {
    do {
      uVar7 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = (void *)0x0;
      local_30 = *(int *)(uVar10 + 8 + *param_2);
      lVar5 = (longlong)local_30;
      _Src = *(void **)(uVar10 + *param_2);
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
      }
      cVar3 = FUN_1424306e0(&local_38,&local_48);
      if ((cVar3 != '\0') && (uVar9 = uVar7, 0 < (int)local_40)) {
        do {
          lVar5 = *(longlong *)(uVar7 + local_48);
          if (lVar5 != 0) {
            lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              lVar4 = lVar5;
              if (param_1[5] == 0) {
LAB_1425eb5a0:
                (**(code **)(*param_1 + 0x280))(param_1,lVar5);
                uVar6 = (ulonglong)((int)uVar6 + 1);
              }
              else {
                do {
                  if (lVar4 == param_1[5]) goto LAB_1425eb5a0;
                  plVar1 = (longlong *)(lVar4 + 0x30);
                  lVar4 = *plVar1;
                } while (*plVar1 != 0);
              }
            }
          }
          uVar8 = (int)uVar9 + 1;
          uVar7 = uVar7 + 8;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)local_40);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      uVar8 = (int)uVar11 + 1;
      uVar10 = uVar10 + 0x10;
      uVar11 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)param_2[1]);
  }
  return uVar6;
}



// FUNCTION 1425eb620 LogDebugInfo body=1352 status=ok
// SIG undefined LogDebugInfo(void)

void UPackageMapClient::LogDebugInfo(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  undefined2 *puVar16;
  uint *puVar17;
  bool bVar18;
  wchar_t *pwVar19;
  int iVar20;
  wchar_t *local_f8;
  undefined8 local_f0;
  int local_e8;
  uint uStack_e4;
  uint *puStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  lVar7 = *(longlong *)(param_1 + 0x310);
  bVar18 = false;
  local_c8 = (longlong *)(lVar7 + 0x50);
  iVar10 = *(int *)(lVar7 + 0x78);
  puStack_e0 = (uint *)(lVar7 + 0x60);
  local_e8 = 0;
  uStack_e4 = 1;
  iStack_d4 = 0;
  iStack_d0 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)(lVar7 + 0x70);
    if (*(uint **)(lVar7 + 0x70) == (uint *)0x0) {
      puVar17 = puStack_e0;
    }
    uVar11 = *puVar17;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_e8;
      iStack_d0 = iStack_d0 + 0x20;
      iVar15 = local_e8 + 1;
      bVar3 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_e8;
      local_e8 = iVar15;
      if (bVar3) goto LAB_1425eb6fe;
      uVar11 = puVar17[lVar12 + 1];
    }
    uStack_e4 = -uVar11 & uVar11;
    iVar15 = 0x1f;
    if (uStack_e4 != 0) {
      for (; uStack_e4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_e4 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    iStack_d4 = (iStack_d0 - iVar15) + 0x1f;
    if (iVar10 < iStack_d4) {
LAB_1425eb6fe:
      iStack_d4 = iVar10;
    }
  }
  local_d8 = 0xffffffff;
  uStack_b0 = CONCAT44(iStack_d4,0xffffffff);
  auStack_50._8_4_ = iStack_d0;
  auStack_50._0_8_ = uStack_b0;
  auStack_50._12_4_ = uStack_cc;
  uStack_c0 = CONCAT44(uStack_e4,local_e8);
  local_90 = 0;
  local_40._0_4_ = SUB84(local_c8,0);
  local_40._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
  local_a8._8_4_ = (undefined4)local_40;
  local_a8._0_8_ = auStack_50._8_8_;
  local_a8._12_4_ = local_40._4_4_;
  iVar10 = iStack_d4;
  local_b8 = puStack_e0;
  local_98 = local_c8;
  local_68 = local_c8;
  uStack_60 = uStack_c0;
  puStack_58 = puStack_e0;
  local_40 = local_c8;
  if (*(int *)(lVar7 + 0x78) <= iStack_d4) {
    return;
  }
LAB_1425eb780:
  plVar4 = local_c8;
  iVar20 = 0;
  local_f8 = (wchar_t *)0x0;
  local_f0 = 7;
  iVar15 = *(int *)((longlong)iVar10 * 0x14 + 8 + *local_c8);
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  pwVar13 = local_f8;
  FGenericPlatformString::Memcpy(local_f8,L"Unused",0xe);
  plVar2 = *(longlong **)(param_1 + 0x2e8);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar6 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar6 = plVar2 + 7;
    }
    iVar1 = *(int *)((longlong)plVar6 + ((longlong)(int)plVar2[9] - 1U & (longlong)iVar15) * 4);
    if (iVar1 != -1) {
      lVar7 = *plVar2;
      iVar5 = iVar1;
      do {
        if (*(int *)(lVar7 + (longlong)iVar5 * 0x10) == iVar15) {
          if (iVar5 != -1) {
            uVar11 = local_f0._4_4_;
            goto joined_r0x0001425eb847;
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  goto LAB_1425eb8c9;
joined_r0x0001425eb847:
  if (iVar1 == -1) goto LAB_1425eb86d;
  lVar12 = (longlong)iVar1;
  if (*(int *)(lVar7 + lVar12 * 0x10) == iVar15) {
    if ((iVar1 != -1) && (lVar7 = lVar12 * 0x10 + lVar7, lVar7 != 0)) {
      iVar1 = *(int *)(lVar7 + 4);
      if (iVar1 == -2) {
        if (pwVar13 != L"UnAckd") {
          local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
          if (uVar11 != 7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,7);
            iVar20 = (int)local_f0;
            pwVar13 = local_f8;
            uVar11 = local_f0._4_4_;
          }
          local_f0 = CONCAT44(local_f0._4_4_,iVar20 + 7);
          if ((int)uVar11 < iVar20 + 7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
            pwVar13 = local_f8;
          }
          builtin_wcsncpy(pwVar13,L"UnAckd",7);
        }
        goto LAB_1425eb8c9;
      }
      if (iVar1 == -1) {
        if (pwVar13 != L"Ackd") {
          local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
          if (uVar11 != 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,5);
            iVar20 = (int)local_f0;
            pwVar13 = local_f8;
            uVar11 = local_f0._4_4_;
          }
          local_f0 = CONCAT44(local_f0._4_4_,iVar20 + 5);
          if ((int)uVar11 < iVar20 + 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
            pwVar13 = local_f8;
          }
          builtin_wcsncpy(pwVar13,L"Ackd",5);
        }
        goto LAB_1425eb8c9;
      }
    }
    goto LAB_1425eb86d;
  }
  iVar1 = *(int *)(lVar7 + 8 + lVar12 * 0x10);
  goto joined_r0x0001425eb847;
LAB_1425eb86d:
  if (pwVar13 != L"Pending") {
    local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
    if (uVar11 != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,8);
      iVar20 = (int)local_f0;
      pwVar13 = local_f8;
      uVar11 = local_f0._4_4_;
    }
    local_f0 = CONCAT44(local_f0._4_4_,iVar20 + 8);
    if ((int)uVar11 < iVar20 + 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
      pwVar13 = local_f8;
    }
    builtin_wcsncpy(pwVar13,L"Pending",8);
  }
LAB_1425eb8c9:
  lVar7 = FWeakObjectPtr::Get(*plVar4 + (longlong)iVar10 * 0x14);
  if (lVar7 == 0) {
    pwVar19 = L"NULL";
  }
  else {
    bVar18 = true;
    puVar8 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar7,&local_e8,0);
    if (*(int *)(puVar8 + 1) == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)*puVar8;
    }
  }
  if ((iVar15 == 0) || (((longlong)iVar15 & 1U) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pwVar14 = L"";
  if ((int)local_f0 != 0) {
    pwVar14 = pwVar13;
  }
  FString::PrintfImpl(&local_88,&DAT_143f3edc0,iVar15);
  puVar16 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar16 = local_88;
  }
  pwVar9 = L"Static";
  if (bVar3) {
    pwVar9 = L"Dynamic";
  }
  FString::PrintfImpl(&local_78,L"%s [%s] [%s] - %s",puVar16,pwVar14,pwVar9,pwVar19);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((bVar18) && (bVar18 = false, CONCAT44(uStack_e4,local_e8) != 0)) {
    FMemory::Free();
  }
  puVar16 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar16 = local_78;
  }
  FOutputDevice::LogfImpl(param_2,&DAT_14511dce4,puVar16);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (pwVar13 != (wchar_t *)0x0) {
    FMemory::Free(pwVar13);
  }
  uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
  iVar10 = uStack_b0._4_4_;
  if ((int)local_b8[6] <= uStack_b0._4_4_) {
    if ((char)local_90 == '\0') {
      return;
    }
    if (local_90._1_1_ == '\0') {
      return;
    }
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    return;
  }
  goto LAB_1425eb780;
}



// FUNCTION 1425ebb70 FUN_1425ebb70 body=1210 status=ok
// SIG undefined FUN_1425ebb70(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1425ebb70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ushort **ppuVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ushort *puVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  int iVar14;
  byte local_res8 [8];
  ulonglong local_res10;
  ulonglong local_res18 [2];
  ushort *local_108;
  ushort *local_100;
  undefined **local_f8;
  longlong *local_f0;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_48 [2];
  
  lVar10 = 0;
  local_108 = (ushort *)0x0;
  local_100 = (ushort *)0x0;
  local_100._0_4_ = 0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (cVar2 != '\0') {
      ppuVar6 = (ushort **)
                (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                          (*(longlong **)(param_1 + 8),local_48);
      if (&local_108 != ppuVar6) {
        if (local_108 != (ushort *)0x0) {
          FMemory::Free();
        }
        local_108 = *ppuVar6;
        *ppuVar6 = (ushort *)0x0;
        local_100 = ppuVar6[1];
        ppuVar6[1] = (ushort *)0x0;
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (((uint)local_100 == 0) || (iVar14 = (uint)local_100 - 1, iVar14 < 1)) {
    local_res8[0] = 3;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x18),0);
    }
    local_res10 = 0;
    FArchive::FArchive(&local_f8);
    local_68 = 0;
    local_f8 = &PTR_FUN_143f4a100;
    local_58 = 0;
    local_60 = (longlong *)(param_1 + 0x18);
    FArchive::SetIsSaving(&local_f8,1);
    FArchive::SetIsPersistent(&local_f8,0);
    if ((byte *)local_f0[1] < (byte *)*local_f0 + 1) {
      (*(code *)local_f8[10])(&local_f8,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*local_f0;
      *local_f0 = *local_f0 + 1;
    }
  }
  else {
    uVar13 = (longlong)iVar14 + 1U >> 1;
    FString::IsNumeric(&local_108);
    local_res8[0] = 0;
    if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar2 == '\0')) {
      local_res10 = 0;
      puVar7 = &local_res10;
    }
    else {
      puVar7 = (ulonglong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 8))
                         (*(longlong **)(param_1 + 8),local_res18 + 1);
    }
    local_res18[0] = *puVar7;
    plVar8 = (longlong *)UOnlineEngineInterface::Get();
    cVar2 = (**(code **)(*plVar8 + 0x2a8))(plVar8,local_res18[0]);
    if (cVar2 == '\0') {
      if (local_res18[0] != 0) {
        cVar2 = '\x1f';
      }
      local_res10 = 0;
    }
    plVar8 = (longlong *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = 0;
    bVar3 = local_res8[0] | cVar2 << 3;
    local_60 = plVar8;
    if ((local_res8[0] & 1) == 0) {
      local_res8[0] = bVar3;
      if (*(int *)(param_1 + 0x24) != iVar14) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar8,iVar14);
      }
      local_res10 = 0;
      FArchive::FArchive(&local_f8);
      local_68 = 0;
      local_f8 = &PTR_FUN_143f4a100;
      local_58 = 0;
      FArchive::SetIsSaving(&local_f8,1);
      FArchive::SetIsPersistent(&local_f8,0);
      if ((byte *)local_f0[1] < (byte *)*local_f0 + 1) {
        (*(code *)local_f8[10])(&local_f8,local_res8,1);
      }
      else {
        local_res8[0] = *(byte *)*local_f0;
        *local_f0 = *local_f0 + 1;
      }
      if (cVar2 == '\x1f') {
        (*(code *)local_f8[8])(&local_f8,local_res18);
      }
      FUN_14158ce90(&local_f8,&local_108);
    }
    else {
      local_res10 = CONCAT71(local_res10._1_7_,(char)uVar13);
      local_res8[0] = bVar3;
      if (*(int *)(param_1 + 0x24) != ((uint)uVar13 & 0xff) + 2) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar8);
      }
      local_res18[1] = 0;
      FArchive::FArchive(&local_f8);
      local_68 = 0;
      local_f8 = &PTR_FUN_143f4a100;
      local_58 = 0;
      FArchive::SetIsSaving(&local_f8,1);
      FArchive::SetIsPersistent(&local_f8,0);
      if ((byte *)local_f0[1] < (byte *)*local_f0 + 1) {
        (*(code *)local_f8[10])(&local_f8,local_res8,1);
      }
      else {
        local_res8[0] = *(byte *)*local_f0;
        *local_f0 = *local_f0 + 1;
      }
      if (cVar2 == '\x1f') {
        (*(code *)local_f8[8])(&local_f8,local_res18);
      }
      if ((undefined1 *)local_f0[1] < (undefined1 *)*local_f0 + 1) {
        (*(code *)local_f8[10])(&local_f8,&local_res10,1);
      }
      else {
        local_res10 = CONCAT71(local_res10._1_7_,*(undefined1 *)*local_f0);
        *local_f0 = *local_f0 + 1;
      }
      lVar11 = (longlong)(int)local_68;
      iVar14 = (uint)(byte)local_res10 + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar14;
      if (*(int *)(param_1 + 0x24) < iVar14) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar8);
      }
      lVar1 = *plVar8;
      uVar5 = (uint)local_100 - 1;
      if ((uint)local_100 == 0) {
        uVar5 = 0;
      }
      uVar5 = uVar5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      puVar9 = &DAT_143f3eda8;
      if ((uint)local_100 != 0) {
        puVar9 = local_108;
      }
      if (uVar5 == 1) {
        uVar4 = *puVar9;
        cVar2 = (char)uVar4;
        if ((ushort)(uVar4 - 0x30) < 10) {
          cVar2 = cVar2 + -0x30;
        }
        else if ((ushort)(uVar4 - 0x41) < 6) {
          cVar2 = cVar2 + -0x37;
        }
        else {
          cVar2 = cVar2 + -0x57;
        }
        *(char *)(lVar11 + lVar1) = cVar2;
        puVar9 = puVar9 + 1;
        lVar10 = 1;
      }
      uVar4 = *puVar9;
      if (uVar4 != 0) {
        pcVar12 = (char *)(lVar11 + lVar1) + lVar10;
        do {
          if (9 < (ushort)(uVar4 - 0x30)) {
            if ((ushort)(uVar4 - 0x41) < 6) {
              uVar4 = (ushort)(byte)((char)uVar4 - 0x37);
            }
            else {
              uVar4 = (ushort)(byte)((char)uVar4 + 0xa9);
            }
          }
          cVar2 = (char)uVar4 * '\x10';
          *pcVar12 = cVar2;
          uVar4 = puVar9[1];
          if ((ushort)(uVar4 - 0x30) < 10) {
            cVar2 = cVar2 + -0x30 + (char)uVar4;
          }
          else {
            cVar2 = cVar2 + (char)uVar4;
            if ((ushort)(uVar4 - 0x41) < 6) {
              cVar2 = cVar2 + -0x37;
            }
            else {
              cVar2 = cVar2 + -0x57;
            }
          }
          puVar9 = puVar9 + 2;
          *pcVar12 = cVar2;
          pcVar12 = pcVar12 + 1;
          uVar4 = *puVar9;
        } while (uVar4 != 0);
      }
    }
  }
  FArchive::~FArchive(&local_f8);
  if (local_108 != (ushort *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425ec030 MarkActive body=359 status=ok
// SIG undefined MarkActive(void)

ulonglong FNetworkObjectList::MarkActive
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_38 [2];
  undefined8 *local_30;
  undefined8 **local_28 [2];
  
  plVar1 = (longlong *)FUN_1425e3cc0(param_1,param_2,param_4,0);
  uVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
LAB_1425ec181:
    return uVar3 & 0xffffffffffffff00;
  }
  lVar5 = *plVar1;
  piVar2 = (int *)TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                  ::FindId(param_1 + 0xa0,local_38,param_2);
  if (*piVar2 != -1) {
    FUN_1425f0460(param_1 + 0xa0,param_2);
    FUN_1425d6b00(param_1 + 0x50,local_38,plVar1,0);
  }
  FWeakObjectPtr::operator=(&local_30,param_3);
  uVar3 = TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Remove(lVar5 + 0x30,&local_30);
  if ((int)uVar3 < 1) goto LAB_1425ec181;
  FWeakObjectPtr::operator=(&local_30,param_3);
  FUN_1425d6f50(lVar5 + 0x80,local_38,&local_30,0);
  FWeakObjectPtr::operator=(&local_30,param_3);
  local_28[0] = (undefined8 **)local_30;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xf0,local_38,local_28);
  if (local_38[0] != -1) {
    lVar4 = *(longlong *)(param_1 + 0xf0);
    lVar5 = lVar4 + (longlong)local_38[0] * 0x14;
    if (lVar5 != 0) goto LAB_1425ec17a;
  }
  local_28[0] = &local_30;
  FUN_1425a9d40(param_1 + 0xf0,local_38,local_28,0);
  lVar4 = *(longlong *)(param_1 + 0xf0);
  lVar5 = lVar4 + (longlong)local_38[0] * 0x14;
LAB_1425ec17a:
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 1425ec1a0 FUN_1425ec1a0 body=790 status=ok
// SIG undefined FUN_1425ec1a0(void)

void FUN_1425ec1a0(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  )

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  int local_a8 [2];
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 local_90;
  int iStack_88;
  uint uStack_84;
  undefined8 local_80;
  uint uStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  plVar5 = (longlong *)FUN_1425e3cc0(param_1,param_2,param_5,0);
  if (plVar5 != (longlong *)0x0) {
    lVar7 = *plVar5;
    local_60 = lVar7;
    local_58 = plVar5;
    FWeakObjectPtr::operator=(&local_98,param_3);
    plVar1 = (longlong *)(lVar7 + 0x30);
    local_a0 = local_98;
    piVar6 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    ::FindId(plVar1,local_a8,&local_a0);
    if (*piVar6 == -1) {
      FWeakObjectPtr::operator=(&local_a0,param_3);
      FUN_1425d6f50(plVar1,local_a8,&local_a0,0);
      FWeakObjectPtr::operator=(&local_98,param_3);
      local_a0 = local_98;
      TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xf0,local_a8,&local_a0);
      if ((local_a8[0] == -1) ||
         (lVar9 = *(longlong *)(param_1 + 0xf0) + (longlong)local_a8[0] * 0x14, lVar9 == 0)) {
        local_a0 = &local_98;
        FUN_1425a9d40(param_1 + 0xf0,local_a8,&local_a0,0);
        lVar9 = *(longlong *)(param_1 + 0xf0) + (longlong)local_a8[0] * 0x14;
      }
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    }
    iVar4 = *(int *)(lVar7 + 0x58);
    puStack_40 = (uint *)(lVar7 + 0x40);
    local_90._0_4_ = 0;
    local_90._4_4_ = 1;
    local_80._4_4_ = 0;
    uStack_78 = 0;
    if (iVar4 != 0) {
      puVar10 = *(uint **)(lVar7 + 0x50);
      if (*(uint **)(lVar7 + 0x50) == (uint *)0x0) {
        puVar10 = puStack_40;
      }
      uVar2 = *puVar10;
      uStack_78 = 0;
      local_90._0_4_ = 0;
      while (uVar2 == 0) {
        lVar9 = (longlong)(int)local_90;
        uStack_78 = uStack_78 + 0x20;
        iVar8 = (int)local_90 + 1;
        bVar3 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_90;
        local_90._0_4_ = iVar8;
        if (bVar3) goto LAB_1425ec36f;
        uVar2 = puVar10[lVar9 + 1];
      }
      local_90._4_4_ = -uVar2 & uVar2;
      iVar8 = 0x1f;
      if (local_90._4_4_ != 0) {
        for (; local_90._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (local_90._4_4_ == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      local_80._4_4_ = (uStack_78 - iVar8) + 0x1f;
      if (iVar4 < local_80._4_4_) {
LAB_1425ec36f:
        local_80._4_4_ = iVar4;
      }
    }
    uStack_38 = 0xffffffff;
    iStack_34 = local_80._4_4_;
    iStack_30 = uStack_78;
    uStack_2c = iStack_74;
    iStack_48 = (int)local_90;
    uStack_44 = local_90._4_4_;
    iStack_88 = (int)local_90;
    uStack_84 = local_90._4_4_;
    local_70 = uStack_78;
    uStack_6c = iStack_74;
    uStack_78 = 0xffffffff;
    iStack_74 = local_80._4_4_;
    bVar3 = local_80._4_4_ < iVar4;
    local_90 = plVar1;
    local_68 = plVar1;
    local_50 = plVar1;
    local_80 = puStack_40;
    if (bVar3) {
      do {
        plVar1 = local_68;
        iVar4 = iStack_74;
        plVar5 = local_90;
        lVar9 = (longlong)iStack_74;
        lVar7 = FWeakObjectPtr::Get(*local_90 + lVar9 * 0x10);
        if (lVar7 == 0) {
LAB_1425ec3ef:
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Remove(plVar1,iVar4);
        }
        else {
          lVar7 = FWeakObjectPtr::Get(*plVar5 + lVar9 * 0x10);
          if (*(int *)(lVar7 + 300) == 1) goto LAB_1425ec3ef;
        }
        uStack_78 = uStack_78 & ~uStack_84;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
        lVar7 = local_60;
        plVar5 = local_58;
      } while (iStack_74 < (int)local_80[6]);
    }
    iVar4 = *(int *)(lVar7 + 0x38) - *(int *)(lVar7 + 100);
    if (iVar4 != param_4) {
      if ((*(byte *)(param_2 + 0x90) & 4) == 0) {
        return;
      }
      if (iVar4 != 1) {
        return;
      }
      lVar7 = param_2;
      while (lVar7 != *(longlong *)(param_3 + 0x98)) {
        lVar7 = *(longlong *)(lVar7 + 0x118);
        if (lVar7 == 0) {
          return;
        }
      }
    }
    FUN_1425d6b00(param_1 + 0xa0,local_a8,plVar5,0);
    FUN_1425f0460(param_1 + 0x50,param_2);
  }
  return;
}



// FUNCTION 1425ec4c0 FUN_1425ec4c0 body=276 status=ok
// SIG undefined FUN_1425ec4c0(void)

void FUN_1425ec4c0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  uVar2 = 0;
  FGenericPlatformString::Memcpy(local_38[2],&DAT_143f591f0,4);
  local_38[0] = 0;
  local_38[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"PARTICLE_FACTORY",0x22);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  iVar1 = FUN_1419ef5f0(param_1);
  if (iVar1 == 0) {
    uVar2 = 0x4b;
  }
  else if (iVar1 - 1U < 3) {
    uVar2 = 0x100;
  }
  FUN_141a172f0(param_3,L"MAX_SHADER_BONES",uVar2);
  FUN_141a172f0(param_3,L"GPUSKIN_USE_EXTRA_INFLUENCES",1);
  return;
}



// FUNCTION 1425ec5e0 FUN_1425ec5e0 body=329 status=ok
// SIG undefined FUN_1425ec5e0(void)

undefined8 FUN_1425ec5e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  int local_res10 [2];
  undefined1 local_res18 [16];
  int *local_18;
  undefined *local_10;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      return 0;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 0x150);
    local_res10[0] = param_2;
    if ((plVar1 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar1 + 0x368))(), cVar2 != '\0')) {
      plVar1 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar4 = (longlong *)plVar1[8];
        if ((longlong *)plVar1[8] == (longlong *)0x0) {
          plVar4 = plVar1 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 +
                        ((longlong)(int)plVar1[9] - 1U & (longlong)local_res10[0]) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int *)(*plVar1 + (longlong)iVar3 * 0x10) == local_res10[0]) {
              if (iVar3 != -1) goto LAB_1425ec6af;
              break;
            }
            iVar3 = *(int *)(*plVar1 + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
        }
      }
      local_18 = local_res10;
      local_10 = &DAT_14511ddf4;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(plVar1,local_res18,&local_18,0);
LAB_1425ec6af:
      plVar1 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar4 = (longlong *)plVar1[8];
        if ((longlong *)plVar1[8] == (longlong *)0x0) {
          plVar4 = plVar1 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 +
                        ((longlong)(int)plVar1[9] - 1U & (longlong)local_res10[0]) * 4);
        if (iVar3 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar3 * 0x10 + *plVar1);
            if (*piVar5 == local_res10[0]) {
              if (iVar3 != -1) goto LAB_1425ec712;
              break;
            }
            iVar3 = piVar5[2];
          } while (iVar3 != -1);
        }
      }
      piVar5 = (int *)0x0;
LAB_1425ec712:
      if (piVar5[1] != -1) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1425ec730 FUN_1425ec730 body=1335 status=ok
// SIG undefined FUN_1425ec730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1425ec730(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  byte bVar15;
  short sVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  byte local_a8;
  byte local_a7 [7];
  longlong local_a0;
  ulonglong local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  longlong local_80 [2];
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_a8;
  *param_4 = 0;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    iVar14 = *(int *)(param_1 + 0x20);
    if (iVar14 == 0) {
      uStack_d0 = 0x1425ec78a;
      FUN_1425ebb70();
      iVar14 = *(int *)(param_1 + 0x20);
    }
    uStack_d0 = 0x1425ec79e;
    (**(code **)(*param_2 + 0x50))(param_2,*(undefined8 *)(param_1 + 0x18),(longlong)iVar14);
    *param_4 = 0 < *(int *)(param_1 + 0x20);
    puVar17 = auStack_c8;
    goto LAB_1425ecc33;
  }
  puVar17 = auStack_c8;
  if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_1425ecc33;
  plVar13 = (longlong *)(param_1 + 8);
  local_70 = (longlong *)0x0;
  local_88 = plVar13;
  if (plVar13 != local_80 + 1) {
    *plVar13 = 0;
    local_80[1] = 0;
    uStack_d0 = 0x1425ec7e2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_70);
    plVar9 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        uStack_d0 = 0x1425ec808;
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          uStack_d0 = 0x1425ec81f;
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  plVar9 = (longlong *)param_2[1];
  local_a7[0] = 0;
  if ((byte *)plVar9[1] < (byte *)*plVar9 + 1) {
    uStack_d0 = 0x1425ec852;
    (**(code **)(*param_2 + 0x50))(param_2,local_a7,1);
  }
  else {
    local_a7[0] = *(byte *)*plVar9;
    *plVar9 = *plVar9 + 1;
  }
  puVar17 = auStack_c8;
  if ((char)param_2[5] < '\0') goto LAB_1425ecc33;
  if ((local_a7[0] & 1) == 0) {
    bVar15 = local_a7[0] >> 3;
    if (local_a7[0] >> 3 == 0) {
      uStack_d0 = 0x1425ecb4e;
      plVar13 = (longlong *)UOnlineEngineInterface::Get();
      uStack_d0 = 0x1425ecb56;
      plVar9 = (longlong *)UOnlineEngineInterface::Get();
      lVar5 = *plVar9;
      uStack_d0 = 0x1425ecb6d;
      puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x2a0))(plVar13,local_48);
      uStack_d0 = 0x1425ecb79;
      bVar15 = (**(code **)(lVar5 + 0x2a8))(plVar9,*puVar11);
    }
    local_a0 = 0;
    if (bVar15 == 0x1f) {
      uStack_d0 = 0x1425ecb99;
      (**(code **)(*param_2 + 0x40))(param_2,&local_a0);
      puVar17 = auStack_c8;
      if ((char)param_2[5] < '\0') goto LAB_1425ecc33;
      local_88 = (longlong *)0x0;
      puVar17 = auStack_c8;
      if (local_a0 == 0) goto LAB_1425ecc33;
    }
    else {
      uStack_d0 = 0x1425ecbbd;
      plVar13 = (longlong *)UOnlineEngineInterface::Get();
      uStack_d0 = 0x1425ecbd2;
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x2b0))(plVar13,local_40,bVar15);
      local_a0 = *plVar13;
    }
    puVar17 = auStack_c8;
    if (bVar15 != 0) {
      local_68 = 0;
      local_60 = 0;
      uStack_d0 = 0x1425ecbf5;
      FUN_14158ce90(param_2,&local_68);
      if ((-1 < (char)param_2[5]) && (local_88 = (longlong *)0x0, local_a0 != 0)) {
        uStack_d0 = 0x1425ecc1a;
        FUN_1425f6000(param_1,local_a0,&local_68);
        *param_4 = 1 < (int)local_60;
      }
      puVar17 = auStack_c8;
      if (local_68 != 0) {
        uStack_d0 = 0x1425ecc33;
        FMemory::Free();
        puVar17 = auStack_c8;
      }
    }
    goto LAB_1425ecc33;
  }
  if ((local_a7[0] & 2) != 0) {
    *param_4 = 1;
    puVar17 = auStack_c8;
    goto LAB_1425ecc33;
  }
  bVar15 = local_a7[0] >> 3;
  if (local_a7[0] >> 3 == 0) {
    uStack_d0 = 0x1425ec87e;
    plVar9 = (longlong *)UOnlineEngineInterface::Get();
    uStack_d0 = 0x1425ec886;
    plVar10 = (longlong *)UOnlineEngineInterface::Get();
    lVar5 = *plVar10;
    uStack_d0 = 0x1425ec89d;
    puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x2a0))(plVar9,local_58);
    uStack_d0 = 0x1425ec8a9;
    bVar15 = (**(code **)(lVar5 + 0x2a8))(plVar10,*puVar11);
  }
  local_80[0] = 0;
  if (bVar15 == 0x1f) {
    uStack_d0 = 0x1425ec8c6;
    (**(code **)(*param_2 + 0x40))(param_2,local_80);
    puVar17 = auStack_c8;
    if ((char)param_2[5] < '\0') goto LAB_1425ecc33;
    local_a0 = 0;
    puVar17 = auStack_c8;
    if (local_80[0] == 0) goto LAB_1425ecc33;
  }
  else {
    uStack_d0 = 0x1425ec8ed;
    plVar9 = (longlong *)UOnlineEngineInterface::Get();
    uStack_d0 = 0x1425ec902;
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b0))(plVar9,local_50,bVar15);
    local_80[0] = *plVar9;
  }
  puVar17 = auStack_c8;
  if (bVar15 == 0) goto LAB_1425ecc33;
  plVar9 = (longlong *)param_2[1];
  local_a8 = 0;
  if ((byte *)plVar9[1] < (byte *)*plVar9 + 1) {
    uStack_d0 = 0x1425ec944;
    (**(code **)(*param_2 + 0x50))(param_2,&local_a8,1);
  }
  else {
    local_a8 = *(byte *)*plVar9;
    *plVar9 = *plVar9 + 1;
  }
  puVar17 = auStack_c8;
  if ((char)param_2[5] < '\0') goto LAB_1425ecc33;
  puVar17 = auStack_c8;
  if (local_a8 != 0) {
    uVar12 = (ulonglong)(local_a8 + 0xf) + 0xf;
    if (uVar12 <= local_a8 + 0xf) {
      uVar12 = 0xffffffffffffff0;
    }
    uStack_d0 = 0x1425ec97f;
    lVar5 = -(uVar12 & 0xfffffffffffffff0);
    pbVar18 = (byte *)((longlong)&local_a0 + lVar5);
    pcVar2 = *(code **)(*param_2 + 0x50);
    *(undefined8 *)(auStack_c8 + lVar5 + -8) = 0x1425ec9a0;
    (*pcVar2)(param_2,pbVar18);
    bVar15 = local_a8;
    puVar17 = auStack_c8 + lVar5;
    if (-1 < (char)param_2[5]) {
      uVar20 = (uint)local_a8;
      local_98 = 0;
      local_8c = 0;
      local_90 = 0;
      uVar3 = (uint)local_a8;
      uVar4 = (uint)local_a8;
      if (uVar3 + uVar4 != 0) {
        *(undefined8 *)(auStack_c8 + lVar5 + -8) = 0x1425ec9d4;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,uVar3 + uVar4);
      }
      iVar14 = local_90;
      if (bVar15 != 0) {
        do {
          bVar15 = *pbVar18;
          sVar16 = 0x37;
          bVar7 = bVar15 >> 4;
          if (bVar7 < 10) {
            sVar16 = 0x30;
          }
          sVar16 = sVar16 + (ushort)bVar7;
          if (sVar16 != 0) {
            iVar19 = iVar14 + -1;
            if (iVar14 < 1) {
              iVar19 = 0;
            }
            local_90 = (iVar14 < 1) + 1 + iVar14;
            if (local_8c < local_90) {
              *(undefined8 *)(auStack_c8 + lVar5 + -8) = 0x1425eca37;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
            }
            *(short *)(local_98 + (longlong)iVar19 * 2) = sVar16;
            *(undefined2 *)(local_98 + 2 + (longlong)iVar19 * 2) = 0;
            iVar14 = local_90;
          }
          bVar15 = bVar15 & 0xf;
          sVar16 = 0x37;
          if (bVar15 < 10) {
            sVar16 = 0x30;
          }
          sVar16 = sVar16 + (ushort)bVar15;
          if (sVar16 != 0) {
            iVar19 = iVar14 + -1;
            if (iVar14 < 1) {
              iVar19 = 0;
            }
            local_90 = (iVar14 < 1) + 1 + iVar14;
            if (local_8c < local_90) {
              *(undefined8 *)(auStack_c8 + lVar5 + -8) = 0x1425eca96;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
            }
            *(short *)(local_98 + (longlong)iVar19 * 2) = sVar16;
            *(undefined2 *)(local_98 + 2 + (longlong)iVar19 * 2) = 0;
            iVar14 = local_90;
          }
          pbVar18 = pbVar18 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if ((iVar14 != 0) && (0 < iVar14 + -1)) {
        local_a0 = 0;
        if (local_80[0] != 0) {
          *(undefined8 *)(auStack_c8 + lVar5 + -8) = 0x1425ecae8;
          FString::ToLowerInline(&local_98);
          lVar6 = local_80[0];
          *(undefined8 *)(auStack_c8 + lVar5 + -8) = 0x1425ecaf8;
          FUN_1425f6000(param_1,lVar6,&local_98);
        }
      }
      puVar17 = auStack_c8 + lVar5;
      plVar13 = local_88;
      if (local_98 != 0) {
        *(undefined8 *)(auStack_c8 + lVar5 + -8) = 0x1425ecb06;
        FMemory::Free();
        puVar17 = auStack_c8 + lVar5;
        plVar13 = local_88;
      }
    }
  }
  if (local_a8 == 0) {
LAB_1425ecb2d:
    *param_4 = 1;
  }
  else {
    if ((longlong *)*plVar13 != (longlong *)0x0) {
      pcVar2 = *(code **)(*(longlong *)*plVar13 + 0x20);
      *(undefined8 *)(puVar17 + -8) = 0x1425ecb1e;
      cVar8 = (*pcVar2)();
      if (cVar8 != '\0') goto LAB_1425ecb2d;
    }
    *param_4 = 0;
  }
LAB_1425ecc33:
  *(undefined8 *)(puVar17 + -8) = 0x1425ecc41;
  return 1;
}



// FUNCTION 1425ecc70 FUN_1425ecc70 body=306 status=ok
// SIG undefined FUN_1425ecc70(void)

undefined8 FUN_1425ecc70(float *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res10 [4];
  int local_res20 [2];
  int local_48;
  int local_44 [3];
  undefined8 local_38;
  float local_30;
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_38 = *(undefined8 *)param_1;
    local_30 = param_1[2];
    uVar1 = FUN_1423249b0(&local_38);
    *param_4 = uVar1;
    return 1;
  }
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x60))(param_2,local_res10,0x18);
  local_res20[0] = 0;
  local_48 = 0;
  local_44[0] = 0;
  iVar3 = 1 << ((char)local_res10[0] + 1U & 0x1f);
  iVar2 = 1 << ((char)local_res10[0] + 2U & 0x1f);
  (**(code **)(*param_2 + 0x60))(param_2,local_res20,iVar2);
  (**(code **)(*param_2 + 0x60))(param_2,&local_48,iVar2);
  (**(code **)(*param_2 + 0x60))(param_2,local_44,iVar2);
  *param_1 = (float)(local_res20[0] - iVar3) * 0.1;
  param_1[1] = (float)(local_48 - iVar3) * 0.1;
  param_1[2] = (float)(local_44[0] - iVar3) * 0.1;
  *param_4 = 1;
  return 1;
}



// FUNCTION 1425ecdb0 NotifyBunchCommit body=594 status=ok
// SIG undefined NotifyBunchCommit(void)

void UPackageMapClient::NotifyBunchCommit(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined4 *local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined *local_38;
  
  iVar6 = 0;
  if (0 < *(int *)(param_3 + 0x108)) {
    local_50 = local_res20;
    lVar7 = 0;
    local_48 = local_res18;
    local_38 = local_res18;
    do {
      local_res18[0] = 1;
      local_res20[0] =
           (undefined4)((ulonglong)*(undefined8 *)(lVar7 + *(longlong *)(param_3 + 0x100)) >> 0x20);
      TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,bool_&&>_>
                (*(longlong *)(param_1 + 0x2e8) + 0x50,local_58,&local_50,0);
      local_res18[0] = 1;
      local_40 = *(longlong *)(param_3 + 0x100) + (longlong)iVar6 * 8;
      TSet<TTuple<unsigned___int64,bool>,TDefaultMapHashableKeyFuncs<unsigned___int64,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,bool_&&>_>
                (*(longlong *)(param_1 + 0x2e8) + 0xa0,local_54,&local_40);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(param_3 + 0x108));
  }
  if ((*(int *)(param_3 + 0xf8) != 0) && (iVar6 = 0, 0 < *(int *)(param_3 + 0xf8))) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        iVar1 = *(int *)(*(longlong *)(param_3 + 0xf0) + lVar7);
        plVar4 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar4 = plVar2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)plVar2[9] - 1U & (longlong)iVar1) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int *)(*plVar2 + (longlong)iVar3 * 0x10) == iVar1) {
              if (iVar3 != -1) goto LAB_1425ecf35;
              break;
            }
            iVar3 = *(int *)(*plVar2 + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
        }
      }
      local_38 = &DAT_14511ddf4;
      local_40 = *(longlong *)(param_3 + 0xf0) + (longlong)iVar6 * 4;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>(plVar2,local_res18,&local_40,0);
LAB_1425ecf35:
      plVar2 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        iVar1 = *(int *)(lVar7 + *(longlong *)(param_3 + 0xf0));
        plVar4 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar4 = plVar2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)plVar2[9] - 1U & (longlong)iVar1) * 4);
        if (iVar3 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar3 * 0x10 + *plVar2);
            if (*piVar5 == iVar1) {
              if (iVar3 != -1) goto LAB_1425ecfa0;
              break;
            }
            iVar3 = piVar5[2];
          } while (iVar3 != -1);
        }
      }
      piVar5 = (int *)0x0;
LAB_1425ecfa0:
      if (piVar5[1] == -2) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x130) + 0xa4) & 1) == 0) {
          piVar5[1] = param_2;
          TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                    (param_1 + 0x1e8,*(longlong *)(param_3 + 0xf0) + (longlong)iVar6 * 4);
        }
        else {
          piVar5[1] = -1;
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 4;
    } while (iVar6 < *(int *)(param_3 + 0xf8));
  }
  return;
}



// FUNCTION 1425ed010 FUN_1425ed010 body=434 status=ok
// SIG undefined FUN_1425ed010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425ed010(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_118 [32];
  LARGE_INTEGER local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [144];
  longlong local_58;
  ulonglong local_48;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (((*(int *)(*(longlong *)(param_1 + 8) + 0x10) == 0) && (*(longlong *)(param_1 + 0x28) != 0))
     && (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x90), plVar1 != (longlong *)0x0))
  {
    FUN_1416884c0(local_e8,0xc3,0);
    FBitWriter::WriteBit(local_e8,1);
    FBitWriter::WriteBit(local_e8,0);
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    FBitWriter::Serialize(local_e8,&local_28,0x18);
    local_f0 = 0x12;
    local_f8.QuadPart = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8.QuadPart,L"PostPacketHandler",0x24);
    if (local_f8.QuadPart != 0) {
      FMemory::Free(local_f8.QuadPart);
    }
    FBitWriter::WriteBit(local_e8,1);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x240) = 1;
    cVar2 = (**(code **)(*(longlong *)plVar1[0xb] + 0x390))();
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x2a0))
                (plVar1,local_58,(longlong)(local_48 + 7) >> 3,local_48 & 0xffffffff);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x240) = 0;
    QueryPerformanceCounter(&local_f8);
    *(double *)(param_1 + 0x70) = (double)local_f8.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_e8);
  }
  return;
}



// FUNCTION 1425ed1d0 FUN_1425ed1d0 body=57 status=ok
// SIG undefined FUN_1425ed1d0(void)

void FUN_1425ed1d0(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x8c);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x3a0))(param_1,0x38d1b717);
    uVar1 = *(uint *)(param_1 + 0x8c);
  }
  *(uint *)(param_1 + 0x8c) = uVar1 & 0xfffffffb;
  return;
}



// FUNCTION 1425ed240 FUN_1425ed240 body=145 status=ok
// SIG undefined FUN_1425ed240(void)

void FUN_1425ed240(undefined8 param_1,longlong *param_2)

{
  undefined1 local_c8 [144];
  longlong local_38;
  undefined8 local_28;
  
  FUN_1416884c0(local_c8,param_2[0x14] + 1,0);
  FBitWriter::WriteBit(local_c8,0);
  FBitWriter::SerializeBits(local_c8,param_2[0x12],param_2[0x14]);
  (**(code **)(*param_2 + 0x168))(param_2);
  (**(code **)(*param_2 + 0x58))(param_2,local_38,local_28);
  if (local_38 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_c8);
  return;
}



// FUNCTION 1425ed2e0 OverridePackageMapExportAckStatus body=28 status=ok
// SIG undefined OverridePackageMapExportAckStatus(void)

void UPackageMapClient::OverridePackageMapExportAckStatus(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x2e8) = param_2;
    return;
  }
  *(longlong *)(param_1 + 0x2e8) = param_1 + 0x1f8;
  return;
}



// FUNCTION 1425ed300 FUN_1425ed300 body=748 status=ok
// SIG undefined FUN_1425ed300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425ed300(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint uStack_e4;
  uint *puStack_e0;
  int local_d8;
  int iStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  uint uStack_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  uint local_68 [4];
  uint *local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
    uVar13 = 0;
    local_78 = 0;
    local_70 = 0;
    local_58 = (uint *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_48 = 0xffffffff;
    uVar6 = FUN_1429d7ab0();
    AActor::GetOverlappingActors(param_1,&local_78,uVar6);
    iVar3 = (int)local_50;
    puStack_e0 = local_68;
    local_e8 = 0;
    uStack_e4 = 1;
    iStack_d4 = 0;
    uStack_d0 = 0;
    if ((int)local_50 != 0) {
      puVar12 = local_68;
      if (local_58 != (uint *)0x0) {
        puVar12 = local_58;
      }
      uVar5 = *puVar12;
      uVar7 = uVar13;
      uVar11 = uVar13;
      while (uVar5 == 0) {
        iVar4 = (int)uVar7;
        uStack_d0 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_d0;
        local_e8 = iVar4 + 1;
        uVar7 = (ulonglong)local_e8;
        if ((int)((int)local_50 + -1 + ((int)local_50 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
          iStack_d4 = (int)local_50;
          goto LAB_1425ed427;
        }
        uVar5 = puVar12[(longlong)iVar4 + 1];
      }
      uStack_e4 = uVar5 - 1 & uVar5 ^ uVar5;
      iVar4 = 0x1f;
      if (uStack_e4 != 0) {
        for (; uStack_e4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_e4 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_d4 = (uStack_d0 - iVar4) + 0x1f;
      if ((int)local_50 < iStack_d4) {
        iStack_d4 = (int)local_50;
      }
    }
LAB_1425ed427:
    uStack_b0 = 0xffffffff;
    iStack_ac = iStack_d4;
    local_a8 = CONCAT44(uStack_cc,uStack_d0);
    local_a0 = &local_78;
    iStack_d4 = (int)local_50;
    uStack_98 = CONCAT44(uStack_e4,local_e8);
    local_d8 = -1 << ((byte)local_50 & 0x1f);
    uStack_c0 = local_e8;
    uStack_bc = uStack_e4;
    local_b8 = puStack_e0;
    puStack_90 = puStack_e0;
    uStack_80 = local_a8;
    local_c8 = local_a0;
    uStack_88 = uStack_b0;
    iStack_84 = iStack_ac;
    while( true ) {
      if ((iStack_ac == iVar3) && (local_b8 == local_68)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (local_c8 == &local_78)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      plVar1 = *(longlong **)(*local_c8 + (longlong)iStack_ac * 0x10);
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x91) & 0x40) != 0)) {
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
        uVar7 = uVar13;
        if (iVar4 < (int)DAT_1469e91c4) {
          uVar10 = iVar4 >> 0x1f & 0xffff;
          uVar5 = iVar4 + uVar10;
          uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
        }
        if ((*(uint *)(uVar7 + 8) >> 0x1d & 1) == 0) {
          lVar8 = FUN_1429d7ab0();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            plVar9 = (longlong *)(**(code **)(*plVar1 + 0x720))(plVar1);
            if (plVar9 == param_1) {
              (**(code **)(*param_1 + 0x758))(param_1,plVar1);
            }
          }
        }
      }
      uStack_b0 = uStack_b0 & ~uStack_bc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    }
    if ((int)local_70 == local_44) {
      uVar6 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar6,param_1 + 0x98);
      param_1[0x98] = 0;
    }
    local_30 = 0;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_78);
  }
  return;
}



// FUNCTION 1425ed5f0 ParseHeader body=288 status=ok
// SIG undefined ParseHeader(void)

ulonglong FOpusAudioInfo::ParseHeader
                    (longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  byte bVar1;
  ushort uVar2;
  ulonglong in_RAX;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 local_res18 [4];
  
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_2 != 0) {
    lVar4 = 0;
    while( true ) {
      in_RAX = 0;
      lVar5 = lVar4 + 1;
      if (*(char *)(param_2 + lVar4) != (&DAT_145121b30)[lVar4]) break;
      lVar4 = lVar5;
      if (lVar5 == 8) {
        *(undefined4 *)(param_1 + 0x14) = 8;
        IStreamedCompressedInfo::Read(param_1,param_1 + 0x1c,2);
        IStreamedCompressedInfo::Read(param_1,param_1 + 0x20,4);
        IStreamedCompressedInfo::Read(param_1,param_1 + 0x28,1);
        local_res18[0] = 0;
        IStreamedCompressedInfo::Read(param_1,local_res18,2);
        uVar3 = *(uint *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x18) = uVar3;
        if (param_4 != 0) {
          uVar2 = *(ushort *)(param_1 + 0x1c);
          uVar3 = (uint)uVar2;
          *(uint *)(param_4 + 8) = uVar3;
          bVar1 = *(byte *)(param_1 + 0x28);
          *(uint *)(param_4 + 4) = (uint)bVar1;
          *(uint *)(param_4 + 0xc) = (uint)bVar1 * *(int *)(param_1 + 0x20) * 2;
          *(float *)(param_4 + 0x10) = (float)*(uint *)(param_1 + 0x20) / (float)uVar2;
        }
        return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425ed710 FUN_1425ed710 body=180 status=ok
// SIG undefined FUN_1425ed710(void)

void FUN_1425ed710(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 local_res18 [4];
  undefined1 local_28 [8];
  undefined8 local_20;
  byte local_18 [8];
  longlong local_10;
  
  local_10 = param_1[0x14];
  local_18[0] = *(byte *)(param_1 + 5) >> 7;
  local_28[0] = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FBitWriterMark::PopWithoutClear(local_28,param_1);
  FBitWriter::WriteBit(param_1,param_2);
  plVar1 = (longlong *)param_1[1];
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  FBitWriterMark::PopWithoutClear(local_18,param_1);
  return;
}



// FUNCTION 1425ed7d0 FUN_1425ed7d0 body=56 status=ok
// SIG undefined FUN_1425ed7d0(void)

void FUN_1425ed7d0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(longlong *)(param_1 + 0x458) != 0) && ((*(byte *)(param_1 + 0x460) & 2) != 0)) {
    UActorComponent::SetTickGroup(*(longlong *)(param_1 + 0x458),5);
    return;
  }
  return;
}



// FUNCTION 1425ed810 FUN_1425ed810 body=110 status=ok
// SIG undefined FUN_1425ed810(void)

void FUN_1425ed810(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x70);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Rotation",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(longlong *)(param_1 + 0xa0) = lVar3;
    }
  }
  return;
}



// FUNCTION 1425ed880 FUN_1425ed880 body=239 status=ok
// SIG undefined FUN_1425ed880(void)

void FUN_1425ed880(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 local_res8 [32];
  
  FUN_142648ae0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 200);
    if (cVar3 == '\0') {
      puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionBoxSize",1);
      lVar4 = NewObject<UDistributionVectorConstant>(param_1,*puVar2,0,0,0,0);
      *(undefined8 *)(lVar4 + 0x38) = 0x42c8000042c80000;
      *(undefined4 *)(lVar4 + 0x40) = 0x42c80000;
      uVar1 = *(uint *)(param_1 + 0x38);
      *(longlong *)(param_1 + 0x110) = lVar4;
      *(undefined1 *)(param_1 + 0x118) = 0;
      bVar5 = (uVar1 & 1) != 0;
      if ((bool)bVar5) {
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      if ((uVar1 & 2) != 0) {
        bVar5 = bVar5 | 2;
        *(byte *)(param_1 + 0x118) = bVar5;
      }
      if ((uVar1 & 4) != 0) {
        bVar5 = bVar5 | 4;
        *(byte *)(param_1 + 0x118) = bVar5;
      }
      if ((uVar1 & 8) != 0) {
        bVar5 = bVar5 | 8;
        *(byte *)(param_1 + 0x118) = bVar5;
      }
      if ((uVar1 & 0x10) != 0) {
        bVar5 = bVar5 | 0x10;
        *(byte *)(param_1 + 0x118) = bVar5;
      }
      if ((uVar1 & 0x20) != 0) {
        *(byte *)(param_1 + 0x118) = bVar5 | 0x20;
      }
    }
  }
  return;
}



// FUNCTION 1425ed970 FUN_1425ed970 body=198 status=ok
// SIG undefined FUN_1425ed970(void)

void FUN_1425ed970(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x58);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartTime",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(longlong *)(param_1 + 0x88) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x90);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRate",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0xc0) = lVar3;
    }
  }
  return;
}



// FUNCTION 1425eda40 FUN_1425eda40 body=42 status=ok
// SIG undefined FUN_1425eda40(void)

void FUN_1425eda40(longlong param_1)

{
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_1425e8dc0(param_1);
    return;
  }
  return;
}



// FUNCTION 1425eda70 FUN_1425eda70 body=49 status=ok
// SIG undefined FUN_1425eda70(void)

void FUN_1425eda70(longlong *param_1)

{
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 1) & 0x410) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001425eda94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1425edab0 FUN_1425edab0 body=213 status=ok
// SIG undefined FUN_1425edab0(void)

void FUN_1425edab0(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  
  FUN_142238430();
  if (*(longlong *)(param_1 + 0x458) != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AEmitter::OnParticleSystemFinished",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UParticleSystemComponent_*>::
    __Internal_AddUniqueDynamic<AEmitter>
              (*(longlong *)(param_1 + 0x458) + 0x8a8,param_1,&LAB_140a7e1dc,local_res8);
    lVar1 = *(longlong *)(param_1 + 0x458);
    *(uint *)(param_1 + 0x460) =
         *(uint *)(param_1 + 0x460) ^
         ((uint)*(byte *)(lVar1 + 0xba) * 2 ^ *(uint *)(param_1 + 0x460)) & 4;
    if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x460) & 2) != 0)) {
      UActorComponent::SetTickGroup(lVar1,5);
      return;
    }
  }
  return;
}



// FUNCTION 1425edb90 FUN_1425edb90 body=44 status=ok
// SIG undefined FUN_1425edb90(void)

void FUN_1425edb90(longlong param_1)

{
  FUN_1426e8540();
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) & 0xfffffffd;
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) | (*(uint *)(param_1 + 0x4a0) & 1) * 2;
  return;
}



// FUNCTION 1425edbc0 FUN_1425edbc0 body=242 status=ok
// SIG undefined FUN_1425edbc0(void)

void FUN_1425edbc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))))) {
    iVar2 = FUN_1419ef5f0(*(undefined4 *)(param_1 + 0x84));
    if (1 < iVar2) {
      cVar1 = FUN_141ee4480(*(undefined4 *)(param_1 + 0x84));
      if (cVar1 == '\0') {
        FUN_14262d280(param_1,param_2);
        FUN_142632b40(param_1,param_2,2,param_3,0,param_4,param_5);
        FUN_142624040(param_1,param_2);
        FUN_142635670(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1425edcc0 FUN_1425edcc0 body=601 status=ok
// SIG undefined FUN_1425edcc0(void)

void FUN_1425edcc0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_98;
  float local_90;
  undefined4 local_88;
  undefined8 local_84;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [80];
  
  FUN_14262c990();
  lVar4 = FNiagaraEmitterHandle::GetInstance(param_1);
  puVar5 = (undefined8 *)(*(int *)(param_1 + 0x234) + param_2);
  cVar1 = *(char *)(*(longlong *)(lVar4 + 0x30) + 0x58);
  if ((byte)(cVar1 - 3U) < 2) {
    local_98 = *(undefined8 *)(param_2 + 0x3c);
    local_90 = *(float *)(param_2 + 0x44);
    if (cVar1 == '\x04') {
      local_98 = *(undefined8 *)(param_2 + 0x10);
      local_90 = *(float *)(param_2 + 0x18);
    }
    fVar6 = local_98._4_4_ * local_98._4_4_ + (float)local_98 * (float)local_98 +
            local_90 * local_90;
    if (1e-08 < fVar6) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      local_90 = local_90 * fVar7;
      local_98 = CONCAT44(local_98._4_4_ * fVar7,(float)local_98 * fVar7);
    }
    local_88 = 0x3f800000;
    local_84 = 0;
    FQuat::FindBetweenNormals(local_58,&local_88,&local_98);
    FQuat::Euler(local_58,&local_78);
    *(float *)(puVar5 + 3) = local_78 + *(float *)(puVar5 + 3);
    *(float *)((longlong)puVar5 + 0x1c) = local_74 + *(float *)((longlong)puVar5 + 0x1c);
    *(float *)(puVar5 + 4) = local_70 + *(float *)(puVar5 + 4);
  }
  FUN_1424118e0(*(longlong *)(param_1 + 0x1f0) + 0x48,&local_68,param_4,0,0,0);
  *puVar5 = local_68;
  *(undefined4 *)(puVar5 + 1) = local_60;
  if (*(char *)(param_1 + 0x250) != '\0') {
    iVar3 = *(int *)(param_1 + 0x260);
    uVar2 = *(ushort *)
             (*(longlong *)(param_1 + 0x108) + -2 + (longlong)*(int *)(param_1 + 0x128) * 2);
    *(int *)(param_1 + 0x260) = iVar3 + 1;
    if (*(int *)(param_1 + 0x264) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 600,iVar3);
    }
    *(uint *)(*(longlong *)(param_1 + 600) + (longlong)iVar3 * 4) = (uint)uVar2;
  }
  return;
}



// FUNCTION 1425edf70 FUN_1425edf70 body=351 status=ok
// SIG undefined FUN_1425edf70(void)

void FUN_1425edf70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 local_res20;
  
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))))) {
    FUN_142639b30();
    FRHICommandListImmediate::SetCurrentStat(param_2,local_res20);
    FUN_14262d280(param_1,param_2);
    FRHICommandListImmediate::SetCurrentStat(param_2,local_res20);
    FUN_142632b40(param_1,param_2,0,0,0,0,0);
    FRHICommandListImmediate::SetCurrentStat(param_2,local_res20);
    FUN_142624040(param_1,param_2);
    iVar1 = FUN_1419ef5f0(*(undefined4 *)(param_1 + 0x84));
    if (2 < iVar1) {
      FRHICommandListImmediate::SetCurrentStat(param_2,local_res20);
      FUN_14262d280(param_1,param_2);
      FRHICommandListImmediate::SetCurrentStat(param_2,local_res20);
      FUN_142632b40(param_1,param_2,1,0,param_3,0,0);
      FRHICommandListImmediate::SetCurrentStat(param_2,local_res20);
      FUN_142624040(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1425ee0d0 FUN_1425ee0d0 body=105 status=ok
// SIG undefined FUN_1425ee0d0(void)

undefined8 FUN_1425ee0d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined4 *)((longlong)param_3 + 0x14) = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)((longlong)param_3 + 0x24) = 0;
  return 0;
}



// FUNCTION 1425ee140 FUN_1425ee140 body=376 status=ok
// SIG undefined FUN_1425ee140(void)

undefined8 FUN_1425ee140(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  
  if ((*(int *)(param_1 + 0x308) < 1) && (*(longlong *)(param_1 + 0x300) == 0)) {
    return 0;
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    for (; (-1 < iVar3 && (iVar3 < *(int *)(*(longlong *)(param_1 + 0x300) + 0xf8)));
        iVar3 = iVar3 + 1) {
    }
  }
  local_40 = param_1 + 0x148;
  iVar3 = *(int *)(param_1 + 0x170);
  puStack_28 = (uint *)(param_1 + 0x158);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar3 != 0) {
    puVar6 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar6 = puStack_28;
    }
    uVar1 = *puVar6;
    uStack_50 = iVar4;
    local_68 = iVar4;
    while (uVar1 == 0) {
      lVar5 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar4 = local_68 + 1;
      bVar2 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar4;
      if (bVar2) goto LAB_1425ee23f;
      uVar1 = puVar6[lVar5 + 1];
    }
    uStack_64 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
    if (iVar3 < local_58._4_4_) {
LAB_1425ee23f:
      local_58._4_4_ = iVar3;
    }
  }
  auStack_20._4_4_ = local_58._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_50;
  auStack_20._12_4_ = iStack_4c;
  iStack_30 = local_68;
  uStack_2c = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = auStack_20._8_8_;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar2 = local_58._4_4_ < iVar3;
  local_38 = local_40;
  local_58 = puStack_28;
  if (bVar2) {
    do {
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return 1;
}



// FUNCTION 1425ee2c0 FUN_1425ee2c0 body=42 status=ok
// SIG undefined FUN_1425ee2c0(void)

void FUN_1425ee2c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1425ee4e0();
  FUN_1425ee2f0(param_1,param_2);
  return;
}



// FUNCTION 1425ee2f0 FUN_1425ee2f0 body=491 status=ok
// SIG undefined FUN_1425ee2f0(void)

void FUN_1425ee2f0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int local_res10 [2];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  int *local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined **local_f8 [18];
  undefined8 local_68;
  int **local_60;
  undefined8 local_58;
  
  lVar3 = *(longlong *)(param_1 + 0x310);
  uVar6 = 0;
  uVar1 = *(undefined1 *)(lVar3 + 0x148);
  *(undefined1 *)(lVar3 + 0x148) = 1;
  local_res18[0] = 0;
  (**(code **)(*param_2 + 0x68))(param_2,local_res18);
  if (local_res18[0] != 0) {
    do {
      local_118 = (int *)0x0;
      local_110 = 0;
      (**(code **)(*param_2 + 0x78))(param_2,0,0);
      plVar4 = (longlong *)param_2[1];
      local_res10[0] = (int)local_110;
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        local_res10[0] = 0;
      }
      if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      bVar2 = *(byte *)(param_2 + 5);
      if ((((char)bVar2 < '\0') || (local_res10[0] < 0)) ||
         (((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0 && (0x1000000 < local_res10[0])))) {
        *(byte *)(param_2 + 5) = bVar2 | 0x80;
      }
      else {
        local_110 = CONCAT44(local_110._4_4_,local_res10[0]);
        iVar5 = local_res10[0];
        if (((local_res10[0] != 0) || (local_110._4_4_ != 0)) && ((bVar2 & 1) != 0)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_118,local_res10[0]);
          iVar5 = (int)local_110;
        }
        (**(code **)(*param_2 + 0x50))(param_2,local_118,(longlong)iVar5);
      }
      FArchive::FArchive(local_f8);
      local_60 = &local_118;
      local_68 = 0;
      local_f8[0] = &PTR_FUN_143f4a3a0;
      local_58 = 0x7fffffffffffffff;
      FArchive::SetIsLoading(local_f8,1);
      FArchive::SetIsPersistent(local_f8,0);
      local_108[0] = 0;
      FUN_1425e9030(param_1,local_res20,local_f8,local_108,0);
      FArchive::~FArchive(local_f8);
      if (local_118 != (int *)0x0) {
        FMemory::Free();
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res18[0]);
  }
  *(undefined1 *)(lVar3 + 0x148) = uVar1;
  return;
}



// FUNCTION 1425ee4e0 FUN_1425ee4e0 body=1780 status=ok
// SIG undefined FUN_1425ee4e0(void)

void FUN_1425ee4e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  void **ppvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  void **ppvVar12;
  void **ppvVar13;
  uint uVar14;
  void **ppvVar15;
  char local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  void **local_118;
  longlong *plStack_110;
  void *local_108;
  ulonglong local_100;
  int local_f8;
  int local_f4;
  void **local_f0;
  longlong *plStack_e8;
  void **local_e0;
  longlong *plStack_d8;
  int local_d0;
  int local_cc;
  char local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  longlong local_b0 [4];
  char local_90;
  void **local_88;
  void **local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  int *local_68;
  void **local_60;
  void **local_58;
  int *local_50;
  void **local_48;
  void ***local_40;
  
  ppvVar13 = (void **)0x0;
  local_res20[0] = 0;
  (**(code **)(*param_2 + 0x68))(param_2,local_res20);
  ppvVar15 = ppvVar13;
  if (0 < local_res20[0]) {
    do {
      local_res18[0] = 0;
      local_f8 = 0;
      (**(code **)(*param_2 + 0x68))(param_2,local_res18);
      (**(code **)(*param_2 + 0x68))(param_2,&local_f8);
      local_118 = (void **)0x0;
      plStack_110 = (longlong *)0x0;
      if (local_f8 == 0) {
        lVar11 = *(longlong *)(param_1 + 0x310);
        if (*(int *)(lVar11 + 600) != *(int *)(lVar11 + 0x284)) {
          lVar7 = *(longlong *)(lVar11 + 0x290);
          if (*(longlong *)(lVar11 + 0x290) == 0) {
            lVar7 = lVar11 + 0x288;
          }
          iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(lVar11 + 0x298) - 1U &
                                   (longlong)local_res18[0]) * 4);
          if (iVar4 != -1) {
            do {
              ppvVar12 = (void **)((longlong)iVar4 * 0x20 + *(longlong *)(lVar11 + 0x250));
              if (*(int *)ppvVar12 == local_res18[0]) {
                if (iVar4 != -1) goto LAB_1425ee952;
                break;
              }
              iVar4 = *(int *)(ppvVar12 + 3);
            } while (iVar4 != -1);
          }
        }
        ppvVar12 = ppvVar13;
LAB_1425ee952:
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(lVar11 + 0x1b0),&local_cc,ppvVar12 + 1);
        if ((local_cc == -1) ||
           (lVar11 = *(longlong *)(lVar11 + 0x1b0) + (longlong)local_cc * 0x28, lVar11 == 0)) {
          local_e0 = (void **)0x0;
          plStack_d8 = (longlong *)0x0;
        }
        else {
          local_e0 = *(void ***)(lVar11 + 0x10);
          plStack_d8 = *(longlong **)(lVar11 + 0x18);
          if (plStack_d8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_d8 + 1) = (int)plStack_d8[1] + 1;
            UNLOCK();
          }
        }
        local_118 = local_e0;
        local_e0 = (void **)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_110,&plStack_d8);
        plVar3 = plStack_d8;
        if (plStack_d8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_d8 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_d8)(plStack_d8);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_d8 + 8))(plStack_d8,1);
            }
          }
        }
      }
      else {
        local_108 = (void *)0x0;
        local_100 = 0;
        local_f4 = 0;
        FUN_14158ce90(param_2,&local_108);
        (**(code **)(*param_2 + 0x68))(param_2,&local_f4);
        (**(code **)(*DAT_146b17150 + 0x400))
                  (DAT_146b17150,*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x58),&local_108,1
                  );
        local_68 = local_res18;
        local_60 = &local_108;
        FUN_14159e4e0(*(longlong *)(param_1 + 0x310) + 0x250,local_78,&local_68,0);
        local_58 = &local_108;
        local_50 = local_res18;
        FUN_1416874d0(*(longlong *)(param_1 + 0x310) + 0x200,local_74,&local_58,0);
        lVar11 = *(longlong *)(param_1 + 0x310);
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(lVar11 + 0x1b0,&local_d0,&local_108);
        if ((local_d0 == -1) ||
           (lVar11 = *(longlong *)(lVar11 + 0x1b0) + (longlong)local_d0 * 0x28, lVar11 == 0)) {
          local_f0 = (void **)0x0;
          plStack_e8 = (longlong *)0x0;
        }
        else {
          local_f0 = *(void ***)(lVar11 + 0x10);
          plStack_e8 = *(longlong **)(lVar11 + 0x18);
          if (plStack_e8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_e8 + 1) = (int)plStack_e8[1] + 1;
            UNLOCK();
          }
        }
        local_118 = local_f0;
        local_f0 = (void **)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_110,&plStack_e8);
        plVar3 = plStack_e8;
        if (plStack_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_e8 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_e8)(plStack_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_e8 + 8))(plStack_e8,1);
            }
          }
        }
        if (local_118 == (void **)0x0) {
          ppvVar5 = (void **)operator_new(0x28);
          ppvVar12 = ppvVar13;
          if (ppvVar5 != (void **)0x0) {
            *ppvVar5 = (void *)0x0;
            ppvVar5[1] = (void *)0x0;
            *(int *)(ppvVar5 + 2) = 0;
            ppvVar5[3] = (void *)0x0;
            ppvVar5[4] = (void *)0x0;
            ppvVar12 = ppvVar5;
          }
          local_88 = ppvVar12;
          ppvVar5 = (void **)operator_new(0x18);
          local_80 = ppvVar13;
          if (ppvVar5 != (void **)0x0) {
            *(int *)(ppvVar5 + 1) = 1;
            *(int *)((longlong)ppvVar5 + 0xc) = 1;
            *ppvVar5 = &PTR_DestroyObject_144fe7dc8;
            ppvVar5[2] = ppvVar12;
            local_80 = ppvVar5;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_88,ppvVar12,ppvVar12);
          local_118 = local_88;
          local_88 = (void **)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_110,&local_80);
          ppvVar12 = local_80;
          if (local_80 != (void **)0x0) {
            LOCK();
            ppvVar5 = local_80 + 1;
            iVar4 = *(int *)ppvVar5;
            *(int *)ppvVar5 = *(int *)ppvVar5 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar2 = (int *)((longlong)ppvVar12 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)((longlong)*ppvVar12 + 8))(ppvVar12,1);
              }
            }
          }
          _Src = local_108;
          ppvVar12 = local_118;
          if (local_118 != &local_108) {
            lVar11 = (longlong)(int)local_100;
            *(int *)(local_118 + 1) = (int)local_100;
            if (((int)local_100 == 0) && (*(int *)((longlong)local_118 + 0xc) == 0)) {
              *(int *)((longlong)local_118 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(local_118,local_100 & 0xffffffff);
              _guard_xfg_dispatch_icall_nop(*ppvVar12,_Src,lVar11 * 2);
            }
          }
          ppvVar12 = local_118;
          *(int *)(local_118 + 2) = local_res18[0];
          iVar4 = *(int *)(local_118 + 4);
          if (iVar4 < local_f4) {
            *(int *)(local_118 + 4) = local_f4;
            iVar9 = local_f4 - iVar4;
            if (*(int *)((longlong)local_118 + 0x24) < local_f4) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(local_118 + 3,iVar4);
            }
            puVar8 = (undefined1 *)((longlong)iVar4 * 0x40 + (longlong)ppvVar12[3]);
            if (iVar9 != 0) {
              puVar6 = (undefined8 *)(puVar8 + 0x20);
              do {
                *puVar8 = 0;
                puVar8 = puVar8 + 0x40;
                *(undefined8 *)((longlong)puVar6 + -0x1c) = 0;
                puVar6[-2] = 0;
                puVar6[-1] = 0;
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
                *(undefined1 *)(puVar6 + 3) = 0;
                puVar6 = puVar6 + 8;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
          else if (local_f4 < iVar4) {
            TArray<FNetFieldExport,FDefaultAllocator>::RemoveAtImpl
                      (local_118 + 3,local_f4,iVar4 - local_f4,1);
          }
          local_48 = &local_108;
          local_40 = &local_118;
          FUN_1425d76f0(*(longlong *)(param_1 + 0x310) + 0x1b0,local_70,&local_48,0);
        }
        if (local_108 != (void *)0x0) {
          FMemory::Free();
        }
      }
      ppvVar12 = local_118;
      plVar3 = (longlong *)param_2[1];
      local_c8 = '\0';
      local_c4 = 0;
      local_b8 = 0;
      local_b0[0] = 0;
      local_b0[1] = 0;
      local_b0[2] = 0;
      local_b0[3] = 0;
      local_90 = '\0';
      local_res10[0] = '\0';
      if ((char *)plVar3[1] < (char *)*plVar3 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
      }
      else {
        local_res10[0] = *(char *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        local_c8 = local_res10[0] == '\x01';
      }
      if (local_c8 != '\0') {
        (**(code **)(*param_2 + 0x68))(param_2,&local_c4);
        plVar3 = (longlong *)param_2[1];
        if ((undefined4 *)plVar3[1] < (undefined4 *)*plVar3 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,(longlong)&local_c4 + 4,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,(longlong)&local_c4 + 4,4);
          }
        }
        else {
          local_c4 = CONCAT44(*(undefined4 *)*plVar3,(int)local_c4);
          *plVar3 = *plVar3 + 4;
        }
        FUN_141726eb0(param_2,&local_b8);
      }
      if ((-1 < (int)local_c4) && ((int)local_c4 < *(int *)(ppvVar12 + 4))) {
        pcVar10 = (char *)((longlong)(int)local_c4 * 0x40 + (longlong)ppvVar12[3]);
        *pcVar10 = local_c8;
        *(int *)(pcVar10 + 4) = (int)local_c4;
        *(undefined4 *)(pcVar10 + 8) = local_c4._4_4_;
        *(undefined8 *)(pcVar10 + 0x10) = local_b8;
        FString::operator=(pcVar10 + 0x18,local_b0);
        FString::operator=(pcVar10 + 0x28,local_b0 + 2);
        pcVar10[0x38] = local_90;
      }
      if (local_b0[2] != 0) {
        FMemory::Free();
      }
      if (local_b0[0] != 0) {
        FMemory::Free();
      }
      plVar3 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      uVar14 = (int)ppvVar15 + 1;
      ppvVar15 = (void **)(ulonglong)uVar14;
    } while ((int)uVar14 < local_res20[0]);
  }
  return;
}



// FUNCTION 1425eebe0 FUN_1425eebe0 body=1637 status=ok
// SIG undefined FUN_1425eebe0(void)

void FUN_1425eebe0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  void **ppvVar8;
  void *pvVar9;
  void **ppvVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  void **ppvVar14;
  void **ppvVar15;
  int local_res8 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  void **local_108;
  longlong *plStack_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  undefined8 local_e0;
  int local_d8 [2];
  void **local_d0;
  void **local_c8 [2];
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0 [4];
  undefined1 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  void **local_68;
  int *local_60;
  int *local_58;
  void **local_50;
  void **local_48;
  void ***local_40;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x130) + 0xa4) & 1) == 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
    return;
  }
  plVar5 = (longlong *)param_2[1];
  ppvVar15 = (void **)0x0;
  local_res8[0] = 0;
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  ppvVar14 = ppvVar15;
  if (0 < local_res8[0]) {
    while ((**(code **)(*param_2 + 0x68))(param_2,local_res18), -1 < (char)param_2[5]) {
      lVar11 = param_2[0x15];
      local_res20[0] = 0;
      if (lVar11 < param_2[0x14]) {
        bVar4 = *(byte *)((longlong)(int)(lVar11 >> 3) + param_2[0x12]);
        param_2[0x15] = lVar11 + 1;
        if ((bVar4 & '\x01' << ((byte)lVar11 & 7)) != 0) {
          local_e8 = (void *)0x0;
          local_e0 = 0;
          FUN_14158ce90(param_2,&local_e8);
          plVar5 = (longlong *)param_2[1];
          if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,local_res20,4);
            }
          }
          else {
            local_res20[0] = *(undefined4 *)*plVar5;
            *plVar5 = *plVar5 + 4;
          }
          pvVar9 = local_e8;
          if ((char)param_2[5] < '\0') goto LAB_1425ef19a;
          (**(code **)(*DAT_146b17150 + 0x400))
                    (DAT_146b17150,*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x58),&local_e8,
                     1);
          local_68 = &local_e8;
          local_60 = local_res18;
          FUN_1416874d0(*(longlong *)(param_1 + 0x310) + 0x200,local_78,&local_68,0);
          local_58 = local_res18;
          local_50 = &local_e8;
          FUN_14159e4e0(*(longlong *)(param_1 + 0x310) + 0x250,local_74,&local_58,0);
          if (local_e8 != (void *)0x0) {
            FMemory::Free();
          }
        }
      }
      else {
        FUN_1416952d0(param_2,1);
      }
      lVar11 = *(longlong *)(param_1 + 0x310);
      if (*(int *)(lVar11 + 600) != *(int *)(lVar11 + 0x284)) {
        lVar7 = *(longlong *)(lVar11 + 0x290);
        if (*(longlong *)(lVar11 + 0x290) == 0) {
          lVar7 = lVar11 + 0x288;
        }
        iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(lVar11 + 0x298) - 1U & (longlong)local_res18[0]
                                 ) * 4);
        if (iVar6 != -1) {
          do {
            ppvVar10 = (void **)((longlong)iVar6 * 0x20 + *(longlong *)(lVar11 + 0x250));
            if (*(int *)ppvVar10 == local_res18[0]) {
              if (iVar6 != -1) goto LAB_1425eee71;
              break;
            }
            iVar6 = *(int *)(ppvVar10 + 3);
          } while (iVar6 != -1);
        }
      }
      ppvVar10 = ppvVar15;
LAB_1425eee71:
      local_f0 = *(int *)(ppvVar10 + 2);
      lVar11 = (longlong)local_f0;
      pvVar9 = ppvVar10[1];
      local_f8 = (void *)0x0;
      if (local_f0 == 0) {
        local_ec = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0,0);
        _guard_xfg_dispatch_icall_nop(local_f8,pvVar9,lVar11 * 2);
      }
      iVar6 = local_f0;
      lVar11 = *(longlong *)(param_1 + 0x310);
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(lVar11 + 0x1b0,local_d8);
      if ((local_d8[0] == -1) ||
         (lVar11 = *(longlong *)(lVar11 + 0x1b0) + (longlong)local_d8[0] * 0x28, lVar11 == 0)) {
        plStack_100 = (longlong *)0x0;
LAB_1425eef26:
        local_108 = (void **)0x0;
        ppvVar8 = (void **)operator_new(0x28);
        ppvVar10 = ppvVar15;
        if (ppvVar8 != (void **)0x0) {
          *ppvVar8 = (void *)0x0;
          ppvVar8[1] = (void *)0x0;
          *(int *)(ppvVar8 + 2) = 0;
          ppvVar8[3] = (void *)0x0;
          ppvVar8[4] = (void *)0x0;
          ppvVar10 = ppvVar8;
        }
        local_d0 = ppvVar10;
        ppvVar8 = (void **)operator_new(0x18);
        local_c8[0] = ppvVar15;
        if (ppvVar8 != (void **)0x0) {
          *(int *)(ppvVar8 + 1) = 1;
          *ppvVar8 = &PTR_DestroyObject_144fe7dc8;
          *(int *)((longlong)ppvVar8 + 0xc) = 1;
          ppvVar8[2] = ppvVar10;
          local_c8[0] = ppvVar8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_d0,ppvVar10,ppvVar10);
        local_108 = local_d0;
        local_d0 = (void **)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_100,local_c8);
        ppvVar10 = local_c8[0];
        if (local_c8[0] != (void **)0x0) {
          LOCK();
          ppvVar8 = local_c8[0] + 1;
          iVar3 = *(int *)ppvVar8;
          *(int *)ppvVar8 = *(int *)ppvVar8 + -1;
          UNLOCK();
          iVar6 = local_f0;
          if (iVar3 == 1) {
            (**(code **)*local_c8[0])(local_c8[0]);
            LOCK();
            piVar1 = (int *)((longlong)ppvVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            iVar6 = local_f0;
            if (iVar3 == 1) {
              (**(code **)((longlong)*ppvVar10 + 8))(ppvVar10,1);
              iVar6 = local_f0;
            }
          }
        }
        ppvVar10 = local_108;
        if (local_108 != &local_f8) {
          *(int *)(local_108 + 1) = iVar6;
          if ((iVar6 == 0) && (*(int *)((longlong)local_108 + 0xc) == 0)) {
            *(int *)((longlong)local_108 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(local_108,iVar6);
            _guard_xfg_dispatch_icall_nop(*ppvVar10,local_f8,(longlong)iVar6 * 2);
          }
        }
        *(int *)(local_108 + 2) = local_res18[0];
        FUN_1425f3e30(local_108 + 3,local_res20[0],1);
        local_48 = local_108;
        local_40 = &local_108;
        FUN_1425d76f0(*(longlong *)(param_1 + 0x310) + 0x1b0,local_70,&local_48,0);
      }
      else {
        local_108 = *(void ***)(lVar11 + 0x10);
        plStack_100 = *(longlong **)(lVar11 + 0x18);
        if (plStack_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
          UNLOCK();
          iVar6 = local_f0;
        }
        if (local_108 == (void **)0x0) goto LAB_1425eef26;
      }
      local_b8[0] = 0;
      local_b4 = 0;
      local_a8 = 0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_a0[2] = 0;
      local_a0[3] = 0;
      local_80 = 0;
      FUN_1425da240(param_2,local_b8);
      if ((char)*(byte *)(param_2 + 5) < '\0') {
        if (local_a0[2] != 0) {
          FMemory::Free();
        }
        if (local_a0[0] != 0) {
          FMemory::Free();
        }
        plVar5 = plStack_100;
        pvVar9 = local_f8;
        if (plStack_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_100 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_100)(plStack_100);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            pvVar9 = local_f8;
            if (iVar6 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
              pvVar9 = local_f8;
            }
          }
        }
LAB_1425ef19a:
        if (pvVar9 == (void *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      if ((int)local_b4 < *(int *)(local_108 + 4)) {
        puVar12 = (undefined1 *)((longlong)(int)local_b4 * 0x40 + (longlong)local_108[3]);
        *puVar12 = local_b8[0];
        *(int *)(puVar12 + 4) = (int)local_b4;
        *(undefined4 *)(puVar12 + 8) = local_b4._4_4_;
        *(undefined8 *)(puVar12 + 0x10) = local_a8;
        FString::operator=(puVar12 + 0x18,local_a0);
        FString::operator=(puVar12 + 0x28,local_a0 + 2);
        puVar12[0x38] = local_80;
      }
      else {
        *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
      }
      if (local_a0[2] != 0) {
        FMemory::Free();
      }
      if (local_a0[0] != 0) {
        FMemory::Free();
      }
      plVar5 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_100 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free();
      }
      uVar13 = (int)ppvVar14 + 1;
      ppvVar14 = (void **)(ulonglong)uVar13;
      if (local_res8[0] <= (int)uVar13) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1425ef250 FUN_1425ef250 body=351 status=ok
// SIG undefined FUN_1425ef250(void)

void FUN_1425ef250(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  if (-1 < (char)param_2[5]) {
    lVar3 = param_2[0x15];
    if (lVar3 < param_2[0x14]) {
      bVar2 = *(byte *)((longlong)(int)(lVar3 >> 3) + param_2[0x12]);
      param_2[0x15] = lVar3 + 1;
      if ((bVar2 & '\x01' << ((byte)lVar3 & 7)) != 0) {
        FUN_1425eebe0(param_1,param_2);
        return;
      }
    }
    else {
      FUN_1416952d0(param_2,1);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x310);
  iVar5 = 0;
  uVar1 = *(undefined1 *)(lVar3 + 0x148);
  *(undefined1 *)(lVar3 + 0x148) = 1;
  plVar4 = (longlong *)param_2[1];
  local_res10[0] = 0;
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res10[0] < 0x801) {
    if (0 < local_res10[0]) {
      do {
        local_res20 = 0;
        FUN_1425e9030(param_1,local_res18,param_2,&local_res20,0);
        if ((char)param_2[5] < '\0') break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_res10[0]);
    }
  }
  else {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
  }
  *(undefined1 *)(lVar3 + 0x148) = uVar1;
  return;
}



// FUNCTION 1425ef3b0 ReceivedAck body=330 status=ok
// SIG undefined ReceivedAck(void)

void UPackageMapClient::ReceivedAck(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = *(int *)(param_1 + 0x1f0) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 4;
    lVar6 = (longlong)*(int *)(param_1 + 0x1f0) << 2;
    lVar9 = lVar8;
    do {
      plVar1 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        iVar2 = *(int *)(lVar8 + *(longlong *)(param_1 + 0x1e8));
        plVar3 = (longlong *)plVar1[8];
        if ((longlong *)plVar1[8] == (longlong *)0x0) {
          plVar3 = plVar1 + 7;
        }
        iVar4 = *(int *)((longlong)plVar3 + ((longlong)(int)plVar1[9] - 1U & (longlong)iVar2) * 4);
        if (iVar4 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar4 * 0x10 + *plVar1);
            if (*piVar5 == iVar2) {
              if (iVar4 != -1) goto LAB_1425ef470;
              break;
            }
            iVar4 = piVar5[2];
          } while (iVar4 != -1);
        }
      }
      piVar5 = (int *)0x0;
LAB_1425ef470:
      if ((-1 < piVar5[1]) && (piVar5[1] <= param_2)) {
        piVar5[1] = -1;
        iVar2 = *(int *)(param_1 + 0x1f0);
        iVar4 = (iVar2 - iVar7) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + *(longlong *)(param_1 + 0x1e8)),
                     (void *)(lVar6 + *(longlong *)(param_1 + 0x1e8)),(longlong)iVar4 << 2);
          iVar2 = *(int *)(param_1 + 0x1f0);
        }
        *(int *)(param_1 + 0x1f0) = iVar2 + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
      }
      lVar6 = lVar6 + -4;
      lVar9 = lVar9 + -4;
      lVar8 = lVar8 + -4;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return;
}



// FUNCTION 1425ef500 ReceivedNak body=323 status=ok
// SIG undefined ReceivedNak(void)

void UPackageMapClient::ReceivedNak(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = *(int *)(param_1 + 0x1f0) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 4;
    lVar6 = (longlong)*(int *)(param_1 + 0x1f0) << 2;
    lVar9 = lVar8;
    do {
      plVar1 = *(longlong **)(param_1 + 0x2e8);
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        iVar2 = *(int *)(lVar8 + *(longlong *)(param_1 + 0x1e8));
        plVar3 = (longlong *)plVar1[8];
        if ((longlong *)plVar1[8] == (longlong *)0x0) {
          plVar3 = plVar1 + 7;
        }
        iVar4 = *(int *)((longlong)plVar3 + ((longlong)(int)plVar1[9] - 1U & (longlong)iVar2) * 4);
        if (iVar4 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar4 * 0x10 + *plVar1);
            if (*piVar5 == iVar2) {
              if (iVar4 != -1) goto LAB_1425ef5c0;
              break;
            }
            iVar4 = piVar5[2];
          } while (iVar4 != -1);
        }
      }
      piVar5 = (int *)0x0;
LAB_1425ef5c0:
      if (piVar5[1] == param_2) {
        piVar5[1] = -2;
        iVar2 = *(int *)(param_1 + 0x1f0);
        iVar4 = (iVar2 - iVar7) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + *(longlong *)(param_1 + 0x1e8)),
                     (void *)(lVar6 + *(longlong *)(param_1 + 0x1e8)),(longlong)iVar4 << 2);
          iVar2 = *(int *)(param_1 + 0x1f0);
        }
        *(int *)(param_1 + 0x1f0) = iVar2 + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
      }
      lVar6 = lVar6 + -4;
      lVar9 = lVar9 + -4;
      lVar8 = lVar8 + -4;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return;
}



// FUNCTION 1425ef650 FUN_1425ef650 body=1213 status=ok
// SIG undefined FUN_1425ef650(void)

void FUN_1425ef650(longlong *param_1,int *param_2,undefined8 *param_3,int *param_4,
                  undefined4 param_5,byte param_6,char param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int *piVar13;
  char local_res8 [8];
  int *local_d0;
  undefined8 local_c8;
  int *local_c0;
  undefined4 *local_b8;
  int *local_b0;
  undefined8 local_a8;
  int *local_a0;
  undefined8 local_98;
  int local_90 [2];
  int *local_88;
  int local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  byte local_50;
  undefined2 *local_48;
  int local_40;
  
  piVar9 = (int *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar5 * 0x40 + *param_1);
        if (*piVar8 == *param_2) {
          if (iVar5 != -1) goto LAB_1425ef6d1;
          break;
        }
        iVar5 = piVar8[0xe];
      } while (iVar5 != -1);
    }
  }
  piVar8 = piVar9;
LAB_1425ef6d1:
  piVar13 = piVar8 + 2;
  if (piVar8 == (int *)0x0) {
    piVar13 = piVar9;
  }
  if (piVar13 == (int *)0x0) {
    local_50 = local_50 & 0xf0;
    local_58 = 0;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    if (*(int *)(param_3 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_3;
    }
    puVar7 = (undefined8 *)FName::FName(local_res8,puVar10,1);
    local_68 = *puVar7;
    local_74 = CONCAT44(*param_4,(undefined4)local_74);
    local_60 = param_5;
    local_b8 = &local_78;
    local_50 = local_50 & 0xfc | param_7 * '\x02' | param_6;
    local_c0 = param_2;
    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
              (param_1,local_res8,&local_c0,0);
    cVar4 = FUN_14044af00(&local_78,0);
    if (cVar4 == '\0') {
      return;
    }
    TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
    ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
              (param_1 + 10,&local_78,param_2);
    return;
  }
  local_b0 = (int *)0x0;
  local_res8[0] = '\0';
  bVar3 = false;
  local_a8 = 0;
  puVar7 = (undefined8 *)FName::ToString(piVar13 + 4,&local_c0);
  puVar10 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_3;
  }
  if (*(int *)(puVar7 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar7;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
  if (local_c0 != (int *)0x0) {
    FMemory::Free();
  }
  if (iVar5 != 0) {
    FString::PrintfImpl(&local_d0,&DAT_143f3edc0,*param_2);
    piVar9 = (int *)&DAT_143f3eda8;
    if ((int)local_c8 != 0) {
      piVar9 = local_d0;
    }
    puVar7 = (undefined8 *)FName::ToString(piVar13 + 4,&local_c0);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar7;
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_3;
    }
    FString::PrintfImpl(&local_a0,L"Path mismatch. Path: %s, Expected: %s, NetGUID: %s",puVar11,
                        puVar12,piVar9);
    piVar9 = local_a0;
    local_a8 = local_98;
    local_98 = 0;
    local_b0 = local_a0;
    local_a0 = (int *)0x0;
    if (local_c0 != (int *)0x0) {
      FMemory::Free();
    }
    if (local_d0 != (int *)0x0) {
      FMemory::Free();
    }
    local_res8[0] = '\x01';
  }
  if (piVar13[2] != *param_4) {
    FString::PrintfImpl(&local_c0,&DAT_143f3edc0,*param_2);
    piVar8 = (int *)&DAT_143f3eda8;
    if ((int)local_b8 != 0) {
      piVar8 = local_c0;
    }
    FString::PrintfImpl(&local_88,&DAT_143f3edc0,piVar13[2]);
    local_a0 = (int *)&DAT_143f3eda8;
    if (local_80 != 0) {
      local_a0 = local_88;
    }
    FString::PrintfImpl(&local_48,&DAT_143f3edc0,*param_4);
    puVar12 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar12 = local_48;
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_3;
    }
    FString::PrintfImpl(&local_d0,L"Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s",
                        puVar11,puVar12,local_a0,piVar8);
    if (piVar9 != (int *)0x0) {
      FMemory::Free();
    }
    local_a8 = local_c8;
    piVar9 = local_d0;
    local_c8 = 0;
    local_d0 = (int *)0x0;
    local_b0 = piVar9;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_88 != (int *)0x0) {
      FMemory::Free();
    }
    if (local_c0 != (int *)0x0) {
      FMemory::Free();
    }
    bVar3 = true;
  }
  cVar4 = FUN_14044af00(piVar13,0);
  if (cVar4 != '\0') {
    local_a0 = *(int **)piVar13;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 10,local_90,&local_a0);
    if ((local_90[0] == -1) || (lVar1 = param_1[10] + (longlong)local_90[0] * 0x14, lVar1 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lVar1 + 8);
    }
    if (iVar5 != *param_2) {
      FString::PrintfImpl(&local_88,&DAT_143f3edc0);
      piVar8 = (int *)&DAT_143f3eda8;
      if (local_80 != 0) {
        piVar8 = local_88;
      }
      FString::PrintfImpl(&local_c0,&DAT_143f3edc0,*param_2);
      piVar13 = (int *)&DAT_143f3eda8;
      if ((int)local_b8 != 0) {
        piVar13 = local_c0;
      }
      if (*(int *)(param_3 + 1) != 0) {
        puVar10 = (undefined2 *)*param_3;
      }
      FString::PrintfImpl(&local_d0,L"Netguid mismatch. Path: %s, NetGUID: %s, Expected: %s",puVar10
                          ,piVar13,piVar8);
      if (piVar9 != (int *)0x0) {
        FMemory::Free(piVar9);
      }
      piVar9 = local_d0;
      local_a8 = local_c8;
      local_c8 = 0;
      local_b0 = local_d0;
      local_d0 = (int *)0x0;
      if (local_c0 != (int *)0x0) {
        FMemory::Free();
      }
      if (local_88 != (int *)0x0) {
        FMemory::Free();
      }
      bVar2 = true;
      goto LAB_1425efa0d;
    }
  }
  bVar2 = false;
LAB_1425efa0d:
  if (((local_res8[0] != '\0') || (bVar3)) || (bVar2)) {
    FUN_1425dccc0(param_1[0x2a],9,&local_b0);
    piVar9 = local_b0;
  }
  if (piVar9 != (int *)0x0) {
    FMemory::Free(piVar9);
  }
  return;
}



// FUNCTION 1425efb10 FUN_1425efb10 body=908 status=ok
// SIG undefined FUN_1425efb10(void)

void FUN_1425efb10(longlong *param_1,int *param_2,undefined8 *param_3,int *param_4,
                  undefined4 param_5,byte param_6,char param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  char local_res8 [8];
  int *local_c0;
  undefined8 local_b8;
  int *local_b0;
  undefined8 local_a8;
  int *local_a0;
  undefined4 *local_98;
  undefined2 *local_90;
  int local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  byte local_58;
  undefined2 *local_50;
  int local_48;
  
  piVar8 = (int *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar3 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar3 * 0x40 + *param_1);
        if (*piVar6 == *param_2) {
          if (iVar3 != -1) goto LAB_1425efb91;
          break;
        }
        iVar3 = piVar6[0xe];
      } while (iVar3 != -1);
    }
  }
  piVar6 = piVar8;
LAB_1425efb91:
  piVar12 = piVar6 + 2;
  if (piVar6 == (int *)0x0) {
    piVar12 = piVar8;
  }
  if (piVar12 == (int *)0x0) {
    local_58 = local_58 & 0xf0;
    local_60 = 0;
    local_80 = 0xffffffff;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    if (*(int *)(param_3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_3;
    }
    puVar5 = (undefined8 *)FName::FName(local_res8,puVar9,1);
    local_70 = *puVar5;
    local_7c = CONCAT44(*param_4,(undefined4)local_7c);
    local_68 = param_5;
    local_98 = &local_80;
    local_58 = local_58 & 0xfc | param_7 * '\x02' | param_6;
    local_a0 = param_2;
    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
              (param_1,local_res8,&local_a0,0);
    cVar2 = FUN_14044af00(&local_80,0);
    if (cVar2 != '\0') {
      TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
      ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
                (param_1 + 10,&local_80,param_2);
    }
  }
  else {
    local_b0 = (int *)0x0;
    local_res8[0] = '\0';
    local_a8 = 0;
    bVar1 = false;
    puVar5 = (undefined8 *)FName::ToString(piVar12 + 4,&local_a0);
    puVar9 = &DAT_143f3eda8;
    if (*(int *)(param_3 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    if (*(int *)(puVar5 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar5;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar7);
    if (local_a0 != (int *)0x0) {
      FMemory::Free();
    }
    if (iVar3 != 0) {
      FString::PrintfImpl(&local_90,&DAT_143f3edc0,*param_2);
      puVar7 = &DAT_143f3eda8;
      if (local_88 != 0) {
        puVar7 = local_90;
      }
      puVar5 = (undefined8 *)FName::ToString(piVar12 + 4,&local_a0);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar5;
      }
      if (*(int *)(param_3 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*param_3;
      }
      FString::PrintfImpl(&local_c0,L"Path mismatch. Path: %s, Expected: %s, NetGUID: %s",puVar10,
                          puVar11,puVar7);
      local_a8 = local_b8;
      piVar8 = local_c0;
      local_b8 = 0;
      local_c0 = (int *)0x0;
      local_b0 = piVar8;
      if (local_a0 != (int *)0x0) {
        FMemory::Free();
      }
      if (local_90 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res8[0] = '\x01';
    }
    if (piVar12[2] != *param_4) {
      FString::PrintfImpl(&local_a0,&DAT_143f3edc0,*param_2);
      piVar6 = (int *)&DAT_143f3eda8;
      if ((int)local_98 != 0) {
        piVar6 = local_a0;
      }
      FString::PrintfImpl(&local_50,&DAT_143f3edc0,piVar12[2]);
      puVar7 = &DAT_143f3eda8;
      if (local_48 != 0) {
        puVar7 = local_50;
      }
      FString::PrintfImpl(&local_90,&DAT_143f3edc0,*param_4);
      puVar11 = &DAT_143f3eda8;
      if (local_88 != 0) {
        puVar11 = local_90;
      }
      if (*(int *)(param_3 + 1) != 0) {
        puVar9 = (undefined2 *)*param_3;
      }
      FString::PrintfImpl(&local_c0,
                          L"Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s",puVar9,
                          puVar11,puVar7,piVar6);
      if (piVar8 != (int *)0x0) {
        FMemory::Free();
      }
      local_a8 = local_b8;
      piVar8 = local_c0;
      local_b8 = 0;
      local_c0 = (int *)0x0;
      local_b0 = piVar8;
      if (local_90 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_a0 != (int *)0x0) {
        FMemory::Free();
      }
      bVar1 = true;
    }
    if ((local_res8[0] != '\0') || (bVar1)) {
      FUN_1425dccc0(param_1[0x2a],9,&local_b0);
      piVar8 = local_b0;
    }
    if (piVar8 != (int *)0x0) {
      FMemory::Free(piVar8);
    }
  }
  return;
}



// FUNCTION 1425efea0 FUN_1425efea0 body=444 status=ok
// SIG undefined FUN_1425efea0(void)

void FUN_1425efea0(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_res8;
  int iStackX_c;
  undefined8 local_res10;
  undefined8 local_res20;
  int *local_68;
  int *local_60;
  int local_58;
  undefined8 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  byte local_30;
  
  piVar6 = (int *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar2 * 0x40 + *param_1);
        if (*piVar4 == *param_2) {
          if (iVar2 != -1) goto LAB_1425eff20;
          break;
        }
        iVar2 = piVar4[0xe];
      } while (iVar2 != -1);
    }
  }
  piVar4 = piVar6;
LAB_1425eff20:
  piVar5 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar5 = piVar6;
  }
  if (piVar5 != (int *)0x0) {
    FWeakObjectPtr::Get(piVar5);
    local_res8 = *piVar5;
    iStackX_c = piVar5[1];
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 10,&local_res8);
    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
    ::Remove(param_1,param_2);
  }
  FWeakObjectPtr::operator=(&local_res10,param_3);
  local_res20 = local_res10;
  TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 10,&local_res8,&local_res20);
  piVar4 = piVar6;
  if (local_res8 != -1) {
    piVar4 = (int *)(param_1[10] + (longlong)local_res8 * 0x14);
  }
  piVar5 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar5 = piVar6;
  }
  if (piVar5 != (int *)0x0) {
    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
    ::Remove(param_1);
    FWeakObjectPtr::operator=(&local_res8,param_3);
    local_res10 = CONCAT44(iStackX_c,local_res8);
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 10,&local_res10);
  }
  local_30 = local_30 & 0xf0;
  local_58 = -1;
  local_38 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_res8,param_3);
  local_58 = local_res8;
  local_54 = CONCAT44(local_54._4_4_,iStackX_c);
  local_60 = &local_58;
  local_68 = param_2;
  TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
            (param_1,&local_res8,&local_68,0);
  cVar1 = FUN_14044af00(&local_58,0);
  if (cVar1 != '\0') {
    TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
    ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
              (param_1 + 10,&local_58,param_2);
  }
  return;
}



// FUNCTION 1425f0060 Rehash body=639 status=ok
// SIG undefined Rehash(void)

void TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Rehash
               (longlong *param_1)

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
        if (bVar3) goto LAB_1425f019f;
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
LAB_1425f019f:
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
        lVar4 = *param_1 + (longlong)iStack_1c * 0x18;
        iVar8 = (int)(**(ulonglong **)(*param_1 + (longlong)iStack_1c * 0x18) >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
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



// FUNCTION 1425f02e0 FUN_1425f02e0 body=143 status=ok
// SIG undefined FUN_1425f02e0(void)

void FUN_1425f02e0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x14;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x10));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0xc);
        break;
      }
      lVar6 = (longlong)iVar3 * 5 + 3;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 4);
      iVar3 = *(int *)(lVar4 + lVar6 * 4);
    }
  }
  TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1425f0370 Remove body=232 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar7 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x40 + 0x3c + lVar3));
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar6 + lVar7 * 4);
    iVar2 = *(int *)((longlong)plVar6 + lVar7 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar8 = *(int *)((longlong)param_2 * 0x40 + 0x38 + lVar3);
        break;
      }
      piVar8 = (int *)(lVar3 + 0x38 + (longlong)iVar2 * 0x40);
      iVar2 = *piVar8;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = param_2;
  }
  uVar5 = 0xffffffff;
  puVar9 = (undefined4 *)((longlong)param_2 * 0x40 + *param_1);
  *puVar9 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  puVar9[1] = uVar5;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar6 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 1425f0460 FUN_1425f0460 body=451 status=ok
// SIG undefined FUN_1425f0460(void)

undefined8 FUN_1425f0460(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar11 = (int)(param_2 >> 4);
  uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
  uVar9 = (longlong)(int)param_1[9] - 1;
  uVar7 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
  uVar12 = (iVar11 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 0x10;
  uVar7 = (uVar7 - uVar10) - uVar12 ^ uVar10 >> 5;
  uVar12 = (uVar12 - uVar10) - uVar7 ^ uVar7 >> 3;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 10;
  plVar13 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar13 = param_1 + 7;
  }
  iVar11 = *(int *)((longlong)plVar13 +
                   (((longlong)(int)((uVar7 - uVar10) - uVar12) ^ (ulonglong)(uVar10 >> 0xf)) &
                   uVar9) * 4);
  if (iVar11 != -1) {
    lVar4 = *param_1;
    do {
      lVar8 = (longlong)iVar11;
      if (**(ulonglong **)(lVar4 + lVar8 * 0x18) == param_2) {
        lVar8 = lVar8 * 0x18;
        uVar9 = (longlong)*(int *)(lVar8 + 0x14 + lVar4) & uVar9;
        puVar6 = (undefined4 *)((longlong)plVar13 + uVar9 * 4);
        iVar5 = *(int *)((longlong)plVar13 + uVar9 * 4);
        if (iVar5 != -1) goto LAB_1425f0590;
        goto LAB_1425f05b3;
      }
      iVar11 = *(int *)(lVar4 + lVar8 * 0x18 + 0x10);
    } while (iVar11 != -1);
  }
  return 0;
  while( true ) {
    lVar1 = (longlong)iVar5 * 3 + 2;
    iVar5 = *(int *)(lVar4 + lVar1 * 8);
    puVar6 = (undefined4 *)(lVar4 + lVar1 * 8);
    if (iVar5 == -1) break;
LAB_1425f0590:
    if (iVar5 == iVar11) {
      *puVar6 = *(undefined4 *)(lVar8 + lVar4 + 0x10);
      break;
    }
  }
LAB_1425f05b3:
  plVar13 = *(longlong **)(lVar8 + 8 + *param_1);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar11,1);
  return 1;
}



// FUNCTION 1425f0630 Remove body=627 status=ok
// SIG undefined Remove(void)

void FNetworkObjectList::Remove(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 ***local_res20;
  undefined8 ***local_88;
  undefined8 local_80;
  int iStack_78;
  uint uStack_74;
  undefined8 local_70;
  uint uStack_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  if (param_2 != 0) {
    TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::FindId
              (param_1,local_res10,param_2);
    if ((local_res10[0] != -1) &&
       (plVar1 = (longlong *)(*param_1 + (longlong)local_res10[0] * 0x18), plVar1 != (longlong *)0x0
       )) {
      lVar6 = *plVar1;
      local_58 = (longlong *)(lVar6 + 0x30);
      iVar2 = *(int *)(lVar6 + 0x58);
      puStack_40 = (uint *)(lVar6 + 0x40);
      local_80._0_4_ = 0;
      local_80._4_4_ = 1;
      local_70._4_4_ = 0;
      uStack_68 = 0;
      if (iVar2 != 0) {
        puVar7 = *(uint **)(lVar6 + 0x50);
        if (*(uint **)(lVar6 + 0x50) == (uint *)0x0) {
          puVar7 = puStack_40;
        }
        uVar3 = *puVar7;
        uStack_68 = 0;
        local_80._0_4_ = 0;
        while (uVar3 == 0) {
          lVar6 = (longlong)(int)local_80;
          uStack_68 = uStack_68 + 0x20;
          iVar5 = (int)local_80 + 1;
          bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_80;
          local_80._0_4_ = iVar5;
          if (bVar4) goto LAB_1425f072f;
          uVar3 = puVar7[lVar6 + 1];
        }
        local_80._4_4_ = -uVar3 & uVar3;
        iVar5 = 0x1f;
        if (local_80._4_4_ != 0) {
          for (; local_80._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (local_80._4_4_ == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        local_70._4_4_ = (uStack_68 - iVar5) + 0x1f;
        if (iVar2 < local_70._4_4_) {
LAB_1425f072f:
          local_70._4_4_ = iVar2;
        }
      }
      uStack_38 = 0xffffffff;
      iStack_34 = local_70._4_4_;
      iStack_30 = uStack_68;
      uStack_2c = iStack_64;
      iStack_48 = (int)local_80;
      uStack_44 = local_80._4_4_;
      iStack_78 = (int)local_80;
      uStack_74 = local_80._4_4_;
      local_60 = uStack_68;
      uStack_5c = iStack_64;
      uStack_68 = 0xffffffff;
      iStack_64 = local_70._4_4_;
      bVar4 = local_70._4_4_ < iVar2;
      local_80 = local_58;
      local_50 = local_58;
      local_70 = puStack_40;
      if (bVar4) {
        do {
          plVar1 = local_58;
          iVar2 = iStack_64;
          lVar6 = FWeakObjectPtr::Get((longlong)iStack_64 * 0x10 + *local_80);
          if ((lVar6 == 0) || (*(int *)(lVar6 + 300) == 1)) {
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove(plVar1,iVar2);
          }
          else {
            FWeakObjectPtr::operator=(&local_res20,lVar6);
            local_88 = local_res20;
            TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x1e,local_res10,&local_88);
            if ((local_res10[0] == -1) ||
               (lVar6 = param_1[0x1e] + (longlong)local_res10[0] * 0x14, lVar6 == 0)) {
              local_88 = &local_res20;
              FUN_1425a9d40(param_1 + 0x1e,local_res18,&local_88,0);
              lVar6 = param_1[0x1e] + (longlong)local_res18[0] * 0x14;
            }
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + -1;
          }
          uStack_68 = uStack_68 & ~uStack_74;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
        } while (iStack_64 < (int)local_70[6]);
      }
      FUN_1425f0460(param_1,param_2);
      FUN_1425f0460(param_1 + 10,param_2);
      FUN_1425f0460(param_1 + 0x14,param_2);
    }
  }
  return;
}



// FUNCTION 1425f08b0 FUN_1425f08b0 body=438 status=ok
// SIG undefined FUN_1425f08b0(void)

undefined8 FUN_1425f08b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  if ((char)param_1[0xb] == '\0') {
    iVar2 = (int)param_1[8];
    lVar3 = (longlong)iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    iVar8 = 0;
    bVar9 = *(longlong *)param_1[7] != param_2;
    lVar5 = 0;
    iVar6 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar7 = iVar6 + 1;
      if (lVar5 < lVar3) {
        plVar4 = (longlong *)(param_1[7] + lVar5 * 8);
        do {
          if (bVar9 != (*plVar4 != param_2)) break;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar5 < lVar3);
      }
      if (bVar9 != false) {
        if (iVar8 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[7] + (longlong)iVar8 * 8),
                     (void *)(param_1[7] + (longlong)iVar6 * 8),(longlong)(iVar7 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < lVar3);
    *(int *)(param_1 + 8) = iVar8;
    iVar2 = iVar2 - iVar8;
  }
  else {
    FWeakObjectPtr::operator=(local_res8);
    iVar2 = (int)param_1[10];
    if (iVar2 == 0) {
      return 0;
    }
    iVar8 = 0;
    cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1[9],local_res8);
    bVar9 = cVar1 == '\0';
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        iVar7 = iVar7 + 1;
        if (iVar2 <= iVar7) break;
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (param_1[9] + (longlong)iVar7 * 8,local_res8);
      } while (bVar9 == (cVar1 == '\0'));
      if (bVar9 != false) {
        if (iVar8 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[9] + (longlong)iVar8 * 8),
                     (void *)(param_1[9] + (longlong)iVar6 * 8),(longlong)(iVar7 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar7;
    } while (iVar7 < iVar2);
    *(int *)(param_1 + 10) = iVar8;
    iVar2 = iVar2 - iVar8;
  }
  if (iVar2 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x12,param_2);
  return 1;
}



// FUNCTION 1425f0a70 FUN_1425f0a70 body=609 status=ok
// SIG undefined FUN_1425f0a70(void)

void FUN_1425f0a70(longlong param_1,longlong param_2)

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
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_28;
  longlong local_20;
  
  if (((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
      ((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')))) &&
     ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))) {
    lVar3 = *(longlong *)(param_2 + 0x710);
    plVar10 = (longlong *)0x0;
    *(undefined8 *)(param_2 + 0x710) = 0;
    if (lVar3 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
        local_28 = param_1;
        local_20 = lVar3;
        FUN_1425e1720(&local_28,2,local_res18);
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
      *plVar10 = (longlong)&PTR_FUN_145129e28;
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
      local_res20 = lVar3;
      FUN_1409421c0(plVar10,0,0xff,1,0,0);
      if (lVar3 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425f0ce0 FUN_1425f0ce0 body=53 status=ok
// SIG undefined FUN_1425f0ce0(void)

int FUN_1425f0ce0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14262e1d0();
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x11c) + iVar1;
  *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x11c) + iVar1 + 0x48;
  return iVar1 + 0x58;
}



// FUNCTION 1425f0d60 Reset body=60 status=ok
// SIG undefined Reset(void)

void FNetworkObjectList::Reset(longlong param_1)

{
  TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Empty
            (param_1,0);
  TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Empty
            (param_1 + 0x50,0);
  TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Empty
            (param_1 + 0xa0,0);
  TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xf0,0);
  return;
}



// FUNCTION 1425f0da0 FUN_1425f0da0 body=670 status=ok
// SIG undefined FUN_1425f0da0(void)

void FUN_1425f0da0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  
  TSet<TSharedPtr<FNetworkObjectInfo,0>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::Empty
            (param_1 + 0x14,0);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(param_1 + 10,param_1);
  iVar1 = (int)param_1[5];
  puStack_28 = (uint *)(param_1 + 2);
  uVar11 = 0;
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puStack_28;
    }
    uVar2 = *puVar9;
    uVar8 = uVar11;
    uVar10 = uVar11;
    while (uVar2 == 0) {
      iVar5 = (int)uVar10;
      uStack_50 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)uStack_50;
      local_68 = iVar5 + 1;
      uVar10 = (ulonglong)local_68;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1425f0e7d;
      uVar2 = puVar9[(longlong)iVar5 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_58._4_4_ = (uStack_50 - iVar5) + 0x1f;
    if (iVar1 < local_58._4_4_) {
LAB_1425f0e7d:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_20 = 0xffffffff;
  iStack_1c = local_58._4_4_;
  uStack_18 = uStack_50;
  uStack_14 = iStack_4c;
  uStack_30 = local_68;
  uStack_2c = uStack_64;
  iVar5 = local_58._4_4_;
  uStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  bVar4 = local_58._4_4_ < iVar1;
  local_58 = puStack_28;
  local_40 = param_1;
  local_38 = param_1;
  uStack_50 = 0xffffffff;
  iStack_4c = iVar5;
  if (bVar4) {
    do {
      lVar3 = *(longlong *)(*param_1 + (longlong)iStack_4c * 0x18);
      *(undefined4 *)(lVar3 + 0x38) = 0;
      if (*(int *)(lVar3 + 0x3c) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar3 + 0x30,0);
      }
      *(undefined4 *)(lVar3 + 0x60) = 0xffffffff;
      *(undefined4 *)(lVar3 + 100) = 0;
      *(undefined4 *)(lVar3 + 0x58) = 0;
      if (*(int *)(lVar3 + 0x5c) != 0) {
        *(undefined4 *)(lVar3 + 0x5c) = 0;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(lVar3 + 0x40,0);
      }
      if (0 < (int)*(uint *)(lVar3 + 0x78)) {
        uVar10 = (ulonglong)*(uint *)(lVar3 + 0x78);
        uVar8 = uVar11;
        do {
          uVar7 = (longlong)*(int *)(lVar3 + 0x78) - 1U & uVar8;
          lVar6 = *(longlong *)(lVar3 + 0x70);
          if (*(longlong *)(lVar3 + 0x70) == 0) {
            lVar6 = lVar3 + 0x68;
          }
          uVar8 = uVar8 + 1;
          *(undefined4 *)(lVar6 + uVar7 * 4) = 0xffffffff;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      *(undefined4 *)(lVar3 + 0x88) = 0;
      if (*(int *)(lVar3 + 0x8c) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar3 + 0x80,0);
      }
      *(undefined4 *)(lVar3 + 0xb0) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0xb4) = 0;
      *(undefined4 *)(lVar3 + 0xa8) = 0;
      if (*(int *)(lVar3 + 0xac) != 0) {
        *(undefined4 *)(lVar3 + 0xac) = 0;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(lVar3 + 0x90,0);
      }
      if (0 < (int)*(uint *)(lVar3 + 200)) {
        uVar10 = (ulonglong)*(uint *)(lVar3 + 200);
        uVar8 = uVar11;
        do {
          lVar6 = *(longlong *)(lVar3 + 0xc0);
          if (*(longlong *)(lVar3 + 0xc0) == 0) {
            lVar6 = lVar3 + 0xb8;
          }
          uVar7 = (longlong)*(int *)(lVar3 + 200) - 1U & uVar8;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(lVar6 + uVar7 * 4) = 0xffffffff;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  TSet<TTuple<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x1e,0);
  return;
}



// FUNCTION 1425f1040 FUN_1425f1040 body=130 status=ok
// SIG undefined FUN_1425f1040(void)

undefined8 FUN_1425f1040(longlong param_1,int param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x200) != 0) {
    cVar1 = FUN_14262e6f0();
    if (cVar1 != '\0') {
      param_2 = *(int *)(param_1 + 0x24c) * param_2;
      *(undefined4 *)(param_1 + 0x218) = 0;
      if (*(int *)(param_1 + 0x21c) < param_2) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0x210,param_2);
      }
      param_2 = *(int *)(param_1 + 0x218) + param_2;
      *(int *)(param_1 + 0x218) = param_2;
      if (*(int *)(param_1 + 0x21c) < param_2) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x210);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1425f10d0 FUN_1425f10d0 body=149 status=ok
// SIG undefined FUN_1425f10d0(void)

void FUN_1425f10d0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x20);
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
        *(void **)((longlong)param_1 + 0x20) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
  return;
}



// FUNCTION 1425f1170 FUN_1425f1170 body=607 status=ok
// SIG undefined FUN_1425f1170(void)

void FUN_1425f1170(longlong *param_1,longlong param_2,int *param_3,undefined8 *param_4,
                  longlong param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res8;
  longlong local_48;
  ulonglong local_40;
  wchar_t *local_38;
  int local_30;
  
  lVar11 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_3) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)((longlong)iVar2 * 0x40 + *param_1) == *param_3) break;
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + *param_1);
      } while (iVar2 != -1);
    }
  }
  local_res8 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res8,&local_38);
  if (*(int *)(param_4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_4;
  }
  pwVar4 = L"";
  if (local_30 != 0) {
    pwVar4 = local_38;
  }
  FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar4,puVar5);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  lVar8 = param_5;
  lVar9 = *(longlong *)(param_2 + 0x20);
  if (lVar9 != param_5) {
    if (lVar9 == 0) {
      lVar9 = lVar11;
      pwVar4 = L"NULL";
    }
    else {
      local_res8 = *(undefined8 *)(lVar9 + 0x18);
      lVar9 = 1;
      FName::ToString(&local_res8,&local_38);
      pwVar4 = L"";
      if (local_30 != 0) {
        pwVar4 = local_38;
      }
    }
    local_48 = 0;
    local_40 = 0;
    lVar6 = -1;
    lVar10 = lVar11;
    if ((pwVar4 != (wchar_t *)0x0) && (*pwVar4 != L'\0')) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (pwVar4[lVar8] != L'\0');
      uVar7 = (int)lVar8 + 1;
      local_40 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      lVar10 = local_48;
      FGenericPlatformString::Memcpy(local_48,pwVar4,(longlong)(int)uVar7 * 2);
      lVar8 = param_5;
    }
    if ((lVar9 != 0) && (local_38 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    bVar1 = false;
    if (lVar8 == 0) {
      pwVar4 = L"NULL";
    }
    else {
      param_5 = *(longlong *)(lVar8 + 0x18);
      bVar1 = true;
      FName::ToString(&param_5,&local_38);
      pwVar4 = L"";
      if (local_30 != 0) {
        pwVar4 = local_38;
      }
    }
    local_48 = 0;
    local_40 = 0;
    if ((pwVar4 != (wchar_t *)0x0) && (*pwVar4 != L'\0')) {
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar4[lVar6] != L'\0');
      uVar7 = (int)lVar6 + 1;
      local_40 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      lVar11 = local_48;
      FGenericPlatformString::Memcpy(local_48,pwVar4,(longlong)(int)uVar7 * 2);
    }
    if ((bVar1) && (local_38 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  UPackage::GetPrivateStaticClass();
  return;
}



// FUNCTION 1425f13d0 SavePackageMapExportAckStatus body=18 status=ok
// SIG undefined SavePackageMapExportAckStatus(void)

void UPackageMapClient::SavePackageMapExportAckStatus(longlong param_1,undefined8 param_2)

{
  FPackageMapAckState::operator=(param_2,param_1 + 0x1f8);
  return;
}



// FUNCTION 1425f13f0 FUN_1425f13f0 body=462 status=ok
// SIG undefined FUN_1425f13f0(void)

void FUN_1425f13f0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  longlong local_e8 [3];
  longlong *local_d0;
  byte local_af;
  longlong local_48;
  undefined4 local_38;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1416884c0(local_e8 + 2,0xc3,0);
    local_res8[0] = 0xbf800000;
    FBitWriter::WriteBit(local_e8 + 2,1);
    FBitWriter::WriteBit(local_e8 + 2,1);
    if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
      (**(code **)(local_e8[2] + 0x50))(local_e8 + 2,local_res8,4);
      if ((local_af & 0x10) != 0) {
        FArchive::ByteSwap(local_e8 + 2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(undefined4 *)*local_d0;
      *local_d0 = *local_d0 + 4;
    }
    FBitWriter::Serialize(local_e8 + 2,param_3,0x14);
    local_e8[1] = 0x12;
    local_e8[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    lVar1 = local_e8[0];
    FGenericPlatformString::Memcpy(local_e8[0],L"PostPacketHandler",0x24);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    FBitWriter::WriteBit(local_e8 + 2,1);
    plVar6 = *(longlong **)(param_1 + 0x28);
    lVar1 = plVar6[0x15];
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x240) = 1;
      plVar6 = *(longlong **)(param_1 + 0x28);
    }
    cVar4 = (**(code **)(*plVar6 + 0x390))();
    lVar3 = local_48;
    if (cVar4 != '\0') {
      lVar2 = **(longlong **)(param_1 + 0x28);
      uVar5 = FString::FString(local_e8,param_2);
      (**(code **)(lVar2 + 0x308))(*(undefined8 *)(param_1 + 0x28),uVar5,lVar3,local_38);
    }
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x240) = 0;
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_e8 + 2);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425f15c0 FUN_1425f15c0 body=510 status=ok
// SIG undefined FUN_1425f15c0(void)

void FUN_1425f15c0(longlong param_1,undefined1 param_2,undefined4 param_3,short *param_4)

{
  longlong *plVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  LARGE_INTEGER local_res8;
  undefined4 local_res18 [2];
  longlong local_e8 [3];
  longlong *local_d0;
  byte local_af;
  longlong local_48;
  ulonglong local_38;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x90), plVar1 != (longlong *)0x0)) {
    local_res18[0] = param_3;
    FUN_1416884c0(local_e8 + 2,0xc3,0);
    FBitWriter::WriteBit(local_e8 + 2,1);
    FBitWriter::WriteBit(local_e8 + 2,param_2);
    if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
      (**(code **)(local_e8[2] + 0x50))(local_e8 + 2,local_res18,4);
      if ((local_af & 0x10) != 0) {
        FArchive::ByteSwap(local_e8 + 2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(undefined4 *)*local_d0;
      *local_d0 = *local_d0 + 4;
    }
    FBitWriter::Serialize(local_e8 + 2,param_4,0x14);
    local_e8[1] = 0x12;
    local_e8[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    FGenericPlatformString::Memcpy(local_e8[0],L"PostPacketHandler",0x24);
    if (local_e8[0] != 0) {
      FMemory::Free(local_e8[0]);
    }
    FBitWriter::WriteBit(local_e8 + 2,1);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x240) = 1;
    cVar6 = (**(code **)(*(longlong *)plVar1[0xb] + 0x390))();
    if (cVar6 != '\0') {
      (**(code **)(*plVar1 + 0x2a0))
                (plVar1,local_48,(longlong)(local_38 + 7) >> 3,local_38 & 0xffffffff);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x240) = 0;
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *(undefined1 *)(param_1 + 0x80) = param_2;
    *(double *)(param_1 + 0x70) = dVar2 + 16777216.0;
    *(undefined4 *)(param_1 + 0x84) = local_res18[0];
    *(uint *)(param_1 + 0x68) = (int)*param_4 & 0x3fff;
    *(uint *)(param_1 + 0x6c) = (int)param_4[1] & 0x3fff;
    uVar3 = *(undefined4 *)(param_4 + 2);
    uVar4 = *(undefined4 *)(param_4 + 4);
    uVar5 = *(undefined4 *)(param_4 + 6);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)param_4;
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_4 + 8);
    if (local_48 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_e8 + 2);
  }
  return;
}



// FUNCTION 1425f17c0 FUN_1425f17c0 body=553 status=ok
// SIG undefined FUN_1425f17c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425f17c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined4 local_128 [2];
  longlong local_120 [3];
  longlong local_108;
  longlong *local_100;
  byte local_df;
  longlong local_78;
  undefined4 local_68;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1416884c0(&local_108,0xc3,0);
    local_128[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x170);
    uVar5 = FString::FString(local_120,param_2);
    local_138 = local_48;
    FUN_1425e3fc0(param_1,uVar5,*(undefined1 *)(param_1 + 0x50),local_128[0]);
    FBitWriter::WriteBit(&local_108,1);
    FBitWriter::WriteBit(&local_108,*(undefined1 *)(param_1 + 0x50));
    if ((undefined4 *)local_100[1] < (undefined4 *)*local_100 + 1) {
      (**(code **)(local_108 + 0x50))(&local_108,local_128,4);
      if ((local_df & 0x10) != 0) {
        FArchive::ByteSwap(&local_108,local_128,4);
      }
    }
    else {
      local_128[0] = *(undefined4 *)*local_100;
      *local_100 = *local_100 + 4;
    }
    FBitWriter::Serialize(&local_108,local_48,0x14);
    local_120[1] = 0x12;
    local_120[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_120,0);
    lVar1 = local_120[0];
    FGenericPlatformString::Memcpy(local_120[0],L"PostPacketHandler",0x24);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    FBitWriter::WriteBit(&local_108,1);
    plVar6 = *(longlong **)(param_1 + 0x28);
    lVar1 = plVar6[0x15];
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x240) = 1;
      plVar6 = *(longlong **)(param_1 + 0x28);
    }
    cVar4 = (**(code **)(*plVar6 + 0x390))();
    lVar3 = local_78;
    if (cVar4 != '\0') {
      lVar2 = **(longlong **)(param_1 + 0x28);
      uVar5 = FString::FString(local_120,param_2);
      (**(code **)(lVar2 + 0x308))(*(undefined8 *)(param_1 + 0x28),uVar5,lVar3,local_68);
    }
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x240) = 0;
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_108);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425f19f0 FUN_1425f19f0 body=878 status=ok
// SIG undefined FUN_1425f19f0(void)

void FUN_1425f19f0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  FUN_14262f3d0();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xdc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xdc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe0);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xe4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xe8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xec,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xec) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xed);
  puVar3 = (undefined4 *)(param_1 + 0xf0);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,puVar3,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,puVar3,4);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xf4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0xf8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf8,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0xf8,4);
  }
  return;
}



// FUNCTION 1425f1d60 FUN_1425f1d60 body=25 status=ok
// SIG undefined FUN_1425f1d60(void)

undefined8 FUN_1425f1d60(undefined8 param_1,undefined8 param_2)

{
  FUN_1425da060(param_2,param_1);
  return 1;
}



// FUNCTION 1425f1d80 FUN_1425f1d80 body=122 status=ok
// SIG undefined FUN_1425f1d80(void)

void FUN_1425f1d80(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 8);
  FUN_1419e0b60(param_2,param_1 + 0xc);
  FUN_1419e0b60(param_2,param_1 + 0x10);
  FUN_1419e0a40(param_2,param_1 + 0x1c);
  FUN_1419e0a40(param_2,param_1 + 0x22);
  FUN_1419e0b60(param_2,param_1 + 0x14);
  FUN_1419e0b60(param_2,param_1 + 0x18);
  FUN_1419e0a40(param_2,param_1 + 0x28);
  return;
}



// FUNCTION 1425f1e00 FUN_1425f1e00 body=1902 status=ok
// SIG undefined FUN_1425f1e00(void)

void FUN_1425f1e00(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int iVar9;
  char *pcVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  char cVar20;
  char local_res10 [8];
  char local_res20 [8];
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  uint local_128;
  longlong *local_120;
  longlong *local_118;
  uint local_110;
  uint uStack_10c;
  uint *puStack_108;
  undefined4 local_100;
  int iStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined2 local_b0;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong **local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x310) + 0x1b0,0);
    TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x310) + 0x200,0);
    TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x310) + 0x250,0);
    plVar16 = (longlong *)param_2[1];
    plVar13 = (longlong *)0x0;
    local_138 = 0;
    if ((int *)plVar16[1] < (int *)*plVar16 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_138,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_138,4);
      }
    }
    else {
      local_138 = *(int *)*plVar16;
      *plVar16 = *plVar16 + 4;
    }
    local_128 = 0;
    if (0 < local_138) {
      local_70 = &local_120;
      plVar16 = plVar13;
      do {
        plVar5 = (longlong *)operator_new(0x28);
        plVar11 = plVar13;
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = 0;
          plVar5[1] = 0;
          *(undefined4 *)(plVar5 + 2) = 0;
          plVar5[3] = 0;
          plVar5[4] = 0;
          plVar11 = plVar5;
        }
        local_120 = plVar11;
        plVar5 = (longlong *)operator_new(0x18);
        local_118 = plVar13;
        if (plVar5 != (longlong *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
          *plVar5 = (longlong)&PTR_DestroyObject_144fe7dc8;
          plVar5[2] = (longlong)plVar11;
          local_118 = plVar5;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_120,plVar11,plVar11);
        plVar11 = local_120;
        FUN_14158ce90(param_2,local_120);
        (**(code **)(*param_2 + 0x68))(param_2,plVar11 + 2);
        local_12c = (int)plVar11[4];
        (**(code **)(*param_2 + 0x68))(param_2,&local_12c);
        iVar9 = local_12c;
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          iVar4 = (int)plVar11[4];
          *(int *)(plVar11 + 4) = iVar4 + local_12c;
          if (*(int *)((longlong)plVar11 + 0x24) < iVar4 + local_12c) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar11 + 3,iVar4);
          }
          puVar8 = (undefined1 *)((longlong)iVar4 * 0x40 + plVar11[3]);
          if (iVar9 != 0) {
            puVar6 = (undefined8 *)(puVar8 + 0x20);
            do {
              *puVar8 = 0;
              puVar8 = puVar8 + 0x40;
              *(undefined8 *)((longlong)puVar6 + -0x1c) = 0;
              puVar6[-2] = 0;
              puVar6[-1] = 0;
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *(undefined1 *)(puVar6 + 3) = 0;
              puVar6 = puVar6 + 8;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        plVar5 = plVar13;
        plVar19 = plVar13;
        uVar17 = (uint)plVar16;
        if (0 < (int)plVar11[4]) {
          do {
            plVar16 = (longlong *)param_2[1];
            pcVar10 = (char *)(plVar11[3] + (longlong)plVar5);
            local_res20[0] = *pcVar10 != '\0';
            if ((char *)plVar16[1] < (char *)*plVar16 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,local_res20,1);
            }
            else {
              local_res20[0] = *(char *)*plVar16;
              *plVar16 = *plVar16 + 1;
            }
            if ((*(byte *)(param_2 + 5) & 1) == 0) {
              cVar20 = *pcVar10;
            }
            else {
              cVar20 = local_res20[0] == '\x01';
              *pcVar10 = cVar20;
            }
            if (cVar20 != '\0') {
              (**(code **)(*param_2 + 0x68))(param_2,pcVar10 + 4);
              puVar3 = *(undefined4 **)param_2[1];
              if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
                (**(code **)(*param_2 + 0x50))(param_2,pcVar10 + 8,4);
                if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_2,pcVar10 + 8,4);
                }
              }
              else {
                *(undefined4 *)(pcVar10 + 8) = *puVar3;
                *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
              }
              FUN_141726eb0(param_2,pcVar10 + 0x10);
            }
            uVar18 = (int)plVar19 + 1;
            plVar5 = plVar5 + 8;
            plVar19 = (longlong *)(ulonglong)uVar18;
            uVar17 = local_128;
          } while ((int)uVar18 < (int)plVar11[4]);
        }
        (**(code **)(*DAT_146b17150 + 0x400))
                  (DAT_146b17150,*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x58),local_120,1)
        ;
        local_98 = local_120;
        local_90 = local_120 + 2;
        FUN_1416874d0(*(longlong *)(param_1 + 0x310) + 0x200,local_a8,&local_98,0);
        local_80 = local_120;
        local_88 = local_120 + 2;
        FUN_14159e4e0(*(longlong *)(param_1 + 0x310) + 0x250,local_a4,&local_88,0);
        local_78 = local_120;
        FUN_1425d76f0(*(longlong *)(param_1 + 0x310) + 0x1b0,local_a0,&local_78,0);
        plVar16 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_118 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        local_128 = uVar17 + 1;
        plVar16 = (longlong *)(ulonglong)local_128;
      } while ((int)local_128 < local_138);
    }
  }
  else {
    if (param_3 != '\0') {
      FUN_1425e1950(param_1 + 0x330,0);
    }
    local_134 = *(int *)(*(longlong *)(param_1 + 0x310) + 0x1b8) -
                *(int *)(*(longlong *)(param_1 + 0x310) + 0x1e4);
    plVar16 = (longlong *)param_2[1];
    if ((int *)plVar16[1] < (int *)*plVar16 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_134,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_134,4);
      }
    }
    else {
      local_134 = *(int *)*plVar16;
      *plVar16 = *plVar16 + 4;
    }
    lVar2 = *(longlong *)(param_1 + 0x310);
    uVar12 = 0;
    local_e8 = (longlong *)(lVar2 + 0x1b0);
    uStack_10c = 1;
    iVar9 = *(int *)(lVar2 + 0x1d8);
    puStack_108 = (uint *)(lVar2 + 0x1c0);
    local_110 = 0;
    iStack_fc = 0;
    uStack_f8 = 0;
    if (iVar9 != 0) {
      puVar15 = *(uint **)(lVar2 + 0x1d0);
      if (*(uint **)(lVar2 + 0x1d0) == (uint *)0x0) {
        puVar15 = puStack_108;
      }
      uVar17 = *puVar15;
      uVar7 = uVar12;
      uVar14 = uVar12;
      while (uVar17 == 0) {
        iVar4 = (int)uVar7;
        uStack_f8 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_f8;
        local_110 = iVar4 + 1;
        uVar7 = (ulonglong)local_110;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1425f1f63;
        uVar17 = puVar15[(longlong)iVar4 + 1];
      }
      uStack_10c = -uVar17 & uVar17;
      iVar4 = 0x1f;
      if (uStack_10c != 0) {
        for (; uStack_10c >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_10c == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_fc = (uStack_f8 - iVar4) + 0x1f;
      if (iVar9 < iStack_fc) {
LAB_1425f1f63:
        iStack_fc = iVar9;
      }
    }
    local_100 = 0xffffffff;
    uStack_d0 = CONCAT44(iStack_fc,0xffffffff);
    auStack_50._8_4_ = uStack_f8;
    auStack_50._0_8_ = uStack_d0;
    auStack_50._12_4_ = uStack_f4;
    uStack_e0 = CONCAT44(uStack_10c,local_110);
    local_b0 = 0;
    local_40._0_4_ = SUB84(local_e8,0);
    local_40._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
    local_c8._8_4_ = (undefined4)local_40;
    local_c8._0_8_ = auStack_50._8_8_;
    local_c8._12_4_ = local_40._4_4_;
    iVar9 = iStack_fc;
    local_d8 = puStack_108;
    local_b8 = local_e8;
    local_68 = local_e8;
    uStack_60 = uStack_e0;
    puStack_58 = puStack_108;
    local_40 = local_e8;
    if (iStack_fc < *(int *)(lVar2 + 0x1d8)) {
      do {
        lVar2 = *(longlong *)(*local_e8 + 0x10 + (longlong)iVar9 * 0x28);
        FUN_14158ce90(param_2,lVar2);
        (**(code **)(*param_2 + 0x68))(param_2,lVar2 + 0x10);
        local_130 = *(int *)(lVar2 + 0x20);
        (**(code **)(*param_2 + 0x68))(param_2,&local_130);
        iVar9 = local_130;
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          iVar4 = *(int *)(lVar2 + 0x20);
          *(int *)(lVar2 + 0x20) = iVar4 + local_130;
          if (*(int *)(lVar2 + 0x24) < iVar4 + local_130) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(lVar2 + 0x18,iVar4);
          }
          puVar8 = (undefined1 *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar2 + 0x18));
          if (iVar9 != 0) {
            puVar6 = (undefined8 *)(puVar8 + 0x20);
            do {
              *puVar8 = 0;
              puVar8 = puVar8 + 0x40;
              *(undefined8 *)((longlong)puVar6 + -0x1c) = 0;
              puVar6[-2] = 0;
              puVar6[-1] = 0;
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *(undefined1 *)(puVar6 + 3) = 0;
              puVar6 = puVar6 + 8;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        uVar7 = uVar12;
        uVar14 = uVar12;
        if (0 < *(int *)(lVar2 + 0x20)) {
          do {
            plVar16 = (longlong *)param_2[1];
            pcVar10 = (char *)(*(longlong *)(lVar2 + 0x18) + uVar7);
            local_res10[0] = *pcVar10 != '\0';
            if ((char *)plVar16[1] < (char *)*plVar16 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
            }
            else {
              local_res10[0] = *(char *)*plVar16;
              *plVar16 = *plVar16 + 1;
            }
            if ((*(byte *)(param_2 + 5) & 1) == 0) {
              cVar20 = *pcVar10;
            }
            else {
              cVar20 = local_res10[0] == '\x01';
              *pcVar10 = cVar20;
            }
            if (cVar20 != '\0') {
              (**(code **)(*param_2 + 0x68))(param_2,pcVar10 + 4);
              puVar3 = *(undefined4 **)param_2[1];
              if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
                (**(code **)(*param_2 + 0x50))(param_2,pcVar10 + 8,4);
                if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_2,pcVar10 + 8,4);
                }
              }
              else {
                *(undefined4 *)(pcVar10 + 8) = *puVar3;
                *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
              }
              FUN_141726eb0(param_2,pcVar10 + 0x10);
            }
            uVar17 = (int)uVar14 + 1;
            uVar7 = uVar7 + 0x40;
            uVar14 = (ulonglong)uVar17;
          } while ((int)uVar17 < *(int *)(lVar2 + 0x20));
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
        iVar9 = uStack_d0._4_4_;
      } while (uStack_d0._4_4_ < (int)local_d8[6]);
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 1425f2570 FUN_1425f2570 body=3433 status=ok
// SIG undefined FUN_1425f2570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1425f2570(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint7 uVar18;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar19;
  byte bVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_208 [32];
  uint *local_1e8;
  byte local_1d8;
  char local_1d7;
  char local_1d6;
  char local_1d5;
  bool local_1d4;
  undefined1 local_1d3;
  char local_1d2 [10];
  undefined8 local_1c8;
  float fStack_1c0;
  float fStack_1bc;
  uint local_1b8 [4];
  undefined8 local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  int local_190 [2];
  longlong local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float fStack_16c;
  float local_168;
  undefined8 local_160;
  float local_158;
  undefined8 local_150;
  float local_148;
  longlong local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  undefined1 local_120 [8];
  longlong local_118;
  longlong local_100;
  undefined1 local_f8;
  ushort local_f6;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  bVar20 = 0;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    bVar20 = *(byte *)((longlong)param_2 + 0xdc) >> 1 & 1;
  }
  local_128 = *param_4;
  local_1b8[0] = 0;
  local_140 = param_3;
  uVar11 = FUN_1428dfc70();
  local_1e8 = local_1b8;
  uVar12 = (**(code **)(*param_1 + 0x280))(param_1,param_2,uVar11,&local_128);
  lVar19 = DAT_146aff5e0;
  if ((char)param_2[5] < '\0') goto LAB_1425f26f6;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar7 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
    lVar13 = 1;
  }
  else {
    lVar13 = 0;
  }
  iVar9 = *(int *)(lVar19 + lVar13 * 4);
  if ((iVar9 < 1) && (param_1[0x62] != 0)) {
    FUN_140ac3dd0(param_1[0x62] + 0xa8,local_190,local_1b8,0);
  }
  lVar19 = local_128;
  *(uint *)(param_3 + 0x70) = local_1b8[0];
  if (local_128 == 0) {
LAB_1425f26bd:
    lVar19 = 0;
  }
  else {
    lVar13 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1425f26bd;
  }
  *param_4 = lVar19;
  uVar11 = (**(code **)(*param_2 + 0xa0))(param_2);
  if ((char)uVar11 != '\0') {
    uVar18 = (uint7)((ulonglong)uVar11 >> 8);
    if ((local_1b8[0] == 0) || ((local_1b8[0] & 1) != 0)) {
      uVar12 = (ulonglong)uVar18 << 8;
    }
    else {
      uVar12 = CONCAT71(uVar18,1);
    }
    if ((char)uVar12 != '\0') {
      if (bVar20 == 0) {
        *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
      }
LAB_1425f26f6:
      return uVar12 & 0xffffffffffffff00;
    }
  }
  if ((0 < iVar9) && (param_1[0x62] != 0)) {
    FUN_140ac3dd0(param_1[0x62] + 0xa8,local_190,local_1b8,0);
  }
  if ((local_1b8[0] == 0) || ((local_1b8[0] & 1) != 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return 0;
    }
    if (*param_4 != 0) {
      return 0;
    }
    if (*(longlong *)(param_1[0x26] + 0x58) != 0) {
      FUN_1429244d0();
    }
    if (iVar9 < 1) {
      return 0;
    }
    if (param_1[0x62] == 0) {
      return 0;
    }
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
              (param_1[0x62] + 0xa8,local_1b8);
    return 0;
  }
  lVar19 = 0;
  local_188 = 0;
  local_130 = 0;
  local_1d8 = 0;
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    fVar31 = (float)local_1c8;
    fVar29 = (float)((ulonglong)local_1c8 >> 0x20);
    local_198 = fStack_1c0;
    lVar13 = lVar19;
    fVar30 = fStack_1c0;
    fVar32 = fVar29;
    fVar33 = fVar31;
    fVar21 = fStack_1c0;
  }
  else {
    plVar14 = (longlong *)FUN_14222e170(*param_4,&local_1a8);
    lVar13 = *plVar14;
    lVar19 = plVar14[1];
    if ((lVar13 == 0) || (lVar17 = lVar13, lVar19 == 0)) {
      lVar17 = FUN_14178ca30(*param_4);
    }
    local_188 = lVar17;
    local_130 = AActor::GetLevel(*param_4);
    plVar14 = (longlong *)*param_4;
    lVar17 = plVar14[0x2d];
    if (lVar17 == 0) {
      uVar11 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_17c = DAT_1468b5d94;
      fStack_1c0 = DAT_1468b5d98;
      fStack_1a0 = DAT_1468b5da8;
      puVar15 = &local_1a8;
      local_178 = DAT_1468b5d98;
      local_180 = DAT_1468b5d90;
      local_198 = DAT_1468b5d98;
      local_1c8 = uVar11;
      local_1a8 = CONCAT44(DAT_1468b5da0._4_4_,(float)DAT_1468b5da0);
      fVar31 = DAT_1468b5d90;
      fVar32 = DAT_1468b5d94;
      fVar21 = DAT_1468b5d98;
    }
    else {
      auVar23 = *(undefined1 (*) [16])(lVar17 + 0x220);
      fStack_1c0 = auVar23._8_4_;
      local_1c8 = auVar23._0_8_;
      local_160 = local_1c8;
      fStack_1a0 = fStack_1c0;
      local_198 = fStack_1c0;
      local_158 = fStack_1c0;
      puVar15 = (undefined8 *)FUN_142436c50(&local_1c8,&local_160,plVar14);
      plVar14 = (longlong *)*param_4;
      local_160 = *puVar15;
      local_158 = *(float *)(puVar15 + 1);
      local_17c = (float)((ulonglong)local_160 >> 0x20);
      local_178 = local_158;
      local_180 = (float)local_160;
      lVar1 = plVar14[0x2d];
      if (lVar1 == 0) {
        local_160 = CONCAT44(DAT_1468b5da0._4_4_,(float)DAT_1468b5da0);
        local_158 = DAT_1468b5da8;
      }
      else {
        fVar30 = *(float *)(lVar1 + 0x210);
        local_1c8 = *(undefined8 *)(lVar1 + 0x210);
        fStack_1c0 = *(float *)(lVar1 + 0x218);
        fStack_1bc = *(float *)(lVar1 + 0x21c);
        auVar22._4_4_ = -(uint)(*(float *)(lVar1 + 0x214) != *(float *)(lVar1 + 0x254));
        auVar22._0_4_ = -(uint)(fVar30 != *(float *)(lVar1 + 0x250));
        auVar22._8_4_ = -(uint)(fStack_1c0 != *(float *)(lVar1 + 600));
        auVar22._12_4_ = -(uint)(fStack_1bc != *(float *)(lVar1 + 0x25c));
        iVar9 = movmskps(local_158,auVar22);
        if (iVar9 != 0) {
          *(float *)(lVar1 + 0x250) = fVar30;
          *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
          *(float *)(lVar1 + 600) = fStack_1c0;
          *(float *)(lVar1 + 0x25c) = fStack_1bc;
          puVar15 = (undefined8 *)FQuat::Rotator(&local_1c8,&local_160);
          *(undefined8 *)(lVar1 + 0x260) = *puVar15;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar15 + 1);
          plVar14 = (longlong *)*param_4;
        }
        local_160 = *(undefined8 *)(lVar1 + 0x260);
        local_158 = *(float *)(lVar1 + 0x268);
      }
      uVar11 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fStack_1c0 = local_158;
      puVar15 = &local_1c8;
      local_1c8 = local_160;
      fVar31 = auVar23._0_4_;
      fVar32 = auVar23._4_4_;
      fVar21 = fStack_1a0;
    }
    local_150 = *puVar15;
    local_148 = *(float *)(puVar15 + 1);
    if (lVar17 == 0) {
      fStack_1a0 = DAT_1468b5d98;
      local_1a8 = uVar11;
    }
    else {
      lVar1 = plVar14[0x2d];
      if (lVar1 == 0) {
        local_1c8 = 0x3f8000003f800000;
        fStack_1c0 = 1.0;
      }
      else {
        local_1c8 = *(undefined8 *)(lVar1 + 0x230);
        fStack_1c0 = *(float *)(lVar1 + 0x238);
      }
      local_1a8 = local_1c8;
      fStack_1a0 = fStack_1c0;
    }
    fVar30 = fStack_1a0;
    fVar33 = (float)local_1a8;
    fVar29 = (float)((ulonglong)local_1a8 >> 0x20);
    local_1c8 = local_1a8;
    fStack_1c0 = fStack_1a0;
    if (lVar17 == 0) {
      local_1a8 = uVar11;
      puVar15 = &local_1a8;
      fStack_1a0 = DAT_1468b5d98;
    }
    else {
      puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x308))(plVar14,&local_1a8);
      plVar14 = (longlong *)*param_4;
    }
    local_1a8 = *puVar15;
    local_170 = (float)local_1a8;
    fStack_16c = (float)((ulonglong)local_1a8 >> 0x20);
    fStack_1a0 = *(float *)(puVar15 + 1);
    local_1d8 = *(byte *)(plVar14 + 0x7e) & 1;
    local_168 = fStack_1a0;
  }
  local_190[0] = 0;
  uVar11 = UObject::GetPrivateStaticClass();
  local_1e8 = (uint *)local_190;
  (**(code **)(*param_1 + 0x280))(param_1,param_2,uVar11,&local_188);
  if (lVar13 == 0) {
    lVar19 = 0;
  }
  local_1d2[0] = lVar19 != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_1d2,1);
  lVar19 = local_188;
  if ((local_1d2[0] != '\0') && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    if (local_188 != 0) {
      uVar11 = FUN_1428e63f0();
      plVar14 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar19,uVar11);
      if (plVar14 != (longlong *)0x0) {
        local_188 = (**(code **)(*plVar14 + 0x10))();
        fVar21 = local_198;
        goto LAB_1425f2b8e;
      }
    }
    local_188 = 0;
    fVar21 = local_198;
  }
LAB_1425f2b8e:
  if (((*(byte *)(param_2 + 5) & 2) != 0) ||
     ((uVar12 = param_1[0x26], uVar12 != 0 && (4 < *(uint *)(uVar12 + 0x15e8))))) {
    uVar11 = FUN_1429a0270();
    local_1e8 = (uint *)0x0;
    uVar12 = (**(code **)(*param_1 + 0x280))(param_1,param_2,uVar11,&local_130);
  }
  if ((local_190[0] != 0) && (local_188 == 0)) {
    plVar14 = (longlong *)param_1[0x62];
    uVar10 = (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34);
    uVar12 = (ulonglong)uVar10;
    if (uVar10 != 0) {
      plVar16 = (longlong *)plVar14[8];
      if ((longlong *)plVar14[8] == (longlong *)0x0) {
        plVar16 = plVar14 + 7;
      }
      uVar10 = *(uint *)((longlong)plVar16 +
                        ((longlong)(int)plVar14[9] - 1U & (longlong)local_190[0]) * 4);
      uVar12 = (ulonglong)uVar10;
      if (uVar10 != 0xffffffff) {
        do {
          lVar19 = (longlong)(int)uVar12 * 0x40;
          if (*(int *)(lVar19 + *plVar14) == local_190[0]) break;
          uVar10 = *(uint *)(lVar19 + 0x38 + *plVar14);
          uVar12 = (ulonglong)uVar10;
        } while (uVar10 != 0xffffffff);
      }
    }
  }
  local_1d5 = '\0';
  local_1d4 = false;
  local_1d6 = '\0';
  local_1d7 = '\0';
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    if (((0.001 < ABS(local_180 - DAT_1468b5d90)) || (0.001 < ABS(local_17c - DAT_1468b5d94))) ||
       (0.001 < ABS(local_178 - DAT_1468b5d98))) {
      iVar9 = (int)CONCAT71((int7)(uVar12 >> 8),1);
    }
    else {
      iVar9 = (int)(uVar12 >> 8) << 8;
    }
    fVar2 = (float)DAT_146b04860;
    fVar3 = DAT_146b04860._4_4_;
    fVar4 = DAT_146b04860._8_4_;
    fVar5 = DAT_146b04860._12_4_;
    local_198 = 0.001;
    local_1d5 = (char)iVar9;
    auVar23._4_4_ = local_150._4_4_ - DAT_1468b5da0._4_4_;
    auVar23._0_4_ = (float)local_150 - (float)DAT_1468b5da0;
    auVar23._8_4_ = local_148 - DAT_1468b5da8;
    auVar23._12_4_ = 0;
    auVar23 = divps(auVar23,_DAT_146b04860);
    fVar25 = ((float)local_150 - (float)DAT_1468b5da0) - fVar2 * (float)(int)auVar23._0_4_;
    fVar26 = (local_150._4_4_ - DAT_1468b5da0._4_4_) - fVar3 * (float)(int)auVar23._4_4_;
    fVar27 = (local_148 - DAT_1468b5da8) - fVar4 * (float)(int)auVar23._8_4_;
    fVar28 = 0.0 - fVar5 * (float)(int)auVar23._12_4_;
    fVar25 = (float)(((uint)(fVar2 + fVar25) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25) ^
                    (uint)(fVar2 + fVar25));
    fVar26 = (float)(((uint)(fVar3 + fVar26) ^ (uint)fVar26) & -(uint)(0.0 <= fVar26) ^
                    (uint)(fVar3 + fVar26));
    fVar27 = (float)(((uint)(fVar4 + fVar27) ^ (uint)fVar27) & -(uint)(0.0 <= fVar27) ^
                    (uint)(fVar4 + fVar27));
    fVar28 = (float)(((uint)(fVar5 + fVar28) ^ (uint)fVar28) & -(uint)(0.0 <= fVar28) ^
                    (uint)(fVar5 + fVar28));
    auVar24._4_4_ =
         -(uint)(0.001 < (float)(uRam0000000146b04844 &
                                (((uint)(fVar26 - fVar3) ^ (uint)fVar26) &
                                 -(uint)(fRam0000000146b04854 < fVar26) ^ (uint)fVar26)));
    auVar24._0_4_ =
         -(uint)(0.001 < (float)(_DAT_146b04840 &
                                (((uint)(fVar25 - fVar2) ^ (uint)fVar25) &
                                 -(uint)(_DAT_146b04850 < fVar25) ^ (uint)fVar25)));
    auVar24._8_4_ =
         -(uint)(0.001 < (float)(uRam0000000146b04848 &
                                (((uint)(fVar27 - fVar4) ^ (uint)fVar27) &
                                 -(uint)(fRam0000000146b04858 < fVar27) ^ (uint)fVar27)));
    auVar24._12_4_ =
         -(uint)(0.001 < (float)(uRam0000000146b0484c &
                                (((uint)(fVar28 - fVar5) ^ (uint)fVar28) &
                                 -(uint)(fRam0000000146b0485c < fVar28) ^ (uint)fVar28)));
    iVar9 = movmskps(iVar9,auVar24);
    local_1d4 = iVar9 != 0;
    if (((0.001 < ABS(fVar33 - 1.0)) || (0.001 < ABS(fVar29 - 1.0))) || (0.001 < ABS(fVar30 - 1.0)))
    {
      local_1d6 = '\x01';
    }
    else {
      local_1d6 = '\0';
    }
    if (((0.001 < ABS(local_170 - DAT_1468b5d90)) || (0.001 < ABS(fStack_16c - DAT_1468b5d94))) ||
       (0.001 < ABS(local_168 - DAT_1468b5d98))) {
      local_1d7 = '\x01';
    }
    else {
      local_1d7 = '\0';
    }
  }
  (**(code **)(*param_2 + 0x58))(param_2,&local_1d5,1);
  if (local_1d5 == '\0') {
    local_180 = DAT_1468b5d90;
    local_178 = DAT_1468b5d98;
    local_17c = DAT_1468b5d94;
  }
  else {
    FUN_1425ecc70(&local_180,param_2,param_1,&local_1d3);
  }
  (**(code **)(*param_2 + 0x58))(param_2,&local_1d4,1);
  if (local_1d4 == false) {
    local_150 = CONCAT44(DAT_1468b5da0._4_4_,(float)DAT_1468b5da0);
    local_148 = DAT_1468b5da8;
  }
  else {
    FUN_141630f90(&local_150,param_2,param_1,&local_1d3);
  }
  (**(code **)(*param_2 + 0x58))(param_2,&local_1d6,1);
  if (local_1d6 == '\0') {
    local_1c8 = 0x3f8000003f800000;
    fStack_1c0 = 1.0;
  }
  else {
    FUN_1425ecc70(&local_1c8,param_2,param_1,&local_1d3);
  }
  (**(code **)(*param_2 + 0x58))(param_2,&local_1d7,1);
  if (local_1d7 == '\0') {
    local_170 = DAT_1468b5d90;
    local_168 = DAT_1468b5d98;
    fStack_16c = DAT_1468b5d94;
  }
  else {
    FUN_1425ecc70(&local_170,param_2,param_1,&local_1d3);
  }
  (**(code **)(*param_2 + 0x58))(param_2,&local_1d8,1);
  if (((((*(byte *)(param_2 + 5) & 2) != 0) && (lVar19 = FUN_14048b700(local_140), lVar19 != 0)) &&
      (plVar14 = *(longlong **)(lVar19 + 0x2c0), plVar14 != (longlong *)0x0)) &&
     (((int)plVar14[1] != 0 && (lVar19 = *plVar14, lVar19 != 0)))) {
    *(ulonglong *)(lVar19 + 0xb0) = CONCAT44(fVar32,fVar31);
    *(float *)(lVar19 + 0xb8) = fVar21;
    *(undefined8 *)(lVar19 + 0xbc) = local_150;
    *(float *)(lVar19 + 0xc4) = local_148;
    *(ulonglong *)(lVar19 + 0x98) = CONCAT44(fStack_16c,local_170);
    *(float *)(lVar19 + 0xa0) = local_168;
    *(byte *)(lVar19 + 0x3f0) =
         *(byte *)(lVar19 + 0x3f0) ^ (*(byte *)(lVar19 + 0x3f0) ^ local_1d8) & 1;
  }
  lVar19 = local_130;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return 0;
  }
  if (*param_4 != 0) {
    return 0;
  }
  if (local_188 == 0) {
    return 0;
  }
  if (local_130 == 0) {
LAB_1425f307e:
    lVar19 = 0;
  }
  else {
    lVar13 = FUN_1429a0270();
    if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1425f307e;
    lVar13 = ULevel::GetWorld(lVar19);
    if (lVar13 == 0) {
      return 0;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_120);
  local_118 = local_188;
  if (local_188 != 0) {
    lVar17 = FUN_1428dfc70();
    lVar13 = *(longlong *)(local_118 + 0x10);
    if ((*(int *)(lVar13 + 0x90) < *(int *)(lVar17 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
        lVar17 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1425f30d1;
  }
  local_118 = 0;
LAB_1425f30d1:
  local_f8 = 1;
  local_f6 = (ushort)(local_1d8 & 1) << 2 | local_f6 & 0xfffb | 3;
  lVar13 = *(longlong *)(*(longlong *)(param_1[0x26] + 0x58) + 0xd0);
  local_100 = lVar19;
  FRepMovement::RebaseOntoLocalOrigin(&local_140,&local_180,lVar13 + 0x7bc);
  FRotator::Quaternion(&local_150,&local_1a8);
  uStack_e0 = CONCAT44(uStack_19c,fStack_1a0);
  local_e8 = local_1a8;
  local_d8._8_4_ = local_138;
  local_d8._0_8_ = local_140;
  local_d8._12_4_ = 0;
  local_c8._4_4_ = DAT_1464aa788._4_4_;
  local_c8._0_4_ = (undefined4)DAT_1464aa788;
  local_c8._8_4_ = DAT_1464aa790;
  local_c8._12_4_ = 0;
  plVar14 = (longlong *)FUN_1425518b0(lVar13,*(undefined8 *)(local_188 + 0x10),&local_e8,local_120);
  *param_4 = (longlong)plVar14;
  if (plVar14 == (longlong *)0x0) {
    return 0;
  }
  if (local_1d8 != 0) {
    (**(code **)(*plVar14 + 0x6b0))(plVar14);
    FRotator::Quaternion(&local_150,&local_1a8);
    uStack_e0 = CONCAT44(uStack_19c,fStack_1a0);
    local_e8 = local_1a8;
    local_d8._8_4_ = local_138;
    local_d8._0_8_ = local_140;
    local_d8._12_4_ = 0;
    local_c8._4_4_ = DAT_1464aa788._4_4_;
    local_c8._0_4_ = (undefined4)DAT_1464aa788;
    local_c8._8_4_ = DAT_1464aa790;
    local_c8._12_4_ = 0;
    FUN_14222b9f0(*param_4,&local_e8,0,0);
    plVar14 = (longlong *)*param_4;
  }
  if (local_1d7 != '\0') {
    (**(code **)(*plVar14 + 0x438))(plVar14,&local_170);
    plVar14 = (longlong *)*param_4;
  }
  if (local_1d6 != '\0') {
    local_1a8 = local_1c8;
    fStack_1a0 = fStack_1c0;
    AActor::SetActorScale3D(plVar14,&local_1a8);
    plVar14 = (longlong *)*param_4;
  }
  FUN_1425efea0(param_1[0x62],local_1b8,plVar14);
  return 1;
}



// FUNCTION 1425f32e0 FUN_1425f32e0 body=727 status=ok
// SIG undefined FUN_1425f32e0(void)

undefined8
FUN_1425f32e0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  int local_res10 [2];
  ulonglong in_stack_ffffffffffffffc8;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((*(byte *)(param_2 + 0x28) & 2) != 0) {
    lVar2 = *param_4;
    lVar8 = 0;
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar9 = iVar1 >> 0x1f & 0xffff;
        uVar5 = iVar1 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) {
        local_28 = 0;
        uVar6 = (**(code **)(*param_1 + 0x280))(param_1,param_2,param_3,&local_28,param_5);
        return uVar6;
      }
    }
    FUN_1425e6a00(param_1[0x62],local_res10,lVar2,0);
    if (param_5 != (int *)0x0) {
      *param_5 = local_res10[0];
    }
    local_28 = 0;
    local_20 = 0;
    FUN_1425e9660(param_1,param_2,local_res10[0],*param_4,&local_28,0);
    if (local_res10[0] == 1) {
      return 1;
    }
    if (param_1[0x26] == 0) {
      return 1;
    }
    lVar8 = param_1[0x60];
    if (lVar8 != 0) {
      piVar10 = *(int **)(lVar8 + 0xf0);
      piVar7 = piVar10 + *(int *)(lVar8 + 0xf8);
      for (; piVar10 != piVar7; piVar10 = piVar10 + 1) {
        if (*piVar10 == local_res10[0]) {
          return 1;
        }
      }
    }
    if (local_res10[0] == 0) {
      return 1;
    }
    cVar3 = (**(code **)(*(longlong *)*param_4 + 0x1b8))((longlong *)*param_4);
    if (cVar3 == '\0') {
      return 1;
    }
    if ((local_res10[0] != 1) && (cVar3 = FUN_1425ec5e0(param_1), cVar3 != '\0')) {
      return 1;
    }
    local_28 = 0;
    local_20 = 0;
    FUN_1425e2910(param_1,local_res10[0],*param_4,&local_28,0);
    return 1;
  }
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    return 1;
  }
  piVar7 = (int *)FUN_1425e9030(param_1,local_res10,param_2,param_4,
                                in_stack_ffffffffffffffc8 & 0xffffffff00000000);
  iVar1 = *piVar7;
  if (param_5 != (int *)0x0) {
    *param_5 = iVar1;
  }
  lVar8 = *param_4;
  local_res10[0] = iVar1;
  if ((((lVar8 == 0) || (param_1[0x26] == 0)) ||
      (lVar2 = *(longlong *)(param_1[0x26] + 0x58), lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 0xd0) == 0)) {
LAB_1425f350f:
    lVar8 = *param_4;
    if (lVar8 != 0) {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(param_3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(param_3 + 0x90) * 8) != param_3 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1425f3545;
    }
  }
  else {
    uVar6 = FUN_1429a0270();
    lVar8 = UObjectBaseUtility::GetTypedOuter(lVar8,uVar6);
    if (((lVar8 == 0) ||
        (lVar8 == *(longlong *)(*(longlong *)(*(longlong *)(param_1[0x26] + 0x58) + 0xd0) + 0x30)))
       || ((*(byte *)(lVar8 + 0x204) & 0x10) != 0)) goto LAB_1425f350f;
LAB_1425f3545:
    lVar8 = 0;
    *param_4 = 0;
  }
  if (((iVar1 != 0) && (*(char *)((longlong)param_1 + 0x29) != '\0')) &&
     (cVar3 = FNetGUIDCache::IsGUIDBroken(param_1[0x62],local_res10,0), cVar3 == '\0')) {
    if (lVar8 == 0) {
      param_1 = param_1 + 6;
    }
    else {
      if ((~(byte)iVar1 & 1) == 0) goto LAB_1425f359a;
      param_1 = param_1 + 0x10;
    }
    FUN_140ac3dd0(param_1,&local_28,local_res10,0);
  }
LAB_1425f359a:
  if ((*param_4 == 0) && (iVar1 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1425f35c0 FUN_1425f35c0 body=17 status=ok
// SIG undefined FUN_1425f35c0(void)

void FUN_1425f35c0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    return;
  }
  lVar4 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(lVar5 + 0x728)) {
      plVar3 = *(longlong **)(lVar5 + 0x720);
      do {
        if ((*plVar3 == param_2) && ((char)plVar3[1] == '\x06')) {
          plVar3[6] = param_3;
          return;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 0x12;
      } while (lVar4 < *(int *)(lVar5 + 0x728));
    }
    plVar3 = (longlong *)(lVar5 + 0x720);
    iVar1 = *(int *)(lVar5 + 0x728);
    iVar2 = iVar1 + 1;
    *(int *)(lVar5 + 0x728) = iVar2;
    if (*(int *)(lVar5 + 0x72c) < iVar2) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    lVar5 = (longlong)iVar1 * 0x90;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar5),0,0x90);
    *(longlong *)(lVar5 + *plVar3) = param_2;
    *(undefined1 *)(lVar5 + 8 + *plVar3) = 6;
    *(longlong *)(lVar5 + 0x30 + *plVar3) = param_3;
  }
  return;
}



// FUNCTION 1425f35e0 SetAsyncLoadMode body=7 status=ok
// SIG undefined SetAsyncLoadMode(void)

void FNetGUIDCache::SetAsyncLoadMode(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return;
}



// FUNCTION 1425f35f0 FUN_1425f35f0 body=822 status=ok
// SIG undefined FUN_1425f35f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425f35f0(longlong param_1,longlong *param_2,longlong *param_3,float param_4,
                  longlong param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  
  if (0.0 < *(float *)(param_5 + 8) || *(float *)(param_5 + 8) == 0.0) {
    if (0.0 <= param_4) {
      fVar26 = param_4;
      if (*(float *)(param_5 + 4) <= param_4) {
        fVar26 = *(float *)(param_5 + 4);
      }
    }
    else {
      fVar26 = 0.0;
    }
  }
  else {
    fVar26 = *(float *)(param_5 + 4);
    if ((fVar26 <= param_4) && (fVar26 = param_4, 1.0 <= param_4)) {
      fVar26 = 1.0;
    }
  }
  iVar6 = (int)param_3[0x25] + -1;
  fVar26 = (float)iVar6 * fVar26;
  iVar13 = (int)fVar26;
  iVar14 = (int)ROUND((fVar26 + fVar26) - 0.5) >> 1;
  fVar15 = fVar26;
  if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar26)) {
    auVar17._4_4_ = fVar26;
    auVar17._0_4_ = fVar26;
    auVar17._8_8_ = 0;
    uVar7 = movmskps(iVar6,auVar17);
    fVar15 = (float)(int)(iVar13 - (uVar7 & 1));
  }
  fVar26 = fVar26 - fVar15;
  lVar8 = (**(code **)(*param_3 + 0x108))(param_3,iVar14);
  if (lVar8 != 0) {
    local_90 = *(float *)(lVar8 + 0x18);
    local_98 = *(undefined8 *)(lVar8 + 0x10);
    lVar9 = (**(code **)(*param_3 + 0x108))(param_3,iVar14 + 1);
    if (lVar9 == 0) {
      puVar10 = &local_98;
    }
    else {
      puVar10 = (undefined8 *)(lVar9 + 0x10);
    }
    local_88 = *puVar10;
    local_80 = (*(float *)(puVar10 + 1) - local_90) * fVar26 + local_90;
    uVar11 = CONCAT44(((float)((ulonglong)local_88 >> 0x20) - local_98._4_4_) * fVar26 +
                      local_98._4_4_,((float)local_88 - (float)local_98) * fVar26 + (float)local_98)
    ;
    *(undefined8 *)(param_6 + 0x10) = uVar11;
    *(undefined8 *)(param_6 + 0x20) = uVar11;
    *(float *)(param_6 + 0x18) = local_80;
    *(float *)(param_6 + 0x28) = local_80;
    if ((*(byte *)(param_1 + 0xe8) & 4) != 0) {
      iVar6 = (**(code **)(*param_2 + 0x150))(param_2);
      if ((0 < iVar6) && (cVar5 = (**(code **)(*param_2 + 0x158))(param_2), cVar5 != '\0')) {
        lVar4 = param_3[6];
        uVar11 = FVector::Rotation((longlong)(int)lVar4 + 0x28 + lVar8,&local_88);
        puVar10 = (undefined8 *)FRotator::Quaternion(uVar11,&local_68);
        local_58 = *puVar10;
        uStack_50 = puVar10[1];
        if (lVar9 == 0) {
          uVar11 = FVector::Rotation((longlong)(int)lVar4 + 0x28 + lVar8,&local_88);
        }
        else {
          uVar11 = FVector::Rotation((longlong)(int)param_3[6] + 0x28 + lVar9,&local_88);
          puVar10 = (undefined8 *)FRotator::Quaternion(uVar11,&local_78);
          local_68 = *puVar10;
          uStack_60 = puVar10[1];
          pfVar12 = (float *)FQuat::Slerp_NotNormalized(local_48,&local_58,&local_68,fVar26);
          fVar26 = *pfVar12;
          fVar15 = pfVar12[1];
          fVar1 = pfVar12[2];
          fVar2 = pfVar12[3];
          auVar16._0_4_ = fVar26 * fVar26 + fVar1 * fVar1;
          auVar16._4_4_ = fVar15 * fVar15 + fVar2 * fVar2;
          auVar16._8_4_ = fVar1 * fVar1 + fVar26 * fVar26;
          auVar16._12_4_ = fVar2 * fVar2 + fVar15 * fVar15;
          fVar22 = auVar16._4_4_ + auVar16._0_4_;
          fVar23 = auVar16._8_4_ + auVar16._4_4_;
          fVar24 = auVar16._12_4_ + auVar16._8_4_;
          fVar25 = auVar16._0_4_ + auVar16._12_4_;
          auVar3._4_4_ = fVar23;
          auVar3._0_4_ = fVar22;
          auVar3._8_4_ = fVar24;
          auVar3._12_4_ = fVar25;
          auVar17 = rsqrtps(auVar16,auVar3);
          fVar18 = auVar17._0_4_;
          fVar19 = auVar17._4_4_;
          fVar20 = auVar17._8_4_;
          fVar21 = auVar17._12_4_;
          fVar18 = (_DAT_146b04a20 - fVar18 * fVar18 * fVar22 * _DAT_146b04a20) * fVar18 + fVar18;
          fVar19 = (fRam0000000146b04a24 - fVar19 * fVar19 * fVar23 * fRam0000000146b04a24) * fVar19
                   + fVar19;
          fVar20 = (fRam0000000146b04a28 - fVar20 * fVar20 * fVar24 * fRam0000000146b04a28) * fVar20
                   + fVar20;
          fVar21 = (fRam0000000146b04a2c - fVar21 * fVar21 * fVar25 * fRam0000000146b04a2c) * fVar21
                   + fVar21;
          local_78 = ((uint)(((_DAT_146b04a20 - fVar18 * fVar18 * fVar22 * _DAT_146b04a20) * fVar18
                             + fVar18) * fVar26) ^ _DAT_146b04a10) & -(uint)(1e-08 <= fVar22) ^
                     _DAT_146b04a10;
          uStack_74 = ((uint)(((fRam0000000146b04a24 -
                               fVar19 * fVar19 * fVar23 * fRam0000000146b04a24) * fVar19 + fVar19) *
                             fVar15) ^ uRam0000000146b04a14) & -(uint)(1e-08 <= fVar23) ^
                      uRam0000000146b04a14;
          uStack_70 = ((uint)(((fRam0000000146b04a28 -
                               fVar20 * fVar20 * fVar24 * fRam0000000146b04a28) * fVar20 + fVar20) *
                             fVar1) ^ uRam0000000146b04a18) & -(uint)(1e-08 <= fVar24) ^
                      uRam0000000146b04a18;
          uStack_6c = ((uint)(((fRam0000000146b04a2c -
                               fVar21 * fVar21 * fVar25 * fRam0000000146b04a2c) * fVar21 + fVar21) *
                             fVar2) ^ uRam0000000146b04a1c) & -(uint)(1e-08 <= fVar25) ^
                      uRam0000000146b04a1c;
          uVar11 = FQuat::Rotator(&local_78,&local_88);
        }
        puVar10 = (undefined8 *)FRotator::Euler(uVar11,&local_98);
        *(undefined8 *)(param_6 + iVar6 + 0x18) = *puVar10;
        *(undefined4 *)(param_6 + iVar6 + 0x20) = *(undefined4 *)(puVar10 + 1);
      }
    }
  }
  return;
}



// FUNCTION 1425f3930 FUN_1425f3930 body=40 status=ok
// SIG undefined FUN_1425f3930(void)

void FUN_1425f3930(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    FUN_14260ee50(*(longlong *)(param_1 + 0x458),param_2,&local_18);
  }
  return;
}



// FUNCTION 1425f3960 FUN_1425f3960 body=261 status=ok
// SIG undefined FUN_1425f3960(void)

void FUN_1425f3960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  *(longlong *)(param_1 + 0x28) = param_2;
  if ((*(int *)(*(longlong *)(param_1 + 8) + 0x10) == 1) &&
     (plVar3 = *(longlong **)(param_2 + 0xb8), plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      while( true ) {
        LOCK();
        bVar8 = iVar7 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_2 + 0xb0);
        LOCK();
        plVar1 = plVar3 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        if (lVar4 != 0) {
          if (lVar4 == param_1) {
            FUN_1425f8790(param_1);
            return;
          }
          FString::operator=(param_1 + 0x58,lVar4 + 0x58);
          uVar5 = *(undefined8 *)(lVar4 + 0x90);
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar4 + 0x88);
          *(undefined8 *)(param_1 + 0x90) = uVar5;
          *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar4 + 0x98);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425f3a70 FUN_1425f3a70 body=17 status=ok
// SIG undefined FUN_1425f3a70(void)

void FUN_1425f3a70(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    return;
  }
  lVar4 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(lVar5 + 0x728)) {
      plVar3 = *(longlong **)(lVar5 + 0x720);
      do {
        if ((*plVar3 == param_2) && ((char)plVar3[1] == '\x01')) {
          *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
          return;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 0x12;
      } while (lVar4 < *(int *)(lVar5 + 0x728));
    }
    plVar3 = (longlong *)(lVar5 + 0x720);
    iVar1 = *(int *)(lVar5 + 0x728);
    iVar2 = iVar1 + 1;
    *(int *)(lVar5 + 0x728) = iVar2;
    if (*(int *)(lVar5 + 0x72c) < iVar2) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    lVar5 = (longlong)iVar1 * 0x90;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar5),0,0x90);
    *(longlong *)(lVar5 + *plVar3) = param_2;
    *(undefined1 *)(lVar5 + 8 + *plVar3) = 1;
    *(undefined4 *)(lVar5 + 0xc + *plVar3) = param_3;
  }
  return;
}



// FUNCTION 1425f3ad0 SetHasQueuedBunches body=46 status=ok
// SIG undefined SetHasQueuedBunches(void)

void UPackageMapClient::SetHasQueuedBunches(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 local_res18 [16];
  
  if (param_3 != '\0') {
    FUN_140ac3dd0(param_1 + 0x198,local_res18,param_2,0);
    return;
  }
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove(param_1 + 0x198);
  return;
}



// FUNCTION 1425f3b00 FUN_1425f3b00 body=17 status=ok
// SIG undefined FUN_1425f3b00(void)

void FUN_1425f3b00(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x458);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (param_2 != 0) {
    iVar2 = (**(code **)(*plVar1 + 0x9b0))();
    if (iVar2 != -1) {
      FUN_14260f8a0(plVar1,iVar2,param_3);
    }
  }
  return;
}



// FUNCTION 1425f3b20 FUN_1425f3b20 body=768 status=ok
// SIG undefined FUN_1425f3b20(void)

void FUN_1425f3b20(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  uVar4 = *(undefined8 *)(param_4 + 0x7f8);
  if (*(short *)(param_1 + 10) != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
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
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x800);
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc);
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
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x808);
  if (*(short *)(param_1 + 0x12) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10);
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
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x810);
  if (*(short *)(param_1 + 0x16) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x14);
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
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x818);
  if (*(short *)(param_1 + 0x1a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x18);
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
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  FUN_1404986d0(param_2,uVar3,param_1 + 0x1c,param_4 + 0x680,0);
  FUN_1404986d0(param_2,uVar3,param_1 + 0x22,param_4 + 0x684,0);
  local_res8[0] = (uint)*(byte *)(param_4 + 0x7c0);
  FUN_1404986d0(param_2,uVar3,param_1 + 0x28,local_res8,0);
  return;
}



// FUNCTION 1425f3e20 SetNetworkChecksumMode body=7 status=ok
// SIG undefined SetNetworkChecksumMode(void)

void FNetGUIDCache::SetNetworkChecksumMode(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  return;
}



// FUNCTION 1425f3e30 FUN_1425f3e30 body=148 status=ok
// SIG undefined FUN_1425f3e30(void)

void FUN_1425f3e30(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1[1];
  iVar4 = (int)param_2;
  if (iVar1 < iVar4) {
    iVar5 = iVar4 - iVar1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                ();
    }
    puVar3 = (undefined1 *)((longlong)iVar1 * 0x40 + *param_1);
    if (iVar5 != 0) {
      puVar2 = (undefined8 *)(puVar3 + 0x20);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 0x40;
        *(undefined8 *)((longlong)puVar2 + -0x1c) = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 0;
        puVar2 = puVar2 + 8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (iVar4 < iVar1) {
    TArray<FNetFieldExport,FDefaultAllocator>::RemoveAtImpl(param_1,param_2,iVar1 - iVar4,param_3);
    return;
  }
  return;
}



// FUNCTION 1425f3ed0 FUN_1425f3ed0 body=63 status=ok
// SIG undefined FUN_1425f3ed0(void)

void FUN_1425f3ed0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_14260f940();
    if ((*(byte *)(param_1 + 0x460) & 2) != 0) {
      UActorComponent::SetTickGroup(*(undefined8 *)(param_1 + 0x458),5);
      return;
    }
  }
  return;
}



// FUNCTION 1425f3f10 FUN_1425f3f10 body=50 status=ok
// SIG undefined FUN_1425f3f10(void)

void FUN_1425f3f10(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    local_18 = *param_3;
    local_10 = *(undefined4 *)(param_3 + 1);
    FUN_142610200(*(longlong *)(param_1 + 0x458),param_2,&local_18);
  }
  return;
}



// FUNCTION 1425f3f50 FUN_1425f3f50 body=611 status=ok
// SIG undefined FUN_1425f3f50(void)

void FUN_1425f3f50(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x90) = 1;
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
          goto LAB_1425f4107;
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
LAB_1425f4107:
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



// FUNCTION 1425f41c0 FUN_1425f41c0 body=867 status=ok
// SIG undefined FUN_1425f41c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425f41c0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_1f8 [48];
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  undefined2 local_1a8 [4];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar4 = 0;
  local_a0 = 0xffffffffffffffff;
  local_188 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  lVar1 = *(longlong *)
           (**(longlong **)(param_1 + 0x150) + (ulonglong)*(byte *)(param_1 + 0x17c) * 8);
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  local_1a8[0] = 0;
  local_1c8 = lVar1 + 0x30;
  local_1a0 = 0;
  local_1c0 = lVar1 + 0x238;
  local_198 = 0;
  local_190 = 0;
  uVar3 = *(uint *)(lVar1 + 0x228);
  if (1 < (int)uVar3) {
    uVar3 = 2;
  }
  _guard_xfg_dispatch_icall_nop(local_1a8,(void *)(lVar1 + 0x230),2);
  if (0 < (int)uVar3) {
    uVar7 = uVar4;
    do {
      lVar2 = *(longlong *)(lVar1 + 0x220);
      if (*(longlong *)(lVar1 + 0x220) == 0) {
        lVar2 = lVar1 + 0x170;
      }
      iVar6 = (int)uVar7;
      uVar7 = (ulonglong)(iVar6 + 1);
      local_1b8[uVar4] = lVar2 + (longlong)iVar6 * 0x58;
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)(int)uVar3);
  }
  if (uVar3 < 2) {
    plVar5 = local_1b8 + (int)uVar3;
    for (lVar2 = (longlong)(int)(2 - uVar3); lVar2 != 0; lVar2 = lVar2 + -1) {
      *plVar5 = 0;
      plVar5 = plVar5 + 1;
    }
  }
  local_1a0 = 0;
  local_198 = 0;
  local_190 = *(undefined4 *)(lVar1 + 0x16c);
  local_50 = param_3;
  if (param_3 == '\0') {
    FUN_1425d7e60(&local_188,&local_1c8,param_2);
  }
  else {
    FUN_1425d7c80();
  }
  FUN_1424b6ac0(param_2 + 0x688,&local_188);
  *(undefined8 *)(param_2 + 0x780) = local_90;
  *(undefined4 *)(param_2 + 0x788) = (undefined4)local_88;
  *(undefined1 *)(param_2 + 0x78c) = local_88._4_1_;
  *(undefined1 *)(param_2 + 0x78d) = local_88._5_1_;
  *(undefined1 *)(param_2 + 0x78e) = local_88._6_1_;
  *(undefined1 *)(param_2 + 0x78f) = local_88._7_1_;
  *(undefined8 *)(param_2 + 0x790) = local_80;
  *(undefined4 *)(param_2 + 0x798) = (undefined4)local_78;
  *(undefined1 *)(param_2 + 0x79c) = local_78._4_1_;
  *(undefined1 *)(param_2 + 0x79d) = local_78._5_1_;
  *(undefined1 *)(param_2 + 0x79e) = local_78._6_1_;
  *(undefined1 *)(param_2 + 0x79f) = local_78._7_1_;
  *(undefined8 *)(param_2 + 0x7a0) = local_70;
  *(undefined4 *)(param_2 + 0x7a8) = (undefined4)local_68;
  *(undefined1 *)(param_2 + 0x7ac) = local_68._4_1_;
  *(undefined1 *)(param_2 + 0x7ad) = local_68._5_1_;
  *(undefined1 *)(param_2 + 0x7ae) = local_68._6_1_;
  *(undefined1 *)(param_2 + 0x7af) = local_68._7_1_;
  *(undefined8 *)(param_2 + 0x7b0) = local_60;
  *(undefined4 *)(param_2 + 0x7b8) = (undefined4)local_58;
  *(undefined1 *)(param_2 + 0x7bc) = local_58._4_1_;
  *(undefined1 *)(param_2 + 0x7bd) = local_58._5_1_;
  *(undefined1 *)(param_2 + 0x7be) = local_58._6_1_;
  *(undefined1 *)(param_2 + 0x7bf) = local_58._7_1_;
  *(char *)(param_2 + 0x7c0) = local_50;
  FRenderResource::UpdateRHI(param_2);
  *(undefined4 *)(param_2 + 0x680) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_2 + 0x684) = *(undefined4 *)(lVar1 + 8);
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425f4530 FUN_1425f4530 body=38 status=ok
// SIG undefined FUN_1425f4530(void)

bool FUN_1425f4530(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (iVar1 == 0) {
    return 0 < DAT_146b047c8;
  }
  if ((iVar1 != 1) && (iVar1 == 2)) {
    return true;
  }
  return false;
}



// FUNCTION 1425f4560 FUN_1425f4560 body=82 status=ok
// SIG undefined FUN_1425f4560(void)

undefined8 FUN_1425f4560(uint param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (((0x1a < param_1) || ((0x780a7caU >> (param_1 & 0x1f) & 1) == 0)) &&
     (iVar2 = FUN_1419ef5f0(), 2 < iVar2)) {
    cVar1 = (**(code **)(*param_2 + 0x160))(param_2);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1425f45c0 FUN_1425f45c0 body=437 status=ok
// SIG undefined FUN_1425f45c0(void)

byte FUN_1425f45c0(longlong *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  
  if ((*param_2 != 0) && ((*param_2 & 1) == 0)) {
    return 1;
  }
  if (((longlong *)param_1[0x2a] != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x2a] + 0x368))(), cVar1 == '\0')) {
    puVar9 = (uint *)0x0;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      uVar2 = *(uint *)((longlong)plVar4 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*param_2) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar2 * 0x40 + *param_1);
          if (*puVar7 == *param_2) {
            if (uVar2 != 0xffffffff) goto LAB_1425f4661;
            break;
          }
          uVar2 = puVar7[0xe];
        } while (uVar2 != 0xffffffff);
      }
    }
    puVar7 = puVar9;
LAB_1425f4661:
    puVar8 = puVar7 + 2;
    if (puVar7 == (uint *)0x0) {
      puVar8 = puVar9;
    }
    puVar7 = puVar8;
    if (puVar8 != (uint *)0x0) {
      do {
        uVar2 = puVar7[2];
        if (uVar2 == 0) {
          if ((puVar7[10] & 4) != 0) {
            return 1;
          }
          cVar1 = FUN_14044af00(puVar7,0);
          if (cVar1 != '\0') {
            uVar5 = FWeakObjectPtr::Get(puVar7);
            uVar5 = UObjectBaseUtility::GetOutermost(uVar5);
            cVar1 = UPackage::IsFullyLoaded(uVar5);
            if (cVar1 == '\0') {
              return 1;
            }
          }
          return (byte)puVar8[10] >> 1 & 1;
        }
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          plVar4 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar4 = param_1 + 7;
          }
          uVar3 = *(uint *)((longlong)plVar4 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
          if (uVar3 != 0xffffffff) {
            do {
              puVar6 = (uint *)((longlong)(int)uVar3 * 0x40 + *param_1);
              if (*puVar6 == uVar2) {
                if (uVar3 != 0xffffffff) goto LAB_1425f46e1;
                break;
              }
              uVar3 = puVar6[0xe];
            } while (uVar3 != 0xffffffff);
          }
        }
        puVar6 = puVar9;
LAB_1425f46e1:
        puVar7 = puVar6 + 2;
        if (puVar6 == (uint *)0x0) {
          puVar7 = puVar9;
        }
        if (puVar7 == (uint *)0x0) {
          return (byte)puVar8[10] >> 1 & 1;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 1425f4780 FUN_1425f4780 body=157 status=ok
// SIG undefined FUN_1425f4780(void)

bool FUN_1425f4780(longlong param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x300);
    if (lVar2 != 0) {
      piVar4 = *(int **)(lVar2 + 0xf0);
      piVar1 = piVar4 + *(int *)(lVar2 + 0xf8);
      if (piVar4 != piVar1) {
        do {
          if (*piVar4 == *param_3) {
            return false;
          }
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar1);
      }
    }
    if ((*param_3 != 0) && (cVar3 = (**(code **)(*param_2 + 0x1b8))(param_2), cVar3 != '\0')) {
      if (*param_3 != 1) {
        cVar3 = FUN_1425ec5e0(param_1,*param_3);
        return cVar3 == '\0';
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 1425f4820 FUN_1425f4820 body=260 status=ok
// SIG undefined FUN_1425f4820(void)

void FUN_1425f4820(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  float fVar6;
  
  pfVar5 = (float *)(param_5 + 4 + (longlong)(int)param_3);
  fVar6 = (float)FUN_1424116d0(param_1 + 0x40,0,*(undefined8 *)(param_2 + 0x18),0);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *pfVar5 = fVar6;
  fVar6 = (float)FUN_1424116d0(param_1 + 0x78,0,uVar2,0);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  pfVar5[1] = fVar6;
  fVar6 = (float)FUN_1424116d0(param_1 + 0xb0,0,uVar2,0);
  lVar3 = *(longlong *)(param_2 + 0x18);
  pfVar5[2] = fVar6;
  plVar4 = *(longlong **)(lVar3 + 0x920);
  plVar1 = plVar4 + *(int *)(lVar3 + 0x928);
  while( true ) {
    if (plVar4 == plVar1) {
      return;
    }
    lVar3 = *plVar4;
    if ((lVar3 != 0) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x28) == *(longlong *)(param_1 + 0x38))) break;
    plVar4 = plVar4 + 1;
  }
  if (lVar3 == 0) {
    return;
  }
  fVar6 = fVar6 * *(float *)(param_5 + 0xc) + *pfVar5;
  *(float *)((ulonglong)param_3 + param_5) = fVar6;
  FUN_1425f35f0(param_1,param_2,lVar3,fVar6,pfVar5,param_5);
  return;
}



// FUNCTION 1425f4930 FUN_1425f4930 body=1040 status=ok
// SIG undefined FUN_1425f4930(void)

void FUN_1425f4930(longlong *param_1,longlong param_2,float param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  char *pcVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_res18;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  uVar13 = 0;
  local_res18 = param_3;
  FUN_1424118e0(param_1 + 0x19,&local_78,*(undefined4 *)(param_2 + 0x13c),
                *(undefined8 *)(param_2 + 0x18),0,0);
  (**(code **)(*param_1 + 0x380))(param_1,param_2,&local_68,0);
  if ((*(byte *)(param_1 + 7) & 0x40) == 0) {
    fVar19 = local_70 * local_60;
    fVar20 = local_78 * local_68;
    fVar17 = local_74 * local_64;
  }
  else {
    do {
      if ((*(byte *)(param_1 + 0x23) >> (uVar13 & 0x1f) & 1) != 0) {
        iVar12 = uVar13 + ((int)uVar13 / 3 + ((int)uVar13 >> 0x1f) +
                          (int)(((longlong)(int)uVar13 / 3 + ((longlong)(int)uVar13 >> 0x3f) &
                                0xffffffffU) >> 0x1f)) * -3;
        cVar14 = iVar12 == 0;
        local_res18._0_2_ = CONCAT11((iVar12 < 2) + '\x01',cVar14);
        iVar9 = 1;
        if (2 < (int)uVar13) {
          iVar9 = -1;
        }
        fVar17 = (float)iVar9;
        fVar19 = local_68;
        if ((iVar12 != 0) && (fVar19 = local_60, iVar12 == 1)) {
          fVar19 = local_64;
        }
        pcVar10 = (char *)&local_res18;
        while( true ) {
          fVar20 = local_68;
          if ((cVar14 != '\0') && (fVar20 = local_60, cVar14 == '\x01')) {
            fVar20 = local_64;
          }
          if (fVar19 * fVar17 < ABS(fVar20)) break;
          pcVar10 = pcVar10 + 1;
          if (pcVar10 == (char *)((longlong)&local_res18 + 2)) {
            fVar19 = local_68;
            if ((iVar12 != 0) && (fVar19 = local_60, local_78 = local_70, iVar12 == 1)) {
              fVar19 = local_64;
              local_78 = local_74;
            }
            local_78 = local_78 / fVar19;
            fVar19 = local_60 * local_78 * fVar17;
            fVar20 = local_68 * local_78 * fVar17;
            fVar17 = local_64 * local_78 * fVar17;
            goto LAB_1425f4aea;
          }
          cVar14 = *pcVar10;
        }
      }
      uVar13 = uVar13 + 1;
      fVar19 = local_res18;
      fVar20 = local_res18;
      fVar17 = local_res18;
    } while ((int)uVar13 < 6);
  }
LAB_1425f4aea:
  pfVar11 = (float *)FUN_1424118e0(param_1 + 0xf,&local_48,*(undefined4 *)(param_2 + 0x13c),
                                   *(undefined8 *)(param_2 + 0x18),0,0);
  fVar15 = fVar20 + *pfVar11;
  fVar18 = fVar17 + pfVar11[1];
  local_50 = fVar19 + pfVar11[2];
  iVar9 = *(int *)(param_2 + 0x58);
  local_58 = CONCAT44(fVar18,fVar15);
  if (iVar9 == 0) {
    uStack_3c = 0;
    fVar1 = *(float *)(param_2 + 0x94);
    fVar2 = *(float *)(param_2 + 0x98);
    fVar3 = *(float *)(param_2 + 0xa4);
    fVar4 = *(float *)(param_2 + 0xa8);
    fVar5 = *(float *)(param_2 + 0x84);
    fVar6 = *(float *)(param_2 + 0x88);
    fVar7 = *(float *)(param_2 + 0x74);
    fVar8 = *(float *)(param_2 + 0x78);
    fVar16 = local_50 * *(float *)(param_2 + 0x90) + *(float *)(param_2 + 0xa0) * 0.0 +
             fVar18 * *(float *)(param_2 + 0x80) + fVar15 * *(float *)(param_2 + 0x70) +
             *(float *)(param_5 + 0x10);
    *(float *)(param_5 + 0x10) = fVar16;
    *(float *)(param_5 + 0x14) =
         local_50 * fVar1 + fVar3 * 0.0 + fVar18 * fVar5 + fVar15 * fVar7 +
         *(float *)(param_5 + 0x14);
    *(float *)(param_5 + 0x18) =
         local_50 * fVar2 + fVar4 * 0.0 + fVar18 * fVar6 + fVar15 * fVar8 +
         *(float *)(param_5 + 0x18);
    local_48 = fVar15;
    fStack_44 = fVar18;
    fStack_40 = local_50;
    iVar9 = _finite((double)fVar16);
    if ((iVar9 != 0) && (iVar9 = _finite((double)*(float *)(param_5 + 0x14)), iVar9 != 0)) {
      _finite((double)*(float *)(param_5 + 0x18));
    }
    *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x10);
    *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 0x18);
  }
  else {
    *(undefined8 *)((longlong)iVar9 + 4 + param_5) = local_58;
    *(float *)((longlong)iVar9 + 0xc + param_5) = local_50;
  }
  if ((*(byte *)(param_1 + 7) & 0x80) != 0) {
    fVar15 = (float)FUN_1424116d0(param_1 + 8,*(undefined4 *)(param_2 + 0x13c),
                                  *(undefined8 *)(param_2 + 0x18),0);
    fVar20 = fVar20 * fVar15;
    fVar17 = fVar17 * fVar15;
    fVar19 = fVar19 * fVar15;
    fVar15 = *(float *)(param_2 + 0xa0) * 0.0 + fVar19 * *(float *)(param_2 + 0x90) +
             fVar17 * *(float *)(param_2 + 0x80) + fVar20 * *(float *)(param_2 + 0x70);
    fVar18 = *(float *)(param_2 + 0xa4) * 0.0 + fVar19 * *(float *)(param_2 + 0x94) +
             fVar17 * *(float *)(param_2 + 0x84) + fVar20 * *(float *)(param_2 + 0x74);
    fVar19 = *(float *)(param_2 + 0xa8) * 0.0 + fVar19 * *(float *)(param_2 + 0x98) +
             fVar17 * *(float *)(param_2 + 0x88) + fVar20 * *(float *)(param_2 + 0x78);
    *(float *)(param_5 + 0x3c) = fVar15 + *(float *)(param_5 + 0x3c);
    *(float *)(param_5 + 0x40) = fVar18 + *(float *)(param_5 + 0x40);
    *(float *)(param_5 + 0x44) = fVar19 + *(float *)(param_5 + 0x44);
    *(float *)(param_5 + 0x2c) = fVar15 + *(float *)(param_5 + 0x2c);
    *(float *)(param_5 + 0x30) = fVar18 + *(float *)(param_5 + 0x30);
    *(float *)(param_5 + 0x34) = fVar19 + *(float *)(param_5 + 0x34);
  }
  return;
}



// FUNCTION 1425f4d40 FUN_1425f4d40 body=241 status=ok
// SIG undefined FUN_1425f4d40(void)

void FUN_1425f4d40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  puVar5 = (undefined1 *)(*(int *)(param_2 + 0x248) + param_5);
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 < 1) {
      uVar4 = 0;
    }
    else {
      iVar2 = rand();
      iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar1);
      iVar2 = iVar1 + -1;
      if (iVar3 <= iVar1 + -1) {
        iVar2 = iVar3;
      }
      uVar4 = (undefined1)iVar2;
    }
    *puVar5 = uVar4;
  }
  else if (*(char *)(param_1 + 0x38) == '\x01') {
    *puVar5 = *(undefined1 *)(param_2 + 0x1f8);
    *(char *)(param_2 + 0x1f8) =
         (char)((longlong)(ulonglong)(*(byte *)(param_2 + 0x1f8) + 1) %
               (longlong)*(int *)(param_1 + 0x48));
  }
  uVar6 = FUN_1424116d0(param_1 + 0x90,*(undefined4 *)(param_5 + 0xc),0,0);
  *(undefined4 *)(puVar5 + 8) = uVar6;
  uVar6 = FUN_1424116d0(param_1 + 0x58,*(undefined4 *)(param_5 + 0xc),0,0);
  *(undefined4 *)(puVar5 + 4) = uVar6;
  *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(param_2 + 0x13c);
  return;
}



// FUNCTION 1425f4e60 FUN_1425f4e60 body=77 status=ok
// SIG undefined FUN_1425f4e60(void)

void FUN_1425f4e60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar1 = FUN_142628290(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_14233fea0(*(undefined8 *)(param_2 + 0x18));
      if (lVar1 != 0) {
        FUN_1425dc750(param_1,param_5,lVar1);
      }
    }
  }
  return;
}



// FUNCTION 1425f4eb0 SupportsObject body=173 status=ok
// SIG undefined SupportsObject(void)

undefined1 FNetGUIDCache::SupportsObject(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  int local_res10;
  int local_res14;
  int local_res20;
  int local_res24;
  
  if (param_2 != (longlong *)0x0) {
    if (param_3 == (int *)0x0) {
      FWeakObjectPtr::operator=(&local_res10);
      local_res20 = local_res10;
    }
    else {
      local_res14 = param_3[1];
      local_res20 = *param_3;
    }
    local_res24 = local_res14;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x50,&local_res10,&local_res20);
    if (((local_res10 != -1) &&
        (lVar1 = *(longlong *)(param_1 + 0x50) + (longlong)local_res10 * 0x14, lVar1 != 0)) &&
       (*(int *)(lVar1 + 8) != 0)) {
      return 1;
    }
    cVar2 = (**(code **)(*param_2 + 0x1c0))(param_2);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*param_2 + 0x1c8))(param_2), cVar2 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1425f4f60 FUN_1425f4f60 body=362 status=ok
// SIG undefined FUN_1425f4f60(void)

void FUN_1425f4f60(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))))) {
    if (*DAT_146b04890 != 0) {
      FUN_1424d5f10(*DAT_146b04890,*(undefined4 *)(param_1 + 0x80));
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146b04c20) {
        _Init_thread_header(&DAT_146b04c20);
        if (DAT_146b04c20 == -1) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          DAT_146b04c18 =
               (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"FX.TestGPUSort");
          _Init_thread_footer(&DAT_146b04c20);
        }
      }
      plVar1 = DAT_146b04c18;
      FString::PrintfImpl(&local_18,&DAT_143f3edc0,0);
      puVar2 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar2 = local_18;
      }
      (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,0x8000000);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    FUN_142635e30(&PTR_PTR_146534420);
    return;
  }
  return;
}



// FUNCTION 1425f50d0 FUN_1425f50d0 body=2204 status=ok
// SIG undefined FUN_1425f50d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425f50d0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  uint *puVar19;
  int *piVar20;
  float *pfVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
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
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int local_res8 [2];
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c0;
  float local_b4;
  undefined1 local_a8 [112];
  ulonglong uVar25;
  
  fVar31 = (float)param_2;
  if ((*(longlong *)(param_1 + 0x200) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x200) + 0xd0) <=
      (int)(uint)*(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x41))) {
    bVar14 = false;
  }
  else {
    if ((*(char *)(param_1 + 0x230) != '\0') && ((*(byte *)(param_1 + 0xf0) & 1) != 0)) {
      lVar17 = FNiagaraEmitterHandle::GetInstance(param_1);
      iVar29 = 0;
      if (0 < *(int *)(param_1 + 0x128)) {
        lVar30 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x234);
          pfVar21 = (float *)((longlong)
                              (int)((uint)*(ushort *)(lVar30 + *(longlong *)(param_1 + 0x108)) *
                                   *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100));
          *(undefined8 *)((longlong)pfVar21 + (longlong)iVar5 + 0x30) =
               *(undefined8 *)((longlong)pfVar21 + (longlong)iVar5 + 0x3c);
          *(undefined4 *)((longlong)pfVar21 + (longlong)iVar5 + 0x38) =
               *(undefined4 *)((longlong)pfVar21 + (longlong)iVar5 + 0x44);
          cVar2 = *(char *)(*(longlong *)(lVar17 + 0x30) + 0x58);
          if ((byte)(cVar2 - 3U) < 2) {
            local_f8 = *(undefined8 *)(pfVar21 + 0xf);
            local_f0 = pfVar21[0x11];
            if (cVar2 == '\x03') {
              if (((*(byte *)(*(longlong *)(lVar17 + 0x30) + 0x144) & 1) == 0) ||
                 (*(int *)(lVar17 + 0x98) < 1)) {
LAB_1425f5343:
                fVar48 = local_f8._4_4_;
                goto LAB_1425f5349;
              }
              plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8);
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(plVar1,local_res8);
              puVar19 = (uint *)0x0;
              if (local_res8[0] != -1) {
                puVar19 = (uint *)(*plVar1 + (longlong)local_res8[0] * 0x18);
              }
              if (*(int *)(param_1 + 0x48) == 0) goto LAB_1425f5343;
              puVar18 = puVar19 + 2;
              if (puVar19 == (uint *)0x0) {
                puVar18 = (uint *)0x0;
              }
              uVar23 = *puVar18;
              fVar47 = (pfVar21[4] + *(float *)((longlong)pfVar21 + (ulonglong)uVar23 + 0xc)) -
                       (*pfVar21 + *(float *)((longlong)pfVar21 + (ulonglong)uVar23 + 0x3c));
              fVar48 = (*(float *)((longlong)pfVar21 + (ulonglong)uVar23 + 0x10) + pfVar21[5]) -
                       (*(float *)((longlong)pfVar21 + (ulonglong)uVar23 + 0x40) + pfVar21[1]);
              local_f8 = CONCAT44(fVar48,fVar47);
              local_f0 = (*(float *)((longlong)pfVar21 + (ulonglong)uVar23 + 0x14) + pfVar21[6]) -
                         (*(float *)((longlong)pfVar21 + (ulonglong)uVar23 + 0x44) + pfVar21[2]);
            }
            else {
              if (cVar2 != '\x04') goto LAB_1425f5343;
              local_f8 = *(undefined8 *)(pfVar21 + 4);
              local_f0 = pfVar21[6];
              fVar48 = (float)((ulonglong)local_f8 >> 0x20);
LAB_1425f5349:
              fVar47 = (float)local_f8;
            }
            fVar34 = fVar47 * fVar47 + fVar48 * fVar48 + local_f0 * local_f0;
            if (1e-08 < fVar34) {
              auVar43 = rsqrtss(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
              fVar40 = auVar43._0_4_;
              fVar40 = fVar40 + fVar40 * (0.5 - fVar34 * 0.5 * fVar40 * fVar40);
              fVar40 = fVar40 + fVar40 * (0.5 - fVar34 * 0.5 * fVar40 * fVar40);
              local_f0 = local_f0 * fVar40;
              local_f8 = CONCAT44(fVar48 * fVar40,fVar47 * fVar40);
            }
            local_e8 = 0x3f800000;
            local_e0 = 0;
            FQuat::FindBetweenNormals(local_a8,&local_e8,&local_f8);
            FQuat::Euler(local_a8,&local_d8);
            local_b4 = local_d0 + *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x14);
            *(ulonglong *)((longlong)pfVar21 + (longlong)iVar5 + 0x18) =
                 CONCAT44(local_d4 + *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x10),
                          local_d8 + *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0xc));
            *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x20) = local_b4;
            *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x18) =
                 *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x24) +
                 *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x18);
            *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x1c) =
                 *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x28) +
                 *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x1c);
            *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x20) =
                 *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x2c) +
                 *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x20);
          }
          else if (((uint)pfVar21[0x1a] & 0x20000000) == 0) {
            local_c0 = *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x2c) +
                       *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x14);
            *(ulonglong *)((longlong)pfVar21 + (longlong)iVar5 + 0x18) =
                 CONCAT44(*(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x28) +
                          *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x10),
                          *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x24) +
                          *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0xc));
            *(float *)((longlong)pfVar21 + (longlong)iVar5 + 0x20) = local_c0;
          }
          iVar29 = iVar29 + 1;
          lVar30 = lVar30 + 2;
        } while (iVar29 < *(int *)(param_1 + 0x128));
      }
    }
    bVar14 = true;
    if (*(char *)(param_1 + 0x250) != '\0') {
      *(undefined4 *)(param_1 + 0x260) = 0;
      if (*(int *)(param_1 + 0x264) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 600,0);
      }
    }
  }
  uVar28 = 0;
  FUN_142636850(param_1,param_2,param_3);
  if (bVar14) {
    if (((*(char *)(param_1 + 0x230) != '\0') && ((*(byte *)(param_1 + 0xf0) & 1) != 0)) &&
       (uVar25 = uVar28, uVar22 = uVar28, 0 < *(int *)(param_1 + 0x128))) {
      do {
        uVar23 = (int)uVar25 + 1;
        lVar17 = (longlong)
                 (int)((uint)*(ushort *)(uVar22 + *(longlong *)(param_1 + 0x108)) *
                      *(int *)(param_1 + 0x124)) + (longlong)*(int *)(param_1 + 0x234) +
                 *(longlong *)(param_1 + 0x100);
        *(float *)(lVar17 + 0x24) = fVar31 * *(float *)(lVar17 + 0x30) + *(float *)(lVar17 + 0x24);
        *(float *)(lVar17 + 0x28) = *(float *)(lVar17 + 0x34) * fVar31 + *(float *)(lVar17 + 0x28);
        *(float *)(lVar17 + 0x2c) = *(float *)(lVar17 + 0x38) * fVar31 + *(float *)(lVar17 + 0x2c);
        uVar25 = (ulonglong)uVar23;
        uVar22 = uVar22 + 2;
      } while ((int)uVar23 < *(int *)(param_1 + 0x128));
    }
    if ((*(longlong *)(param_1 + 0x200) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x40) != 0)) {
      if (*(char *)(param_1 + 0x250) == '\0') {
        FUN_1425e1a60(param_1);
      }
      else {
        lVar17 = FUN_1425e6d30(*(undefined8 *)(param_1 + 0x18));
        if (lVar17 == 0) {
          return;
        }
        piVar20 = *(int **)(param_1 + 600);
        iVar29 = *(int *)(lVar17 + 0x770);
        uVar25 = (longlong)*(int *)(param_1 + 0x260) & 0x3fffffffffffffff;
        if (piVar20 + *(int *)(param_1 + 0x260) < piVar20) {
          uVar25 = uVar28;
        }
        uVar22 = uVar28;
        if (uVar25 != 0) {
          do {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((ulonglong)(*piVar20 * *(uint *)(param_1 + 0x24c)) * 0x30 +
                               *(longlong *)(param_1 + 0x210)),
                       *(void **)(lVar17 + 0x728 + (longlong)iVar29 * 0x10),
                       (ulonglong)*(uint *)(param_1 + 0x24c) * 0x30);
            uVar22 = uVar22 + 1;
            piVar20 = piVar20 + 1;
          } while (uVar22 != uVar25);
        }
      }
      plVar1 = (longlong *)(param_1 + 0x220);
      iVar29 = *(int *)(*(longlong *)(param_1 + 0x200) + 0x160) * *(int *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0x228) = 0;
      if (*(int *)(param_1 + 0x22c) < iVar29) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(plVar1,iVar29);
      }
      iVar29 = *(int *)(param_1 + 0x228) + iVar29;
      *(int *)(param_1 + 0x228) = iVar29;
      if (*(int *)(param_1 + 0x22c) < iVar29) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      uVar16 = uRam0000000146b04808;
      uVar15 = uRam0000000146b04804;
      uVar23 = _DAT_146b04800;
      if (0 < *(int *)(param_1 + 0x128)) {
        uVar27 = *(uint *)(param_1 + 0x24c);
        uVar25 = uVar28;
        uVar22 = uVar28;
        do {
          uVar3 = *(ushort *)(uVar22 + *(longlong *)(param_1 + 0x108));
          uVar26 = uVar28;
          if (uVar27 != 0) {
            do {
              iVar29 = (int)uVar26;
              uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x2d0) + (longlong)iVar29 * 2);
              pfVar21 = (float *)((longlong)(int)(iVar29 + uVar27 * uVar3) * 0x30 +
                                 *(longlong *)(param_1 + 0x210));
              fVar31 = *pfVar21;
              fVar48 = pfVar21[1];
              fVar47 = pfVar21[2];
              fVar34 = pfVar21[3];
              fVar32 = fVar48 + fVar48;
              fVar33 = fVar47 + fVar47;
              fVar39 = fVar31 * (fVar31 + fVar31);
              fVar38 = fVar34 * (fVar31 + fVar31);
              fVar40 = pfVar21[8];
              fVar6 = pfVar21[9];
              fVar7 = pfVar21[10];
              fVar49 = (fVar34 * fVar33 + fVar31 * fVar32) * fVar40;
              fVar50 = (fVar38 + fVar48 * fVar33) * fVar6;
              fVar51 = (fVar34 * fVar32 + fVar31 * fVar33) * fVar7;
              fVar41 = fVar6 * (fVar31 * fVar32 - fVar34 * fVar33);
              fVar44 = fVar7 * (fVar48 * fVar33 - fVar38);
              fVar46 = fVar40 * (fVar31 * fVar33 - fVar34 * fVar32);
              fVar35 = (float)((uint)((_DAT_146b047f0 - (fVar47 * fVar33 + fVar48 * fVar32)) *
                                     fVar40) & uVar23);
              fVar36 = (float)((uint)((fRam0000000146b047f4 - (fVar47 * fVar33 + fVar39)) * fVar6) &
                              uVar15);
              fVar37 = (float)((uint)((fRam0000000146b047f8 - (fVar48 * fVar32 + fVar39)) * fVar7) &
                              uVar16);
              auVar43 = *(undefined1 (*) [16])(pfVar21 + 4);
              fVar31 = auVar43._8_4_;
              fVar42 = auVar43._0_4_;
              fVar45 = auVar43._4_4_;
              pfVar21 = (float *)((ulonglong)uVar4 * 0x40 +
                                 *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x290));
              fVar48 = *pfVar21;
              fVar47 = pfVar21[1];
              fVar34 = pfVar21[2];
              fVar40 = pfVar21[3];
              fVar6 = pfVar21[4];
              fVar7 = pfVar21[5];
              fVar32 = pfVar21[6];
              fVar33 = pfVar21[7];
              fVar38 = pfVar21[8];
              fVar39 = pfVar21[9];
              fVar8 = pfVar21[10];
              fVar9 = pfVar21[0xb];
              fVar10 = pfVar21[0xc];
              fVar11 = pfVar21[0xd];
              fVar12 = pfVar21[0xe];
              fVar13 = pfVar21[0xf];
              pfVar21 = (float *)((longlong)
                                  (int)(*(int *)(*(longlong *)(param_1 + 0x200) + 0x160) *
                                        (int)uVar25 + (uint)uVar4) * 0x30 + *plVar1);
              pfVar21[4] = fVar47 * fVar36 + fVar48 * fVar49 + fVar34 * fVar44 + fVar40 * fVar45;
              pfVar21[5] = fVar7 * fVar36 + fVar6 * fVar49 + fVar32 * fVar44 + fVar33 * fVar45;
              *pfVar21 = fVar47 * fVar41 + fVar48 * fVar35 + fVar34 * fVar51 + fVar40 * fVar42;
              pfVar21[1] = fVar7 * fVar41 + fVar6 * fVar35 + fVar32 * fVar51 + fVar33 * fVar42;
              pfVar21[2] = fVar39 * fVar41 + fVar38 * fVar35 + fVar8 * fVar51 + fVar9 * fVar42;
              pfVar21[3] = fVar11 * fVar41 + fVar10 * fVar35 + fVar12 * fVar51 + fVar13 * fVar42;
              pfVar21[0xb] = fVar11 * fVar50 + fVar10 * fVar46 + fVar12 * fVar37 + fVar13 * fVar31;
              pfVar21[6] = fVar39 * fVar36 + fVar38 * fVar49 + fVar8 * fVar44 + fVar9 * fVar45;
              pfVar21[7] = fVar11 * fVar36 + fVar10 * fVar49 + fVar12 * fVar44 + fVar13 * fVar45;
              pfVar21[8] = fVar47 * fVar50 + fVar48 * fVar46 + fVar34 * fVar37 + fVar40 * fVar31;
              pfVar21[9] = fVar7 * fVar50 + fVar6 * fVar46 + fVar32 * fVar37 + fVar33 * fVar31;
              pfVar21[10] = fVar39 * fVar50 + fVar38 * fVar46 + fVar8 * fVar37 + fVar9 * fVar31;
              uVar27 = *(uint *)(param_1 + 0x24c);
              uVar26 = (ulonglong)(iVar29 + 1U);
            } while (iVar29 + 1U < uVar27);
          }
          uVar24 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar24;
          uVar22 = uVar22 + 2;
        } while ((int)uVar24 < *(int *)(param_1 + 0x128));
      }
    }
  }
  return;
}



// FUNCTION 1425f5970 FUN_1425f5970 body=581 status=ok
// SIG undefined FUN_1425f5970(void)

void FUN_1425f5970(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  LARGE_INTEGER local_res18 [2];
  
  if (*(int *)(param_1[1] + 0x10) == 0) {
    if ((((int)param_1[2] != 3) && ((double)param_1[0xe] != 0.0)) &&
       (QueryPerformanceCounter(local_res18),
       1.0 < ((double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0) - (double)param_1[0xe]))
    {
      if ((param_1[5] != 0) &&
         (15.0 < (double)*(float *)(param_1[5] + 0x170) - (double)param_1[0xf])) {
        FUN_1421e2d30(param_1,0);
      }
      if ((int)param_1[2] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001425f5a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x48))(param_1);
        return;
      }
      if (((int)param_1[2] == 1) && (*(float *)((longlong)param_1 + 0x84) != 0.0)) {
        FUN_1425f15c0(param_1,(char)param_1[0x10],*(float *)((longlong)param_1 + 0x84),
                      param_1 + 0x11);
        return;
      }
    }
  }
  else {
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      plVar5 = (longlong *)0x0;
      plVar3 = *(longlong **)(lVar2 + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar6 = plVar5, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar3[1];
          if (bVar7) {
            *(int *)(plVar3 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            if (plVar3 == (longlong *)0x0) goto LAB_1425f5ae1;
            plVar5 = *(longlong **)(lVar2 + 0xb0);
            plVar6 = plVar3;
            break;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar7 = iVar4 == 0;
          if (bVar7) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar2 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
LAB_1425f5ae1:
      if (plVar5 == param_1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b04c04) &&
           (_Init_thread_header(&DAT_146b04c04), DAT_146b04c04 == -1)) {
          iVar4 = rand();
          DAT_146b04c00 = (float)iVar4 * 0.00015259255;
          _Init_thread_footer(&DAT_146b04c04);
        }
        if (0.0 < (*(float *)(param_1[5] + 0x170) - *(float *)((longlong)param_1 + 0x54)) -
                  (DAT_146b04c00 + 15.0)) {
          iVar4 = rand();
          DAT_146b04c00 = (float)iVar4 * 0.00015259255;
          FUN_1425f8790(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1425f5bc0 FUN_1425f5bc0 body=27 status=ok
// SIG undefined FUN_1425f5bc0(void)

void FUN_1425f5bc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142627a50(param_2,param_1);
  *(undefined1 *)(lVar1 + 0x14) = 0;
  return;
}



// FUNCTION 1425f5be0 FUN_1425f5be0 body=752 status=ok
// SIG undefined FUN_1425f5be0(void)

undefined8 * FUN_1425f5be0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined4 local_res8 [2];
  longlong local_68 [2];
  void *local_58;
  ulonglong local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  puVar13 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar8 == '\0')) {
    puVar11 = (undefined8 *)operator_new(0x20);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(puVar11 + 1) = 0;
      *puVar11 = &PTR_AsObject_143f605c8;
      puVar11[2] = 0;
      uVar7 = DAT_146534328;
      pvVar6 = DAT_146534320;
      iVar15 = (int)DAT_146534328;
      *(int *)(puVar11 + 3) = iVar15;
      if (iVar15 == 0) {
        *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
        *(undefined4 *)(puVar11 + 1) = 2;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11 + 2,uVar7 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar11[2],pvVar6,(longlong)iVar15 * 2);
        *(undefined4 *)(puVar11 + 1) = 2;
      }
    }
    puVar12 = (undefined8 *)operator_new(0x18);
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar12 + 1) = 1;
      *puVar12 = &PTR_FUN_143f60d18;
      *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
      puVar12[2] = puVar11;
      puVar13 = puVar12;
    }
    *param_2 = puVar11;
    param_2[1] = puVar13;
    SharedPointerInternals::EnableSharedFromThis(param_2,puVar11,puVar11);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar1 + 0x20))(plVar1), cVar8 == '\0')) {
      local_68[0] = 0;
      local_68[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      FGenericPlatformString::Memcpy(local_68[0],L"INVALID",0x10);
      plVar9 = local_68;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                         (*(longlong **)(param_1 + 8),local_48);
      bVar4 = true;
      bVar3 = false;
    }
    puVar2 = (undefined2 *)*plVar9;
    *plVar9 = 0;
    lVar5 = plVar9[1];
    plVar9[1] = 0;
    if ((bVar3) && (local_68[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    puVar14 = &DAT_143f3eda8;
    puVar16 = &DAT_143f3eda8;
    if ((int)lVar5 != 0) {
      puVar16 = puVar2;
    }
    uVar10 = (**(code **)(*plVar1 + 8))(plVar1,local_res8);
    puVar11 = (undefined8 *)FName::ToString(uVar10,local_38);
    if (*(int *)(puVar11 + 1) != 0) {
      puVar14 = (undefined2 *)*puVar11;
    }
    FString::PrintfImpl(&local_58,L"%s:%s",puVar14,puVar16);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
    puVar11 = (undefined8 *)operator_new(0x20);
    pvVar6 = local_58;
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(puVar11 + 1) = 0;
      *puVar11 = &PTR_AsObject_143f605c8;
      puVar11[2] = 0;
      iVar15 = (int)local_50;
      *(int *)(puVar11 + 3) = iVar15;
      if (iVar15 == 0) {
        *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
        *(undefined4 *)(puVar11 + 1) = 2;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11 + 2,local_50 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar11[2],pvVar6,(longlong)iVar15 * 2);
        *(undefined4 *)(puVar11 + 1) = 2;
      }
    }
    puVar12 = (undefined8 *)operator_new(0x18);
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar12 + 1) = 1;
      *puVar12 = &PTR_FUN_143f60d18;
      *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
      puVar12[2] = puVar11;
      puVar13 = puVar12;
    }
    *param_2 = puVar11;
    param_2[1] = puVar13;
    SharedPointerInternals::EnableSharedFromThis(param_2,puVar11,puVar11);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 1425f5ed0 FUN_1425f5ed0 body=65 status=ok
// SIG undefined FUN_1425f5ed0(void)

void FUN_1425f5ed0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x298))();
    *(uint *)(param_1 + 0x460) =
         *(uint *)(param_1 + 0x460) ^
         ((uint)*(byte *)(*(longlong *)(param_1 + 0x458) + 0xba) ^ *(uint *)(param_1 + 0x460)) & 4;
  }
  return;
}



// FUNCTION 1425f5f30 FUN_1425f5f30 body=205 status=ok
// SIG undefined FUN_1425f5f30(void)

void FUN_1425f5f30(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong local_res8 [2];
  undefined1 local_res18 [16];
  
  *(undefined1 *)((longlong)param_3 * 0x40 + *(longlong *)(param_2 + 0x18)) = 1;
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  local_res8[0] = (ulonglong)*(uint *)(param_2 + 0x10) << 0x20 | (longlong)param_3;
  if (*(int *)(lVar1 + 0xa8) != *(int *)(lVar1 + 0xd4)) {
    lVar3 = *(longlong *)(lVar1 + 0xe0);
    if (*(longlong *)(lVar1 + 0xe0) == 0) {
      lVar3 = lVar1 + 0xd8;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)(local_res8[0] >> 0x20) * 0x17 + param_3) &
                             (longlong)*(int *)(lVar1 + 0xe8) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0xa0) + (longlong)iVar2 * 0x18) == local_res8[0]) {
          if (iVar2 != -1) {
            return;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0xa0) + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  FUN_14159dbf0(param_1 + 0x330,local_res18,local_res8,0);
  return;
}



// FUNCTION 1425f6000 FUN_1425f6000 body=139 status=ok
// SIG undefined FUN_1425f6000(void)

void FUN_1425f6000(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar4 = (longlong *)UOnlineEngineInterface::Get();
  (**(code **)(*plVar4 + 0x2b8))(plVar4,local_18,param_3,param_2);
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 1425f6090 FUN_1425f6090 body=794 status=ok
// SIG undefined FUN_1425f6090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425f6090(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_108 [32];
  float *local_e8;
  longlong local_e0;
  uint local_d8;
  longlong local_d0;
  ulonglong local_c8;
  float local_b8;
  float local_b4 [3];
  char local_a8;
  float local_a4 [3];
  char local_98;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar13 = (ulonglong)(int)param_3;
  plVar12 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x920);
  plVar1 = plVar12 + *(int *)(*(longlong *)(param_2 + 0x18) + 0x928);
  while( true ) {
    if (plVar12 == plVar1) {
      return;
    }
    lVar3 = *plVar12;
    if ((lVar3 != 0) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x28) == *(longlong *)(param_1 + 0x38))) break;
    plVar12 = plVar12 + 1;
  }
  if (lVar3 == 0) {
    return;
  }
  lVar7 = *(longlong *)(param_2 + 0x108);
  iVar5 = *(int *)(param_2 + 0x128) + -1;
  lVar4 = *(longlong *)(param_2 + 0x100);
  iVar2 = *(int *)(param_2 + 0x124);
  lVar10 = (longlong)iVar5;
  uVar14 = uVar13;
  local_d8 = param_3;
  local_d0 = lVar7;
  local_c8 = uVar13;
  if (iVar5 < 0) {
    return;
  }
  do {
    lVar9 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar10 * 2) * iVar2) + lVar4;
    if ((*(uint *)(lVar9 + 0x68) & 0x4000000) == 0) {
      pfVar11 = (float *)(lVar9 + 4 + uVar13);
      fVar19 = *(float *)(lVar9 + 0xc) * pfVar11[2] + *pfVar11;
      *(float *)((uVar14 & 0xffffffff) + lVar9) = fVar19;
      if ((*(uint *)(param_1 + 0xe8) & 1) != 0) {
        fVar16 = pfVar11[2];
        fVar17 = pfVar11[1];
        if (0.0 <= fVar16) {
          bVar15 = fVar17 < fVar19;
        }
        else {
          bVar15 = fVar19 < fVar17;
        }
        if (bVar15 || fVar19 == fVar17) {
          fVar18 = (*(float *)(lVar9 + 0xc) - param_4) * fVar16 + *pfVar11;
          if (0.0 <= fVar16) {
            bVar15 = fVar17 < fVar18;
          }
          else {
            bVar15 = fVar18 < fVar17;
          }
          lVar7 = local_d0;
          if (bVar15 || fVar18 == fVar17) goto LAB_1425f632c;
          if ((*(uint *)(param_1 + 0xe8) & 2) != 0) {
            if (0.0 <= fVar19) {
              fVar16 = fVar19;
              if (1.0 <= fVar19) {
                fVar16 = 1.0;
              }
            }
            else {
              fVar16 = 0.0;
            }
            FUN_1425e4760(local_a4,lVar3,fVar16);
            if (0.0 <= fVar18) {
              if (1.0 <= fVar18) {
                fVar18 = 1.0;
              }
            }
            else {
              fVar18 = 0.0;
            }
            FUN_1425e4760(local_b4,lVar3,fVar18);
            pfVar8 = local_b4;
            if (local_a8 == '\0') {
              pfVar8 = (float *)(lVar9 + 0x10);
            }
            fVar16 = 1.0 / param_4;
            pfVar6 = local_a4;
            if (local_98 == '\0') {
              pfVar6 = (float *)(lVar9 + 0x10);
            }
            local_b8 = (pfVar6[2] - pfVar8[2]) * fVar16;
            local_a8 = '\0';
            fVar17 = (*pfVar6 - *pfVar8) * fVar16;
            local_98 = '\0';
            fVar16 = (pfVar6[1] - pfVar8[1]) * fVar16;
            *(ulonglong *)(lVar9 + 0x3c) = CONCAT44(fVar16,fVar17);
            *(ulonglong *)(lVar9 + 0x2c) = CONCAT44(fVar16,fVar17);
            *(float *)(lVar9 + 0x44) = local_b8;
            *(float *)(lVar9 + 0x34) = local_b8;
          }
        }
      }
      local_e8 = pfVar11;
      local_e0 = lVar9;
      FUN_1425f35f0(param_1,param_2,lVar3,fVar19);
      uVar14 = (ulonglong)local_d8;
      lVar7 = local_d0;
      uVar13 = local_c8;
    }
LAB_1425f632c:
    lVar10 = lVar10 + -1;
    if (lVar10 < 0) {
      return;
    }
  } while( true );
}



// FUNCTION 1425f63b0 FUN_1425f63b0 body=327 status=ok
// SIG undefined FUN_1425f63b0(void)

void FUN_1425f63b0(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float local_58;
  float local_54;
  float local_50;
  
  lVar2 = *(longlong *)(param_2 + 0x100);
  iVar4 = *(int *)(param_2 + 0x128) + -1;
  iVar1 = *(int *)(param_2 + 0x124);
  lVar3 = *(longlong *)(param_2 + 0x108);
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar6 * 2) * iVar1) + lVar2;
      if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
        fVar7 = param_4 + *(float *)((ulonglong)param_3 + lVar5);
        *(float *)((ulonglong)param_3 + lVar5) = fVar7;
        FUN_1424118e0(param_1 + 0x38,&local_58,fVar7,*(undefined8 *)(param_2 + 0x18),0,0);
        fVar7 = local_58;
        if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
          fVar7 = 1.0;
        }
        *(float *)(lVar5 + 0x5c) = fVar7 * *(float *)(lVar5 + 0x4c);
        fVar7 = local_54;
        if ((*(byte *)(param_1 + 0x88) & 2) == 0) {
          fVar7 = 1.0;
        }
        *(float *)(lVar5 + 0x60) = fVar7 * *(float *)(lVar5 + 0x50);
        fVar7 = local_50;
        if ((*(byte *)(param_1 + 0x88) & 4) == 0) {
          fVar7 = 1.0;
        }
        *(float *)(lVar5 + 100) = fVar7 * *(float *)(lVar5 + 0x54);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}



// FUNCTION 1425f6500 FUN_1425f6500 body=2366 status=ok
// SIG undefined FUN_1425f6500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425f6500(longlong param_1,ulonglong param_2,undefined8 param_3,float param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float local_298;
  float local_294;
  float local_290;
  uint local_288;
  uint local_284;
  float local_280;
  undefined8 local_278;
  undefined4 local_270;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  longlong local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d0 [2];
  float local_1c8;
  undefined1 local_1c0 [4];
  float local_1bc;
  float local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [180];
  
  iVar16 = (int)(param_2 >> 4);
  uVar18 = 0x9e3779b9U - iVar16 ^ iVar16 << 8;
  uVar20 = -(uVar18 + iVar16) ^ uVar18 >> 0xd;
  uVar17 = (iVar16 - uVar18) - uVar20 ^ uVar20 >> 0xc;
  uVar19 = (uVar18 - uVar17) - uVar20 ^ uVar17 << 0x10;
  uVar20 = (uVar20 - uVar19) - uVar17 ^ uVar19 >> 5;
  uVar18 = (uVar17 - uVar19) - uVar20 ^ uVar20 >> 3;
  uVar19 = (uVar19 - uVar18) - uVar20 ^ uVar18 << 10;
  local_198 = DAT_1464aa7d0;
  fStack_194 = DAT_1464aa7d4;
  fStack_190 = DAT_1464aa7d8;
  fStack_18c = fRam00000001464aa7dc;
  uVar17 = *(uint *)(param_1 + 0x38) & 1;
  local_228 = DAT_1464aa7d0;
  fStack_224 = DAT_1464aa7d4;
  fStack_220 = DAT_1464aa7d8;
  fStack_21c = fRam00000001464aa7dc;
  local_188 = DAT_1464aa7e0;
  fStack_184 = DAT_1464aa7e4;
  fStack_180 = DAT_1464aa7e8;
  fStack_17c = fRam00000001464aa7ec;
  local_218 = DAT_1464aa7e0;
  fStack_214 = DAT_1464aa7e4;
  fStack_210 = DAT_1464aa7e8;
  fStack_20c = fRam00000001464aa7ec;
  local_1a8 = DAT_1464aa7f0;
  fStack_1a4 = DAT_1464aa7f4;
  fStack_1a0 = DAT_1464aa7f8;
  fStack_19c = fRam00000001464aa7fc;
  local_208 = DAT_1464aa7f0;
  fStack_204 = DAT_1464aa7f4;
  fStack_200 = DAT_1464aa7f8;
  fStack_1fc = fRam00000001464aa7fc;
  local_178 = _DAT_1464aa800;
  fStack_174 = fRam00000001464aa804;
  fStack_170 = fRam00000001464aa808;
  fStack_16c = _DAT_1464aa80c;
  local_1f8 = _DAT_1464aa800;
  fStack_1f4 = fRam00000001464aa804;
  fStack_1f0 = fRam00000001464aa808;
  fStack_1ec = _DAT_1464aa80c;
  if (uVar17 != (*(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1))
  goto LAB_1425f680e;
  lVar14 = *(longlong *)(param_2 + 0x18);
  if (uVar17 == 0) {
    if ((((*(byte *)(lVar14 + 0x71b) & 4) == 0) &&
        (cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0')) && (DAT_1468c21ae != '\0')) {
      DVar9 = GetCurrentThreadId();
      lVar11 = 0x930;
      if (DVar9 == DAT_1468c21c0) goto LAB_1425f672b;
    }
    else {
LAB_1425f672b:
      lVar11 = 0x210;
    }
    pfVar12 = (float *)(lVar11 + lVar14);
    fVar30 = *pfVar12;
    fVar2 = pfVar12[1];
    fVar3 = pfVar12[2];
    fVar29 = pfVar12[3];
    fVar24 = fVar2 + fVar2;
    fVar25 = fVar3 + fVar3;
    fVar26 = (fVar30 + fVar30) * fVar30;
    fStack_204 = fVar29 * (fVar30 + fVar30);
    fStack_224 = fVar29 * fVar25 + fVar30 * fVar24;
    fStack_210 = fStack_204 + fVar2 * fVar25;
    local_208 = fVar29 * fVar24 + fVar30 * fVar25;
    local_218 = fVar30 * fVar24 - fVar29 * fVar25;
    fStack_204 = fVar2 * fVar25 - fStack_204;
    fStack_220 = fVar30 * fVar25 - fVar29 * fVar24;
    local_228 = (float)((uint)(_DAT_146b047f0 - (fVar25 * fVar3 + fVar24 * fVar2)) & _DAT_146b04800)
    ;
    fStack_214 = (float)((uint)(fRam0000000146b047f4 - (fVar25 * fVar3 + fVar26)) &
                        uRam0000000146b04804);
    fStack_200 = (float)((uint)(fRam0000000146b047f8 - (fVar24 * fVar2 + fVar26)) &
                        uRam0000000146b04808);
    fStack_21c = (float)((uint)(fRam0000000146b047fc - (fVar26 + fVar26)) & uRam0000000146b0480c);
    puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar14);
    local_1f8 = (float)*puVar1;
    fStack_1f4 = (float)puVar1[1];
    fStack_1f0 = (float)puVar1[2];
    fStack_1ec = fRam0000000146b047fc;
    fStack_20c = fStack_21c;
    fStack_1fc = fStack_21c;
    pfVar12 = (float *)FMatrix::InverseFast(&local_228);
    local_228 = *pfVar12;
    fStack_224 = pfVar12[1];
    fStack_220 = pfVar12[2];
    fStack_18c = pfVar12[3];
    local_218 = pfVar12[4];
    fStack_214 = pfVar12[5];
    fStack_210 = pfVar12[6];
    fStack_17c = pfVar12[7];
    local_208 = pfVar12[8];
    fStack_204 = pfVar12[9];
    fStack_200 = pfVar12[10];
    fStack_19c = pfVar12[0xb];
    local_1f8 = pfVar12[0xc];
    fStack_1f4 = pfVar12[0xd];
    fStack_1f0 = pfVar12[0xe];
    fStack_16c = pfVar12[0xf];
    goto LAB_1425f680e;
  }
  if ((((*(byte *)(lVar14 + 0x71b) & 4) == 0) &&
      (cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    lVar11 = 0x930;
    if (DVar9 == DAT_1468c21c0) goto LAB_1425f6656;
  }
  else {
LAB_1425f6656:
    lVar11 = 0x210;
  }
  pfVar12 = (float *)(lVar11 + lVar14);
  fVar30 = *pfVar12;
  fVar2 = pfVar12[1];
  fVar3 = pfVar12[2];
  fVar29 = pfVar12[3];
  fVar24 = fVar2 + fVar2;
  fVar25 = fVar3 + fVar3;
  fVar26 = (fVar30 + fVar30) * fVar30;
  fStack_204 = (fVar30 + fVar30) * fVar29;
  fStack_224 = fVar25 * fVar29 + fVar24 * fVar30;
  fStack_210 = fStack_204 + fVar25 * fVar2;
  local_208 = fVar24 * fVar29 + fVar25 * fVar30;
  local_218 = fVar24 * fVar30 - fVar25 * fVar29;
  fStack_204 = fVar25 * fVar2 - fStack_204;
  fStack_220 = fVar25 * fVar30 - fVar24 * fVar29;
  local_228 = (float)((uint)(_DAT_146b047f0 - (fVar25 * fVar3 + fVar24 * fVar2)) & _DAT_146b04800);
  fStack_214 = (float)((uint)(fRam0000000146b047f4 - (fVar25 * fVar3 + fVar26)) &
                      uRam0000000146b04804);
  fStack_200 = (float)((uint)(fRam0000000146b047f8 - (fVar24 * fVar2 + fVar26)) &
                      uRam0000000146b04808);
  fStack_19c = (float)((uint)(fRam0000000146b047fc - (fVar26 + fVar26)) & uRam0000000146b0480c);
  pfVar12 = (float *)(lVar11 + 0x10 + lVar14);
  local_1f8 = *pfVar12;
  fStack_1f4 = pfVar12[1];
  fStack_1f0 = pfVar12[2];
  fStack_18c = fStack_19c;
  fStack_17c = fStack_19c;
  fStack_16c = fRam0000000146b047fc;
LAB_1425f680e:
  lVar14 = *(longlong *)(param_2 + 0x108);
  iVar10 = *(int *)(param_2 + 0x128) + -1;
  lVar11 = *(longlong *)(param_2 + 0x100);
  iVar16 = *(int *)(param_2 + 0x124);
  lVar21 = (longlong)iVar10;
  fStack_21c = fStack_18c;
  fStack_20c = fStack_17c;
  fStack_1fc = fStack_19c;
  fStack_1ec = fStack_16c;
  local_1e8 = lVar14;
  local_1a8 = local_208;
  fStack_1a4 = fStack_204;
  fStack_1a0 = fStack_200;
  local_198 = local_228;
  fStack_194 = fStack_224;
  fStack_190 = fStack_220;
  local_188 = local_218;
  fStack_184 = fStack_214;
  fStack_180 = fStack_210;
  local_178 = local_1f8;
  fStack_174 = fStack_1f4;
  fStack_170 = fStack_1f0;
  if (-1 < iVar10) {
    do {
      lVar15 = (ulonglong)((uint)*(ushort *)(lVar14 + lVar21 * 2) * iVar16) + lVar11;
      if ((*(uint *)(lVar15 + 0x68) & 0x4000000) == 0) {
        fVar30 = *(float *)(lVar15 + 0x10);
        fVar2 = *(float *)(lVar15 + 0x14);
        fVar3 = *(float *)(lVar15 + 0x18);
        local_248 = *(float *)(lVar15 + 0x10);
        uStack_244 = *(undefined4 *)(lVar15 + 0x14);
        uStack_240 = *(undefined4 *)(lVar15 + 0x18);
        local_288 = *(uint *)(lVar15 + 0x8c) ^ (uVar20 - uVar19) - uVar18 ^ uVar19 >> 0xf;
        local_278 = 0;
        local_270 = 0;
        uStack_23c = 0x3f800000;
        fVar29 = local_178 * 1.0 + fVar3 * local_1a8 + fVar2 * local_188 + fVar30 * local_198;
        fVar24 = fStack_174 * 1.0 + fVar3 * fStack_1a4 + fVar2 * fStack_184 + fVar30 * fStack_194;
        fVar30 = fStack_170 * 1.0 + fVar3 * fStack_1a0 + fVar2 * fStack_180 + fVar30 * fStack_190;
        if ((*(ushort *)(param_1 + 0x90) & 2) == 0) {
          uVar23 = *(undefined4 *)(lVar15 + 0xc);
        }
        else {
          uVar23 = *(undefined4 *)(param_2 + 0x13c);
        }
        if ((*(byte *)(param_1 + 0xe8) & 2) == 0) {
          uVar31 = *(undefined4 *)(lVar15 + 0xc);
        }
        else {
          uVar31 = *(undefined4 *)(param_2 + 0x13c);
        }
        if ((*(ushort *)(param_1 + 0x140) & 2) == 0) {
          uVar35 = *(undefined4 *)(lVar15 + 0xc);
        }
        else {
          uVar35 = *(undefined4 *)(param_2 + 0x13c);
        }
        if ((*(ushort *)(param_1 + 0x140) & 4) == 0) {
          uVar27 = *(undefined4 *)(lVar15 + 0xc);
        }
        else {
          uVar27 = *(undefined4 *)(param_2 + 0x13c);
        }
        puVar13 = &local_288;
        if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
          puVar13 = (uint *)0x0;
        }
        local_284 = local_288;
        pfVar12 = (float *)FUN_1424118e0(param_1 + 0x40,local_118,uVar23,
                                         *(undefined8 *)(param_2 + 0x18),0,puVar13);
        fVar2 = *pfVar12;
        fVar3 = pfVar12[1];
        puVar13 = &local_288;
        if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
          puVar13 = (uint *)0x0;
        }
        local_280 = pfVar12[2] * 0.01;
        pfVar12 = (float *)FUN_1424118e0(param_1 + 0x98,local_10c,uVar31,
                                         *(undefined8 *)(param_2 + 0x18),0,puVar13);
        puVar13 = &local_288;
        if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
          puVar13 = (uint *)0x0;
        }
        fVar33 = *pfVar12 * 0.01;
        fVar34 = pfVar12[1] * 0.01;
        fVar32 = pfVar12[2] * 0.01;
        pfVar12 = (float *)FUN_1424118e0(param_1 + 0xf0,local_100,uVar35,
                                         *(undefined8 *)(param_2 + 0x18),0,puVar13);
        fVar25 = pfVar12[2];
        fVar26 = *pfVar12;
        fVar4 = pfVar12[1];
        puVar13 = &local_288;
        if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
          puVar13 = (uint *)0x0;
        }
        pfVar12 = (float *)FUN_1424118e0(param_1 + 0x148,local_f4,uVar27,
                                         *(undefined8 *)(param_2 + 0x18),0,puVar13);
        fVar5 = pfVar12[2];
        fVar6 = pfVar12[1];
        fVar7 = *pfVar12;
        if ((*(byte *)(param_1 + 0xe8) & 4) != 0) {
          fVar28 = *(float *)(param_2 + 0x138);
          fVar32 = fVar32 * fVar28;
          fVar33 = fVar28 * fVar33;
          fVar34 = fVar28 * fVar34;
        }
        fVar28 = param_4;
        if (((*(byte *)(param_1 + 0x140) & 8) != 0) &&
           (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x6f0) + 0x28) == '\0')) {
          fVar28 = 1.0 / *(float *)(param_1 + 0x144);
        }
        fVar22 = param_4 + *(float *)(param_1 + 0x198);
        *(float *)(param_1 + 0x198) = fVar22;
        while ((fVar28 <= fVar22 && (0.0 < fVar28))) {
          local_298 = fVar2 * 0.01 * fVar29 + fVar33;
          local_294 = fVar3 * 0.01 * fVar24 + fVar34;
          local_290 = local_280 * fVar30 + fVar32;
          FUN_1415b9a00(&local_298,local_1c0);
          local_268 = local_298 + 31.416;
          local_264 = local_294 + 47.853;
          local_260 = local_290 + 12.793;
          FUN_1415b9a00(&local_268,local_1d0);
          local_25c = local_298 - 233.145;
          local_258 = local_294 - 113.408;
          local_254 = local_290 - 185.31;
          FUN_1415b9a00(&local_25c,&local_1e0);
          fVar29 = fVar29 + fVar26 * 100.0 * fVar7 * fVar28 * (local_1dc - local_1c8);
          fVar24 = fVar24 + fVar4 * fVar6 * 100.0 * fVar28 * (local_1b8 - local_1e0);
          fVar22 = *(float *)(param_1 + 0x198) - fVar28;
          fVar30 = fVar30 + fVar25 * fVar5 * 100.0 * fVar28 * (local_1d0[0] - local_1bc);
          *(float *)(param_1 + 0x198) = fVar22;
        }
        FMatrix::InverseFast(&local_228);
        uStack_22c = 0x3f800000;
        local_160 = fVar24 * fStack_140 + fVar29 * fStack_150 +
                    fVar30 * fStack_130 + fStack_120 * 1.0;
        *(ulonglong *)(lVar15 + 0x10) =
             CONCAT44(fVar24 * fStack_144 + fVar29 * fStack_154 +
                      fVar30 * fStack_134 + fStack_124 * 1.0,
                      fVar24 * local_148 + fVar29 * local_158 + fVar30 * local_138 + local_128 * 1.0
                     );
        *(float *)(lVar15 + 0x18) = local_160;
        lVar14 = local_1e8;
        local_238 = fVar29;
        fStack_234 = fVar24;
        fStack_230 = fVar30;
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  return;
}



// FUNCTION 1425f6e40 hb_shape body=23 status=ok
// SIG undefined hb_shape(void)

void hb_shape(void)

{
  FUN_1425f7b50();
  return;
}



// FUNCTION 1425f6e60 FUN_1425f6e60 body=178 status=ok
// SIG undefined FUN_1425f6e60(void)

void FUN_1425f6e60(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(longlong *)(param_2 + 0x18) != 0) && (lVar4 = FUN_142628290(param_2), lVar4 != 0)) &&
     (lVar4 = FUN_14233fea0(*(undefined8 *)(param_2 + 0x18)), lVar4 != 0)) {
    iVar5 = *(int *)(param_2 + 0x128) + -1;
    iVar1 = *(int *)(param_2 + 0x124);
    lVar2 = *(longlong *)(param_2 + 0x100);
    lVar3 = *(longlong *)(param_2 + 0x108);
    lVar7 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar7 * 2) * iVar1) + lVar2;
        if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
          FUN_1425dc750(param_1,lVar6,lVar4);
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  return;
}



// FUNCTION 1425f6f20 FUN_1425f6f20 body=2265 status=ok
// SIG undefined FUN_1425f6f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425f6f20(longlong param_1,float param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
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
  undefined8 local_218;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
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
  
  lVar9 = *(longlong *)(param_1 + 0x18);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1) == 0) {
    local_188 = _DAT_1464aa7d0;
    uStack_180 = _DAT_1464aa7d8;
    local_178 = _DAT_1464aa7e0;
    uStack_170 = _DAT_1464aa7e8;
    local_168 = _DAT_1464aa7f0;
    uStack_160 = _DAT_1464aa7f8;
    local_158 = _DAT_1464aa800;
    uStack_150 = uRam00000001464aa808;
  }
  else {
    fVar17 = *(float *)(lVar9 + 0x210);
    fVar11 = *(float *)(lVar9 + 0x214);
    fVar20 = *(float *)(lVar9 + 0x218);
    fVar12 = *(float *)(lVar9 + 0x21c);
    fVar13 = *(float *)(lVar9 + 0x230);
    fVar21 = *(float *)(lVar9 + 0x234);
    fVar22 = *(float *)(lVar9 + 0x238);
    fVar14 = fVar11 + fVar11;
    fVar15 = fVar20 + fVar20;
    fVar19 = fVar17 * (fVar17 + fVar17);
    fVar18 = fVar12 * (fVar17 + fVar17);
    uVar16 = (uint)((fRam0000000146b047fc - (fVar19 + fVar19)) * *(float *)(lVar9 + 0x23c)) &
             uRam0000000146b0480c;
    local_158 = *(undefined8 *)(lVar9 + 0x220);
    uStack_150 = CONCAT44(fRam0000000146b047fc,*(undefined4 *)(lVar9 + 0x228));
    local_188 = CONCAT44((fVar12 * fVar15 + fVar17 * fVar14) * fVar13,
                         (uint)((_DAT_146b047f0 - (fVar20 * fVar15 + fVar11 * fVar14)) * fVar13) &
                         _DAT_146b04800);
    uStack_180 = CONCAT44(uVar16,fVar13 * (fVar17 * fVar15 - fVar12 * fVar14));
    local_178 = CONCAT44((uint)((fRam0000000146b047f4 - (fVar20 * fVar15 + fVar19)) * fVar21) &
                         uRam0000000146b04804,fVar21 * (fVar17 * fVar14 - fVar12 * fVar15));
    uStack_170 = CONCAT44(uVar16,(fVar18 + fVar11 * fVar15) * fVar21);
    local_168 = CONCAT44(fVar22 * (fVar11 * fVar15 - fVar18),
                         (fVar12 * fVar14 + fVar17 * fVar15) * fVar22);
    uStack_160 = CONCAT44(uVar16,(uint)((fRam0000000146b047f8 - (fVar11 * fVar14 + fVar19)) * fVar22
                                       ) & uRam0000000146b04808);
  }
  if (((*(char *)(lVar9 + 0x719) < '\0') || (*(longlong *)(lVar9 + 0x6f0) == 0)) ||
     ((*(byte *)(*(longlong *)(lVar9 + 0x6f0) + 0x98) & 1) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    *(undefined8 *)(param_1 + 0x15c) = _DAT_1468b5d90;
    uVar6 = DAT_1468b5d98;
    *(undefined4 *)(param_1 + 0x164) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
    *(undefined4 *)(param_1 + 0x158) = uVar6;
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    iVar10 = 0;
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xb0);
    if (0 < *(int *)(param_1 + 0x128)) {
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x100);
        lVar8 = (longlong)
                (int)((uint)*(ushort *)(lVar9 + *(longlong *)(param_1 + 0x108)) *
                     *(int *)(param_1 + 0x124));
        uVar16 = *(uint *)(lVar8 + 0x68 + lVar3);
        uVar1 = *(undefined8 *)(lVar8 + 0x10 + lVar3);
        fVar17 = (float)((ulonglong)uVar1 >> 0x20);
        *(undefined8 *)(lVar8 + lVar3) = uVar1;
        *(undefined4 *)(lVar8 + 8 + lVar3) = *(undefined4 *)(lVar8 + 0x18 + lVar3);
        *(uint *)(lVar8 + 0x68 + lVar3) = uVar16 & 0xfdffffff;
        if (((uVar16 >> 0x19 & 1) == 0) || ((~bVar2 & 1) == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        local_218._0_4_ = (float)uVar1;
        if (((uVar16 >> 0x1a & 1) != 0) || (bVar4)) {
          fVar20 = *(float *)(lVar8 + 0x18 + lVar3);
          fVar11 = *(float *)(lVar8 + 0x38 + lVar3);
        }
        else {
          if ((uVar16 >> 0x1c & 1) == 0) {
            fVar11 = param_2 * *(float *)(lVar8 + 0x3c + lVar3);
            fVar12 = param_2 * *(float *)(lVar8 + 0x40 + lVar3);
            fVar13 = param_2 * *(float *)(lVar8 + 0x44 + lVar3);
            local_218._0_4_ = fVar11 + *(float *)(lVar8 + 0x10 + lVar3);
            fVar17 = fVar12 + *(float *)(lVar8 + 0x14 + lVar3);
            fVar20 = fVar13 + *(float *)(lVar8 + 0x18 + lVar3);
            *(float *)(lVar8 + 0x20 + lVar3) = fVar11 + *(float *)(lVar8 + 0x20 + lVar3);
            *(float *)(lVar8 + 0x24 + lVar3) = fVar12 + *(float *)(lVar8 + 0x24 + lVar3);
            *(float *)(lVar8 + 0x28 + lVar3) = fVar13 + *(float *)(lVar8 + 0x28 + lVar3);
          }
          else {
            fVar20 = *(float *)(lVar8 + 0x18 + lVar3);
          }
          fVar11 = *(float *)(lVar8 + 0x38 + lVar3);
          if ((uVar16 >> 0x1d & 1) == 0) {
            fVar11 = param_2 * *(float *)(lVar8 + 0x58 + lVar3) + fVar11;
          }
        }
        fVar12 = *(float *)(param_1 + 0x1c0);
        local_218 = CONCAT44(fVar17 + *(float *)(param_1 + 0x1bc),
                             (float)local_218 + *(float *)(param_1 + 0x1b8));
        *(float *)(lVar8 + lVar3) = *(float *)(param_1 + 0x1b8) + *(float *)(lVar8 + lVar3);
        *(float *)(lVar8 + 4 + lVar3) = *(float *)(lVar8 + 4 + lVar3) + *(float *)(param_1 + 0x1bc);
        *(float *)(lVar8 + 8 + lVar3) = *(float *)(lVar8 + 8 + lVar3) + *(float *)(param_1 + 0x1c0);
        fVar17 = (float)(int)(fVar11 * 0.15915494) * 6.2831855;
        if (ABS(fVar11) < ABS(fVar17)) {
          fVar17 = fVar11;
        }
        *(undefined8 *)(lVar8 + 0x10 + lVar3) = local_218;
        *(float *)(lVar8 + 0x18 + lVar3) = fVar20 + fVar12;
        *(float *)(lVar8 + 0x38 + lVar3) = fVar11 - fVar17;
        if (bVar5) {
          USkeletalMesh::GetBounds(*(undefined8 *)(param_1 + 0x200),&local_1e8);
          local_1c8 = *(float *)(lVar8 + 0x5c + lVar3);
          fStack_114 = *(float *)(lVar8 + 0x14 + lVar3);
          fStack_1b4 = *(float *)(lVar8 + 0x60 + lVar3);
          local_118 = *(float *)(lVar8 + 0x10 + lVar3);
          fStack_110 = *(float *)(lVar8 + 0x18 + lVar3);
          fStack_1a0 = *(float *)(lVar8 + 100 + lVar3);
          uStack_1c4 = 0;
          uStack_10c = 0x3f800000;
          fVar23 = local_1c8 * 1.0 + 0.0 + 0.0 + local_118 * 0.0;
          fVar24 = local_1c8 * 0.0 + 0.0 + 0.0 + fStack_114 * 0.0;
          fVar25 = local_1c8 * 0.0 + 0.0 + 0.0 + fStack_110 * 0.0;
          fVar26 = local_1c8 * 0.0 + 0.0 + 0.0 + 0.0;
          uStack_1bc = 0;
          uStack_1b0 = 0;
          fVar14 = fStack_1b4 * 0.0 + 0.0 + 0.0 + local_118 * 0.0;
          fVar15 = fStack_1b4 * 1.0 + 0.0 + 0.0 + fStack_114 * 0.0;
          fVar18 = fStack_1b4 * 0.0 + 0.0 + 0.0 + fStack_110 * 0.0;
          fVar19 = fStack_1b4 * 0.0 + 0.0 + 0.0 + 0.0;
          local_1a8 = 0;
          uStack_19c = 0;
          fVar17 = fStack_1a0 * 0.0 + 0.0 + local_118 * 0.0;
          fVar11 = fStack_1a0 * 0.0 + 0.0 + fStack_114 * 0.0;
          fVar20 = fStack_1a0 * 1.0 + 0.0 + fStack_110 * 0.0;
          fVar12 = fStack_1a0 * 0.0 + 0.0 + 0.0;
          fVar13 = local_118 * 1.0 + 0.0;
          fVar21 = fStack_114 * 1.0 + 0.0;
          fVar22 = fStack_110 * 1.0 + 0.0;
          local_108 = fVar24 * (float)local_178 + fVar23 * (float)local_188 +
                      fVar25 * (float)local_168 + fVar26 * (float)local_158;
          fStack_104 = fVar24 * local_178._4_4_ + fVar23 * local_188._4_4_ +
                       fVar25 * local_168._4_4_ + fVar26 * local_158._4_4_;
          fStack_100 = fVar24 * (float)uStack_170 + fVar23 * (float)uStack_180 +
                       fVar25 * (float)uStack_160 + fVar26 * (float)uStack_150;
          fStack_fc = fVar24 * uStack_170._4_4_ + fVar23 * uStack_180._4_4_ +
                      fVar25 * uStack_160._4_4_ + fVar26 * uStack_150._4_4_;
          local_f8 = fVar15 * (float)local_178 + fVar14 * (float)local_188 +
                     fVar18 * (float)local_168 + fVar19 * (float)local_158;
          fStack_f4 = fVar15 * local_178._4_4_ + fVar14 * local_188._4_4_ + fVar18 * local_168._4_4_
                      + fVar19 * local_158._4_4_;
          fStack_f0 = fVar15 * (float)uStack_170 + fVar14 * (float)uStack_180 +
                      fVar18 * (float)uStack_160 + fVar19 * (float)uStack_150;
          fStack_ec = fVar15 * uStack_170._4_4_ + fVar14 * uStack_180._4_4_ +
                      fVar18 * uStack_160._4_4_ + fVar19 * uStack_150._4_4_;
          local_e8 = fVar11 * (float)local_178 + fVar17 * (float)local_188 +
                     fVar20 * (float)local_168 + fVar12 * (float)local_158;
          fStack_e4 = fVar11 * local_178._4_4_ + fVar17 * local_188._4_4_ + fVar20 * local_168._4_4_
                      + fVar12 * local_158._4_4_;
          fStack_e0 = fVar11 * (float)uStack_170 + fVar17 * (float)uStack_180 +
                      fVar20 * (float)uStack_160 + fVar12 * (float)uStack_150;
          fStack_dc = fVar11 * uStack_170._4_4_ + fVar17 * uStack_180._4_4_ +
                      fVar20 * uStack_160._4_4_ + fVar12 * uStack_150._4_4_;
          local_d8 = fVar21 * (float)local_178 + fVar13 * (float)local_188 +
                     fVar22 * (float)local_168 + (float)local_158 * 1.0;
          fStack_d4 = fVar21 * local_178._4_4_ + fVar13 * local_188._4_4_ + fVar22 * local_168._4_4_
                      + local_158._4_4_ * 1.0;
          fStack_d0 = fVar21 * (float)uStack_170 + fVar13 * (float)uStack_180 +
                      fVar22 * (float)uStack_160 + (float)uStack_150 * 1.0;
          fStack_cc = fVar21 * uStack_170._4_4_ + fVar13 * uStack_180._4_4_ +
                      fVar22 * uStack_160._4_4_ + uStack_150._4_4_ * 1.0;
          pfVar7 = (float *)FBoxSphereBounds::TransformBy(&local_1e8,&local_208,&local_108);
          local_1e8 = *pfVar7;
          fStack_1e4 = pfVar7[1];
          fStack_1e0 = pfVar7[2];
          fStack_1dc = pfVar7[3];
          uVar1 = *(undefined8 *)(pfVar7 + 4);
          local_1d0 = pfVar7[6];
          local_1d8._0_4_ = (float)uVar1;
          local_1f8 = fStack_1e4 + (float)local_1d8;
          fStack_204 = fStack_1e4 - (float)local_1d8;
          local_1d8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          fStack_1f4 = fStack_1e0 + local_1d8._4_4_;
          fStack_200 = fStack_1e0 - local_1d8._4_4_;
          fStack_1fc = local_1e8 + fStack_1dc;
          local_208 = local_1e8 - fStack_1dc;
          local_1f0 = CONCAT31(local_1f0._1_3_,1);
          local_1d8 = uVar1;
          if (*(char *)(param_1 + 0x168) == '\0') {
            *(ulonglong *)(param_1 + 0x150) = CONCAT44(fStack_204,local_208);
            *(ulonglong *)(param_1 + 0x158) = CONCAT44(fStack_1fc,fStack_200);
            *(ulonglong *)(param_1 + 0x160) = CONCAT44(fStack_1f4,local_1f8);
            *(undefined4 *)(param_1 + 0x168) = local_1f0;
          }
          else {
            fVar17 = fStack_204;
            if (*(float *)(param_1 + 0x154) <= fStack_204) {
              fVar17 = *(float *)(param_1 + 0x154);
            }
            fVar11 = fStack_1fc;
            if (fStack_1fc <= *(float *)(param_1 + 0x15c)) {
              fVar11 = *(float *)(param_1 + 0x15c);
            }
            fVar20 = fStack_1f4;
            if (fStack_1f4 <= *(float *)(param_1 + 0x164)) {
              fVar20 = *(float *)(param_1 + 0x164);
            }
            fVar12 = *(float *)(param_1 + 0x150);
            if (local_208 <= *(float *)(param_1 + 0x150)) {
              fVar12 = local_208;
            }
            *(float *)(param_1 + 0x154) = fVar17;
            *(float *)(param_1 + 0x15c) = fVar11;
            *(float *)(param_1 + 0x164) = fVar20;
            *(float *)(param_1 + 0x150) = fVar12;
            fVar17 = *(float *)(param_1 + 0x158);
            if (fStack_200 <= *(float *)(param_1 + 0x158)) {
              fVar17 = fStack_200;
            }
            *(float *)(param_1 + 0x158) = fVar17;
            fVar17 = *(float *)(param_1 + 0x160);
            if (*(float *)(param_1 + 0x160) <= local_1f8) {
              fVar17 = local_1f8;
            }
            *(float *)(param_1 + 0x160) = fVar17;
          }
        }
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 2;
      } while (iVar10 < *(int *)(param_1 + 0x128));
    }
  }
  return;
}



// FUNCTION 1425f7800 FUN_1425f7800 body=839 status=ok
// SIG undefined FUN_1425f7800(void)

void FUN_1425f7800(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 local_38 [12];
  undefined1 local_2c [20];
  
  if ((*(byte *)(param_1 + 0x16c) & 1) == 0) {
    lVar4 = 0;
    plVar9 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x38);
    plVar10 = plVar9 + *(int *)(*(longlong *)(param_2 + 0x28) + 0x40);
    for (; plVar9 != plVar10; plVar9 = plVar9 + 1) {
      lVar1 = *plVar9;
      if (lVar1 != 0) {
        lVar3 = FUN_1429c8930();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar4 = lVar1 + 0x38;
          plVar10 = *(longlong **)(lVar1 + 0x80);
        }
        else {
          lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            lVar3 = UTexture2D::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1425f7902;
          }
          plVar10 = *(longlong **)(lVar1 + 0xc0);
        }
        if (plVar10 != (longlong *)0x0) {
          lVar4 = UDistributionVectorConstant::GetPrivateStaticClass();
          if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            *(longlong *)(param_1 + 0x170) = plVar10[7];
            fVar12 = *(float *)(plVar10 + 8);
            goto LAB_1425f7925;
          }
          lVar4 = UDistributionVectorUniform::GetPrivateStaticClass();
          if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pfVar5 = (float *)(**(code **)(*plVar10 + 0x2b0))(plVar10,local_38);
            puVar8 = local_2c;
          }
          else {
            lVar4 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
            if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x298))(plVar10,local_2c,0,0,0,0);
              *(undefined8 *)(param_1 + 0x170) = *puVar7;
              fVar12 = *(float *)(puVar7 + 1);
              goto LAB_1425f7925;
            }
            lVar4 = UDistributionVectorUniformCurve::GetPrivateStaticClass();
            if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
              return;
            }
            pfVar5 = (float *)(**(code **)(*plVar10 + 0x2b0))(plVar10,local_2c);
            puVar8 = local_38;
          }
          pfVar6 = (float *)(**(code **)(*plVar10 + 0x2b8))(plVar10,puVar8);
          fVar12 = (pfVar6[2] + pfVar5[2]) * 0.5;
          uVar11 = CONCAT44((pfVar6[1] + pfVar5[1]) * 0.5,(*pfVar5 + *pfVar6) * 0.5);
          goto LAB_1425f791d;
        }
        if (lVar4 != 0) {
          puVar7 = (undefined8 *)FUN_1424118e0(lVar4,local_2c,0,0,0,0);
          *(undefined8 *)(param_1 + 0x170) = *puVar7;
          fVar12 = *(float *)(puVar7 + 1);
          goto LAB_1425f7925;
        }
        break;
      }
LAB_1425f7902:
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x160);
  fVar12 = *(float *)(param_1 + 0x168);
LAB_1425f791d:
  *(undefined8 *)(param_1 + 0x170) = uVar11;
LAB_1425f7925:
  *(float *)(param_1 + 0x178) = fVar12;
  return;
}



// FUNCTION 1425f7b50 FUN_1425f7b50 body=2013 status=ok
// SIG undefined FUN_1425f7b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425f7b50(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  byte bVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint local_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float local_148;
  uint uStack_144;
  float fStack_140;
  uint uStack_13c;
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  
  lVar9 = FUN_142627a50(param_2,param_1);
  FUN_1425f7800(param_1,param_2);
  lVar4 = *(longlong *)(param_2 + 0x18);
  local_188 = 1.0;
  local_178 = 1.0;
  local_168 = 1.0;
  bVar13 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1;
  if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
    local_188 = *(float *)(lVar4 + 0x230);
    fStack_184 = *(float *)(lVar4 + 0x234);
    fStack_180 = *(float *)(lVar4 + 0x238);
    uStack_17c = *(undefined4 *)(lVar4 + 0x23c);
    local_178 = fStack_184;
    fStack_174 = fStack_184;
    fStack_170 = fStack_184;
    fStack_16c = fStack_184;
    local_168 = fStack_180;
    fStack_164 = fStack_180;
    fStack_160 = fStack_180;
    fStack_15c = fStack_180;
  }
  if ((((*(byte *)(lVar4 + 0x71b) & 4) == 0) &&
      (cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar10 = 0x930;
    if (DVar6 != DAT_1468c21c0) goto LAB_1425f7c36;
  }
  lVar10 = 0x210;
LAB_1425f7c36:
  pfVar1 = (float *)(lVar4 + lVar10);
  fVar24 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar16 = pfVar1[2];
  fVar19 = pfVar1[3];
  fVar21 = fVar15 + fVar15;
  fVar23 = fVar16 + fVar16;
  fVar25 = fVar24 * (fVar24 + fVar24);
  fVar22 = (fVar24 + fVar24) * fVar19;
  fStack_154 = fVar23 * fVar19 + fVar21 * fVar24;
  fStack_140 = fVar22 + fVar23 * fVar15;
  local_148 = fVar21 * fVar24 - fVar23 * fVar19;
  fStack_150 = fVar23 * fVar24 - fVar21 * fVar19;
  local_158 = (uint)(_DAT_146b047f0 - (fVar16 * fVar23 + fVar15 * fVar21)) & _DAT_146b04800;
  uStack_144 = (uint)(fRam0000000146b047f4 - (fVar16 * fVar23 + fVar25)) & uRam0000000146b04804;
  uStack_14c = (uint)(fRam0000000146b047fc - (fVar25 + fVar25)) & uRam0000000146b0480c;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar10);
  local_128 = *puVar2;
  uStack_124 = puVar2[1];
  uStack_120 = puVar2[2];
  local_138._4_4_ = fVar23 * fVar15 - fVar22;
  local_138._0_4_ = fVar21 * fVar19 + fVar23 * fVar24;
  local_138._8_4_ = (uint)(fRam0000000146b047f8 - (fVar15 * fVar21 + fVar25)) & uRam0000000146b04808
  ;
  local_138._12_4_ = uStack_14c;
  fStack_11c = fRam0000000146b047fc;
  uStack_13c = uStack_14c;
  FUN_1425f8330(param_1,param_2,lVar9,param_4,bVar13);
  puVar12 = &local_158;
  if (bVar13 != 0) {
    puVar12 = &DAT_1464aa7d0;
  }
  FUN_1425e7210(param_1,&local_118,puVar12);
  lVar4 = *(longlong *)(param_2 + 0x100);
  iVar7 = *(int *)(param_2 + 0x128) + -1;
  lVar10 = *(longlong *)(param_2 + 0x108);
  iVar3 = *(int *)(param_2 + 0x124);
  lVar14 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      lVar11 = (ulonglong)((uint)*(ushort *)(lVar10 + lVar14 * 2) * iVar3) + lVar4;
      if ((*(uint *)(lVar11 + 0x68) & 0x4000000) == 0) {
        FMatrix::InverseFast(&local_118,&local_1c8);
        fVar24 = *(float *)(lVar11 + 0x10);
        fVar15 = *(float *)(lVar11 + 0x14);
        fVar16 = *(float *)(lVar11 + 0x18);
        fVar19 = local_198 * 1.0 + fVar16 * local_1a8 + fVar15 * local_1b8 + fVar24 * local_1c8;
        fVar21 = fStack_194 * 1.0 + fVar16 * fStack_1a4 + fVar15 * fStack_1b4 + fVar24 * fStack_1c4;
        fVar24 = fStack_190 * 1.0 + fVar16 * fStack_1a0 + fVar15 * fStack_1b0 + fVar24 * fStack_1c0;
        if ((*(byte *)(param_1 + 0x16e) & 1) == 0) {
          uVar18 = *(undefined4 *)(lVar11 + 0xc);
        }
        else {
          uVar18 = *(undefined4 *)(param_2 + 0x13c);
        }
        fVar15 = (float)FUN_1424116d0(param_1 + 0x40,uVar18,*(undefined8 *)(param_2 + 0x18),param_5)
        ;
        if ((*(byte *)(param_1 + 0x16e) & 1) == 0) {
          uVar18 = *(undefined4 *)(lVar11 + 0xc);
        }
        else {
          uVar18 = *(undefined4 *)(param_2 + 0x13c);
        }
        fVar16 = (float)FUN_1424116d0(param_1 + 0x78,uVar18,*(undefined8 *)(param_2 + 0x18),param_5)
        ;
        if ((*(byte *)(param_1 + 0x16e) & 1) == 0) {
          uVar18 = *(undefined4 *)(lVar11 + 0xc);
        }
        else {
          uVar18 = *(undefined4 *)(param_2 + 0x13c);
        }
        fVar22 = (float)FUN_1424116d0(param_1 + 0xb0,uVar18,*(undefined8 *)(param_2 + 0x18),param_5)
        ;
        if ((*(byte *)(param_1 + 0x16c) & 2) == 0) {
          fVar25 = fVar21 * fVar21 + fVar19 * fVar19;
          fVar23 = fVar25;
        }
        else {
          fVar23 = fVar21 * fVar21 + fVar19 * fVar19;
          fVar25 = fVar24 * fVar24 + fVar23;
        }
        fVar25 = (float)FUN_1424116d0(param_1 + 0xe8,SQRT(fVar25),*(undefined8 *)(param_2 + 0x18),
                                      param_5);
        if ((bVar13 == 0) && ((*(byte *)(param_1 + 0x15c) & 1) != 0)) {
          fVar20 = *(float *)(lVar11 + 0x1c) * *(float *)(lVar9 + 0x24);
          if (*(float *)(lVar11 + 0xc) < fVar20) goto LAB_1425f7f6f;
          fVar20 = (float)FUN_1424116d0(param_1 + 0x120,*(float *)(lVar11 + 0xc) - fVar20,
                                        *(undefined8 *)(param_2 + 0x18),param_5);
        }
        else {
LAB_1425f7f6f:
          fVar20 = 1.0;
        }
        if ((*(byte *)(param_1 + 0x16c) & 2) == 0) {
          fVar24 = 0.0;
        }
        fVar23 = fVar24 * fVar24 + fVar23;
        fVar17 = fVar19;
        fVar28 = fVar21;
        fVar26 = fVar24;
        if ((fVar23 != 1.0) &&
           (fVar17 = DAT_1468b5d90, fVar28 = DAT_1468b5d94, fVar26 = DAT_1468b5d98, 1e-08 <= fVar23)
           ) {
          auVar27 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
          fVar26 = auVar27._0_4_;
          fVar26 = fVar26 + fVar26 * (0.5 - fVar23 * 0.5 * fVar26 * fVar26);
          fVar26 = fVar26 + fVar26 * (0.5 - fVar23 * 0.5 * fVar26 * fVar26);
          fVar17 = fVar19 * fVar26;
          fVar28 = fVar21 * fVar26;
          fVar26 = fVar26 * fVar24;
        }
        uVar8 = *(uint *)(param_1 + 0x38) & 1;
        fVar24 = fVar17 * fVar16 + -fVar21 * fVar22;
        fVar15 = fVar26 * fVar16 + fVar15;
        fVar21 = fVar28 * fVar16 + fVar19 * fVar22;
        fVar16 = local_e8 * 0.0 + fVar15 * local_f8 + fVar21 * local_108 + fVar24 * local_118;
        fVar19 = fStack_e4 * 0.0 + fVar15 * fStack_f4 + fVar21 * fStack_104 + fVar24 * fStack_114;
        fVar24 = fStack_e0 * 0.0 + fVar15 * fStack_f0 + fVar21 * fStack_100 + fVar24 * fStack_110;
        if (bVar13 == 0) {
          if (uVar8 != 0) {
            FMatrix::InverseFast(&local_158,&local_1c8);
            goto LAB_1425f816b;
          }
        }
        else if (uVar8 != 0) {
          FMatrix::InverseFast(&local_158,&local_1c8);
LAB_1425f816b:
          fVar15 = fVar19 * fStack_1b0;
          fVar21 = fVar16 * fStack_1c4;
          fVar22 = fVar16 * fStack_1c0;
          fVar16 = local_198 * 0.0 + fVar24 * local_1a8 + fVar19 * local_1b8 + fVar16 * local_1c8;
          fVar19 = fStack_194 * 0.0 + fVar24 * fStack_1a4 + fVar19 * fStack_1b4 + fVar21;
          fVar24 = fStack_190 * 0.0 + fVar24 * fStack_1a0 + fVar15 + fVar22;
        }
        fVar15 = fVar16 * fVar25 * local_188 * fVar20 + *(float *)(lVar11 + 0x3c);
        *(float *)(lVar11 + 0x3c) = fVar15;
        *(float *)(lVar11 + 0x40) = fVar19 * fVar25 * local_178 * fVar20 + *(float *)(lVar11 + 0x40)
        ;
        *(float *)(lVar11 + 0x44) = fVar24 * fVar25 * local_168 * fVar20 + *(float *)(lVar11 + 0x44)
        ;
        iVar7 = _finite((double)fVar15);
        if ((iVar7 != 0) && (iVar7 = _finite((double)*(float *)(lVar11 + 0x40)), iVar7 != 0)) {
          _finite((double)*(float *)(lVar11 + 0x44));
        }
        iVar7 = _finite((double)*(float *)(lVar11 + 0x3c));
        if (((iVar7 == 0) || (iVar7 = _finite((double)*(float *)(lVar11 + 0x40)), iVar7 == 0)) ||
           (iVar7 = _finite((double)*(float *)(lVar11 + 0x44)), iVar7 == 0)) {
          *(ulonglong *)(lVar11 + 0x3c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          *(float *)(lVar11 + 0x44) = DAT_1468b5d98;
          *(ulonglong *)(lVar11 + 0x10) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          *(float *)(lVar11 + 0x18) = DAT_1468b5d98;
        }
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  return;
}



// FUNCTION 1425f8330 FUN_1425f8330 body=1115 status=ok
// SIG undefined FUN_1425f8330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425f8330(longlong param_1,longlong param_2,float *param_3,float param_4,char param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
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
  undefined1 auStack_138 [32];
  float local_118;
  undefined8 local_f8;
  float fStack_f0;
  undefined8 local_e8;
  float fStack_e0;
  undefined8 local_d8;
  float fStack_d0;
  undefined8 local_c8;
  float fStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (param_5 != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x15c) & 1) == 0) {
    return;
  }
  if (param_3[9] <= 0.0 && param_3[9] != 0.0) {
    param_3[9] = 0.0;
  }
  local_118 = param_4;
  if ((param_2 == 0) || (lVar3 = *(longlong *)(param_2 + 0x18), lVar3 == 0)) {
    local_f8 = _DAT_1464aa7d0;
    fStack_f0 = (float)_DAT_1464aa7d8;
    local_e8 = _DAT_1464aa7e0;
    fStack_e0 = (float)_DAT_1464aa7e8;
    local_d8 = _DAT_1464aa7f0;
    fStack_d0 = (float)_DAT_1464aa7f8;
    local_c8 = _DAT_1464aa800;
    fStack_c0 = (float)uRam00000001464aa808;
    goto LAB_1425f84f7;
  }
  if ((((*(byte *)(lVar3 + 0x71b) & 4) == 0) &&
      (cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 0x930;
    if (DVar5 == DAT_1468c21c0) goto LAB_1425f841d;
  }
  else {
LAB_1425f841d:
    lVar6 = 0x210;
  }
  pfVar1 = (float *)(lVar6 + lVar3);
  fVar13 = *pfVar1;
  fVar14 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar7 = pfVar1[3];
  fVar9 = fVar14 + fVar14;
  fVar11 = fVar8 + fVar8;
  fVar12 = (fVar13 + fVar13) * fVar13;
  fVar10 = (fVar13 + fVar13) * fVar7;
  fStack_e0 = fVar10 + fVar11 * fVar14;
  fStack_f0 = fVar11 * fVar13 - fVar9 * fVar7;
  fStack_d0 = (float)((uint)(fRam0000000146b047f8 - (fVar9 * fVar14 + fVar12)) &
                     uRam0000000146b04808);
  puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar3);
  local_c8 = *puVar2;
  fStack_c0 = *(float *)(puVar2 + 1);
  local_f8 = CONCAT44(fVar11 * fVar7 + fVar9 * fVar13,
                      (uint)(_DAT_146b047f0 - (fVar11 * fVar8 + fVar9 * fVar14)) & _DAT_146b04800);
  local_e8 = CONCAT44((uint)(fRam0000000146b047f4 - (fVar11 * fVar8 + fVar12)) &
                      uRam0000000146b04804,fVar9 * fVar13 - fVar11 * fVar7);
  local_d8 = CONCAT44(fVar11 * fVar14 - fVar10,fVar9 * fVar7 + fVar11 * fVar13);
LAB_1425f84f7:
  fVar13 = param_3[2];
  fVar14 = *param_3;
  fVar15 = (float)local_c8 * 0.0 + (float)local_d8 * 0.0 +
           (float)local_e8 * 0.0 + (float)local_f8 * 1.0;
  fVar16 = local_c8._4_4_ * 0.0 + local_d8._4_4_ * 0.0 + local_e8._4_4_ * 0.0 + local_f8._4_4_ * 1.0
  ;
  fVar17 = fStack_c0 * 0.0 + fStack_d0 * 0.0 + fStack_e0 * 0.0 + fStack_f0 * 1.0;
  fVar8 = param_3[1];
  *param_3 = (float)local_c8;
  param_3[1] = local_c8._4_4_;
  param_3[2] = fStack_c0;
  fVar9 = fVar17 - param_3[5];
  fVar10 = (float)local_c8 * 0.0 + (float)local_d8 * 0.0 +
           (float)local_e8 * 1.0 + (float)local_f8 * 0.0;
  fVar11 = local_c8._4_4_ * 0.0 + local_d8._4_4_ * 0.0 + local_e8._4_4_ * 1.0 + local_f8._4_4_ * 0.0
  ;
  fVar12 = fStack_c0 * 0.0 + fStack_d0 * 0.0 + fStack_e0 * 1.0 + fStack_f0 * 0.0;
  fVar7 = fVar16 - param_3[4];
  fVar14 = SQRT(((float)local_c8 - fVar14) * ((float)local_c8 - fVar14) +
                (local_c8._4_4_ - fVar8) * (local_c8._4_4_ - fVar8) +
                (fStack_c0 - fVar13) * (fStack_c0 - fVar13));
  fVar13 = fVar15 - param_3[3];
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  *(ulonglong *)(param_3 + 3) = CONCAT44(fVar16,fVar15);
  param_3[5] = fVar17;
  fVar15 = fVar12 - param_3[8];
  fVar8 = fVar10 - param_3[6];
  fVar13 = SQRT(fVar13 * fVar13 + fVar7 * fVar7 + fVar9 * fVar9);
  fVar7 = fVar11 - param_3[7];
  if (fVar13 <= fVar14) {
    fVar13 = fVar14;
  }
  *(ulonglong *)(param_3 + 6) = CONCAT44(fVar11,fVar10);
  param_3[8] = fVar12;
  fVar14 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar15 * fVar15);
  if (fVar14 <= fVar13) {
    fVar14 = fVar13;
  }
  if (((*(byte *)(param_1 + 0x15c) & 1) == 0) ||
     (fVar14 < *(float *)(param_1 + 0x158) || fVar14 == *(float *)(param_1 + 0x158))) {
    if (param_3[9] <= 1e+06) {
      param_3[9] = param_3[9] + local_118;
    }
    else {
      param_3[9] = INFINITY;
    }
  }
  else {
    param_3[9] = 0.0;
  }
  return;
}



// FUNCTION 1425f8790 FUN_1425f8790 body=256 status=ok
// SIG undefined FUN_1425f8790(void)

void FUN_1425f8790(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x170);
  }
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  if (*(char *)(param_1 + 0x50) == -1) {
    iVar1 = *(int *)(param_1 + 0x38) + 0x40;
    *(int *)(param_1 + 0x38) = iVar1;
    if (*(int *)(param_1 + 0x3c) < iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
    }
    iVar1 = *(int *)(param_1 + 0x48) + 0x40;
    *(int *)(param_1 + 0x48) = iVar1;
    lVar3 = lVar2;
    if (*(int *)(param_1 + 0x4c) < iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x40);
    }
    do {
      iVar1 = rand();
      *(char *)(lVar3 + *(longlong *)(param_1 + 0x40)) = (char)(iVar1 / 0xff) + (char)iVar1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < 0x40);
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_1 + 0x50) == '\0';
  }
  *(bool *)(param_1 + 0x50) = bVar4;
  do {
    iVar1 = rand();
    *(char *)(lVar2 + *(longlong *)(((ulonglong)bVar4 + 3) * 0x10 + param_1)) =
         (char)(iVar1 / 0xff) + (char)iVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 < 0x40);
  return;
}



// FUNCTION 1425f8890 FUN_1425f8890 body=152 status=ok
// SIG undefined FUN_1425f8890(void)

void FUN_1425f8890(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_1424118e0(param_1 + 0x38,&local_18,param_4,*(undefined8 *)(param_2 + 0x18),0,0);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    local_18 = 1.0;
  }
  *(float *)(param_3 + 0x5c) = local_18 * *(float *)(param_3 + 0x4c);
  if ((*(byte *)(param_1 + 0x88) & 2) == 0) {
    local_14 = 1.0;
  }
  *(float *)(param_3 + 0x60) = local_14 * *(float *)(param_3 + 0x50);
  fVar1 = 1.0;
  if ((*(byte *)(param_1 + 0x88) & 4) != 0) {
    fVar1 = local_10;
  }
  *(float *)(param_3 + 100) = fVar1 * *(float *)(param_3 + 0x54);
  return;
}



// FUNCTION 1425f8930 FUN_1425f8930 body=1286 status=ok
// SIG undefined FUN_1425f8930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425f8930(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  DWORD DVar14;
  DWORD *pDVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  undefined4 local_1e0;
  LARGE_INTEGER local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  longlong local_1a8;
  longlong local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  longlong local_188;
  undefined8 uStack_180;
  uint local_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  float local_168;
  uint uStack_164;
  float fStack_160;
  uint uStack_15c;
  float local_158;
  float fStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  float local_a8;
  uint uStack_a4;
  float fStack_a0;
  uint uStack_9c;
  float local_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 local_88 [16];
  
  fVar12 = fRam0000000146b047fc;
  if ((((DAT_14653431c != 0) && (DAT_1464c9c5b != '\0')) && (DAT_1464c9c21 != '\0')) &&
     (((DAT_1464ca478 != '\0' && (DAT_1464c9c20 != '\0')) &&
      ((DAT_1464c9c12 != '\0' &&
       ((DAT_1464c9c6c != '\0' && (lVar3 = *(longlong *)(param_2 + 0x710), lVar3 != 0)))))))) {
    local_1c8 = *(float *)(param_2 + 0x1e4) + *(float *)(param_2 + 0x1d8);
    fVar23 = *(float *)(param_2 + 0x1d8) - *(float *)(param_2 + 0x1e4);
    fVar30 = *(float *)(param_2 + 0x1d4) - *(float *)(param_2 + 0x1e0);
    fVar32 = *(float *)(param_2 + 0x210);
    fVar6 = *(float *)(param_2 + 0x214);
    fVar7 = *(float *)(param_2 + 0x218);
    fVar8 = *(float *)(param_2 + 0x21c);
    fVar37 = *(float *)(param_2 + 0x1dc) + *(float *)(param_2 + 0x1d0);
    fVar33 = *(float *)(param_2 + 0x1d0) - *(float *)(param_2 + 0x1dc);
    local_118 = CONCAT44(local_1c8,*(float *)(param_2 + 0x1e0) + *(float *)(param_2 + 0x1d4));
    local_1e0 = CONCAT31(local_1e0._1_3_,1);
    fVar21 = fVar6 + fVar6;
    fVar22 = fVar7 + fVar7;
    uStack_110 = local_1e0;
    fVar29 = fVar32 * (fVar32 + fVar32);
    fVar28 = fVar8 * (fVar32 + fVar32);
    fVar9 = *(float *)(param_2 + 0x230);
    fVar10 = *(float *)(param_2 + 0x234);
    fVar11 = *(float *)(param_2 + 0x238);
    fVar34 = (fVar8 * fVar22 + fVar32 * fVar21) * fVar9;
    fVar35 = (fVar28 + fVar6 * fVar22) * fVar10;
    fVar36 = (fVar8 * fVar21 + fVar32 * fVar22) * fVar11;
    fVar31 = fVar10 * (fVar32 * fVar21 - fVar8 * fVar22);
    fVar28 = fVar11 * (fVar6 * fVar22 - fVar28);
    fVar32 = fVar9 * (fVar32 * fVar22 - fVar8 * fVar21);
    uVar24 = (uint)((_DAT_146b047f0 - (fVar7 * fVar22 + fVar6 * fVar21)) * fVar9) & _DAT_146b04800;
    uVar25 = (uint)((fRam0000000146b047f4 - (fVar7 * fVar22 + fVar29)) * fVar10) &
             uRam0000000146b04804;
    uVar26 = (uint)((fRam0000000146b047f8 - (fVar6 * fVar21 + fVar29)) * fVar11) &
             uRam0000000146b04808;
    uVar27 = (uint)((fRam0000000146b047fc - (fVar29 + fVar29)) * *(float *)(param_2 + 0x23c)) &
             uRam0000000146b0480c;
    local_c8 = *(undefined4 *)(param_2 + 0x6f8);
    uStack_c4 = *(undefined4 *)(param_2 + 0x6fc);
    auVar4 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x220),0);
    local_88._12_4_ = fRam0000000146b047fc;
    local_88._0_12_ = auVar4;
    local_1b8 = fVar23;
    local_b8 = uVar24;
    fStack_b4 = fVar34;
    fStack_b0 = fVar32;
    uStack_ac = uVar27;
    local_a8 = fVar31;
    uStack_a4 = uVar25;
    fStack_a0 = fVar35;
    uStack_9c = uVar27;
    local_98 = fVar36;
    fStack_94 = fVar28;
    uStack_90 = uVar26;
    uStack_8c = uVar27;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar13 = FUN_1415ad720(&DAT_1468e2448), cVar13 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar14 = GetCurrentThreadId(), DVar14 == DAT_1468c21c0)))) {
      uStack_180 = CONCAT44(uStack_10c,uStack_110);
      local_188 = local_118;
      local_138 = local_c8;
      uStack_134 = uStack_c4;
      uStack_130 = uStack_c0;
      uStack_12c = uStack_bc;
      local_148._12_4_ = fVar12;
      local_148._0_12_ = auVar4;
      local_1a8 = param_1;
      local_1a0 = lVar3;
      local_198 = fVar33;
      fStack_194 = fVar30;
      fStack_190 = fVar23;
      fStack_18c = fVar37;
      local_178 = uVar24;
      fStack_174 = fVar34;
      fStack_170 = fVar32;
      uStack_16c = uVar27;
      local_168 = fVar31;
      uStack_164 = uVar25;
      fStack_160 = fVar35;
      uStack_15c = uVar27;
      local_158 = fVar36;
      fStack_154 = fVar28;
      uStack_150 = uVar26;
      uStack_14c = uVar27;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_1d8);
      *(ulonglong *)(local_1a0 + 8) = CONCAT44(fStack_194,local_198);
      *(ulonglong *)(local_1a0 + 0x10) = CONCAT44(fStack_18c,fStack_190);
      *(longlong *)(local_1a0 + 0x18) = local_188;
      *(undefined4 *)(local_1a0 + 0x20) = (undefined4)uStack_180;
      *(undefined4 *)(local_1a0 + 0xf4) = local_138;
      *(undefined4 *)(local_1a0 + 0xf0) = uStack_134;
      FUN_1428bf040(local_1a0,&local_178);
      QueryPerformanceCounter(&local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_1d8._0_4_);
    }
    else {
      pDVar15 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar16 = TlsGetValue(*pDVar15);
      plVar17 = (longlong *)0x0;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)operator_new(0x18);
        if (plVar16 != (longlong *)0x0) {
          *plVar16 = 0;
          plVar16[1] = 0;
          *(undefined4 *)(plVar16 + 2) = 0;
          plVar17 = plVar16;
        }
        TlsSetValue(*pDVar15,plVar17);
        plVar16 = plVar17;
      }
      plVar17 = (longlong *)plVar16[1];
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)*plVar16;
        if (plVar17 == (longlong *)0x0) {
          plVar17 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar15 + 2);
          plVar16[1] = (longlong)plVar17;
          if (plVar17 == (longlong *)0x0) {
            puVar18 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar16[1] = (longlong)puVar18;
            lVar20 = 0x1f;
            do {
              puVar2 = puVar18 + 0x20;
              *puVar18 = puVar2;
              lVar20 = lVar20 + -1;
              puVar18 = puVar2;
            } while (lVar20 != 0);
            *puVar2 = 0;
            plVar17 = (longlong *)plVar16[1];
          }
          iVar19 = 0x20;
          *(undefined4 *)(plVar16 + 2) = 0x20;
        }
        else {
          iVar19 = 0x20;
          plVar16[1] = (longlong)plVar17;
          *(undefined4 *)(plVar16 + 2) = 0x20;
          *plVar16 = 0;
        }
      }
      else {
        iVar19 = (int)plVar16[2];
      }
      plVar16[1] = *plVar17;
      *(int *)(plVar16 + 2) = iVar19 + -1;
      *plVar17 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar17 + 1) = 0xff;
      local_1d0 = 0;
      local_1c0 = 0;
      *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
      *(undefined1 *)(plVar17 + 0x12) = 0;
      *plVar17 = (longlong)&PTR__scalar_deleting_destructor__145129e38;
      plVar17[0x13] = 0;
      *(float *)(plVar17 + 4) = fVar33;
      *(float *)((longlong)plVar17 + 0x24) = fVar30;
      *(float *)(plVar17 + 5) = fVar23;
      *(float *)((longlong)plVar17 + 0x2c) = fVar37;
      plVar17[2] = param_1;
      plVar17[6] = local_118;
      plVar17[7] = CONCAT44(uStack_10c,uStack_110);
      plVar17[3] = lVar3;
      *(uint *)(plVar17 + 8) = uVar24;
      *(float *)((longlong)plVar17 + 0x44) = fVar34;
      *(float *)(plVar17 + 9) = fVar32;
      *(uint *)((longlong)plVar17 + 0x4c) = uVar27;
      *(float *)(plVar17 + 10) = fVar31;
      *(uint *)((longlong)plVar17 + 0x54) = uVar25;
      *(float *)(plVar17 + 0xb) = fVar35;
      *(uint *)((longlong)plVar17 + 0x5c) = uVar27;
      *(float *)(plVar17 + 0xc) = fVar36;
      *(float *)((longlong)plVar17 + 100) = fVar28;
      *(uint *)(plVar17 + 0xd) = uVar26;
      *(uint *)((longlong)plVar17 + 0x6c) = uVar27;
      auVar5._12_4_ = fVar12;
      auVar5._0_12_ = auVar4;
      *(undefined1 (*) [16])(plVar17 + 0xe) = auVar5;
      *(undefined4 *)(plVar17 + 0x10) = local_c8;
      *(undefined4 *)((longlong)plVar17 + 0x84) = uStack_c4;
      *(undefined4 *)(plVar17 + 0x11) = uStack_c0;
      *(undefined4 *)((longlong)plVar17 + 0x8c) = uStack_bc;
      lVar3 = plVar17[0x13];
      piVar1 = (int *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res20 = lVar3;
      FUN_1425f3f50(local_c8,0,0xff,1);
      if (lVar3 != 0) {
        LOCK();
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425f8e40 UseWeakReferences body=480 status=ok
// SIG undefined UseWeakReferences(void)

void UObjectLibrary::UseWeakReferences(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (param_2 != *(char *)(param_1 + 0x58)) {
    *(char *)(param_1 + 0x58) = param_2;
    if (param_2 == '\0') {
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x50)) {
        do {
          lVar9 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x48) + (longlong)iVar8 * 8);
          if (lVar9 != 0) {
            lVar9 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x48) + (longlong)iVar8 * 8);
            plVar4 = *(longlong **)(param_1 + 0x38);
            iVar2 = *(int *)(param_1 + 0x40);
            for (plVar6 = plVar4; plVar6 != plVar4 + iVar2; plVar6 = plVar6 + 1) {
              if (*plVar6 == lVar9) {
                if ((int)((longlong)plVar6 - (longlong)plVar4 >> 3) != -1) goto LAB_1425f8fe3;
                break;
              }
            }
            *(int *)(param_1 + 0x40) = iVar2 + 1;
            if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x38,iVar2);
            }
            *(longlong *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x38)) = lVar9;
          }
LAB_1425f8fe3:
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x50));
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (*(int *)(param_1 + 0x54) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
      }
    }
    else {
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x40)) {
        lVar9 = 0;
        do {
          if (*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x38)) != 0) {
            FWeakObjectPtr::operator=(&local_res8);
            lVar3 = *(longlong *)(param_1 + 0x48);
            iVar2 = *(int *)(param_1 + 0x50);
            for (lVar7 = lVar3; lVar7 != lVar3 + (longlong)iVar2 * 8; lVar7 = lVar7 + 8) {
              cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res8);
              if (cVar5 != '\0') {
                if ((int)(lVar7 - lVar3 >> 3) != -1) goto LAB_1425f8f17;
                break;
              }
            }
            iVar2 = *(int *)(param_1 + 0x50);
            *(int *)(param_1 + 0x50) = iVar2 + 1;
            if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x48,iVar2);
            }
            puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 8);
            *puVar1 = local_res8;
            puVar1[1] = local_resc;
          }
LAB_1425f8f17:
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar8 < *(int *)(param_1 + 0x40));
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
      }
    }
  }
  return;
}



// FUNCTION 1425f9070 FUN_1425f9070 body=141 status=ok
// SIG undefined FUN_1425f9070(void)

undefined8
FUN_1425f9070(undefined8 param_1,longlong *param_2,undefined8 param_3,uint param_4,longlong *param_5
             )

{
  char cVar1;
  undefined8 uVar2;
  uint local_res20 [2];
  undefined1 local_18 [16];
  
  local_res20[0] = param_4;
  (**(code **)(*param_2 + 0x68))(param_2,local_res20);
  if (((local_res20[0] & 1) != 0) && (local_res20[0] != 1)) {
    cVar1 = FUN_1425ec5e0(param_1);
    if (cVar1 == '\0') {
      uVar2 = FString::FString(local_18,param_5);
      FUN_1425e2910(param_1,local_res20[0],0,uVar2,param_3);
    }
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1425f9100 FUN_1425f9100 body=58 status=ok
// SIG undefined FUN_1425f9100(void)

void FUN_1425f9100(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451318a8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1451318f0;
  }
  return;
}



// FUNCTION 1425f9150 FUN_1425f9150 body=20 status=ok
// SIG undefined FUN_1425f9150(void)

undefined1 FUN_1425f9150(longlong param_1)

{
  FUN_1425fbd60(param_1 + 8);
  return 1;
}



// FUNCTION 1425f9170 FUN_1425f9170 body=90 status=ok
// SIG undefined FUN_1425f9170(void)

void FUN_1425f9170(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 local_res18 [16];
  
  local_res18[0] = 0;
  FUN_1426029d0();
  *param_3 = 0;
  FUN_1426029d0(param_1,param_2,param_3,local_res18,1);
  return;
}



// FUNCTION 1425f91d0 FUN_1425f91d0 body=74 status=ok
// SIG undefined FUN_1425f91d0(void)

undefined8 * FUN_1425f91d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145131938;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1425f9220 FUN_1425f9220 body=89 status=ok
// SIG undefined FUN_1425f9220(void)

undefined8 * FUN_1425f9220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145131980;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_145131938;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1425f9280 FUN_1425f9280 body=684 status=ok
// SIG undefined FUN_1425f9280(void)

int * FUN_1425f9280(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong *_Src;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  int local_res10;
  
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar8 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar9 + lVar8);
  *puVar16 = *puVar16 | 1 << ((byte)iVar10 & 0x1f);
  puVar3 = (undefined4 *)param_3[1];
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  *(undefined4 *)(_Src + 1) = *puVar3;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    iVar2 = local_res8[0];
    lVar14 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar14 * 0x18),_Src,0x10);
      bVar5 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar14 = *param_1;
      *(undefined4 *)(lVar1 + lVar14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar14) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar9 + lVar8);
      *puVar16 = *puVar16 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar13 = (undefined1)local_res8[0];
      goto LAB_1425f9502;
    }
  }
  uVar13 = 0;
  cVar6 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar6 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar15 = -(iVar10 + uVar12) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar15 ^ uVar15 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar15 ^ uVar15 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1425f9502:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar13;
  }
  return param_2;
}



// FUNCTION 1425f9530 NewObject<UDistributionFloatConstantCurve> body=146 status=ok
// SIG undefined NewObject<UDistributionFloatConstantCurve>(void)

void NewObject<UDistributionFloatConstantCurve>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1425f95d0 FUN_1425f95d0 body=89 status=ok
// SIG undefined FUN_1425f95d0(void)

void FUN_1425f95d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UForceFeedbackAttenuation::StaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 1425f9630 FUN_1425f9630 body=421 status=ok
// SIG undefined FUN_1425f9630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425f9630(undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_141784790(param_2,L"Sprite");
  puVar5 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar5,0,param_2);
  FUN_141784790(param_2,L"ArrowComponent0");
  puVar5 = (undefined8 *)FName::FName(local_res10,L"ArrowComponent0",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar5,0,param_2);
  FUN_1425d8690(param_1,param_2);
  *param_1 = &PTR_FUN_145134a78;
  uVar6 = uRam0000000146b04e9c;
  local_28 = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(uint *)((longlong)param_1 + 0x4cc) = uVar6;
  uVar6 = uRam0000000146b04e94 & uRam0000000146b04ea4;
  uVar7 = uRam0000000146b04e98 & uRam0000000146b04ea8;
  uVar8 = uRam0000000146b04e9c & uRam0000000146b04eac;
  *(uint *)(param_1 + 0x9c) = _DAT_146b04e90 & _DAT_146b04ea0;
  *(uint *)((longlong)param_1 + 0x4e4) = uVar6;
  *(uint *)(param_1 + 0x9d) = uVar7;
  *(uint *)((longlong)param_1 + 0x4ec) = uVar8;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x41200000;
  *(undefined4 *)(param_1 + 0x9e) = 0x42a00000;
  local_24 = 0x43340000;
  local_20 = 0;
  FRotator::Quaternion(&local_28,&local_18);
  uVar4 = DAT_1464aa790;
  uVar3 = DAT_1464aa788._4_4_;
  uVar2 = (undefined4)DAT_1464aa788;
  param_1[0x98] = local_18;
  param_1[0x99] = uStack_10;
  param_1[0x9a] = 0x42b40000;
  param_1[0x9b] = 0;
  auVar1._4_4_ = uVar3;
  auVar1._0_4_ = uVar2;
  auVar1._8_4_ = uVar4;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x9c) = auVar1;
  *(byte *)(param_1[0x8b] + 0x2f0) = *(byte *)(param_1[0x8b] + 0x2f0) | 0x40;
  *(undefined4 *)(param_1[0x8b] + 0x794) = 0;
  *(byte *)((longlong)param_1 + 0x4f4) = *(byte *)((longlong)param_1 + 0x4f4) & 0xfd;
  *(undefined4 *)(param_1 + 0xa1) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 1425f97e0 FDynamicBeam2EmitterData body=66 status=ok
// SIG undefined FDynamicBeam2EmitterData(void)

undefined8 * FDynamicBeam2EmitterData::FDynamicBeam2EmitterData(undefined8 *param_1)

{
  FDynamicEmitterDataBase::FDynamicEmitterDataBase();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145131a78;
  FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData(param_1 + 7);
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  return param_1;
}



// FUNCTION 1425f9830 FDynamicBeam2EmitterReplayData body=216 status=ok
// SIG undefined FDynamicBeam2EmitterReplayData(void)

undefined8 * FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData(undefined8 *param_1)

{
  FUN_142619420();
  *param_1 = &PTR__scalar_deleting_destructor__145131a68;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x124) = 1;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 1;
  return param_1;
}



// FUNCTION 1425f9910 FDynamicRibbonEmitterReplayData body=86 status=ok
// SIG undefined FDynamicRibbonEmitterReplayData(void)

undefined8 * FDynamicRibbonEmitterReplayData::FDynamicRibbonEmitterReplayData(undefined8 *param_1)

{
  FUN_142619420();
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x1a] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145131b18;
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  *(undefined8 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 1425f9970 FUN_1425f9970 body=146 status=ok
// SIG undefined FUN_1425f9970(void)

undefined8 * FUN_1425f9970(undefined8 *param_1)

{
  FDynamicEmitterDataBase::FDynamicEmitterDataBase();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_145131b28;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0x41480000;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xffffffc2 | 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x41c80000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x14,0,0xc0);
  return param_1;
}



// FUNCTION 1425f9a10 FDynamicTrailsEmitterReplayData body=85 status=ok
// SIG undefined FDynamicTrailsEmitterReplayData(void)

undefined8 * FDynamicTrailsEmitterReplayData::FDynamicTrailsEmitterReplayData(undefined8 *param_1)

{
  FUN_142619420();
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__145131b08;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  *(undefined4 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 1425f9a70 FUN_1425f9a70 body=710 status=ok
// SIG undefined FUN_1425f9a70(void)

undefined8 * FUN_1425f9a70(undefined8 *param_1)

{
  FUN_142619de0();
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145132330;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 1;
  param_1[0x48] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (*(int *)((longlong)param_1 + 0x24c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (*(int *)((longlong)param_1 + 0x274) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x4d);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)((longlong)param_1 + 0x284) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x4f);
  }
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (*(int *)((longlong)param_1 + 0x294) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)((longlong)param_1 + 0x2a4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (*(int *)((longlong)param_1 + 0x2b4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)((longlong)param_1 + 0x2c4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (*(int *)((longlong)param_1 + 0x2d4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x59);
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (*(int *)((longlong)param_1 + 0x2f4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x5d);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)((longlong)param_1 + 0x304) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5f);
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (*(int *)((longlong)param_1 + 0x314) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x61);
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (*(int *)((longlong)param_1 + 0x32c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 100,0);
  }
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) | 0x100;
  return param_1;
}



// FUNCTION 1425f9d40 FUN_1425f9d40 body=388 status=ok
// SIG undefined FUN_1425f9d40(void)

undefined8 * FUN_1425f9d40(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  FUN_141781840();
  uVar4 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145133df8;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0xffff;
  *(undefined4 *)(param_1 + 0xe) = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar4 * 8);
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) & 0xfffffff3;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0xac) = 3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146b05188) {
    _Init_thread_header(&DAT_146b05188);
    if (DAT_146b05188 == -1) {
      FName::FName(&DAT_146b05180,L"Particle Emitter",1);
      _Init_thread_footer(&DAT_146b05188);
    }
  }
  uVar2 = DAT_146b05180;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 1;
  param_1[5] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1425f9ed0 FUN_1425f9ed0 body=146 status=ok
// SIG undefined FUN_1425f9ed0(void)

undefined8 * FUN_1425f9ed0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145134470;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 1;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 1425f9f70 FUN_1425f9f70 body=37 status=ok
// SIG undefined FUN_1425f9f70(void)

undefined8 * FUN_1425f9f70(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *param_1 = &PTR_FUN_145131fb0;
  return param_1;
}



// FUNCTION 1425f9fa0 FUN_1425f9fa0 body=308 status=ok
// SIG undefined FUN_1425f9fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425f9fa0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *param_1 = &PTR__scalar_deleting_destructor__145132ff8;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffff8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffff8;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1a) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xd4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_1468b5d98;
  param_1[0x1c] = 0;
  *(uint *)((longlong)param_1 + 0xec) = *(uint *)((longlong)param_1 + 0xec) & 0xfffffff8;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 1;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) | 1;
  *(uint *)((longlong)param_1 + 0xec) = *(uint *)((longlong)param_1 + 0xec) | 1;
  return param_1;
}



// FUNCTION 1425fa0e0 FUN_1425fa0e0 body=429 status=ok
// SIG undefined FUN_1425fa0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425fa0e0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *param_1 = &PTR__scalar_deleting_destructor__145133378;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x84) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x8c) = DAT_1468b5d98;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x22) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x114) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x11c) = DAT_1468b5d98;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(uint *)(param_1 + 0x25) = *(uint *)(param_1 + 0x25) & 0xfffffffe;
  *(uint *)(param_1 + 0x26) = *(uint *)(param_1 + 0x26) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 1425fa290 FUN_1425fa290 body=399 status=ok
// SIG undefined FUN_1425fa290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425fa290(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *param_1 = &PTR__scalar_deleting_destructor__1451336f8;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x11) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x8c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1c) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xe4) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar1;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b05168)
  {
    _Init_thread_header(&DAT_146b05168);
    if (DAT_146b05168 == -1) {
      FName::FName(&DAT_146b05160,&DAT_143f3edc8,1);
      _Init_thread_footer(&DAT_146b05168);
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  uVar2 = DAT_146b05160;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe;
  param_1[8] = uVar2;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  return param_1;
}



// FUNCTION 1425fa420 FUN_1425fa420 body=409 status=ok
// SIG undefined FUN_1425fa420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425fa420(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *param_1 = &PTR__scalar_deleting_destructor__145133a78;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x84) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xdc) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b05178)
  {
    _Init_thread_header(&DAT_146b05178);
    if (DAT_146b05178 == -1) {
      FName::FName(&DAT_146b05170,&DAT_143f3edc8,1);
      _Init_thread_footer(&DAT_146b05178);
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
  uVar2 = DAT_146b05170;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffffe;
  param_1[8] = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x41200000;
  return param_1;
}



// FUNCTION 1425fa5c0 FUN_1425fa5c0 body=420 status=ok
// SIG undefined FUN_1425fa5c0(void)

undefined8 * FUN_1425fa5c0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UParticleModuleTypeDataBase::UParticleModuleTypeDataBase();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1451340a0;
  pvVar2 = ThreadLocalStoragePointer;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146b05158) {
    _Init_thread_header(&DAT_146b05158);
    if (DAT_146b05158 == -1) {
      FName::FName(&DAT_146b05150,&DAT_143f3edc8,1);
      _Init_thread_footer(&DAT_146b05158);
    }
  }
  *(undefined1 *)(param_1 + 7) = 1;
  *(uint *)((longlong)param_1 + 0x54) = *(uint *)((longlong)param_1 + 0x54) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x41200000;
  param_1[0xc] = DAT_146b05150;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfffffff1 | 1;
  return param_1;
}



// FUNCTION 1425fa770 FUN_1425fa770 body=398 status=ok
// SIG undefined FUN_1425fa770(void)

undefined8 * FUN_1425fa770(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  FUN_141781840();
  uVar4 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145133df8;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0xffff;
  *(undefined4 *)(param_1 + 0xe) = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar4 * 8);
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) & 0xfffffff3;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0xac) = 3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146b05188) {
    _Init_thread_header(&DAT_146b05188);
    if (DAT_146b05188 == -1) {
      FName::FName(&DAT_146b05180,L"Particle Emitter",1);
      _Init_thread_footer(&DAT_146b05188);
    }
  }
  uVar2 = DAT_146b05180;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 1;
  param_1[5] = uVar2;
  *param_1 = &PTR__scalar_deleting_destructor__145134708;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1425fa900 FUN_1425fa900 body=357 status=ok
// SIG undefined FUN_1425fa900(void)

undefined8 * FUN_1425fa900(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145131d08;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(uint *)((longlong)param_1 + 0x14c) = *(uint *)((longlong)param_1 + 0x14c) & 0xfffffff1;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xbf800000bf800000;
  param_1[0x15] = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x29) = 3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42700000;
  param_1[6] = 0x3c888889;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) | 8;
  *(uint *)((longlong)param_1 + 0x14c) = *(uint *)((longlong)param_1 + 0x14c) & 0xfffffffe;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x43480000;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 3;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x20;
  *(undefined4 *)(param_1 + 0x17) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 1425faa70 FUN_1425faa70 body=864 status=ok
// SIG undefined FUN_1425faa70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425faa70(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_14237eb90();
  *param_1 = &PTR__scalar_deleting_destructor__145132580;
  param_1[5] = &PTR_LAB_145132f70;
  param_1[0x5a] = &PTR_LAB_145132fa0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 2;
  *(undefined4 *)(param_1 + 0x10d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  uVar2 = uRam0000000146b04e9c;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  *(undefined4 *)((longlong)param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  *(uint *)((longlong)param_1 + 0x93c) = uVar2;
  uVar2 = uRam0000000146b04e94 & uRam0000000146b04ea4;
  uVar3 = uRam0000000146b04e98 & uRam0000000146b04ea8;
  uVar4 = uRam0000000146b04e9c & uRam0000000146b04eac;
  *(uint *)(param_1 + 0x12a) = _DAT_146b04e90 & _DAT_146b04ea0;
  *(uint *)((longlong)param_1 + 0x954) = uVar2;
  *(uint *)(param_1 + 299) = uVar3;
  *(uint *)((longlong)param_1 + 0x95c) = uVar4;
  param_1[300] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf7;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  param_1[0xee] = 0;
  *(undefined4 *)((longlong)param_1 + 0x79c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xef) = 0;
  *(byte *)((longlong)param_1 + 0x71a) = *(byte *)((longlong)param_1 + 0x71a) & 0x5d;
  *(byte *)((longlong)param_1 + 0x71a) = *(byte *)((longlong)param_1 + 0x71a) | 0x20;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0xa0;
  *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) & 0xef;
  *(byte *)(param_1 + 0xe3) = *(byte *)(param_1 + 0xe3) & 0x5f;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7ac) = 0xffffffff;
  FUN_142717130(param_1,DAT_146aefc58);
  FUN_1423974f0(param_1,0);
  *(byte *)((longlong)param_1 + 0x2f2) = *(byte *)((longlong)param_1 + 0x2f2) & 0xfd;
  *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) & 0xf7;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xe7;
  *(byte *)((longlong)param_1 + 0x719) = *(byte *)((longlong)param_1 + 0x719) & 0x9f;
  *(byte *)((longlong)param_1 + 0x2ef) = *(byte *)((longlong)param_1 + 0x2ef) & 0xbf;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0;
  *(undefined1 *)((longlong)param_1 + 0x71e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x894) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x89c) = 0x3f800000;
  param_1[0x132] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x133) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x99c) = DAT_1468b5da0;
  uVar1 = DAT_1468b5da8;
  *(uint *)(param_1 + 0x135) = *(uint *)(param_1 + 0x135) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x9a4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x9ac) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(uint *)(param_1 + 0x137) = *(uint *)(param_1 + 0x137) & 0xfffffffe;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xef;
  *(undefined4 *)((longlong)param_1 + 0x9b4) = uVar1;
  return param_1;
}



// FUNCTION 1425fadd0 FUN_1425fadd0 body=43 status=ok
// SIG undefined FUN_1425fadd0(void)

undefined8 * FUN_1425fadd0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451351a0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1425fae00 FUN_1425fae00 body=120 status=ok
// SIG undefined FUN_1425fae00(void)

void FUN_1425fae00(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 8);
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1425fae80 ~TArray<FParticleEventCollideData,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FParticleEventCollideData,FDefaultAllocator>(void)

void TArray<FParticleEventCollideData,FDefaultAllocator>::
     ~TArray<FParticleEventCollideData,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xf;
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



// FUNCTION 1425faee0 ~TArray<FParticleEventDeathData,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FParticleEventDeathData,FDefaultAllocator>(void)

void TArray<FParticleEventDeathData,FDefaultAllocator>::
     ~TArray<FParticleEventDeathData,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
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



// FUNCTION 1425faf40 FUN_1425faf40 body=95 status=ok
// SIG undefined FUN_1425faf40(void)

void FUN_1425faf40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
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



// FUNCTION 1425fafa0 FUN_1425fafa0 body=619 status=ok
// SIG undefined FUN_1425fafa0(void)

void FUN_1425fafa0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145132330;
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (*(int *)((longlong)param_1 + 0x24c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (*(int *)((longlong)param_1 + 0x274) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x4d,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)((longlong)param_1 + 0x284) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x4f,0);
  }
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (*(int *)((longlong)param_1 + 0x294) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x51,0);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)((longlong)param_1 + 0x2a4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x53,0);
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (*(int *)((longlong)param_1 + 0x2b4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x55,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)((longlong)param_1 + 0x2c4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x57,0);
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (*(int *)((longlong)param_1 + 0x2d4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x59,0);
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (*(int *)((longlong)param_1 + 0x2f4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x5d,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)((longlong)param_1 + 0x304) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5f,0);
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (*(int *)((longlong)param_1 + 0x314) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x61,0);
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (*(int *)((longlong)param_1 + 0x32c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 100,0);
  }
  if (param_1[100] != 0) {
    FMemory::Free();
  }
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x59] != 0) {
    FMemory::Free();
  }
  if (param_1[0x57] != 0) {
    FMemory::Free();
  }
  if (param_1[0x55] != 0) {
    FMemory::Free();
  }
  if (param_1[0x53] != 0) {
    FMemory::Free();
  }
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x48] != 0) {
    FMemory::Free();
  }
  FUN_14261a910(param_1);
  return;
}



// FUNCTION 1425fb210 FUN_1425fb210 body=174 status=ok
// SIG undefined FUN_1425fb210(void)

void FUN_1425fb210(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1425fb2c0 FUN_1425fb2c0 body=393 status=ok
// SIG undefined FUN_1425fb2c0(void)

void FUN_1425fb2c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x980) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x960) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x960) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x840);
  TArray<FParticleEventCollideData,FDefaultAllocator>::
  ~TArray<FParticleEventCollideData,FDefaultAllocator>(param_1 + 0x830);
  FUN_1425faf40(param_1 + 0x820);
  TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
            (param_1 + 0x810);
  TArray<FParticleEventCollideData,FDefaultAllocator>::
  ~TArray<FParticleEventCollideData,FDefaultAllocator>(param_1 + 0x800);
  TArray<FParticleEventDeathData,FDefaultAllocator>::
  ~TArray<FParticleEventDeathData,FDefaultAllocator>(param_1 + 0x7f0);
  FUN_1407f4240(param_1 + 0x7e0);
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 1425fb450 FUN_1425fb450 body=404 status=ok
// SIG undefined FUN_1425fb450(void)

longlong FUN_1425fb450(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb4) = *(undefined1 *)(param_2 + 0xb4);
  *(undefined1 *)(param_1 + 0xb5) = *(undefined1 *)(param_2 + 0xb5);
  *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(param_2 + 0xb6);
  *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)(param_2 + 0xb7);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(param_2 + 0xb9);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  *(undefined1 *)(param_1 + 0xc5) = *(undefined1 *)(param_2 + 0xc5);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  return param_1;
}



// FUNCTION 1425fb5f0 operator= body=131 status=ok
// SIG undefined operator=(void)

longlong FDynamicTrailsEmitterReplayData::operator=(longlong param_1,longlong param_2)

{
  FUN_1425fb450();
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  return param_1;
}



// FUNCTION 1425fb680 FUN_1425fb680 body=505 status=ok
// SIG undefined FUN_1425fb680(void)

longlong * FUN_1425fb680(longlong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_1425fb854;
  iVar1 = *param_2;
  if (iVar1 == 1) {
    puVar6 = (undefined8 *)operator_new(0xd0);
    if (puVar6 == (undefined8 *)0x0) {
LAB_1425fb84c:
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_142619420(puVar6);
      *puVar6 = &PTR__scalar_deleting_destructor__1451319c8;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        lVar4 = operator_new(0x160);
        if (lVar4 != 0) {
          uVar5 = FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData(lVar4);
          *(undefined8 *)(param_2 + 2) = uVar5;
          goto LAB_1425fb854;
        }
      }
      else if (iVar1 == 4) {
        lVar4 = operator_new(0xf8);
        if (lVar4 != 0) {
          uVar5 = FDynamicRibbonEmitterReplayData::FDynamicRibbonEmitterReplayData(lVar4);
          *(undefined8 *)(param_2 + 2) = uVar5;
          goto LAB_1425fb854;
        }
      }
      else if (iVar1 == 5) {
        lVar4 = operator_new(0xf0);
        if (lVar4 != 0) {
          uVar5 = FDynamicTrailsEmitterReplayData::FDynamicTrailsEmitterReplayData(lVar4);
          *(undefined8 *)(param_2 + 2) = uVar5;
          goto LAB_1425fb854;
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
      goto LAB_1425fb854;
    }
    puVar6 = (undefined8 *)operator_new(0x100);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1425fb84c;
    FUN_142619420(puVar6);
    *puVar6 = &PTR__scalar_deleting_destructor__145131a58;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    *(undefined1 *)(puVar6 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
    *(undefined2 *)((longlong)puVar6 + 0xec) = 0;
    puVar6[0x1e] = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x1f) = 0;
  }
  *(undefined8 **)(param_2 + 2) = puVar6;
LAB_1425fb854:
  plVar3 = *(longlong **)(param_2 + 2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3,param_1);
  }
  return param_1;
}



// FUNCTION 1425fb880 FUN_1425fb880 body=437 status=ok
// SIG undefined FUN_1425fb880(void)

longlong * FUN_1425fb880(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          FUN_1425fb680(param_1,(longlong)(int)puVar5 * 0x10 + *param_2);
          uVar7 = (int)puVar5 + 1;
          puVar5 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    iVar6 = (int)param_2[1];
    if (iVar6 != 0) {
      plVar8 = (longlong *)(*param_2 + 8);
      do {
        puVar9 = (undefined8 *)*plVar8;
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
          *plVar8 = 0;
        }
        plVar8 = plVar8 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
    }
    puVar9 = puVar5;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar4 = puVar3;
        }
        FUN_1425fb680(param_1,puVar4);
        uVar7 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1425fba40 FUN_1425fba40 body=452 status=ok
// SIG undefined FUN_1425fba40(void)

longlong * FUN_1425fba40(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar7 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) != 0) {
      lVar8 = *param_2;
      for (iVar9 = (int)param_2[1]; iVar9 != 0; iVar9 = iVar9 + -1) {
        FUN_1425fae00(lVar8);
        lVar8 = lVar8 + 0x10;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
      }
      puVar6 = puVar7;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar5 = puVar7;
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar5 = puVar4;
          }
          if ((*(byte *)(param_1 + 5) & 1) != 0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
          FUN_1425fb880(param_1);
          uVar10 = (int)puVar6 + 1;
          puVar6 = (undefined8 *)(ulonglong)uVar10;
        } while ((int)uVar10 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        puVar6 = (undefined8 *)((longlong)(int)puVar7 * 0x10 + *param_2);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        FUN_1425fb880(param_1);
        uVar10 = (int)puVar7 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1425fbc10 FUN_1425fbc10 body=201 status=ok
// SIG undefined FUN_1425fbc10(void)

void FUN_1425fbc10(float *param_1,longlong *param_2,float param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  
  fVar1 = *param_1;
  if (param_3 < fVar1) {
    if (fVar1 <= param_4) {
      if (param_2 != (longlong *)0x0) {
        lVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_1425fbc64;
      }
      param_2 = (longlong *)0x0;
LAB_1425fbc64:
                    /* WARNING: Could not recover jumptable at 0x0001425fbc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x358))(param_2,0);
      return;
    }
    if (param_3 < fVar1) {
      return;
    }
  }
  if (fVar1 <= param_4) {
    return;
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1425fbcbf;
  }
  param_2 = (longlong *)0x0;
LAB_1425fbcbf:
                    /* WARNING: Could not recover jumptable at 0x0001425fbccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x358))(param_2,1);
  return;
}



// FUNCTION 1425fbce0 FUN_1425fbce0 body=122 status=ok
// SIG undefined FUN_1425fbce0(void)

void FUN_1425fbce0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    plVar5 = (longlong *)(lVar2 + 0x3a0);
    *(undefined4 *)(lVar2 + 0x3a8) = 0;
    if (0x7fffffff < *(uint *)(lVar2 + 0x3ac)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar5);
    }
    lVar3 = param_1[1];
    iVar1 = *(int *)(lVar2 + 0x3a8);
    iVar4 = iVar1 + (int)lVar3;
    *(int *)(lVar2 + 0x3a8) = iVar4;
    if (*(int *)(lVar2 + 0x3ac) < iVar4) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar5 + (longlong)iVar1 * 4),0,(longlong)(int)lVar3 << 2);
  }
  return;
}



// FUNCTION 1425fbd60 FUN_1425fbd60 body=153 status=ok
// SIG undefined FUN_1425fbd60(void)

void FUN_1425fbd60(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  if (param_3 != (longlong *)0x0) {
    FString::PrintfImpl(local_18,L"Near: %g Mid: %g Far: %g Very Far: %g",(double)DAT_146534330,
                        (double)DAT_146534334,(double)DAT_146534338,(double)DAT_14653433c);
    (**(code **)(*param_3 + 0xc60))(param_3,local_18,0,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1425fbe20 FUN_1425fbe20 body=97 status=ok
// SIG undefined FUN_1425fbe20(void)

undefined8 * FUN_1425fbe20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145135478;
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



// FUNCTION 1425fbe90 FUN_1425fbe90 body=97 status=ok
// SIG undefined FUN_1425fbe90(void)

undefined8 * FUN_1425fbe90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145135458;
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


