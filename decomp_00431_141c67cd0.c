// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141c67cd0 FUN_141c67cd0 body=1024 status=ok
// SIG undefined FUN_141c67cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c67cd0(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *_Dst;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  void *local_a8;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  float local_90;
  float local_8c;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_78 = param_6;
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  local_a8 = *(void **)(lVar6 + 0x60);
  FUN_141aa9420(param_1,param_2,local_a8,*(undefined8 *)(*param_3 + 0x20));
  local_c8 = (undefined4 *)param_5;
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1bc,param_2,local_a8,0);
  local_98 = 0;
  local_c8 = (undefined4 *)((ulonglong)local_c8 & 0xffffffff00000000);
  local_8c = 1.0 / (float)param_4[1];
  local_90 = 1.0 / (float)*param_4;
  pvVar9 = local_a8;
  FUN_141a120e0(param_2,local_a8,param_1 + 0x1c4,&local_98);
  local_88 = (void *)(*param_3 + 0xf40);
  local_80 = local_a8;
  uVar3 = (uint)*(ushort *)(param_1 + 0x1ce);
  if (0xf < *(ushort *)(param_1 + 0x1ce)) {
    uVar3 = 0x10;
  }
  uVar10 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    local_a0 = (uint)*(ushort *)(param_1 + 0x1cc);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_9c = (uint)*(ushort *)(param_1 + 0x1ca);
    uVar4 = (longlong)_Dst + uVar10;
    if (*(ulonglong *)(param_2 + 0x38) < uVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar4 = (longlong)_Dst + uVar10;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar4;
    pvVar9 = local_88;
    _guard_xfg_dispatch_icall_nop(_Dst,local_88,uVar10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      pvVar9 = (void *)0x0;
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92080;
    puVar8[2] = local_80;
    *(uint *)(puVar8 + 4) = local_9c;
    puVar8[3] = _Dst;
    *(uint *)((longlong)puVar8 + 0x24) = local_a0;
    *(uint *)(puVar8 + 5) = uVar3;
  }
  uVar10 = (ulonglong)pvVar9 & 0xffffffffffffff00;
  plVar2 = *(longlong **)(*param_3 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,uVar10);
    uVar10 = (ulonglong)uVar3;
  }
  GrainRandomFromFrame(local_70,uVar10 & 0xff);
  local_c8 = (undefined4 *)((ulonglong)local_c8 & 0xffffffff00000000);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,local_a8,param_1 + 0x1d4,local_70);
  pvVar9 = local_a8;
  if (*(short *)(param_1 + 0x1d2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1d0);
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
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[4] = local_78;
    puVar8[2] = pvVar9;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  lVar6 = 0;
  local_a0 = FRCPassPostProcessEyeAdaptation::GetFixedExposure(*param_3);
  local_c8 = (undefined4 *)((ulonglong)local_c8 & 0xffffffff00000000);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,local_a8,param_1 + 0x1da,&local_a0);
  local_60 = FUN_141a156e0();
  local_58 = FUN_141a156e0();
  local_50 = FUN_1404a0e20();
  local_48 = FUN_141a156e0();
  local_b8 = &local_60;
  local_c0 = 0;
  local_c8 = (undefined4 *)0x0;
  FUN_141caac70(param_1 + 0xc0,&local_a8,param_3,param_2);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar6 * 8) == &DAT_146a583f0) {
        if (iVar7 != -1) {
          local_c8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *local_c8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141c6803a;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a61290) {
    _Init_thread_header(&DAT_146a61290);
    if (DAT_146a61290 == -1) {
      _DAT_146a61288 = 0;
      _DAT_146a6128c = 0;
      DAT_146a6128e = 0;
      _Init_thread_footer(&DAT_146a61290);
    }
  }
  local_c8 = (undefined4 *)&DAT_146a61288;
LAB_141c6803a:
  FUN_141c61900(param_1 + 0x1e0,param_2,local_a8,param_3);
  return;
}



// FUNCTION 141c680d0 FUN_141c680d0 body=3290 status=ok
// SIG undefined FUN_141c680d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c680d0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,char param_7,int *param_8)

{
  int *piVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auStack_248 [32];
  int local_228;
  float local_218;
  float local_214;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  longlong *local_1d8;
  float local_1d0;
  float local_1cc;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined1 local_150 [24];
  float local_138 [4];
  float local_128;
  float local_120 [4];
  float local_110;
  float local_10c;
  float local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1d8 = param_5;
  local_228 = 0xf;
  local_210 = param_3;
  local_208 = param_1;
  local_1e0 = param_3;
  local_1b8 = param_4;
  FUN_141aa6060(param_1 + 0xfc,param_2,&local_210,*(undefined4 *)(*param_4 + 0x1a38));
  pfVar17 = (float *)&DAT_144e274bc;
  pfVar15 = local_120 + 2;
  fVar29 = 0.0;
  lVar23 = 3;
  iVar14 = *(int *)(DAT_146a57d00 + 4);
  fVar31 = 1.0 / *(float *)(DAT_146a57b98 + 4);
  local_1ec = (float)*(int *)(param_6 + 0x2c);
  local_1e4 = 1.0 / local_1ec;
  local_218 = local_1e4 * *(float *)(*param_4 + 0x28c4);
  local_214 = local_1e4 * *(float *)(*param_4 + 0x28c8);
  do {
    fVar26 = local_218;
    fVar25 = (pfVar17[-3] - local_218) * fVar31;
    fVar27 = (pfVar17[-2] - local_214) * fVar31;
    if (iVar14 == 0) {
      fVar25 = _guard_xfg_dispatch_icall_nop(fVar25 * fVar25 * -2.29 - fVar27 * fVar27 * 2.29);
      pfVar15[-2] = fVar25;
    }
    else {
      fVar25 = ABS(fVar25);
      if (fVar25 <= 1.0) {
        fVar25 = (fVar25 * 1.5 - 2.5) * fVar25 * fVar25 + 1.0;
      }
      else {
        fVar25 = ((2.5 - fVar25 * 0.5) * fVar25 - 4.0) * fVar25 + 2.0;
      }
      fVar27 = ABS(fVar27);
      if (fVar27 <= 1.0) {
        fVar25 = ((fVar27 * 1.5 - 2.5) * fVar27 * fVar27 + 1.0) * fVar25;
        pfVar15[-2] = fVar25;
      }
      else {
        fVar25 = (((2.5 - fVar27 * 0.5) * fVar27 - 4.0) * fVar27 + 2.0) * fVar25;
        pfVar15[-2] = fVar25;
      }
    }
    fVar27 = local_214;
    fVar26 = (pfVar17[-1] - fVar26) * fVar31;
    fVar28 = (*pfVar17 - local_214) * fVar31;
    if (iVar14 == 0) {
      fVar26 = _guard_xfg_dispatch_icall_nop(fVar26 * fVar26 * -2.29 - fVar28 * fVar28 * 2.29);
      pfVar15[-1] = fVar26;
    }
    else {
      fVar26 = ABS(fVar26);
      if (fVar26 <= 1.0) {
        fVar26 = (fVar26 * 1.5 - 2.5) * fVar26 * fVar26 + 1.0;
      }
      else {
        fVar26 = ((2.5 - fVar26 * 0.5) * fVar26 - 4.0) * fVar26 + 2.0;
      }
      fVar28 = ABS(fVar28);
      if (fVar28 <= 1.0) {
        fVar26 = ((fVar28 * 1.5 - 2.5) * fVar28 * fVar28 + 1.0) * fVar26;
        pfVar15[-1] = fVar26;
      }
      else {
        fVar26 = (((2.5 - fVar28 * 0.5) * fVar28 - 4.0) * fVar28 + 2.0) * fVar26;
        pfVar15[-1] = fVar26;
      }
    }
    fVar28 = (pfVar17[2] - fVar27) * fVar31;
    fVar27 = (pfVar17[1] - local_218) * fVar31;
    if (iVar14 == 0) {
      fVar27 = _guard_xfg_dispatch_icall_nop(fVar27 * fVar27 * -2.29 - fVar28 * fVar28 * 2.29);
      *pfVar15 = fVar27;
    }
    else {
      fVar27 = ABS(fVar27);
      if (fVar27 <= 1.0) {
        fVar27 = (fVar27 * 1.5 - 2.5) * fVar27 * fVar27 + 1.0;
      }
      else {
        fVar27 = ((2.5 - fVar27 * 0.5) * fVar27 - 4.0) * fVar27 + 2.0;
      }
      fVar28 = ABS(fVar28);
      if (fVar28 <= 1.0) {
        fVar27 = ((fVar28 * 1.5 - 2.5) * fVar28 * fVar28 + 1.0) * fVar27;
        *pfVar15 = fVar27;
      }
      else {
        fVar27 = (((2.5 - fVar28 * 0.5) * fVar28 - 4.0) * fVar28 + 2.0) * fVar27;
        *pfVar15 = fVar27;
      }
    }
    lVar5 = local_208;
    fVar29 = fVar27 + fVar26 + fVar25 + fVar29;
    pfVar17 = pfVar17 + 6;
    pfVar15 = pfVar15 + 3;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  pfVar15 = local_120;
  iVar14 = 0;
  local_138[1] = local_120[3];
  local_138[0] = local_120[1];
  local_138[2] = local_110;
  local_138[3] = local_10c;
  local_128 = local_104;
  do {
    local_214 = (1.0 / fVar29) * *pfVar15;
    local_228 = iVar14;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,lVar5 + 0x10c,&local_214);
    iVar14 = iVar14 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 9);
  pfVar15 = local_138;
  iVar14 = 0;
  do {
    local_218 = (1.0 / (local_120[3] + local_120[1] + local_110 + local_10c + local_104)) * *pfVar15
    ;
    local_228 = iVar14;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,lVar5 + 0x112,&local_218);
    iVar14 = iVar14 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 5);
  uVar30 = 0;
  if (param_7 == '\0') {
    local_1f8 = 0;
  }
  else {
    local_1f8 = 0x3f800000;
  }
  local_228 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,lVar5 + 0x118,&local_1f8);
  if ((*(longlong *)(*local_1b8 + 0x1ab0) == 0) ||
     (*(char *)(*(longlong *)(*local_1b8 + 0x1ab0) + 0x1777) == '\0')) {
    uVar30 = 0x3f800000;
  }
  local_228 = 0;
  local_1f4 = uVar30;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,lVar5 + 0x11e,&local_1f4);
  local_228 = 0;
  local_1f0 = *(undefined4 *)(DAT_146a57d30 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,lVar5 + 0x124,&local_1f0);
  local_228 = 0;
  uVar3 = local_1d8[3];
  uVar4 = local_1d8[2];
  iVar22 = (int)uVar3;
  iVar16 = (int)local_1d8[4] - iVar22;
  iVar10 = (int)(uVar3 >> 0x20);
  iVar19 = *(int *)((longlong)local_1d8 + 0x24) - iVar10;
  local_1a0 = 1.0 / (float)(int)uVar4;
  fVar29 = (float)iVar16 * 0.5;
  local_19c = 1.0 / (float)(int)(uVar4 >> 0x20);
  local_1a8 = fVar29 * local_1a0;
  local_1a4 = (float)-iVar19 * 0.5 * local_19c;
  local_1a0 = ((float)iVar22 + fVar29) * local_1a0;
  local_19c = ((float)iVar19 * 0.5 + (float)iVar10) * local_19c;
  FUN_141a120e0(param_2,param_3,local_208 + 0x130,&local_1a8);
  iVar14 = *(int *)(param_6 + 0x2c);
  iVar16 = (iVar14 + -1 + iVar16) / iVar14;
  local_228 = 0;
  iVar20 = (iVar14 + -1 + iVar19) / iVar14;
  local_1d0 = 1.0 - 1.0 / (float)iVar16;
  local_1cc = 1.0 - 1.0 / (float)iVar20;
  local_200 = uVar4;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,local_1e0,local_208 + 0x12a,&local_1d0);
  uVar18 = local_1e0;
  lVar23 = local_208;
  iVar22 = (int)((longlong)((ulonglong)(uint)(iVar22 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                (longlong)iVar14);
  iVar19 = (int)((longlong)((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 | uVar3 >> 0x20) /
                (longlong)iVar14);
  local_228 = 0;
  iVar10 = local_200._4_4_ / iVar14;
  fVar31 = (float)(int)((longlong)
                        ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                       (longlong)iVar14);
  fVar26 = 1.0 / fVar31;
  fVar29 = 1.0 / (float)iVar10;
  local_198 = ((float)iVar22 + 0.5) * fVar26;
  local_194 = ((float)iVar19 + 0.5) * fVar29;
  local_190 = ((float)(iVar16 + iVar22) - 0.5) * fVar26;
  local_18c = ((float)(iVar20 + iVar19) - 0.5) * fVar29;
  FUN_141a120e0(param_2,local_1e0,local_208 + 0x14c,&local_198);
  local_228 = 0;
  local_188 = fVar31;
  local_184 = (float)iVar10;
  local_180 = fVar26;
  local_17c = fVar29;
  FUN_141a120e0(param_2,uVar18,lVar23 + 0x146,&local_188);
  psVar21 = (short *)(lVar23 + 0x140);
  local_200 = 2;
  plVar24 = local_1d8;
  do {
    if (*plVar24 != 0) {
      local_158 = *(undefined8 *)(*plVar24 + 0x10);
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar9 = IsInRenderingThread();
          if (cVar9 == '\0') {
            FScopedEvent::FScopedEvent(local_1c0);
            plVar11 = (longlong *)FUN_14049e3d0(local_150,0,0xff);
            lVar23 = *plVar11;
            *(undefined1 **)(lVar23 + 0x10) = &LAB_141a15860;
            *(undefined1 **)(lVar23 + 0x18) = local_1c0;
            lVar23 = *plVar11;
            lVar8 = plVar11[2];
            lVar5 = plVar11[1];
            lVar6 = *(longlong *)(lVar23 + 0x28);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              uVar18 = local_210;
            }
            local_1c8 = lVar6;
            FUN_1404a4fe0(lVar23,lVar5,(int)lVar8,1);
            if (lVar6 != 0) {
              LOCK();
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              uVar18 = local_210;
              if (iVar14 == 1) {
                FGraphEvent::Recycle(local_1c8);
                uVar18 = local_210;
              }
            }
            FScopedEvent::~FScopedEvent(local_1c0);
          }
          else {
            lVar23 = operator_new(0x38);
            if (lVar23 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar23);
            }
          }
        }
        else {
          lVar23 = operator_new();
          if (lVar23 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
            uVar18 = local_210;
          }
          else {
            lVar23 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar23);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar23 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar23;
            UNLOCK();
            uVar18 = local_210;
          }
        }
      }
      uVar7 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      if (psVar21[-4] != 0) {
        uVar2 = psVar21[-5];
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144d92090;
        puVar13[4] = local_158;
        puVar13[2] = uVar18;
        *(uint *)(puVar13 + 3) = (uint)uVar2;
      }
      if (*psVar21 != 0) {
        uVar2 = psVar21[-1];
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144dcb3b8;
        puVar13[2] = uVar18;
        *(uint *)(puVar13 + 3) = (uint)uVar2;
        puVar13[4] = uVar7;
      }
    }
    lVar23 = local_208;
    plVar24 = plVar24 + 1;
    psVar21 = psVar21 + 2;
    local_200 = local_200 + -1;
  } while (local_200 != 0);
  local_228 = 0;
  fVar29 = (float)(*(int *)(param_6 + 0x24) - *(int *)(param_6 + 0x1c));
  local_170 = 1.0 / fVar29;
  local_178 = (fVar29 - local_1ec * 0.5) * local_170;
  local_170 = local_170 * local_1ec;
  fVar29 = (float)(*(int *)(param_6 + 0x28) - *(int *)(param_6 + 0x20));
  local_16c = 1.0 / fVar29;
  local_174 = (fVar29 - local_1ec * 0.5) * local_16c;
  local_16c = local_16c * local_1ec;
  FUN_141a120e0(param_2,uVar18,local_208 + 0x152,&local_178);
  if (*local_1d8 == 0) {
    local_1e8 = *(float *)(*local_1b8 + 0x2f28);
  }
  else {
    local_1e8 = *(float *)(local_1d8 + 5);
  }
  if (local_1e8 <= 1e-08) {
    local_1e8 = 1e-08;
  }
  local_228 = 0;
  local_1e8 = 1.0 / local_1e8;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar18,lVar23 + 0x158,&local_1e8);
  local_228 = 0;
  local_168 = (float)(*(int *)(param_6 + 0x14) - *(int *)(param_6 + 0xc)) * local_1e4 *
              (1.0 / (float)*param_8);
  local_160 = (float)*(int *)(param_6 + 0xc) * local_1e4 * (1.0 / (float)*param_8);
  local_164 = (float)(*(int *)(param_6 + 0x18) - *(int *)(param_6 + 0x10)) * local_1e4 *
              (1.0 / (float)param_8[1]);
  local_15c = (float)*(int *)(param_6 + 0x10) * local_1e4 * (1.0 / (float)param_8[1]);
  FUN_141a120e0(param_2,uVar18,lVar23 + 0x15e,&local_168);
  return;
}



// FUNCTION 141c68db0 FUN_141c68db0 body=3290 status=ok
// SIG undefined FUN_141c68db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c68db0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,char param_7,int *param_8)

{
  int *piVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auStack_248 [32];
  int local_228;
  float local_218;
  float local_214;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  longlong *local_1d8;
  float local_1d0;
  float local_1cc;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined1 local_150 [24];
  float local_138 [4];
  float local_128;
  float local_120 [4];
  float local_110;
  float local_10c;
  float local_104;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1d8 = param_5;
  local_228 = 0xf;
  local_210 = param_3;
  local_208 = param_1;
  local_1e0 = param_3;
  local_1b8 = param_4;
  FUN_141aa6fa0(param_1 + 0xfc,param_2,&local_210,*(undefined4 *)(*param_4 + 0x1a38));
  pfVar17 = (float *)&DAT_144e273dc;
  pfVar15 = local_120 + 2;
  fVar29 = 0.0;
  lVar23 = 3;
  iVar14 = *(int *)(DAT_146a57d00 + 4);
  fVar31 = 1.0 / *(float *)(DAT_146a57b98 + 4);
  local_1ec = (float)*(int *)(param_6 + 0x2c);
  local_1e4 = 1.0 / local_1ec;
  local_218 = local_1e4 * *(float *)(*param_4 + 0x28c4);
  local_214 = local_1e4 * *(float *)(*param_4 + 0x28c8);
  do {
    fVar26 = local_218;
    fVar25 = (pfVar17[-3] - local_218) * fVar31;
    fVar27 = (pfVar17[-2] - local_214) * fVar31;
    if (iVar14 == 0) {
      fVar25 = _guard_xfg_dispatch_icall_nop(fVar25 * fVar25 * -2.29 - fVar27 * fVar27 * 2.29);
      pfVar15[-2] = fVar25;
    }
    else {
      fVar25 = ABS(fVar25);
      if (fVar25 <= 1.0) {
        fVar25 = (fVar25 * 1.5 - 2.5) * fVar25 * fVar25 + 1.0;
      }
      else {
        fVar25 = ((2.5 - fVar25 * 0.5) * fVar25 - 4.0) * fVar25 + 2.0;
      }
      fVar27 = ABS(fVar27);
      if (fVar27 <= 1.0) {
        fVar25 = ((fVar27 * 1.5 - 2.5) * fVar27 * fVar27 + 1.0) * fVar25;
        pfVar15[-2] = fVar25;
      }
      else {
        fVar25 = (((2.5 - fVar27 * 0.5) * fVar27 - 4.0) * fVar27 + 2.0) * fVar25;
        pfVar15[-2] = fVar25;
      }
    }
    fVar27 = local_214;
    fVar26 = (pfVar17[-1] - fVar26) * fVar31;
    fVar28 = (*pfVar17 - local_214) * fVar31;
    if (iVar14 == 0) {
      fVar26 = _guard_xfg_dispatch_icall_nop(fVar26 * fVar26 * -2.29 - fVar28 * fVar28 * 2.29);
      pfVar15[-1] = fVar26;
    }
    else {
      fVar26 = ABS(fVar26);
      if (fVar26 <= 1.0) {
        fVar26 = (fVar26 * 1.5 - 2.5) * fVar26 * fVar26 + 1.0;
      }
      else {
        fVar26 = ((2.5 - fVar26 * 0.5) * fVar26 - 4.0) * fVar26 + 2.0;
      }
      fVar28 = ABS(fVar28);
      if (fVar28 <= 1.0) {
        fVar26 = ((fVar28 * 1.5 - 2.5) * fVar28 * fVar28 + 1.0) * fVar26;
        pfVar15[-1] = fVar26;
      }
      else {
        fVar26 = (((2.5 - fVar28 * 0.5) * fVar28 - 4.0) * fVar28 + 2.0) * fVar26;
        pfVar15[-1] = fVar26;
      }
    }
    fVar28 = (pfVar17[2] - fVar27) * fVar31;
    fVar27 = (pfVar17[1] - local_218) * fVar31;
    if (iVar14 == 0) {
      fVar27 = _guard_xfg_dispatch_icall_nop(fVar27 * fVar27 * -2.29 - fVar28 * fVar28 * 2.29);
      *pfVar15 = fVar27;
    }
    else {
      fVar27 = ABS(fVar27);
      if (fVar27 <= 1.0) {
        fVar27 = (fVar27 * 1.5 - 2.5) * fVar27 * fVar27 + 1.0;
      }
      else {
        fVar27 = ((2.5 - fVar27 * 0.5) * fVar27 - 4.0) * fVar27 + 2.0;
      }
      fVar28 = ABS(fVar28);
      if (fVar28 <= 1.0) {
        fVar27 = ((fVar28 * 1.5 - 2.5) * fVar28 * fVar28 + 1.0) * fVar27;
        *pfVar15 = fVar27;
      }
      else {
        fVar27 = (((2.5 - fVar28 * 0.5) * fVar28 - 4.0) * fVar28 + 2.0) * fVar27;
        *pfVar15 = fVar27;
      }
    }
    lVar5 = local_208;
    fVar29 = fVar27 + fVar26 + fVar25 + fVar29;
    pfVar17 = pfVar17 + 6;
    pfVar15 = pfVar15 + 3;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  pfVar15 = local_120;
  iVar14 = 0;
  local_138[1] = local_120[3];
  local_138[0] = local_120[1];
  local_138[2] = local_110;
  local_138[3] = local_10c;
  local_128 = local_104;
  do {
    local_214 = (1.0 / fVar29) * *pfVar15;
    local_228 = iVar14;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,lVar5 + 0x10c,&local_214);
    iVar14 = iVar14 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 9);
  pfVar15 = local_138;
  iVar14 = 0;
  do {
    local_218 = (1.0 / (local_120[3] + local_120[1] + local_110 + local_10c + local_104)) * *pfVar15
    ;
    local_228 = iVar14;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,lVar5 + 0x112,&local_218);
    iVar14 = iVar14 + 1;
    pfVar15 = pfVar15 + 1;
  } while (iVar14 < 5);
  uVar30 = 0;
  if (param_7 == '\0') {
    local_1f8 = 0;
  }
  else {
    local_1f8 = 0x3f800000;
  }
  local_228 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,lVar5 + 0x118,&local_1f8);
  if ((*(longlong *)(*local_1b8 + 0x1ab0) == 0) ||
     (*(char *)(*(longlong *)(*local_1b8 + 0x1ab0) + 0x1777) == '\0')) {
    uVar30 = 0x3f800000;
  }
  local_228 = 0;
  local_1f4 = uVar30;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,lVar5 + 0x11e,&local_1f4);
  local_228 = 0;
  local_1f0 = *(undefined4 *)(DAT_146a57d30 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,lVar5 + 0x124,&local_1f0);
  local_228 = 0;
  uVar3 = local_1d8[3];
  uVar4 = local_1d8[2];
  iVar22 = (int)uVar3;
  iVar16 = (int)local_1d8[4] - iVar22;
  iVar10 = (int)(uVar3 >> 0x20);
  iVar19 = *(int *)((longlong)local_1d8 + 0x24) - iVar10;
  local_1a0 = 1.0 / (float)(int)uVar4;
  fVar29 = (float)iVar16 * 0.5;
  local_19c = 1.0 / (float)(int)(uVar4 >> 0x20);
  local_1a8 = fVar29 * local_1a0;
  local_1a4 = (float)-iVar19 * 0.5 * local_19c;
  local_1a0 = ((float)iVar22 + fVar29) * local_1a0;
  local_19c = ((float)iVar19 * 0.5 + (float)iVar10) * local_19c;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,local_208 + 0x130,&local_1a8);
  iVar14 = *(int *)(param_6 + 0x2c);
  iVar16 = (iVar14 + -1 + iVar16) / iVar14;
  local_228 = 0;
  iVar20 = (iVar14 + -1 + iVar19) / iVar14;
  local_1d0 = 1.0 - 1.0 / (float)iVar16;
  local_1cc = 1.0 - 1.0 / (float)iVar20;
  local_200 = uVar4;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,local_1e0,local_208 + 0x12a,&local_1d0);
  uVar18 = local_1e0;
  lVar23 = local_208;
  iVar22 = (int)((longlong)((ulonglong)(uint)(iVar22 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                (longlong)iVar14);
  iVar19 = (int)((longlong)((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 | uVar3 >> 0x20) /
                (longlong)iVar14);
  local_228 = 0;
  iVar10 = local_200._4_4_ / iVar14;
  fVar31 = (float)(int)((longlong)
                        ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
                       (longlong)iVar14);
  fVar26 = 1.0 / fVar31;
  fVar29 = 1.0 / (float)iVar10;
  local_198 = ((float)iVar22 + 0.5) * fVar26;
  local_194 = ((float)iVar19 + 0.5) * fVar29;
  local_190 = ((float)(iVar16 + iVar22) - 0.5) * fVar26;
  local_18c = ((float)(iVar20 + iVar19) - 0.5) * fVar29;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_1e0,local_208 + 0x14c,&local_198);
  local_228 = 0;
  local_188 = fVar31;
  local_184 = (float)iVar10;
  local_180 = fVar26;
  local_17c = fVar29;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar18,lVar23 + 0x146,&local_188);
  psVar21 = (short *)(lVar23 + 0x140);
  local_200 = 2;
  plVar24 = local_1d8;
  do {
    if (*plVar24 != 0) {
      local_158 = *(undefined8 *)(*plVar24 + 0x10);
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar9 = IsInRenderingThread();
          if (cVar9 == '\0') {
            FScopedEvent::FScopedEvent(local_1c0);
            plVar11 = (longlong *)FUN_14049e3d0(local_150,0,0xff);
            lVar23 = *plVar11;
            *(undefined1 **)(lVar23 + 0x10) = &LAB_141a15860;
            *(undefined1 **)(lVar23 + 0x18) = local_1c0;
            lVar23 = *plVar11;
            lVar8 = plVar11[2];
            lVar5 = plVar11[1];
            lVar6 = *(longlong *)(lVar23 + 0x28);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              uVar18 = local_210;
            }
            local_1c8 = lVar6;
            FUN_1404a4fe0(lVar23,lVar5,(int)lVar8,1);
            if (lVar6 != 0) {
              LOCK();
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              uVar18 = local_210;
              if (iVar14 == 1) {
                FGraphEvent::Recycle(local_1c8);
                uVar18 = local_210;
              }
            }
            FScopedEvent::~FScopedEvent(local_1c0);
          }
          else {
            lVar23 = operator_new(0x38);
            if (lVar23 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar23);
            }
          }
        }
        else {
          lVar23 = operator_new();
          if (lVar23 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
            uVar18 = local_210;
          }
          else {
            lVar23 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar23);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar23 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar23;
            UNLOCK();
            uVar18 = local_210;
          }
        }
      }
      uVar7 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      if (psVar21[-4] != 0) {
        uVar2 = psVar21[-5];
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_143f59c80;
        puVar13[4] = local_158;
        puVar13[2] = uVar18;
        *(uint *)(puVar13 + 3) = (uint)uVar2;
      }
      if (*psVar21 != 0) {
        uVar2 = psVar21[-1];
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_143f59c70;
        puVar13[2] = uVar18;
        *(uint *)(puVar13 + 3) = (uint)uVar2;
        puVar13[4] = uVar7;
      }
    }
    lVar23 = local_208;
    plVar24 = plVar24 + 1;
    psVar21 = psVar21 + 2;
    local_200 = local_200 + -1;
  } while (local_200 != 0);
  local_228 = 0;
  fVar29 = (float)(*(int *)(param_6 + 0x24) - *(int *)(param_6 + 0x1c));
  local_170 = 1.0 / fVar29;
  local_178 = (fVar29 - local_1ec * 0.5) * local_170;
  local_170 = local_170 * local_1ec;
  fVar29 = (float)(*(int *)(param_6 + 0x28) - *(int *)(param_6 + 0x20));
  local_16c = 1.0 / fVar29;
  local_174 = (fVar29 - local_1ec * 0.5) * local_16c;
  local_16c = local_16c * local_1ec;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar18,local_208 + 0x152,&local_178);
  if (*local_1d8 == 0) {
    local_1e8 = *(float *)(*local_1b8 + 0x2f28);
  }
  else {
    local_1e8 = *(float *)(local_1d8 + 5);
  }
  if (local_1e8 <= 1e-08) {
    local_1e8 = 1e-08;
  }
  local_228 = 0;
  local_1e8 = 1.0 / local_1e8;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar18,lVar23 + 0x158,&local_1e8);
  local_228 = 0;
  local_168 = (float)(*(int *)(param_6 + 0x14) - *(int *)(param_6 + 0xc)) * local_1e4 *
              (1.0 / (float)*param_8);
  local_160 = (float)*(int *)(param_6 + 0xc) * local_1e4 * (1.0 / (float)*param_8);
  local_164 = (float)(*(int *)(param_6 + 0x18) - *(int *)(param_6 + 0x10)) * local_1e4 *
              (1.0 / (float)param_8[1]);
  local_15c = (float)*(int *)(param_6 + 0x10) * local_1e4 * (1.0 / (float)param_8[1]);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar18,lVar23 + 0x15e,&local_168);
  return;
}



// FUNCTION 141c69a90 FUN_141c69a90 body=505 status=ok
// SIG undefined FUN_141c69a90(void)

void FUN_141c69a90(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,void *param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  uint uVar9;
  undefined8 local_48 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x60);
  local_48[0] = uVar5;
  FUN_141aa92b0(param_1,param_2,uVar5,*(undefined8 *)(param_3 + 0x20));
  uVar1 = *(ushort *)(param_1 + 0xc2);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144dc9cd0;
  puVar8[2] = uVar5;
  *(uint *)(puVar8 + 3) = (uint)uVar1;
  puVar8[4] = param_4;
  FUN_141c0b130(param_2,uVar5,param_1 + 0xc6,&param_5,0);
  uVar1 = *(ushort *)(param_1 + 0xce);
  uVar2 = *(ushort *)(param_1 + 0xd0);
  _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(ushort *)(param_1 + 0xcc);
  uVar9 = (uint)uVar2;
  uVar6 = (longlong)(int)uVar9 + (longlong)_Dst;
  if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar2 + 0x10);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)(int)uVar9 + (longlong)_Dst;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar6;
  _guard_xfg_dispatch_icall_nop(_Dst,param_6,(ulonglong)uVar2);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144dc9c80;
  *(uint *)(puVar8 + 4) = (uint)uVar3;
  *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
  puVar8[2] = uVar5;
  puVar8[3] = _Dst;
  *(uint *)(puVar8 + 5) = uVar9;
  FUN_141aa56e0(param_1 + 0xd4,param_2,local_48,*(undefined4 *)(param_3 + 0x1a38),0);
  return;
}



// FUNCTION 141c69c90 FUN_141c69c90 body=505 status=ok
// SIG undefined FUN_141c69c90(void)

void FUN_141c69c90(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,void *param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  uint uVar9;
  undefined8 local_48 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x60);
  local_48[0] = uVar5;
  FUN_141aa9420(param_1,param_2,uVar5,*(undefined8 *)(param_3 + 0x20));
  uVar1 = *(ushort *)(param_1 + 0xc2);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e40;
  puVar8[2] = uVar5;
  *(uint *)(puVar8 + 3) = (uint)uVar1;
  puVar8[4] = param_4;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar5,param_1 + 0xc6,&param_5,0);
  uVar1 = *(ushort *)(param_1 + 0xce);
  uVar2 = *(ushort *)(param_1 + 0xd0);
  _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(ushort *)(param_1 + 0xcc);
  uVar9 = (uint)uVar2;
  uVar6 = (longlong)(int)uVar9 + (longlong)_Dst;
  if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar2 + 0x10);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)(int)uVar9 + (longlong)_Dst;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar6;
  _guard_xfg_dispatch_icall_nop(_Dst,param_6,(ulonglong)uVar2);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d92080;
  *(uint *)(puVar8 + 4) = (uint)uVar3;
  *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
  puVar8[2] = uVar5;
  puVar8[3] = _Dst;
  *(uint *)(puVar8 + 5) = uVar9;
  FUN_141aa6060(param_1 + 0xd4,param_2,local_48,*(undefined4 *)(param_3 + 0x1a38),0);
  return;
}



// FUNCTION 141c69e90 FUN_141c69e90 body=396 status=ok
// SIG undefined FUN_141c69e90(void)

void FUN_141c69e90(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  lVar4 = *param_2;
  if (*(char *)(lVar4 + 0x1714) == '\x01') {
    fVar7 = *(float *)(lVar4 + 0x1738);
  }
  else {
    fVar7 = 0.0;
  }
  lVar5 = 0;
  uVar6 = (ulonglong)
          ((-(uint)(DAT_146ab62dd != '\0') & 4) +
          (uint)(0.0 < fVar7) + (-(uint)(*(char *)(lVar4 + 0x3010) != '\0') & 2));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a61260) && (_Init_thread_header(&DAT_146a61260), DAT_146a61260 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileMSAA");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a61258 = lVar4;
    _Init_thread_footer(&DAT_146a61260);
  }
  lVar4 = DAT_146a61258;
  if ((((DAT_146ab62dd != '\0') && ((uint)(&DAT_1464c9c48)[(int)param_2[0xb]] < 0x1e)) &&
      ((0x20220800U >> ((&DAT_1464c9c48)[(int)param_2[0xb]] & 0x1f) & 1) != 0)) &&
     (DAT_146a61258 != 0)) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    if (1 < *(int *)(lVar5 + lVar4)) {
      uVar6 = 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141c69fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&LAB_141c6a098 + uVar6 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&LAB_141c6a098 + uVar6 * 4));
  return;
}



// FUNCTION 141c6a0c0 FUN_141c6a0c0 body=396 status=ok
// SIG undefined FUN_141c6a0c0(void)

void FUN_141c6a0c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  lVar4 = *param_2;
  if (*(char *)(lVar4 + 0x1714) == '\x01') {
    fVar7 = *(float *)(lVar4 + 0x1738);
  }
  else {
    fVar7 = 0.0;
  }
  lVar5 = 0;
  uVar6 = (ulonglong)
          ((-(uint)(DAT_146ab62dd != '\0') & 4) +
          (uint)(0.0 < fVar7) + (-(uint)(*(char *)(lVar4 + 0x3010) != '\0') & 2));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a61270) && (_Init_thread_header(&DAT_146a61270), DAT_146a61270 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileMSAA");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a61268 = lVar4;
    _Init_thread_footer(&DAT_146a61270);
  }
  lVar4 = DAT_146a61268;
  if ((((DAT_146ab62dd != '\0') && ((uint)(&DAT_1464c9c48)[(int)param_2[0xb]] < 0x1e)) &&
      ((0x20220800U >> ((&DAT_1464c9c48)[(int)param_2[0xb]] & 0x1f) & 1) != 0)) &&
     (DAT_146a61268 != 0)) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    if (1 < *(int *)(lVar5 + lVar4)) {
      uVar6 = 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141c6a1de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_141c6a2c8 + uVar6 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_141c6a2c8 + uVar6 * 4));
  return;
}



// FUNCTION 141c6a2f0 FUN_141c6a2f0 body=308 status=ok
// SIG undefined FUN_141c6a2f0(void)

void FUN_141c6a2f0(longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (7 < (int)uVar6) {
    uVar6 = 8;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9c80;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141c6a430 FUN_141c6a430 body=687 status=ok
// SIG undefined FUN_141c6a430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6a430(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a60890;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6a6e0 FUN_141c6a6e0 body=687 status=ok
// SIG undefined FUN_141c6a6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6a6e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a60740;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6a990 FUN_141c6a990 body=687 status=ok
// SIG undefined FUN_141c6a990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6a990(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a605f0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6ac40 FUN_141c6ac40 body=687 status=ok
// SIG undefined FUN_141c6ac40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6ac40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a604a0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6aef0 FUN_141c6aef0 body=687 status=ok
// SIG undefined FUN_141c6aef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6aef0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a60dd0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6b1a0 FUN_141c6b1a0 body=687 status=ok
// SIG undefined FUN_141c6b1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6b1a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a60c80;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6b450 FUN_141c6b450 body=687 status=ok
// SIG undefined FUN_141c6b450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6b450(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a60b30;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6b700 FUN_141c6b700 body=687 status=ok
// SIG undefined FUN_141c6b700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6b700(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a609e0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6b9b0 FUN_141c6b9b0 body=687 status=ok
// SIG undefined FUN_141c6b9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6b9b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a60350;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6bc60 FUN_141c6bc60 body=687 status=ok
// SIG undefined FUN_141c6bc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6bc60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a60200;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6bf10 FUN_141c6bf10 body=687 status=ok
// SIG undefined FUN_141c6bf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6bf10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a600b0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6c1c0 FUN_141c6c1c0 body=687 status=ok
// SIG undefined FUN_141c6c1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6c1c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5ff60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  local_138 = FUN_141b09910();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6c470 FUN_141c6c470 body=761 status=ok
// SIG undefined FUN_141c6c470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6c470(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  plVar6 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_110 = &DAT_146a5e670;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_118 = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  FUN_141c92ff0(lVar1 + 0x1d0,param_1[8],&local_118,param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c6c770 FUN_141c6c770 body=761 status=ok
// SIG undefined FUN_141c6c770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6c770(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  plVar6 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_110 = &DAT_146a5e520;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_118 = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  FUN_141c92ff0(lVar1 + 0x1d0,param_1[8],&local_118,param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c6ca70 FUN_141c6ca70 body=761 status=ok
// SIG undefined FUN_141c6ca70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6ca70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  plVar6 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_110 = &DAT_146a5e3d0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_118 = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  FUN_141c92ff0(lVar1 + 0x1d0,param_1[8],&local_118,param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c6cd70 FUN_141c6cd70 body=761 status=ok
// SIG undefined FUN_141c6cd70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6cd70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  plVar6 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a51f90;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_110 = &DAT_146a5e280;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar8 = plVar6;
  if ((int)local_118 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_118 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar6 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar6;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_118 = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_1404a0e20();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  FUN_141c92ff0(lVar1 + 0x1d0,param_1[8],&local_118,param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c6d070 FUN_141c6d070 body=707 status=ok
// SIG undefined FUN_141c6d070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6d070(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5f390;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6d340 FUN_141c6d340 body=707 status=ok
// SIG undefined FUN_141c6d340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6d340(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5f240;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6d610 FUN_141c6d610 body=707 status=ok
// SIG undefined FUN_141c6d610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6d610(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5f630;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6d8e0 FUN_141c6d8e0 body=707 status=ok
// SIG undefined FUN_141c6d8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6d8e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5f4e0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6dbb0 FUN_141c6dbb0 body=707 status=ok
// SIG undefined FUN_141c6dbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6dbb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5f0f0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6de80 FUN_141c6de80 body=707 status=ok
// SIG undefined FUN_141c6de80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6de80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5efa0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6e150 FUN_141c6e150 body=707 status=ok
// SIG undefined FUN_141c6e150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6e150(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5ebb0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6e420 FUN_141c6e420 body=707 status=ok
// SIG undefined FUN_141c6e420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6e420(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5ea60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6e6f0 FUN_141c6e6f0 body=707 status=ok
// SIG undefined FUN_141c6e6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6e6f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5ee50;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6e9c0 FUN_141c6e9c0 body=707 status=ok
// SIG undefined FUN_141c6e9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6e9c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5ed00;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6ec90 FUN_141c6ec90 body=707 status=ok
// SIG undefined FUN_141c6ec90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6ec90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5e910;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6ef60 FUN_141c6ef60 body=707 status=ok
// SIG undefined FUN_141c6ef60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6ef60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a5e7c0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (*param_2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar2 = *(longlong *)(*param_2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_f0 = *(longlong **)(lVar2 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar5 = *(longlong **)(lVar2 + 0x40);
  }
  local_d8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_1[8],&local_118,*(undefined4 *)(*param_1 + 0x1a38));
  if (*(int *)(DAT_146a57b50 + 4) == 0) {
    local_138 = FUN_141c7d730();
  }
  else {
    local_138 = FUN_141b09910();
  }
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  FUN_141c92ff0(lVar1 + 0x1cc,param_1[8],&local_118,param_1);
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141c07aa0(lVar1,param_1[8],*(undefined8 *)(lVar2 + 0x38),uVar3);
  return;
}



// FUNCTION 141c6f230 FUN_141c6f230 body=221 status=ok
// SIG undefined FUN_141c6f230(void)

void FUN_141c6f230(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146a81868,0);
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144d920a0;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141c6f310 FUN_141c6f310 body=667 status=ok
// SIG undefined FUN_141c6f310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6f310(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_110 = &DAT_146a55e30;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a5b310;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
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
  FUN_141c94200(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  return;
}



// FUNCTION 141c6f5b0 FUN_141c6f5b0 body=667 status=ok
// SIG undefined FUN_141c6f5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6f5b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
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
  local_110 = &DAT_146a55e30;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_108 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_110 = &DAT_146a5b1c0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_118,&local_110);
  plVar7 = plVar5;
  if ((int)local_118 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
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
  FUN_141c94200(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118 = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118,*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],&local_118,param_1);
  return;
}



// FUNCTION 141c6f850 FUN_141c6f850 body=825 status=ok
// SIG undefined FUN_141c6f850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6f850(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a59cc0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c6fb90 FUN_141c6fb90 body=825 status=ok
// SIG undefined FUN_141c6fb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6fb90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a59e10;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c6fed0 FUN_141c6fed0 body=825 status=ok
// SIG undefined FUN_141c6fed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c6fed0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a59f60;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c70210 FUN_141c70210 body=825 status=ok
// SIG undefined FUN_141c70210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c70210(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a0b0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c70550 FUN_141c70550 body=825 status=ok
// SIG undefined FUN_141c70550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c70550(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a200;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c70890 FUN_141c70890 body=825 status=ok
// SIG undefined FUN_141c70890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c70890(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a350;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c70bd0 FUN_141c70bd0 body=825 status=ok
// SIG undefined FUN_141c70bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c70bd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a4a0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c70f10 FUN_141c70f10 body=825 status=ok
// SIG undefined FUN_141c70f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c70f10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a5f0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c71250 FUN_141c71250 body=825 status=ok
// SIG undefined FUN_141c71250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c71250(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a740;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c71590 FUN_141c71590 body=825 status=ok
// SIG undefined FUN_141c71590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c71590(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a890;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c718d0 FUN_141c718d0 body=825 status=ok
// SIG undefined FUN_141c718d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c718d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5a9e0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c71c10 FUN_141c71c10 body=825 status=ok
// SIG undefined FUN_141c71c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c71c10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5ab30;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c71f50 FUN_141c71f50 body=825 status=ok
// SIG undefined FUN_141c71f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c71f50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5ac80;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c72290 FUN_141c72290 body=825 status=ok
// SIG undefined FUN_141c72290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c72290(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5add0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c725d0 FUN_141c725d0 body=825 status=ok
// SIG undefined FUN_141c725d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c725d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5af20;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c72910 FUN_141c72910 body=825 status=ok
// SIG undefined FUN_141c72910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c72910(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a5b070;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c72c50 FUN_141c72c50 body=825 status=ok
// SIG undefined FUN_141c72c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c72c50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a59a20;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c72f90 FUN_141c72f90 body=825 status=ok
// SIG undefined FUN_141c72f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c72f90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_118 [2];
  undefined *local_108;
  undefined4 local_100;
  float local_fc;
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
  local_118[0] = local_118[0] & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_100 = 0;
  local_108 = &DAT_146a55ce0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_100 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_108 = &DAT_146a59b70;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_118,&local_108);
  plVar7 = plVar5;
  if ((int)local_118[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_118[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_118[0] = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_118[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  }
  local_ac = local_ac & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c93f70(lVar2,param_1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_118[0] = *(ulonglong *)(lVar2 + 0x40);
  FUN_141aa9690(lVar1,param_1[8],local_118[0],*(undefined8 *)(*param_1 + 0x20));
  local_138 = FUN_141a156e0();
  local_128 = 0;
  local_130 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_1[8],local_118,param_1);
  lVar2 = *param_1;
  local_108 = *(undefined **)(lVar2 + 0x2ff0);
  local_100 = *(undefined4 *)(lVar2 + 0x2ff8);
  if (*(char *)(lVar2 + 0x1714) == '\x01') {
    local_fc = *(float *)(lVar2 + 0x1738);
  }
  else {
    local_fc = 0.0;
  }
  local_fc = local_fc * 0.5;
  local_138 = local_138 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_118[0],lVar1 + 0x1bc,&local_108);
  local_138 = CONCAT44(local_138._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1c4,param_1[8],local_118,*(undefined4 *)(*param_1 + 0x1a38));
  return;
}



// FUNCTION 141c732d0 FUN_141c732d0 body=904 status=ok
// SIG undefined FUN_141c732d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c732d0(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined4 local_140;
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
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar2 = param_1[0xc];
  local_118 = 0.0;
  local_120 = &DAT_146a56220;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_118 = 0.0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5b5b0;
  lVar3 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar2 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_f0 = *(longlong **)(lVar4 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
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
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94200(lVar3,param_1);
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_128 = *(ulonglong *)(lVar4 + 0x40);
  lVar4 = *param_1;
  FUN_141aa9690(lVar2,param_1[8],local_128,*(undefined8 *)(lVar4 + 0x20));
  local_148 = FUN_141a156e0();
  local_138 = 0;
  local_140 = 0;
  thunk_FUN_141ca99a0(lVar2 + 0xc0,param_1[8],&local_128,param_1);
  local_108 = *(undefined8 *)(*param_1 + 0x3000);
  _uStack_100 = CONCAT44(*(undefined4 *)(lVar4 + 0x1650),*(undefined4 *)(*param_1 + 0x3008));
  local_148 = local_148 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1bc,&local_108);
  lVar4 = *param_1;
  fVar1 = *(float *)(lVar4 + 0x1468);
  local_148 = local_148 & 0xffffffff00000000;
  local_118 = *(float *)(lVar4 + 0x1494) * fVar1 * 0.5;
  local_114 = *(float *)(lVar4 + 0x1498) * fVar1 * 0.5;
  local_120 = (undefined *)
              CONCAT44(*(float *)(lVar4 + 0x1490) * fVar1 * 0.5,
                       fVar1 * *(float *)(lVar4 + 0x148c) * 0.5);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1c8,&local_120);
  return lVar3;
}



// FUNCTION 141c73660 FUN_141c73660 body=904 status=ok
// SIG undefined FUN_141c73660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c73660(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined4 local_140;
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
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar2 = param_1[0xc];
  local_118 = 0.0;
  local_120 = &DAT_146a56220;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_118 = 0.0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5b700;
  lVar3 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar2 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_f0 = *(longlong **)(lVar4 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
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
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94200(lVar3,param_1);
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_128 = *(ulonglong *)(lVar4 + 0x40);
  lVar4 = *param_1;
  FUN_141aa9690(lVar2,param_1[8],local_128,*(undefined8 *)(lVar4 + 0x20));
  local_148 = FUN_141a156e0();
  local_138 = 0;
  local_140 = 0;
  thunk_FUN_141ca99a0(lVar2 + 0xc0,param_1[8],&local_128,param_1);
  local_108 = *(undefined8 *)(*param_1 + 0x3000);
  _uStack_100 = CONCAT44(*(undefined4 *)(lVar4 + 0x1650),*(undefined4 *)(*param_1 + 0x3008));
  local_148 = local_148 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1bc,&local_108);
  lVar4 = *param_1;
  fVar1 = *(float *)(lVar4 + 0x1468);
  local_148 = local_148 & 0xffffffff00000000;
  local_118 = *(float *)(lVar4 + 0x1494) * fVar1 * 0.5;
  local_114 = *(float *)(lVar4 + 0x1498) * fVar1 * 0.5;
  local_120 = (undefined *)
              CONCAT44(*(float *)(lVar4 + 0x1490) * fVar1 * 0.5,
                       fVar1 * *(float *)(lVar4 + 0x148c) * 0.5);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1c8,&local_120);
  return lVar3;
}



// FUNCTION 141c739f0 FUN_141c739f0 body=904 status=ok
// SIG undefined FUN_141c739f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c739f0(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined4 local_140;
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
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar2 = param_1[0xc];
  local_118 = 0.0;
  local_120 = &DAT_146a56220;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_118 = 0.0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5b850;
  lVar3 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar2 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_f0 = *(longlong **)(lVar4 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
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
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94200(lVar3,param_1);
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_128 = *(ulonglong *)(lVar4 + 0x40);
  lVar4 = *param_1;
  FUN_141aa9690(lVar2,param_1[8],local_128,*(undefined8 *)(lVar4 + 0x20));
  local_148 = FUN_141a156e0();
  local_138 = 0;
  local_140 = 0;
  thunk_FUN_141ca99a0(lVar2 + 0xc0,param_1[8],&local_128,param_1);
  local_108 = *(undefined8 *)(*param_1 + 0x3000);
  _uStack_100 = CONCAT44(*(undefined4 *)(lVar4 + 0x1650),*(undefined4 *)(*param_1 + 0x3008));
  local_148 = local_148 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1bc,&local_108);
  lVar4 = *param_1;
  fVar1 = *(float *)(lVar4 + 0x1468);
  local_148 = local_148 & 0xffffffff00000000;
  local_118 = *(float *)(lVar4 + 0x1494) * fVar1 * 0.5;
  local_114 = *(float *)(lVar4 + 0x1498) * fVar1 * 0.5;
  local_120 = (undefined *)
              CONCAT44(*(float *)(lVar4 + 0x1490) * fVar1 * 0.5,
                       fVar1 * *(float *)(lVar4 + 0x148c) * 0.5);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1c8,&local_120);
  return lVar3;
}



// FUNCTION 141c73d80 FUN_141c73d80 body=904 status=ok
// SIG undefined FUN_141c73d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c73d80(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined4 local_140;
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
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_4c = 0;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar2 = param_1[0xc];
  local_118 = 0.0;
  local_120 = &DAT_146a56220;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  local_118 = 0.0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_120 = &DAT_146a5b460;
  lVar3 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_120);
  plVar8 = plVar6;
  if ((int)local_128 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar2 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar3 == 0) {
    local_128 = 0;
    plVar8 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_f0 = *(longlong **)(lVar4 + 0x38);
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
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
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141c94200(lVar3,param_1);
  lVar4 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_128 = *(ulonglong *)(lVar4 + 0x40);
  lVar4 = *param_1;
  FUN_141aa9690(lVar2,param_1[8],local_128,*(undefined8 *)(lVar4 + 0x20));
  local_148 = FUN_141a156e0();
  local_138 = 0;
  local_140 = 0;
  thunk_FUN_141ca99a0(lVar2 + 0xc0,param_1[8],&local_128,param_1);
  local_108 = *(undefined8 *)(*param_1 + 0x3000);
  _uStack_100 = CONCAT44(*(undefined4 *)(lVar4 + 0x1650),*(undefined4 *)(*param_1 + 0x3008));
  local_148 = local_148 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1bc,&local_108);
  lVar4 = *param_1;
  fVar1 = *(float *)(lVar4 + 0x1468);
  local_148 = local_148 & 0xffffffff00000000;
  local_118 = *(float *)(lVar4 + 0x1494) * fVar1 * 0.5;
  local_114 = *(float *)(lVar4 + 0x1498) * fVar1 * 0.5;
  local_120 = (undefined *)
              CONCAT44(*(float *)(lVar4 + 0x1490) * fVar1 * 0.5,
                       fVar1 * *(float *)(lVar4 + 0x148c) * 0.5);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_1[8],local_128,lVar2 + 0x1c8,&local_120);
  return lVar3;
}



// FUNCTION 141c74110 FUN_141c74110 body=424 status=ok
// SIG undefined FUN_141c74110(void)

void FUN_141c74110(longlong param_1,longlong param_2)

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
  if (*(short *)(param_1 + 0x232) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x230);
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
    *puVar5 = &PTR_LAB_144dc9cd0;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0x238) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x236);
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
    *puVar5 = &PTR_LAB_144dc9cd0;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0x23e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x23c);
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
    *puVar5 = &PTR_LAB_144dc9cd0;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  return;
}



// FUNCTION 141c742c0 FUN_141c742c0 body=424 status=ok
// SIG undefined FUN_141c742c0(void)

void FUN_141c742c0(longlong param_1,longlong param_2)

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
  if (*(short *)(param_1 + 0x232) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x230);
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
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0x238) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x236);
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
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  if (*(short *)(param_1 + 0x23e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x23c);
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
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = 0;
  }
  return;
}



// FUNCTION 141c74470 FUN_141c74470 body=267 status=ok
// SIG undefined FUN_141c74470(void)

void FUN_141c74470(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  
  for (plVar7 = (longlong *)(param_1 + 0x10); plVar7 != (longlong *)(param_1 + 0x50);
      plVar7 = plVar7 + 2) {
    plVar1 = (longlong *)*plVar7;
    if ((((plVar1 == (longlong *)0x0) || (*(char *)((longlong)plVar1 + 10) == '\0')) ||
        (*(char *)((longlong)plVar1 + 0xb) == '\0')) || (DAT_146ab62f0 == '\0')) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    cVar2 = FRenderingCompositePass::IsAsyncComputePass(param_1);
    if (((cVar2 != cVar6) && (plVar1 != (longlong *)0x0)) &&
       (lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1), lVar3 != 0)) {
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar4 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar4;
      *(undefined8 **)(param_2 + 8) = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &PTR_LAB_144dc9d10;
      puVar4[2] = lVar3;
    }
  }
  return;
}



// FUNCTION 141c74580 FUN_141c74580 body=267 status=ok
// SIG undefined FUN_141c74580(void)

void FUN_141c74580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  
  for (plVar7 = (longlong *)(param_1 + 0x10); plVar7 != (longlong *)(param_1 + 0x50);
      plVar7 = plVar7 + 2) {
    plVar1 = (longlong *)*plVar7;
    if ((((plVar1 == (longlong *)0x0) || (*(char *)((longlong)plVar1 + 10) == '\0')) ||
        (*(char *)((longlong)plVar1 + 0xb) == '\0')) || (DAT_146ab62f0 == '\0')) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    cVar2 = FRenderingCompositePass::IsAsyncComputePass(param_1);
    if (((cVar2 != cVar6) && (plVar1 != (longlong *)0x0)) &&
       (lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1), lVar3 != 0)) {
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar4 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar4;
      *(undefined8 **)(param_2 + 8) = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &PTR_LAB_144dc9cc0;
      puVar4[2] = lVar3;
    }
  }
  return;
}



// FUNCTION 141c74690 FUN_141c74690 body=119 status=ok
// SIG undefined FUN_141c74690(void)

undefined8 * FUN_141c74690(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5cff0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74710 FUN_141c74710 body=119 status=ok
// SIG undefined FUN_141c74710(void)

undefined8 * FUN_141c74710(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5d140;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74790 FUN_141c74790 body=119 status=ok
// SIG undefined FUN_141c74790(void)

undefined8 * FUN_141c74790(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5d3e0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74810 FUN_141c74810 body=119 status=ok
// SIG undefined FUN_141c74810(void)

undefined8 * FUN_141c74810(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5d530;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74890 FUN_141c74890 body=119 status=ok
// SIG undefined FUN_141c74890(void)

undefined8 * FUN_141c74890(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5d7d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74910 FUN_141c74910 body=119 status=ok
// SIG undefined FUN_141c74910(void)

undefined8 * FUN_141c74910(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5d920;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74990 FUN_141c74990 body=119 status=ok
// SIG undefined FUN_141c74990(void)

undefined8 * FUN_141c74990(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5dbc0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74a10 FUN_141c74a10 body=119 status=ok
// SIG undefined FUN_141c74a10(void)

undefined8 * FUN_141c74a10(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a5dd10;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74a90 FUN_141c74a90 body=119 status=ok
// SIG undefined FUN_141c74a90(void)

undefined8 * FUN_141c74a90(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a60f20;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74b10 FUN_141c74b10 body=119 status=ok
// SIG undefined FUN_141c74b10(void)

undefined8 * FUN_141c74b10(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a610a0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74b90 FUN_141c74b90 body=178 status=ok
// SIG undefined FUN_141c74b90(void)

undefined8 * FUN_141c74b90(undefined8 *param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  int local_10;
  
  local_18 = &DAT_146a57ea0;
  local_10 = ((-(uint)(*(char *)((longlong)param_3 + 0x11) != '\0') & 6) +
              (-(uint)((char)param_3[4] != '\0') & 3) + param_3[3]) * 0x1c +
             (-(uint)((char)param_3[2] != '\0') & 0xe) + (-(uint)((char)param_3[1] != '\0') & 7) +
             *param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(param_2 + 0x38,local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74c50 FUN_141c74c50 body=282 status=ok
// SIG undefined FUN_141c74c50(void)

undefined8 * FUN_141c74c50(undefined8 *param_1,longlong param_2,char *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  int local_10;
  
  local_18 = &DAT_146a585d0;
  local_10 = ((-(uint)(param_3[0x18] != '\0') & 8) + *(int *)(param_3 + 0x10)) * 0x200 +
             (-(uint)(param_3[6] != '\0') & 0x40) + (-(uint)(param_3[0xc] != '\0') & 0x100) +
             (-(uint)(param_3[5] != '\0') & 0x20) + (-(uint)(param_3[4] != '\0') & 0x10) +
             (-(uint)(param_3[3] != '\0') & 8) + (-(uint)(param_3[2] != '\0') & 4) +
             (uint)(*param_3 != '\0') + (-(uint)(param_3[1] != '\0') & 2) +
             (-(uint)(param_3[8] != '\0') & 0x80);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141c74d70 FUN_141c74d70 body=128 status=ok
// SIG undefined FUN_141c74d70(void)

longlong FUN_141c74d70(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 >> 0x1f & 0x7f;
  uVar1 = param_2 + uVar2;
  uVar3 = (int)uVar1 >> 7;
  FUN_141c7ced0(param_1,(uVar1 & 0x7f) - uVar2);
  uVar1 = uVar3 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 8) = uVar1 == 1;
  uVar1 = (int)uVar3 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 0xc) = uVar1 == 1;
  uVar1 = ((int)uVar3 / 2) / 2 & 0x80000007;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return param_1;
}



// FUNCTION 141c74df0 FUN_141c74df0 body=262 status=ok
// SIG undefined FUN_141c74df0(void)

longlong FUN_141c74df0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 >> 0x1f & 0x7f;
  uVar1 = param_2 + uVar2;
  uVar3 = (int)uVar1 >> 7;
  FUN_141c7ced0(param_1,(uVar1 & 0x7f) - uVar2);
  uVar1 = uVar3 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 8) = uVar1 == 1;
  uVar1 = (int)uVar3 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = ((int)uVar3 / 2) / 2;
  *(bool *)(param_1 + 9) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)(param_1 + 10) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)(param_1 + 0xb) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)(param_1 + 0xc) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 0xd) = uVar1 == 1;
  uVar1 = (int)uVar2 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 0xe) = uVar1 == 1;
  return param_1;
}



// FUNCTION 141c74f00 FUN_141c74f00 body=408 status=ok
// SIG undefined FUN_141c74f00(void)

undefined8 * FUN_141c74f00(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e264f0;
  FPostProcessPassParameters::FPostProcessPassParameters();
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ca) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  FPostProcessPassParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FUN_141cdf500(param_2,(longlong)param_1 + 0x1bc,(longlong)param_1 + 0x1c4);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1cc,*(undefined8 *)(param_2 + 0x18),L"TextureScale",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1d2,*(undefined8 *)(param_2 + 0x18),L"TextureOffset",0);
  FShaderParameter::Bind(param_1 + 0x3b,*(undefined8 *)(param_2 + 0x18),L"TextureUVOffset",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x3e,*(undefined8 *)(param_2 + 0x18),L"DistortionTextureSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1de,*(undefined8 *)(param_2 + 0x18),L"RCoefficients",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1e4,*(undefined8 *)(param_2 + 0x18),L"GCoefficients",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1ea,*(undefined8 *)(param_2 + 0x18),L"BCoefficients",0);
  return param_1;
}



// FUNCTION 141c750a0 FPostProcessTemporalAACS body=371 status=ok
// SIG undefined FPostProcessTemporalAACS(void)

undefined8 *
FPostProcessTemporalAACS::FPostProcessTemporalAACS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e267d8;
  FTemporalAAParameters::FTemporalAAParameters();
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  FTemporalAAParameters::Bind(param_1 + 0x18,param_2);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x224,*(undefined8 *)(param_2 + 0x18),L"EyeAdaptation",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x22e,*(undefined8 *)(param_2 + 0x18),L"OutComputeTex0",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x234,*(undefined8 *)(param_2 + 0x18),L"OutComputeTex1",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x23a,*(undefined8 *)(param_2 + 0x18),L"OutComputeTexDownsampled",0
            );
  FShaderParameter::Bind(param_1 + 0x48,*(undefined8 *)(param_2 + 0x18),L"InputViewMin",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x246,*(undefined8 *)(param_2 + 0x18),L"InputViewSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x24c,*(undefined8 *)(param_2 + 0x18),L"TemporalJitterPixels",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x252,*(undefined8 *)(param_2 + 0x18),
             L"ScreenPercentageAndUpscaleFactor",0);
  return param_1;
}



// FUNCTION 141c75220 FUN_141c75220 body=166 status=ok
// SIG undefined FUN_141c75220(void)

undefined8 * FUN_141c75220(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e25458;
  FPostProcessPassParameters::FPostProcessPassParameters(param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined2 *)((longlong)param_1 + 0x23c) = 0;
  return param_1;
}



// FUNCTION 141c752d0 FPostProcessTonemapCS body=137 status=ok
// SIG undefined FPostProcessTonemapCS(void)

undefined8 * FPostProcessTonemapCS::FPostProcessTonemapCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e253b8;
  FPostProcessPassParameters::FPostProcessPassParameters(param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  return param_1;
}



// FUNCTION 141c75360 FUN_141c75360 body=833 status=ok
// SIG undefined FUN_141c75360(void)

undefined8 * FUN_141c75360(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e259e0;
  FPostProcessPassParameters::FPostProcessPassParameters();
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22c) = 0;
  FPostProcessPassParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind((longlong)param_1 + 0x1bc,*(undefined8 *)(param_2 + 0x18),L"ColorScale0",0)
  ;
  FShaderParameter::Bind((longlong)param_1 + 0x1c2,*(undefined8 *)(param_2 + 0x18),L"ColorScale1",0)
  ;
  FShaderParameter::Bind(param_1 + 0x39,*(undefined8 *)(param_2 + 0x18),L"TexScale",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1da,*(undefined8 *)(param_2 + 0x18),L"TonemapperParams",0);
  FShaderParameter::Bind(param_1 + 0x3c,*(undefined8 *)(param_2 + 0x18),L"MiscParams",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1ce,*(undefined8 *)(param_2 + 0x18),L"GrainScaleBiasJitter",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1d4,*(undefined8 *)(param_2 + 0x18),L"InverseGamma",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1e6,*(undefined8 *)(param_2 + 0x18),L"ColorMatrixR_ColorCurveCd1"
             ,0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1ec,*(undefined8 *)(param_2 + 0x18),
             L"ColorMatrixG_ColorCurveCd3Cm3",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1f2,*(undefined8 *)(param_2 + 0x18),L"ColorMatrixB_ColorCurveCm2"
             ,0);
  FShaderParameter::Bind
            (param_1 + 0x3f,*(undefined8 *)(param_2 + 0x18),L"ColorCurve_Cm0Cd0_Cd2_Ch0Cm1_Ch3",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1fe,*(undefined8 *)(param_2 + 0x18),L"ColorCurve_Ch1_Ch2",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x204,*(undefined8 *)(param_2 + 0x18),L"ColorShadow_Luma",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x20a,*(undefined8 *)(param_2 + 0x18),L"ColorShadow_Tint1",0);
  FShaderParameter::Bind(param_1 + 0x42,*(undefined8 *)(param_2 + 0x18),L"ColorShadow_Tint2",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x216,*(undefined8 *)(param_2 + 0x18),L"OverlayColor",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x21c,*(undefined8 *)(param_2 + 0x18),L"FringeIntensity",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x222,*(undefined8 *)(param_2 + 0x18),L"SRGBAwareTarget",0);
  FShaderParameter::Bind(param_1 + 0x45,*(undefined8 *)(param_2 + 0x18),L"DefaultEyeExposure",0);
  return param_1;
}



// FUNCTION 141c756b0 FUN_141c756b0 body=152 status=ok
// SIG undefined FUN_141c756b0(void)

undefined8 * FUN_141c756b0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e259e0;
  FPostProcessPassParameters::FPostProcessPassParameters(param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22c) = 0;
  return param_1;
}



// FUNCTION 141c75750 FUN_141c75750 body=605 status=ok
// SIG undefined FUN_141c75750(void)

undefined8 * FUN_141c75750(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x46) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52) = 0;
  *(undefined2 *)((longlong)param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  FShaderParameter::Bind(param_1,param_2,L"ColorScale0",0);
  FShaderParameter::Bind((longlong)param_1 + 6,param_2,L"ColorScale1",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0xc,param_2,L"NoiseTexture",0);
  FShaderResourceParameter::Bind(param_1 + 2,param_2,L"NoiseTextureSampler",0);
  FShaderParameter::Bind((longlong)param_1 + 0x14,param_2,L"TonemapperParams",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1a,param_2,L"MiscParams",0);
  FShaderParameter::Bind(param_1 + 4,param_2,L"GrainScaleBiasJitter",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0x26,param_2,L"ColorGradingLUT",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0x2a,param_2,L"ColorGradingLUTSampler",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x2e),param_2,L"InverseGamma",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x34),param_2,L"ChromaticAberrationParams",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x3a),param_2,L"ScreenPosToScenePixel",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x52),param_2,L"SceneUVMinMax",0);
  FShaderParameter::Bind(param_1 + 0xb,param_2,L"SceneBloomUVMinMax",0);
  FShaderParameter::Bind(param_1 + 8,param_2,L"CalibrateTonemapper",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x46),param_2,L"MaxGameNits",0);
  FShaderParameter::Bind((undefined4 *)((longlong)param_1 + 0x4c),param_2,L"MaxTvNits",0);
  return param_1;
}



// FUNCTION 141c759b0 FUN_141c759b0 body=806 status=ok
// SIG undefined FUN_141c759b0(void)

undefined8 * FUN_141c759b0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar8;
  ulonglong uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  uVar5 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_144e26b70;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x244) = param_3;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x1e38);
  if (*(int *)(param_2 + 0x1e38) < 1) {
    return param_1;
  }
  pfVar4 = (float *)((longlong)param_1 + 0xbc);
  uVar7 = uVar5;
  do {
    if (199 < (longlong)uVar5) {
      return param_1;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1e30) + uVar5);
    fVar8 = *(float *)(lVar1 + 0xf4);
    fVar2 = *(float *)(lVar1 + 0xf8);
    fVar3 = *(float *)(lVar1 + 0xfc);
    pfVar4[-3] = *(float *)(lVar1 + 0xf0);
    pfVar4[-2] = fVar8;
    pfVar4[-1] = fVar2;
    *pfVar4 = fVar3;
    fVar8 = (float)(**(code **)(**(longlong **)(uVar5 + *(longlong *)(param_2 + 0x1e30)) + 0x18))();
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    uVar5 = uVar5 + 8;
    *pfVar4 = 1.0 / fVar8;
    pfVar4 = pfVar4 + 4;
  } while ((int)uVar6 < *(int *)(param_2 + 0x1e38));
  return param_1;
}



// FUNCTION 141c75ce0 FRCPassPostProcessInput body=163 status=ok
// SIG undefined FRCPassPostProcessInput(void)

undefined8 * FRCPassPostProcessInput::FRCPassPostProcessInput(undefined8 *param_1,longlong *param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e269d8;
  param_2 = (longlong *)*param_2;
  param_1[0x15] = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))();
  }
  return param_1;
}



// FUNCTION 141c75d90 FRCPassPostProcessLensBlur body=144 status=ok
// SIG undefined FRCPassPostProcessLensBlur(void)

undefined8 *
FRCPassPostProcessLensBlur::FRCPassPostProcessLensBlur
          (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e26a60;
  *(undefined4 *)(param_1 + 0x15) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xac) = param_3;
  return param_1;
}



// FUNCTION 141c75e20 FRCPassPostProcessLensFlares body=156 status=ok
// SIG undefined FRCPassPostProcessLensFlares(void)

undefined8 *
FRCPassPostProcessLensFlares::FRCPassPostProcessLensFlares
          (undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  *(undefined2 *)(param_1 + 0xb) = 1;
  param_1[0xe] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e26ae8;
  *(undefined4 *)(param_1 + 0x17) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xbc) = param_3;
  return param_1;
}



// FUNCTION 141c75ec0 FUN_141c75ec0 body=317 status=ok
// SIG undefined FUN_141c75ec0(void)

undefined8 *
FUN_141c75ec0(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 1;
  *(undefined2 *)(param_1 + 0x15) = 1;
  param_1[0x18] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = param_2;
  *param_1 = &PTR_FUN_144e26c80;
  *(undefined4 *)(param_1 + 0x22) = param_4;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x2a8))(param_2,0,0);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2,param_3);
  if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 4)) {
    return param_1;
  }
  uVar3 = UMaterial::GetDefaultMaterial(4);
  param_1[0x21] = uVar3;
  return param_1;
}



// FUNCTION 141c76000 FUN_141c76000 body=140 status=ok
// SIG undefined FUN_141c76000(void)

undefined8 * FUN_141c76000(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e26d90;
  param_1[0x15] = param_2;
  return param_1;
}



// FUNCTION 141c76090 FUN_141c76090 body=204 status=ok
// SIG undefined FUN_141c76090(void)

undefined8 * FUN_141c76090(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_144e26e18;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = param_2;
  uVar1 = param_3[1];
  param_1[0x16] = *param_3;
  param_1[0x17] = uVar1;
  uVar1 = param_3[3];
  param_1[0x18] = param_3[2];
  param_1[0x19] = uVar1;
  return param_1;
}



// FUNCTION 141c76160 FRCPassPostProcessSubsurface body=160 status=ok
// SIG undefined FRCPassPostProcessSubsurface(void)

undefined8 *
FRCPassPostProcessSubsurface::FRCPassPostProcessSubsurface
          (undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  *(undefined2 *)(param_1 + 0xb) = 1;
  param_1[0xe] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e26f28;
  *(undefined4 *)(param_1 + 0x17) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xbc) = param_3;
  return param_1;
}



// FUNCTION 141c76200 FRCPassPostProcessSubsurfaceRecombine body=174 status=ok
// SIG undefined FRCPassPostProcessSubsurfaceRecombine(void)

undefined8 *
FRCPassPostProcessSubsurfaceRecombine::FRCPassPostProcessSubsurfaceRecombine
          (undefined8 *param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0x10] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e26fb0;
  *(undefined1 *)(param_1 + 0x19) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xc9) = param_3;
  return param_1;
}



// FUNCTION 141c762b0 FUN_141c762b0 body=154 status=ok
// SIG undefined FUN_141c762b0(void)

undefined8 * FUN_141c762b0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e26ea0;
  uVar1 = *(undefined8 *)(param_2 + 0x1aa0);
  uVar2 = *(undefined8 *)(param_2 + 0x1aa8);
  *(undefined1 *)(param_1 + 0x17) = param_3;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  return param_1;
}



// FUNCTION 141c76350 FUN_141c76350 body=486 status=ok
// SIG undefined FUN_141c76350(void)

undefined8 *
FUN_141c76350(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  int local_res8;
  int iStackX_c;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e27038;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  puVar5 = param_1 + 8;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  lVar8 = 3;
  do {
    *puVar5 = 1;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 1;
    *(undefined2 *)(puVar5 + 5) = 1;
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    puVar5[8] = L"UnknownTexture";
    *(undefined2 *)(puVar5 + 9) = 1;
    puVar5[10] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    puVar5 = puVar5 + 0xc;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e270c0;
  uVar4 = param_3[1];
  param_1[0x37] = *param_3;
  param_1[0x38] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 3);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar1;
  *(undefined4 *)(param_1 + 0x3a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar2 = *(undefined4 *)(param_3 + 5);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar3;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = param_5;
  *(char *)((longlong)param_1 + 10) = *(char *)((longlong)param_1 + 0x1bd);
  param_1[0x3f] = param_4;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  if (((*(char *)((longlong)param_1 + 0x1be) == '\0') ||
      (*(char *)((longlong)param_1 + 0x1bd) == '\0')) ||
     ((iVar7 = *(int *)(param_1 + 0x37), iVar7 != 1 && (iVar7 != 4)))) {
    iVar7 = *(int *)(param_1 + 0x37);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x41) = uVar6;
  if ((iVar7 - 4U & 0xfffffffd) == 0) {
    *(undefined1 *)((longlong)param_1 + 10) = 1;
    param_5._0_4_ = *(int *)((longlong)param_1 + 0x1dc) - *(int *)((longlong)param_1 + 0x1d4);
    param_5._4_4_ = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x3b);
    QuantizeSceneBufferSize(&param_5,&local_res8);
    lVar8 = FSceneRenderTargets::Get(*param_2);
    if (local_res8 <= *(int *)(lVar8 + 0x378)) {
      local_res8 = *(int *)(lVar8 + 0x378);
    }
    *(int *)(param_1 + 0x3d) = local_res8;
    iVar7 = (int)((ulonglong)*(undefined8 *)(lVar8 + 0x378) >> 0x20);
    if (iStackX_c <= iVar7) {
      iStackX_c = iVar7;
    }
    *(int *)((longlong)param_1 + 0x1ec) = iStackX_c;
  }
  return param_1;
}



// FUNCTION 141c76540 FRCPassPostProcessTonemap body=232 status=ok
// SIG undefined FRCPassPostProcessTonemap(void)

undefined8 *
FRCPassPostProcessTonemap::FRCPassPostProcessTonemap
          (undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,undefined1 param_6)

{
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0x12] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e27148;
  *(undefined1 *)((longlong)param_1 + 0xdb) = param_5;
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xda) = param_4;
  param_1[0x1c] = param_2;
  param_1[0x1d] = 0;
  *(undefined1 *)((longlong)param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 141c76630 FRCPassPostProcessTonemapES2 body=189 status=ok
// SIG undefined FRCPassPostProcessTonemapES2(void)

undefined8 *
FRCPassPostProcessTonemapES2::FRCPassPostProcessTonemapES2
          (undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0x10] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e271d0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = param_2;
  *(undefined1 *)(param_1 + 0x1b) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xd9) = param_4;
  return param_1;
}



// FUNCTION 141c766f0 FRCPassPostProcessVelocityFlatten body=180 status=ok
// SIG undefined FRCPassPostProcessVelocityFlatten(void)

undefined8 *
FRCPassPostProcessVelocityFlatten::FRCPassPostProcessVelocityFlatten(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 6;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  lVar2 = 2;
  *(undefined4 *)(param_1 + 5) = 0;
  do {
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    *(undefined2 *)(puVar1 + 5) = 1;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[8] = L"UnknownTexture";
    *(undefined2 *)(puVar1 + 9) = 1;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    puVar1 = puVar1 + 0xc;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e26d08;
  return param_1;
}



// FUNCTION 141c767b0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e27338;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c76840 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,2,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e272f8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000201;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c768f0 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,0,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e27378;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000001;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c769a0 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e272b8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_10 = 7;
    local_c = 0x808;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c76a50 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e27278;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x5010700;
    local_10 = 7;
    local_c = 0x808;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c76b00 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<0,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e27418;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x3030300;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c76bc0 FTemporalAAParameters body=140 status=ok
// SIG undefined FTemporalAAParameters(void)

longlong FTemporalAAParameters::FTemporalAAParameters(longlong param_1)

{
  FPostProcessPassParameters::FPostProcessPassParameters();
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  return param_1;
}



// FUNCTION 141c76c50 ~TRenderingCompositePassBase<3,3> body=187 status=ok
// SIG undefined ~TRenderingCompositePassBase<3,3>(void)

void TRenderingCompositePassBase<3,3>::~TRenderingCompositePassBase<3,3>(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e27038;
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  lVar2 = 3;
  puVar3 = param_1 + 0x32;
  lVar4 = 3;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x36;
  do {
    plVar1 = puVar3 + -0xc;
    puVar3 = puVar3 + -0xc;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_144dc9f20;
  return;
}



// FUNCTION 141c76d10 ~FRCPassPostProcessInput body=102 status=ok
// SIG undefined ~FRCPassPostProcessInput(void)

void FRCPassPostProcessInput::~FRCPassPostProcessInput(undefined8 *param_1)

{
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9fa8;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  return;
}



// FUNCTION 141c76d80 operator= body=117 status=ok
// SIG undefined operator=(void)

undefined8 * FPooledRenderTargetDesc::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined2 *)((longlong)param_1 + 0x26) = *(undefined2 *)((longlong)param_2 + 0x26);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  return param_1;
}



// FUNCTION 141c76e00 FUN_141c76e00 body=255 status=ok
// SIG undefined FUN_141c76e00(void)

undefined8 FUN_141c76e00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0a40();
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 6);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x2e);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0xc);
  FUN_1419e0b60(uVar1,param_2 + 0x10);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x14);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x1a);
  FUN_1419e0a40(uVar1,param_2 + 0x20);
  uVar1 = FUN_1419e0b60(param_1,param_2 + 0x26);
  FUN_1419e0b60(uVar1,param_2 + 0x2a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x52);
  FUN_1419e0a40(uVar1,param_2 + 0x58);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x34);
  FUN_1419e0a40(uVar1,param_2 + 0x3a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x40);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x46);
  FUN_1419e0a40(uVar1,param_2 + 0x4c);
  return param_1;
}



// FUNCTION 141c76f00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<3,3>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderingCompositePassBase<3,3>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 141c76f40 FUN_141c76f40 body=120 status=ok
// SIG undefined FUN_141c76f40(void)

undefined8 * FUN_141c76f40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e26bf8;
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141c76fc0 FUN_141c76fc0 body=117 status=ok
// SIG undefined FUN_141c76fc0(void)

undefined8 * FUN_141c76fc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dca250;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 141c77040 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassPostProcessInput::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FRCPassPostProcessInput();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141c77080 FUN_141c77080 body=120 status=ok
// SIG undefined FUN_141c77080(void)

undefined8 * FUN_141c77080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e26bf8;
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141c77100 FUN_141c77100 body=129 status=ok
// SIG undefined FUN_141c77100(void)

undefined8 * FUN_141c77100(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  *param_1 = &PTR_FUN_144dca250;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141c77190 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FRCPassPostProcessTemporalAA::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1f0);
  TRenderingCompositePassBase<3,3>::~TRenderingCompositePassBase<3,3>(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 141c771e0 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessTonemap::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1d);
  *param_1 = &PTR__scalar_deleting_destructor__144dca360;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141c77270 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessTonemapES2::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e14408;
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141c772f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e27338;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c77340 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e272f8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c77390 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e27378;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c773e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e272b8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c77430 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e27278;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c77480 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e27418;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c774d0 FUN_141c774d0 body=659 status=ok
// SIG undefined FUN_141c774d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c774d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)0x0;
  local_118 = local_118 & 0xffffffff00000000;
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
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  local_c8 = FUN_1404a0ce0();
  uStack_c0 = FUN_140985530();
  local_b8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_108 = 0;
  local_110 = &DAT_146a56f40;
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
  local_110 = &DAT_146a56df0;
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
  local_120 = 0;
  local_128 = 0;
  FPostProcessPassParameters::SetVS(lVar2 + 0xc0,&local_118,param_1,uVar6);
  FUN_141c91d90(lVar1,param_1);
  return;
}



// FUNCTION 141c77770 AddDependency body=82 status=ok
// SIG undefined AddDependency(void)

void TRenderingCompositePassBase<3,3>::AddDependency(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  *(int *)(param_1 + 0x1b0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1b4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x1a8),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c777d0 FUN_141c777d0 body=82 status=ok
// SIG undefined FUN_141c777d0(void)

void FUN_141c777d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x100);
  *(int *)(param_1 + 0x100) = iVar2 + 1;
  if (*(int *)(param_1 + 0x104) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xf8),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c77830 Bind body=467 status=ok
// SIG undefined Bind(void)

void FTemporalAAParameters::Bind(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FPostProcessPassParameters::Bind(param_1,uVar1);
  FUN_141cdf500(param_2,param_1 + 0xfc,param_1 + 0x104);
  FShaderParameter::Bind(param_1 + 0x10c,uVar1,L"SampleWeights",0);
  FShaderParameter::Bind(param_1 + 0x112,uVar1,L"PlusWeights",0);
  FShaderParameter::Bind(param_1 + 0x118,uVar1,L"DitherScale",0);
  FShaderParameter::Bind(param_1 + 0x11e,uVar1,L"VelocityScaling",0);
  FShaderParameter::Bind(param_1 + 0x124,uVar1,L"CurrentFrameWeight",0);
  FShaderParameter::Bind(param_1 + 0x12a,uVar1,L"ScreenPosAbsMax",0);
  FShaderParameter::Bind(param_1 + 0x130,uVar1,L"ScreenPosToHistoryBufferUV",0);
  FShaderResourceParameter::Bind(param_1 + 0x136,uVar1,L"HistoryBuffer0",0);
  FShaderResourceParameter::Bind(param_1 + 0x13a,uVar1,L"HistoryBuffer1",0);
  FShaderResourceParameter::Bind(param_1 + 0x13e,uVar1,L"HistoryBuffer0Sampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x142,uVar1,L"HistoryBuffer1Sampler",0);
  FShaderParameter::Bind(param_1 + 0x146,uVar1,L"HistoryBufferSize",0);
  FShaderParameter::Bind(param_1 + 0x14c,uVar1,L"HistoryBufferUVMinMax",0);
  FShaderParameter::Bind(param_1 + 0x152,uVar1,L"MaxViewportUVAndSvPositionToViewportUV",0);
  FShaderParameter::Bind(param_1 + 0x158,uVar1,L"OneOverHistoryPreExposure",0);
  FShaderParameter::Bind(param_1 + 0x15e,uVar1,L"ViewportUVToInputBufferUV",0);
  return;
}



// FUNCTION 141c77a10 FUN_141c77a10 body=945 status=ok
// SIG undefined FUN_141c77a10(void)

undefined8 * FUN_141c77a10(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  bool local_res10;
  bool bStackX_13;
  bool bStackX_14;
  bool bStackX_15;
  bool bStackX_16;
  undefined1 uStackX_17;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  char cStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  
  local_res10 = false;
  bStackX_13 = false;
  bStackX_14 = false;
  bStackX_15 = false;
  bStackX_16 = false;
  bVar7 = ((byte)*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x28) & 5) != 5;
  if (!bVar7) {
    bStackX_13 = 0.0 < *(float *)(param_2 + 0x165c);
    bStackX_14 = 0.0 < *(float *)(param_2 + 0x1650);
    local_res10 = 0.0 < *(float *)(param_2 + 0x1468);
    bStackX_16 = 0.0 < *(float *)(param_2 + 0x1658);
    bStackX_15 = 0.0 < *(float *)(DAT_146a582b0 + 4);
  }
  local_98 = CONCAT17(uStackX_17,
                      CONCAT16(bStackX_16,
                               CONCAT15(bStackX_15,
                                        CONCAT14(bStackX_14,
                                                 CONCAT13(bStackX_13,
                                                          (uint3)CONCAT11(bVar7,local_res10))))));
  uStack_8a = 0;
  uStack_90 = 0;
  uStack_8f = 0;
  uStack_8e = 0;
  cStack_8d = '\0';
  uStack_8c = 0;
  uStack_8b = 0;
  cVar1 = FUN_142753910();
  if (bVar7) goto LAB_141c77d1e;
  if (*(float *)(param_2 + 0x1408) == 1.0) {
    fVar9 = ABS(*(float *)(param_2 + 0x140c) - 1.0);
    fVar8 = ABS(*(float *)(param_2 + 0x1410));
    if (ABS(*(float *)(param_2 + 0x1410)) <= fVar9) {
      fVar8 = fVar9;
    }
    if (fVar8 <= ABS(*(float *)(param_2 + 0x1414))) {
      fVar8 = ABS(*(float *)(param_2 + 0x1414));
    }
    if (fVar8 != 0.0) goto LAB_141c77bae;
    fVar8 = ABS(*(float *)(param_2 + 0x1420) - 1.0);
    if (fVar8 <= ABS(*(float *)(param_2 + 0x141c))) {
      fVar8 = ABS(*(float *)(param_2 + 0x141c));
    }
    if (fVar8 <= ABS(*(float *)(param_2 + 0x1424))) {
      fVar8 = ABS(*(float *)(param_2 + 0x1424));
    }
    if (fVar8 != 0.0) goto LAB_141c77bae;
    fVar8 = ABS(*(float *)(param_2 + 0x1430));
    if (ABS(*(float *)(param_2 + 0x1430)) <= ABS(*(float *)(param_2 + 0x142c))) {
      fVar8 = ABS(*(float *)(param_2 + 0x142c));
    }
    fVar9 = ABS(*(float *)(param_2 + 0x1434) - 1.0);
    if (fVar8 <= fVar9) {
      fVar8 = fVar9;
    }
    if (fVar8 != 0.0) goto LAB_141c77bae;
  }
  else {
LAB_141c77bae:
    uStack_8c = 1;
  }
  uStack_8b = 0.0 < *(float *)(param_2 + 0x1404);
  uStack_8a = 0.0 < *(float *)(param_2 + 0x143c);
  cVar2 = FUN_142753b00();
  if (cVar2 != '\0') {
    *param_1 = local_98;
    param_1[1] = CONCAT17(uStack_89,
                          CONCAT16(uStack_8a,
                                   CONCAT15(uStack_8b,
                                            CONCAT14(uStack_8c,
                                                     CONCAT13(1,CONCAT12(uStack_8e,
                                                                         CONCAT11(uStack_8f,
                                                                                  uStack_90)))))));
    return param_1;
  }
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a61208) && (_Init_thread_header(&DAT_146a61208), DAT_146a61208 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileMSAA");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a61200 = lVar5;
    _Init_thread_footer(&DAT_146a61208);
  }
  lVar5 = DAT_146a61200;
  if ((((DAT_146ab62dd != '\0') && ((uint)(&DAT_1464c9c48)[*(int *)(param_2 + 0x1a38)] < 0x1e)) &&
      ((0x20220800U >> ((&DAT_1464c9c48)[*(int *)(param_2 + 0x1a38)] & 0x1f) & 1) != 0)) &&
     (DAT_146a61200 != 0)) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    uStack_90 = 1 < *(int *)(lVar6 + lVar5);
  }
  if (cVar1 == '\0') {
    if (DAT_1464c9c5a == '\0') {
      local_res10 = false;
    }
    else if (((*(char *)(param_2 + 0x1714) != '\x01') || (*(float *)(param_2 + 0x1738) <= 0.0)) ||
            (((*(byte *)(param_2 + 0x1718) & 1) != 0 && (0 < *(int *)(param_2 + 0x1a38))))) {
      uStack_8f = 0;
      uStack_8e = *(undefined1 *)(param_2 + 0x3010);
    }
    else {
      uStack_8f = 1;
      uStack_8e = *(undefined1 *)(param_2 + 0x3010);
    }
  }
  else {
    cStack_8d = '\x01';
  }
  local_98 = CONCAT17(uStackX_17,(uint7)CONCAT14(bStackX_14,CONCAT13(bStackX_13,(uint3)local_res10))
                     );
  cVar1 = cStack_8d;
LAB_141c77d1e:
  cStack_8d = cVar1;
  FUN_141c91660(param_1,&local_98);
  return param_1;
}



// FUNCTION 141c77e10 ComputeOutputDesc body=153 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessAaES2::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = &DAT_144e1dac4;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 2;
  *(undefined2 *)(param_2 + 5) = 1;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,0);
  lVar2 = FRenderingCompositeOutputRef::GetOutput(uVar1);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(lVar2 + 0x14);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar2 + 0x18);
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c77eb0 ComputeOutputDesc body=208 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessBloomDownES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = *(int *)(param_1 + 0xa8) / 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = *(int *)(param_1 + 0xac) / 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"BloomDown";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c77f80 ComputeOutputDesc body=228 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassPostProcessBloomSetupES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xa8);
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xac);
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"BloomSetup";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78070 ComputeOutputDesc body=216 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassPostProcessBloomSetupSmallES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"BloomSetupSmall";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78150 ComputeOutputDesc body=198 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessBloomUpES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = *(int *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0xbc) < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"BloomUp";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78220 ComputeOutputDesc body=208 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessDofBlurES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = *(int *)(param_1 + 0xb8) / 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = *(int *)(param_1 + 0xbc) / 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"DofBlur";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c782f0 ComputeOutputDesc body=227 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessDofDownES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar2 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar5 = 10;
  if (cVar2 != '\0') {
    uVar5 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  iVar4 = *(int *)(param_1 + 0xc4);
  iVar1 = *(int *)(param_1 + 0xbc);
  iVar3 = (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb8)) / 2;
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar3;
  iVar4 = (iVar4 - iVar1) / 2;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  *(int *)(param_2 + 3) = iVar4;
  param_2[8] = L"DofDown";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c783e0 ComputeOutputDesc body=190 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessDofNearES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)param_2 = 1;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 2;
  *(undefined2 *)(param_2 + 5) = 1;
  iVar1 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar1;
  iVar1 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 3) = iVar1;
  param_2[8] = L"DofNear";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c784a0 ComputeOutputDesc body=69 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessInput::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = puVar5[6];
  uVar3 = puVar5[7];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  uVar1 = puVar5[8];
  uVar4 = puVar5[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = uVar1;
  param_2[9] = uVar4;
  return param_2;
}



// FUNCTION 141c784f0 ComputeOutputDesc body=138 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessLensBlur::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar6 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar5);
  uVar5 = puVar6[1];
  uVar1 = puVar6[2];
  uVar2 = puVar6[3];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  uVar5 = puVar6[4];
  uVar3 = puVar6[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar6[6];
  uVar2 = puVar6[7];
  param_2[4] = uVar5;
  param_2[5] = uVar3;
  uVar5 = puVar6[8];
  uVar3 = puVar6[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar5;
  param_2[9] = uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  uVar1 = uRam00000001464c9c90;
  uVar5 = _DAT_1464c9c88;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  uVar4 = DAT_1464c9c98;
  *param_2 = uVar5;
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 2) = uVar4;
  param_2[8] = L"LensBlur";
  return param_2;
}



// FUNCTION 141c78580 ComputeOutputDesc body=112 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessLensFlares::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"LensFlares";
  return param_2;
}



// FUNCTION 141c785f0 FUN_141c785f0 body=168 status=ok
// SIG undefined FUN_141c785f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141c785f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar6 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar5);
  uVar5 = puVar6[1];
  uVar1 = puVar6[2];
  uVar2 = puVar6[3];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  uVar5 = puVar6[4];
  uVar3 = puVar6[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar6[6];
  uVar2 = puVar6[7];
  param_2[4] = uVar5;
  param_2[5] = uVar3;
  uVar5 = puVar6[8];
  uVar3 = puVar6[9];
  lVar4 = param_1[0x22];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar5;
  param_2[9] = uVar3;
  if ((int)lVar4 != 0) {
    *(int *)((longlong)param_2 + 0x2c) = (int)lVar4;
  }
  uVar1 = _DAT_1464aa6e8;
  uVar5 = _DAT_1464aa6e0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  uStack_24 = (undefined4)uVar5;
  uStack_20 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_1c = (undefined4)uVar1;
  uStack_18 = (undefined4)((ulonglong)uVar1 >> 0x20);
  param_2[8] = L"PostProcessMaterial";
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  *(undefined1 *)(param_2 + 9) = 0;
  return param_2;
}



// FUNCTION 141c786a0 ComputeOutputDesc body=112 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessMorpheus::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"Morpheus";
  return param_2;
}



// FUNCTION 141c78710 ComputeOutputDesc body=165 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessMotionBlur::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  uVar13 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar14 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar13);
  cVar12 = *(char *)((longlong)param_1 + 10);
  uVar13 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  *param_2 = *puVar14;
  param_2[1] = uVar13;
  uVar13 = puVar14[4];
  uVar11 = puVar14[5];
  param_2[2] = uVar9;
  param_2[3] = uVar10;
  uVar1 = *(undefined4 *)(puVar14 + 6);
  uVar2 = *(undefined4 *)((longlong)puVar14 + 0x34);
  uVar3 = *(undefined4 *)(puVar14 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar14 + 0x3c);
  param_2[4] = uVar13;
  param_2[5] = uVar11;
  uVar5 = *(undefined4 *)(puVar14 + 8);
  uVar6 = *(undefined4 *)((longlong)puVar14 + 0x44);
  uVar7 = *(undefined4 *)(puVar14 + 9);
  uVar8 = *(undefined4 *)((longlong)puVar14 + 0x4c);
  *(undefined4 *)(param_2 + 6) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 7) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
  *(undefined4 *)(param_2 + 8) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar6;
  *(undefined4 *)(param_2 + 9) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar8;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  uVar15 = 1;
  if (cVar12 != '\0') {
    uVar15 = 0x10000;
  }
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = uVar15 | *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  cVar12 = FUN_141c49c20();
  if (cVar12 == '\0') {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da4c;
  param_2[8] = L"MotionBlur";
  *(undefined1 *)(param_2 + 9) = 0;
  return param_2;
}



// FUNCTION 141c787c0 ComputeOutputDesc body=83 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessOutput::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  param_2[8] = L"PostProcessOutput";
  return param_2;
}



// FUNCTION 141c78820 ComputeOutputDesc body=156 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessMotionBlur::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  uVar13 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar14 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar13);
  cVar12 = *(char *)((longlong)param_1 + 10);
  uVar13 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  *param_2 = *puVar14;
  param_2[1] = uVar13;
  uVar13 = puVar14[4];
  uVar11 = puVar14[5];
  param_2[2] = uVar9;
  param_2[3] = uVar10;
  uVar1 = *(undefined4 *)(puVar14 + 6);
  uVar2 = *(undefined4 *)((longlong)puVar14 + 0x34);
  uVar3 = *(undefined4 *)(puVar14 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar14 + 0x3c);
  param_2[4] = uVar13;
  param_2[5] = uVar11;
  uVar5 = *(undefined4 *)(puVar14 + 8);
  uVar6 = *(undefined4 *)((longlong)puVar14 + 0x44);
  uVar7 = *(undefined4 *)(puVar14 + 9);
  uVar8 = *(undefined4 *)((longlong)puVar14 + 0x4c);
  *(undefined4 *)(param_2 + 6) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 7) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
  *(undefined4 *)(param_2 + 8) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar6;
  *(undefined4 *)(param_2 + 9) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar8;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  uVar15 = 1;
  if (cVar12 != '\0') {
    uVar15 = 0x10000;
  }
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = uVar15 | *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  cVar12 = FUN_141c49c20();
  if (cVar12 == '\0') {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  param_2[8] = L"RadialBlur";
  *(undefined1 *)(param_2 + 9) = 0;
  return param_2;
}



// FUNCTION 141c788c0 ComputeOutputDesc body=142 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessSubsurface::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar6 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar5);
  uVar5 = puVar6[1];
  uVar1 = puVar6[2];
  uVar2 = puVar6[3];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  uVar5 = puVar6[4];
  uVar3 = puVar6[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar6[6];
  uVar2 = puVar6[7];
  param_2[4] = uVar5;
  param_2[5] = uVar3;
  uVar5 = puVar6[8];
  uVar3 = puVar6[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar5;
  param_2[9] = uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  lVar4 = param_1[0x17];
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  pwVar7 = L"SubsurfaceY";
  if ((int)lVar4 == 0) {
    pwVar7 = L"SubsurfaceX";
  }
  param_2[8] = pwVar7;
  return param_2;
}



// FUNCTION 141c78950 ComputeOutputDesc body=112 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessSubsurfaceRecombine::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"SceneColorSubsurface";
  return param_2;
}



// FUNCTION 141c789c0 ComputeOutputDesc body=204 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessSubsurfaceSetup::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = FSceneRenderTargets::Get();
  puVar4 = (undefined8 *)FUN_141ce54b0(uVar3);
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)*puVar4 + 0x10))();
  uVar3 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar3;
  uVar3 = puVar4[3];
  param_2[2] = puVar4[2];
  param_2[3] = uVar3;
  uVar3 = puVar4[5];
  param_2[4] = puVar4[4];
  param_2[5] = uVar3;
  uVar3 = puVar4[7];
  param_2[6] = puVar4[6];
  param_2[7] = uVar3;
  uVar3 = puVar4[9];
  param_2[8] = puVar4[8];
  param_2[9] = uVar3;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0x7fefffff;
  *(undefined2 *)(param_2 + 5) = 1;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"SubsurfaceSetup";
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  if (*(char *)(param_1 + 0xb8) != '\0') {
    iVar1 = ((int)*(undefined8 *)((longlong)param_2 + 0x14) + 1) / 2;
    iVar2 = ((int)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x14) >> 0x20) + 1) / 2;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    *(int *)((longlong)param_2 + 0x14) = iVar1;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_2 + 3) = iVar2;
  }
  return param_2;
}



// FUNCTION 141c78a90 ComputeOutputDesc body=190 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessSunAlphaES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)param_2 = 1;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 2;
  *(undefined2 *)(param_2 + 5) = 1;
  iVar1 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar1;
  iVar1 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 3) = iVar1;
  param_2[8] = L"SunAlpha";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78b50 ComputeOutputDesc body=216 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessSunAvgES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = (int)(*(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xb8) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = (int)(*(int *)(param_1 + 0xbc) + (*(int *)(param_1 + 0xbc) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"SunAvg";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78c30 ComputeOutputDesc body=190 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessSunBlurES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)param_2 = 1;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 2;
  *(undefined2 *)(param_2 + 5) = 1;
  iVar1 = (int)(*(int *)(param_1 + 0xa8) + (*(int *)(param_1 + 0xa8) >> 0x1f & 3U)) >> 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar1;
  iVar1 = (int)(*(int *)(param_1 + 0xac) + (*(int *)(param_1 + 0xac) >> 0x1f & 3U)) >> 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 3) = iVar1;
  param_2[8] = L"SunBlur";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78cf0 ComputeOutputDesc body=198 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessSunMaskES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = *(int *)(param_1 + 0xa8);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = *(int *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0xac) < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"SunMask";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78dc0 ComputeOutputDesc body=216 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRCPassPostProcessSunMergeES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = (int)(*(int *)(param_1 + 200) + (*(int *)(param_1 + 200) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = (int)(*(int *)(param_1 + 0xcc) + (*(int *)(param_1 + 0xcc) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"SunMerge";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78ea0 ComputeOutputDesc body=216 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassPostProcessSunMergeSmallES2::ComputeOutputDesc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  cVar1 = FUN_142753910();
  *(undefined2 *)(param_2 + 5) = 1;
  uVar3 = 10;
  if (cVar1 != '\0') {
    uVar3 = 2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  iVar2 = (int)(*(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xb8) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar2;
  iVar2 = (int)(*(int *)(param_1 + 0xbc) + (*(int *)(param_1 + 0xbc) >> 0x1f & 3U)) >> 2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"SunMergeSmall";
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  return param_2;
}



// FUNCTION 141c78f80 FUN_141c78f80 body=690 status=ok
// SIG undefined FUN_141c78f80(void)

undefined8 * FUN_141c78f80(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = L"UnknownTexture";
  param_2[4] = 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined2 *)(param_2 + 9) = 1;
  if (-1 < param_3) {
    if (param_3 < 2) {
      uVar7 = (**(code **)(*param_1 + 8))(param_1,0);
      puVar8 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar7);
      uVar7 = puVar8[1];
      *param_2 = *puVar8;
      param_2[1] = uVar7;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar8 + 0x14);
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar8 + 3);
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)puVar8 + 0x1c);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar8 + 4);
      *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)((longlong)puVar8 + 0x24);
      *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)((longlong)puVar8 + 0x25);
      *(undefined2 *)((longlong)param_2 + 0x26) = *(undefined2 *)((longlong)puVar8 + 0x26);
      *(undefined2 *)(param_2 + 5) = *(undefined2 *)(puVar8 + 5);
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)puVar8 + 0x2c);
      uVar9 = *(uint *)(puVar8 + 6);
      *(uint *)(param_2 + 6) = uVar9;
      uVar2 = *(uint *)((longlong)puVar8 + 0x34);
      *(uint *)((longlong)param_2 + 0x34) = uVar2;
      *(undefined1 *)(param_2 + 7) = *(undefined1 *)(puVar8 + 7);
      param_2[8] = puVar8[8];
      *(undefined1 *)(param_2 + 9) = *(undefined1 *)(puVar8 + 9);
      uVar1 = *(undefined1 *)((longlong)puVar8 + 0x49);
      *(undefined1 *)(param_2 + 9) = 1;
      *(uint *)((longlong)param_2 + 0x34) = uVar2 & 0xfffeffff | 1;
      *(undefined2 *)(param_2 + 5) = 1;
      *(undefined1 *)((longlong)param_2 + 0x49) = uVar1;
      *(uint *)(param_2 + 6) = uVar9 & 0x7fefffff;
      *(undefined1 *)(param_2 + 7) = 0;
      *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
      lVar4 = param_1[0x37];
      *(uint *)((longlong)param_2 + 0x34) = uVar2 & 0xfffefffe;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[8] = (&PTR_u_DOFTemporalAA_144e25380)[(int)lVar4];
      uVar9 = 1;
      if (*(char *)((longlong)param_1 + 10) != '\0') {
        uVar9 = 0x10000;
      }
      *(uint *)((longlong)param_2 + 0x34) = uVar9 | uVar2 & 0xfffefffe;
      if (0 < (int)param_1[0x3d]) {
        uVar3 = param_1[0x3d];
        iVar5 = *(int *)((longlong)param_1 + 0x1e4);
        *(int *)((longlong)param_2 + 0x14) =
             (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                  (longlong)iVar5);
        *(int *)(param_2 + 3) = (int)(uVar3 >> 0x20) / iVar5;
      }
      if ((int)param_1[0x37] - 5U < 2) {
        *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10000;
        return param_2;
      }
    }
    else if ((param_3 == 2) && ((char)param_1[0x41] != '\0')) {
      uVar7 = (**(code **)(*param_1 + 8))(param_1,0);
      uVar7 = FRenderingCompositeOutputRef::GetOutput(uVar7);
      FPooledRenderTargetDesc::operator=(param_2,uVar7);
      uVar9 = *(uint *)((longlong)param_2 + 0x34);
      *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0xffefffff;
      *(undefined2 *)(param_2 + 5) = 1;
      *(uint *)((longlong)param_2 + 0x34) = uVar9 & 0xfffeffff | 1;
      *(undefined1 *)(param_2 + 7) = 0;
      *(undefined1 *)(param_2 + 9) = 1;
      if ((int)param_1[0x38] != 0) {
        *(int *)((longlong)param_2 + 0x2c) = (int)param_1[0x38];
      }
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[8] = L"SceneColorHalfRes";
      *(uint *)((longlong)param_2 + 0x34) = uVar9 & 0xfffefffe | 0x10000;
      if (0 < (int)param_1[0x3d]) {
        uVar3 = param_1[0x3d];
        iVar5 = *(int *)((longlong)param_1 + 0x1e4);
        *(int *)((longlong)param_2 + 0x14) =
             (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                  (longlong)iVar5);
        *(int *)(param_2 + 3) = (int)(uVar3 >> 0x20) / iVar5;
      }
      iVar5 = ((int)*(undefined8 *)((longlong)param_2 + 0x14) + 1) / 2;
      iVar6 = ((int)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x14) >> 0x20) + 1) / 2;
      *(int *)(param_2 + 3) = iVar6;
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      *(int *)((longlong)param_2 + 0x14) = iVar5;
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      *(int *)(param_2 + 3) = iVar6;
    }
  }
  return param_2;
}



// FUNCTION 141c79240 FUN_141c79240 body=269 status=ok
// SIG undefined FUN_141c79240(void)

undefined8 * FUN_141c79240(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[3];
  param_2[2] = puVar5[2];
  param_2[3] = uVar4;
  uVar4 = puVar5[5];
  param_2[4] = puVar5[4];
  param_2[5] = uVar4;
  uVar4 = puVar5[7];
  param_2[6] = puVar5[6];
  param_2[7] = uVar4;
  uVar4 = puVar5[9];
  param_2[8] = puVar5[8];
  param_2[9] = uVar4;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 9) = 1;
  uVar2 = 1;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    uVar2 = 0x10000;
  }
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | uVar2;
  uVar3 = 2;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    uVar3 = 0x25;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  if (*(char *)((longlong)param_1 + 0xdb) != '\0') {
    uVar3 = DAT_1464c9c38;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  *param_2 = 1;
  param_2[1] = 0;
  param_2[8] = L"Tonemap";
  *(undefined4 *)(param_2 + 2) = 0;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da50;
  if (*(int *)(DAT_146a58340 + 4) == 7) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 1;
  }
  if ((*(char *)((longlong)param_1 + 0xd9) != '\0') &&
     (lVar1 = param_1[0x1c], *(int *)(lVar1 + 0x1a38) < 2)) {
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(lVar1 + 0x370);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar1 + 0x374);
  }
  return param_2;
}



// FUNCTION 141c79350 FUN_141c79350 body=195 status=ok
// SIG undefined FUN_141c79350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141c79350(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar3 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar2);
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  uVar2 = puVar3[3];
  param_2[2] = puVar3[2];
  param_2[3] = uVar2;
  uVar2 = puVar3[5];
  param_2[4] = puVar3[4];
  param_2[5] = uVar2;
  uVar2 = puVar3[7];
  param_2[6] = puVar3[6];
  param_2[7] = uVar2;
  uVar2 = puVar3[9];
  param_2[8] = puVar3[8];
  param_2[9] = uVar2;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"Tonemap";
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 2;
  uStack_24 = (undefined4)_DAT_1464aa6e0;
  uStack_20 = (undefined4)((ulonglong)_DAT_1464aa6e0 >> 0x20);
  uStack_1c = (undefined4)_DAT_1464aa6e8;
  uStack_18 = (undefined4)((ulonglong)_DAT_1464aa6e8 >> 0x20);
  *param_2 = CONCAT44(uStack_24,1);
  param_2[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined4 *)(param_2 + 2) = uStack_18;
  if ((char)param_1[0x19] != '\0') {
    lVar1 = param_1[0x1a];
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(lVar1 + 0x370);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar1 + 0x374);
  }
  return param_2;
}



// FUNCTION 141c79420 ComputeOutputDesc body=350 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassPostProcessVelocityFlatten::ComputeOutputDesc
          (longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 uStack_10;
  
  if (param_3 == 0) {
    uVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = FRenderingCompositeOutputRef::GetOutput(uVar2);
    local_38 = *(undefined8 *)(lVar3 + 0x20);
    uStack_30._0_4_ = (undefined4)*(undefined8 *)(lVar3 + 0x28);
    uStack_30 = CONCAT44(0x1a,(undefined4)uStack_30);
    iStack_44 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
    iStack_40 = (int)*(undefined8 *)(lVar3 + 0x18);
    uStack_3c = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
    uStack_20 = *(ulonglong *)(lVar3 + 0x38);
    uStack_10 = CONCAT71((int7)((ulonglong)*(undefined8 *)(lVar3 + 0x48) >> 8),1);
    local_28._0_4_ = (uint)*(undefined8 *)(lVar3 + 0x30);
    local_28 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar3 + 0x30) >> 0x20),
                        (uint)local_28 | DAT_146a9da44) | 0x1000100000000;
    pwVar4 = L"VelocityFlat";
  }
  else {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0);
    lVar3 = FRenderingCompositeOutputRef::GetOutput(uVar2);
    iStack_44 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
    iStack_40 = (int)*(undefined8 *)(lVar3 + 0x18);
    uStack_20 = *(ulonglong *)(lVar3 + 0x38);
    uStack_3c = 0;
    uStack_30._0_4_ = (undefined4)*(undefined8 *)(lVar3 + 0x28);
    uStack_30 = CONCAT44(10,(undefined4)uStack_30);
    iStack_44 = (int)((iStack_44 + 0xf >> 0x1f & 0xfU) + iStack_44 + 0xf) >> 4;
    iStack_40 = (int)(iStack_40 + 0xf + (iStack_40 + 0xf >> 0x1f & 0xfU)) >> 4;
    local_38 = 0x1000000000001;
    uStack_10 = CONCAT62((int6)((ulonglong)*(undefined8 *)(lVar3 + 0x48) >> 0x10),1);
    local_28 = CONCAT44(0x10001,DAT_146a9da48);
    pwVar4 = L"MaxVelocity";
  }
  uVar1 = DAT_146ab6938;
  uVar2 = uRam0000000146ab6930;
  uStack_30 = CONCAT62(uStack_30._2_6_,1);
  *param_2 = _DAT_146ab6928;
  param_2[1] = uVar2;
  uStack_20 = uStack_20 & 0xffffffffffffff00;
  param_2[2] = CONCAT44(iStack_44,uVar1);
  param_2[3] = CONCAT44(uStack_3c,iStack_40);
  param_2[4] = local_38;
  param_2[5] = uStack_30;
  param_2[6] = local_28;
  param_2[7] = uStack_20;
  param_2[8] = pwVar4;
  param_2[9] = uStack_10;
  return param_2;
}



// FUNCTION 141c79580 ComputeOutputDesc body=115 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessVelocityGather::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10001;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da4c;
  param_2[8] = L"ScatteredMaxVelocity";
  *(undefined1 *)(param_2 + 7) = 0;
  return param_2;
}



// FUNCTION 141c79600 ComputeOutputDesc body=112 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessVelocityScatter::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  param_2[8] = L"ScatteredMaxVelocity";
  return param_2;
}



// FUNCTION 141c79670 FUN_141c79670 body=336 status=ok
// SIG undefined FUN_141c79670(void)

float * FUN_141c79670(float *param_1,float *param_2)

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
  
  fVar1 = param_1[0x60];
  fVar2 = param_1[0x61];
  fVar3 = param_1[0x62];
  fVar4 = param_1[99];
  fVar5 = param_1[100];
  fVar6 = param_1[0x65];
  fVar7 = param_1[0x66];
  fVar8 = param_1[0x67];
  fVar9 = *param_1;
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  fVar13 = param_1[0x68];
  fVar14 = param_1[0x69];
  fVar15 = param_1[0x6a];
  fVar16 = param_1[0x6b];
  fVar17 = param_1[4];
  fVar18 = param_1[5];
  fVar19 = param_1[6];
  fVar20 = param_1[7];
  fVar29 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x6e) >> 0x20);
  fVar21 = param_1[8];
  fVar22 = param_1[9];
  fVar23 = param_1[10];
  fVar24 = param_1[0xb];
  fVar25 = param_1[0xc];
  fVar26 = param_1[0xd];
  fVar27 = param_1[0xe];
  fVar28 = param_1[0xf];
  *param_2 = fVar1 * fVar9 + fVar2 * fVar17 + fVar3 * fVar21 + fVar4 * fVar25;
  param_2[1] = fVar1 * fVar10 + fVar2 * fVar18 + fVar3 * fVar22 + fVar4 * fVar26;
  param_2[2] = fVar1 * fVar11 + fVar2 * fVar19 + fVar3 * fVar23 + fVar4 * fVar27;
  param_2[3] = fVar1 * fVar12 + fVar2 * fVar20 + fVar3 * fVar24 + fVar4 * fVar28;
  param_2[4] = fVar6 * fVar17 + fVar5 * fVar9 + fVar7 * fVar21 + fVar8 * fVar25;
  param_2[5] = fVar6 * fVar18 + fVar5 * fVar10 + fVar7 * fVar22 + fVar8 * fVar26;
  param_2[6] = fVar6 * fVar19 + fVar5 * fVar11 + fVar7 * fVar23 + fVar8 * fVar27;
  param_2[7] = fVar6 * fVar20 + fVar5 * fVar12 + fVar7 * fVar24 + fVar8 * fVar28;
  param_2[8] = fVar14 * fVar17 + fVar13 * fVar9 + fVar15 * fVar21 + fVar16 * fVar25;
  param_2[9] = fVar14 * fVar18 + fVar13 * fVar10 + fVar15 * fVar22 + fVar16 * fVar26;
  param_2[10] = fVar14 * fVar19 + fVar13 * fVar11 + fVar15 * fVar23 + fVar16 * fVar27;
  param_2[0xb] = fVar14 * fVar20 + fVar13 * fVar12 + fVar15 * fVar24 + fVar16 * fVar28;
  param_2[0xc] = fVar9 * 0.0 + fVar17 * 0.0 + fVar21 * 0.0 + fVar29 * fVar25;
  param_2[0xd] = fVar10 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0 + fVar29 * fVar26;
  param_2[0xe] = fVar11 * 0.0 + fVar19 * 0.0 + fVar23 * 0.0 + fVar29 * fVar27;
  param_2[0xf] = fVar12 * 0.0 + fVar20 * 0.0 + fVar24 * 0.0 + fVar29 * fVar28;
  return param_2;
}



// FUNCTION 141c797c0 FUN_141c797c0 body=115 status=ok
// SIG undefined FUN_141c797c0(void)

undefined8 * FUN_141c797c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x210);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141d89a50(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e257e8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x22);
    FPostProcessPassParameters::Bind(puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c79840 FUN_141c79840 body=396 status=ok
// SIG undefined FUN_141c79840(void)

undefined8 * FUN_141c79840(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e261f0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xce);
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1da) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1e4) = 0;
    *(undefined4 *)(puVar1 + 0x3d) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1ec) = 0;
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"MotionBlurComputeParams",0);
    FPostProcessPassParameters::Bind((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1cc),(longlong)puVar1 + 0x1d4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1dc,*(undefined8 *)(param_1 + 0x18),L"MotionBlurParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1e2,*(undefined8 *)(param_1 + 0x18),
               L"SceneColorBufferUVToViewBufferUV",0);
    FShaderParameter::Bind(puVar1 + 0x3d,*(undefined8 *)(param_1 + 0x18),L"TileUVMax",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c799d0 ConstructCompiledInstance body=322 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessMotionBlurPS<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1a450;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"MotionBlurParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),
               L"SceneColorBufferUVToViewBufferUV",0);
    FShaderParameter::Bind(puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18),L"TileUVMax",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c79b20 ConstructCompiledInstance body=231 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessNoiseBlurPS<1>::ConstructCompiledInstance(longlong param_1)

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
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"NoiseParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c79c10 ConstructCompiledInstance body=278 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessSubsurfaceSetupPS<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x1e0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e25bf0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar2 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1bc) = 0;
    *(undefined2 *)(puVar2 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c4) = 0;
    *(undefined2 *)(puVar2 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1cc) = 0;
    puVar2[0x3a] = 0;
    *(undefined2 *)(puVar2 + 0x3b) = 0;
    FPostProcessPassParameters::Bind(puVar2 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar2 + 0x1bc),(longlong)puVar2 + 0x1c4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderParameter::Bind(puVar2 + 0x3a,uVar1,L"SSSParams",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0x1d6,uVar1,L"SSProfilesTexture",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c79d30 ConstructCompiledInstance body=225 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessSunMaskPS_ES2<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25898;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"SunColorApertureDiv2",0);
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1c4),(longlong)puVar1 + 0x1cc);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c79e20 ConstructCompiledInstance body=243 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessSunMergePS_ES2<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25fd0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1cc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"SunColorVignetteIntensity"
               ,0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"VignetteColor",0);
    FShaderParameter::Bind(puVar1 + 0x39,*(undefined8 *)(param_1 + 0x18),L"BloomColor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c79f20 ConstructCompiledInstance body=130 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TPostProcessLensFlareBasePS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25620;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c79fb0 ConstructCompiledInstance body=271 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TPostProcessSubsurfacePS<1,1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x1d8);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e25d68;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar2 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1bc) = 0;
    *(undefined2 *)(puVar2 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c4) = 0;
    *(undefined2 *)(puVar2 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x1cc) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar2 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar2 + 0x1bc),(longlong)puVar2 + 0x1c4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderParameter::Bind((longlong)puVar2 + 0x1cc,uVar1,L"SSSParams",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0x1d2,uVar1,L"SSProfilesTexture",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a0c0 FUN_141c7a0c0 body=370 status=ok
// SIG undefined FUN_141c7a0c0(void)

undefined8 * FUN_141c7a0c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1d0b0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptation",0);
    FShaderParameter::Bind(puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"GrainRandomFull",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),L"DefaultEyeExposure",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"ScreenPosToScenePixel",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"TonemapperParams",0);
    FShaderParameter::Bind(puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18),L"MiscParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a240 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessAaPS_ES2::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"AaBlendAmount",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a2f0 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBloomDownVS_ES2::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"BloomDownScale",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a3a0 ConstructCompiledInstance body=210 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBloomUpPS_ES2::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25650;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"BloomTintA",0)
    ;
    FShaderParameter::Bind((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"BloomTintB",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a480 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBloomUpVS_ES2::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"BloomUpScales",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a530 ConstructCompiledInstance body=243 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessLensBlurVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e26040;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1cc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"TileCountAndSize",0);
    FShaderParameter::Bind((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"KernelSize",0)
    ;
    FShaderParameter::Bind(puVar1 + 0x39,*(undefined8 *)(param_1 + 0x18),L"ColorScale",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a630 ConstructCompiledInstance body=210 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessLensFlaresPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25650;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"FlareColor",0)
    ;
    FShaderParameter::Bind((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"TexScale",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a710 FUN_141c7a710 body=256 status=ok
// SIG undefined FUN_141c7a710(void)

undefined8 * FUN_141c7a710(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25750;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xda) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xe2) = 0;
    FUN_141cdf500(param_1);
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutTexture",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"LightDistortionParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"LightPositionAndInvRadius",
               0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a810 FUN_141c7a810 body=46 status=ok
// SIG undefined FUN_141c7a810(void)

void FUN_141c7a810(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1f8);
  if (lVar1 != 0) {
    FUN_141c74f00(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c7a840 FUN_141c7a840 body=215 status=ok
// SIG undefined FUN_141c7a840(void)

undefined8 * FUN_141c7a840(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25720;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xce);
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutputTexture");
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"RadialBlurParameters",0);
    FPostProcessPassParameters::Bind((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7a920 ConstructCompiledInstance body=324 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessSubsurfaceVisualizePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x1e0);
  if (puVar2 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144e258e0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar2 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1bc) = 0;
    *(undefined2 *)(puVar2 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c4) = 0;
    *(undefined2 *)(puVar2 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1cc) = 0;
    puVar2[0x3a] = 0;
    *(undefined2 *)(puVar2 + 0x3b) = 0;
    FPostProcessPassParameters::Bind(puVar2 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar2 + 0x1bc),(longlong)puVar2 + 0x1c4);
    FShaderResourceParameter::Bind
              ((longlong)puVar2 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"MiniFontTexture",0);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FShaderParameter::Bind(puVar2 + 0x3a,uVar1,L"SSSParams",0);
    FShaderResourceParameter::Bind((longlong)puVar2 + 0x1d6,uVar1,L"SSProfilesTexture",0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7aa70 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessSunAlphaVS_ES2::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"LightShaftCenter",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7ab20 ConstructCompiledInstance body=280 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessSunMergeSmallPS_ES2::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e26070;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"SunColorVignetteIntensity"
               ,0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"VignetteColor",0);
    FShaderParameter::Bind(puVar1 + 0x39,*(undefined8 *)(param_1 + 0x18),L"BloomColor",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1ce,*(undefined8 *)(param_1 + 0x18),L"BloomColor2",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7ac40 FUN_141c7ac40 body=46 status=ok
// SIG undefined FUN_141c7ac40(void)

void FUN_141c7ac40(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(600);
  if (lVar1 != 0) {
    FPostProcessTemporalAACS::FPostProcessTemporalAACS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c7ac70 ConstructCompiledInstance body=114 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessTemporalAAPS::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e266e8;
    FTemporalAAParameters::FTemporalAAParameters(puVar1 + 0x18);
    FTemporalAAParameters::Bind(puVar1 + 0x18,param_1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7acf0 FUN_141c7acf0 body=149 status=ok
// SIG undefined FUN_141c7acf0(void)

undefined8 * FUN_141c7acf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf7d0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SceneDepthZForeground",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),
               L"SceneDepthZForegroundSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7ad90 ConstructCompiledInstance body=284 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessTestImagePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25b88;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FColorRemapShaderParameters::FColorRemapShaderParameters
              (puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18));
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"FrameNumber",0);
    FShaderParameter::Bind((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"FrameTime",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7aeb0 FUN_141c7aeb0 body=387 status=ok
// SIG undefined FUN_141c7aeb0(void)

undefined8 * FUN_141c7aeb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x240);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25458;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1dc) = 0;
    FUN_141c75750(puVar1 + 0x3c,*(undefined8 *)(param_1 + 0x18));
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FRWShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c4,*(undefined8 *)(param_1 + 0x18),L"TonemapComputeParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1ca,*(undefined8 *)(param_1 + 0x18),L"OverlayColor",0);
    FShaderResourceParameter::Bind(puVar1 + 0x3a,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptation",0)
    ;
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d4,*(undefined8 *)(param_1 + 0x18),L"GrainRandomFull",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1da,*(undefined8 *)(param_1 + 0x18),L"DefaultEyeExposure",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b040 FUN_141c7b040 body=186 status=ok
// SIG undefined FUN_141c7b040(void)

undefined8 * FUN_141c7b040(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x220);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e253b8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    FUN_141c75750((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)((longlong)puVar1 + 0x21a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x21e) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x21a,*(undefined8 *)(param_1 + 0x18),L"OverlayColor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b100 FUN_141c7b100 body=46 status=ok
// SIG undefined FUN_141c7b100(void)

void FUN_141c7b100(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x230);
  if (lVar1 != 0) {
    FUN_141c75360(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c7b130 FUN_141c7b130 body=344 status=ok
// SIG undefined FUN_141c7b130(void)

undefined8 * FUN_141c7b130(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25a50;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind(puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"GrainRandomFull",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),L"FringeIntensity",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"ScreenPosToScenePixel",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"TonemapperParams",0);
    FShaderParameter::Bind(puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18),L"MiscParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b290 FUN_141c7b290 body=366 status=ok
// SIG undefined FUN_141c7b290(void)

undefined8 * FUN_141c7b290(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25c20;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xcc);
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    FPostProcessPassParameters::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind(puVar1 + 0x39,*(undefined8 *)(param_1 + 0x18),L"MotionBlurParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1ce,*(undefined8 *)(param_1 + 0x18),L"StaticMotionBlurIntensity"
               ,0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d4,*(undefined8 *)(param_1 + 0x18),
               L"DynamicMotionBlurIntensity",0);
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutVelocityFlat",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"OutMaxTileVelocity",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1da,*(undefined8 *)(param_1 + 0x18),L"CameraMotionParameters",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b400 ConstructCompiledInstance body=225 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessVelocityGatherCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25e80;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xc6);
    *(undefined4 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1c6) = 0;
    FPostProcessPassParameters::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"MotionBlurParameters",0);
    FShaderParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutScatteredMaxVelocity",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b4f0 ConstructCompiledInstance body=210 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessVelocityScatterVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25650;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"bDrawMax",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"MotionBlurParameters",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b5d0 ConstructCompiledInstance body=231 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessVisualizeMotionBlurPS::ConstructCompiledInstance(longlong param_1)

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
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"PrevViewProjMatrix",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b6c0 FUN_141c7b6c0 body=69 status=ok
// SIG undefined FUN_141c7b6c0(void)

undefined8 * FUN_141c7b6c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x210);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afa950(puVar1);
    *puVar1 = &PTR_FUN_144e257e8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b710 FUN_141c7b710 body=170 status=ok
// SIG undefined FUN_141c7b710(void)

undefined8 * FUN_141c7b710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e261f0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xce);
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1da) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1e4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1ec) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b7c0 FUN_141c7b7c0 body=129 status=ok
// SIG undefined FUN_141c7b7c0(void)

undefined8 * FUN_141c7b7c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25bf0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b850 ConstructSerializedInstance body=122 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessSunMaskPS_ES2<1,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25898;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b8d0 FUN_141c7b8d0 body=92 status=ok
// SIG undefined FUN_141c7b8d0(void)

undefined8 * FUN_141c7b8d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25fd0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1cc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b930 FUN_141c7b930 body=84 status=ok
// SIG undefined FUN_141c7b930(void)

undefined8 * FUN_141c7b930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25620;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7b990 ConstructSerializedInstance body=123 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TPostProcessSubsurfacePS<1,1,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25d68;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1d4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7ba10 FUN_141c7ba10 body=106 status=ok
// SIG undefined FUN_141c7ba10(void)

undefined8 * FUN_141c7ba10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1d0b0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7ba80 ConstructSerializedInstance body=84 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessBloomUpPS_ES2::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25650;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bae0 FUN_141c7bae0 body=92 status=ok
// SIG undefined FUN_141c7bae0(void)

undefined8 * FUN_141c7bae0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e26040;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1cc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bb40 FUN_141c7bb40 body=118 status=ok
// SIG undefined FUN_141c7bb40(void)

undefined8 * FUN_141c7bb40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25750;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xda) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xe2) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bbc0 FUN_141c7bbc0 body=144 status=ok
// SIG undefined FUN_141c7bbc0(void)

undefined8 * FUN_141c7bbc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e264f0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1e4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1ec) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bc50 FUN_141c7bc50 body=91 status=ok
// SIG undefined FUN_141c7bc50(void)

undefined8 * FUN_141c7bc50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25720;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xce);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bcb0 FUN_141c7bcb0 body=129 status=ok
// SIG undefined FUN_141c7bcb0(void)

undefined8 * FUN_141c7bcb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e258e0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bd40 ConstructSerializedInstance body=92 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessSunMergeSmallPS_ES2::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e26070;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bda0 ConstructSerializedInstance body=119 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessTemporalAACS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(600);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e267d8;
    FTemporalAAParameters::FTemporalAAParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x224) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x22c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x234) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x23c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x244) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x254) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7be20 ConstructSerializedInstance body=69 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessTemporalAAPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e266e8;
    FTemporalAAParameters::FTemporalAAParameters(puVar1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7be70 FUN_141c7be70 body=130 status=ok
// SIG undefined FUN_141c7be70(void)

undefined8 * FUN_141c7be70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25b88;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7bf00 ConstructSerializedInstance body=36 status=ok
// SIG undefined ConstructSerializedInstance(void)

void TConeTraceScreenGridObjectOcclusionCS<1,1>::ConstructSerializedInstance(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x240);
  if (lVar1 != 0) {
    FUN_141c75220(lVar1);
    return;
  }
  return;
}



// FUNCTION 141c7bf30 FUN_141c7bf30 body=36 status=ok
// SIG undefined FUN_141c7bf30(void)

void FUN_141c7bf30(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x220);
  if (lVar1 != 0) {
    FPostProcessTonemapCS::FPostProcessTonemapCS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141c7bf60 ConstructSerializedInstance body=36 status=ok
// SIG undefined ConstructSerializedInstance(void)

void TConeTraceScreenGridObjectOcclusionCS<1,1>::ConstructSerializedInstance(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x230);
  if (lVar1 != 0) {
    FUN_141c756b0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141c7bf90 FUN_141c7bf90 body=106 status=ok
// SIG undefined FUN_141c7bf90(void)

undefined8 * FUN_141c7bf90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25a50;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1dc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7c000 FUN_141c7c000 body=123 status=ok
// SIG undefined FUN_141c7c000(void)

undefined8 * FUN_141c7c000(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25c20;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xcc);
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7c080 ConstructSerializedInstance body=115 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessVelocityGatherCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e25e80;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xc6);
    *(undefined4 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1c6) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c7c100 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_84 = 0xc0001;
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



// FUNCTION 141c7c1d0 FUN_141c7c1d0 body=948 status=ok
// SIG undefined FUN_141c7c1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c7c1d0(longlong *param_1,int *param_2,undefined8 param_3,int *param_4,undefined8 param_5
                  ,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_res18 [2];
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 *local_170;
  float local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined *local_130;
  int local_128;
  undefined8 local_120;
  undefined8 local_118;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar10 = (longlong *)0x0;
  local_138 = local_138 & 0xffffffff00000000;
  local_118 = param_5;
  local_120 = param_6;
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
  local_res18[0] = param_3;
  FUN_14049afe0(param_1[8],&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = param_8;
  lVar7 = param_1[0xc];
  local_130 = &DAT_146a60f20;
  local_128 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,&local_138,&local_130);
  plVar6 = plVar10;
  if ((int)local_138 != -1) {
    plVar6 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  plVar9 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar9 = plVar10;
  }
  local_130 = &DAT_146a57d50;
  lVar1 = *plVar9;
  local_128 = (-(uint)(*(char *)((longlong)param_2 + 6) != '\0') & 0x1c) +
              (-(uint)((char)param_2[1] != '\0') & 7) +
              (-(uint)(*(char *)((longlong)param_2 + 5) != '\0') & 0xe) + *param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,&local_138,&local_130);
  if ((int)local_138 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)local_138 * 0x20 + *(longlong *)(lVar7 + 0x38);
  }
  plVar6 = (longlong *)0x0;
  plVar9 = (longlong *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    plVar9 = plVar6;
  }
  lVar7 = *plVar9;
  local_108 = DAT_1464c2720;
  if (lVar1 == 0) {
    local_138 = 0;
    plVar10 = (longlong *)0x1;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar6 = *(longlong **)(lVar2 + 0x38);
  }
  plStack_100 = plVar6;
  if (plVar10 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  bVar4 = false;
  if (lVar7 == 0) {
    bVar4 = true;
    local_138 = 0;
    local_e8 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    local_e8 = *(undefined8 *)(lVar2 + 0x40);
  }
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1[8],&local_108,2,1);
  FUN_141c93910(lVar1,param_1);
  lVar2 = *(longlong *)(lVar7 + 0x48);
  lVar3 = param_1[8];
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_138 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(lVar7,lVar3,local_138,*(undefined8 *)(*param_1 + 0x20));
  local_188 = FUN_1404a0e20();
  local_178 = 0;
  local_180 = (ulonglong)local_180._4_4_ << 0x20;
  thunk_FUN_141ca99a0(lVar7 + 0xc0,lVar3,&local_138,param_1);
  local_170 = local_res18;
  local_178 = CONCAT71(local_178._1_7_,param_7);
  local_180 = local_120;
  local_188 = local_118;
  FUN_141c68db0(lVar7 + 0xc0,lVar3,local_138,param_1);
  iVar5 = param_4[3] - param_4[1];
  local_140 = 1;
  iVar8 = param_4[2] - *param_4;
  local_148 = 1;
  local_168 = (float)iVar5;
  local_138 = CONCAT44(iVar5,iVar8);
  local_160 = local_138;
  local_170 = (undefined8 *)CONCAT44(local_170._4_4_,(float)iVar8);
  local_178 = CONCAT44(local_178._4_4_,(float)param_4[1]);
  local_180 = CONCAT44(local_180._4_4_,(float)*param_4);
  local_188 = CONCAT44(local_188._4_4_,local_168);
  local_158 = param_3;
  local_150 = lVar1;
  DrawRectangle(param_1[8]);
  return;
}



// FUNCTION 141c7c590 FUN_141c7c590 body=2357 status=ok
// SIG undefined FUN_141c7c590(void)

void FUN_141c7c590(float *param_1,longlong param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6)

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
  float local_res10;
  float local_res20;
  float local_114;
  
  fVar11 = *(float *)(param_2 + 0x1a0);
  fVar12 = *(float *)(param_2 + 0x1a4);
  fVar13 = *(float *)(param_2 + 0x1a8);
  fVar25 = *(float *)(param_2 + 0x1c8);
  if (0.0 <= fVar25) {
    if (2.0 <= fVar25) {
      fVar25 = 2.0;
    }
  }
  else {
    fVar25 = 0.0;
  }
  fVar26 = *(float *)(param_2 + 0x1fc);
  fVar3 = *(float *)(param_2 + 0x1cc);
  fVar4 = *(float *)(param_2 + 0x1e0);
  fVar5 = *(float *)(param_2 + 500);
  if (0.0 <= fVar26) {
    if (1.0 <= fVar26) {
      fVar26 = 1.0;
    }
  }
  else {
    fVar26 = 0.0;
  }
  fVar7 = *(float *)(param_2 + 0x208);
  fVar26 = fVar26 + 1.0;
  if (1.0 <= fVar7) {
    if (4.0 <= fVar7) {
      fVar7 = 4.0;
    }
  }
  else {
    fVar7 = 1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(2.0,fVar7);
  fVar7 = *(float *)(param_2 + 0x200);
  if (0.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  fVar2 = 0.0225;
  fVar7 = (1.0 - fVar7) * 0.18;
  if ((fVar7 < 0.0225) || (fVar2 = 0.16875, 0.16875 <= fVar7)) {
    fVar7 = fVar2;
  }
  fVar2 = *(float *)(param_2 + 0x204);
  if (0.0 <= fVar2) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar2 = 1.0 - fVar2;
  if (fVar2 <= 0.03125) {
    fVar2 = 0.03125;
  }
  local_res20 = *(float *)(param_2 + 0x1c0);
  if (0.0 <= local_res20) {
    if (1.0 <= local_res20) {
      local_res20 = 1.0;
    }
  }
  else {
    local_res20 = 0.0;
  }
  fVar27 = *(float *)(param_2 + 0x1c4);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = *(float *)(param_2 + 0x1a4) + 4.7683716e-07;
  fVar18 = *(float *)(param_2 + 0x1a8) + 4.7683716e-07;
  fVar8 = 1.0 / (fVar3 + *(float *)(param_2 + 0x1d0) + 4.7683716e-07 + *(float *)(param_2 + 0x1d4));
  fVar21 = (fVar3 + 4.7683716e-07) * fVar8;
  fVar3 = fVar8 * *(float *)(param_2 + 0x1d0);
  fVar8 = fVar8 * *(float *)(param_2 + 0x1d4);
  fVar9 = 1.0 / (*(float *)(param_2 + 0x1dc) + fVar4 + 4.7683716e-07 + *(float *)(param_2 + 0x1e4));
  fVar22 = (fVar4 + 4.7683716e-07) * fVar9;
  fVar4 = fVar9 * *(float *)(param_2 + 0x1dc);
  fVar9 = fVar9 * *(float *)(param_2 + 0x1e4);
  fVar10 = 1.0 / (*(float *)(param_2 + 0x1f0) + *(float *)(param_2 + 0x1ec) + fVar5 + 4.7683716e-07)
  ;
  fVar23 = (fVar5 + 4.7683716e-07) * fVar10;
  fVar5 = fVar10 * *(float *)(param_2 + 0x1ec);
  fVar10 = fVar10 * *(float *)(param_2 + 0x1f0);
  fVar14 = *(float *)(param_2 + 0x1a0) + 4.7683716e-07;
  fVar6 = 1.0 / (fVar15 * 0.7152 + fVar14 * 0.2126 + fVar18 * 0.0722);
  fVar14 = fVar6 * fVar14;
  fVar15 = fVar6 * fVar15;
  fVar6 = fVar6 * fVar18;
  fVar18 = (*(float *)(param_2 + 0x1b0) - fVar11) * fVar27 + fVar11 + 4.7683716e-07;
  local_114 = 0.0;
  local_res10 = 0.0;
  fVar28 = 0.0;
  fVar16 = (*(float *)(param_2 + 0x1b4) - fVar12) * fVar27 + fVar12 + 4.7683716e-07;
  fVar19 = (*(float *)(param_2 + 0x1b8) - fVar13) * fVar27 + fVar13 + 4.7683716e-07;
  fVar24 = 0.0;
  fVar27 = 1.0 / (fVar16 * 0.7152 + fVar18 * 0.2126 + fVar19 * 0.0722);
  fVar20 = 0.0;
  fVar17 = 0.0;
  fVar12 = (fVar3 + fVar22 + fVar10) * 0.33333334;
  fVar11 = (fVar21 + fVar4 + fVar5) * 0.33333334;
  fVar13 = (fVar9 + fVar8 + fVar23) * 0.33333334;
  if (param_4 == '\0') {
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    if (param_5 == '\0') {
      fVar11 = fVar14;
      fVar12 = fVar15;
      fVar13 = fVar6;
    }
  }
  else {
    fVar17 = (fVar21 - fVar11) * fVar25 + fVar11;
    fVar20 = (fVar4 - fVar11) * fVar25 + fVar11;
    fVar24 = (fVar3 - fVar12) * fVar25 + fVar12;
    fVar28 = (fVar8 - fVar13) * fVar25 + fVar13;
    local_res10 = (fVar22 - fVar12) * fVar25 + fVar12;
    fVar12 = (fVar10 - fVar12) * fVar25 + fVar12;
    local_114 = (fVar9 - fVar13) * fVar25 + fVar13;
    fVar13 = (fVar23 - fVar13) * fVar25 + fVar13;
    fVar11 = (fVar5 - fVar11) * fVar25 + fVar11;
    if (param_5 == '\0') {
      fVar17 = fVar17 * fVar14;
      fVar24 = fVar24 * fVar14;
      fVar28 = fVar28 * fVar14;
      local_res10 = local_res10 * fVar15;
      local_114 = local_114 * fVar15;
      fVar20 = fVar20 * fVar15;
      fVar11 = fVar11 * fVar6;
      fVar12 = fVar12 * fVar6;
      fVar13 = fVar13 * fVar6;
    }
  }
  fVar3 = 0.18 - fVar26 * 0.18;
  fVar25 = (1.0 / fVar26) * fVar3;
  fVar4 = (1.0 - fVar3) * (1.0 / fVar26) + fVar25;
  fVar5 = fVar4 * fVar7 - fVar25;
  fVar25 = fVar4 * (1.0 - fVar2 * 0.82) - fVar25;
  fVar7 = fVar5 * fVar26 + fVar3;
  fVar3 = fVar25 * fVar26 + fVar3;
  fVar10 = 1.0 - fVar3;
  fVar2 = (fVar3 - fVar7) / (fVar25 - fVar5);
  fVar26 = (fVar1 - fVar25) * fVar2;
  fVar26 = (fVar26 - fVar10) / fVar26;
  fVar1 = fVar10 / fVar26;
  fVar3 = fVar5 * fVar2;
  fVar26 = fVar26 * fVar2;
  fVar4 = (fVar3 - fVar7) / fVar3;
  if (param_6 == '\0') {
    fVar2 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar3 = fVar7 - fVar3;
    if (fVar4 != 0.0) {
      fVar8 = -(fVar7 / fVar4);
      fVar7 = fVar7 / (fVar4 * fVar2);
      goto LAB_141c7cceb;
    }
    fVar7 = 1.0;
  }
  fVar8 = 0.0;
  fVar3 = 0.0;
  fVar5 = 0.0;
LAB_141c7cceb:
  *param_1 = fVar17;
  param_1[1] = fVar24;
  param_1[2] = fVar28;
  param_1[3] = fVar8;
  param_1[4] = fVar20;
  param_1[5] = local_res10;
  param_1[6] = local_114;
  param_1[7] = fVar3;
  param_1[0x10] = fVar1;
  param_1[0x11] = -(fVar1 * fVar25);
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[8] = fVar11;
  param_1[9] = fVar12;
  param_1[10] = fVar13;
  param_1[0xb] = fVar2;
  param_1[0xc] = fVar5;
  param_1[0xd] = fVar7;
  param_1[0xe] = fVar25;
  param_1[0xf] = fVar10 / fVar26 - fVar25;
  param_1[0x14] = local_res20 * 13.6064;
  param_1[0x15] = local_res20 * 45.7728;
  param_1[0x16] = local_res20 * 4.6208;
  param_1[0x17] = 0.0;
  param_1[0x18] = fVar14;
  param_1[0x19] = fVar15;
  param_1[0x1a] = fVar6;
  param_1[0x1b] = 0.0;
  param_1[0x1c] = fVar27 * fVar18 - fVar14;
  param_1[0x1d] = fVar27 * fVar16 - fVar15;
  param_1[0x1e] = fVar27 * fVar19 - fVar6;
  param_1[0x1f] = 0.0;
  return;
}



// FUNCTION 141c7ced0 FUN_141c7ced0 body=222 status=ok
// SIG undefined FUN_141c7ced0(void)

longlong FUN_141c7ced0(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)param_1 = uVar1 == 1;
  uVar1 = (int)param_2 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = ((int)param_2 / 2) / 2;
  *(bool *)(param_1 + 1) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)(param_1 + 2) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)(param_1 + 3) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)(param_1 + 4) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 5) = uVar1 == 1;
  uVar1 = (int)uVar2 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 6) = uVar1 == 1;
  return param_1;
}



// FUNCTION 141c7d000 FUN_141c7d000 body=49 status=ok
// SIG undefined FUN_141c7d000(void)

void FUN_141c7d000(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2 + -7);
  }
  return;
}



// FUNCTION 141c7d060 FUN_141c7d060 body=22 status=ok
// SIG undefined FUN_141c7d060(void)

undefined4 FUN_141c7d060(longlong param_1)

{
  if (*(char *)(param_1 + 0x1714) == '\x01') {
    return *(undefined4 *)(param_1 + 0x1738);
  }
  return 0;
}



// FUNCTION 141c7d0f0 FUN_141c7d0f0 body=320 status=ok
// SIG undefined FUN_141c7d0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c7d0f0(void)

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
  
  if (DAT_146a61228 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141c7d870;
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
        return *(undefined8 *)(DAT_146a61228 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a61228 = 0;
        return _DAT_00000030;
      }
      DAT_146a61228 =
           TStaticStateRHI<TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a61228 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a61228 != 0) {
      lVar7 = DAT_146a61228;
    }
    DAT_146a61228 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a61228 + 0x30);
}



// FUNCTION 141c7d230 FUN_141c7d230 body=320 status=ok
// SIG undefined FUN_141c7d230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c7d230(void)

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
  
  if (DAT_146a61220 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141c7d880;
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
        return *(undefined8 *)(DAT_146a61220 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a61220 = 0;
        return _DAT_00000030;
      }
      DAT_146a61220 =
           TStaticStateRHI<TStaticDepthStencilState<1,2,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a61220 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,2,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a61220 != 0) {
      lVar7 = DAT_146a61220;
    }
    DAT_146a61220 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a61220 + 0x30);
}



// FUNCTION 141c7d370 FUN_141c7d370 body=320 status=ok
// SIG undefined FUN_141c7d370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c7d370(void)

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
  
  if (DAT_146a61230 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141c7d890;
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
        return *(undefined8 *)(DAT_146a61230 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a61230 = 0;
        return _DAT_00000030;
      }
      DAT_146a61230 =
           TStaticStateRHI<TStaticDepthStencilState<1,0,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a61230 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,0,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a61230 != 0) {
      lVar7 = DAT_146a61230;
    }
    DAT_146a61230 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a61230 + 0x30);
}



// FUNCTION 141c7d4b0 FUN_141c7d4b0 body=320 status=ok
// SIG undefined FUN_141c7d4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c7d4b0(void)

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
  
  if (DAT_146a61218 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141c7d8a0;
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
        return *(undefined8 *)(DAT_146a61218 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a61218 = 0;
        return _DAT_00000030;
      }
      DAT_146a61218 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a61218 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a61218 != 0) {
      lVar7 = DAT_146a61218;
    }
    DAT_146a61218 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a61218 + 0x30);
}



// FUNCTION 141c7d5f0 FUN_141c7d5f0 body=320 status=ok
// SIG undefined FUN_141c7d5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c7d5f0(void)

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
  
  if (DAT_146a61210 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141c7d8b0;
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
        return *(undefined8 *)(DAT_146a61210 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a61210 = 0;
        return _DAT_00000030;
      }
      DAT_146a61210 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a61210 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a61210 != 0) {
      lVar7 = DAT_146a61210;
    }
    DAT_146a61210 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a61210 + 0x30);
}



// FUNCTION 141c7d730 FUN_141c7d730 body=320 status=ok
// SIG undefined FUN_141c7d730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141c7d730(void)

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
  
  if (DAT_146a612e8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141c7d8c0;
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
        return *(undefined8 *)(DAT_146a612e8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a612e8 = 0;
        return _DAT_00000030;
      }
      DAT_146a612e8 =
           TStaticStateRHI<TStaticSamplerState<0,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a612e8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<0,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a612e8 != 0) {
      lVar7 = DAT_146a612e8;
    }
    DAT_146a612e8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a612e8 + 0x30);
}



// FUNCTION 141c7d8d0 FUN_141c7d8d0 body=357 status=ok
// SIG undefined FUN_141c7d8d0(void)

float * FUN_141c7d8d0(float *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = FSceneRenderTargets::Get(param_2[8]);
  lVar1 = *param_2;
  iVar6 = (int)param_2[1];
  iVar7 = (int)*(undefined8 *)(lVar1 + 0x1aa0);
  iVar3 = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x1aa0) >> 0x20);
  iVar4 = (int)((ulonglong)param_2[1] >> 0x20);
  iVar8 = (int)*(undefined8 *)(lVar2 + 0x378);
  fVar10 = (float)(int)((ulonglong)*(undefined8 *)(lVar2 + 0x378) >> 0x20);
  iVar5 = (int)param_2[3];
  fVar9 = (float)(int)((ulonglong)param_2[3] >> 0x20);
  fVar12 = (((float)(*(int *)(lVar1 + 0x1aa8) - iVar7) / (float)iVar8) * (float)iVar5) /
           (float)((int)param_2[2] - iVar6);
  fVar11 = (((float)(*(int *)(lVar1 + 0x1aac) - iVar3) / fVar10) * fVar9) /
           (float)(*(int *)((longlong)param_2 + 0x14) - iVar4);
  *param_1 = fVar12;
  param_1[1] = fVar11;
  param_1[2] = (float)iVar7 / (float)iVar8 - ((float)iVar6 / (float)iVar5) * fVar12;
  param_1[3] = (float)iVar3 / fVar10 - ((float)iVar4 / fVar9) * fVar11;
  return param_1;
}



// FUNCTION 141c7da40 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<12,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141c7da70 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,2,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000201;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141c7dad0 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,0,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7000001;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141c7db30 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_10 = 7;
  local_c = 0x808;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141c7db90 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,8,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x5010700;
  local_10 = 7;
  local_c = 0x808;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141c7dbf0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<0,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x3030300;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141c7dc60 Inverse4x4 body=2684 status=ok
// SIG undefined Inverse4x4(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Inverse4x4(double *param_1,float *param_2)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 (*pauVar27) [16];
  double *pdVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 local_1f8 [128];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158 [11];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)local_1f8;
  dVar33 = (double)*param_2;
  dVar10 = (double)param_2[4];
  dVar5 = (double)param_2[1];
  dVar6 = (double)param_2[8];
  dVar11 = (double)param_2[0xc];
  dVar34 = (double)param_2[9];
  dVar32 = (double)param_2[0xd];
  dVar26 = (double)param_2[10];
  dVar21 = (double)param_2[0xb];
  dVar13 = (double)param_2[5];
  dVar25 = (double)param_2[0xe];
  dVar19 = (double)param_2[0xf];
  dVar35 = (double)param_2[6];
  dVar14 = (double)param_2[3];
  dVar16 = (double)param_2[2];
  dVar23 = (double)param_2[7];
  local_158[3] = (((dVar26 * dVar13 * dVar19 - dVar21 * dVar13 * dVar25) - dVar34 * dVar35 * dVar19)
                  + dVar34 * dVar23 * dVar25 + dVar32 * dVar35 * dVar21) - dVar32 * dVar23 * dVar26;
  local_158[4] = local_158[3];
  local_158[5] = ((((dVar21 * dVar5 * dVar25 - dVar26 * dVar5 * dVar19) + dVar34 * dVar16 * dVar19)
                  - dVar34 * dVar14 * dVar25) - dVar32 * dVar16 * dVar21) + dVar32 * dVar14 * dVar26
  ;
  local_170 = dVar6 * dVar35;
  local_178 = dVar26 * dVar10;
  local_158[6] = (((dVar35 * dVar5 * dVar19 - dVar23 * dVar5 * dVar25) - dVar13 * dVar16 * dVar19) +
                  dVar13 * dVar14 * dVar25 + dVar32 * dVar16 * dVar23) - dVar32 * dVar14 * dVar35;
  local_158[7] = ((((dVar23 * dVar5 * dVar26 - dVar35 * dVar5 * dVar21) + dVar13 * dVar16 * dVar21)
                  - dVar13 * dVar14 * dVar26) - dVar34 * dVar16 * dVar23) + dVar34 * dVar14 * dVar35
  ;
  local_168 = dVar11 * dVar35;
  dVar24 = dVar6 * dVar14;
  local_160 = dVar6 * dVar16;
  local_158[0] = dVar11 * dVar16;
  local_158[8] = ((((dVar21 * dVar10 * dVar25 - local_178 * dVar19) + local_170 * dVar19) -
                  dVar6 * dVar23 * dVar25) - local_168 * dVar21) + dVar11 * dVar23 * dVar26;
  dVar20 = dVar23 * dVar33;
  dVar22 = dVar11 * dVar14;
  local_158[1] = dVar35 * dVar33;
  local_158[2] = dVar10 * dVar16;
  dVar18 = dVar10 * dVar14;
  local_158[9] = (((dVar26 * dVar33 * dVar19 - dVar21 * dVar33 * dVar25) - local_160 * dVar19) +
                  dVar24 * dVar25 + local_158[0] * dVar21) - dVar22 * dVar26;
  local_158[10] =
       ((((dVar20 * dVar25 - local_158[1] * dVar19) + local_158[2] * dVar19) - dVar18 * dVar25) -
       local_158[0] * dVar23) + dVar22 * dVar35;
  local_100 = (((local_158[1] * dVar21 - dVar20 * dVar26) - local_158[2] * dVar21) + dVar18 * dVar26
              + local_160 * dVar23) - dVar24 * dVar35;
  dVar15 = dVar13 * dVar33;
  dVar7 = dVar6 * dVar5;
  local_f8 = (((dVar34 * dVar10 * dVar19 - dVar21 * dVar10 * dVar32) - dVar6 * dVar13 * dVar19) +
              dVar6 * dVar23 * dVar32 + dVar11 * dVar13 * dVar21) - dVar11 * dVar23 * dVar34;
  dVar17 = dVar11 * dVar5;
  dVar12 = dVar10 * dVar5;
  local_f0 = ((((dVar21 * dVar33 * dVar32 - dVar34 * dVar33 * dVar19) + dVar7 * dVar19) -
              dVar24 * dVar32) - dVar17 * dVar21) + dVar22 * dVar34;
  local_e8 = (((dVar15 * dVar19 - dVar20 * dVar32) - dVar12 * dVar19) + dVar18 * dVar32 +
             dVar17 * dVar23) - dVar22 * dVar13;
  local_e0 = ((((dVar20 * dVar34 - dVar15 * dVar21) + dVar12 * dVar21) - dVar18 * dVar34) -
             dVar7 * dVar23) + dVar24 * dVar13;
  local_d8 = ((((local_178 * dVar32 - dVar34 * dVar10 * dVar25) + dVar6 * dVar13 * dVar25) -
              local_170 * dVar32) - dVar11 * dVar13 * dVar26) + local_168 * dVar34;
  local_d0 = (((dVar34 * dVar33 * dVar25 - dVar26 * dVar33 * dVar32) - dVar7 * dVar25) +
              local_160 * dVar32 + dVar17 * dVar26) - local_158[0] * dVar34;
  local_c8 = ((((local_158[1] * dVar32 - dVar15 * dVar25) + dVar12 * dVar25) - local_158[2] * dVar32
              ) - dVar17 * dVar35) + local_158[0] * dVar13;
  local_c0 = (((dVar15 * dVar26 - local_158[1] * dVar34) - dVar12 * dVar26) + local_158[2] * dVar34
             + dVar7 * dVar35) - local_160 * dVar13;
  dVar33 = local_158[8] * dVar5 + local_158[3] * dVar33 + local_f8 * dVar16 + local_d8 * dVar14;
  if (dVar33 != 0.0) {
    dVar33 = 1.0 / dVar33;
  }
  if ((&local_c0 < param_1) || (uVar30 = 0, param_1 + 0xf < local_158 + 4)) {
    lVar31 = 2;
    pauVar27 = (undefined1 (*) [16])(param_1 + 4);
    do {
      pdVar28 = (double *)((longlong)local_158 + -(longlong)param_1 + (longlong)pauVar27);
      pdVar2 = (double *)((longlong)local_158 + -(longlong)param_1 + 0x10 + (longlong)pauVar27);
      dVar7 = *pdVar2;
      pauVar1 = pauVar27 + 4;
      dVar5 = pdVar28[1] * dVar33;
      dVar6 = pdVar2[1] * dVar33;
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = *pdVar28 * dVar33;
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      pauVar27[-2] = auVar3;
      pdVar28 = (double *)((longlong)&local_178 + -(longlong)param_1 + (longlong)pauVar1);
      dVar10 = *pdVar28;
      dVar5 = pdVar28[1];
      auVar8._8_4_ = SUB84(dVar6,0);
      auVar8._0_8_ = dVar7 * dVar33;
      auVar8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      pauVar27[-1] = auVar8;
      pdVar28 = (double *)((longlong)&local_168 + -(longlong)param_1 + (longlong)pauVar1);
      dVar7 = *pdVar28;
      dVar5 = dVar5 * dVar33;
      dVar6 = pdVar28[1] * dVar33;
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = dVar10 * dVar33;
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *pauVar27 = auVar4;
      auVar9._8_4_ = SUB84(dVar6,0);
      auVar9._0_8_ = dVar7 * dVar33;
      auVar9._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      pauVar27[1] = auVar9;
      lVar31 = lVar31 + -1;
      pauVar27 = pauVar1;
    } while (lVar31 != 0);
    uVar30 = 0x10;
  }
  if (uVar30 < 0x10) {
    if (3 < (longlong)(0x10 - uVar30)) {
      lVar31 = uVar30 + 2;
      lVar29 = (0xc - uVar30 >> 2) + 1;
      uVar30 = uVar30 + lVar29 * 4;
      pdVar28 = param_1 + lVar31;
      do {
        pdVar2 = pdVar28 + 4;
        dVar5 = *(double *)((longlong)&local_160 + -(longlong)param_1 + (longlong)pdVar2);
        pdVar28[-2] = dVar33 * *(double *)
                                ((longlong)&local_168 + -(longlong)param_1 + (longlong)pdVar2);
        dVar6 = *(double *)((longlong)pdVar28 + (longlong)local_158 + -(longlong)param_1 + 0x20);
        pdVar28[-1] = dVar33 * dVar5;
        dVar5 = *(double *)((longlong)local_158 + -(longlong)param_1 + 8 + (longlong)pdVar2);
        *pdVar28 = dVar33 * dVar6;
        pdVar28[1] = dVar33 * dVar5;
        lVar29 = lVar29 + -1;
        pdVar28 = pdVar2;
      } while (lVar29 != 0);
    }
    if ((longlong)uVar30 < 0x10) {
      lVar31 = 0x10 - uVar30;
      pdVar28 = param_1 + uVar30;
      do {
        *pdVar28 = dVar33 * *(double *)
                             ((longlong)pdVar28 + (longlong)local_158 + (0x20 - (longlong)param_1));
        lVar31 = lVar31 + -1;
        pdVar28 = pdVar28 + 1;
      } while (lVar31 != 0);
    }
  }
  return;
}



// FUNCTION 141c7e6e0 InvertProjectionMatrix body=379 status=ok
// SIG undefined InvertProjectionMatrix(void)

float * FViewMatrices::InvertProjectionMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((((((param_2[4] == 0.0) && (param_2[0xc] == 0.0)) && (param_2[1] == 0.0)) &&
       ((param_2[0xd] == 0.0 && (param_2[2] == 0.0)))) &&
      ((param_2[6] == 0.0 && ((param_2[3] == 0.0 && (param_2[7] == 0.0)))))) &&
     ((param_2[0xb] == 1.0 && (param_2[0xf] == 0.0)))) {
    fVar1 = *param_2;
    fVar2 = param_2[8];
    fVar3 = param_2[5];
    fVar4 = param_2[9];
    fVar5 = param_2[0xe];
    fVar6 = param_2[10];
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    param_1[0xe] = 1.0;
    param_1[0xc] = -(fVar2 * (1.0 / fVar1));
    param_1[0xb] = 1.0 / fVar5;
    param_1[0xf] = -(fVar6 * (1.0 / fVar5));
    *param_1 = 1.0 / fVar1;
    param_1[5] = 1.0 / fVar3;
    param_1[0xd] = -(fVar4 * (1.0 / fVar3));
    return param_1;
  }
  FMatrix::Inverse(param_2,param_1);
  return param_1;
}



// FUNCTION 141c7e860 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessBloomSetupPS_ES2<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"NO_EYEADAPTATION_EXPOSURE_FIX",1);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7e8d0 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessBloomSetupPS_ES2<2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"NO_EYEADAPTATION_EXPOSURE_FIX",1);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7e940 ModifyCompilationEnvironment body=102 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessBloomSetupPS_ES2<3>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"NO_EYEADAPTATION_EXPOSURE_FIX",1);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",1);
  return;
}



// FUNCTION 141c7e9b0 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessBloomSetupPS_ES2<4>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"NO_EYEADAPTATION_EXPOSURE_FIX",1);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7ea20 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FPostProcessBloomSetupPS_ES2<0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"NO_EYEADAPTATION_EXPOSURE_FIX",1);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_MSAA",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_SUN",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ES2_USE_DOF",0);
  return;
}



// FUNCTION 141c7eac0 FUN_141c7eac0 body=172 status=ok
// SIG undefined FUN_141c7eac0(void)

void FUN_141c7eac0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POST_PROCESS_MATERIAL_UV_POLICY",0);
  iVar1 = (**(code **)(*param_2 + 0x2f8))(param_2);
  uVar2 = 0;
  if ((iVar1 == 0) || (iVar1 == 3)) {
    uVar2 = 1;
  }
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL_AFTER_TAA_UPSAMPLE",uVar2);
  FUN_141a172f0(param_3,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL_BEFORE_TONEMAP",iVar1 != 0);
  return;
}



// FUNCTION 141c7eb70 FUN_141c7eb70 body=122 status=ok
// SIG undefined FUN_141c7eb70(void)

void FUN_141c7eb70(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POST_PROCESS_MATERIAL_UV_POLICY",1);
  iVar1 = (**(code **)(*param_2 + 0x2f8))(param_2);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    uVar2 = 0;
  }
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL_AFTER_TAA_UPSAMPLE",uVar2);
  return;
}



// FUNCTION 141c7ebf0 FUN_141c7ebf0 body=122 status=ok
// SIG undefined FUN_141c7ebf0(void)

void FUN_141c7ebf0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POST_PROCESS_MATERIAL_UV_POLICY",0);
  iVar1 = (**(code **)(*param_2 + 0x2f8))(param_2);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    uVar2 = 0;
  }
  FUN_141a172f0(param_3,L"POST_PROCESS_MATERIAL_AFTER_TAA_UPSAMPLE",uVar2);
  return;
}


