// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141bf41d0 FUN_141bf41d0 body=5475 status=ok
// SIG undefined FUN_141bf41d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf41d0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *puVar11 = &PTR_LAB_144dc9ca0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_144dc9cb0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    FUN_141c0b130(param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 3);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141aac7b0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff18) &&
     (_Init_thread_header(&DAT_146a4ff18), DAT_146a4ff18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4ff10 = lVar8;
    _Init_thread_footer(&DAT_146a4ff18);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff28) &&
     (_Init_thread_header(&DAT_146a4ff28), DAT_146a4ff28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ff20 = lVar8;
    _Init_thread_footer(&DAT_146a4ff28);
  }
  fVar26 = *(float *)(DAT_146a4ff10 + 4);
  fVar23 = *(float *)(DAT_146a4ff20 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff38) &&
     (_Init_thread_header(&DAT_146a4ff38), DAT_146a4ff38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4ff30 = lVar8;
    _Init_thread_footer(&DAT_146a4ff38);
  }
  local_210 = *(float *)(DAT_146a4ff30 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff48) &&
     (_Init_thread_header(&DAT_146a4ff48), DAT_146a4ff48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4ff40 = lVar8;
    _Init_thread_footer(&DAT_146a4ff48);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff58) &&
     (_Init_thread_header(&DAT_146a4ff58), DAT_146a4ff58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ff50 = lVar8;
    _Init_thread_footer(&DAT_146a4ff58);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff68) &&
     (_Init_thread_header(&DAT_146a4ff68), DAT_146a4ff68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ff60 = lVar10;
    _Init_thread_footer(&DAT_146a4ff68);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a4ff40 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a4ff50 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a4ff60 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  FUN_141c0b130(param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bf5740 FUN_141bf5740 body=5475 status=ok
// SIG undefined FUN_141bf5740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf5740(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *puVar11 = &PTR_LAB_144dc9ca0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_144dc9cb0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    FUN_141c0b130(param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 4);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141aac7b0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff78) &&
     (_Init_thread_header(&DAT_146a4ff78), DAT_146a4ff78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4ff70 = lVar8;
    _Init_thread_footer(&DAT_146a4ff78);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff88) &&
     (_Init_thread_header(&DAT_146a4ff88), DAT_146a4ff88 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ff80 = lVar8;
    _Init_thread_footer(&DAT_146a4ff88);
  }
  fVar26 = *(float *)(DAT_146a4ff70 + 4);
  fVar23 = *(float *)(DAT_146a4ff80 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff98) &&
     (_Init_thread_header(&DAT_146a4ff98), DAT_146a4ff98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4ff90 = lVar8;
    _Init_thread_footer(&DAT_146a4ff98);
  }
  local_210 = *(float *)(DAT_146a4ff90 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ffa8) &&
     (_Init_thread_header(&DAT_146a4ffa8), DAT_146a4ffa8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4ffa0 = lVar8;
    _Init_thread_footer(&DAT_146a4ffa8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ffb8) &&
     (_Init_thread_header(&DAT_146a4ffb8), DAT_146a4ffb8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ffb0 = lVar8;
    _Init_thread_footer(&DAT_146a4ffb8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ffc8) &&
     (_Init_thread_header(&DAT_146a4ffc8), DAT_146a4ffc8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ffc0 = lVar10;
    _Init_thread_footer(&DAT_146a4ffc8);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a4ffa0 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a4ffb0 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a4ffc0 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  FUN_141c0b130(param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bf6cb0 FUN_141bf6cb0 body=5475 status=ok
// SIG undefined FUN_141bf6cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf6cb0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *puVar11 = &PTR_LAB_144dc9ca0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_144dc9cb0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    FUN_141c0b130(param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 5);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141aac7b0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ffd8) &&
     (_Init_thread_header(&DAT_146a4ffd8), DAT_146a4ffd8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4ffd0 = lVar8;
    _Init_thread_footer(&DAT_146a4ffd8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ffe8) &&
     (_Init_thread_header(&DAT_146a4ffe8), DAT_146a4ffe8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ffe0 = lVar8;
    _Init_thread_footer(&DAT_146a4ffe8);
  }
  fVar26 = *(float *)(DAT_146a4ffd0 + 4);
  fVar23 = *(float *)(DAT_146a4ffe0 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4fff8) &&
     (_Init_thread_header(&DAT_146a4fff8), DAT_146a4fff8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4fff0 = lVar8;
    _Init_thread_footer(&DAT_146a4fff8);
  }
  local_210 = *(float *)(DAT_146a4fff0 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50008) &&
     (_Init_thread_header(&DAT_146a50008), DAT_146a50008 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50000 = lVar8;
    _Init_thread_footer(&DAT_146a50008);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50018) &&
     (_Init_thread_header(&DAT_146a50018), DAT_146a50018 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50010 = lVar8;
    _Init_thread_footer(&DAT_146a50018);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50028) &&
     (_Init_thread_header(&DAT_146a50028), DAT_146a50028 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50020 = lVar10;
    _Init_thread_footer(&DAT_146a50028);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a50000 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a50010 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a50020 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  FUN_141c0b130(param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bf8220 Set body=187 status=ok
// SIG undefined Set(void)

void FColorRemapShaderParameters::Set(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  local_10 = *(float *)(DAT_146a4bfc8 + 4);
  if (-10.0 <= local_10) {
    if (10.0 <= local_10) {
      local_10 = 10.0;
    }
  }
  else {
    local_10 = -10.0;
  }
  fVar3 = *(float *)(DAT_146a4bfe0 + 4);
  if (-10.0 <= fVar3) {
    if (10.0 <= fVar3) {
      fVar3 = 10.0;
    }
  }
  else {
    fVar3 = -10.0;
  }
  fVar1 = *(float *)(DAT_146a4bff8 + 4);
  fVar2 = -10.0;
  if ((-10.0 <= fVar1) && (fVar2 = fVar1, 10.0 <= fVar1)) {
    fVar2 = 10.0;
  }
  local_14 = (fVar3 * 4.0 - local_10 * 3.0) - fVar2;
  local_18 = (fVar2 - local_10) - local_14;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>(param_2,param_3,param_1,&local_18,0);
  return;
}



// FUNCTION 141bf82e0 FUN_141bf82e0 body=4789 status=ok
// SIG undefined FUN_141bf82e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf82e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
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
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  float local_1e8 [4];
  float local_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar6 = 0;
  lVar4 = *(longlong *)(param_4 + 0x10);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x28,param_6);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x2e,param_4 + 0xf50);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x34,param_4 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,param_4 + 0x125c);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,param_4 + 0x1260);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x52,param_4 + 0x1270);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x58,param_4 + 0x1280);
  local_1f8 = 0;
  fStack_1d4 = DAT_146a496b0 + *(float *)(param_4 + 0x1294);
  local_1d8 = DAT_146a496b0 + *(float *)(param_4 + 0x1290);
  uStack_1d0 = CONCAT44(*(undefined4 *)(param_4 + 0x129c),
                        DAT_146a496b0 + *(float *)(param_4 + 0x1298));
  FUN_141a120e0(param_2,param_3,param_1 + 0x5e,&local_1d8);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 100,param_4 + 0x12a0);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x6a,param_4 + 0x12b0);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x70,param_4 + 0x12c0);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x76,param_4 + 0x12d0);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x7c,param_4 + 0x12e0);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x82,param_4 + 0x12f0);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x88,param_4 + 0x1300);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x8e,param_4 + 0x1320);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x94,param_4 + 0x1330);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x9a,param_4 + 0x1340);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa0,param_4 + 0x1350);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa6,param_4 + 0x1360);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xac,param_4 + 0x1370);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb2,param_4 + 0x1380);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb8,param_4 + 0x1390);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xbe,param_4 + 0x13a0);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xc4,param_4 + 0x13b0);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,param_4 + 0x1310);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,param_4 + 0x13c0);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,param_4 + 0x13c4);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,param_4 + 0x13c8);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,param_4 + 0x13cc);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,param_4 + 0x13d0);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,param_4 + 0x13d4);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,param_4 + 0x13d8);
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,param_4 + 0x13dc);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50038) &&
     (_Init_thread_header(&DAT_146a50038), DAT_146a50038 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a50030 = lVar3;
    _Init_thread_footer(&DAT_146a50038);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50048) &&
     (_Init_thread_header(&DAT_146a50048), DAT_146a50048 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a50040 = lVar3;
    _Init_thread_footer(&DAT_146a50048);
  }
  fVar20 = *(float *)(DAT_146a50030 + 4);
  fVar17 = *(float *)(DAT_146a50040 + 4);
  local_1c8 = fVar20;
  if ((0.0 < fVar17) && (local_1c8 = 2.8026e-45, 1 < (int)fVar20)) {
    local_1c8 = fVar20;
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50058) &&
     (_Init_thread_header(&DAT_146a50058), DAT_146a50058 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a50050 = lVar3;
    _Init_thread_footer(&DAT_146a50058);
  }
  local_1b8 = *(float *)(DAT_146a50050 + 4);
  if ((*(longlong *)(param_4 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(param_4 + 0x1a40) + 0xc9) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(param_4 + 0x1202) == '\0') || (bVar2)) {
    local_1f8 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1b8);
    pfVar7 = &local_1c8;
  }
  else {
    local_1e8[0] = 0.0;
    local_1f8 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,local_1e8);
    pfVar7 = local_1e8;
    local_1e8[0] = 0.0;
  }
  local_1f8 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x100,pfVar7);
  local_1d8 = (float)(**(code **)(**(longlong **)(lVar4 + 0x18) + 0x28))();
  fVar20 = 1.0;
  local_1d8 = 1.0 / local_1d8;
  fStack_1d4 = (float)(**(code **)(**(longlong **)(lVar4 + 0x18) + 0x28))();
  if (fVar17 <= 1.0) {
    fVar17 = 1.0;
  }
  fStack_1d4 = 2.2 / fStack_1d4;
  local_1f8 = 0;
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,1.0 / fVar17);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1d8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50068) &&
     (_Init_thread_header(&DAT_146a50068), DAT_146a50068 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a50060 = lVar4;
    _Init_thread_footer(&DAT_146a50068);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50078) &&
     (_Init_thread_header(&DAT_146a50078), DAT_146a50078 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a50070 = lVar4;
    _Init_thread_footer(&DAT_146a50078);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50088) &&
     (_Init_thread_header(&DAT_146a50088), DAT_146a50088 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a50080 = lVar6;
    _Init_thread_footer(&DAT_146a50088);
  }
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a50060 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x10c,local_1e8)
  ;
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a50070 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x112,local_1e8)
  ;
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a50080 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x118,local_1e8)
  ;
  local_1f8 = 0;
  local_1e8[0] = (float)(uint)(*(char *)(param_4 + 0x120e) != '\0');
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x11e,local_1e8)
  ;
  local_1b4 = *(float *)(param_4 + 0x13e4);
  local_1b0 = *(float *)(param_4 + 0x13e8);
  local_19c = *(float *)(param_4 + 0x1408);
  if (0.0 <= local_19c) {
    if (2.0 <= local_19c) {
      local_19c = 2.0;
    }
  }
  else {
    local_19c = 0.0;
  }
  fVar17 = *(float *)(param_4 + 0x143c);
  fVar10 = *(float *)(param_4 + 0x140c);
  fVar13 = *(float *)(param_4 + 0x1420);
  fVar15 = *(float *)(param_4 + 0x1434);
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar21 = *(float *)(param_4 + 0x1448);
  fVar17 = fVar17 + 1.0;
  if (1.0 <= fVar21) {
    if (4.0 <= fVar21) {
      fVar21 = 4.0;
    }
  }
  else {
    fVar21 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(2.0,fVar21);
  fVar21 = *(float *)(param_4 + 0x1440);
  if (0.0 <= fVar21) {
    if (1.0 <= fVar21) {
      fVar21 = 1.0;
    }
  }
  else {
    fVar21 = 0.0;
  }
  fVar9 = 0.0225;
  fVar21 = (1.0 - fVar21) * 0.18;
  if ((fVar21 < 0.0225) || (fVar9 = 0.16875, 0.16875 <= fVar21)) {
    fVar21 = fVar9;
  }
  fVar9 = *(float *)(param_4 + 0x1444);
  if (0.0 <= fVar9) {
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  fStack_1d4 = *(float *)(param_4 + 0x1400);
  fVar9 = 1.0 - fVar9;
  if (fVar9 <= 0.03125) {
    fVar9 = 0.03125;
  }
  if (0.0 <= fStack_1d4) {
    if (1.0 <= fStack_1d4) {
      fStack_1d4 = 1.0;
    }
  }
  else {
    fStack_1d4 = 0.0;
  }
  local_1c0 = *(float *)(param_4 + 0x1404);
  if (0.0 <= local_1c0) {
    if (1.0 <= local_1c0) {
      local_1c0 = 1.0;
    }
  }
  else {
    local_1c0 = 0.0;
  }
  local_1e8[0] = *(float *)(param_4 + 0x13e8) + 4.7683716e-07;
  fVar16 = *(float *)(param_4 + 0x13e4) + 4.7683716e-07;
  fVar11 = 1.0 / (*(float *)(param_4 + 0x1410) + fVar10 + 4.7683716e-07 +
                 *(float *)(param_4 + 0x1414));
  local_1c8 = *(float *)(param_4 + 0x1414) * fVar11;
  fVar18 = (fVar10 + 4.7683716e-07) * fVar11;
  fVar11 = *(float *)(param_4 + 0x1410) * fVar11;
  fVar12 = 1.0 / (*(float *)(param_4 + 0x141c) + fVar13 + 4.7683716e-07 +
                 *(float *)(param_4 + 0x1424));
  local_194 = *(float *)(param_4 + 0x1424) * fVar12;
  local_198 = *(float *)(param_4 + 0x141c) * fVar12;
  fVar12 = (fVar13 + 4.7683716e-07) * fVar12;
  fVar13 = 1.0 / (*(float *)(param_4 + 0x1430) + *(float *)(param_4 + 0x142c) + fVar15 +
                 4.7683716e-07);
  fVar14 = *(float *)(param_4 + 0x1430) * fVar13;
  local_190 = *(float *)(param_4 + 0x142c) * fVar13;
  fVar13 = (fVar15 + 4.7683716e-07) * fVar13;
  local_18c = *(float *)(param_4 + 0x13e0) + 4.7683716e-07;
  local_1b8 = 1.0 / (local_18c * 0.2126 + fVar16 * 0.7152 + local_1e8[0] * 0.0722);
  local_18c = local_1b8 * local_18c;
  local_1e8[0] = local_1b8 * local_1e8[0];
  local_1b8 = local_1b8 * fVar16;
  fVar15 = (*(float *)(param_4 + 0x13f4) - local_1b4) * local_1c0 + local_1b4 + 4.7683716e-07;
  fVar19 = (*(float *)(param_4 + 0x13f0) - *(float *)(param_4 + 0x13e0)) * local_1c0 +
           *(float *)(param_4 + 0x13e0) + 4.7683716e-07;
  fVar16 = (*(float *)(param_4 + 0x13f8) - local_1b0) * local_1c0 + local_1b0 + 4.7683716e-07;
  fVar10 = 1.0 / (fVar19 * 0.2126 + fVar15 * 0.7152 + fVar16 * 0.0722);
  local_180 = fVar16 * fVar10 - local_1e8[0];
  local_184 = fVar15 * fVar10 - local_1b8;
  local_158 = (fVar18 + local_198 + local_190) * 0.33333334;
  local_1b4 = (fVar12 + fVar11 + fVar14) * 0.33333334;
  local_1bc = (local_194 + local_1c8 + fVar13) * 0.33333334;
  local_1d8 = fStack_1d4 * 13.6064;
  local_1c8 = local_1c8 - local_1bc;
  fStack_120 = fStack_1d4 * 4.6208;
  fStack_1d4 = fStack_1d4 * 45.7728;
  local_178 = local_158 + local_19c * (fVar18 - local_158);
  local_1a4 = local_1b4 + local_19c * (fVar11 - local_1b4);
  local_1a8 = local_1bc + local_19c * local_1c8;
  local_168 = local_158 + local_19c * (local_198 - local_158);
  local_1ac = local_1b4 + local_19c * (fVar12 - local_1b4);
  local_1b0 = local_1bc + local_19c * (local_194 - local_1bc);
  local_158 = local_158 + local_19c * (local_190 - local_158);
  local_1b4 = local_1b4 + local_19c * (fVar14 - local_1b4);
  local_1bc = local_1bc + local_19c * (fVar13 - local_1bc);
  fVar13 = 0.18 - fVar17 * 0.18;
  fStack_140 = (-1.0 / fVar17) * fVar13;
  fVar15 = (1.0 - fVar13) / fVar17 - fStack_140;
  local_148 = fVar15 * fVar21 + fStack_140;
  fStack_140 = fVar15 * (1.0 - fVar9 * 0.82) + fStack_140;
  fVar15 = local_148 * fVar17 + fVar13;
  fVar13 = fStack_140 * fVar17 + fVar13;
  fVar21 = 1.0 - fVar13;
  fStack_14c = (fVar13 - fVar15) / (fStack_140 - local_148);
  fVar17 = fStack_14c * (fVar8 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar17 = (fVar17 - fVar21) / fVar17;
  local_1a0 = fVar21 / fVar17;
  local_1c4 = (-1.0 / fVar17) * fVar21 * fStack_140;
  fVar13 = (fStack_15c - fVar15) / fStack_15c;
  fStack_13c = fVar21 / (fVar17 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar15 - fStack_15c;
  if (fVar13 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar13) * fVar15;
    fVar20 = fVar15 / (fVar13 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_1d0 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_1f8 = 0;
  _local_108 = CONCAT44(local_184,fVar19 * fVar10 - local_18c);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),local_180);
  local_1c0 = local_1d8;
  local_188 = fStack_1d4;
  fStack_174 = local_1a4;
  fStack_170 = local_1a8;
  fStack_164 = local_1ac;
  fStack_160 = local_1b0;
  fStack_154 = local_1b4;
  fStack_150 = local_1bc;
  fStack_144 = fVar20;
  local_138 = local_1a0;
  fStack_134 = local_1c4;
  local_128 = local_1d8;
  fStack_124 = fStack_1d4;
  local_118 = local_18c;
  fStack_114 = local_1b8;
  fStack_110 = local_1e8[0];
  FUN_141a120e0(param_2,param_3,param_1 + 0x124,&local_178);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x130,&local_158);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x136,&local_148);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x142,&local_128);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x148,&local_118);
  local_1f8 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bf95a0 FUN_141bf95a0 body=5475 status=ok
// SIG undefined FUN_141bf95a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf95a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_144dcb3b8;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 2);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141a120e0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141a120e0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50098) &&
     (_Init_thread_header(&DAT_146a50098), DAT_146a50098 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50090 = lVar8;
    _Init_thread_footer(&DAT_146a50098);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a500a8) &&
     (_Init_thread_header(&DAT_146a500a8), DAT_146a500a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a500a0 = lVar8;
    _Init_thread_footer(&DAT_146a500a8);
  }
  fVar26 = *(float *)(DAT_146a50090 + 4);
  fVar23 = *(float *)(DAT_146a500a0 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a500b8) &&
     (_Init_thread_header(&DAT_146a500b8), DAT_146a500b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a500b0 = lVar8;
    _Init_thread_footer(&DAT_146a500b8);
  }
  local_210 = *(float *)(DAT_146a500b0 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a500c8) &&
     (_Init_thread_header(&DAT_146a500c8), DAT_146a500c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a500c0 = lVar8;
    _Init_thread_footer(&DAT_146a500c8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a500d8) &&
     (_Init_thread_header(&DAT_146a500d8), DAT_146a500d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a500d0 = lVar8;
    _Init_thread_footer(&DAT_146a500d8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a500e8) &&
     (_Init_thread_header(&DAT_146a500e8), DAT_146a500e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a500e0 = lVar10;
    _Init_thread_footer(&DAT_146a500e8);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a500c0 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a500d0 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a500e0 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141a120e0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bfab10 FUN_141bfab10 body=5475 status=ok
// SIG undefined FUN_141bfab10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bfab10(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_144dcb3b8;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 3);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141a120e0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141a120e0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a500f8) &&
     (_Init_thread_header(&DAT_146a500f8), DAT_146a500f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a500f0 = lVar8;
    _Init_thread_footer(&DAT_146a500f8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50108) &&
     (_Init_thread_header(&DAT_146a50108), DAT_146a50108 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50100 = lVar8;
    _Init_thread_footer(&DAT_146a50108);
  }
  fVar26 = *(float *)(DAT_146a500f0 + 4);
  fVar23 = *(float *)(DAT_146a50100 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50118) &&
     (_Init_thread_header(&DAT_146a50118), DAT_146a50118 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50110 = lVar8;
    _Init_thread_footer(&DAT_146a50118);
  }
  local_210 = *(float *)(DAT_146a50110 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50128) &&
     (_Init_thread_header(&DAT_146a50128), DAT_146a50128 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50120 = lVar8;
    _Init_thread_footer(&DAT_146a50128);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50138) &&
     (_Init_thread_header(&DAT_146a50138), DAT_146a50138 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50130 = lVar8;
    _Init_thread_footer(&DAT_146a50138);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50148) &&
     (_Init_thread_header(&DAT_146a50148), DAT_146a50148 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50140 = lVar10;
    _Init_thread_footer(&DAT_146a50148);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a50120 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a50130 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a50140 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141a120e0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bfc080 FUN_141bfc080 body=5475 status=ok
// SIG undefined FUN_141bfc080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bfc080(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_144dcb3b8;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 4);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141a120e0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141a120e0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50158) &&
     (_Init_thread_header(&DAT_146a50158), DAT_146a50158 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50150 = lVar8;
    _Init_thread_footer(&DAT_146a50158);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50168) &&
     (_Init_thread_header(&DAT_146a50168), DAT_146a50168 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50160 = lVar8;
    _Init_thread_footer(&DAT_146a50168);
  }
  fVar26 = *(float *)(DAT_146a50150 + 4);
  fVar23 = *(float *)(DAT_146a50160 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50178) &&
     (_Init_thread_header(&DAT_146a50178), DAT_146a50178 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50170 = lVar8;
    _Init_thread_footer(&DAT_146a50178);
  }
  local_210 = *(float *)(DAT_146a50170 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50188) &&
     (_Init_thread_header(&DAT_146a50188), DAT_146a50188 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50180 = lVar8;
    _Init_thread_footer(&DAT_146a50188);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50198) &&
     (_Init_thread_header(&DAT_146a50198), DAT_146a50198 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50190 = lVar8;
    _Init_thread_footer(&DAT_146a50198);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a501a8) &&
     (_Init_thread_header(&DAT_146a501a8), DAT_146a501a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a501a0 = lVar10;
    _Init_thread_footer(&DAT_146a501a8);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a50180 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a50190 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a501a0 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141a120e0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bfd5f0 FUN_141bfd5f0 body=5475 status=ok
// SIG undefined FUN_141bfd5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bfd5f0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_144dcb3b8;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 5);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141a120e0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141a120e0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a501b8) &&
     (_Init_thread_header(&DAT_146a501b8), DAT_146a501b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a501b0 = lVar8;
    _Init_thread_footer(&DAT_146a501b8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a501c8) &&
     (_Init_thread_header(&DAT_146a501c8), DAT_146a501c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a501c0 = lVar8;
    _Init_thread_footer(&DAT_146a501c8);
  }
  fVar26 = *(float *)(DAT_146a501b0 + 4);
  fVar23 = *(float *)(DAT_146a501c0 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a501d8) &&
     (_Init_thread_header(&DAT_146a501d8), DAT_146a501d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a501d0 = lVar8;
    _Init_thread_footer(&DAT_146a501d8);
  }
  local_210 = *(float *)(DAT_146a501d0 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a501e8) &&
     (_Init_thread_header(&DAT_146a501e8), DAT_146a501e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a501e0 = lVar8;
    _Init_thread_footer(&DAT_146a501e8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a501f8) &&
     (_Init_thread_header(&DAT_146a501f8), DAT_146a501f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a501f0 = lVar8;
    _Init_thread_footer(&DAT_146a501f8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50208) &&
     (_Init_thread_header(&DAT_146a50208), DAT_146a50208 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50200 = lVar10;
    _Init_thread_footer(&DAT_146a50208);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a501e0 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a501f0 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a50200 + 4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141a120e0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141a120e0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bfeb60 FUN_141bfeb60 body=4789 status=ok
// SIG undefined FUN_141bfeb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bfeb60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
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
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  float local_1e8 [4];
  float local_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar6 = 0;
  lVar4 = *(longlong *)(param_4 + 0x10);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x28,param_6);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,param_4 + 0xf50);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x34,param_4 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,param_4 + 0x125c);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,param_4 + 0x1260);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x52,param_4 + 0x1270);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x58,param_4 + 0x1280);
  local_1f8 = 0;
  fStack_1d4 = DAT_146a496b0 + *(float *)(param_4 + 0x1294);
  local_1d8 = DAT_146a496b0 + *(float *)(param_4 + 0x1290);
  uStack_1d0 = CONCAT44(*(undefined4 *)(param_4 + 0x129c),
                        DAT_146a496b0 + *(float *)(param_4 + 0x1298));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x5e,&local_1d8);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 100,param_4 + 0x12a0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x6a,param_4 + 0x12b0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x70,param_4 + 0x12c0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x76,param_4 + 0x12d0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x7c,param_4 + 0x12e0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x82,param_4 + 0x12f0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x88,param_4 + 0x1300);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x8e,param_4 + 0x1320);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x94,param_4 + 0x1330);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x9a,param_4 + 0x1340);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa0,param_4 + 0x1350);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa6,param_4 + 0x1360);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xac,param_4 + 0x1370);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb2,param_4 + 0x1380);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb8,param_4 + 0x1390);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xbe,param_4 + 0x13a0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xc4,param_4 + 0x13b0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,param_4 + 0x1310);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,param_4 + 0x13c0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,param_4 + 0x13c4);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,param_4 + 0x13c8);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,param_4 + 0x13cc);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,param_4 + 0x13d0);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,param_4 + 0x13d4);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,param_4 + 0x13d8);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,param_4 + 0x13dc);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50218) &&
     (_Init_thread_header(&DAT_146a50218), DAT_146a50218 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a50210 = lVar3;
    _Init_thread_footer(&DAT_146a50218);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50228) &&
     (_Init_thread_header(&DAT_146a50228), DAT_146a50228 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a50220 = lVar3;
    _Init_thread_footer(&DAT_146a50228);
  }
  fVar20 = *(float *)(DAT_146a50210 + 4);
  fVar17 = *(float *)(DAT_146a50220 + 4);
  local_1c8 = fVar20;
  if ((0.0 < fVar17) && (local_1c8 = 2.8026e-45, 1 < (int)fVar20)) {
    local_1c8 = fVar20;
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50238) &&
     (_Init_thread_header(&DAT_146a50238), DAT_146a50238 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a50230 = lVar3;
    _Init_thread_footer(&DAT_146a50238);
  }
  local_1b8 = *(float *)(DAT_146a50230 + 4);
  if ((*(longlong *)(param_4 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(param_4 + 0x1a40) + 0xc9) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(param_4 + 0x1202) == '\0') || (bVar2)) {
    local_1f8 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1b8);
    pfVar7 = &local_1c8;
  }
  else {
    local_1e8[0] = 0.0;
    local_1f8 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,local_1e8);
    pfVar7 = local_1e8;
    local_1e8[0] = 0.0;
  }
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x100,pfVar7);
  local_1d8 = (float)(**(code **)(**(longlong **)(lVar4 + 0x18) + 0x28))();
  fVar20 = 1.0;
  local_1d8 = 1.0 / local_1d8;
  fStack_1d4 = (float)(**(code **)(**(longlong **)(lVar4 + 0x18) + 0x28))();
  if (fVar17 <= 1.0) {
    fVar17 = 1.0;
  }
  fStack_1d4 = 2.2 / fStack_1d4;
  local_1f8 = 0;
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,1.0 / fVar17);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1d8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50248) &&
     (_Init_thread_header(&DAT_146a50248), DAT_146a50248 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a50240 = lVar4;
    _Init_thread_footer(&DAT_146a50248);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50258) &&
     (_Init_thread_header(&DAT_146a50258), DAT_146a50258 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a50250 = lVar4;
    _Init_thread_footer(&DAT_146a50258);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a50268) &&
     (_Init_thread_header(&DAT_146a50268), DAT_146a50268 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a50260 = lVar6;
    _Init_thread_footer(&DAT_146a50268);
  }
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a50240 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,local_1e8);
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a50250 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,local_1e8);
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a50260 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,local_1e8);
  local_1f8 = 0;
  local_1e8[0] = (float)(uint)(*(char *)(param_4 + 0x120e) != '\0');
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,local_1e8);
  local_1b4 = *(float *)(param_4 + 0x13e4);
  local_1b0 = *(float *)(param_4 + 0x13e8);
  local_19c = *(float *)(param_4 + 0x1408);
  if (0.0 <= local_19c) {
    if (2.0 <= local_19c) {
      local_19c = 2.0;
    }
  }
  else {
    local_19c = 0.0;
  }
  fVar17 = *(float *)(param_4 + 0x143c);
  fVar10 = *(float *)(param_4 + 0x140c);
  fVar13 = *(float *)(param_4 + 0x1420);
  fVar15 = *(float *)(param_4 + 0x1434);
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar21 = *(float *)(param_4 + 0x1448);
  fVar17 = fVar17 + 1.0;
  if (1.0 <= fVar21) {
    if (4.0 <= fVar21) {
      fVar21 = 4.0;
    }
  }
  else {
    fVar21 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(2.0,fVar21);
  fVar21 = *(float *)(param_4 + 0x1440);
  if (0.0 <= fVar21) {
    if (1.0 <= fVar21) {
      fVar21 = 1.0;
    }
  }
  else {
    fVar21 = 0.0;
  }
  fVar9 = 0.0225;
  fVar21 = (1.0 - fVar21) * 0.18;
  if ((fVar21 < 0.0225) || (fVar9 = 0.16875, 0.16875 <= fVar21)) {
    fVar21 = fVar9;
  }
  fVar9 = *(float *)(param_4 + 0x1444);
  if (0.0 <= fVar9) {
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  fStack_1d4 = *(float *)(param_4 + 0x1400);
  fVar9 = 1.0 - fVar9;
  if (fVar9 <= 0.03125) {
    fVar9 = 0.03125;
  }
  if (0.0 <= fStack_1d4) {
    if (1.0 <= fStack_1d4) {
      fStack_1d4 = 1.0;
    }
  }
  else {
    fStack_1d4 = 0.0;
  }
  local_1c0 = *(float *)(param_4 + 0x1404);
  if (0.0 <= local_1c0) {
    if (1.0 <= local_1c0) {
      local_1c0 = 1.0;
    }
  }
  else {
    local_1c0 = 0.0;
  }
  local_1e8[0] = *(float *)(param_4 + 0x13e8) + 4.7683716e-07;
  fVar16 = *(float *)(param_4 + 0x13e4) + 4.7683716e-07;
  fVar11 = 1.0 / (*(float *)(param_4 + 0x1410) + fVar10 + 4.7683716e-07 +
                 *(float *)(param_4 + 0x1414));
  local_1c8 = *(float *)(param_4 + 0x1414) * fVar11;
  fVar18 = (fVar10 + 4.7683716e-07) * fVar11;
  fVar11 = *(float *)(param_4 + 0x1410) * fVar11;
  fVar12 = 1.0 / (*(float *)(param_4 + 0x141c) + fVar13 + 4.7683716e-07 +
                 *(float *)(param_4 + 0x1424));
  local_194 = *(float *)(param_4 + 0x1424) * fVar12;
  local_198 = *(float *)(param_4 + 0x141c) * fVar12;
  fVar12 = (fVar13 + 4.7683716e-07) * fVar12;
  fVar13 = 1.0 / (*(float *)(param_4 + 0x1430) + *(float *)(param_4 + 0x142c) + fVar15 +
                 4.7683716e-07);
  fVar14 = *(float *)(param_4 + 0x1430) * fVar13;
  local_190 = *(float *)(param_4 + 0x142c) * fVar13;
  fVar13 = (fVar15 + 4.7683716e-07) * fVar13;
  local_18c = *(float *)(param_4 + 0x13e0) + 4.7683716e-07;
  local_1b8 = 1.0 / (local_18c * 0.2126 + fVar16 * 0.7152 + local_1e8[0] * 0.0722);
  local_18c = local_1b8 * local_18c;
  local_1e8[0] = local_1b8 * local_1e8[0];
  local_1b8 = local_1b8 * fVar16;
  fVar15 = (*(float *)(param_4 + 0x13f4) - local_1b4) * local_1c0 + local_1b4 + 4.7683716e-07;
  fVar19 = (*(float *)(param_4 + 0x13f0) - *(float *)(param_4 + 0x13e0)) * local_1c0 +
           *(float *)(param_4 + 0x13e0) + 4.7683716e-07;
  fVar16 = (*(float *)(param_4 + 0x13f8) - local_1b0) * local_1c0 + local_1b0 + 4.7683716e-07;
  fVar10 = 1.0 / (fVar19 * 0.2126 + fVar15 * 0.7152 + fVar16 * 0.0722);
  local_180 = fVar16 * fVar10 - local_1e8[0];
  local_184 = fVar15 * fVar10 - local_1b8;
  local_158 = (fVar18 + local_198 + local_190) * 0.33333334;
  local_1b4 = (fVar12 + fVar11 + fVar14) * 0.33333334;
  local_1bc = (local_194 + local_1c8 + fVar13) * 0.33333334;
  local_1d8 = fStack_1d4 * 13.6064;
  local_1c8 = local_1c8 - local_1bc;
  fStack_120 = fStack_1d4 * 4.6208;
  fStack_1d4 = fStack_1d4 * 45.7728;
  local_178 = local_158 + local_19c * (fVar18 - local_158);
  local_1a4 = local_1b4 + local_19c * (fVar11 - local_1b4);
  local_1a8 = local_1bc + local_19c * local_1c8;
  local_168 = local_158 + local_19c * (local_198 - local_158);
  local_1ac = local_1b4 + local_19c * (fVar12 - local_1b4);
  local_1b0 = local_1bc + local_19c * (local_194 - local_1bc);
  local_158 = local_158 + local_19c * (local_190 - local_158);
  local_1b4 = local_1b4 + local_19c * (fVar14 - local_1b4);
  local_1bc = local_1bc + local_19c * (fVar13 - local_1bc);
  fVar13 = 0.18 - fVar17 * 0.18;
  fStack_140 = (-1.0 / fVar17) * fVar13;
  fVar15 = (1.0 - fVar13) / fVar17 - fStack_140;
  local_148 = fVar15 * fVar21 + fStack_140;
  fStack_140 = fVar15 * (1.0 - fVar9 * 0.82) + fStack_140;
  fVar15 = local_148 * fVar17 + fVar13;
  fVar13 = fStack_140 * fVar17 + fVar13;
  fVar21 = 1.0 - fVar13;
  fStack_14c = (fVar13 - fVar15) / (fStack_140 - local_148);
  fVar17 = fStack_14c * (fVar8 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar17 = (fVar17 - fVar21) / fVar17;
  local_1a0 = fVar21 / fVar17;
  local_1c4 = (-1.0 / fVar17) * fVar21 * fStack_140;
  fVar13 = (fStack_15c - fVar15) / fStack_15c;
  fStack_13c = fVar21 / (fVar17 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar15 - fStack_15c;
  if (fVar13 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar13) * fVar15;
    fVar20 = fVar15 / (fVar13 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_1d0 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_1f8 = 0;
  _local_108 = CONCAT44(local_184,fVar19 * fVar10 - local_18c);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),local_180);
  local_1c0 = local_1d8;
  local_188 = fStack_1d4;
  fStack_174 = local_1a4;
  fStack_170 = local_1a8;
  fStack_164 = local_1ac;
  fStack_160 = local_1b0;
  fStack_154 = local_1b4;
  fStack_150 = local_1bc;
  fStack_144 = fVar20;
  local_138 = local_1a0;
  fStack_134 = local_1c4;
  local_128 = local_1d8;
  fStack_124 = fStack_1d4;
  local_118 = local_18c;
  fStack_114 = local_1b8;
  fStack_110 = local_1e8[0];
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x124,&local_178);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x12a,&local_168);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x130,&local_158);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x136,&local_148);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x13c,&local_138);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x142,&local_128);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x148,&local_118);
  local_1f8 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bffe20 FUN_141bffe20 body=5475 status=ok
// SIG undefined FUN_141bffe20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bffe20(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *puVar11 = &PTR_LAB_143f59c80;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_143f59c70;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 2);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50278) &&
     (_Init_thread_header(&DAT_146a50278), DAT_146a50278 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50270 = lVar8;
    _Init_thread_footer(&DAT_146a50278);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50288) &&
     (_Init_thread_header(&DAT_146a50288), DAT_146a50288 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50280 = lVar8;
    _Init_thread_footer(&DAT_146a50288);
  }
  fVar26 = *(float *)(DAT_146a50270 + 4);
  fVar23 = *(float *)(DAT_146a50280 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50298) &&
     (_Init_thread_header(&DAT_146a50298), DAT_146a50298 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50290 = lVar8;
    _Init_thread_footer(&DAT_146a50298);
  }
  local_210 = *(float *)(DAT_146a50290 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a502a8) &&
     (_Init_thread_header(&DAT_146a502a8), DAT_146a502a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a502a0 = lVar8;
    _Init_thread_footer(&DAT_146a502a8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a502b8) &&
     (_Init_thread_header(&DAT_146a502b8), DAT_146a502b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a502b0 = lVar8;
    _Init_thread_footer(&DAT_146a502b8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a502c8) &&
     (_Init_thread_header(&DAT_146a502c8), DAT_146a502c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a502c0 = lVar10;
    _Init_thread_footer(&DAT_146a502c8);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a502a0 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a502b0 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a502c0 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141c01390 FUN_141c01390 body=5475 status=ok
// SIG undefined FUN_141c01390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c01390(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *puVar11 = &PTR_LAB_143f59c80;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_143f59c70;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 3);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a502d8) &&
     (_Init_thread_header(&DAT_146a502d8), DAT_146a502d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a502d0 = lVar8;
    _Init_thread_footer(&DAT_146a502d8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a502e8) &&
     (_Init_thread_header(&DAT_146a502e8), DAT_146a502e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a502e0 = lVar8;
    _Init_thread_footer(&DAT_146a502e8);
  }
  fVar26 = *(float *)(DAT_146a502d0 + 4);
  fVar23 = *(float *)(DAT_146a502e0 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a502f8) &&
     (_Init_thread_header(&DAT_146a502f8), DAT_146a502f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a502f0 = lVar8;
    _Init_thread_footer(&DAT_146a502f8);
  }
  local_210 = *(float *)(DAT_146a502f0 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50308) &&
     (_Init_thread_header(&DAT_146a50308), DAT_146a50308 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50300 = lVar8;
    _Init_thread_footer(&DAT_146a50308);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50318) &&
     (_Init_thread_header(&DAT_146a50318), DAT_146a50318 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50310 = lVar8;
    _Init_thread_footer(&DAT_146a50318);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50328) &&
     (_Init_thread_header(&DAT_146a50328), DAT_146a50328 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50320 = lVar10;
    _Init_thread_footer(&DAT_146a50328);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a50300 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a50310 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a50320 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141c02900 FUN_141c02900 body=5475 status=ok
// SIG undefined FUN_141c02900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c02900(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *puVar11 = &PTR_LAB_143f59c80;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_143f59c70;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 4);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50338) &&
     (_Init_thread_header(&DAT_146a50338), DAT_146a50338 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50330 = lVar8;
    _Init_thread_footer(&DAT_146a50338);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50348) &&
     (_Init_thread_header(&DAT_146a50348), DAT_146a50348 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50340 = lVar8;
    _Init_thread_footer(&DAT_146a50348);
  }
  fVar26 = *(float *)(DAT_146a50330 + 4);
  fVar23 = *(float *)(DAT_146a50340 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50358) &&
     (_Init_thread_header(&DAT_146a50358), DAT_146a50358 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50350 = lVar8;
    _Init_thread_footer(&DAT_146a50358);
  }
  local_210 = *(float *)(DAT_146a50350 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50368) &&
     (_Init_thread_header(&DAT_146a50368), DAT_146a50368 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50360 = lVar8;
    _Init_thread_footer(&DAT_146a50368);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50378) &&
     (_Init_thread_header(&DAT_146a50378), DAT_146a50378 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50370 = lVar8;
    _Init_thread_footer(&DAT_146a50378);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50388) &&
     (_Init_thread_header(&DAT_146a50388), DAT_146a50388 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a50380 = lVar10;
    _Init_thread_footer(&DAT_146a50388);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a50360 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a50370 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a50380 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141c03e70 FUN_141c03e70 body=5475 status=ok
// SIG undefined FUN_141c03e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c03e70(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
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
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
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
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
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
        *puVar11 = &PTR_LAB_143f59c80;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
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
        *puVar11 = &PTR_LAB_143f59c70;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 5);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a50398) &&
     (_Init_thread_header(&DAT_146a50398), DAT_146a50398 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a50390 = lVar8;
    _Init_thread_footer(&DAT_146a50398);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a503a8) &&
     (_Init_thread_header(&DAT_146a503a8), DAT_146a503a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a503a0 = lVar8;
    _Init_thread_footer(&DAT_146a503a8);
  }
  fVar26 = *(float *)(DAT_146a50390 + 4);
  fVar23 = *(float *)(DAT_146a503a0 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a503b8) &&
     (_Init_thread_header(&DAT_146a503b8), DAT_146a503b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a503b0 = lVar8;
    _Init_thread_footer(&DAT_146a503b8);
  }
  local_210 = *(float *)(DAT_146a503b0 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a503c8) &&
     (_Init_thread_header(&DAT_146a503c8), DAT_146a503c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a503c0 = lVar8;
    _Init_thread_footer(&DAT_146a503c8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a503d8) &&
     (_Init_thread_header(&DAT_146a503d8), DAT_146a503d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a503d0 = lVar8;
    _Init_thread_footer(&DAT_146a503d8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a503e8) &&
     (_Init_thread_header(&DAT_146a503e8), DAT_146a503e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a503e0 = lVar10;
    _Init_thread_footer(&DAT_146a503e8);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a503c0 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a503d0 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a503e0 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141c053e0 FUN_141c053e0 body=2298 status=ok
// SIG undefined FUN_141c053e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c053e0(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  void *_Dst;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong _Size;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  int local_168 [2];
  undefined *local_160;
  undefined4 local_158;
  undefined8 local_148;
  int local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  int *local_120;
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
  puVar16 = (undefined8 *)0x0;
  local_160 = (undefined *)((ulonglong)local_160 & 0xffffffff00000000);
  local_138 = param_5;
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
  local_148 = param_1;
  local_130 = param_4;
  local_110 = param_2;
  FUN_14049afe0(param_2,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = param_1[0xc];
  local_bc = local_bc & 0xffffffff00000000;
  lVar2 = *param_1;
  local_128 = lVar2;
  if (param_3 == 1) {
    local_160 = &DAT_146a4f0c0;
  }
  else if (param_3 == 2) {
    local_160 = &DAT_146a4f210;
  }
  else if (param_3 == 3) {
    local_160 = &DAT_146a4f360;
  }
  else if (param_3 == 4) {
    local_160 = &DAT_146a4f4b0;
  }
  else {
    puVar13 = puVar16;
    if (param_3 != 5) goto LAB_141c05576;
    local_160 = &DAT_146a4f600;
  }
  local_158 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_168,&local_160);
  puVar11 = puVar16;
  if (local_168[0] != -1) {
    puVar11 = (undefined8 *)((longlong)local_168[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  puVar13 = puVar11 + 2;
  if (puVar11 == (undefined8 *)0x0) {
    puVar13 = puVar16;
  }
  puVar13 = (undefined8 *)*puVar13;
LAB_141c05576:
  uVar6 = FUN_14274f980(lVar2);
  iVar7 = FUN_1419ef5f0(uVar6);
  if (((iVar7 < 2) || (DAT_1464c9c1a == '\0')) ||
     ((uVar6 < 0x1e && ((0x20221800U >> (uVar6 & 0x1f) & 1) != 0)))) {
    plVar8 = (longlong *)0x0;
    local_120 = (int *)&DAT_146a51f90;
    local_118 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar1 + 0x38),&local_160,&local_120);
    plVar12 = plVar8;
    if ((int)local_160 != -1) {
      plVar12 = (longlong *)((longlong)(int)local_160 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar14 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar14 = plVar8;
    }
    lVar2 = *plVar14;
    local_108 = DAT_1464c2720;
    if (lVar2 == 0) {
      local_120 = (int *)0x0;
      puVar16 = (undefined8 *)&DAT_00000008;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar8 = *(longlong **)(lVar3 + 0x38);
    }
    uVar9 = 0;
    plStack_100 = plVar8;
    if (puVar16 != (undefined8 *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_120);
    }
    bVar4 = false;
    if (puVar13 == (undefined8 *)0x0) {
      bVar4 = true;
      local_120 = (int *)0x0;
    }
    else {
      lVar3 = puVar13[9];
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      uVar9 = *(undefined8 *)(lVar3 + 0x40);
    }
    local_e8 = uVar9;
    if (bVar4) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_120);
    }
    FUN_141ed6ac0(param_2,&local_108,2,1);
    plVar8 = local_148;
    lVar3 = *(longlong *)(lVar2 + 0x48);
    uVar9 = *(undefined8 *)(*local_148 + 0x20);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    FUN_141c07aa0(lVar2,plVar8[8],*(undefined8 *)(lVar3 + 0x38),uVar9);
  }
  else {
    plVar14 = (longlong *)(lVar1 + 0x38);
    plVar8 = (longlong *)0x0;
    local_148 = (longlong *)&DAT_146b198c0;
    local_140 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar14,local_168,&local_148);
    plVar12 = plVar8;
    if (local_168[0] != -1) {
      plVar12 = (longlong *)((longlong)local_168[0] * 0x20 + *plVar14);
    }
    local_140 = 0;
    plVar15 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar15 = plVar8;
    }
    local_148 = (longlong *)&DAT_146b19770;
    lVar2 = *plVar15;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar14,local_168,&local_148);
    plVar12 = plVar8;
    if (local_168[0] != -1) {
      plVar12 = (longlong *)((longlong)local_168[0] * 0x20 + *plVar14);
    }
    plVar14 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar14 = plVar8;
    }
    plVar12 = plVar8;
    if (plVar14 != (longlong *)0x0) {
      plVar12 = (longlong *)*plVar14;
    }
    local_108 = DAT_146534c78;
    local_bc = CONCAT44(local_bc._4_4_,1);
    if (lVar2 == 0) {
      local_160 = (undefined *)0x0;
      puVar16 = (undefined8 *)0x1;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x48);
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      plVar8 = *(longlong **)(lVar3 + 0x38);
    }
    uVar9 = 0;
    plStack_100 = plVar8;
    if (puVar16 != (undefined8 *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
    }
    bVar4 = false;
    if (plVar12 == (longlong *)0x0) {
      bVar4 = true;
      local_160 = (undefined *)0x0;
    }
    else {
      lVar3 = plVar12[9];
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      uVar9 = *(undefined8 *)(lVar3 + 0x58);
    }
    uStack_e0 = uVar9;
    if (bVar4) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
    }
    bVar4 = false;
    if (puVar13 == (undefined8 *)0x0) {
      bVar4 = true;
      local_160 = (undefined *)0x0;
      local_e8 = 0;
    }
    else {
      lVar3 = puVar13[9];
      if (*(char *)(lVar3 + 0x28) == '\0') {
        FUN_1419f3850(lVar3);
      }
      local_e8 = *(undefined8 *)(lVar3 + 0x40);
    }
    if (bVar4) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
    }
    param_2 = local_110;
    FUN_141ed6ac0(local_110,&local_108,2,1);
    piVar5 = local_120;
    local_178 = local_178 & 0xffffffffffffff00;
    local_140 = local_120[3] - *local_120;
    local_148 = (longlong *)CONCAT44(local_140,local_140);
    FUN_141c07860(lVar2,param_2,local_120,&local_148);
    if (plVar12 != (longlong *)0x0) {
      lVar2 = plVar12[9];
      local_168[0] = piVar5[2];
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      local_120 = *(int **)(lVar2 + 0x58);
      uVar6 = (uint)*(ushort *)((longlong)plVar12 + 0xc4);
      if (3 < *(ushort *)((longlong)plVar12 + 0xc4)) {
        uVar6 = 4;
      }
      _Size = (ulonglong)uVar6;
      if (uVar6 != 0) {
        local_160 = (undefined *)
                    CONCAT44(local_160._4_4_,(uint)*(ushort *)((longlong)plVar12 + 0xc2));
        local_110 = CONCAT44(local_110._4_4_,(uint)*(ushort *)(plVar12 + 0x18));
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar10 = (longlong)_Dst + _Size;
        if (*(ulonglong *)(param_2 + 0x38) < uVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
          _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar10 = (longlong)_Dst + _Size;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar10;
        _guard_xfg_dispatch_icall_nop(_Dst,local_168,_Size);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar16 = puVar13 + 6;
        if (*(undefined8 **)(param_2 + 0x38) < puVar16) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar16 = puVar13 + 6;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar16;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144e147b0;
        puVar13[2] = local_120;
        *(undefined4 *)(puVar13 + 4) = (undefined4)local_110;
        *(int *)((longlong)puVar13 + 0x24) = (int)local_160;
        puVar13[3] = _Dst;
        *(uint *)(puVar13 + 5) = uVar6;
      }
    }
  }
  plVar12 = (longlong *)0x0;
  plVar8 = (longlong *)(lVar1 + 0x38);
  if (param_3 == 1) {
    local_140 = 0;
    local_148 = (longlong *)&DAT_146a4f0c0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_160,&local_148);
    plVar14 = plVar12;
    if ((int)local_160 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_160 * 0x20 + *plVar8);
    }
    plVar8 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar8 = plVar12;
    }
    lVar1 = *plVar8;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    local_170 = local_138;
    local_178 = local_130;
    FUN_141bfeb60(lVar1 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x40),local_128);
  }
  else if (param_3 == 2) {
    local_140 = 0;
    local_148 = (longlong *)&DAT_146a4f210;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_160,&local_148);
    plVar14 = plVar12;
    if ((int)local_160 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_160 * 0x20 + *plVar8);
    }
    plVar8 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar8 = plVar12;
    }
    lVar1 = *plVar8;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    local_170 = local_138;
    local_178 = local_130;
    FUN_141bffe20(lVar1 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x40),local_128);
  }
  else if (param_3 == 3) {
    local_140 = 0;
    local_148 = (longlong *)&DAT_146a4f360;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_160,&local_148);
    plVar14 = plVar12;
    if ((int)local_160 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_160 * 0x20 + *plVar8);
    }
    plVar8 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar8 = plVar12;
    }
    lVar1 = *plVar8;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    local_170 = local_138;
    local_178 = local_130;
    FUN_141c01390(lVar1 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x40),local_128);
  }
  else if (param_3 == 4) {
    local_140 = 0;
    local_148 = (longlong *)&DAT_146a4f4b0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_160,&local_148);
    plVar14 = plVar12;
    if ((int)local_160 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_160 * 0x20 + *plVar8);
    }
    plVar8 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar8 = plVar12;
    }
    lVar1 = *plVar8;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    local_170 = local_138;
    local_178 = local_130;
    FUN_141c02900(lVar1 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x40),local_128);
  }
  else if (param_3 == 5) {
    local_140 = 0;
    local_148 = (longlong *)&DAT_146a4f600;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_160,&local_148);
    plVar14 = plVar12;
    if ((int)local_160 != -1) {
      plVar14 = (longlong *)((longlong)(int)local_160 * 0x20 + *plVar8);
    }
    plVar8 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar8 = plVar12;
    }
    lVar1 = *plVar8;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    local_170 = local_138;
    local_178 = local_130;
    FUN_141c03e70(lVar1 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x40),local_128);
  }
  return;
}



// FUNCTION 141c05ce0 FUN_141c05ce0 body=607 status=ok
// SIG undefined FUN_141c05ce0(void)

void FUN_141c05ce0(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,float param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 local_48;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = FSceneRenderTargets::Get(param_2);
  FUN_141aa92b0(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
            (param_1 + 0xc0,param_2,local_res8,0,param_5);
  local_48 = 0;
  local_40 = 1.0 / (float)*param_4;
  local_3c = param_6 / (float)param_4[1];
  FUN_141aac7b0(param_2,local_res8,param_1 + 200,&local_48,param_5 & 0xffffffff00000000);
  uVar3 = FUN_141a156e0();
  FUN_141caac50(param_1 + 0xce,&local_res8,param_3,param_2,uVar3,0,0);
  uVar7 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0xf);
  FUN_141aa56e0(param_1 + 0x1cc,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),uVar7);
  local_38 = *(undefined4 *)(lVar2 + 0x390);
  uVar7 = uVar7 & 0xffffffff00000000;
  uStack_34 = local_38;
  uStack_30 = local_38;
  uStack_2c = local_38;
  FUN_141aac7b0(param_2,local_res8,param_1 + 0x1e2,&local_38,uVar7);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  FUN_141c16270(param_3,&local_38);
  FUN_141aacce0(param_2,local_res8,param_1 + 0x1dc,&local_38,CONCAT44(uVar8,2),0);
  uVar4 = FUN_141a156e0();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1ee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ec);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9cb0;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar4;
  }
  return;
}



// FUNCTION 141c05f40 FUN_141c05f40 body=833 status=ok
// SIG undefined FUN_141c05f40(void)

void FUN_141c05f40(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,float param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = FSceneRenderTargets::Get(param_2);
  FUN_141aa92b0(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
            (param_1 + 0xc0,param_2,local_res8,0,param_5);
  local_58 = 0;
  local_50 = 1.0 / (float)*param_4;
  local_4c = param_6 / (float)param_4[1];
  FUN_141aac7b0(param_2,local_res8,param_1 + 200,&local_58,param_5 & 0xffffffff00000000);
  uVar3 = FUN_141a156e0();
  FUN_141caac50(param_1 + 0xce,&local_res8,param_3,param_2,uVar3,0,0);
  uVar7 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0xf);
  FUN_141aa56e0(param_1 + 0x1cc,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),uVar7);
  local_48 = *(undefined4 *)(lVar2 + 0x390);
  uVar7 = uVar7 & 0xffffffff00000000;
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  FUN_141aac7b0(param_2,local_res8,param_1 + 0x1e2,&local_48,uVar7);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  FUN_141c16270(param_3,&local_48);
  FUN_141aacce0(param_2,local_res8,param_1 + 0x1dc,&local_48,CONCAT44(uVar8,2),0);
  uVar4 = local_res8;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x220) + 8);
  if (*(short *)(param_1 + 0x1ea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1e8);
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
    *puVar6 = &PTR_LAB_144dc9ca0;
    puVar6[2] = uVar4;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar3;
  }
  uVar4 = FUN_141a156e0();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1ee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ec);
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
    *puVar6 = &PTR_LAB_144dc9cb0;
    puVar6[2] = uVar3;
    puVar6[4] = uVar4;
  }
  uVar4 = FUN_1404a0e20();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1f2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1f0);
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
    *puVar6 = &PTR_LAB_144dc9cb0;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 141c06290 FUN_141c06290 body=529 status=ok
// SIG undefined FUN_141c06290(void)

void FUN_141c06290(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  lVar3 = *param_3;
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa92b0(param_1,param_2,local_res8,*(undefined8 *)(lVar3 + 0x20));
  uVar6 = FUN_141a156e0();
  FUN_141caac50(param_1 + 0xc0,&local_res8,param_3,param_2,uVar6,0,0);
  uVar4 = local_res8;
  uVar1 = *(ushort *)(param_1 + 0x1c8);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
  }
  uVar5 = local_res8;
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144dc9cd0;
  puVar8[4] = param_5;
  puVar8[2] = uVar4;
  *(uint *)(puVar8 + 3) = (uint)uVar1;
  if (*(short *)(param_1 + 0x1be) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1bc);
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
    *puVar8 = &PTR_LAB_144dc9ca0;
    puVar8[4] = param_6;
    puVar8[2] = uVar5;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  local_38 = *(undefined4 *)(lVar3 + 0x146c);
  local_34 = 0;
  local_2c = 1.0 / (float)param_4[1];
  local_30 = 1.0 / (float)*param_4;
  FUN_141aac7b0(param_2,local_res8,param_1 + 0x1c0,&local_38,uVar6 & 0xffffffff00000000);
  return;
}



// FUNCTION 141c064b0 FUN_141c064b0 body=649 status=ok
// SIG undefined FUN_141c064b0(void)

void FUN_141c064b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 local_res8 [4];
  undefined8 local_res18;
  float local_res20;
  float local_res24;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res18 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res18,*(undefined8 *)(*param_3 + 0x20));
  uVar1 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_res18,param_3,uVar1,0,0);
  lVar2 = FRenderingCompositePass::GetInputDesc(param_3[5],0);
  if (lVar2 != 0) {
    uVar1 = uVar1 & 0xffffffff00000000;
    local_res24 = 1.0 / (float)*(int *)(lVar2 + 0x18);
    local_res20 = 1.0 / (float)*(int *)(lVar2 + 0x14);
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1bc,&local_res20,uVar1);
    local_40 = local_res20 * 0.5;
    local_3c = local_res24 * 0.5;
    uVar1 = uVar1 & 0xffffffff00000000;
    local_48 = -local_40;
    local_44 = -local_3c;
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1c2,&local_48,uVar1);
    local_40 = local_res20 * 2.0;
    local_3c = local_res24 * 2.0;
    uVar1 = uVar1 & 0xffffffff00000000;
    local_48 = -local_40;
    local_44 = -local_3c;
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1c8,&local_48,uVar1);
    local_res8[0] = 0x3f400000;
    uVar1 = uVar1 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1ce,local_res8,uVar1);
    local_res8[0] = 0x3e29fbe7;
    uVar1 = uVar1 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1d4,local_res8,uVar1);
    local_res8[0] = 0x3daa9931;
    uVar1 = uVar1 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1da,local_res8,uVar1);
    local_res8[0] = 0x41000000;
    uVar1 = uVar1 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1e0,local_res8,uVar1);
    local_res8[0] = 0x3e000000;
    uVar1 = uVar1 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1e6,local_res8,uVar1);
    local_res8[0] = 0x3d4ccccd;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,local_res18,param_1 + 0x1ec,local_res8,uVar1 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 141c06740 FUN_141c06740 body=607 status=ok
// SIG undefined FUN_141c06740(void)

void FUN_141c06740(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,float param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 local_48;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = FSceneRenderTargets::Get(param_2);
  FUN_141aa9420(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,local_res8,0,param_5);
  local_48 = 0;
  local_40 = 1.0 / (float)*param_4;
  local_3c = param_6 / (float)param_4[1];
  FUN_141a120e0(param_2,local_res8,param_1 + 200,&local_48,param_5 & 0xffffffff00000000);
  uVar3 = FUN_141a156e0();
  FUN_141caac70(param_1 + 0xce,&local_res8,param_3,param_2,uVar3,0,0);
  uVar7 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0xf);
  FUN_141aa6060(param_1 + 0x1cc,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),uVar7);
  local_38 = *(undefined4 *)(lVar2 + 0x390);
  uVar7 = uVar7 & 0xffffffff00000000;
  uStack_34 = local_38;
  uStack_30 = local_38;
  uStack_2c = local_38;
  FUN_141a120e0(param_2,local_res8,param_1 + 0x1e2,&local_38,uVar7);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  FUN_141c16270(param_3,&local_38);
  FUN_141aace20(param_2,local_res8,param_1 + 0x1dc,&local_38,CONCAT44(uVar8,2),0);
  uVar4 = FUN_141a156e0();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1ee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ec);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb3b8;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar4;
  }
  return;
}



// FUNCTION 141c069a0 FUN_141c069a0 body=833 status=ok
// SIG undefined FUN_141c069a0(void)

void FUN_141c069a0(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,float param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  lVar2 = FSceneRenderTargets::Get(param_2);
  FUN_141aa9420(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,local_res8,0,param_5);
  local_58 = 0;
  local_50 = 1.0 / (float)*param_4;
  local_4c = param_6 / (float)param_4[1];
  FUN_141a120e0(param_2,local_res8,param_1 + 200,&local_58,param_5 & 0xffffffff00000000);
  uVar3 = FUN_141a156e0();
  FUN_141caac70(param_1 + 0xce,&local_res8,param_3,param_2,uVar3,0,0);
  uVar7 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0xf);
  FUN_141aa6060(param_1 + 0x1cc,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),uVar7);
  local_48 = *(undefined4 *)(lVar2 + 0x390);
  uVar7 = uVar7 & 0xffffffff00000000;
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  FUN_141a120e0(param_2,local_res8,param_1 + 0x1e2,&local_48,uVar7);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  FUN_141c16270(param_3,&local_48);
  FUN_141aace20(param_2,local_res8,param_1 + 0x1dc,&local_48,CONCAT44(uVar8,2),0);
  uVar4 = local_res8;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x220) + 8);
  if (*(short *)(param_1 + 0x1ea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1e8);
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
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar4;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar3;
  }
  uVar4 = FUN_141a156e0();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1ee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ec);
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
    *puVar6 = &PTR_LAB_144dcb3b8;
    puVar6[2] = uVar3;
    puVar6[4] = uVar4;
  }
  uVar4 = FUN_1404a0e20();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1f2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1f0);
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
    *puVar6 = &PTR_LAB_144dcb3b8;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 141c06cf0 FUN_141c06cf0 body=609 status=ok
// SIG undefined FUN_141c06cf0(void)

void FUN_141c06cf0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_res8 = *(undefined8 *)(lVar4 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  FUN_141aa6fa0(param_1 + 0x1bc,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),
                CONCAT44(uVar8,0xf));
  uVar3 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_res8,param_3,uVar3,0,0);
  lVar4 = FSceneRenderTargets::Get(param_3[8]);
  uVar3 = uVar3 & 0xffffffff00000000;
  local_48 = *(undefined4 *)(lVar4 + 0x390);
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_res8,param_1 + 0x1d2,&local_48,uVar3);
  uVar8 = (undefined4)(uVar3 >> 0x20);
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  FUN_141c16270(param_3,0);
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,local_res8,param_1 + 0x1cc,&local_48,CONCAT44(uVar8,2),0);
  uVar5 = FUN_141a156e0();
  uVar2 = local_res8;
  lVar4 = param_3[8];
  if (*(short *)(param_1 + 0x1de) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1dc);
    puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar4 + 0x30) = puVar6;
    *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
    **(undefined8 **)(lVar4 + 8) = puVar7;
    *(undefined8 **)(lVar4 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = FUN_1404a0e20();
  uVar2 = local_res8;
  lVar4 = param_3[8];
  if (*(short *)(param_1 + 0x1e2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1e0);
    puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar4 + 0x30) = puVar6;
    *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
    **(undefined8 **)(lVar4 + 8) = puVar7;
    *(undefined8 **)(lVar4 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141c06f60 FUN_141c06f60 body=755 status=ok
// SIG undefined FUN_141c06f60(void)

void FUN_141c06f60(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_res8 = *(undefined8 *)(lVar4 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  FUN_141aa6fa0(param_1 + 0x1bc,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),
                CONCAT44(uVar8,0xf));
  uVar3 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_res8,param_3,uVar3,0,0);
  lVar4 = FSceneRenderTargets::Get(param_3[8]);
  uVar3 = uVar3 & 0xffffffff00000000;
  local_48 = *(undefined4 *)(lVar4 + 0x390);
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,local_res8,param_1 + 0x1d2,&local_48,uVar3);
  uVar8 = (undefined4)(uVar3 >> 0x20);
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  FUN_141c16270(param_3,0);
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,local_res8,param_1 + 0x1cc,&local_48,CONCAT44(uVar8,2),0);
  uVar5 = local_res8;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x220) + 8);
  if (*(short *)(param_1 + 0x1da) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1d8);
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
    puVar7[2] = uVar5;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
  }
  uVar5 = FUN_141a156e0();
  uVar2 = local_res8;
  lVar4 = param_3[8];
  if (*(short *)(param_1 + 0x1de) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1dc);
    puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar4 + 0x30) = puVar6;
    *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
    **(undefined8 **)(lVar4 + 8) = puVar7;
    *(undefined8 **)(lVar4 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    puVar7[4] = uVar5;
  }
  uVar5 = FUN_1404a0e20();
  uVar2 = local_res8;
  lVar4 = param_3[8];
  if (*(short *)(param_1 + 0x1e2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1e0);
    puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar4 + 0x30) = puVar6;
    *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
    **(undefined8 **)(lVar4 + 8) = puVar7;
    *(undefined8 **)(lVar4 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141c07260 FUN_141c07260 body=987 status=ok
// SIG undefined FUN_141c07260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c07260(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *_Dst;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  uint local_88;
  uint local_84;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_80 = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,param_2,uVar3,*(undefined8 *)(*param_3 + 0x20));
  if ((*(longlong *)(*param_3 + 0x10) == 0) ||
     (plVar4 = *(longlong **)(*(longlong *)(*param_3 + 0x10) + 0x18), plVar4 == (longlong *)0x0)) {
    local_6c = 2.2;
  }
  else {
    local_6c = (float)(**(code **)(*plVar4 + 0x28))();
  }
  local_6c = 2.2 / local_6c;
  local_78 = *(undefined4 *)(DAT_146a4bb00 + 4);
  local_74 = *(undefined4 *)(DAT_146a4bb18 + 4);
  local_70 = *(undefined4 *)(DAT_146a4bb30 + 4);
  uVar6 = (uint)*(ushort *)(param_1 + 0xc4);
  if (0xf < *(ushort *)(param_1 + 0xc4)) {
    uVar6 = 0x10;
  }
  if (uVar6 != 0) {
    local_88 = (uint)*(ushort *)(param_1 + 0xc2);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_84 = (uint)*(ushort *)(param_1 + 0xc0);
    uVar7 = (longlong)_Dst + (ulonglong)uVar6;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = (longlong)_Dst + (ulonglong)uVar6;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_78,(ulonglong)uVar6);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f594b0;
    *(uint *)(puVar10 + 4) = local_84;
    puVar10[3] = _Dst;
    *(uint *)((longlong)puVar10 + 0x24) = local_88;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 5) = uVar6;
  }
  local_98 = 0;
  local_88 = *(uint *)(DAT_146a4bb48 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xc6,&local_88);
  uVar5 = *local_80;
  uVar8 = FUN_141c1caa0();
  if (*(short *)(param_1 + 0xf2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf0);
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
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  if (*(short *)(param_1 + 0xf6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf4);
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
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar8;
  }
  local_98 = 0;
  local_88 = *(uint *)(DAT_146a4bba8 + 4);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xcc,&local_88);
  local_98 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd2,*param_3 + 0x13cc);
  local_98 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd8,*param_3 + 0x13d0);
  local_98 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xde,*param_3 + 0x13d4);
  local_98 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe4,*param_3 + 0x13d8);
  local_98 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xea,*param_3 + 0x13dc);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_80);
  return;
}



// FUNCTION 141c07640 FUN_141c07640 body=529 status=ok
// SIG undefined FUN_141c07640(void)

void FUN_141c07640(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  lVar3 = *param_3;
  local_res8 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa9420(param_1,param_2,local_res8,*(undefined8 *)(lVar3 + 0x20));
  uVar6 = FUN_141a156e0();
  FUN_141caac70(param_1 + 0xc0,&local_res8,param_3,param_2,uVar6,0,0);
  uVar4 = local_res8;
  uVar1 = *(ushort *)(param_1 + 0x1c8);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
  }
  uVar5 = local_res8;
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e40;
  puVar8[4] = param_5;
  puVar8[2] = uVar4;
  *(uint *)(puVar8 + 3) = (uint)uVar1;
  if (*(short *)(param_1 + 0x1be) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1bc);
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
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[4] = param_6;
    puVar8[2] = uVar5;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  local_38 = *(undefined4 *)(lVar3 + 0x146c);
  local_34 = 0;
  local_2c = 1.0 / (float)param_4[1];
  local_30 = 1.0 / (float)*param_4;
  FUN_141a120e0(param_2,local_res8,param_1 + 0x1c0,&local_38,uVar6 & 0xffffffff00000000);
  return;
}



// FUNCTION 141c07860 FUN_141c07860 body=573 status=ok
// SIG undefined FUN_141c07860(void)

void FUN_141c07860(longlong param_1,longlong param_2,int *param_3,int *param_4,undefined4 param_5)

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
  bool bVar9;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_48 = (float)(param_3[3] - *param_3) * (1.0 / (float)*param_4);
  local_40 = (float)*param_3 * (1.0 / (float)*param_4);
  local_44 = (float)(param_3[4] - param_3[1]) * (1.0 / (float)param_4[1]);
  local_3c = (float)param_3[1] * (1.0 / (float)param_4[1]);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar3 + 0x38),param_1 + 0xc0,&local_48,0);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  uVar5 = (uint)*(ushort *)(param_1 + 0xca);
  if (3 < *(ushort *)(param_1 + 0xca)) {
    uVar5 = 4;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    uVar2 = *(ushort *)(param_1 + 0xc6);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,param_3 + 2,_Size);
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
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    puVar8[2] = uVar4;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  bVar9 = (char)param_5 == '\0';
  param_5 = DAT_1464c9c24;
  if (bVar9) {
    param_5 = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar3 + 0x38),param_1 + 0xcc,&param_5,0);
  return;
}



// FUNCTION 141c07aa0 FUN_141c07aa0 body=365 status=ok
// SIG undefined FUN_141c07aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141c07aa0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar2;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar2 * 8) == &DAT_146b096e0) {
        if (iVar6 != -1) {
          puVar5 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar5 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141c07b26;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x10));
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
  puVar5 = (undefined4 *)&DAT_146a0e8b0;
LAB_141c07b26:
  if (*(char *)((longlong)puVar5 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar5 + 1);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar4;
    *(undefined8 **)(param_2 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_144dcb388;
    puVar4[2] = param_3;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = param_4;
  }
  return;
}



// FUNCTION 141c07c10 FUN_141c07c10 body=632 status=ok
// SIG undefined FUN_141c07c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c07c10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_110 = &DAT_146a51f90;
  local_108 = 0;
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
  local_110 = &DAT_146a4d790;
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
  FUN_141c06cf0(lVar1,param_1[8],param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c07e90 FUN_141c07e90 body=632 status=ok
// SIG undefined FUN_141c07e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c07e90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_110 = &DAT_146a51f90;
  local_108 = 0;
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
  local_110 = &DAT_146a4d8e0;
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
  FUN_141c06cf0(lVar1,param_1[8],param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c08110 FUN_141c08110 body=632 status=ok
// SIG undefined FUN_141c08110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c08110(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_110 = &DAT_146a51f90;
  local_108 = 0;
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
  local_110 = &DAT_146a4da30;
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
  FUN_141c06cf0(lVar1,param_1[8],param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c08390 FUN_141c08390 body=632 status=ok
// SIG undefined FUN_141c08390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c08390(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_110 = &DAT_146a51f90;
  local_108 = 0;
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
  local_110 = &DAT_146a4db80;
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
  FUN_141c06f60(lVar1,param_1[8],param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c08610 FUN_141c08610 body=632 status=ok
// SIG undefined FUN_141c08610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c08610(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_110 = &DAT_146a51f90;
  local_108 = 0;
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
  local_110 = &DAT_146a4dcd0;
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
  FUN_141c06f60(lVar1,param_1[8],param_1);
  lVar1 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141c07aa0(lVar2,param_1[8],*(undefined8 *)(lVar1 + 0x38),uVar4);
  return;
}



// FUNCTION 141c08890 FUN_141c08890 body=1038 status=ok
// SIG undefined FUN_141c08890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c08890(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iStackX_1c;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  ulonglong local_160;
  ulonglong local_158 [2];
  undefined8 local_148;
  float local_140;
  float local_13c;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar7 = (longlong *)0x0;
  local_158[0] = local_158[0] & 0xffffffff00000000;
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
  local_e8 = FUN_141b33400();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  lVar1 = param_2[0xc];
  local_cc = local_cc & 0xffffffff00000000;
  local_148 = &DAT_146a4d4e0;
  local_140 = 0.0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_158,&local_148);
  plVar8 = plVar7;
  if ((int)local_158[0] != -1) {
    plVar8 = (longlong *)((longlong)(int)local_158[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_140 = 0.0;
  plVar6 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  local_148 = &DAT_146a4b9a0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_158,&local_148);
  plVar8 = plVar7;
  if ((int)local_158[0] != -1) {
    plVar8 = (longlong *)((longlong)(int)local_158[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  lVar1 = *plVar6;
  local_118 = DAT_1464c2758;
  if (lVar2 == 0) {
    local_148 = (undefined *)0x0;
    plVar8 = (longlong *)0x1;
    plStack_110 = plVar7;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar7;
  }
  uVar5 = 0;
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_148 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_f8 = uVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  FUN_141ed6ac0(param_2[8],&local_118,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_158[0] = *(ulonglong *)(lVar3 + 0x38);
  FUN_141c07aa0(lVar2,param_2[8],local_158[0],*(undefined8 *)(*param_2 + 0x20));
  local_168 = 0xf;
  FUN_141bf1700(lVar2 + 0x1d4,param_2[8],local_158,*(undefined4 *)(*param_2 + 0x1a38));
  uVar5 = FUN_141a156e0();
  local_160 = 0;
  local_168 = 0;
  FPostProcessPassParameters::SetVS(lVar2 + 0xc0,local_158,param_2,uVar5);
  local_148 = (undefined *)CONCAT44(param_5,param_5);
  uStack_130 = local_148;
  local_168 = 0;
  local_138 = param_4;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_158[0],lVar2 + 0x1bc,&local_138);
  iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
  local_140 = (float)(int)param_3;
  local_168 = 0;
  local_13c = (float)iStackX_1c;
  local_148 = (undefined *)CONCAT44(param_6,param_6);
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_158[0],lVar2 + 0x1c2,&local_148);
  local_168 = 0;
  local_148 = *(undefined **)(*param_2 + 0x175c);
  local_140 = 0.0;
  local_13c = 1.0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_158[0],lVar2 + 0x1ce,&local_148);
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0x3f80000000000000;
  FUN_141c16270(param_2,&local_138);
  local_160 = local_160 & 0xffffffff00000000;
  local_168 = 2;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2[8],local_158[0],lVar2 + 0x1c8,&local_138);
  FUN_141c2bb80(lVar1,param_2,param_6);
  return;
}



// FUNCTION 141c08ca0 FUN_141c08ca0 body=850 status=ok
// SIG undefined FUN_141c08ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c08ca0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  ulonglong local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar6 = (longlong *)0x0;
  local_138 = local_138 & 0xffffffff00000000;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_130 = &DAT_146a51f90;
  local_128 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_138,&local_130);
  plVar8 = plVar6;
  if ((int)local_138 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_128 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_130 = &DAT_146a4eb60;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_138,&local_130);
  plVar8 = plVar6;
  if ((int)local_138 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_138 = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_138 = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_2 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_2[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_138 = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_2[8],local_138,*(undefined8 *)(*param_2 + 0x20));
  local_158 = FUN_141c1cd20();
  local_148 = 0;
  local_150 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_2[8],&local_138,param_2);
  local_158._0_4_ = 0xf;
  FUN_141aa6fa0(lVar1 + 0x1bc,param_2[8],&local_138,*(undefined4 *)(*param_2 + 0x1a38));
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3f800000;
  FUN_141c16270(param_2,0);
  local_150 = 0;
  local_158._0_4_ = 2;
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2[8],local_138,lVar1 + 0x1cc,&local_118);
  GrainRandomFromFrame(&local_130,*(undefined4 *)(*(longlong *)(*param_2 + 0x10) + 0x5c));
  local_158 = (ulonglong)local_158._4_4_ << 0x20;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2[8],local_138,lVar1 + 0x1d2,&local_130);
  return lVar2;
}



// FUNCTION 141c09000 FUN_141c09000 body=1033 status=ok
// SIG undefined FUN_141c09000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c09000(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined4 local_140;
  undefined8 local_138;
  ulonglong local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
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
  local_128[0] = local_128[0] & 0xffffffff00000000;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_118 = &DAT_146a51f90;
  uStack_110._0_4_ = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_128,&local_118);
  plVar9 = plVar6;
  if ((int)local_128[0] != -1) {
    plVar9 = (longlong *)((longlong)(int)local_128[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
  plVar8 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  local_118 = &DAT_146a4ef60;
  lVar2 = *plVar8;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_128,&local_118);
  plVar9 = plVar6;
  if ((int)local_128[0] != -1) {
    plVar9 = (longlong *)((longlong)(int)local_128[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar8 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  lVar1 = *plVar8;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128[0] = 0;
    plVar9 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar9 = plVar6;
  }
  if (plVar9 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
  }
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_2 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_2[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  lVar7 = FSceneRenderTargets::Get(param_2[8]);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_128[0] = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_2[8],local_128[0],*(undefined8 *)(*param_2 + 0x20));
  local_148 = CONCAT44(local_148._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_2[8],local_128,*(undefined4 *)(*param_2 + 0x1a38));
  local_148 = FUN_141a156e0();
  local_138 = 0;
  local_140 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_2[8],local_128,param_2);
  lVar3 = *param_2;
  local_148 = local_148 & 0xffffffff00000000;
  local_118 = (undefined *)
              CONCAT44(((float)(int)(*(int *)(lVar3 + 0x1aa4) + 1U & 0xfffffffe) + 3.0) /
                       (float)(int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20),
                       ((float)(int)(*(int *)(lVar3 + 0x1aa0) + 1U & 0xfffffffe) + 3.0) /
                       (float)*(int *)(lVar7 + 0x378));
  uStack_110 = CONCAT44(((float)(int)(*(uint *)(lVar3 + 0x1aac) & 0xfffffffe) - 3.0) /
                        (float)(int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20),
                        ((float)(int)(*(uint *)(lVar3 + 0x1aa8) & 0xfffffffe) - 3.0) /
                        (float)*(int *)(lVar7 + 0x378));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_128[0],lVar1 + 0x1cc,&local_118);
  GrainRandomFromFrame(local_108,*(undefined4 *)(*(longlong *)(*param_2 + 0x10) + 0x5c));
  local_148 = local_148 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2[8],local_128[0],lVar1 + 0x1d2,local_108);
  return lVar2;
}



// FUNCTION 141c09410 FUN_141c09410 body=850 status=ok
// SIG undefined FUN_141c09410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c09410(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  ulonglong local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar6 = (longlong *)0x0;
  local_138 = local_138 & 0xffffffff00000000;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_130 = &DAT_146a51f90;
  local_128 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_138,&local_130);
  plVar8 = plVar6;
  if ((int)local_138 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_128 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_130 = &DAT_146a4ecb0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_138,&local_130);
  plVar8 = plVar6;
  if ((int)local_138 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_138 = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_138 = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_2 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_2[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_138 = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_2[8],local_138,*(undefined8 *)(*param_2 + 0x20));
  local_158 = FUN_141c1cd20();
  local_148 = 0;
  local_150 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_2[8],&local_138,param_2);
  local_158._0_4_ = 0xf;
  FUN_141aa6fa0(lVar1 + 0x1bc,param_2[8],&local_138,*(undefined4 *)(*param_2 + 0x1a38));
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3f800000;
  FUN_141c16270(param_2,0);
  local_150 = 0;
  local_158._0_4_ = 2;
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2[8],local_138,lVar1 + 0x1cc,&local_118);
  GrainRandomFromFrame(&local_130,*(undefined4 *)(*(longlong *)(*param_2 + 0x10) + 0x5c));
  local_158 = (ulonglong)local_158._4_4_ << 0x20;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2[8],local_138,lVar1 + 0x1d2,&local_130);
  return lVar2;
}



// FUNCTION 141c09770 FUN_141c09770 body=1038 status=ok
// SIG undefined FUN_141c09770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c09770(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iStackX_1c;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  ulonglong local_160;
  ulonglong local_158 [2];
  undefined8 local_148;
  float local_140;
  float local_13c;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar7 = (longlong *)0x0;
  local_158[0] = local_158[0] & 0xffffffff00000000;
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
  local_e8 = FUN_141b33400();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  lVar1 = param_2[0xc];
  local_cc = local_cc & 0xffffffff00000000;
  local_148 = &DAT_146a4d390;
  local_140 = 0.0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_158,&local_148);
  plVar8 = plVar7;
  if ((int)local_158[0] != -1) {
    plVar8 = (longlong *)((longlong)(int)local_158[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_140 = 0.0;
  plVar6 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  local_148 = &DAT_146a4b9a0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_158,&local_148);
  plVar8 = plVar7;
  if ((int)local_158[0] != -1) {
    plVar8 = (longlong *)((longlong)(int)local_158[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  lVar1 = *plVar6;
  local_118 = DAT_1464c2758;
  if (lVar2 == 0) {
    local_148 = (undefined *)0x0;
    plVar8 = (longlong *)0x1;
    plStack_110 = plVar7;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_110 = *(longlong **)(lVar3 + 0x38);
    plVar8 = plVar7;
  }
  uVar5 = 0;
  if (plVar8 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_148 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_f8 = uVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  FUN_141ed6ac0(param_2[8],&local_118,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_158[0] = *(ulonglong *)(lVar3 + 0x38);
  FUN_141c07aa0(lVar2,param_2[8],local_158[0],*(undefined8 *)(*param_2 + 0x20));
  local_168 = 0xf;
  FUN_141bf1700(lVar2 + 0x1d4,param_2[8],local_158,*(undefined4 *)(*param_2 + 0x1a38));
  uVar5 = FUN_141a156e0();
  local_160 = 0;
  local_168 = 0;
  FPostProcessPassParameters::SetVS(lVar2 + 0xc0,local_158,param_2,uVar5);
  local_148 = (undefined *)CONCAT44(param_5,param_5);
  uStack_130 = local_148;
  local_168 = 0;
  local_138 = param_4;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_158[0],lVar2 + 0x1bc,&local_138);
  iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
  local_140 = (float)(int)param_3;
  local_168 = 0;
  local_13c = (float)iStackX_1c;
  local_148 = (undefined *)CONCAT44(param_6,param_6);
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_158[0],lVar2 + 0x1c2,&local_148);
  local_168 = 0;
  local_148 = *(undefined **)(*param_2 + 0x175c);
  local_140 = 0.0;
  local_13c = 1.0;
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2[8],local_158[0],lVar2 + 0x1ce,&local_148);
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0x3f80000000000000;
  FUN_141c16270(param_2,&local_138);
  local_160 = local_160 & 0xffffffff00000000;
  local_168 = 2;
  SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
            (param_2[8],local_158[0],lVar2 + 0x1c8,&local_138);
  FUN_141c2bb80(lVar1,param_2,param_6);
  return;
}



// FUNCTION 141c09b80 FUN_141c09b80 body=850 status=ok
// SIG undefined FUN_141c09b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c09b80(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  ulonglong local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar6 = (longlong *)0x0;
  local_138 = local_138 & 0xffffffff00000000;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_130 = &DAT_146a51f90;
  local_128 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_138,&local_130);
  plVar8 = plVar6;
  if ((int)local_138 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_128 = 0;
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_130 = &DAT_146a4ea10;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_138,&local_130);
  plVar8 = plVar6;
  if ((int)local_138 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar6;
  }
  lVar1 = *plVar7;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_138 = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_138 = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_2 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_2[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_138 = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_2[8],local_138,*(undefined8 *)(*param_2 + 0x20));
  local_158 = FUN_141c1cd20();
  local_148 = 0;
  local_150 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_2[8],&local_138,param_2);
  local_158._0_4_ = 0xf;
  FUN_141aa6fa0(lVar1 + 0x1bc,param_2[8],&local_138,*(undefined4 *)(*param_2 + 0x1a38));
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3f800000;
  FUN_141c16270(param_2,0);
  local_150 = 0;
  local_158._0_4_ = 2;
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2[8],local_138,lVar1 + 0x1cc,&local_118);
  GrainRandomFromFrame(&local_130,*(undefined4 *)(*(longlong *)(*param_2 + 0x10) + 0x5c));
  local_158 = (ulonglong)local_158._4_4_ << 0x20;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2[8],local_138,lVar1 + 0x1d2,&local_130);
  return lVar2;
}



// FUNCTION 141c09ee0 FUN_141c09ee0 body=1033 status=ok
// SIG undefined FUN_141c09ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141c09ee0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined4 local_140;
  undefined8 local_138;
  ulonglong local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
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
  local_128[0] = local_128[0] & 0xffffffff00000000;
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
  local_ac = local_ac & 0xffffffff00000000;
  local_118 = &DAT_146a51f90;
  uStack_110._0_4_ = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_128,&local_118);
  plVar9 = plVar6;
  if ((int)local_128[0] != -1) {
    plVar9 = (longlong *)((longlong)(int)local_128[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
  plVar8 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  local_118 = &DAT_146a4ee10;
  lVar2 = *plVar8;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_128,&local_118);
  plVar9 = plVar6;
  if ((int)local_128[0] != -1) {
    plVar9 = (longlong *)((longlong)(int)local_128[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar8 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  lVar1 = *plVar8;
  local_f8 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128[0] = 0;
    plVar9 = (longlong *)0x1;
    plStack_f0 = plVar6;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar9 = plVar6;
  }
  if (plVar9 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_128[0] = 0;
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
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
  }
  FUN_141ed6ac0(param_2[8],&local_f8,2,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(*param_2 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141c07aa0(lVar2,param_2[8],*(undefined8 *)(lVar3 + 0x38),uVar4);
  lVar7 = FSceneRenderTargets::Get(param_2[8]);
  lVar3 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_128[0] = *(ulonglong *)(lVar3 + 0x40);
  FUN_141aa9690(lVar1,param_2[8],local_128[0],*(undefined8 *)(*param_2 + 0x20));
  local_148 = CONCAT44(local_148._4_4_,0xf);
  FUN_141aa6fa0(lVar1 + 0x1bc,param_2[8],local_128,*(undefined4 *)(*param_2 + 0x1a38));
  local_148 = FUN_141a156e0();
  local_138 = 0;
  local_140 = 0;
  thunk_FUN_141ca99a0(lVar1 + 0xc0,param_2[8],local_128,param_2);
  lVar3 = *param_2;
  local_148 = local_148 & 0xffffffff00000000;
  local_118 = (undefined *)
              CONCAT44(((float)(int)(*(int *)(lVar3 + 0x1aa4) + 1U & 0xfffffffe) + 3.0) /
                       (float)(int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20),
                       ((float)(int)(*(int *)(lVar3 + 0x1aa0) + 1U & 0xfffffffe) + 3.0) /
                       (float)*(int *)(lVar7 + 0x378));
  uStack_110 = CONCAT44(((float)(int)(*(uint *)(lVar3 + 0x1aac) & 0xfffffffe) - 3.0) /
                        (float)(int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20),
                        ((float)(int)(*(uint *)(lVar3 + 0x1aa8) & 0xfffffffe) - 3.0) /
                        (float)*(int *)(lVar7 + 0x378));
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2[8],local_128[0],lVar1 + 0x1cc,&local_118);
  GrainRandomFromFrame(local_108,*(undefined4 *)(*(longlong *)(*param_2 + 0x10) + 0x5c));
  local_148 = local_148 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2[8],local_128[0],lVar1 + 0x1d2,local_108);
  return lVar2;
}



// FUNCTION 141c0a2f0 FUN_141c0a2f0 body=598 status=ok
// SIG undefined FUN_141c0a2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c0a2f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_e8 = (longlong *)0x0;
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
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(0,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_118 = 0;
  local_120 = &DAT_146a4add0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_120 = &DAT_146a4cba0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar7 = (longlong *)0x1;
    plStack_100 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  FUN_141c064b0(lVar1,param_1,param_2);
  FUN_141c2b250(lVar2,param_2);
  return;
}



// FUNCTION 141c0a550 FUN_141c0a550 body=598 status=ok
// SIG undefined FUN_141c0a550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c0a550(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_e8 = (longlong *)0x0;
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
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(0,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_118 = 0;
  local_120 = &DAT_146a4add0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_120 = &DAT_146a4ccf0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar7 = (longlong *)0x1;
    plStack_100 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  FUN_141c064b0(lVar1,param_1,param_2);
  FUN_141c2b250(lVar2,param_2);
  return;
}



// FUNCTION 141c0a7b0 FUN_141c0a7b0 body=598 status=ok
// SIG undefined FUN_141c0a7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c0a7b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_e8 = (longlong *)0x0;
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
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(0,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_118 = 0;
  local_120 = &DAT_146a4add0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_120 = &DAT_146a4ce40;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar7 = (longlong *)0x1;
    plStack_100 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  FUN_141c064b0(lVar1,param_1,param_2);
  FUN_141c2b250(lVar2,param_2);
  return;
}



// FUNCTION 141c0aa10 FUN_141c0aa10 body=598 status=ok
// SIG undefined FUN_141c0aa10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c0aa10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_e8 = (longlong *)0x0;
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
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(0,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_118 = 0;
  local_120 = &DAT_146a4add0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_120 = &DAT_146a4cf90;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar7 = (longlong *)0x1;
    plStack_100 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  FUN_141c064b0(lVar1,param_1,param_2);
  FUN_141c2b250(lVar2,param_2);
  return;
}



// FUNCTION 141c0ac70 FUN_141c0ac70 body=598 status=ok
// SIG undefined FUN_141c0ac70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c0ac70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_e8 = (longlong *)0x0;
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
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(0,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_118 = 0;
  local_120 = &DAT_146a4add0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_120 = &DAT_146a4d0e0;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar7 = (longlong *)0x1;
    plStack_100 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  FUN_141c064b0(lVar1,param_1,param_2);
  FUN_141c2b250(lVar2,param_2);
  return;
}



// FUNCTION 141c0aed0 FUN_141c0aed0 body=598 status=ok
// SIG undefined FUN_141c0aed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141c0aed0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar5 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_70 = 0;
  local_5c = 0;
  local_e8 = (longlong *)0x0;
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
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  FUN_14049afe0(0,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_118 = 0;
  local_120 = &DAT_146a4add0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_118 = 0;
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  local_120 = &DAT_146a4d230;
  lVar2 = *plVar6;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_128,&local_120);
  plVar7 = plVar5;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  lVar1 = *plVar6;
  local_108 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_128 = 0;
    plVar7 = (longlong *)0x1;
    plStack_100 = plVar5;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_100 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar4 = false;
  if (lVar1 == 0) {
    bVar4 = true;
    local_128 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar5 = *(longlong **)(lVar3 + 0x40);
  }
  local_e8 = plVar5;
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  FUN_141c064b0(lVar1,param_1,param_2);
  FUN_141c2b250(lVar2,param_2);
  return;
}



// FUNCTION 141c0b130 FUN_141c0b130 body=308 status=ok
// SIG undefined FUN_141c0b130(void)

void FUN_141c0b130(longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (3 < (int)uVar6) {
    uVar6 = 4;
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



// FUNCTION 141c0b270 SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>(void)

void SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (0xb < (int)uVar6) {
    uVar6 = 0xc;
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



// FUNCTION 141c0b3b0 SetShaderValueArray<FRHIPixelShader_*,FMatrix,FRHICommandList> body=310 status=ok
// SIG undefined SetShaderValueArray<FRHIPixelShader_*,FMatrix,FRHICommandList>(void)

void SetShaderValueArray<FRHIPixelShader_*,FMatrix,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5,
               int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_6 * -0x40;
  if (param_5 << 6 <= (int)uVar6) {
    uVar6 = param_5 << 6;
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
    *puVar5 = &PTR_LAB_143f594b0;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_6 * 0x40;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141c0b4f0 SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate> body=310 status=ok
// SIG undefined SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>(void)

void SetShaderValueArray<FRHIVertexShader_*,FVector4,FRHICommandListImmediate>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5,
               int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_6 * -0x10;
  if (param_5 << 4 <= (int)uVar6) {
    uVar6 = param_5 << 4;
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
    *puVar5 = &PTR_LAB_143f4d340;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_6 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141c0b630 SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate> body=298 status=ok
// SIG undefined SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>(void)

void FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
               (ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
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
    *puVar3 = &PTR_LAB_144dc9cd0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = param_5;
    puVar3[2] = param_3;
  }
  if ((param_1[3] == 0) && (param_1[1] != 0)) {
    uVar1 = *param_1;
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
    *puVar3 = &PTR_LAB_144dc9ca0;
    puVar3[2] = param_3;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141c0b760 UnsetUAV<FRHICommandList> body=187 status=ok
// SIG undefined UnsetUAV<FRHICommandList>(void)

void FRWShaderParameter::UnsetUAV<FRHICommandList>
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(short *)(param_1 + 6) != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
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
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144dc9cd0;
    puVar3[2] = param_3;
    puVar3[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  return;
}



// FUNCTION 141c0b820 WaitForInputPassComputeFences<FRHICommandListImmediate> body=267 status=ok
// SIG undefined WaitForInputPassComputeFences<FRHICommandListImmediate>(void)

void TRenderingCompositePassBase<2,1>::WaitForInputPassComputeFences<FRHICommandListImmediate>
               (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  
  for (plVar7 = (longlong *)(param_1 + 0x10); plVar7 != (longlong *)(param_1 + 0x30);
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



// FUNCTION 141c0b930 WaitForInputPassComputeFences<FRHICommandListImmediate> body=267 status=ok
// SIG undefined WaitForInputPassComputeFences<FRHICommandListImmediate>(void)

void TRenderingCompositePassBase<3,1>::WaitForInputPassComputeFences<FRHICommandListImmediate>
               (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  
  for (plVar7 = (longlong *)(param_1 + 0x10); plVar7 != (longlong *)(param_1 + 0x40);
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



// FUNCTION 141c0ba40 FUN_141c0ba40 body=1791 status=ok
// SIG undefined FUN_141c0ba40(void)

undefined8 * FUN_141c0ba40(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  FShaderParameter::Bind(param_1 + 8,param_2,L"MappingPolynomial",0);
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xae) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x152) = 0;
  FShaderParameter::Bind(param_1 + 5,param_2,L"LUTWeights",0);
  FShaderParameter::Bind((longlong)param_1 + 0x2e,param_2,L"ColorScale",0);
  FShaderParameter::Bind((longlong)param_1 + 0x34,param_2,L"OverlayColor",0);
  FShaderParameter::Bind((longlong)param_1 + 0x3a,param_2,L"InverseGamma",0);
  FShaderParameter::Bind((longlong)param_1 + 0x46,param_2,L"WhiteTemp",0);
  FShaderParameter::Bind((longlong)param_1 + 0x4c,param_2,L"WhiteTint",0);
  FShaderParameter::Bind((longlong)param_1 + 0x52,param_2,L"ColorSaturation",0);
  FShaderParameter::Bind(param_1 + 0xb,param_2,L"ColorContrast",0);
  FShaderParameter::Bind((longlong)param_1 + 0x5e,param_2,L"ColorGamma",0);
  FShaderParameter::Bind((longlong)param_1 + 100,param_2,L"ColorGain",0);
  FShaderParameter::Bind((longlong)param_1 + 0x6a,param_2,L"ColorOffset",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"ColorSaturationShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x76,param_2,L"ColorContrastShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x7c,param_2,L"ColorGammaShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x82,param_2,L"ColorGainShadows",0);
  FShaderParameter::Bind(param_1 + 0x11,param_2,L"ColorOffsetShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x8e,param_2,L"ColorSaturationMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0x94,param_2,L"ColorContrastMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0x9a,param_2,L"ColorGammaMidtones",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"ColorGainMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0xa6,param_2,L"ColorOffsetMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0xac,param_2,L"ColorSaturationHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xb2,param_2,L"ColorContrastHighlights",0);
  FShaderParameter::Bind(param_1 + 0x17,param_2,L"ColorGammaHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xbe,param_2,L"ColorGainHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xc4,param_2,L"ColorOffsetHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xca,param_2,L"ColorCorrectionShadowsMax",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"ColorCorrectionHighlightsMin",0);
  FShaderParameter::Bind((longlong)param_1 + 0xd6,param_2,L"BlueCorrection",0);
  FShaderParameter::Bind((longlong)param_1 + 0xdc,param_2,L"ExpandGamut",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe2,param_2,L"FilmSlope",0);
  FShaderParameter::Bind(param_1 + 0x1d,param_2,L"FilmToe",0);
  FShaderParameter::Bind((longlong)param_1 + 0xee,param_2,L"FilmShoulder",0);
  FShaderParameter::Bind((longlong)param_1 + 0xf4,param_2,L"FilmBlackClip",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfa,param_2,L"FilmWhiteClip",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"OutputDevice",0);
  FShaderParameter::Bind((longlong)param_1 + 0x106,param_2,L"OutputGamut",0);
  FShaderParameter::Bind((longlong)param_1 + 0x124,param_2,L"ColorMatrixR_ColorCurveCd1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x12a,param_2,L"ColorMatrixG_ColorCurveCd3Cm3",0);
  FShaderParameter::Bind(param_1 + 0x26,param_2,L"ColorMatrixB_ColorCurveCm2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x136,param_2,L"ColorCurve_Cm0Cd0_Cd2_Ch0Cm1_Ch3",0);
  FShaderParameter::Bind((longlong)param_1 + 0x13c,param_2,L"ColorCurve_Ch1_Ch2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x142,param_2,L"ColorShadow_Luma",0);
  FShaderParameter::Bind(param_1 + 0x29,param_2,L"ColorShadow_Tint1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x14e,param_2,L"ColorShadow_Tint2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x112,param_2,L"MaxGameNits",0);
  FShaderParameter::Bind(param_1 + 0x23,param_2,L"MaxTvNits",0);
  FShaderParameter::Bind((longlong)param_1 + 0x10c,param_2,L"CalibrateTonemapper",0);
  FShaderParameter::Bind((longlong)param_1 + 0x11e,param_2,L"IsPhotoMode",0);
  return param_1;
}



// FUNCTION 141c0c140 FKrakenClientData body=257 status=ok
// SIG undefined FKrakenClientData(void)

undefined8 * FKrakenClientData::FKrakenClientData(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
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
  *(undefined4 *)(param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 141c0c250 FUN_141c0c250 body=1814 status=ok
// SIG undefined FUN_141c0c250(void)

undefined8 * FUN_141c0c250(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  FShaderParameter::Bind(param_1 + 8,param_2,L"MappingPolynomial");
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xae) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x152) = 0;
  FString::PrintfImpl(&local_38,L"Texture%d",1);
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  FShaderResourceParameter::Bind((longlong)param_1 + 4,param_2,puVar2);
  puVar3 = local_38;
  local_48 = (undefined2 *)0x0;
  local_40 = local_30;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_48,(8 - (uint)(local_30 != 0)) + local_30,0);
  puVar2 = local_48;
  _guard_xfg_dispatch_icall_nop(local_48,puVar3,(longlong)local_30 * 2);
  iVar1 = local_40;
  lVar4 = (longlong)local_40;
  local_40 = (8 - (uint)(local_40 != 0)) + local_40;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
    puVar2 = local_48;
  }
  lVar4 = lVar4 - (ulonglong)(iVar1 != 0);
  builtin_wcsncpy(puVar2 + lVar4,L"Samp",4);
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = puVar2;
  }
  builtin_wcsncpy(puVar2 + lVar4 + 4,L"ler",4);
  FShaderResourceParameter::Bind(param_1 + 3,param_2,puVar3);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FShaderParameter::Bind(param_1 + 5,param_2,L"LUTWeights",0);
  FShaderParameter::Bind((longlong)param_1 + 0x2e,param_2,L"ColorScale",0);
  FShaderParameter::Bind((longlong)param_1 + 0x34,param_2,L"OverlayColor",0);
  FShaderParameter::Bind((longlong)param_1 + 0x3a,param_2,L"InverseGamma",0);
  FShaderParameter::Bind((longlong)param_1 + 0x46,param_2,L"WhiteTemp",0);
  FShaderParameter::Bind((longlong)param_1 + 0x4c,param_2,L"WhiteTint",0);
  FShaderParameter::Bind((longlong)param_1 + 0x52,param_2,L"ColorSaturation",0);
  FShaderParameter::Bind(param_1 + 0xb,param_2,L"ColorContrast",0);
  FShaderParameter::Bind((longlong)param_1 + 0x5e,param_2,L"ColorGamma",0);
  FShaderParameter::Bind((longlong)param_1 + 100,param_2,L"ColorGain",0);
  FShaderParameter::Bind((longlong)param_1 + 0x6a,param_2,L"ColorOffset",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"ColorSaturationShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x76,param_2,L"ColorContrastShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x7c,param_2,L"ColorGammaShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x82,param_2,L"ColorGainShadows",0);
  FShaderParameter::Bind(param_1 + 0x11,param_2,L"ColorOffsetShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x8e,param_2,L"ColorSaturationMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0x94,param_2,L"ColorContrastMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0x9a,param_2,L"ColorGammaMidtones",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"ColorGainMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0xa6,param_2,L"ColorOffsetMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0xac,param_2,L"ColorSaturationHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xb2,param_2,L"ColorContrastHighlights",0);
  FShaderParameter::Bind(param_1 + 0x17,param_2,L"ColorGammaHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xbe,param_2,L"ColorGainHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xc4,param_2,L"ColorOffsetHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xca,param_2,L"ColorCorrectionShadowsMax",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"ColorCorrectionHighlightsMin",0);
  FShaderParameter::Bind((longlong)param_1 + 0xd6,param_2,L"BlueCorrection",0);
  FShaderParameter::Bind((longlong)param_1 + 0xdc,param_2,L"ExpandGamut",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe2,param_2,L"FilmSlope",0);
  FShaderParameter::Bind(param_1 + 0x1d,param_2,L"FilmToe",0);
  FShaderParameter::Bind((longlong)param_1 + 0xee,param_2,L"FilmShoulder",0);
  FShaderParameter::Bind((longlong)param_1 + 0xf4,param_2,L"FilmBlackClip",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfa,param_2,L"FilmWhiteClip",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"OutputDevice",0);
  FShaderParameter::Bind((longlong)param_1 + 0x106,param_2,L"OutputGamut",0);
  FShaderParameter::Bind((longlong)param_1 + 0x124,param_2,L"ColorMatrixR_ColorCurveCd1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x12a,param_2,L"ColorMatrixG_ColorCurveCd3Cm3",0);
  FShaderParameter::Bind(param_1 + 0x26,param_2,L"ColorMatrixB_ColorCurveCm2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x136,param_2,L"ColorCurve_Cm0Cd0_Cd2_Ch0Cm1_Ch3",0);
  FShaderParameter::Bind((longlong)param_1 + 0x13c,param_2,L"ColorCurve_Ch1_Ch2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x142,param_2,L"ColorShadow_Luma",0);
  FShaderParameter::Bind(param_1 + 0x29,param_2,L"ColorShadow_Tint1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x14e,param_2,L"ColorShadow_Tint2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x112,param_2,L"MaxGameNits",0);
  FShaderParameter::Bind(param_1 + 0x23,param_2,L"MaxTvNits",0);
  FShaderParameter::Bind((longlong)param_1 + 0x10c,param_2,L"CalibrateTonemapper",0);
  FShaderParameter::Bind((longlong)param_1 + 0x11e,param_2,L"IsPhotoMode",0);
  return param_1;
}



// FUNCTION 141c0c970 FUN_141c0c970 body=1854 status=ok
// SIG undefined FUN_141c0c970(void)

undefined4 * FUN_141c0c970(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  
  puVar7 = param_1 + 1;
  *param_1 = 0;
  *(undefined2 *)puVar7 = 0;
  *(undefined8 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"MappingPolynomial",0);
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  uVar3 = 1;
  *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xae) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x152) = 0;
  do {
    FString::PrintfImpl(&local_38,L"Texture%d",uVar3);
    puVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    FShaderResourceParameter::Bind(puVar7,param_2,puVar5,0);
    puVar6 = local_38;
    lVar4 = (longlong)local_30;
    local_48 = (undefined2 *)0x0;
    local_40._0_4_ = local_30;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_48,(8 - (uint)(local_30 != 0)) + local_30,0);
    puVar5 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,puVar6,lVar4 * 2);
    iVar1 = (int)local_40;
    lVar4 = (longlong)(int)local_40;
    iVar2 = (8 - (uint)((int)local_40 != 0)) + (int)local_40;
    local_40 = CONCAT44(local_40._4_4_,iVar2);
    if (local_40._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
      puVar5 = local_48;
      iVar2 = (int)local_40;
    }
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    lVar4 = lVar4 - (ulonglong)(iVar1 != 0);
    builtin_wcsncpy(puVar5 + lVar4,L"Samp",4);
    puVar6 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar6 = puVar5;
    }
    builtin_wcsncpy(puVar5 + lVar4 + 4,L"ler",4);
    FShaderResourceParameter::Bind(puVar7 + 5,param_2,puVar6,0);
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar3 = uVar3 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar3 < 3);
  FShaderParameter::Bind(param_1 + 10,param_2,L"LUTWeights",0);
  FShaderParameter::Bind((longlong)param_1 + 0x2e,param_2,L"ColorScale",0);
  FShaderParameter::Bind(param_1 + 0xd,param_2,L"OverlayColor",0);
  FShaderParameter::Bind((longlong)param_1 + 0x3a,param_2,L"InverseGamma",0);
  FShaderParameter::Bind((longlong)param_1 + 0x46,param_2,L"WhiteTemp",0);
  FShaderParameter::Bind(param_1 + 0x13,param_2,L"WhiteTint",0);
  FShaderParameter::Bind((longlong)param_1 + 0x52,param_2,L"ColorSaturation",0);
  FShaderParameter::Bind(param_1 + 0x16,param_2,L"ColorContrast",0);
  FShaderParameter::Bind((longlong)param_1 + 0x5e,param_2,L"ColorGamma",0);
  FShaderParameter::Bind(param_1 + 0x19,param_2,L"ColorGain",0);
  FShaderParameter::Bind((longlong)param_1 + 0x6a,param_2,L"ColorOffset",0);
  FShaderParameter::Bind(param_1 + 0x1c,param_2,L"ColorSaturationShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x76,param_2,L"ColorContrastShadows",0);
  FShaderParameter::Bind(param_1 + 0x1f,param_2,L"ColorGammaShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x82,param_2,L"ColorGainShadows",0);
  FShaderParameter::Bind(param_1 + 0x22,param_2,L"ColorOffsetShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x8e,param_2,L"ColorSaturationMidtones",0);
  FShaderParameter::Bind(param_1 + 0x25,param_2,L"ColorContrastMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0x9a,param_2,L"ColorGammaMidtones",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"ColorGainMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0xa6,param_2,L"ColorOffsetMidtones",0);
  FShaderParameter::Bind(param_1 + 0x2b,param_2,L"ColorSaturationHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xb2,param_2,L"ColorContrastHighlights",0);
  FShaderParameter::Bind(param_1 + 0x2e,param_2,L"ColorGammaHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xbe,param_2,L"ColorGainHighlights",0);
  FShaderParameter::Bind(param_1 + 0x31,param_2,L"ColorOffsetHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xca,param_2,L"ColorCorrectionShadowsMax",0);
  FShaderParameter::Bind(param_1 + 0x34,param_2,L"ColorCorrectionHighlightsMin",0);
  FShaderParameter::Bind((longlong)param_1 + 0xd6,param_2,L"BlueCorrection",0);
  FShaderParameter::Bind(param_1 + 0x37,param_2,L"ExpandGamut",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe2,param_2,L"FilmSlope",0);
  FShaderParameter::Bind(param_1 + 0x3a,param_2,L"FilmToe",0);
  FShaderParameter::Bind((longlong)param_1 + 0xee,param_2,L"FilmShoulder",0);
  FShaderParameter::Bind(param_1 + 0x3d,param_2,L"FilmBlackClip",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfa,param_2,L"FilmWhiteClip",0);
  FShaderParameter::Bind(param_1 + 0x40,param_2,L"OutputDevice",0);
  FShaderParameter::Bind((longlong)param_1 + 0x106,param_2,L"OutputGamut",0);
  FShaderParameter::Bind(param_1 + 0x49,param_2,L"ColorMatrixR_ColorCurveCd1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x12a,param_2,L"ColorMatrixG_ColorCurveCd3Cm3",0);
  FShaderParameter::Bind(param_1 + 0x4c,param_2,L"ColorMatrixB_ColorCurveCm2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x136,param_2,L"ColorCurve_Cm0Cd0_Cd2_Ch0Cm1_Ch3",0);
  FShaderParameter::Bind(param_1 + 0x4f,param_2,L"ColorCurve_Ch1_Ch2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x142,param_2,L"ColorShadow_Luma",0);
  FShaderParameter::Bind(param_1 + 0x52,param_2,L"ColorShadow_Tint1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x14e,param_2,L"ColorShadow_Tint2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x112,param_2,L"MaxGameNits",0);
  FShaderParameter::Bind(param_1 + 0x46,param_2,L"MaxTvNits",0);
  FShaderParameter::Bind(param_1 + 0x43,param_2,L"CalibrateTonemapper",0);
  FShaderParameter::Bind((longlong)param_1 + 0x11e,param_2,L"IsPhotoMode",0);
  return param_1;
}



// FUNCTION 141c0d0b0 FUN_141c0d0b0 body=1854 status=ok
// SIG undefined FUN_141c0d0b0(void)

undefined4 * FUN_141c0d0b0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  
  puVar7 = param_1 + 1;
  *param_1 = 0;
  *(undefined2 *)puVar7 = 0;
  *(undefined8 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"MappingPolynomial",0);
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  uVar3 = 1;
  *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xae) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x152) = 0;
  do {
    FString::PrintfImpl(&local_38,L"Texture%d",uVar3);
    puVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    FShaderResourceParameter::Bind(puVar7,param_2,puVar5,0);
    puVar6 = local_38;
    lVar4 = (longlong)local_30;
    local_48 = (undefined2 *)0x0;
    local_40._0_4_ = local_30;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_48,(8 - (uint)(local_30 != 0)) + local_30,0);
    puVar5 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,puVar6,lVar4 * 2);
    iVar1 = (int)local_40;
    lVar4 = (longlong)(int)local_40;
    iVar2 = (8 - (uint)((int)local_40 != 0)) + (int)local_40;
    local_40 = CONCAT44(local_40._4_4_,iVar2);
    if (local_40._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
      puVar5 = local_48;
      iVar2 = (int)local_40;
    }
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    lVar4 = lVar4 - (ulonglong)(iVar1 != 0);
    builtin_wcsncpy(puVar5 + lVar4,L"Samp",4);
    puVar6 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar6 = puVar5;
    }
    builtin_wcsncpy(puVar5 + lVar4 + 4,L"ler",4);
    FShaderResourceParameter::Bind(puVar7 + 5,param_2,puVar6,0);
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar3 = uVar3 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar3 < 4);
  FShaderParameter::Bind(param_1 + 10,param_2,L"LUTWeights",0);
  FShaderParameter::Bind((longlong)param_1 + 0x2e,param_2,L"ColorScale",0);
  FShaderParameter::Bind(param_1 + 0xd,param_2,L"OverlayColor",0);
  FShaderParameter::Bind((longlong)param_1 + 0x3a,param_2,L"InverseGamma",0);
  FShaderParameter::Bind((longlong)param_1 + 0x46,param_2,L"WhiteTemp",0);
  FShaderParameter::Bind(param_1 + 0x13,param_2,L"WhiteTint",0);
  FShaderParameter::Bind((longlong)param_1 + 0x52,param_2,L"ColorSaturation",0);
  FShaderParameter::Bind(param_1 + 0x16,param_2,L"ColorContrast",0);
  FShaderParameter::Bind((longlong)param_1 + 0x5e,param_2,L"ColorGamma",0);
  FShaderParameter::Bind(param_1 + 0x19,param_2,L"ColorGain",0);
  FShaderParameter::Bind((longlong)param_1 + 0x6a,param_2,L"ColorOffset",0);
  FShaderParameter::Bind(param_1 + 0x1c,param_2,L"ColorSaturationShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x76,param_2,L"ColorContrastShadows",0);
  FShaderParameter::Bind(param_1 + 0x1f,param_2,L"ColorGammaShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x82,param_2,L"ColorGainShadows",0);
  FShaderParameter::Bind(param_1 + 0x22,param_2,L"ColorOffsetShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x8e,param_2,L"ColorSaturationMidtones",0);
  FShaderParameter::Bind(param_1 + 0x25,param_2,L"ColorContrastMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0x9a,param_2,L"ColorGammaMidtones",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"ColorGainMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0xa6,param_2,L"ColorOffsetMidtones",0);
  FShaderParameter::Bind(param_1 + 0x2b,param_2,L"ColorSaturationHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xb2,param_2,L"ColorContrastHighlights",0);
  FShaderParameter::Bind(param_1 + 0x2e,param_2,L"ColorGammaHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xbe,param_2,L"ColorGainHighlights",0);
  FShaderParameter::Bind(param_1 + 0x31,param_2,L"ColorOffsetHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xca,param_2,L"ColorCorrectionShadowsMax",0);
  FShaderParameter::Bind(param_1 + 0x34,param_2,L"ColorCorrectionHighlightsMin",0);
  FShaderParameter::Bind((longlong)param_1 + 0xd6,param_2,L"BlueCorrection",0);
  FShaderParameter::Bind(param_1 + 0x37,param_2,L"ExpandGamut",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe2,param_2,L"FilmSlope",0);
  FShaderParameter::Bind(param_1 + 0x3a,param_2,L"FilmToe",0);
  FShaderParameter::Bind((longlong)param_1 + 0xee,param_2,L"FilmShoulder",0);
  FShaderParameter::Bind(param_1 + 0x3d,param_2,L"FilmBlackClip",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfa,param_2,L"FilmWhiteClip",0);
  FShaderParameter::Bind(param_1 + 0x40,param_2,L"OutputDevice",0);
  FShaderParameter::Bind((longlong)param_1 + 0x106,param_2,L"OutputGamut",0);
  FShaderParameter::Bind(param_1 + 0x49,param_2,L"ColorMatrixR_ColorCurveCd1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x12a,param_2,L"ColorMatrixG_ColorCurveCd3Cm3",0);
  FShaderParameter::Bind(param_1 + 0x4c,param_2,L"ColorMatrixB_ColorCurveCm2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x136,param_2,L"ColorCurve_Cm0Cd0_Cd2_Ch0Cm1_Ch3",0);
  FShaderParameter::Bind(param_1 + 0x4f,param_2,L"ColorCurve_Ch1_Ch2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x142,param_2,L"ColorShadow_Luma",0);
  FShaderParameter::Bind(param_1 + 0x52,param_2,L"ColorShadow_Tint1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x14e,param_2,L"ColorShadow_Tint2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x112,param_2,L"MaxGameNits",0);
  FShaderParameter::Bind(param_1 + 0x46,param_2,L"MaxTvNits",0);
  FShaderParameter::Bind(param_1 + 0x43,param_2,L"CalibrateTonemapper",0);
  FShaderParameter::Bind((longlong)param_1 + 0x11e,param_2,L"IsPhotoMode",0);
  return param_1;
}



// FUNCTION 141c0d7f0 FUN_141c0d7f0 body=1854 status=ok
// SIG undefined FUN_141c0d7f0(void)

undefined4 * FUN_141c0d7f0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  
  puVar7 = param_1 + 1;
  *param_1 = 0;
  *(undefined2 *)puVar7 = 0;
  *(undefined8 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"MappingPolynomial",0);
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  uVar3 = 1;
  *(undefined8 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xae) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x146) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x152) = 0;
  do {
    FString::PrintfImpl(&local_38,L"Texture%d",uVar3);
    puVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    FShaderResourceParameter::Bind(puVar7,param_2,puVar5,0);
    puVar6 = local_38;
    lVar4 = (longlong)local_30;
    local_48 = (undefined2 *)0x0;
    local_40._0_4_ = local_30;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_48,(8 - (uint)(local_30 != 0)) + local_30,0);
    puVar5 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,puVar6,lVar4 * 2);
    iVar1 = (int)local_40;
    lVar4 = (longlong)(int)local_40;
    iVar2 = (8 - (uint)((int)local_40 != 0)) + (int)local_40;
    local_40 = CONCAT44(local_40._4_4_,iVar2);
    if (local_40._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
      puVar5 = local_48;
      iVar2 = (int)local_40;
    }
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    lVar4 = lVar4 - (ulonglong)(iVar1 != 0);
    builtin_wcsncpy(puVar5 + lVar4,L"Samp",4);
    puVar6 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar6 = puVar5;
    }
    builtin_wcsncpy(puVar5 + lVar4 + 4,L"ler",4);
    FShaderResourceParameter::Bind(puVar7 + 5,param_2,puVar6,0);
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar3 = uVar3 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar3 < 5);
  FShaderParameter::Bind(param_1 + 10,param_2,L"LUTWeights",0);
  FShaderParameter::Bind((longlong)param_1 + 0x2e,param_2,L"ColorScale",0);
  FShaderParameter::Bind(param_1 + 0xd,param_2,L"OverlayColor",0);
  FShaderParameter::Bind((longlong)param_1 + 0x3a,param_2,L"InverseGamma",0);
  FShaderParameter::Bind((longlong)param_1 + 0x46,param_2,L"WhiteTemp",0);
  FShaderParameter::Bind(param_1 + 0x13,param_2,L"WhiteTint",0);
  FShaderParameter::Bind((longlong)param_1 + 0x52,param_2,L"ColorSaturation",0);
  FShaderParameter::Bind(param_1 + 0x16,param_2,L"ColorContrast",0);
  FShaderParameter::Bind((longlong)param_1 + 0x5e,param_2,L"ColorGamma",0);
  FShaderParameter::Bind(param_1 + 0x19,param_2,L"ColorGain",0);
  FShaderParameter::Bind((longlong)param_1 + 0x6a,param_2,L"ColorOffset",0);
  FShaderParameter::Bind(param_1 + 0x1c,param_2,L"ColorSaturationShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x76,param_2,L"ColorContrastShadows",0);
  FShaderParameter::Bind(param_1 + 0x1f,param_2,L"ColorGammaShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x82,param_2,L"ColorGainShadows",0);
  FShaderParameter::Bind(param_1 + 0x22,param_2,L"ColorOffsetShadows",0);
  FShaderParameter::Bind((longlong)param_1 + 0x8e,param_2,L"ColorSaturationMidtones",0);
  FShaderParameter::Bind(param_1 + 0x25,param_2,L"ColorContrastMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0x9a,param_2,L"ColorGammaMidtones",0);
  FShaderParameter::Bind(param_1 + 0x28,param_2,L"ColorGainMidtones",0);
  FShaderParameter::Bind((longlong)param_1 + 0xa6,param_2,L"ColorOffsetMidtones",0);
  FShaderParameter::Bind(param_1 + 0x2b,param_2,L"ColorSaturationHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xb2,param_2,L"ColorContrastHighlights",0);
  FShaderParameter::Bind(param_1 + 0x2e,param_2,L"ColorGammaHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xbe,param_2,L"ColorGainHighlights",0);
  FShaderParameter::Bind(param_1 + 0x31,param_2,L"ColorOffsetHighlights",0);
  FShaderParameter::Bind((longlong)param_1 + 0xca,param_2,L"ColorCorrectionShadowsMax",0);
  FShaderParameter::Bind(param_1 + 0x34,param_2,L"ColorCorrectionHighlightsMin",0);
  FShaderParameter::Bind((longlong)param_1 + 0xd6,param_2,L"BlueCorrection",0);
  FShaderParameter::Bind(param_1 + 0x37,param_2,L"ExpandGamut",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe2,param_2,L"FilmSlope",0);
  FShaderParameter::Bind(param_1 + 0x3a,param_2,L"FilmToe",0);
  FShaderParameter::Bind((longlong)param_1 + 0xee,param_2,L"FilmShoulder",0);
  FShaderParameter::Bind(param_1 + 0x3d,param_2,L"FilmBlackClip",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfa,param_2,L"FilmWhiteClip",0);
  FShaderParameter::Bind(param_1 + 0x40,param_2,L"OutputDevice",0);
  FShaderParameter::Bind((longlong)param_1 + 0x106,param_2,L"OutputGamut",0);
  FShaderParameter::Bind(param_1 + 0x49,param_2,L"ColorMatrixR_ColorCurveCd1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x12a,param_2,L"ColorMatrixG_ColorCurveCd3Cm3",0);
  FShaderParameter::Bind(param_1 + 0x4c,param_2,L"ColorMatrixB_ColorCurveCm2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x136,param_2,L"ColorCurve_Cm0Cd0_Cd2_Ch0Cm1_Ch3",0);
  FShaderParameter::Bind(param_1 + 0x4f,param_2,L"ColorCurve_Ch1_Ch2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x142,param_2,L"ColorShadow_Luma",0);
  FShaderParameter::Bind(param_1 + 0x52,param_2,L"ColorShadow_Tint1",0);
  FShaderParameter::Bind((longlong)param_1 + 0x14e,param_2,L"ColorShadow_Tint2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x112,param_2,L"MaxGameNits",0);
  FShaderParameter::Bind(param_1 + 0x46,param_2,L"MaxTvNits",0);
  FShaderParameter::Bind(param_1 + 0x43,param_2,L"CalibrateTonemapper",0);
  FShaderParameter::Bind((longlong)param_1 + 0x11e,param_2,L"IsPhotoMode",0);
  return param_1;
}



// FUNCTION 141c0df30 FUN_141c0df30 body=1091 status=ok
// SIG undefined FUN_141c0df30(void)

longlong * FUN_141c0df30(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_68;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_res20 = 0;
  local_68 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_res20 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_68;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[3] = puVar9;
          puVar6[4] = 1;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_res20 = local_res20 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_68 = local_68 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 2);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c0e380 FUN_141c0e380 body=1091 status=ok
// SIG undefined FUN_141c0e380(void)

longlong * FUN_141c0e380(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_68;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  plVar12 = (longlong *)0x0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_res20 = 0;
  local_68 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_res20 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_68;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[3] = puVar9;
          puVar6[4] = 1;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_res20 = local_res20 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_68 = local_68 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 2);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c0e7d0 FUN_141c0e7d0 body=931 status=ok
// SIG undefined FUN_141c0e7d0(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_141c0e7d0(longlong *param_1,longlong param_2,longlong param_3,char *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong local_res8 [2];
  undefined *local_48;
  int local_40;
  
  lVar3 = *(longlong *)(param_3 + 0x60);
  plVar10 = (longlong *)0x0;
  local_48 = &DAT_146a4a860;
  local_40 = (uint)(*param_4 != '\0') + *(int *)(param_4 + 4) * 2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,local_res8,&local_48);
  plVar7 = plVar10;
  if ((int)local_res8[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_res8[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar12 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar12 = plVar10;
  }
  lVar3 = *plVar12;
  *param_1 = lVar3;
  lVar3 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  param_1[1] = *(longlong *)(lVar3 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res8[1] = 0;
  local_res8[0] = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8 + 1);
  lVar3 = param_1[1];
  lVar4 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar3);
  puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 3;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar6;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar8;
  *(undefined8 **)(lVar4 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  puVar8[2] = lVar3;
  if (*(short *)(*param_1 + 0x1be) != 0) {
    uVar2 = (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],0);
    lVar3 = FUN_141cf3cd0(uVar2,param_1[7]);
    param_1[8] = lVar3;
    plVar7 = plVar10;
    plVar12 = plVar10;
    do {
      if (*(short *)(*param_1 + 0x1be + (longlong)plVar10) != 0) {
        lVar3 = *(longlong *)(param_1[7] + 0x40);
        lVar4 = *(longlong *)(param_1[8] + 0x20);
        if (lVar4 == 0) {
          lVar4 = param_1[8] + 0x18;
        }
        plVar9 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        local_res8[0] = *(longlong *)(lVar4 + (longlong)plVar12 * 8);
        plVar5 = plVar9 + 1;
        if (*(longlong **)(lVar3 + 0x38) < plVar5) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
          plVar9 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar5 = plVar9 + 1;
        }
        *(longlong **)(lVar3 + 0x30) = plVar5;
        *plVar9 = local_res8[0];
        puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 6;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
          puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar8 + 6;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar6;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar8;
        *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar8 + 2) = 1;
        puVar8[3] = plVar9;
        puVar8[4] = 1;
        puVar8[5] = 0;
        lVar3 = *(longlong *)(param_1[8] + 0x20);
        if (lVar3 == 0) {
          lVar3 = param_1[8] + 0x18;
        }
        uVar1 = *(ushort *)(*param_1 + 0x1bc + (longlong)plVar12 * 4);
        local_res8[0] = param_1[1];
        uVar2 = *(undefined8 *)(lVar3 + (longlong)plVar12 * 8);
        lVar3 = *(longlong *)(param_1[7] + 0x40);
        puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
          puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar8 + 5;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar6;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar8;
        *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_144d91e40;
        puVar8[4] = uVar2;
        puVar8[2] = local_res8[0];
        *(uint *)(puVar8 + 3) = (uint)uVar1;
      }
      uVar11 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar11;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + 4);
    } while (uVar11 < 5);
  }
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c0eb80 FUN_141c0eb80 body=1076 status=ok
// SIG undefined FUN_141c0eb80(void)

longlong * FUN_141c0eb80(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_58;
  longlong local_50;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  plVar12 = (longlong *)0x0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_58 = 0;
  local_50 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_58 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_50;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[3] = puVar9;
          puVar6[4] = 1;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_58 = local_58 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_50 = local_50 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 2);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c0efc0 FUN_141c0efc0 body=1139 status=ok
// SIG undefined FUN_141c0efc0(void)

longlong * FUN_141c0efc0(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_68;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_res20 = 0;
  local_68 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_res20 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_68;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[3] = puVar9;
          puVar6[4] = 1;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_res20 = local_res20 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_68 = local_68 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 3);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c0f440 FUN_141c0f440 body=1107 status=ok
// SIG undefined FUN_141c0f440(void)

longlong * FUN_141c0f440(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_68;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_res20 = 0;
  local_68 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_res20 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_68;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[3] = puVar9;
          puVar6[4] = 1;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_res20 = local_res20 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_68 = local_68 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 2);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c0f8a0 FUN_141c0f8a0 body=931 status=ok
// SIG undefined FUN_141c0f8a0(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_141c0f8a0(longlong *param_1,longlong param_2,longlong param_3,int *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong local_res8 [2];
  undefined *local_48;
  int local_40;
  
  lVar3 = *(longlong *)(param_3 + 0x60);
  local_48 = &DAT_146a4ac50;
  local_40 = (param_4[2] * 3 + param_4[1]) * 5 + *param_4;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,local_res8,&local_48);
  plVar10 = (longlong *)0x0;
  plVar7 = plVar10;
  if ((int)local_res8[0] != -1) {
    plVar7 = (longlong *)((longlong)(int)local_res8[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar12 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar12 = plVar10;
  }
  lVar3 = *plVar12;
  *param_1 = lVar3;
  lVar3 = *(longlong *)(lVar3 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  param_1[1] = *(longlong *)(lVar3 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res8[1] = 0;
  local_res8[0] = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8 + 1);
  lVar3 = param_1[1];
  lVar4 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar3);
  puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 3;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar6;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar8;
  *(undefined8 **)(lVar4 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  puVar8[2] = lVar3;
  if (*(short *)(*param_1 + 0x1be) != 0) {
    uVar2 = (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],0);
    lVar3 = FUN_141cf3cd0(uVar2,param_1[7]);
    param_1[8] = lVar3;
    plVar7 = plVar10;
    plVar12 = plVar10;
    do {
      if (*(short *)(*param_1 + 0x1be + (longlong)plVar10) != 0) {
        lVar3 = *(longlong *)(param_1[7] + 0x40);
        lVar4 = *(longlong *)(param_1[8] + 0x20);
        if (lVar4 == 0) {
          lVar4 = param_1[8] + 0x18;
        }
        plVar9 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        local_res8[0] = *(longlong *)(lVar4 + (longlong)plVar12 * 8);
        plVar5 = plVar9 + 1;
        if (*(longlong **)(lVar3 + 0x38) < plVar5) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x10);
          plVar9 = (longlong *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar5 = plVar9 + 1;
        }
        *(longlong **)(lVar3 + 0x30) = plVar5;
        *plVar9 = local_res8[0];
        puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 6;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
          puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar8 + 6;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar6;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar8;
        *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar8 + 2) = 1;
        puVar8[3] = plVar9;
        puVar8[4] = 1;
        puVar8[5] = 0;
        lVar3 = *(longlong *)(param_1[8] + 0x20);
        if (lVar3 == 0) {
          lVar3 = param_1[8] + 0x18;
        }
        uVar1 = *(ushort *)(*param_1 + 0x1bc + (longlong)plVar12 * 4);
        local_res8[0] = param_1[1];
        uVar2 = *(undefined8 *)(lVar3 + (longlong)plVar12 * 8);
        lVar3 = *(longlong *)(param_1[7] + 0x40);
        puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 5;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
          puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar8 + 5;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar6;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar8;
        *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_144d91e40;
        puVar8[4] = uVar2;
        puVar8[2] = local_res8[0];
        *(uint *)(puVar8 + 3) = (uint)uVar1;
      }
      uVar11 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar11;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + 4);
    } while (uVar11 < 5);
  }
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c0fc50 FUN_141c0fc50 body=1120 status=ok
// SIG undefined FUN_141c0fc50(void)

longlong * FUN_141c0fc50(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_68;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_res20 = 0;
  local_68 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_res20 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_68;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[4] = 1;
          puVar6[3] = puVar9;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_res20 = local_res20 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_68 = local_68 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 2);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c100b0 FUN_141c100b0 body=1076 status=ok
// SIG undefined FUN_141c100b0(void)

longlong * FUN_141c100b0(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_58;
  longlong local_50;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  plVar12 = (longlong *)0x0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_58 = 0;
  local_50 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_58 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_50;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[3] = puVar9;
          puVar6[4] = 1;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_58 = local_58 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_50 = local_50 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 2);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c104f0 FUN_141c104f0 body=1075 status=ok
// SIG undefined FUN_141c104f0(void)

longlong * FUN_141c104f0(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_68;
  
  lVar4 = *(longlong *)(param_3 + 0x60);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_res8);
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if ((int)local_res8 != -1) {
    plVar8 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar2 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = plVar12;
  }
  lVar4 = *plVar2;
  *param_1 = lVar4;
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  param_1[1] = *(longlong *)(lVar4 + 0x60);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 8;
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 2) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5ca4;
  local_res10 = 0;
  local_res8 = 0;
  FUN_141a19150(*(undefined8 *)(param_1[7] + 0x40),0,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res10);
  lVar4 = param_1[1];
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  FRHIComputeShader::UpdateStats(lVar4);
  puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar7;
  plVar8 = param_1 + 8;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_res10 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar9;
  *(undefined8 **)(lVar11 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  puVar9[2] = lVar4;
  local_res20 = 0;
  local_68 = 0;
  do {
    iVar10 = (int)plVar12;
    if (*(short *)(local_res20 + 0x1be + *param_1) != 0) {
      local_res18 = plVar8;
      uVar3 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      lVar4 = FUN_141cf3cd0(uVar3,param_1[7]);
      uVar13 = 0;
      *plVar8 = lVar4;
      lVar4 = local_68;
      uVar15 = uVar13;
      do {
        if (*(short *)(*param_1 + 0x1be + lVar4) != 0) {
          lVar11 = *(longlong *)(param_1[7] + 0x40);
          lVar5 = *(longlong *)(*plVar8 + 0x20);
          if (lVar5 == 0) {
            lVar5 = *plVar8 + 0x18;
          }
          puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          uVar3 = *(undefined8 *)(lVar5 + uVar15 * 8);
          puVar7 = puVar9 + 1;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x10);
            puVar9 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 1;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *puVar9 = uVar3;
          puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar6 + 6;
          if (*(undefined8 **)(lVar11 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x38);
            puVar6 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar6 + 6;
          }
          *(undefined8 **)(lVar11 + 0x30) = puVar7;
          *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
          **(undefined8 **)(lVar11 + 8) = puVar6;
          *(undefined8 **)(lVar11 + 8) = puVar6 + 1;
          puVar6[1] = 0;
          *puVar6 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar6 + 2) = 1;
          puVar6[3] = puVar9;
          puVar6[4] = 1;
          puVar6[5] = 0;
          lVar11 = *(longlong *)(*plVar8 + 0x20);
          if (lVar11 == 0) {
            lVar11 = *plVar8 + 0x18;
          }
          uVar3 = *(undefined8 *)(lVar11 + uVar15 * 8);
          uVar1 = *(ushort *)(*param_1 + (local_res10 + uVar15) * 4);
          lVar11 = param_1[1];
          lVar5 = *(longlong *)(param_1[7] + 0x40);
          puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
          if (*(undefined8 **)(lVar5 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(lVar5 + 0x30,0x30);
            puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar9 + 5;
          }
          *(undefined8 **)(lVar5 + 0x30) = puVar7;
          *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
          **(undefined8 **)(lVar5 + 8) = puVar9;
          *(undefined8 **)(lVar5 + 8) = puVar9 + 1;
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_144d91e40;
          puVar9[4] = uVar3;
          puVar9[2] = lVar11;
          *(uint *)(puVar9 + 3) = (uint)uVar1;
          plVar8 = local_res18;
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        uVar15 = uVar15 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar14 < 5);
      iVar10 = (int)local_res8;
    }
    uVar14 = iVar10 + 1;
    plVar12 = (longlong *)(ulonglong)uVar14;
    plVar8 = plVar8 + 1;
    local_res20 = local_res20 + 0x14;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    local_68 = local_68 + 0x14;
    local_res10 = local_res10 + 5;
  } while ((int)uVar14 < 3);
  local_res18 = plVar8;
  FUN_141aa9420(*param_1,((longlong *)param_1[7])[8],param_1[1],
                *(undefined8 *)(*(longlong *)param_1[7] + 0x20));
  return param_1;
}



// FUNCTION 141c10930 FPostProcessAntiAliasingPS<1> body=423 status=ok
// SIG undefined FPostProcessAntiAliasingPS<1>(void)

undefined8 *
FPostProcessAntiAliasingPS<1>::FPostProcessAntiAliasingPS<1>(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e12828;
  FPostProcessPassParameters::FPostProcessPassParameters();
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  FPostProcessPassParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1bc,*(undefined8 *)(param_2 + 0x18),L"fxaaQualityRcpFrame",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1c2,*(undefined8 *)(param_2 + 0x18),L"fxaaConsoleRcpFrameOpt",0);
  FShaderParameter::Bind
            (param_1 + 0x39,*(undefined8 *)(param_2 + 0x18),L"fxaaConsoleRcpFrameOpt2",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1ce,*(undefined8 *)(param_2 + 0x18),L"fxaaQualitySubpix",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1d4,*(undefined8 *)(param_2 + 0x18),L"fxaaQualityEdgeThreshold",0
            );
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1da,*(undefined8 *)(param_2 + 0x18),
             L"fxaaQualityEdgeThresholdMin",0);
  FShaderParameter::Bind
            (param_1 + 0x3c,*(undefined8 *)(param_2 + 0x18),L"fxaaConsoleEdgeSharpness",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1e6,*(undefined8 *)(param_2 + 0x18),L"fxaaConsoleEdgeThreshold",0
            );
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1ec,*(undefined8 *)(param_2 + 0x18),
             L"fxaaConsoleEdgeThresholdMin",0);
  return param_1;
}



// FUNCTION 141c10ae0 FUN_141c10ae0 body=404 status=ok
// SIG undefined FUN_141c10ae0(void)

undefined8 * FUN_141c10ae0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e12170;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  FPostProcessPassParameters::FPostProcessPassParameters((longlong)param_1 + 0xce);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1da) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  FRWShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"OutComputeTex");
  FShaderParameter::Bind
            (param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"BokehDOFRecombineComputeParams",0);
  FPostProcessPassParameters::Bind((longlong)param_1 + 0xce,*(undefined8 *)(param_2 + 0x18));
  FUN_141cdf500(param_2,(undefined4 *)((longlong)param_1 + 0x1cc),(longlong)param_1 + 0x1d4);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1dc,*(undefined8 *)(param_2 + 0x18),L"DepthOfFieldParams",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1e2,*(undefined8 *)(param_2 + 0x18),
             L"SeparateTranslucencyResMult",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x3d,*(undefined8 *)(param_2 + 0x18),L"LowResDepthTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x1ec,*(undefined8 *)(param_2 + 0x18),L"BilinearClampedSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x3e,*(undefined8 *)(param_2 + 0x18),L"PointClampedSampler",0);
  return param_1;
}



// FUNCTION 141c10c80 FUN_141c10c80 body=325 status=ok
// SIG undefined FUN_141c10c80(void)

undefined8 * FUN_141c10c80(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e13328;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xce) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)((longlong)param_1 + 0x126) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12e) = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"KernelRadiusY",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),
             L"InvPrefilterRoughnessDistance",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"SceneColorInputTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"SceneColorInputSampler",0);
  FUN_141cdf500(param_2,param_1 + 0x24,param_1 + 0x25);
  FPlanarReflectionParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xd4),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141c10dd0 FPrefilterPlanarReflectionPS<1> body=163 status=ok
// SIG undefined FPrefilterPlanarReflectionPS<1>(void)

undefined8 * FPrefilterPlanarReflectionPS<1>::FPrefilterPlanarReflectionPS<1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e13328;
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
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)((longlong)param_1 + 0x126) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12e) = 0;
  return param_1;
}



// FUNCTION 141c10e80 TRenderingCompositePassBase<4,2> body=202 status=ok
// SIG undefined TRenderingCompositePassBase<4,2>(void)

undefined8 * TRenderingCompositePassBase<4,2>::TRenderingCompositePassBase<4,2>(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e13c10;
  param_1[2] = 0;
  puVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 3) = 0;
  lVar2 = 2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return param_1;
}



// FUNCTION 141c10f50 FUN_141c10f50 body=446 status=ok
// SIG undefined FUN_141c10f50(void)

undefined8 * FUN_141c10f50(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e121a0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xca) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xde) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xea) = 0;
  *(undefined2 *)((longlong)param_1 + 0xee) = 0;
  param_1[0x1e] = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"BrightnessValues",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"BrightnessTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"BrightnessSampler",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xc6,*(undefined8 *)(param_2 + 0x18),L"BrightnessCalibrationMode",0
            );
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xcc),*(undefined8 *)(param_2 + 0x18),
             L"DarknessCalibrationValue",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xd2),*(undefined8 *)(param_2 + 0x18),L"FilmSlope",0
            );
  FShaderParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"FilmToe",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xde),*(undefined8 *)(param_2 + 0x18),
             L"FilmShoulder",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xe4),*(undefined8 *)(param_2 + 0x18),
             L"FilmBlackClip",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xea),*(undefined8 *)(param_2 + 0x18),
             L"FilmWhiteClip",0);
  return param_1;
}



// FUNCTION 141c11110 FColorRemapShaderParameters body=41 status=ok
// SIG undefined FColorRemapShaderParameters(void)

undefined4 *
FColorRemapShaderParameters::FColorRemapShaderParameters(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  FShaderParameter::Bind(param_1,param_2,L"MappingPolynomial",0);
  return param_1;
}



// FUNCTION 141c11140 FUN_141c11140 body=638 status=ok
// SIG undefined FUN_141c11140(void)

undefined8 *
FUN_141c11140(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_141b279e0();
  (**(code **)(*param_4 + 0x178))(param_4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a4c110) {
    _Init_thread_header();
    if (DAT_146a4c110 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelines");
      lVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a4c108 = lVar5;
      _Init_thread_footer();
    }
  }
  lVar5 = DAT_146a4c108;
  if (DAT_146a4c108 != 0) {
    cVar1 = FUN_1415ad720();
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 == DAT_1468c21c0) goto LAB_141c111e6;
      lVar3 = 4;
    }
    else {
LAB_141c111e6:
      lVar3 = 0;
    }
    if (*(int *)(lVar3 + lVar5) != 0) {
      uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
      lVar5 = FUN_142594690(param_4,&DAT_146a49ab0,uVar4,1);
      goto LAB_141c11213;
    }
  }
  lVar5 = 0;
LAB_141c11213:
  param_1[7] = lVar5;
  if (lVar5 == 0) {
    uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    uVar4 = FUN_1425939a0(param_4,&DAT_146a49810,uVar4,1);
    param_1[8] = uVar4;
    uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
    lVar3 = FUN_1425939a0(param_4,&DAT_146a49960,uVar4,1);
  }
  else {
    lVar3 = *(longlong *)(lVar5 + 0x28);
    if (((((lVar3 == 0) || (*(undefined **)(lVar3 + 0x90) != &DAT_146a49810)) &&
         ((lVar3 = *(longlong *)(lVar5 + 8), lVar3 == 0 ||
          (*(undefined **)(lVar3 + 0x90) != &DAT_146a49810)))) &&
        ((lVar3 = *(longlong *)(lVar5 + 0x20), lVar3 == 0 ||
         (*(undefined **)(lVar3 + 0x90) != &DAT_146a49810)))) &&
       ((lVar3 = *(longlong *)(lVar5 + 0x10), lVar3 == 0 ||
        ((*(undefined **)(lVar3 + 0x90) != &DAT_146a49810 &&
         ((lVar3 = *(longlong *)(lVar5 + 0x18), lVar3 == 0 ||
          (*(undefined **)(lVar3 + 0x90) != &DAT_146a49810)))))))) {
      lVar3 = 0;
    }
    param_1[8] = lVar3;
    lVar3 = *(longlong *)(lVar5 + 0x28);
    if ((((lVar3 == 0) || (*(undefined **)(lVar3 + 0x90) != &DAT_146a49960)) &&
        ((lVar3 = *(longlong *)(lVar5 + 8), lVar3 == 0 ||
         (*(undefined **)(lVar3 + 0x90) != &DAT_146a49960)))) &&
       (((lVar3 = *(longlong *)(lVar5 + 0x20), lVar3 == 0 ||
         (*(undefined **)(lVar3 + 0x90) != &DAT_146a49960)) &&
        ((lVar3 = *(longlong *)(lVar5 + 0x10), lVar3 == 0 ||
         ((*(undefined **)(lVar3 + 0x90) != &DAT_146a49960 &&
          ((lVar3 = *(longlong *)(lVar5 + 0x18), lVar3 == 0 ||
           (*(undefined **)(lVar3 + 0x90) != &DAT_146a49960)))))))))) {
      lVar3 = 0;
    }
  }
  param_1[9] = lVar3;
  *param_1 = param_1[8];
  return param_1;
}



// FUNCTION 141c113c0 FUN_141c113c0 body=155 status=ok
// SIG undefined FUN_141c113c0(void)

undefined8 * FUN_141c113c0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e11ac0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x112) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11a) = 0;
  FUN_141cdf500(param_2);
  FPlanarReflectionParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141c11460 FPlanarReflectionPS body=143 status=ok
// SIG undefined FPlanarReflectionPS(void)

undefined8 * FPlanarReflectionPS::FPlanarReflectionPS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e11ac0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x112) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11a) = 0;
  return param_1;
}



// FUNCTION 141c114f0 FPostProcessDiaphragmDOFGatherCS body=346 status=ok
// SIG undefined FPostProcessDiaphragmDOFGatherCS(void)

undefined8 *
FPostProcessDiaphragmDOFGatherCS::FPostProcessDiaphragmDOFGatherCS
          (undefined8 *param_1,longlong param_2)

{
  `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e115e0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x206) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x216) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x226) = 0;
  FShaderParameter::Bind(param_1 + 0x3f,*(undefined8 *)(param_2 + 0x18),L"TemporalJitterPixels",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1fe,*(undefined8 *)(param_2 + 0x18),L"MipBias",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x204,*(undefined8 *)(param_2 + 0x18),
             L"DispatchThreadIdToInputBufferUV",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x20a,*(undefined8 *)(param_2 + 0x18),L"MaxRecombineAbsCocRadius",0
            );
  FShaderParameter::Bind
            (param_1 + 0x42,*(undefined8 *)(param_2 + 0x18),
             L"ConsiderCocRadiusAffineTransformation0",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x216,*(undefined8 *)(param_2 + 0x18),
             L"ConsiderCocRadiusAffineTransformation1",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x21c,*(undefined8 *)(param_2 + 0x18),
             L"ConsiderAbsCocRadiusAffineTransformation",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x222,*(undefined8 *)(param_2 + 0x18),L"InputBufferUVToOutputPixel"
             ,0);
  return param_1;
}



// FUNCTION 141c11650 FPostProcessDiaphragmDOFReduceCS body=366 status=ok
// SIG undefined FPostProcessDiaphragmDOFReduceCS(void)

undefined8 *
FPostProcessDiaphragmDOFReduceCS::FPostProcessDiaphragmDOFReduceCS
          (undefined8 *param_1,longlong param_2)

{
  `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e13628;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x206) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x216) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21e) = 0;
  FShaderParameter::Bind(param_1 + 0x3f,*(undefined8 *)(param_2 + 0x18),L"MaxInputBufferUV",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1fe,*(undefined8 *)(param_2 + 0x18),L"MaxScatteringGroupCount",0)
  ;
  FShaderParameter::Bind
            ((longlong)param_1 + 0x204,*(undefined8 *)(param_2 + 0x18),
             L"PreProcessingToProcessingCocRadiusFactor",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x20a,*(undefined8 *)(param_2 + 0x18),L"MinScatteringCocRadius",0);
  FShaderParameter::Bind
            (param_1 + 0x42,*(undefined8 *)(param_2 + 0x18),L"NeighborCompareMaxColor",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x216,*(undefined8 *)(param_2 + 0x18),
             L"OutScatterDrawIndirectParameters",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x21a,*(undefined8 *)(param_2 + 0x18),
             L"OutForegroundScatterDrawList",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x21e,*(undefined8 *)(param_2 + 0x18),
             L"OutBackgroundScatterDrawList",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x222,*(undefined8 *)(param_2 + 0x18),L"EyeAdaptation",0);
  return param_1;
}



// FUNCTION 141c117c0 FPostProcessDiaphragmDOFShader body=489 status=ok
// SIG undefined FPostProcessDiaphragmDOFShader(void)

undefined8 *
`anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
          (undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e12f70;
  FPostProcessPassParameters::FPostProcessPassParameters(param_1 + 0x18);
  puVar1 = (undefined8 *)((longlong)param_1 + 0x1bc);
  *puVar1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  FPostProcessPassParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind(puVar1,*(undefined8 *)(param_2 + 0x18),L"Output0",0);
  FShaderResourceParameter::Bind(param_1 + 0x3a,*(undefined8 *)(param_2 + 0x18),L"Output1",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x1e4,*(undefined8 *)(param_2 + 0x18),L"Output2",0);
  if (*(short *)((longlong)param_1 + 0x1be) == 0) {
    FShaderResourceParameter::Bind(puVar1,*(undefined8 *)(param_2 + 0x18),L"Output0Mip0",0);
    FShaderResourceParameter::Bind(param_1 + 0x38,*(undefined8 *)(param_2 + 0x18),L"Output0Mip1",0);
    FShaderResourceParameter::Bind
              ((longlong)param_1 + 0x1c4,*(undefined8 *)(param_2 + 0x18),L"Output0Mip2",0);
    FShaderResourceParameter::Bind(param_1 + 0x39,*(undefined8 *)(param_2 + 0x18),L"Output0Mip3",0);
    FShaderResourceParameter::Bind
              ((longlong)param_1 + 0x1cc,*(undefined8 *)(param_2 + 0x18),L"Output0Mip4",0);
  }
  if (*(short *)((longlong)param_1 + 0x1d2) == 0) {
    FShaderResourceParameter::Bind(param_1 + 0x3a,*(undefined8 *)(param_2 + 0x18),L"Output1Mip0",0);
    FShaderResourceParameter::Bind
              ((longlong)param_1 + 0x1d4,*(undefined8 *)(param_2 + 0x18),L"Output1Mip1",0);
    FShaderResourceParameter::Bind(param_1 + 0x3b,*(undefined8 *)(param_2 + 0x18),L"Output1Mip2",0);
    FShaderResourceParameter::Bind
              ((longlong)param_1 + 0x1dc,*(undefined8 *)(param_2 + 0x18),L"Output1Mip3",0);
    FShaderResourceParameter::Bind(param_1 + 0x3c,*(undefined8 *)(param_2 + 0x18),L"Output1Mip4",0);
  }
  return param_1;
}



// FUNCTION 141c119b0 FPostProcessDiaphragmDOFShader body=102 status=ok
// SIG undefined FPostProcessDiaphragmDOFShader(void)

undefined8 *
`anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
          (undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e12f70;
  FPostProcessPassParameters::FPostProcessPassParameters(param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  return param_1;
}



// FUNCTION 141c11a20 FRCPassDiaphragmDOFBuildBokehLUT body=172 status=ok
// SIG undefined FRCPassDiaphragmDOFBuildBokehLUT(void)

undefined8 *
FRCPassDiaphragmDOFBuildBokehLUT::FRCPassDiaphragmDOFBuildBokehLUT
          (undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
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
  *param_1 = &PTR__scalar_deleting_destructor__144e141e8;
  uVar1 = param_2[1];
  param_1[0x15] = *param_2;
  param_1[0x16] = uVar1;
  param_1[0x17] = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_3;
  return param_1;
}



// FUNCTION 141c11ad0 FRCPassDiaphragmDOFGather body=282 status=ok
// SIG undefined FRCPassDiaphragmDOFGather(void)

undefined8 *
FRCPassDiaphragmDOFGather::FRCPassDiaphragmDOFGather(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar3 = 3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar1 = param_1;
  do {
    puVar1[0xc] = 1;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 1;
    *(undefined2 *)(puVar1 + 0x11) = 1;
    *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = L"UnknownTexture";
    *(undefined2 *)(puVar1 + 0x15) = 1;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 0xc;
  } while (lVar3 != 0);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e140d8;
  uVar2 = param_2[1];
  param_1[0x3b] = *param_2;
  param_1[0x3c] = uVar2;
  uVar2 = param_2[3];
  param_1[0x3d] = param_2[2];
  param_1[0x3e] = uVar2;
  uVar2 = param_2[5];
  param_1[0x3f] = param_2[4];
  param_1[0x40] = uVar2;
  param_1[0x41] = param_2[6];
  return param_1;
}



// FUNCTION 141c11bf0 FRCPassDiaphragmDOFHybridScatter body=255 status=ok
// SIG undefined FRCPassDiaphragmDOFHybridScatter(void)

undefined8 *
FRCPassDiaphragmDOFHybridScatter::FRCPassDiaphragmDOFHybridScatter
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
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
  *param_1 = &PTR__scalar_deleting_destructor__144e14270;
  uVar1 = param_3[1];
  param_1[0x1b] = *param_3;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = param_3[2];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_3 + 3);
  uVar1 = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0xf4) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xfc) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)((longlong)param_1 + 0x104) = param_2[2];
  *(undefined8 *)((longlong)param_1 + 0x10c) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)((longlong)param_1 + 0x114) = param_2[4];
  *(undefined8 *)((longlong)param_1 + 0x11c) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x124) = param_2[6];
  return param_1;
}



// FUNCTION 141c11cf0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<8,0,8,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e145d0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<8,0,8,0,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c11d80 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,5,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e14550;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,5,3,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c11e10 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,7,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e14590;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,7,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c11ea0 FUN_141c11ea0 body=186 status=ok
// SIG undefined FUN_141c11ea0(void)

undefined8 * FUN_141c11ea0(undefined8 *param_1)

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
  *param_1 = &PTR__scalar_deleting_destructor__144e146b8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1010001;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c11f60 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<2,3,3,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
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
  *param_1 = &PTR__scalar_deleting_destructor__144e14510;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1030302;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c12020 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<0,3,3,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
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
  *param_1 = &PTR__scalar_deleting_destructor__144e14610;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1030300;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141c120e0 FUN_141c120e0 body=670 status=ok
// SIG undefined FUN_141c120e0(void)

void FUN_141c120e0(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong local_res8;
  longlong local_res10;
  ulonglong uVar10;
  
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  puVar7 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 2;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x18);
    puVar7 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 2;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar6;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar7;
  *(undefined8 **)(lVar11 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dc9c50;
  plVar8 = param_1 + 8;
  local_res10 = 0;
  do {
    uVar10 = 0;
    lVar11 = local_res10;
    uVar13 = uVar10;
    do {
      if (*(short *)(*param_1 + 0x1be + lVar11) != 0) {
        uVar12 = 3;
        if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
          uVar12 = 1;
        }
        lVar2 = *(longlong *)(param_1[7] + 0x40);
        lVar4 = *(longlong *)(*plVar8 + 0x20);
        if (lVar4 == 0) {
          lVar4 = *plVar8 + 0x18;
        }
        puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar3 = *(undefined8 *)(lVar4 + uVar13 * 8);
        puVar6 = puVar7 + 1;
        if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
          puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 1;
        }
        *(undefined8 **)(lVar2 + 0x30) = puVar6;
        *puVar7 = uVar3;
        puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar5 + 6;
        if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
          puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar5 + 6;
        }
        *(undefined8 **)(lVar2 + 0x30) = puVar6;
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
        **(undefined8 **)(lVar2 + 8) = puVar5;
        *(undefined8 **)(lVar2 + 8) = puVar5 + 1;
        puVar5[1] = 0;
        *puVar5 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar5 + 2) = 1;
        puVar5[3] = puVar7;
        *(undefined4 *)(puVar5 + 4) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x24) = uVar12;
        puVar5[5] = 0;
        lVar2 = param_1[1];
        uVar1 = *(ushort *)(*param_1 + (uVar13 + local_res8) * 4);
        lVar4 = *(longlong *)(param_1[7] + 0x40);
        puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
        if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
          puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 5;
        }
        *(undefined8 **)(lVar4 + 0x30) = puVar6;
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        **(undefined8 **)(lVar4 + 8) = puVar7;
        *(undefined8 **)(lVar4 + 8) = puVar7 + 1;
        *puVar7 = &PTR_LAB_144d91e40;
        puVar7[2] = lVar2;
        *(uint *)(puVar7 + 3) = (uint)uVar1;
        puVar7[4] = 0;
        puVar7[1] = 0;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 4;
    } while (uVar9 < 5);
    local_res8 = local_res8 + 5;
    local_res10 = local_res10 + 0x14;
    plVar8 = plVar8 + 1;
  } while (local_res10 < 0x28);
  return;
}



// FUNCTION 141c12380 FUN_141c12380 body=581 status=ok
// SIG undefined FUN_141c12380(void)

void FUN_141c12380(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar11;
  
  lVar2 = *(longlong *)(param_1[7] + 0x40);
  puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 2;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x18);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 2;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar6;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  uVar8 = 0;
  **(undefined8 **)(lVar2 + 8) = puVar7;
  *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dc9c50;
  uVar11 = uVar8;
  uVar12 = uVar8;
  do {
    if (*(short *)(*param_1 + 0x1be + uVar8) != 0) {
      lVar2 = *(longlong *)(param_1[7] + 0x40);
      uVar9 = 3;
      if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
        uVar9 = 1;
      }
      lVar4 = *(longlong *)(param_1[8] + 0x20);
      if (lVar4 == 0) {
        lVar4 = param_1[8] + 0x18;
      }
      puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar3 = *(undefined8 *)(lVar4 + uVar12 * 8);
      puVar6 = puVar7 + 1;
      if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
        puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 1;
      }
      *(undefined8 **)(lVar2 + 0x30) = puVar6;
      *puVar7 = uVar3;
      puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar5 + 6;
      if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
        puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar5 + 6;
      }
      *(undefined8 **)(lVar2 + 0x30) = puVar6;
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
      **(undefined8 **)(lVar2 + 8) = puVar5;
      *(undefined8 **)(lVar2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144d91e60;
      *(undefined4 *)(puVar5 + 2) = 1;
      puVar5[3] = puVar7;
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x24) = uVar9;
      puVar5[5] = 0;
      lVar2 = param_1[1];
      uVar1 = *(ushort *)(*param_1 + 0x1bc + uVar12 * 4);
      lVar4 = *(longlong *)(param_1[7] + 0x40);
      puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(lVar4 + 0x30) = puVar6;
      *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
      **(undefined8 **)(lVar4 + 8) = puVar7;
      *(undefined8 **)(lVar4 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e40;
      puVar7[2] = lVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = 0;
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    uVar12 = uVar12 + 1;
    uVar8 = uVar8 + 4;
  } while (uVar10 < 5);
  return;
}



// FUNCTION 141c125d0 FUN_141c125d0 body=670 status=ok
// SIG undefined FUN_141c125d0(void)

void FUN_141c125d0(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong local_res8;
  longlong local_res10;
  ulonglong uVar10;
  
  lVar11 = *(longlong *)(param_1[7] + 0x40);
  puVar7 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 2;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x18);
    puVar7 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 2;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar6;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  local_res8 = 0x6f;
  **(undefined8 **)(lVar11 + 8) = puVar7;
  *(undefined8 **)(lVar11 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144dc9c50;
  plVar8 = param_1 + 8;
  local_res10 = 0;
  do {
    uVar10 = 0;
    lVar11 = local_res10;
    uVar13 = uVar10;
    do {
      if (*(short *)(*param_1 + 0x1be + lVar11) != 0) {
        uVar12 = 3;
        if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
          uVar12 = 1;
        }
        lVar2 = *(longlong *)(param_1[7] + 0x40);
        lVar4 = *(longlong *)(*plVar8 + 0x20);
        if (lVar4 == 0) {
          lVar4 = *plVar8 + 0x18;
        }
        puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar3 = *(undefined8 *)(lVar4 + uVar13 * 8);
        puVar6 = puVar7 + 1;
        if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
          puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 1;
        }
        *(undefined8 **)(lVar2 + 0x30) = puVar6;
        *puVar7 = uVar3;
        puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar5 + 6;
        if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
          puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar5 + 6;
        }
        *(undefined8 **)(lVar2 + 0x30) = puVar6;
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
        **(undefined8 **)(lVar2 + 8) = puVar5;
        *(undefined8 **)(lVar2 + 8) = puVar5 + 1;
        puVar5[1] = 0;
        *puVar5 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar5 + 2) = 1;
        puVar5[3] = puVar7;
        *(undefined4 *)(puVar5 + 4) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x24) = uVar12;
        puVar5[5] = 0;
        lVar2 = param_1[1];
        uVar1 = *(ushort *)(*param_1 + (uVar13 + local_res8) * 4);
        lVar4 = *(longlong *)(param_1[7] + 0x40);
        puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
        if (*(undefined8 **)(lVar4 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
          puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 5;
        }
        *(undefined8 **)(lVar4 + 0x30) = puVar6;
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        **(undefined8 **)(lVar4 + 8) = puVar7;
        *(undefined8 **)(lVar4 + 8) = puVar7 + 1;
        *puVar7 = &PTR_LAB_144d91e40;
        puVar7[2] = lVar2;
        *(uint *)(puVar7 + 3) = (uint)uVar1;
        puVar7[4] = 0;
        puVar7[1] = 0;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 4;
    } while (uVar9 < 5);
    local_res8 = local_res8 + 5;
    local_res10 = local_res10 + 0x14;
    plVar8 = plVar8 + 1;
  } while (local_res10 < 0x3c);
  return;
}



// FUNCTION 141c12870 ~TRenderingCompositePassBase<1,2> body=187 status=ok
// SIG undefined ~TRenderingCompositePassBase<1,2>(void)

void TRenderingCompositePassBase<1,2>::~TRenderingCompositePassBase<1,2>(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e13b00;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  lVar2 = 2;
  puVar3 = param_1 + 0x20;
  lVar4 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x26;
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



// FUNCTION 141c12930 ~TRenderingCompositePassBase<2,2> body=187 status=ok
// SIG undefined ~TRenderingCompositePassBase<2,2>(void)

void TRenderingCompositePassBase<2,2>::~TRenderingCompositePassBase<2,2>(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e13f40;
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  lVar2 = 2;
  puVar3 = param_1 + 0x22;
  lVar4 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x28;
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



// FUNCTION 141c129f0 ~TRenderingCompositePassBase<2,3> body=187 status=ok
// SIG undefined ~TRenderingCompositePassBase<2,3>(void)

void TRenderingCompositePassBase<2,3>::~TRenderingCompositePassBase<2,3>(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e13d20;
  if (param_1[0x33] != 0) {
    FMemory::Free();
  }
  lVar2 = 3;
  puVar3 = param_1 + 0x30;
  lVar4 = 3;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x34;
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



// FUNCTION 141c12ab0 ~TRenderingCompositePassBase<3,2> body=187 status=ok
// SIG undefined ~TRenderingCompositePassBase<3,2>(void)

void TRenderingCompositePassBase<3,2>::~TRenderingCompositePassBase<3,2>(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e13e30;
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  lVar2 = 2;
  puVar3 = param_1 + 0x24;
  lVar4 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x2a;
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



// FUNCTION 141c12b70 ~TRenderingCompositePassBase<4,2> body=187 status=ok
// SIG undefined ~TRenderingCompositePassBase<4,2>(void)

void TRenderingCompositePassBase<4,2>::~TRenderingCompositePassBase<4,2>(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e13c10;
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  lVar2 = 2;
  puVar3 = param_1 + 0x26;
  lVar4 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x2c;
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



// FUNCTION 141c12c30 ~TRenderingCompositePassBase<5,3> body=187 status=ok
// SIG undefined ~TRenderingCompositePassBase<5,3>(void)

void TRenderingCompositePassBase<5,3>::~TRenderingCompositePassBase<5,3>(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e14050;
  if (param_1[0x39] != 0) {
    FMemory::Free();
  }
  lVar2 = 3;
  puVar3 = param_1 + 0x36;
  lVar4 = 3;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x3a;
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



// FUNCTION 141c12cf0 FUN_141c12cf0 body=201 status=ok
// SIG undefined FUN_141c12cf0(void)

void FUN_141c12cf0(longlong param_1)

{
  *(undefined ***)(param_1 + 0xa8) = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd8);
  FUN_141edd2d0(param_1 + 0xa8);
  FUN_141b38020(param_1 + 0x80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x80);
  FUN_141b38020(param_1 + 0x58);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x58);
  FUN_141ace450(param_1 + 0x30);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141c12dc0 ~FIndividualOcclusionHistory body=210 status=ok
// SIG undefined ~FIndividualOcclusionHistory(void)

void FIndividualOcclusionHistory::~FIndividualOcclusionHistory(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = 3;
  param_1 = param_1 + 0x18;
  do {
    puVar3 = *(undefined8 **)(param_1 + -8);
    param_1 = param_1 + -8;
    lVar7 = lVar7 + -1;
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
          bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar6 = 0;
            }
            else {
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
  } while (lVar7 != 0);
  return;
}



// FUNCTION 141c12ea0 ~FTexture body=59 status=ok
// SIG undefined ~FTexture(void)

void FTexture::~FTexture(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141c12ee0 FUN_141c12ee0 body=780 status=ok
// SIG undefined FUN_141c12ee0(void)

undefined8 FUN_141c12ee0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0b60();
  FUN_1419e0b60(param_1,param_2 + 0x14);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x28);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x2e);
  FUN_1419e0a40(uVar1,param_2 + 0x34);
  FUN_1419e0a40(param_1,param_2 + 0x40);
  FUN_1419e0a40(param_1,param_2 + 0x3a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x46);
  FUN_1419e0a40(uVar1,param_2 + 0x4c);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x52);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x58);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x5e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 100);
  FUN_1419e0a40(uVar1,param_2 + 0x6a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x70);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x76);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x7c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x82);
  FUN_1419e0a40(uVar1,param_2 + 0x88);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x8e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x94);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x9a);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xa0);
  FUN_1419e0a40(uVar1,param_2 + 0xa6);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xac);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xbe);
  FUN_1419e0a40(uVar1,param_2 + 0xc4);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xca);
  FUN_1419e0a40(uVar1,param_2 + 0xd0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xd6);
  FUN_1419e0a40(uVar1,param_2 + 0xdc);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x100);
  FUN_1419e0a40(uVar1,param_2 + 0x106);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xe2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xe8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xee);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xf4);
  FUN_1419e0a40(uVar1,param_2 + 0xfa);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x124);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x12a);
  FUN_1419e0a40(uVar1,param_2 + 0x130);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x136);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x13c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x142);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x148);
  FUN_1419e0a40(uVar1,param_2 + 0x14e);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x112);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x118);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x10c);
  FUN_1419e0a40(uVar1,param_2 + 0x11e);
  return param_1;
}



// FUNCTION 141c131f0 FUN_141c131f0 body=814 status=ok
// SIG undefined FUN_141c131f0(void)

undefined8 FUN_141c131f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 2;
  lVar2 = param_2;
  do {
    FUN_1419e0b60(param_1,lVar2);
    FUN_1419e0b60(param_1,lVar2 + 0x14);
    lVar2 = lVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x28);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x2e);
  FUN_1419e0a40(uVar1,param_2 + 0x34);
  FUN_1419e0a40(param_1,param_2 + 0x40);
  FUN_1419e0a40(param_1,param_2 + 0x3a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x46);
  FUN_1419e0a40(uVar1,param_2 + 0x4c);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x52);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x58);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x5e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 100);
  FUN_1419e0a40(uVar1,param_2 + 0x6a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x70);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x76);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x7c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x82);
  FUN_1419e0a40(uVar1,param_2 + 0x88);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x8e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x94);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x9a);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xa0);
  FUN_1419e0a40(uVar1,param_2 + 0xa6);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xac);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xbe);
  FUN_1419e0a40(uVar1,param_2 + 0xc4);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xca);
  FUN_1419e0a40(uVar1,param_2 + 0xd0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xd6);
  FUN_1419e0a40(uVar1,param_2 + 0xdc);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x100);
  FUN_1419e0a40(uVar1,param_2 + 0x106);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xe2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xe8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xee);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xf4);
  FUN_1419e0a40(uVar1,param_2 + 0xfa);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x124);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x12a);
  FUN_1419e0a40(uVar1,param_2 + 0x130);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x136);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x13c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x142);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x148);
  FUN_1419e0a40(uVar1,param_2 + 0x14e);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x112);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x118);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x10c);
  FUN_1419e0a40(uVar1,param_2 + 0x11e);
  return param_1;
}



// FUNCTION 141c13520 FUN_141c13520 body=814 status=ok
// SIG undefined FUN_141c13520(void)

undefined8 FUN_141c13520(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 3;
  lVar2 = param_2;
  do {
    FUN_1419e0b60(param_1,lVar2);
    FUN_1419e0b60(param_1,lVar2 + 0x14);
    lVar2 = lVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x28);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x2e);
  FUN_1419e0a40(uVar1,param_2 + 0x34);
  FUN_1419e0a40(param_1,param_2 + 0x40);
  FUN_1419e0a40(param_1,param_2 + 0x3a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x46);
  FUN_1419e0a40(uVar1,param_2 + 0x4c);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x52);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x58);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x5e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 100);
  FUN_1419e0a40(uVar1,param_2 + 0x6a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x70);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x76);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x7c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x82);
  FUN_1419e0a40(uVar1,param_2 + 0x88);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x8e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x94);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x9a);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xa0);
  FUN_1419e0a40(uVar1,param_2 + 0xa6);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xac);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xbe);
  FUN_1419e0a40(uVar1,param_2 + 0xc4);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xca);
  FUN_1419e0a40(uVar1,param_2 + 0xd0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xd6);
  FUN_1419e0a40(uVar1,param_2 + 0xdc);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x100);
  FUN_1419e0a40(uVar1,param_2 + 0x106);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xe2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xe8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xee);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xf4);
  FUN_1419e0a40(uVar1,param_2 + 0xfa);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x124);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x12a);
  FUN_1419e0a40(uVar1,param_2 + 0x130);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x136);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x13c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x142);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x148);
  FUN_1419e0a40(uVar1,param_2 + 0x14e);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x112);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x118);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x10c);
  FUN_1419e0a40(uVar1,param_2 + 0x11e);
  return param_1;
}



// FUNCTION 141c13850 FUN_141c13850 body=814 status=ok
// SIG undefined FUN_141c13850(void)

undefined8 FUN_141c13850(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 4;
  lVar2 = param_2;
  do {
    FUN_1419e0b60(param_1,lVar2);
    FUN_1419e0b60(param_1,lVar2 + 0x14);
    lVar2 = lVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x28);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x2e);
  FUN_1419e0a40(uVar1,param_2 + 0x34);
  FUN_1419e0a40(param_1,param_2 + 0x40);
  FUN_1419e0a40(param_1,param_2 + 0x3a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x46);
  FUN_1419e0a40(uVar1,param_2 + 0x4c);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x52);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x58);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x5e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 100);
  FUN_1419e0a40(uVar1,param_2 + 0x6a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x70);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x76);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x7c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x82);
  FUN_1419e0a40(uVar1,param_2 + 0x88);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x8e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x94);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x9a);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xa0);
  FUN_1419e0a40(uVar1,param_2 + 0xa6);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xac);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xbe);
  FUN_1419e0a40(uVar1,param_2 + 0xc4);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xca);
  FUN_1419e0a40(uVar1,param_2 + 0xd0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xd6);
  FUN_1419e0a40(uVar1,param_2 + 0xdc);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x100);
  FUN_1419e0a40(uVar1,param_2 + 0x106);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xe2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xe8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xee);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xf4);
  FUN_1419e0a40(uVar1,param_2 + 0xfa);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x124);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x12a);
  FUN_1419e0a40(uVar1,param_2 + 0x130);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x136);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x13c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x142);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x148);
  FUN_1419e0a40(uVar1,param_2 + 0x14e);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x112);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x118);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x10c);
  FUN_1419e0a40(uVar1,param_2 + 0x11e);
  return param_1;
}



// FUNCTION 141c13b80 FUN_141c13b80 body=814 status=ok
// SIG undefined FUN_141c13b80(void)

undefined8 FUN_141c13b80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 5;
  lVar2 = param_2;
  do {
    FUN_1419e0b60(param_1,lVar2);
    FUN_1419e0b60(param_1,lVar2 + 0x14);
    lVar2 = lVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x28);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x2e);
  FUN_1419e0a40(uVar1,param_2 + 0x34);
  FUN_1419e0a40(param_1,param_2 + 0x40);
  FUN_1419e0a40(param_1,param_2 + 0x3a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x46);
  FUN_1419e0a40(uVar1,param_2 + 0x4c);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x52);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x58);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x5e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 100);
  FUN_1419e0a40(uVar1,param_2 + 0x6a);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x70);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x76);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x7c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x82);
  FUN_1419e0a40(uVar1,param_2 + 0x88);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x8e);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x94);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x9a);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xa0);
  FUN_1419e0a40(uVar1,param_2 + 0xa6);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xac);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xb8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xbe);
  FUN_1419e0a40(uVar1,param_2 + 0xc4);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xca);
  FUN_1419e0a40(uVar1,param_2 + 0xd0);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xd6);
  FUN_1419e0a40(uVar1,param_2 + 0xdc);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x100);
  FUN_1419e0a40(uVar1,param_2 + 0x106);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0xe2);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xe8);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xee);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0xf4);
  FUN_1419e0a40(uVar1,param_2 + 0xfa);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x124);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x12a);
  FUN_1419e0a40(uVar1,param_2 + 0x130);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x136);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x13c);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x142);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x148);
  FUN_1419e0a40(uVar1,param_2 + 0x14e);
  uVar1 = FUN_1419e0a40(param_1,param_2 + 0x112);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x118);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x10c);
  FUN_1419e0a40(uVar1,param_2 + 0x11e);
  return param_1;
}



// FUNCTION 141c13eb0 operator<< body=23 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1)

{
  FUN_1419e0a40();
  return param_1;
}



// FUNCTION 141c13ed0 FUN_141c13ed0 body=394 status=ok
// SIG undefined FUN_141c13ed0(void)

longlong * FUN_141c13ed0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  undefined *local_28;
  undefined1 *puStack_20;
  
  local_res18[0] = 0;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  *(undefined4 *)(param_2 + 0x1c) = *puVar2;
  *(undefined4 *)(param_2 + 0x20) = puVar2[1];
  uVar3 = *(undefined8 *)param_1[2];
  *(int *)(param_2 + 0x24) = (param_3 + -1 + (int)uVar3) / param_3;
  *(int *)(param_2 + 0x28) = (param_3 + -1 + (int)((ulonglong)uVar3 >> 0x20)) / param_3;
  uVar3 = *(undefined8 *)param_1[3];
  *(int *)(param_2 + 0x2c) = (param_3 + -1 + (int)uVar3) / param_3;
  *(int *)(param_2 + 0x30) = (param_3 + -1 + (int)((ulonglong)uVar3 >> 0x20)) / param_3;
  puStack_20 = local_res18;
  local_28 = &DAT_14060d670;
  lVar5 = FUN_1415d8310(&local_28,&DAT_146216a38);
  lVar5 = operator_new(0x210,lVar5 + 0x18,1);
  if (lVar5 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)FRCPassDiaphragmDOFGather::FRCPassDiaphragmDOFGather(lVar5,param_2);
  }
  plVar4 = *(longlong **)(param_1[4] + 8);
  iVar1 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
  }
  *(longlong **)(*plVar4 + (longlong)iVar1 * 8) = plVar6;
  (**(code **)(*plVar6 + 0x18))(plVar6,0,param_1[5]);
  (**(code **)(*plVar6 + 0x18))(plVar6,1,param_1[6]);
  (**(code **)(*plVar6 + 0x18))(plVar6,2,param_1[7]);
  (**(code **)(*plVar6 + 0x18))(plVar6,3,param_1[8]);
  if (*(int *)(param_2 + 0x18) != 0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,4,param_1[9]);
  }
  return plVar6;
}



// FUNCTION 141c14060 FUN_141c14060 body=341 status=ok
// SIG undefined FUN_141c14060(void)

undefined8 *
FUN_141c14060(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  undefined *local_28;
  undefined1 *puStack_20;
  
  if (*(int *)((longlong)param_3 + 0x14) != 0) {
    puStack_20 = local_res10;
    local_28 = &DAT_14060d670;
    local_res10[0] = 0;
    lVar6 = FUN_1415d8310(&local_28,&DAT_146216a38);
    plVar7 = (longlong *)operator_new(0x188,lVar6 + 0x18,1);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      TRenderingCompositePassBase<4,2>::TRenderingCompositePassBase<4,2>(plVar7);
      *plVar7 = (longlong)&PTR__scalar_deleting_destructor__144e14160;
      lVar6 = param_3[1];
      plVar7[0x2a] = *param_3;
      plVar7[0x2b] = lVar6;
      lVar6 = param_3[3];
      plVar7[0x2c] = param_3[2];
      plVar7[0x2d] = lVar6;
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
      lVar6 = param_3[5];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(int *)(plVar7 + 0x2e) = (int)param_3[4];
      *(undefined4 *)((longlong)plVar7 + 0x174) = uVar3;
      *(int *)(plVar7 + 0x2f) = (int)lVar6;
      *(undefined4 *)((longlong)plVar7 + 0x17c) = uVar4;
      plVar7[0x30] = param_3[6];
    }
    plVar2 = *(longlong **)(*param_1 + 8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(longlong **)(*plVar2 + (longlong)iVar1 * 8) = plVar7;
    (**(code **)(*plVar7 + 0x18))(plVar7,0,param_4);
    (**(code **)(*plVar7 + 0x18))(plVar7,2,param_1[1]);
    (**(code **)(*plVar7 + 0x18))(plVar7,3,param_1[2]);
    puStack_20 = (undefined1 *)((ulonglong)puStack_20 & 0xffffffff00000000);
    *param_4 = plVar7;
    param_4[1] = puStack_20;
  }
  uVar5 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = uVar5;
  return param_2;
}



// FUNCTION 141c141d0 FUN_141c141d0 body=97 status=ok
// SIG undefined FUN_141c141d0(void)

undefined8 * FUN_141c141d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e14650;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141c14240 FUN_141c14240 body=97 status=ok
// SIG undefined FUN_141c14240(void)

undefined8 * FUN_141c14240(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e13ac0;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141c142b0 FUN_141c142b0 body=97 status=ok
// SIG undefined FUN_141c142b0(void)

undefined8 * FUN_141c142b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e13ad0;
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



// FUNCTION 141c14320 FUN_141c14320 body=97 status=ok
// SIG undefined FUN_141c14320(void)

undefined8 * FUN_141c14320(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e13ae0;
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



// FUNCTION 141c14390 FUN_141c14390 body=97 status=ok
// SIG undefined FUN_141c14390(void)

undefined8 * FUN_141c14390(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e13af0;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141c14400 FUN_141c14400 body=97 status=ok
// SIG undefined FUN_141c14400(void)

undefined8 * FUN_141c14400(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e13aa0;
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



// FUNCTION 141c14470 FUN_141c14470 body=97 status=ok
// SIG undefined FUN_141c14470(void)

undefined8 * FUN_141c14470(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e13ab0;
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



// FUNCTION 141c144e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<1,2>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderingCompositePassBase<1,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141c14520 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<2,2>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderingCompositePassBase<2,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141c14560 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<2,3>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderingCompositePassBase<2,3>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 141c145a0 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TRenderingCompositePassBase<3,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

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
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141c14620 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<3,2>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderingCompositePassBase<3,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 141c14660 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<4,2>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderingCompositePassBase<4,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141c146a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<5,3>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TRenderingCompositePassBase<5,3>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 141c146e0 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TRenderingCompositePassBase<11,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e142f8;
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 141c14760 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPlanarReflectionRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[0xd] = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe);
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141c147d0 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassDiaphragmDOFBuildBokehLUT::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141c14850 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFDilateCoc::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TRenderingCompositePassBase<4,2>::~TRenderingCompositePassBase<4,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 141c14890 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFDownsample::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TRenderingCompositePassBase<2,2>::~TRenderingCompositePassBase<2,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 141c148d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFFlattenCoc::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TRenderingCompositePassBase<1,2>::~TRenderingCompositePassBase<1,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141c14910 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFGather::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TRenderingCompositePassBase<5,3>::~TRenderingCompositePassBase<5,3>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 141c14950 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassDiaphragmDOFHybridScatter::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
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
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141c149d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFPostfilter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TRenderingCompositePassBase<4,2>::~TRenderingCompositePassBase<4,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 141c14a10 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassDiaphragmDOFRecombine::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e142f8;
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141c14a90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFReduce::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TRenderingCompositePassBase<3,2>::~TRenderingCompositePassBase<3,2>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 141c14ad0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFSetup::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  TRenderingCompositePassBase<2,3>::~TRenderingCompositePassBase<2,3>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 141c14b10 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e145d0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c14b60 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e14550;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c14bb0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e14590;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c14c00 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e146b8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c14c50 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e14510;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c14ca0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e14610;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141c14cf0 `scalar_deleting_destructor' body=92 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FTexture::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141c14d50 AddDependency body=82 status=ok
// SIG undefined AddDependency(void)

void TRenderingCompositePassBase<1,2>::AddDependency(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x118) = iVar2 + 1;
  if (*(int *)(param_1 + 0x11c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x110),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c14db0 AddDependency body=82 status=ok
// SIG undefined AddDependency(void)

void TRenderingCompositePassBase<2,2>::AddDependency(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x128);
  *(int *)(param_1 + 0x128) = iVar2 + 1;
  if (*(int *)(param_1 + 300) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x120),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c14e10 AddDependency body=82 status=ok
// SIG undefined AddDependency(void)

void TRenderingCompositePassBase<2,3>::AddDependency(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(int *)(param_1 + 0x1a0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1a4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x198),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c14e70 FUN_141c14e70 body=82 status=ok
// SIG undefined FUN_141c14e70(void)

void FUN_141c14e70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xc4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xb8),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c14ed0 FUN_141c14ed0 body=82 status=ok
// SIG undefined FUN_141c14ed0(void)

void FUN_141c14ed0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar2 + 1;
  if (*(int *)(param_1 + 0x13c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x130),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c14f30 FUN_141c14f30 body=82 status=ok
// SIG undefined FUN_141c14f30(void)

void FUN_141c14f30(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar2 + 1;
  if (*(int *)(param_1 + 0x14c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x140),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c14f90 FUN_141c14f90 body=82 status=ok
// SIG undefined FUN_141c14f90(void)

void FUN_141c14f90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1d0);
  *(int *)(param_1 + 0x1d0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1d4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x1c8),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c14ff0 AddDependency body=82 status=ok
// SIG undefined AddDependency(void)

void TRenderingCompositePassBase<11,1>::AddDependency(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = iVar2 + 1;
  if (*(int *)(param_1 + 0x144) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x138),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141c15050 FUN_141c15050 body=588 status=ok
// SIG undefined FUN_141c15050(void)

void FUN_141c15050(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  iVar11 = *(int *)(param_1 + 0x1200);
  *(int *)(param_1 + 0x1200) = iVar11 + 1;
  if (*(int *)(param_1 + 0x1204) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x11f8,iVar11);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x11f8) + (longlong)iVar11 * 8) = param_2;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    uVar3 = *(undefined8 *)(param_2 + 0x400);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res18);
    *(undefined1 *)(param_1 + 0x1208) = 1;
    iVar11 = *(int *)(param_1 + 0x11f0);
    *(int *)(param_1 + 0x11f0) = iVar11 + 1;
    if (*(int *)(param_1 + 0x11f4) < iVar11 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x11e8,iVar11);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x11e8) + (longlong)iVar11 * 8) = uVar3;
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar10 = (longlong *)0x0;
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
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *(undefined1 *)(plVar10 + 4) = 0;
  *plVar10 = (longlong)&PTR_FUN_144e13ad0;
  plVar10[5] = 0;
  plVar10[2] = *(longlong *)(param_2 + 0x400);
  plVar10[3] = param_1;
  lVar8 = plVar10[5];
  piVar1 = (int *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res10 = lVar8;
  FUN_1409421c0(plVar10,0,0xff,1,0);
  if (lVar8 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  return;
}



// FUNCTION 141c152a0 Bind body=305 status=ok
// SIG undefined Bind(void)

void FPlanarReflectionParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"ReflectionPlane",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"PlanarReflectionOrigin",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"PlanarReflectionXAxis",0);
  FShaderParameter::Bind(param_1 + 0x12,param_2,L"PlanarReflectionYAxis",0);
  FShaderParameter::Bind(param_1 + 0x18,param_2,L"InverseTransposeMirrorMatrix",0);
  FShaderParameter::Bind(param_1 + 0x1e,param_2,L"PlanarReflectionParameters",0);
  FShaderParameter::Bind(param_1 + 0x24,param_2,L"PlanarReflectionParameters2",0);
  FShaderParameter::Bind(param_1 + 0x2a,param_2,L"ProjectionWithExtraFOV",0);
  FShaderParameter::Bind(param_1 + 0x30,param_2,L"PlanarReflectionScreenScaleBias",0);
  FShaderParameter::Bind(param_1 + 0x36,param_2,L"bIsStereo",0);
  FShaderParameter::Bind(param_1 + 0x3c,param_2,L"PlanarReflectionScreenBound",0);
  FShaderResourceParameter::Bind(param_1 + 0x42,param_2,L"PlanarReflectionTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x46,param_2,L"PlanarReflectionSampler",0);
  return;
}



// FUNCTION 141c153e0 FUN_141c153e0 body=458 status=ok
// SIG undefined FUN_141c153e0(void)

float * FUN_141c153e0(float *param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a4e4c8) {
    _Init_thread_header(&DAT_146a4e4c8);
    if (DAT_146a4e4c8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DepthOfFieldQuality");
      lVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      DAT_146a4e4c0 = lVar4;
      _Init_thread_footer(&DAT_146a4e4c8);
    }
  }
  if (((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x28) & 0x80000) == 0) ||
     (*(int *)(DAT_146a4e4c0 + 4) < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  *param_1 = 0.0;
  param_1[1] = 1.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if ((bVar2) && (*(char *)(param_2 + 0x1714) == '\x02')) {
    fVar1 = *(float *)(param_2 + 0x171c);
    fVar5 = _guard_xfg_dispatch_icall_nop(1.0 / *(float *)(param_2 + 0x390));
    fVar6 = _guard_xfg_dispatch_icall_nop(fVar5);
    fVar5 = *(float *)(param_2 + 0x1724);
    fVar6 = (fVar1 * 0.5) / fVar6;
    fVar7 = (float)(*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0));
    fVar1 = *(float *)(param_2 + 0x1728);
    *param_1 = ((((fVar6 * fVar6) /
                 ((*(float *)(param_2 + 0x1720) * 10.0 - fVar6) * *(float *)(param_2 + 0x1568))) *
                fVar7) / *(float *)(param_2 + 0x171c)) * 0.25;
    param_1[1] = 1e-05 / fVar5;
    param_1[2] = fVar7 * fVar1 * 0.00052083336;
    param_1[3] = fVar7 * 0.00052083336;
  }
  return param_1;
}



// FUNCTION 141c155b0 FUN_141c155b0 body=674 status=ok
// SIG undefined FUN_141c155b0(void)

void FUN_141c155b0(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(param_2 + 0x1570);
  if (iVar1 < 4) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0x10;
    if (iVar1 < 0x10) {
      iVar2 = iVar1;
    }
  }
  param_1[3] = iVar2;
  fVar3 = *(float *)(param_2 + 0x156c);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar3 < *(float *)(param_2 + 0x1568)) {
    fVar13 = (float)iVar2;
    fVar11 = 3.1415927 / fVar13;
    if (fVar3 == 0.0) {
      *param_1 = 1;
      uVar8 = __libm_sse2_sincosf_(fVar11);
      param_1[4] = 0;
      fVar13 = 1.0 / SQRT((float)((ulonglong)uVar8 >> 0x20) * (float)uVar8 * fVar13 * 0.31830987);
      param_1[1] = fVar13;
      fVar3 = _guard_xfg_dispatch_icall_nop(fVar11);
      param_1[2] = fVar3 * fVar13;
    }
    else {
      fVar3 = *(float *)(param_2 + 0x1568) / fVar3;
      *param_1 = 2;
      fVar4 = _guard_xfg_dispatch_icall_nop(fVar11);
      fVar9 = fVar4 / fVar3;
      fVar10 = -1.0;
      if ((-1.0 <= fVar9) && (fVar10 = fVar9, 1.0 <= fVar9)) {
        fVar10 = 1.0;
      }
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
      fVar9 = _guard_xfg_dispatch_icall_nop(fVar10);
      fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
      fVar12 = fVar9 * fVar3 - fVar11;
      fVar5 = (float)__libm_sse2_sincosf_(fVar10);
      fVar6 = fVar3 - 1.0;
      fVar11 = SQRT(3.1415927 /
                    (((fVar3 * 1.0 * fVar3 * fVar10 - fVar5 * fVar3 * fVar3 * fVar9) +
                     fVar11 * fVar4) * fVar13));
      uVar7 = FGenericPlatformMath::Atan2(fVar6 * 0.5,SQRT(fVar3 * fVar3 - fVar6 * fVar6 * 0.25));
      param_1[4] = uVar7;
      param_1[5] = fVar11 * fVar3;
      param_1[1] = fVar11;
      param_1[6] = fVar11 * fVar12;
      param_1[2] = (fVar3 - fVar12) * fVar11;
    }
    return;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  return;
}



// FUNCTION 141c15860 FUN_141c15860 body=2566 status=ok
// SIG undefined FUN_141c15860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141c15860(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_218 [32];
  float local_1f8;
  float local_1f0;
  float local_1e8;
  float local_1e0;
  float local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8 [2];
  int local_1a0;
  int local_19c;
  undefined8 local_198;
  int local_190;
  int local_18c;
  undefined4 local_188 [2];
  longlong local_180;
  longlong local_178 [4];
  undefined *local_158;
  undefined4 local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined *local_128;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_188[0] = 0;
  if ((*(int *)(param_1 + 0x58) == 1) || (*(int *)(param_1 + 0x58) == 4)) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    lVar6 = FSceneRenderTargets::Get(param_2);
    uVar7 = FUN_141d69900(param_1,lVar6);
    if (*(char *)(lVar1 + 0x120b) == '\0') {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x60) + 0x10);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      bVar4 = false;
      bVar3 = true;
      local_178[0] = lVar6;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1f8) + 8);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      bVar4 = true;
      bVar3 = false;
      local_198 = lVar6;
    }
    if (bVar3) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_178);
    }
    if (bVar4) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_198);
    }
    bVar4 = false;
    bVar3 = false;
    local_1f0 = (float)((uint)local_1f0 & 0xffffff00);
    local_1f8 = 4.76441e-44;
    FUN_141ad74f0(param_2,uVar7,lVar6,0);
    lVar6 = 0;
    local_cc = 0x26;
    local_d8 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d0 = 0;
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
    local_d8 = FUN_1409853f0();
    if (*(int *)(param_1 + 0x58) == 4) {
      local_e8 = FUN_1404a0ce0();
    }
    else {
      local_e8 = FUN_141c1c960();
    }
    plVar13 = (longlong *)(*(longlong *)(lVar1 + 0x9230) + 0x38);
    if (*(char *)(lVar1 + 0x120b) == '\0') {
      local_158 = &DAT_146a4c270;
      local_150 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar13,&local_18c,&local_158);
      if (local_18c != -1) {
        lVar6 = (longlong)local_18c * 0x20 + *plVar13;
      }
      plVar12 = (longlong *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        plVar12 = (longlong *)0x0;
      }
      local_140 = 0;
      local_148 = &DAT_146a4c510;
      lVar6 = *plVar12;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar13,&local_190,&local_148);
      if (local_190 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)local_190 * 0x20 + *plVar13;
      }
      plVar13 = (longlong *)(lVar10 + 0x10);
      uVar7 = 0;
      if (lVar10 == 0) {
        plVar13 = (longlong *)0x0;
      }
      lVar10 = *plVar13;
      local_118 = DAT_1464c2720;
      if (lVar6 == 0) {
        bVar3 = true;
        local_178[1] = 0;
      }
      else {
        local_198 = *(longlong *)(lVar6 + 0x48);
        if (*(char *)(local_198 + 0x28) == '\0') {
          FUN_1419f3850(local_198);
        }
        uVar7 = *(undefined8 *)(local_198 + 0x38);
      }
      uStack_110 = uVar7;
      if (bVar3) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_178 + 1);
      }
      if (lVar10 == 0) {
        local_180 = 0;
        local_f8 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_180);
      }
      else {
        lVar2 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850(lVar2);
        }
        local_f8 = *(undefined8 *)(lVar2 + 0x40);
      }
      local_cc = local_cc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_118,2,1);
      FUN_141c2abe0(lVar10,param_2,lVar1 + 0x61a0);
      lVar10 = *(longlong *)(lVar6 + 0x48);
      local_1a8[0] = *(undefined4 *)(param_1 + 0x50);
      uVar7 = *(undefined8 *)(lVar1 + 0x61c0);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      FUN_141aa9800(lVar6,param_2,*(undefined8 *)(lVar10 + 0x38),uVar7);
      lVar10 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      local_1f8 = 0.0;
      FUN_1404986d0(param_2,*(undefined8 *)(lVar10 + 0x38),lVar6 + 0xc0,local_1a8);
      fVar14 = (float)roundf((float)(*(int *)(lVar1 + 0x7c48) - *(int *)(lVar1 + 0x7c40)) *
                             *(float *)(param_1 + 0x50));
      local_18c = (int)fVar14;
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_19c = *(int *)(lVar1 + 0x1aac);
      local_1a0 = *(int *)(lVar1 + 0x1aa8);
      local_190 = *(int *)(lVar1 + 0x1aa4);
      local_1a8[0] = *(undefined4 *)(lVar1 + 0x1aa0);
      puVar8 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      local_1b0 = 1;
      local_1b8 = 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = local_1a8[0];
      *(int *)((longlong)puVar11 + 0x14) = local_190;
      *(int *)((longlong)puVar11 + 0x1c) = local_1a0;
      *(int *)(puVar11 + 4) = local_19c;
      *puVar11 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
      iVar5 = *(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4);
      iVar9 = *(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0);
      local_1f8 = (float)iVar5;
      local_198 = CONCAT44(iVar5,iVar9);
      local_1c8 = *(undefined8 *)(lVar1 + 0x7c48);
      local_1d0 = local_198;
      local_1e8 = (float)*(int *)(lVar1 + 0x7c44);
      local_1e0 = (float)iVar9;
      local_1f0 = (float)(*(int *)(lVar1 + 0x7c40) + local_18c);
      local_1d8 = local_1f8;
      local_1c0 = lVar6;
      DrawRectangle(param_2);
      local_190 = *(int *)(lVar1 + 0x4b7c);
      local_1a8[0] = *(undefined4 *)(lVar1 + 0x4b78);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_1a0 = *(int *)(lVar1 + 0x4b74);
      local_19c = *(int *)(lVar1 + 0x4b70);
      puVar8 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      local_1b0 = 1;
      local_1b8 = 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *(int *)(puVar11 + 2) = local_19c;
      *(int *)((longlong)puVar11 + 0x14) = local_1a0;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = local_1a8[0];
      *(int *)(puVar11 + 4) = local_190;
      *puVar11 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
      iVar5 = *(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4);
      iVar9 = *(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0);
      local_1f8 = (float)iVar5;
      local_198 = CONCAT44(iVar5,iVar9);
      local_1c8 = *(undefined8 *)(lVar1 + 0x7c48);
      local_1d0 = local_198;
      local_1e8 = (float)*(int *)(lVar1 + 0x7c44);
      local_1e0 = (float)iVar9;
      local_1f0 = (float)(*(int *)(lVar1 + 0x7c40) - local_18c);
      local_1d8 = local_1f8;
      local_1c0 = lVar6;
      DrawRectangle(param_2);
    }
    else {
      local_130 = 0;
      local_138 = &DAT_146a4c120;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar13,&local_19c,&local_138);
      if (local_19c != -1) {
        lVar6 = (longlong)local_19c * 0x20 + *plVar13;
      }
      plVar12 = (longlong *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        plVar12 = (longlong *)0x0;
      }
      local_120 = 0;
      local_128 = &DAT_146a4c3c0;
      lVar6 = *plVar12;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar13,&local_1a0,&local_128);
      if (local_1a0 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)local_1a0 * 0x20 + *plVar13;
      }
      plVar13 = (longlong *)(lVar10 + 0x10);
      uVar7 = 0;
      if (lVar10 == 0) {
        plVar13 = (longlong *)0x0;
      }
      lVar10 = *plVar13;
      local_118 = DAT_1464c2720;
      if (lVar6 == 0) {
        bVar4 = true;
        local_178[2] = 0;
      }
      else {
        local_180 = *(longlong *)(lVar6 + 0x48);
        if (*(char *)(local_180 + 0x28) == '\0') {
          FUN_1419f3850(local_180);
        }
        uVar7 = *(undefined8 *)(local_180 + 0x38);
      }
      uStack_110 = uVar7;
      if (bVar4) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_178 + 2);
      }
      if (lVar10 == 0) {
        local_178[3] = 0;
        local_f8 = 0;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_178 + 3);
      }
      else {
        lVar2 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850(lVar2);
        }
        local_f8 = *(undefined8 *)(lVar2 + 0x40);
      }
      local_cc = local_cc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_118,2,1);
      FUN_141c2abe0(lVar10,param_2,lVar1 + 0x61a0);
      lVar10 = *(longlong *)(lVar6 + 0x48);
      local_188[0] = *(undefined4 *)(param_1 + 0x50);
      uVar7 = *(undefined8 *)(lVar1 + 0x61c0);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      FUN_141aa9800(lVar6,param_2,*(undefined8 *)(lVar10 + 0x38),uVar7);
      lVar10 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      local_1f8 = 0.0;
      FUN_1404986d0(param_2,*(undefined8 *)(lVar10 + 0x38),lVar6 + 0xc0,local_188);
      local_1a8[0] = *(undefined4 *)(lVar1 + 0x1aac);
      local_1a0 = *(int *)(lVar1 + 0x1aa8);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_19c = *(int *)(lVar1 + 0x1aa4);
      local_188[0] = *(undefined4 *)(lVar1 + 0x1aa0);
      puVar8 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      local_1b0 = 1;
      local_1b8 = 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = local_188[0];
      *(int *)((longlong)puVar11 + 0x14) = local_19c;
      *(int *)((longlong)puVar11 + 0x1c) = local_1a0;
      *(undefined4 *)(puVar11 + 4) = local_1a8[0];
      *puVar11 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
      iVar5 = *(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4);
      iVar9 = *(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0);
      local_1f8 = (float)iVar5;
      local_1c8 = *(undefined8 *)(lVar1 + 0x7c48);
      local_198 = CONCAT44(iVar5,iVar9);
      local_1d0 = local_198;
      local_1f0 = (float)*(int *)(lVar1 + 0x7c40);
      local_1e0 = (float)iVar9;
      local_1e8 = (float)*(int *)(lVar1 + 0x7c44);
      local_1d8 = local_1f8;
      local_1c0 = lVar6;
      DrawRectangle(param_2);
    }
  }
  plVar13 = (longlong *)(param_1 + 0xc0);
  FUN_141d5be00(*plVar13 + 0x61a0);
  iVar5 = *(int *)(param_1 + 200);
  if (iVar5 + -3 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar13 + 0x61a0),(void *)(*plVar13 + 0x9270),
               (longlong)(iVar5 + -3) * 0x30d0);
    iVar5 = *(int *)(param_1 + 200);
  }
  *(int *)(param_1 + 200) = iVar5 + -1;
  FUN_141c2a4a0(plVar13);
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 + -3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar1 + 0x10),(void *)(lVar1 + 0x18),(longlong)(iVar5 + -3) << 3);
    iVar5 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar5 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x10));
  return;
}



// FUNCTION 141c16270 FUN_141c16270 body=398 status=ok
// SIG undefined FUN_141c16270(void)

void FUN_141c16270(longlong *param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = FSceneRenderTargets::Get(param_1[8]);
  lVar2 = *param_1;
  uVar4 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x378) >> 0x20) + 1U >> 1;
  fVar7 = 1.0 / *(float *)(lVar2 + 0x1774);
  fVar5 = *(float *)(lVar2 + 6000) * 0.02;
  fVar6 = *(float *)(lVar2 + 0x1764);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 1e+08;
  }
  fVar1 = *(float *)(lVar2 + 0x1758);
  *param_2 = fVar6;
  param_2[1] = fVar7;
  param_2[2] = (0.5 - fVar5) * fVar7;
  param_2[3] = fVar1;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x1714) == '\0') {
    fVar6 = *(float *)(lVar2 + 0x173c);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar5 = 1.0 / (float)(uVar4 * 2 + 0x28);
    param_2[4] = fVar6 * 0.01 * (float)(*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0));
    param_2[5] = fVar5 * (float)(uVar4 + 0x28);
    param_2[6] = (float)uVar4 * fVar5;
    param_2[7] = (float)(uVar4 + 0x28);
    return;
  }
  fVar6 = *(float *)(lVar2 + 0x1768);
  fVar5 = *(float *)(lVar2 + 0x176c);
  param_2[4] = *(float *)(lVar2 + 0x1778);
  param_2[5] = fVar6;
  param_2[6] = fVar5;
  param_2[7] = 0.0;
  return;
}



// FUNCTION 141c16400 FUN_141c16400 body=1475 status=ok
// SIG undefined FUN_141c16400(void)

float * FUN_141c16400(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fStack_100 = *(float *)(param_1 + 5);
  fStack_fc = *(float *)((longlong)param_1 + 0x2c);
  uVar1 = *param_1;
  uStack_120 = param_1[1];
  local_118 = *(float *)(param_1 + 2);
  fStack_114 = *(float *)((longlong)param_1 + 0x14);
  fStack_110 = *(float *)(param_1 + 3);
  fStack_10c = *(float *)((longlong)param_1 + 0x1c);
  fStack_104 = *(float *)((longlong)param_1 + 0x24) - *(float *)((longlong)param_1 + 0x564);
  local_108 = *(float *)(param_1 + 4) - *(float *)(param_1 + 0xac);
  local_f8 = *(float *)(param_1 + 6);
  fStack_f4 = *(float *)((longlong)param_1 + 0x34);
  fStack_f0 = *(float *)(param_1 + 7);
  fStack_ec = *(float *)((longlong)param_1 + 0x3c);
  local_128 = uVar1;
  if ((((((local_118 == 0.0) && (local_f8 == 0.0)) &&
        (local_128._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_128._4_4_ == 0.0)) &&
       ((fStack_f4 == 0.0 && ((float)uStack_120 == 0.0)))) &&
      ((fStack_110 == 0.0 &&
       ((uStack_120._4_4_ = (float)((ulonglong)uStack_120 >> 0x20), uStack_120._4_4_ == 0.0 &&
        (fStack_10c == 0.0)))))) && ((fStack_fc == 1.0 && (fStack_ec == 0.0)))) {
    local_128._0_4_ = (float)uVar1;
    uStack_e4 = 0;
    uStack_dc = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    fStack_c0 = 0.0;
    fStack_b0 = 1.0;
    local_e8 = 1.0 / (float)local_128;
    local_b8 = -(local_108 * local_e8);
    fStack_d4 = 1.0 / fStack_114;
    fStack_bc = 1.0 / fStack_f0;
    fStack_b4 = -(fStack_104 * fStack_d4);
    fStack_ac = -(fStack_100 * fStack_bc);
  }
  else {
    FMatrix::Inverse(&local_128,&local_e8);
  }
  fVar5 = local_b8 * 1.0 + (float)local_c8 * 0.0 + uStack_dc._4_4_ * 0.0 + local_e8 * 0.0;
  fVar6 = fStack_b4 * 1.0 + local_c8._4_4_ * 0.0 + fStack_d4 * 0.0 + (float)uStack_e4 * 0.0;
  fVar7 = fStack_b0 * 1.0 + fStack_c0 * 0.0 + (float)uStack_d0 * 0.0 + uStack_e4._4_4_ * 0.0;
  fVar11 = local_b8 * 1.0 + (float)local_c8 * 0.0 + uStack_dc._4_4_ * 1.0 + local_e8 * 0.0;
  fVar12 = fStack_b4 * 1.0 + local_c8._4_4_ * 0.0 + fStack_d4 * 1.0 + (float)uStack_e4 * 0.0;
  fVar13 = fStack_b0 * 1.0 + fStack_c0 * 0.0 + (float)uStack_d0 * 1.0 + uStack_e4._4_4_ * 0.0;
  fVar8 = local_b8 * 1.0 + (float)local_c8 * 0.0 + uStack_dc._4_4_ * 0.0 + local_e8 * 1.0;
  fVar9 = fStack_b4 * 1.0 + local_c8._4_4_ * 0.0 + fStack_d4 * 0.0 + (float)uStack_e4 * 1.0;
  fVar10 = fStack_b0 * 1.0 + fStack_c0 * 0.0 + (float)uStack_d0 * 0.0 + uStack_e4._4_4_ * 1.0;
  fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
  if (1e-08 < fVar2) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar5 = fVar5 * fVar3;
    fVar6 = fVar6 * fVar3;
    fVar7 = fVar7 * fVar3;
  }
  fVar2 = fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13;
  if (1e-08 < fVar2) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar11 = fVar11 * fVar3;
    fVar12 = fVar12 * fVar3;
    fVar13 = fVar13 * fVar3;
  }
  fVar2 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
  if (1e-08 < fVar2) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar8 = fVar8 * fVar3;
    fVar9 = fVar9 * fVar3;
    fVar10 = fVar10 * fVar3;
  }
  fVar2 = fVar5 * fVar11 + fVar6 * fVar12 + fVar7 * fVar13;
  if (-1.0 <= fVar2) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = -1.0;
  }
  fVar11 = _guard_xfg_dispatch_icall_nop(fVar2);
  fVar6 = fVar6 * fVar9 + fVar5 * fVar8 + fVar7 * fVar10;
  fVar2 = -1.0;
  if ((-1.0 <= fVar6) && (fVar2 = fVar6, 1.0 <= fVar6)) {
    fVar2 = 1.0;
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar2);
  param_2[1] = fVar11;
  *param_2 = fVar2;
  return param_2;
}



// FUNCTION 141c16a60 ComputeOutputDesc body=169 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassDiaphragmDOFDilateCoc::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar6 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar5);
  lVar4 = param_1[0x2a];
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
  if ((int)lVar4 == 1) {
    uVar8 = 0x15;
    pwVar9 = L"DOFDilateMinFgdCoc";
    pwVar7 = L"DOFDilateMaxBgdCoc";
  }
  else {
    pwVar9 = L"DOFDilateFgdCoc";
    uVar8 = 10;
    if (param_3 == 0) {
      uVar8 = 0xf;
    }
    pwVar7 = L"DOFDilateBgdCoc";
  }
  if (param_3 == 0) {
    pwVar7 = pwVar9;
  }
  param_2[8] = pwVar7;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar8;
  return param_2;
}



// FUNCTION 141c16b10 ComputeOutputDesc body=189 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassDiaphragmDOFDownsample::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
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
  *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) / 2;
  *(int *)(param_2 + 3) = *(int *)(param_2 + 3) / 2;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10000;
  param_2[8] = L"DOFDownsample";
  if (param_3 == 0) {
    uVar1 = 10;
    if (*(char *)((longlong)param_1 + 0x13c) != '\0') {
      uVar1 = 0x1a;
    }
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar1;
    return param_2;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x15;
  return param_2;
}



// FUNCTION 141c16bd0 ComputeOutputDesc body=256 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassDiaphragmDOFFlattenCoc::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int iStack_44;
  int iStack_40;
  
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0);
  lVar4 = FRenderingCompositeOutputRef::GetOutput(uVar3);
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  *param_2 = 1;
  iStack_44 = (int)((ulonglong)uVar3 >> 0x20);
  iStack_40 = (int)uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[8] = L"UnknownTexture";
  param_2[4] = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  uVar3 = uRam0000000146ab6930;
  *param_2 = _DAT_146ab6928;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = DAT_146ab6938;
  pwVar5 = L"DOFFlattenBgdCoc";
  *(int *)(param_2 + 3) = (int)((iStack_40 + 7 >> 0x1f & 7U) + iStack_40 + 7) >> 3;
  *(int *)((longlong)param_2 + 0x14) = (int)((iStack_44 + 7 >> 0x1f & 7U) + iStack_44 + 7) >> 3;
  if (param_3 == 0) {
    pwVar5 = L"DOFFlattenFgdCoc";
  }
  param_2[8] = pwVar5;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  uVar2 = 10;
  if (param_3 == 0) {
    uVar2 = 0xf;
  }
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x10001;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  return param_2;
}



// FUNCTION 141c16cd0 ComputeOutputDesc body=257 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassDiaphragmDOFGather::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  
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
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x204);
  *(int *)(param_2 + 3) = (int)param_1[0x41];
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10001;
  *(undefined2 *)((longlong)param_2 + 0x26) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  iVar1 = (int)param_1[0x3b];
  if (iVar1 == 0) {
    pwVar4 = L"DOFGatherForeground";
  }
  else if (iVar1 == 1) {
    pwVar4 = L"DOFGatherForegroundFill";
  }
  else if (iVar1 == 2) {
    if (param_3 == 0) {
      pwVar4 = L"DOFGatherBackground";
    }
    else {
      if (param_3 != 2) {
        return param_2;
      }
      if (*(int *)((longlong)param_1 + 0x1dc) != 2) {
        return param_2;
      }
      pwVar4 = L"DOFScatterOcclusionBackground";
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0xf;
    }
  }
  else if (iVar1 == 4) {
    pwVar4 = L"DOFGatherFocus";
  }
  else {
    pwVar4 = L"DOFGatherForeground";
    if (param_3 == 1) {
      pwVar4 = L"DOFGatherBackground";
    }
  }
  param_2[8] = pwVar4;
  return param_2;
}



// FUNCTION 141c16de0 ComputeOutputDesc body=90 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassDiaphragmDOFHybridScatter::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

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
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10000;
  param_2[8] = L"DOFHybridScatterBgd";
  return param_2;
}



// FUNCTION 141c16e40 ComputeOutputDesc body=102 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassDiaphragmDOFPostfilter::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
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
  uVar4 = DAT_146a9dab0;
  uVar5 = puVar6[8];
  uVar3 = puVar6[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar5;
  param_2[9] = uVar3;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10000;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0xffefffff;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  return param_2;
}



// FUNCTION 141c16eb0 ComputeOutputDesc body=106 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassDiaphragmDOFRecombine::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

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
  param_2[8] = L"DOFRecombine";
  *(undefined1 *)(param_2 + 7) = 0;
  return param_2;
}



// FUNCTION 141c16f20 ComputeOutputDesc body=244 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassDiaphragmDOFReduce::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  
  uVar7 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar8 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar7);
  uVar1 = *(undefined2 *)((longlong)param_1 + 0x144);
  uVar7 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  *param_2 = *puVar8;
  param_2[1] = uVar7;
  uVar7 = puVar8[4];
  uVar4 = puVar8[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = puVar8[6];
  uVar3 = puVar8[7];
  param_2[4] = uVar7;
  param_2[5] = uVar4;
  uVar7 = puVar8[8];
  uVar4 = puVar8[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = uVar7;
  param_2[9] = uVar4;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0xffefffff;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10000;
  param_2[8] = L"DOFReduce";
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9daac;
  *(undefined2 *)((longlong)param_2 + 0x26) = uVar1;
  iVar5 = 1 << ((char)uVar1 - 1U & 0x1f);
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  iVar9 = 8;
  if (7 < iVar5) {
    iVar9 = iVar5;
  }
  iVar5 = *(int *)((longlong)param_2 + 0x14) + -1 + iVar9;
  *(int *)((longlong)param_2 + 0x14) = iVar5 - iVar5 % iVar9;
  iVar5 = *(int *)(param_2 + 3) + -1 + iVar9;
  *(int *)(param_2 + 3) = iVar5 - iVar5 % iVar9;
  if (param_3 == 1) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x15;
  }
  if ((char)param_1[0x2c] != '\0') {
    uVar6 = 0x15;
    if (param_3 == 0) {
      uVar6 = 0x1a;
    }
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
  }
  return param_2;
}



// FUNCTION 141c17020 ComputeOutputDesc body=209 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassDiaphragmDOFSetup::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar2 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar1);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  uVar1 = puVar2[5];
  param_2[4] = puVar2[4];
  param_2[5] = uVar1;
  uVar1 = puVar2[7];
  param_2[6] = puVar2[6];
  param_2[7] = uVar1;
  uVar1 = puVar2[9];
  param_2[8] = puVar2[8];
  param_2[9] = uVar1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  iVar4 = (param_3 != 0) + 1;
  *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) / iVar4;
  *(int *)(param_2 + 3) = *(int *)(param_2 + 3) / iVar4;
  pwVar3 = L"DOFHalfResSetup";
  if (param_3 == 0) {
    pwVar3 = L"DOFFullResSetup";
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0xffefffff;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | 0x10000;
  param_2[8] = pwVar3;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | _DAT_146a9daa8;
  if (param_3 == 2) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x15;
  }
  return param_2;
}



// FUNCTION 141c17100 ComputeOutputDesc body=112 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessAA::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

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
  param_2[8] = L"PostProcessFXAA";
  return param_2;
}



// FUNCTION 141c17170 ComputeOutputDesc body=137 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 * FRCPassPostProcessBloomSetup::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar6 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar5);
  cVar1 = *(char *)((longlong)param_1 + 10);
  uVar5 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  uVar5 = puVar6[4];
  uVar4 = puVar6[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = puVar6[6];
  uVar3 = puVar6[7];
  param_2[4] = uVar5;
  param_2[5] = uVar4;
  uVar5 = puVar6[8];
  uVar4 = puVar6[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = uVar5;
  param_2[9] = uVar4;
  param_2[8] = L"BloomSetup";
  *(undefined2 *)(param_2 + 5) = 1;
  uVar7 = 1;
  if (cVar1 != '\0') {
    uVar7 = 0x10000;
  }
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  *(uint *)((longlong)param_2 + 0x34) = uVar7 | *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  return param_2;
}



// FUNCTION 141c17200 FUN_141c17200 body=158 status=ok
// SIG undefined FUN_141c17200(void)

undefined8 * FUN_141c17200(longlong *param_1,undefined8 *param_2)

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
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  uVar12 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar13 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar12);
  uVar12 = puVar13[1];
  uVar9 = puVar13[2];
  uVar10 = puVar13[3];
  *param_2 = *puVar13;
  param_2[1] = uVar12;
  uVar12 = puVar13[4];
  uVar11 = puVar13[5];
  param_2[2] = uVar9;
  param_2[3] = uVar10;
  uVar1 = *(undefined4 *)(puVar13 + 6);
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x34);
  uVar3 = *(undefined4 *)(puVar13 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar13 + 0x3c);
  param_2[4] = uVar12;
  param_2[5] = uVar11;
  uVar5 = *(undefined4 *)(puVar13 + 8);
  uVar6 = *(undefined4 *)((longlong)puVar13 + 0x44);
  uVar7 = *(undefined4 *)(puVar13 + 9);
  uVar8 = *(undefined4 *)((longlong)puVar13 + 0x4c);
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
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  lVar14 = FSceneRenderTargets::Get();
  uVar12 = *(undefined8 *)(lVar14 + 0x378);
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da28;
  *(uint *)(param_2 + 3) = ((int)((ulonglong)uVar12 >> 0x20) + 1U & 0xfffffffe) + 0x28;
  param_2[8] = L"BokehDOF";
  return param_2;
}



// FUNCTION 141c172a0 ComputeOutputDesc body=146 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessBokehDOFRecombine::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar5 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar6 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar5);
  cVar1 = *(char *)((longlong)param_1 + 10);
  uVar5 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  uVar5 = puVar6[4];
  uVar4 = puVar6[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = puVar6[6];
  uVar3 = puVar6[7];
  param_2[4] = uVar5;
  param_2[5] = uVar4;
  uVar5 = puVar6[8];
  uVar4 = puVar6[9];
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  param_2[8] = uVar5;
  param_2[9] = uVar4;
  *(undefined2 *)(param_2 + 5) = 1;
  uVar7 = 1;
  if (cVar1 != '\0') {
    uVar7 = 0x10000;
  }
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  *(uint *)((longlong)param_2 + 0x34) = uVar7 | *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  param_2[8] = L"BokehDOFRecombine";
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da28;
  return param_2;
}



// FUNCTION 141c17340 ComputeOutputDesc body=205 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessBokehDOFSetup::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar4 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar3);
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
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  *(undefined1 *)(param_2 + 7) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x14) / 2;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  iVar2 = *(int *)(param_2 + 3) / 2;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar1;
  uVar5 = 1;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffefffe;
  *(int *)(param_2 + 3) = iVar2;
  param_2[8] = L"BokehDOFSetup";
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    uVar5 = 0x10000;
  }
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) | uVar5;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da28;
  return param_2;
}



// FUNCTION 141c17410 FUN_141c17410 body=131 status=ok
// SIG undefined FUN_141c17410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141c17410(longlong *param_1,undefined8 *param_2)

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
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  uVar4 = DAT_1464c9c98;
  *param_2 = uVar5;
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 2) = uVar4;
  param_2[8] = L"BrightnessCalibration";
  return param_2;
}



// FUNCTION 141c174e0 ComputeOutputDesc body=262 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessCircleDOF::ComputeOutputDesc(longlong *param_1,undefined8 *param_2,int param_3)

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
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  
  uVar14 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar15 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar14);
  uVar14 = puVar15[1];
  uVar9 = puVar15[2];
  uVar10 = puVar15[3];
  *param_2 = *puVar15;
  param_2[1] = uVar14;
  uVar14 = puVar15[4];
  uVar11 = puVar15[5];
  param_2[2] = uVar9;
  param_2[3] = uVar10;
  uVar1 = *(undefined4 *)(puVar15 + 6);
  uVar2 = *(undefined4 *)((longlong)puVar15 + 0x34);
  uVar3 = *(undefined4 *)(puVar15 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar15 + 0x3c);
  param_2[4] = uVar14;
  param_2[5] = uVar11;
  uVar5 = *(undefined4 *)(puVar15 + 8);
  uVar6 = *(undefined4 *)((longlong)puVar15 + 0x44);
  uVar7 = *(undefined4 *)(puVar15 + 9);
  uVar8 = *(undefined4 *)((longlong)puVar15 + 0x4c);
  *(undefined4 *)(param_2 + 6) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 7) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
  *(undefined4 *)(param_2 + 8) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar6;
  *(undefined4 *)(param_2 + 9) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar8;
  *(undefined2 *)(param_2 + 5) = 1;
  iVar13 = *(int *)((longlong)param_2 + 0x14);
  if (*(int *)((longlong)param_2 + 0x14) < 2) {
    iVar13 = 1;
  }
  *(undefined1 *)(param_2 + 7) = 0;
  *(int *)((longlong)param_2 + 0x14) = iVar13;
  iVar13 = *(int *)(param_2 + 3);
  *(undefined1 *)(param_2 + 9) = 1;
  if (iVar13 < 2) {
    iVar13 = 1;
  }
  *(int *)(param_2 + 3) = iVar13;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da2c;
  cVar12 = FUN_141c49c20();
  if (cVar12 == '\0') {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
    pwVar16 = L"CircleDOF1";
    if (param_3 == 0) {
      pwVar16 = L"CircleDOF0";
    }
  }
  else {
    if (param_3 != 0) {
      if (param_3 != 1) {
        return param_2;
      }
      param_2[8] = L"CircleDOFCoc";
      uVar14 = (**(code **)(*param_1 + 8))(param_1,1);
      lVar17 = FRenderingCompositeOutputRef::GetOutput(uVar14);
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(lVar17 + 0x2c);
      return param_2;
    }
    pwVar16 = L"CircleDOFSceneColor";
  }
  param_2[8] = pwVar16;
  return param_2;
}



// FUNCTION 141c175f0 ComputeOutputDesc body=186 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessCircleDOFDilate::ComputeOutputDesc
          (longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  
  uVar3 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar4 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar3);
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
  iVar1 = *(int *)((longlong)param_2 + 0x14) / 2;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x15;
  iVar2 = *(int *)(param_2 + 3) / 2;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar1;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 3) = iVar2;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  pwVar5 = L"CircleDOFDilate1";
  if (param_3 == 0) {
    pwVar5 = L"CircleDOFDilate0";
  }
  param_2[8] = pwVar5;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da2c;
  return param_2;
}



// FUNCTION 141c176b0 ComputeOutputDesc body=112 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessCircleDOFRecombine::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

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
  param_2[8] = L"CircleDOFRecombine";
  return param_2;
}



// FUNCTION 141c17720 ComputeOutputDesc body=262 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessCircleDOFSetup::ComputeOutputDesc
          (longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  
  uVar7 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar8 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar7);
  uVar7 = puVar8[1];
  *param_2 = *puVar8;
  param_2[1] = uVar7;
  uVar7 = puVar8[3];
  param_2[2] = puVar8[2];
  param_2[3] = uVar7;
  uVar7 = puVar8[5];
  param_2[4] = puVar8[4];
  param_2[5] = uVar7;
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x34);
  uVar2 = *(undefined4 *)(puVar8 + 7);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x3c);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar8 + 6);
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar1;
  *(undefined4 *)(param_2 + 7) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x44);
  uVar2 = *(undefined4 *)(puVar8 + 9);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x4c);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar8 + 8);
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar1;
  *(undefined4 *)(param_2 + 9) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar3;
  iVar5 = *(int *)((longlong)param_2 + 0x14) / 2;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  iVar6 = *(int *)(param_2 + 3) / 2;
  *(undefined2 *)(param_2 + 5) = 1;
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar5;
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  *(int *)(param_2 + 3) = iVar6;
  *(uint *)((longlong)param_2 + 0x34) = *(uint *)((longlong)param_2 + 0x34) & 0xfffeffff | 1;
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da2c;
  cVar4 = FUN_141c49c20();
  if (cVar4 == '\0') {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
    pwVar9 = L"CircleDOFSetup1";
    if (param_3 == 0) {
      pwVar9 = L"CircleDOFSetup0";
    }
    param_2[8] = pwVar9;
  }
  else {
    if (param_3 == 0) {
      param_2[8] = L"CircleDOFSceneColorSetup";
      return param_2;
    }
    if (param_3 == 1) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0xd;
      param_2[8] = L"CircleDOFSetup0";
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 141c17830 FUN_141c17830 body=392 status=ok
// SIG undefined FUN_141c17830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141c17830(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[8] = L"UnknownTexture";
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[4] = 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined2 *)(param_2 + 9) = 1;
  uVar8 = 1;
  if (*(char *)(param_1 + 10) != '\0') {
    uVar8 = 0x10000;
  }
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar8;
  uVar7 = DAT_1464c9cc8;
  uVar6 = DAT_1464c9cc4;
  uVar5 = uRam00000001464c9cc0;
  uVar8 = uRam00000001464c9cbc;
  iVar4 = DAT_1464c2250;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    pwVar9 = L"DummyLUT";
  }
  else {
    iVar10 = DAT_1464c2250 * DAT_1464c2250;
    uVar11 = 0x25;
    if (DAT_1464ca4a0 != '\0') {
      uVar11 = 0x12;
    }
    cVar1 = *(char *)(param_1 + 10);
    *(undefined4 *)param_2 = _DAT_1464c9cb8;
    *(undefined4 *)((longlong)param_2 + 4) = uVar8;
    *(undefined4 *)(param_2 + 1) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
    *(undefined4 *)(param_2 + 2) = uVar7;
    *(int *)((longlong)param_2 + 0x14) = iVar10;
    *(int *)(param_2 + 3) = iVar4;
    uVar8 = 9;
    if (cVar1 != '\0') {
      uVar8 = 0x10008;
    }
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar8;
    param_2[8] = L"UnknownTexture2D";
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 4) = 1;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0x10000;
    *(undefined2 *)(param_2 + 5) = 1;
    *(undefined4 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 7) = 0;
    *(undefined2 *)(param_2 + 9) = 1;
    uVar2 = *(uint *)(param_1 + 0xb0);
    iVar10 = FUN_1419ef5f0(uVar2);
    iVar4 = DAT_1464c2250;
    if (((1 < iVar10) && (DAT_1464c9c1a != '\0')) &&
       ((0x1d < uVar2 || ((0x20221800U >> (uVar2 & 0x1f) & 1) == 0)))) {
      *(int *)((longlong)param_2 + 0x14) = DAT_1464c2250;
      *(int *)(param_2 + 3) = iVar4;
      *(int *)((longlong)param_2 + 0x1c) = DAT_1464c2250;
    }
    *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) | DAT_146a9da30;
    pwVar9 = L"CombineLUTs";
  }
  param_2[8] = pwVar9;
  uVar3 = CONCAT44(DAT_1464c9cc4,uRam00000001464c9cc0);
  *param_2 = CONCAT44(uRam00000001464c9cbc,_DAT_1464c9cb8);
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = DAT_1464c9cc8;
  return param_2;
}



// FUNCTION 141c179c0 ConstructCompiledInstance body=202 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCompositeMonoscopicFarFieldViewPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e08ba8;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    FUN_141cdf500(param_1);
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"MonoColorTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"MonoColorTextureSampler",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17a90 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCompositeMonoscopicFarFieldViewVS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"LateralOffsetNDC",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17b00 FUN_141c17b00 body=188 status=ok
// SIG undefined FUN_141c17b00(void)

undefined8 * FUN_141c17b00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12ce0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FUN_141c0ba40((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18));
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CombineLUTsComputeParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17bc0 FUN_141c17bc0 body=188 status=ok
// SIG undefined FUN_141c17bc0(void)

undefined8 * FUN_141c17bc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12d10;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FUN_141c0c250((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18));
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CombineLUTsComputeParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17c80 FUN_141c17c80 body=188 status=ok
// SIG undefined FUN_141c17c80(void)

undefined8 * FUN_141c17c80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12d40;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FUN_141c0c970((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18));
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CombineLUTsComputeParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17d40 FUN_141c17d40 body=188 status=ok
// SIG undefined FUN_141c17d40(void)

undefined8 * FUN_141c17d40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12d70;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FUN_141c0d0b0((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18));
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CombineLUTsComputeParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17e00 FUN_141c17e00 body=188 status=ok
// SIG undefined FUN_141c17e00(void)

undefined8 * FUN_141c17e00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12da0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FUN_141c0d7f0((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18));
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex");
    FShaderParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"CombineLUTsComputeParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17ec0 FUN_141c17ec0 body=93 status=ok
// SIG undefined FUN_141c17ec0(void)

undefined8 * FUN_141c17ec0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12ae0;
    FUN_141c0ba40(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17f20 FUN_141c17f20 body=93 status=ok
// SIG undefined FUN_141c17f20(void)

undefined8 * FUN_141c17f20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12b10;
    FUN_141c0c250(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17f80 FUN_141c17f80 body=93 status=ok
// SIG undefined FUN_141c17f80(void)

undefined8 * FUN_141c17f80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12bd0;
    FUN_141c0c970(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c17fe0 FUN_141c17fe0 body=93 status=ok
// SIG undefined FUN_141c17fe0(void)

undefined8 * FUN_141c17fe0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12c80;
    FUN_141c0d0b0(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18040 FUN_141c18040 body=93 status=ok
// SIG undefined FUN_141c18040(void)

undefined8 * FUN_141c18040(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12cb0;
    FUN_141c0d7f0(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c180a0 ConstructCompiledInstance body=280 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMonoscopicFarFieldMaskPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e135f8;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    FUN_141cdf500(param_1);
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"MobileSceneColorTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),
               L"MobileSceneColorTextureSampler",0);
    FShaderParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"LeftViewWidthNDC",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xde,*(undefined8 *)(param_1 + 0x18),L"LateralOffsetNDC",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c181c0 FUN_141c181c0 body=46 status=ok
// SIG undefined FUN_141c181c0(void)

void FUN_141c181c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1f8);
  if (lVar1 != 0) {
    FPostProcessAntiAliasingPS<1>::FPostProcessAntiAliasingPS<1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c181f0 FUN_141c181f0 body=46 status=ok
// SIG undefined FUN_141c181f0(void)

void FUN_141c181f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x1f8);
  if (lVar1 != 0) {
    FUN_141c10ae0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c18220 ConstructCompiledInstance body=373 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBokehDOFRecombinePS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11f68;
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
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),
               L"SeparateTranslucencyResMult",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18),L"LowResDepthTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1dc,*(undefined8 *)(param_1 + 0x18),L"BilinearClampedSampler",0)
    ;
    FShaderResourceParameter::Bind
              (puVar1 + 0x3c,*(undefined8 *)(param_1 + 0x18),L"PointClampedSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c183a0 ConstructCompiledInstance body=344 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBokehDOFVS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11be8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1da) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined2 *)(puVar1 + 0x3c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1e2) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"TileCountAndSize",0);
    FShaderParameter::Bind((longlong)puVar1 + 0x1c2,*(undefined8 *)(param_1 + 0x18),L"KernelSize",0)
    ;
    FShaderParameter::Bind(puVar1 + 0x39,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1ce,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldThresholds",0)
    ;
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1d4),(longlong)puVar1 + 0x1dc);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18500 ConstructCompiledInstance body=231 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessCircleDOFDilatePS<1>::ConstructCompiledInstance(longlong param_1)

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
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c185f0 ConstructCompiledInstance body=268 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessCircleDOFPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"RandomOffset",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18700 ConstructCompiledInstance body=268 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessCircleDOFRecombinePS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldUVLimit",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"RandomOffset",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18810 FUN_141c18810 body=46 status=ok
// SIG undefined FUN_141c18810(void)

void FUN_141c18810(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x130);
  if (lVar1 != 0) {
    FUN_141c10c80(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c18840 ConstructCompiledInstance body=160 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCompositeLUTGenerationPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12340;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xca) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"OutputDevice",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"MaxTVNits",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c188e0 FUN_141c188e0 body=46 status=ok
// SIG undefined FUN_141c188e0(void)

void FUN_141c188e0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xf8);
  if (lVar1 != 0) {
    FUN_141c10f50(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c18910 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FFXAAVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"fxaaQualityRcpFrame",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18980 FUN_141c18980 body=103 status=ok
// SIG undefined FUN_141c18980(void)

undefined8 * FUN_141c18980(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7048;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a63350,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c189f0 FUN_141c189f0 body=46 status=ok
// SIG undefined FUN_141c189f0(void)

void FUN_141c189f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FUN_141c113c0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c18a20 ConstructCompiledInstance body=235 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBloomSetupCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12c00;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptation",0);
    FShaderParameter::Bind
              (puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"BloomSetupComputeParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1c6,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18b10 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBloomSetupPS::ConstructCompiledInstance(longlong param_1)

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
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"BloomThreshold",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18bc0 ConstructCompiledInstance body=159 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBloomSetupVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12ba0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"EyeAdaptation",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18c60 ConstructCompiledInstance body=203 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBokehDOFPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11b10;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"LensTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x38,*(undefined8 *)(param_1 + 0x18),L"LensTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18d30 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessBusyWaitPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e13210;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"GPUBusyWait",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18de0 ConstructCompiledInstance body=248 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessCocDilateCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x210);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e133a0;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x206) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x20e) = 0;
    FShaderParameter::Bind(puVar1 + 0x3f,*(undefined8 *)(param_1 + 0x18),L"SampleOffsetMultipler",0)
    ;
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1fe,*(undefined8 *)(param_1 + 0x18),L"fSampleOffsetMultipler",0)
    ;
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x204,*(undefined8 *)(param_1 + 0x18),
               L"CocRadiusToBucketDistanceUpperBound",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x20a,*(undefined8 *)(param_1 + 0x18),L"BucketDistanceToCocRadius"
               ,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18ee0 ConstructCompiledInstance body=200 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessCocFlattenCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x210);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e13258;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x206) = 0;
    FShaderParameter::Bind(puVar1 + 0x3f,*(undefined8 *)(param_1 + 0x18),L"ThreadIdToBufferUV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1fe,*(undefined8 *)(param_1 + 0x18),L"MaxBufferUV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x204,*(undefined8 *)(param_1 + 0x18),
               L"PreProcessingToProcessingCocRadiusFactor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c18fb0 ConstructCompiledInstance body=322 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDiaphragmDOFBuildBokehLUTCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x220);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11898;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x206) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x20e) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x216) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x21a) = 0;
    FShaderParameter::Bind(puVar1 + 0x3f,*(undefined8 *)(param_1 + 0x18),L"BladeCount",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1fe,*(undefined8 *)(param_1 + 0x18),L"DiaphragmRotation",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x204,*(undefined8 *)(param_1 + 0x18),
               L"CocRadiusToCircumscribedRadius",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x20a,*(undefined8 *)(param_1 + 0x18),L"CocRadiusToIncircleRadius"
               ,0);
    FShaderParameter::Bind(puVar1 + 0x42,*(undefined8 *)(param_1 + 0x18),L"DiaphragmBladeRadius",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x216,*(undefined8 *)(param_1 + 0x18),
               L"DiaphragmBladeCenterOffset",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19100 ConstructCompiledInstance body=160 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDiaphragmDOFDownsampleCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x208);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11848;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x202) = 0;
    FShaderParameter::Bind(puVar1 + 0x3f,*(undefined8 *)(param_1 + 0x18),L"MaxBufferUV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1fe,*(undefined8 *)(param_1 + 0x18),L"OutputCocRadiusMultiplier"
               ,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c191a0 FUN_141c191a0 body=46 status=ok
// SIG undefined FUN_141c191a0(void)

void FUN_141c191a0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x228);
  if (lVar1 != 0) {
    FPostProcessDiaphragmDOFGatherCS::FPostProcessDiaphragmDOFGatherCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c191d0 ConstructCompiledInstance body=201 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDiaphragmDOFHybridScatterPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x208);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11a68;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x206) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x3f,*(undefined8 *)(param_1 + 0x18),L"CocRadiusToCircumscribedRadius",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1fe,*(undefined8 *)(param_1 + 0x18),L"ScatteringScaling",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x204,*(undefined8 *)(param_1 + 0x18),L"ScatterDrawList",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c192a0 ConstructCompiledInstance body=160 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDiaphragmDOFPostfilterCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x208);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11848;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x202) = 0;
    FShaderParameter::Bind(puVar1 + 0x3f,*(undefined8 *)(param_1 + 0x18),L"MaxInputBufferUV",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1fe,*(undefined8 *)(param_1 + 0x18),L"MinGatherRadius",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19340 ConstructCompiledInstance body=280 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDiaphragmDOFRecombineCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x220);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123a8;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined4 *)(puVar1 + 0x40) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x204) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x206) = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    FUN_141cdf500(param_1);
    FShaderParameter::Bind(puVar1 + 0x41,*(undefined8 *)(param_1 + 0x18),L"TemporalJitterPixels",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x20e,*(undefined8 *)(param_1 + 0x18),L"CocModelParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x214,*(undefined8 *)(param_1 + 0x18),L"DepthBlurParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x21a,*(undefined8 *)(param_1 + 0x18),L"DOFBufferUVMax",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19460 FUN_141c19460 body=46 status=ok
// SIG undefined FUN_141c19460(void)

void FUN_141c19460(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x228);
  if (lVar1 != 0) {
    FPostProcessDiaphragmDOFReduceCS::FPostProcessDiaphragmDOFReduceCS(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141c19490 ConstructCompiledInstance body=200 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessDiaphragmDOFSetupCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x210);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader
              (puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e13258;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1fe) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x206) = 0;
    FShaderParameter::Bind(puVar1 + 0x3f,*(undefined8 *)(param_1 + 0x18),L"CocModelParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1fe,*(undefined8 *)(param_1 + 0x18),L"DepthBlurParameters",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x204,*(undefined8 *)(param_1 + 0x18),L"CocRadiusBasis",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19560 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessVisualizeBloomOverlayPS::ConstructCompiledInstance(longlong param_1)

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
              ((longlong)puVar1 + 0x1bc,*(undefined8 *)(param_1 + 0x18),L"ColorScale1",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19610 ConstructCompiledInstance body=268 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FRCPassPostProcessBokehDOFSetupCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),
               L"BokehDOFSetupComputeParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"OutComputeTex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19720 ConstructCompiledInstance body=365 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * PostProcessVisualizeDOFPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12e10;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined2 *)(puVar1 + 0x3c) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),L"DepthOfFieldParams",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1de,*(undefined8 *)(param_1 + 0x18),L"MiniFontTexture",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d2,*(undefined8 *)(param_1 + 0x18),L"VisualizeColors",0);
    FShaderParameter::Bind(puVar1 + 0x3b,*(undefined8 *)(param_1 + 0x18),L"CursorPos",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19890 FUN_141c19890 body=91 status=ok
// SIG undefined FUN_141c19890(void)

undefined8 * FUN_141c19890(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12ce0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FKrakenClientData::FKrakenClientData((longlong)puVar1 + 0xce);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c198f0 FUN_141c198f0 body=91 status=ok
// SIG undefined FUN_141c198f0(void)

undefined8 * FUN_141c198f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12d10;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FKrakenClientData::FKrakenClientData((longlong)puVar1 + 0xce);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19950 FUN_141c19950 body=91 status=ok
// SIG undefined FUN_141c19950(void)

undefined8 * FUN_141c19950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12d40;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FKrakenClientData::FKrakenClientData((longlong)puVar1 + 0xce);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c199b0 FUN_141c199b0 body=91 status=ok
// SIG undefined FUN_141c199b0(void)

undefined8 * FUN_141c199b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12d70;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FKrakenClientData::FKrakenClientData((longlong)puVar1 + 0xce);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19a10 FUN_141c19a10 body=91 status=ok
// SIG undefined FUN_141c19a10(void)

undefined8 * FUN_141c19a10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12da0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FKrakenClientData::FKrakenClientData((longlong)puVar1 + 0xce);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19a70 FUN_141c19a70 body=69 status=ok
// SIG undefined FUN_141c19a70(void)

undefined8 * FUN_141c19a70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12ae0;
    FKrakenClientData::FKrakenClientData(puVar1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19ac0 FUN_141c19ac0 body=69 status=ok
// SIG undefined FUN_141c19ac0(void)

undefined8 * FUN_141c19ac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12b10;
    FKrakenClientData::FKrakenClientData(puVar1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19b10 FUN_141c19b10 body=69 status=ok
// SIG undefined FUN_141c19b10(void)

undefined8 * FUN_141c19b10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12bd0;
    FKrakenClientData::FKrakenClientData(puVar1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19b60 FUN_141c19b60 body=69 status=ok
// SIG undefined FUN_141c19b60(void)

undefined8 * FUN_141c19b60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12c80;
    FKrakenClientData::FKrakenClientData(puVar1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19bb0 FUN_141c19bb0 body=69 status=ok
// SIG undefined FUN_141c19bb0(void)

undefined8 * FUN_141c19bb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x218);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12cb0;
    FKrakenClientData::FKrakenClientData(puVar1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19c00 ConstructSerializedInstance body=117 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FMonoscopicFarFieldMaskPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e135f8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19c80 ConstructSerializedInstance body=126 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessAntiAliasingPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12828;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1e4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1ec) = 0;
    *(undefined2 *)(puVar1 + 0x3e) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19d00 FUN_141c19d00 body=170 status=ok
// SIG undefined FUN_141c19d00(void)

undefined8 * FUN_141c19d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12170;
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
    *(undefined8 *)((longlong)puVar1 + 0x1ec) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19db0 FUN_141c19db0 body=130 status=ok
// SIG undefined FUN_141c19db0(void)

undefined8 * FUN_141c19db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11f68;
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
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19e40 ConstructSerializedInstance body=130 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessBokehDOFVS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11be8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    puVar1[0x3a] = 0;
    *(undefined2 *)(puVar1 + 0x3b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1da) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined2 *)(puVar1 + 0x3c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1e2) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19ed0 ConstructSerializedInstance body=122 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessCircleDOFPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e123f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1d4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19f50 FUN_141c19f50 body=36 status=ok
// SIG undefined FUN_141c19f50(void)

void FUN_141c19f50(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x130);
  if (lVar1 != 0) {
    FPrefilterPlanarReflectionPS<1>::FPrefilterPlanarReflectionPS<1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141c19f80 FUN_141c19f80 body=72 status=ok
// SIG undefined FUN_141c19f80(void)

undefined8 * FUN_141c19f80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12340;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c19fd0 FUN_141c19fd0 body=108 status=ok
// SIG undefined FUN_141c19fd0(void)

undefined8 * FUN_141c19fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e121a0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c1a040 FUN_141c1a040 body=36 status=ok
// SIG undefined FUN_141c1a040(void)

void FUN_141c1a040(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    FPlanarReflectionPS::FPlanarReflectionPS(lVar1);
    return;
  }
  return;
}



// FUNCTION 141c1a070 FUN_141c1a070 body=85 status=ok
// SIG undefined FUN_141c1a070(void)

undefined8 * FUN_141c1a070(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12c00;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c1a0d0 FUN_141c1a0d0 body=84 status=ok
// SIG undefined FUN_141c1a0d0(void)

undefined8 * FUN_141c1a0d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11800;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c1a130 ConstructSerializedInstance body=77 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessBloomSetupVS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e12ba0;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c1a180 ConstructSerializedInstance body=78 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessBokehDOFPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e11b10;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c1a1d0 FUN_141c1a1d0 body=84 status=ok
// SIG undefined FUN_141c1a1d0(void)

undefined8 * FUN_141c1a1d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1c8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e13210;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141c1a230 ConstructSerializedInstance body=80 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FPostProcessCocDilateCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x210);
  if (puVar1 != (undefined8 *)0x0) {
    `anonymous_namespace'::FPostProcessDiaphragmDOFShader::FPostProcessDiaphragmDOFShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e133a0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}


