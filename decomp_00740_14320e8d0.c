// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14320e8d0 FUN_14320e8d0 body=1028 status=ok
// SIG undefined FUN_14320e8d0(void)

void FUN_14320e8d0(longlong param_1,undefined8 *param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  float *pfVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *pfVar14;
  float *pfVar15;
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
  
  uVar11 = (ulonglong)param_5;
  fVar17 = *(float *)(param_1 + 0x3c);
  fVar27 = 0.0;
  fVar28 = **(float **)(param_1 + 0x30);
  fVar2 = (*(float **)(param_1 + 0x30))[1];
  uVar3 = *(ushort *)((longlong)param_2 + 0x12);
  fVar26 = 0.0;
  fVar16 = (float)uVar11;
  if (param_5 != 0) {
    pfVar14 = (float *)*param_2;
    pfVar15 = pfVar14 + uVar3;
    uVar12 = 0;
    do {
      fVar18 = 0.0;
      uVar13 = (ulonglong)(uint)uVar3;
      if (pfVar15 < pfVar14) {
        uVar13 = uVar12;
      }
      if (uVar13 != 0) {
        pfVar9 = pfVar14;
        uVar10 = uVar12;
        fVar18 = 0.0;
        if (7 < uVar13) {
          fVar18 = 0.0;
          fVar19 = 0.0;
          fVar20 = 0.0;
          fVar21 = 0.0;
          fVar22 = 0.0;
          fVar23 = 0.0;
          fVar24 = 0.0;
          fVar25 = 0.0;
          do {
            uVar10 = uVar10 + 8;
            fVar18 = fVar18 + *pfVar9 * *pfVar9;
            fVar19 = fVar19 + pfVar9[1] * pfVar9[1];
            fVar20 = fVar20 + pfVar9[2] * pfVar9[2];
            fVar21 = fVar21 + pfVar9[3] * pfVar9[3];
            pfVar1 = pfVar9 + 4;
            pfVar4 = pfVar9 + 5;
            pfVar5 = pfVar9 + 6;
            pfVar6 = pfVar9 + 7;
            pfVar9 = pfVar9 + 8;
            fVar22 = fVar22 + *pfVar1 * *pfVar1;
            fVar23 = fVar23 + *pfVar4 * *pfVar4;
            fVar24 = fVar24 + *pfVar5 * *pfVar5;
            fVar25 = fVar25 + *pfVar6 * *pfVar6;
          } while (uVar10 < (uVar13 & 0xfffffffffffffff8));
          fVar18 = fVar20 + fVar24 + fVar18 + fVar22 + fVar21 + fVar25 + fVar19 + fVar23;
        }
        if (uVar10 < uVar13) {
          if (3 < uVar13 - uVar10) {
            lVar7 = ((uVar13 - uVar10) - 4 >> 2) + 1;
            uVar10 = uVar10 + lVar7 * 4;
            do {
              fVar19 = *pfVar9;
              pfVar1 = pfVar9 + 1;
              pfVar4 = pfVar9 + 2;
              pfVar5 = pfVar9 + 3;
              pfVar9 = pfVar9 + 4;
              fVar18 = fVar18 + fVar19 * fVar19 + *pfVar1 * *pfVar1 + *pfVar4 * *pfVar4 +
                       *pfVar5 * *pfVar5;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          for (; uVar10 < uVar13; uVar10 = uVar10 + 1) {
            fVar19 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            fVar18 = fVar18 + fVar19 * fVar19;
          }
        }
      }
      pfVar14 = pfVar14 + *(ushort *)(param_2 + 2);
      pfVar15 = pfVar15 + *(ushort *)(param_2 + 2);
      fVar26 = fVar26 + fVar18 * (1.0 / (float)uVar3);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  fVar18 = fVar26 * (1.0 / fVar16) + 1e-25;
  fVar16 = (float)(((uint)fVar18 & 0x7fffff) + 0x3f800000);
  fVar26 = fVar16 + 1.0;
  param_3 = ((11.581186 / (fVar26 * fVar26 * fVar26)) * (fVar16 * fVar16 * fVar16 - 1.0) +
            ((float)((uint)fVar18 >> 0x17 & 0xff) - 127.0) * 3.0103) - param_3;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (param_3 - fVar28 < 0.0) {
    fVar17 = *(float *)(param_1 + 0x44);
  }
  param_3 = (fVar28 - param_3) * fVar17 + param_3;
  fVar17 = param_3 * param_4 * 0.05;
  if (-37.0 <= fVar17) {
    uVar8 = (uint)(longlong)(fVar17 * 27866352.0 + 1.0653532e+09);
    fVar17 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
    fVar17 = ((fVar17 * 0.32518977 + 0.020805772) * fVar17 + 0.65304345) *
             (float)(uVar8 & 0xff800000);
  }
  else {
    fVar17 = 0.0;
  }
  fVar28 = fVar28 * param_4 * 0.05;
  if (-37.0 <= fVar28) {
    uVar8 = (uint)(longlong)(fVar28 * 27866352.0 + 1.0653532e+09);
    fVar28 = (float)((uVar8 & 0x7fffff) + 0x3f800000);
    fVar27 = ((fVar28 * 0.32518977 + 0.020805772) * fVar28 + 0.65304345) *
             (float)(uVar8 & 0xff800000);
  }
  FUN_14320db50(param_2,param_2,fVar27,fVar17,*(undefined1 *)(param_1 + 0x4c));
  **(float **)(param_1 + 0x30) = param_3;
  *(float *)(*(longlong *)(param_1 + 0x30) + 4) = fVar2;
  return;
}



// FUNCTION 14320ed20 FUN_14320ed20 body=71 status=ok
// SIG undefined FUN_14320ed20(void)

void FUN_14320ed20(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5088;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14320ed70 FUN_14320ed70 body=40 status=ok
// SIG undefined FUN_14320ed70(void)

void FUN_14320ed70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5088;
    return;
  }
  return;
}



// FUNCTION 14320edf0 FUN_14320edf0 body=43 status=ok
// SIG undefined FUN_14320edf0(void)

undefined8 * FUN_14320edf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14320ee20 ApplyGainRamp body=384 status=ok
// SIG undefined ApplyGainRamp(void)

void AK::DSP::ApplyGainRamp(float *param_1,float param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = param_1 + param_4;
  if (3 < param_4) {
    pfVar2 = param_1 + (param_4 & 0xfffffffc);
    fVar7 = (param_3 - param_2) / (float)(param_4 & 0xfffffffc);
    fVar4 = fVar7 * 4.0;
    fVar5 = fVar7 + param_2 + fVar7;
    fVar6 = fVar7 + param_2;
    fVar7 = fVar5 + fVar7;
    fVar3 = param_2;
    for (; param_1 < pfVar2; param_1 = param_1 + 4) {
      *param_1 = *param_1 * fVar3;
      param_1[1] = param_1[1] * fVar6;
      param_1[2] = param_1[2] * fVar5;
      param_1[3] = param_1[3] * fVar7;
      fVar6 = fVar6 + fVar4;
      fVar5 = fVar5 + fVar4;
      fVar7 = fVar7 + fVar4;
      fVar3 = fVar3 + fVar4;
    }
  }
  if (param_1 < pfVar1) {
    if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      fVar6 = (param_3 - param_2) / (float)param_4;
      do {
        *param_1 = param_2 * *param_1;
        fVar5 = param_2 + fVar6 + fVar6;
        param_1[1] = (param_2 + fVar6) * param_1[1];
        fVar7 = fVar5 + fVar6;
        param_1[2] = fVar5 * param_1[2];
        param_2 = fVar7 + fVar6;
        param_1[3] = fVar7 * param_1[3];
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1 + -3);
    }
    if (param_1 < pfVar1) {
      fVar6 = param_2;
      do {
        *param_1 = fVar6 * *param_1;
        param_1 = param_1 + 1;
        fVar6 = fVar6 + (param_3 - param_2) / (float)param_4;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 14320efa0 FUN_14320efa0 body=40 status=ok
// SIG undefined FUN_14320efa0(void)

void FUN_14320efa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae50b8;
    return;
  }
  return;
}



// FUNCTION 14320efd0 Execute body=235 status=ok
// SIG undefined Execute(void)

void CAkGainFX::Execute(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(short *)((longlong)param_2 + 0x12) != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar2 + 8) * 0.05);
    fVar4 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(lVar2 + 0xc) * 0.05);
    AK::DSP::ApplyGain(param_2,*(undefined4 *)(param_1 + 0x18),fVar3,0);
    fVar1 = *(float *)(param_1 + 0x1c);
    if ((*(uint *)(param_2 + 1) & 0x8000) != 0) {
      lVar2 = *param_2 +
              (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) * (ulonglong)*(ushort *)(param_2 + 2)
              * 4;
      if (fVar4 == fVar1) {
        AK::DSP::ApplyGain(lVar2,fVar1,*(undefined2 *)((longlong)param_2 + 0x12));
      }
      else {
        AK::DSP::ApplyGainRamp(lVar2,fVar1,fVar4);
      }
    }
    *(float *)(param_1 + 0x18) = fVar3;
    *(float *)(param_1 + 0x1c) = fVar4;
  }
  return;
}



// FUNCTION 14320f0c0 Init body=116 status=ok
// SIG undefined Init(void)

undefined8
CAkGainFX::Init(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               undefined4 *param_5)

{
  float fVar1;
  
  *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_5 + 1);
  *(undefined4 *)(param_1 + 0x14) = *param_5;
  *(longlong *)(param_1 + 8) = param_4;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_4 + 8) * 0.05);
  *(float *)(param_1 + 0x18) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_4 + 0xc) * 0.05);
  *(float *)(param_1 + 0x1c) = fVar1;
  return 1;
}



// FUNCTION 14320f140 FUN_14320f140 body=43 status=ok
// SIG undefined FUN_14320f140(void)

undefined8 * FUN_14320f140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14320f170 Clone body=63 status=ok
// SIG undefined Clone(void)

void CAkGainFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5100;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 14320f1b0 FUN_14320f1b0 body=40 status=ok
// SIG undefined FUN_14320f1b0(void)

void FUN_14320f1b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5100;
    return;
  }
  return;
}



// FUNCTION 14320f280 FUN_14320f280 body=17 status=ok
// SIG undefined FUN_14320f280(void)

undefined8 FUN_14320f280(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  return 1;
}



// FUNCTION 14320f2a0 `scalar_deleting_destructor' body=119 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkHarmonizerFX::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ae5130;
  puVar1 = param_1 + 0x19;
  lVar2 = 2;
  do {
    puVar1 = puVar1 + -0xb;
    AK::MemoryMgr::StartProfileThreadUsage((long)puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 14320f320 FUN_14320f320 body=460 status=ok
// SIG undefined FUN_14320f320(void)

void FUN_14320f320(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x158)) {
  case 0:
    if (*(char *)(param_1 + 0x168) == '\0') {
      uVar3 = param_2 >> 0xc & 0xffff7;
      param_2 = param_2 & 0xf00 | param_2 - ((param_2 >> 0xc) - uVar3 >> 3) & 0xff | uVar3 << 0xc;
    }
    *(uint *)(param_1 + 0x1c0) = param_2;
    return;
  case 1:
    cVar2 = '\0';
    uVar3 = 4;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 2:
    cVar2 = '\0';
    uVar3 = 3;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar3 = 0xb;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 3:
    cVar2 = '\0';
    uVar3 = 7;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar3 = 0xf;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 4:
    cVar2 = '\0';
    uVar3 = 0x603;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar3 = 0x60b;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 5:
    cVar2 = '\0';
    uVar3 = 0x607;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar3 = 0x60f;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 6:
    cVar2 = '\0';
    uVar3 = 1;
    if (*(char *)(param_1 + 0x168) != '\0') {
      uVar3 = 9;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  default:
    goto switchD_14320f348_default;
  }
  *(char *)(param_1 + 0x1c0) = cVar2;
  *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xff;
  *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | uVar3 << 0xc | 0x100;
switchD_14320f348_default:
  return;
}



// FUNCTION 14320f510 CreateAkHarmonizerFX body=635 status=ok
// SIG undefined CreateAkHarmonizerFX(void)

undefined8 * CreateAkHarmonizerFX(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = 2;
    puVar3 = puVar1 + 3;
    *puVar1 = &PTR__scalar_deleting_destructor__145ae5130;
    puVar1[1] = 0;
    puVar1[2] = 0;
    do {
      DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::CAkResamplingPhaseVocoder(puVar3);
      puVar3 = puVar3 + 0xb;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    *(undefined1 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x124) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x25) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 300) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x26) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x134) = 0x3f800000;
    *(undefined1 *)(puVar1 + 0x27) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x144) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x29) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2a) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x15c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x164) = 0x400;
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x16c) = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x174) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x2f) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x30) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x184) = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x18c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x32) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x194) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x33) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x19c) = 0x3f800000;
    *(undefined1 *)(puVar1 + 0x34) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1a4) = 0;
    *(undefined4 *)(puVar1 + 0x35) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1ac) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x36) = 0x400;
    *(undefined2 *)((longlong)puVar1 + 0x1b4) = 0;
    *(undefined4 *)(puVar1 + 0x37) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    *(uint *)(puVar1 + 0x38) = *(uint *)(puVar1 + 0x38) & 0xff;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    puVar1[0x23] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14320f790 Execute body=2557 status=ok
// SIG undefined Execute(void)

void CAkHarmonizerFX::Execute(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  float local_a8;
  float local_a4 [31];
  ulonglong uVar8;
  
  CAkHarmonizerFXParams::GetParams(*(undefined8 *)(param_1 + 8),param_1 + 0x120);
  lVar6 = *(longlong *)(param_1 + 8);
  uVar8 = 0;
  iVar9 = 0;
  do {
    if (*(char *)(uVar8 + 8 + lVar6) != '\0') {
      if (((*(byte *)(lVar6 + 8) & 0x80) != 0) || ((*(byte *)(lVar6 + 9) & 0x40) != 0)) {
        TermPitchVoices(param_1);
        iVar4 = InitPitchVoices(param_1);
        if (iVar4 != 1) {
          return;
        }
        ResetPitchVoices(param_1);
        lVar6 = *(longlong *)(param_1 + 8);
      }
      bVar1 = *(byte *)(lVar6 + 8);
      if (((((bVar1 & 0x20) != 0) || ((bVar1 & 0x40) != 0)) || ((*(byte *)(lVar6 + 9) & 0x20) != 0))
         || (((bVar1 & 1) != 0 || ((bVar1 & 2) != 0)))) {
        TermPitchVoices(param_1);
        TermDryDelay(param_1);
        FUN_14320f320(param_1,*(undefined4 *)(param_2 + 8));
        uVar7 = *(uint *)(param_2 + 8);
        if ((*(char *)(param_1 + 0x154) == '\0') && (*(char *)(param_1 + 0x138) == '\0')) {
LAB_14320f8c8:
          uVar3 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x1c0);
          if (((uVar2 & uVar7) >> 0xc == 0) &&
             ((((char)uVar2 != (char)uVar7 || (((uVar2 ^ uVar7) & 0xf00) != 0)) ||
              (uVar7 >> 0xc != uVar2 >> 0xc)))) goto LAB_14320f8c8;
          uVar3 = 1;
        }
        *(undefined1 *)(param_1 + 0x1cc) = uVar3;
        iVar4 = InitPitchVoices(param_1);
        if (iVar4 != 1) {
          return;
        }
        iVar4 = InitDryDelay(param_1);
        if (iVar4 != 1) {
          return;
        }
        ResetPitchVoices(param_1);
        ResetDryDelay(param_1);
        lVar6 = *(longlong *)(param_1 + 8);
      }
      if ((*(byte *)(lVar6 + 8) & 4) != 0) {
        TermDryDelay(param_1);
        iVar4 = InitDryDelay(param_1);
        if (iVar4 != 1) {
          return;
        }
        ResetDryDelay(param_1);
        lVar6 = *(longlong *)(param_1 + 8);
      }
      bVar1 = *(byte *)(lVar6 + 9);
      if (((((bVar1 & 2) != 0) || ((bVar1 & 8) != 0)) || ((bVar1 & 4) != 0)) ||
         ((bVar1 & 0x10) != 0)) {
        if (*(int *)(param_1 + 0x120) == 0) {
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined8 *)(param_1 + 0xd0) = 0;
          }
        }
        else {
          if ((*(longlong *)(param_1 + 200) == 0) &&
             (iVar4 = DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
                                (param_1 + 200,*(undefined8 *)(param_1 + 0x10),
                                 *(undefined1 *)(param_1 + 0x1c0),0), iVar4 != 1)) {
            return;
          }
          DSP::ComputeBiquadCoefs
                    (local_res8,local_a4,&local_a8,local_res18,local_res20,
                     *(int *)(param_1 + 0x120) + -1,(float)*(uint *)(param_1 + 0x1c8),
                     *(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x124),
                     *(undefined4 *)(param_1 + 300));
          fVar10 = -local_res18[0];
          uVar7 = *(uint *)(param_1 + 0xe4);
          fVar11 = -local_res20[0];
          pfVar5 = *(float **)(param_1 + 0xd8);
          if (((uVar7 & 1) != 0) || (*(char *)(param_1 + 0xe8) != '\0')) {
            *pfVar5 = local_res8[0];
            pfVar5[1] = local_res8[0];
            pfVar5[2] = local_res8[0];
            pfVar5[3] = local_res8[0];
            pfVar5[4] = 0.0;
            pfVar5[5] = 0.0;
            pfVar5[6] = 0.0;
            fVar16 = fVar11 * local_a4[0];
            fVar15 = fVar10 * fVar11;
            fVar12 = fVar10 * fVar10;
            fVar14 = fVar10 * local_res8[0] + local_a4[0];
            pfVar5[7] = fVar14;
            pfVar5[10] = fVar14;
            pfVar5[8] = 0.0;
            pfVar5[9] = 0.0;
            fVar13 = fVar14 * fVar10 + local_a8 + fVar11 * local_res8[0];
            pfVar5[0xb] = fVar13;
            pfVar5[0xe] = fVar13;
            pfVar5[0xd] = fVar14;
            pfVar5[0xc] = 0.0;
            fVar14 = fVar10 * local_a4[0] + local_a8;
            pfVar5[0xf] = fVar13 * fVar10 + local_res8[0] * fVar15 + fVar16;
            pfVar5[0x11] = fVar14;
            pfVar5[0x10] = local_a4[0];
            fVar14 = fVar14 * fVar10 + fVar16;
            pfVar5[0x12] = fVar14;
            pfVar5[0x13] = (fVar14 + fVar16) * fVar10 + fVar11 * local_a8;
            pfVar5[0x15] = fVar10 * local_a8;
            fVar14 = fVar10 * local_a8 * fVar10;
            pfVar5[0x14] = local_a8;
            pfVar5[0x16] = fVar14 + fVar11 * local_a8;
            pfVar5[0x17] = ((local_a8 + local_a8) * fVar11 + fVar14) * fVar10;
            pfVar5[0x19] = fVar11 + fVar12;
            pfVar5[0x18] = fVar10;
            pfVar5[0x1a] = (fVar12 + fVar11 + fVar11) * fVar10;
            pfVar5[0x1b] = (fVar11 * 3.0 + fVar12) * fVar10 * fVar10 + fVar11 * fVar11;
            pfVar5[0x1c] = fVar11;
            pfVar5[0x1d] = fVar15;
            pfVar5[0x1e] = fVar11 * fVar11 + fVar10 * fVar15;
            pfVar5[0x1f] = (fVar11 * (fVar11 + fVar11) + fVar10 * fVar15) * fVar10;
            pfVar5 = pfVar5 + 0x20;
            if (*(char *)(param_1 + 0xe8) != '\0') goto LAB_14320fd04;
            uVar7 = *(uint *)(param_1 + 0xe4);
          }
          if ((uVar7 & 2) != 0) {
            pfVar5[1] = local_res8[0];
            fVar14 = fVar10 * local_res8[0] + local_a4[0];
            pfVar5[3] = local_res8[0];
            fVar13 = fVar10 * fVar10 + fVar11;
            *pfVar5 = 0.0;
            pfVar5[2] = 0.0;
            pfVar5[4] = local_res8[0];
            pfVar5[5] = fVar14;
            pfVar5[6] = local_res8[0];
            pfVar5[7] = fVar14;
            pfVar5[8] = local_a4[0];
            pfVar5[10] = local_a4[0];
            fVar14 = fVar10 * local_a4[0] + local_a8;
            pfVar5[9] = fVar14;
            pfVar5[0xb] = fVar14;
            pfVar5[0xc] = local_a8;
            pfVar5[0xe] = local_a8;
            pfVar5[0xd] = fVar10 * local_a8;
            pfVar5[0xf] = fVar10 * local_a8;
            pfVar5[0x10] = fVar10;
            pfVar5[0x11] = fVar13;
            pfVar5[0x12] = fVar10;
            pfVar5[0x13] = fVar13;
            pfVar5[0x14] = fVar11;
            pfVar5[0x15] = fVar10 * fVar11;
            pfVar5[0x16] = fVar11;
            pfVar5[0x17] = fVar10 * fVar11;
            pfVar5 = pfVar5 + 0x18;
            uVar7 = *(uint *)(param_1 + 0xe4);
          }
          if (3 < uVar7) {
            *pfVar5 = local_res8[0];
            pfVar5[1] = local_a4[0];
            pfVar5[2] = local_a8;
            pfVar5[3] = fVar10;
            pfVar5[4] = fVar11;
          }
        }
      }
LAB_14320fd04:
      bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 10);
      if (((((bVar1 & 1) == 0) && ((bVar1 & 4) == 0)) && ((bVar1 & 2) == 0)) && ((bVar1 & 8) == 0))
      break;
      if (*(int *)(param_1 + 0x13c) == 0) {
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
          *(undefined8 *)(param_1 + 0xf0) = 0;
          *(undefined8 *)(param_1 + 0xf8) = 0;
        }
        break;
      }
      if ((*(longlong *)(param_1 + 0xf0) == 0) &&
         (iVar4 = DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
                            (param_1 + 0xf0,*(undefined8 *)(param_1 + 0x10),
                             *(undefined1 *)(param_1 + 0x1c0),0), iVar4 != 1)) {
        return;
      }
      DSP::ComputeBiquadCoefs
                (local_res8,&local_a8,local_a4,local_res18,local_res20,
                 *(int *)(param_1 + 0x13c) + -1,(float)*(uint *)(param_1 + 0x1c8),
                 *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x140),
                 *(undefined4 *)(param_1 + 0x148));
      uVar7 = *(uint *)(param_1 + 0x10c);
      local_res18[0] = -local_res18[0];
      pfVar5 = *(float **)(param_1 + 0x100);
      local_res20[0] = -local_res20[0];
      if (((uVar7 & 1) != 0) || (*(char *)(param_1 + 0x110) != '\0')) {
        *pfVar5 = local_res8[0];
        pfVar5[1] = local_res8[0];
        pfVar5[2] = local_res8[0];
        pfVar5[3] = local_res8[0];
        pfVar5[4] = 0.0;
        pfVar5[5] = 0.0;
        pfVar5[6] = 0.0;
        fVar14 = local_res20[0] * local_a8;
        fVar10 = local_a8 + local_res18[0] * local_res8[0];
        fVar16 = local_res18[0] * local_res20[0];
        pfVar5[7] = fVar10;
        pfVar5[10] = fVar10;
        pfVar5[8] = 0.0;
        pfVar5[9] = 0.0;
        fVar11 = local_res18[0] * fVar10 + local_a4[0] + local_res20[0] * local_res8[0];
        pfVar5[0xb] = fVar11;
        pfVar5[0xd] = fVar10;
        pfVar5[0xc] = 0.0;
        pfVar5[0xe] = fVar11;
        fVar10 = local_res18[0] * local_a8 + local_a4[0];
        pfVar5[0xf] = local_res8[0] * fVar16 + local_res18[0] * fVar11 + fVar14;
        pfVar5[0x11] = fVar10;
        fVar10 = local_res18[0] * fVar10 + fVar14;
        pfVar5[0x10] = local_a8;
        fVar11 = local_res18[0] * local_res18[0] * local_a4[0];
        pfVar5[0x12] = fVar10;
        fVar13 = local_res18[0] * local_res18[0];
        pfVar5[0x13] = (fVar10 + fVar14) * local_res18[0] + local_res20[0] * local_a4[0];
        pfVar5[0x15] = local_res18[0] * local_a4[0];
        pfVar5[0x14] = local_a4[0];
        pfVar5[0x16] = fVar11 + local_res20[0] * local_a4[0];
        pfVar5[0x17] = ((local_a4[0] + local_a4[0]) * local_res20[0] + fVar11) * local_res18[0];
        pfVar5[0x19] = local_res20[0] + fVar13;
        pfVar5[0x18] = local_res18[0];
        pfVar5[0x1a] = (local_res20[0] + local_res20[0] + fVar13) * local_res18[0];
        pfVar5[0x1b] = (local_res20[0] * 3.0 + fVar13) * local_res18[0] * local_res18[0] +
                       local_res20[0] * local_res20[0];
        pfVar5[0x1c] = local_res20[0];
        pfVar5[0x1d] = fVar16;
        pfVar5[0x1e] = local_res18[0] * fVar16 + local_res20[0] * local_res20[0];
        pfVar5[0x1f] = (local_res20[0] * (local_res20[0] + local_res20[0]) + local_res18[0] * fVar16
                       ) * local_res18[0];
        pfVar5 = pfVar5 + 0x20;
        if (*(char *)(param_1 + 0x110) != '\0') break;
        uVar7 = *(uint *)(param_1 + 0x10c);
      }
      if ((uVar7 & 2) != 0) {
        pfVar5[1] = local_res8[0];
        fVar10 = local_res18[0] * local_res8[0] + local_a8;
        pfVar5[3] = local_res8[0];
        fVar11 = local_res18[0] * local_res18[0] + local_res20[0];
        *pfVar5 = 0.0;
        pfVar5[2] = 0.0;
        pfVar5[4] = local_res8[0];
        pfVar5[5] = fVar10;
        pfVar5[6] = local_res8[0];
        pfVar5[7] = fVar10;
        pfVar5[8] = local_a8;
        pfVar5[10] = local_a8;
        fVar10 = local_res18[0] * local_a8 + local_a4[0];
        pfVar5[9] = fVar10;
        pfVar5[0xb] = fVar10;
        pfVar5[0xc] = local_a4[0];
        pfVar5[0xe] = local_a4[0];
        pfVar5[0xd] = local_res18[0] * local_a4[0];
        pfVar5[0xf] = local_res18[0] * local_a4[0];
        pfVar5[0x10] = local_res18[0];
        pfVar5[0x11] = fVar11;
        pfVar5[0x12] = local_res18[0];
        pfVar5[0x13] = fVar11;
        pfVar5[0x14] = local_res20[0];
        pfVar5[0x15] = local_res20[0] * local_res18[0];
        pfVar5[0x16] = local_res20[0];
        pfVar5[0x17] = local_res20[0] * local_res18[0];
        pfVar5 = pfVar5 + 0x18;
        uVar7 = *(uint *)(param_1 + 0x10c);
      }
      if (3 < uVar7) {
        *pfVar5 = local_res8[0];
        pfVar5[1] = local_a8;
        pfVar5[2] = local_a4[0];
        pfVar5[3] = local_res18[0];
        pfVar5[4] = local_res20[0];
      }
      break;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while (uVar7 < 3);
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined2 *)(lVar6 + 8) = 0;
  *(undefined1 *)(lVar6 + 10) = 0;
  if (*(char *)(param_1 + 0x138) != '\0') {
    iVar9 = *(int *)(param_1 + 0x58) << 2;
  }
  if (*(char *)(param_1 + 0x154) != '\0') {
    iVar9 = *(int *)(param_1 + 0xb0) << 2;
  }
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                    (*(longlong **)(param_1 + 0x10),(uint)*(ushort *)(param_2 + 0x10) * 8 + iVar9);
  if (lVar6 != 0) {
    AkHarmonizerDSPProcess(param_2,param_1 + 0x18,lVar6);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar6);
  }
  return;
}



// FUNCTION 143210190 Init body=282 status=ok
// SIG undefined Init(void)

undefined8
CAkHarmonizerFX::Init
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(uint *)(param_1 + 0x1c4) = (uint)*(byte *)(param_5 + 1);
  CAkHarmonizerFXParams::GetParams(param_4,(undefined8 *)(param_1 + 0x120));
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x174) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x194) = *(undefined8 *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x1c8) = *param_5;
  FUN_14320f320(param_1,param_5[1]);
  uVar1 = param_5[1];
  if ((*(char *)(param_1 + 0x154) != '\0') || (*(char *)(param_1 + 0x138) != '\0')) {
    uVar2 = *(uint *)(param_1 + 0x1c0);
    if (((uVar2 & uVar1) >> 0xc != 0) ||
       ((((char)uVar2 == (char)uVar1 && (((uVar2 ^ uVar1) & 0xf00) == 0)) &&
        (uVar1 >> 0xc == uVar2 >> 0xc)))) {
      uVar4 = 1;
      goto LAB_14321026a;
    }
  }
  uVar4 = 0;
LAB_14321026a:
  *(undefined1 *)(param_1 + 0x1cc) = uVar4;
  uVar5 = InitPitchVoices(param_1);
  if ((int)uVar5 == 1) {
    uVar5 = InitDryDelay();
    if ((int)uVar5 == 1) {
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined2 *)(lVar3 + 8) = 0;
      *(undefined1 *)(lVar3 + 10) = 0;
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 1432102b0 InitDryDelay body=241 status=ok
// SIG undefined InitDryDelay(void)

undefined8 CAkHarmonizerFX::InitDryDelay(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  uVar5 = 0;
  if (*(uint *)(param_1 + 0x1c4) != 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0x1c4) * 0x18);
    *(longlong *)(param_1 + 0x118) = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    uVar5 = 0;
    uVar8 = uVar6;
    if (*(int *)(param_1 + 0x1c4) != 0) {
      do {
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x118) + uVar8 * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
        }
        uVar5 = *(uint *)(param_1 + 0x1c4);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar5);
    }
  }
  if (((*(char *)(param_1 + 0x169) != '\0') && (*(char *)(param_1 + 0x1cc) != '\0')) &&
     (uVar2 = *(undefined4 *)(param_1 + 0x164), uVar5 != 0)) {
    do {
      uVar4 = DSP::CDelayLight::Init
                        (*(longlong *)(param_1 + 0x118) + uVar6 * 0x18,
                         *(undefined8 *)(param_1 + 0x10),uVar2);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x1c4));
  }
  return 1;
}



// FUNCTION 1432103b0 InitPitchVoices body=1134 status=ok
// SIG undefined InitPitchVoices(void)

undefined8 CAkHarmonizerFX::InitPitchVoices(longlong param_1)

{
  undefined8 uVar1;
  float *pfVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  uint in_stack_ffffffffffffff30;
  float local_a8;
  float local_a4 [31];
  
  puVar5 = (undefined4 *)(param_1 + 300);
  puVar4 = (uint *)(param_1 + 0xe4);
  uVar3 = 0;
  do {
    if (*(char *)(puVar5 + 3) != '\0') {
      in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffff00;
      uVar1 = DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::Init
                        (param_1 + 0x18 + uVar3 * 0x58,*(undefined8 *)(param_1 + 0x10),
                         *(undefined1 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8),
                         *(undefined4 *)(param_1 + 0x164),in_stack_ffffffffffffff30);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      if ((puVar5[-3] != 0) && (uVar6 = *(uint *)(param_1 + 0x1c0) & 0xff, uVar6 != 0)) {
        uVar1 = DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
                          (param_1 + (uVar3 + 5) * 0x28,*(undefined8 *)(param_1 + 0x10),uVar6,1);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        in_stack_ffffffffffffff30 = puVar5[-3] - 1;
        DSP::ComputeBiquadCoefs
                  (local_res10,local_a4,&local_a8,local_res18,local_res20,in_stack_ffffffffffffff30,
                   (float)*(uint *)(param_1 + 0x1c8),puVar5[-1],puVar5[-2],*puVar5);
        fVar8 = -local_res18[0];
        uVar6 = *puVar4;
        fVar9 = -local_res20[0];
        pfVar2 = *(float **)(puVar4 + -3);
        if (((uVar6 & 1) != 0) || ((char)puVar4[1] != '\0')) {
          *pfVar2 = local_res10[0];
          pfVar2[1] = local_res10[0];
          pfVar2[2] = local_res10[0];
          pfVar2[3] = local_res10[0];
          pfVar2[4] = 0.0;
          pfVar2[5] = 0.0;
          pfVar2[6] = 0.0;
          fVar13 = fVar8 * fVar9;
          fVar10 = fVar8 * fVar8;
          fVar12 = fVar8 * local_res10[0] + local_a4[0];
          pfVar2[7] = fVar12;
          pfVar2[10] = fVar12;
          pfVar2[8] = 0.0;
          pfVar2[9] = 0.0;
          fVar7 = fVar12 * fVar8 + local_a8 + fVar9 * local_res10[0];
          pfVar2[0xb] = fVar7;
          pfVar2[0xe] = fVar7;
          pfVar2[0xd] = fVar12;
          pfVar2[0xc] = 0.0;
          fVar11 = fVar9 * local_a4[0];
          fVar12 = fVar8 * local_a4[0] + local_a8;
          pfVar2[0xf] = fVar7 * fVar8 + fVar13 * local_res10[0] + fVar11;
          pfVar2[0x11] = fVar12;
          pfVar2[0x10] = local_a4[0];
          fVar12 = fVar12 * fVar8 + fVar11;
          pfVar2[0x12] = fVar12;
          pfVar2[0x13] = (fVar12 + fVar11) * fVar8 + fVar9 * local_a8;
          pfVar2[0x14] = local_a8;
          pfVar2[0x15] = fVar8 * local_a8;
          fVar12 = fVar8 * fVar8 * local_a8;
          pfVar2[0x16] = fVar9 * local_a8 + fVar12;
          pfVar2[0x17] = ((local_a8 + local_a8) * fVar9 + fVar12) * fVar8;
          pfVar2[0x18] = fVar8;
          pfVar2[0x19] = fVar10 + fVar9;
          pfVar2[0x1a] = (fVar10 + fVar9 + fVar9) * fVar8;
          pfVar2[0x1b] = (fVar9 * 3.0 + fVar10) * fVar8 * fVar8 + fVar9 * fVar9;
          pfVar2[0x1c] = fVar9;
          pfVar2[0x1d] = fVar13;
          pfVar2[0x1e] = fVar9 * fVar9 + fVar13 * fVar8;
          pfVar2[0x1f] = ((fVar9 + fVar9) * fVar9 + fVar13 * fVar8) * fVar8;
          pfVar2 = pfVar2 + 0x20;
          if ((char)puVar4[1] != '\0') goto LAB_1432107bb;
          uVar6 = *puVar4;
        }
        if ((uVar6 & 2) != 0) {
          pfVar2[1] = local_res10[0];
          fVar12 = fVar8 * local_res10[0] + local_a4[0];
          pfVar2[3] = local_res10[0];
          fVar11 = fVar8 * fVar8 + fVar9;
          *pfVar2 = 0.0;
          pfVar2[2] = 0.0;
          pfVar2[4] = local_res10[0];
          pfVar2[5] = fVar12;
          pfVar2[6] = local_res10[0];
          pfVar2[7] = fVar12;
          pfVar2[8] = local_a4[0];
          pfVar2[10] = local_a4[0];
          fVar12 = fVar8 * local_a4[0] + local_a8;
          pfVar2[9] = fVar12;
          pfVar2[0xb] = fVar12;
          pfVar2[0xc] = local_a8;
          pfVar2[0xe] = local_a8;
          pfVar2[0xd] = fVar8 * local_a8;
          pfVar2[0xf] = fVar8 * local_a8;
          pfVar2[0x10] = fVar8;
          pfVar2[0x11] = fVar11;
          pfVar2[0x12] = fVar8;
          pfVar2[0x13] = fVar11;
          pfVar2[0x14] = fVar9;
          pfVar2[0x15] = fVar9 * fVar8;
          pfVar2[0x16] = fVar9;
          pfVar2[0x17] = fVar9 * fVar8;
          pfVar2 = pfVar2 + 0x18;
          uVar6 = *puVar4;
        }
        if (3 < uVar6) {
          *pfVar2 = local_res10[0];
          pfVar2[1] = local_a4[0];
          pfVar2[2] = local_a8;
          pfVar2[3] = fVar8;
          pfVar2[4] = fVar9;
        }
      }
    }
LAB_1432107bb:
    uVar6 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar6;
    puVar4 = puVar4 + 10;
    puVar5 = puVar5 + 7;
    if (1 < uVar6) {
      return 1;
    }
  } while( true );
}



// FUNCTION 143210820 Reset body=78 status=ok
// SIG undefined Reset(void)

undefined8 CAkHarmonizerFX::Reset(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  ResetPitchVoices();
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0x118) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x1c4));
  }
  return 1;
}



// FUNCTION 143210870 ResetDryDelay body=73 status=ok
// SIG undefined ResetDryDelay(void)

void CAkHarmonizerFX::ResetDryDelay(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0x118) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x1c4));
  }
  return;
}



// FUNCTION 1432108c0 ResetPitchVoices body=145 status=ok
// SIG undefined ResetPitchVoices(void)

void CAkHarmonizerFX::ResetPitchVoices(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  puVar4 = (undefined8 *)(param_1 + 200);
  pcVar3 = (char *)(param_1 + 0x138);
  do {
    if (*pcVar3 != '\0') {
      DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::Reset(param_1 + 0x18 + uVar2 * 0x58);
      DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::ResetInputFill
                (param_1 + 0x18 + uVar2 * 0x58);
      if ((void *)*puVar4 != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,0,(ulonglong)*(uint *)(puVar4 + 3));
      }
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
    puVar4 = puVar4 + 5;
    pcVar3 = pcVar3 + 0x1c;
  } while (uVar1 < 2);
  return;
}



// FUNCTION 143210960 Term body=72 status=ok
// SIG undefined Term(void)

undefined8 CAkHarmonizerFX::Term(undefined8 *param_1,longlong *param_2)

{
  TermPitchVoices();
  TermDryDelay(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1432109b0 TermDryDelay body=121 status=ok
// SIG undefined TermDryDelay(void)

void CAkHarmonizerFX::TermDryDelay(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1c4) != 0) {
      do {
        DSP::CDelayLight::Term
                  (*(longlong *)(param_1 + 0x118) + uVar3 * 0x18,*(undefined8 *)(param_1 + 0x10));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x1c4));
      lVar1 = *(longlong *)(param_1 + 0x118);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar1);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  return;
}



// FUNCTION 143210a30 TermPitchVoices body=126 status=ok
// SIG undefined TermPitchVoices(void)

void CAkHarmonizerFX::TermPitchVoices(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x18;
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = 2;
  do {
    if (*plVar1 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      plVar1[-1] = 0;
      *plVar1 = 0;
    }
    DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::Term(lVar3,*(undefined8 *)(param_1 + 0x10))
    ;
    lVar3 = lVar3 + 0x58;
    plVar1 = plVar1 + 5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143210ab0 FUN_143210ab0 body=43 status=ok
// SIG undefined FUN_143210ab0(void)

undefined8 * FUN_143210ab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 143210ae0 Clone body=244 status=ok
// SIG undefined Clone(void)

undefined8 * CAkHarmonizerFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5178;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar2 + 3) = 0x3f800000;
    *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 6) = 0x447a0000;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
    *(undefined1 *)(puVar2 + 8) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x54) = 0;
    *(undefined4 *)(puVar2 + 9) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 10) = 0x400;
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((longlong)puVar2 + 0x34) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)((longlong)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)((longlong)puVar2 + 0x44) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
    *(undefined4 *)((longlong)puVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    *(undefined1 *)((longlong)puVar2 + 10) = 0xff;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143210be0 FUN_143210be0 body=167 status=ok
// SIG undefined FUN_143210be0(void)

undefined8 * FUN_143210be0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5178;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar1 + 3) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 6) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 9) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 10) = 0x400;
    *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143210c90 GetParams body=48 status=ok
// SIG undefined GetParams(void)

void CAkHarmonizerFXParams::GetParams(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  param_2[2] = *(undefined8 *)(param_1 + 0x1c);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  param_2[6] = *(undefined8 *)(param_1 + 0x3c);
  param_2[7] = uVar1;
  param_2[8] = *(undefined8 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_1 + 0x54);
  return;
}



// FUNCTION 143210ce0 FUN_143210ce0 body=621 status=ok
// SIG undefined FUN_143210ce0(void)

undefined4 FUN_143210ce0(longlong param_1,short param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      *(float *)(param_1 + 0x44) = *param_3;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)param_3;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)param_3;
      break;
    case 3:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x48) = fVar2;
      break;
    case 4:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x4c) = fVar2;
      break;
    case 5:
      *(float *)(param_1 + 0x50) = *param_3;
      break;
    case 6:
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)param_3;
      break;
    case 7:
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,*param_3 * 0.00083333335);
      *(float *)(param_1 + 0x1c) = fVar2;
      break;
    case 8:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x20) = fVar2;
      break;
    case 9:
      *(int *)(param_1 + 0xc) = (int)(longlong)*param_3;
      break;
    case 10:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      *(float *)(param_1 + 0x10) = fVar3;
      break;
    case 0xb:
      *(float *)(param_1 + 0x14) = *param_3;
      break;
    case 0xc:
      *(float *)(param_1 + 0x18) = *param_3;
      break;
    case 0xd:
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)param_3;
      break;
    case 0xe:
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,*param_3 * 0.00083333335);
      *(float *)(param_1 + 0x38) = fVar2;
      break;
    case 0xf:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x3c) = fVar2;
      break;
    case 0x10:
      *(int *)(param_1 + 0x28) = (int)(longlong)*param_3;
      break;
    case 0x11:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      *(float *)(param_1 + 0x2c) = fVar3;
      break;
    case 0x12:
      *(float *)(param_1 + 0x30) = *param_3;
      break;
    case 0x13:
      *(float *)(param_1 + 0x34) = *param_3;
    }
    uVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    *(byte *)((ulonglong)uVar1 + 8 + param_1) =
         *(byte *)((ulonglong)uVar1 + 8 + param_1) | (byte)(1 << ((int)param_2 + uVar1 * -8 & 0x1f))
    ;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 143210fa0 SetParamsBlock body=357 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkHarmonizerFXParams::SetParamsBlock(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  
  *(undefined1 *)(param_1 + 0x24) = *param_2;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(2.0,*(float *)(param_2 + 1) * 0.00083333335);
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_2 + 5) * 0.05);
  *(float *)(param_1 + 0x20) = fVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x40) = param_2[0x19];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(2.0,*(float *)(param_2 + 0x1a) * 0.00083333335);
  *(float *)(param_1 + 0x38) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_2 + 0x1e) * 0.05);
  *(float *)(param_1 + 0x3c) = fVar1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x32);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_2 + 0x36) * 0.05);
  *(float *)(param_1 + 0x48) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_2 + 0x3a) * 0.05);
  *(float *)(param_1 + 0x4c) = fVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x54) = param_2[0x42];
  *(undefined1 *)(param_1 + 0x55) = param_2[0x43];
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  return 1;
}



// FUNCTION 143211110 CAkPhaseVocoder body=28 status=ok
// SIG undefined CAkPhaseVocoder(void)

undefined8 * DSP::AkFFTAllButterflies::CAkPhaseVocoder::CAkPhaseVocoder(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 143211130 Execute body=1387 status=ok
// SIG undefined Execute(void)

void DSP::AkFFTAllButterflies::CAkPhaseVocoder::Execute
               (longlong *param_1,longlong *param_2,int param_3,longlong *param_4,float param_5,
               char param_6,undefined8 param_7)

{
  float fVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  undefined2 uVar17;
  ulonglong uVar18;
  char cVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  uint local_b4;
  
  if (param_6 != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  }
  uVar5 = *(uint *)(param_1 + 8);
  fVar1 = *(float *)((longlong)param_1 + 0x14);
  uVar8 = uVar5 >> 2;
  fVar27 = 100.0 / param_5;
  local_b4 = 0;
  do {
    param_6 = *(undefined1 *)((longlong)param_1 + 0x4c);
    uVar3 = *(ushort *)(param_2 + 2);
    uVar11 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    fVar26 = *(float *)((longlong)param_1 + 0x44);
    uVar22 = *(uint *)(param_1 + 9);
    cVar19 = *(char *)((longlong)param_1 + 0x4d);
    uVar13 = (ulonglong)local_b4;
    lVar6 = *param_2;
    uVar4 = *(ushort *)(param_4 + 2);
    lVar7 = *param_4;
    param_5 = (float)(uint)*(ushort *)((longlong)param_4 + 0x12);
    piVar15 = (int *)(uVar13 * 0x78 + *param_1);
    iVar21 = param_3;
    do {
      uVar17 = SUB42(param_5,0);
      uVar12 = uVar22;
      if (uVar11 < uVar22) {
        uVar12 = uVar11;
      }
      uVar22 = uVar22 - uVar12;
      iVar16 = uVar11 - uVar12;
      if (((cVar19 != '\0') && (iVar16 == 0)) && (*(int *)((longlong)param_2 + 0xc) != 0x11)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
        uVar11 = 0;
        goto LAB_14321162e;
      }
      uVar11 = CAkCircularBuffer::PushFrames
                         (piVar15,lVar6 + uVar3 * uVar13 * 4 + (ulonglong)(iVar21 + uVar12) * 4,
                          iVar16);
      cVar20 = '\0';
      if (*piVar15 != piVar15[3]) {
        cVar20 = cVar19;
      }
      cVar19 = cVar20;
      iVar21 = iVar21 + uVar12 + uVar11;
      uVar11 = iVar16 - (uVar11 & 0xffff);
      if (((cVar19 == '\0') || (*piVar15 == piVar15[3])) || (uVar11 != 0)) {
        if ((*(int *)((longlong)param_2 + 0xc) == 0x11) && (uVar11 == 0)) goto LAB_1432112d2;
        cVar20 = '\0';
      }
      else {
        if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
          *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
          goto LAB_14321162e;
        }
LAB_1432112d2:
        cVar20 = '\x01';
      }
      if (((char)piVar15[(ulonglong)(*(byte *)(piVar15 + 0x1c) & 1) * 4 + 0x11] == '\0') &&
         (cVar9 = CAkCircularBuffer::ReadFrameBlock(piVar15,param_7,uVar5,cVar20), cVar9 != '\0')) {
        CAkCircularBuffer::AdvanceFrames(piVar15,uVar8);
        CAkTimeWindow::Apply(param_1 + 1,param_7,uVar5,0x3f800000);
        CAkFreqWindow::Compute
                  (piVar15 + (ulonglong)(*(byte *)(piVar15 + 0x1c) & 1) * 4 + 0xe,param_7,uVar5,
                   param_1[3]);
        CAkFreqWindow::CartToPol(piVar15 + (ulonglong)(*(byte *)(piVar15 + 0x1c) & 1) * 4 + 0xe);
      }
      if (((char)piVar15[(ulonglong)(*(byte *)(piVar15 + 0x1c) - 1 & 1) * 4 + 0x11] == '\0') &&
         (cVar9 = CAkCircularBuffer::ReadFrameBlock(piVar15,param_7,uVar5,cVar20), cVar9 != '\0')) {
        CAkCircularBuffer::AdvanceFrames(piVar15,uVar8);
        CAkTimeWindow::Apply(param_1 + 1,param_7,uVar5,0x3f800000);
        CAkFreqWindow::Compute
                  (piVar15 + (ulonglong)(*(byte *)(piVar15 + 0x1c) - 1 & 1) * 4 + 0xe,param_7,uVar5,
                   param_1[3]);
        CAkFreqWindow::CartToPol(piVar15 + (ulonglong)(*(byte *)(piVar15 + 0x1c) - 1 & 1) * 4 + 0xe)
        ;
      }
      uVar18 = (ulonglong)(*(byte *)(piVar15 + 0x1c) - 1 & 1);
      if (((char)piVar15[uVar18 * 4 + 0x11] == '\0') ||
         (uVar14 = (ulonglong)(*(byte *)(piVar15 + 0x1c) & 1),
         (char)piVar15[uVar14 * 4 + 0x11] == '\0')) {
LAB_14321144a:
        if ((char)piVar15[0x19] != '\0') goto LAB_143211454;
      }
      else {
        if ((char)piVar15[0x19] == '\0') {
          CAkFreqWindow::ComputeVocoderSpectrum
                    (piVar15 + 0x16,*(undefined8 *)(piVar15 + uVar14 * 4 + 0xe),
                     *(undefined8 *)(piVar15 + uVar18 * 4 + 0xe),*(undefined8 *)(piVar15 + 0x1a),
                     uVar8,fVar26,param_6);
          param_6 = 0;
          goto LAB_14321144a;
        }
LAB_143211454:
        if (uVar5 <= (uint)(piVar15[6] - piVar15[9])) {
          CAkFreqWindow::ConvertToTimeDomain(piVar15 + 0x16,param_7,uVar5,param_1[4]);
          CAkTimeWindow::Apply(param_1 + 1,param_7,uVar5,1.0 / ((fVar1 * 4.0) / (float)uVar5));
          CAkOLACircularBuffer::PushOverlappedWindow(piVar15 + 6,param_7,uVar8);
          fVar26 = fVar26 + fVar27;
          *(undefined1 *)(piVar15 + 0x19) = 0;
          if (1.0 <= fVar26) {
            bVar2 = *(byte *)(piVar15 + 0x1c);
            iVar16 = (int)fVar26;
            *(undefined1 *)(piVar15 + (ulonglong)(bVar2 & 1) * 4 + 0x11) = 0;
            fVar24 = fVar26;
            if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar26)) {
              auVar25._4_4_ = fVar26;
              auVar25._0_4_ = fVar26;
              auVar25._8_8_ = 0;
              uVar12 = movmskps((bVar2 & 1) * 0x10,auVar25);
              fVar24 = (float)(int)(iVar16 - (uVar12 & 1));
            }
            if ((uint)(longlong)fVar24 < 2) {
              *(byte *)(piVar15 + 0x1c) = *(byte *)(piVar15 + 0x1c) + 1;
            }
            else {
              iVar23 = ((uint)(longlong)fVar24 - 2) * uVar8;
              *(undefined1 *)(piVar15 + (ulonglong)(*(byte *)(piVar15 + 0x1c) - 1 & 1) * 4 + 0x11) =
                   0;
              iVar16 = CAkCircularBuffer::AdvanceFrames(piVar15,iVar23);
              uVar22 = iVar23 - iVar16;
            }
            fVar26 = fVar26 - fVar24;
          }
        }
      }
      if ((((cVar20 == '\0') || (piVar15[3] != 0)) || ((char)piVar15[0x19] != '\0')) ||
         (piVar15[9] != 0)) {
        cVar9 = '\0';
      }
      else {
        cVar9 = '\x01';
      }
      uVar10 = CAkOLACircularBuffer::PopFrames
                         (piVar15 + 6,lVar7 + uVar4 * uVar13 * 4 + (ulonglong)(uint)param_5 * 4,
                          (uint)*(ushort *)(param_4 + 2) - (int)param_5,cVar9);
      param_5 = (float)((int)param_5 + (uint)uVar10);
      if ((cVar9 != '\0') && (cVar9 = CAkOLACircularBuffer::IsDoneTail(piVar15 + 6), cVar9 != '\0'))
      {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x11;
        goto LAB_14321161e;
      }
      if (param_5 == (float)(uint)*(ushort *)(param_4 + 2)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x2d;
        goto LAB_14321161e;
      }
    } while ((cVar20 != '\0') || (uVar11 != 0));
    *(undefined4 *)((longlong)param_4 + 0xc) = 0x2b;
LAB_14321161e:
    uVar17 = SUB42(param_5,0);
LAB_14321162e:
    local_b4 = local_b4 + 1;
    if (*(uint *)(param_1 + 7) <= local_b4) {
      *(short *)((longlong)param_2 + 0x12) = (short)uVar11;
      *(undefined2 *)((longlong)param_4 + 0x12) = uVar17;
      *(float *)((longlong)param_1 + 0x44) = fVar26;
      *(uint *)(param_1 + 9) = uVar22;
      *(char *)((longlong)param_1 + 0x4c) = param_6;
      *(char *)((longlong)param_1 + 0x4d) = cVar19;
      return;
    }
  } while( true );
}



// FUNCTION 1432116a0 Init body=607 status=ok
// SIG undefined Init(void)

undefined8
DSP::AkFFTAllButterflies::CAkPhaseVocoder::Init
          (longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,char param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  
  *(undefined4 *)(param_1 + 7) = param_3;
  plVar1 = param_1 + 5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  ak_fftr_alloc(param_5,0,0,plVar1);
  lVar2 = (**(code **)(*param_2 + 8))(param_2,*plVar1);
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    ak_fftr_alloc((int)param_1[8],1,0,param_1 + 6);
    lVar2 = (**(code **)(*param_2 + 8))(param_2,param_1[6]);
    param_1[4] = lVar2;
    if (lVar2 != 0) {
      ak_fftr_alloc((int)param_1[8],0,param_1[3],plVar1);
      ak_fftr_alloc((int)param_1[8],1,param_1[4],param_1 + 6);
      uVar3 = CAkTimeWindow::Init(param_1 + 1,param_2,(int)param_1[8],2,1,0);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      *(char *)((longlong)param_1 + 0x4e) = param_6;
      if (*(uint *)(param_1 + 7) != 0) {
        lVar2 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 7) * 0x78);
        *param_1 = lVar2;
        if (lVar2 == 0) {
          return 0x34;
        }
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = uVar9;
        if ((int)param_1[7] != 0) {
          do {
            puVar4 = (undefined8 *)(uVar7 * 0x78 + *param_1);
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              puVar4[4] = 0;
              puVar4[5] = 0;
              *(undefined4 *)(puVar4 + 6) = 0;
              puVar4[7] = 0;
              *(undefined4 *)(puVar4 + 8) = 0;
              *(undefined2 *)((longlong)puVar4 + 0x44) = 0;
              puVar4[9] = 0;
              *(undefined4 *)(puVar4 + 10) = 0;
              *(undefined2 *)((longlong)puVar4 + 0x54) = 0;
              puVar4[0xb] = 0;
              *(undefined4 *)(puVar4 + 0xc) = 0;
              *(undefined2 *)((longlong)puVar4 + 100) = 0;
              puVar4[0xd] = 0;
              *(undefined1 *)(puVar4 + 0xe) = 0;
            }
            uVar8 = *(uint *)(param_1 + 7);
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < uVar8);
        }
        if (uVar8 != 0) {
          do {
            lVar2 = uVar9 * 0x78 + *param_1;
            *(undefined8 *)(lVar2 + 0x68) = 0;
            *(undefined1 *)(lVar2 + 0x70) = 0;
            uVar3 = CAkFreqWindow::Alloc(lVar2 + 0x38,param_2,(int)param_1[8]);
            if ((int)uVar3 != 1) {
              return uVar3;
            }
            uVar3 = CAkFreqWindow::Alloc(lVar2 + 0x48,param_2,(int)param_1[8]);
            if ((int)uVar3 != 1) {
              return uVar3;
            }
            uVar3 = CAkFreqWindow::Alloc(lVar2 + 0x58,param_2,(int)param_1[8]);
            if ((int)uVar3 != 1) {
              return uVar3;
            }
            lVar5 = (**(code **)(*param_2 + 8))
                              (param_2,(ulonglong)((*(uint *)(param_1 + 8) >> 1) + 1) << 2);
            *(longlong *)(lVar2 + 0x68) = lVar5;
            if (lVar5 == 0) {
              return 0x34;
            }
            if ((param_6 != '\0') &&
               (uVar3 = CAkCircularBuffer::Init
                                  (lVar2,param_2,(*(uint *)(param_1 + 8) >> 2) + (int)param_1[8]),
               (int)uVar3 != 1)) {
              return uVar3;
            }
            uVar3 = CAkOLACircularBuffer::Init(lVar2 + 0x18,param_2,(int)param_1[8],(int)param_1[8])
            ;
            if ((int)uVar3 != 1) {
              return uVar3;
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(param_1 + 7));
        }
      }
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 143211900 Reset body=142 status=ok
// SIG undefined Reset(void)

void DSP::AkFFTAllButterflies::CAkPhaseVocoder::Reset(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if ((*param_1 != 0) && (uVar2 = 0, (int)param_1[7] != 0)) {
    do {
      lVar1 = (ulonglong)uVar2 * 0x78 + *param_1;
      *(undefined1 *)(lVar1 + 0x44) = 0;
      *(undefined1 *)(lVar1 + 0x54) = 0;
      *(undefined1 *)(lVar1 + 100) = 0;
      if (*(char *)((longlong)param_1 + 0x4e) != '\0') {
        CAkCircularBuffer::Reset(lVar1);
      }
      CAkCircularBuffer::Reset(lVar1 + 0x18);
      if (*(void **)(lVar1 + 0x68) != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar1 + 0x68),0,(ulonglong)((*(uint *)(param_1 + 8) >> 1) * 4 + 4));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 7));
  }
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0x101;
  return;
}



// FUNCTION 143211990 Term body=251 status=ok
// SIG undefined Term(void)

void DSP::AkFFTAllButterflies::CAkPhaseVocoder::Term(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[4] = 0;
  }
  CAkTimeWindow::Term(param_1 + 1,param_2);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar1 = 0;
    if ((int)param_1[7] != 0) {
      do {
        lVar2 = (ulonglong)uVar1 * 0x78 + *param_1;
        CAkFreqWindow::Free(lVar2 + 0x38,param_2);
        CAkFreqWindow::Free(lVar2 + 0x48,param_2);
        CAkFreqWindow::Free(lVar2 + 0x58,param_2);
        if (*(char *)((longlong)param_1 + 0x4e) != '\0') {
          CAkCircularBuffer::Term(lVar2,param_2);
        }
        CAkCircularBuffer::Term(lVar2 + 0x18,param_2);
        if (*(longlong *)(lVar2 + 0x68) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 7));
      lVar2 = *param_1;
    }
    (**(code **)(*param_2 + 0x10))(param_2,lVar2);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143211a90 CAkResamplingPhaseVocoder body=31 status=ok
// SIG undefined CAkResamplingPhaseVocoder(void)

longlong DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::CAkResamplingPhaseVocoder
                   (longlong param_1)

{
  CAkPhaseVocoder::CAkPhaseVocoder();
  *(undefined8 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 143211ab0 Init body=239 status=ok
// SIG undefined Init(void)

undefined8
DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::Init
          (longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,undefined4 param_5,
          undefined1 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = CAkPhaseVocoder::Init();
  if ((int)uVar1 == 1) {
    if (param_3 != 0) {
      lVar2 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)param_3 << 5);
      *(longlong *)(param_1 + 0x50) = lVar2;
      if (lVar2 == 0) {
        return 0x34;
      }
    }
    uVar4 = 0;
    uVar6 = uVar4;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        puVar3 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)(param_1 + 0x50));
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[3] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x38));
      if (*(uint *)(param_1 + 0x38) != 0) {
        do {
          uVar1 = CAkCircularBuffer::Init
                            (uVar4 * 0x20 + *(longlong *)(param_1 + 0x50),param_2,
                             (*(uint *)(param_1 + 0x40) >> 2) + *(int *)(param_1 + 0x40),param_4,
                             param_5,param_6);
          if ((int)uVar1 != 1) {
            return uVar1;
          }
          uVar5 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x38));
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143211ba0 ProcessPitchChannel body=1378 status=ok
// SIG undefined ProcessPitchChannel(void)

undefined4
DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::ProcessPitchChannel
          (longlong *param_1,longlong param_2,uint param_3,ulonglong param_4,uint param_5,
          longlong param_6,float param_7,undefined8 param_8)

{
  float fVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  uint local_c8;
  undefined4 local_c4;
  
  fVar1 = *(float *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x4c);
  uVar18 = *(uint *)(param_1 + 9);
  fVar22 = *(float *)((longlong)param_1 + 0x44);
  uVar15 = (ulonglong)param_5;
  uVar3 = *(uint *)(param_1 + 8);
  iVar17 = 0;
  uVar4 = uVar3 >> 2;
  lVar12 = uVar15 * 0x78 + *param_1;
  uVar9 = 0;
  local_c4 = 0x2d;
  local_c8 = 0;
  uVar16 = param_4;
  uVar14 = param_3;
  do {
    if (((uVar14 == 0) && (param_3 <= local_c8)) || (99 < uVar9)) {
      if (param_5 == (int)param_1[7] - 1U) {
        *(undefined1 *)((longlong)param_1 + 0x4c) = uVar2;
        *(float *)((longlong)param_1 + 0x44) = fVar22;
        *(uint *)(param_1 + 9) = uVar18;
      }
      return local_c4;
    }
    uVar9 = uVar9 + 1;
    uVar7 = uVar18;
    if (uVar14 < uVar18) {
      uVar7 = uVar14;
    }
    uVar10 = 0;
    uVar18 = uVar18 - uVar7;
    iVar13 = uVar14 - uVar7;
    if ((param_2 != 0) && (iVar13 != 0)) {
      uVar10 = CAkResamplingCircularBuffer::PushFrames
                         (uVar15 * 0x20 + param_1[10],param_2 + (ulonglong)(iVar17 + uVar7) * 4,
                          iVar13,param_7);
      uVar16 = param_4 & 0xff;
    }
    iVar17 = iVar17 + uVar7 + uVar10;
    uVar14 = iVar13 - (uVar10 & 0xffff);
    if (*(char *)(lVar12 + 0x44 + (ulonglong)(*(byte *)(lVar12 + 0x70) & 1) * 0x10) == '\0') {
      cVar5 = CAkCircularBuffer::ReadFrameBlock(param_1[10] + uVar15 * 0x20,param_8,uVar3,uVar16);
      if (cVar5 != '\0') {
        CAkCircularBuffer::AdvanceFrames(param_1[10] + uVar15 * 0x20,uVar4);
        CAkTimeWindow::Apply(param_1 + 1,param_8,uVar3,0x3f800000);
        CAkFreqWindow::Compute
                  (lVar12 + 0x38 + (ulonglong)(*(byte *)(lVar12 + 0x70) & 1) * 0x10,param_8,uVar3,
                   param_1[3]);
        CAkFreqWindow::CartToPol(lVar12 + 0x38 + (ulonglong)(*(byte *)(lVar12 + 0x70) & 1) * 0x10);
      }
    }
    if (*(char *)(lVar12 + 0x44 + (ulonglong)(*(byte *)(lVar12 + 0x70) - 1 & 1) * 0x10) == '\0') {
      cVar5 = CAkCircularBuffer::ReadFrameBlock
                        (param_1[10] + uVar15 * 0x20,param_8,uVar3,(char)param_4);
      if (cVar5 != '\0') {
        CAkCircularBuffer::AdvanceFrames(param_1[10] + uVar15 * 0x20,uVar4);
        CAkTimeWindow::Apply(param_1 + 1,param_8,uVar3,0x3f800000);
        CAkFreqWindow::Compute
                  (lVar12 + 0x38 + (ulonglong)(*(byte *)(lVar12 + 0x70) - 1 & 1) * 0x10,param_8,
                   uVar3,param_1[3]);
        CAkFreqWindow::CartToPol
                  (lVar12 + 0x38 + (ulonglong)(*(byte *)(lVar12 + 0x70) - 1 & 1) * 0x10);
      }
    }
    uVar16 = (ulonglong)(*(byte *)(lVar12 + 0x70) - 1 & 1);
    if ((*(char *)(lVar12 + 0x44 + uVar16 * 0x10) == '\0') ||
       (uVar11 = (ulonglong)(*(byte *)(lVar12 + 0x70) & 1),
       *(char *)(lVar12 + 0x44 + uVar11 * 0x10) == '\0')) {
LAB_143211e95:
      if (*(char *)(lVar12 + 100) != '\0') goto LAB_143211e9f;
    }
    else {
      if (*(char *)(lVar12 + 100) == '\0') {
        CAkFreqWindow::ComputeVocoderSpectrum
                  (lVar12 + 0x58,*(undefined8 *)(lVar12 + 0x38 + uVar11 * 0x10),
                   *(undefined8 *)(lVar12 + 0x38 + uVar16 * 0x10),*(undefined8 *)(lVar12 + 0x68),
                   uVar4,fVar22,uVar2);
        uVar2 = 0;
        goto LAB_143211e95;
      }
LAB_143211e9f:
      if (uVar3 <= (uint)(*(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x24))) {
        CAkFreqWindow::ConvertToTimeDomain(lVar12 + 0x58,param_8,uVar3,param_1[4]);
        CAkTimeWindow::Apply(param_1 + 1,param_8,uVar3,1.0 / ((fVar1 * 4.0) / (float)uVar3));
        CAkOLACircularBuffer::PushOverlappedWindow(lVar12 + 0x18,param_8,uVar4);
        fVar22 = fVar22 + 1.0 / param_7;
        *(undefined1 *)(lVar12 + 100) = 0;
        if (1.0 <= fVar22) {
          lVar8 = (ulonglong)(*(byte *)(lVar12 + 0x70) & 1) * 0x10;
          iVar13 = (int)fVar22;
          *(undefined1 *)(lVar8 + 0x44 + lVar12) = 0;
          fVar20 = fVar22;
          if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar22)) {
            auVar21._4_4_ = fVar22;
            auVar21._0_4_ = fVar22;
            auVar21._8_8_ = 0;
            uVar7 = movmskps((int)lVar8,auVar21);
            fVar20 = (float)(int)(iVar13 - (uVar7 & 1));
          }
          if ((uint)(longlong)fVar20 < 2) {
            fVar22 = fVar22 - fVar20;
            *(byte *)(lVar12 + 0x70) = *(byte *)(lVar12 + 0x70) + 1;
          }
          else {
            iVar19 = ((uint)(longlong)fVar20 - 2) * uVar4;
            *(undefined1 *)(lVar12 + 0x44 + (ulonglong)(*(byte *)(lVar12 + 0x70) - 1 & 1) * 0x10) =
                 0;
            iVar13 = CAkCircularBuffer::AdvanceFrames(uVar15 * 0x20 + param_1[10],iVar19);
            uVar18 = iVar19 - iVar13;
            fVar22 = fVar22 - fVar20;
          }
        }
      }
    }
    if (((((char)param_4 == '\0') || (*(int *)(uVar15 * 0x20 + 0xc + param_1[10]) != 0)) ||
        (*(char *)(lVar12 + 100) != '\0')) || (*(int *)(lVar12 + 0x24) != 0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    uVar6 = CAkOLACircularBuffer::PopFrames
                      (lVar12 + 0x18,param_6 + (ulonglong)local_c8 * 4,param_3 - local_c8,cVar5);
    uVar16 = param_4 & 0xff;
    local_c8 = local_c8 + uVar6;
    if (cVar5 != '\0') {
      cVar5 = CAkOLACircularBuffer::IsDoneTail(lVar12 + 0x18);
      uVar16 = param_4 & 0xff;
      if (cVar5 != '\0') {
        local_c4 = 0x11;
      }
    }
  } while( true );
}



// FUNCTION 143212110 Reset body=65 status=ok
// SIG undefined Reset(void)

void DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::Reset(longlong param_1)

{
  uint uVar1;
  
  CAkPhaseVocoder::Reset();
  uVar1 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      CAkResamplingCircularBuffer::Reset((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x50));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 143212160 ResetInputFill body=79 status=ok
// SIG undefined ResetInputFill(void)

void DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::ResetInputFill(longlong param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (uVar1 = 0, *(int *)(param_1 + 0x38) != 0)) {
    do {
      puVar2 = (undefined4 *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x50));
      CAkResamplingCircularBuffer::Reset(puVar2);
      uVar1 = uVar1 + 1;
      puVar2[3] = *puVar2;
    } while (uVar1 < *(uint *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1432121b0 Term body=120 status=ok
// SIG undefined Term(void)

void DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::Term(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        CAkCircularBuffer::Term((ulonglong)uVar2 * 0x20 + *(longlong *)(param_1 + 0x50),param_2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x38));
      lVar1 = *(longlong *)(param_1 + 0x50);
    }
    (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  CAkPhaseVocoder::Term(param_1,param_2);
  return;
}



// FUNCTION 143212230 Init body=75 status=ok
// SIG undefined Init(void)

undefined8 DSP::CDelayLight::Init(uint *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  
  param_3 = param_3 & 0xfffffffc;
  *param_1 = param_3;
  if (param_3 != 0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)param_3 << 2);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      return 0x34;
    }
  }
  param_1[4] = 0;
  return 1;
}



// FUNCTION 143212280 ProcessBuffer body=234 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::CDelayLight::ProcessBuffer(uint *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar10;
  uint uVar11;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 2) != 0) {
    uVar10 = param_1[4];
    uVar9 = (ulonglong)uVar10;
    uVar11 = *param_1;
    uVar6 = uVar11 - uVar10;
    uVar5 = param_3 >> 2;
    uVar8 = (ulonglong)uVar5;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 2) + uVar9 * 4);
    if (param_3 < uVar6) {
      if (uVar5 != 0) {
        do {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          uVar3 = param_2[1];
          *puVar4 = *param_2;
          puVar4[1] = uVar3;
          *param_2 = uVar1;
          param_2[1] = uVar2;
          param_2 = param_2 + 2;
          uVar8 = uVar8 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar8 != 0);
        uVar10 = param_1[4];
      }
      param_1[4] = uVar10 + param_3;
      return;
    }
    while (uVar5 != 0) {
      uVar10 = (uint)uVar9;
      uVar9 = (ulonglong)(uVar6 >> 2);
      if ((uint)uVar8 < uVar6 >> 2) {
        uVar9 = uVar8;
      }
      iVar7 = (int)uVar9;
      if (iVar7 != 0) {
        do {
          uVar1 = *puVar4;
          uVar2 = puVar4[1];
          uVar3 = param_2[1];
          *puVar4 = *param_2;
          puVar4[1] = uVar3;
          puVar4 = puVar4 + 2;
          *param_2 = uVar1;
          param_2[1] = uVar2;
          param_2 = param_2 + 2;
          uVar10 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar10;
        } while (uVar10 != 0);
        uVar10 = param_1[4];
        uVar11 = *param_1;
      }
      uVar10 = uVar10 + iVar7 * 4;
      param_1[4] = uVar10;
      if (uVar10 == uVar11) {
        puVar4 = *(undefined8 **)(param_1 + 2);
        uVar10 = 0;
        param_1[4] = 0;
      }
      uVar5 = (uint)uVar8 - iVar7;
      uVar8 = (ulonglong)uVar5;
      uVar9 = (ulonglong)uVar10;
      uVar6 = uVar11 - uVar10;
    }
  }
  return;
}



// FUNCTION 143212370 Reset body=45 status=ok
// SIG undefined Reset(void)

void DSP::CDelayLight::Reset(int *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),0,(ulonglong)(uint)(*param_1 << 2));
  }
  param_1[4] = 0;
  return;
}



// FUNCTION 1432123a0 Term body=54 status=ok
// SIG undefined Term(void)

void DSP::CDelayLight::Term(undefined4 *param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1432123e0 AkHarmonizerDSPProcess body=1458 status=ok
// SIG undefined AkHarmonizerDSPProcess(void)

void AkHarmonizerDSPProcess(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  bool bVar5;
  ushort uVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_res10;
  uint local_res20;
  uint local_98;
  
  uVar11 = 0;
  uVar8 = *(int *)(param_2 + 0x14c) * 0xc;
  if (*(int *)((longlong)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x1a0) = 0xffffffff;
    uVar6 = *(ushort *)((longlong)param_1 + 0x12);
    goto LAB_1432124ff;
  }
  uVar12 = *(uint *)(param_2 + 0x1a0);
  if ((uVar12 == 0) && (uVar6 = 0, *(short *)((longlong)param_1 + 0x12) == 0)) goto LAB_1432124ff;
  if ((uVar12 == 0xffffffff) || (*(short *)((longlong)param_1 + 0x12) != 0)) {
    *(uint *)(param_2 + 0x1a0) = uVar8;
    uVar12 = uVar8;
LAB_143212454:
    *(uint *)(param_2 + 0x1a4) = uVar8;
  }
  else if (*(uint *)(param_2 + 0x1a4) < uVar8) {
    uVar12 = (uVar12 - *(uint *)(param_2 + 0x1a4)) + uVar8;
    *(uint *)(param_2 + 0x1a0) = uVar12;
    goto LAB_143212454;
  }
  uVar9 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar8 = uVar12;
  if (uVar9 <= uVar12) {
    uVar8 = uVar9;
  }
  *(uint *)(param_2 + 0x1a0) = uVar12 - uVar8;
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  uVar16 = (ulonglong)*(byte *)(param_1 + 1);
  iVar13 = (uint)*(ushort *)(param_1 + 2) - (uint)uVar6;
  if (iVar13 != 0) {
    uVar6 = *(ushort *)(param_1 + 2);
    if (*(byte *)(param_1 + 1) != 0) {
      uVar14 = uVar11;
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 +
                           (*(ushort *)(param_1 + 2) * uVar14 +
                           (ulonglong)*(ushort *)((longlong)param_1 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar13 * 4));
        uVar14 = uVar14 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      uVar6 = *(ushort *)(param_1 + 2);
    }
    *(ushort *)((longlong)param_1 + 0x12) = uVar6;
  }
  if (*(int *)(param_2 + 0x1a0) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x2d;
  }
LAB_1432124ff:
  if (0x1f < uVar6) {
    uVar8 = *(uint *)(param_2 + 0x1a8);
    uVar16 = (ulonglong)uVar6;
    lVar1 = param_3 + (ulonglong)((uint)uVar6 + (uint)uVar6) * 4;
    _Dst = (void *)(param_3 + uVar16 * 4);
    uVar12 = *(uint *)(param_1 + 1);
    if ((((char)uVar8 == (char)uVar12) && (((uVar8 ^ uVar12) & 0xf00) == 0)) &&
       (uVar8 >> 0xc == uVar12 >> 0xc)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    uVar8 = uVar12 >> 0xc;
    local_98 = 0;
    local_res20 = 0;
    local_res10 = 0;
    if ((char)uVar12 != '\0') {
      uVar12 = 1;
      uVar14 = uVar11;
      do {
        if (((uVar12 & uVar8) != 0) || (uVar8 == 0)) {
          if (((uVar12 & 8) == 0) || (uVar8 == 0)) {
            lVar10 = *(ushort *)(param_1 + 2) * uVar14;
            uVar14 = (ulonglong)((int)uVar14 + 1);
            pfVar7 = (float *)(*param_1 + lVar10 * 4);
          }
          else {
            pfVar7 = (float *)AkAudioBuffer::GetLFE(param_1);
          }
          if (((uVar12 & *(uint *)(param_2 + 0x1a8) >> 0xc) != 0) || (bVar5 = false, bVar15)) {
            bVar5 = true;
          }
          if ((*(char *)(param_2 + 0x1b4) != '\0') && (bVar5)) {
            _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((uint)uVar6 * 4));
            AkHarmonizerDSPProcessVoice
                      (pfVar7,param_2,local_res10,0,param_3,_Dst,uVar6,
                       *(int *)((longlong)param_1 + 0xc) == 0x11,*(undefined4 *)(param_2 + 0x118),
                       lVar1);
            AkHarmonizerDSPProcessVoice
                      (pfVar7,param_2,local_res10,1,param_3,_Dst,uVar6,
                       *(int *)((longlong)param_1 + 0xc) == 0x11,*(undefined4 *)(param_2 + 0x134),
                       lVar1);
            local_res10 = local_res10 + 1;
          }
          uVar9 = (uint)uVar6;
          if (*(char *)(param_2 + 0x151) != '\0') {
            DSP::CDelayLight::ProcessBuffer
                      (*(longlong *)(param_2 + 0x100) + (ulonglong)local_res20 * 0x18,pfVar7,uVar9);
            local_res20 = local_res20 + 1;
          }
          if (((*(char *)(param_2 + 0x1b4) != '\0') && (bVar5)) ||
             ((*(int *)(param_2 + 0x140) == 6 && ((uVar12 == 2 && ((uVar8 & 2) != 0)))))) {
            DSP::Mix2Interp(pfVar7,_Dst,*(undefined4 *)(param_2 + 400),
                            *(undefined4 *)(param_2 + 0x144),*(undefined4 *)(param_2 + 0x194),
                            *(undefined4 *)(param_2 + 0x148),uVar9);
          }
          else {
            fVar4 = *(float *)(param_2 + 0x144);
            fVar22 = *(float *)(param_2 + 400);
            if (fVar4 == fVar22) {
              AK::DSP::ApplyGain(pfVar7,fVar22,uVar9);
            }
            else {
              pfVar2 = pfVar7 + uVar16;
              if (3 < uVar9) {
                pfVar3 = pfVar7 + (uVar9 & 0xfffffffc);
                fVar20 = (fVar4 - fVar22) / (float)(uVar9 & 0xfffffffc);
                fVar17 = fVar20 * 4.0;
                fVar18 = fVar20 + fVar22 + fVar20;
                fVar19 = fVar22;
                fVar21 = fVar20 + fVar22;
                fVar20 = fVar18 + fVar20;
                for (; pfVar7 < pfVar3; pfVar7 = pfVar7 + 4) {
                  *pfVar7 = *pfVar7 * fVar19;
                  pfVar7[1] = pfVar7[1] * fVar21;
                  pfVar7[2] = pfVar7[2] * fVar18;
                  pfVar7[3] = pfVar7[3] * fVar20;
                  fVar19 = fVar19 + fVar17;
                  fVar21 = fVar21 + fVar17;
                  fVar18 = fVar18 + fVar17;
                  fVar20 = fVar20 + fVar17;
                }
              }
              if (pfVar7 < pfVar2) {
                if (0xf < ((longlong)pfVar2 + (3 - (longlong)pfVar7) & 0xfffffffffffffffcU)) {
                  fVar19 = (fVar4 - fVar22) / (float)uVar16;
                  do {
                    *pfVar7 = fVar22 * *pfVar7;
                    fVar21 = fVar22 + fVar19 + fVar19;
                    pfVar7[1] = (fVar22 + fVar19) * pfVar7[1];
                    fVar18 = fVar21 + fVar19;
                    pfVar7[2] = fVar21 * pfVar7[2];
                    fVar22 = fVar18 + fVar19;
                    pfVar7[3] = fVar18 * pfVar7[3];
                    pfVar7 = pfVar7 + 4;
                  } while (pfVar7 < pfVar2 + -3);
                }
                if (pfVar7 < pfVar2) {
                  fVar19 = fVar22;
                  do {
                    *pfVar7 = fVar19 * *pfVar7;
                    pfVar7 = pfVar7 + 1;
                    fVar19 = fVar19 + (fVar4 - fVar22) / (float)uVar16;
                  } while (pfVar7 < pfVar2);
                }
              }
            }
          }
          local_98 = local_98 + 1;
          uVar11 = (ulonglong)local_98;
        }
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      } while ((uint)uVar11 < (uint)*(byte *)(param_1 + 1));
    }
    *(undefined8 *)(param_2 + 0x154) = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x15c) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x164) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_2 + 0x16c) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x174) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x138);
    *(undefined8 *)(param_2 + 0x18c) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x194) = *(undefined8 *)(param_2 + 0x148);
    *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(param_2 + 0x150);
  }
  return;
}



// FUNCTION 1432129a0 AkHarmonizerDSPProcessVoice body=1079 status=ok
// SIG undefined AkHarmonizerDSPProcessVoice(void)

void AkHarmonizerDSPProcessVoice
               (undefined8 param_1,longlong param_2,uint param_3,ulonglong param_4,float *param_5,
               undefined8 param_6,uint param_7,undefined1 param_8,undefined4 param_9,
               undefined8 param_10)

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
  float fVar33;
  float fVar34;
  uint uVar35;
  ulonglong uVar36;
  float *pfVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  longlong lVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float local_f8;
  float local_e8;
  float local_d8;
  float local_c8;
  
  param_4 = param_4 & 0xffffffff;
  lVar45 = param_4 * 0x1c;
  if (*(char *)(lVar45 + 0x120 + param_2) != '\0') {
    DSP::AkFFTAllButterflies::CAkResamplingPhaseVocoder::ProcessPitchChannel
              (param_4 * 0x58 + param_2,param_1,param_7,param_8,param_3,param_5,param_9,param_10);
    if (*(int *)(lVar45 + 0x108 + param_2) != 0) {
      uVar40 = param_7;
      if ((param_7 & 3) != 0) {
        pfVar37 = param_5 + param_7;
        iVar38 = 4 - (param_7 & 3);
        uVar40 = iVar38 + param_7;
        do {
          *pfVar37 = 0.0;
          pfVar37 = pfVar37 + 1;
          iVar38 = iVar38 + -1;
        } while (iVar38 != 0);
      }
      uVar43 = *(uint *)(param_2 + 0xcc + param_4 * 0x28);
      uVar41 = param_3 >> 2;
      uVar44 = param_3 & 3;
      if ((uVar43 - 1 == param_3) && ((uVar43 & 1) != 0)) {
        uVar35 = uVar41;
        if ((uVar43 != 1) && (1 < uVar44)) {
          uVar35 = uVar41 + 1;
        }
        lVar42 = *(longlong *)(param_2 + 0xb0 + param_4 * 0x28);
        uVar36 = (ulonglong)(uVar35 << 4);
        local_f8 = *(float *)(lVar42 + uVar36 * 4);
        local_e8 = *(float *)(lVar42 + 4 + uVar36 * 4);
        local_d8 = *(float *)(lVar42 + 8 + uVar36 * 4);
        local_c8 = *(float *)(lVar42 + 0xc + uVar36 * 4);
      }
      else {
        lVar39 = (ulonglong)(uVar41 << 4) + (ulonglong)uVar44;
        lVar42 = *(longlong *)(param_2 + 0xb0 + param_4 * 0x28);
        local_f8 = *(float *)(lVar42 + lVar39 * 4);
        local_e8 = *(float *)(lVar42 + 0x10 + lVar39 * 4);
        local_d8 = *(float *)(lVar42 + 0x20 + lVar39 * 4);
        local_c8 = *(float *)(lVar42 + 0x30 + lVar39 * 4);
      }
      pfVar37 = *(float **)(param_2 + 0xc0 + param_4 * 0x28);
      fVar1 = *pfVar37;
      fVar2 = pfVar37[1];
      fVar3 = pfVar37[2];
      fVar4 = pfVar37[3];
      fVar5 = pfVar37[4];
      fVar6 = pfVar37[5];
      fVar7 = pfVar37[6];
      fVar8 = pfVar37[7];
      fVar9 = pfVar37[8];
      fVar10 = pfVar37[9];
      fVar11 = pfVar37[10];
      fVar12 = pfVar37[0xb];
      fVar13 = pfVar37[0xc];
      fVar14 = pfVar37[0xd];
      fVar15 = pfVar37[0xe];
      fVar16 = pfVar37[0xf];
      fVar17 = pfVar37[0x10];
      fVar18 = pfVar37[0x11];
      fVar19 = pfVar37[0x12];
      fVar20 = pfVar37[0x13];
      fVar21 = pfVar37[0x14];
      fVar22 = pfVar37[0x15];
      fVar23 = pfVar37[0x16];
      fVar24 = pfVar37[0x17];
      fVar25 = pfVar37[0x18];
      fVar26 = pfVar37[0x19];
      fVar27 = pfVar37[0x1a];
      fVar28 = pfVar37[0x1b];
      fVar29 = pfVar37[0x1c];
      fVar30 = pfVar37[0x1d];
      fVar31 = pfVar37[0x1e];
      fVar32 = pfVar37[0x1f];
      pfVar37 = param_5;
      fVar51 = local_e8;
      fVar52 = local_f8;
      if (param_5 < param_5 + uVar40) {
        do {
          fVar33 = *pfVar37;
          fVar34 = pfVar37[1];
          local_e8 = pfVar37[2];
          local_f8 = pfVar37[3];
          fVar46 = fVar25 * local_d8;
          fVar47 = fVar26 * local_d8;
          fVar48 = fVar29 * local_c8;
          fVar49 = fVar30 * local_c8;
          fVar50 = fVar32 * local_c8;
          local_c8 = fVar34 * fVar11 +
                     fVar7 * local_e8 +
                     local_e8 * fVar3 + fVar19 * fVar52 + fVar23 * fVar51 + fVar27 * local_d8 +
                     fVar31 * local_c8 + fVar33 * fVar15;
          local_d8 = fVar34 * fVar12 +
                     fVar8 * local_e8 +
                     local_f8 * fVar4 + fVar20 * fVar52 + fVar24 * fVar51 + fVar28 * local_d8 +
                     fVar50 + fVar33 * fVar16;
          *pfVar37 = fVar34 * fVar9 +
                     fVar5 * local_e8 +
                     fVar33 * fVar1 + fVar17 * fVar52 + fVar21 * fVar51 + fVar46 + fVar48 +
                     fVar33 * fVar13;
          pfVar37[1] = fVar34 * fVar10 +
                       fVar6 * local_e8 +
                       fVar34 * fVar2 + fVar18 * fVar52 + fVar22 * fVar51 + fVar47 + fVar49 +
                       fVar33 * fVar14;
          pfVar37[2] = local_c8;
          pfVar37[3] = local_d8;
          pfVar37 = pfVar37 + 4;
          fVar51 = local_e8;
          fVar52 = local_f8;
        } while (pfVar37 < param_5 + uVar40);
        uVar43 = *(uint *)(param_2 + 0xcc + param_4 * 0x28);
      }
      if ((uVar43 - 1 == param_3) && ((uVar43 & 1) != 0)) {
        if ((uVar43 != 1) && (1 < uVar44)) {
          uVar41 = uVar41 + 1;
        }
        uVar36 = (ulonglong)(uVar41 << 4);
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + uVar36 * 4) = local_f8;
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + 4 + uVar36 * 4) = local_e8;
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + 8 + uVar36 * 4) = local_d8;
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + 0xc + uVar36 * 4) = local_c8;
      }
      else {
        lVar42 = (ulonglong)(uVar41 << 4) + (ulonglong)uVar44;
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + lVar42 * 4) = local_f8;
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + 0x10 + lVar42 * 4) = local_e8;
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + 0x20 + lVar42 * 4) = local_d8;
        *(float *)(*(longlong *)(param_2 + 0xb0 + param_4 * 0x28) + 0x30 + lVar42 * 4) = local_c8;
      }
    }
    DSP::Mix2Interp(param_6,param_5,0x3f800000,0x3f800000,*(undefined4 *)(lVar45 + 0x168 + param_2),
                    *(undefined4 *)(lVar45 + 0x11c + param_2),param_7);
  }
  return;
}



// FUNCTION 143212de0 GetLFE body=33 status=ok
// SIG undefined GetLFE(void)

longlong AkAudioBuffer::GetLFE(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 0xf & 1) != 0) {
    return *param_1 +
           (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1) * (ulonglong)*(ushort *)(param_1 + 2) *
           4;
  }
  return 0;
}



// FUNCTION 143212e10 ak_fftr body=295 status=ok
// SIG undefined ak_fftr(void)

void DSP::AkFFTAllButterflies::ak_fftr(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar4 = *(int *)*param_1;
  ak_fft((int *)*param_1,param_2,param_1[1]);
  pfVar5 = (float *)param_1[1];
  lVar6 = param_1[2];
  uVar9 = 1;
  if (iVar4 / 2 != 0) {
    do {
      iVar8 = (int)uVar9;
      uVar7 = (iVar4 - iVar8) - 1;
      pfVar1 = pfVar5 + uVar9 * 2;
      pfVar2 = pfVar5 + (ulonglong)uVar7 * 2;
      pfVar3 = (float *)(lVar6 + (ulonglong)(iVar8 - 1) * 8);
      fVar15 = pfVar2[2] * 1.0 + *pfVar1;
      fVar16 = pfVar2[3] * -1.0 + pfVar1[1];
      fVar17 = *pfVar2 * 1.0 + pfVar1[2];
      fVar18 = pfVar2[1] * -1.0 + pfVar1[3];
      fVar11 = *pfVar1 - pfVar2[2] * 1.0;
      fVar12 = pfVar1[1] - pfVar2[3] * -1.0;
      fVar13 = pfVar1[2] - *pfVar2 * 1.0;
      fVar14 = pfVar1[3] - pfVar2[1] * -1.0;
      fVar10 = fVar12 * -1.0 * pfVar3[1] + fVar11 * *pfVar3;
      fVar11 = fVar12 * 1.0 * *pfVar3 + fVar11 * pfVar3[1];
      fVar12 = fVar14 * -1.0 * pfVar3[3] + fVar13 * pfVar3[2];
      fVar13 = fVar14 * 1.0 * pfVar3[2] + fVar13 * pfVar3[3];
      pfVar1 = param_3 + uVar9 * 2;
      *pfVar1 = (fVar10 + fVar15) * 0.5;
      pfVar1[1] = (fVar11 + fVar16) * 0.5;
      pfVar1[2] = (fVar12 + fVar17) * 0.5;
      pfVar1[3] = (fVar13 + fVar18) * 0.5;
      pfVar1 = param_3 + (ulonglong)uVar7 * 2;
      *pfVar1 = (fVar17 - fVar12) * 1.0 * 0.5;
      pfVar1[1] = (fVar18 - fVar13) * -1.0 * 0.5;
      pfVar1[2] = (fVar15 - fVar10) * 1.0 * 0.5;
      pfVar1[3] = (fVar16 - fVar11) * -1.0 * 0.5;
      uVar9 = (ulonglong)(iVar8 + 2U);
    } while (iVar8 + 2U <= (uint)(iVar4 / 2));
  }
  fVar10 = pfVar5[1];
  fVar11 = *pfVar5;
  *param_3 = fVar10 + fVar11;
  param_3[(longlong)iVar4 * 2] = fVar11 - fVar10;
  param_3[1] = 0.0;
  param_3[(longlong)iVar4 * 2 + 1] = 0.0;
  return;
}



// FUNCTION 143212f40 ak_fftr_alloc body=451 status=ok
// SIG undefined ak_fftr_alloc(void)

longlong *
DSP::AkFFTAllButterflies::ak_fftr_alloc
          (uint param_1,ulonglong param_2,longlong *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  double dVar8;
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  longlong local_48 [8];
  
  if ((param_1 & 1) == 0) {
    iVar5 = (int)param_1 >> 1;
    ak_fft_alloc(iVar5,param_2,0,local_48);
    plVar7 = (longlong *)0x0;
    uVar2 = local_48[0] + ((longlong)((iVar5 * 3) / 2) + 4) * 8;
    uVar3 = *param_4;
    *param_4 = uVar2;
    if (uVar3 < uVar2) {
      param_3 = plVar7;
    }
    if (param_3 != (longlong *)0x0) {
      plVar1 = param_3 + 4;
      *param_3 = (longlong)plVar1;
      param_3[1] = (longlong)plVar1 + local_48[0];
      param_3[2] = (longlong)plVar1 + local_48[0] + (longlong)iVar5 * 8;
      ak_fft_alloc(iVar5,param_2 & 0xffffffff,plVar1,local_48);
      iVar4 = iVar5 - ((int)param_1 >> 0x1f) >> 1;
      if (iVar4 < 1) {
        return param_3;
      }
      iVar6 = 1;
      if ((int)param_2 != 0) {
        do {
          dVar8 = (double)__libm_sse2_sincos_();
          *(float *)(param_3[2] + (longlong)plVar7 * 8) = (float)extraout_XMM0_Qb;
          *(float *)(param_3[2] + 4 + (longlong)plVar7 * 8) = (float)dVar8;
          plVar7 = (longlong *)((longlong)plVar7 + 1);
        } while ((longlong)plVar7 < (longlong)iVar4);
        return param_3;
      }
      do {
        dVar8 = (double)__libm_sse2_sincos_(-1.5707963267948966 -
                                            (double)iVar6 * (1.0 / (double)iVar5) *
                                            3.141592653589793);
        iVar6 = iVar6 + 1;
        *(float *)(param_3[2] + (longlong)plVar7 * 8) = (float)extraout_XMM0_Qb_00;
        *(float *)(param_3[2] + 4 + (longlong)plVar7 * 8) = (float)dVar8;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      } while ((longlong)plVar7 < (longlong)iVar4);
      return param_3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143213110 ak_fftri body=282 status=ok
// SIG undefined ak_fftri(void)

void DSP::AkFFTAllButterflies::ak_fftri(undefined8 *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar11 = *param_2;
  pfVar5 = (float *)param_1[1];
  piVar6 = (int *)*param_1;
  uVar10 = 1;
  lVar7 = param_1[2];
  iVar4 = *piVar6;
  fVar12 = param_2[(longlong)iVar4 * 2];
  *pfVar5 = fVar11 + param_2[(longlong)iVar4 * 2];
  pfVar5[1] = fVar11 - fVar12;
  if (iVar4 / 2 != 0) {
    do {
      iVar9 = (int)uVar10;
      uVar8 = (iVar4 - iVar9) - 1;
      pfVar1 = param_2 + uVar10 * 2;
      pfVar2 = param_2 + (ulonglong)uVar8 * 2;
      pfVar3 = (float *)(lVar7 + (ulonglong)(iVar9 - 1) * 8);
      fVar16 = pfVar2[2] * 1.0 + *pfVar1;
      fVar17 = pfVar2[3] * -1.0 + pfVar1[1];
      fVar18 = *pfVar2 * 1.0 + pfVar1[2];
      fVar19 = pfVar2[1] * -1.0 + pfVar1[3];
      fVar12 = *pfVar1 - pfVar2[2] * 1.0;
      fVar13 = pfVar1[1] - pfVar2[3] * -1.0;
      fVar14 = pfVar1[2] - *pfVar2 * 1.0;
      fVar15 = pfVar1[3] - pfVar2[1] * -1.0;
      fVar11 = fVar13 * -1.0 * pfVar3[1] + fVar12 * *pfVar3;
      fVar12 = fVar13 * 1.0 * *pfVar3 + fVar12 * pfVar3[1];
      fVar13 = fVar15 * -1.0 * pfVar3[3] + fVar14 * pfVar3[2];
      fVar14 = fVar15 * 1.0 * pfVar3[2] + fVar14 * pfVar3[3];
      pfVar1 = pfVar5 + uVar10 * 2;
      *pfVar1 = fVar11 + fVar16;
      pfVar1[1] = fVar12 + fVar17;
      pfVar1[2] = fVar13 + fVar18;
      pfVar1[3] = fVar14 + fVar19;
      pfVar1 = pfVar5 + (ulonglong)uVar8 * 2;
      *pfVar1 = (fVar18 - fVar13) * 1.0;
      pfVar1[1] = (fVar19 - fVar14) * -1.0;
      pfVar1[2] = (fVar16 - fVar11) * 1.0;
      pfVar1[3] = (fVar17 - fVar12) * -1.0;
      uVar10 = (ulonglong)(iVar9 + 2U);
    } while (iVar9 + 2U <= (uint)(iVar4 / 2));
  }
  ak_fft(piVar6,pfVar5,param_3);
  return;
}



// FUNCTION 143213230 AdvanceFrames body=38 status=ok
// SIG undefined AdvanceFrames(void)

uint DSP::CAkCircularBuffer::AdvanceFrames(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[3];
  uVar2 = uVar1;
  if (param_2 < uVar1) {
    uVar2 = param_2;
  }
  param_1[3] = uVar1 - uVar2;
  param_1[2] = (param_1[2] + uVar2) % *param_1;
  return uVar2;
}



// FUNCTION 143213260 Init body=68 status=ok
// SIG undefined Init(void)

undefined8 DSP::CAkCircularBuffer::Init(uint *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)param_3 << 2);
  *(longlong *)(param_1 + 4) = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 1432132b0 PushFrames body=171 status=ok
// SIG undefined PushFrames(void)

uint DSP::CAkCircularBuffer::PushFrames(uint *param_1,void *param_2,uint param_3)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  
  _Dst = *(void **)(param_1 + 4);
  uVar1 = *param_1 - param_1[3];
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    param_3 = 0;
  }
  else {
    uVar2 = *param_1 - param_1[1];
    uVar1 = param_3;
    if (uVar2 <= param_3) {
      uVar1 = uVar2;
    }
    if (uVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Dst + (ulonglong)param_1[1] * 4),param_2,(ulonglong)(uVar1 * 4)
                );
    }
    if (param_3 - uVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((longlong)param_2 + (ulonglong)uVar1 * 4),
                 (ulonglong)((param_3 - uVar1) * 4));
    }
    param_1[3] = param_1[3] + param_3;
    param_1[1] = (param_1[1] + param_3) % *param_1;
  }
  return param_3;
}



// FUNCTION 143213360 ReadFrameBlock body=179 status=ok
// SIG undefined ReadFrameBlock(void)

undefined8
DSP::CAkCircularBuffer::ReadFrameBlock(int *param_1,void *param_2,uint param_3,char param_4)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  
  _Src = *(void **)(param_1 + 4);
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    uVar2 = param_1[3];
    if (param_4 == '\0') {
      if (param_3 <= uVar2) {
LAB_1432133d3:
        uVar2 = *param_1 - param_1[2];
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        ::_guard_xfg_dispatch_icall_nop
                  (param_2,(void *)((longlong)_Src + (ulonglong)(uint)param_1[2] * 4),
                   (ulonglong)(uVar2 * 4));
        if (param_3 - uVar2 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)param_2 + (ulonglong)uVar2 * 4),_Src,
                     (ulonglong)((param_3 - uVar2) * 4));
        }
        return 1;
      }
    }
    else if (uVar2 != 0) {
      uVar1 = param_3;
      if (uVar2 < param_3) {
        uVar1 = uVar2;
      }
      if (param_3 - uVar1 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)param_2 + (ulonglong)uVar1 * 4),0,
                   (ulonglong)((param_3 - uVar1) * 4));
      }
      goto LAB_1432133d3;
    }
  }
  return 0;
}



// FUNCTION 143213420 Reset body=47 status=ok
// SIG undefined Reset(void)

void DSP::CAkCircularBuffer::Reset(int *param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 4),0,(ulonglong)(uint)(*param_1 << 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143213450 Term body=56 status=ok
// SIG undefined Term(void)

void DSP::CAkCircularBuffer::Term(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 143213490 Init body=9 status=ok
// SIG undefined Init(void)

void DSP::CAkOLACircularBuffer::Init
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x18) = param_4;
  CAkCircularBuffer::Init();
  return;
}



// FUNCTION 1432134a0 IsDoneTail body=49 status=ok
// SIG undefined IsDoneTail(void)

ulonglong DSP::CAkOLACircularBuffer::IsDoneTail(uint *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  uint uVar3;
  
  if (param_1[3] != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar3 = (param_1[6] + param_1[1]) % *param_1;
  uVar1 = param_1[2];
  iVar2 = *param_1 - uVar1;
  if (uVar1 <= uVar3) {
    iVar2 = -uVar1;
  }
  return (ulonglong)CONCAT31((int3)(uVar1 >> 8),iVar2 + uVar3 == 0);
}



// FUNCTION 1432134e0 PopFrames body=283 status=ok
// SIG undefined PopFrames(void)

uint DSP::CAkOLACircularBuffer::PopFrames(uint *param_1,void *param_2,uint param_3,char param_4)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  _Src = *(void **)(param_1 + 4);
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    if ((param_4 == '\0') || (param_1[3] != 0)) {
      uVar2 = param_1[3];
      uVar3 = *param_1;
      uVar4 = param_1[2];
      if (uVar2 < param_3) {
        param_3 = uVar2;
      }
      param_1[3] = uVar2 - param_3;
    }
    else {
      uVar3 = *param_1;
      uVar4 = param_1[2];
      uVar2 = (param_1[6] + param_1[1]) % uVar3;
      iVar1 = uVar3 - uVar4;
      if (uVar4 < uVar2) {
        iVar1 = -uVar4;
      }
      uVar2 = iVar1 + uVar2;
      if (uVar2 < param_3) {
        param_3 = uVar2;
      }
    }
    uVar2 = param_3;
    if (uVar3 - uVar4 <= param_3) {
      uVar2 = uVar3 - uVar4;
    }
    ::_guard_xfg_dispatch_icall_nop
              (param_2,(void *)((longlong)_Src + (ulonglong)uVar4 * 4),(ulonglong)(uVar2 * 4));
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + (ulonglong)param_1[2] * 4),0,(ulonglong)(uVar2 * 4));
    if (param_3 - uVar2 != 0) {
      uVar3 = (param_3 - uVar2) * 4;
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 + (ulonglong)uVar2 * 4),_Src,(ulonglong)uVar3);
      ::_guard_xfg_dispatch_icall_nop(_Src,0,(ulonglong)uVar3);
    }
    param_1[2] = (param_1[2] + param_3) % *param_1;
    return param_3;
  }
  return 0;
}



// FUNCTION 143213600 PushOverlappedWindow body=649 status=ok
// SIG undefined PushOverlappedWindow(void)

ulonglong DSP::CAkOLACircularBuffer::PushOverlappedWindow
                    (uint *param_1,float *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  
  if (param_2 != (float *)0x0) {
    uVar5 = *param_1 - param_1[3];
    in_RAX = (ulonglong)uVar5;
    uVar7 = param_1[6];
    if (uVar7 <= uVar5) {
      uVar5 = *param_1 - param_1[1];
      if (uVar5 <= uVar7) {
        uVar7 = uVar5;
      }
      uVar5 = 0;
      pfVar9 = param_4 + param_1[1];
      if (uVar7 != 0) {
        pfVar10 = param_2;
        uVar12 = uVar5;
        if (0xf < uVar7) {
          do {
            fVar2 = pfVar10[1];
            fVar3 = pfVar10[2];
            fVar4 = pfVar10[3];
            uVar12 = uVar12 + 0x10;
            *pfVar9 = *pfVar9 + *pfVar10;
            pfVar9[1] = pfVar9[1] + fVar2;
            pfVar9[2] = pfVar9[2] + fVar3;
            pfVar9[3] = pfVar9[3] + fVar4;
            fVar2 = pfVar10[5];
            fVar3 = pfVar10[6];
            fVar4 = pfVar10[7];
            pfVar9[4] = pfVar9[4] + pfVar10[4];
            pfVar9[5] = pfVar9[5] + fVar2;
            pfVar9[6] = pfVar9[6] + fVar3;
            pfVar9[7] = pfVar9[7] + fVar4;
            fVar2 = pfVar10[9];
            fVar3 = pfVar10[10];
            fVar4 = pfVar10[0xb];
            pfVar9[8] = pfVar9[8] + pfVar10[8];
            pfVar9[9] = pfVar9[9] + fVar2;
            pfVar9[10] = pfVar9[10] + fVar3;
            pfVar9[0xb] = pfVar9[0xb] + fVar4;
            pfVar1 = pfVar10 + 0xc;
            fVar2 = pfVar10[0xd];
            fVar3 = pfVar10[0xe];
            fVar4 = pfVar10[0xf];
            pfVar10 = pfVar10 + 0x10;
            pfVar9[0xc] = pfVar9[0xc] + *pfVar1;
            pfVar9[0xd] = pfVar9[0xd] + fVar2;
            pfVar9[0xe] = pfVar9[0xe] + fVar3;
            pfVar9[0xf] = pfVar9[0xf] + fVar4;
            pfVar9 = pfVar9 + 0x10;
          } while (uVar12 < (uVar7 & 0xfffffff0));
        }
        if (uVar12 < uVar7) {
          if (3 < uVar7 - uVar12) {
            uVar6 = ((uVar7 - uVar12) - 4 >> 2) + 1;
            uVar8 = (ulonglong)uVar6;
            uVar12 = uVar12 + uVar6 * 4;
            do {
              *pfVar9 = *pfVar9 + *pfVar10;
              pfVar9[1] = pfVar10[1] + pfVar9[1];
              pfVar9[2] = pfVar10[2] + pfVar9[2];
              pfVar1 = pfVar10 + 3;
              pfVar10 = pfVar10 + 4;
              pfVar9[3] = *pfVar1 + pfVar9[3];
              pfVar9 = pfVar9 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (uVar12 < uVar7) {
            lVar11 = (longlong)pfVar10 - (longlong)pfVar9;
            uVar8 = (ulonglong)(uVar7 - uVar12);
            do {
              *pfVar9 = *(float *)(lVar11 + (longlong)pfVar9) + *pfVar9;
              pfVar9 = pfVar9 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
      }
      uVar12 = param_1[6] - uVar7;
      if ((uVar12 != 0) && (param_2 = param_2 + uVar7, uVar12 != 0)) {
        if (0xf < uVar12) {
          do {
            uVar5 = uVar5 + 0x10;
            fVar2 = param_2[1];
            fVar3 = param_2[2];
            fVar4 = param_2[3];
            *param_4 = *param_2 + *param_4;
            param_4[1] = fVar2 + param_4[1];
            param_4[2] = fVar3 + param_4[2];
            param_4[3] = fVar4 + param_4[3];
            fVar2 = param_2[5];
            fVar3 = param_2[6];
            fVar4 = param_2[7];
            param_4[4] = param_2[4] + param_4[4];
            param_4[5] = fVar2 + param_4[5];
            param_4[6] = fVar3 + param_4[6];
            param_4[7] = fVar4 + param_4[7];
            fVar2 = param_2[9];
            fVar3 = param_2[10];
            fVar4 = param_2[0xb];
            param_4[8] = param_2[8] + param_4[8];
            param_4[9] = fVar2 + param_4[9];
            param_4[10] = fVar3 + param_4[10];
            param_4[0xb] = fVar4 + param_4[0xb];
            pfVar9 = param_2 + 0xc;
            fVar2 = param_2[0xd];
            fVar3 = param_2[0xe];
            fVar4 = param_2[0xf];
            param_2 = param_2 + 0x10;
            param_4[0xc] = *pfVar9 + param_4[0xc];
            param_4[0xd] = fVar2 + param_4[0xd];
            param_4[0xe] = fVar3 + param_4[0xe];
            param_4[0xf] = fVar4 + param_4[0xf];
            param_4 = param_4 + 0x10;
          } while (uVar5 < (uVar12 & 0xfffffff0));
        }
        if (uVar5 < uVar12) {
          if (3 < uVar12 - uVar5) {
            uVar7 = ((uVar12 - uVar5) - 4 >> 2) + 1;
            uVar8 = (ulonglong)uVar7;
            uVar5 = uVar5 + uVar7 * 4;
            do {
              *param_4 = *param_2 + *param_4;
              param_4[1] = param_2[1] + param_4[1];
              param_4[2] = param_2[2] + param_4[2];
              pfVar9 = param_2 + 3;
              param_2 = param_2 + 4;
              param_4[3] = *pfVar9 + param_4[3];
              param_4 = param_4 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (uVar5 < uVar12) {
            lVar11 = (longlong)param_2 - (longlong)param_4;
            uVar8 = (ulonglong)(uVar12 - uVar5);
            do {
              *param_4 = *(float *)(lVar11 + (longlong)param_4) + *param_4;
              param_4 = param_4 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
      }
      uVar7 = param_1[1];
      param_1[3] = param_1[3] + param_3;
      param_1[1] = (uVar7 + param_3) % *param_1;
      return CONCAT71((int7)((ulonglong)(uVar7 + param_3) / (ulonglong)*param_1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143213890 PushOverlappedWindow body=9 status=ok
// SIG undefined PushOverlappedWindow(void)

void DSP::CAkOLACircularBuffer::PushOverlappedWindow(void)

{
  PushOverlappedWindow();
  return;
}



// FUNCTION 1432138a0 Apply body=699 status=ok
// SIG undefined Apply(void)

void DSP::CAkTimeWindow::Apply
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  
  uVar9 = *(uint *)(param_1 + 8);
  uVar18 = 0;
  uVar19 = uVar9 >> 1;
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar20 = 8;
      do {
        pfVar14 = (float *)(param_2 + uVar18 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        uVar21 = (ulonglong)(uVar20 - 4);
        pfVar1 = (float *)(param_4 + uVar18 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar18 * 4);
        *pfVar2 = *pfVar1 * *pfVar14;
        pfVar2[1] = fVar6 * fVar3;
        pfVar2[2] = fVar7 * fVar4;
        pfVar2[3] = fVar8 * fVar5;
        uVar17 = (int)uVar18 + 0x10;
        uVar18 = (ulonglong)uVar17;
        pfVar14 = (float *)(param_2 + uVar21 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_4 + uVar21 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar21 * 4);
        *pfVar2 = *pfVar1 * *pfVar14;
        pfVar2[1] = fVar6 * fVar3;
        pfVar2[2] = fVar7 * fVar4;
        pfVar2[3] = fVar8 * fVar5;
        uVar21 = (ulonglong)uVar20;
        pfVar14 = (float *)(param_2 + uVar21 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_4 + uVar21 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar21 * 4);
        *pfVar2 = *pfVar1 * *pfVar14;
        pfVar2[1] = fVar6 * fVar3;
        pfVar2[2] = fVar7 * fVar4;
        pfVar2[3] = fVar8 * fVar5;
        uVar21 = (ulonglong)(uVar20 + 4);
        uVar20 = uVar20 + 0x10;
        pfVar14 = (float *)(param_2 + uVar21 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_4 + uVar21 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar21 * 4);
        *pfVar2 = *pfVar1 * *pfVar14;
        pfVar2[1] = fVar6 * fVar3;
        pfVar2[2] = fVar7 * fVar4;
        pfVar2[3] = fVar8 * fVar5;
      } while (uVar17 < (uVar19 & 0xfffffff0));
    }
    uVar20 = (uint)uVar18;
    if (uVar20 < uVar19) {
      if (3 < uVar19 - uVar20) {
        lVar13 = uVar18 + 1;
        lVar16 = param_4 - param_2;
        uVar17 = ((uVar19 - uVar20) - 4 >> 2) + 1;
        uVar21 = (ulonglong)uVar17;
        uVar18 = (ulonglong)(uVar20 + uVar17 * 4);
        pfVar14 = (float *)(param_2 + lVar13 * 4);
        do {
          fVar3 = *(float *)(lVar16 + (longlong)pfVar14);
          pfVar14[-1] = *(float *)(lVar16 + -4 + (longlong)pfVar14) * pfVar14[-1];
          fVar4 = *(float *)(lVar16 + 4 + (longlong)pfVar14);
          *pfVar14 = fVar3 * *pfVar14;
          fVar3 = *(float *)(lVar16 + 8 + (longlong)pfVar14);
          pfVar14[1] = fVar4 * pfVar14[1];
          pfVar14[2] = fVar3 * pfVar14[2];
          uVar21 = uVar21 - 1;
          pfVar14 = pfVar14 + 4;
        } while (uVar21 != 0);
      }
      uVar20 = (uint)uVar18;
      if (uVar20 < uVar19) {
        lVar13 = uVar18 * 4;
        uVar21 = (ulonglong)(uVar19 - uVar20);
        uVar18 = (ulonglong)(uVar20 + (uVar19 - uVar20));
        pfVar14 = (float *)(param_2 + lVar13);
        do {
          *pfVar14 = *(float *)((longlong)pfVar14 + (param_4 - param_2)) * *pfVar14;
          uVar21 = uVar21 - 1;
          pfVar14 = pfVar14 + 1;
        } while (uVar21 != 0);
      }
    }
  }
  uVar19 = uVar9 - (uint)uVar18;
  if ((uint)uVar18 < uVar9) {
    if (7 < uVar19) {
      do {
        iVar15 = (int)uVar18;
        iVar22 = uVar9 - iVar15;
        fVar3 = *(float *)(param_4 + (ulonglong)(iVar22 - 3) * 4);
        fVar4 = *(float *)(param_4 + (ulonglong)(iVar22 - 4) * 4);
        fVar5 = *(float *)(param_4 + (ulonglong)(iVar22 - 2) * 4);
        pfVar14 = (float *)(param_2 + uVar18 * 4);
        fVar10 = pfVar14[1];
        fVar11 = pfVar14[2];
        fVar12 = pfVar14[3];
        fVar6 = *(float *)(param_4 + (ulonglong)(iVar22 - 8) * 4);
        fVar7 = *(float *)(param_4 + (ulonglong)(iVar22 - 6) * 4);
        fVar8 = *(float *)(param_4 + (ulonglong)(iVar22 - 7) * 4);
        pfVar1 = (float *)(param_2 + uVar18 * 4);
        *pfVar1 = *(float *)(param_4 + (ulonglong)(iVar22 - 1) * 4) * *pfVar14;
        pfVar1[1] = fVar5 * fVar10;
        pfVar1[2] = fVar3 * fVar11;
        pfVar1[3] = fVar4 * fVar12;
        uVar18 = (ulonglong)(iVar15 + 8U);
        pfVar14 = (float *)(param_2 + (ulonglong)(iVar15 + 4) * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_2 + (ulonglong)(iVar15 + 4) * 4);
        *pfVar1 = *(float *)(param_4 + (ulonglong)(iVar22 - 5) * 4) * *pfVar14;
        pfVar1[1] = fVar7 * fVar3;
        pfVar1[2] = fVar8 * fVar4;
        pfVar1[3] = fVar6 * fVar5;
      } while (iVar15 + 8U < uVar9 - (uVar19 & 7));
    }
    if ((uint)uVar18 < uVar9) {
      if (3 < uVar9 - (uint)uVar18) {
        pfVar14 = (float *)(param_2 + (uVar18 + 2) * 4);
        do {
          iVar15 = uVar9 - (int)uVar18;
          uVar19 = (int)uVar18 + 4;
          uVar18 = (ulonglong)uVar19;
          pfVar14[-2] = *(float *)(param_4 + (ulonglong)(iVar15 - 1) * 4) * pfVar14[-2];
          pfVar14[-1] = *(float *)(param_4 + (ulonglong)(iVar15 - 2) * 4) * pfVar14[-1];
          *pfVar14 = *(float *)(param_4 + (ulonglong)(iVar15 - 3) * 4) * *pfVar14;
          pfVar14[1] = *(float *)(param_4 + (ulonglong)(iVar15 - 4) * 4) * pfVar14[1];
          pfVar14 = pfVar14 + 4;
        } while (uVar19 < uVar9 - 3);
      }
      if ((uint)uVar18 < uVar9) {
        pfVar14 = (float *)(param_2 + uVar18 * 4);
        do {
          iVar15 = (int)uVar18;
          uVar19 = iVar15 + 1;
          uVar18 = (ulonglong)uVar19;
          *pfVar14 = *(float *)(param_4 + (ulonglong)((uVar9 - iVar15) - 1) * 4) * *pfVar14;
          pfVar14 = pfVar14 + 1;
        } while (uVar19 < uVar9);
      }
    }
  }
  return;
}



// FUNCTION 143213b60 Apply body=776 status=ok
// SIG undefined Apply(void)

void DSP::CAkTimeWindow::Apply
               (longlong param_1,longlong param_2,undefined8 param_3,float param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  
  uVar9 = *(uint *)(param_1 + 8);
  uVar18 = 0;
  uVar19 = uVar9 >> 1;
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar20 = 8;
      do {
        pfVar14 = (float *)(param_2 + uVar18 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        uVar21 = (ulonglong)(uVar20 - 4);
        pfVar1 = (float *)(param_5 + uVar18 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar18 * 4);
        *pfVar2 = *pfVar1 * param_4 * *pfVar14;
        pfVar2[1] = fVar6 * param_4 * fVar3;
        pfVar2[2] = fVar7 * param_4 * fVar4;
        pfVar2[3] = fVar8 * param_4 * fVar5;
        uVar17 = (int)uVar18 + 0x10;
        uVar18 = (ulonglong)uVar17;
        pfVar14 = (float *)(param_2 + uVar21 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_5 + uVar21 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar21 * 4);
        *pfVar2 = *pfVar1 * param_4 * *pfVar14;
        pfVar2[1] = fVar6 * param_4 * fVar3;
        pfVar2[2] = fVar7 * param_4 * fVar4;
        pfVar2[3] = fVar8 * param_4 * fVar5;
        uVar21 = (ulonglong)uVar20;
        pfVar14 = (float *)(param_2 + uVar21 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_5 + uVar21 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar21 * 4);
        *pfVar2 = *pfVar1 * param_4 * *pfVar14;
        pfVar2[1] = fVar6 * param_4 * fVar3;
        pfVar2[2] = fVar7 * param_4 * fVar4;
        pfVar2[3] = fVar8 * param_4 * fVar5;
        uVar21 = (ulonglong)(uVar20 + 4);
        uVar20 = uVar20 + 0x10;
        pfVar14 = (float *)(param_2 + uVar21 * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_5 + uVar21 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar21 * 4);
        *pfVar2 = *pfVar1 * param_4 * *pfVar14;
        pfVar2[1] = fVar6 * param_4 * fVar3;
        pfVar2[2] = fVar7 * param_4 * fVar4;
        pfVar2[3] = fVar8 * param_4 * fVar5;
      } while (uVar17 < (uVar19 & 0xfffffff0));
    }
    uVar20 = (uint)uVar18;
    if (uVar20 < uVar19) {
      if (3 < uVar19 - uVar20) {
        lVar13 = uVar18 + 1;
        lVar16 = param_5 - param_2;
        uVar17 = ((uVar19 - uVar20) - 4 >> 2) + 1;
        uVar21 = (ulonglong)uVar17;
        uVar18 = (ulonglong)(uVar20 + uVar17 * 4);
        pfVar14 = (float *)(param_2 + lVar13 * 4);
        do {
          pfVar1 = pfVar14 + 4;
          fVar3 = *(float *)(lVar16 + -0x10 + (longlong)pfVar1);
          pfVar14[-1] = param_4 * *(float *)(lVar16 + -0x14 + (longlong)pfVar1) * pfVar14[-1];
          fVar4 = *(float *)(lVar16 + -0xc + (longlong)pfVar1);
          *pfVar14 = param_4 * fVar3 * *pfVar14;
          fVar3 = *(float *)(lVar16 + -8 + (longlong)pfVar1);
          pfVar14[1] = param_4 * fVar4 * pfVar14[1];
          pfVar14[2] = param_4 * fVar3 * pfVar14[2];
          uVar21 = uVar21 - 1;
          pfVar14 = pfVar1;
        } while (uVar21 != 0);
      }
      uVar20 = (uint)uVar18;
      if (uVar20 < uVar19) {
        lVar13 = uVar18 * 4;
        uVar21 = (ulonglong)(uVar19 - uVar20);
        uVar18 = (ulonglong)(uVar20 + (uVar19 - uVar20));
        pfVar14 = (float *)(param_2 + lVar13);
        do {
          *pfVar14 = param_4 * *(float *)((longlong)pfVar14 + (param_5 - param_2)) * *pfVar14;
          uVar21 = uVar21 - 1;
          pfVar14 = pfVar14 + 1;
        } while (uVar21 != 0);
      }
    }
  }
  uVar19 = uVar9 - (uint)uVar18;
  if ((uint)uVar18 < uVar9) {
    if (7 < uVar19) {
      do {
        iVar15 = (int)uVar18;
        iVar22 = uVar9 - iVar15;
        fVar3 = *(float *)(param_5 + (ulonglong)(iVar22 - 4) * 4);
        fVar4 = *(float *)(param_5 + (ulonglong)(iVar22 - 3) * 4);
        fVar5 = *(float *)(param_5 + (ulonglong)(iVar22 - 2) * 4);
        pfVar14 = (float *)(param_2 + uVar18 * 4);
        fVar10 = pfVar14[1];
        fVar11 = pfVar14[2];
        fVar12 = pfVar14[3];
        fVar6 = *(float *)(param_5 + (ulonglong)(iVar22 - 8) * 4);
        fVar7 = *(float *)(param_5 + (ulonglong)(iVar22 - 6) * 4);
        fVar8 = *(float *)(param_5 + (ulonglong)(iVar22 - 7) * 4);
        pfVar1 = (float *)(param_2 + uVar18 * 4);
        *pfVar1 = *(float *)(param_5 + (ulonglong)(iVar22 - 1) * 4) * param_4 * *pfVar14;
        pfVar1[1] = fVar5 * param_4 * fVar10;
        pfVar1[2] = fVar4 * param_4 * fVar11;
        pfVar1[3] = fVar3 * param_4 * fVar12;
        uVar18 = (ulonglong)(iVar15 + 8U);
        pfVar14 = (float *)(param_2 + (ulonglong)(iVar15 + 4) * 4);
        fVar3 = pfVar14[1];
        fVar4 = pfVar14[2];
        fVar5 = pfVar14[3];
        pfVar1 = (float *)(param_2 + (ulonglong)(iVar15 + 4) * 4);
        *pfVar1 = *(float *)(param_5 + (ulonglong)(iVar22 - 5) * 4) * param_4 * *pfVar14;
        pfVar1[1] = fVar7 * param_4 * fVar3;
        pfVar1[2] = fVar8 * param_4 * fVar4;
        pfVar1[3] = fVar6 * param_4 * fVar5;
      } while (iVar15 + 8U < uVar9 - (uVar19 & 7));
    }
    if ((uint)uVar18 < uVar9) {
      if (3 < uVar9 - (uint)uVar18) {
        pfVar14 = (float *)(param_2 + (uVar18 + 2) * 4);
        do {
          iVar15 = uVar9 - (int)uVar18;
          uVar19 = (int)uVar18 + 4;
          uVar18 = (ulonglong)uVar19;
          pfVar14[-2] = param_4 * *(float *)(param_5 + (ulonglong)(iVar15 - 1) * 4) * pfVar14[-2];
          pfVar14[-1] = param_4 * *(float *)(param_5 + (ulonglong)(iVar15 - 2) * 4) * pfVar14[-1];
          *pfVar14 = param_4 * *(float *)(param_5 + (ulonglong)(iVar15 - 3) * 4) * *pfVar14;
          pfVar14[1] = param_4 * *(float *)(param_5 + (ulonglong)(iVar15 - 4) * 4) * pfVar14[1];
          pfVar14 = pfVar14 + 4;
        } while (uVar19 < uVar9 - 3);
      }
      if ((uint)uVar18 < uVar9) {
        pfVar14 = (float *)(param_2 + uVar18 * 4);
        do {
          iVar15 = (int)uVar18;
          uVar19 = iVar15 + 1;
          uVar18 = (ulonglong)uVar19;
          *pfVar14 = param_4 * *(float *)(param_5 + (ulonglong)((uVar9 - iVar15) - 1) * 4) *
                     *pfVar14;
          pfVar14 = pfVar14 + 1;
        } while (uVar19 < uVar9);
      }
    }
  }
  return;
}



// FUNCTION 143213e70 Apply body=43 status=ok
// SIG undefined Apply(void)

void DSP::CAkTimeWindow::Apply(void)

{
  float in_XMM3_Da;
  
  if (in_XMM3_Da == 1.0) {
    Apply();
    return;
  }
  Apply();
  return;
}



// FUNCTION 143213ea0 Init body=1017 status=ok
// SIG undefined Init(void)

undefined4
DSP::CAkTimeWindow::Init
          (undefined8 *param_1,longlong *param_2,uint param_3,int param_4,char param_5,char param_6)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(uint *)(param_1 + 1) = param_3;
  pfVar3 = (float *)(**(code **)(*param_2 + 8))(param_2,(ulonglong)(param_3 >> 1) << 2);
  *param_1 = pfVar3;
  if (pfVar3 == (float *)0x0) {
    return 0x34;
  }
  if (param_4 == 1) {
    dVar9 = 0.0;
    if (param_6 == '\0') {
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
      uVar10 = 0x54442d18;
      uVar11 = 0x400921fb;
    }
    dVar1 = (double)CONCAT44(uVar11,uVar10);
    uVar4 = *(uint *)(param_1 + 1) >> 1;
    dVar2 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) - 1.0);
    if (uVar4 != 0) {
      uVar5 = (ulonglong)uVar4;
      dVar7 = 0.0;
      if (param_5 == '\0') {
        do {
          dVar9 = ::_guard_xfg_dispatch_icall_nop(dVar1);
          dVar1 = dVar1 + dVar2;
          dVar9 = 0.54 - dVar9 * 0.46;
          *pfVar3 = (float)dVar9;
          pfVar3 = pfVar3 + 1;
          dVar9 = dVar7 + dVar9 * dVar9;
          uVar5 = uVar5 - 1;
          dVar7 = dVar9;
        } while (uVar5 != 0);
      }
      else {
        do {
          dVar7 = ::_guard_xfg_dispatch_icall_nop(dVar1);
          dVar1 = dVar1 + dVar2;
          dVar7 = 0.54 - dVar7 * 0.46;
          dVar9 = dVar9 + dVar7;
          *pfVar3 = (float)SQRT(dVar7);
          pfVar3 = pfVar3 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
LAB_143214248:
    fVar6 = (float)dVar9;
  }
  else {
    if (param_4 == 2) {
      dVar9 = 0.0;
      if (param_6 == '\0') {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        uVar10 = 0x54442d18;
        uVar11 = 0x400921fb;
      }
      dVar1 = (double)CONCAT44(uVar11,uVar10);
      uVar4 = *(uint *)(param_1 + 1) >> 1;
      dVar2 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) - 1.0);
      if (uVar4 != 0) {
        uVar5 = (ulonglong)uVar4;
        if (param_5 == '\0') {
          do {
            dVar7 = ::_guard_xfg_dispatch_icall_nop(dVar1);
            dVar1 = dVar1 + dVar2;
            dVar7 = 1.0 - dVar7;
            dVar9 = dVar9 + dVar7 * dVar7 * 0.25;
            *pfVar3 = (float)(dVar7 * 0.5);
            pfVar3 = pfVar3 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        else {
          do {
            dVar7 = ::_guard_xfg_dispatch_icall_nop(dVar1);
            dVar1 = dVar1 + dVar2;
            dVar7 = (1.0 - dVar7) * 0.5;
            dVar9 = dVar9 + dVar7;
            *pfVar3 = (float)SQRT(dVar7);
            pfVar3 = pfVar3 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      goto LAB_143214248;
    }
    if (param_4 != 3) {
      uVar4 = *(uint *)(param_1 + 1);
      uVar5 = (ulonglong)(uVar4 >> 1);
      if (uVar4 >> 1 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pfVar3 = 1.0;
          pfVar3 = pfVar3 + 1;
        }
        uVar4 = *(uint *)(param_1 + 1);
      }
      fVar6 = (float)uVar4;
      goto LAB_143214253;
    }
    dVar9 = 0.0;
    if (param_6 == '\0') {
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
      uVar10 = 0x54442d18;
      uVar11 = 0x400921fb;
    }
    dVar1 = (double)CONCAT44(uVar11,uVar10);
    uVar4 = *(uint *)(param_1 + 1) >> 1;
    dVar2 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) - 1.0);
    dVar7 = 0.0;
    if (uVar4 == 0) {
LAB_143214079:
      fVar6 = (float)dVar7;
    }
    else {
      uVar5 = (ulonglong)uVar4;
      if (param_5 == '\0') {
        do {
          dVar7 = ::_guard_xfg_dispatch_icall_nop(dVar1 + dVar1);
          dVar8 = ::_guard_xfg_dispatch_icall_nop(dVar1);
          dVar1 = dVar1 + dVar2;
          dVar7 = dVar7 * 0.08 + (0.42 - dVar8 * 0.5);
          *pfVar3 = (float)dVar7;
          pfVar3 = pfVar3 + 1;
          dVar9 = dVar9 + dVar7 * dVar7;
          uVar5 = uVar5 - 1;
          dVar7 = dVar9;
        } while (uVar5 != 0);
        goto LAB_143214079;
      }
      do {
        dVar7 = ::_guard_xfg_dispatch_icall_nop(dVar1 + dVar1);
        dVar8 = ::_guard_xfg_dispatch_icall_nop(dVar1);
        dVar1 = dVar1 + dVar2;
        dVar7 = dVar7 * 0.08 + (0.42 - dVar8 * 0.5);
        dVar9 = dVar9 + dVar7;
        *pfVar3 = (float)SQRT(dVar7);
        pfVar3 = pfVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      fVar6 = (float)dVar9;
    }
  }
  fVar6 = fVar6 + fVar6;
LAB_143214253:
  *(float *)((longlong)param_1 + 0xc) = fVar6;
  return 1;
}



// FUNCTION 1432142a0 Term body=42 status=ok
// SIG undefined Term(void)

void DSP::CAkTimeWindow::Term(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432142d0 Alloc body=63 status=ok
// SIG undefined Alloc(void)

undefined8
DSP::AkFFTAllButterflies::CAkFreqWindow::Alloc(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)((param_3 >> 1) + 1) << 3);
  *param_1 = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 143214310 CartToPol body=867 status=ok
// SIG undefined CartToPol(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::CartToPol(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar8;
  
  fVar13 = -1.5707964;
  uVar7 = *(uint *)(param_1 + 8) >> 1;
  uVar8 = (ulonglong)uVar7;
  fVar1 = param_2[1];
  fVar2 = param_2[uVar8 * 2];
  fVar3 = param_2[uVar8 * 2 + 1];
  fVar4 = *param_2;
  if (1 < uVar7) {
    uVar10 = (ulonglong)(uVar7 - 1);
    pfVar6 = param_2;
    do {
      pfVar9 = pfVar6 + 2;
      fVar12 = *pfVar9;
      fVar5 = pfVar6[3];
      *pfVar9 = SQRT(fVar5 * fVar5 + fVar12 * fVar12);
      if (fVar12 == 0.0) {
        if (fVar5 <= 0.0) {
          if (fVar5 == 0.0) {
            fVar11 = -0.0;
          }
          else {
            fVar11 = 1.5707964;
          }
        }
        else {
          fVar11 = -1.5707964;
        }
      }
      else {
        fVar11 = fVar5 / fVar12;
        if (1.0 <= ABS(fVar11)) {
          fVar12 = fVar11 / (fVar11 * fVar11 + 0.28);
          fVar11 = fVar12 - 1.5707964;
          if (fVar5 < 0.0) {
            fVar11 = 3.1415927 - (1.5707964 - fVar12);
          }
        }
        else if (0.0 <= fVar12) {
          fVar11 = fVar11 / (-1.0 - fVar11 * 0.28 * fVar11);
        }
        else if (0.0 <= fVar5) {
          fVar11 = -3.1415927 - fVar11 / (fVar11 * 0.28 * fVar11 + 1.0);
        }
        else {
          fVar11 = 3.1415927 - fVar11 / (fVar11 * 0.28 * fVar11 + 1.0);
        }
      }
      pfVar6[3] = fVar11;
      uVar10 = uVar10 - 1;
      pfVar6 = pfVar9;
    } while (uVar10 != 0);
  }
  *param_2 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  if (fVar4 == 0.0) {
    if (fVar1 <= 0.0) {
      if (fVar1 == 0.0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = -1.5707964;
      }
    }
    else {
      fVar12 = 1.5707964;
    }
  }
  else {
    fVar12 = fVar1 / fVar4;
    if (1.0 <= ABS(fVar12)) {
      fVar12 = 1.5707964 - fVar12 / (fVar12 * fVar12 + 0.28);
      if (fVar1 < 0.0) {
        fVar12 = fVar12 - 3.1415927;
      }
    }
    else {
      fVar12 = fVar12 / (fVar12 * 0.28 * fVar12 + 1.0);
      if (fVar4 < 0.0) {
        if (0.0 <= fVar1) {
          fVar12 = fVar12 + 3.1415927;
        }
        else {
          fVar12 = fVar12 - 3.1415927;
        }
      }
    }
  }
  param_2[1] = fVar12;
  param_2[uVar8 * 2] = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar2 == 0.0) {
    if (fVar3 <= 0.0) {
      if (fVar3 == 0.0) {
        fVar13 = 0.0;
      }
    }
    else {
      fVar13 = 1.5707964;
    }
    goto LAB_143214639;
  }
  fVar13 = fVar3 / fVar2;
  if (1.0 <= ABS(fVar13)) {
    fVar13 = 1.5707964 - fVar13 / (fVar13 * fVar13 + 0.28);
    if (0.0 <= fVar3) goto LAB_143214639;
  }
  else {
    fVar13 = fVar13 / (fVar13 * 0.28 * fVar13 + 1.0);
    if (0.0 <= fVar2) goto LAB_143214639;
    if (0.0 <= fVar3) {
      fVar13 = fVar13 + 3.1415927;
      goto LAB_143214639;
    }
  }
  fVar13 = fVar13 - 3.1415927;
LAB_143214639:
  param_2[uVar8 * 2 + 1] = fVar13;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}



// FUNCTION 143214680 CartToPol body=8 status=ok
// SIG undefined CartToPol(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::CartToPol(undefined8 *param_1)

{
  CartToPol(param_1,*param_1);
  return;
}



// FUNCTION 143214690 Compute body=32 status=ok
// SIG undefined Compute(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::Compute
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ak_fftr(param_4,param_2,*param_1);
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  return;
}



// FUNCTION 1432146b0 ComputeVocoderSpectrum body=1631 status=ok
// SIG undefined ComputeVocoderSpectrum(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::ComputeVocoderSpectrum
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5,float param_6,char param_7,longlong param_8)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar20 = 0;
  uVar23 = *(uint *)(param_1 + 8) >> 1;
  uVar26 = 2;
  uVar8 = 0;
  uVar24 = uVar23 + 1;
  if (uVar24 != 0) {
    uVar22 = uVar20;
    if (7 < uVar24) {
      uVar25 = uVar26;
      do {
        uVar18 = (ulonglong)(uVar25 + 1);
        fVar28 = *(float *)(param_3 + uVar18 * 8);
        uVar10 = (ulonglong)(uVar25 - 1);
        uVar21 = (ulonglong)(uVar25 + 5);
        fVar27 = *(float *)(param_3 + uVar10 * 8);
        uVar9 = (ulonglong)(uVar25 + 2);
        fVar29 = *(float *)(param_2 + uVar18 * 8);
        uVar15 = (ulonglong)uVar25;
        fVar30 = *(float *)(param_3 + uVar15 * 8);
        fVar31 = *(float *)(param_2 + uVar15 * 8);
        fVar2 = *(float *)(param_2 + uVar10 * 8);
        *(float *)(param_8 + uVar22 * 8) =
             *(float *)(param_3 + uVar22 * 8) * param_6 +
             *(float *)(param_2 + uVar22 * 8) * (1.0 - param_6);
        uVar17 = (int)uVar22 + 8;
        uVar22 = (ulonglong)uVar17;
        *(float *)(param_8 + uVar10 * 8) = fVar27 * param_6 + fVar2 * (1.0 - param_6);
        *(float *)(param_8 + uVar15 * 8) = fVar30 * param_6 + fVar31 * (1.0 - param_6);
        uVar10 = (ulonglong)(uVar25 + 3);
        *(float *)(param_8 + uVar18 * 8) = fVar28 * param_6 + fVar29 * (1.0 - param_6);
        uVar15 = (ulonglong)(uVar25 + 4);
        fVar28 = *(float *)(param_3 + uVar15 * 8);
        uVar25 = uVar25 + 8;
        fVar27 = *(float *)(param_3 + uVar21 * 8);
        fVar29 = *(float *)(param_3 + uVar10 * 8);
        fVar30 = *(float *)(param_2 + uVar15 * 8);
        fVar31 = *(float *)(param_2 + uVar21 * 8);
        fVar2 = *(float *)(param_2 + uVar10 * 8);
        *(float *)(param_8 + uVar9 * 8) =
             *(float *)(param_3 + uVar9 * 8) * param_6 +
             *(float *)(param_2 + uVar9 * 8) * (1.0 - param_6);
        *(float *)(param_8 + uVar10 * 8) = fVar29 * param_6 + fVar2 * (1.0 - param_6);
        *(float *)(param_8 + uVar15 * 8) = fVar28 * param_6 + fVar30 * (1.0 - param_6);
        *(float *)(param_8 + uVar21 * 8) = fVar27 * param_6 + fVar31 * (1.0 - param_6);
      } while (uVar17 < (uVar24 & 0xfffffff8));
    }
    uVar25 = (uint)uVar22;
    if (uVar25 < uVar24) {
      if (3 < uVar24 - uVar25) {
        lVar16 = param_2 - param_3;
        lVar19 = param_8 - param_3;
        uVar17 = ((uVar24 - uVar25) - 4 >> 2) + 1;
        pfVar13 = (float *)(param_3 + (uVar22 + 1) * 8);
        uVar22 = (ulonglong)uVar17;
        fVar28 = 1.0 - param_6;
        uVar25 = uVar25 + uVar17 * 4;
        do {
          *(float *)(lVar19 + -8 + (longlong)pfVar13) =
               fVar28 * *(float *)(lVar16 + -8 + (longlong)pfVar13) + param_6 * pfVar13[-2];
          *(float *)(lVar19 + (longlong)pfVar13) =
               fVar28 * *(float *)(lVar16 + (longlong)pfVar13) + param_6 * *pfVar13;
          *(float *)(lVar19 + 8 + (longlong)pfVar13) =
               fVar28 * *(float *)(lVar16 + 8 + (longlong)pfVar13) + param_6 * pfVar13[2];
          *(float *)(lVar19 + 0x10 + (longlong)pfVar13) =
               fVar28 * *(float *)(lVar16 + 0x10 + (longlong)pfVar13) + param_6 * pfVar13[4];
          pfVar13 = pfVar13 + 8;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if (uVar25 < uVar24) {
        pfVar13 = (float *)(param_3 + (ulonglong)uVar25 * 8);
        uVar22 = (ulonglong)(uVar24 - uVar25);
        do {
          *(float *)((longlong)pfVar13 + (param_8 - param_3)) =
               (1.0 - param_6) * *(float *)((longlong)pfVar13 + (param_2 - param_3)) +
               param_6 * *pfVar13;
          pfVar13 = pfVar13 + 2;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
    }
  }
  if (param_7 != '\0') {
    if (3 < uVar24) {
      uVar8 = (uVar23 - 3 >> 2) + 1;
      uVar22 = (ulonglong)uVar8;
      uVar8 = uVar8 * 4;
      puVar11 = (undefined4 *)(param_4 + 8);
      puVar12 = (undefined4 *)(param_2 + 0xc);
      do {
        puVar11[-2] = puVar12[-2];
        puVar11[-1] = *puVar12;
        *puVar11 = puVar12[2];
        puVar11[1] = puVar12[4];
        uVar22 = uVar22 - 1;
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 8;
      } while (uVar22 != 0);
    }
    if (uVar8 < uVar24) {
      puVar12 = (undefined4 *)((ulonglong)uVar8 * 4 + param_4);
      puVar11 = (undefined4 *)(param_2 + 4 + (ulonglong)uVar8 * 8);
      uVar22 = (ulonglong)(uVar24 - uVar8);
      do {
        uVar5 = *puVar11;
        puVar11 = puVar11 + 2;
        *puVar12 = uVar5;
        puVar12 = puVar12 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (uVar24 != 0) {
    if (3 < uVar24) {
      do {
        fVar28 = *(float *)(param_3 + 4 + uVar20 * 8);
        uVar8 = uVar26 + 1;
        fVar27 = *(float *)(param_3 + 4 + (ulonglong)uVar8 * 8);
        puVar11 = (undefined4 *)(param_4 + uVar20 * 4);
        uVar5 = puVar11[1];
        uVar6 = puVar11[2];
        uVar7 = puVar11[3];
        uVar9 = (ulonglong)uVar26;
        fVar29 = *(float *)(param_2 + 4 + uVar20 * 8);
        uVar22 = (ulonglong)(uVar26 - 1);
        fVar30 = *(float *)(param_3 + 4 + uVar22 * 8);
        uVar26 = uVar26 + 4;
        fVar31 = *(float *)(param_3 + 4 + uVar9 * 8);
        fVar2 = *(float *)(param_2 + 4 + uVar9 * 8);
        fVar3 = *(float *)(param_2 + 4 + (ulonglong)uVar8 * 8);
        fVar4 = *(float *)(param_2 + 4 + uVar22 * 8);
        *(undefined4 *)(param_8 + 4 + uVar20 * 8) = *puVar11;
        *(undefined4 *)(param_8 + 4 + uVar22 * 8) = uVar5;
        *(undefined4 *)(param_8 + 4 + uVar9 * 8) = uVar6;
        *(undefined4 *)(param_8 + 4 + (ulonglong)uVar8 * 8) = uVar7;
        pfVar13 = (float *)(param_4 + uVar20 * 4);
        fVar28 = (fVar28 - fVar29) + *pfVar13;
        fVar29 = (fVar30 - fVar4) + pfVar13[1];
        fVar30 = (fVar31 - fVar2) + pfVar13[2];
        fVar31 = (fVar27 - fVar3) + pfVar13[3];
        fVar28 = (float)((uint)(fVar28 - 6.2831855) & -(uint)(3.1415927 <= fVar28) |
                        ~-(uint)(3.1415927 <= fVar28) & (uint)fVar28);
        fVar27 = (float)((uint)(fVar29 - 6.2831855) & -(uint)(3.1415927 <= fVar29) |
                        ~-(uint)(3.1415927 <= fVar29) & (uint)fVar29);
        fVar29 = (float)((uint)(fVar30 - 6.2831855) & -(uint)(3.1415927 <= fVar30) |
                        ~-(uint)(3.1415927 <= fVar30) & (uint)fVar30);
        fVar30 = (float)((uint)(fVar31 - 6.2831855) & -(uint)(3.1415927 <= fVar31) |
                        ~-(uint)(3.1415927 <= fVar31) & (uint)fVar31);
        puVar1 = (uint *)(param_4 + uVar20 * 4);
        *puVar1 = (uint)(fVar28 + 6.2831855) & -(uint)(fVar28 < -3.1415927) |
                  ~-(uint)(fVar28 < -3.1415927) & (uint)fVar28;
        puVar1[1] = (uint)(fVar27 + 6.2831855) & -(uint)(fVar27 < -3.1415927) |
                    ~-(uint)(fVar27 < -3.1415927) & (uint)fVar27;
        puVar1[2] = (uint)(fVar29 + 6.2831855) & -(uint)(fVar29 < -3.1415927) |
                    ~-(uint)(fVar29 < -3.1415927) & (uint)fVar29;
        puVar1[3] = (uint)(fVar30 + 6.2831855) & -(uint)(fVar30 < -3.1415927) |
                    ~-(uint)(fVar30 < -3.1415927) & (uint)fVar30;
        uVar8 = (int)uVar20 + 4;
        uVar20 = (ulonglong)uVar8;
      } while (uVar8 < (uVar24 & 0xfffffffc));
    }
    uVar8 = (uint)uVar20;
    if (uVar8 < uVar24) {
      if (3 < uVar24 - uVar8) {
        pfVar13 = (float *)(param_4 + 8 + uVar20 * 4);
        pfVar14 = (float *)(param_2 + 4 + uVar20 * 8);
        lVar16 = param_3 - param_2;
        lVar19 = param_8 - param_2;
        uVar23 = ((uVar24 - uVar8) - 4 >> 2) + 1;
        uVar22 = (ulonglong)uVar23;
        uVar20 = (ulonglong)(uVar8 + uVar23 * 4);
        do {
          fVar28 = *(float *)(lVar16 + (longlong)pfVar14);
          fVar27 = *pfVar14;
          *(float *)(lVar19 + (longlong)pfVar14) = pfVar13[-2];
          fVar28 = (fVar28 - fVar27) + pfVar13[-2];
          pfVar13[-2] = fVar28;
          if (3.1415927 <= fVar28) {
            fVar28 = fVar28 + -6.2831855;
            pfVar13[-2] = fVar28;
          }
          if (fVar28 < -3.1415927) {
            pfVar13[-2] = fVar28 + 6.2831855;
          }
          fVar28 = *(float *)(lVar16 + 8 + (longlong)pfVar14);
          fVar27 = pfVar14[2];
          *(float *)(lVar19 + 8 + (longlong)pfVar14) = pfVar13[-1];
          fVar28 = (fVar28 - fVar27) + pfVar13[-1];
          pfVar13[-1] = fVar28;
          if (3.1415927 <= fVar28) {
            fVar28 = fVar28 + -6.2831855;
            pfVar13[-1] = fVar28;
          }
          if (fVar28 < -3.1415927) {
            pfVar13[-1] = fVar28 + 6.2831855;
          }
          fVar28 = *(float *)(lVar16 + 0x10 + (longlong)pfVar14);
          fVar27 = pfVar14[4];
          *(float *)(lVar19 + 0x10 + (longlong)pfVar14) = *pfVar13;
          fVar28 = (fVar28 - fVar27) + *pfVar13;
          *pfVar13 = fVar28;
          if (3.1415927 <= fVar28) {
            fVar28 = fVar28 + -6.2831855;
            *pfVar13 = fVar28;
          }
          if (fVar28 < -3.1415927) {
            *pfVar13 = fVar28 + 6.2831855;
          }
          fVar28 = *(float *)(lVar16 + 0x18 + (longlong)pfVar14);
          fVar27 = pfVar14[6];
          *(float *)(lVar19 + 0x18 + (longlong)pfVar14) = pfVar13[1];
          fVar28 = (fVar28 - fVar27) + pfVar13[1];
          pfVar13[1] = fVar28;
          if (3.1415927 <= fVar28) {
            fVar28 = fVar28 + -6.2831855;
            pfVar13[1] = fVar28;
          }
          if (fVar28 < -3.1415927) {
            pfVar13[1] = fVar28 + 6.2831855;
          }
          pfVar13 = pfVar13 + 4;
          pfVar14 = pfVar14 + 8;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if ((uint)uVar20 < uVar24) {
        pfVar14 = (float *)(uVar20 * 4 + param_4);
        pfVar13 = (float *)(param_2 + 4 + uVar20 * 8);
        uVar20 = (ulonglong)(uVar24 - (uint)uVar20);
        do {
          fVar28 = *(float *)((longlong)pfVar13 + (param_3 - param_2));
          fVar27 = *pfVar13;
          *(float *)((longlong)pfVar13 + (param_8 - param_2)) = *pfVar14;
          fVar28 = (fVar28 - fVar27) + *pfVar14;
          *pfVar14 = fVar28;
          if (3.1415927 <= fVar28) {
            fVar28 = fVar28 + -6.2831855;
            *pfVar14 = fVar28;
          }
          if (fVar28 < -3.1415927) {
            *pfVar14 = fVar28 + 6.2831855;
          }
          pfVar13 = pfVar13 + 2;
          pfVar14 = pfVar14 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  return;
}



// FUNCTION 143214d10 ComputeVocoderSpectrum body=54 status=ok
// SIG undefined ComputeVocoderSpectrum(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::ComputeVocoderSpectrum(void)

{
  ComputeVocoderSpectrum();
  return;
}



// FUNCTION 143214d50 ConvertToTimeDomain body=114 status=ok
// SIG undefined ConvertToTimeDomain(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::ConvertToTimeDomain
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)((longlong)param_1 + 0xd) != '\0') {
    PolToCart(param_1,uVar1);
  }
  ak_fftri(param_4,uVar1,param_2);
  AK::DSP::ApplyGain(param_2,1.0 / (float)*(uint *)(param_1 + 1),*(uint *)(param_1 + 1));
  return;
}



// FUNCTION 143214dd0 Free body=56 status=ok
// SIG undefined Free(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::Free(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 143214e10 PolToCart body=504 status=ok
// SIG undefined PolToCart(void)

void DSP::AkFFTAllButterflies::CAkFreqWindow::PolToCart(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = param_2[1];
  uVar3 = *(uint *)(param_1 + 8) >> 1;
  fVar1 = param_2[(ulonglong)uVar3 * 2];
  fVar6 = param_2[(ulonglong)uVar3 * 2 + 1];
  fVar2 = *param_2;
  PolarToCart(param_2);
  fVar4 = fVar5 + 1.5707964;
  if (1.5707964 < fVar5) {
    fVar4 = fVar5 - 4.712389;
  }
  fVar7 = fVar6 + 1.5707964;
  fVar4 = fVar4 * 1.2732395 - ABS(fVar4) * fVar4 * 0.4052847;
  fVar5 = fVar5 * 1.2732395 - ABS(fVar5) * fVar5 * 0.4052847;
  *param_2 = ((ABS(fVar4) * fVar4 - fVar4) * 0.225 + fVar4) * fVar2;
  param_2[1] = ((ABS(fVar5) * fVar5 - fVar5) * 0.225 + fVar5) * fVar2;
  if (1.5707964 < fVar6) {
    fVar7 = fVar6 - 4.712389;
  }
  fVar5 = fVar7 * 1.2732395 - ABS(fVar7) * fVar7 * 0.4052847;
  fVar6 = fVar6 * 1.2732395 - ABS(fVar6) * fVar6 * 0.4052847;
  param_2[(ulonglong)uVar3 * 2] = ((ABS(fVar5) * fVar5 - fVar5) * 0.225 + fVar5) * fVar1;
  param_2[(ulonglong)uVar3 * 2 + 1] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



// FUNCTION 143215010 PolarToCart body=249 status=ok
// SIG undefined PolarToCart(void)

void DSP::AkFFTAllButterflies::PolarToCart(float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = param_1 + (uint)(param_2 * 2);
  for (; param_1 < pfVar1; param_1 = param_1 + 4) {
    fVar2 = *param_1;
    fVar3 = param_1[2];
    fVar6 = -param_1[1];
    fVar8 = -param_1[3];
    uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
    uVar5 = -(uint)(0.0 <= fVar8 - 1.5707964);
    fVar6 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
    fVar7 = -param_1[1] + 0.0;
    fVar8 = fVar8 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
    fVar9 = -param_1[3] + 0.0;
    fVar6 = (ABS(fVar6) * -0.4052847 + 1.2732395) * fVar6;
    fVar7 = (ABS(fVar7) * -0.4052847 + 1.2732395) * fVar7;
    fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
    fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
    *param_1 = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
    param_1[1] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar2;
    param_1[2] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar3;
    param_1[3] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
  }
  return;
}



// FUNCTION 143215110 PushFrames body=342 status=ok
// SIG undefined PushFrames(void)

uint DSP::CAkResamplingCircularBuffer::PushFrames
               (uint *param_1,float *param_2,uint param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    uVar5 = 0;
  }
  else {
    fVar10 = (float)param_1[7];
    uVar5 = 0;
    uVar8 = 0;
    lVar3 = *(longlong *)(param_1 + 4);
    uVar9 = param_1[1];
    while( true ) {
      uVar6 = (uint)fVar10;
      if (0.0 <= fVar10) {
        uVar4 = param_3 & 0xffff;
        uVar7 = uVar6 & 0xffff;
        if ((int)(uVar4 - 1) <= (int)uVar7) {
          if ((int)uVar7 <= (int)(uVar4 - 1)) {
            uVar4 = uVar7 + 1;
            param_1[6] = (uint)param_2[uVar6 & 0xffff];
          }
          uVar5 = param_3 & 0xffff;
          goto LAB_143215226;
        }
        fVar12 = param_2[(ulonglong)uVar7 + 1];
        fVar13 = param_2[uVar6 & 0xffff];
      }
      else {
        fVar13 = (float)param_1[6];
        fVar12 = *param_2;
      }
      if ((uint)uVar8 == uVar1 - uVar2) break;
      if (fVar10 < 0.0) {
        fVar11 = fVar10 + 1.0;
      }
      else {
        fVar11 = fVar10 - (float)((longlong)fVar10 & 0xffffffff);
      }
      fVar10 = fVar10 + param_4;
      uVar8 = uVar8 + 1;
      *(float *)(lVar3 + (ulonglong)uVar9 * 4) = fVar11 * (fVar12 - fVar13) + fVar13;
      uVar6 = uVar9 + 1;
      uVar9 = 0;
      if (uVar6 != *param_1) {
        uVar9 = uVar6;
      }
    }
    param_1[6] = (uint)fVar13;
    if (0.0 < fVar10) {
      uVar5 = uVar6 + 1;
      uVar4 = (uVar6 & 0xffff) + 1;
LAB_143215226:
      fVar10 = fVar10 - (float)uVar4;
    }
    param_1[3] = param_1[3] + (uint)uVar8;
    param_1[7] = (uint)fVar10;
    param_1[1] = uVar9;
    uVar5 = uVar5 & 0xffff;
  }
  return uVar5;
}



// FUNCTION 143215270 Reset body=26 status=ok
// SIG undefined Reset(void)

void DSP::CAkResamplingCircularBuffer::Reset(longlong param_1)

{
  CAkCircularBuffer::Reset();
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143215290 ak_fft body=233 status=ok
// SIG undefined ak_fft(void)

void DSP::AkFFTAllButterflies::ak_fft(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*param_1 == 0x400) {
    puVar1 = *(undefined8 **)(param_1 + 0x12);
    *(undefined8 **)(param_1 + 0x14) = &local_78;
    local_78 = *puVar1;
    local_70 = puVar1[0x40];
    local_68 = *puVar1;
    local_60 = puVar1[0x80];
    local_58 = *puVar1;
    local_50 = puVar1[0xc0];
    local_48 = puVar1[0x80];
    local_40 = puVar1[0xc0];
    local_38 = puVar1[0x100];
    param_2 = puVar1[0x180];
    local_28 = puVar1[0x180];
    local_20 = puVar1[0x240];
    local_30 = param_2;
  }
  kf_work(param_3,param_2,1,1,param_1 + 2,param_1);
  return;
}



// FUNCTION 143215380 ak_fft_alloc body=525 status=ok
// SIG undefined ak_fft_alloc(void)

uint * DSP::AkFFTAllButterflies::ak_fft_alloc
                 (uint param_1,uint param_2,uint *param_3,ulonglong *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  double dVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar5 = (ulonglong)param_1;
  puVar6 = (uint *)0x0;
  uVar3 = (longlong)(int)(param_1 - 1) * 8 + 0x6fU & 0xfffffffffffffff0;
  puVar7 = puVar6;
  if ((param_3 != (uint *)0x0) && (puVar7 = (uint *)0x0, uVar3 <= *param_4)) {
    puVar7 = param_3;
  }
  *param_4 = uVar3;
  if (puVar7 != (uint *)0x0) {
    *(uint **)(puVar7 + 0x12) = param_3 + 0x18;
    *puVar7 = param_1;
    puVar7[1] = param_2;
    if (param_2 == 0) {
      puVar9 = puVar6;
      if (0 < (int)param_1) {
        do {
          dVar10 = (double)__libm_sse2_sincos_();
          puVar6 = puVar6 + 2;
          auVar14._8_4_ = (int)extraout_XMM0_Qb_00;
          auVar14._0_8_ = dVar10;
          auVar14._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          uVar8 = (int)puVar9 + 1;
          auVar15._8_8_ = dVar10;
          auVar15._0_8_ = auVar14._8_8_;
          in_XMM1._4_12_ = auVar15._4_12_;
          in_XMM1._0_4_ = (float)auVar14._8_8_;
          *(float *)(*(longlong *)(puVar7 + 0x12) + -8 + (longlong)puVar6) = in_XMM1._0_4_;
          *(float *)(*(longlong *)(puVar7 + 0x12) + -4 + (longlong)puVar6) = (float)dVar10;
          puVar9 = (uint *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_1);
      }
    }
    else {
      puVar9 = puVar6;
      if (0 < (int)param_1) {
        do {
          dVar10 = (double)__libm_sse2_sincos_();
          puVar6 = puVar6 + 2;
          auVar12._8_4_ = (int)extraout_XMM0_Qb;
          auVar12._0_8_ = dVar10;
          auVar12._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
          uVar8 = (int)puVar9 + 1;
          auVar13._8_8_ = dVar10;
          auVar13._0_8_ = auVar12._8_8_;
          in_XMM1._4_12_ = auVar13._4_12_;
          in_XMM1._0_4_ = (float)auVar12._8_8_;
          *(float *)(*(longlong *)(puVar7 + 0x12) + -8 + (longlong)puVar6) = in_XMM1._0_4_;
          *(float *)(*(longlong *)(puVar7 + 0x12) + -4 + (longlong)puVar6) = (float)dVar10;
          puVar9 = (uint *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_1);
      }
    }
    puVar6 = puVar7 + 2;
    uVar8 = 4;
    auVar11._0_8_ = (double)(int)param_1;
    auVar11._8_8_ = 0;
    auVar16 = sqrtpd(in_XMM1,auVar11);
    auVar17._0_8_ = auVar16._0_8_;
    lVar4 = (longlong)auVar17._0_8_;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != auVar17._0_8_)) {
      auVar17._8_8_ = auVar17._0_8_;
      uVar1 = movmskpd(0,auVar17);
      auVar16._0_8_ = (double)(longlong)(lVar4 - (ulonglong)(uVar1 & 1));
      auVar16._8_8_ = 0;
    }
    do {
      uVar1 = (uint)uVar5;
      while ((int)uVar1 % (int)uVar8 != 0) {
        if (uVar8 == 2) {
          uVar8 = 3;
        }
        else if (uVar8 == 4) {
          uVar8 = 2;
        }
        else {
          uVar8 = uVar8 + 2;
        }
        if (auVar16._0_8_ < (double)(int)uVar8) {
          uVar8 = uVar1;
        }
      }
      *puVar6 = uVar8;
      uVar2 = (uint)((longlong)(int)uVar1 / (longlong)(int)uVar8);
      puVar6[1] = uVar2;
      uVar5 = (longlong)(int)uVar1 / (longlong)(int)uVar8 & 0xffffffff;
      puVar6 = puVar6 + 2;
    } while (1 < (int)uVar2);
  }
  return puVar7;
}



// FUNCTION 143215590 kf_bfly4 body=864 status=ok
// SIG undefined kf_bfly4(void)

void DSP::AkFFTAllButterflies::kf_bfly4
               (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
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
  float fVar33;
  
  pfVar6 = *(float **)(param_3 + 0x48);
  iVar2 = *(int *)(param_3 + 4);
  if (param_4 < 2) {
    pfVar5 = (float *)(param_1 + 4);
    uVar7 = param_4;
    pfVar8 = pfVar6;
    pfVar9 = pfVar6;
    do {
      fVar33 = *pfVar8 * pfVar5[param_4 * 2 + -1] - pfVar8[1] * pfVar5[param_4 * 2];
      fVar32 = *pfVar8 * pfVar5[param_4 * 2] + pfVar8[1] * pfVar5[param_4 * 2 + -1];
      fVar21 = *pfVar6 * pfVar5[param_4 * 6 + -1] - pfVar5[param_4 * 6] * pfVar6[1];
      fVar26 = pfVar5[param_4 * 6] * *pfVar6 + pfVar6[1] * pfVar5[param_4 * 6 + -1];
      fVar11 = fVar33 - fVar21;
      fVar33 = fVar33 + fVar21;
      fVar31 = fVar32 + fVar26;
      fVar32 = fVar32 - fVar26;
      fVar26 = pfVar5[param_4 * 4 + -1] * *pfVar9 - pfVar9[1] * pfVar5[param_4 * 4];
      fVar27 = pfVar5[param_4 * 4 + -1] * pfVar9[1] + *pfVar9 * pfVar5[param_4 * 4];
      fVar15 = pfVar5[-1] - fVar26;
      fVar26 = fVar26 + pfVar5[-1];
      fVar21 = *pfVar5 - fVar27;
      pfVar5[-1] = fVar26;
      *pfVar5 = fVar27 + *pfVar5;
      fVar27 = fVar21 - fVar11;
      fVar11 = fVar11 + fVar21;
      pfVar5[param_4 * 4 + -1] = fVar26 - fVar33;
      pfVar5[param_4 * 4] = *pfVar5 - fVar31;
      fVar10 = fVar15 + fVar32;
      fVar15 = fVar15 - fVar32;
      pfVar5[-1] = fVar33 + pfVar5[-1];
      *pfVar5 = fVar31 + *pfVar5;
      fVar21 = fVar11;
      fVar26 = fVar10;
      if (iVar2 != 0) {
        fVar21 = fVar27;
        fVar26 = fVar15;
        fVar15 = fVar10;
        fVar27 = fVar11;
      }
      pfVar5[param_4 * 2 + -1] = fVar26;
      pfVar8 = pfVar8 + param_2 * 2;
      pfVar5[param_4 * 2] = fVar27;
      pfVar9 = pfVar9 + param_2 * 4;
      pfVar5[param_4 * 6 + -1] = fVar15;
      pfVar6 = pfVar6 + param_2 * 6;
      pfVar5[param_4 * 6] = fVar21;
      pfVar5 = pfVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  else {
    uVar7 = param_4 >> 1;
    fVar10 = 1.0;
    fVar33 = -1.0;
    fVar31 = 1.0;
    fVar32 = -1.0;
    fVar21 = -1.0;
    fVar26 = 1.0;
    fVar15 = -1.0;
    fVar27 = 1.0;
    if (iVar2 != 0) {
      fVar21 = 1.0;
      fVar26 = -1.0;
      fVar15 = 1.0;
      fVar27 = -1.0;
      fVar10 = -1.0;
      fVar33 = 1.0;
      fVar31 = -1.0;
      fVar32 = 1.0;
    }
    pfVar5 = (float *)(param_1 + param_4 * 0x18);
    pfVar8 = pfVar6;
    pfVar9 = pfVar6;
    do {
      pfVar1 = pfVar5 + param_4 * -4;
      fVar11 = *pfVar8;
      pfVar3 = pfVar8 + 1;
      fVar12 = pfVar8[param_2 * 2];
      fVar13 = (pfVar8 + param_2 * 2)[1];
      pfVar8 = pfVar8 + param_2 * 4;
      fVar16 = *pfVar6;
      pfVar4 = pfVar6 + 1;
      fVar19 = pfVar6[param_2 * 6];
      fVar17 = (pfVar6 + param_2 * 6)[1];
      pfVar6 = pfVar6 + param_2 * 0xc;
      fVar25 = pfVar1[1] * -1.0 * *pfVar3 + *pfVar1 * fVar11;
      fVar28 = pfVar1[1] * 1.0 * fVar11 + *pfVar1 * *pfVar3;
      fVar29 = pfVar1[3] * -1.0 * fVar13 + pfVar1[2] * fVar12;
      fVar30 = pfVar1[3] * 1.0 * fVar12 + pfVar1[2] * fVar13;
      fVar11 = *pfVar9;
      pfVar3 = pfVar9 + 1;
      fVar12 = pfVar9[param_2 * 4];
      fVar13 = (pfVar9 + param_2 * 4)[1];
      pfVar9 = pfVar9 + param_2 * 8;
      fVar14 = pfVar5[1] * -1.0 * *pfVar4 + *pfVar5 * fVar16;
      fVar16 = pfVar5[1] * 1.0 * fVar16 + *pfVar5 * *pfVar4;
      fVar18 = pfVar5[3] * -1.0 * fVar17 + pfVar5[2] * fVar19;
      fVar19 = pfVar5[3] * 1.0 * fVar19 + pfVar5[2] * fVar17;
      pfVar1 = pfVar5 + param_4 * -2;
      fVar20 = fVar14 + fVar25;
      fVar22 = fVar16 + fVar28;
      fVar23 = fVar18 + fVar29;
      fVar24 = fVar19 + fVar30;
      fVar25 = fVar25 - fVar14;
      fVar28 = fVar28 - fVar16;
      fVar29 = fVar29 - fVar18;
      fVar30 = fVar30 - fVar19;
      fVar19 = pfVar1[1] * -1.0 * *pfVar3 + *pfVar1 * fVar11;
      fVar17 = pfVar1[1] * 1.0 * fVar11 + *pfVar1 * *pfVar3;
      fVar14 = pfVar1[3] * -1.0 * fVar13 + pfVar1[2] * fVar12;
      fVar18 = pfVar1[3] * 1.0 * fVar12 + pfVar1[2] * fVar13;
      pfVar1 = pfVar5 + param_4 * -6;
      fVar11 = *pfVar1 + fVar19;
      fVar12 = pfVar1[1] + fVar17;
      fVar13 = pfVar1[2] + fVar14;
      fVar16 = pfVar1[3] + fVar18;
      fVar19 = *pfVar1 - fVar19;
      fVar17 = pfVar1[1] - fVar17;
      fVar14 = pfVar1[2] - fVar14;
      fVar18 = pfVar1[3] - fVar18;
      pfVar1 = pfVar5 + param_4 * -2;
      *pfVar1 = fVar11 - fVar20;
      pfVar1[1] = fVar12 - fVar22;
      pfVar1[2] = fVar13 - fVar23;
      pfVar1[3] = fVar16 - fVar24;
      pfVar1 = pfVar5 + param_4 * -6;
      *pfVar1 = fVar11 + fVar20;
      pfVar1[1] = fVar12 + fVar22;
      pfVar1[2] = fVar13 + fVar23;
      pfVar1[3] = fVar16 + fVar24;
      pfVar1 = pfVar5 + param_4 * -4;
      *pfVar1 = fVar28 * fVar10 + fVar19;
      pfVar1[1] = fVar25 * fVar33 + fVar17;
      pfVar1[2] = fVar30 * fVar31 + fVar14;
      pfVar1[3] = fVar29 * fVar32 + fVar18;
      *pfVar5 = fVar28 * fVar21 + fVar19;
      pfVar5[1] = fVar25 * fVar26 + fVar17;
      pfVar5[2] = fVar30 * fVar15 + fVar14;
      pfVar5[3] = fVar29 * fVar27 + fVar18;
      pfVar5 = pfVar5 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1432158f0 kf_bfly4_m1_s256_n1024_SIMD body=963 status=ok
// SIG undefined kf_bfly4_m1_s256_n1024_SIMD(void)

void DSP::AkFFTAllButterflies::kf_bfly4_m1_s256_n1024_SIMD
               (float *param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
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
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  
  fVar29 = -1.0;
  fVar31 = 1.0;
  fVar33 = -1.0;
  fVar34 = 1.0;
  if (*(int *)(param_3 + 4) != 0) {
    fVar29 = 1.0;
    fVar31 = -1.0;
    fVar33 = 1.0;
    fVar34 = -1.0;
  }
  fVar63 = -fVar29;
  fVar64 = -fVar31;
  fVar65 = -fVar33;
  fVar66 = -fVar34;
  bVar18 = ((ulonglong)param_2 & 0xf) == 0;
  pfVar17 = param_2 + -2;
  if (bVar18) {
    pfVar17 = param_2;
  }
  pfVar14 = pfVar17 + 1;
  pfVar7 = pfVar17 + 0x200;
  pfVar8 = pfVar17 + 0x201;
  pfVar9 = pfVar17 + 0x400;
  pfVar10 = pfVar17 + 0x401;
  pfVar15 = pfVar17 + 0x600;
  pfVar16 = pfVar17 + 0x601;
  pfVar5 = pfVar17 + 0x80;
  pfVar6 = pfVar17 + 0x81;
  pfVar1 = pfVar17 + 0x280;
  pfVar2 = pfVar17 + 0x281;
  pfVar11 = pfVar17 + 0x480;
  pfVar12 = pfVar17 + 0x481;
  pfVar3 = pfVar17 + 0x680;
  pfVar4 = pfVar17 + 0x681;
  pfVar13 = pfVar17;
  if (!bVar18) {
    pfVar1 = pfVar17 + 0x282;
    pfVar2 = pfVar17 + 0x283;
    pfVar3 = pfVar17 + 0x682;
    pfVar4 = pfVar17 + 0x683;
    pfVar5 = pfVar17 + 0x82;
    pfVar6 = pfVar17 + 0x83;
    pfVar7 = pfVar17 + 0x202;
    pfVar8 = pfVar17 + 0x203;
    pfVar9 = pfVar17 + 0x402;
    pfVar10 = pfVar17 + 0x403;
    pfVar11 = pfVar17 + 0x482;
    pfVar12 = pfVar17 + 0x483;
    pfVar13 = pfVar17 + 2;
    pfVar14 = pfVar17 + 3;
    pfVar15 = pfVar17 + 0x602;
    pfVar16 = pfVar17 + 0x603;
  }
  fVar19 = *pfVar16;
  fVar28 = *pfVar15;
  fVar23 = *pfVar14;
  fVar22 = *pfVar13;
  fVar32 = *pfVar12;
  fVar30 = *pfVar11;
  fVar27 = *pfVar10;
  fVar26 = *pfVar9;
  fVar51 = *pfVar8;
  fVar52 = *pfVar7;
  fVar25 = *pfVar6;
  fVar24 = *pfVar5;
  fVar21 = *pfVar4;
  fVar20 = *pfVar3;
  fVar53 = *pfVar2;
  fVar54 = *pfVar1;
  pfVar7 = pfVar17 + 0x700;
  pfVar8 = pfVar17 + 0x701;
  pfVar9 = pfVar17 + 0x100;
  pfVar15 = pfVar17 + 0x580;
  pfVar10 = pfVar17 + 0x581;
  pfVar5 = pfVar17 + 0x180;
  pfVar16 = pfVar17 + 0x181;
  pfVar1 = pfVar17 + 0x380;
  pfVar6 = pfVar17 + 0x381;
  pfVar11 = pfVar17 + 0x500;
  pfVar2 = pfVar17 + 0x501;
  fVar55 = ((fVar51 * fVar63 + fVar22) - fVar26) + fVar19 * fVar29;
  fVar56 = ((fVar52 * fVar64 + fVar23) - fVar27) + fVar28 * fVar31;
  fVar57 = ((fVar53 * fVar65 + fVar24) - fVar30) + fVar21 * fVar33;
  fVar58 = ((fVar54 * fVar66 + fVar25) - fVar32) + fVar20 * fVar34;
  pfVar12 = pfVar17 + 0x101;
  fVar67 = fVar26 + fVar22 + fVar52 + fVar28;
  fVar68 = fVar27 + fVar23 + fVar51 + fVar19;
  fVar69 = fVar30 + fVar24 + fVar54 + fVar20;
  fVar70 = fVar32 + fVar25 + fVar53 + fVar21;
  fVar59 = ((fVar26 + fVar22) - fVar52) - fVar28;
  fVar60 = ((fVar27 + fVar23) - fVar51) - fVar19;
  fVar61 = ((fVar30 + fVar24) - fVar54) - fVar20;
  fVar62 = ((fVar32 + fVar25) - fVar53) - fVar21;
  pfVar3 = pfVar17 + 0x780;
  pfVar4 = pfVar17 + 0x781;
  fVar51 = ((fVar51 * fVar29 + fVar22) - fVar26) + fVar19 * fVar63;
  fVar52 = ((fVar52 * fVar31 + fVar23) - fVar27) + fVar28 * fVar64;
  fVar53 = ((fVar53 * fVar33 + fVar24) - fVar30) + fVar21 * fVar65;
  fVar54 = ((fVar54 * fVar34 + fVar25) - fVar32) + fVar20 * fVar66;
  pfVar14 = pfVar17 + 0x300;
  pfVar13 = pfVar17 + 0x301;
  if (((ulonglong)param_2 & 0xf) != 0) {
    pfVar1 = pfVar17 + 0x382;
    pfVar6 = pfVar17 + 899;
    pfVar3 = pfVar17 + 0x782;
    pfVar4 = pfVar17 + 0x783;
    pfVar5 = pfVar17 + 0x182;
    pfVar16 = pfVar17 + 0x183;
    pfVar11 = pfVar17 + 0x502;
    pfVar2 = pfVar17 + 0x503;
    pfVar15 = pfVar17 + 0x582;
    pfVar10 = pfVar17 + 0x583;
    pfVar14 = pfVar17 + 0x302;
    pfVar13 = pfVar17 + 0x303;
    pfVar7 = pfVar17 + 0x702;
    pfVar8 = pfVar17 + 0x703;
    pfVar9 = pfVar17 + 0x102;
    pfVar12 = pfVar17 + 0x103;
  }
  fVar27 = *pfVar12;
  fVar26 = *pfVar9;
  fVar23 = *pfVar8;
  fVar22 = *pfVar7;
  fVar19 = *pfVar13;
  fVar28 = *pfVar14;
  fVar42 = *pfVar10;
  fVar41 = *pfVar15;
  fVar40 = *pfVar2;
  fVar39 = *pfVar11;
  fVar32 = *pfVar16;
  fVar30 = *pfVar5;
  fVar25 = *pfVar4;
  fVar24 = *pfVar3;
  fVar21 = *pfVar6;
  fVar20 = *pfVar1;
  pfVar17 = *(float **)(param_3 + 0x50);
  fVar47 = ((fVar39 + fVar26) - fVar28) - fVar22;
  fVar48 = ((fVar40 + fVar27) - fVar19) - fVar23;
  fVar49 = ((fVar41 + fVar30) - fVar20) - fVar24;
  fVar50 = ((fVar42 + fVar32) - fVar21) - fVar25;
  fVar35 = fVar39 + fVar26 + fVar28 + fVar22;
  fVar36 = fVar40 + fVar27 + fVar19 + fVar23;
  fVar37 = fVar41 + fVar30 + fVar20 + fVar24;
  fVar38 = fVar42 + fVar32 + fVar21 + fVar25;
  fVar43 = ((fVar19 * fVar29 + fVar26) - fVar39) + fVar23 * fVar63;
  fVar44 = ((fVar28 * fVar31 + fVar27) - fVar40) + fVar22 * fVar64;
  fVar45 = ((fVar21 * fVar33 + fVar30) - fVar41) + fVar25 * fVar65;
  fVar46 = ((fVar20 * fVar34 + fVar32) - fVar42) + fVar24 * fVar66;
  fVar26 = ((fVar19 * fVar63 + fVar26) - fVar39) + fVar23 * fVar29;
  fVar27 = ((fVar28 * fVar64 + fVar27) - fVar40) + fVar22 * fVar31;
  fVar28 = ((fVar21 * fVar65 + fVar30) - fVar41) + fVar25 * fVar33;
  fVar34 = ((fVar20 * fVar66 + fVar32) - fVar42) + fVar24 * fVar34;
  fVar30 = fVar70 * -1.0 * pfVar17[1] + fVar69 * *pfVar17;
  fVar32 = fVar70 * 1.0 * *pfVar17 + fVar69 * pfVar17[1];
  fVar69 = fVar58 * -1.0 * pfVar17[3] + fVar57 * pfVar17[2];
  fVar57 = fVar58 * 1.0 * pfVar17[2] + fVar57 * pfVar17[3];
  fVar29 = fVar38 * -1.0 * pfVar17[9] + fVar37 * pfVar17[8];
  fVar31 = fVar38 * 1.0 * pfVar17[8] + fVar37 * pfVar17[9];
  fVar33 = fVar34 * -1.0 * pfVar17[0xb] + fVar28 * pfVar17[10];
  fVar34 = fVar34 * 1.0 * pfVar17[10] + fVar28 * pfVar17[0xb];
  fVar22 = fVar29 + fVar30;
  fVar23 = fVar31 + fVar32;
  fVar24 = fVar33 + fVar69;
  fVar25 = fVar34 + fVar57;
  fVar28 = fVar36 * -1.0 * pfVar17[5] + fVar35 * pfVar17[4];
  fVar19 = fVar36 * 1.0 * pfVar17[4] + fVar35 * pfVar17[5];
  fVar20 = fVar27 * -1.0 * pfVar17[7] + fVar26 * pfVar17[6];
  fVar21 = fVar27 * 1.0 * pfVar17[6] + fVar26 * pfVar17[7];
  fVar26 = (fVar32 - fVar31) * fVar63;
  fVar27 = (fVar30 - fVar29) * fVar64;
  fVar30 = (fVar57 - fVar34) * fVar65;
  fVar32 = (fVar69 - fVar33) * fVar66;
  fVar29 = fVar67 - fVar28;
  fVar31 = fVar68 - fVar19;
  fVar33 = fVar55 - fVar20;
  fVar34 = fVar56 - fVar21;
  fVar67 = fVar67 + fVar28;
  fVar68 = fVar68 + fVar19;
  fVar55 = fVar55 + fVar20;
  fVar56 = fVar56 + fVar21;
  param_1[0x10] = fVar67 - fVar22;
  param_1[0x11] = fVar68 - fVar23;
  param_1[0x12] = fVar55 - fVar24;
  param_1[0x13] = fVar56 - fVar25;
  *param_1 = fVar67 + fVar22;
  param_1[1] = fVar68 + fVar23;
  param_1[2] = fVar55 + fVar24;
  param_1[3] = fVar56 + fVar25;
  param_1[8] = fVar29 + fVar26;
  param_1[9] = fVar31 + fVar27;
  param_1[10] = fVar33 + fVar30;
  param_1[0xb] = fVar34 + fVar32;
  param_1[0x18] = fVar29 - fVar26;
  param_1[0x19] = fVar31 - fVar27;
  param_1[0x1a] = fVar33 - fVar30;
  param_1[0x1b] = fVar34 - fVar32;
  fVar24 = fVar62 * -1.0 * pfVar17[0xd] + fVar61 * pfVar17[0xc];
  fVar25 = fVar62 * 1.0 * pfVar17[0xc] + fVar61 * pfVar17[0xd];
  fVar26 = fVar54 * -1.0 * pfVar17[0xf] + fVar53 * pfVar17[0xe];
  fVar27 = fVar54 * 1.0 * pfVar17[0xe] + fVar53 * pfVar17[0xf];
  fVar54 = fVar50 * -1.0 * pfVar17[0x15] + fVar49 * pfVar17[0x14];
  fVar53 = fVar50 * 1.0 * pfVar17[0x14] + fVar49 * pfVar17[0x15];
  fVar28 = fVar46 * -1.0 * pfVar17[0x17] + fVar45 * pfVar17[0x16];
  fVar19 = fVar46 * 1.0 * pfVar17[0x16] + fVar45 * pfVar17[0x17];
  fVar20 = fVar54 + fVar24;
  fVar21 = fVar53 + fVar25;
  fVar22 = fVar28 + fVar26;
  fVar23 = fVar19 + fVar27;
  fVar29 = fVar48 * -1.0 * pfVar17[0x11] + fVar47 * pfVar17[0x10];
  fVar31 = fVar48 * 1.0 * pfVar17[0x10] + fVar47 * pfVar17[0x11];
  fVar33 = fVar44 * -1.0 * pfVar17[0x13] + fVar43 * pfVar17[0x12];
  fVar34 = fVar44 * 1.0 * pfVar17[0x12] + fVar43 * pfVar17[0x13];
  fVar63 = (fVar25 - fVar53) * fVar63;
  fVar64 = (fVar24 - fVar54) * fVar64;
  fVar65 = (fVar27 - fVar19) * fVar65;
  fVar66 = (fVar26 - fVar28) * fVar66;
  fVar54 = fVar59 + fVar29;
  fVar53 = fVar60 + fVar31;
  fVar28 = fVar51 + fVar33;
  fVar19 = fVar52 + fVar34;
  fVar59 = fVar59 - fVar29;
  fVar60 = fVar60 - fVar31;
  fVar51 = fVar51 - fVar33;
  fVar52 = fVar52 - fVar34;
  param_1[0x14] = fVar54 - fVar20;
  param_1[0x15] = fVar53 - fVar21;
  param_1[0x16] = fVar28 - fVar22;
  param_1[0x17] = fVar19 - fVar23;
  param_1[4] = fVar54 + fVar20;
  param_1[5] = fVar53 + fVar21;
  param_1[6] = fVar28 + fVar22;
  param_1[7] = fVar19 + fVar23;
  param_1[0xc] = fVar59 + fVar63;
  param_1[0xd] = fVar60 + fVar64;
  param_1[0xe] = fVar51 + fVar65;
  param_1[0xf] = fVar52 + fVar66;
  param_1[0x1c] = fVar59 - fVar63;
  param_1[0x1d] = fVar60 - fVar64;
  param_1[0x1e] = fVar51 - fVar65;
  param_1[0x1f] = fVar52 - fVar66;
  return;
}



// FUNCTION 143215cc0 kf_bfly5 body=1059 status=ok
// SIG undefined kf_bfly5(void)

void DSP::AkFFTAllButterflies::kf_bfly5
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
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
  
  pfVar8 = *(float **)(param_3 + 0x48);
  lVar10 = (longlong)(int)param_4;
  lVar5 = lVar10 * param_2;
  fVar1 = pfVar8[lVar5 * 2];
  fVar2 = pfVar8[lVar5 * 2 + 1];
  fVar3 = pfVar8[lVar5 * 4];
  fVar4 = pfVar8[lVar5 * 4 + 1];
  lVar5 = (longlong)(int)(param_4 * 3);
  pfVar9 = (float *)(param_1 + lVar5 * 8);
  if (0 < (int)param_4) {
    pfVar7 = (float *)(param_1 + 4);
    lVar13 = (longlong)(int)(param_4 * 4);
    lVar6 = (longlong)(int)(param_4 * 2);
    uVar11 = (ulonglong)param_4;
    pfVar12 = pfVar8;
    pfVar14 = pfVar8;
    pfVar15 = pfVar8;
    do {
      fVar22 = pfVar15[1] * pfVar7[lVar10 * 2 + -1] + *pfVar15 * pfVar7[lVar10 * 2];
      fVar25 = *pfVar15 * pfVar7[lVar10 * 2 + -1] - pfVar15[1] * pfVar7[lVar10 * 2];
      fVar16 = *pfVar7;
      fVar30 = *pfVar14 * pfVar7[lVar6 * 2 + -1] - pfVar14[1] * pfVar7[lVar6 * 2];
      fVar18 = pfVar7[-1];
      fVar29 = pfVar14[1] * pfVar7[lVar6 * 2 + -1] + *pfVar14 * pfVar7[lVar6 * 2];
      fVar19 = *pfVar8 * *pfVar9 - pfVar8[1] * pfVar7[lVar5 * 2];
      fVar21 = pfVar8[1] * *pfVar9 + *pfVar8 * pfVar7[lVar5 * 2];
      fVar27 = *pfVar12 * pfVar7[lVar13 * 2 + -1] - pfVar12[1] * pfVar7[lVar13 * 2];
      fVar17 = pfVar12[1] * pfVar7[lVar13 * 2 + -1] + *pfVar12 * pfVar7[lVar13 * 2];
      fVar24 = fVar27 + fVar25;
      fVar26 = fVar21 + fVar29;
      fVar28 = fVar17 + fVar22;
      fVar22 = fVar22 - fVar17;
      fVar29 = fVar29 - fVar21;
      fVar23 = fVar19 + fVar30;
      fVar30 = fVar30 - fVar19;
      *pfVar7 = fVar26 + fVar28 + fVar16;
      pfVar7[-1] = fVar23 + fVar24 + fVar18;
      fVar20 = fVar1 * fVar24 + fVar18 + fVar23 * fVar3;
      fVar21 = fVar1 * fVar28 + fVar16 + fVar26 * fVar3;
      pfVar15 = pfVar15 + param_2 * 2;
      pfVar14 = pfVar14 + param_2 * 4;
      pfVar8 = pfVar8 + param_2 * 6;
      pfVar12 = pfVar12 + param_2 * 8;
      fVar19 = fVar2 * fVar22 + fVar4 * fVar29;
      fVar17 = (fVar27 - fVar25) * fVar2 - fVar30 * fVar4;
      pfVar7[lVar10 * 2 + -1] = fVar20 - fVar19;
      pfVar7[lVar10 * 2] = fVar21 - fVar17;
      pfVar7[lVar13 * 2] = fVar17 + fVar21;
      pfVar7[lVar13 * 2 + -1] = fVar20 + fVar19;
      fVar19 = fVar28 * fVar3 + fVar16 + fVar1 * fVar26;
      fVar18 = fVar3 * fVar24 + fVar18 + fVar23 * fVar1;
      fVar17 = (fVar25 - fVar27) * fVar4 - fVar30 * fVar2;
      fVar16 = fVar2 * fVar29 - fVar22 * fVar4;
      pfVar7[lVar6 * 2] = fVar19 + fVar17;
      pfVar7[lVar6 * 2 + -1] = fVar16 + fVar18;
      *pfVar9 = fVar18 - fVar16;
      pfVar9 = pfVar9 + 2;
      pfVar7[lVar5 * 2] = fVar19 - fVar17;
      pfVar7 = pfVar7 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 1432160f0 kf_bfly_generic body=1085 status=ok
// SIG undefined kf_bfly_generic(void)

void DSP::AkFFTAllButterflies::kf_bfly_generic
               (float *param_1,int param_2,int *param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_res18;
  int local_198;
  float local_178 [80];
  
  lVar11 = *(longlong *)(param_3 + 0x12);
  iVar10 = *param_3;
  uVar16 = (ulonglong)(int)param_4;
  local_198 = 0;
  if (0 < (int)param_4) {
    local_res18 = 0;
    uVar23 = uVar16;
    uVar22 = uVar16;
    fVar29 = local_178[1];
    fVar30 = local_178[0];
    do {
      if (0 < (longlong)(int)param_5) {
        pfVar17 = local_178;
        pfVar19 = param_1;
        lVar21 = (longlong)(int)param_5;
        do {
          uVar9 = *(undefined8 *)pfVar19;
          pfVar19 = pfVar19 + uVar22 * 2;
          *(undefined8 *)pfVar17 = uVar9;
          pfVar17 = pfVar17 + 2;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        uVar23 = (ulonglong)param_4;
        uVar22 = uVar16;
        fVar29 = local_178[1];
        fVar30 = local_178[0];
      }
      if (0 < (int)param_5) {
        uVar24 = (ulonglong)param_5;
        iVar12 = (int)uVar23;
        pfVar17 = param_1;
        iVar25 = local_198;
        iVar26 = local_res18;
        do {
          iVar20 = 1;
          *pfVar17 = fVar30;
          iVar14 = 0;
          pfVar17[1] = fVar29;
          lVar21 = 1;
          if (1 < (int)param_5) {
            if (4 < (int)param_5) {
              uVar13 = (param_5 - 5 >> 2) + 1;
              uVar23 = (ulonglong)uVar13;
              iVar20 = uVar13 * 4 + 1;
              fVar28 = fVar29;
              fVar27 = fVar30;
              do {
                fVar3 = local_178[lVar21 * 2 + 1];
                iVar14 = iVar26 + iVar14;
                fVar4 = local_178[lVar21 * 2];
                iVar15 = iVar14 - iVar10;
                if (iVar14 < iVar10) {
                  iVar15 = iVar14;
                }
                fVar5 = *(float *)(lVar11 + (longlong)iVar15 * 8);
                fVar6 = *(float *)(lVar11 + 4 + (longlong)iVar15 * 8);
                iVar15 = iVar15 + iVar26;
                iVar14 = iVar15 - iVar10;
                if (iVar15 < iVar10) {
                  iVar14 = iVar15;
                }
                fVar7 = local_178[lVar21 * 2 + 2];
                fVar8 = local_178[lVar21 * 2 + 3];
                fVar27 = (fVar5 * fVar4 - fVar3 * fVar6) + fVar27;
                *pfVar17 = fVar27;
                fVar28 = fVar3 * fVar5 + fVar6 * fVar4 + fVar28;
                pfVar17[1] = fVar28;
                fVar3 = *(float *)(lVar11 + (longlong)iVar14 * 8);
                fVar4 = *(float *)(lVar11 + 4 + (longlong)iVar14 * 8);
                iVar14 = iVar14 + iVar26;
                fVar5 = local_178[lVar21 * 2 + 5];
                iVar15 = iVar14 - iVar10;
                if (iVar14 < iVar10) {
                  iVar15 = iVar14;
                }
                iVar18 = iVar15 + iVar26;
                fVar6 = local_178[lVar21 * 2 + 4];
                fVar28 = fVar4 * fVar7 + fVar3 * fVar8 + fVar28;
                iVar14 = iVar18 - iVar10;
                if (iVar18 < iVar10) {
                  iVar14 = iVar18;
                }
                fVar27 = (fVar3 * fVar7 - fVar4 * fVar8) + fVar27;
                pfVar17[1] = fVar28;
                *pfVar17 = fVar27;
                fVar3 = *(float *)(lVar11 + (longlong)iVar15 * 8);
                fVar4 = *(float *)(lVar11 + 4 + (longlong)iVar15 * 8);
                fVar7 = local_178[lVar21 * 2 + 6];
                fVar8 = local_178[lVar21 * 2 + 7];
                fVar27 = (fVar3 * fVar6 - fVar4 * fVar5) + fVar27;
                fVar28 = fVar4 * fVar6 + fVar3 * fVar5 + fVar28;
                *pfVar17 = fVar27;
                pfVar17[1] = fVar28;
                fVar3 = *(float *)(lVar11 + (longlong)iVar14 * 8);
                fVar4 = *(float *)(lVar11 + 4 + (longlong)iVar14 * 8);
                fVar27 = (fVar3 * fVar7 - fVar4 * fVar8) + fVar27;
                lVar21 = lVar21 + 4;
                *pfVar17 = fVar27;
                fVar28 = fVar4 * fVar7 + fVar3 * fVar8 + fVar28;
                pfVar17[1] = fVar28;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
              uVar23 = (ulonglong)param_4;
            }
            if (iVar20 < (int)param_5) {
              fVar28 = *pfVar17;
              pfVar19 = local_178 + lVar21 * 2 + 1;
              fVar27 = pfVar17[1];
              uVar23 = (ulonglong)(param_5 - iVar20);
              do {
                iVar20 = iVar14 + param_2 * iVar25;
                iVar14 = iVar20 - iVar10;
                if (iVar20 < iVar10) {
                  iVar14 = iVar20;
                }
                fVar3 = *(float *)(lVar11 + (longlong)iVar14 * 8);
                fVar4 = *(float *)(lVar11 + 4 + (longlong)iVar14 * 8);
                pfVar1 = pfVar19 + -1;
                fVar5 = *pfVar19;
                pfVar2 = pfVar19 + -1;
                fVar6 = *pfVar19;
                pfVar19 = pfVar19 + 2;
                fVar28 = fVar28 + (fVar3 * *pfVar1 - fVar4 * fVar5);
                fVar27 = fVar27 + fVar4 * *pfVar2 + fVar3 * fVar6;
                *pfVar17 = fVar28;
                pfVar17[1] = fVar27;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
              uVar23 = (ulonglong)param_4;
            }
          }
          iVar25 = iVar25 + (int)uVar23;
          iVar26 = iVar26 + param_2 * iVar12;
          pfVar17 = pfVar17 + uVar22 * 2;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      local_198 = local_198 + 1;
      uVar22 = (ulonglong)(int)uVar23;
      local_res18 = local_res18 + param_2;
      param_1 = param_1 + 2;
    } while (local_198 < (int)uVar23);
  }
  return;
}



// FUNCTION 143216530 kf_work body=1725 status=ok
// SIG undefined kf_work(void)

void DSP::AkFFTAllButterflies::kf_work
               (float *param_1,float *param_2,longlong param_3,int param_4,int *param_5,int *param_6
               )

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  float *pfVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar13 = param_5[1];
  uVar14 = (ulonglong)(int)uVar13;
  iVar8 = *param_5;
  piVar16 = param_5 + 2;
  if (uVar13 == 1) {
    pfVar11 = param_1;
    do {
      uVar7 = *(undefined8 *)param_2;
      param_2 = param_2 + (ulonglong)(uint)((int)param_3 * param_4) * 2;
      *(undefined8 *)pfVar11 = uVar7;
      pfVar11 = pfVar11 + 2;
    } while (pfVar11 != param_1 + (longlong)(int)(uVar13 * iVar8) * 2);
    goto LAB_1432167c4;
  }
  if (*param_6 == 0x400) {
    if (param_5[3] == 1) {
      if (((*piVar16 == 4) && (param_3 == 0x40)) && (param_4 == 1)) {
        kf_bfly4_m1_s256_n1024_SIMD(param_1,param_2,param_6);
        return;
      }
      goto LAB_14321660d;
    }
  }
  else {
LAB_14321660d:
    if (((param_5[3] == 1) && (*piVar16 == 2)) && (iVar8 == 4)) {
      fVar3 = *param_2;
      fVar17 = param_2[1];
      pfVar11 = param_2 + param_3 * 2;
      fVar18 = param_2[param_3 * 8];
      fVar19 = param_2[param_3 * 8 + 1];
      param_1[2] = fVar3 - fVar18;
      param_1[3] = fVar17 - fVar19;
      *param_1 = fVar18 + fVar3;
      param_1[1] = fVar19 + fVar17;
      fVar3 = *pfVar11;
      fVar17 = pfVar11[1];
      fVar18 = pfVar11[param_3 * 8];
      fVar19 = pfVar11[param_3 * 8 + 1];
      pfVar11 = pfVar11 + param_3 * 2;
      param_1[6] = fVar3 - fVar18;
      param_1[7] = fVar17 - fVar19;
      param_1[4] = fVar18 + fVar3;
      param_1[5] = fVar19 + fVar17;
      fVar3 = *pfVar11;
      fVar17 = pfVar11[1];
      fVar18 = pfVar11[param_3 * 8];
      fVar19 = pfVar11[param_3 * 8 + 1];
      pfVar11 = pfVar11 + param_3 * 2;
      param_1[10] = fVar3 - fVar18;
      param_1[0xb] = fVar17 - fVar19;
      param_1[8] = fVar18 + fVar3;
      param_1[9] = fVar19 + fVar17;
      fVar3 = *pfVar11;
      fVar17 = pfVar11[1];
      fVar18 = pfVar11[param_3 * 8];
      fVar19 = pfVar11[param_3 * 8 + 1];
      param_1[0xe] = fVar3 - fVar18;
      param_1[0xf] = fVar17 - fVar19;
      param_1[0xc] = fVar18 + fVar3;
      param_1[0xd] = fVar19 + fVar17;
      goto LAB_1432167c4;
    }
  }
  pfVar11 = param_1;
  do {
    kf_work(pfVar11,param_2,iVar8 * param_3,param_4,piVar16,param_6);
    pfVar11 = pfVar11 + uVar14 * 2;
    param_2 = param_2 + param_4 * param_3 * 2;
  } while (pfVar11 != param_1 + (longlong)(int)(uVar13 * iVar8) * 2);
  uVar14 = (ulonglong)uVar13;
LAB_1432167c4:
  iVar12 = (int)uVar14;
  if (iVar8 == 2) {
    if (iVar12 == 1) {
      fVar3 = param_1[2];
      fVar17 = param_1[3];
      param_1[2] = *param_1 - fVar3;
      param_1[3] = param_1[1] - fVar17;
      *param_1 = fVar3 + *param_1;
      param_1[1] = fVar17 + param_1[1];
    }
    else {
      pfVar11 = *(float **)(param_6 + 0x12);
      lVar10 = (longlong)iVar12;
      param_1 = param_1 + lVar10 * 2;
      do {
        fVar3 = *pfVar11;
        pfVar15 = pfVar11 + 1;
        pfVar11 = pfVar11 + param_3 * 2;
        fVar17 = fVar3 * *param_1 - *pfVar15 * param_1[1];
        fVar18 = fVar3 * param_1[1] + *pfVar15 * *param_1;
        *param_1 = param_1[lVar10 * -2] - fVar17;
        param_1[1] = param_1[lVar10 * -2 + 1] - fVar18;
        fVar3 = param_1[lVar10 * -2 + 1];
        param_1[lVar10 * -2] = fVar17 + param_1[lVar10 * -2];
        param_1[lVar10 * -2 + 1] = fVar18 + fVar3;
        param_1 = param_1 + 2;
        uVar13 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 != 0);
    }
  }
  else if (iVar8 == 3) {
    pfVar11 = *(float **)(param_6 + 0x12);
    param_1 = param_1 + 1;
    lVar9 = (longlong)iVar12;
    fVar3 = pfVar11[lVar9 * param_3 * 2 + 1];
    lVar10 = lVar9;
    pfVar15 = pfVar11;
    do {
      fVar17 = *pfVar15;
      pfVar1 = pfVar15 + 1;
      fVar18 = *pfVar11;
      pfVar15 = pfVar15 + param_3 * 2;
      fVar21 = fVar17 * param_1[lVar9 * 2] + *pfVar1 * param_1[lVar9 * 2 + -1];
      pfVar2 = pfVar11 + 1;
      fVar22 = fVar17 * param_1[lVar9 * 2 + -1] - *pfVar1 * param_1[lVar9 * 2];
      pfVar11 = pfVar11 + param_3 * 4;
      fVar20 = fVar18 * param_1[lVar9 * 4] + *pfVar2 * param_1[lVar9 * 4 + -1];
      fVar19 = fVar18 * param_1[lVar9 * 4 + -1] - *pfVar2 * param_1[lVar9 * 4];
      fVar18 = fVar20 + fVar21;
      fVar17 = fVar19 + fVar22;
      fVar20 = (fVar21 - fVar20) * fVar3;
      fVar19 = (fVar22 - fVar19) * fVar3;
      param_1[lVar9 * 2 + -1] = param_1[-1] - fVar17 * 0.5;
      param_1[lVar9 * 2] = *param_1 - fVar18 * 0.5;
      param_1[-1] = fVar17 + param_1[-1];
      *param_1 = fVar18 + *param_1;
      param_1[lVar9 * 4 + -1] = fVar20 + param_1[lVar9 * 2 + -1];
      param_1[lVar9 * 4] = param_1[lVar9 * 2] - fVar19;
      fVar17 = param_1[lVar9 * 2 + -1];
      param_1[lVar9 * 2] = fVar19 + param_1[lVar9 * 2];
      param_1[lVar9 * 2 + -1] = fVar17 - fVar20;
      param_1 = param_1 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else if (iVar8 == 4) {
    if ((iVar12 == 1) && (param_3 == 0x100)) {
      fVar3 = *param_1;
      fVar17 = param_1[3];
      fVar18 = param_1[1];
      fVar19 = *(float *)(*(longlong *)(param_6 + 0x12) + 0x1804);
      fVar20 = param_1[4];
      fVar21 = param_1[5];
      fVar22 = param_1[6];
      fVar4 = param_1[7];
      fVar5 = param_1[2];
      fVar6 = *(float *)(*(longlong *)(param_6 + 0x12) + 0x804);
      param_1[1] = fVar17 + fVar18 + fVar21 + fVar4;
      *param_1 = fVar5 + fVar3 + fVar20 + fVar22;
      param_1[2] = ((fVar3 - fVar17 * fVar6) - fVar20) - fVar4 * fVar19;
      param_1[3] = ((fVar5 * fVar6 + fVar18) - fVar21) + fVar22 * fVar19;
      param_1[4] = ((fVar3 - fVar5) + fVar20) - fVar22;
      param_1[5] = ((fVar18 - fVar17) + fVar21) - fVar4;
      param_1[7] = ((fVar5 * fVar19 + fVar18) - fVar21) + fVar22 * fVar6;
      param_1[6] = ((fVar3 - fVar17 * fVar19) - fVar20) - fVar4 * fVar6;
    }
    else if ((uVar14 & 1) == 0) {
      kf_bfly4(param_1,param_3,param_6,(longlong)iVar12);
    }
    else {
      kf_bfly_generic(param_1,param_3,param_6,uVar14 & 0xffffffff,4);
    }
  }
  else if (iVar8 == 5) {
    kf_bfly5(param_1,param_3,param_6,uVar14 & 0xffffffff);
  }
  else {
    kf_bfly_generic(param_1,param_3,param_6,uVar14 & 0xffffffff,iVar8);
  }
  return;
}



// FUNCTION 143216bf0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkTimeStretchFX::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ae52b0;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x48);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 143216c40 Bypass body=262 status=ok
// SIG undefined Bypass(void)

void CAkTimeStretchFX::Bypass(undefined8 param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_2 + 1);
  if ((byte)*(uint *)(param_4 + 1) <= (byte)*(uint *)(param_2 + 1)) {
    uVar2 = *(uint *)(param_4 + 1);
  }
  uVar1 = *(ushort *)((longlong)param_4 + 0x12);
  uVar3 = (uint)*(ushort *)(param_4 + 2) - (uint)uVar1;
  if ((int)(uint)*(ushort *)((longlong)param_2 + 0x12) <
      (int)((uint)*(ushort *)(param_4 + 2) - (uint)uVar1)) {
    uVar3 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  }
  uVar6 = 0;
  if ((char)uVar2 != '\0') {
    do {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_4 +
                         ((ulonglong)*(ushort *)(param_4 + 2) * (ulonglong)uVar6 +
                         (ulonglong)*(ushort *)((longlong)param_4 + 0x12)) * 4),
                 (void *)(*param_2 +
                         ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar6 +
                         (ulonglong)param_3) * 4),(ulonglong)(uVar3 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uVar2 & 0xff));
    uVar1 = *(ushort *)((longlong)param_4 + 0x12);
  }
  *(ushort *)((longlong)param_4 + 0x12) = uVar1 + (short)uVar3;
  sVar4 = *(short *)((longlong)param_2 + 0x12) - (short)uVar3;
  *(short *)((longlong)param_2 + 0x12) = sVar4;
  if ((*(int *)((longlong)param_2 + 0xc) == 0x11) && (sVar4 == 0)) {
    *(undefined4 *)((longlong)param_4 + 0xc) = 0x11;
    return;
  }
  uVar5 = 0x2b;
  if (*(short *)((longlong)param_4 + 0x12) == (short)param_4[2]) {
    uVar5 = 0x2d;
  }
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar5;
  return;
}



// FUNCTION 143216d50 CreateAkTimeStretchFX body=105 status=ok
// SIG undefined CreateAkTimeStretchFX(void)

undefined8 * CreateAkTimeStretchFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145ae52b0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x800;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f800000;
    puVar1[5] = 0x800;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    DSP::AkFFTAllButterflies::CAkPhaseVocoder::CAkPhaseVocoder(puVar1 + 9);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143216dc0 Execute body=464 status=ok
// SIG undefined Execute(void)

void CAkTimeStretchFX::Execute
               (longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0xa0) = 0;
  CAkTimeStretchFXParams::GetParams(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x28)) {
    DSP::AkFFTAllButterflies::CAkPhaseVocoder::Term(param_1 + 0x48,*(undefined8 *)(param_1 + 0x10));
    iVar2 = DSP::AkFFTAllButterflies::CAkPhaseVocoder::Init
                      (param_1 + 0x48,*(undefined8 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x18),1);
    if (iVar2 != 1) goto LAB_143216eea;
    DSP::AkFFTAllButterflies::CAkPhaseVocoder::Reset(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  }
  fVar6 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1c);
  fVar5 = 1600.0;
  if (((1600.0 <= fVar6) || (fVar5 = 25.0, fVar6 <= 25.0)) || (fVar5 = fVar6, fVar6 != 100.0)) {
    *(undefined1 *)(param_1 + 0x99) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    cVar4 = '\0';
  }
  else {
    pcVar1 = (char *)(param_1 + 0x98);
    if (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x2c) == 100.0) {
      if (*(char *)(param_1 + 0x99) != '\0') {
        *pcVar1 = *pcVar1 + '\x01';
      }
      cVar4 = *pcVar1;
    }
    else {
      *pcVar1 = '\0';
      *pcVar1 = *pcVar1 + '\x01';
      cVar4 = *pcVar1;
      *(undefined1 *)(param_1 + 0x99) = 1;
    }
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                    (*(longlong **)(param_1 + 0x10),*(int *)(param_1 + 0x88) << 2);
  if (lVar3 != 0) {
    DSP::AkFFTAllButterflies::CAkPhaseVocoder::Execute
              (param_1 + 0x48,param_2,param_3,param_4,fVar5,cVar4 == '\b',lVar3);
    if (cVar4 == '\b') {
      *(undefined1 *)(param_1 + 0x99) = 0;
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar3);
    if ((*(int *)(param_4 + 0xc) != 0x2d) && (*(int *)(param_4 + 0xc) != 0x11)) {
      return;
    }
    AK::DSP::ApplyGain(param_4,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x24),1);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
    return;
  }
LAB_143216eea:
  Bypass(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143216fb0 Init body=179 status=ok
// SIG undefined Init(void)

void CAkTimeStretchFX::Init
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 *param_5)

{
  float fVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(uint *)(param_1 + 0x38) = (uint)*(byte *)(param_5 + 1);
  *(undefined4 *)(param_1 + 0x3c) = *param_5;
  CAkTimeStretchFXParams::GetParams(param_4,param_1 + 0x18);
  fVar1 = -*(float *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(float *)(param_1 + 0x40) = (*(float *)(param_1 + 0x20) - fVar1) * 0.0005892969 + fVar1;
  DSP::AkFFTAllButterflies::CAkPhaseVocoder::Init
            (param_1 + 0x48,param_2,*(undefined1 *)(param_5 + 1),*param_5,
             *(undefined4 *)(param_1 + 0x18),1);
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 143217070 Reset body=23 status=ok
// SIG undefined Reset(void)

undefined8 CAkTimeStretchFX::Reset(longlong param_1)

{
  DSP::AkFFTAllButterflies::CAkPhaseVocoder::Reset(param_1 + 0x48);
  return 1;
}



// FUNCTION 143217090 Term body=68 status=ok
// SIG undefined Term(void)

undefined8 CAkTimeStretchFX::Term(undefined8 *param_1,longlong *param_2)

{
  DSP::AkFFTAllButterflies::CAkPhaseVocoder::Term(param_1 + 9);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1432170e0 TimeSkip body=158 status=ok
// SIG undefined TimeSkip(void)

undefined8 CAkTimeStretchFX::TimeSkip(longlong param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*param_2 == 0) {
    return 0x11;
  }
  CAkTimeStretchFXParams::GetParams(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1c);
  fVar1 = 1600.0;
  if ((1600.0 <= fVar2) || (fVar1 = 25.0, fVar2 <= 25.0)) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar2 = ((float)*param_2 * 100.0) / fVar2 + fVar1;
  *(float *)(param_1 + 0xa0) = fVar2;
  *param_2 = (uint)(longlong)(fVar2 - fVar1);
  return 0x2d;
}



// FUNCTION 143217180 Clone body=83 status=ok
// SIG undefined Clone(void)

void CAkTimeStretchFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5300;
    puVar2[1] = 0x800;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3f800000;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    return;
  }
  return;
}



// FUNCTION 1432171e0 FUN_1432171e0 body=62 status=ok
// SIG undefined FUN_1432171e0(void)

void FUN_1432171e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5300;
    puVar1[1] = 0x800;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
    return;
  }
  return;
}



// FUNCTION 143217220 GetParams body=8 status=ok
// SIG undefined GetParams(void)

void CAkTimeStretchFXParams::GetParams(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 143217230 SetParam body=160 status=ok
// SIG undefined SetParam(void)

undefined4 CAkTimeStretchFXParams::SetParam(longlong param_1,short param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    *(float *)(param_1 + 8) = *param_3;
  }
  else {
    if (param_2 == 1) {
      *(float *)(param_1 + 0xc) = *param_3;
      return 1;
    }
    if (param_2 == 2) {
      fVar1 = *param_3;
      fVar2 = -24.0;
      if ((-24.0 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
        fVar2 = 24.0;
      }
      fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar2 * 0.05);
      *(float *)(param_1 + 0x14) = fVar1;
      return 1;
    }
    if (param_2 == 3) {
      *(float *)(param_1 + 0x10) = *param_3;
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1432172d0 SetParamsBlock body=72 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkTimeStretchFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x14) = fVar1;
  return 1;
}



// FUNCTION 143217320 FUN_143217320 body=43 status=ok
// SIG undefined FUN_143217320(void)

undefined8 * FUN_143217320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 143217350 FUN_143217350 body=399 status=ok
// SIG undefined FUN_143217350(void)

void FUN_143217350(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 0:
    if (*(char *)(param_1 + 0x94) == '\0') {
      uVar3 = param_2 >> 0xc & 0xffff7;
      param_2 = param_2 & 0xf00 | param_2 - ((param_2 >> 0xc) - uVar3 >> 3) & 0xff | uVar3 << 0xc;
    }
    *(uint *)(param_1 + 0xc0) = param_2;
    return;
  case 1:
    cVar2 = '\0';
    uVar3 = 4;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 2:
    cVar2 = '\0';
    uVar3 = 3;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0xb;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 3:
    cVar2 = '\0';
    uVar3 = 7;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0xf;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 4:
    cVar2 = '\0';
    uVar3 = 0x603;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0x60b;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 5:
    cVar2 = '\0';
    uVar3 = 0x607;
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar3 = 0x60f;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  default:
    goto switchD_143217378_default;
  }
  *(char *)(param_1 + 0xc0) = cVar2;
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xff;
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | uVar3 << 0xc | 0x100;
switchD_143217378_default:
  return;
}



// FUNCTION 143217500 CreateAkPitchShifterFX body=276 status=ok
// SIG undefined CreateAkPitchShifterFX(void)

undefined8 * CreateAkPitchShifterFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5330;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xf) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
    puVar1[0x10] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x12) = 0x42480000;
    *(undefined2 *)((longlong)puVar1 + 0x94) = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x14) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x3f800000;
    puVar1[0x15] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x17) = 0x42480000;
    *(undefined2 *)((longlong)puVar1 + 0xbc) = 0;
    *(undefined1 *)(puVar1 + 0x18) = 0;
    *(uint *)(puVar1 + 0x18) = *(uint *)(puVar1 + 0x18) & 0xff;
    puVar1[0xc] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143217620 Execute body=1462 status=ok
// SIG undefined Execute(void)

void CAkPitchShifterFX::Execute(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  float local_98;
  float local_94 [27];
  ulonglong uVar6;
  
  CAkPitchShifterFXParams::GetParams(*(undefined8 *)(param_1 + 8),param_1 + 0x70);
  lVar7 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  uVar6 = uVar4;
  do {
    if (*(char *)(uVar6 + 8 + lVar7) != '\0') {
      bVar1 = *(byte *)(lVar7 + 8);
      if ((((bVar1 & 0x20) != 0) || ((bVar1 & 1) != 0)) || ((bVar1 & 2) != 0)) {
        if (*(char *)(param_1 + 0xc0) != '\0') {
          AK::DSP::AkDelayPitchShift::Term(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
        }
        if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        TermDryDelay(param_1);
        *(int *)(param_1 + 0xcc) =
             (int)(longlong)(*(float *)(param_1 + 0x90) * 0.001 * (float)*(uint *)(param_1 + 200));
        FUN_143217350(param_1,*(undefined4 *)(param_2 + 8));
        iVar2 = InitPitchVoice(param_1);
        if (iVar2 != 1) {
          return;
        }
        iVar2 = InitDryDelay(param_1);
        if (iVar2 != 1) {
          return;
        }
        ResetPitchVoice(param_1);
        ResetDryDelay();
        lVar7 = *(longlong *)(param_1 + 8);
      }
      if ((*(byte *)(lVar7 + 8) & 4) != 0) {
        TermDryDelay(param_1);
        iVar2 = InitDryDelay(param_1);
        if (iVar2 != 1) {
          return;
        }
        ResetDryDelay();
        lVar7 = *(longlong *)(param_1 + 8);
      }
      if ((*(byte *)(lVar7 + 8) & 0x40) != 0) {
        AK::DSP::AkDelayPitchShift::SetPitchFactor(param_1 + 0x18,*(undefined4 *)(param_1 + 0x80));
        lVar7 = *(longlong *)(param_1 + 8);
      }
      if ((((*(byte *)(lVar7 + 8) & 0x80) == 0) && (bVar1 = *(byte *)(lVar7 + 9), (bVar1 & 2) == 0))
         && (((bVar1 & 1) == 0 && ((bVar1 & 4) == 0)))) break;
      if (*(int *)(param_1 + 0x70) == 0) {
        if (*(longlong *)(param_1 + 0x40) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        break;
      }
      if ((*(longlong *)(param_1 + 0x38) == 0) &&
         (iVar2 = DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
                            (param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),
                             *(undefined1 *)(param_1 + 0xc0),1), iVar2 != 1)) {
        return;
      }
      DSP::ComputeBiquadCoefs
                (local_res8,local_94,&local_98,local_res18,local_res20,*(int *)(param_1 + 0x70) + -1
                 ,(float)*(uint *)(param_1 + 200),*(undefined4 *)(param_1 + 0x78),
                 *(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x7c));
      uVar5 = *(uint *)(param_1 + 0x54);
      local_res18[0] = -local_res18[0];
      local_res20[0] = -local_res20[0];
      pfVar3 = *(float **)(param_1 + 0x48);
      if (((uVar5 & 1) != 0) || (*(char *)(param_1 + 0x58) != '\0')) {
        *pfVar3 = local_res8[0];
        pfVar3[1] = local_res8[0];
        pfVar3[2] = local_res8[0];
        pfVar3[3] = local_res8[0];
        pfVar3[4] = 0.0;
        pfVar3[5] = 0.0;
        pfVar3[6] = 0.0;
        fVar8 = local_res20[0] * local_94[0];
        fVar12 = local_res18[0] * local_res20[0];
        fVar9 = local_res18[0] * local_res18[0];
        fVar11 = local_res18[0] * local_res8[0] + local_94[0];
        pfVar3[7] = fVar11;
        pfVar3[10] = fVar11;
        pfVar3[8] = 0.0;
        pfVar3[9] = 0.0;
        fVar10 = fVar11 * local_res18[0] + local_98 + local_res20[0] * local_res8[0];
        pfVar3[0xb] = fVar10;
        pfVar3[0xd] = fVar11;
        pfVar3[0xe] = fVar10;
        pfVar3[0xc] = 0.0;
        pfVar3[0xf] = local_res8[0] * fVar12 + fVar10 * local_res18[0] + fVar8;
        pfVar3[0x10] = local_94[0];
        fVar11 = local_res18[0] * local_94[0] + local_98;
        pfVar3[0x11] = fVar11;
        fVar11 = fVar11 * local_res18[0] + fVar8;
        pfVar3[0x12] = fVar11;
        pfVar3[0x13] = (fVar11 + fVar8) * local_res18[0] + local_res20[0] * local_98;
        pfVar3[0x15] = local_res18[0] * local_98;
        fVar11 = local_res18[0] * local_98 * local_res18[0];
        pfVar3[0x14] = local_98;
        pfVar3[0x16] = fVar11 + local_res20[0] * local_98;
        pfVar3[0x17] = ((local_98 + local_98) * local_res20[0] + fVar11) * local_res18[0];
        pfVar3[0x19] = local_res20[0] + fVar9;
        pfVar3[0x18] = local_res18[0];
        pfVar3[0x1a] = (local_res20[0] + local_res20[0] + fVar9) * local_res18[0];
        pfVar3[0x1b] = (local_res20[0] * 3.0 + fVar9) * local_res18[0] * local_res18[0] +
                       local_res20[0] * local_res20[0];
        pfVar3[0x1c] = local_res20[0];
        pfVar3[0x1d] = fVar12;
        pfVar3[0x1e] = local_res18[0] * fVar12 + local_res20[0] * local_res20[0];
        pfVar3[0x1f] = ((local_res20[0] + local_res20[0]) * local_res20[0] + local_res18[0] * fVar12
                       ) * local_res18[0];
        pfVar3 = pfVar3 + 0x20;
        if (*(char *)(param_1 + 0x58) != '\0') break;
        uVar5 = *(uint *)(param_1 + 0x54);
      }
      if ((uVar5 & 2) != 0) {
        pfVar3[1] = local_res8[0];
        fVar11 = local_res18[0] * local_res8[0] + local_94[0];
        pfVar3[3] = local_res8[0];
        fVar10 = local_res18[0] * local_res18[0] + local_res20[0];
        *pfVar3 = 0.0;
        pfVar3[2] = 0.0;
        pfVar3[4] = local_res8[0];
        pfVar3[5] = fVar11;
        pfVar3[6] = local_res8[0];
        pfVar3[7] = fVar11;
        pfVar3[8] = local_94[0];
        pfVar3[10] = local_94[0];
        fVar11 = local_res18[0] * local_94[0] + local_98;
        pfVar3[9] = fVar11;
        pfVar3[0xb] = fVar11;
        pfVar3[0xc] = local_98;
        pfVar3[0xe] = local_98;
        pfVar3[0xd] = local_res18[0] * local_98;
        pfVar3[0xf] = local_res18[0] * local_98;
        pfVar3[0x10] = local_res18[0];
        pfVar3[0x11] = fVar10;
        pfVar3[0x12] = local_res18[0];
        pfVar3[0x13] = fVar10;
        pfVar3[0x14] = local_res20[0];
        pfVar3[0x15] = local_res18[0] * local_res20[0];
        pfVar3[0x16] = local_res20[0];
        pfVar3[0x17] = local_res18[0] * local_res20[0];
        pfVar3 = pfVar3 + 0x18;
        uVar5 = *(uint *)(param_1 + 0x54);
      }
      if (3 < uVar5) {
        *pfVar3 = local_res8[0];
        pfVar3[1] = local_94[0];
        pfVar3[2] = local_98;
        pfVar3[3] = local_res18[0];
        pfVar3[4] = local_res20[0];
      }
      break;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 2);
  *(undefined2 *)(*(longlong *)(param_1 + 8) + 8) = 0;
  if (((*(char *)(param_1 + 0xc0) == '\0') ||
      (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                         (*(longlong **)(param_1 + 0x10),(ulonglong)*(ushort *)(param_2 + 0x10) << 2
                         ), uVar4 != 0)) &&
     (AkPitchShifterDSPProcess(param_2,param_1 + 0x18,uVar4,0), uVar4 != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),uVar4);
  }
  return;
}



// FUNCTION 143217be0 Init body=213 status=ok
// SIG undefined Init(void)

undefined8
CAkPitchShifterFX::Init
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(uint *)(param_1 + 0xc4) = (uint)*(byte *)(param_5 + 1);
  CAkPitchShifterFXParams::GetParams(param_4,param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 200) = *param_5;
  FUN_143217350(param_1,param_5[1]);
  *(int *)(param_1 + 0xcc) =
       (int)(longlong)(*(float *)(param_1 + 0x90) * 0.001 * (float)*(uint *)(param_1 + 200));
  uVar1 = InitPitchVoice(param_1);
  if ((int)uVar1 == 1) {
    uVar1 = InitDryDelay();
    if ((int)uVar1 == 1) {
      *(undefined2 *)(*(longlong *)(param_1 + 8) + 8) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}



// FUNCTION 143217cc0 InitDryDelay body=192 status=ok
// SIG undefined InitDryDelay(void)

undefined8 CAkPitchShifterFX::InitDryDelay(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0xcc);
  if (*(char *)(param_1 + 0x95) != '\0') {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0xc4) * 0x18);
    *(longlong *)(param_1 + 0x60) = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc4) != 0) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x60);
        puVar1 = (undefined4 *)(uVar5 * 0x18 + lVar3);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          lVar3 = *(longlong *)(param_1 + 0x60);
        }
        uVar4 = DSP::CDelayLight::Init
                          (lVar3 + uVar5 * 0x18,*(undefined8 *)(param_1 + 0x10),uVar2 >> 1);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(param_1 + 0xc4));
    }
  }
  return 1;
}



// FUNCTION 143217d80 InitPitchVoice body=1039 status=ok
// SIG undefined InitPitchVoice(void)

undefined8 CAkPitchShifterFX::InitPitchVoice(longlong param_1)

{
  undefined8 uVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_78 [26];
  
  uVar3 = *(uint *)(param_1 + 0xc0) & 0xff;
  if (uVar3 != 0) {
    uVar1 = AK::DSP::AkDelayPitchShift::Init
                      (param_1 + 0x18,*(undefined8 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x90),uVar3,*(undefined4 *)(param_1 + 200));
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    AK::DSP::AkDelayPitchShift::SetPitchFactor(param_1 + 0x18,*(undefined4 *)(param_1 + 0x80));
    if (*(int *)(param_1 + 0x70) != 0) {
      uVar1 = DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
                        (param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),
                         *(undefined1 *)(param_1 + 0xc0),1);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      DSP::ComputeBiquadCoefs
                (local_res8,local_78,local_res20,local_res10,local_res18,
                 *(int *)(param_1 + 0x70) + -1,(float)*(uint *)(param_1 + 200),
                 *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x74),
                 *(undefined4 *)(param_1 + 0x7c));
      uVar3 = *(uint *)(param_1 + 0x54);
      local_res10[0] = -local_res10[0];
      local_res18[0] = -local_res18[0];
      pfVar2 = *(float **)(param_1 + 0x48);
      if (((uVar3 & 1) != 0) || (*(char *)(param_1 + 0x58) != '\0')) {
        *pfVar2 = local_res8[0];
        pfVar2[1] = local_res8[0];
        pfVar2[2] = local_res8[0];
        pfVar2[3] = local_res8[0];
        pfVar2[4] = 0.0;
        pfVar2[5] = 0.0;
        pfVar2[6] = 0.0;
        fVar4 = local_res18[0] * local_78[0];
        fVar7 = local_res10[0] * local_res18[0];
        fVar6 = local_res10[0] * local_res8[0] + local_78[0];
        pfVar2[7] = fVar6;
        pfVar2[10] = fVar6;
        pfVar2[8] = 0.0;
        pfVar2[9] = 0.0;
        fVar5 = fVar6 * local_res10[0] + local_res20[0] + local_res18[0] * local_res8[0];
        pfVar2[0xb] = fVar5;
        pfVar2[0xd] = fVar6;
        pfVar2[0xe] = fVar5;
        pfVar2[0xc] = 0.0;
        fVar6 = local_res10[0] * local_78[0] + local_res20[0];
        pfVar2[0xf] = fVar5 * local_res10[0] + fVar7 * local_res8[0] + fVar4;
        pfVar2[0x11] = fVar6;
        pfVar2[0x10] = local_78[0];
        fVar6 = fVar6 * local_res10[0] + fVar4;
        pfVar2[0x12] = fVar6;
        fVar5 = local_res10[0] * local_res10[0];
        pfVar2[0x13] = (fVar6 + fVar4) * local_res10[0] + local_res18[0] * local_res20[0];
        pfVar2[0x15] = local_res10[0] * local_res20[0];
        fVar6 = local_res10[0] * local_res20[0] * local_res10[0];
        pfVar2[0x14] = local_res20[0];
        pfVar2[0x16] = fVar6 + local_res18[0] * local_res20[0];
        pfVar2[0x17] = ((local_res20[0] + local_res20[0]) * local_res18[0] + fVar6) * local_res10[0]
        ;
        pfVar2[0x19] = fVar5 + local_res18[0];
        pfVar2[0x18] = local_res10[0];
        pfVar2[0x1a] = (local_res18[0] + local_res18[0] + fVar5) * local_res10[0];
        pfVar2[0x1b] = (local_res18[0] * 3.0 + fVar5) * local_res10[0] * local_res10[0] +
                       local_res18[0] * local_res18[0];
        pfVar2[0x1c] = local_res18[0];
        pfVar2[0x1d] = fVar7;
        pfVar2[0x1e] = local_res18[0] * local_res18[0] + fVar7 * local_res10[0];
        pfVar2[0x1f] = ((local_res18[0] + local_res18[0]) * local_res18[0] + fVar7 * local_res10[0])
                       * local_res10[0];
        pfVar2 = pfVar2 + 0x20;
        if (*(char *)(param_1 + 0x58) != '\0') {
          return 1;
        }
        uVar3 = *(uint *)(param_1 + 0x54);
      }
      if ((uVar3 & 2) != 0) {
        pfVar2[1] = local_res8[0];
        fVar6 = local_res10[0] * local_res8[0] + local_78[0];
        pfVar2[3] = local_res8[0];
        fVar5 = local_res10[0] * local_res10[0] + local_res18[0];
        *pfVar2 = 0.0;
        pfVar2[2] = 0.0;
        pfVar2[4] = local_res8[0];
        pfVar2[5] = fVar6;
        pfVar2[6] = local_res8[0];
        pfVar2[7] = fVar6;
        pfVar2[8] = local_78[0];
        pfVar2[10] = local_78[0];
        fVar6 = local_res10[0] * local_78[0] + local_res20[0];
        pfVar2[9] = fVar6;
        pfVar2[0xb] = fVar6;
        pfVar2[0xc] = local_res20[0];
        pfVar2[0xe] = local_res20[0];
        pfVar2[0xd] = local_res10[0] * local_res20[0];
        pfVar2[0xf] = local_res10[0] * local_res20[0];
        pfVar2[0x10] = local_res10[0];
        pfVar2[0x11] = fVar5;
        pfVar2[0x12] = local_res10[0];
        pfVar2[0x13] = fVar5;
        pfVar2[0x14] = local_res18[0];
        pfVar2[0x15] = local_res10[0] * local_res18[0];
        pfVar2[0x16] = local_res18[0];
        pfVar2[0x17] = local_res10[0] * local_res18[0];
        pfVar2 = pfVar2 + 0x18;
        uVar3 = *(uint *)(param_1 + 0x54);
      }
      if (3 < uVar3) {
        *pfVar2 = local_res8[0];
        pfVar2[1] = local_78[0];
        pfVar2[2] = local_res20[0];
        pfVar2[3] = local_res10[0];
        pfVar2[4] = local_res18[0];
      }
    }
  }
  return 1;
}



// FUNCTION 143218190 Reset body=134 status=ok
// SIG undefined Reset(void)

undefined8 CAkPitchShifterFX::Reset(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    AK::DSP::AkDelayPitchShift::Reset(param_1 + 0x18);
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x50));
    }
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return 1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0x60) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xc4));
  }
  return 1;
}



// FUNCTION 143218220 ResetDryDelay body=70 status=ok
// SIG undefined ResetDryDelay(void)

void CAkPitchShifterFX::ResetDryDelay(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 0x60) != 0) && (uVar2 = 0, *(int *)(param_1 + 0xc4) != 0)) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0x60) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xc4));
  }
  return;
}



// FUNCTION 143218270 ResetPitchVoice body=60 status=ok
// SIG undefined ResetPitchVoice(void)

void CAkPitchShifterFX::ResetPitchVoice(longlong param_1)

{
  if (*(char *)(param_1 + 0xc0) != '\0') {
    AK::DSP::AkDelayPitchShift::Reset(param_1 + 0x18);
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x50));
      return;
    }
  }
  return;
}



// FUNCTION 1432182b0 Term body=122 status=ok
// SIG undefined Term(void)

undefined8 CAkPitchShifterFX::Term(undefined8 *param_1,longlong *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    AK::DSP::AkDelayPitchShift::Term(param_1 + 3,param_1[2]);
  }
  if (param_1[7] != 0) {
    if (param_1[8] != 0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
      param_1[7] = 0;
      param_1[8] = 0;
    }
  }
  TermDryDelay(param_1);
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 143218330 TermDryDelay body=112 status=ok
// SIG undefined TermDryDelay(void)

void CAkPitchShifterFX::TermDryDelay(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xc4) != 0) {
      do {
        DSP::CDelayLight::Term
                  (*(longlong *)(param_1 + 0x60) + uVar3 * 0x18,*(undefined8 *)(param_1 + 0x10));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0xc4));
      lVar1 = *(longlong *)(param_1 + 0x60);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1432183a0 FUN_1432183a0 body=43 status=ok
// SIG undefined FUN_1432183a0(void)

undefined8 * FUN_1432183a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1432183d0 Clone body=153 status=ok
// SIG undefined Clone(void)

void CAkPitchShifterFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5378;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar2 + 3) = 0x3f800000;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3f800000;
    *(undefined2 *)(puVar2 + 6) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x3f800000;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x42480000;
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    return;
  }
  return;
}



// FUNCTION 143218470 FUN_143218470 body=103 status=ok
// SIG undefined FUN_143218470(void)

void FUN_143218470(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5378;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar1 + 3) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f800000;
    *(undefined4 *)(puVar1 + 5) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x42480000;
    *(undefined2 *)(puVar1 + 6) = 0;
    return;
  }
  return;
}



// FUNCTION 1432184e0 GetParams body=26 status=ok
// SIG undefined GetParams(void)

void CAkPitchShifterFXParams::GetParams(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  param_2[2] = *(undefined8 *)(param_1 + 0x1c);
  param_2[3] = uVar1;
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  return;
}



// FUNCTION 143218500 FUN_143218500 body=388 status=ok
// SIG undefined FUN_143218500(void)

undefined4 FUN_143218500(longlong param_1,short param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      *(float *)(param_1 + 0x20) = *param_3;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)param_3;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)param_3;
      break;
    case 3:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x24) = fVar2;
      break;
    case 4:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x28) = fVar2;
      break;
    case 5:
      *(float *)(param_1 + 0x2c) = *param_3;
      break;
    case 6:
      fVar2 = *param_3;
      fVar3 = -2400.0;
      if ((-2400.0 <= fVar2) && (fVar3 = fVar2, 2400.0 <= fVar2)) {
        fVar3 = 2400.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(2.0,fVar3 * 0.00083333335);
      *(float *)(param_1 + 0x1c) = fVar2;
      break;
    case 7:
      *(int *)(param_1 + 0xc) = (int)(longlong)*param_3;
      break;
    case 8:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      *(float *)(param_1 + 0x10) = fVar3;
      break;
    case 9:
      *(float *)(param_1 + 0x14) = *param_3;
      break;
    case 10:
      *(float *)(param_1 + 0x18) = *param_3;
    }
    uVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    *(byte *)((ulonglong)uVar1 + 8 + param_1) =
         *(byte *)((ulonglong)uVar1 + 8 + param_1) | (byte)(1 << ((int)param_2 + uVar1 * -8 & 0x1f))
    ;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1432186b0 SetParamsBlock body=193 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkPitchShifterFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[1] * 0.05);
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[2] * 0.05);
  *(float *)(param_1 + 0x28) = fVar1;
  *(undefined4 *)(param_1 + 0x2c) = param_2[3];
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x11);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(2.0,*(float *)((longlong)param_2 + 0x12) * 0.00083333335);
  *(float *)(param_1 + 0x1c) = fVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined2 *)(param_1 + 8) = 0xffff;
  return 1;
}



// FUNCTION 143218780 Init body=468 status=ok
// SIG undefined Init(void)

undefined8
AK::DSP::AkDelayPitchShift::Init
          (longlong *param_1,longlong *param_2,float param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  float fVar12;
  
  uVar9 = (ulonglong)param_4;
  fVar12 = param_3 * 0.001 * (float)param_5;
  dVar11 = 0.0;
  dVar3 = (double)fVar12;
  lVar6 = (longlong)fVar12;
  if ((lVar6 != -0x8000000000000000) && (dVar11 = (double)lVar6, dVar11 != dVar3)) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uVar4 = movmskpd(0,auVar2);
    dVar3 = (double)(longlong)(lVar6 - (ulonglong)(uVar4 & 1));
  }
  uVar10 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 3) = (int)(longlong)dVar3 + 3U & 0xfffffffc;
  lVar6 = (**(code **)(*param_2 + 8))(dVar11,uVar9 * 8);
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    lVar6 = (**(code **)(*param_2 + 8))(param_2,uVar9 * 0x18);
    *param_1 = lVar6;
    if (lVar6 != 0) {
      uVar8 = uVar10;
      if (param_4 != 0) {
        do {
          puVar7 = (undefined8 *)(*param_1 + uVar8);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = 0;
            *(undefined4 *)(puVar7 + 2) = 0;
          }
          uVar9 = uVar9 - 1;
          uVar8 = uVar8 + 0x18;
        } while (uVar9 != 0);
      }
      *(uint *)((longlong)param_1 + 0x14) = param_4;
      uVar9 = uVar10;
      if (param_4 != 0) {
        do {
          *(undefined4 *)(param_1[1] + uVar9 * 4) = 0;
          lVar6 = param_1[3];
          if ((int)lVar6 != 0) {
            lVar1 = *param_1;
            puVar7 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,8);
            *(undefined8 **)(lVar1 + uVar9 * 0x18) = puVar7;
            if (puVar7 == (undefined8 *)0x0) {
              return 0x34;
            }
            *puVar7 = 0;
            *(undefined4 *)(lVar1 + 0x10 + uVar9 * 0x18) = 1;
            *(uint *)(lVar1 + 8 + uVar9 * 0x18) = (int)lVar6 + 3U & 0xfffffffc;
            *(undefined4 *)(lVar1 + 0xc + uVar9 * 0x18) = 0;
            if ((*(int *)(lVar1 + 8 + uVar9 * 0x18) != 0) &&
               (uVar8 = uVar10, *(int *)(lVar1 + 0x10 + uVar9 * 0x18) != 0)) {
              do {
                uVar5 = (**(code **)(*param_2 + 8))
                                  (param_2,(ulonglong)*(uint *)(lVar1 + 8 + uVar9 * 0x18) << 2);
                *(undefined8 *)(*(longlong *)(lVar1 + uVar9 * 0x18) + uVar8 * 8) = uVar5;
                if (*(longlong *)(*(longlong *)(lVar1 + uVar9 * 0x18) + uVar8 * 8) == 0) {
                  return 0x34;
                }
                uVar4 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar4;
              } while (uVar4 < *(uint *)(lVar1 + 0x10 + uVar9 * 0x18));
            }
          }
          uVar4 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)((longlong)param_1 + 0x14));
      }
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 143218960 ProcessChannel body=735 status=ok
// SIG undefined ProcessChannel(void)

void AK::DSP::AkDelayPitchShift::ProcessChannel
               (longlong *param_1,undefined4 *param_2,float *param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar5 = *(uint *)(param_1 + 3);
  uVar17 = (ulonglong)param_5;
  fVar1 = *(float *)(param_1 + 2);
  fVar24 = (float)(uVar5 >> 1);
  lVar12 = *param_1;
  fVar21 = *(float *)(param_1[1] + uVar17 * 4);
  fVar22 = (float)uVar5;
  uVar15 = *(uint *)(lVar12 + 0xc + uVar17 * 0x18);
  lVar7 = **(longlong **)(lVar12 + uVar17 * 0x18);
  if (param_4 != 0) {
    do {
      uVar16 = uVar5 - uVar15;
      if (param_4 < uVar5 - uVar15) {
        uVar16 = param_4;
      }
      if (uVar16 != 0) {
        uVar13 = (ulonglong)uVar16;
        do {
          fVar21 = fVar21 + fVar1;
          auVar18._0_4_ = fVar21 + fVar24;
          if (fVar22 <= fVar21) {
            fVar21 = fVar21 - fVar22;
          }
          if (fVar22 <= auVar18._0_4_) {
            auVar18._0_4_ = auVar18._0_4_ - fVar22;
          }
          if (fVar21 < 0.0) {
            fVar21 = fVar21 + fVar22;
          }
          if (auVar18._0_4_ < 0.0) {
            auVar18._0_4_ = auVar18._0_4_ + fVar22;
          }
          fVar23 = (float)uVar15 - fVar21;
          iVar10 = (int)fVar23;
          uVar8 = uVar15;
          fVar19 = fVar23;
          if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar23)) {
            auVar20._4_4_ = fVar23;
            auVar20._0_4_ = fVar23;
            auVar20._8_8_ = 0;
            uVar8 = movmskps(uVar15,auVar20);
            uVar8 = uVar8 & 1;
            fVar19 = (float)(int)(iVar10 - uVar8);
          }
          auVar18._0_4_ = (float)uVar15 - auVar18._0_4_;
          iVar14 = (int)fVar19;
          iVar10 = (int)auVar18._0_4_;
          if ((iVar10 != -0x80000000) && ((float)iVar10 != auVar18._0_4_)) {
            auVar18._4_4_ = auVar18._0_4_;
            auVar18._8_8_ = 0;
            uVar8 = movmskps(uVar8,auVar18);
            auVar18._0_4_ = (float)(int)(iVar10 - (uVar8 & 1));
          }
          fVar23 = fVar23 - fVar19;
          iVar9 = (int)auVar18._0_4_;
          iVar10 = iVar14 - uVar5;
          if (iVar14 < (int)uVar5) {
            iVar10 = iVar14;
          }
          iVar14 = iVar9 - uVar5;
          if (iVar9 < (int)uVar5) {
            iVar14 = iVar9;
          }
          auVar18._0_4_ = ABS(fVar21 - fVar24) * (1.0 / fVar24);
          iVar9 = iVar10 + uVar5;
          if (-1 < iVar10) {
            iVar9 = iVar10;
          }
          iVar10 = iVar14 + uVar5;
          if (-1 < iVar14) {
            iVar10 = iVar14;
          }
          iVar14 = 0;
          if (iVar9 + 1 < (int)uVar5) {
            iVar14 = iVar9 + 1;
          }
          uVar11 = (ulonglong)uVar15;
          fVar19 = *(float *)(lVar7 + (longlong)iVar14 * 4);
          fVar2 = *(float *)(lVar7 + (longlong)iVar9 * 4);
          iVar14 = 0;
          if (iVar10 + 1 < (int)uVar5) {
            iVar14 = iVar10 + 1;
          }
          uVar15 = uVar15 + 1;
          fVar3 = *(float *)(lVar7 + (longlong)iVar14 * 4);
          fVar4 = *(float *)(lVar7 + (longlong)iVar10 * 4);
          uVar6 = *param_2;
          param_2 = param_2 + 1;
          *(undefined4 *)(lVar7 + uVar11 * 4) = uVar6;
          *param_3 = (fVar23 * fVar19 + (1.0 - fVar23) * fVar2) * (1.0 - auVar18._0_4_) +
                     (fVar23 * fVar3 + (1.0 - fVar23) * fVar4) * auVar18._0_4_;
          param_3 = param_3 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar8 = 0;
      if (uVar15 != uVar5) {
        uVar8 = uVar15;
      }
      uVar15 = uVar8;
      param_4 = param_4 - uVar16;
    } while (param_4 != 0);
    lVar12 = *param_1;
  }
  *(uint *)(lVar12 + 0xc + uVar17 * 0x18) = uVar15;
  *(float *)(param_1[1] + uVar17 * 4) = fVar21;
  return;
}



// FUNCTION 143218c40 Reset body=154 status=ok
// SIG undefined Reset(void)

void AK::DSP::AkDelayPitchShift::Reset(longlong *param_1)

{
  longlong *plVar1;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  
  if ((*param_1 != 0) && (uVar3 = 0, *(int *)((longlong)param_1 + 0x14) != 0)) {
    do {
      plVar1 = (longlong *)(*param_1 + (ulonglong)uVar3 * 0x18);
      if ((*(int *)(*param_1 + 8 + (ulonglong)uVar3 * 0x18) != 0) &&
         (uVar2 = 0, (int)plVar1[2] != 0)) {
        do {
          _Dst = *(void **)(*plVar1 + (ulonglong)uVar2 * 8);
          if (_Dst != (void *)0x0) {
            ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)((int)plVar1[1] << 2));
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(plVar1 + 2));
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0x14));
  }
  return;
}



// FUNCTION 143218ce0 SetPitchFactor body=67 status=ok
// SIG undefined SetPitchFactor(void)

void AK::DSP::AkDelayPitchShift::SetPitchFactor(longlong param_1,float param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (param_2 != 1.0) {
    *(float *)(param_1 + 0x10) = 1.0 - param_2;
    return;
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      uVar1 = (ulonglong)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar1 * 4) = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  return;
}



// FUNCTION 143218d30 Term body=256 status=ok
// SIG undefined Term(void)

void AK::DSP::AkDelayPitchShift::Term(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      do {
        lVar1 = *param_1;
        lVar3 = *(longlong *)(lVar1 + uVar4 * 0x18);
        if (lVar3 != 0) {
          uVar6 = 0;
          if (*(int *)(lVar1 + 0x10 + uVar4 * 0x18) != 0) {
            do {
              lVar3 = *(longlong *)(lVar1 + uVar4 * 0x18);
              lVar2 = *(longlong *)(uVar6 * 8 + lVar3);
              if (lVar2 != 0) {
                (**(code **)(*param_2 + 0x10))(param_2,lVar2);
                *(undefined8 *)(uVar6 * 8 + *(longlong *)(lVar1 + uVar4 * 0x18)) = 0;
                lVar3 = *(longlong *)(lVar1 + uVar4 * 0x18);
              }
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar1 + 0x10 + uVar4 * 0x18));
          }
          (**(code **)(*param_2 + 0x10))(param_2,lVar3);
        }
        uVar5 = (int)uVar4 + 1;
        *(undefined4 *)(lVar1 + 8 + uVar4 * 0x18) = 0;
        *(undefined4 *)(lVar1 + 0x10 + uVar4 * 0x18) = 0;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x14));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 143218e30 AkPitchShifterDSPProcess body=1936 status=ok
// SIG undefined AkPitchShifterDSPProcess(void)

void AkPitchShifterDSPProcess(longlong *param_1,longlong param_2,float *param_3)

{
  float *pfVar1;
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
  bool bVar31;
  bool bVar32;
  ushort uVar33;
  ushort uVar34;
  float *pfVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  float *pfVar40;
  uint uVar41;
  int iVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
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
  uint local_128;
  uint local_124;
  uint local_120;
  float fStack_10c;
  float fStack_fc;
  float fStack_ec;
  float fStack_dc;
  
  uVar37 = *(uint *)(param_2 + 0xb4);
  if (*(int *)((longlong)param_1 + 0xc) != 0x11) {
    *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
    uVar34 = *(ushort *)((longlong)param_1 + 0x12);
    goto LAB_143218f37;
  }
  uVar41 = *(uint *)(param_2 + 0x50);
  if ((uVar41 == 0) && (uVar34 = 0, *(short *)((longlong)param_1 + 0x12) == 0)) goto LAB_143218f37;
  if ((uVar41 == 0xffffffff) || (*(short *)((longlong)param_1 + 0x12) != 0)) {
    *(uint *)(param_2 + 0x50) = uVar37;
    uVar41 = uVar37;
LAB_143218e91:
    *(uint *)(param_2 + 0x54) = uVar37;
  }
  else if (*(uint *)(param_2 + 0x54) < uVar37) {
    uVar41 = (uVar41 - *(uint *)(param_2 + 0x54)) + uVar37;
    *(uint *)(param_2 + 0x50) = uVar41;
    goto LAB_143218e91;
  }
  uVar36 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar37 = uVar41;
  if (uVar36 <= uVar41) {
    uVar37 = uVar36;
  }
  *(uint *)(param_2 + 0x50) = uVar41 - uVar37;
  uVar33 = *(ushort *)(param_1 + 2);
  uVar46 = (ulonglong)*(byte *)(param_1 + 1);
  iVar42 = (uint)uVar33 - (uint)*(ushort *)((longlong)param_1 + 0x12);
  uVar34 = *(ushort *)((longlong)param_1 + 0x12);
  if (iVar42 != 0) {
    if (*(byte *)(param_1 + 1) != 0) {
      lVar45 = 0;
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 +
                           ((ulonglong)*(ushort *)(param_1 + 2) * lVar45 +
                           (ulonglong)*(ushort *)((longlong)param_1 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar42 * 4));
        lVar45 = lVar45 + 1;
        uVar46 = uVar46 - 1;
      } while (uVar46 != 0);
      uVar33 = *(ushort *)(param_1 + 2);
    }
    *(ushort *)((longlong)param_1 + 0x12) = uVar33;
    uVar34 = uVar33;
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x2d;
  }
LAB_143218f37:
  if (0x1f < uVar34) {
    uVar37 = *(uint *)(param_2 + 0xa8);
    uVar46 = (ulonglong)uVar34;
    uVar41 = *(uint *)(param_1 + 1);
    if ((((char)uVar37 == (char)uVar41) && (((uVar37 ^ uVar41) & 0xf00) == 0)) &&
       (uVar37 >> 0xc == uVar41 >> 0xc)) {
      bVar31 = true;
    }
    else {
      bVar31 = false;
    }
    uVar36 = uVar41 >> 0xc;
    uVar43 = 0;
    uVar37 = 0;
    uVar49 = 0;
    local_120 = 0;
    local_128 = 0;
    local_124 = 0;
    if ((char)uVar41 != '\0') {
      uVar41 = 1;
      do {
        if (((uVar41 & uVar36) != 0) || (uVar36 == 0)) {
          if (((uVar41 & 8) == 0) || (uVar36 == 0)) {
            local_120 = (int)uVar43 + 1;
            pfVar35 = (float *)(*param_1 + *(ushort *)(param_1 + 2) * uVar43 * 4);
          }
          else {
            pfVar35 = (float *)AkAudioBuffer::GetLFE(param_1);
          }
          if (((char)*(uint *)(param_2 + 0xa8) == '\0') ||
             (((uVar41 & *(uint *)(param_2 + 0xa8) >> 0xc) == 0 && (!bVar31)))) {
            bVar32 = false;
          }
          else {
            bVar32 = true;
            AK::DSP::AkDelayPitchShift::ProcessChannel(param_2,pfVar35,param_3,(uint)uVar34,uVar49);
            if (*(int *)(param_2 + 0x58) != 0) {
              uVar43 = uVar46;
              if ((uVar34 & 3) != 0) {
                iVar42 = 4 - (uVar34 & 3);
                pfVar40 = param_3 + uVar46;
                uVar43 = (ulonglong)(iVar42 + (uint)uVar34);
                do {
                  *pfVar40 = 0.0;
                  pfVar40 = pfVar40 + 1;
                  iVar42 = iVar42 + -1;
                } while (iVar42 != 0);
              }
              uVar37 = *(uint *)(param_2 + 0x3c);
              uVar47 = uVar49 >> 2;
              uVar48 = uVar49 & 3;
              if ((uVar37 - 1 == uVar49) && ((uVar37 & 1) != 0)) {
                uVar38 = uVar47;
                if ((uVar37 != 1) && (1 < uVar48)) {
                  uVar38 = uVar47 + 1;
                }
                lVar45 = *(longlong *)(param_2 + 0x20);
                uVar39 = (ulonglong)(uVar38 << 4);
                fVar50 = *(float *)(lVar45 + uVar39 * 4);
                fVar61 = *(float *)(lVar45 + 4 + uVar39 * 4);
                fStack_ec = *(float *)(lVar45 + 8 + uVar39 * 4);
                fStack_dc = *(float *)(lVar45 + 0xc + uVar39 * 4);
              }
              else {
                lVar44 = (ulonglong)(uVar47 << 4) + (ulonglong)uVar48;
                lVar45 = *(longlong *)(param_2 + 0x20);
                fVar50 = *(float *)(lVar45 + lVar44 * 4);
                fVar61 = *(float *)(lVar45 + 0x10 + lVar44 * 4);
                fStack_ec = *(float *)(lVar45 + 0x20 + lVar44 * 4);
                fStack_dc = *(float *)(lVar45 + 0x30 + lVar44 * 4);
              }
              pfVar40 = *(float **)(param_2 + 0x30);
              fVar56 = *pfVar40;
              fVar60 = pfVar40[1];
              fVar55 = pfVar40[2];
              fVar59 = pfVar40[3];
              fVar54 = pfVar40[4];
              fVar2 = pfVar40[5];
              fVar3 = pfVar40[6];
              fVar4 = pfVar40[7];
              fVar5 = pfVar40[8];
              fVar6 = pfVar40[9];
              fVar7 = pfVar40[10];
              fVar8 = pfVar40[0xb];
              fVar9 = pfVar40[0xc];
              fVar10 = pfVar40[0xd];
              fVar11 = pfVar40[0xe];
              fVar12 = pfVar40[0xf];
              fVar13 = pfVar40[0x10];
              fVar14 = pfVar40[0x11];
              fVar15 = pfVar40[0x12];
              fVar16 = pfVar40[0x13];
              fVar17 = pfVar40[0x14];
              fVar18 = pfVar40[0x15];
              fVar19 = pfVar40[0x16];
              fVar20 = pfVar40[0x17];
              fVar21 = pfVar40[0x18];
              fVar22 = pfVar40[0x19];
              fVar23 = pfVar40[0x1a];
              fVar24 = pfVar40[0x1b];
              fVar25 = pfVar40[0x1c];
              fVar26 = pfVar40[0x1d];
              fVar27 = pfVar40[0x1e];
              fVar28 = pfVar40[0x1f];
              pfVar40 = param_3;
              fStack_10c = fVar50;
              fStack_fc = fVar61;
              if (param_3 < param_3 + uVar43) {
                do {
                  fVar29 = *pfVar40;
                  fVar30 = pfVar40[1];
                  fStack_fc = pfVar40[2];
                  fStack_10c = pfVar40[3];
                  fVar51 = fVar21 * fStack_ec;
                  fVar52 = fVar22 * fStack_ec;
                  fVar53 = fVar25 * fStack_dc;
                  fVar57 = fVar26 * fStack_dc;
                  fVar58 = fVar28 * fStack_dc;
                  fStack_dc = fVar30 * fVar7 +
                              fVar3 * fStack_fc +
                              fStack_fc * fVar55 + fVar15 * fVar50 + fVar19 * fVar61 +
                              fVar23 * fStack_ec + fVar27 * fStack_dc + fVar29 * fVar11;
                  fStack_ec = fVar30 * fVar8 +
                              fVar4 * fStack_fc +
                              fStack_10c * fVar59 + fVar16 * fVar50 + fVar20 * fVar61 +
                              fVar24 * fStack_ec + fVar58 + fVar29 * fVar12;
                  *pfVar40 = fVar30 * fVar5 +
                             fVar54 * fStack_fc +
                             fVar29 * fVar56 + fVar13 * fVar50 + fVar17 * fVar61 + fVar51 + fVar53 +
                             fVar29 * fVar9;
                  pfVar40[1] = fVar30 * fVar6 +
                               fVar2 * fStack_fc +
                               fVar30 * fVar60 + fVar14 * fVar50 + fVar18 * fVar61 + fVar52 + fVar57
                               + fVar29 * fVar10;
                  pfVar40[2] = fStack_dc;
                  pfVar40[3] = fStack_ec;
                  pfVar40 = pfVar40 + 4;
                  fVar61 = fStack_fc;
                  fVar50 = fStack_10c;
                } while (pfVar40 < param_3 + uVar43);
                uVar37 = *(uint *)(param_2 + 0x3c);
              }
              if ((uVar37 - 1 == uVar49) && ((uVar37 & 1) != 0)) {
                if ((uVar37 != 1) && (1 < uVar48)) {
                  uVar47 = uVar47 + 1;
                }
                uVar43 = (ulonglong)(uVar47 << 4);
                uVar49 = uVar49 + 1;
                *(float *)(*(longlong *)(param_2 + 0x20) + uVar43 * 4) = fStack_10c;
                *(float *)(*(longlong *)(param_2 + 0x20) + 4 + uVar43 * 4) = fStack_fc;
                *(float *)(*(longlong *)(param_2 + 0x20) + 8 + uVar43 * 4) = fStack_ec;
                *(float *)(*(longlong *)(param_2 + 0x20) + 0xc + uVar43 * 4) = fStack_dc;
                goto LAB_143219321;
              }
              lVar45 = (ulonglong)(uVar47 << 4) + (ulonglong)uVar48;
              *(float *)(*(longlong *)(param_2 + 0x20) + lVar45 * 4) = fStack_10c;
              *(float *)(*(longlong *)(param_2 + 0x20) + 0x10 + lVar45 * 4) = fStack_fc;
              *(float *)(*(longlong *)(param_2 + 0x20) + 0x20 + lVar45 * 4) = fStack_ec;
              *(float *)(*(longlong *)(param_2 + 0x20) + 0x30 + lVar45 * 4) = fStack_dc;
            }
            uVar49 = uVar49 + 1;
          }
LAB_143219321:
          if (*(char *)(param_2 + 0x7d) != '\0') {
            DSP::CDelayLight::ProcessBuffer
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)local_128 * 0x18,pfVar35,uVar46);
            local_128 = local_128 + 1;
          }
          fVar50 = *(float *)(param_2 + 0x70);
          fVar61 = *(float *)(param_2 + 0x98);
          if (bVar32) {
            DSP::Mix2Interp(pfVar35,param_3,fVar61,fVar50,*(undefined4 *)(param_2 + 0x9c),
                            *(undefined4 *)(param_2 + 0x74),uVar34);
          }
          else if (fVar50 == fVar61) {
            AK::DSP::ApplyGain(pfVar35,fVar61,uVar46);
          }
          else {
            pfVar40 = pfVar35 + uVar46;
            if (3 < uVar34) {
              pfVar1 = pfVar35 + (uVar34 & 0xfffffffc);
              fVar59 = (fVar50 - fVar61) / (float)(uVar34 & 0xfffffffc);
              fVar54 = fVar59 * 4.0;
              fVar55 = fVar59 + fVar59 + fVar61;
              fVar56 = fVar61;
              fVar60 = fVar59 + fVar61;
              fVar59 = fVar59 + fVar55;
              for (; pfVar35 < pfVar1; pfVar35 = pfVar35 + 4) {
                *pfVar35 = *pfVar35 * fVar56;
                pfVar35[1] = pfVar35[1] * fVar60;
                pfVar35[2] = pfVar35[2] * fVar55;
                pfVar35[3] = pfVar35[3] * fVar59;
                fVar56 = fVar56 + fVar54;
                fVar60 = fVar60 + fVar54;
                fVar55 = fVar55 + fVar54;
                fVar59 = fVar59 + fVar54;
              }
            }
            if (pfVar35 < pfVar40) {
              if (0xf < ((longlong)pfVar40 + (3 - (longlong)pfVar35) & 0xfffffffffffffffcU)) {
                fVar56 = (fVar50 - fVar61) / (float)uVar46;
                do {
                  *pfVar35 = fVar61 * *pfVar35;
                  fVar60 = fVar61 + fVar56 + fVar56;
                  pfVar35[1] = (fVar61 + fVar56) * pfVar35[1];
                  fVar55 = fVar60 + fVar56;
                  pfVar35[2] = fVar60 * pfVar35[2];
                  fVar61 = fVar55 + fVar56;
                  pfVar35[3] = fVar55 * pfVar35[3];
                  pfVar35 = pfVar35 + 4;
                } while (pfVar35 < pfVar40 + -3);
              }
              if (pfVar35 < pfVar40) {
                fVar56 = fVar61;
                do {
                  *pfVar35 = fVar56 * *pfVar35;
                  pfVar35 = pfVar35 + 1;
                  fVar56 = fVar56 + (fVar50 - fVar61) / (float)uVar46;
                } while (pfVar35 < pfVar40);
              }
            }
          }
          uVar43 = (ulonglong)local_120;
          uVar37 = local_124 + 1;
          local_124 = uVar37;
        }
        uVar41 = uVar41 << 1 | (uint)((int)uVar41 < 0);
      } while (uVar37 < *(byte *)(param_1 + 1));
    }
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0x78);
  }
  return;
}



// FUNCTION 1432195c0 FUN_1432195c0 body=43 status=ok
// SIG undefined FUN_1432195c0(void)

undefined8 * FUN_1432195c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 1432195f0 CreateAkStereoDelayFX body=405 status=ok
// SIG undefined CreateAkStereoDelayFX(void)

undefined8 * CreateAkStereoDelayFX(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae53b0;
    puVar2 = puVar1 + 0xb;
    puVar1[1] = 0;
    puVar1[2] = 0;
    lVar3 = 3;
    do {
      puVar2[-8] = 0;
      puVar2[-7] = 0;
      *(undefined4 *)(puVar2 + -6) = 0;
      puVar2[-5] = 0;
      puVar2[-4] = 0;
      *(undefined4 *)(puVar2 + -3) = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      puVar2 = puVar2 + 0xc;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(puVar1 + 0x27) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x28) = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x144) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x29) = 0x3e800000;
    *(undefined8 *)((longlong)puVar1 + 0x14c) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x15c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2c) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x164) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x174) = 0;
    *(undefined4 *)(puVar1 + 0x2d) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x16c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2f) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x30) = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x184) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x31) = 0x3e800000;
    *(undefined8 *)((longlong)puVar1 + 0x18c) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x33) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x19c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x34) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x1a4) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x194) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1b4) = 0;
    *(undefined4 *)(puVar1 + 0x35) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x1ac) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)(puVar1 + 0x37) = 0xffffffff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143219790 Execute body=715 status=ok
// SIG undefined Execute(void)

void CAkStereoDelayFX::Execute(longlong param_1,longlong param_2)

{
  float *pfVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  undefined4 local_resc;
  
  pfVar1 = (float *)(param_1 + 0x138);
  CAkStereoDelayFXParams::GetParams(*(undefined8 *)(param_1 + 8),pfVar1);
  uVar7 = 0;
  if (*(char *)(param_1 + 0x174) == '\0') {
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  if (*(char *)(param_1 + 0x175) == '\0') {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  fVar10 = (float)*(uint *)(param_1 + 0x1c8) / (float)*(uint *)(param_1 + 0x1c4);
  if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
    *pfVar1 = fVar10;
  }
  if (*(float *)(param_1 + 0x144) <= fVar10 && fVar10 != *(float *)(param_1 + 0x144)) {
    *(float *)(param_1 + 0x144) = fVar10;
  }
  lVar5 = *(longlong *)(param_1 + 8);
  if (((((*(byte *)(lVar5 + 8) & 1) != 0) || ((*(byte *)(lVar5 + 8) & 2) != 0)) ||
      (bVar2 = *(byte *)(lVar5 + 9), (bVar2 & 4) != 0)) ||
     ((((bVar2 & 8) != 0 || ((bVar2 & 0x10) != 0)) ||
      (((bVar2 & 0x40) != 0 || (((bVar2 & 0x80) != 0 || ((*(byte *)(lVar5 + 10) & 1) != 0)))))))) {
    fVar10 = *pfVar1;
    if (*(char *)(param_1 + 0x174) == '\0') {
      fVar8 = fVar10;
      if (fVar10 <= *(float *)(param_1 + 0x144)) {
        fVar8 = *(float *)(param_1 + 0x144);
      }
    }
    else {
      fVar8 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x148));
      fVar8 = fVar8 * 20.0;
      if (-0.1 <= fVar8) {
        fVar8 = -0.1;
      }
      fVar8 = (-60.0 / fVar8) * *(float *)(param_1 + 0x144);
      fVar9 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x13c));
      fVar9 = fVar9 * 20.0;
      if (-0.1 <= fVar9) {
        fVar9 = -0.1;
      }
      fVar9 = (-60.0 / fVar9) * fVar10;
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
      }
    }
    if (*(char *)(param_1 + 0x175) != '\0') {
      fVar9 = ::_guard_xfg_dispatch_icall_nop
                        (*(float *)(param_1 + 0x14c) * *(float *)(param_1 + 0x140));
      fVar9 = fVar9 * 20.0;
      if (-0.1 <= fVar9) {
        fVar9 = -0.1;
      }
      fVar9 = -60.0 / fVar9;
      if (*(char *)(param_1 + 0x174) != '\0') {
        fVar9 = fVar9 + fVar9;
      }
      fVar8 = fVar8 + (fVar10 + *(float *)(param_1 + 0x144)) * fVar9;
    }
    if (60.0 <= fVar8) {
      fVar8 = 60.0;
    }
    *(int *)(param_1 + 0x1c0) = (int)(longlong)((float)*(uint *)(param_1 + 0x1c4) * fVar8);
    bVar2 = *(byte *)(lVar5 + 9);
  }
  if (((bVar2 & 0x40) != 0) || ((bVar2 & 4) != 0)) {
    local_res8 = *pfVar1;
    local_resc = *(undefined4 *)(param_1 + 0x144);
    do {
      lVar5 = param_1 + 0x18 + uVar7 * 0x60;
      AK::DSP::CStereoDelayLine::Term(lVar5,*(undefined8 *)(param_1 + 0x10));
      iVar4 = AK::DSP::CStereoDelayLine::Init
                        (lVar5,*(undefined8 *)(param_1 + 0x10),&local_res8,
                         *(undefined4 *)(param_1 + 0x1c4));
      if (iVar4 != 1) {
        return;
      }
      AK::DSP::CStereoDelayLine::Reset();
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < 3);
    lVar5 = *(longlong *)(param_1 + 8);
  }
  bVar2 = *(byte *)(lVar5 + 8);
  if (((((bVar2 & 0x20) == 0) && ((bVar2 & 0x40) == 0)) && ((bVar2 & 0x80) == 0)) &&
     ((*(byte *)(lVar5 + 9) & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x1cc) = uVar3;
  lVar5 = *(longlong *)(param_1 + 8);
  *(undefined2 *)(lVar5 + 8) = 0;
  *(undefined1 *)(lVar5 + 10) = 0;
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                    (*(longlong **)(param_1 + 0x10),(ulonglong)*(ushort *)(param_2 + 0x10) << 4);
  if (lVar5 != 0) {
    AkStereoDelayDSPProcess(param_2,param_1 + 0x18,lVar5);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar5);
  }
  return;
}



// FUNCTION 143219a60 Init body=386 status=ok
// SIG undefined Init(void)

undefined8
CAkStereoDelayFX::Init
          (longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
          undefined4 *param_5)

{
  float *pfVar1;
  ushort uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  
  if ((((uint)param_5[1] >> 0xc & 1) == 0) && (((uint)param_5[1] >> 0xc & 4) == 0)) {
    return 0x4e;
  }
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x1c4) = *param_5;
  plVar3 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  pfVar1 = (float *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x1c8) = (uint)uVar2;
  CAkStereoDelayFXParams::GetParams(*(undefined8 *)(param_1 + 8),pfVar1);
  uVar6 = 0;
  if (*(char *)(param_1 + 0x174) == '\0') {
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  if (*(char *)(param_1 + 0x175) == '\0') {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  fVar7 = (float)*(uint *)(param_1 + 0x1c8) / (float)*(uint *)(param_1 + 0x1c4);
  if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) {
    *pfVar1 = fVar7;
  }
  if (*(float *)(param_1 + 0x144) <= fVar7 && fVar7 != *(float *)(param_1 + 0x144)) {
    *(float *)(param_1 + 0x144) = fVar7;
  }
  *(undefined1 *)(param_1 + 0x1cc) = 1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)pfVar1;
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x170);
  param_5._0_4_ = *pfVar1;
  param_5._4_4_ = *(undefined4 *)(param_1 + 0x144);
  do {
    uVar4 = AK::DSP::CStereoDelayLine::Init
                      (uVar6 * 0x60 + 0x18 + param_1,param_2,&param_5,
                       *(undefined4 *)(param_1 + 0x1c4));
    if ((int)uVar4 != 1) {
      return uVar4;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 3);
  *(byte *)(*(longlong *)(param_1 + 8) + 9) = *(byte *)(*(longlong *)(param_1 + 8) + 9) & 0xfb;
  *(byte *)(*(longlong *)(param_1 + 8) + 9) = *(byte *)(*(longlong *)(param_1 + 8) + 9) & 0xbf;
  return 1;
}



// FUNCTION 143219bf0 Reset body=51 status=ok
// SIG undefined Reset(void)

undefined4 CAkStereoDelayFX::Reset(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x18;
  lVar1 = 3;
  do {
    AK::DSP::CStereoDelayLine::Reset(param_1);
    param_1 = param_1 + 0x60;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 1;
}



// FUNCTION 143219c30 Term body=111 status=ok
// SIG undefined Term(void)

undefined8 CAkStereoDelayFX::Term(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = param_1 + 3;
  lVar2 = 3;
  do {
    AK::DSP::CStereoDelayLine::Term(puVar1,param_2);
    puVar1 = puVar1 + 0xc;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 143219ca0 Clone body=205 status=ok
// SIG undefined Clone(void)

undefined8 * CAkStereoDelayFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae53f8;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f000000;
    *(undefined4 *)(puVar2 + 2) = 0x3e800000;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3e800000;
    *(undefined4 *)(puVar2 + 3) = 0x3f000000;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x3e800000;
    puVar2[4] = 0x3e800000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x447a0000;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined2 *)(puVar2 + 9) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
    puVar2[8] = 0x3f800000;
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((longlong)puVar2 + 0x34) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)((longlong)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)((longlong)puVar2 + 0x44) = uVar1;
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    *(undefined1 *)((longlong)puVar2 + 10) = 0xff;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143219d70 FUN_143219d70 body=142 status=ok
// SIG undefined FUN_143219d70(void)

undefined8 * FUN_143219d70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae53f8;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f000000;
    *(undefined4 *)(puVar1 + 2) = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3e800000;
    *(undefined4 *)(puVar1 + 3) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3e800000;
    puVar1[4] = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x447a0000;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    puVar1[8] = 0x3f800000;
    *(undefined2 *)(puVar1 + 9) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143219e00 GetParams body=32 status=ok
// SIG undefined GetParams(void)

void CAkStereoDelayFXParams::GetParams(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  param_2[2] = *(undefined8 *)(param_1 + 0x1c);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  param_2[6] = *(undefined8 *)(param_1 + 0x3c);
  param_2[7] = uVar1;
  return;
}



// FUNCTION 143219e20 FUN_143219e20 body=665 status=ok
// SIG undefined FUN_143219e20(void)

undefined8 FUN_143219e20(longlong param_1,short param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    if (*param_3 == 0.0) {
      *(undefined1 *)(param_1 + 0x49) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
    break;
  case 1:
    if (*param_3 == 0.0) {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    break;
  case 2:
    fVar2 = *param_3;
    fVar3 = -96.0;
    if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
      fVar3 = 24.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x3c) = fVar2;
    break;
  case 3:
    fVar2 = *param_3;
    fVar3 = -96.0;
    if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
      fVar3 = 24.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x40) = fVar2;
    break;
  case 4:
    fVar2 = *param_3;
    fVar3 = -100.0;
    if ((-100.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
      fVar3 = 100.0;
    }
    *(float *)(param_1 + 0x44) = fVar3;
    break;
  case 5:
    *(int *)(param_1 + 0x2c) = (int)(longlong)*param_3;
    break;
  case 6:
    fVar2 = *param_3;
    fVar3 = -24.0;
    if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
      fVar3 = 24.0;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    break;
  case 7:
    *(float *)(param_1 + 0x34) = *param_3;
    break;
  case 8:
    *(float *)(param_1 + 0x38) = *param_3;
    break;
  case 9:
    *(float *)(param_1 + 0x24) = *param_3;
    break;
  case 10:
    *(float *)(param_1 + 0xc) = *param_3;
    break;
  case 0xb:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x10) = fVar2;
    break;
  case 0xc:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x14) = fVar2;
    break;
  case 0xd:
    *(float *)(param_1 + 0x28) = *param_3;
    break;
  case 0xe:
    *(float *)(param_1 + 0x18) = *param_3;
    break;
  case 0xf:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x1c) = fVar2;
    break;
  case 0x10:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x20) = fVar2;
    break;
  default:
    return 0x1f;
  }
  uVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  *(byte *)((ulonglong)uVar1 + 8 + param_1) =
       *(byte *)((ulonglong)uVar1 + 8 + param_1) | (byte)(1 << ((int)param_2 + uVar1 * -8 & 0x1f));
  return 1;
}



// FUNCTION 14321a100 SetParamsBlock body=305 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkStereoDelayFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[2] * 0.05);
  *(float *)(param_1 + 0x10) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x14) = fVar1;
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = param_2[5];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[6] * 0.05);
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[7] * 0.05);
  *(float *)(param_1 + 0x20) = fVar1;
  *(undefined4 *)(param_1 + 0x2c) = param_2[8];
  *(undefined4 *)(param_1 + 0x30) = param_2[9];
  *(undefined4 *)(param_1 + 0x34) = param_2[10];
  *(undefined4 *)(param_1 + 0x38) = param_2[0xb];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0xc] * 0.05);
  *(float *)(param_1 + 0x3c) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0xd] * 0.05);
  *(float *)(param_1 + 0x40) = fVar1;
  *(undefined4 *)(param_1 + 0x44) = param_2[0xe];
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x3d);
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  return 1;
}



// FUNCTION 14321a240 Init body=194 status=ok
// SIG undefined Init(void)

undefined8
AK::DSP::CAkDelayLineMemory<float>::Init
          (longlong *param_1,longlong *param_2,uint param_3,int param_4,char param_5)

{
  void *_Dst;
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
  *param_1 = (longlong)_Dst;
  if (_Dst == (void *)0x0) {
LAB_14321a2e7:
    uVar1 = 0x34;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)(param_4 * 8));
    *(int *)(param_1 + 2) = param_4;
    if (param_5 != '\0') {
      param_3 = param_3 + 3 & 0xfffffffc;
    }
    *(uint *)(param_1 + 1) = param_3;
    uVar3 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    if (((int)param_1[1] != 0) && (param_4 != 0)) {
      do {
        uVar1 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 1) << 2);
        *(undefined8 *)(uVar3 * 8 + *param_1) = uVar1;
        if (*(longlong *)(uVar3 * 8 + *param_1) == 0) goto LAB_14321a2e7;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 2));
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14321a310 Init body=364 status=ok
// SIG undefined Init(void)

int AK::DSP::CStereoDelayLine::Init(longlong param_1,longlong *param_2,float *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  
  *(uint *)(param_1 + 0x58) = param_4;
  dVar10 = 0.0;
  fVar8 = (float)param_4 * *param_3;
  dVar3 = (double)fVar8;
  lVar7 = (longlong)fVar8;
  if ((lVar7 != -0x8000000000000000) && (dVar10 = (double)lVar7, dVar10 != dVar3)) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uVar4 = movmskpd(param_4,auVar2);
    dVar3 = (double)(longlong)(lVar7 - (ulonglong)(uVar4 & 1));
  }
  iVar5 = CAkDelayLineMemory<float>::Init(param_1,SUB84(dVar3,0),dVar10,1,1);
  if (iVar5 == 1) {
    fVar8 = (float)param_4 * param_3[1];
    uVar9 = 0;
    dVar3 = (double)fVar8;
    lVar7 = (longlong)fVar8;
    if ((lVar7 != -0x8000000000000000) && (uVar9 = SUB84((double)lVar7,0), (double)lVar7 != dVar3))
    {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uVar4 = movmskpd(1,auVar1);
      dVar3 = (double)(longlong)(lVar7 - (ulonglong)(uVar4 & 1));
    }
    iVar5 = CAkDelayLineMemory<float>::Init(param_1 + 0x18,uVar9,(longlong)dVar3,1,1);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined4 *)(param_1 + 0x48) = 0xaf;
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
  *(void **)(param_1 + 0x38) = _Dst;
  if (_Dst != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    uVar6 = *(longlong *)(param_1 + 0x38) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_1 + 0x30) = uVar6;
    *(ulonglong *)(param_1 + 0x40) = uVar6 + 0x40;
  }
  return iVar5;
}



// FUNCTION 14321a480 ProcessBuffer body=3902 status=ok
// SIG undefined ProcessBuffer(void)

ulonglong AK::DSP::CStereoDelayLine::ProcessBuffer
                    (undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                    longlong param_5,int *param_6,char param_7)

{
  ushort uVar1;
  uint uVar2;
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
  uint uVar13;
  ulonglong uVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  float *pfVar21;
  longlong lVar22;
  float *pfVar23;
  uint uVar24;
  float *pfVar25;
  int *piVar26;
  float *pfVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
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
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  longlong *local_res10;
  uint local_res18;
  uint local_res20;
  float local_148;
  float local_144 [3];
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  float *local_128;
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
  
  uVar1 = *(ushort *)((longlong)param_2 + 0x12);
  pfVar23 = (float *)*param_2;
  uVar14 = (ulonglong)*(ushort *)(param_2 + 2);
  uVar34 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  uVar33 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
  pfVar15 = (float *)*param_3;
  fVar58 = *(float *)(param_4 + 4);
  fVar59 = *(float *)(param_4 + 0x10);
  local_res18 = (uint)uVar1;
  uVar2 = *(uint *)(param_1 + 1);
  local_res20 = *(uint *)(param_1 + 4);
  fStack_11c = 1.0 / (float)uVar1;
  uVar28 = local_res20 - *(uint *)((longlong)param_1 + 0x24);
  uVar13 = uVar2 - *(uint *)((longlong)param_1 + 0xc);
  if (uVar13 < uVar28) {
    uVar28 = uVar13;
  }
  pfVar21 = (float *)(*(longlong *)*param_1 + uVar34 * 4);
  pfVar27 = (float *)(*(longlong *)param_1[3] + uVar33 * 4);
  pfVar25 = pfVar15 + *(ushort *)(param_3 + 2);
  pfVar17 = pfVar23 + uVar14;
  fVar52 = (*(float *)(param_5 + 4) - fVar58) * fStack_11c;
  fVar35 = fVar52 * 4.0;
  fVar36 = fVar52 + fVar58;
  fVar44 = fVar36 + fVar52;
  fVar52 = fVar44 + fVar52;
  fVar53 = (*(float *)(param_5 + 0x10) - fVar59) * fStack_11c;
  fVar37 = fVar53 * 4.0;
  fVar38 = fVar53 + fVar59;
  fVar45 = fVar38 + fVar53;
  fVar53 = fVar45 + fVar53;
  fVar42 = *(float *)(param_4 + 8);
  fVar61 = *(float *)(param_4 + 0x14);
  fVar54 = (*(float *)(param_5 + 8) - fVar42) * fStack_11c;
  fVar39 = fVar54 * 4.0;
  fVar40 = fVar54 + fVar42;
  fVar46 = fVar40 + fVar54;
  fVar54 = fVar46 + fVar54;
  fStack_11c = (*(float *)(param_5 + 0x14) - fVar61) * fStack_11c;
  local_f8 = fStack_11c * 4.0;
  fVar41 = fStack_11c + fVar61;
  fStack_120 = fVar41 + fStack_11c;
  fStack_11c = fStack_120 + fStack_11c;
  fVar60 = fVar58;
  fVar65 = fVar36;
  fVar55 = fVar44;
  fVar56 = fVar52;
  fVar62 = fStack_120;
  fVar63 = fStack_11c;
  fVar64 = fVar59;
  fVar66 = fVar38;
  fVar67 = fVar45;
  fVar68 = fVar53;
  fVar69 = fVar42;
  fVar70 = fVar40;
  fVar71 = fVar46;
  fVar72 = fVar54;
  fVar73 = fVar61;
  fVar74 = fVar41;
  fVar75 = fStack_120;
  fVar57 = fStack_11c;
  uVar13 = local_res18;
  if (uVar1 == 0) {
    piVar31 = (int *)0x0;
  }
  else {
    do {
      if (uVar13 < uVar28) {
        uVar28 = uVar13;
      }
      uVar14 = (ulonglong)(uVar28 >> 2);
      fVar50 = fVar58;
      fVar51 = fVar36;
      fVar43 = fVar44;
      fVar47 = fVar52;
      if (uVar28 >> 2 != 0) {
        do {
          fVar48 = *pfVar27;
          fVar49 = pfVar27[1];
          fVar3 = pfVar27[2];
          fVar4 = pfVar27[3];
          fVar58 = fVar60 + fVar35;
          fVar36 = fVar65 + fVar35;
          fVar44 = fVar55 + fVar35;
          fVar52 = fVar56 + fVar35;
          fVar60 = *pfVar23;
          fVar65 = pfVar23[1];
          fVar55 = pfVar23[2];
          fVar56 = pfVar23[3];
          fVar59 = fVar59 + fVar37;
          fVar38 = fVar38 + fVar37;
          fVar45 = fVar45 + fVar37;
          fVar53 = fVar53 + fVar37;
          fVar5 = *pfVar21;
          fVar6 = pfVar21[1];
          fVar7 = pfVar21[2];
          fVar8 = pfVar21[3];
          fVar9 = *pfVar17;
          fVar10 = pfVar17[1];
          fVar11 = pfVar17[2];
          fVar12 = pfVar17[3];
          pfVar21 = pfVar21 + 4;
          fVar61 = fVar61 + local_f8;
          fVar41 = fVar41 + local_f8;
          fVar62 = fVar62 + local_f8;
          fVar63 = fVar63 + local_f8;
          *pfVar15 = fVar5;
          pfVar15[1] = fVar6;
          pfVar15[2] = fVar7;
          pfVar15[3] = fVar8;
          pfVar27 = pfVar27 + 4;
          *pfVar25 = fVar48;
          pfVar25[1] = fVar49;
          pfVar25[2] = fVar3;
          pfVar25[3] = fVar4;
          pfVar15 = pfVar15 + 4;
          pfVar25 = pfVar25 + 4;
          fVar42 = fVar39 + fVar42;
          fVar40 = fVar39 + fVar40;
          fVar46 = fVar39 + fVar46;
          fVar54 = fVar39 + fVar54;
          *pfVar23 = fVar48 * fVar73 + fVar60 + fVar5 * fVar50;
          pfVar23[1] = fVar49 * fVar74 + fVar65 + fVar6 * fVar51;
          pfVar23[2] = fVar3 * fVar75 + fVar55 + fVar7 * fVar43;
          pfVar23[3] = fVar4 * fVar57 + fVar56 + fVar8 * fVar47;
          pfVar23 = pfVar23 + 4;
          *pfVar17 = fVar5 * fVar69 + fVar9 + fVar48 * fVar64;
          pfVar17[1] = fVar6 * fVar70 + fVar10 + fVar49 * fVar66;
          pfVar17[2] = fVar7 * fVar71 + fVar11 + fVar3 * fVar67;
          pfVar17[3] = fVar8 * fVar72 + fVar12 + fVar4 * fVar68;
          pfVar17 = pfVar17 + 4;
          uVar14 = uVar14 - 1;
          fVar50 = fVar58;
          fVar51 = fVar36;
          fVar43 = fVar44;
          fVar47 = fVar52;
          fVar60 = fVar58;
          fVar65 = fVar36;
          fVar55 = fVar44;
          fVar56 = fVar52;
          fVar64 = fVar59;
          fVar66 = fVar38;
          fVar67 = fVar45;
          fVar68 = fVar53;
          fVar69 = fVar42;
          fVar70 = fVar40;
          fVar71 = fVar46;
          fVar72 = fVar54;
          fVar73 = fVar61;
          fVar74 = fVar41;
          fVar75 = fVar62;
          fVar57 = fVar63;
        } while (uVar14 != 0);
      }
      uVar30 = uVar28 + (int)uVar34;
      uVar32 = uVar28 + (int)uVar33;
      if (uVar30 == uVar2) {
        pfVar21 = *(float **)*param_1;
      }
      uVar34 = 0;
      if (uVar30 != uVar2) {
        uVar34 = (ulonglong)uVar30;
      }
      if (uVar32 == local_res20) {
        pfVar27 = *(float **)param_1[3];
      }
      uVar30 = 0;
      if (uVar32 != local_res20) {
        uVar30 = uVar32;
      }
      uVar33 = (ulonglong)uVar30;
      uVar13 = uVar13 - uVar28;
      uVar32 = uVar2 - (int)uVar34;
      uVar28 = local_res20 - uVar30;
      if (uVar32 < local_res20 - uVar30) {
        uVar28 = uVar32;
      }
    } while (uVar13 != 0);
    piVar31 = (int *)(ulonglong)local_res18;
    pfVar23 = (float *)*param_2;
    uVar14 = (ulonglong)*(ushort *)(param_2 + 2);
  }
  uVar28 = (uint)piVar31;
  local_128 = pfVar23 + uVar14;
  local_res10 = param_2;
  local_138 = pfVar23;
  fStack_f4 = local_f8;
  fStack_f0 = local_f8;
  fStack_ec = local_f8;
  if (*param_6 == 0) goto LAB_14321b280;
  if (param_7 != '\0') {
    param_5._0_4_ = local_f8;
    ::DSP::ComputeBiquadCoefs
              (&local_res10,local_144,&local_148,&param_5,&param_6,*param_6 + -1,
               (float)*(uint *)(param_1 + 0xb),param_6[2],param_6[1],param_6[3]);
    uVar13 = *(uint *)((longlong)param_1 + 0x4c);
    param_5._0_4_ = -(float)param_5;
    fVar58 = -param_6._0_4_;
    pfVar15 = (float *)param_1[8];
    if (((uVar13 & 1) != 0) || (*(char *)(param_1 + 10) != '\0')) {
      *pfVar15 = local_res10._0_4_;
      pfVar15[1] = local_res10._0_4_;
      pfVar15[2] = local_res10._0_4_;
      pfVar15[3] = local_res10._0_4_;
      pfVar15[4] = 0.0;
      pfVar15[5] = 0.0;
      pfVar15[6] = 0.0;
      fVar61 = fVar58 * local_144[0];
      fVar65 = (float)param_5 * fVar58;
      fVar59 = (float)param_5 * local_res10._0_4_ + local_144[0];
      fVar60 = (float)param_5 * (float)param_5;
      pfVar15[7] = fVar59;
      pfVar15[10] = fVar59;
      pfVar15[8] = 0.0;
      pfVar15[9] = 0.0;
      fVar42 = fVar59 * (float)param_5 + local_148 + fVar58 * local_res10._0_4_;
      pfVar15[0xb] = fVar42;
      pfVar15[0xe] = fVar42;
      pfVar15[0xd] = fVar59;
      pfVar15[0xc] = 0.0;
      fVar59 = (float)param_5 * local_144[0] + local_148;
      pfVar15[0xf] = fVar42 * (float)param_5 + fVar65 * local_res10._0_4_ + fVar61;
      pfVar15[0x11] = fVar59;
      pfVar15[0x10] = local_144[0];
      fVar59 = fVar59 * (float)param_5 + fVar61;
      pfVar15[0x12] = fVar59;
      pfVar15[0x13] = (fVar59 + fVar61) * (float)param_5 + fVar58 * local_148;
      pfVar15[0x15] = (float)param_5 * local_148;
      fVar59 = (float)param_5 * local_148 * (float)param_5;
      pfVar15[0x14] = local_148;
      pfVar15[0x16] = fVar59 + fVar58 * local_148;
      pfVar15[0x17] = ((local_148 + local_148) * fVar58 + fVar59) * (float)param_5;
      pfVar15[0x19] = fVar60 + fVar58;
      pfVar15[0x18] = (float)param_5;
      pfVar15[0x1a] = (fVar58 + fVar58 + fVar60) * (float)param_5;
      pfVar15[0x1b] = (fVar58 * 3.0 + fVar60) * (float)param_5 * (float)param_5 + fVar58 * fVar58;
      pfVar15[0x1c] = fVar58;
      pfVar15[0x1d] = fVar65;
      pfVar15[0x1e] = fVar65 * (float)param_5 + fVar58 * fVar58;
      pfVar15[0x1f] = ((fVar58 + fVar58) * fVar58 + fVar65 * (float)param_5) * (float)param_5;
      pfVar15 = pfVar15 + 0x20;
      if (*(char *)(param_1 + 10) != '\0') goto LAB_14321abc4;
      uVar13 = *(uint *)((longlong)param_1 + 0x4c);
    }
    if ((uVar13 & 2) != 0) {
      pfVar15[1] = local_res10._0_4_;
      fVar59 = (float)param_5 * local_res10._0_4_ + local_144[0];
      pfVar15[3] = local_res10._0_4_;
      fVar42 = (float)param_5 * (float)param_5 + fVar58;
      *pfVar15 = 0.0;
      pfVar15[2] = 0.0;
      pfVar15[4] = local_res10._0_4_;
      pfVar15[5] = fVar59;
      pfVar15[6] = local_res10._0_4_;
      pfVar15[7] = fVar59;
      pfVar15[8] = local_144[0];
      pfVar15[10] = local_144[0];
      fVar59 = (float)param_5 * local_144[0] + local_148;
      pfVar15[9] = fVar59;
      pfVar15[0xb] = fVar59;
      pfVar15[0xc] = local_148;
      pfVar15[0xe] = local_148;
      pfVar15[0xd] = (float)param_5 * local_148;
      pfVar15[0xf] = (float)param_5 * local_148;
      pfVar15[0x10] = (float)param_5;
      pfVar15[0x11] = fVar42;
      pfVar15[0x12] = (float)param_5;
      pfVar15[0x13] = fVar42;
      pfVar15[0x14] = fVar58;
      pfVar15[0x15] = fVar58 * (float)param_5;
      pfVar15[0x16] = fVar58;
      pfVar15[0x17] = fVar58 * (float)param_5;
      pfVar15 = pfVar15 + 0x18;
      uVar13 = *(uint *)((longlong)param_1 + 0x4c);
    }
    if (3 < uVar13) {
      *pfVar15 = local_res10._0_4_;
      pfVar15[1] = local_144[0];
      pfVar15[2] = local_148;
      pfVar15[3] = (float)param_5;
      pfVar15[4] = fVar58;
    }
  }
LAB_14321abc4:
  uVar1 = *(ushort *)(param_2 + 2);
  uVar14 = (ulonglong)uVar1;
  piVar26 = piVar31;
  uVar13 = uVar28;
  if (((ulonglong)piVar31 & 3) != 0) {
    iVar18 = 4 - (uVar28 & 3);
    uVar13 = iVar18 + uVar28;
    piVar26 = (int *)(ulonglong)uVar13;
    pfVar15 = pfVar23 + (longlong)piVar31;
    do {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar13);
  pfVar15 = (float *)param_1[6];
  uVar30 = *(uint *)((longlong)param_1 + 0x4c);
  pfVar21 = pfVar23;
  if (*(char *)(param_1 + 10) == '\0') {
    if (3 < uVar30) {
      param_5._4_4_ = 0;
      pfVar27 = pfVar15 + 8;
      uVar34 = (ulonglong)(uVar30 >> 2);
      do {
        fVar65 = pfVar27[-4];
        fVar55 = pfVar27[-3];
        fVar56 = pfVar27[-2];
        fVar62 = pfVar27[-1];
        fVar63 = *pfVar15;
        fVar64 = pfVar15[1];
        fVar66 = pfVar15[2];
        fVar67 = pfVar15[3];
        fVar68 = *pfVar27;
        fVar69 = pfVar27[1];
        fVar70 = pfVar27[2];
        fVar71 = pfVar27[3];
        fVar72 = pfVar27[4];
        fVar73 = pfVar27[5];
        fVar74 = pfVar27[6];
        fVar75 = pfVar27[7];
        lVar19 = (ulonglong)((*(uint *)((longlong)param_1 + 0x4c) >> 1 & 1) * 0x18) +
                 (ulonglong)((*(uint *)((longlong)param_1 + 0x4c) & 1) << 5);
        lVar22 = param_1[8];
        fVar58 = *(float *)(lVar22 + lVar19 * 4);
        fVar59 = *(float *)(lVar22 + 4 + lVar19 * 4);
        fVar42 = *(float *)(lVar22 + 8 + lVar19 * 4);
        fVar61 = *(float *)(lVar22 + 0xc + lVar19 * 4);
        fVar60 = *(float *)(lVar22 + 0x10 + lVar19 * 4);
        if (pfVar21 < pfVar21 + (longlong)piVar26) {
          uVar33 = (ulonglong)((uint)uVar1 + (uint)uVar1);
          pfVar23 = pfVar21 + ((uint)uVar1 + (uint)uVar1);
          lVar22 = ((uint)uVar1 + (uint)uVar1 * 2) - uVar33;
          fVar57 = fVar63;
          fVar35 = fVar64;
          fVar36 = fVar66;
          fVar37 = fVar67;
          local_f8 = fVar65;
          fStack_f4 = fVar55;
          fStack_f0 = fVar56;
          fStack_ec = fVar62;
          do {
            pfVar25 = pfVar23 + lVar22;
            fVar38 = *pfVar25;
            fVar39 = pfVar25[1];
            fVar62 = pfVar25[2];
            fVar67 = pfVar25[3];
            pfVar25 = pfVar23 + (uVar14 - uVar33);
            fVar40 = *pfVar25;
            fVar41 = pfVar25[1];
            fVar55 = pfVar25[2];
            fVar64 = pfVar25[3];
            pfVar25 = pfVar23 + -uVar33;
            fVar46 = *pfVar25;
            fVar54 = pfVar25[1];
            fVar65 = pfVar25[2];
            fVar63 = pfVar25[3];
            fVar44 = *pfVar23;
            fVar45 = pfVar23[1];
            fVar56 = pfVar23[2];
            fVar66 = pfVar23[3];
            fVar52 = fVar46 * fVar58 + fVar59 * fVar57 + fVar42 * local_f8 + fVar61 * fVar68 +
                     fVar60 * fVar72;
            fVar53 = fVar40 * fVar58 + fVar59 * fVar35 + fVar42 * fStack_f4 + fVar61 * fVar69 +
                     fVar60 * fVar73;
            fVar50 = fVar44 * fVar58 + fVar59 * fVar36 + fVar42 * fStack_f0 + fVar61 * fVar70 +
                     fVar60 * fVar74;
            fVar51 = fVar38 * fVar58 + fVar59 * fVar37 + fVar42 * fStack_ec + fVar61 * fVar71 +
                     fVar60 * fVar75;
            fVar57 = fVar46 * fVar59 + fVar54 * fVar58 + fVar42 * fVar57 + fVar52 * fVar61 +
                     fVar60 * fVar68;
            fVar35 = fVar40 * fVar59 + fVar41 * fVar58 + fVar42 * fVar35 + fVar53 * fVar61 +
                     fVar60 * fVar69;
            fVar36 = fVar44 * fVar59 + fVar45 * fVar58 + fVar42 * fVar36 + fVar50 * fVar61 +
                     fVar60 * fVar70;
            fVar37 = fVar38 * fVar59 + fVar39 * fVar58 + fVar42 * fVar37 + fVar51 * fVar61 +
                     fVar60 * fVar71;
            fVar72 = fVar54 * fVar59 + fVar65 * fVar58 + fVar46 * fVar42 + fVar57 * fVar61 +
                     fVar52 * fVar60;
            fVar73 = fVar41 * fVar59 + fVar55 * fVar58 + fVar40 * fVar42 + fVar35 * fVar61 +
                     fVar53 * fVar60;
            fVar74 = fVar45 * fVar59 + fVar56 * fVar58 + fVar44 * fVar42 + fVar36 * fVar61 +
                     fVar50 * fVar60;
            fVar75 = fVar39 * fVar59 + fVar62 * fVar58 + fVar38 * fVar42 + fVar37 * fVar61 +
                     fVar51 * fVar60;
            fVar68 = fVar65 * fVar59 + fVar63 * fVar58 + fVar54 * fVar42 + fVar72 * fVar61 +
                     fVar57 * fVar60;
            fVar69 = fVar55 * fVar59 + fVar64 * fVar58 + fVar41 * fVar42 + fVar73 * fVar61 +
                     fVar35 * fVar60;
            fVar70 = fVar56 * fVar59 + fVar66 * fVar58 + fVar45 * fVar42 + fVar74 * fVar61 +
                     fVar36 * fVar60;
            fVar71 = fVar62 * fVar59 + fVar67 * fVar58 + fVar39 * fVar42 + fVar75 * fVar61 +
                     fVar37 * fVar60;
            pfVar25 = pfVar23 + -uVar33;
            *pfVar25 = fVar52;
            pfVar25[1] = fVar57;
            pfVar25[2] = fVar72;
            pfVar25[3] = fVar68;
            pfVar25 = pfVar23 + (uVar14 - uVar33);
            *pfVar25 = fVar53;
            pfVar25[1] = fVar35;
            pfVar25[2] = fVar73;
            pfVar25[3] = fVar69;
            *pfVar23 = fVar50;
            pfVar23[1] = fVar36;
            pfVar23[2] = fVar74;
            pfVar23[3] = fVar70;
            pfVar25 = pfVar23 + lVar22;
            *pfVar25 = fVar51;
            pfVar25[1] = fVar37;
            pfVar25[2] = fVar75;
            pfVar25[3] = fVar71;
            pfVar23 = pfVar23 + 4;
            fVar57 = fVar63;
            fVar35 = fVar64;
            fVar36 = fVar66;
            fVar37 = fVar67;
            local_f8 = fVar65;
            fStack_f4 = fVar55;
            fStack_f0 = fVar56;
            fStack_ec = fVar62;
          } while (pfVar23 + -uVar33 < pfVar21 + (longlong)piVar26);
        }
        pfVar21 = pfVar21 + (uint)uVar1 * 4;
        *pfVar15 = fVar63;
        pfVar15[1] = fVar64;
        pfVar15[2] = fVar66;
        pfVar15[3] = fVar67;
        uVar30 = uVar30 - 4;
        pfVar27[-4] = fVar65;
        pfVar27[-3] = fVar55;
        pfVar27[-2] = fVar56;
        pfVar27[-1] = fVar62;
        pfVar15 = pfVar15 + 0x10;
        *pfVar27 = fVar68;
        pfVar27[1] = fVar69;
        pfVar27[2] = fVar70;
        pfVar27[3] = fVar71;
        pfVar27[4] = fVar72;
        pfVar27[5] = fVar73;
        pfVar27[6] = fVar74;
        pfVar27[7] = fVar75;
        pfVar27 = pfVar27 + 0x10;
        uVar34 = uVar34 - 1;
        pfVar23 = local_138;
        uVar28 = local_res18;
        param_6 = piVar26;
        local_f8 = fVar65;
        fStack_f4 = fVar55;
        fStack_f0 = fVar56;
        fStack_ec = fVar62;
      } while (uVar34 != 0);
    }
    if (1 < uVar30) {
      lVar22 = param_1[8];
      fVar58 = pfVar15[8];
      fVar59 = pfVar15[9];
      fVar42 = pfVar15[0xc];
      fVar61 = pfVar15[0xd];
      uVar34 = (ulonglong)((*(uint *)((longlong)param_1 + 0x4c) & 1) << 5);
      pfVar27 = (float *)(lVar22 + 0x50 + uVar34 * 4);
      local_f8 = *pfVar27;
      fStack_f4 = pfVar27[1];
      fStack_f0 = pfVar27[2];
      fStack_ec = pfVar27[3];
      pfVar27 = (float *)(lVar22 + uVar34 * 4);
      fVar60 = *pfVar27;
      fVar65 = pfVar27[1];
      fVar55 = pfVar27[2];
      fVar56 = pfVar27[3];
      pfVar27 = (float *)(lVar22 + 0x10 + uVar34 * 4);
      fVar62 = *pfVar27;
      fVar63 = pfVar27[1];
      fVar64 = pfVar27[2];
      fVar66 = pfVar27[3];
      pfVar27 = (float *)(lVar22 + 0x20 + uVar34 * 4);
      fVar67 = *pfVar27;
      fVar68 = pfVar27[1];
      fVar69 = pfVar27[2];
      fVar70 = pfVar27[3];
      pfVar27 = (float *)(lVar22 + 0x30 + uVar34 * 4);
      fVar71 = *pfVar27;
      fVar72 = pfVar27[1];
      fVar73 = pfVar27[2];
      fVar74 = pfVar27[3];
      pfVar27 = (float *)(lVar22 + 0x40 + uVar34 * 4);
      fVar75 = *pfVar27;
      fVar57 = pfVar27[1];
      fVar35 = pfVar27[2];
      fVar36 = pfVar27[3];
      fVar37 = *pfVar15;
      fVar38 = pfVar15[1];
      fVar39 = pfVar15[4];
      fVar40 = pfVar15[5];
      for (pfVar27 = pfVar21; pfVar27 < pfVar21 + uVar13; pfVar27 = pfVar27 + 4) {
        pfVar25 = pfVar27 + uVar14;
        fVar41 = *pfVar25;
        fVar46 = pfVar25[1];
        fVar54 = pfVar25[2];
        fVar44 = pfVar25[3];
        fVar45 = *pfVar27;
        fVar52 = pfVar27[1];
        fVar53 = pfVar27[2];
        fVar50 = pfVar27[3];
        fVar51 = fVar45 * fVar62 + fVar45 * fVar60 + fVar67 * fVar37 + fVar71 * fVar39 +
                 fVar75 * fVar58 + local_f8 * fVar42;
        fVar37 = fVar45 * fVar63 + fVar52 * fVar65 + fVar68 * fVar37 + fVar72 * fVar39 +
                 fVar57 * fVar58 + fStack_f4 * fVar42;
        fVar39 = fVar41 * fVar64 + fVar41 * fVar55 + fVar69 * fVar38 + fVar73 * fVar40 +
                 fVar35 * fVar59 + fStack_f0 * fVar61;
        fVar38 = fVar41 * fVar66 + fVar46 * fVar56 + fVar70 * fVar38 + fVar74 * fVar40 +
                 fVar36 * fVar59 + fStack_ec * fVar61;
        fVar42 = fVar53 * fVar62 + fVar53 * fVar60 + fVar52 * fVar67 + fVar45 * fVar71 +
                 fVar37 * fVar75 + fVar51 * local_f8;
        fVar58 = fVar53 * fVar63 + fVar50 * fVar65 + fVar52 * fVar68 + fVar45 * fVar72 +
                 fVar37 * fVar57 + fVar51 * fStack_f4;
        fVar61 = fVar54 * fVar64 + fVar54 * fVar55 + fVar46 * fVar69 + fVar41 * fVar73 +
                 fVar38 * fVar35 + fVar39 * fStack_f0;
        fVar59 = fVar54 * fVar66 + fVar44 * fVar56 + fVar46 * fVar70 + fVar41 * fVar74 +
                 fVar38 * fVar36 + fVar39 * fStack_ec;
        *pfVar27 = fVar51;
        pfVar27[1] = fVar37;
        pfVar27[2] = fVar42;
        pfVar27[3] = fVar58;
        pfVar25 = pfVar27 + uVar14;
        *pfVar25 = fVar39;
        pfVar25[1] = fVar38;
        pfVar25[2] = fVar61;
        pfVar25[3] = fVar59;
        fVar37 = fVar50;
        fVar38 = fVar44;
        fVar39 = fVar53;
        fVar40 = fVar54;
      }
      *pfVar15 = fVar37;
      pfVar15[4] = fVar39;
      pfVar15[8] = fVar58;
      uVar30 = uVar30 - 2;
      pfVar15[0xc] = fVar42;
      pfVar15[1] = fVar38;
      pfVar15[5] = fVar40;
      pfVar15[9] = fVar59;
      pfVar15[0xd] = fVar61;
      pfVar21 = pfVar21 + ((uint)uVar1 + (uint)uVar1);
    }
  }
  if (uVar30 != 0) {
    do {
      uVar32 = *(uint *)((longlong)param_1 + 0x4c);
      uVar29 = uVar32 - uVar30;
      uVar24 = uVar29 >> 2;
      uVar20 = uVar29 & 3;
      if ((uVar32 - 1 == uVar29) && ((uVar32 & 1) != 0)) {
        uVar16 = uVar24;
        if ((uVar32 != 1) && (1 < uVar20)) {
          uVar16 = uVar24 + 1;
        }
        lVar22 = param_1[6];
        uVar34 = (ulonglong)(uVar16 << 4);
        fStack_12c = *(float *)(lVar22 + uVar34 * 4);
        fStack_10c = *(float *)(lVar22 + 4 + uVar34 * 4);
        fStack_fc = *(float *)(lVar22 + 8 + uVar34 * 4);
        fStack_ec = *(float *)(lVar22 + 0xc + uVar34 * 4);
      }
      else {
        lVar19 = (ulonglong)(uVar24 << 4) + (ulonglong)uVar20;
        lVar22 = param_1[6];
        fStack_12c = *(float *)(lVar22 + lVar19 * 4);
        fStack_10c = *(float *)(lVar22 + 0x10 + lVar19 * 4);
        fStack_fc = *(float *)(lVar22 + 0x20 + lVar19 * 4);
        fStack_ec = *(float *)(lVar22 + 0x30 + lVar19 * 4);
      }
      pfVar15 = (float *)param_1[8];
      fVar58 = *pfVar15;
      fVar59 = pfVar15[1];
      fVar42 = pfVar15[2];
      fVar61 = pfVar15[3];
      fVar60 = pfVar15[4];
      fVar65 = pfVar15[5];
      fVar55 = pfVar15[6];
      fVar56 = pfVar15[7];
      fVar62 = pfVar15[8];
      fVar63 = pfVar15[9];
      fVar64 = pfVar15[10];
      fVar66 = pfVar15[0xb];
      fVar67 = pfVar15[0xc];
      fVar68 = pfVar15[0xd];
      fVar69 = pfVar15[0xe];
      fVar70 = pfVar15[0xf];
      fVar71 = pfVar15[0x10];
      fVar72 = pfVar15[0x11];
      fVar73 = pfVar15[0x12];
      fVar74 = pfVar15[0x13];
      fVar75 = pfVar15[0x14];
      fVar57 = pfVar15[0x15];
      fVar35 = pfVar15[0x16];
      fVar36 = pfVar15[0x17];
      fVar37 = pfVar15[0x18];
      fVar38 = pfVar15[0x19];
      fVar39 = pfVar15[0x1a];
      fVar40 = pfVar15[0x1b];
      fVar41 = pfVar15[0x1c];
      fVar46 = pfVar15[0x1d];
      fVar54 = pfVar15[0x1e];
      fVar44 = pfVar15[0x1f];
      local_138 = (float *)CONCAT44(fStack_12c,fStack_12c);
      pfVar15 = pfVar21;
      fVar45 = fStack_10c;
      fVar52 = fStack_12c;
      if (pfVar21 < pfVar21 + uVar13) {
        do {
          fVar53 = *pfVar15;
          fVar50 = pfVar15[1];
          fStack_10c = pfVar15[2];
          fStack_12c = pfVar15[3];
          fVar51 = fVar37 * fStack_fc;
          fVar43 = fVar38 * fStack_fc;
          fVar47 = fVar41 * fStack_ec;
          fVar48 = fVar46 * fStack_ec;
          fVar49 = fVar44 * fStack_ec;
          fStack_ec = fVar50 * fVar64 +
                      fVar55 * fStack_10c +
                      fVar73 * fVar52 + fStack_10c * fVar42 + fVar35 * fVar45 + fVar39 * fStack_fc +
                      fVar54 * fStack_ec + fVar53 * fVar69;
          fStack_fc = fVar50 * fVar66 +
                      fVar56 * fStack_10c +
                      fVar74 * fVar52 + fStack_12c * fVar61 + fVar36 * fVar45 + fVar40 * fStack_fc +
                      fVar49 + fVar53 * fVar70;
          *pfVar15 = fVar50 * fVar62 +
                     fVar60 * fStack_10c +
                     fVar71 * fVar52 + fVar53 * fVar58 + fVar75 * fVar45 + fVar51 + fVar47 +
                     fVar53 * fVar67;
          pfVar15[1] = fVar50 * fVar63 +
                       fVar65 * fStack_10c +
                       fVar72 * fVar52 + fVar50 * fVar59 + fVar57 * fVar45 + fVar43 + fVar48 +
                       fVar53 * fVar68;
          pfVar15[2] = fStack_ec;
          pfVar15[3] = fStack_fc;
          pfVar15 = pfVar15 + 4;
          fVar45 = fStack_10c;
          fVar52 = fStack_12c;
        } while (pfVar15 < pfVar21 + uVar13);
        uVar32 = *(uint *)((longlong)param_1 + 0x4c);
        local_138 = (float *)CONCAT44(fStack_12c,fStack_12c);
      }
      if ((uVar32 - 1 == uVar29) && ((uVar32 & 1) != 0)) {
        if ((uVar32 != 1) && (1 < uVar20)) {
          uVar24 = uVar24 + 1;
        }
        uVar34 = (ulonglong)(uVar24 << 4);
        *(undefined4 *)(param_1[6] + uVar34 * 4) = (undefined4)local_138;
        *(float *)(param_1[6] + 4 + uVar34 * 4) = fStack_10c;
        *(float *)(param_1[6] + 8 + uVar34 * 4) = fStack_fc;
        *(float *)(param_1[6] + 0xc + uVar34 * 4) = fStack_ec;
      }
      else {
        lVar22 = (ulonglong)(uVar24 << 4) + (ulonglong)uVar20;
        *(undefined4 *)(param_1[6] + lVar22 * 4) = (undefined4)local_138;
        *(float *)(param_1[6] + 0x10 + lVar22 * 4) = fStack_10c;
        *(float *)(param_1[6] + 0x20 + lVar22 * 4) = fStack_fc;
        *(float *)(param_1[6] + 0x30 + lVar22 * 4) = fStack_ec;
      }
      pfVar21 = pfVar21 + uVar14;
      uVar30 = uVar30 - 1;
      fStack_130 = fStack_12c;
      local_118 = fStack_10c;
      fStack_114 = fStack_10c;
      fStack_110 = fStack_10c;
      local_108 = fStack_fc;
      fStack_104 = fStack_fc;
      fStack_100 = fStack_fc;
      local_f8 = fStack_ec;
      fStack_f4 = fStack_ec;
      fStack_f0 = fStack_ec;
    } while (uVar30 != 0);
  }
LAB_14321b280:
  uVar30 = local_res20;
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  uVar20 = local_res20 - *(int *)((longlong)param_1 + 0x24);
  param_5 = CONCAT44(param_5._4_4_,uVar13);
  uVar24 = uVar2 - uVar13;
  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,*(int *)((longlong)param_1 + 0x24));
  uVar32 = uVar24;
  if (uVar28 < uVar24) {
    uVar32 = uVar28;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)*param_1 + (ulonglong)uVar13 * 4),pfVar23,
             (ulonglong)(uVar32 << 2));
  if (uVar24 < uVar28) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)*param_1,pfVar23 + uVar24,(ulonglong)((uVar28 - uVar24) * 4));
  }
  pfVar15 = local_128;
  iVar18 = (int)local_res10._0_4_;
  uVar13 = uVar20;
  if (uVar28 < uVar20) {
    uVar13 = uVar28;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)param_1[3] + ((ulonglong)local_res10 & 0xffffffff) * 4),local_128
             ,(ulonglong)(uVar13 << 2));
  if (uVar20 < uVar28) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)param_1[3],pfVar15 + uVar20,(ulonglong)((uVar28 - uVar20) * 4));
  }
  *(uint *)((longlong)param_1 + 0xc) = ((int)(float)param_5 + uVar28) % uVar2;
  *(uint *)((longlong)param_1 + 0x24) = (iVar18 + uVar28) % uVar30;
  return (ulonglong)(iVar18 + uVar28) / (ulonglong)uVar30;
}



// FUNCTION 14321b3c0 Reset body=54 status=ok
// SIG undefined Reset(void)

void AK::DSP::CStereoDelayLine::Reset(longlong param_1)

{
  CAkDelayFXDSP::ResetDelay();
  CAkDelayFXDSP::ResetDelay(param_1 + 0x18);
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x30),0,(ulonglong)*(uint *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 14321b400 Term body=72 status=ok
// SIG undefined Term(void)

void AK::DSP::CStereoDelayLine::Term(longlong param_1,longlong *param_2)

{
  CAkDelayLineMemory<float>::Term();
  CAkDelayLineMemory<float>::Term(param_1 + 0x18,param_2);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14321b450 AkStereoDelayDSPProcess body=1697 status=ok
// SIG undefined AkStereoDelayDSPProcess(void)

void AkStereoDelayDSPProcess(longlong *param_1,longlong param_2,void *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  void *_Src;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort uVar17;
  size_t _Size;
  longlong lVar18;
  uint uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 in_stack_ffffffffffffff48;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ushort local_88;
  ushort local_86;
  void *local_80;
  undefined4 local_78;
  undefined4 local_74;
  ushort local_70;
  ushort local_6e;
  
  uVar8 = *(uint *)(param_2 + 0x1a8);
  lVar18 = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0x11) {
    uVar11 = *(uint *)(param_2 + 0x1a0);
    if ((uVar11 != 0) || (uVar17 = 0, *(short *)((longlong)param_1 + 0x12) != 0)) {
      if ((uVar11 == 0xffffffff) || (*(short *)((longlong)param_1 + 0x12) != 0)) {
        *(uint *)(param_2 + 0x1a0) = uVar8;
        uVar11 = uVar8;
LAB_14321b4c8:
        *(uint *)(param_2 + 0x1a4) = uVar8;
      }
      else if (*(uint *)(param_2 + 0x1a4) < uVar8) {
        uVar11 = (uVar11 - *(uint *)(param_2 + 0x1a4)) + uVar8;
        *(uint *)(param_2 + 0x1a0) = uVar11;
        goto LAB_14321b4c8;
      }
      uVar9 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((longlong)param_1 + 0x12);
      uVar8 = uVar11;
      if (uVar9 <= uVar11) {
        uVar8 = uVar9;
      }
      *(uint *)(param_2 + 0x1a0) = uVar11 - uVar8;
      uVar2 = *(ushort *)(param_1 + 2);
      uVar16 = (ulonglong)*(byte *)(param_1 + 1);
      iVar12 = (uint)uVar2 - (uint)*(ushort *)((longlong)param_1 + 0x12);
      uVar17 = *(ushort *)((longlong)param_1 + 0x12);
      if (iVar12 != 0) {
        if (*(byte *)(param_1 + 1) != 0) {
          lVar15 = lVar18;
          do {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_1 +
                               ((ulonglong)*(ushort *)(param_1 + 2) * lVar15 +
                               (ulonglong)*(ushort *)((longlong)param_1 + 0x12)) * 4),0,
                       (ulonglong)(uint)(iVar12 * 4));
            lVar15 = lVar15 + 1;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          uVar2 = *(ushort *)(param_1 + 2);
        }
        *(ushort *)((longlong)param_1 + 0x12) = uVar2;
        uVar17 = uVar2;
      }
      if (*(int *)(param_2 + 0x1a0) != 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x2d;
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1a0) = 0xffffffff;
    uVar17 = *(ushort *)((longlong)param_1 + 0x12);
  }
  if (uVar17 < 0x20) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 1);
  uVar11 = uVar8 >> 0xc;
  if (uVar11 == 8) {
    return;
  }
  local_98 = (void *)((longlong)param_3 + (ulonglong)((uint)uVar17 + (uint)uVar17) * 4);
  uVar9 = uVar11 & 0xffff7;
  uVar10 = uVar9 << 0xc;
  local_74 = 0x2b;
  iVar12 = *(int *)(param_2 + 0x138);
  local_78 = 0x3102;
  local_8c = 0x2b;
  local_90 = 0x3102;
  uVar19 = (uint)uVar17;
  local_88 = uVar17;
  local_86 = uVar17;
  local_80 = param_3;
  local_70 = uVar17;
  local_6e = uVar17;
  if (iVar12 == 0) {
LAB_14321b6b7:
    pvVar13 = (void *)*param_1;
LAB_14321b6ba:
    _guard_xfg_dispatch_icall_nop(param_3,pvVar13,(ulonglong)((uint)uVar17 * 4));
  }
  else {
    if (iVar12 == 1) {
      if (((uVar10 & 0x1000) != 0) && ((uVar10 & 0x4000) != 0)) {
        lVar18 = 8;
      }
      pvVar13 = (void *)((ulonglong)*(ushort *)(param_1 + 2) * lVar18 + *param_1);
      goto LAB_14321b6ba;
    }
    if (iVar12 == 2) {
      if (((uVar10 & 0x1000) == 0) || ((uVar10 & 0x4000) == 0)) goto LAB_14321b6b7;
      in_stack_ffffffffffffff48 = 0x3f34fdf4;
      DSP::Mix2Interp(*param_1,*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 8,param_3,0x3f34fdf4
                      ,0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,uVar19);
    }
    else if (iVar12 == 3) {
      _guard_xfg_dispatch_icall_nop(param_3,0,(ulonglong)((uint)uVar17 * 4));
    }
  }
  iVar12 = *(int *)(param_2 + 0x13c);
  pvVar13 = (void *)((longlong)local_80 + (ulonglong)local_70 * 4);
  if (iVar12 == 0) {
    _Src = (void *)*param_1;
    _Size = (size_t)((uint)uVar17 * 4);
    if ((uVar10 & 0x2000) != 0) {
      _Src = (void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 4);
    }
  }
  else if (iVar12 == 1) {
    if ((uVar10 & 0x6000) == 0x6000) {
      uVar16 = 2;
    }
    else {
      uVar8 = (uVar8 - (uVar11 - uVar9 >> 3) & 0xff) - 1;
      uVar16 = (ulonglong)uVar8;
      if (1 < uVar8) {
        uVar16 = 1;
      }
    }
    _Size = (size_t)((uint)uVar17 * 4);
    _Src = (void *)(*param_1 + *(ushort *)(param_1 + 2) * uVar16 * 4);
  }
  else {
    if (iVar12 != 2) {
      if (iVar12 == 3) {
        _guard_xfg_dispatch_icall_nop(pvVar13,0,(ulonglong)((uint)uVar17 * 4));
      }
      goto LAB_14321b7d2;
    }
    _Src = (void *)*param_1;
    if (((byte)uVar9 & 6) == 6) {
      in_stack_ffffffffffffff48 = 0x3f34fdf4;
      DSP::Mix2Interp((void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 4),
                      (void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 8),pvVar13,
                      0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,uVar19);
      goto LAB_14321b7d2;
    }
    _Size = (size_t)((uint)uVar17 * 4);
    if ((uVar10 & 0x2000) != 0) {
      _Src = (void *)((longlong)_Src + (ulonglong)*(ushort *)(param_1 + 2) * 4);
    }
  }
  _guard_xfg_dispatch_icall_nop(pvVar13,_Src,_Size);
LAB_14321b7d2:
  lVar18 = param_2 + 0x140;
  uVar8 = CONCAT31((int3)((uint)in_stack_ffffffffffffff48 >> 8),*(undefined1 *)(param_2 + 0x1b4));
  puVar1 = (undefined8 *)(param_2 + 0x120);
  puVar25 = puVar1;
  auVar20._0_8_ =
       AK::DSP::CStereoDelayLine::ProcessBuffer
                 (param_2,&local_80,&local_98,param_2 + 0x160,puVar1,lVar18,uVar8);
  uVar27 = (undefined4)((ulonglong)puVar25 >> 0x20);
  uVar29 = (undefined4)((ulonglong)lVar18 >> 0x20);
  auVar20._8_8_ = extraout_XMM0_Qb;
  fVar21 = 1.0;
  fVar22 = 1.0;
  fVar24 = 1.0;
  fVar23 = 1.0;
  uVar11 = (uVar10 & 0x210000) >> 0xc;
  if (uVar11 != 0) {
    dVar6 = (double)*(float *)(param_2 + 0x158) * 0.005 + 0.5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar6;
    auVar20 = sqrtpd(auVar20,auVar4);
    fVar22 = (float)auVar20._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = 1.0 - dVar6;
    auVar20 = sqrtpd(auVar20,auVar3);
    fVar21 = (float)auVar20._0_8_;
    dVar6 = (double)*(float *)(param_2 + 0x198) * 0.005 + 0.5;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar6;
    auVar20 = sqrtpd(auVar20,auVar5);
    fVar23 = (float)auVar20._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = 1.0 - dVar6;
    auVar20 = sqrtpd(auVar20,auVar7);
    fVar24 = (float)auVar20._0_8_;
  }
  pvVar13 = (void *)((longlong)local_98 + (ulonglong)local_88 * 4);
  if (uVar9 == 4) {
    uVar8 = *(uint *)(param_2 + 0x154);
    uVar28 = CONCAT44(uVar29,*(undefined4 *)(param_2 + 0x194));
    uVar26 = CONCAT44(uVar27,*(undefined4 *)(param_2 + 0x150));
    DSP::Mix3Interp(*param_1,local_98,pvVar13,*(undefined4 *)(param_2 + 400),uVar26,uVar28,uVar8,
                    *(undefined4 *)(param_2 + 0x194),uVar8,uVar19);
    uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar29 = (undefined4)((ulonglong)uVar28 >> 0x20);
  }
  else if ((uVar10 & 0x1000) != 0) {
    uVar28 = CONCAT44(uVar29,fVar24 * *(float *)(param_2 + 0x154));
    uVar26 = CONCAT44(uVar27,fVar21 * *(float *)(param_2 + 0x194));
    DSP::Mix2Interp(*param_1,local_98,*(undefined4 *)(param_2 + 400),
                    *(undefined4 *)(param_2 + 0x150),uVar26,uVar28,uVar19);
    uVar28 = CONCAT44((int)((ulonglong)uVar28 >> 0x20),fVar24 * *(float *)(param_2 + 0x154));
    uVar26 = CONCAT44((int)((ulonglong)uVar26 >> 0x20),fVar21 * *(float *)(param_2 + 0x194));
    DSP::Mix2Interp(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 4,pvVar13,
                    *(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),uVar26,uVar28,
                    uVar19);
    uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar29 = (undefined4)((ulonglong)uVar28 >> 0x20);
    uVar8 = uVar19;
  }
  if (uVar11 != 0) {
    bVar14 = (byte)(uVar9 >> 2);
    ProcessSurroundChannels
              (&local_80,&local_98,param_1,param_2,CONCAT44(uVar27,fVar22),CONCAT44(uVar29,fVar23),
               CONCAT31((int3)(uVar8 >> 8),bVar14) & 0xffffff01 | 2,1);
    if (uVar11 == 0x210) {
      ProcessSurroundChannels
                (&local_80,&local_98,param_1,param_2,fVar22,fVar23,(bVar14 & 1 | 2) + 2,2);
    }
  }
  if (((uVar10 & 0x4000) != 0) && (uVar9 != 4)) {
    AK::DSP::ApplyGain(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 8,
                       *(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),uVar17);
  }
  if (((*(uint *)(param_1 + 1) >> 0xf & 1) != 0) &&
     (lVar18 = *param_1 +
               (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1) *
               (ulonglong)*(ushort *)(param_1 + 2) * 4, lVar18 != 0)) {
    AK::DSP::ApplyGain(lVar18,*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x150),uVar17
                      );
  }
  *(undefined8 *)(param_2 + 0x160) = *puVar1;
  *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_2 + 0x170) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x188) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_2 + 0x158);
  return;
}



// FUNCTION 14321bb00 ApplyGain body=400 status=ok
// SIG undefined ApplyGain(void)

void AK::DSP::ApplyGain(float *param_1,float param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 == param_2) {
    ApplyGain(param_1,param_1,param_4);
    return;
  }
  pfVar1 = param_1 + param_4;
  if (3 < param_4) {
    pfVar2 = param_1 + (param_4 & 0xfffffffc);
    fVar7 = (param_3 - param_2) / (float)(param_4 & 0xfffffffc);
    fVar4 = fVar7 * 4.0;
    fVar5 = fVar7 + param_2 + fVar7;
    fVar6 = fVar7 + param_2;
    fVar7 = fVar5 + fVar7;
    fVar3 = param_2;
    for (; param_1 < pfVar2; param_1 = param_1 + 4) {
      *param_1 = *param_1 * fVar3;
      param_1[1] = param_1[1] * fVar6;
      param_1[2] = param_1[2] * fVar5;
      param_1[3] = param_1[3] * fVar7;
      fVar6 = fVar6 + fVar4;
      fVar5 = fVar5 + fVar4;
      fVar7 = fVar7 + fVar4;
      fVar3 = fVar3 + fVar4;
    }
  }
  if (param_1 < pfVar1) {
    if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      fVar6 = (param_3 - param_2) / (float)param_4;
      do {
        *param_1 = param_2 * *param_1;
        fVar5 = param_2 + fVar6 + fVar6;
        param_1[1] = (param_2 + fVar6) * param_1[1];
        fVar7 = fVar5 + fVar6;
        param_1[2] = fVar5 * param_1[2];
        param_2 = fVar7 + fVar6;
        param_1[3] = fVar7 * param_1[3];
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1 + -3);
    }
    if (param_1 < pfVar1) {
      fVar6 = param_2;
      do {
        *param_1 = fVar6 * *param_1;
        param_1 = param_1 + 1;
        fVar6 = fVar6 + (param_3 - param_2) / (float)param_4;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 14321bc90 ProcessSurroundChannels body=853 status=ok
// SIG undefined ProcessSurroundChannels(void)

void ProcessSurroundChannels
               (undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
               float param_5,float param_6,byte param_7,byte param_8)

{
  void *_Dst;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *_Dst_00;
  longlong lVar4;
  
  _Dst_00 = (void *)*param_1;
  lVar4 = *param_2;
  iVar3 = *(int *)(param_4 + 0x138);
  uVar1 = *(ushort *)((longlong)param_3 + 0x12);
  _Dst = (void *)((longlong)_Dst_00 + (ulonglong)*(ushort *)(param_1 + 2) * 4);
  uVar2 = *(ushort *)(param_2 + 2);
  if (iVar3 == 0) {
LAB_14321bd26:
    _guard_xfg_dispatch_icall_nop
              (_Dst_00,(void *)(*param_3 +
                               (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)param_7 * 4),
               (ulonglong)((uint)uVar1 * 4));
  }
  else if (iVar3 == 1) {
LAB_14321bd12:
    _guard_xfg_dispatch_icall_nop(_Dst_00,0,(ulonglong)((uint)uVar1 * 4));
  }
  else {
    if (iVar3 == 2) goto LAB_14321bd26;
    if (iVar3 == 3) goto LAB_14321bd12;
  }
  iVar3 = *(int *)(param_4 + 0x13c);
  if (iVar3 == 0) {
LAB_14321bd76:
    _guard_xfg_dispatch_icall_nop
              (_Dst,(void *)(*param_3 +
                            (ulonglong)(param_7 + 1) * (ulonglong)*(ushort *)(param_3 + 2) * 4),
               (ulonglong)((uint)uVar1 * 4));
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) goto LAB_14321bd76;
      if (iVar3 != 3) goto LAB_14321bd9b;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)((uint)uVar1 * 4));
  }
LAB_14321bd9b:
  AK::DSP::CStereoDelayLine::ProcessBuffer
            ((ulonglong)param_8 * 0x60 + param_4,param_1,param_2,param_4 + 0x160,param_4 + 0x120,
             param_4 + 0x140,*(undefined1 *)(param_4 + 0x1b4));
  DSP::Mix2Interp(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)param_7 * 4,lVar4,
                  *(undefined4 *)(param_4 + 400),*(undefined4 *)(param_4 + 0x150),
                  param_6 * *(float *)(param_4 + 0x194),param_5 * *(float *)(param_4 + 0x154),uVar1)
  ;
  DSP::Mix2Interp(*param_3 + (ulonglong)(param_7 + 1) * (ulonglong)*(ushort *)(param_3 + 2) * 4,
                  (ulonglong)uVar2 * 4 + lVar4,*(undefined4 *)(param_4 + 400),
                  *(undefined4 *)(param_4 + 0x150));
  return;
}



// FUNCTION 14321bed0 Mix3Interp body=629 status=ok
// SIG undefined Mix3Interp(void)

void DSP::Mix3Interp(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                    float param_6,float param_7,float param_8,float param_9,uint param_10)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
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
  
  if (((param_5 == param_4) && (param_7 == param_6)) && (param_9 == param_8)) {
    pfVar1 = param_1 + param_10;
    if (param_1 < pfVar1) {
      lVar6 = (longlong)param_2 - (longlong)param_1;
      lVar7 = (longlong)param_3 - (longlong)param_1;
      do {
        pfVar2 = (float *)(lVar6 + (longlong)param_1);
        fVar9 = pfVar2[1];
        fVar17 = pfVar2[2];
        fVar18 = pfVar2[3];
        pfVar3 = (float *)(lVar7 + (longlong)param_1);
        fVar4 = pfVar3[1];
        fVar10 = pfVar3[2];
        fVar11 = pfVar3[3];
        *param_1 = *pfVar2 * param_6 + *param_1 * param_4 + *pfVar3 * param_8;
        param_1[1] = fVar9 * param_6 + param_1[1] * param_4 + fVar4 * param_8;
        param_1[2] = fVar17 * param_6 + param_1[2] * param_4 + fVar10 * param_8;
        param_1[3] = fVar18 * param_6 + param_1[3] * param_4 + fVar11 * param_8;
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1);
      return;
    }
  }
  else {
    uVar5 = 0;
    fVar9 = 1.0 / (float)param_10;
    uVar8 = (ulonglong)((longlong)(param_1 + param_10) + (3 - (longlong)param_1)) >> 2;
    if (param_1 + param_10 < param_1) {
      uVar8 = uVar5;
    }
    fVar18 = (param_5 - param_4) * fVar9;
    fVar17 = (param_7 - param_6) * fVar9;
    fVar9 = (param_9 - param_8) * fVar9;
    if (3 < uVar8) {
      lVar6 = (uVar8 - 4 >> 2) + 1;
      uVar5 = lVar6 * 4;
      do {
        fVar11 = param_4 + fVar18 + fVar18;
        fVar4 = param_3[1];
        fVar13 = param_8 + fVar9 + fVar9;
        *param_1 = param_4 * *param_1 + param_6 * *param_2 + param_8 * *param_3;
        fVar15 = param_6 + fVar17 + fVar17;
        fVar12 = fVar11 + fVar18;
        fVar10 = param_3[2];
        fVar14 = fVar13 + fVar9;
        param_1[1] = (param_6 + fVar17) * param_2[1] + (param_4 + fVar18) * param_1[1] +
                     (param_8 + fVar9) * fVar4;
        fVar16 = fVar15 + fVar17;
        param_4 = fVar12 + fVar18;
        fVar4 = param_3[3];
        param_8 = fVar14 + fVar9;
        param_3 = param_3 + 4;
        param_1[2] = fVar15 * param_2[2] + fVar11 * param_1[2] + fVar13 * fVar10;
        pfVar1 = param_2 + 3;
        param_6 = fVar16 + fVar17;
        param_2 = param_2 + 4;
        param_1[3] = fVar16 * *pfVar1 + fVar12 * param_1[3] + fVar14 * fVar4;
        param_1 = param_1 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (uVar5 < uVar8) {
      lVar6 = (longlong)param_2 - (longlong)param_3;
      do {
        fVar10 = param_6 * *(float *)(lVar6 + (longlong)param_3);
        uVar5 = uVar5 + 1;
        param_6 = param_6 + fVar17;
        fVar4 = *param_3;
        param_3 = param_3 + 1;
        *param_1 = fVar10 + param_4 * *param_1 + param_8 * fVar4;
        param_1 = param_1 + 1;
        param_4 = param_4 + fVar18;
        param_8 = param_8 + fVar9;
      } while (uVar5 < uVar8);
    }
  }
  return;
}



// FUNCTION 14321c150 FUN_14321c150 body=43 status=ok
// SIG undefined FUN_14321c150(void)

undefined8 * FUN_14321c150(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14321c180 AkMeterApplyBallistics body=1162 status=ok
// SIG undefined AkMeterApplyBallistics(void)

void AkMeterApplyBallistics(float param_1,uint param_2,float *param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if ((float)param_4[3] <= param_1 && param_1 != (float)param_4[3]) {
    param_4[1] = 0;
    param_4[4] = (uint)param_3[2];
    param_4[5] = (uint)param_3[2];
    param_4[6] = (uint)param_3[2];
    param_4[7] = (uint)param_3[2];
    param_4[8] = (uint)param_3[2];
    param_4[9] = (uint)param_3[2];
    param_4[10] = (uint)param_3[2];
    param_4[0xb] = (uint)param_3[2];
    fVar20 = param_1;
    if ((*param_3 != 0.0) &&
       (fVar20 = ((float)param_2 / ((float)*param_4 * *param_3)) * 10.0 + (float)param_4[3],
       param_1 <= fVar20)) {
      fVar20 = param_1;
    }
    param_4[3] = (uint)fVar20;
    param_4[2] = (uint)fVar20;
    return;
  }
  uVar7 = *param_4;
  fVar20 = (float)param_2 / (float)uVar7 + (float)param_4[1];
  param_4[1] = (uint)fVar20;
  if (fVar20 < param_3[4]) {
    iVar9 = (int)((fVar20 / param_3[4]) * 8.0 + 0.5);
    if ((0 < iVar9) &&
       ((float)param_4[(longlong)iVar9 + 3] <= param_1 &&
        param_1 != (float)param_4[(longlong)iVar9 + 3])) {
      param_4[(longlong)iVar9 + 3] = (uint)param_1;
    }
    fVar20 = (float)param_4[2];
    if ((float)param_4[2] < param_1) {
      param_4[2] = (uint)param_1;
      fVar20 = param_1;
    }
  }
  else {
    iVar17 = 0;
    iVar9 = 8;
    iVar14 = 0;
    pfVar13 = (float *)(param_4 + 5);
    do {
      fVar19 = *pfVar13;
      fVar1 = pfVar13[4];
      fVar2 = pfVar13[1];
      fVar3 = pfVar13[2];
      fVar4 = pfVar13[3];
      fVar5 = pfVar13[5];
      fVar27 = pfVar13[-1];
      if (pfVar13[-1] <= param_1) {
        fVar27 = param_1;
      }
      fVar6 = pfVar13[6];
      fVar26 = fVar19;
      if (fVar19 <= fVar27) {
        fVar26 = fVar27;
      }
      fVar25 = fVar26;
      if (fVar26 <= fVar2) {
        fVar25 = fVar2;
      }
      fVar24 = fVar25;
      if (fVar25 <= fVar3) {
        fVar24 = fVar3;
      }
      fVar23 = fVar24;
      if (fVar24 <= fVar4) {
        fVar23 = fVar4;
      }
      fVar22 = fVar23;
      if (fVar23 <= fVar1) {
        fVar22 = fVar1;
      }
      fVar21 = fVar22;
      if (fVar22 <= fVar5) {
        fVar21 = fVar5;
      }
      fVar20 = fVar21;
      if (fVar21 <= fVar6) {
        fVar20 = fVar6;
      }
      iVar10 = iVar14;
      if (pfVar13[-1] < param_1) {
        iVar10 = iVar9;
      }
      iVar9 = iVar14 + 1;
      if (fVar19 < fVar27) {
        iVar9 = iVar10;
      }
      iVar10 = iVar14 + 2;
      if (fVar2 < fVar26) {
        iVar10 = iVar9;
      }
      iVar9 = iVar14 + 3;
      if (fVar3 < fVar25) {
        iVar9 = iVar10;
      }
      iVar10 = iVar14 + 4;
      if (fVar4 < fVar24) {
        iVar10 = iVar9;
      }
      iVar9 = iVar14 + 5;
      if (fVar1 < fVar23) {
        iVar9 = iVar10;
      }
      iVar10 = iVar14 + 6;
      if (fVar5 < fVar22) {
        iVar10 = iVar9;
      }
      iVar9 = iVar14 + 7;
      if (fVar6 < fVar21) {
        iVar9 = iVar10;
      }
      iVar14 = iVar14 + 8;
      pfVar13 = pfVar13 + 8;
      param_1 = fVar20;
    } while (iVar14 < 8);
    lVar18 = (longlong)(iVar9 + 1);
    param_4[1] = (uint)((float)(8 - iVar9) * param_3[4] * 0.11111111);
    if (lVar18 < 8) {
      lVar16 = lVar18;
      if (3 < 8 - lVar18) {
        lVar15 = (4U - lVar18 >> 2) + 1;
        puVar11 = param_4 + 5;
        iVar17 = (int)lVar15 * 4;
        lVar16 = lVar18 + lVar15 * 4;
        do {
          puVar11[-1] = puVar11[lVar18 + -1];
          *puVar11 = puVar11[lVar18];
          puVar11[1] = puVar11[lVar18 + 1];
          puVar11[2] = puVar11[lVar18 + 2];
          puVar11 = puVar11 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (lVar16 < 8) {
        lVar18 = (longlong)iVar17;
        puVar11 = param_4 + lVar16 + 4;
        lVar16 = 8 - lVar16;
        iVar17 = iVar17 + (int)lVar16;
        puVar12 = param_4 + lVar18 + 4;
        do {
          uVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar12 = uVar8;
          puVar12 = puVar12 + 1;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
    lVar18 = (longlong)iVar17;
    if (lVar18 < 8) {
      if (3 < 8 - lVar18) {
        lVar16 = lVar18 + 5;
        lVar15 = (4U - lVar18 >> 2) + 1;
        lVar18 = lVar18 + lVar15 * 4;
        pfVar13 = (float *)(param_4 + lVar16);
        do {
          pfVar13[-1] = param_3[2];
          *pfVar13 = param_3[2];
          pfVar13[1] = param_3[2];
          pfVar13[2] = param_3[2];
          lVar15 = lVar15 + -1;
          pfVar13 = pfVar13 + 4;
        } while (lVar15 != 0);
      }
      if (lVar18 < 8) {
        lVar16 = 8 - lVar18;
        pfVar13 = (float *)(param_4 + lVar18 + 4);
        do {
          *pfVar13 = param_3[2];
          pfVar13 = pfVar13 + 1;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
    param_4[2] = (uint)fVar20;
  }
  if (param_3[1] != 0.0) {
    fVar19 = (float)param_4[3] - (((float)param_2 / (float)uVar7) / param_3[1]) * 10.0;
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
    param_4[3] = (uint)fVar19;
    return;
  }
  param_4[3] = (uint)fVar20;
  return;
}



// FUNCTION 14321c610 AkMeterGetValue body=1019 status=ok
// SIG undefined AkMeterGetValue(void)

void AkMeterGetValue(longlong *param_1,longlong param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  byte bVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  bVar3 = *(byte *)(param_1 + 1);
  uVar7 = (ulonglong)bVar3;
  if (*(short *)((longlong)param_1 + 0x12) == 0) {
    if ((param_3 != (float *)0x0) && (bVar3 != 0)) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *param_3 = -96.3;
        param_3 = param_3 + 1;
      }
    }
  }
  else {
    if (*(int *)(param_2 + 0x14) == 0) {
      fVar17 = 2.1474836e+09;
      fVar18 = -2.1474836e+09;
      if (bVar3 != 0) {
        lVar6 = 0;
        uVar7 = (ulonglong)bVar3;
        pfVar5 = param_3;
        fVar16 = fVar17;
        fVar10 = fVar18;
        do {
          fVar17 = 2.1474836e+09;
          fVar18 = -2.1474836e+09;
          pfVar4 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
          pfVar1 = (float *)(*param_1 +
                            ((ulonglong)*(ushort *)(param_1 + 2) * lVar6 +
                            (ulonglong)*(ushort *)((longlong)param_1 + 0x12)) * 4);
          if (pfVar4 < pfVar1) {
            fVar14 = param_4;
            fVar11 = fVar17;
            if (3 < (ulonglong)*(ushort *)((longlong)param_1 + 0x12)) {
              do {
                fVar11 = fVar14 * *pfVar4;
                fVar12 = (fVar14 + param_5) * pfVar4[1];
                fVar15 = fVar11;
                if (fVar17 <= fVar11) {
                  fVar15 = fVar17;
                }
                fVar13 = fVar14 + param_5 + param_5;
                if (fVar11 <= fVar18) {
                  fVar11 = fVar18;
                }
                fVar17 = fVar12;
                if (fVar15 <= fVar12) {
                  fVar17 = fVar15;
                }
                fVar14 = fVar13 + param_5;
                fVar13 = fVar13 * pfVar4[2];
                if (fVar12 <= fVar11) {
                  fVar12 = fVar11;
                }
                fVar18 = fVar14 * pfVar4[3];
                fVar11 = fVar13;
                if (fVar17 <= fVar13) {
                  fVar11 = fVar17;
                }
                pfVar4 = pfVar4 + 4;
                if (fVar13 <= fVar12) {
                  fVar13 = fVar12;
                }
                fVar14 = fVar14 + param_5;
                fVar17 = fVar18;
                if (fVar11 <= fVar18) {
                  fVar17 = fVar11;
                }
                if (fVar18 <= fVar13) {
                  fVar18 = fVar13;
                }
                fVar11 = fVar17;
              } while (pfVar4 < pfVar1 + -3);
            }
            while (fVar17 = fVar11, pfVar4 < pfVar1) {
              fVar15 = fVar14 + param_5;
              fVar11 = fVar14 * *pfVar4;
              pfVar4 = pfVar4 + 1;
              fVar12 = fVar11;
              if (fVar11 <= fVar18) {
                fVar12 = fVar18;
              }
              fVar14 = fVar15;
              fVar18 = fVar12;
              if (fVar17 <= fVar11) {
                fVar11 = fVar17;
              }
            }
          }
          if (param_3 != (float *)0x0) {
            fVar14 = ABS(fVar17);
            if (ABS(fVar17) <= fVar18) {
              fVar14 = fVar18;
            }
            if (fVar14 <= 0.0) {
              *pfVar5 = -200.0;
            }
            else {
              fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
              *pfVar5 = fVar14 * 20.0;
            }
          }
          if (fVar16 <= fVar17) {
            fVar17 = fVar16;
          }
          lVar6 = lVar6 + 1;
          if (fVar18 <= fVar10) {
            fVar18 = fVar10;
          }
          pfVar5 = pfVar5 + 1;
          uVar7 = uVar7 - 1;
          fVar16 = fVar17;
          fVar10 = fVar18;
        } while (uVar7 != 0);
      }
      fVar16 = ABS(fVar17);
      if (ABS(fVar17) <= fVar18) {
        fVar16 = fVar18;
      }
    }
    else {
      fVar16 = -2.1474836e+09;
      if (bVar3 != 0) {
        pfVar5 = param_3;
        uVar8 = 0;
        fVar18 = fVar16;
        do {
          uVar9 = (ulonglong)*(ushort *)((longlong)param_1 + 0x12);
          fVar16 = 0.0;
          pfVar4 = (float *)(*param_1 + *(ushort *)(param_1 + 2) * uVar8 * 4);
          if ((float *)(*param_1 + (*(ushort *)(param_1 + 2) * uVar8 + uVar9) * 4) < pfVar4) {
            uVar9 = 0;
          }
          uVar2 = 0;
          fVar17 = param_4;
          if (3 < uVar9) {
            lVar6 = (uVar9 - 4 >> 2) + 1;
            uVar2 = lVar6 * 4;
            do {
              fVar10 = fVar17 * *pfVar4;
              fVar11 = (fVar17 + param_5) * pfVar4[1];
              fVar14 = fVar17 + param_5 + param_5;
              fVar17 = fVar14 + param_5;
              fVar14 = fVar14 * pfVar4[2];
              fVar12 = fVar17 * pfVar4[3];
              fVar17 = fVar17 + param_5;
              pfVar4 = pfVar4 + 4;
              fVar16 = fVar16 + fVar10 * fVar10 + fVar11 * fVar11 + fVar14 * fVar14 +
                       fVar12 * fVar12;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          for (; uVar2 < uVar9; uVar2 = uVar2 + 1) {
            fVar10 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            fVar16 = fVar16 + fVar17 * fVar10 * fVar17 * fVar10;
            fVar17 = fVar17 + param_5;
          }
          fVar16 = fVar16 / (float)*(ushort *)((longlong)param_1 + 0x12);
          if (param_3 != (float *)0x0) {
            fVar17 = _guard_xfg_dispatch_icall_nop(fVar16);
            *pfVar5 = fVar17 * 10.0;
          }
          if (fVar16 <= fVar18) {
            fVar16 = fVar18;
          }
          uVar8 = uVar8 + 1;
          pfVar5 = pfVar5 + 1;
          uVar7 = uVar7 - 1;
          fVar18 = fVar16;
        } while (uVar7 != 0);
      }
      fVar16 = SQRT(fVar16);
    }
    if (0.0 < fVar16) {
      _guard_xfg_dispatch_icall_nop(fVar16);
    }
  }
  return;
}



// FUNCTION 14321ca10 CreateAkMeterFX body=79 status=ok
// SIG undefined CreateAkMeterFX(void)

undefined8 * CreateAkMeterFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
    *puVar1 = &PTR_FUN_145ae5438;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14321ca60 Execute body=477 status=ok
// SIG undefined Execute(void)

void CAkMeterFX::Execute(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  fVar8 = 0.0;
  fVar10 = 1.0;
  if ((*(char *)(lVar7 + 0x24) != '\0') && (*(short *)((longlong)param_2 + 0x12) != 0)) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      fVar10 = *(float *)(param_1 + 0x7c);
      fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
    }
    else {
      *(undefined1 *)(param_1 + 0x80) = 0;
      fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
      fVar10 = fVar8;
    }
    *(float *)(param_1 + 0x7c) = fVar8;
    lVar7 = *(longlong *)(param_1 + 0x10);
    fVar8 = (fVar8 - fVar10) / (float)*(ushort *)((longlong)param_2 + 0x12);
  }
  lVar6 = 0;
  lVar1 = lVar7 + 8;
  if (lVar7 == 0) {
    lVar1 = lVar6;
  }
  uVar9 = AkMeterGetValue(param_2,lVar1,0,fVar10,fVar8);
  lVar7 = *(longlong *)(param_1 + 0x10) + 8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar7 = lVar6;
  }
  AkMeterApplyBallistics(uVar9,(short)param_2[2],lVar7,param_1 + 0x30);
  if ((*(int *)((longlong)param_2 + 0xc) == 0x11) &&
     (*(float *)(*(longlong *)(param_1 + 0x10) + 0x10) < *(float *)(param_1 + 0x3c))) {
    uVar3 = *(ushort *)(param_2 + 2);
    uVar5 = (ulonglong)*(byte *)(param_2 + 1);
    iVar4 = (uint)uVar3 - (uint)*(ushort *)((longlong)param_2 + 0x12);
    if (iVar4 != 0) {
      if (*(byte *)(param_2 + 1) != 0) {
        do {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 +
                             ((ulonglong)*(ushort *)(param_2 + 2) * lVar6 +
                             (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                     (ulonglong)(uint)(iVar4 * 4));
          lVar6 = lVar6 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        uVar3 = *(ushort *)(param_2 + 2);
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar3;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))();
  lVar7 = -1;
  *(undefined4 *)(param_1 + 0x70) = uVar9;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) == 1) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  if ((*(longlong *)(param_1 + 0x68) != lVar7) ||
     (*(int *)(param_1 + 100) != *(int *)(*(longlong *)(param_1 + 0x10) + 0x28))) {
    *(longlong *)(param_1 + 0x68) = lVar7;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28);
    CAkMeterManager::Unregister(*(undefined8 *)(param_1 + 0x28),param_1);
    CAkMeterManager::Register(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}



// FUNCTION 14321cc40 Init body=203 status=ok
// SIG undefined Init(void)

undefined8
CAkMeterFX::Init(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(longlong **)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x30) = *param_5;
  uVar2 = (**(code **)(*param_3 + 8))(param_3);
  lVar3 = CAkMeterManager::Instance(param_2,uVar2);
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (lVar3 == 0) {
    return 2;
  }
  CAkMeterManager::Register(lVar3,param_1);
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar3 + 0x10);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar3 + 0x28);
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  if (*(int *)(lVar3 + 0x20) == 1) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
      *(undefined8 *)(param_1 + 0x68) = uVar2;
    }
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c);
  return 1;
}



// FUNCTION 14321cd90 Term body=78 status=ok
// SIG undefined Term(void)

undefined8 CAkMeterFX::Term(undefined8 *param_1,longlong *param_2)

{
  if (param_1[5] != 0) {
    *(undefined1 *)(param_1 + 0xf) = 1;
    return 1;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14321cde0 FUN_14321cde0 body=43 status=ok
// SIG undefined FUN_14321cde0(void)

undefined8 * FUN_14321cde0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14321ce10 Clone body=75 status=ok
// SIG undefined Clone(void)

void CAkMeterFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5480;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
    return;
  }
  return;
}



// FUNCTION 14321ce60 CreateAkMeterFXParams body=40 status=ok
// SIG undefined CreateAkMeterFXParams(void)

void CreateAkMeterFXParams(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5480;
    return;
  }
  return;
}



// FUNCTION 14321d090 Execute body=1227 status=ok
// SIG undefined Execute(void)

void CAkMeterManager::Execute(undefined8 *param_1)

{
  CAkRegisteredObj *pCVar1;
  ulong uVar2;
  __uint64 _Var3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  long lVar7;
  CAkRegisteredObj *pCVar8;
  uint uVar9;
  __uint64 _Var10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res10;
  undefined8 *local_res18;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140;
  ulong local_138 [2];
  __uint64 local_130;
  float local_124;
  uint local_120;
  float local_11c;
  CAkRegisteredObj *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  
  _Var10 = 0xffffffffffffffff;
  uVar11 = 0;
  uVar12 = 0;
  fVar16 = 0.0;
  local_124 = 0.0;
  fVar15 = -3.4028235e+38;
  local_11c = -3.4028235e+38;
  local_138[0] = 0;
  local_130 = 0xffffffffffffffff;
  local_120 = 0;
  local_res18 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)param_1[4];
  while (puVar6 = local_res18, local_res18 = puVar4, local_res18 != (undefined8 *)0x0) {
    uVar2 = *(ulong *)((longlong)local_res18 + 100);
    if (uVar2 != 0) {
      _Var3 = local_res18[0xd];
      if ((uVar11 != uVar2) || (_Var10 != _Var3)) {
        if (uVar11 != 0) {
          if (_Var10 == 0xffffffffffffffff) {
            pCVar8 = (CAkRegisteredObj *)0x0;
          }
          else {
            pCVar8 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,_Var10);
          }
          local_148 = 0;
          fVar14 = -3.4028235e+38;
          local_144 = 4;
          local_140 = 0;
          local_110 = 0;
          local_108 = 0;
          local_100 = 0xff;
          local_f8 = 0xff;
          local_f0 = 0;
          if (uVar12 != 0) {
            fVar14 = (float)(((uint)(fVar16 / (float)uVar12) & 0x7fffff) + 0x3f800000);
            fVar13 = fVar14 + 1.0;
            fVar14 = (((fVar14 * fVar14 * fVar14 - 1.0) * 1.1581186) / (fVar13 * fVar13 * fVar13)) *
                     10.0 + ((float)((uint)(fVar16 / (float)uVar12) >> 0x17 & 0xff) - 127.0) *
                            3.0103;
          }
          if (fVar15 <= fVar14) {
            fVar15 = fVar14;
          }
          local_118 = pCVar8;
          CAkRTPCMgr::SetRTPCInternal
                    (g_pRTPCMgr,uVar11,fVar15,(AkRTPCKey *)&local_118,(TransParamsBase *)&local_148,
                     1,false);
          if (pCVar8 != (CAkRegisteredObj *)0x0) {
            pCVar1 = pCVar8 + 0x50;
            *(int *)pCVar1 = *(int *)pCVar1 + -1;
            lVar7 = g_DefaultPoolId;
            if (*(int *)pCVar1 == 0) {
              (*(code *)**(undefined8 **)pCVar8)(pCVar8,0);
              AK::MemoryMgr::Free(lVar7,pCVar8);
            }
          }
        }
        fVar16 = 0.0;
        uVar12 = 0;
        fVar15 = -3.4028235e+38;
        local_124 = 0.0;
        local_11c = -3.4028235e+38;
        local_120 = 0;
        _Var10 = _Var3;
        uVar11 = uVar2;
      }
      fVar14 = *(float *)((longlong)local_res18 + 0x3c);
      if (*(char *)(local_res18 + 0xf) != '\0') {
        fVar14 = *(float *)(local_res18 + 0xc);
      }
      if (*(int *)((longlong)local_res18 + 0x74) == 1) {
        if (-37.0 <= fVar14 * 0.05) {
          uVar9 = (uint)(longlong)(fVar14 * 0.05 * 27866352.0 + 1.0653532e+09);
          fVar14 = (float)((uVar9 & 0x7fffff) + 0x3f800000);
          local_res10 = (float)(uVar9 & 0xff800000);
          local_res10 = ((fVar14 * 0.32518977 + 0.020805772) * fVar14 + 0.65304345) * local_res10;
        }
        else {
          local_res10 = 0.0;
        }
        uVar12 = uVar12 + 1;
        fVar16 = fVar16 + local_res10 * local_res10;
        local_124 = fVar16;
        local_120 = uVar12;
      }
      else if (fVar15 <= fVar14) {
        fVar15 = fVar14;
        local_11c = fVar14;
      }
    }
    puVar4 = (undefined8 *)local_res18[1];
    if (*(char *)(local_res18 + 0xf) != '\0') {
      if (local_res18 == (undefined8 *)param_1[4]) {
        param_1[4] = puVar4;
      }
      else {
        puVar6[1] = puVar4;
      }
      if (local_res18 == (undefined8 *)param_1[3]) {
        param_1[3] = puVar6;
      }
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
      plVar5 = (longlong *)*param_1;
      (**(code **)*local_res18)(local_res18,0);
      (**(code **)(*plVar5 + 0x10))(plVar5,local_res18);
      local_res18 = puVar6;
    }
  }
  local_138[0] = uVar11;
  local_130 = _Var10;
  `CAkMeterManager::Execute'::`2'::ValueEntry::PushToRTPC(local_138);
  if (param_1[4] == 0) {
    (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],&LAB_14321d080,0x90);
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    DAT_146b52238 = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1);
  }
  return;
}



// FUNCTION 14321d560 Instance body=176 status=ok
// SIG undefined Instance(void)

undefined8 * CAkMeterManager::Instance(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (DAT_146b52238 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
    DAT_146b52238 = puVar1;
    (**(code **)(*param_2 + 0x40))(param_2,3,0,0x81,&LAB_14321d080,0x90,0);
    DAT_146b52238 = puVar1;
  }
  return DAT_146b52238;
}



// FUNCTION 14321d610 PushToRTPC body=402 status=ok
// SIG undefined PushToRTPC(void)

void `CAkMeterManager::Execute'::`2'::ValueEntry::PushToRTPC(ulong *param_1)

{
  CAkRegisteredObj *pCVar1;
  long lVar2;
  CAkRegisteredObj *pCVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  CAkRegisteredObj *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    pCVar3 = (CAkRegisteredObj *)0x0;
    if (*(__uint64 *)(param_1 + 2) != 0xffffffffffffffff) {
      pCVar3 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(param_1 + 2));
      uVar4 = *param_1;
    }
    fVar7 = -3.4028235e+38;
    local_48 = 0;
    local_40 = 0;
    local_30 = 0;
    local_28 = 0;
    local_10 = 0;
    local_44 = 4;
    local_20 = 0xff;
    local_18 = 0xff;
    if (param_1[6] != 0) {
      fVar5 = (float)param_1[5] / (float)param_1[6];
      fVar7 = (float)(((uint)fVar5 & 0x7fffff) + 0x3f800000);
      fVar6 = fVar7 + 1.0;
      fVar7 = (((fVar7 * fVar7 * fVar7 - 1.0) * 1.1581186) / (fVar6 * fVar6 * fVar6)) * 10.0 +
              ((float)((uint)fVar5 >> 0x17 & 0xff) - 127.0) * 3.0103;
    }
    fVar5 = (float)param_1[7];
    if ((float)param_1[7] <= fVar7) {
      fVar5 = fVar7;
    }
    local_38 = pCVar3;
    CAkRTPCMgr::SetRTPCInternal
              (g_pRTPCMgr,uVar4,fVar5,(AkRTPCKey *)&local_38,(TransParamsBase *)&local_48,1,false);
    if (pCVar3 != (CAkRegisteredObj *)0x0) {
      pCVar1 = pCVar3 + 0x50;
      *(int *)pCVar1 = *(int *)pCVar1 + -1;
      lVar2 = g_DefaultPoolId;
      if (*(int *)pCVar1 == 0) {
        (*(code *)**(undefined8 **)pCVar3)(pCVar3,0);
        AK::MemoryMgr::Free(lVar2,pCVar3);
      }
    }
  }
  return;
}



// FUNCTION 14321d7b0 Register body=168 status=ok
// SIG undefined Register(void)

void CAkMeterManager::Register(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = 0;
  while (lVar1 = lVar3, lVar1 != 0) {
    if (((*(uint *)(lVar1 + 100) <= *(uint *)(param_2 + 100)) &&
        ((*(uint *)(param_2 + 100) != *(uint *)(lVar1 + 100) ||
         (*(ulonglong *)(lVar1 + 0x68) <= *(ulonglong *)(param_2 + 0x68))))) &&
       ((*(ulonglong *)(param_2 + 0x68) != *(ulonglong *)(lVar1 + 0x68) ||
        (*(uint *)(lVar1 + 0x70) <= *(uint *)(param_2 + 0x70))))) break;
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
  }
  *(longlong *)(param_2 + 8) = lVar1;
  if (lVar2 == 0) {
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  else {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  if (lVar1 == 0) {
    *(longlong *)(param_1 + 0x18) = param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00014321d851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14321d860 Unregister body=126 status=ok
// SIG undefined Unregister(void)

void CAkMeterManager::Unregister(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = 0;
  do {
    lVar1 = lVar3;
    if (lVar1 == 0) {
LAB_14321d8c4:
                    /* WARNING: Could not recover jumptable at 0x00014321d8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      return;
    }
    if (lVar1 == param_2) {
      if (lVar1 == *(longlong *)(param_1 + 0x20)) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 8);
      }
      else {
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
      }
      if (lVar1 == *(longlong *)(param_1 + 0x18)) {
        *(longlong *)(param_1 + 0x18) = lVar2;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      goto LAB_14321d8c4;
    }
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = lVar1;
  } while( true );
}



// FUNCTION 14321d8e0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FOnlineStoreOffer>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 14321d910 CreateAkGuitarDistortionFX body=401 status=ok
// SIG undefined CreateAkGuitarDistortionFX(void)

undefined8 * CreateAkGuitarDistortionFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x128);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145ae54b8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    DSP::CAkMultiBandEQ::CAkMultiBandEQ(puVar1 + 4);
    DSP::CAkMultiBandEQ::CAkMultiBandEQ(puVar1 + 7);
    DSP::CAkDistortion::CAkDistortion(puVar1 + 10);
    DSP::CAkRectifier::CAkRectifier((longlong)puVar1 + 0x6c);
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x3f800000;
    *(undefined2 *)(puVar1 + 0x12) = 0x100;
    *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x14) = 0x3f800000;
    *(undefined2 *)((longlong)puVar1 + 0xa4) = 0x100;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x3f800000;
    *(undefined2 *)(puVar1 + 0x17) = 0x100;
    *(undefined8 *)((longlong)puVar1 + 0xbc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x19) = 0x3f800000;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0x100;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0x3f800000;
    *(undefined2 *)(puVar1 + 0x1c) = 0x100;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xec) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x1e) = 0x3f800000;
    *(undefined2 *)((longlong)puVar1 + 0xf4) = 0x100;
    *(undefined4 *)(puVar1 + 0x1f) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xfc) = 0x42480000;
    puVar1[0x20] = 0x42480000;
    *(undefined1 *)(puVar1 + 0x21) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x10c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x22) = 0x42c80000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14321dab0 Execute body=788 status=ok
// SIG undefined Execute(void)

void CAkGuitarDistortionFX::Execute(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  uint in_stack_ffffffffffffff78;
  
  CAkGuitarDistortionFXParams::GetParams(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  SetupEQs(param_1,param_1 + 0x80);
  if (*(char *)(param_1 + 0x108) != '\0') {
    DSP::CAkDistortion::SetParameters
              (param_1 + 0x50,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),
               *(undefined4 *)(param_1 + 0x100),in_stack_ffffffffffffff78 & 0xffffff00);
    DSP::CAkRectifier::SetRectification(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x104),0);
  }
  uVar5 = *(ushort *)((longlong)param_2 + 0x12);
  if (0x1f < uVar5) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar8 = (ulonglong)*(byte *)(param_2 + 1);
    uVar9 = 0;
    uVar3 = (uint)uVar5;
    if (uVar2 - uVar3 != 0) {
      uVar5 = uVar2;
      if (*(byte *)(param_2 + 1) != 0) {
        uVar7 = uVar9;
        do {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 +
                             (*(ushort *)(param_2 + 2) * uVar7 +
                             (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                     (ulonglong)((uVar2 - uVar3) * 4));
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        uVar5 = *(ushort *)(param_2 + 2);
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar5;
      uVar2 = uVar5;
    }
    uVar3 = (uint)uVar2;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),
                       (ulonglong)(*(int *)(param_1 + 0x114) * uVar3) << 2);
    if (lVar4 != 0) {
      if (*(int *)(param_1 + 0x114) != 0) {
        uVar8 = uVar9;
        do {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar4 + (ulonglong)((int)uVar8 * uVar3) * 4),
                     (void *)(*param_2 + *(ushort *)(param_2 + 2) * uVar8 * 4),
                     (ulonglong)((uint)uVar5 * 4));
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + 0x114));
      }
      DSP::CAkMultiBandEQ::ProcessBuffer(param_1 + 0x20,param_2);
      DSP::CAkDistortion::ProcessBuffer(param_1 + 0x50,param_2);
      DSP::CAkRectifier::ProcessBuffer(param_1 + 0x6c,param_2);
      DSP::CAkMultiBandEQ::ProcessBuffer(param_1 + 0x38,param_2);
      fVar11 = (100.0 - *(float *)(param_1 + 0x120)) * 0.01;
      fVar10 = (100.0 - *(float *)(param_1 + 0x110)) * 0.01;
      if (*(int *)(param_1 + 0x114) != 0) {
        do {
          lVar1 = *param_2 + *(ushort *)(param_2 + 2) * uVar9 * 4;
          DSP::Mix2Interp(lVar1,lVar4 + (ulonglong)((int)uVar9 * uVar3) * 4,
                          *(float *)(param_1 + 0x11c) * (1.0 - fVar11),
                          *(float *)(param_1 + 0x10c) * (1.0 - fVar10),
                          *(float *)(param_1 + 0x11c) * fVar11,*(float *)(param_1 + 0x10c) * fVar10,
                          uVar5);
          DSP::OnePoleZeroHPFilter::ProcessBuffer
                    (*(longlong *)(param_1 + 0x18) + uVar9 * 0xc,lVar1,uVar5);
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + 0x114));
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar4);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x10c);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x110);
    }
  }
  return;
}



// FUNCTION 14321ddd0 Init body=395 status=ok
// SIG undefined Init(void)

undefined8
CAkGuitarDistortionFX::Init
          (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
          undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(longlong **)(param_1 + 0x10) = param_2;
  uVar4 = param_5[1];
  *(uint *)(param_1 + 0x114) = uVar4 & 0xff;
  *(undefined4 *)(param_1 + 0x118) = *param_5;
  uVar2 = DSP::CAkMultiBandEQ::Init(param_1 + 0x20,param_2,uVar4 & 0xff,3);
  if (((int)uVar2 == 1) &&
     (uVar2 = DSP::CAkMultiBandEQ::Init(param_1 + 0x38,param_2,*(undefined2 *)(param_1 + 0x114)),
     (int)uVar2 == 1)) {
    lVar3 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 0x114) * 0xc);
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (lVar3 != 0) {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x114) != 0) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x18);
          puVar1 = (undefined8 *)(lVar3 + uVar5 * 0xc);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            *(undefined4 *)(puVar1 + 1) = 0;
            lVar3 = *(longlong *)(param_1 + 0x18);
          }
          uVar4 = (int)uVar5 + 1;
          *(float *)(lVar3 + 8 + uVar5 * 0xc) = 1.0 - 251.32742 / (float)*(uint *)(param_1 + 0x118);
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 0x114));
      }
      CAkGuitarDistortionFXParams::GetParams(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
      SetupEQs(param_1,param_1 + 0x80);
      DSP::CAkDistortion::SetParameters
                (param_1 + 0x50,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),
                 *(undefined4 *)(param_1 + 0x100),1);
      DSP::CAkRectifier::SetRectification(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x104),1);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x10c);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x110);
      return 1;
    }
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 14321df60 Reset body=83 status=ok
// SIG undefined Reset(void)

undefined8 CAkGuitarDistortionFX::Reset(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  DSP::CAkMultiBandEQ::Reset(param_1 + 0x20);
  DSP::CAkMultiBandEQ::Reset(param_1 + 0x38);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    do {
      uVar1 = (int)uVar2 + 1;
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 0xc) = 0;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x114));
  }
  return 1;
}



// FUNCTION 14321dfc0 SetupEQs body=245 status=ok
// SIG undefined SetupEQs(void)

void CAkGuitarDistortionFX::SetupEQs(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2 + 0xc);
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (*(char *)((longlong)puVar3 + 5) != '\0') {
      DSP::CAkMultiBandEQ::SetCoefficients
                (param_1 + 0x20,uVar1,*(undefined4 *)(param_1 + 0x118),puVar3[-3],puVar3[-1],
                 puVar3[-2],*puVar3);
      DSP::CAkMultiBandEQ::SetBandActive(param_1 + 0x20,uVar1,*(undefined1 *)(puVar3 + 1));
    }
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 5;
  } while (uVar1 < 3);
  puVar3 = (undefined4 *)(param_2 + 0x48);
  do {
    if (*(char *)((longlong)puVar3 + 5) != '\0') {
      DSP::CAkMultiBandEQ::SetCoefficients
                (param_1 + 0x38,uVar2,*(undefined4 *)(param_1 + 0x118),puVar3[-3],puVar3[-1],
                 puVar3[-2],*puVar3);
      DSP::CAkMultiBandEQ::SetBandActive(param_1 + 0x38,uVar2,*(undefined1 *)(puVar3 + 1));
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 5;
  } while (uVar2 < 3);
  return;
}



// FUNCTION 14321e0c0 Term body=101 status=ok
// SIG undefined Term(void)

undefined8 CAkGuitarDistortionFX::Term(undefined8 *param_1,longlong *param_2)

{
  DSP::CAkMultiBandEQ::Term(param_1 + 4);
  DSP::CAkMultiBandEQ::Term(param_1 + 7,param_2);
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[3] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14321e130 AkGuitarDistortionFXParams body=197 status=ok
// SIG undefined AkGuitarDistortionFXParams(void)

undefined8 * AkGuitarDistortionFXParams::AkGuitarDistortionFXParams(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x447a0000;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x447a0000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined2 *)(param_1 + 7) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0x100;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x100;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x42480000;
  param_1[0x10] = 0x42480000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x42c80000;
  return param_1;
}



// FUNCTION 14321e200 FUN_14321e200 body=43 status=ok
// SIG undefined FUN_14321e200(void)

undefined8 * FUN_14321e200(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14321e230 Clone body=217 status=ok
// SIG undefined Clone(void)

undefined8 * CAkGuitarDistortionFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5508;
    AkGuitarDistortionFXParams::AkGuitarDistortionFXParams(puVar2 + 1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    puVar2[0xe] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    puVar2[0xf] = *(undefined8 *)(param_1 + 0x78);
    puVar2[0x10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    puVar2[0x11] = *(undefined8 *)(param_1 + 0x88);
    puVar2[0x12] = uVar1;
    *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)(param_1 + 0x98);
    *(undefined1 *)((longlong)puVar2 + 0x19) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x2d) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x41) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x55) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x69) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x7d) = 1;
    *(undefined1 *)(puVar2 + 0x12) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14321e310 CreateAkGuitarDistortionFXParams body=90 status=ok
// SIG undefined CreateAkGuitarDistortionFXParams(void)

undefined8 * CreateAkGuitarDistortionFXParams(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5508;
    AkGuitarDistortionFXParams::AkGuitarDistortionFXParams(puVar1 + 1);
    *(undefined1 *)((longlong)puVar1 + 0x19) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x2d) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x41) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x55) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x69) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x7d) = 1;
    *(undefined1 *)(puVar1 + 0x12) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14321e370 GetParams body=121 status=ok
// SIG undefined GetParams(void)

void CAkGuitarDistortionFXParams::GetParams(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[2] = *(undefined8 *)(param_1 + 0x18);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  param_2[4] = *(undefined8 *)(param_1 + 0x28);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  param_2[6] = *(undefined8 *)(param_1 + 0x38);
  param_2[7] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  param_2[8] = *(undefined8 *)(param_1 + 0x48);
  param_2[9] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  param_2[10] = *(undefined8 *)(param_1 + 0x58);
  param_2[0xb] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  param_2[0xc] = *(undefined8 *)(param_1 + 0x68);
  param_2[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  param_2[0xe] = *(undefined8 *)(param_1 + 0x78);
  param_2[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  param_2[0x10] = *(undefined8 *)(param_1 + 0x88);
  param_2[0x11] = uVar1;
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 14321e3f0 FUN_14321e3f0 body=976 status=ok
// SIG undefined FUN_14321e3f0(void)

undefined8 FUN_14321e3f0(longlong param_1,short param_2,float *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_3 != (float *)0x0) {
    iVar1 = (int)param_2;
    if (param_2 < 0x3c) {
      uVar2 = (ulonglong)(uint)(iVar1 / 10);
      iVar3 = iVar1 % 10;
      if (param_2 < 0) {
        if (param_2 < 0x1e) {
          return 0x1f;
        }
      }
      else if (param_2 < 0x1e) {
        if (iVar3 == 0) {
          fVar5 = *param_3;
          param_1 = param_1 + uVar2 * 0x14;
          *(undefined1 *)(param_1 + 0x19) = 1;
          *(int *)(param_1 + 8) = (int)(longlong)fVar5;
          return 1;
        }
        if (iVar3 == 1) {
          fVar5 = *param_3;
          param_1 = param_1 + uVar2 * 0x14;
          fVar4 = -48.0;
          if ((-48.0 <= fVar5) && (fVar4 = fVar5, 48.0 <= fVar5)) {
            fVar4 = 48.0;
          }
          *(float *)(param_1 + 0xc) = fVar4;
          *(undefined1 *)(param_1 + 0x19) = 1;
          return 1;
        }
        if (iVar3 == 2) {
          param_1 = param_1 + uVar2 * 0x14;
          *(float *)(param_1 + 0x10) = *param_3;
          *(undefined1 *)(param_1 + 0x19) = 1;
          return 1;
        }
        if (iVar3 != 3) {
          if (iVar3 != 4) {
            return 0x1f;
          }
          if (*param_3 != 0.0) {
            param_1 = param_1 + uVar2 * 0x14;
            *(undefined1 *)(param_1 + 0x18) = 1;
            *(undefined1 *)(param_1 + 0x19) = 1;
            return 1;
          }
          param_1 = param_1 + uVar2 * 0x14;
          *(undefined1 *)(param_1 + 0x18) = 0;
          *(undefined1 *)(param_1 + 0x19) = 1;
          return 1;
        }
        param_1 = param_1 + uVar2 * 0x14;
        *(float *)(param_1 + 0x14) = *param_3;
        *(undefined1 *)(param_1 + 0x19) = 1;
        return 1;
      }
      uVar2 = (ulonglong)(uint)((iVar1 + -0x1e) / 10);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x44 + uVar2 * 0x14) = (int)(longlong)*param_3;
        *(undefined1 *)(param_1 + 0x55 + uVar2 * 0x14) = 1;
        return 1;
      }
      if (iVar3 == 1) {
        fVar5 = *param_3;
        fVar4 = -48.0;
        if ((-48.0 <= fVar5) && (fVar4 = fVar5, 48.0 <= fVar5)) {
          fVar4 = 48.0;
        }
        *(float *)(param_1 + 0x48 + uVar2 * 0x14) = fVar4;
        *(undefined1 *)(param_1 + 0x55 + uVar2 * 0x14) = 1;
        return 1;
      }
      if (iVar3 == 2) {
        *(float *)(param_1 + 0x4c + uVar2 * 0x14) = *param_3;
        *(undefined1 *)(param_1 + 0x55 + uVar2 * 0x14) = 1;
        return 1;
      }
      if (iVar3 == 3) {
        *(float *)(param_1 + (uVar2 + 4) * 0x14) = *param_3;
        *(undefined1 *)(param_1 + 0x55 + uVar2 * 0x14) = 1;
        return 1;
      }
      if (iVar3 == 4) {
        if (*param_3 != 0.0) {
          *(undefined1 *)(param_1 + 0x54 + uVar2 * 0x14) = 1;
          *(undefined1 *)(param_1 + 0x55 + uVar2 * 0x14) = 1;
          return 1;
        }
        *(undefined1 *)(param_1 + 0x54 + uVar2 * 0x14) = 0;
        *(undefined1 *)(param_1 + 0x55 + uVar2 * 0x14) = 1;
        return 1;
      }
    }
    else {
      switch(iVar1) {
      case 0x3c:
        fVar5 = *param_3;
        *(undefined1 *)(param_1 + 0x90) = 1;
        *(int *)(param_1 + 0x80) = (int)(longlong)fVar5;
        return 1;
      case 0x3d:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x84) = fVar4;
        *(undefined1 *)(param_1 + 0x90) = 1;
        return 1;
      case 0x3e:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x88) = fVar4;
        *(undefined1 *)(param_1 + 0x90) = 1;
        return 1;
      case 0x3f:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x8c) = fVar4;
        *(undefined1 *)(param_1 + 0x90) = 1;
        return 1;
      case 0x40:
        fVar5 = *param_3;
        fVar4 = -24.0;
        if ((-24.0 <= fVar5) && (fVar4 = fVar5, 24.0 <= fVar5)) {
          fVar4 = 24.0;
        }
        fVar5 = _guard_xfg_dispatch_icall_nop(10.0,fVar4 * 0.05);
        *(float *)(param_1 + 0x94) = fVar5;
        return 1;
      case 0x41:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x98) = fVar4;
        return 1;
      }
    }
  }
  return 0x1f;
}



// FUNCTION 14321e7e0 SetParamsBlock body=411 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkGuitarDistortionFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)((longlong)param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x37);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x3b);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x3f);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x58) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x5c) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x60) = param_2[0x13];
  *(undefined4 *)(param_1 + 100) = param_2[0x14];
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x61);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x65);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x72);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)((longlong)param_2 + 0x76) * 0.05);
  *(float *)(param_1 + 0x94) = fVar1;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  return 1;
}



// FUNCTION 14321e980 CAkMultiBandEQ body=22 status=ok
// SIG undefined CAkMultiBandEQ(void)

undefined8 * DSP::CAkMultiBandEQ::CAkMultiBandEQ(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 14321e9a0 Init body=404 status=ok
// SIG undefined Init(void)

undefined8
DSP::CAkMultiBandEQ::Init(longlong *param_1,longlong *param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar8;
  
  *(ushort *)(param_1 + 2) = param_4;
  *(ushort *)((longlong)param_1 + 0x12) = param_3;
  if (param_4 != 0) {
    lVar3 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)param_4 * 0x28);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    uVar8 = 0;
    if (param_4 != 0) {
      iVar11 = 0;
      uVar6 = param_3 & 1;
      iVar1 = uVar6 + ((param_3 >> 1 & 1) + (uint)(param_3 >> 2)) * 4;
      iVar10 = iVar1 * 0x10;
      iVar4 = 0xf;
      if ((param_3 & 2) != 0) {
        iVar4 = 0x6f;
      }
      if (3 < param_3) {
        iVar11 = 0x14;
      }
      uVar9 = uVar8;
      do {
        lVar3 = *param_1;
        puVar2 = (undefined8 *)(uVar9 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *(undefined1 *)(puVar2 + 4) = 0;
          lVar3 = *param_1;
        }
        *(undefined1 *)(uVar9 + 0x20 + lVar3) = 0;
        *(uint *)(uVar9 + 0x1c + lVar3) = (uint)param_3;
        *(uint *)(uVar9 + 0x18 + lVar3) = iVar11 + iVar10 + iVar4 + uVar6 * 0x80;
        _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
        *(void **)(uVar9 + 8 + lVar3) = _Dst;
        if (_Dst == (void *)0x0) {
          return 0x34;
        }
        ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(uVar9 + 0x18 + lVar3));
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *(int *)(uVar9 + 0x18 + lVar3) = iVar10;
        uVar5 = *(longlong *)(uVar9 + 8 + lVar3) + 0xfU & 0xfffffffffffffff0;
        *(ulonglong *)(uVar9 + lVar3) = uVar5;
        *(ulonglong *)(uVar9 + 0x10 + lVar3) = uVar5 + (ulonglong)(uint)(iVar1 * 4) * 4;
        uVar9 = uVar9 + 0x28;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      } while (uVar7 < param_4);
    }
  }
  return 1;
}



// FUNCTION 14321eb40 ProcessBuffer body=2037 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::CAkMultiBandEQ::ProcessBuffer(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  float *pfVar25;
  float *pfVar26;
  ulonglong uVar27;
  float *pfVar28;
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
  uint local_138;
  float local_118;
  float local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  uVar3 = *(ushort *)((longlong)param_2 + 0x12);
  local_138 = 0;
  if ((short)param_1[2] != 0) {
    do {
      uVar17 = (uint)uVar3;
      if ((*(uint *)((longlong)param_1 + 0xc) >> (local_138 & 0x1f) & 1) != 0) {
        uVar4 = *(ushort *)(param_2 + 2);
        uVar23 = (ulonglong)uVar4;
        lVar5 = *param_1;
        pfVar26 = (float *)*param_2;
        uVar11 = (ulonglong)local_138;
        if ((uVar3 & 3) != 0) {
          iVar15 = 4 - (uVar17 & 3);
          uVar27 = (ulonglong)uVar17;
          uVar17 = iVar15 + uVar17;
          pfVar14 = pfVar26 + uVar27;
          do {
            *pfVar14 = 0.0;
            pfVar14 = pfVar14 + 1;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        pfVar14 = *(float **)(lVar5 + uVar11 * 0x28);
        uVar19 = *(uint *)(lVar5 + 0x1c + uVar11 * 0x28);
        if (*(char *)(lVar5 + 0x20 + uVar11 * 0x28) == '\0') {
          if (3 < uVar19) {
            pfVar25 = pfVar14 + 8;
            uVar27 = (ulonglong)(uVar19 >> 2);
            do {
              fVar41 = pfVar25[-4];
              fVar42 = pfVar25[-3];
              fVar43 = pfVar25[-2];
              fVar44 = pfVar25[-1];
              uVar18 = *(uint *)(lVar5 + 0x1c + uVar11 * 0x28);
              fVar61 = *pfVar14;
              fVar62 = pfVar14[1];
              fVar63 = pfVar14[2];
              fVar64 = pfVar14[3];
              fVar53 = *pfVar25;
              fVar54 = pfVar25[1];
              fVar55 = pfVar25[2];
              fVar56 = pfVar25[3];
              fVar57 = pfVar25[4];
              fVar58 = pfVar25[5];
              fVar59 = pfVar25[6];
              fVar60 = pfVar25[7];
              lVar16 = (ulonglong)((uVar18 >> 1 & 1) * 0x18) + (ulonglong)((uVar18 & 1) << 5);
              lVar21 = *(longlong *)(lVar5 + 0x10 + uVar11 * 0x28);
              fVar38 = *(float *)(lVar21 + lVar16 * 4);
              fVar40 = *(float *)(lVar21 + 4 + lVar16 * 4);
              fVar37 = *(float *)(lVar21 + 8 + lVar16 * 4);
              fVar39 = *(float *)(lVar21 + 0xc + lVar16 * 4);
              fVar2 = *(float *)(lVar21 + 0x10 + lVar16 * 4);
              if (pfVar26 < pfVar26 + uVar17) {
                uVar13 = (ulonglong)((uint)uVar4 + (uint)uVar4);
                pfVar28 = pfVar26 + ((uint)uVar4 + (uint)uVar4);
                lVar21 = ((uint)uVar4 + (uint)uVar4 * 2) - uVar13;
                fVar45 = fVar61;
                fVar46 = fVar62;
                fVar47 = fVar63;
                fVar48 = fVar64;
                local_f8 = fVar41;
                fStack_f4 = fVar42;
                fStack_f0 = fVar43;
                fStack_ec = fVar44;
                do {
                  pfVar1 = pfVar28 + lVar21;
                  fVar6 = *pfVar1;
                  fVar7 = pfVar1[1];
                  fVar44 = pfVar1[2];
                  fVar64 = pfVar1[3];
                  pfVar1 = pfVar28 + (uVar23 - uVar13);
                  fVar8 = *pfVar1;
                  fVar50 = pfVar1[1];
                  fVar42 = pfVar1[2];
                  fVar62 = pfVar1[3];
                  pfVar1 = pfVar28 + -uVar13;
                  fVar52 = *pfVar1;
                  fVar51 = pfVar1[1];
                  fVar41 = pfVar1[2];
                  fVar61 = pfVar1[3];
                  fVar9 = *pfVar28;
                  fVar10 = pfVar28[1];
                  fVar43 = pfVar28[2];
                  fVar63 = pfVar28[3];
                  fVar33 = fVar52 * fVar38 + fVar40 * fVar45 + fVar37 * local_f8 + fVar39 * fVar53 +
                           fVar2 * fVar57;
                  fVar34 = fVar8 * fVar38 + fVar40 * fVar46 + fVar37 * fStack_f4 + fVar39 * fVar54 +
                           fVar2 * fVar58;
                  fVar35 = fVar9 * fVar38 + fVar40 * fVar47 + fVar37 * fStack_f0 + fVar39 * fVar55 +
                           fVar2 * fVar59;
                  fVar36 = fVar6 * fVar38 + fVar40 * fVar48 + fVar37 * fStack_ec + fVar39 * fVar56 +
                           fVar2 * fVar60;
                  fVar45 = fVar52 * fVar40 + fVar51 * fVar38 + fVar37 * fVar45 + fVar33 * fVar39 +
                           fVar2 * fVar53;
                  fVar46 = fVar8 * fVar40 + fVar50 * fVar38 + fVar37 * fVar46 + fVar34 * fVar39 +
                           fVar2 * fVar54;
                  fVar47 = fVar9 * fVar40 + fVar10 * fVar38 + fVar37 * fVar47 + fVar35 * fVar39 +
                           fVar2 * fVar55;
                  fVar48 = fVar6 * fVar40 + fVar7 * fVar38 + fVar37 * fVar48 + fVar36 * fVar39 +
                           fVar2 * fVar56;
                  fVar57 = fVar51 * fVar40 + fVar41 * fVar38 + fVar52 * fVar37 + fVar45 * fVar39 +
                           fVar33 * fVar2;
                  fVar58 = fVar50 * fVar40 + fVar42 * fVar38 + fVar8 * fVar37 + fVar46 * fVar39 +
                           fVar34 * fVar2;
                  fVar59 = fVar10 * fVar40 + fVar43 * fVar38 + fVar9 * fVar37 + fVar47 * fVar39 +
                           fVar35 * fVar2;
                  fVar60 = fVar7 * fVar40 + fVar44 * fVar38 + fVar6 * fVar37 + fVar48 * fVar39 +
                           fVar36 * fVar2;
                  fVar53 = fVar41 * fVar40 + fVar61 * fVar38 + fVar51 * fVar37 + fVar57 * fVar39 +
                           fVar45 * fVar2;
                  fVar54 = fVar42 * fVar40 + fVar62 * fVar38 + fVar50 * fVar37 + fVar58 * fVar39 +
                           fVar46 * fVar2;
                  fVar55 = fVar43 * fVar40 + fVar63 * fVar38 + fVar10 * fVar37 + fVar59 * fVar39 +
                           fVar47 * fVar2;
                  fVar56 = fVar44 * fVar40 + fVar64 * fVar38 + fVar7 * fVar37 + fVar60 * fVar39 +
                           fVar48 * fVar2;
                  pfVar1 = pfVar28 + -uVar13;
                  *pfVar1 = fVar33;
                  pfVar1[1] = fVar45;
                  pfVar1[2] = fVar57;
                  pfVar1[3] = fVar53;
                  pfVar1 = pfVar28 + (uVar23 - uVar13);
                  *pfVar1 = fVar34;
                  pfVar1[1] = fVar46;
                  pfVar1[2] = fVar58;
                  pfVar1[3] = fVar54;
                  *pfVar28 = fVar35;
                  pfVar28[1] = fVar47;
                  pfVar28[2] = fVar59;
                  pfVar28[3] = fVar55;
                  pfVar1 = pfVar28 + lVar21;
                  *pfVar1 = fVar36;
                  pfVar1[1] = fVar48;
                  pfVar1[2] = fVar60;
                  pfVar1[3] = fVar56;
                  pfVar28 = pfVar28 + 4;
                  fVar45 = fVar61;
                  fVar46 = fVar62;
                  fVar47 = fVar63;
                  fVar48 = fVar64;
                  local_f8 = fVar41;
                  fStack_f4 = fVar42;
                  fStack_f0 = fVar43;
                  fStack_ec = fVar44;
                } while (pfVar28 + -uVar13 < pfVar26 + uVar17);
              }
              pfVar26 = pfVar26 + (uint)uVar4 * 4;
              *pfVar14 = fVar61;
              pfVar14[1] = fVar62;
              pfVar14[2] = fVar63;
              pfVar14[3] = fVar64;
              uVar19 = uVar19 - 4;
              pfVar25[-4] = fVar41;
              pfVar25[-3] = fVar42;
              pfVar25[-2] = fVar43;
              pfVar25[-1] = fVar44;
              pfVar14 = pfVar14 + 0x10;
              *pfVar25 = fVar53;
              pfVar25[1] = fVar54;
              pfVar25[2] = fVar55;
              pfVar25[3] = fVar56;
              pfVar25[4] = fVar57;
              pfVar25[5] = fVar58;
              pfVar25[6] = fVar59;
              pfVar25[7] = fVar60;
              pfVar25 = pfVar25 + 0x10;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if (1 < uVar19) {
            lVar21 = *(longlong *)(lVar5 + 0x10 + uVar11 * 0x28);
            fVar38 = pfVar14[8];
            fVar40 = pfVar14[9];
            fVar37 = pfVar14[0xc];
            fVar39 = pfVar14[0xd];
            uVar27 = (ulonglong)((*(uint *)(lVar5 + 0x1c + uVar11 * 0x28) & 1) << 5);
            pfVar25 = (float *)(lVar21 + 0x50 + uVar27 * 4);
            fVar2 = *pfVar25;
            fVar41 = pfVar25[1];
            fVar42 = pfVar25[2];
            fVar43 = pfVar25[3];
            pfVar25 = (float *)(lVar21 + uVar27 * 4);
            fVar44 = *pfVar25;
            fVar61 = pfVar25[1];
            fVar62 = pfVar25[2];
            fVar63 = pfVar25[3];
            pfVar25 = (float *)(lVar21 + 0x10 + uVar27 * 4);
            fVar64 = *pfVar25;
            fVar53 = pfVar25[1];
            fVar54 = pfVar25[2];
            fVar55 = pfVar25[3];
            pfVar25 = (float *)(lVar21 + 0x20 + uVar27 * 4);
            fVar56 = *pfVar25;
            fVar57 = pfVar25[1];
            fVar58 = pfVar25[2];
            fVar59 = pfVar25[3];
            pfVar25 = (float *)(lVar21 + 0x30 + uVar27 * 4);
            fVar60 = *pfVar25;
            fVar45 = pfVar25[1];
            fVar46 = pfVar25[2];
            fVar47 = pfVar25[3];
            pfVar25 = (float *)(lVar21 + 0x40 + uVar27 * 4);
            fVar48 = *pfVar25;
            fVar6 = pfVar25[1];
            fVar7 = pfVar25[2];
            fVar8 = pfVar25[3];
            fVar50 = *pfVar14;
            fVar52 = pfVar14[1];
            fVar51 = pfVar14[4];
            fVar9 = pfVar14[5];
            for (pfVar25 = pfVar26; pfVar25 < pfVar26 + uVar17; pfVar25 = pfVar25 + 4) {
              pfVar28 = pfVar25 + uVar23;
              fVar10 = *pfVar28;
              fVar33 = pfVar28[1];
              fVar34 = pfVar28[2];
              fVar35 = pfVar28[3];
              fVar36 = *pfVar25;
              fVar29 = pfVar25[1];
              fVar30 = pfVar25[2];
              fVar31 = pfVar25[3];
              fVar49 = fVar36 * fVar64 + fVar36 * fVar44 + fVar56 * fVar50 + fVar60 * fVar51 +
                       fVar48 * fVar38 + fVar2 * fVar37;
              fVar50 = fVar36 * fVar53 + fVar29 * fVar61 + fVar57 * fVar50 + fVar45 * fVar51 +
                       fVar6 * fVar38 + fVar41 * fVar37;
              fVar51 = fVar10 * fVar54 + fVar10 * fVar62 + fVar58 * fVar52 + fVar46 * fVar9 +
                       fVar7 * fVar40 + fVar42 * fVar39;
              fVar52 = fVar10 * fVar55 + fVar33 * fVar63 + fVar59 * fVar52 + fVar47 * fVar9 +
                       fVar8 * fVar40 + fVar43 * fVar39;
              fVar37 = fVar30 * fVar64 + fVar30 * fVar44 + fVar29 * fVar56 + fVar36 * fVar60 +
                       fVar50 * fVar48 + fVar49 * fVar2;
              fVar38 = fVar30 * fVar53 + fVar31 * fVar61 + fVar29 * fVar57 + fVar36 * fVar45 +
                       fVar50 * fVar6 + fVar49 * fVar41;
              fVar39 = fVar34 * fVar54 + fVar34 * fVar62 + fVar33 * fVar58 + fVar10 * fVar46 +
                       fVar52 * fVar7 + fVar51 * fVar42;
              fVar40 = fVar34 * fVar55 + fVar35 * fVar63 + fVar33 * fVar59 + fVar10 * fVar47 +
                       fVar52 * fVar8 + fVar51 * fVar43;
              *pfVar25 = fVar49;
              pfVar25[1] = fVar50;
              pfVar25[2] = fVar37;
              pfVar25[3] = fVar38;
              pfVar28 = pfVar25 + uVar23;
              *pfVar28 = fVar51;
              pfVar28[1] = fVar52;
              pfVar28[2] = fVar39;
              pfVar28[3] = fVar40;
              fVar50 = fVar31;
              fVar52 = fVar35;
              fVar51 = fVar30;
              fVar9 = fVar34;
            }
            *pfVar14 = fVar50;
            pfVar14[4] = fVar51;
            pfVar26 = pfVar26 + ((uint)uVar4 + (uint)uVar4);
            pfVar14[8] = fVar38;
            uVar19 = uVar19 - 2;
            pfVar14[0xc] = fVar37;
            pfVar14[1] = fVar52;
            pfVar14[5] = fVar9;
            pfVar14[9] = fVar40;
            pfVar14[0xd] = fVar39;
          }
        }
        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
          uVar18 = *(uint *)(lVar5 + 0x1c + uVar11 * 0x28);
          uVar22 = uVar18 - uVar19;
          uVar24 = uVar22 >> 2;
          uVar20 = uVar22 & 3;
          if ((uVar18 - 1 == uVar22) && ((uVar18 & 1) != 0)) {
            uVar12 = uVar24;
            if ((uVar18 != 1) && (1 < uVar20)) {
              uVar12 = uVar24 + 1;
            }
            lVar21 = *(longlong *)(lVar5 + uVar11 * 0x28);
            uVar27 = (ulonglong)(uVar12 << 4);
            fVar38 = *(float *)(lVar21 + uVar27 * 4);
            local_118 = *(float *)(lVar21 + 4 + uVar27 * 4);
            local_108 = *(float *)(lVar21 + 8 + uVar27 * 4);
            local_f8 = *(float *)(lVar21 + 0xc + uVar27 * 4);
          }
          else {
            lVar16 = (ulonglong)(uVar24 << 4) + (ulonglong)uVar20;
            lVar21 = *(longlong *)(lVar5 + uVar11 * 0x28);
            fVar38 = *(float *)(lVar21 + lVar16 * 4);
            local_118 = *(float *)(lVar21 + 0x10 + lVar16 * 4);
            local_108 = *(float *)(lVar21 + 0x20 + lVar16 * 4);
            local_f8 = *(float *)(lVar21 + 0x30 + lVar16 * 4);
          }
          pfVar14 = *(float **)(lVar5 + 0x10 + uVar11 * 0x28);
          fVar40 = *pfVar14;
          fVar37 = pfVar14[1];
          fVar39 = pfVar14[2];
          fVar2 = pfVar14[3];
          fVar41 = pfVar14[4];
          fVar42 = pfVar14[5];
          fVar43 = pfVar14[6];
          fVar44 = pfVar14[7];
          fVar61 = pfVar14[8];
          fVar62 = pfVar14[9];
          fVar63 = pfVar14[10];
          fVar64 = pfVar14[0xb];
          fVar53 = pfVar14[0xc];
          fVar54 = pfVar14[0xd];
          fVar55 = pfVar14[0xe];
          fVar56 = pfVar14[0xf];
          fVar57 = pfVar14[0x10];
          fVar58 = pfVar14[0x11];
          fVar59 = pfVar14[0x12];
          fVar60 = pfVar14[0x13];
          fVar45 = pfVar14[0x14];
          fVar46 = pfVar14[0x15];
          fVar47 = pfVar14[0x16];
          fVar48 = pfVar14[0x17];
          fVar6 = pfVar14[0x18];
          fVar7 = pfVar14[0x19];
          fVar8 = pfVar14[0x1a];
          fVar50 = pfVar14[0x1b];
          fVar52 = pfVar14[0x1c];
          fVar51 = pfVar14[0x1d];
          fVar9 = pfVar14[0x1e];
          fVar10 = pfVar14[0x1f];
          pfVar14 = pfVar26;
          fVar33 = local_118;
          fVar34 = fVar38;
          if (pfVar26 < pfVar26 + uVar17) {
            do {
              fVar35 = *pfVar14;
              fVar36 = pfVar14[1];
              local_118 = pfVar14[2];
              fVar38 = pfVar14[3];
              fVar29 = fVar6 * local_108;
              fVar30 = fVar7 * local_108;
              fVar31 = fVar52 * local_f8;
              fVar49 = fVar51 * local_f8;
              fVar32 = fVar10 * local_f8;
              local_f8 = fVar36 * fVar63 +
                         fVar43 * local_118 +
                         fVar59 * fVar34 + local_118 * fVar39 + fVar47 * fVar33 + fVar8 * local_108
                         + fVar9 * local_f8 + fVar35 * fVar55;
              local_108 = fVar36 * fVar64 +
                          fVar44 * local_118 +
                          fVar60 * fVar34 + fVar38 * fVar2 + fVar48 * fVar33 + fVar50 * local_108 +
                          fVar32 + fVar35 * fVar56;
              *pfVar14 = fVar36 * fVar61 +
                         fVar41 * local_118 +
                         fVar57 * fVar34 + fVar35 * fVar40 + fVar45 * fVar33 + fVar29 + fVar31 +
                         fVar35 * fVar53;
              pfVar14[1] = fVar36 * fVar62 +
                           fVar42 * local_118 +
                           fVar58 * fVar34 + fVar36 * fVar37 + fVar46 * fVar33 + fVar30 + fVar49 +
                           fVar35 * fVar54;
              pfVar14[2] = local_f8;
              pfVar14[3] = local_108;
              pfVar14 = pfVar14 + 4;
              fVar33 = local_118;
              fVar34 = fVar38;
            } while (pfVar14 < pfVar26 + uVar17);
            uVar18 = *(uint *)(lVar5 + 0x1c + uVar11 * 0x28);
          }
          if ((uVar18 - 1 == uVar22) && ((uVar18 & 1) != 0)) {
            if ((uVar18 != 1) && (1 < uVar20)) {
              uVar24 = uVar24 + 1;
            }
            uVar27 = (ulonglong)(uVar24 << 4);
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + uVar27 * 4) = fVar38;
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + 4 + uVar27 * 4) = local_118;
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + 8 + uVar27 * 4) = local_108;
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + 0xc + uVar27 * 4) = local_f8;
          }
          else {
            lVar21 = (ulonglong)(uVar24 << 4) + (ulonglong)uVar20;
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + lVar21 * 4) = fVar38;
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + 0x10 + lVar21 * 4) = local_118;
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + 0x20 + lVar21 * 4) = local_108;
            *(float *)(*(longlong *)(lVar5 + uVar11 * 0x28) + 0x30 + lVar21 * 4) = local_f8;
          }
          pfVar26 = pfVar26 + uVar23;
        }
      }
      local_138 = local_138 + 1;
    } while (local_138 < *(ushort *)(param_1 + 2));
  }
  return;
}



// FUNCTION 14321f340 Reset body=78 status=ok
// SIG undefined Reset(void)

void DSP::CAkMultiBandEQ::Reset(longlong *param_1)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_1[1] != 0) {
    do {
      _Dst = *(void **)(*param_1 + uVar2 * 0x28);
      if (_Dst != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)*(uint *)(*param_1 + 0x18 + uVar2 * 0x28))
        ;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 1));
  }
  return;
}



// FUNCTION 14321f390 SetBandActive body=37 status=ok
// SIG undefined SetBandActive(void)

void DSP::CAkMultiBandEQ::SetBandActive(longlong param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar1;
    return;
  }
  *(uint *)(param_1 + 0xc) = ~uVar1 & *(uint *)(param_1 + 0xc);
  return;
}



// FUNCTION 14321f3c0 SetCoefficients body=919 status=ok
// SIG undefined SetCoefficients(void)

void DSP::CAkMultiBandEQ::SetCoefficients
               (longlong *param_1,ulonglong param_2,uint param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_78;
  float local_74 [27];
  
  lVar1 = *param_1;
  param_2 = param_2 & 0xffffffff;
  ComputeBiquadCoefs(local_res10,local_74,&local_78,local_res18,local_res8,param_4,(float)param_3,
                     param_5,param_6,param_7);
  uVar3 = *(uint *)(lVar1 + 0x1c + param_2 * 0x28);
  local_res18[0] = -local_res18[0];
  local_res8[0] = -local_res8[0];
  pfVar2 = *(float **)(lVar1 + 0x10 + param_2 * 0x28);
  if (((uVar3 & 1) != 0) || (*(char *)(lVar1 + 0x20 + param_2 * 0x28) != '\0')) {
    *pfVar2 = local_res10[0];
    pfVar2[1] = local_res10[0];
    pfVar2[2] = local_res10[0];
    pfVar2[3] = local_res10[0];
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    fVar4 = local_res8[0] * local_74[0];
    fVar8 = local_res18[0] * local_res8[0];
    fVar5 = local_res18[0] * local_res18[0];
    fVar7 = local_res18[0] * local_res10[0] + local_74[0];
    pfVar2[7] = fVar7;
    pfVar2[10] = fVar7;
    pfVar2[8] = 0.0;
    pfVar2[9] = 0.0;
    fVar6 = fVar7 * local_res18[0] + local_78 + local_res8[0] * local_res10[0];
    pfVar2[0xb] = fVar6;
    pfVar2[0xe] = fVar6;
    pfVar2[0xd] = fVar7;
    pfVar2[0xc] = 0.0;
    fVar7 = local_res18[0] * local_74[0] + local_78;
    pfVar2[0xf] = fVar6 * local_res18[0] + fVar8 * local_res10[0] + fVar4;
    pfVar2[0x11] = fVar7;
    pfVar2[0x10] = local_74[0];
    fVar7 = fVar7 * local_res18[0] + fVar4;
    pfVar2[0x12] = fVar7;
    pfVar2[0x13] = (fVar7 + fVar4) * local_res18[0] + local_res8[0] * local_78;
    pfVar2[0x15] = local_res18[0] * local_78;
    fVar7 = local_res18[0] * local_78 * local_res18[0];
    pfVar2[0x14] = local_78;
    pfVar2[0x16] = fVar7 + local_res8[0] * local_78;
    pfVar2[0x17] = ((local_78 + local_78) * local_res8[0] + fVar7) * local_res18[0];
    pfVar2[0x19] = fVar5 + local_res8[0];
    pfVar2[0x18] = local_res18[0];
    pfVar2[0x1a] = (local_res8[0] + local_res8[0] + fVar5) * local_res18[0];
    pfVar2[0x1b] = (local_res8[0] * 3.0 + fVar5) * local_res18[0] * local_res18[0] +
                   local_res8[0] * local_res8[0];
    pfVar2[0x1c] = local_res8[0];
    pfVar2[0x1d] = fVar8;
    pfVar2[0x1e] = fVar8 * local_res18[0] + local_res8[0] * local_res8[0];
    pfVar2[0x1f] = ((local_res8[0] + local_res8[0]) * local_res8[0] + fVar8 * local_res18[0]) *
                   local_res18[0];
    pfVar2 = pfVar2 + 0x20;
    if (*(char *)(lVar1 + 0x20 + param_2 * 0x28) != '\0') {
      return;
    }
    uVar3 = *(uint *)(lVar1 + 0x1c + param_2 * 0x28);
  }
  if ((uVar3 & 2) != 0) {
    pfVar2[1] = local_res10[0];
    fVar7 = local_res18[0] * local_res10[0] + local_74[0];
    pfVar2[3] = local_res10[0];
    fVar6 = local_res18[0] * local_res18[0] + local_res8[0];
    *pfVar2 = 0.0;
    pfVar2[2] = 0.0;
    pfVar2[4] = local_res10[0];
    pfVar2[5] = fVar7;
    pfVar2[6] = local_res10[0];
    pfVar2[7] = fVar7;
    pfVar2[8] = local_74[0];
    pfVar2[10] = local_74[0];
    fVar7 = local_res18[0] * local_74[0] + local_78;
    pfVar2[9] = fVar7;
    pfVar2[0xb] = fVar7;
    pfVar2[0xc] = local_78;
    pfVar2[0xe] = local_78;
    pfVar2[0xd] = local_res18[0] * local_78;
    pfVar2[0xf] = local_res18[0] * local_78;
    pfVar2[0x10] = local_res18[0];
    pfVar2[0x11] = fVar6;
    pfVar2[0x12] = local_res18[0];
    pfVar2[0x13] = fVar6;
    pfVar2[0x14] = local_res8[0];
    pfVar2[0x15] = local_res8[0] * local_res18[0];
    pfVar2[0x16] = local_res8[0];
    pfVar2[0x17] = local_res8[0] * local_res18[0];
    pfVar2 = pfVar2 + 0x18;
    uVar3 = *(uint *)(lVar1 + 0x1c + param_2 * 0x28);
  }
  if (3 < uVar3) {
    *pfVar2 = local_res10[0];
    pfVar2[1] = local_74[0];
    pfVar2[2] = local_78;
    pfVar2[3] = local_res18[0];
    pfVar2[4] = local_res8[0];
  }
  return;
}



// FUNCTION 14321f760 Term body=137 status=ok
// SIG undefined Term(void)

void DSP::CAkMultiBandEQ::Term(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar4 = 0;
    if ((int)param_1[1] != 0) {
      do {
        puVar1 = (undefined8 *)(*param_1 + uVar4 * 0x28);
        if (*(longlong *)(*param_1 + 8 + uVar4 * 0x28) != 0) {
          (**(code **)(*param_2 + 0x10))(param_2);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 1));
      lVar2 = *param_1;
    }
    (**(code **)(*param_2 + 0x10))(param_2,lVar2);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14321f7f0 ProcessBuffer body=368 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::CAkDistortion::ProcessBuffer(int *param_1,longlong *param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        ProcessOverdrive(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar2 == 2) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        ProcessHeavy(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar2 == 3) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        ProcessFuzz(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar2 == 4) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(byte *)(param_2 + 1);
      do {
        ProcessClip(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  param_1[2] = param_1[1];
  param_1[4] = param_1[3];
  param_1[6] = param_1[5];
  return;
}



// FUNCTION 14321f960 ProcessClip body=624 status=ok
// SIG undefined ProcessClip(void)

void DSP::CAkDistortion::ProcessClip(longlong param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = *(float *)(param_1 + 0x10);
  fVar7 = 0.0;
  fVar5 = *(float *)(param_1 + 4) * -0.01;
  fVar11 = (*(float *)(param_1 + 0xc) - fVar9) * (1.0 / (float)param_3);
  if (-37.0 <= fVar5) {
    uVar2 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
    fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  else {
    fVar5 = 0.0;
  }
  fVar6 = *(float *)(param_1 + 8) * -0.01;
  if (-37.0 <= fVar6) {
    uVar2 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
    fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  uVar3 = 0;
  fVar5 = (fVar5 - fVar7) * (1.0 / (float)param_3);
  uVar4 = (ulonglong)param_3;
  if (param_2 + param_3 < param_2) {
    uVar4 = uVar3;
  }
  if (3 < uVar4) {
    lVar1 = (uVar4 - 4 >> 2) + 1;
    uVar3 = lVar1 * 4;
    do {
      fVar6 = fVar9 * *param_2;
      if (fVar6 < 1.0) {
        if (fVar6 <= -1.0) {
          fVar6 = -1.0;
        }
      }
      else {
        fVar6 = 1.0;
      }
      fVar10 = (fVar9 + fVar11) * param_2[1];
      *param_2 = fVar6 * fVar7;
      fVar9 = fVar9 + fVar11 + fVar11;
      if (fVar10 < 1.0) {
        if (fVar10 <= -1.0) {
          fVar10 = -1.0;
        }
      }
      else {
        fVar10 = 1.0;
      }
      fVar6 = fVar9 * param_2[2];
      fVar8 = fVar7 + fVar5 + fVar5;
      param_2[1] = fVar10 * (fVar7 + fVar5);
      fVar9 = fVar9 + fVar11;
      if (fVar6 < 1.0) {
        if (fVar6 <= -1.0) {
          fVar6 = -1.0;
        }
      }
      else {
        fVar6 = 1.0;
      }
      fVar10 = fVar8 + fVar5;
      param_2[2] = fVar6 * fVar8;
      fVar6 = fVar9 * param_2[3];
      fVar9 = fVar9 + fVar11;
      if (fVar6 < 1.0) {
        if (fVar6 <= -1.0) {
          fVar6 = -1.0;
        }
      }
      else {
        fVar6 = 1.0;
      }
      fVar7 = fVar10 + fVar5;
      param_2[3] = fVar6 * fVar10;
      param_2 = param_2 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    fVar6 = fVar9 * *param_2;
    if (fVar6 < 1.0) {
      if (fVar6 <= -1.0) {
        fVar6 = -1.0;
      }
    }
    else {
      fVar6 = 1.0;
    }
    fVar6 = fVar6 * fVar7;
    fVar7 = fVar7 + fVar5;
    *param_2 = fVar6;
    param_2 = param_2 + 1;
    fVar9 = fVar9 + fVar11;
  }
  return;
}



// FUNCTION 14321fbd0 ProcessFuzz body=1905 status=ok
// SIG undefined ProcessFuzz(void)

void DSP::CAkDistortion::ProcessFuzz(longlong param_1,float *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
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
  
  fVar12 = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 4) * -0.01;
  fVar15 = (*(float *)(param_1 + 0xc) - fVar12) * (1.0 / (float)param_3);
  if (-37.0 <= fVar5) {
    uVar1 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
    fVar5 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) * (float)(uVar1 & 0xff800000);
  }
  else {
    fVar5 = 0.0;
  }
  fVar6 = *(float *)(param_1 + 8) * -0.01;
  if (-37.0 <= fVar6) {
    uVar1 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
    fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) * (float)(uVar1 & 0xff800000);
  }
  else {
    fVar6 = 0.0;
  }
  fVar5 = (fVar5 - fVar6) * (1.0 / (float)param_3);
  if (-39.0 <= *(float *)(param_1 + 0x14) * 0.03) {
    uVar1 = (uint)(longlong)(*(float *)(param_1 + 0x14) * 251658.23 + 1.0821304e+09);
    fVar13 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar13 = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
             (float)(uVar1 & 0xff800000);
  }
  else {
    fVar13 = 0.0;
  }
  if (-37.0 <= fVar13 * -0.2) {
    uVar1 = (uint)(longlong)(fVar13 * -0.2 * 12102203.0 + 1.0653532e+09);
    fVar7 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) * (float)(uVar1 & 0xff800000);
  }
  else {
    fVar7 = 0.0;
  }
  uVar3 = 0;
  fVar14 = 1.0 / fVar13;
  uVar4 = (ulonglong)param_3;
  if (param_2 + param_3 < param_2) {
    uVar4 = uVar3;
  }
  fVar7 = -0.2 / (1.0 - fVar7);
  if (3 < uVar4) {
    lVar2 = (uVar4 - 4 >> 2) + 1;
    uVar3 = lVar2 * 4;
    do {
      fVar8 = fVar14;
      if (fVar12 * *param_2 != -0.2) {
        fVar8 = fVar12 * *param_2 - -0.2;
        if (fVar8 * fVar13 <= 37.0) {
          uVar1 = (uint)(longlong)(1.0653532e+09 - fVar8 * fVar13 * 12102203.0);
          fVar9 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar8 = fVar8 / (1.0 - ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                                 (float)(uVar1 & 0xff800000));
        }
        else {
          fVar8 = fVar8 / 1.0;
        }
      }
      fVar8 = fVar7 + fVar8;
      if (fVar8 < 1.0) {
        if (fVar8 <= -1.0) {
          fVar8 = -1.0;
        }
      }
      else {
        fVar8 = 1.0;
      }
      fVar9 = (fVar12 + fVar15) * param_2[1];
      *param_2 = fVar8 * fVar6;
      fVar12 = fVar12 + fVar15 + fVar15;
      fVar8 = fVar14;
      if (fVar9 != -0.2) {
        fVar9 = fVar9 - -0.2;
        if (fVar9 * fVar13 <= 37.0) {
          uVar1 = (uint)(longlong)(1.0653532e+09 - fVar9 * fVar13 * 12102203.0);
          fVar8 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar8 = fVar9 / (1.0 - ((fVar8 * 0.32518977 + 0.020805772) * fVar8 + 0.65304345) *
                                 (float)(uVar1 & 0xff800000));
        }
        else {
          fVar8 = fVar9 / 1.0;
        }
      }
      fVar8 = fVar7 + fVar8;
      if (fVar8 < 1.0) {
        if (fVar8 <= -1.0) {
          fVar8 = -1.0;
        }
      }
      else {
        fVar8 = 1.0;
      }
      fVar9 = fVar12 * param_2[2];
      fVar10 = fVar6 + fVar5 + fVar5;
      param_2[1] = fVar8 * (fVar6 + fVar5);
      fVar12 = fVar12 + fVar15;
      fVar6 = fVar14;
      if (fVar9 != -0.2) {
        fVar9 = fVar9 - -0.2;
        if (fVar9 * fVar13 <= 37.0) {
          uVar1 = (uint)(longlong)(1.0653532e+09 - fVar9 * fVar13 * 12102203.0);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar6 = fVar9 / (1.0 - ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                                 (float)(uVar1 & 0xff800000));
        }
        else {
          fVar6 = fVar9 / 1.0;
        }
      }
      fVar6 = fVar7 + fVar6;
      if (fVar6 < 1.0) {
        if (fVar6 <= -1.0) {
          fVar6 = -1.0;
        }
      }
      else {
        fVar6 = 1.0;
      }
      fVar9 = fVar12 * param_2[3];
      fVar11 = fVar10 + fVar5;
      param_2[2] = fVar6 * fVar10;
      fVar12 = fVar12 + fVar15;
      fVar8 = fVar14;
      if (fVar9 != -0.2) {
        fVar9 = fVar9 - -0.2;
        if (fVar9 * fVar13 <= 37.0) {
          uVar1 = (uint)(longlong)(1.0653532e+09 - fVar9 * fVar13 * 12102203.0);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar8 = fVar9 / (1.0 - ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                                 (float)(uVar1 & 0xff800000));
        }
        else {
          fVar8 = fVar9 / 1.0;
        }
      }
      fVar8 = fVar7 + fVar8;
      if (fVar8 < 1.0) {
        if (fVar8 <= -1.0) {
          fVar8 = -1.0;
        }
      }
      else {
        fVar8 = 1.0;
      }
      fVar6 = fVar11 + fVar5;
      param_2[3] = fVar8 * fVar11;
      param_2 = param_2 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    fVar8 = fVar14;
    if (fVar12 * *param_2 != -0.2) {
      fVar8 = fVar12 * *param_2 - -0.2;
      if (fVar8 * fVar13 <= 37.0) {
        uVar1 = (uint)(longlong)(1.0653532e+09 - fVar8 * fVar13 * 12102203.0);
        fVar9 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar8 = fVar8 / (1.0 - ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                               (float)(uVar1 & 0xff800000));
      }
      else {
        fVar8 = fVar8 / 1.0;
      }
    }
    fVar8 = fVar7 + fVar8;
    if (fVar8 < 1.0) {
      if (fVar8 <= -1.0) {
        fVar8 = -1.0;
      }
    }
    else {
      fVar8 = 1.0;
    }
    fVar8 = fVar8 * fVar6;
    fVar6 = fVar6 + fVar5;
    *param_2 = fVar8;
    param_2 = param_2 + 1;
    fVar12 = fVar12 + fVar15;
  }
  return;
}



// FUNCTION 143220350 ProcessHeavy body=1349 status=ok
// SIG undefined ProcessHeavy(void)

void DSP::CAkDistortion::ProcessHeavy(longlong param_1,float *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 4) * -0.01;
  fVar12 = (*(float *)(param_1 + 0xc) - fVar8) * (1.0 / (float)param_3);
  if (-37.0 <= fVar5) {
    uVar1 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
    fVar5 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) * (float)(uVar1 & 0xff800000);
  }
  else {
    fVar5 = 0.0;
  }
  fVar6 = *(float *)(param_1 + 8) * -0.01;
  if (-37.0 <= fVar6) {
    uVar1 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
    fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) * (float)(uVar1 & 0xff800000);
  }
  else {
    fVar6 = 0.0;
  }
  uVar3 = 0;
  fVar5 = (fVar5 - fVar6) * (1.0 / (float)param_3);
  uVar4 = (ulonglong)param_3;
  if (param_2 + param_3 < param_2) {
    uVar4 = uVar3;
  }
  if (3 < uVar4) {
    lVar2 = (uVar4 - 4 >> 2) + 1;
    uVar3 = lVar2 * 4;
    do {
      fVar9 = ABS(fVar8 * *param_2);
      if (fVar9 <= 37.0) {
        uVar1 = (uint)(longlong)(1.0653532e+09 - fVar9 * 12102203.0);
        fVar9 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      else {
        fVar9 = 0.0;
      }
      fVar7 = 1.0 - fVar9;
      if (-0.0 <= fVar8 * *param_2) {
        fVar7 = fVar9 - 1.0;
      }
      fVar10 = (fVar8 + fVar12) * param_2[1];
      *param_2 = fVar7 * fVar6;
      fVar8 = fVar8 + fVar12 + fVar12;
      fVar9 = ABS(fVar10);
      if (fVar9 <= 37.0) {
        uVar1 = (uint)(longlong)(1.0653532e+09 - fVar9 * 12102203.0);
        fVar9 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      else {
        fVar9 = 0.0;
      }
      fVar7 = 1.0 - fVar9;
      if (-0.0 <= fVar10) {
        fVar7 = fVar9 - 1.0;
      }
      fVar10 = fVar8 * param_2[2];
      fVar9 = fVar6 + fVar5 + fVar5;
      param_2[1] = fVar7 * (fVar6 + fVar5);
      fVar8 = fVar8 + fVar12;
      fVar6 = ABS(fVar10);
      if (fVar6 <= 37.0) {
        uVar1 = (uint)(longlong)(1.0653532e+09 - fVar6 * 12102203.0);
        fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      else {
        fVar6 = 0.0;
      }
      fVar7 = 1.0 - fVar6;
      if (-0.0 <= fVar10) {
        fVar7 = fVar6 - 1.0;
      }
      fVar11 = fVar8 * param_2[3];
      fVar10 = fVar9 + fVar5;
      param_2[2] = fVar7 * fVar9;
      fVar8 = fVar8 + fVar12;
      fVar6 = ABS(fVar11);
      if (fVar6 <= 37.0) {
        uVar1 = (uint)(longlong)(1.0653532e+09 - fVar6 * 12102203.0);
        fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      else {
        fVar6 = 0.0;
      }
      fVar9 = 1.0 - fVar6;
      if (-0.0 <= fVar11) {
        fVar9 = fVar6 - 1.0;
      }
      fVar6 = fVar10 + fVar5;
      param_2[3] = fVar9 * fVar10;
      param_2 = param_2 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    fVar9 = ABS(fVar8 * *param_2);
    if (fVar9 <= 37.0) {
      uVar1 = (uint)(longlong)(1.0653532e+09 - fVar9 * 12102203.0);
      fVar9 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
      fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar9 = 0.0;
    }
    fVar7 = 1.0 - fVar9;
    if (-0.0 <= fVar8 * *param_2) {
      fVar7 = fVar9 - 1.0;
    }
    fVar7 = fVar7 * fVar6;
    fVar6 = fVar6 + fVar5;
    *param_2 = fVar7;
    param_2 = param_2 + 1;
    fVar8 = fVar8 + fVar12;
  }
  return;
}



// FUNCTION 1432208a0 ProcessOverdrive body=1145 status=ok
// SIG undefined ProcessOverdrive(void)

void DSP::CAkDistortion::ProcessOverdrive(longlong param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = (*(float *)(param_1 + 0x18) * 0.0033333332 + 0.6666666) * *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 4) * -0.01;
  fVar12 = ((*(float *)(param_1 + 0x14) * 0.0033333332 + 0.6666666) * *(float *)(param_1 + 0xc) -
           fVar9) * (1.0 / (float)param_3);
  if (-37.0 <= fVar5) {
    uVar2 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
    fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar5 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  else {
    fVar5 = 0.0;
  }
  fVar6 = *(float *)(param_1 + 8) * -0.01;
  if (-37.0 <= fVar6) {
    uVar2 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
    fVar6 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  else {
    fVar6 = 0.0;
  }
  uVar3 = 0;
  fVar5 = (fVar5 - fVar6) * (1.0 / (float)param_3);
  uVar4 = (ulonglong)param_3;
  if (param_2 + param_3 < param_2) {
    uVar4 = uVar3;
  }
  if (3 < uVar4) {
    lVar1 = (uVar4 - 4 >> 2) + 1;
    uVar3 = lVar1 * 4;
    do {
      fVar8 = ABS(fVar9 * *param_2);
      if (fVar8 <= 0.6666666) {
        fVar7 = 2.0 - fVar8 * 3.0;
        fVar7 = (3.0 - fVar7 * fVar7) * 0.3333333;
      }
      else {
        fVar7 = 1.0;
      }
      if (fVar8 <= 0.3333333) {
        fVar7 = fVar8 + fVar8;
      }
      if (fVar9 * *param_2 <= 0.0) {
        fVar7 = -fVar7;
      }
      fVar10 = (fVar9 + fVar12) * param_2[1];
      *param_2 = fVar7 * fVar6;
      fVar9 = fVar9 + fVar12 + fVar12;
      fVar8 = ABS(fVar10);
      if (fVar8 <= 0.6666666) {
        fVar7 = 2.0 - fVar8 * 3.0;
        fVar7 = (3.0 - fVar7 * fVar7) * 0.3333333;
      }
      else {
        fVar7 = 1.0;
      }
      if (fVar8 <= 0.3333333) {
        fVar7 = fVar8 + fVar8;
      }
      if (fVar10 <= 0.0) {
        fVar7 = -fVar7;
      }
      fVar10 = fVar9 * param_2[2];
      fVar8 = fVar6 + fVar5 + fVar5;
      param_2[1] = fVar7 * (fVar6 + fVar5);
      fVar9 = fVar9 + fVar12;
      fVar6 = ABS(fVar10);
      if (fVar6 <= 0.6666666) {
        fVar7 = 2.0 - fVar6 * 3.0;
        fVar7 = (3.0 - fVar7 * fVar7) * 0.3333333;
      }
      else {
        fVar7 = 1.0;
      }
      if (fVar6 <= 0.3333333) {
        fVar7 = fVar6 + fVar6;
      }
      if (fVar10 <= 0.0) {
        fVar7 = -fVar7;
      }
      fVar11 = fVar9 * param_2[3];
      fVar10 = fVar8 + fVar5;
      param_2[2] = fVar7 * fVar8;
      fVar9 = fVar9 + fVar12;
      fVar6 = ABS(fVar11);
      if (fVar6 <= 0.6666666) {
        fVar8 = 2.0 - fVar6 * 3.0;
        fVar8 = (3.0 - fVar8 * fVar8) * 0.3333333;
      }
      else {
        fVar8 = 1.0;
      }
      if (fVar6 <= 0.3333333) {
        fVar8 = fVar6 + fVar6;
      }
      if (fVar11 <= 0.0) {
        fVar8 = -fVar8;
      }
      fVar6 = fVar10 + fVar5;
      param_2[3] = fVar8 * fVar10;
      param_2 = param_2 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    fVar8 = ABS(fVar9 * *param_2);
    if (fVar8 <= 0.6666666) {
      fVar7 = 2.0 - fVar8 * 3.0;
      fVar7 = (3.0 - fVar7 * fVar7) * 0.3333333;
    }
    else {
      fVar7 = 1.0;
    }
    if (fVar8 <= 0.3333333) {
      fVar7 = fVar8 + fVar8;
    }
    if (fVar9 * *param_2 <= 0.0) {
      fVar7 = -fVar7;
    }
    fVar7 = fVar7 * fVar6;
    fVar6 = fVar6 + fVar5;
    *param_2 = fVar7;
    param_2 = param_2 + 1;
    fVar9 = fVar9 + fVar12;
  }
  return;
}



// FUNCTION 143220d20 SetParameters body=120 status=ok
// SIG undefined SetParameters(void)

void DSP::CAkDistortion::SetParameters
               (undefined4 *param_1,undefined4 param_2,float param_3,undefined4 param_4,char param_5
               )

{
  float fVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(25.0,param_3 * 0.01);
  param_1[5] = param_4;
  fVar1 = fVar1 * 4.0 - 3.0;
  param_1[3] = fVar1;
  if (param_5 != '\0') {
    param_1[2] = param_3;
    param_1[4] = fVar1;
    param_1[6] = param_4;
  }
  return;
}



// FUNCTION 143220da0 ProcessBuffer body=136 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::CAkRectifier::ProcessBuffer(undefined4 *param_1,longlong *param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1[4] != 0) {
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
    if (*(byte *)(param_2 + 1) != 0) {
      uVar2 = (ulonglong)*(byte *)(param_2 + 1);
      lVar3 = 0;
      do {
        ProcessChannel(param_1,*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar3 * 4,uVar1);
        lVar3 = lVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  param_1[1] = *param_1;
  param_1[3] = param_1[2];
  return;
}



// FUNCTION 143220e30 ProcessChannel body=530 status=ok
// SIG undefined ProcessChannel(void)

void DSP::CAkRectifier::ProcessChannel(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = param_1[1];
  pfVar1 = param_2 + param_3;
  uVar5 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_2)) >> 2;
  uVar3 = 0;
  fVar9 = (*param_1 - fVar8) * (1.0 / (float)param_3);
  if (param_1[4] == 1.4013e-45) {
    if (pfVar1 < param_2) {
      uVar5 = uVar3;
    }
    if (3 < uVar5) {
      lVar4 = (uVar5 - 4 >> 2) + 1;
      uVar3 = lVar4 * 4;
      do {
        fVar6 = *param_2;
        if (*param_2 <= fVar8) {
          fVar6 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        *param_2 = fVar6;
        fVar6 = param_2[1];
        if (param_2[1] <= fVar8) {
          fVar6 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        param_2[1] = fVar6;
        fVar6 = param_2[2];
        if (param_2[2] <= fVar8) {
          fVar6 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        param_2[2] = fVar6;
        fVar6 = param_2[3];
        if (param_2[3] <= fVar8) {
          fVar6 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        param_2[3] = fVar6;
        param_2 = param_2 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (uVar3 < uVar5) {
      do {
        uVar3 = uVar3 + 1;
        fVar6 = *param_2;
        if (*param_2 <= fVar8) {
          fVar6 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        *param_2 = fVar6;
        param_2 = param_2 + 1;
      } while (uVar3 < uVar5);
      return;
    }
  }
  else {
    fVar6 = param_1[3];
    if (pfVar1 < param_2) {
      uVar5 = uVar3;
    }
    fVar10 = (param_1[2] - fVar6) * (1.0 / (float)param_3);
    if (3 < uVar5) {
      lVar4 = (uVar5 - 4 >> 2) + 1;
      uVar3 = lVar4 * 4;
      do {
        fVar2 = *param_2;
        fVar7 = fVar2;
        if (fVar2 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        if (fVar2 <= 0.0) {
          fVar7 = fVar7 - fVar2 * fVar6;
        }
        fVar2 = param_2[1];
        *param_2 = fVar7;
        fVar7 = fVar2;
        if (fVar2 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        if (fVar2 <= 0.0) {
          fVar7 = fVar7 - fVar2 * (fVar6 + fVar10);
        }
        fVar2 = param_2[2];
        fVar6 = fVar6 + fVar10 + fVar10;
        param_2[1] = fVar7;
        fVar7 = fVar2;
        if (fVar2 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        if (fVar2 <= 0.0) {
          fVar7 = fVar7 - fVar2 * fVar6;
        }
        fVar2 = param_2[3];
        fVar6 = fVar6 + fVar10;
        param_2[2] = fVar7;
        fVar7 = fVar2;
        if (fVar2 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar8 + fVar9;
        if (fVar2 <= 0.0) {
          fVar7 = fVar7 - fVar2 * fVar6;
        }
        param_2[3] = fVar7;
        fVar6 = fVar6 + fVar10;
        param_2 = param_2 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    for (; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      fVar2 = *param_2;
      fVar7 = fVar2;
      if (fVar2 <= fVar8) {
        fVar7 = fVar8;
      }
      fVar8 = fVar8 + fVar9;
      if (fVar2 <= 0.0) {
        fVar7 = fVar7 - fVar2 * fVar6;
      }
      *param_2 = fVar7;
      fVar6 = fVar6 + fVar10;
      param_2 = param_2 + 1;
    }
  }
  return;
}



// FUNCTION 143221050 SetRectification body=88 status=ok
// SIG undefined SetRectification(void)

void DSP::CAkRectifier::SetRectification(float *param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (param_2 != 0.0) {
    fVar1 = (float)((50.0 < param_2) + 1);
  }
  param_1[4] = fVar1;
  fVar1 = param_2;
  if (50.0 <= param_2) {
    fVar1 = 50.0;
  }
  fVar2 = (param_2 - 50.0) * 0.02;
  fVar1 = (50.0 - fVar1) * -0.02;
  param_1[2] = fVar2;
  *param_1 = fVar1;
  if (param_3 != '\0') {
    param_1[1] = fVar1;
    param_1[3] = fVar2;
  }
  return;
}



// FUNCTION 1432210b0 ProcessBuffer body=238 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::OnePoleZeroHPFilter::ProcessBuffer(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[2];
  fVar9 = *param_1;
  fVar8 = param_1[1];
  uVar5 = (ulonglong)param_3;
  uVar4 = 0;
  if (param_2 + uVar5 < param_2) {
    uVar5 = 0;
  }
  if (3 < uVar5) {
    lVar3 = (uVar5 - 4 >> 2) + 1;
    uVar4 = lVar3 * 4;
    do {
      fVar7 = *param_2;
      fVar2 = param_2[1];
      fVar6 = fVar7 - fVar9;
      fVar9 = param_2[3];
      fVar6 = fVar6 + fVar8 * fVar1;
      fVar8 = param_2[2];
      *param_2 = fVar6;
      fVar7 = (fVar2 - fVar7) + fVar6 * fVar1;
      param_2[1] = fVar7;
      fVar7 = (fVar8 - fVar2) + fVar7 * fVar1;
      param_2[2] = fVar7;
      fVar8 = (fVar9 - fVar8) + fVar7 * fVar1;
      param_2[3] = fVar8;
      param_2 = param_2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (uVar4 < uVar5) {
    do {
      fVar7 = *param_2;
      uVar4 = uVar4 + 1;
      fVar8 = (fVar7 - fVar9) + fVar8 * fVar1;
      *param_2 = fVar8;
      param_2 = param_2 + 1;
      fVar9 = fVar7;
    } while (uVar4 < uVar5);
    *param_1 = fVar7;
    param_1[1] = fVar8;
    return;
  }
  *param_1 = fVar9;
  param_1[1] = fVar8;
  return;
}



// FUNCTION 1432211a0 ProcessBufferWithGain body=295 status=ok
// SIG undefined ProcessBufferWithGain(void)

void DSP::OnePoleZeroHPFilter::ProcessBufferWithGain
               (float *param_1,float *param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = *param_1;
  fVar9 = param_1[1];
  uVar6 = (ulonglong)param_3;
  uVar5 = 0;
  fVar1 = param_1[2];
  if (param_2 + uVar6 < param_2) {
    uVar6 = 0;
  }
  if (3 < uVar6) {
    lVar4 = (uVar6 - 4 >> 2) + 1;
    uVar5 = lVar4 * 4;
    do {
      fVar7 = *param_2;
      fVar2 = param_2[1];
      fVar8 = param_4 * fVar7 - fVar10;
      fVar10 = param_4 * param_2[3];
      fVar3 = param_2[2];
      fVar8 = fVar8 + fVar9 * fVar1;
      *param_2 = fVar8;
      fVar9 = (param_4 * fVar2 - param_4 * fVar7) + fVar8 * fVar1;
      param_2[1] = fVar9;
      fVar9 = (param_4 * fVar3 - param_4 * fVar2) + fVar9 * fVar1;
      param_2[2] = fVar9;
      fVar9 = (fVar10 - param_4 * fVar3) + fVar9 * fVar1;
      param_2[3] = fVar9;
      param_2 = param_2 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (uVar5 < uVar6) {
    do {
      uVar5 = uVar5 + 1;
      fVar7 = param_4 * *param_2;
      fVar9 = (fVar7 - fVar10) + fVar9 * fVar1;
      *param_2 = fVar9;
      param_2 = param_2 + 1;
      fVar10 = fVar7;
    } while (uVar5 < uVar6);
    *param_1 = fVar7;
    param_1[1] = fVar9;
    return;
  }
  *param_1 = fVar10;
  param_1[1] = fVar9;
  return;
}



// FUNCTION 1432212d0 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkTremoloFX::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ae5550;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    if (param_1[0x10] != 0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
      param_1[0x10] = 0;
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143221350 CreateAkTremoloFX body=92 status=ok
// SIG undefined CreateAkTremoloFX(void)

undefined8 * CreateAkTremoloFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145ae5550;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    _guard_xfg_dispatch_icall_nop(puVar1 + 4,0,0x58);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432213b0 Execute body=766 status=ok
// SIG undefined Execute(void)

void CAkTremoloFX::Execute(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  undefined4 local_res18 [2];
  
  lVar8 = *(longlong *)(param_1 + 8);
  uVar5 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar8 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar1 = *(undefined4 *)(lVar8 + 0x1c);
  uVar2 = *(undefined4 *)(lVar8 + 0x20);
  uVar3 = *(undefined4 *)(lVar8 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar8 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar8 + 0x30);
  CAkTremoloFXParams::SetDirty(lVar8,0);
  if ((*(char *)(param_1 + 0x4a) != '\0') &&
     ((*(char *)(param_1 + 0x75) != *(char *)(param_1 + 0x49) ||
      (*(char *)(param_1 + 0x74) != *(char *)(param_1 + 0x48))))) {
    SetupLFO(param_1,(int)param_2[1]);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar12 = 0;
    if (*(char *)(param_1 + 0x44) != '\0') {
      uVar7 = *(uint *)(param_1 + 0x78);
      DSP::MonoLFO<DSP::Bipolar,FlangerOutputPolicy>::ComputeFilterCoefsFromParams
                (uVar7,param_1 + 0x24,local_res18,&local_res8);
      uVar11 = 0;
      if (*(int *)(param_1 + 0x88) != 0) {
        fVar14 = (float)uVar7;
        do {
          lVar8 = (ulonglong)uVar11 * 0x20 + *(longlong *)(param_1 + 0x80);
          if (fVar14 <= *(float *)(param_1 + 0x28)) {
            fVar13 = 1.0;
          }
          else {
            fVar13 = *(float *)(param_1 + 0x28) / fVar14;
          }
          *(float *)(lVar8 + 0x10) = fVar13;
          if (*(int *)(param_1 + 0x24) == 0) {
            *(float *)(lVar8 + 0x10) = fVar13 * 6.2831855;
          }
          *(undefined4 *)(lVar8 + 4) = local_res18[0];
          *(float *)(lVar8 + 8) = local_res8;
          if (*(int *)(lVar8 + 0x14) != *(int *)(param_1 + 0x24)) {
            if (*(int *)(lVar8 + 0x14) == 0) {
              fVar13 = *(float *)(lVar8 + 0xc) * 0.15915494;
            }
            else {
              if (*(int *)(param_1 + 0x24) != 0) goto LAB_14322153b;
              fVar13 = *(float *)(lVar8 + 0xc) * 6.2831855;
            }
            *(float *)(lVar8 + 0xc) = fVar13;
          }
LAB_14322153b:
          uVar11 = uVar11 + 1;
          *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(param_1 + 0x24);
        } while (uVar11 < *(uint *)(param_1 + 0x88));
      }
    }
    uVar7 = *(uint *)(param_2 + 1);
    if (*(char *)(param_1 + 0x49) == '\0') {
      uVar11 = uVar7 >> 0xc & 0xffff7;
      uVar7 = uVar7 - ((uVar7 >> 0xc) - uVar11 >> 3) & 0xff | uVar11 << 0xc;
    }
    if ((*(char *)(param_1 + 0x48) == '\0') && ((uVar7 & 0x7000) == 0x7000)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
    fVar14 = *(float *)(param_1 + 0x40);
    uVar10 = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    fVar13 = *(float *)(param_1 + 0x6c);
    if ((char)uVar7 != '\0') {
      do {
        if ((!bVar6) || ((int)uVar10 != 2)) {
          uVar9 = (ulonglong)uVar12;
          uVar12 = uVar12 + 1;
          local_res8 = fVar14;
          local_resc = (fVar14 - fVar13) / (float)uVar4;
          FUN_143221750(uVar9 * 0x20 + *(longlong *)(param_1 + 0x80),
                        *param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4,uVar4,uVar1,uVar2,uVar3,
                        &local_res8);
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 < (uVar7 & 0xff));
    }
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 1432216b0 Init body=150 status=ok
// SIG undefined Init(void)

void CAkTremoloFX::Init(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(longlong *)(param_1 + 8) = param_4;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar1 = *(undefined4 *)(param_4 + 0x1c);
  uVar2 = *(undefined4 *)(param_4 + 0x20);
  uVar3 = *(undefined4 *)(param_4 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x30);
  CAkTremoloFXParams::SetDirty(param_4,0);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x78) = *param_5;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  SetupLFO(param_1,param_5[1]);
  return;
}



// FUNCTION 143221750 FUN_143221750 body=8484 status=ok
// SIG undefined FUN_143221750(void)

void FUN_143221750(undefined8 *param_1,float *param_2,uint param_3,float param_4,float param_5,
                  float param_6,float *param_7)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  undefined8 uStack_d0;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  pfVar1 = param_2 + param_3;
  local_d8 = *(float *)(param_1 + 2);
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  uVar24 = (undefined4)param_1[3];
  uVar25 = *(undefined4 *)((longlong)param_1 + 0x1c);
  fVar28 = (param_4 - param_5) / (float)param_3;
  bVar2 = local_d8 != 0.0;
  if (local_d8 <= 1e-08) {
    local_d8 = 1e-08;
  }
  uStack_d0 = param_1[3];
  uStack_e0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  fVar27 = uStack_e0._4_4_;
  if (uVar3 < 6) {
    pfVar7 = (float *)(longlong)(int)uVar3;
    uStack_e0._0_4_ = (float)uVar5;
    auVar13._0_4_ = (float)uStack_e0;
    local_e8._0_4_ = (float)uVar4;
    local_e8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    fVar26 = local_e8._4_4_;
    local_e8 = uVar4;
    uStack_e0 = uVar5;
    switch(uVar3) {
    case 0:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        fVar26 = 1.0 / local_d8;
        do {
          auVar13._0_4_ = (1.5707964 - fVar27) * fVar26;
          iVar9 = (int)auVar13._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar13._0_4_)) {
            auVar13._4_4_ = auVar13._0_4_;
            auVar13._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar13);
            auVar13._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar13._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar13._0_4_ = *param_7;
              fVar27 = fVar27 + local_d8;
              param_5 = param_5 + fVar28;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar14._0_4_ = fVar27 * fVar27;
              auVar22._0_4_ = fVar27 + local_d8;
              auVar23._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              auVar19._0_4_ = param_5 + fVar28;
              *param_2 = (((((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                            0.08332414) * auVar14._0_4_ + 0.4999983) * fVar27 + 0.5) * param_5 +
                         (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * *param_2;
              fVar27 = *param_7;
              *param_7 = fVar27 + param_7[1];
              auVar21._0_4_ = auVar22._0_4_ + local_d8;
              auVar14._0_4_ = auVar21._0_4_ * auVar21._0_4_;
              auVar20._0_4_ = auVar19._0_4_ + fVar28;
              param_2[1] = (((((0.0041531627 - auVar23._0_4_ * 9.181827e-05) * auVar23._0_4_ -
                              0.08332414) * auVar23._0_4_ + 0.4999983) * auVar22._0_4_ + 0.5) *
                            auVar19._0_4_ + (1.0 - auVar19._0_4_)) * (fVar27 + param_7[1]) *
                           param_2[1];
              auVar13._0_4_ = *param_7;
              *param_7 = auVar13._0_4_ + param_7[1];
              fVar27 = auVar21._0_4_ + local_d8;
              auVar23._0_4_ = fVar27 * fVar27;
              param_5 = auVar20._0_4_ + fVar28;
              param_2[2] = (((((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                              0.08332414) * auVar14._0_4_ + 0.4999983) * auVar21._0_4_ + 0.5) *
                            auVar20._0_4_ + (1.0 - auVar20._0_4_)) * (auVar13._0_4_ + param_7[1]) *
                           param_2[2];
              auVar13._0_4_ = *param_7;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_2[3] = (((((0.0041531627 - auVar23._0_4_ * 9.181827e-05) * auVar23._0_4_ -
                              0.08332414) * auVar23._0_4_ + 0.4999983) * fVar27 + 0.5) * param_5 +
                           (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              auVar13._0_4_ = *param_7;
              fVar27 = fVar27 + local_d8;
              param_5 = param_5 + fVar28;
              uVar12 = uVar12 + 1;
              auVar14._0_4_ = fVar27 * fVar27;
              *param_7 = auVar13._0_4_ + param_7[1];
              *param_2 = (((((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                            0.08332414) * auVar14._0_4_ + 0.4999983) * fVar27 + 0.5) * param_5 +
                         (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * *param_2;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          auVar14._0_4_ = (3.1415927 - fVar27) * fVar26;
          iVar9 = (int)auVar14._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar14._0_4_)) {
            auVar14._4_4_ = auVar14._0_4_;
            auVar14._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar14);
            auVar14._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar14._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar13._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              auVar22._0_4_ = 3.1415927 - (fVar27 + local_d8);
              *param_7 = auVar13._0_4_ + param_7[1];
              fVar27 = fVar27 + local_d8 + local_d8;
              auVar14._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              auVar21._0_4_ = 3.1415927 - fVar27;
              fVar27 = fVar27 + local_d8;
              auVar23._0_4_ = auVar21._0_4_ * auVar21._0_4_;
              auVar19._0_4_ = param_5 + fVar28;
              *param_2 = (((((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                            0.08332414) * auVar14._0_4_ + 0.4999983) * auVar22._0_4_ + 0.5) *
                          param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * *param_2;
              auVar13._0_4_ = *param_7;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar22._0_4_ = 3.1415927 - fVar27;
              fVar27 = fVar27 + local_d8;
              auVar14._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              auVar20._0_4_ = auVar19._0_4_ + fVar28;
              param_2[1] = (((((0.0041531627 - auVar23._0_4_ * 9.181827e-05) * auVar23._0_4_ -
                              0.08332414) * auVar23._0_4_ + 0.4999983) * auVar21._0_4_ + 0.5) *
                            auVar19._0_4_ + (1.0 - auVar19._0_4_)) * (auVar13._0_4_ + param_7[1]) *
                           param_2[1];
              auVar13._0_4_ = *param_7;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_5 = auVar20._0_4_ + fVar28;
              param_2[2] = (((((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                              0.08332414) * auVar14._0_4_ + 0.4999983) * auVar22._0_4_ + 0.5) *
                            auVar20._0_4_ + (1.0 - auVar20._0_4_)) * (auVar13._0_4_ + param_7[1]) *
                           param_2[2];
              auVar13._0_4_ = *param_7;
              auVar23._0_4_ = 3.1415927 - fVar27;
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_2[3] = (((((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                              0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_ + 0.5) *
                            param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              auVar13._0_4_ = *param_7;
              fVar27 = fVar27 + local_d8;
              param_5 = param_5 + fVar28;
              uVar12 = uVar12 + 1;
              auVar23._0_4_ = 3.1415927 - fVar27;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              *param_2 = (((((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                            0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_ + 0.5) *
                          param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * *param_2;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          auVar15._0_4_ = (4.712389 - fVar27) * fVar26;
          iVar9 = (int)auVar15._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar15._0_4_)) {
            auVar15._4_4_ = auVar15._0_4_;
            auVar15._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar15);
            auVar15._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar15._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar13._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              auVar22._0_4_ = fVar27 + local_d8 + local_d8;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar14._0_4_ = (fVar27 + local_d8) - 3.1415927;
              fVar27 = auVar14._0_4_ * auVar14._0_4_;
              auVar23._0_4_ = auVar22._0_4_ - 3.1415927;
              auVar22._0_4_ = auVar22._0_4_ + local_d8;
              auVar21._0_4_ = param_5 + fVar28;
              *param_2 = ((0.5 - (((0.0041531627 - fVar27 * 9.181827e-05) * fVar27 - 0.08332414) *
                                  fVar27 + 0.4999983) * auVar14._0_4_) * param_5 + (1.0 - param_5))
                         * (auVar13._0_4_ + param_7[1]) * *param_2;
              fVar27 = *param_7;
              auVar13._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              *param_7 = fVar27 + param_7[1];
              auVar14._0_4_ = auVar22._0_4_ - 3.1415927;
              param_5 = auVar21._0_4_ + fVar28;
              param_2[1] = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                    0.08332414) * auVar13._0_4_ + 0.4999983) * auVar23._0_4_) *
                            auVar21._0_4_ + (1.0 - auVar21._0_4_)) * (fVar27 + param_7[1]) *
                           param_2[1];
              fVar27 = *param_7;
              auVar13._0_4_ = auVar14._0_4_ * auVar14._0_4_;
              *param_7 = fVar27 + param_7[1];
              param_2[2] = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                    0.08332414) * auVar13._0_4_ + 0.4999983) * auVar14._0_4_) *
                            param_5 + (1.0 - param_5)) * (fVar27 + param_7[1]) * param_2[2];
              auVar13._0_4_ = *param_7;
              fVar27 = auVar22._0_4_ + local_d8;
              param_5 = param_5 + fVar28;
              auVar23._0_4_ = fVar27 - 3.1415927;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              param_2[3] = ((0.5 - (((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                                    0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_) *
                            param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              auVar13._0_4_ = *param_7;
              fVar27 = fVar27 + local_d8;
              param_5 = param_5 + fVar28;
              uVar12 = uVar12 + 1;
              auVar23._0_4_ = fVar27 - 3.1415927;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              *param_2 = ((0.5 - (((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                                  0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_) *
                          param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * *param_2;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          auVar16._0_4_ = (6.2831855 - fVar27) * fVar26;
          iVar9 = (int)auVar16._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar16._0_4_)) {
            auVar16._4_4_ = auVar16._0_4_;
            auVar16._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar16);
            auVar16._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar16._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar13._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              auVar23._0_4_ = 6.2831855 - (fVar27 + local_d8);
              *param_7 = auVar13._0_4_ + param_7[1];
              fVar27 = fVar27 + local_d8 + local_d8;
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              auVar22._0_4_ = 6.2831855 - fVar27;
              fVar27 = fVar27 + local_d8;
              auVar21._0_4_ = param_5 + fVar28;
              *param_2 = ((0.5 - (((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                                  0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_) *
                          param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * *param_2;
              auVar13._0_4_ = *param_7;
              auVar14._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar23._0_4_ = 6.2831855 - fVar27;
              param_5 = auVar21._0_4_ + fVar28;
              param_2[1] = ((0.5 - (((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                                    0.08332414) * auVar14._0_4_ + 0.4999983) * auVar22._0_4_) *
                            auVar21._0_4_ + (1.0 - auVar21._0_4_)) * (auVar13._0_4_ + param_7[1]) *
                           param_2[1];
              auVar13._0_4_ = *param_7;
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_2[2] = ((0.5 - (((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                                    0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_) *
                            param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * param_2[2];
              fVar27 = fVar27 + local_d8;
              auVar13._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              auVar23._0_4_ = 6.2831855 - fVar27;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              param_2[3] = ((0.5 - (((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                                    0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_) *
                            param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              auVar13._0_4_ = *param_7;
              fVar27 = fVar27 + local_d8;
              param_5 = param_5 + fVar28;
              uVar12 = uVar12 + 1;
              auVar23._0_4_ = 6.2831855 - fVar27;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar14._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              *param_2 = ((0.5 - (((0.0041531627 - auVar14._0_4_ * 9.181827e-05) * auVar14._0_4_ -
                                  0.08332414) * auVar14._0_4_ + 0.4999983) * auVar23._0_4_) *
                          param_5 + (1.0 - param_5)) * (auVar13._0_4_ + param_7[1]) * *param_2;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          if (6.2831855 <= fVar27) {
            fVar27 = fVar27 + -6.2831855;
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          uVar5 = uStack_e0;
        } while (param_2 < pfVar1);
      }
      break;
    case 1:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        auVar14._0_4_ = (float)local_e8;
        do {
          auVar17._0_4_ = (0.5 - fVar27) * (1.0 / local_d8);
          iVar9 = (int)auVar17._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar17._0_4_)) {
            auVar17._4_4_ = auVar17._0_4_;
            auVar17._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar17);
            auVar17._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar17._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar23._0_4_ = *param_7;
              fVar27 = fVar27 + local_d8;
              param_5 = param_5 + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar22._0_4_ = fVar27 + local_d8;
              auVar14._0_4_ = (fVar27 + fVar27) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              auVar19._0_4_ = auVar22._0_4_ + local_d8;
              auVar20._0_4_ = param_5 + fVar28;
              fVar27 = auVar19._0_4_ + local_d8;
              auVar21._0_4_ =
                   (auVar22._0_4_ + auVar22._0_4_) * fVar26 - auVar13._0_4_ * auVar14._0_4_;
              uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
              *param_2 = (auVar14._0_4_ * param_5 + (1.0 - param_5)) * (auVar23._0_4_ + param_7[1])
                         * *param_2;
              auVar14._0_4_ = *param_7;
              auVar17._0_4_ = auVar20._0_4_ + fVar28;
              *param_7 = auVar14._0_4_ + param_7[1];
              auVar22._0_4_ =
                   (auVar19._0_4_ + auVar19._0_4_) * fVar26 - auVar13._0_4_ * auVar21._0_4_;
              param_2[1] = (auVar21._0_4_ * auVar20._0_4_ + (1.0 - auVar20._0_4_)) *
                           (auVar14._0_4_ + param_7[1]) * param_2[1];
              auVar23._0_4_ = *param_7;
              param_5 = auVar17._0_4_ + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar14._0_4_ = (fVar27 + fVar27) * fVar26 - auVar13._0_4_ * auVar22._0_4_;
              param_2[2] = (auVar22._0_4_ * auVar17._0_4_ + (1.0 - auVar17._0_4_)) *
                           (auVar23._0_4_ + param_7[1]) * param_2[2];
              auVar23._0_4_ = *param_7;
              *param_7 = auVar23._0_4_ + param_7[1];
              param_2[3] = (auVar14._0_4_ * param_5 + (1.0 - param_5)) *
                           (auVar23._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              auVar23._0_4_ = *param_7;
              fVar27 = fVar27 + local_d8;
              param_5 = param_5 + fVar28;
              uVar12 = uVar12 + 1;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar14._0_4_ = (fVar27 + fVar27) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = (auVar14._0_4_ * param_5 + (1.0 - param_5)) * (auVar23._0_4_ + param_7[1])
                         * *param_2;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
          }
          auVar18._0_4_ = (1.0 - fVar27) * (1.0 / local_d8);
          iVar9 = (int)auVar18._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar18._0_4_)) {
            auVar18._4_4_ = auVar18._0_4_;
            auVar18._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar18);
            auVar18._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar18._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar23._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar22._0_4_ = 1.0 - (fVar27 + local_d8);
              fVar27 = fVar27 + local_d8 + local_d8;
              auVar14._0_4_ =
                   (auVar22._0_4_ + auVar22._0_4_) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              auVar21._0_4_ = 1.0 - fVar27;
              fVar27 = fVar27 + local_d8;
              auVar19._0_4_ = param_5 + fVar28;
              auVar22._0_4_ = 1.0 - fVar27;
              fVar27 = fVar27 + local_d8;
              auVar21._0_4_ =
                   (auVar21._0_4_ + auVar21._0_4_) * fVar26 - auVar13._0_4_ * auVar14._0_4_;
              *param_2 = (auVar14._0_4_ * param_5 + (1.0 - param_5)) * (auVar23._0_4_ + param_7[1])
                         * *param_2;
              auVar14._0_4_ = *param_7;
              auVar20._0_4_ = auVar19._0_4_ + fVar28;
              *param_7 = auVar14._0_4_ + param_7[1];
              auVar22._0_4_ =
                   (auVar22._0_4_ + auVar22._0_4_) * fVar26 - auVar13._0_4_ * auVar21._0_4_;
              param_2[1] = (auVar21._0_4_ * auVar19._0_4_ + (1.0 - auVar19._0_4_)) *
                           (auVar14._0_4_ + param_7[1]) * param_2[1];
              auVar23._0_4_ = *param_7;
              param_5 = auVar20._0_4_ + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar14._0_4_ =
                   ((1.0 - fVar27) + (1.0 - fVar27)) * fVar26 - auVar13._0_4_ * auVar22._0_4_;
              param_2[2] = (auVar22._0_4_ * auVar20._0_4_ + (1.0 - auVar20._0_4_)) *
                           (auVar23._0_4_ + param_7[1]) * param_2[2];
              auVar23._0_4_ = *param_7;
              *param_7 = auVar23._0_4_ + param_7[1];
              param_2[3] = (auVar14._0_4_ * param_5 + (1.0 - param_5)) *
                           (auVar23._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              auVar23._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              fVar27 = fVar27 + local_d8;
              uVar12 = uVar12 + 1;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar14._0_4_ =
                   ((1.0 - fVar27) + (1.0 - fVar27)) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = (auVar14._0_4_ * param_5 + (1.0 - param_5)) * (auVar23._0_4_ + param_7[1])
                         * *param_2;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= fVar27) {
            fVar27 = fVar27 + -1.0;
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          uVar4 = local_e8;
          uVar5 = uStack_e0;
        } while (param_2 < pfVar1);
      }
      break;
    case 2:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        auVar14._0_4_ = (float)local_e8;
        do {
          auVar19._0_4_ = (param_6 - fVar27) * (1.0 / local_d8);
          iVar9 = (int)auVar19._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar19._0_4_)) {
            auVar19._4_4_ = auVar19._0_4_;
            auVar19._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar19);
            auVar19._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar19._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar23._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar21._0_4_ = param_5 + fVar28;
              auVar22._0_4_ = fVar26 * param_5 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = ((1.0 - param_5) + auVar22._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              auVar14._0_4_ = *param_7;
              auVar23._0_4_ = fVar26 * auVar21._0_4_ - auVar13._0_4_ * auVar22._0_4_;
              *param_7 = auVar14._0_4_ + param_7[1];
              auVar19._0_4_ = auVar21._0_4_ + fVar28;
              param_2[1] = ((1.0 - auVar21._0_4_) + auVar23._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[1];
              auVar14._0_4_ = *param_7;
              auVar22._0_4_ = fVar26 * auVar19._0_4_ - auVar13._0_4_ * auVar23._0_4_;
              *param_7 = auVar14._0_4_ + param_7[1];
              param_5 = auVar19._0_4_ + fVar28;
              param_2[2] = ((1.0 - auVar19._0_4_) + auVar22._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[2];
              auVar23._0_4_ = *param_7;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar14._0_4_ = fVar26 * param_5 - auVar13._0_4_ * auVar22._0_4_;
              fVar27 = local_d8 * 2.0 + fVar27 + local_d8 + local_d8;
              param_2[3] = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              param_5 = param_5 + fVar28;
              fVar27 = fVar27 + local_d8;
              uVar12 = uVar12 + 1;
              auVar23._0_4_ = *param_7;
              auVar14._0_4_ = fVar26 * param_5 - auVar14._0_4_ * auVar13._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              *param_2 = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
          }
          auVar20._0_4_ = (1.0 - fVar27) * (1.0 / local_d8);
          iVar9 = (int)auVar20._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar20._0_4_)) {
            auVar20._4_4_ = auVar20._0_4_;
            auVar20._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar20);
            auVar20._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar20._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = uVar10;
          }
          uVar12 = uVar10;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar23._0_4_ = *param_7;
              auVar19._0_4_ = auVar14._0_4_ * auVar13._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar20._0_4_ = param_5 + fVar28 + fVar28;
              auVar22._0_4_ = -(auVar13._0_4_ * -auVar19._0_4_);
              auVar21._0_4_ = -(auVar13._0_4_ * auVar22._0_4_);
              auVar14._0_4_ = -(auVar13._0_4_ * auVar21._0_4_);
              *param_2 = ((1.0 - (param_5 + fVar28)) + -auVar19._0_4_) *
                         (auVar23._0_4_ + param_7[1]) * *param_2;
              auVar23._0_4_ = *param_7;
              auVar19._0_4_ = auVar20._0_4_ + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              param_2[1] = ((1.0 - auVar20._0_4_) + auVar22._0_4_) * (auVar23._0_4_ + param_7[1]) *
                           param_2[1];
              auVar23._0_4_ = *param_7;
              param_5 = auVar19._0_4_ + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              param_2[2] = ((1.0 - auVar19._0_4_) + auVar21._0_4_) * (auVar23._0_4_ + param_7[1]) *
                           param_2[2];
              auVar23._0_4_ = *param_7;
              *param_7 = auVar23._0_4_ + param_7[1];
              fVar27 = local_d8 * 2.0 + fVar27 + local_d8 + local_d8;
              param_2[3] = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            do {
              auVar23._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              uVar12 = uVar12 + 1;
              fVar27 = fVar27 + local_d8;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar14._0_4_ = -(auVar14._0_4_ * auVar13._0_4_);
              *param_2 = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= fVar27) {
            fVar27 = fVar27 + -1.0;
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          uVar4 = local_e8;
          uVar5 = uStack_e0;
        } while (param_2 < pfVar1);
      }
      break;
    case 3:
      if (param_2 < pfVar1) {
        auVar14._0_4_ = (float)local_e8;
        do {
          auVar21._0_4_ = (1.0 - fVar27) * (1.0 / local_d8);
          iVar9 = (int)auVar21._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar21._0_4_)) {
            auVar21._4_4_ = auVar21._0_4_;
            auVar21._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar21);
            auVar21._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar21._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar10 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar10 = 0;
          }
          uVar11 = 0;
          if (3 < uVar10) {
            lVar8 = (uVar10 - 4 >> 2) + 1;
            uVar11 = lVar8 * 4;
            do {
              auVar23._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              auVar21._0_4_ = fVar27 + local_d8 + local_d8;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar20._0_4_ = param_5 + fVar28;
              auVar22._0_4_ = (fVar27 + local_d8) * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_
              ;
              auVar19._0_4_ = auVar21._0_4_ + local_d8;
              *param_2 = ((1.0 - param_5) + auVar22._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              auVar14._0_4_ = *param_7;
              fVar27 = auVar19._0_4_ + local_d8;
              auVar23._0_4_ = auVar21._0_4_ * auVar20._0_4_ * fVar26 - auVar13._0_4_ * auVar22._0_4_
              ;
              *param_7 = auVar14._0_4_ + param_7[1];
              auVar21._0_4_ = auVar20._0_4_ + fVar28;
              param_2[1] = ((1.0 - auVar20._0_4_) + auVar23._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[1];
              auVar14._0_4_ = *param_7;
              auVar22._0_4_ = auVar19._0_4_ * auVar21._0_4_ * fVar26 - auVar13._0_4_ * auVar23._0_4_
              ;
              *param_7 = auVar14._0_4_ + param_7[1];
              param_5 = auVar21._0_4_ + fVar28;
              param_2[2] = ((1.0 - auVar21._0_4_) + auVar22._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[2];
              auVar23._0_4_ = *param_7;
              auVar14._0_4_ = fVar27 * param_5 * fVar26 - auVar13._0_4_ * auVar22._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
            pfVar7 = (float *)0x0;
          }
          if (uVar11 < uVar10) {
            do {
              param_5 = param_5 + fVar28;
              fVar27 = fVar27 + local_d8;
              uVar11 = uVar11 + 1;
              auVar23._0_4_ = *param_7;
              auVar14._0_4_ = fVar27 * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              *param_2 = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              param_2 = param_2 + 1;
            } while (uVar11 < uVar10);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= fVar27) {
            fVar27 = fVar27 + -1.0;
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          uVar4 = local_e8;
          uVar5 = uStack_e0;
        } while (param_2 < pfVar1);
      }
      break;
    case 4:
      if (param_2 < pfVar1) {
        auVar14._0_4_ = (float)local_e8;
        do {
          auVar22._0_4_ = (1.0 - fVar27) * (1.0 / local_d8);
          iVar9 = (int)auVar22._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar22._0_4_)) {
            auVar22._4_4_ = auVar22._0_4_;
            auVar22._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar22);
            auVar22._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar22._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar10 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar10 = 0;
          }
          uVar11 = 0;
          if (3 < uVar10) {
            lVar8 = (uVar10 - 4 >> 2) + 1;
            uVar11 = lVar8 * 4;
            do {
              auVar23._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar21._0_4_ = fVar27 + local_d8 + local_d8;
              auVar20._0_4_ = param_5 + fVar28;
              auVar22._0_4_ =
                   (1.0 - (fVar27 + local_d8)) * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              auVar19._0_4_ = auVar21._0_4_ + local_d8;
              *param_2 = ((1.0 - param_5) + auVar22._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              auVar14._0_4_ = *param_7;
              fVar27 = auVar19._0_4_ + local_d8;
              auVar23._0_4_ =
                   (1.0 - auVar21._0_4_) * auVar20._0_4_ * fVar26 - auVar13._0_4_ * auVar22._0_4_;
              *param_7 = auVar14._0_4_ + param_7[1];
              auVar21._0_4_ = auVar20._0_4_ + fVar28;
              param_2[1] = ((1.0 - auVar20._0_4_) + auVar23._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[1];
              auVar14._0_4_ = *param_7;
              auVar22._0_4_ =
                   (1.0 - auVar19._0_4_) * auVar21._0_4_ * fVar26 - auVar13._0_4_ * auVar23._0_4_;
              *param_7 = auVar14._0_4_ + param_7[1];
              param_5 = auVar21._0_4_ + fVar28;
              param_2[2] = ((1.0 - auVar21._0_4_) + auVar22._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[2];
              auVar23._0_4_ = *param_7;
              auVar14._0_4_ = (1.0 - fVar27) * param_5 * fVar26 - auVar13._0_4_ * auVar22._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
            pfVar7 = (float *)0x0;
          }
          if (uVar11 < uVar10) {
            do {
              param_5 = param_5 + fVar28;
              fVar27 = fVar27 + local_d8;
              uVar11 = uVar11 + 1;
              auVar23._0_4_ = *param_7;
              auVar14._0_4_ = (1.0 - fVar27) * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              *param_2 = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              param_2 = param_2 + 1;
            } while (uVar11 < uVar10);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= fVar27) {
            fVar27 = fVar27 + -1.0;
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
          }
          uVar4 = local_e8;
          uVar5 = uStack_e0;
        } while (param_2 < pfVar1);
      }
      break;
    case 5:
      if (param_2 < pfVar1) {
        uVar10 = uStack_d0;
        auVar14._0_4_ = (float)local_e8;
        do {
          auVar23._0_4_ = (1.0 - fVar27) * (1.0 / local_d8);
          iVar9 = (int)auVar23._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar23._0_4_)) {
            auVar23._4_4_ = auVar23._0_4_;
            auVar23._8_8_ = 0;
            uVar6 = movmskps((int)pfVar7,auVar23);
            auVar23._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
          }
          uVar6 = (uint)auVar23._0_4_;
          if ((int)uVar6 < 0) {
            uVar6 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar6) {
            uVar6 = param_3;
          }
          pfVar7 = pfVar1;
          if (param_2 + (int)uVar6 < pfVar1) {
            pfVar7 = param_2 + (int)uVar6;
          }
          uVar11 = (ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) >> 2;
          if (pfVar7 < param_2) {
            uVar11 = 0;
          }
          uVar6 = (uint)(uVar10 >> 0x20);
          uVar12 = 0;
          if (3 < uVar11) {
            lVar8 = (uVar11 - 4 >> 2) + 1;
            uVar12 = lVar8 * 4;
            do {
              auVar23._0_4_ = *param_7;
              param_5 = param_5 + fVar28;
              *param_7 = auVar23._0_4_ + param_7[1];
              auVar21._0_4_ = (float)(uVar6 >> 1) * 4.656613e-10;
              auVar19._0_4_ = param_5 + fVar28;
              auVar22._0_4_ = auVar21._0_4_ * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = ((1.0 - param_5) + auVar22._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              auVar14._0_4_ = *param_7;
              auVar23._0_4_ = auVar21._0_4_ * auVar19._0_4_ * fVar26 - auVar13._0_4_ * auVar22._0_4_
              ;
              *param_7 = auVar14._0_4_ + param_7[1];
              auVar20._0_4_ = auVar19._0_4_ + fVar28;
              param_2[1] = ((1.0 - auVar19._0_4_) + auVar23._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[1];
              auVar14._0_4_ = *param_7;
              *param_7 = auVar14._0_4_ + param_7[1];
              auVar22._0_4_ = auVar21._0_4_ * auVar20._0_4_ * fVar26 - auVar13._0_4_ * auVar23._0_4_
              ;
              param_5 = auVar20._0_4_ + fVar28;
              fVar27 = local_d8 * 2.0 + fVar27 + local_d8 + local_d8;
              param_2[2] = ((1.0 - auVar20._0_4_) + auVar22._0_4_) * (auVar14._0_4_ + param_7[1]) *
                           param_2[2];
              auVar23._0_4_ = *param_7;
              auVar14._0_4_ = auVar21._0_4_ * param_5 * fVar26 - auVar13._0_4_ * auVar22._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
            pfVar7 = (float *)0x0;
          }
          if (uVar12 < uVar11) {
            pfVar7 = (float *)(uVar10 >> 0x21);
            do {
              param_5 = param_5 + fVar28;
              uVar12 = uVar12 + 1;
              fVar27 = fVar27 + local_d8;
              auVar23._0_4_ = *param_7;
              auVar14._0_4_ =
                   (float)(uVar6 >> 1) * 4.656613e-10 * param_5 * fVar26 -
                   auVar14._0_4_ * auVar13._0_4_;
              *param_7 = auVar23._0_4_ + param_7[1];
              *param_2 = ((1.0 - param_5) + auVar14._0_4_) * (auVar23._0_4_ + param_7[1]) * *param_2
              ;
              param_2 = param_2 + 1;
            } while (uVar12 < uVar11);
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            local_e8 = CONCAT44(local_e8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= fVar27) {
            fVar27 = fVar27 + -1.0;
            uVar10 = uVar10 * 0x5851f42d4c957f2d + 1;
            uStack_e0 = CONCAT44(fVar27,(float)uStack_e0);
            uStack_d0 = uVar10;
          }
        } while (param_2 < pfVar1);
        uVar24 = (undefined4)uStack_d0;
        uVar25 = uStack_d0._4_4_;
        uVar4 = local_e8;
        uVar5 = uStack_e0;
      }
    }
  }
  uStack_e0 = uVar5;
  local_e8 = uVar4;
  fVar28 = 6.2831855;
  if (bVar2) {
    *param_1 = local_e8;
    param_1[1] = uStack_e0;
    *(float *)(param_1 + 2) = local_d8;
    *(uint *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar24;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar25;
    if (uVar3 != 0) {
      if (uVar3 == 5) {
        return;
      }
      fVar28 = 1.0;
    }
    fVar28 = _guard_xfg_dispatch_icall_nop(fVar27,fVar28);
    *(float *)((longlong)param_1 + 0xc) = fVar28;
  }
  return;
}



// FUNCTION 143223890 SetupLFO body=188 status=ok
// SIG undefined SetupLFO(void)

void CAkTremoloFX::SetupLFO(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = param_2 & 0xffffffff;
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar6 = param_2 >> 0xc & 0xfffff;
    uVar4 = (uint)uVar6;
    if (((byte)uVar6 & 7) == 7) {
      uVar2 = uVar4 & 0xffffb;
      uVar5 = (ulonglong)
              ((uint)param_2 & 0xf00 | (uint)param_2 - (uVar4 - uVar2 >> 2) & 0xff | uVar2 << 0xc);
    }
  }
  uVar4 = (uint)uVar5;
  if (*(char *)(param_1 + 0x49) == '\0') {
    uVar2 = (uint)(uVar5 >> 0xc);
    uVar3 = uVar2 & 0xffff7;
    uVar4 = uVar4 & 0xf00 | uVar4 - (uVar2 - uVar3 >> 3) & 0xff | uVar3 << 0xc;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  FUN_14320bf00(param_1 + 0x80,*(undefined8 *)(param_1 + 0x10),uVar1,uVar4,
                *(undefined4 *)(param_1 + 0x78),param_1 + 0x24);
  return;
}



// FUNCTION 143223950 Clone body=93 status=ok
// SIG undefined Clone(void)

void CAkTremoloFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145ae5598;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar2 + 0x32) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = 1;
    return;
  }
  return;
}



// FUNCTION 1432239b0 FUN_1432239b0 body=40 status=ok
// SIG undefined FUN_1432239b0(void)

void FUN_1432239b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145ae5598;
    return;
  }
  return;
}



// FUNCTION 143223a30 SetDirty body=7 status=ok
// SIG undefined SetDirty(void)

void CAkTremoloFXParams::SetDirty(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x32) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}



// FUNCTION 143223a40 FUN_143223a40 body=483 status=ok
// SIG undefined FUN_143223a40(void)

undefined4 FUN_143223a40(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 1:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
        fVar3 = 100.0;
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(float *)(param_1 + 8) = fVar3 * 0.01;
      return 1;
    case 2:
      *(float *)(param_1 + 0x10) = *param_3;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      return 1;
    case 3:
      fVar2 = *param_3;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(int *)(param_1 + 0xc) = (int)(longlong)fVar2;
      return 1;
    case 4:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
        fVar3 = 100.0;
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(float *)(param_1 + 0x14) = fVar3 * 0.01;
      return 1;
    case 5:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
        fVar3 = 100.0;
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(float *)(param_1 + 0x18) = fVar3 * 0.01;
      return 1;
    case 6:
      fVar2 = *param_3;
      fVar3 = -180.0;
      if ((-180.0 <= fVar2) && (fVar3 = fVar2, 180.0 <= fVar2)) {
        fVar3 = 180.0;
      }
      *(float *)(param_1 + 0x1c) = fVar3;
      return 1;
    case 7:
      *(int *)(param_1 + 0x24) = (int)(longlong)*param_3;
      return 1;
    case 8:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 180.0 <= fVar2)) {
        fVar3 = 180.0;
      }
      *(float *)(param_1 + 0x20) = fVar3;
      return 1;
    case 9:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x28) = fVar2;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      return 1;
    case 10:
      cVar1 = *(char *)param_3;
      *(undefined1 *)(param_1 + 0x32) = 1;
      *(bool *)(param_1 + 0x30) = cVar1 != '\0';
      return 1;
    case 0xb:
      cVar1 = *(char *)param_3;
      *(undefined1 *)(param_1 + 0x32) = 1;
      *(bool *)(param_1 + 0x31) = cVar1 != '\0';
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 143223c50 SetParamsBlock body=227 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkTremoloFXParams::SetParamsBlock(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 0x10) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  fVar2 = param_2[3];
  *(float *)(param_1 + 0x14) = fVar2;
  fVar3 = param_2[4];
  *(float *)(param_1 + 0x18) = fVar3;
  *(float *)(param_1 + 0x1c) = param_2[5];
  *(float *)(param_1 + 0x24) = param_2[6];
  *(float *)(param_1 + 0x20) = param_2[7];
  fVar4 = ::_guard_xfg_dispatch_icall_nop(10.0,param_2[8] * 0.05);
  *(float *)(param_1 + 0x28) = fVar4;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(float *)(param_1 + 8) = fVar1 * 0.01;
  *(float *)(param_1 + 0x14) = fVar2 * 0.01;
  *(float *)(param_1 + 0x18) = fVar3 * 0.01;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return 1;
}



// FUNCTION 143223d40 FUN_143223d40 body=43 status=ok
// SIG undefined FUN_143223d40(void)

undefined8 * FUN_143223d40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 143223d90 ComputeDiffusionFiltersDelayTimes body=517 status=ok
// SIG undefined ComputeDiffusionFiltersDelayTimes(void)

void DelayLengths::ComputeDiffusionFiltersDelayTimes(uint param_1,longlong param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *(float *)(param_2 + 0x18);
  uVar6 = 0;
  uVar1 = 0x2ee007;
  if (3 < param_1) {
    pfVar5 = (float *)((longlong)param_3 + 8);
    uVar2 = (param_1 - 4 >> 2) + 1;
    uVar4 = (ulonglong)uVar2;
    uVar6 = (ulonglong)(uVar2 * 4);
    do {
      fVar7 = fVar8 * *(float *)(param_2 + 0x14) * 0.01;
      uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
      uVar3 = uVar1 * 0xbb38435 + 0x3619636b;
      pfVar5[-2] = *(float *)(param_2 + 0x1c) * 2.3283064e-12 * fVar8 * (float)uVar1 + fVar8;
      fVar8 = fVar7 * *(float *)(param_2 + 0x14) * 0.01;
      uVar2 = uVar3 * 0xbb38435 + 0x3619636b;
      pfVar5[-1] = *(float *)(param_2 + 0x1c) * 2.3283064e-12 * fVar7 * (float)uVar3 + fVar7;
      uVar1 = uVar2 * 0xbb38435 + 0x3619636b;
      fVar7 = fVar8 * *(float *)(param_2 + 0x14) * 0.01;
      *pfVar5 = *(float *)(param_2 + 0x1c) * 2.3283064e-12 * fVar8 * (float)uVar2 + fVar8;
      fVar8 = fVar7 * *(float *)(param_2 + 0x14) * 0.01;
      pfVar5[1] = *(float *)(param_2 + 0x1c) * 2.3283064e-12 * fVar7 * (float)uVar1 + fVar7;
      pfVar5 = pfVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if ((uint)uVar6 < param_1) {
    pfVar5 = (float *)((longlong)param_3 + uVar6 * 4);
    uVar6 = (ulonglong)(param_1 - (uint)uVar6);
    do {
      fVar7 = *(float *)(param_2 + 0x14);
      uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
      *pfVar5 = *(float *)(param_2 + 0x1c) * 2.3283064e-12 * fVar8 * (float)uVar1 + fVar8;
      pfVar5 = pfVar5 + 1;
      uVar6 = uVar6 - 1;
      fVar8 = fVar8 * fVar7 * 0.01;
    } while (uVar6 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143223f8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(param_3,(ulonglong)param_1,4,(_PtFuncCompare *)&LAB_143223d70);
  return;
}



// FUNCTION 143223fa0 ComputeFDNDelayTimes body=687 status=ok
// SIG undefined ComputeFDNDelayTimes(void)

void DelayLengths::ComputeFDNDelayTimes
               (float param_1,float param_2,uint param_3,float *param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = 0x6b4cc7;
  fVar11 = (param_4[1] - *param_4) * 0.01 * param_1 + *param_4;
  uVar9 = 0;
  fVar12 = ((param_4[4] - param_4[3]) * 0.01 * param_2 + param_4[3]) * fVar11;
  fVar11 = (fVar11 - fVar12) + fVar11;
  if (3 < param_3) {
    uVar7 = 2;
    pfVar6 = (float *)((longlong)param_5 + 8);
    fVar14 = fVar11 - fVar12;
    fVar13 = 1.0 / (float)(param_3 - 1);
    uVar5 = uVar9;
    do {
      uVar4 = uVar7 - 1;
      uVar8 = (int)uVar5 + 4;
      uVar9 = (ulonglong)uVar8;
      uVar2 = uVar2 * 0xbb38435 + 0x3619636b;
      uVar3 = uVar2 * 0xbb38435 + 0x3619636b;
      fVar10 = (float)uVar5 * fVar14 * fVar13 + fVar12;
      uVar5 = (ulonglong)uVar7;
      uVar1 = uVar7 + 1;
      uVar7 = uVar7 + 4;
      pfVar6[-2] = param_4[2] * 2.3283064e-12 * fVar10 * (float)uVar2 + fVar10;
      fVar10 = (float)uVar4 * fVar14 * fVar13 + fVar12;
      pfVar6[-1] = param_4[2] * 2.3283064e-12 * fVar10 * (float)uVar3 + fVar10;
      uVar4 = uVar3 * 0xbb38435 + 0x3619636b;
      fVar10 = (float)uVar5 * fVar14 * fVar13 + fVar12;
      uVar2 = uVar4 * 0xbb38435 + 0x3619636b;
      *pfVar6 = param_4[2] * 2.3283064e-12 * fVar10 * (float)uVar4 + fVar10;
      fVar10 = (float)uVar1 * fVar14 * fVar13 + fVar12;
      pfVar6[1] = param_4[2] * 2.3283064e-12 * fVar10 * (float)uVar2 + fVar10;
      pfVar6 = pfVar6 + 4;
      uVar5 = uVar9;
    } while (uVar8 < param_3 - 3);
  }
  if ((uint)uVar9 < param_3) {
    pfVar6 = (float *)((longlong)param_5 + uVar9 * 4);
    do {
      uVar7 = (int)uVar9 + 1;
      uVar2 = uVar2 * 0xbb38435 + 0x3619636b;
      fVar13 = (float)uVar9 * (fVar11 - fVar12) * (1.0 / (float)(param_3 - 1)) + fVar12;
      *pfVar6 = param_4[2] * 2.3283064e-12 * fVar13 * (float)uVar2 + fVar13;
      pfVar6 = pfVar6 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x000143224248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(param_5,(ulonglong)param_3,4,(_PtFuncCompare *)&LAB_143223d70);
  return;
}



// FUNCTION 143224250 ComputePrimeDelayLengths body=359 status=ok
// SIG undefined ComputePrimeDelayLengths(void)

void DelayLengths::ComputePrimeDelayLengths
               (longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  undefined1 in_XMM1 [16];
  
  if (param_3 != 0) {
    uVar6 = 0;
    puVar9 = param_4;
    do {
      uVar7 = (ulonglong)
              (*(float *)((param_1 - (longlong)param_4) + (longlong)puVar9) * 0.001 * (float)param_2
              );
      uVar5 = (uint)uVar7;
      *puVar9 = uVar5;
      uVar4 = uVar7 & 0xffffffff;
      if (uVar6 == 0) {
        if ((uVar7 & 1) == 0) {
          uVar5 = uVar5 + 1;
          uVar4 = (ulonglong)uVar5;
          *puVar9 = uVar5;
          uVar7 = (ulonglong)uVar5;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (double)(uVar7 & 0xffffffff);
        in_XMM1 = sqrtpd(in_XMM1,auVar2);
        iVar8 = (int)in_XMM1._0_8_ + 1;
LAB_1432242e0:
        uVar5 = (uint)uVar4;
        uVar4 = 3;
        if (3 < iVar8) {
          do {
            if ((int)((uVar7 & 0xffffffff) % uVar4) == 0) {
              uVar5 = *puVar9 + 2;
              uVar4 = (ulonglong)uVar5;
              *puVar9 = uVar5;
              uVar7 = (ulonglong)uVar5;
              goto LAB_1432242e0;
            }
            uVar5 = (int)uVar4 + 2;
            uVar4 = (ulonglong)uVar5;
          } while ((int)uVar5 < iVar8);
          uVar5 = *puVar9;
        }
        if (uVar5 == 0) {
          uVar4 = 2;
          *puVar9 = 2;
          uVar7 = 2;
          goto LAB_1432242e0;
        }
      }
      else {
        uVar1 = param_4[uVar6 - 1];
        if ((uVar7 & 1) == 0) {
          uVar5 = uVar5 + 1;
          uVar4 = (ulonglong)uVar5;
          *puVar9 = uVar5;
          uVar7 = (ulonglong)uVar5;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (double)(uVar7 & 0xffffffff);
        in_XMM1 = sqrtpd(in_XMM1,auVar3);
        iVar8 = (int)in_XMM1._0_8_ + 1;
LAB_143224356:
        uVar5 = (uint)uVar4;
        uVar4 = 3;
        if (3 < iVar8) {
          do {
            if ((int)((uVar7 & 0xffffffff) % uVar4) == 0) {
              uVar5 = *puVar9 + 2;
              uVar4 = (ulonglong)uVar5;
              *puVar9 = uVar5;
              uVar7 = (ulonglong)uVar5;
              goto LAB_143224356;
            }
            uVar5 = (int)uVar4 + 2;
            uVar4 = (ulonglong)uVar5;
          } while ((int)uVar5 < iVar8);
          uVar5 = *puVar9;
        }
        if (uVar5 == uVar1) {
          uVar5 = uVar5 + 2;
          uVar4 = (ulonglong)uVar5;
          *puVar9 = uVar5;
          uVar7 = (ulonglong)uVar5;
          goto LAB_143224356;
        }
      }
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar6 < param_3);
  }
  return;
}



// FUNCTION 1432243c0 ComputeTCCoefs1 body=1399 status=ok
// SIG undefined ComputeTCCoefs1(void)

void CAkRoomVerbFX::ComputeTCCoefs1(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_68 [22];
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x80) != 0)) &&
     ((*(int *)(lVar1 + 0x80) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    DSP::ComputeBiquadCoefs
              (local_res18,local_res20,local_68,local_res8,local_res10,*(undefined4 *)(lVar1 + 0x84)
               ,(float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x1c),
               *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20));
    fVar8 = -local_res8[0];
    fVar7 = -local_res10[0];
    pfVar2 = (float *)((ulonglong)*(byte *)(param_1 + 0x135) * 0xa0 + *(longlong *)(param_1 + 0x148)
                      );
    *pfVar2 = local_res18[0];
    pfVar2[1] = local_res18[0];
    pfVar2[2] = local_res18[0];
    pfVar2[3] = local_res18[0];
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    fVar3 = fVar8 * local_res18[0] + local_res20[0];
    fVar6 = fVar8 * fVar7;
    pfVar2[7] = fVar3;
    pfVar2[10] = fVar3;
    pfVar2[8] = 0.0;
    pfVar2[9] = 0.0;
    fVar5 = fVar3 * fVar8 + local_68[0] + fVar7 * local_res18[0];
    pfVar2[0xb] = fVar5;
    pfVar2[0xe] = fVar5;
    pfVar2[0xd] = fVar3;
    pfVar2[0xc] = 0.0;
    fVar4 = fVar7 * local_res20[0];
    fVar3 = fVar8 * local_res20[0] + local_68[0];
    pfVar2[0xf] = fVar5 * fVar8 + fVar6 * local_res18[0] + fVar4;
    pfVar2[0x11] = fVar3;
    fVar3 = fVar3 * fVar8 + fVar4;
    pfVar2[0x10] = local_res20[0];
    pfVar2[0x12] = fVar3;
    pfVar2[0x13] = (fVar3 + fVar4) * fVar8 + fVar7 * local_68[0];
    pfVar2[0x14] = local_68[0];
    pfVar2[0x15] = fVar8 * local_68[0];
    fVar3 = fVar8 * local_68[0] * fVar8;
    fVar4 = fVar8 * fVar8;
    pfVar2[0x16] = fVar3 + fVar7 * local_68[0];
    pfVar2[0x17] = ((local_68[0] + local_68[0]) * fVar7 + fVar3) * fVar8;
    pfVar2[0x18] = fVar8;
    pfVar2[0x19] = fVar4 + fVar7;
    pfVar2[0x1a] = (fVar7 + fVar7 + fVar4) * fVar8;
    pfVar2[0x1b] = (fVar7 * 3.0 + fVar4) * fVar8 * fVar8 + fVar7 * fVar7;
    pfVar2[0x1d] = fVar6;
    pfVar2[0x1c] = fVar7;
    pfVar2[0x1e] = fVar6 * fVar8 + fVar7 * fVar7;
    pfVar2[0x1f] = ((fVar7 + fVar7) * fVar7 + fVar6 * fVar8) * fVar8;
    *(undefined4 *)
     ((ulonglong)*(byte *)(param_1 + 0x135) * 0xa0 + 0x90 + *(longlong *)(param_1 + 0x148)) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x80);
    lVar1 = *(longlong *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x80) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      DSP::ComputeBiquadCoefs
                (local_res18,local_res20,local_68,local_res8,local_res10,
                 *(undefined4 *)(lVar1 + 0x84),(float)*(uint *)(param_1 + 0x130),
                 *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x18),
                 *(undefined4 *)(lVar1 + 0x20));
      local_res8[0] = -local_res8[0];
      local_res10[0] = -local_res10[0];
      pfVar2 = (float *)(((ulonglong)*(byte *)(param_1 + 0x135) + 1) * 0xa0 +
                        *(longlong *)(param_1 + 0x148));
      fVar3 = local_res8[0] * local_res18[0] + local_res20[0];
      fVar6 = local_res8[0] * local_res10[0];
      *pfVar2 = local_res18[0];
      pfVar2[1] = local_res18[0];
      pfVar2[2] = local_res18[0];
      pfVar2[3] = local_res18[0];
      pfVar2[4] = 0.0;
      pfVar2[5] = 0.0;
      pfVar2[6] = 0.0;
      pfVar2[7] = fVar3;
      pfVar2[10] = fVar3;
      pfVar2[8] = 0.0;
      pfVar2[9] = 0.0;
      fVar5 = fVar3 * local_res8[0] + local_68[0] + local_res10[0] * local_res18[0];
      pfVar2[0xb] = fVar5;
      pfVar2[0xe] = fVar5;
      pfVar2[0xd] = fVar3;
      fVar4 = local_res10[0] * local_res20[0];
      pfVar2[0xc] = 0.0;
      fVar3 = local_res8[0] * local_res20[0] + local_68[0];
      pfVar2[0xf] = fVar5 * local_res8[0] + fVar6 * local_res18[0] + fVar4;
      pfVar2[0x11] = fVar3;
      pfVar2[0x10] = local_res20[0];
      fVar3 = fVar3 * local_res8[0] + fVar4;
      pfVar2[0x12] = fVar3;
      pfVar2[0x13] = (fVar3 + fVar4) * local_res8[0] + local_res10[0] * local_68[0];
      pfVar2[0x15] = local_res8[0] * local_68[0];
      fVar3 = local_res8[0] * local_68[0] * local_res8[0];
      pfVar2[0x14] = local_68[0];
      pfVar2[0x16] = fVar3 + local_res10[0] * local_68[0];
      fVar4 = local_res8[0] * local_res8[0];
      pfVar2[0x17] = ((local_68[0] + local_68[0]) * local_res10[0] + fVar3) * local_res8[0];
      pfVar2[0x18] = local_res8[0];
      pfVar2[0x19] = fVar4 + local_res10[0];
      pfVar2[0x1a] = (local_res10[0] + local_res10[0] + fVar4) * local_res8[0];
      pfVar2[0x1b] = (local_res10[0] * 3.0 + fVar4) * local_res8[0] * local_res8[0] +
                     local_res10[0] * local_res10[0];
      pfVar2[0x1c] = local_res10[0];
      pfVar2[0x1d] = fVar6;
      pfVar2[0x1f] = ((local_res10[0] + local_res10[0]) * local_res10[0] + local_res8[0] * fVar6) *
                     local_res8[0];
      pfVar2[0x1e] = local_res8[0] * fVar6 + local_res10[0] * local_res10[0];
      *(undefined4 *)
       ((ulonglong)*(byte *)(param_1 + 0x135) * 0xa0 + 0x130 + *(longlong *)(param_1 + 0x148)) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x80);
    }
  }
  return;
}



// FUNCTION 143224940 ComputeTCCoefs2 body=1399 status=ok
// SIG undefined ComputeTCCoefs2(void)

void CAkRoomVerbFX::ComputeTCCoefs2(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_68 [22];
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x88) != 0)) &&
     ((*(int *)(lVar1 + 0x88) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    DSP::ComputeBiquadCoefs
              (local_res18,local_res20,local_68,local_res8,local_res10,*(undefined4 *)(lVar1 + 0x8c)
               ,(float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x28),
               *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x2c));
    fVar8 = -local_res8[0];
    fVar7 = -local_res10[0];
    pfVar2 = (float *)((ulonglong)*(byte *)(param_1 + 0x136) * 0xa0 + *(longlong *)(param_1 + 0x148)
                      );
    *pfVar2 = local_res18[0];
    pfVar2[1] = local_res18[0];
    pfVar2[2] = local_res18[0];
    pfVar2[3] = local_res18[0];
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    fVar3 = fVar8 * local_res18[0] + local_res20[0];
    fVar6 = fVar8 * fVar7;
    pfVar2[7] = fVar3;
    pfVar2[10] = fVar3;
    pfVar2[8] = 0.0;
    pfVar2[9] = 0.0;
    fVar5 = fVar3 * fVar8 + local_68[0] + fVar7 * local_res18[0];
    pfVar2[0xb] = fVar5;
    pfVar2[0xe] = fVar5;
    pfVar2[0xd] = fVar3;
    pfVar2[0xc] = 0.0;
    fVar4 = fVar7 * local_res20[0];
    fVar3 = fVar8 * local_res20[0] + local_68[0];
    pfVar2[0xf] = fVar5 * fVar8 + fVar6 * local_res18[0] + fVar4;
    pfVar2[0x11] = fVar3;
    fVar3 = fVar3 * fVar8 + fVar4;
    pfVar2[0x10] = local_res20[0];
    pfVar2[0x12] = fVar3;
    pfVar2[0x13] = (fVar3 + fVar4) * fVar8 + fVar7 * local_68[0];
    pfVar2[0x14] = local_68[0];
    pfVar2[0x15] = fVar8 * local_68[0];
    fVar3 = fVar8 * local_68[0] * fVar8;
    fVar4 = fVar8 * fVar8;
    pfVar2[0x16] = fVar3 + fVar7 * local_68[0];
    pfVar2[0x17] = ((local_68[0] + local_68[0]) * fVar7 + fVar3) * fVar8;
    pfVar2[0x18] = fVar8;
    pfVar2[0x19] = fVar4 + fVar7;
    pfVar2[0x1a] = (fVar7 + fVar7 + fVar4) * fVar8;
    pfVar2[0x1b] = (fVar7 * 3.0 + fVar4) * fVar8 * fVar8 + fVar7 * fVar7;
    pfVar2[0x1d] = fVar6;
    pfVar2[0x1c] = fVar7;
    pfVar2[0x1e] = fVar6 * fVar8 + fVar7 * fVar7;
    pfVar2[0x1f] = ((fVar7 + fVar7) * fVar7 + fVar6 * fVar8) * fVar8;
    *(undefined4 *)
     ((ulonglong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x90 + *(longlong *)(param_1 + 0x148)) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x88);
    lVar1 = *(longlong *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x88) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      DSP::ComputeBiquadCoefs
                (local_res18,local_res20,local_68,local_res8,local_res10,
                 *(undefined4 *)(lVar1 + 0x8c),(float)*(uint *)(param_1 + 0x130),
                 *(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x24),
                 *(undefined4 *)(lVar1 + 0x2c));
      local_res8[0] = -local_res8[0];
      local_res10[0] = -local_res10[0];
      pfVar2 = (float *)(((ulonglong)*(byte *)(param_1 + 0x136) + 1) * 0xa0 +
                        *(longlong *)(param_1 + 0x148));
      fVar3 = local_res8[0] * local_res18[0] + local_res20[0];
      fVar6 = local_res8[0] * local_res10[0];
      *pfVar2 = local_res18[0];
      pfVar2[1] = local_res18[0];
      pfVar2[2] = local_res18[0];
      pfVar2[3] = local_res18[0];
      pfVar2[4] = 0.0;
      pfVar2[5] = 0.0;
      pfVar2[6] = 0.0;
      pfVar2[7] = fVar3;
      pfVar2[10] = fVar3;
      pfVar2[8] = 0.0;
      pfVar2[9] = 0.0;
      fVar5 = fVar3 * local_res8[0] + local_68[0] + local_res10[0] * local_res18[0];
      pfVar2[0xb] = fVar5;
      pfVar2[0xe] = fVar5;
      pfVar2[0xd] = fVar3;
      fVar4 = local_res10[0] * local_res20[0];
      pfVar2[0xc] = 0.0;
      fVar3 = local_res8[0] * local_res20[0] + local_68[0];
      pfVar2[0xf] = fVar5 * local_res8[0] + fVar6 * local_res18[0] + fVar4;
      pfVar2[0x11] = fVar3;
      pfVar2[0x10] = local_res20[0];
      fVar3 = fVar3 * local_res8[0] + fVar4;
      pfVar2[0x12] = fVar3;
      pfVar2[0x13] = (fVar3 + fVar4) * local_res8[0] + local_res10[0] * local_68[0];
      pfVar2[0x15] = local_res8[0] * local_68[0];
      fVar3 = local_res8[0] * local_68[0] * local_res8[0];
      pfVar2[0x14] = local_68[0];
      pfVar2[0x16] = fVar3 + local_res10[0] * local_68[0];
      fVar4 = local_res8[0] * local_res8[0];
      pfVar2[0x17] = ((local_68[0] + local_68[0]) * local_res10[0] + fVar3) * local_res8[0];
      pfVar2[0x18] = local_res8[0];
      pfVar2[0x19] = fVar4 + local_res10[0];
      pfVar2[0x1a] = (local_res10[0] + local_res10[0] + fVar4) * local_res8[0];
      pfVar2[0x1b] = (local_res10[0] * 3.0 + fVar4) * local_res8[0] * local_res8[0] +
                     local_res10[0] * local_res10[0];
      pfVar2[0x1c] = local_res10[0];
      pfVar2[0x1d] = fVar6;
      pfVar2[0x1f] = ((local_res10[0] + local_res10[0]) * local_res10[0] + local_res8[0] * fVar6) *
                     local_res8[0];
      pfVar2[0x1e] = local_res8[0] * fVar6 + local_res10[0] * local_res10[0];
      *(undefined4 *)
       ((ulonglong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x130 + *(longlong *)(param_1 + 0x148)) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x88);
    }
  }
  return;
}



// FUNCTION 143224ec0 ComputeTCCoefs3 body=1399 status=ok
// SIG undefined ComputeTCCoefs3(void)

void CAkRoomVerbFX::ComputeTCCoefs3(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_68 [22];
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x90) != 0)) &&
     ((*(int *)(lVar1 + 0x90) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    DSP::ComputeBiquadCoefs
              (local_res18,local_res20,local_68,local_res8,local_res10,*(undefined4 *)(lVar1 + 0x94)
               ,(float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x34),
               *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38));
    fVar8 = -local_res8[0];
    fVar7 = -local_res10[0];
    pfVar2 = (float *)((ulonglong)*(byte *)(param_1 + 0x137) * 0xa0 + *(longlong *)(param_1 + 0x148)
                      );
    *pfVar2 = local_res18[0];
    pfVar2[1] = local_res18[0];
    pfVar2[2] = local_res18[0];
    pfVar2[3] = local_res18[0];
    pfVar2[4] = 0.0;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    fVar3 = fVar8 * local_res18[0] + local_res20[0];
    fVar6 = fVar8 * fVar7;
    pfVar2[7] = fVar3;
    pfVar2[10] = fVar3;
    pfVar2[8] = 0.0;
    pfVar2[9] = 0.0;
    fVar5 = fVar3 * fVar8 + local_68[0] + fVar7 * local_res18[0];
    pfVar2[0xb] = fVar5;
    pfVar2[0xe] = fVar5;
    pfVar2[0xd] = fVar3;
    pfVar2[0xc] = 0.0;
    fVar4 = fVar7 * local_res20[0];
    fVar3 = fVar8 * local_res20[0] + local_68[0];
    pfVar2[0xf] = fVar5 * fVar8 + fVar6 * local_res18[0] + fVar4;
    pfVar2[0x11] = fVar3;
    fVar3 = fVar3 * fVar8 + fVar4;
    pfVar2[0x10] = local_res20[0];
    pfVar2[0x12] = fVar3;
    pfVar2[0x13] = (fVar3 + fVar4) * fVar8 + fVar7 * local_68[0];
    pfVar2[0x14] = local_68[0];
    pfVar2[0x15] = fVar8 * local_68[0];
    fVar3 = fVar8 * local_68[0] * fVar8;
    fVar4 = fVar8 * fVar8;
    pfVar2[0x16] = fVar3 + fVar7 * local_68[0];
    pfVar2[0x17] = ((local_68[0] + local_68[0]) * fVar7 + fVar3) * fVar8;
    pfVar2[0x18] = fVar8;
    pfVar2[0x19] = fVar4 + fVar7;
    pfVar2[0x1a] = (fVar7 + fVar7 + fVar4) * fVar8;
    pfVar2[0x1b] = (fVar7 * 3.0 + fVar4) * fVar8 * fVar8 + fVar7 * fVar7;
    pfVar2[0x1d] = fVar6;
    pfVar2[0x1c] = fVar7;
    pfVar2[0x1e] = fVar6 * fVar8 + fVar7 * fVar7;
    pfVar2[0x1f] = ((fVar7 + fVar7) * fVar7 + fVar6 * fVar8) * fVar8;
    *(undefined4 *)
     ((ulonglong)*(byte *)(param_1 + 0x137) * 0xa0 + 0x90 + *(longlong *)(param_1 + 0x148)) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x90);
    lVar1 = *(longlong *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x90) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      DSP::ComputeBiquadCoefs
                (local_res18,local_res20,local_68,local_res8,local_res10,
                 *(undefined4 *)(lVar1 + 0x94),(float)*(uint *)(param_1 + 0x130),
                 *(undefined4 *)(lVar1 + 0x34),*(undefined4 *)(lVar1 + 0x30),
                 *(undefined4 *)(lVar1 + 0x38));
      local_res8[0] = -local_res8[0];
      local_res10[0] = -local_res10[0];
      pfVar2 = (float *)(((ulonglong)*(byte *)(param_1 + 0x137) + 1) * 0xa0 +
                        *(longlong *)(param_1 + 0x148));
      fVar3 = local_res8[0] * local_res18[0] + local_res20[0];
      fVar6 = local_res8[0] * local_res10[0];
      *pfVar2 = local_res18[0];
      pfVar2[1] = local_res18[0];
      pfVar2[2] = local_res18[0];
      pfVar2[3] = local_res18[0];
      pfVar2[4] = 0.0;
      pfVar2[5] = 0.0;
      pfVar2[6] = 0.0;
      pfVar2[7] = fVar3;
      pfVar2[10] = fVar3;
      pfVar2[8] = 0.0;
      pfVar2[9] = 0.0;
      fVar5 = fVar3 * local_res8[0] + local_68[0] + local_res10[0] * local_res18[0];
      pfVar2[0xb] = fVar5;
      pfVar2[0xe] = fVar5;
      pfVar2[0xd] = fVar3;
      fVar4 = local_res10[0] * local_res20[0];
      pfVar2[0xc] = 0.0;
      fVar3 = local_res8[0] * local_res20[0] + local_68[0];
      pfVar2[0xf] = fVar5 * local_res8[0] + fVar6 * local_res18[0] + fVar4;
      pfVar2[0x11] = fVar3;
      pfVar2[0x10] = local_res20[0];
      fVar3 = fVar3 * local_res8[0] + fVar4;
      pfVar2[0x12] = fVar3;
      pfVar2[0x13] = (fVar3 + fVar4) * local_res8[0] + local_res10[0] * local_68[0];
      pfVar2[0x15] = local_res8[0] * local_68[0];
      fVar3 = local_res8[0] * local_68[0] * local_res8[0];
      pfVar2[0x14] = local_68[0];
      pfVar2[0x16] = fVar3 + local_res10[0] * local_68[0];
      fVar4 = local_res8[0] * local_res8[0];
      pfVar2[0x17] = ((local_68[0] + local_68[0]) * local_res10[0] + fVar3) * local_res8[0];
      pfVar2[0x18] = local_res8[0];
      pfVar2[0x19] = fVar4 + local_res10[0];
      pfVar2[0x1a] = (local_res10[0] + local_res10[0] + fVar4) * local_res8[0];
      pfVar2[0x1b] = (local_res10[0] * 3.0 + fVar4) * local_res8[0] * local_res8[0] +
                     local_res10[0] * local_res10[0];
      pfVar2[0x1c] = local_res10[0];
      pfVar2[0x1d] = fVar6;
      pfVar2[0x1f] = ((local_res10[0] + local_res10[0]) * local_res10[0] + local_res8[0] * fVar6) *
                     local_res8[0];
      pfVar2[0x1e] = local_res8[0] * fVar6 + local_res10[0] * local_res10[0];
      *(undefined4 *)
       ((ulonglong)*(byte *)(param_1 + 0x137) * 0xa0 + 0x130 + *(longlong *)(param_1 + 0x148)) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x90);
    }
  }
  return;
}



// FUNCTION 143225440 CreateAkRoomVerbFX body=314 status=ok
// SIG undefined CreateAkRoomVerbFX(void)

undefined8 * CreateAkRoomVerbFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aec4f0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x11c) = 0;
    *(undefined4 *)((longlong)puVar1 + 300) = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    _guard_xfg_dispatch_icall_nop(puVar1 + 0x2d,0,0x94);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143225580 FUN_143225580 body=642 status=ok
// SIG undefined FUN_143225580(void)

void FUN_143225580(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x9a) != '\0') &&
     (cVar2 = CAkRoomVerbFX::LiveParametersUpdate(), cVar2 != '\0')) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x158) + 0x58) != '\0') {
    CAkRoomVerbFX::RTPCParametersUpdate(param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x120);
  if (*(int *)((longlong)param_2 + 0xc) == 0x11) {
    uVar6 = *(uint *)(param_1 + 0x118);
    if ((uVar6 == 0) && (*(short *)((longlong)param_2 + 0x12) == 0)) {
      return;
    }
    if ((uVar6 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) {
      *(uint *)(param_1 + 0x118) = uVar3;
      uVar6 = uVar3;
LAB_143225613:
      *(uint *)(param_1 + 0x11c) = uVar3;
    }
    else if (*(uint *)(param_1 + 0x11c) < uVar3) {
      uVar6 = (uVar6 - *(uint *)(param_1 + 0x11c)) + uVar3;
      *(uint *)(param_1 + 0x118) = uVar6;
      goto LAB_143225613;
    }
    uVar5 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    *(uint *)(param_1 + 0x118) = uVar6 - uVar3;
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
    iVar9 = (uint)*(ushort *)(param_2 + 2) - (uint)uVar4;
    if (iVar9 != 0) {
      uVar4 = *(ushort *)(param_2 + 2);
      if (*(byte *)(param_2 + 1) != 0) {
        uVar7 = (ulonglong)*(byte *)(param_2 + 1);
        lVar8 = 0;
        do {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 +
                             ((ulonglong)*(ushort *)(param_2 + 2) * lVar8 +
                             (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                     (ulonglong)(uint)(iVar9 * 4));
          lVar8 = lVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar4 = *(ushort *)(param_2 + 2);
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar4;
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
  }
  if (uVar4 == 0) {
    return;
  }
  uVar3 = *(uint *)(param_2 + 1);
  if ((uVar3 & 0xf00) != 0x100) {
    if ((uVar3 & 0xf00) == 0x200) {
      if ((byte)uVar3 < 5) {
        CAkRoomVerbFX::ProcessAmbisonics1stOrder();
      }
      else {
        CAkRoomVerbFX::ProcessHOA(param_1,param_2);
      }
    }
    goto switchD_143225776_caseD_60c;
  }
  uVar3 = uVar3 >> 0xc & 0x63f;
  if (uVar3 < 0x608) {
    if (uVar3 != 0x607) {
      if (uVar3 < 0xd) {
        if (uVar3 < 0xb) {
          if (uVar3 < 3) goto switchD_143225776_caseD_60c;
          if (4 < uVar3) {
            if (uVar3 == 7) goto LAB_143225746;
            if (uVar3 != 8) goto switchD_143225776_caseD_60c;
          }
        }
        CAkRoomVerbFX::ProcessSpread1Out(param_1,param_2);
      }
      else {
        if ((uVar3 != 0xf) && (uVar3 != 0x603)) goto switchD_143225776_caseD_60c;
LAB_143225746:
        CAkRoomVerbFX::ProcessSpread2Out(param_1,param_2);
      }
      goto switchD_143225776_caseD_60c;
    }
switchD_143225776_caseD_60b:
    CAkRoomVerbFX::ProcessSpread3Out(param_1,param_2);
  }
  else {
    switch(uVar3) {
    case 0x60b:
    case 0x60f:
      goto switchD_143225776_caseD_60b;
    case 0x633:
    case 0x637:
    case 0x63b:
    case 0x63f:
      CAkRoomVerbFX::ProcessSpread4Out(param_1,param_2);
    }
  }
switchD_143225776_caseD_60c:
  lVar8 = *(longlong *)(param_1 + 0x158);
  uVar1 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar8 + 8);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  uVar1 = *(undefined8 *)(lVar8 + 0x20);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(lVar8 + 0x18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  uVar1 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(param_1 + 400) = uVar1;
  uVar1 = *(undefined8 *)(lVar8 + 0x40);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  uVar1 = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar8 + 0x58);
  return;
}



// FUNCTION 143225850 FUN_143225850 body=984 status=ok
// SIG undefined FUN_143225850(void)

undefined8
FUN_143225850(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 local_58 [16];
  undefined4 local_48 [16];
  
  uVar5 = *param_5;
  *(uint *)(param_1 + 0x130) = uVar5;
  *(longlong *)(param_1 + 0x158) = param_4;
  *(undefined8 *)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_4 + 0x74);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(param_1 + 400) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x40);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x50);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_4 + 0x48);
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_4 + 0x58);
  uVar6 = 0;
  bVar2 = -(*(char *)(param_4 + 0x99) != '\0') & 2;
  *(byte *)(param_1 + 0x138) = bVar2;
  if ((param_5[1] & 0xfffff000) == 0x8000) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x138) = bVar2;
  *(float *)(param_1 + 0x78) = 1.0 - (6.2831855 / (float)uVar5) * *(float *)(param_4 + 0xbc);
  *(float *)(param_1 + 0x84) =
       1.0 - (6.2831855 / (float)*(uint *)(param_1 + 0x130)) *
             *(float *)(*(longlong *)(param_1 + 0x158) + 0xbc);
  *(float *)(param_1 + 0x90) =
       1.0 - (6.2831855 / (float)*(uint *)(param_1 + 0x130)) *
             *(float *)(*(longlong *)(param_1 + 0x158) + 0xbc);
  *(float *)(param_1 + 0x9c) =
       1.0 - (6.2831855 / (float)*(uint *)(param_1 + 0x130)) *
             *(float *)(*(longlong *)(param_1 + 0x158) + 0xbc);
  *(float *)(param_1 + 0xa8) =
       1.0 - (6.2831855 / (float)*(uint *)(param_1 + 0x130)) *
             *(float *)(*(longlong *)(param_1 + 0x158) + 0xbc);
  *(float *)(param_1 + 0xb4) =
       1.0 - (6.2831855 / (float)*(uint *)(param_1 + 0x130)) *
             *(float *)(*(longlong *)(param_1 + 0x158) + 0xbc);
  uVar1 = CAkRoomVerbFX::SetupToneControlFilters(param_1);
  if ((((((int)uVar1 == 1) && (uVar1 = CAkRoomVerbFX::SetupFDNs(param_1,param_2), (int)uVar1 == 1))
       && (uVar1 = CAkRoomVerbFX::SetupERDelay(param_1,param_2), (int)uVar1 == 1)) &&
      ((uVar1 = CAkRoomVerbFX::SetupReverbDelay(param_1,param_2), (int)uVar1 == 1 &&
       (uVar1 = CAkRoomVerbFX::SetupERUnit(param_1,param_2), (int)uVar1 == 1)))) &&
     (uVar1 = CAkRoomVerbFX::SetupERFrontBackDelay(param_1,param_2,param_5[1]), (int)uVar1 == 1)) {
    DelayLengths::ComputeDiffusionFiltersDelayTimes
              (4,*(longlong *)(param_1 + 0x158) + 0x9c,local_58);
    DelayLengths::ComputePrimeDelayLengths(local_58,*(undefined4 *)(param_1 + 0x130),4,local_48);
    puVar4 = local_48;
    do {
      fVar7 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x10) * 0.0247212 -
              (float)(3 - (int)uVar6) * 0.61803;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (0.61803 <= fVar7) {
        fVar7 = 0.61803;
      }
      uVar1 = DSP::AllpassFilter::Init(param_1 + (uVar6 * 3 + 1) * 8,param_2,*puVar4,fVar7);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      puVar4 = puVar4 + 1;
    } while (uVar5 < 4);
    *(int *)(param_1 + 0x120) =
         (int)(longlong)
              ((*(float *)(*(longlong *)(param_1 + 0x158) + 0x60) * 0.001 +
               *(float *)(*(longlong *)(param_1 + 0x158) + 8)) * (float)*(uint *)(param_1 + 0x130));
    if ((((param_5[1] & 0xf00) == 0x200) && (uVar5 = param_5[1] & 0xff, 4 < uVar5)) &&
       (DAT_1467c60f8 == 2)) {
      iVar3 = uVar5 - 6;
      *(int *)(param_1 + 300) = iVar3;
      uVar1 = SetupDecorrelationAPF(param_2,iVar3,param_1 + 0x68);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143225c30 LiveParametersUpdate body=1282 status=ok
// SIG undefined LiveParametersUpdate(void)

undefined8 CAkRoomVerbFX::LiveParametersUpdate(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x158);
  if (((*(int *)(param_1 + 0x1d4) != *(int *)(lVar4 + 0x74)) ||
      (*(float *)(lVar4 + 0x70) != *(float *)(param_1 + 0x1d0))) ||
     (*(float *)(lVar4 + 0x6c) != *(float *)(param_1 + 0x1cc))) {
    TermFDNs(param_1,*(undefined8 *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x74);
    iVar3 = SetupFDNs(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar3 != 1) {
      return 1;
    }
    ResetFDNs(param_1);
    lVar4 = *(longlong *)(param_1 + 0x158);
  }
  if (*(char *)(param_1 + 0x1f9) != *(char *)(lVar4 + 0x99)) {
    DSP::CDelayLight::Term(param_1 + 0xe8,*(undefined8 *)(param_1 + 0x160));
    DSP::CDelayLight::Term(param_1 + 0x100,*(undefined8 *)(param_1 + 0x160));
    DSP::CDelayLight::Term(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x160));
    TermERUnit(param_1,*(undefined8 *)(param_1 + 0x160));
    lVar4 = *(longlong *)(param_1 + 0x158);
    if ((*(char *)(lVar4 + 0x98) != '\0') &&
       ((((*(int *)(lVar4 + 0x80) != 0 || (*(int *)(lVar4 + 0x88) != 0)) ||
         (*(int *)(lVar4 + 0x90) != 0)) && (*(longlong *)(param_1 + 0x148) != 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160));
      lVar4 = *(longlong *)(param_1 + 0x158);
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    *(byte *)(param_1 + 0x138) = -(*(char *)(lVar4 + 0x99) != '\0') & 2;
    uVar1 = *(uint *)(param_2 + 8);
    if ((uVar1 & 0xfffff000) == 0x8000) {
      *(undefined1 *)(param_1 + 0x138) = 0;
      uVar1 = *(uint *)(param_2 + 8);
    }
    iVar3 = SetupERFrontBackDelay(param_1,*(undefined8 *)(param_1 + 0x160),uVar1);
    if (iVar3 != 1) {
      return 1;
    }
    DSP::DelayLine::Reset(param_1 + 0xe8);
    DSP::DelayLine::Reset(param_1 + 0x100);
    iVar3 = SetupERDelay(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar3 != 1) {
      return 1;
    }
    DSP::DelayLine::Reset(param_1 + 0xb8);
    iVar3 = SetupERUnit(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar3 != 1) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      DSP::ERUnitDual::Reset();
    }
    lVar4 = *(longlong *)(param_1 + 0x158);
    if ((*(char *)(lVar4 + 0x98) != '\0') &&
       (((*(int *)(lVar4 + 0x80) != 0 || (*(int *)(lVar4 + 0x88) != 0)) ||
        (*(int *)(lVar4 + 0x90) != 0)))) {
      iVar3 = SetupToneControlFilters(param_1);
      if (iVar3 != 1) {
        return 1;
      }
      ResetToneControlFilters(param_1);
      lVar4 = *(longlong *)(param_1 + 0x158);
    }
  }
  if (*(float *)(lVar4 + 0x68) != *(float *)(param_1 + 0x1c8)) {
    DSP::CDelayLight::Term(param_1 + 0xe8,*(undefined8 *)(param_1 + 0x160));
    DSP::CDelayLight::Term(param_1 + 0x100,*(undefined8 *)(param_1 + 0x160));
    iVar3 = SetupERFrontBackDelay
                      (param_1,*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_2 + 8));
    if (iVar3 != 1) {
      return 1;
    }
    DSP::DelayLine::Reset(param_1 + 0xe8);
    DSP::DelayLine::Reset(param_1 + 0x100);
    lVar4 = *(longlong *)(param_1 + 0x158);
  }
  if (*(float *)(lVar4 + 0x60) != *(float *)(param_1 + 0x1c0)) {
    DSP::CDelayLight::Term(param_1 + 0xd0,*(undefined8 *)(param_1 + 0x160));
    iVar3 = SetupReverbDelay(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar3 != 1) {
      return 1;
    }
    DSP::DelayLine::Reset(param_1 + 0xd0);
    lVar4 = *(longlong *)(param_1 + 0x158);
    *(int *)(param_1 + 0x120) =
         (int)(longlong)
              ((*(float *)(lVar4 + 0x60) * 0.001 + *(float *)(lVar4 + 8)) *
              (float)*(uint *)(param_1 + 0x130));
  }
  if ((*(int *)(param_1 + 0x1bc) != *(int *)(lVar4 + 0x5c)) ||
     (*(float *)(lVar4 + 100) != *(float *)(param_1 + 0x1c4))) {
    DSP::CDelayLight::Term(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x160));
    iVar3 = SetupERDelay(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar3 != 1) {
      return 1;
    }
    DSP::DelayLine::Reset(param_1 + 0xb8);
    TermERUnit(param_1,*(undefined8 *)(param_1 + 0x160));
    iVar3 = SetupERUnit(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar3 != 1) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      DSP::ERUnitDual::Reset();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x158);
  if (((((*(char *)(param_1 + 0x1f8) != *(char *)(lVar4 + 0x98)) ||
        (*(int *)(param_1 + 0x1e0) != *(int *)(lVar4 + 0x80))) ||
       (*(int *)(param_1 + 0x1e8) != *(int *)(lVar4 + 0x88))) ||
      (*(int *)(param_1 + 0x1f0) != *(int *)(lVar4 + 0x90))) &&
     ((*(char *)(lVar4 + 0x98) != '\0' &&
      (((*(int *)(lVar4 + 0x80) != 0 || (*(int *)(lVar4 + 0x88) != 0)) ||
       (*(int *)(lVar4 + 0x90) != 0)))))) {
    TermToneControlFilters(param_1,*(undefined8 *)(param_1 + 0x160));
    iVar3 = SetupToneControlFilters(param_1);
    if (iVar3 != 1) {
      return 1;
    }
    ResetToneControlFilters(param_1);
    lVar4 = *(longlong *)(param_1 + 0x158);
  }
  if (*(int *)(param_1 + 0x1e4) != *(int *)(lVar4 + 0x84)) {
    ComputeTCCoefs1(param_1);
    lVar4 = *(longlong *)(param_1 + 0x158);
  }
  if (*(int *)(param_1 + 0x1ec) != *(int *)(lVar4 + 0x8c)) {
    ComputeTCCoefs2(param_1);
    lVar4 = *(longlong *)(param_1 + 0x158);
  }
  if (*(int *)(param_1 + 500) != *(int *)(lVar4 + 0x94)) {
    ComputeTCCoefs3(param_1);
    lVar4 = *(longlong *)(param_1 + 0x158);
  }
  uVar2 = *(undefined8 *)(lVar4 + 100);
  *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(lVar4 + 0x5c);
  *(undefined8 *)(param_1 + 0x1c4) = uVar2;
  uVar2 = *(undefined8 *)(lVar4 + 0x74);
  *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(lVar4 + 0x6c);
  *(undefined8 *)(param_1 + 0x1d4) = uVar2;
  uVar2 = *(undefined8 *)(lVar4 + 0x84);
  *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(lVar4 + 0x7c);
  *(undefined8 *)(param_1 + 0x1e4) = uVar2;
  uVar2 = *(undefined8 *)(lVar4 + 0x94);
  *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(lVar4 + 0x8c);
  *(undefined8 *)(param_1 + 500) = uVar2;
  *(undefined1 *)(lVar4 + 0x9a) = 0;
  return 0;
}



// FUNCTION 143226140 ProcessAmbisonics1stOrder body=3511 status=ok
// SIG undefined ProcessAmbisonics1stOrder(void)

undefined4 CAkRoomVerbFX::ProcessAmbisonics1stOrder(longlong param_1,longlong *param_2)

{
  void *_Dst;
  undefined4 uVar1;
  uint uVar2;
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
  float fVar33;
  float fVar34;
  void *_Src;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  float *pfVar38;
  float *pfVar39;
  byte bVar40;
  longlong lVar41;
  void **ppvVar42;
  int iVar43;
  uint uVar44;
  float *pfVar45;
  ulonglong uVar46;
  float *pfVar47;
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
  uint local_res8;
  float *local_198;
  float *local_190;
  uint local_188;
  void *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  float local_160;
  float local_15c;
  float local_158;
  float *local_150;
  void *local_148;
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
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_148 = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                                (*(longlong **)(param_1 + 0x160),
                                 ((ulonglong)*(byte *)(param_1 + 0x138) + 3) * 0x800);
  if (local_148 == (void *)0x0) {
    return 0x34;
  }
  _Dst = (void *)((longlong)local_148 + 0x400);
  local_180 = (void *)((longlong)local_148 + 0x800);
  local_178 = (longlong)local_148 + 0xc00;
  local_170 = (longlong)local_148 + 0x1000;
  local_168 = (longlong)local_148 + 0x1400;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    local_198 = (float *)0x0;
    pfVar45 = (float *)0x0;
    pfVar47 = (float *)0x0;
    local_190 = (float *)0x0;
  }
  else {
    local_190 = (float *)((longlong)local_148 + 0x2400);
    pfVar47 = (float *)((longlong)local_148 + 0x1800);
    pfVar45 = (float *)((longlong)local_148 + 0x1c00);
    local_198 = (float *)((longlong)local_148 + 0x2000);
  }
  fVar60 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14);
  fVar62 = fVar60 * 0.0027777778;
  local_res8 = 0;
  local_188 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar61 = SQRT(fVar62);
  fVar60 = fVar60 * 0.003928371;
  local_160 = fVar60;
  local_15c = fVar61;
  local_158 = fVar62;
  local_150 = pfVar47;
  if (local_188 != 0) {
    fVar52 = *(float *)(param_1 + 0x174) * 0.003928371;
    fVar51 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
    do {
      _Src = local_148;
      uVar2 = 0x100;
      if (local_188 < 0x100) {
        uVar2 = local_188;
      }
      uVar46 = (ulonglong)uVar2;
      WetPreProcess(param_1,param_2,local_148,uVar46,local_res8);
      if (*(int *)(param_1 + 0xd0) == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uVar2 * 4));
      }
      else {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xd0,_Src,_Dst,uVar46);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xb8,_Src,uVar2);
      }
      pfVar38 = local_198;
      pfVar39 = local_190;
      if (*(char *)(param_1 + 0x138) != '\0') {
        DSP::ERUnitDual::ProcessBuffer(*(undefined8 *)(param_1 + 0x150),_Src,pfVar47,pfVar45,uVar2);
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar40 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar41 = *(longlong *)(param_1 + 0x148);
            lVar37 = (ulonglong)bVar40 * 0xa0;
            if (*(int *)(lVar37 + 0x90 + lVar41) == 1) {
              uVar44 = uVar2 & 3;
              uVar36 = uVar46;
              if (uVar44 != 0) {
                pfVar38 = pfVar47 + uVar46;
                iVar43 = 4 - uVar44;
                uVar36 = (ulonglong)(iVar43 + uVar2);
                do {
                  *pfVar38 = 0.0;
                  pfVar38 = pfVar38 + 1;
                  iVar43 = iVar43 + -1;
                } while (iVar43 != 0);
              }
              fVar60 = *(float *)(lVar37 + 0x88 + lVar41);
              fVar61 = *(float *)(lVar37 + 0x8c + lVar41);
              pfVar38 = (float *)(lVar37 + lVar41);
              fVar62 = *pfVar38;
              fVar50 = pfVar38[1];
              fVar57 = pfVar38[2];
              fVar3 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x10 + lVar41);
              fVar4 = *pfVar38;
              fVar5 = pfVar38[1];
              fVar6 = pfVar38[2];
              fVar7 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x20 + lVar41);
              fVar8 = *pfVar38;
              fVar9 = pfVar38[1];
              fVar10 = pfVar38[2];
              fVar11 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x30 + lVar41);
              fVar12 = *pfVar38;
              fVar13 = pfVar38[1];
              fVar14 = pfVar38[2];
              fVar15 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x40 + lVar41);
              fVar16 = *pfVar38;
              fVar17 = pfVar38[1];
              fVar18 = pfVar38[2];
              fVar19 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x50 + lVar41);
              fVar20 = *pfVar38;
              fVar21 = pfVar38[1];
              fVar22 = pfVar38[2];
              fVar23 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x60 + lVar41);
              fVar24 = *pfVar38;
              fVar25 = pfVar38[1];
              fVar26 = pfVar38[2];
              fVar27 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x70 + lVar41);
              fVar28 = *pfVar38;
              fVar29 = pfVar38[1];
              fVar30 = pfVar38[2];
              fVar31 = pfVar38[3];
              fVar33 = *(float *)(lVar37 + 0x80 + lVar41);
              fVar34 = *(float *)(lVar37 + 0x84 + lVar41);
              for (pfVar38 = pfVar47; pfVar38 < pfVar47 + uVar36; pfVar38 = pfVar38 + 4) {
                fVar32 = *pfVar38;
                fVar49 = pfVar38[1];
                fVar54 = pfVar38[2];
                fVar56 = pfVar38[3];
                fVar48 = fVar24 * fVar60;
                fVar53 = fVar25 * fVar60;
                fVar55 = fVar28 * fVar61;
                fVar58 = fVar29 * fVar61;
                fVar59 = fVar31 * fVar61;
                fVar61 = fVar49 * fVar10 +
                         fVar6 * fVar54 +
                         fVar54 * fVar57 + fVar18 * fVar33 + fVar22 * fVar34 + fVar26 * fVar60 +
                         fVar30 * fVar61 + fVar32 * fVar14;
                fVar60 = fVar49 * fVar11 +
                         fVar7 * fVar54 +
                         fVar56 * fVar3 + fVar19 * fVar33 + fVar23 * fVar34 + fVar27 * fVar60 +
                         fVar59 + fVar32 * fVar15;
                *pfVar38 = fVar49 * fVar8 +
                           fVar4 * fVar54 +
                           fVar32 * fVar62 + fVar16 * fVar33 + fVar20 * fVar34 + fVar48 + fVar55 +
                           fVar32 * fVar12;
                pfVar38[1] = fVar49 * fVar9 +
                             fVar5 * fVar54 +
                             fVar49 * fVar50 + fVar17 * fVar33 + fVar21 * fVar34 + fVar53 + fVar58 +
                             fVar32 * fVar13;
                pfVar38[2] = fVar61;
                pfVar38[3] = fVar60;
                fVar33 = fVar56;
                fVar34 = fVar54;
              }
              *(float *)(lVar37 + 0x80 + lVar41) = fVar33;
              *(float *)(lVar37 + 0x84 + lVar41) = fVar34;
              *(float *)(lVar37 + 0x88 + lVar41) = fVar60;
              *(float *)(lVar37 + 0x8c + lVar41) = fVar61;
              pfVar38 = (float *)(((ulonglong)bVar40 + 1) * 0xa0 + *(longlong *)(param_1 + 0x148));
              uVar35 = uVar2;
              if (uVar44 != 0) {
                iVar43 = 4 - uVar44;
                pfVar39 = pfVar45 + uVar46;
                uVar35 = iVar43 + uVar2;
                do {
                  *pfVar39 = 0.0;
                  pfVar39 = pfVar39 + 1;
                  iVar43 = iVar43 + -1;
                } while (iVar43 != 0);
              }
              fVar60 = pfVar38[0x20];
              fVar61 = pfVar38[0x21];
              fStack_11c = pfVar38[0x22];
              fStack_12c = pfVar38[0x23];
              fVar62 = *pfVar38;
              fVar50 = pfVar38[1];
              fVar57 = pfVar38[2];
              fVar3 = pfVar38[3];
              fVar4 = pfVar38[4];
              fVar5 = pfVar38[5];
              fVar6 = pfVar38[6];
              fVar7 = pfVar38[7];
              fVar8 = pfVar38[8];
              fVar9 = pfVar38[9];
              fVar10 = pfVar38[10];
              fVar11 = pfVar38[0xb];
              fVar12 = pfVar38[0xc];
              fVar13 = pfVar38[0xd];
              fVar14 = pfVar38[0xe];
              fVar15 = pfVar38[0xf];
              fVar16 = pfVar38[0x10];
              fVar17 = pfVar38[0x11];
              fVar18 = pfVar38[0x12];
              fVar19 = pfVar38[0x13];
              fVar20 = pfVar38[0x14];
              fVar21 = pfVar38[0x15];
              fVar22 = pfVar38[0x16];
              fVar23 = pfVar38[0x17];
              fVar24 = pfVar38[0x18];
              fVar25 = pfVar38[0x19];
              fVar26 = pfVar38[0x1a];
              fVar27 = pfVar38[0x1b];
              fVar28 = pfVar38[0x1c];
              fVar29 = pfVar38[0x1d];
              fVar30 = pfVar38[0x1e];
              fVar31 = pfVar38[0x1f];
              local_108 = CONCAT44(fVar60,fVar60);
              uStack_100 = CONCAT44(fVar60,fVar60);
              pfVar39 = pfVar45;
              fStack_10c = fVar61;
              if (pfVar45 < pfVar45 + uVar35) {
                do {
                  fVar33 = *pfVar39;
                  fVar34 = pfVar39[1];
                  fStack_10c = pfVar39[2];
                  fVar32 = pfVar39[3];
                  fVar49 = fVar24 * fStack_11c;
                  fVar54 = fVar25 * fStack_11c;
                  fVar56 = fVar28 * fStack_12c;
                  fVar48 = fVar29 * fStack_12c;
                  fVar53 = fVar31 * fStack_12c;
                  fStack_12c = fVar34 * fVar10 +
                               fVar6 * fStack_10c +
                               fStack_10c * fVar57 + fVar18 * fVar60 + fVar22 * fVar61 +
                               fVar26 * fStack_11c + fVar30 * fStack_12c + fVar33 * fVar14;
                  fStack_11c = fVar34 * fVar11 +
                               fVar7 * fStack_10c +
                               fVar32 * fVar3 + fVar19 * fVar60 + fVar23 * fVar61 +
                               fVar27 * fStack_11c + fVar53 + fVar33 * fVar15;
                  *pfVar39 = fVar34 * fVar8 +
                             fVar4 * fStack_10c +
                             fVar33 * fVar62 + fVar16 * fVar60 + fVar20 * fVar61 + fVar49 + fVar56 +
                             fVar33 * fVar12;
                  pfVar39[1] = fVar34 * fVar9 +
                               fVar5 * fStack_10c +
                               fVar34 * fVar50 + fVar17 * fVar60 + fVar21 * fVar61 + fVar54 + fVar48
                               + fVar33 * fVar13;
                  pfVar39[2] = fStack_12c;
                  pfVar39[3] = fStack_11c;
                  pfVar39 = pfVar39 + 4;
                  fVar61 = fStack_10c;
                  fVar60 = fVar32;
                } while (pfVar39 < pfVar45 + uVar35);
                local_108 = CONCAT44(fVar32,fVar32);
                uStack_100 = CONCAT44(fVar32,fVar32);
              }
              bVar40 = bVar40 + 1;
              pfVar38[0x20] = (float)local_108;
              pfVar38[0x21] = fStack_10c;
              pfVar38[0x22] = fStack_11c;
              pfVar38[0x23] = fStack_12c;
              local_138 = fStack_12c;
              fStack_134 = fStack_12c;
              fStack_130 = fStack_12c;
              local_128 = fStack_11c;
              fStack_124 = fStack_11c;
              fStack_120 = fStack_11c;
              local_118 = fStack_10c;
              fStack_114 = fStack_10c;
              fStack_110 = fStack_10c;
            }
            bVar40 = bVar40 + 1;
            fVar60 = local_160;
            fVar61 = local_15c;
            fVar62 = local_158;
          } while (bVar40 < *(byte *)(param_1 + 0x134));
        }
        pfVar38 = pfVar47;
        pfVar39 = pfVar45;
        if (*(int *)(param_1 + 0xe8) != 0) {
          DSP::DelayLine::ProcessBuffer((int *)(param_1 + 0xe8),pfVar47,local_198,uVar2);
          DSP::DelayLine::ProcessBuffer(param_1 + 0x100,pfVar45,local_190,uVar2);
          pfVar38 = local_198;
          pfVar39 = local_190;
        }
      }
      local_190 = pfVar39;
      local_198 = pfVar38;
      lVar41 = param_1 + 8;
      lVar37 = 4;
      do {
        DSP::AllpassFilter::ProcessBuffer(lVar41,_Dst,uVar2);
        lVar41 = lVar41 + 0x18;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      ReverbPreProcess(param_1,_Dst,uVar46);
      ::_guard_xfg_dispatch_icall_nop(local_180,0,0x1000);
      uVar44 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          DSP::DelayLine::ProcessBuffer
                    (*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar44 * 0xa8,_Dst,uVar46);
          DSP::FDN4::ProcessBufferAccum
                    (*(longlong *)(param_1 + 0x140) + (ulonglong)uVar44 * 0xa8,_Dst,
                     (&local_180)[uVar44 & 1],(&local_180)[(uVar44 & 1) + 2],uVar2);
          uVar44 = uVar44 + 1;
        } while (uVar44 < *(uint *)(param_1 + 0x128));
      }
      fVar50 = *(float *)(param_1 + 0x124);
      ppvVar42 = &local_180;
      lVar41 = param_1 + 0x70;
      lVar37 = 4;
      do {
        DSP::OnePoleZeroHPFilter::ProcessBufferWithGain(lVar41,*ppvVar42,uVar2,fVar50 * 1.4142135);
        lVar41 = lVar41 + 0xc;
        ppvVar42 = ppvVar42 + 1;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      uVar46 = (ulonglong)local_res8;
      lVar41 = *param_2 + uVar46 * 4;
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
      DSP::Mix3Interp(lVar41,local_180,local_178,*(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                      *(undefined4 *)(param_1 + 0x1b4),uVar1,*(undefined4 *)(param_1 + 0x1b4),uVar1,
                      uVar2);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
      DSP::Mix3Interp(lVar41,local_170,local_168,0x3f800000,0x3f800000,
                      *(undefined4 *)(param_1 + 0x1b4),uVar1,*(undefined4 *)(param_1 + 0x1b4),uVar1,
                      uVar2);
      pfVar47 = local_150;
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar50 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
        fVar57 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        DSP::Mix3Interp(lVar41,local_150,pfVar45,0x3f800000,0x3f800000,fVar50,fVar57,fVar50,fVar57,
                        uVar2);
        fVar50 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
        fVar57 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
        DSP::Mix3Interp(lVar41,local_198,local_190,0x3f800000,0x3f800000,fVar50,fVar57,fVar50,fVar57
                        ,uVar2);
      }
      if (1 < *(byte *)(param_2 + 1)) {
        fVar50 = fVar51 * *(float *)(param_1 + 0x1b4);
        lVar41 = *param_2 + (*(ushort *)(param_2 + 2) + uVar46) * 4;
        fVar57 = fVar61 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        DSP::Mix3Interp(lVar41,local_180,local_178,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),fVar50,fVar57,-fVar50
                        ,-fVar57,uVar2);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar50 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar52;
          fVar57 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar60;
          DSP::Mix3Interp(lVar41,pfVar47,pfVar45,0x3f800000,0x3f800000,fVar50,fVar57,-fVar50,-fVar57
                          ,uVar2);
          fVar50 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0) * fVar52;
          fVar57 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar60;
          DSP::Mix3Interp(lVar41,local_198,local_190,0x3f800000,0x3f800000,fVar50,fVar57,-fVar50,
                          -fVar57,uVar2);
        }
        fVar50 = fVar51 * *(float *)(param_1 + 0x1b4);
        fVar57 = fVar61 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        DSP::Mix3Interp(*param_2 + (uVar46 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,local_170,
                        local_168,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),fVar50,fVar57,-fVar50
                        ,-fVar57,uVar2);
        fVar50 = fVar51 * *(float *)(param_1 + 0x1b4) * fVar51;
        lVar41 = *param_2 + (uVar46 + (ulonglong)*(ushort *)(param_2 + 2) * 3) * 4;
        fVar57 = fVar62 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        DSP::Mix3Interp(lVar41,local_180,local_178,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),fVar50,fVar57,fVar50,
                        fVar57,uVar2);
        fVar50 = -(fVar62 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54));
        fVar51 = -(fVar51 * *(float *)(param_1 + 0x1b4) * fVar51);
        DSP::Mix3Interp(lVar41,local_170,local_168,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),fVar51,fVar50,fVar51,
                        fVar50,uVar2);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar51 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar52;
          fVar50 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar60;
          DSP::Mix3Interp(lVar41,pfVar47,pfVar45,0x3f800000,0x3f800000,fVar51,fVar50,fVar51,fVar50,
                          uVar2);
          fVar52 = -(*(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0) * fVar52);
          fVar51 = -(*(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar60);
          DSP::Mix3Interp(lVar41,local_198,local_190,0x3f800000,0x3f800000,fVar52,fVar51,fVar52,
                          fVar51,uVar2);
        }
      }
      lVar41 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar41 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar41 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar41 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar41 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar41 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar41 + 0x40);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar41 + 0x48);
      local_res8 = local_res8 + uVar2;
      local_188 = local_188 - uVar2;
      fVar52 = fVar60;
      fVar51 = fVar61;
    } while (local_188 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),local_148);
  return 1;
}



// FUNCTION 143226f00 ProcessHOA body=5288 status=ok
// SIG undefined ProcessHOA(void)

undefined4 CAkRoomVerbFX::ProcessHOA(longlong param_1,longlong *param_2)

{
  void *_Dst;
  uint uVar1;
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
  float *pfVar33;
  float *pfVar34;
  void *_Src;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  float *pfVar38;
  float *pfVar39;
  byte bVar40;
  longlong lVar41;
  void **ppvVar42;
  int iVar43;
  uint uVar44;
  ulonglong uVar45;
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
  uint local_res8;
  undefined8 in_stack_fffffffffffffe28;
  void *pvVar62;
  undefined8 uVar63;
  undefined4 uVar64;
  void *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  float *local_178;
  float *local_170;
  uint local_168;
  float *local_160;
  float *local_158;
  float local_150;
  float local_14c;
  float local_148;
  void *local_140;
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
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  local_140 = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                                (*(longlong **)(param_1 + 0x160),
                                 ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x800);
  if (local_140 == (void *)0x0) {
    return 0x34;
  }
  _Dst = (void *)((longlong)local_140 + 0x400);
  local_1a8 = (void *)((longlong)local_140 + 0x800);
  local_1a0 = (longlong)local_140 + 0xc00;
  local_198 = (longlong)local_140 + 0x1000;
  local_190 = (longlong)local_140 + 0x1400;
  local_188 = (longlong)local_140 + 0x1800;
  local_180 = (longlong)local_140 + 0x1c00;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    local_158 = (float *)0x0;
    local_160 = (float *)0x0;
    local_178 = (float *)0x0;
    local_170 = (float *)0x0;
  }
  else {
    local_170 = (float *)((longlong)local_140 + 0x2800);
    local_160 = (float *)((longlong)local_140 + 0x2000);
    local_178 = (float *)((longlong)local_140 + 0x2c00);
    local_158 = (float *)((longlong)local_140 + 0x2400);
  }
  fVar60 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14);
  fVar61 = fVar60 * 0.0027777778;
  local_res8 = 0;
  local_168 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar60 = fVar60 * 0.003928371;
  fVar58 = SQRT(fVar61);
  local_150 = fVar58;
  local_14c = fVar60;
  local_148 = fVar61;
  if (local_168 != 0) {
    fVar59 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
    fVar49 = *(float *)(param_1 + 0x174) * 0.003928371;
    do {
      _Src = local_140;
      pfVar34 = local_158;
      pfVar33 = local_160;
      pvVar62 = (void *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffe28 >> 0x20),local_res8);
      uVar1 = 0x100;
      if (local_168 < 0x100) {
        uVar1 = local_168;
      }
      uVar45 = (ulonglong)uVar1;
      WetPreProcess(param_1,param_2,local_140,uVar45,pvVar62);
      if (*(int *)(param_1 + 0xd0) == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uVar1 * 4));
      }
      else {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xd0,_Src,_Dst,uVar45);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xb8,_Src,uVar1);
      }
      pfVar38 = local_178;
      pfVar39 = local_170;
      if (*(char *)(param_1 + 0x138) != '\0') {
        pvVar62 = (void *)CONCAT44((int)((ulonglong)pvVar62 >> 0x20),uVar1);
        DSP::ERUnitDual::ProcessBuffer
                  (*(undefined8 *)(param_1 + 0x150),_Src,pfVar33,pfVar34,pvVar62);
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar40 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar41 = *(longlong *)(param_1 + 0x148);
            lVar37 = (ulonglong)bVar40 * 0xa0;
            if (*(int *)(lVar37 + 0x90 + lVar41) == 1) {
              uVar44 = uVar1 & 3;
              uVar36 = uVar45;
              if (uVar44 != 0) {
                pfVar38 = pfVar33 + uVar45;
                iVar43 = 4 - uVar44;
                uVar36 = (ulonglong)(iVar43 + uVar1);
                do {
                  *pfVar38 = 0.0;
                  pfVar38 = pfVar38 + 1;
                  iVar43 = iVar43 + -1;
                } while (iVar43 != 0);
              }
              fVar60 = *(float *)(lVar37 + 0x88 + lVar41);
              fVar58 = *(float *)(lVar37 + 0x8c + lVar41);
              pfVar38 = (float *)(lVar37 + lVar41);
              fVar61 = *pfVar38;
              fVar48 = pfVar38[1];
              fVar54 = pfVar38[2];
              fVar2 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x10 + lVar41);
              fVar3 = *pfVar38;
              fVar4 = pfVar38[1];
              fVar5 = pfVar38[2];
              fVar6 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x20 + lVar41);
              fVar7 = *pfVar38;
              fVar8 = pfVar38[1];
              fVar9 = pfVar38[2];
              fVar10 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x30 + lVar41);
              fVar11 = *pfVar38;
              fVar12 = pfVar38[1];
              fVar13 = pfVar38[2];
              fVar14 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x40 + lVar41);
              fVar15 = *pfVar38;
              fVar16 = pfVar38[1];
              fVar17 = pfVar38[2];
              fVar18 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x50 + lVar41);
              fVar19 = *pfVar38;
              fVar20 = pfVar38[1];
              fVar21 = pfVar38[2];
              fVar22 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x60 + lVar41);
              fVar23 = *pfVar38;
              fVar24 = pfVar38[1];
              fVar25 = pfVar38[2];
              fVar26 = pfVar38[3];
              pfVar38 = (float *)(lVar37 + 0x70 + lVar41);
              fVar27 = *pfVar38;
              fVar28 = pfVar38[1];
              fVar29 = pfVar38[2];
              fVar30 = pfVar38[3];
              fVar31 = *(float *)(lVar37 + 0x80 + lVar41);
              fVar32 = *(float *)(lVar37 + 0x84 + lVar41);
              for (pfVar38 = pfVar33; pfVar38 < pfVar33 + uVar36; pfVar38 = pfVar38 + 4) {
                fVar47 = *pfVar38;
                fVar51 = pfVar38[1];
                fVar53 = pfVar38[2];
                fVar56 = pfVar38[3];
                fVar46 = fVar23 * fVar60;
                fVar50 = fVar24 * fVar60;
                fVar52 = fVar27 * fVar58;
                fVar55 = fVar28 * fVar58;
                fVar57 = fVar30 * fVar58;
                fVar58 = fVar51 * fVar9 +
                         fVar5 * fVar53 +
                         fVar53 * fVar54 + fVar17 * fVar31 + fVar21 * fVar32 + fVar25 * fVar60 +
                         fVar29 * fVar58 + fVar47 * fVar13;
                fVar60 = fVar51 * fVar10 +
                         fVar6 * fVar53 +
                         fVar56 * fVar2 + fVar18 * fVar31 + fVar22 * fVar32 + fVar26 * fVar60 +
                         fVar57 + fVar47 * fVar14;
                *pfVar38 = fVar51 * fVar7 +
                           fVar3 * fVar53 +
                           fVar47 * fVar61 + fVar15 * fVar31 + fVar19 * fVar32 + fVar46 + fVar52 +
                           fVar47 * fVar11;
                pfVar38[1] = fVar51 * fVar8 +
                             fVar4 * fVar53 +
                             fVar51 * fVar48 + fVar16 * fVar31 + fVar20 * fVar32 + fVar50 + fVar55 +
                             fVar47 * fVar12;
                pfVar38[2] = fVar58;
                pfVar38[3] = fVar60;
                fVar31 = fVar56;
                fVar32 = fVar53;
              }
              *(float *)(lVar37 + 0x80 + lVar41) = fVar31;
              *(float *)(lVar37 + 0x84 + lVar41) = fVar32;
              *(float *)(lVar37 + 0x88 + lVar41) = fVar60;
              *(float *)(lVar37 + 0x8c + lVar41) = fVar58;
              pfVar38 = (float *)(((ulonglong)bVar40 + 1) * 0xa0 + *(longlong *)(param_1 + 0x148));
              uVar35 = uVar1;
              if (uVar44 != 0) {
                pfVar39 = pfVar34 + uVar45;
                iVar43 = 4 - uVar44;
                uVar35 = iVar43 + uVar1;
                do {
                  *pfVar39 = 0.0;
                  pfVar39 = pfVar39 + 1;
                  iVar43 = iVar43 + -1;
                } while (iVar43 != 0);
              }
              local_128 = pfVar38[0x22];
              local_138 = pfVar38[0x23];
              fVar60 = pfVar38[0x1c];
              fVar58 = pfVar38[0x1d];
              local_f8 = *(undefined8 *)(pfVar38 + 0x1c);
              fVar61 = pfVar38[0x1e];
              fVar48 = pfVar38[0x1f];
              uStack_f0 = *(undefined8 *)(pfVar38 + 0x1e);
              fVar54 = *pfVar38;
              fVar2 = pfVar38[1];
              fVar3 = pfVar38[2];
              fVar4 = pfVar38[3];
              fVar5 = pfVar38[4];
              fVar6 = pfVar38[5];
              fVar7 = pfVar38[6];
              fVar8 = pfVar38[7];
              fVar9 = pfVar38[8];
              fVar10 = pfVar38[9];
              fVar11 = pfVar38[10];
              fVar12 = pfVar38[0xb];
              fVar13 = pfVar38[0xc];
              fVar14 = pfVar38[0xd];
              fVar15 = pfVar38[0xe];
              fVar16 = pfVar38[0xf];
              fVar17 = pfVar38[0x10];
              fVar18 = pfVar38[0x11];
              fVar19 = pfVar38[0x12];
              fVar20 = pfVar38[0x13];
              fVar21 = pfVar38[0x14];
              fVar22 = pfVar38[0x15];
              fVar23 = pfVar38[0x16];
              fVar24 = pfVar38[0x17];
              fVar25 = pfVar38[0x18];
              fVar26 = pfVar38[0x19];
              fVar27 = pfVar38[0x1a];
              fVar28 = pfVar38[0x1b];
              local_108 = pfVar38[0x20];
              local_118 = pfVar38[0x21];
              for (pfVar39 = pfVar34; pfVar39 < pfVar34 + uVar35; pfVar39 = pfVar39 + 4) {
                fVar29 = *pfVar39;
                fVar30 = pfVar39[1];
                fVar31 = pfVar39[2];
                fVar32 = pfVar39[3];
                fVar47 = fVar25 * local_128;
                fVar51 = fVar26 * local_128;
                fVar53 = fVar60 * local_138;
                fVar56 = fVar58 * local_138;
                fVar46 = fVar48 * local_138;
                local_138 = fVar30 * fVar11 +
                            fVar7 * fVar31 +
                            fVar31 * fVar3 + fVar19 * local_108 + fVar23 * local_118 +
                            fVar27 * local_128 + fVar61 * local_138 + fVar29 * fVar15;
                local_128 = fVar30 * fVar12 +
                            fVar8 * fVar31 +
                            fVar32 * fVar4 + fVar20 * local_108 + fVar24 * local_118 +
                            fVar28 * local_128 + fVar46 + fVar29 * fVar16;
                *pfVar39 = fVar30 * fVar9 +
                           fVar5 * fVar31 +
                           fVar29 * fVar54 + fVar17 * local_108 + fVar21 * local_118 + fVar47 +
                           fVar53 + fVar29 * fVar13;
                pfVar39[1] = fVar30 * fVar10 +
                             fVar6 * fVar31 +
                             fVar30 * fVar2 + fVar18 * local_108 + fVar22 * local_118 + fVar51 +
                             fVar56 + fVar29 * fVar14;
                pfVar39[2] = local_138;
                pfVar39[3] = local_128;
                local_108 = fVar32;
                local_118 = fVar31;
              }
              bVar40 = bVar40 + 1;
              pfVar38[0x20] = local_108;
              pfVar38[0x21] = local_118;
              pfVar38[0x22] = local_128;
              pfVar38[0x23] = local_138;
              fStack_134 = local_138;
              fStack_130 = local_138;
              fStack_12c = local_138;
              fStack_124 = local_128;
              fStack_120 = local_128;
              fStack_11c = local_128;
              fStack_114 = local_118;
              fStack_110 = local_118;
              fStack_10c = local_118;
              fStack_104 = local_108;
              fStack_100 = local_108;
              fStack_fc = local_108;
            }
            bVar40 = bVar40 + 1;
            fVar58 = local_150;
            fVar60 = local_14c;
            fVar61 = local_148;
          } while (bVar40 < *(byte *)(param_1 + 0x134));
        }
        pfVar38 = pfVar34;
        pfVar39 = pfVar33;
        if (*(int *)(param_1 + 0xe8) != 0) {
          DSP::DelayLine::ProcessBuffer((int *)(param_1 + 0xe8),pfVar33,local_170,uVar1);
          DSP::DelayLine::ProcessBuffer(param_1 + 0x100,pfVar34,local_178,uVar1);
          pfVar38 = local_178;
          pfVar39 = local_170;
        }
      }
      local_170 = pfVar39;
      local_178 = pfVar38;
      lVar41 = param_1 + 8;
      lVar37 = 4;
      do {
        DSP::AllpassFilter::ProcessBuffer(lVar41,_Dst,uVar1);
        lVar41 = lVar41 + 0x18;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      ReverbPreProcess(param_1,_Dst,uVar45);
      ::_guard_xfg_dispatch_icall_nop(local_1a8,0,0x1800);
      uVar44 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          DSP::DelayLine::ProcessBuffer
                    (*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar44 * 0xa8,_Dst,uVar45);
          pvVar62 = (&local_1a8)[(uVar44 & 1) + 4];
          DSP::FDN4::ProcessBufferAccum
                    (*(longlong *)(param_1 + 0x140) + (ulonglong)uVar44 * 0xa8,_Dst,
                     (&local_1a8)[uVar44 & 1],(&local_1a8)[(uVar44 & 1) + 2],pvVar62,uVar1);
          uVar44 = uVar44 + 1;
        } while (uVar44 < *(uint *)(param_1 + 0x128));
      }
      fVar48 = *(float *)(param_1 + 0x124);
      ppvVar42 = &local_1a8;
      lVar41 = param_1 + 0x70;
      lVar37 = 6;
      do {
        DSP::OnePoleZeroHPFilter::ProcessBufferWithGain(lVar41,*ppvVar42,uVar1,fVar48 * 1.4142135);
        lVar41 = lVar41 + 0xc;
        ppvVar42 = ppvVar42 + 1;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      uVar36 = (ulonglong)local_res8;
      lVar41 = *param_2 + uVar36 * 4;
      uVar64 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar63 = CONCAT44((int)((ulonglong)pvVar62 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(lVar41,local_1a8,local_1a0,*(undefined4 *)(param_1 + 0x1ac),uVar63,
                      *(undefined4 *)(param_1 + 0x1b4),uVar64,*(undefined4 *)(param_1 + 0x1b4),
                      uVar64,uVar1);
      uVar64 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar63 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),0x3f800000);
      DSP::Mix3Interp(lVar41,local_198,local_190,0x3f800000,uVar63,*(undefined4 *)(param_1 + 0x1b4),
                      uVar64,*(undefined4 *)(param_1 + 0x1b4),uVar64,uVar1);
      pfVar33 = local_158;
      uVar64 = (undefined4)((ulonglong)uVar63 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar48 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
        fVar54 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar63 = CONCAT44(uVar64,0x3f800000);
        DSP::Mix3Interp(lVar41,local_160,local_158,0x3f800000,uVar63,fVar48,fVar54,fVar48,fVar54,
                        uVar1);
        fVar48 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
        fVar54 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
        uVar63 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),0x3f800000);
        DSP::Mix3Interp(lVar41,local_170,local_178,0x3f800000,uVar63,fVar48,fVar54,fVar48,fVar54,
                        uVar1);
        uVar64 = (undefined4)((ulonglong)uVar63 >> 0x20);
      }
      fVar48 = fVar59 * *(float *)(param_1 + 0x1b4);
      lVar41 = *param_2 + (*(ushort *)(param_2 + 2) + uVar36) * 4;
      fVar54 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar63 = CONCAT44(uVar64,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(lVar41,local_1a8,local_1a0,*(undefined4 *)(param_1 + 0x1ac),uVar63,fVar48,
                      fVar54,-fVar48,-fVar54,uVar1);
      uVar64 = (undefined4)((ulonglong)uVar63 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar48 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar49;
        fVar54 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar60;
        uVar63 = CONCAT44(uVar64,0x3f800000);
        DSP::Mix3Interp(lVar41,local_160,pfVar33,0x3f800000,uVar63,fVar48,fVar54,-fVar48,-fVar54,
                        uVar1);
        fVar48 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0) * fVar49;
        fVar54 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar60;
        uVar63 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),0x3f800000);
        DSP::Mix3Interp(lVar41,local_170,local_178,0x3f800000,uVar63,fVar48,fVar54,-fVar48,-fVar54,
                        uVar1);
        uVar64 = (undefined4)((ulonglong)uVar63 >> 0x20);
      }
      fVar48 = fVar59 * *(float *)(param_1 + 0x1b4);
      fVar54 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar63 = CONCAT44(uVar64,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,local_198,
                      local_190,*(undefined4 *)(param_1 + 0x1ac),uVar63,fVar48,fVar54,-fVar48,
                      -fVar54,uVar1);
      fVar48 = fVar59 * *(float *)(param_1 + 0x1b4) * fVar59;
      lVar41 = *param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 3) * 4;
      fVar54 = fVar61 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar63 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(lVar41,local_1a8,local_1a0,*(undefined4 *)(param_1 + 0x1ac),uVar63,fVar48,
                      fVar54,fVar48,fVar54,uVar1);
      fVar54 = -(fVar61 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54));
      fVar48 = -(fVar59 * *(float *)(param_1 + 0x1b4) * fVar59);
      uVar63 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(lVar41,local_198,local_190,*(undefined4 *)(param_1 + 0x1ac),uVar63,fVar48,
                      fVar54,fVar48,fVar54,uVar1);
      uVar64 = (undefined4)((ulonglong)uVar63 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar48 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar49;
        fVar54 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar60;
        uVar63 = CONCAT44(uVar64,0x3f800000);
        DSP::Mix3Interp(lVar41,local_160,pfVar33,0x3f800000,uVar63,fVar48,fVar54,fVar48,fVar54,uVar1
                       );
        fVar49 = -(*(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0) * fVar49);
        fVar48 = -(*(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar60);
        uVar63 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),0x3f800000);
        DSP::Mix3Interp(lVar41,local_170,local_178,0x3f800000,uVar63,fVar49,fVar48,fVar49,fVar48,
                        uVar1);
        uVar64 = (undefined4)((ulonglong)uVar63 >> 0x20);
      }
      fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
      fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar63 = CONCAT44(uVar64,fVar49 + fVar49);
      DSP::Mix2Interp(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 4) * 4,local_188,
                      *(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),uVar63,fVar48 + fVar48,
                      uVar1);
      fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
      fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      in_stack_fffffffffffffe28 = CONCAT44((int)((ulonglong)uVar63 >> 0x20),fVar49 + fVar49);
      DSP::Mix2Interp(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 5) * 4,local_180,
                      *(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                      in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
      iVar43 = DAT_1467c60f8;
      uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
      pvVar62 = (void *)(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 6) * 4);
      if (DAT_1467c60f8 == 0) {
        ::_guard_xfg_dispatch_icall_nop(pvVar62,0,uVar45 << 2);
      }
      else {
        if (DAT_1467c60f8 != 1) {
          if (DAT_1467c60f8 != 2) goto LAB_143227cde;
          DSP::AllpassFilter::ProcessBuffer(*(undefined8 *)(param_1 + 0x68),local_1a8,uVar45);
        }
        fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
        fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
        DSP::Mix2Interp(pvVar62,local_1a8,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
        iVar43 = DAT_1467c60f8;
      }
LAB_143227cde:
      uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
      pvVar62 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 7 + uVar36) * 4);
      if (iVar43 == 0) {
        ::_guard_xfg_dispatch_icall_nop(pvVar62,0,uVar45 << 2);
      }
      else {
        if (iVar43 != 1) {
          if (iVar43 != 2) goto LAB_143227d7d;
          DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0x18,local_1a0,uVar45);
        }
        fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
        fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
        DSP::Mix2Interp(pvVar62,local_1a0,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
        iVar43 = DAT_1467c60f8;
      }
LAB_143227d7d:
      uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
      pvVar62 = (void *)(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 8) * 4);
      if (iVar43 == 0) {
        ::_guard_xfg_dispatch_icall_nop(pvVar62,0,uVar45 << 2);
      }
      else {
        if (iVar43 != 1) {
          if (iVar43 != 2) goto LAB_143227e19;
          DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0x30,local_198,uVar45);
        }
        fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
        fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
        DSP::Mix2Interp(pvVar62,local_198,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
        iVar43 = DAT_1467c60f8;
      }
LAB_143227e19:
      uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
      if (9 < *(byte *)(param_2 + 1)) {
        pvVar62 = (void *)(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 9) * 4);
        if (iVar43 == 0) {
          ::_guard_xfg_dispatch_icall_nop(pvVar62,0,uVar45 << 2);
        }
        else {
          if (iVar43 != 1) {
            if (iVar43 != 2) goto LAB_143227ec4;
            DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0x48,local_190,uVar45)
            ;
          }
          fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
          fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
          DSP::Mix2Interp(pvVar62,local_190,*(undefined4 *)(param_1 + 0x1ac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                          in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
          iVar43 = DAT_1467c60f8;
        }
LAB_143227ec4:
        uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
        pvVar62 = (void *)(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 10) * 4);
        if (iVar43 == 0) {
          ::_guard_xfg_dispatch_icall_nop(pvVar62,0,uVar45 << 2);
        }
        else {
          if (iVar43 != 1) {
            if (iVar43 != 2) goto LAB_143227f64;
            DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0x60,local_188,uVar45)
            ;
          }
          fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
          fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
          DSP::Mix2Interp(pvVar62,local_188,*(undefined4 *)(param_1 + 0x1ac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                          in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
          iVar43 = DAT_1467c60f8;
        }
LAB_143227f64:
        uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
        pvVar62 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xb + uVar36) * 4);
        if (iVar43 == 0) {
          ::_guard_xfg_dispatch_icall_nop(pvVar62,0,uVar45 << 2);
        }
        else {
          if (iVar43 != 1) {
            if (iVar43 != 2) goto LAB_143228003;
            DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0x78,local_180,uVar45)
            ;
          }
          fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
          fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
          DSP::Mix2Interp(pvVar62,local_180,*(undefined4 *)(param_1 + 0x1ac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                          in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
          iVar43 = DAT_1467c60f8;
        }
LAB_143228003:
        uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
        pvVar62 = (void *)(*param_2 + (uVar36 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc) * 4);
        if (iVar43 == 0) {
          ::_guard_xfg_dispatch_icall_nop(pvVar62,0,(ulonglong)uVar1 << 2);
        }
        else {
          if (iVar43 != 1) {
            if (iVar43 != 2) goto LAB_1432280a6;
            DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0x90,local_1a8,uVar1);
          }
          fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
          fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
          DSP::Mix2Interp(pvVar62,local_1a8,*(undefined4 *)(param_1 + 0x1ac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                          in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
          iVar43 = DAT_1467c60f8;
        }
LAB_1432280a6:
        uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
        pvVar62 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xd + uVar36) * 4);
        if (iVar43 == 0) {
          ::_guard_xfg_dispatch_icall_nop(pvVar62,0,(ulonglong)uVar1 << 2);
        }
        else {
          if (iVar43 != 1) {
            if (iVar43 != 2) goto LAB_143228148;
            DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0xa8,local_1a0,uVar1);
          }
          fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
          fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
          DSP::Mix2Interp(pvVar62,local_1a0,*(undefined4 *)(param_1 + 0x1ac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                          in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
          iVar43 = DAT_1467c60f8;
        }
LAB_143228148:
        uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
        pvVar62 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xe + uVar36) * 4);
        if (iVar43 == 0) {
          ::_guard_xfg_dispatch_icall_nop(pvVar62,0,(ulonglong)uVar1 << 2);
        }
        else {
          if (iVar43 != 1) {
            if (iVar43 != 2) goto LAB_1432281ea;
            DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0xc0,local_198,uVar1);
          }
          fVar49 = fVar59 * *(float *)(param_1 + 0x1b4);
          fVar48 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar49 + fVar49);
          DSP::Mix2Interp(pvVar62,local_198,*(undefined4 *)(param_1 + 0x1ac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                          in_stack_fffffffffffffe28,fVar48 + fVar48,uVar1);
          iVar43 = DAT_1467c60f8;
        }
LAB_1432281ea:
        uVar64 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
        pvVar62 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xf + uVar36) * 4);
        if (iVar43 == 0) {
          ::_guard_xfg_dispatch_icall_nop(pvVar62,0,(ulonglong)uVar1 << 2);
        }
        else {
          if (iVar43 != 1) {
            if (iVar43 != 2) goto LAB_143228285;
            DSP::AllpassFilter::ProcessBuffer(*(longlong *)(param_1 + 0x68) + 0xd8,local_190,uVar1);
          }
          fVar59 = fVar59 * *(float *)(param_1 + 0x1b4);
          fVar49 = fVar58 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe28 = CONCAT44(uVar64,fVar59 + fVar59);
          DSP::Mix2Interp(pvVar62,local_190,*(undefined4 *)(param_1 + 0x1ac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                          in_stack_fffffffffffffe28,fVar49 + fVar49,uVar1);
        }
      }
LAB_143228285:
      lVar41 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar41 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar41 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar41 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar41 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar41 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar41 + 0x40);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar41 + 0x48);
      local_res8 = local_res8 + uVar1;
      local_168 = local_168 - uVar1;
      fVar59 = fVar58;
      fVar49 = fVar60;
    } while (local_168 != 0);
    local_168 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),local_140);
  return 1;
}



// FUNCTION 1432283b0 ProcessSpread1Out body=2979 status=ok
// SIG undefined ProcessSpread1Out(void)

undefined4 CAkRoomVerbFX::ProcessSpread1Out(longlong param_1,longlong *param_2)

{
  void *_Dst;
  uint uVar1;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float *pfVar36;
  uint uVar37;
  uint uVar38;
  void *_Src;
  ulonglong uVar39;
  longlong lVar40;
  float *pfVar41;
  float *pfVar42;
  byte bVar43;
  longlong lVar44;
  longlong *plVar45;
  ulonglong uVar46;
  float *pfVar47;
  int iVar48;
  uint uVar49;
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
  float local_res18;
  uint local_res20;
  longlong local_160 [2];
  float *local_150;
  float local_148;
  float *local_140;
  void *local_138;
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
  
  _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                           (*(longlong **)(param_1 + 0x160),
                            ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x400);
  if (_Src != (void *)0x0) {
    pfVar41 = (float *)0x0;
    _Dst = (void *)((longlong)_Src + 0x400);
    local_160[0] = (longlong)_Src + 0x800;
    local_160[1] = (longlong)_Src + 0xc00;
    fVar62 = *(float *)(param_1 + 0x174) * 0.0016271889 + 0.707106;
    local_res18 = 0.0;
    pfVar47 = (float *)((longlong)_Src + 0x1000);
    pfVar36 = (float *)((longlong)_Src + 0x1400);
    if (*(char *)(param_1 + 0x138) == '\0') {
      pfVar47 = pfVar41;
      pfVar36 = pfVar41;
    }
    fVar55 = 1.0 - fVar62 * fVar62;
    fVar50 = 0.0;
    if (0.0 < fVar55) {
      fVar50 = SQRT(fVar55);
    }
    fVar55 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.0016271889 + 0.707106;
    fVar56 = 1.0 - fVar55 * fVar55;
    if (0.0 < fVar56) {
      local_res18 = SQRT(fVar56);
    }
    local_res20 = 0;
    local_148 = fVar55;
    for (uVar38 = (uint)*(ushort *)((longlong)param_2 + 0x12); local_150 = pfVar47,
        local_140 = pfVar36, local_138 = _Src, uVar38 != 0; uVar38 = uVar38 - uVar1) {
      uVar1 = 0x100;
      if (uVar38 < 0x100) {
        uVar1 = uVar38;
      }
      uVar46 = (ulonglong)uVar1;
      WetPreProcess(param_1,param_2,_Src,uVar46,(int)pfVar41);
      if (*(int *)(param_1 + 0xd0) == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uVar1 * 4));
      }
      else {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xd0,_Src,_Dst,uVar46);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xb8,_Src,uVar1);
      }
      if (((*(char *)(param_1 + 0x138) != '\0') &&
          (DSP::ERUnitDual::ProcessBuffer
                     (*(undefined8 *)(param_1 + 0x150),_Src,pfVar47,pfVar36,uVar1),
          *(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0')) &&
         (bVar43 = 0, *(char *)(param_1 + 0x134) != '\0')) {
        do {
          lVar44 = *(longlong *)(param_1 + 0x148);
          lVar40 = (ulonglong)bVar43 * 0xa0;
          if (*(int *)(lVar40 + 0x90 + lVar44) == 1) {
            uVar49 = uVar1 & 3;
            uVar39 = uVar46;
            if (uVar49 != 0) {
              pfVar41 = pfVar47 + uVar46;
              iVar48 = 4 - uVar49;
              uVar39 = (ulonglong)(iVar48 + uVar1);
              do {
                *pfVar41 = 0.0;
                pfVar41 = pfVar41 + 1;
                iVar48 = iVar48 + -1;
              } while (iVar48 != 0);
            }
            fVar55 = *(float *)(lVar40 + 0x88 + lVar44);
            fVar56 = *(float *)(lVar40 + 0x8c + lVar44);
            pfVar41 = (float *)(lVar40 + lVar44);
            fVar2 = *pfVar41;
            fVar3 = pfVar41[1];
            fVar4 = pfVar41[2];
            fVar5 = pfVar41[3];
            pfVar41 = (float *)(lVar40 + 0x10 + lVar44);
            fVar6 = *pfVar41;
            fVar7 = pfVar41[1];
            fVar8 = pfVar41[2];
            fVar9 = pfVar41[3];
            pfVar41 = (float *)(lVar40 + 0x20 + lVar44);
            fVar10 = *pfVar41;
            fVar11 = pfVar41[1];
            fVar12 = pfVar41[2];
            fVar13 = pfVar41[3];
            pfVar41 = (float *)(lVar40 + 0x30 + lVar44);
            fVar14 = *pfVar41;
            fVar15 = pfVar41[1];
            fVar16 = pfVar41[2];
            fVar17 = pfVar41[3];
            pfVar41 = (float *)(lVar40 + 0x40 + lVar44);
            fVar18 = *pfVar41;
            fVar19 = pfVar41[1];
            fVar20 = pfVar41[2];
            fVar21 = pfVar41[3];
            pfVar41 = (float *)(lVar40 + 0x50 + lVar44);
            fVar22 = *pfVar41;
            fVar23 = pfVar41[1];
            fVar24 = pfVar41[2];
            fVar25 = pfVar41[3];
            pfVar41 = (float *)(lVar40 + 0x60 + lVar44);
            fVar26 = *pfVar41;
            fVar27 = pfVar41[1];
            fVar28 = pfVar41[2];
            fVar29 = pfVar41[3];
            pfVar41 = (float *)(lVar40 + 0x70 + lVar44);
            fVar30 = *pfVar41;
            fVar31 = pfVar41[1];
            fVar32 = pfVar41[2];
            fVar33 = pfVar41[3];
            fVar34 = *(float *)(lVar40 + 0x80 + lVar44);
            fVar35 = *(float *)(lVar40 + 0x84 + lVar44);
            for (pfVar41 = pfVar47; pfVar41 < pfVar47 + uVar39; pfVar41 = pfVar41 + 4) {
              fVar52 = *pfVar41;
              fVar54 = pfVar41[1];
              fVar58 = pfVar41[2];
              fVar60 = pfVar41[3];
              fVar51 = fVar26 * fVar55;
              fVar53 = fVar27 * fVar55;
              fVar57 = fVar30 * fVar56;
              fVar59 = fVar31 * fVar56;
              fVar61 = fVar33 * fVar56;
              fVar56 = fVar54 * fVar12 +
                       fVar8 * fVar58 +
                       fVar58 * fVar4 + fVar20 * fVar34 + fVar24 * fVar35 + fVar28 * fVar55 +
                       fVar32 * fVar56 + fVar52 * fVar16;
              fVar55 = fVar54 * fVar13 +
                       fVar9 * fVar58 +
                       fVar60 * fVar5 + fVar21 * fVar34 + fVar25 * fVar35 + fVar29 * fVar55 + fVar61
                       + fVar52 * fVar17;
              *pfVar41 = fVar54 * fVar10 +
                         fVar6 * fVar58 +
                         fVar52 * fVar2 + fVar18 * fVar34 + fVar22 * fVar35 + fVar51 + fVar57 +
                         fVar52 * fVar14;
              pfVar41[1] = fVar54 * fVar11 +
                           fVar7 * fVar58 +
                           fVar54 * fVar3 + fVar19 * fVar34 + fVar23 * fVar35 + fVar53 + fVar59 +
                           fVar52 * fVar15;
              pfVar41[2] = fVar56;
              pfVar41[3] = fVar55;
              fVar34 = fVar60;
              fVar35 = fVar58;
            }
            *(float *)(lVar40 + 0x80 + lVar44) = fVar34;
            *(float *)(lVar40 + 0x84 + lVar44) = fVar35;
            *(float *)(lVar40 + 0x88 + lVar44) = fVar55;
            *(float *)(lVar40 + 0x8c + lVar44) = fVar56;
            pfVar41 = (float *)(((ulonglong)bVar43 + 1) * 0xa0 + *(longlong *)(param_1 + 0x148));
            uVar37 = uVar1;
            if (uVar49 != 0) {
              pfVar42 = pfVar36 + uVar46;
              iVar48 = 4 - uVar49;
              uVar37 = iVar48 + uVar1;
              do {
                *pfVar42 = 0.0;
                pfVar42 = pfVar42 + 1;
                iVar48 = iVar48 + -1;
              } while (iVar48 != 0);
            }
            local_118 = pfVar41[0x22];
            local_128 = pfVar41[0x23];
            fVar55 = *pfVar41;
            fVar56 = pfVar41[1];
            fVar2 = pfVar41[2];
            fVar3 = pfVar41[3];
            fVar4 = pfVar41[4];
            fVar5 = pfVar41[5];
            fVar6 = pfVar41[6];
            fVar7 = pfVar41[7];
            fVar8 = pfVar41[8];
            fVar9 = pfVar41[9];
            fVar10 = pfVar41[10];
            fVar11 = pfVar41[0xb];
            fVar12 = pfVar41[0xc];
            fVar13 = pfVar41[0xd];
            fVar14 = pfVar41[0xe];
            fVar15 = pfVar41[0xf];
            fVar16 = pfVar41[0x10];
            fVar17 = pfVar41[0x11];
            fVar18 = pfVar41[0x12];
            fVar19 = pfVar41[0x13];
            fVar20 = pfVar41[0x14];
            fVar21 = pfVar41[0x15];
            fVar22 = pfVar41[0x16];
            fVar23 = pfVar41[0x17];
            fVar24 = pfVar41[0x18];
            fVar25 = pfVar41[0x19];
            fVar26 = pfVar41[0x1a];
            fVar27 = pfVar41[0x1b];
            fVar28 = pfVar41[0x1c];
            fVar29 = pfVar41[0x1d];
            fVar30 = pfVar41[0x1e];
            fVar31 = pfVar41[0x1f];
            local_f8 = pfVar41[0x20];
            local_108 = pfVar41[0x21];
            for (pfVar42 = pfVar36; pfVar42 < pfVar36 + uVar37; pfVar42 = pfVar42 + 4) {
              fVar32 = *pfVar42;
              fVar33 = pfVar42[1];
              fVar34 = pfVar42[2];
              fVar35 = pfVar42[3];
              fVar52 = fVar24 * local_118;
              fVar54 = fVar25 * local_118;
              fVar58 = fVar28 * local_128;
              fVar60 = fVar29 * local_128;
              fVar51 = fVar31 * local_128;
              local_128 = fVar33 * fVar10 +
                          fVar6 * fVar34 +
                          fVar34 * fVar2 + fVar18 * local_f8 + fVar22 * local_108 +
                          fVar26 * local_118 + fVar30 * local_128 + fVar32 * fVar14;
              local_118 = fVar33 * fVar11 +
                          fVar7 * fVar34 +
                          fVar35 * fVar3 + fVar19 * local_f8 + fVar23 * local_108 +
                          fVar27 * local_118 + fVar51 + fVar32 * fVar15;
              *pfVar42 = fVar33 * fVar8 +
                         fVar4 * fVar34 +
                         fVar32 * fVar55 + fVar16 * local_f8 + fVar20 * local_108 + fVar52 + fVar58
                         + fVar32 * fVar12;
              pfVar42[1] = fVar33 * fVar9 +
                           fVar5 * fVar34 +
                           fVar33 * fVar56 + fVar17 * local_f8 + fVar21 * local_108 + fVar54 +
                           fVar60 + fVar32 * fVar13;
              pfVar42[2] = local_128;
              pfVar42[3] = local_118;
              local_f8 = fVar35;
              local_108 = fVar34;
            }
            bVar43 = bVar43 + 1;
            pfVar41[0x20] = local_f8;
            pfVar41[0x21] = local_108;
            pfVar41[0x22] = local_118;
            pfVar41[0x23] = local_128;
            fStack_124 = local_128;
            fStack_120 = local_128;
            fStack_11c = local_128;
            fStack_114 = local_118;
            fStack_110 = local_118;
            fStack_10c = local_118;
            fStack_104 = local_108;
            fStack_100 = local_108;
            fStack_fc = local_108;
            fStack_f4 = local_f8;
            fStack_f0 = local_f8;
            fStack_ec = local_f8;
          }
          bVar43 = bVar43 + 1;
          fVar55 = local_148;
        } while (bVar43 < *(byte *)(param_1 + 0x134));
      }
      lVar44 = param_1 + 8;
      lVar40 = 4;
      do {
        DSP::AllpassFilter::ProcessBuffer(lVar44,_Dst,uVar1);
        lVar44 = lVar44 + 0x18;
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
      ReverbPreProcess(param_1,_Dst,uVar46);
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 0x800),0,0x800);
      uVar49 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          DSP::DelayLine::ProcessBuffer
                    (*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar49 * 0xa8,_Dst,uVar46);
          DSP::FDN4::ProcessBufferAccum
                    (*(longlong *)(param_1 + 0x140) + (ulonglong)uVar49 * 0xa8,_Dst,
                     local_160[uVar49 & 1],uVar1);
          uVar49 = uVar49 + 1;
        } while (uVar49 < *(uint *)(param_1 + 0x128));
      }
      fVar56 = *(float *)(param_1 + 0x124);
      plVar45 = local_160;
      lVar44 = param_1 + 0x70;
      lVar40 = 2;
      do {
        DSP::OnePoleZeroHPFilter::ProcessBufferWithGain(lVar44,*plVar45,uVar1,fVar56 * 1.4142135);
        lVar44 = lVar44 + 0xc;
        plVar45 = plVar45 + 1;
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
      uVar46 = 0;
      uVar39 = (ulonglong)local_res20;
      uVar49 = *(uint *)(param_2 + 1) >> 0xc;
      if ((uVar49 & 1) != 0) {
        lVar44 = *param_2 + uVar39 * 4;
        fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        DSP::Mix3Interp(lVar44,local_160[0],local_160[1],*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        *(float *)(param_1 + 0x1b4) * fVar62,fVar56 * fVar55,
                        *(float *)(param_1 + 0x1b4) * fVar50,fVar56 * local_res18,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50);
          DSP::Mix3Interp(lVar44,local_150,pfVar36,0x3f800000,0x3f800000,
                          *(float *)(param_1 + 0x1b0) * fVar62,fVar56 * fVar55,
                          *(float *)(param_1 + 0x1b0) * fVar50,fVar56 * local_res18,uVar1);
        }
        uVar46 = 1;
      }
      if ((uVar49 & 2) != 0) {
        lVar44 = *param_2 + (*(ushort *)(param_2 + 2) * uVar46 + uVar39) * 4;
        fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        DSP::Mix3Interp(lVar44,local_160[0],local_160[1],*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        *(float *)(param_1 + 0x1b4) * fVar50,fVar56 * local_res18,
                        *(float *)(param_1 + 0x1b4) * fVar62,fVar56 * fVar55,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50);
          DSP::Mix3Interp(lVar44,local_150,local_140,0x3f800000,0x3f800000,
                          *(float *)(param_1 + 0x1b0) * fVar50,fVar56 * local_res18,
                          *(float *)(param_1 + 0x1b0) * fVar62,fVar56 * fVar55,uVar1);
        }
        uVar46 = (ulonglong)((int)uVar46 + 1);
      }
      if ((uVar49 & 4) != 0) {
        fVar62 = *(float *)(param_1 + 0x1b4) * 0.707106;
        lVar44 = *param_2 + (*(ushort *)(param_2 + 2) * uVar46 + uVar39) * 4;
        fVar50 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x54) * 0.707106;
        DSP::Mix3Interp(lVar44,local_160[0],local_160[1],*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),fVar62,fVar50,fVar62,
                        fVar50,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar50 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) * 0.707106;
          fVar62 = *(float *)(param_1 + 0x1b0) * 0.707106;
          DSP::Mix3Interp(lVar44,local_150,local_140,0x3f800000,0x3f800000,fVar62,fVar50,fVar62,
                          fVar50,uVar1);
        }
        uVar46 = (ulonglong)((int)uVar46 + 1);
      }
      if ((uVar49 & 8) != 0) {
        lVar44 = *(longlong *)(param_1 + 0x158);
        fVar62 = *(float *)(param_1 + 0x1a8) * *(float *)(param_1 + 0x1b4) * 0.707106;
        fVar50 = *(float *)(lVar44 + 0x54) * *(float *)(lVar44 + 0x48) * 0.707106;
        DSP::Mix3Interp(*param_2 + (*(ushort *)(param_2 + 2) * uVar46 + uVar39) * 4,local_160[0],
                        local_160[1],*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(lVar44 + 0x4c)
                        ,fVar62,fVar50,fVar62,fVar50,uVar1);
      }
      lVar44 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar44 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar44 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar44 + 0x54);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar44 + 0x48);
      local_res20 = local_res20 + uVar1;
      pfVar41 = (float *)(ulonglong)local_res20;
      fVar62 = fVar55;
      _Src = local_138;
      pfVar47 = local_150;
      fVar50 = local_res18;
      pfVar36 = local_140;
    }
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),_Src);
    return 1;
  }
  return 0x34;
}



// FUNCTION 143228f60 ProcessSpread2Out body=3717 status=ok
// SIG undefined ProcessSpread2Out(void)

undefined4 CAkRoomVerbFX::ProcessSpread2Out(longlong param_1,longlong *param_2)

{
  void *_Dst;
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
  float fVar33;
  float fVar34;
  void *_Src;
  float *pfVar35;
  float *pfVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  uint uVar40;
  longlong lVar41;
  float *pfVar42;
  float *pfVar43;
  byte bVar44;
  longlong lVar45;
  void **ppvVar46;
  int iVar47;
  uint uVar48;
  float *pfVar49;
  uint uVar50;
  ulonglong uVar51;
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
  float local_res8;
  float local_res18;
  uint local_res20;
  float *local_1a8;
  float *local_1a0;
  uint local_18c;
  float *local_188;
  void *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  float local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  void *local_128;
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
  
  uVar50 = *(uint *)(param_2 + 1) >> 0xc;
  uVar37 = uVar50 & 0x210;
  uVar40 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x158) + 0x99) != '\0') {
    uVar40 = -(uint)(uVar37 != 0) & 2;
  }
  local_128 = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                                (*(longlong **)(param_1 + 0x160),
                                 (ulonglong)(*(byte *)(param_1 + 0x138) + 6 + uVar40) << 10);
  if (local_128 == (void *)0x0) {
    return 0x34;
  }
  _Dst = (void *)((longlong)local_128 + 0x400);
  local_180 = (void *)((longlong)local_128 + 0x800);
  local_178 = (longlong)local_128 + 0xc00;
  local_170 = (longlong)local_128 + 0x1000;
  local_168 = (longlong)local_128 + 0x1400;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    pfVar49 = (float *)0x0;
    local_188 = (float *)0x0;
  }
  else {
    local_188 = (float *)((longlong)local_128 + 0x1800);
    pfVar49 = (float *)((longlong)local_128 + 0x1c00);
    if (uVar40 == 2) {
      local_1a8 = (float *)((longlong)local_128 + 0x2400);
      local_1a0 = (float *)((longlong)local_128 + 0x2000);
      goto LAB_1432290d3;
    }
  }
  local_1a8 = (float *)0x0;
  local_1a0 = (float *)0x0;
LAB_1432290d3:
  local_res18 = 0.0;
  fVar63 = *(float *)(param_1 + 0x174) * 0.0016271889 + 0.707106;
  fVar56 = 1.0 - fVar63 * fVar63;
  local_res8 = 0.0;
  if (0.0 < fVar56) {
    local_res8 = SQRT(fVar56);
  }
  fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.0016271889 + 0.707106;
  fVar57 = 1.0 - fVar56 * fVar56;
  if (0.0 < fVar57) {
    local_res18 = SQRT(fVar57);
  }
  if (uVar37 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x3c) = 0x3f800000;
    *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x40) = 0x3f800000;
  }
  local_res20 = 0;
  local_18c = (uint)*(ushort *)((longlong)param_2 + 0x12);
  local_160 = fVar56;
  if (local_18c != 0) {
    local_15c = uVar50 & 1;
    local_158 = uVar50 & 2;
    local_154 = uVar50 & 4;
    local_150 = uVar50 & 8;
    do {
      _Src = local_128;
      uVar50 = 0x100;
      if (local_18c < 0x100) {
        uVar50 = local_18c;
      }
      uVar51 = (ulonglong)uVar50;
      WetPreProcess(param_1,param_2,local_128,uVar51,local_res20);
      if (*(int *)(param_1 + 0xd0) == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uVar50 * 4));
      }
      else {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xd0,_Src,_Dst,uVar51);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xb8,_Src,uVar50);
      }
      pfVar35 = local_1a8;
      pfVar36 = local_1a0;
      if (*(char *)(param_1 + 0x138) != '\0') {
        DSP::ERUnitDual::ProcessBuffer
                  (*(undefined8 *)(param_1 + 0x150),_Src,local_188,pfVar49,uVar50);
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar44 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar45 = *(longlong *)(param_1 + 0x148);
            lVar41 = (ulonglong)bVar44 * 0xa0;
            if (*(int *)(lVar41 + 0x90 + lVar45) == 1) {
              uVar48 = uVar50 & 3;
              uVar39 = uVar51;
              if (uVar48 != 0) {
                pfVar42 = local_188 + uVar51;
                iVar47 = 4 - uVar48;
                uVar39 = (ulonglong)(iVar47 + uVar50);
                do {
                  *pfVar42 = 0.0;
                  pfVar42 = pfVar42 + 1;
                  iVar47 = iVar47 + -1;
                } while (iVar47 != 0);
              }
              fVar56 = *(float *)(lVar41 + 0x88 + lVar45);
              fVar57 = *(float *)(lVar41 + 0x8c + lVar45);
              pfVar42 = (float *)(lVar41 + lVar45);
              fVar62 = *pfVar42;
              fVar1 = pfVar42[1];
              fVar2 = pfVar42[2];
              fVar3 = pfVar42[3];
              pfVar42 = (float *)(lVar41 + 0x10 + lVar45);
              fVar4 = *pfVar42;
              fVar5 = pfVar42[1];
              fVar6 = pfVar42[2];
              fVar7 = pfVar42[3];
              pfVar42 = (float *)(lVar41 + 0x20 + lVar45);
              fVar8 = *pfVar42;
              fVar9 = pfVar42[1];
              fVar10 = pfVar42[2];
              fVar11 = pfVar42[3];
              pfVar42 = (float *)(lVar41 + 0x30 + lVar45);
              fVar12 = *pfVar42;
              fVar13 = pfVar42[1];
              fVar14 = pfVar42[2];
              fVar15 = pfVar42[3];
              pfVar42 = (float *)(lVar41 + 0x40 + lVar45);
              fVar16 = *pfVar42;
              fVar17 = pfVar42[1];
              fVar18 = pfVar42[2];
              fVar19 = pfVar42[3];
              pfVar42 = (float *)(lVar41 + 0x50 + lVar45);
              fVar20 = *pfVar42;
              fVar21 = pfVar42[1];
              fVar22 = pfVar42[2];
              fVar23 = pfVar42[3];
              pfVar42 = (float *)(lVar41 + 0x60 + lVar45);
              fVar24 = *pfVar42;
              fVar25 = pfVar42[1];
              fVar26 = pfVar42[2];
              fVar27 = pfVar42[3];
              pfVar42 = (float *)(lVar41 + 0x70 + lVar45);
              fVar28 = *pfVar42;
              fVar29 = pfVar42[1];
              fVar30 = pfVar42[2];
              fVar31 = pfVar42[3];
              fVar33 = *(float *)(lVar41 + 0x80 + lVar45);
              fVar34 = *(float *)(lVar41 + 0x84 + lVar45);
              for (pfVar42 = local_188; pfVar42 < local_188 + uVar39; pfVar42 = pfVar42 + 4) {
                fVar32 = *pfVar42;
                fVar53 = pfVar42[1];
                fVar55 = pfVar42[2];
                fVar59 = pfVar42[3];
                fVar52 = fVar24 * fVar56;
                fVar54 = fVar25 * fVar56;
                fVar58 = fVar28 * fVar57;
                fVar60 = fVar29 * fVar57;
                fVar61 = fVar31 * fVar57;
                fVar57 = fVar53 * fVar10 +
                         fVar6 * fVar55 +
                         fVar55 * fVar2 + fVar18 * fVar33 + fVar22 * fVar34 + fVar26 * fVar56 +
                         fVar30 * fVar57 + fVar32 * fVar14;
                fVar56 = fVar53 * fVar11 +
                         fVar7 * fVar55 +
                         fVar59 * fVar3 + fVar19 * fVar33 + fVar23 * fVar34 + fVar27 * fVar56 +
                         fVar61 + fVar32 * fVar15;
                *pfVar42 = fVar53 * fVar8 +
                           fVar4 * fVar55 +
                           fVar32 * fVar62 + fVar16 * fVar33 + fVar20 * fVar34 + fVar52 + fVar58 +
                           fVar32 * fVar12;
                pfVar42[1] = fVar53 * fVar9 +
                             fVar5 * fVar55 +
                             fVar53 * fVar1 + fVar17 * fVar33 + fVar21 * fVar34 + fVar54 + fVar60 +
                             fVar32 * fVar13;
                pfVar42[2] = fVar57;
                pfVar42[3] = fVar56;
                fVar33 = fVar59;
                fVar34 = fVar55;
              }
              *(float *)(lVar41 + 0x80 + lVar45) = fVar33;
              *(float *)(lVar41 + 0x84 + lVar45) = fVar34;
              *(float *)(lVar41 + 0x88 + lVar45) = fVar56;
              *(float *)(lVar41 + 0x8c + lVar45) = fVar57;
              pfVar42 = (float *)(((ulonglong)bVar44 + 1) * 0xa0 + *(longlong *)(param_1 + 0x148));
              uVar38 = uVar50;
              if (uVar48 != 0) {
                iVar47 = 4 - uVar48;
                pfVar43 = pfVar49 + uVar51;
                uVar38 = iVar47 + uVar50;
                do {
                  *pfVar43 = 0.0;
                  pfVar43 = pfVar43 + 1;
                  iVar47 = iVar47 + -1;
                } while (iVar47 != 0);
              }
              fVar56 = pfVar42[0x20];
              fVar57 = pfVar42[0x21];
              fStack_fc = pfVar42[0x22];
              fStack_10c = pfVar42[0x23];
              fVar62 = *pfVar42;
              fVar1 = pfVar42[1];
              fVar2 = pfVar42[2];
              fVar3 = pfVar42[3];
              fVar4 = pfVar42[4];
              fVar5 = pfVar42[5];
              fVar6 = pfVar42[6];
              fVar7 = pfVar42[7];
              fVar8 = pfVar42[8];
              fVar9 = pfVar42[9];
              fVar10 = pfVar42[10];
              fVar11 = pfVar42[0xb];
              fVar12 = pfVar42[0xc];
              fVar13 = pfVar42[0xd];
              fVar14 = pfVar42[0xe];
              fVar15 = pfVar42[0xf];
              fVar16 = pfVar42[0x10];
              fVar17 = pfVar42[0x11];
              fVar18 = pfVar42[0x12];
              fVar19 = pfVar42[0x13];
              fVar20 = pfVar42[0x14];
              fVar21 = pfVar42[0x15];
              fVar22 = pfVar42[0x16];
              fVar23 = pfVar42[0x17];
              fVar24 = pfVar42[0x18];
              fVar25 = pfVar42[0x19];
              fVar26 = pfVar42[0x1a];
              fVar27 = pfVar42[0x1b];
              fVar28 = pfVar42[0x1c];
              fVar29 = pfVar42[0x1d];
              fVar30 = pfVar42[0x1e];
              fVar31 = pfVar42[0x1f];
              local_148 = CONCAT44(fVar56,fVar56);
              uStack_140 = CONCAT44(fVar56,fVar56);
              pfVar43 = pfVar49;
              fStack_ec = fVar57;
              if (pfVar49 < pfVar49 + uVar38) {
                do {
                  fVar33 = *pfVar43;
                  fVar34 = pfVar43[1];
                  fStack_ec = pfVar43[2];
                  fVar32 = pfVar43[3];
                  fVar53 = fVar24 * fStack_fc;
                  fVar55 = fVar25 * fStack_fc;
                  fVar59 = fVar28 * fStack_10c;
                  fVar52 = fVar29 * fStack_10c;
                  fVar54 = fVar31 * fStack_10c;
                  fStack_10c = fVar34 * fVar10 +
                               fVar6 * fStack_ec +
                               fStack_ec * fVar2 + fVar18 * fVar56 + fVar22 * fVar57 +
                               fVar26 * fStack_fc + fVar30 * fStack_10c + fVar33 * fVar14;
                  fStack_fc = fVar34 * fVar11 +
                              fVar7 * fStack_ec +
                              fVar32 * fVar3 + fVar19 * fVar56 + fVar23 * fVar57 +
                              fVar27 * fStack_fc + fVar54 + fVar33 * fVar15;
                  *pfVar43 = fVar34 * fVar8 +
                             fVar4 * fStack_ec +
                             fVar33 * fVar62 + fVar16 * fVar56 + fVar20 * fVar57 + fVar53 + fVar59 +
                             fVar33 * fVar12;
                  pfVar43[1] = fVar34 * fVar9 +
                               fVar5 * fStack_ec +
                               fVar34 * fVar1 + fVar17 * fVar56 + fVar21 * fVar57 + fVar55 + fVar52
                               + fVar33 * fVar13;
                  pfVar43[2] = fStack_10c;
                  pfVar43[3] = fStack_fc;
                  pfVar43 = pfVar43 + 4;
                  fVar57 = fStack_ec;
                  fVar56 = fVar32;
                } while (pfVar43 < pfVar49 + uVar38);
                local_148 = CONCAT44(fVar32,fVar32);
                uStack_140 = CONCAT44(fVar32,fVar32);
              }
              bVar44 = bVar44 + 1;
              pfVar42[0x20] = (float)local_148;
              pfVar42[0x21] = fStack_ec;
              pfVar42[0x22] = fStack_fc;
              pfVar42[0x23] = fStack_10c;
              local_118 = fStack_10c;
              fStack_114 = fStack_10c;
              fStack_110 = fStack_10c;
              local_108 = fStack_fc;
              fStack_104 = fStack_fc;
              fStack_100 = fStack_fc;
              local_f8 = fStack_ec;
              fStack_f4 = fStack_ec;
              fStack_f0 = fStack_ec;
            }
            bVar44 = bVar44 + 1;
            fVar56 = local_160;
          } while (bVar44 < *(byte *)(param_1 + 0x134));
        }
        if ((uVar40 == 2) && (pfVar35 = pfVar49, pfVar36 = local_188, *(int *)(param_1 + 0xe8) != 0)
           ) {
          DSP::DelayLine::ProcessBuffer((int *)(param_1 + 0xe8),local_188,local_1a0,uVar50);
          DSP::DelayLine::ProcessBuffer(param_1 + 0x100,pfVar49,local_1a8,uVar50);
          pfVar35 = local_1a8;
          pfVar36 = local_1a0;
        }
      }
      local_1a0 = pfVar36;
      local_1a8 = pfVar35;
      lVar45 = param_1 + 8;
      lVar41 = 4;
      do {
        DSP::AllpassFilter::ProcessBuffer(lVar45,_Dst,uVar50);
        lVar45 = lVar45 + 0x18;
        lVar41 = lVar41 + -1;
      } while (lVar41 != 0);
      ReverbPreProcess(param_1,_Dst,uVar51);
      ::_guard_xfg_dispatch_icall_nop(local_180,0,0x1000);
      uVar48 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          DSP::DelayLine::ProcessBuffer
                    (*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar48 * 0xa8,_Dst,uVar51);
          DSP::FDN4::ProcessBufferAccum
                    (*(longlong *)(param_1 + 0x140) + (ulonglong)uVar48 * 0xa8,_Dst,
                     (&local_180)[uVar48 & 1],(&local_180)[(uVar48 & 1) + 2],uVar50);
          uVar48 = uVar48 + 1;
        } while (uVar48 < *(uint *)(param_1 + 0x128));
      }
      fVar57 = *(float *)(param_1 + 0x124);
      ppvVar46 = &local_180;
      lVar45 = param_1 + 0x70;
      lVar41 = 4;
      do {
        DSP::OnePoleZeroHPFilter::ProcessBufferWithGain(lVar45,*ppvVar46,uVar50,fVar57 * 1.4142135);
        lVar45 = lVar45 + 0xc;
        ppvVar46 = ppvVar46 + 1;
        lVar41 = lVar41 + -1;
      } while (lVar41 != 0);
      uVar51 = (ulonglong)local_res20;
      uVar48 = 0;
      if (local_15c != 0) {
        fVar57 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b4);
        lVar45 = *param_2 + uVar51 * 4;
        lVar41 = *(longlong *)(param_1 + 0x158);
        fVar62 = *(float *)(lVar41 + 0x54) * *(float *)(lVar41 + 0x3c);
        DSP::Mix3Interp(lVar45,local_180,local_178,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(lVar41 + 0x4c),fVar57 * fVar63,fVar62 * fVar56,
                        fVar57 * local_res8,fVar62 * local_res18,uVar50);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar57 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar62 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
          DSP::Mix3Interp(lVar45,local_188,pfVar49,0x3f800000,0x3f800000,fVar57 * fVar63,
                          fVar62 * fVar56,fVar57 * local_res8,fVar62 * local_res18,uVar50);
        }
        uVar48 = 1;
      }
      if (local_158 != 0) {
        fVar57 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b4);
        lVar45 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar48 + uVar51) * 4;
        lVar41 = *(longlong *)(param_1 + 0x158);
        fVar62 = *(float *)(lVar41 + 0x54) * *(float *)(lVar41 + 0x3c);
        DSP::Mix3Interp(lVar45,local_180,local_178,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(lVar41 + 0x4c),fVar57 * local_res8,fVar62 * local_res18,
                        fVar57 * fVar63,fVar62 * fVar56,uVar50);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar57 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar62 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
          DSP::Mix3Interp(lVar45,local_188,pfVar49,0x3f800000,0x3f800000,fVar57 * local_res8,
                          fVar62 * local_res18,fVar57 * fVar63,fVar62 * fVar56,uVar50);
        }
        uVar48 = uVar48 + 1;
      }
      if (local_154 != 0) {
        lVar45 = *(longlong *)(param_1 + 0x158);
        fVar57 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a4) * 0.707106;
        fVar62 = *(float *)(lVar45 + 0x54) * *(float *)(lVar45 + 0x44) * 0.707106;
        DSP::Mix3Interp(*param_2 +
                        ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar48 + uVar51) * 4,
                        local_170,local_168,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(lVar45 + 0x4c),fVar57,fVar62,fVar57,fVar62,uVar50);
        uVar48 = uVar48 + 1;
      }
      if (uVar37 != 0) {
        fVar57 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        lVar45 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar48 + uVar51) * 4;
        lVar41 = *(longlong *)(param_1 + 0x158);
        fVar62 = *(float *)(lVar41 + 0x54) * *(float *)(lVar41 + 0x40);
        DSP::Mix3Interp(lVar45,local_170,local_168,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(lVar41 + 0x4c),fVar57 * fVar63,fVar62 * fVar56,
                        fVar57 * local_res8,fVar62 * local_res18,uVar50);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar57 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar62 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
          DSP::Mix3Interp(lVar45,local_1a0,local_1a8,0x3f800000,0x3f800000,fVar57 * fVar63,
                          fVar62 * fVar56,fVar57 * local_res8,fVar62 * local_res18,uVar50);
        }
        fVar57 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        lVar45 = *param_2 +
                 ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)(uVar48 + 1) + uVar51) * 4;
        lVar41 = *(longlong *)(param_1 + 0x158);
        fVar62 = *(float *)(lVar41 + 0x54) * *(float *)(lVar41 + 0x40);
        DSP::Mix3Interp(lVar45,local_170,local_168,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(lVar41 + 0x4c),fVar57 * local_res8,fVar62 * local_res18,
                        fVar57 * fVar63,fVar62 * fVar56,uVar50);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar57 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar62 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
          DSP::Mix3Interp(lVar45,local_1a0,local_1a8,0x3f800000,0x3f800000,fVar57 * local_res8,
                          fVar62 * local_res18,fVar57 * fVar63,fVar62 * fVar56,uVar50);
        }
        uVar48 = uVar48 + 2;
      }
      if (local_150 != 0) {
        lVar45 = *(longlong *)(param_1 + 0x158);
        fVar63 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a8) * 0.707106;
        fVar57 = *(float *)(lVar45 + 0x54) * *(float *)(lVar45 + 0x48) * 0.707106;
        DSP::Mix3Interp(*param_2 +
                        ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar48 + uVar51) * 4,
                        local_170,local_168,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(lVar45 + 0x4c),fVar63,fVar57,fVar63,fVar57,uVar50);
      }
      lVar45 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar45 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar45 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar45 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar45 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar45 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar45 + 0x40);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar45 + 0x48);
      local_res20 = local_res20 + uVar50;
      local_res8 = local_res18;
      local_18c = local_18c - uVar50;
      fVar63 = fVar56;
    } while (local_18c != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),local_128);
  return 1;
}



// FUNCTION 143229df0 ProcessSpread3Out body=3626 status=ok
// SIG undefined ProcessSpread3Out(void)

undefined4 CAkRoomVerbFX::ProcessSpread3Out(longlong param_1,longlong *param_2)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  void *_Src;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  float *pfVar41;
  float *pfVar42;
  byte bVar43;
  longlong lVar44;
  longlong *plVar45;
  longlong lVar46;
  float *pfVar47;
  int iVar48;
  uint uVar49;
  float *pfVar50;
  ulonglong uVar51;
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
  float local_res8;
  uint local_res18;
  float local_res20;
  undefined8 in_stack_fffffffffffffe28;
  undefined8 uVar64;
  undefined4 uVar65;
  uint local_1a4;
  float *local_1a0;
  float *local_198;
  longlong local_178 [4];
  longlong local_158;
  longlong local_150;
  void *local_148;
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
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  uVar1 = *(uint *)(param_2 + 1);
  local_148 = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                                (*(longlong **)(param_1 + 0x160),
                                 ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x800);
  if (local_148 == (void *)0x0) {
    return 0x34;
  }
  _Dst = (void *)((longlong)local_148 + 0x400);
  local_178[0] = (longlong)local_148 + 0x800;
  local_178[1] = (longlong)local_148 + 0xc00;
  local_178[2] = (longlong)local_148 + 0x1000;
  local_178[3] = (longlong)local_148 + 0x1400;
  local_158 = (longlong)local_148 + 0x1800;
  local_150 = (longlong)local_148 + 0x1c00;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    pfVar50 = (float *)0x0;
    pfVar47 = (float *)0x0;
    local_1a0 = (float *)0x0;
    local_198 = (float *)0x0;
  }
  else {
    local_1a0 = (float *)((longlong)local_148 + 0x2c00);
    pfVar47 = (float *)((longlong)local_148 + 0x2000);
    pfVar50 = (float *)((longlong)local_148 + 0x2400);
    local_198 = (float *)((longlong)local_148 + 0x2800);
  }
  local_res20 = 0.0;
  fVar62 = *(float *)(param_1 + 0x174) * 0.0016271889 + 0.707106;
  fVar56 = 1.0 - fVar62 * fVar62;
  local_res8 = 0.0;
  if (0.0 < fVar56) {
    local_res8 = SQRT(fVar56);
  }
  fVar63 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.0016271889 + 0.707106;
  fVar56 = 1.0 - fVar63 * fVar63;
  if (0.0 < fVar56) {
    local_res20 = SQRT(fVar56);
  }
  local_res18 = 0;
  local_1a4 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  if (local_1a4 != 0) {
    do {
      _Src = local_148;
      lVar46 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe28 >> 0x20),local_res18);
      uVar2 = 0x100;
      if (local_1a4 < 0x100) {
        uVar2 = local_1a4;
      }
      uVar51 = (ulonglong)uVar2;
      WetPreProcess(param_1,param_2,local_148,uVar51,lVar46);
      if (*(int *)(param_1 + 0xd0) == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uVar2 * 4));
      }
      else {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xd0,_Src,_Dst,uVar51);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xb8,_Src,uVar2);
      }
      pfVar41 = local_1a0;
      pfVar42 = local_198;
      if (*(char *)(param_1 + 0x138) != '\0') {
        lVar46 = CONCAT44((int)((ulonglong)lVar46 >> 0x20),uVar2);
        DSP::ERUnitDual::ProcessBuffer(*(undefined8 *)(param_1 + 0x150),_Src,pfVar47,pfVar50,lVar46)
        ;
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar43 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar44 = *(longlong *)(param_1 + 0x148);
            lVar40 = (ulonglong)bVar43 * 0xa0;
            if (*(int *)(lVar40 + 0x90 + lVar44) == 1) {
              uVar49 = uVar2 & 3;
              uVar39 = uVar51;
              if (uVar49 != 0) {
                pfVar41 = pfVar47 + uVar51;
                iVar48 = 4 - uVar49;
                uVar39 = (ulonglong)(iVar48 + uVar2);
                do {
                  *pfVar41 = 0.0;
                  pfVar41 = pfVar41 + 1;
                  iVar48 = iVar48 + -1;
                } while (iVar48 != 0);
              }
              fVar56 = *(float *)(lVar40 + 0x88 + lVar44);
              fVar60 = *(float *)(lVar40 + 0x8c + lVar44);
              pfVar41 = (float *)(lVar40 + lVar44);
              fVar3 = *pfVar41;
              fVar4 = pfVar41[1];
              fVar5 = pfVar41[2];
              fVar6 = pfVar41[3];
              pfVar41 = (float *)(lVar40 + 0x10 + lVar44);
              fVar7 = *pfVar41;
              fVar8 = pfVar41[1];
              fVar9 = pfVar41[2];
              fVar10 = pfVar41[3];
              pfVar41 = (float *)(lVar40 + 0x20 + lVar44);
              fVar11 = *pfVar41;
              fVar12 = pfVar41[1];
              fVar13 = pfVar41[2];
              fVar14 = pfVar41[3];
              pfVar41 = (float *)(lVar40 + 0x30 + lVar44);
              fVar15 = *pfVar41;
              fVar16 = pfVar41[1];
              fVar17 = pfVar41[2];
              fVar18 = pfVar41[3];
              pfVar41 = (float *)(lVar40 + 0x40 + lVar44);
              fVar19 = *pfVar41;
              fVar20 = pfVar41[1];
              fVar21 = pfVar41[2];
              fVar22 = pfVar41[3];
              pfVar41 = (float *)(lVar40 + 0x50 + lVar44);
              fVar23 = *pfVar41;
              fVar24 = pfVar41[1];
              fVar25 = pfVar41[2];
              fVar26 = pfVar41[3];
              pfVar41 = (float *)(lVar40 + 0x60 + lVar44);
              fVar27 = *pfVar41;
              fVar28 = pfVar41[1];
              fVar29 = pfVar41[2];
              fVar30 = pfVar41[3];
              pfVar41 = (float *)(lVar40 + 0x70 + lVar44);
              fVar31 = *pfVar41;
              fVar32 = pfVar41[1];
              fVar33 = pfVar41[2];
              fVar34 = pfVar41[3];
              fVar36 = *(float *)(lVar40 + 0x80 + lVar44);
              fVar37 = *(float *)(lVar40 + 0x84 + lVar44);
              for (pfVar41 = pfVar47; pfVar41 < pfVar47 + uVar39; pfVar41 = pfVar41 + 4) {
                fVar35 = *pfVar41;
                fVar53 = pfVar41[1];
                fVar55 = pfVar41[2];
                fVar58 = pfVar41[3];
                fVar52 = fVar27 * fVar56;
                fVar54 = fVar28 * fVar56;
                fVar57 = fVar31 * fVar60;
                fVar59 = fVar32 * fVar60;
                fVar61 = fVar34 * fVar60;
                fVar60 = fVar53 * fVar13 +
                         fVar9 * fVar55 +
                         fVar55 * fVar5 + fVar21 * fVar36 + fVar25 * fVar37 + fVar29 * fVar56 +
                         fVar33 * fVar60 + fVar35 * fVar17;
                fVar56 = fVar53 * fVar14 +
                         fVar10 * fVar55 +
                         fVar58 * fVar6 + fVar22 * fVar36 + fVar26 * fVar37 + fVar30 * fVar56 +
                         fVar61 + fVar35 * fVar18;
                *pfVar41 = fVar53 * fVar11 +
                           fVar7 * fVar55 +
                           fVar35 * fVar3 + fVar19 * fVar36 + fVar23 * fVar37 + fVar52 + fVar57 +
                           fVar35 * fVar15;
                pfVar41[1] = fVar53 * fVar12 +
                             fVar8 * fVar55 +
                             fVar53 * fVar4 + fVar20 * fVar36 + fVar24 * fVar37 + fVar54 + fVar59 +
                             fVar35 * fVar16;
                pfVar41[2] = fVar60;
                pfVar41[3] = fVar56;
                fVar36 = fVar58;
                fVar37 = fVar55;
              }
              *(float *)(lVar40 + 0x80 + lVar44) = fVar36;
              *(float *)(lVar40 + 0x84 + lVar44) = fVar37;
              *(float *)(lVar40 + 0x88 + lVar44) = fVar56;
              *(float *)(lVar40 + 0x8c + lVar44) = fVar60;
              pfVar41 = (float *)(((ulonglong)bVar43 + 1) * 0xa0 + *(longlong *)(param_1 + 0x148));
              uVar38 = uVar2;
              if (uVar49 != 0) {
                iVar48 = 4 - uVar49;
                pfVar42 = pfVar50 + uVar51;
                uVar38 = iVar48 + uVar2;
                do {
                  *pfVar42 = 0.0;
                  pfVar42 = pfVar42 + 1;
                  iVar48 = iVar48 + -1;
                } while (iVar48 != 0);
              }
              fVar56 = pfVar41[0x20];
              fVar60 = pfVar41[0x21];
              fStack_11c = pfVar41[0x22];
              fStack_12c = pfVar41[0x23];
              fVar3 = *pfVar41;
              fVar4 = pfVar41[1];
              fVar5 = pfVar41[2];
              fVar6 = pfVar41[3];
              fVar7 = pfVar41[4];
              fVar8 = pfVar41[5];
              fVar9 = pfVar41[6];
              fVar10 = pfVar41[7];
              fVar11 = pfVar41[8];
              fVar12 = pfVar41[9];
              fVar13 = pfVar41[10];
              fVar14 = pfVar41[0xb];
              fVar15 = pfVar41[0xc];
              fVar16 = pfVar41[0xd];
              fVar17 = pfVar41[0xe];
              fVar18 = pfVar41[0xf];
              fVar19 = pfVar41[0x10];
              fVar20 = pfVar41[0x11];
              fVar21 = pfVar41[0x12];
              fVar22 = pfVar41[0x13];
              fVar23 = pfVar41[0x14];
              fVar24 = pfVar41[0x15];
              fVar25 = pfVar41[0x16];
              fVar26 = pfVar41[0x17];
              fVar27 = pfVar41[0x18];
              fVar28 = pfVar41[0x19];
              fVar29 = pfVar41[0x1a];
              fVar30 = pfVar41[0x1b];
              fVar31 = pfVar41[0x1c];
              fVar32 = pfVar41[0x1d];
              fVar33 = pfVar41[0x1e];
              fVar34 = pfVar41[0x1f];
              local_108 = CONCAT44(fVar56,fVar56);
              uStack_100 = CONCAT44(fVar56,fVar56);
              pfVar42 = pfVar50;
              fStack_10c = fVar60;
              if (pfVar50 < pfVar50 + uVar38) {
                do {
                  fVar36 = *pfVar42;
                  fVar37 = pfVar42[1];
                  fStack_10c = pfVar42[2];
                  fVar35 = pfVar42[3];
                  fVar53 = fVar27 * fStack_11c;
                  fVar55 = fVar28 * fStack_11c;
                  fVar58 = fVar31 * fStack_12c;
                  fVar52 = fVar32 * fStack_12c;
                  fVar54 = fVar34 * fStack_12c;
                  fStack_12c = fVar37 * fVar13 +
                               fVar9 * fStack_10c +
                               fStack_10c * fVar5 + fVar21 * fVar56 + fVar25 * fVar60 +
                               fVar29 * fStack_11c + fVar33 * fStack_12c + fVar36 * fVar17;
                  fStack_11c = fVar37 * fVar14 +
                               fVar10 * fStack_10c +
                               fVar35 * fVar6 + fVar22 * fVar56 + fVar26 * fVar60 +
                               fVar30 * fStack_11c + fVar54 + fVar36 * fVar18;
                  *pfVar42 = fVar37 * fVar11 +
                             fVar7 * fStack_10c +
                             fVar36 * fVar3 + fVar19 * fVar56 + fVar23 * fVar60 + fVar53 + fVar58 +
                             fVar36 * fVar15;
                  pfVar42[1] = fVar37 * fVar12 +
                               fVar8 * fStack_10c +
                               fVar37 * fVar4 + fVar20 * fVar56 + fVar24 * fVar60 + fVar55 + fVar52
                               + fVar36 * fVar16;
                  pfVar42[2] = fStack_12c;
                  pfVar42[3] = fStack_11c;
                  pfVar42 = pfVar42 + 4;
                  fVar60 = fStack_10c;
                  fVar56 = fVar35;
                } while (pfVar42 < pfVar50 + uVar38);
                local_108 = CONCAT44(fVar35,fVar35);
                uStack_100 = CONCAT44(fVar35,fVar35);
              }
              bVar43 = bVar43 + 1;
              pfVar41[0x20] = (float)local_108;
              pfVar41[0x21] = fStack_10c;
              pfVar41[0x22] = fStack_11c;
              pfVar41[0x23] = fStack_12c;
              local_138 = fStack_12c;
              fStack_134 = fStack_12c;
              fStack_130 = fStack_12c;
              local_128 = fStack_11c;
              fStack_124 = fStack_11c;
              fStack_120 = fStack_11c;
              local_118 = fStack_10c;
              fStack_114 = fStack_10c;
              fStack_110 = fStack_10c;
            }
            bVar43 = bVar43 + 1;
          } while (bVar43 < *(byte *)(param_1 + 0x134));
        }
        pfVar41 = pfVar50;
        pfVar42 = pfVar47;
        if (*(int *)(param_1 + 0xe8) != 0) {
          DSP::DelayLine::ProcessBuffer((int *)(param_1 + 0xe8),pfVar47,local_198,uVar2);
          DSP::DelayLine::ProcessBuffer(param_1 + 0x100,pfVar50,local_1a0,uVar2);
          pfVar41 = local_1a0;
          pfVar42 = local_198;
        }
      }
      local_198 = pfVar42;
      local_1a0 = pfVar41;
      lVar44 = param_1 + 8;
      lVar40 = 4;
      do {
        DSP::AllpassFilter::ProcessBuffer(lVar44,_Dst,uVar2);
        lVar44 = lVar44 + 0x18;
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
      ReverbPreProcess(param_1,_Dst,uVar51);
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 0x800),0,0x1800);
      uVar49 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          DSP::DelayLine::ProcessBuffer
                    (*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar49 * 0xa8,_Dst,uVar51);
          lVar46 = local_178[(uVar49 & 1) + 4];
          DSP::FDN4::ProcessBufferAccum
                    (*(longlong *)(param_1 + 0x140) + (ulonglong)uVar49 * 0xa8,_Dst,
                     local_178[uVar49 & 1],local_178[(uVar49 & 1) + 2],lVar46,uVar2);
          uVar49 = uVar49 + 1;
        } while (uVar49 < *(uint *)(param_1 + 0x128));
      }
      fVar56 = *(float *)(param_1 + 0x124);
      plVar45 = local_178;
      lVar44 = param_1 + 0x70;
      lVar40 = 6;
      do {
        DSP::OnePoleZeroHPFilter::ProcessBufferWithGain(lVar44,*plVar45,uVar2,fVar56 * 1.4142135);
        lVar44 = lVar44 + 0xc;
        plVar45 = plVar45 + 1;
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
      fVar56 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b4);
      uVar51 = (ulonglong)local_res18;
      lVar44 = *param_2 + uVar51 * 4;
      lVar40 = *(longlong *)(param_1 + 0x158);
      fVar60 = *(float *)(lVar40 + 0x54) * *(float *)(lVar40 + 0x3c);
      uVar64 = CONCAT44((int)((ulonglong)lVar46 >> 0x20),*(undefined4 *)(lVar40 + 0x4c));
      DSP::Mix3Interp(lVar44,local_178[0],local_178[1],*(undefined4 *)(param_1 + 0x1ac),uVar64,
                      fVar56 * fVar62,fVar60 * fVar63,fVar56 * local_res8,fVar60 * local_res20,uVar2
                     );
      uVar65 = (undefined4)((ulonglong)uVar64 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar56 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
        fVar60 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar64 = CONCAT44(uVar65,0x3f800000);
        DSP::Mix3Interp(lVar44,pfVar47,pfVar50,0x3f800000,uVar64,fVar56 * fVar62,fVar60 * fVar63,
                        fVar56 * local_res8,fVar60 * local_res20,uVar2);
        uVar65 = (undefined4)((ulonglong)uVar64 >> 0x20);
      }
      fVar56 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b4);
      lVar46 = *param_2 + (*(ushort *)(param_2 + 2) + uVar51) * 4;
      lVar44 = *(longlong *)(param_1 + 0x158);
      fVar60 = *(float *)(lVar44 + 0x54) * *(float *)(lVar44 + 0x3c);
      uVar64 = CONCAT44(uVar65,*(undefined4 *)(lVar44 + 0x4c));
      DSP::Mix3Interp(lVar46,local_178[0],local_178[1],*(undefined4 *)(param_1 + 0x1ac),uVar64,
                      fVar56 * local_res8,fVar60 * local_res20,fVar56 * fVar62,fVar60 * fVar63,uVar2
                     );
      uVar65 = (undefined4)((ulonglong)uVar64 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar56 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
        fVar60 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar64 = CONCAT44(uVar65,0x3f800000);
        DSP::Mix3Interp(lVar46,pfVar47,pfVar50,0x3f800000,uVar64,fVar56 * local_res8,
                        fVar60 * local_res20,fVar56 * fVar62,fVar60 * fVar63,uVar2);
        uVar65 = (undefined4)((ulonglong)uVar64 >> 0x20);
      }
      lVar46 = 2;
      if ((uVar1 >> 0xc & 4) != 0) {
        lVar46 = *(longlong *)(param_1 + 0x158);
        fVar56 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a4) * 0.707106;
        fVar60 = *(float *)(lVar46 + 0x54) * *(float *)(lVar46 + 0x44) * 0.707106;
        uVar64 = CONCAT44(uVar65,*(undefined4 *)(lVar46 + 0x4c));
        DSP::Mix3Interp(*param_2 + (uVar51 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,
                        local_178[2],local_178[3],*(undefined4 *)(param_1 + 0x1ac),uVar64,fVar56,
                        fVar60,fVar56,fVar60,uVar2);
        uVar65 = (undefined4)((ulonglong)uVar64 >> 0x20);
        lVar46 = 3;
      }
      fVar56 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
      lVar44 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * lVar46 + uVar51) * 4;
      lVar40 = *(longlong *)(param_1 + 0x158);
      fVar60 = *(float *)(lVar40 + 0x54) * *(float *)(lVar40 + 0x40);
      uVar64 = CONCAT44(uVar65,*(undefined4 *)(lVar40 + 0x4c));
      DSP::Mix3Interp(lVar44,local_158,local_150,*(undefined4 *)(param_1 + 0x1ac),uVar64,
                      fVar56 * fVar62,fVar60 * fVar63,fVar56 * local_res8,fVar60 * local_res20,uVar2
                     );
      uVar65 = (undefined4)((ulonglong)uVar64 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar56 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
        fVar60 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
        uVar64 = CONCAT44(uVar65,0x3f800000);
        DSP::Mix3Interp(lVar44,local_198,local_1a0,0x3f800000,uVar64,fVar56 * fVar62,fVar60 * fVar63
                        ,fVar56 * local_res8,fVar60 * local_res20,uVar2);
        uVar65 = (undefined4)((ulonglong)uVar64 >> 0x20);
      }
      fVar56 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
      lVar44 = *param_2 +
               ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)((int)lVar46 + 1) + uVar51) * 4;
      lVar40 = *(longlong *)(param_1 + 0x158);
      fVar60 = *(float *)(lVar40 + 0x54) * *(float *)(lVar40 + 0x40);
      in_stack_fffffffffffffe28 = CONCAT44(uVar65,*(undefined4 *)(lVar40 + 0x4c));
      DSP::Mix3Interp(lVar44,local_158,local_150,*(undefined4 *)(param_1 + 0x1ac),
                      in_stack_fffffffffffffe28,fVar56 * local_res8,fVar60 * local_res20,
                      fVar56 * fVar62,fVar60 * fVar63,uVar2);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar56 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
        fVar60 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
        in_stack_fffffffffffffe28 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe28 >> 0x20),0x3f800000);
        DSP::Mix3Interp(lVar44,local_198,local_1a0,0x3f800000,in_stack_fffffffffffffe28,
                        fVar56 * local_res8,fVar60 * local_res20,fVar56 * fVar62,fVar60 * fVar63,
                        uVar2);
      }
      if ((uVar1 >> 0xc & 8) != 0) {
        lVar44 = *(longlong *)(param_1 + 0x158);
        fVar62 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a8) * 0.707106;
        fVar56 = *(float *)(lVar44 + 0x54) * *(float *)(lVar44 + 0x48) * 0.707106;
        in_stack_fffffffffffffe28 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe28 >> 0x20),
                      *(undefined4 *)(lVar44 + 0x4c));
        DSP::Mix3Interp(*param_2 +
                        ((ulonglong)((int)lVar46 + 2) * (ulonglong)*(ushort *)(param_2 + 2) + uVar51
                        ) * 4,local_178[2],local_178[3],*(undefined4 *)(param_1 + 0x1ac),
                        in_stack_fffffffffffffe28,fVar62,fVar56,fVar62,fVar56,uVar2);
      }
      lVar46 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar46 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar46 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar46 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar46 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar46 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar46 + 0x40);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar46 + 0x48);
      local_res18 = local_res18 + uVar2;
      local_1a4 = local_1a4 - uVar2;
      local_res8 = local_res20;
      fVar62 = fVar63;
    } while (local_1a4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),local_148);
  return 1;
}



// FUNCTION 14322ac20 ProcessSpread4Out body=4376 status=ok
// SIG undefined ProcessSpread4Out(void)

undefined4 CAkRoomVerbFX::ProcessSpread4Out(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  uint uVar2;
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
  void *_Src;
  void *_Dst;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  float *pfVar36;
  float *pfVar37;
  byte bVar38;
  longlong lVar39;
  void **ppvVar40;
  ulonglong uVar41;
  float *pfVar42;
  int iVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  float *pfVar47;
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
  float local_res8;
  float local_res18;
  uint local_res20;
  undefined8 in_stack_fffffffffffffe08;
  void *pvVar64;
  undefined8 uVar65;
  undefined4 uVar66;
  float *local_1c8;
  float *local_1c0;
  float local_1b8;
  uint local_1b4;
  float fStack_18c;
  void *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  uint local_158;
  uint local_154;
  uint local_150;
  void *local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  void *local_f8;
  
  uVar2 = *(uint *)(param_2 + 1);
  local_154 = uVar2 - (uVar2 >> 0xf & 1) & 0xff;
  local_148 = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                                (*(longlong **)(param_1 + 0x160),
                                 ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x800);
  if (local_148 == (void *)0x0) {
    return 0x34;
  }
  local_f8 = (void *)((longlong)local_148 + 0x400);
  local_188 = (void *)((longlong)local_148 + 0x800);
  local_180 = (longlong)local_148 + 0xc00;
  local_178 = (longlong)local_148 + 0x1000;
  local_170 = (longlong)local_148 + 0x1400;
  local_168 = (longlong)local_148 + 0x1800;
  local_160 = (longlong)local_148 + 0x1c00;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    pfVar42 = (float *)0x0;
    pfVar47 = (float *)0x0;
    local_1c8 = (float *)0x0;
    local_1c0 = (float *)0x0;
  }
  else {
    local_1c8 = (float *)((longlong)local_148 + 0x2c00);
    pfVar47 = (float *)((longlong)local_148 + 0x2000);
    pfVar42 = (float *)((longlong)local_148 + 0x2400);
    local_1c0 = (float *)((longlong)local_148 + 0x2800);
  }
  local_res8 = 0.0;
  local_1b8 = *(float *)(param_1 + 0x174) * 0.0016271889 + 0.707106;
  fVar52 = 1.0 - local_1b8 * local_1b8;
  local_res18 = 0.0;
  if (0.0 < fVar52) {
    local_res18 = SQRT(fVar52);
  }
  fVar61 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.0016271889 + 0.707106;
  fVar52 = 1.0 - fVar61 * fVar61;
  if (0.0 < fVar52) {
    local_res8 = SQRT(fVar52);
  }
  local_res20 = 0;
  local_1b4 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  if (local_1b4 != 0) {
    local_158 = uVar2 & 0x4000;
    local_150 = uVar2 & 0x8000;
    do {
      _Dst = local_f8;
      _Src = local_148;
      pvVar64 = (void *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffe08 >> 0x20),local_res20);
      uVar2 = 0x100;
      if (local_1b4 < 0x100) {
        uVar2 = local_1b4;
      }
      uVar41 = (ulonglong)uVar2;
      WetPreProcess(param_1,param_2,local_148,uVar41,pvVar64);
      if (*(int *)(param_1 + 0xd0) == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uVar2 * 4));
      }
      else {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xd0,_Src,_Dst,uVar41);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        DSP::DelayLine::ProcessBuffer(param_1 + 0xb8,_Src,uVar2);
      }
      pfVar36 = local_1c8;
      pfVar37 = local_1c0;
      if (*(char *)(param_1 + 0x138) != '\0') {
        pvVar64 = (void *)CONCAT44((int)((ulonglong)pvVar64 >> 0x20),uVar2);
        DSP::ERUnitDual::ProcessBuffer
                  (*(undefined8 *)(param_1 + 0x150),_Src,pfVar47,pfVar42,pvVar64);
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar38 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar39 = *(longlong *)(param_1 + 0x148);
            lVar35 = (ulonglong)bVar38 * 0xa0;
            if (*(int *)(lVar35 + 0x90 + lVar39) == 1) {
              uVar44 = uVar2 & 3;
              uVar34 = uVar41;
              if (uVar44 != 0) {
                pfVar36 = pfVar47 + uVar41;
                iVar43 = 4 - uVar44;
                uVar34 = (ulonglong)(iVar43 + uVar2);
                do {
                  *pfVar36 = 0.0;
                  pfVar36 = pfVar36 + 1;
                  iVar43 = iVar43 + -1;
                } while (iVar43 != 0);
              }
              fVar52 = *(float *)(lVar35 + 0x88 + lVar39);
              fVar56 = *(float *)(lVar35 + 0x8c + lVar39);
              pfVar36 = (float *)(lVar35 + lVar39);
              fVar58 = *pfVar36;
              fVar59 = pfVar36[1];
              fVar60 = pfVar36[2];
              fVar62 = pfVar36[3];
              pfVar36 = (float *)(lVar35 + 0x10 + lVar39);
              fVar63 = *pfVar36;
              fVar3 = pfVar36[1];
              fVar4 = pfVar36[2];
              fVar5 = pfVar36[3];
              pfVar36 = (float *)(lVar35 + 0x20 + lVar39);
              fVar6 = *pfVar36;
              fVar7 = pfVar36[1];
              fVar8 = pfVar36[2];
              fVar9 = pfVar36[3];
              pfVar36 = (float *)(lVar35 + 0x30 + lVar39);
              fVar10 = *pfVar36;
              fVar11 = pfVar36[1];
              fVar12 = pfVar36[2];
              fVar13 = pfVar36[3];
              pfVar36 = (float *)(lVar35 + 0x40 + lVar39);
              fVar14 = *pfVar36;
              fVar15 = pfVar36[1];
              fVar16 = pfVar36[2];
              fVar17 = pfVar36[3];
              pfVar36 = (float *)(lVar35 + 0x50 + lVar39);
              fVar18 = *pfVar36;
              fVar19 = pfVar36[1];
              fVar20 = pfVar36[2];
              fVar21 = pfVar36[3];
              pfVar36 = (float *)(lVar35 + 0x60 + lVar39);
              fVar22 = *pfVar36;
              fVar23 = pfVar36[1];
              fVar24 = pfVar36[2];
              fVar25 = pfVar36[3];
              pfVar36 = (float *)(lVar35 + 0x70 + lVar39);
              fVar26 = *pfVar36;
              fVar27 = pfVar36[1];
              fVar28 = pfVar36[2];
              fVar29 = pfVar36[3];
              fVar31 = *(float *)(lVar35 + 0x80 + lVar39);
              fVar32 = *(float *)(lVar35 + 0x84 + lVar39);
              for (pfVar36 = pfVar47; pfVar36 < pfVar47 + uVar34; pfVar36 = pfVar36 + 4) {
                fVar30 = *pfVar36;
                fVar49 = pfVar36[1];
                fVar51 = pfVar36[2];
                fVar54 = pfVar36[3];
                fVar48 = fVar22 * fVar52;
                fVar50 = fVar23 * fVar52;
                fVar53 = fVar26 * fVar56;
                fVar55 = fVar27 * fVar56;
                fVar57 = fVar29 * fVar56;
                fVar56 = fVar49 * fVar8 +
                         fVar4 * fVar51 +
                         fVar16 * fVar31 + fVar51 * fVar60 + fVar20 * fVar32 + fVar24 * fVar52 +
                         fVar28 * fVar56 + fVar30 * fVar12;
                fVar52 = fVar49 * fVar9 +
                         fVar5 * fVar51 +
                         fVar17 * fVar31 + fVar54 * fVar62 + fVar21 * fVar32 + fVar25 * fVar52 +
                         fVar57 + fVar30 * fVar13;
                *pfVar36 = fVar49 * fVar6 +
                           fVar63 * fVar51 +
                           fVar14 * fVar31 + fVar30 * fVar58 + fVar18 * fVar32 + fVar48 + fVar53 +
                           fVar30 * fVar10;
                pfVar36[1] = fVar49 * fVar7 +
                             fVar3 * fVar51 +
                             fVar15 * fVar31 + fVar49 * fVar59 + fVar19 * fVar32 + fVar50 + fVar55 +
                             fVar30 * fVar11;
                pfVar36[2] = fVar56;
                pfVar36[3] = fVar52;
                fVar31 = fVar54;
                fVar32 = fVar51;
              }
              *(float *)(lVar35 + 0x80 + lVar39) = fVar31;
              *(float *)(lVar35 + 0x84 + lVar39) = fVar32;
              *(float *)(lVar35 + 0x88 + lVar39) = fVar52;
              *(float *)(lVar35 + 0x8c + lVar39) = fVar56;
              pfVar36 = (float *)(((ulonglong)bVar38 + 1) * 0xa0 + *(longlong *)(param_1 + 0x148));
              uVar33 = uVar2;
              if (uVar44 != 0) {
                pfVar37 = pfVar42 + uVar41;
                iVar43 = 4 - uVar44;
                uVar33 = iVar43 + uVar2;
                do {
                  *pfVar37 = 0.0;
                  pfVar37 = pfVar37 + 1;
                  iVar43 = iVar43 + -1;
                } while (iVar43 != 0);
              }
              fVar52 = pfVar36[0x20];
              fVar56 = pfVar36[0x21];
              fStack_12c = pfVar36[0x22];
              fStack_18c = pfVar36[0x23];
              fVar58 = *pfVar36;
              fVar59 = pfVar36[1];
              fVar60 = pfVar36[2];
              fVar62 = pfVar36[3];
              fVar63 = pfVar36[4];
              fVar3 = pfVar36[5];
              fVar4 = pfVar36[6];
              fVar5 = pfVar36[7];
              fVar6 = pfVar36[8];
              fVar7 = pfVar36[9];
              fVar8 = pfVar36[10];
              fVar9 = pfVar36[0xb];
              fVar10 = pfVar36[0xc];
              fVar11 = pfVar36[0xd];
              fVar12 = pfVar36[0xe];
              fVar13 = pfVar36[0xf];
              fVar14 = pfVar36[0x10];
              fVar15 = pfVar36[0x11];
              fVar16 = pfVar36[0x12];
              fVar17 = pfVar36[0x13];
              fVar18 = pfVar36[0x14];
              fVar19 = pfVar36[0x15];
              fVar20 = pfVar36[0x16];
              fVar21 = pfVar36[0x17];
              fVar22 = pfVar36[0x18];
              fVar23 = pfVar36[0x19];
              fVar24 = pfVar36[0x1a];
              fVar25 = pfVar36[0x1b];
              fVar26 = pfVar36[0x1c];
              fVar27 = pfVar36[0x1d];
              fVar28 = pfVar36[0x1e];
              fVar29 = pfVar36[0x1f];
              local_118 = CONCAT44(fVar52,fVar52);
              uStack_110 = CONCAT44(fVar52,fVar52);
              pfVar37 = pfVar42;
              fStack_11c = fVar56;
              if (pfVar42 < pfVar42 + uVar33) {
                do {
                  fVar31 = *pfVar37;
                  fVar32 = pfVar37[1];
                  fStack_11c = pfVar37[2];
                  fVar30 = pfVar37[3];
                  fVar49 = fVar22 * fStack_12c;
                  fVar51 = fVar23 * fStack_12c;
                  fVar54 = fVar26 * fStack_18c;
                  fVar48 = fVar27 * fStack_18c;
                  fVar50 = fVar29 * fStack_18c;
                  fStack_18c = fVar32 * fVar8 +
                               fVar4 * fStack_11c +
                               fStack_11c * fVar60 + fVar16 * fVar52 + fVar20 * fVar56 +
                               fVar24 * fStack_12c + fVar28 * fStack_18c + fVar31 * fVar12;
                  fStack_12c = fVar32 * fVar9 +
                               fVar5 * fStack_11c +
                               fVar30 * fVar62 + fVar17 * fVar52 + fVar21 * fVar56 +
                               fVar25 * fStack_12c + fVar50 + fVar31 * fVar13;
                  *pfVar37 = fVar32 * fVar6 +
                             fVar63 * fStack_11c +
                             fVar31 * fVar58 + fVar14 * fVar52 + fVar18 * fVar56 + fVar49 + fVar54 +
                             fVar31 * fVar10;
                  pfVar37[1] = fVar32 * fVar7 +
                               fVar3 * fStack_11c +
                               fVar32 * fVar59 + fVar15 * fVar52 + fVar19 * fVar56 + fVar51 + fVar48
                               + fVar31 * fVar11;
                  pfVar37[2] = fStack_18c;
                  pfVar37[3] = fStack_12c;
                  pfVar37 = pfVar37 + 4;
                  fVar56 = fStack_11c;
                  fVar52 = fVar30;
                } while (pfVar37 < pfVar42 + uVar33);
                local_118 = CONCAT44(fVar30,fVar30);
                uStack_110 = CONCAT44(fVar30,fVar30);
              }
              bVar38 = bVar38 + 1;
              pfVar36[0x20] = (float)local_118;
              pfVar36[0x21] = fStack_11c;
              pfVar36[0x22] = fStack_12c;
              pfVar36[0x23] = fStack_18c;
              local_138 = fStack_12c;
              fStack_134 = fStack_12c;
              fStack_130 = fStack_12c;
              local_128 = fStack_11c;
              fStack_124 = fStack_11c;
              fStack_120 = fStack_11c;
            }
            bVar38 = bVar38 + 1;
          } while (bVar38 < *(byte *)(param_1 + 0x134));
        }
        pfVar36 = pfVar42;
        pfVar37 = pfVar47;
        if (*(int *)(param_1 + 0xe8) != 0) {
          DSP::DelayLine::ProcessBuffer((int *)(param_1 + 0xe8),pfVar47,local_1c0,uVar2);
          DSP::DelayLine::ProcessBuffer(param_1 + 0x100,pfVar42,local_1c8,uVar2);
          pfVar36 = local_1c8;
          pfVar37 = local_1c0;
        }
      }
      local_1c0 = pfVar37;
      local_1c8 = pfVar36;
      lVar39 = param_1 + 8;
      lVar35 = 4;
      do {
        DSP::AllpassFilter::ProcessBuffer(lVar39,_Dst,uVar2);
        lVar39 = lVar39 + 0x18;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      ReverbPreProcess(param_1,_Dst,uVar41);
      ::_guard_xfg_dispatch_icall_nop(local_188,0,0x1800);
      uVar44 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          DSP::DelayLine::ProcessBuffer
                    (*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar44 * 0xa8,_Dst,uVar41);
          pvVar64 = (&local_188)[(uVar44 & 1) + 4];
          DSP::FDN4::ProcessBufferAccum
                    (*(longlong *)(param_1 + 0x140) + (ulonglong)uVar44 * 0xa8,_Dst,
                     (&local_188)[uVar44 & 1],(&local_188)[(uVar44 & 1) + 2],pvVar64,uVar2);
          uVar44 = uVar44 + 1;
        } while (uVar44 < *(uint *)(param_1 + 0x128));
      }
      fVar52 = *(float *)(param_1 + 0x124);
      ppvVar40 = &local_188;
      lVar39 = param_1 + 0x70;
      lVar35 = 6;
      do {
        DSP::OnePoleZeroHPFilter::ProcessBufferWithGain(lVar39,*ppvVar40,uVar2,fVar52 * 1.4142135);
        lVar39 = lVar39 + 0xc;
        ppvVar40 = ppvVar40 + 1;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      lVar39 = *(longlong *)(param_1 + 0x158);
      fVar52 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
      fVar56 = *(float *)(lVar39 + 0x54) * *(float *)(lVar39 + 0x3c);
      uVar34 = (ulonglong)local_res20;
      lVar35 = *param_2 + uVar34 * 4;
      uVar65 = CONCAT44((int)((ulonglong)pvVar64 >> 0x20),*(undefined4 *)(lVar39 + 0x4c));
      DSP::Mix3Interp(lVar35,local_188,local_180,*(undefined4 *)(param_1 + 0x1ac),uVar65,
                      fVar52 * local_1b8,fVar56 * fVar61,fVar52 * local_res18,fVar56 * local_res8,
                      uVar2);
      uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar52 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
        fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar65 = CONCAT44(uVar66,0x3f800000);
        DSP::Mix3Interp(lVar35,pfVar47,pfVar42,0x3f800000,uVar65,fVar52 * local_1b8,fVar56 * fVar61,
                        fVar52 * local_res18,fVar56 * local_res8,uVar2);
        uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      }
      fVar52 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
      lVar39 = *param_2 + (*(ushort *)(param_2 + 2) + uVar34) * 4;
      lVar35 = *(longlong *)(param_1 + 0x158);
      fVar56 = *(float *)(lVar35 + 0x54) * *(float *)(lVar35 + 0x3c);
      uVar65 = CONCAT44(uVar66,*(undefined4 *)(lVar35 + 0x4c));
      DSP::Mix3Interp(lVar39,local_188,local_180,*(undefined4 *)(param_1 + 0x1ac),uVar65,
                      fVar52 * local_res18,fVar56 * local_res8,fVar52 * local_1b8,fVar56 * fVar61,
                      uVar2);
      uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar52 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
        fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar65 = CONCAT44(uVar66,0x3f800000);
        DSP::Mix3Interp(lVar39,pfVar47,pfVar42,0x3f800000,uVar65,fVar52 * local_res18,
                        fVar56 * local_res8,fVar52 * local_1b8,fVar56 * fVar61,uVar2);
        uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      }
      lVar39 = 2;
      if (local_158 != 0) {
        lVar39 = *(longlong *)(param_1 + 0x158);
        fVar52 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a4) * 0.707106;
        fVar56 = *(float *)(lVar39 + 0x54) * *(float *)(lVar39 + 0x44) * 0.707106;
        uVar65 = CONCAT44(uVar66,*(undefined4 *)(lVar39 + 0x4c));
        DSP::Mix3Interp(*param_2 + (uVar34 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,local_178,
                        local_170,*(undefined4 *)(param_1 + 0x1ac),uVar65,fVar52,fVar56,fVar52,
                        fVar56,uVar2);
        uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
        lVar39 = 3;
      }
      lVar35 = *(longlong *)(param_1 + 0x158);
      fVar58 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b4);
      fVar52 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b0);
      fVar59 = *(float *)(lVar35 + 0x40) * *(float *)(lVar35 + 0x54);
      iVar43 = (int)lVar39;
      fVar56 = *(float *)(lVar35 + 0x40) * *(float *)(lVar35 + 0x50);
      fVar60 = fVar59 * local_res8;
      fVar59 = fVar59 * fVar61;
      fVar63 = fVar58 * local_1b8;
      local_1b8 = fVar52 * local_1b8;
      fVar58 = fVar58 * local_res18;
      fVar62 = fVar56 * fVar61;
      lVar39 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * lVar39 + uVar34) * 4;
      fVar56 = fVar56 * local_res8;
      uVar65 = CONCAT44(uVar66,*(undefined4 *)(lVar35 + 0x4c));
      fVar52 = fVar52 * local_res18;
      DSP::Mix3Interp(lVar39,local_168,local_160,*(undefined4 *)(param_1 + 0x1ac),uVar65,fVar63,
                      fVar59,fVar58,fVar60,uVar2);
      uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        uVar65 = CONCAT44(uVar66,0x3f800000);
        DSP::Mix3Interp(lVar39,local_1c0,local_1c8,0x3f800000,uVar65,local_1b8,fVar62,fVar52,fVar56,
                        uVar2);
        uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      }
      lVar39 = *param_2 +
               ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)(iVar43 + 1) + uVar34) * 4;
      uVar65 = CONCAT44(uVar66,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(lVar39,local_168,local_160,*(undefined4 *)(param_1 + 0x1ac),uVar65,fVar58,
                      fVar60,fVar63,fVar59,uVar2);
      uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        uVar65 = CONCAT44(uVar66,0x3f800000);
        DSP::Mix3Interp(lVar39,local_1c0,local_1c8,0x3f800000,uVar65,fVar52,fVar56,local_1b8,fVar62,
                        uVar2);
        uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      }
      lVar39 = *param_2 +
               ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)(iVar43 + 2) + uVar34) * 4;
      uVar65 = CONCAT44(uVar66,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(lVar39,local_168,local_160,*(undefined4 *)(param_1 + 0x1ac),uVar65,fVar63,
                      fVar59,fVar58,fVar60,uVar2);
      uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        uVar65 = CONCAT44(uVar66,0x3f800000);
        DSP::Mix3Interp(lVar39,local_1c0,local_1c8,0x3f800000,uVar65,local_1b8,fVar62,fVar52,fVar56,
                        uVar2);
        uVar66 = (undefined4)((ulonglong)uVar65 >> 0x20);
      }
      lVar39 = *param_2 +
               ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)(iVar43 + 3) + uVar34) * 4;
      in_stack_fffffffffffffe08 =
           CONCAT44(uVar66,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      DSP::Mix3Interp(lVar39,local_168,local_160,*(undefined4 *)(param_1 + 0x1ac),
                      in_stack_fffffffffffffe08,fVar58,fVar60,fVar63,fVar59,uVar2);
      if (*(char *)(param_1 + 0x138) != '\0') {
        in_stack_fffffffffffffe08 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe08 >> 0x20),0x3f800000);
        DSP::Mix3Interp(lVar39,local_1c0,local_1c8,0x3f800000,in_stack_fffffffffffffe08,fVar52,
                        fVar56,local_1b8,fVar62,uVar2);
      }
      uVar44 = iVar43 + 4;
      if (uVar44 < local_154) {
        uVar45 = (ulonglong)uVar44;
        uVar46 = (ulonglong)(local_154 - uVar44);
        do {
          fVar52 = *(float *)(param_1 + 0x1ac);
          pfVar36 = (float *)(*param_2 + (*(ushort *)(param_2 + 2) * uVar45 + uVar34) * 4);
          fVar56 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x4c);
          if (fVar56 == fVar52) {
            AK::DSP::ApplyGain(pfVar36,fVar52,uVar41);
          }
          else {
            pfVar37 = pfVar36 + uVar41;
            if (3 < uVar2) {
              pfVar1 = pfVar36 + (uVar2 & 0xfffffffc);
              fVar62 = (fVar56 - fVar52) / (float)(uVar2 & 0xfffffffc);
              fVar63 = fVar62 * 4.0;
              fVar60 = fVar62 + fVar62 + fVar52;
              fVar58 = fVar52;
              fVar59 = fVar62 + fVar52;
              fVar62 = fVar62 + fVar60;
              for (; pfVar36 < pfVar1; pfVar36 = pfVar36 + 4) {
                *pfVar36 = *pfVar36 * fVar58;
                pfVar36[1] = pfVar36[1] * fVar59;
                pfVar36[2] = pfVar36[2] * fVar60;
                pfVar36[3] = pfVar36[3] * fVar62;
                fVar58 = fVar58 + fVar63;
                fVar59 = fVar59 + fVar63;
                fVar60 = fVar60 + fVar63;
                fVar62 = fVar62 + fVar63;
              }
            }
            if (pfVar36 < pfVar37) {
              if (0xf < ((longlong)pfVar37 + (3 - (longlong)pfVar36) & 0xfffffffffffffffcU)) {
                fVar58 = (fVar56 - fVar52) / (float)uVar41;
                do {
                  *pfVar36 = fVar52 * *pfVar36;
                  fVar59 = fVar52 + fVar58 + fVar58;
                  pfVar36[1] = (fVar52 + fVar58) * pfVar36[1];
                  fVar60 = fVar59 + fVar58;
                  pfVar36[2] = fVar59 * pfVar36[2];
                  fVar52 = fVar60 + fVar58;
                  pfVar36[3] = fVar60 * pfVar36[3];
                  pfVar36 = pfVar36 + 4;
                } while (pfVar36 < pfVar37 + -3);
              }
              if (pfVar36 < pfVar37) {
                fVar58 = fVar52;
                do {
                  *pfVar36 = fVar58 * *pfVar36;
                  pfVar36 = pfVar36 + 1;
                  fVar58 = fVar58 + (fVar56 - fVar52) / (float)uVar41;
                } while (pfVar36 < pfVar37);
              }
            }
          }
          uVar45 = uVar45 + 1;
          uVar46 = uVar46 - 1;
        } while (uVar46 != 0);
      }
      uVar66 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
      if (local_150 != 0) {
        lVar35 = AkAudioBuffer::GetLFE(param_2);
        lVar39 = *(longlong *)(param_1 + 0x158);
        fVar52 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a8) * 0.707106;
        fVar56 = *(float *)(lVar39 + 0x54) * *(float *)(lVar39 + 0x48) * 0.707106;
        in_stack_fffffffffffffe08 = CONCAT44(uVar66,*(undefined4 *)(lVar39 + 0x4c));
        DSP::Mix3Interp(uVar34 * 4 + lVar35,local_178,local_170,*(undefined4 *)(param_1 + 0x1ac),
                        in_stack_fffffffffffffe08,fVar52,fVar56,fVar52,fVar56,uVar2);
      }
      lVar39 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar39 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar39 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar39 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar39 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar39 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar39 + 0x40);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar39 + 0x48);
      local_res20 = local_res20 + uVar2;
      local_1b4 = local_1b4 - uVar2;
      local_res18 = local_res8;
      local_1b8 = fVar61;
    } while (local_1b4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),local_148);
  return 1;
}



// FUNCTION 14322bd40 RTPCParametersUpdate body=535 status=ok
// SIG undefined RTPCParametersUpdate(void)

void CAkRoomVerbFX::RTPCParametersUpdate(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  if ((*(float *)(param_1 + 0x168) != *(float *)(lVar1 + 8)) ||
     (*(float *)(param_1 + 0x16c) != *(float *)(lVar1 + 0xc))) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x128) != 0) {
      do {
        DSP::FDN4::ChangeDecay
                  ((ulonglong)uVar2 * 0xa8 + *(longlong *)(param_1 + 0x140),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 8),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0xc),
                   *(undefined4 *)(param_1 + 0x130));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x128));
      lVar1 = *(longlong *)(param_1 + 0x158);
    }
    *(int *)(param_1 + 0x120) =
         (int)(longlong)
              ((*(float *)(lVar1 + 0x60) * 0.001 + *(float *)(lVar1 + 8)) *
              (float)*(uint *)(param_1 + 0x130));
  }
  if (*(float *)(lVar1 + 0x10) != *(float *)(param_1 + 0x170)) {
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212 - 1.85409;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (0.61803 <= fVar3) {
      fVar3 = 0.61803;
    }
    *(float *)(param_1 + 0x1c) = fVar3;
    lVar1 = *(longlong *)(param_1 + 0x158);
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212 - 1.23606;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (0.61803 <= fVar3) {
      fVar3 = 0.61803;
    }
    *(float *)(param_1 + 0x34) = fVar3;
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212 - 0.61803;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (0.61803 <= fVar3) {
      fVar3 = 0.61803;
    }
    *(float *)(param_1 + 0x4c) = fVar3;
    fVar3 = *(float *)(lVar1 + 0x10) * 0.0247212;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (0.61803 <= fVar3) {
      fVar3 = 0.61803;
    }
    *(float *)(param_1 + 100) = fVar3;
  }
  if (((*(float *)(param_1 + 0x178) != *(float *)(lVar1 + 0x18)) ||
      (*(float *)(param_1 + 0x17c) != *(float *)(lVar1 + 0x1c))) ||
     (*(float *)(param_1 + 0x180) != *(float *)(lVar1 + 0x20))) {
    ComputeTCCoefs1(param_1);
    lVar1 = *(longlong *)(param_1 + 0x158);
  }
  if (((*(float *)(param_1 + 0x184) != *(float *)(lVar1 + 0x24)) ||
      (*(float *)(param_1 + 0x188) != *(float *)(lVar1 + 0x28))) ||
     (*(float *)(param_1 + 0x18c) != *(float *)(lVar1 + 0x2c))) {
    ComputeTCCoefs2(param_1);
    lVar1 = *(longlong *)(param_1 + 0x158);
  }
  if (((*(float *)(param_1 + 400) == *(float *)(lVar1 + 0x30)) &&
      (*(float *)(param_1 + 0x194) == *(float *)(lVar1 + 0x34))) &&
     (*(float *)(param_1 + 0x198) == *(float *)(lVar1 + 0x38))) {
    *(undefined1 *)(lVar1 + 0x58) = 0;
    return;
  }
  ComputeTCCoefs3(param_1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x58) = 0;
  return;
}



// FUNCTION 14322bf60 Reset body=312 status=ok
// SIG undefined Reset(void)

undefined8 CAkRoomVerbFX::Reset(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  DSP::DelayLine::Reset(param_1 + 0xb8);
  DSP::DelayLine::Reset(param_1 + 0xd0);
  DSP::DelayLine::Reset(param_1 + 0xe8);
  DSP::DelayLine::Reset(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    DSP::ERUnitDual::Reset();
  }
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (uVar2 = uVar5, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      uVar1 = (int)uVar2 + 1;
      lVar4 = *(longlong *)(param_1 + 0x148);
      *(undefined8 *)(uVar2 * 0xa0 + 0x80 + lVar4) = 0;
      *(undefined8 *)(uVar2 * 0xa0 + 0x88 + lVar4) = 0;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(byte *)(param_1 + 0x134));
  }
  ResetFDNs(param_1);
  lVar4 = param_1 + 8;
  lVar3 = 4;
  do {
    DSP::AllpassFilter::Reset(lVar4);
    lVar4 = lVar4 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 300) != 0)) {
    do {
      DSP::AllpassFilter::Reset(*(longlong *)(param_1 + 0x68) + uVar5 * 0x18);
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 300));
  }
  return 1;
}



// FUNCTION 14322c0a0 ResetFDNs body=120 status=ok
// SIG undefined ResetFDNs(void)

void CAkRoomVerbFX::ResetFDNs(longlong param_1)

{
  uint uVar1;
  
  if ((*(longlong *)(param_1 + 0x140) != 0) && (uVar1 = 0, *(int *)(param_1 + 0x128) != 0)) {
    do {
      DSP::FDN4::Reset(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar1 * 0xa8);
      DSP::DelayLine::Reset(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar1 * 0xa8);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x128));
  }
  return;
}



// FUNCTION 14322c120 ResetToneControlFilters body=81 status=ok
// SIG undefined ResetToneControlFilters(void)

void CAkRoomVerbFX::ResetToneControlFilters(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (uVar4 = 0, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      lVar2 = uVar4 * 0xa0;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(undefined8 *)(lVar2 + 0x80 + lVar1) = 0;
      *(undefined8 *)(lVar2 + 0x88 + lVar1) = 0;
    } while (uVar3 < *(byte *)(param_1 + 0x134));
  }
  return;
}



// FUNCTION 14322c180 ReverbPreProcess body=714 status=ok
// SIG undefined ReverbPreProcess(void)

void CAkRoomVerbFX::ReverbPreProcess(longlong param_1,float *param_2,uint param_3)

{
  longlong lVar1;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  longlong lVar40;
  uint uVar41;
  float *pfVar42;
  int iVar43;
  byte bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (bVar44 = 0, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      lVar40 = (ulonglong)bVar44 * 0xa0;
      if (*(int *)(lVar40 + 0x90 + lVar1) == 2) {
        uVar41 = param_3;
        if ((param_3 & 3) != 0) {
          pfVar42 = param_2 + param_3;
          iVar43 = 4 - (param_3 & 3);
          uVar41 = iVar43 + param_3;
          do {
            *pfVar42 = 0.0;
            pfVar42 = pfVar42 + 1;
            iVar43 = iVar43 + -1;
          } while (iVar43 != 0);
        }
        fVar51 = *(float *)(lVar40 + 0x88 + lVar1);
        fVar49 = *(float *)(lVar40 + 0x8c + lVar1);
        pfVar42 = (float *)(lVar40 + lVar1);
        fVar2 = *pfVar42;
        fVar3 = pfVar42[1];
        fVar4 = pfVar42[2];
        fVar5 = pfVar42[3];
        pfVar42 = (float *)(lVar40 + 0x10 + lVar1);
        fVar6 = *pfVar42;
        fVar7 = pfVar42[1];
        fVar8 = pfVar42[2];
        fVar9 = pfVar42[3];
        pfVar42 = (float *)(lVar40 + 0x20 + lVar1);
        fVar10 = *pfVar42;
        fVar11 = pfVar42[1];
        fVar12 = pfVar42[2];
        fVar13 = pfVar42[3];
        pfVar42 = (float *)(lVar40 + 0x30 + lVar1);
        fVar14 = *pfVar42;
        fVar15 = pfVar42[1];
        fVar16 = pfVar42[2];
        fVar17 = pfVar42[3];
        pfVar42 = (float *)(lVar40 + 0x40 + lVar1);
        fVar18 = *pfVar42;
        fVar19 = pfVar42[1];
        fVar20 = pfVar42[2];
        fVar21 = pfVar42[3];
        pfVar42 = (float *)(lVar40 + 0x50 + lVar1);
        fVar22 = *pfVar42;
        fVar23 = pfVar42[1];
        fVar24 = pfVar42[2];
        fVar25 = pfVar42[3];
        pfVar42 = (float *)(lVar40 + 0x60 + lVar1);
        fVar26 = *pfVar42;
        fVar27 = pfVar42[1];
        fVar28 = pfVar42[2];
        fVar29 = pfVar42[3];
        pfVar42 = (float *)(lVar40 + 0x70 + lVar1);
        fVar30 = *pfVar42;
        fVar31 = pfVar42[1];
        fVar32 = pfVar42[2];
        fVar33 = pfVar42[3];
        fVar38 = *(float *)(lVar40 + 0x80 + lVar1);
        fVar39 = *(float *)(lVar40 + 0x84 + lVar1);
        for (pfVar42 = param_2; pfVar42 < param_2 + uVar41; pfVar42 = pfVar42 + 4) {
          fVar34 = *pfVar42;
          fVar35 = pfVar42[1];
          fVar36 = pfVar42[2];
          fVar37 = pfVar42[3];
          fVar45 = fVar26 * fVar51;
          fVar46 = fVar27 * fVar51;
          fVar47 = fVar30 * fVar49;
          fVar48 = fVar31 * fVar49;
          fVar50 = fVar33 * fVar49;
          fVar49 = fVar35 * fVar12 +
                   fVar8 * fVar36 +
                   fVar36 * fVar4 + fVar20 * fVar38 + fVar24 * fVar39 + fVar28 * fVar51 +
                   fVar32 * fVar49 + fVar34 * fVar16;
          fVar51 = fVar35 * fVar13 +
                   fVar9 * fVar36 +
                   fVar37 * fVar5 + fVar21 * fVar38 + fVar25 * fVar39 + fVar29 * fVar51 + fVar50 +
                   fVar34 * fVar17;
          *pfVar42 = fVar35 * fVar10 +
                     fVar6 * fVar36 +
                     fVar34 * fVar2 + fVar18 * fVar38 + fVar22 * fVar39 + fVar45 + fVar47 +
                     fVar34 * fVar14;
          pfVar42[1] = fVar35 * fVar11 +
                       fVar7 * fVar36 +
                       fVar35 * fVar3 + fVar19 * fVar38 + fVar23 * fVar39 + fVar46 + fVar48 +
                       fVar34 * fVar15;
          pfVar42[2] = fVar49;
          pfVar42[3] = fVar51;
          fVar38 = fVar37;
          fVar39 = fVar36;
        }
        *(float *)(lVar40 + 0x80 + lVar1) = fVar38;
        *(float *)(lVar40 + 0x84 + lVar1) = fVar39;
        *(float *)(lVar40 + 0x88 + lVar1) = fVar51;
        *(float *)(lVar40 + 0x8c + lVar1) = fVar49;
      }
      bVar44 = bVar44 + 1;
    } while (bVar44 < *(byte *)(param_1 + 0x134));
  }
  return;
}



// FUNCTION 14322c450 SetupDecorrelationAPF body=436 status=ok
// SIG undefined SetupDecorrelationAPF(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SetupDecorrelationAPF(longlong *param_1,uint param_2,longlong *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined8 auStack_b0 [5];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  
  uVar8 = (ulonglong)param_2;
  auStack_b0[0] = 0x14322c4a1;
  lVar5 = (**(code **)(*param_1 + 8))(param_1,uVar8 * 0x18);
  *param_3 = lVar5;
  if (lVar5 == 0) {
    uVar6 = 0x34;
  }
  else {
    uVar1 = uVar8 * 4;
    uVar7 = uVar1 + 0xf;
    if (uVar7 <= uVar1) {
      uVar7 = 0xffffffffffffff0;
    }
    auStack_b0[0] = 0x14322c4db;
    uVar10 = 0;
    lVar5 = -(uVar7 & 0xfffffffffffffff0);
    local_70 = 0x43480000;
    local_74 = 0x42840000;
    local_6c = 0x40a00000;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_68 = 0;
    local_60 = 0;
    *(undefined8 *)((longlong)auStack_b0 + lVar5) = 0x14322c52c;
    DelayLengths::ComputeDiffusionFiltersDelayTimes(uVar8,&local_88,(longlong)&local_88 + lVar5);
    uVar8 = uVar1 + 0xf;
    if (uVar8 <= uVar1) {
      uVar8 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar5) = 0x14322c548;
    lVar4 = -(uVar8 & 0xfffffffffffffff0);
    puVar11 = (undefined4 *)((longlong)&local_88 + lVar4 + lVar5);
    *(undefined8 *)((longlong)auStack_b0 + lVar4 + lVar5) = 0x14322c561;
    DelayLengths::ComputePrimeDelayLengths((longlong)&local_88 + lVar5,param_4,param_2,puVar11);
    if (param_2 != 0) {
      do {
        fVar12 = 2.47212 - (float)(3 - (int)uVar10) * 0.61803;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (0.61803 <= fVar12) {
          fVar12 = 0.61803;
        }
        uVar2 = *puVar11;
        lVar3 = *param_3;
        *(undefined8 *)((longlong)auStack_b0 + lVar4 + lVar5) = 0x14322c5c0;
        uVar6 = DSP::AllpassFilter::Init(lVar3 + uVar10 * 0x18,param_1,uVar2,fVar12);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        puVar11 = puVar11 + 1;
      } while (uVar9 < param_2);
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14322c610 SetupERDelay body=190 status=ok
// SIG undefined SetupERDelay(void)

undefined8 CAkRoomVerbFX::SetupERDelay(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x138) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x158);
    fVar4 = ::_guard_xfg_dispatch_icall_nop(2.0,*(float *)(lVar1 + 100) * 0.01);
    uVar2 = (ulonglong)*(uint *)(lVar1 + 0x5c);
    fVar5 = fVar4 * *(float *)(&PTR_DAT_145aebce0)[uVar2 * 5];
    if (fVar4 * *(float *)(&PTR_DAT_145aebcd0)[uVar2 * 5] <=
        fVar4 * *(float *)(&PTR_DAT_145aebce0)[uVar2 * 5]) {
      fVar5 = fVar4 * *(float *)(&PTR_DAT_145aebcd0)[uVar2 * 5];
    }
    uVar2 = (ulonglong)(fVar5 * (float)*(uint *)(param_1 + 0x130) * 0.001);
    if ((int)uVar2 != 0) {
      uVar3 = DSP::DelayLine::Init(param_1 + 0xb8,param_2,uVar2 & 0xffffffff);
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 14322c6d0 SetupERFrontBackDelay body=172 status=ok
// SIG undefined SetupERFrontBackDelay(void)

undefined8 CAkRoomVerbFX::SetupERFrontBackDelay(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x138) != '\0') {
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x68) * 0.001 *
            (float)*(uint *)(param_1 + 0x130);
    uVar2 = (ulonglong)fVar3;
    if (((int)uVar2 != 0) &&
       ((((param_3 & 0xf00) == 0x100 && ((param_3 & 0x210000) != 0)) || ((param_3 & 0xf00) == 0x200)
        ))) {
      uVar1 = DSP::DelayLine::Init(param_1 + 0xe8,fVar3,uVar2 & 0xffffffff);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      uVar1 = DSP::DelayLine::Init(param_1 + 0x100,param_2,uVar2 & 0xffffffff);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
    }
  }
  return 1;
}



// FUNCTION 14322c780 SetupERUnit body=242 status=ok
// SIG undefined SetupERUnit(void)

undefined4 CAkRoomVerbFX::SetupERUnit(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar1 = 1;
  uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x158) + 0x5c);
  if (*(char *)(param_1 + 0x138) != '\0') {
    puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      puVar2[4] = 0;
      *(undefined8 *)(puVar2 + 0xc5) = 0;
      ::_guard_xfg_dispatch_icall_nop(puVar2 + 5,0,0x300);
    }
    *(undefined4 **)(param_1 + 0x150) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = 0x34;
    }
    else {
      uVar1 = DSP::ERUnitDual::Init
                        (puVar2,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 100),
                         (&PTR_DAT_145aebcd0)[uVar3 * 5],(&PTR_DAT_145aebce0)[uVar3 * 5],
                         *(undefined4 *)(&DAT_145aebcc8 + uVar3 * 0x28),
                         *(undefined4 *)(&DAT_145aebcd8 + uVar3 * 0x28),
                         *(undefined4 *)(param_1 + 0x130));
    }
  }
  return uVar1;
}



// FUNCTION 14322c880 SetupFDNs body=862 status=ok
// SIG undefined SetupFDNs(void)

undefined8 CAkRoomVerbFX::SetupFDNs(longlong param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  ulonglong uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float local_398 [16];
  undefined4 auStack_358 [16];
  undefined4 local_318 [64];
  undefined4 local_218 [64];
  undefined1 local_118 [256];
  
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  *(longlong *)(param_1 + 0x140) = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  uVar6 = 0;
  uVar9 = uVar6;
  if (*(int *)(param_1 + 0x128) != 0) {
    do {
      _Dst = (void *)(uVar9 * 0xa8 + *(longlong *)(param_1 + 0x140));
      if (_Dst != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,0,0xa8);
        *(undefined8 *)((longlong)_Dst + 0x60) = 0;
        *(undefined8 *)((longlong)_Dst + 0x68) = 0;
        *(undefined8 *)((longlong)_Dst + 0x70) = 0;
        *(undefined8 *)((longlong)_Dst + 0x78) = 0;
        *(undefined8 *)((longlong)_Dst + 0x80) = 0;
        *(undefined8 *)((longlong)_Dst + 0x88) = 0;
        *(undefined4 *)((longlong)_Dst + 0x90) = 0;
        *(undefined8 *)((longlong)_Dst + 0x98) = 0;
        *(undefined4 *)((longlong)_Dst + 0xa0) = 0;
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x128));
  }
  uVar7 = *(uint *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  if (1 < uVar7) {
    *(float *)(param_1 + 0x124) = 1.0 / SQRT((float)uVar7);
  }
  lVar3 = *(longlong *)(param_1 + 0x158);
  DelayLengths::ComputeFDNDelayTimes
            (*(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar3 + 0x70),uVar7 * 4,lVar3 + 0x9c,
             local_118);
  DelayLengths::ComputePrimeDelayLengths
            (local_118,*(undefined4 *)(param_1 + 0x130),*(int *)(param_1 + 0x128) << 2,local_318);
  uVar7 = *(uint *)(param_1 + 0x128);
  uVar9 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    uVar11 = uVar6;
    do {
      iVar2 = (int)uVar11;
      uVar10 = iVar2 * 4;
      uVar8 = uVar7 * 2 + iVar2;
      local_218[uVar10] = local_318[uVar11];
      local_218[uVar10 + 1] = local_318[uVar8 - uVar7];
      local_218[uVar10 + 2] = local_318[uVar8];
      local_218[uVar10 + 3] = local_318[uVar8 + uVar7];
      uVar11 = (ulonglong)(iVar2 + 1U);
    } while (iVar2 + 1U < uVar7);
  }
  uVar8 = 0x1bc0f99;
  if (uVar7 != 0) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x158) + 0xc4);
    pfVar5 = local_398;
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x158) + 0xc0) / (float)uVar9;
    do {
      uVar8 = uVar8 * 0xbb38435 + 0x3619636b;
      *pfVar5 = (float)uVar8 * fVar1 * 2.3283064e-12 * fVar12 + fVar12;
      pfVar5 = pfVar5 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (uVar7 != 0) {
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = uVar6;
    do {
      uVar10 = (int)uVar9 + 1;
      auStack_358[uVar9] = (int)(longlong)(local_398[uVar9] * 0.001 * (float)uVar8);
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < uVar7);
  }
  if (uVar7 != 0) {
    do {
      uVar4 = DSP::FDN4::Init(*(longlong *)(param_1 + 0x140) + uVar6 * 0xa8,param_2,
                              local_218 + (uint)((int)uVar6 * 4),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 8),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0xc),
                              *(undefined4 *)(param_1 + 0x130));
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar4 = DSP::DelayLine::Init
                        (*(longlong *)(param_1 + 0x140) + 0x90 + uVar6 * 0xa8,param_2,
                         auStack_358[uVar6]);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x128));
  }
  return 1;
}



// FUNCTION 14322cbe0 SetupReverbDelay body=68 status=ok
// SIG undefined SetupReverbDelay(void)

undefined8 CAkRoomVerbFX::SetupReverbDelay(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x60) * 0.001 *
          (float)*(uint *)(param_1 + 0x130);
  uVar1 = (ulonglong)fVar3;
  if ((int)uVar1 != 0) {
    uVar2 = DSP::DelayLine::Init(param_1 + 0xd0,fVar3,uVar1 & 0xffffffff);
    return uVar2;
  }
  return 1;
}



// FUNCTION 14322cc30 SetupToneControlFilters body=350 status=ok
// SIG undefined SetupToneControlFilters(void)

undefined8 CAkRoomVerbFX::SetupToneControlFilters(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = 0;
  uVar3 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x135) = 0;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x158) + 0x80);
    if (iVar1 == 1) {
      uVar3 = (uint)*(byte *)(param_1 + 0x138);
    }
    else {
      uVar3 = 0;
      if (iVar1 - 2U < 2) {
        uVar3 = 1;
      }
    }
    *(char *)(param_1 + 0x136) = (char)uVar3;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x158) + 0x88);
    if (iVar1 == 1) {
      uVar3 = uVar3 + *(byte *)(param_1 + 0x138);
    }
    else if (iVar1 - 2U < 2) {
      uVar3 = uVar3 + 1;
    }
    *(char *)(param_1 + 0x137) = (char)uVar3;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x158) + 0x90);
    if (iVar1 == 1) {
      uVar3 = uVar3 + *(byte *)(param_1 + 0x138);
    }
    else if (iVar1 - 2U < 2) {
      uVar3 = uVar3 + 1;
    }
  }
  *(char *)(param_1 + 0x134) = (char)uVar3;
  if (uVar3 != 0) {
    uVar5 = (ulonglong)uVar3;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x160) + 8))();
    *(longlong *)(param_1 + 0x148) = lVar2;
    if (lVar2 == 0) {
      return 0x34;
    }
    if (uVar3 != 0) {
      do {
        _Dst = (void *)(*(longlong *)(param_1 + 0x148) + lVar4);
        if (_Dst != (void *)0x0) {
          ::_guard_xfg_dispatch_icall_nop(_Dst,0,0xa0);
          *(undefined8 *)((longlong)_Dst + 0x80) = 0;
          *(undefined8 *)((longlong)_Dst + 0x88) = 0;
        }
        lVar4 = lVar4 + 0xa0;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  ComputeTCCoefs1(param_1);
  ComputeTCCoefs2(param_1);
  ComputeTCCoefs3(param_1);
  return 1;
}



// FUNCTION 14322cd90 Term body=350 status=ok
// SIG undefined Term(void)

undefined8 CAkRoomVerbFX::Term(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  DSP::CDelayLight::Term(param_1 + 0x17);
  DSP::CDelayLight::Term(param_1 + 0x1a,param_2);
  DSP::CDelayLight::Term(param_1 + 0x1d,param_2);
  DSP::CDelayLight::Term(param_1 + 0x20,param_2);
  uVar4 = 0;
  if ((*(char *)(param_1 + 0x27) != '\0') && (param_1[0x2a] != 0)) {
    DSP::CDelayLight::Term(param_1[0x2a],param_2);
    if (param_1[0x2a] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    param_1[0x2a] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x29] = 0;
  }
  TermFDNs(param_1,param_2);
  puVar3 = param_1 + 1;
  lVar1 = 4;
  do {
    DSP::CDelayLight::Term(puVar3,param_2);
    puVar3 = puVar3 + 3;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    if (*(int *)((longlong)param_1 + 300) != 0) {
      do {
        DSP::CDelayLight::Term(param_1[0xd] + uVar4 * 0x18,param_2);
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)((longlong)param_1 + 300));
      lVar1 = param_1[0xd];
    }
    (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    param_1[0xd] = 0;
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14322cef0 TermERUnit body=85 status=ok
// SIG undefined TermERUnit(void)

void CAkRoomVerbFX::TermERUnit(longlong param_1,longlong *param_2)

{
  if ((*(char *)(param_1 + 0x138) != '\0') && (*(longlong *)(param_1 + 0x150) != 0)) {
    DSP::CDelayLight::Term();
    if (*(longlong *)(param_1 + 0x150) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}



// FUNCTION 14322cf50 TermFDNs body=160 status=ok
// SIG undefined TermFDNs(void)

void CAkRoomVerbFX::TermFDNs(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x128) != 0) {
      do {
        DSP::FDN4::Term(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar2 * 0xa8,param_2);
        DSP::CDelayLight::Term
                  (*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar2 * 0xa8,param_2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x128));
      lVar1 = *(longlong *)(param_1 + 0x140);
    }
    (**(code **)(*param_2 + 0x10))(param_2,lVar1);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return;
}



// FUNCTION 14322cff0 TermToneControlFilters body=50 status=ok
// SIG undefined TermToneControlFilters(void)

void CAkRoomVerbFX::TermToneControlFilters(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  return;
}



// FUNCTION 14322d030 WetPreProcess body=785 status=ok
// SIG undefined WetPreProcess(void)

void CAkRoomVerbFX::WetPreProcess
               (longlong param_1,undefined8 param_2,float *param_3,uint param_4,undefined4 param_5)

{
  longlong lVar1;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  longlong lVar40;
  float *pfVar41;
  int iVar42;
  byte bVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  DSP::ConstantPowerChannelMixdown
            (param_2,(ulonglong)param_4,param_5,param_3,
             *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x78),
             *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x7c));
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (bVar43 = 0, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      lVar40 = (ulonglong)bVar43 * 0xa0;
      if (*(int *)(lVar40 + 0x90 + lVar1) == 3) {
        uVar44 = param_4;
        if ((param_4 & 3) != 0) {
          pfVar41 = param_3 + param_4;
          iVar42 = 4 - (param_4 & 3);
          uVar44 = iVar42 + param_4;
          do {
            *pfVar41 = 0.0;
            pfVar41 = pfVar41 + 1;
            iVar42 = iVar42 + -1;
          } while (iVar42 != 0);
        }
        fVar51 = *(float *)(lVar40 + 0x88 + lVar1);
        fVar49 = *(float *)(lVar40 + 0x8c + lVar1);
        pfVar41 = (float *)(lVar40 + lVar1);
        fVar2 = *pfVar41;
        fVar3 = pfVar41[1];
        fVar4 = pfVar41[2];
        fVar5 = pfVar41[3];
        pfVar41 = (float *)(lVar40 + 0x10 + lVar1);
        fVar6 = *pfVar41;
        fVar7 = pfVar41[1];
        fVar8 = pfVar41[2];
        fVar9 = pfVar41[3];
        pfVar41 = (float *)(lVar40 + 0x20 + lVar1);
        fVar10 = *pfVar41;
        fVar11 = pfVar41[1];
        fVar12 = pfVar41[2];
        fVar13 = pfVar41[3];
        pfVar41 = (float *)(lVar40 + 0x30 + lVar1);
        fVar14 = *pfVar41;
        fVar15 = pfVar41[1];
        fVar16 = pfVar41[2];
        fVar17 = pfVar41[3];
        pfVar41 = (float *)(lVar40 + 0x40 + lVar1);
        fVar18 = *pfVar41;
        fVar19 = pfVar41[1];
        fVar20 = pfVar41[2];
        fVar21 = pfVar41[3];
        pfVar41 = (float *)(lVar40 + 0x50 + lVar1);
        fVar22 = *pfVar41;
        fVar23 = pfVar41[1];
        fVar24 = pfVar41[2];
        fVar25 = pfVar41[3];
        pfVar41 = (float *)(lVar40 + 0x60 + lVar1);
        fVar26 = *pfVar41;
        fVar27 = pfVar41[1];
        fVar28 = pfVar41[2];
        fVar29 = pfVar41[3];
        pfVar41 = (float *)(lVar40 + 0x70 + lVar1);
        fVar30 = *pfVar41;
        fVar31 = pfVar41[1];
        fVar32 = pfVar41[2];
        fVar33 = pfVar41[3];
        fVar38 = *(float *)(lVar40 + 0x80 + lVar1);
        fVar39 = *(float *)(lVar40 + 0x84 + lVar1);
        for (pfVar41 = param_3; pfVar41 < param_3 + uVar44; pfVar41 = pfVar41 + 4) {
          fVar34 = *pfVar41;
          fVar35 = pfVar41[1];
          fVar36 = pfVar41[2];
          fVar37 = pfVar41[3];
          fVar45 = fVar26 * fVar51;
          fVar46 = fVar27 * fVar51;
          fVar47 = fVar30 * fVar49;
          fVar48 = fVar31 * fVar49;
          fVar50 = fVar33 * fVar49;
          fVar49 = fVar35 * fVar12 +
                   fVar8 * fVar36 +
                   fVar36 * fVar4 + fVar20 * fVar38 + fVar24 * fVar39 + fVar28 * fVar51 +
                   fVar32 * fVar49 + fVar34 * fVar16;
          fVar51 = fVar35 * fVar13 +
                   fVar9 * fVar36 +
                   fVar37 * fVar5 + fVar21 * fVar38 + fVar25 * fVar39 + fVar29 * fVar51 + fVar50 +
                   fVar34 * fVar17;
          *pfVar41 = fVar35 * fVar10 +
                     fVar6 * fVar36 +
                     fVar34 * fVar2 + fVar18 * fVar38 + fVar22 * fVar39 + fVar45 + fVar47 +
                     fVar34 * fVar14;
          pfVar41[1] = fVar35 * fVar11 +
                       fVar7 * fVar36 +
                       fVar35 * fVar3 + fVar19 * fVar38 + fVar23 * fVar39 + fVar46 + fVar48 +
                       fVar34 * fVar15;
          pfVar41[2] = fVar49;
          pfVar41[3] = fVar51;
          fVar38 = fVar37;
          fVar39 = fVar36;
        }
        *(float *)(lVar40 + 0x80 + lVar1) = fVar38;
        *(float *)(lVar40 + 0x84 + lVar1) = fVar39;
        *(float *)(lVar40 + 0x88 + lVar1) = fVar51;
        *(float *)(lVar40 + 0x8c + lVar1) = fVar49;
      }
      bVar43 = bVar43 + 1;
    } while (bVar43 < *(byte *)(param_1 + 0x134));
  }
  return;
}



// FUNCTION 14322d350 FUN_14322d350 body=43 status=ok
// SIG undefined FUN_14322d350(void)

undefined8 * FUN_14322d350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 14322d380 Clone body=214 status=ok
// SIG undefined Clone(void)

undefined8 * CAkRoomVerbFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,200);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145aec560;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(puVar2 + 0xb) = 1;
    uVar1 = *(undefined8 *)(param_1 + 100);
    *(undefined8 *)((longlong)puVar2 + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
    *(undefined8 *)((longlong)puVar2 + 100) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x74);
    *(undefined8 *)((longlong)puVar2 + 0x6c) = *(undefined8 *)(param_1 + 0x6c);
    *(undefined8 *)((longlong)puVar2 + 0x74) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x84);
    *(undefined8 *)((longlong)puVar2 + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined8 *)((longlong)puVar2 + 0x84) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)((longlong)puVar2 + 0x8c) = *(undefined8 *)(param_1 + 0x8c);
    *(undefined8 *)((longlong)puVar2 + 0x94) = uVar1;
    *(undefined1 *)((longlong)puVar2 + 0x9a) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0xa4);
    *(undefined8 *)((longlong)puVar2 + 0x9c) = *(undefined8 *)(param_1 + 0x9c);
    *(undefined8 *)((longlong)puVar2 + 0xa4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xb4);
    *(undefined8 *)((longlong)puVar2 + 0xac) = *(undefined8 *)(param_1 + 0xac);
    *(undefined8 *)((longlong)puVar2 + 0xb4) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0xbc) = *(undefined8 *)(param_1 + 0xbc);
    *(undefined4 *)((longlong)puVar2 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14322d460 FUN_14322d460 body=40 status=ok
// SIG undefined FUN_14322d460(void)

void FUN_14322d460(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,200);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aec560;
    return;
  }
  return;
}



// FUNCTION 14322d5f0 FUN_14322d5f0 body=1668 status=ok
// SIG undefined FUN_14322d5f0(void)

undefined4 FUN_14322d5f0(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x5c) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 1:
    *(float *)(param_1 + 0x60) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 100) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 3:
    *(float *)(param_1 + 0x68) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 4:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    *(bool *)(param_1 + 0x99) = cVar1 != '\0';
    return 1;
  case 10:
    *(float *)(param_1 + 8) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0xb:
    *(float *)(param_1 + 0xc) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0xc:
    *(float *)(param_1 + 0x6c) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0xd:
    *(float *)(param_1 + 0x70) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0xe:
    *(float *)(param_1 + 0x74) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0xf:
    fVar2 = *param_3;
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
      fVar3 = 100.0;
    }
    *(float *)(param_1 + 0x10) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x10:
    fVar2 = *param_3;
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 180.0 <= fVar2)) {
      fVar3 = 180.0;
    }
    *(float *)(param_1 + 0x14) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x14:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    *(bool *)(param_1 + 0x98) = cVar1 != '\0';
    return 1;
  case 0x15:
    *(float *)(param_1 + 0x80) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x16:
    *(float *)(param_1 + 0x84) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x17:
    fVar2 = *param_3;
    fVar3 = -32.0;
    if ((-32.0 <= fVar2) && (fVar3 = fVar2, 32.0 <= fVar2)) {
      fVar3 = 32.0;
    }
    *(float *)(param_1 + 0x18) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x18:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x19:
    *(float *)(param_1 + 0x20) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1a:
    *(float *)(param_1 + 0x88) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x1b:
    *(float *)(param_1 + 0x8c) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x1c:
    fVar2 = *param_3;
    fVar3 = -32.0;
    if ((-32.0 <= fVar2) && (fVar3 = fVar2, 32.0 <= fVar2)) {
      fVar3 = 32.0;
    }
    *(float *)(param_1 + 0x24) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1d:
    *(float *)(param_1 + 0x28) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1e:
    *(float *)(param_1 + 0x2c) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1f:
    *(float *)(param_1 + 0x90) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x20:
    *(float *)(param_1 + 0x94) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x21:
    fVar2 = *param_3;
    fVar3 = -32.0;
    if ((-32.0 <= fVar2) && (fVar3 = fVar2, 32.0 <= fVar2)) {
      fVar3 = 32.0;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x22:
    *(float *)(param_1 + 0x34) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x23:
    *(float *)(param_1 + 0x38) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x28:
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0x78) = fVar2;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x29:
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0x7c) = fVar2;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x32:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x3c) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x33:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x40) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x34:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x44) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x35:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x48) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x3c:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x4c) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x3d:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x50) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x3e:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05 - 0.15);
    *(float *)(param_1 + 0x54) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 100:
    *(float *)(param_1 + 0x9c) = *param_3;
    return 1;
  case 0x65:
    *(float *)(param_1 + 0xa0) = *param_3;
    return 1;
  case 0x66:
    *(float *)(param_1 + 0xa4) = *param_3;
    return 1;
  case 0x67:
    *(float *)(param_1 + 0xa8) = *param_3;
    return 1;
  case 0x68:
    *(float *)(param_1 + 0xac) = *param_3;
    return 1;
  case 0x69:
    *(float *)(param_1 + 0xb0) = *param_3;
    return 1;
  case 0x6a:
    *(float *)(param_1 + 0xb4) = *param_3;
    return 1;
  case 0x6b:
    *(float *)(param_1 + 0xb8) = *param_3;
    return 1;
  case 0x6c:
    *(float *)(param_1 + 0xbc) = *param_3;
    return 1;
  case 0x6d:
    *(float *)(param_1 + 0xc0) = *param_3;
    return 1;
  case 0x6e:
    *(float *)(param_1 + 0xc4) = *param_3;
  }
  return 1;
}



// FUNCTION 14322ddb0 SetParamsBlock body=724 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkRoomVerbFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 0x20) = param_2[6];
  *(undefined4 *)(param_1 + 0x24) = param_2[7];
  *(undefined4 *)(param_1 + 0x28) = param_2[8];
  *(undefined4 *)(param_1 + 0x2c) = param_2[9];
  *(undefined4 *)(param_1 + 0x30) = param_2[10];
  *(undefined4 *)(param_1 + 0x34) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x38) = param_2[0xc];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0xd] * 0.05);
  *(float *)(param_1 + 0x3c) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0xe] * 0.05);
  *(float *)(param_1 + 0x40) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0xf] * 0.05);
  *(float *)(param_1 + 0x44) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0x10] * 0.05);
  *(float *)(param_1 + 0x48) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0x11] * 0.05);
  *(float *)(param_1 + 0x4c) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0x12] * 0.05);
  *(float *)(param_1 + 0x50) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0x13] * 0.05 - 0.15);
  *(float *)(param_1 + 0x54) = fVar1;
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x51);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x55);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x61);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x65);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x69);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)((longlong)param_2 + 0x6d);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x72);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x76);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x7a);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x7e);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x82);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)((longlong)param_2 + 0x86) * 0.05);
  *(float *)(param_1 + 0x78) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)((longlong)param_2 + 0x8a) * 0.05);
  *(float *)(param_1 + 0x7c) = fVar1;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x8e);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0x92);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x96);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 0x9a);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x9e);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 0xa2);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xa6);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0xaa);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xae);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)((longlong)param_2 + 0xb2);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xb6);
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  return 1;
}



// FUNCTION 14322e090 Init body=761 status=ok
// SIG undefined Init(void)

undefined8
DSP::ERUnitDual::Init
          (uint *param_1,longlong *param_2,float param_3,float *param_4,float *param_5,uint param_6,
          uint param_7,uint param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort uVar8;
  undefined2 uVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((param_6 - 1 < 0x40) && (param_7 - 1 < 0x40)) {
    fVar14 = ::_guard_xfg_dispatch_icall_nop(2.0,param_3 * 0.01);
    fVar16 = *param_4;
    if (*param_5 <= *param_4) {
      fVar16 = *param_5;
    }
    fVar17 = (float)param_8;
    fVar15 = param_4[(ulonglong)(param_6 - 1) * 2];
    if (param_4[(ulonglong)(param_6 - 1) * 2] <= param_5[(ulonglong)(param_7 - 1) * 2]) {
      fVar15 = param_5[(ulonglong)(param_7 - 1) * 2];
    }
    fVar16 = fVar16 * fVar14;
    uVar3 = (uint)(longlong)((fVar15 * fVar14 - fVar16) * 0.001 * fVar17);
    if (uVar3 < 4) {
      uVar3 = 4;
    }
    else if (0xffff < uVar3) goto LAB_14322e359;
    *param_1 = uVar3 & 0xfffc;
    lVar4 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)(uVar3 & 0xfffc) << 2);
    *(longlong *)(param_1 + 2) = lVar4;
    if (lVar4 == 0) {
      uVar5 = 0x34;
    }
    else {
      uVar8 = 0;
      *(undefined2 *)(param_1 + 0xc5) = 0;
      uVar3 = 0xffffffff;
      uVar10 = uVar8;
      uVar12 = uVar8;
      if (param_6 != 0) {
        do {
          uVar2 = *param_1;
          uVar6 = (uint)(longlong)
                        ((fVar14 * param_4[(ulonglong)uVar12 * 2] - fVar16) * 0.001 * fVar17) &
                  0xfffffffc;
          uVar11 = uVar2 - 4;
          if (uVar6 < uVar2) {
            uVar11 = uVar6;
          }
          if (uVar11 != uVar3) {
            uVar7 = (ulonglong)uVar8;
            *(short *)((longlong)param_1 + uVar7 * 2 + 0x214) = (short)uVar2 - (short)uVar11;
            if (uVar11 == 0) {
              *(undefined2 *)((longlong)param_1 + uVar7 * 2 + 0x214) = 0;
            }
            param_1[uVar7 + 5] = (uint)param_4[(ulonglong)uVar12 * 2 + 1];
            uVar1 = *(ushort *)((longlong)param_1 + uVar7 * 2 + 0x214);
            if (uVar10 < uVar1) {
              *(ushort *)(param_1 + 0xc5) = uVar8;
              uVar10 = uVar1;
            }
            uVar8 = uVar8 + 1;
          }
          uVar12 = uVar12 + 1;
          uVar3 = uVar11;
        } while (uVar12 < param_6);
      }
      *(ushort *)(param_1 + 0xc6) = uVar8;
      uVar7 = 0;
      uVar9 = 0;
      *(undefined2 *)((longlong)param_1 + 0x316) = 0;
      uVar10 = 0;
      uVar13 = 0;
      uVar3 = 0xffffffff;
      if (param_7 != 0) {
        do {
          uVar2 = *param_1;
          uVar6 = (uint)(longlong)((fVar14 * param_5[uVar13 * 2] - fVar16) * 0.001 * fVar17) &
                  0xfffffffc;
          uVar11 = uVar2 - 4;
          if (uVar6 < uVar2) {
            uVar11 = uVar6;
          }
          if (uVar11 != uVar3) {
            *(short *)((longlong)param_1 + uVar7 * 2 + 0x294) = (short)uVar2 - (short)uVar11;
            if (uVar11 == 0) {
              *(undefined2 *)((longlong)param_1 + uVar7 * 2 + 0x294) = 0;
            }
            param_1[uVar7 + 0x45] = (uint)param_5[uVar13 * 2 + 1];
            uVar12 = *(ushort *)((longlong)param_1 + uVar7 * 2 + 0x294);
            if (uVar10 < uVar12) {
              *(short *)((longlong)param_1 + 0x316) = (short)uVar7;
              uVar10 = uVar12;
            }
            uVar7 = (ulonglong)(ushort)((short)uVar7 + 1);
          }
          uVar9 = (undefined2)uVar7;
          uVar12 = (short)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar3 = uVar11;
        } while (uVar12 < param_7);
      }
      param_1[4] = 0;
      uVar5 = 1;
      *(undefined2 *)((longlong)param_1 + 0x31a) = uVar9;
    }
  }
  else {
LAB_14322e359:
    uVar5 = 2;
  }
  return uVar5;
}



// FUNCTION 14322e390 ProcessBuffer body=1134 status=ok
// SIG undefined ProcessBuffer(void)

ulonglong DSP::ERUnitDual::ProcessBuffer
                    (uint *param_1,undefined8 *param_2,float *param_3,float *param_4,uint param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  longlong lVar19;
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
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  uint uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ushort uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  uint local_res8;
  float *local_res18;
  float *local_res20;
  
  uVar11 = *(ushort *)((longlong)param_1 + 0x31a);
  uVar43 = (ulonglong)uVar11;
  lVar19 = *(longlong *)(param_1 + 2);
  uVar45 = (ushort)param_1[0xc6];
  if (uVar11 <= (ushort)param_1[0xc6]) {
    uVar45 = uVar11;
  }
  if (param_5 != 0) {
    uVar46 = *param_1;
    uVar37 = (ulonglong)*(ushort *)((longlong)param_1 + 0x316);
    uVar39 = param_1[4];
    local_res18 = param_3;
    local_res20 = param_4;
    do {
      uVar43 = (ulonglong)(ushort)param_1[0xc5];
      uVar42 = (uint)*(ushort *)((longlong)param_1 + uVar37 * 2 + 0x294);
      uVar40 = (uint)*(ushort *)((longlong)param_1 + uVar43 * 2 + 0x214);
      if (uVar46 - uVar40 < uVar46 - uVar42) {
        uVar42 = uVar40;
      }
      if (uVar46 - uVar39 < uVar46 - uVar42) {
        uVar42 = uVar39;
      }
      uVar40 = uVar46 - uVar42;
      if (param_5 < uVar46 - uVar42) {
        uVar40 = param_5;
      }
      if (3 < uVar40) {
        uVar43 = (ulonglong)(uVar40 >> 2);
        do {
          uVar35 = *param_2;
          uVar36 = param_2[1];
          uVar37 = 0;
          param_2 = param_2 + 2;
          fVar51 = 0.0;
          fVar52 = 0.0;
          fVar53 = 0.0;
          fVar54 = 0.0;
          fVar47 = 0.0;
          fVar48 = 0.0;
          fVar49 = 0.0;
          fVar50 = 0.0;
          puVar1 = (undefined8 *)(lVar19 + (ulonglong)param_1[4] * 4);
          *puVar1 = uVar35;
          puVar1[1] = uVar36;
          param_1[4] = param_1[4] + 4;
          if ((uVar45 & 0xfffc) != 0) {
            local_res8 = 2;
            do {
              fVar6 = (float)param_1[uVar37 + 5];
              uVar11 = *(ushort *)((longlong)param_1 + (ulonglong)(local_res8 - 1) * 2 + 0x214);
              uVar12 = *(ushort *)((longlong)param_1 + uVar37 * 2 + 0x214);
              uVar13 = *(ushort *)((longlong)param_1 + uVar37 * 2 + 0x294);
              uVar41 = (ulonglong)local_res8;
              pfVar2 = (float *)(lVar19 + (ulonglong)uVar12 * 4);
              uVar44 = (ulonglong)(local_res8 - 1);
              uVar14 = *(ushort *)((longlong)param_1 + uVar41 * 2 + 0x214);
              uVar15 = *(ushort *)((longlong)param_1 + uVar41 * 2 + 0x294);
              uVar38 = (ulonglong)(local_res8 + 1);
              fVar7 = (float)param_1[uVar44 + 5];
              uVar16 = *(ushort *)((longlong)param_1 + (ulonglong)(local_res8 + 1) * 2 + 0x214);
              uVar17 = *(ushort *)((longlong)param_1 + uVar44 * 2 + 0x294);
              uVar18 = *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x294);
              pfVar3 = (float *)(lVar19 + (ulonglong)uVar11 * 4);
              fVar8 = (float)param_1[uVar41 + 5];
              pfVar4 = (float *)(lVar19 + (ulonglong)uVar14 * 4);
              fVar9 = (float)param_1[uVar38 + 5];
              pfVar5 = (float *)(lVar19 + (ulonglong)uVar16 * 4);
              fVar10 = (float)param_1[uVar37 + 0x45];
              fVar51 = fVar51 + *pfVar2 * fVar6 + *pfVar3 * fVar7 + *pfVar4 * fVar8 +
                       *pfVar5 * fVar9;
              fVar52 = fVar52 + pfVar2[1] * fVar6 + pfVar3[1] * fVar7 + pfVar4[1] * fVar8 +
                       pfVar5[1] * fVar9;
              fVar53 = fVar53 + pfVar2[2] * fVar6 + pfVar3[2] * fVar7 + pfVar4[2] * fVar8 +
                       pfVar5[2] * fVar9;
              fVar54 = fVar54 + pfVar2[3] * fVar6 + pfVar3[3] * fVar7 + pfVar4[3] * fVar8 +
                       pfVar5[3] * fVar9;
              pfVar2 = (float *)(lVar19 + (ulonglong)uVar13 * 4);
              fVar9 = *pfVar2;
              fVar20 = pfVar2[1];
              fVar21 = pfVar2[2];
              fVar22 = pfVar2[3];
              fVar6 = (float)param_1[uVar44 + 0x45];
              pfVar2 = (float *)(lVar19 + (ulonglong)uVar17 * 4);
              fVar23 = *pfVar2;
              fVar24 = pfVar2[1];
              fVar25 = pfVar2[2];
              fVar26 = pfVar2[3];
              fVar7 = (float)param_1[uVar41 + 0x45];
              pfVar2 = (float *)(lVar19 + (ulonglong)uVar15 * 4);
              fVar27 = *pfVar2;
              fVar28 = pfVar2[1];
              fVar29 = pfVar2[2];
              fVar30 = pfVar2[3];
              fVar8 = (float)param_1[uVar38 + 0x45];
              *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x214) = uVar16 + 4;
              *(ushort *)((longlong)param_1 + uVar37 * 2 + 0x214) = uVar12 + 4;
              pfVar2 = (float *)(lVar19 + (ulonglong)uVar18 * 4);
              fVar31 = *pfVar2;
              fVar32 = pfVar2[1];
              fVar33 = pfVar2[2];
              fVar34 = pfVar2[3];
              *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x294) = uVar18 + 4;
              local_res8 = local_res8 + 4;
              *(ushort *)((longlong)param_1 + uVar37 * 2 + 0x294) = uVar13 + 4;
              uVar46 = (int)uVar37 + 4;
              uVar37 = (ulonglong)uVar46;
              *(ushort *)((longlong)param_1 + uVar44 * 2 + 0x214) = uVar11 + 4;
              *(ushort *)((longlong)param_1 + uVar41 * 2 + 0x214) = uVar14 + 4;
              *(ushort *)((longlong)param_1 + uVar44 * 2 + 0x294) = uVar17 + 4;
              *(ushort *)((longlong)param_1 + uVar41 * 2 + 0x294) = uVar15 + 4;
              fVar47 = fVar47 + fVar9 * fVar10 + fVar23 * fVar6 + fVar27 * fVar7 + fVar31 * fVar8;
              fVar48 = fVar48 + fVar20 * fVar10 + fVar24 * fVar6 + fVar28 * fVar7 + fVar32 * fVar8;
              fVar49 = fVar49 + fVar21 * fVar10 + fVar25 * fVar6 + fVar29 * fVar7 + fVar33 * fVar8;
              fVar50 = fVar50 + fVar22 * fVar10 + fVar26 * fVar6 + fVar30 * fVar7 + fVar34 * fVar8;
              param_3 = local_res18;
              param_4 = local_res20;
            } while (uVar46 < (uVar45 & 0xfffffffc));
          }
          uVar38 = uVar37;
          if ((uint)uVar37 < (uint)(ushort)param_1[0xc6]) {
            do {
              uVar46 = (int)uVar38 + 1;
              uVar11 = *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x214);
              fVar6 = (float)param_1[uVar38 + 5];
              pfVar2 = (float *)(lVar19 + (ulonglong)uVar11 * 4);
              fVar7 = *pfVar2;
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x214) = uVar11 + 4;
              fVar51 = fVar51 + fVar6 * fVar7;
              fVar52 = fVar52 + fVar6 * fVar8;
              fVar53 = fVar53 + fVar6 * fVar9;
              fVar54 = fVar54 + fVar6 * fVar10;
              uVar38 = (ulonglong)uVar46;
            } while (uVar46 < (ushort)param_1[0xc6]);
          }
          if ((uint)uVar37 < (uint)*(ushort *)((longlong)param_1 + 0x31a)) {
            do {
              uVar11 = *(ushort *)((longlong)param_1 + uVar37 * 2 + 0x294);
              fVar6 = (float)param_1[uVar37 + 0x45];
              pfVar2 = (float *)(lVar19 + (ulonglong)uVar11 * 4);
              fVar7 = *pfVar2;
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              *(ushort *)((longlong)param_1 + uVar37 * 2 + 0x294) = uVar11 + 4;
              uVar46 = (int)uVar37 + 1;
              uVar37 = (ulonglong)uVar46;
              fVar47 = fVar47 + fVar6 * fVar7;
              fVar48 = fVar48 + fVar6 * fVar8;
              fVar49 = fVar49 + fVar6 * fVar9;
              fVar50 = fVar50 + fVar6 * fVar10;
            } while (uVar46 < *(ushort *)((longlong)param_1 + 0x31a));
          }
          *param_3 = fVar51;
          param_3[1] = fVar52;
          param_3[2] = fVar53;
          param_3[3] = fVar54;
          param_3 = param_3 + 4;
          *param_4 = fVar47;
          param_4[1] = fVar48;
          param_4[2] = fVar49;
          param_4[3] = fVar50;
          param_4 = param_4 + 4;
          uVar43 = uVar43 - 1;
          local_res18 = param_3;
          local_res20 = param_4;
        } while (uVar43 != 0);
        uVar43 = (ulonglong)(ushort)param_1[0xc5];
        uVar46 = *param_1;
      }
      if (*(ushort *)((longlong)param_1 + uVar43 * 2 + 0x214) == uVar46) {
        *(undefined2 *)((longlong)param_1 + uVar43 * 2 + 0x214) = 0;
        *(ushort *)(param_1 + 0xc5) = (ushort)((short)param_1[0xc5] + 1U) % (ushort)param_1[0xc6];
      }
      uVar37 = (ulonglong)*(ushort *)((longlong)param_1 + 0x316);
      uVar11 = *(ushort *)((longlong)param_1 + uVar37 * 2 + 0x294);
      uVar43 = (ulonglong)uVar11;
      if ((uint)uVar11 == *param_1) {
        *(undefined2 *)((longlong)param_1 + uVar37 * 2 + 0x294) = 0;
        uVar37 = (ulonglong)(ushort)(*(short *)((longlong)param_1 + 0x316) + 1);
        uVar43 = uVar37 / *(ushort *)((longlong)param_1 + 0x31a);
        uVar37 = uVar37 % (ulonglong)*(ushort *)((longlong)param_1 + 0x31a);
        *(short *)((longlong)param_1 + 0x316) = (short)uVar37;
      }
      uVar39 = param_1[4];
      uVar46 = *param_1;
      if (uVar39 == uVar46) {
        param_1[4] = 0;
        uVar39 = 0;
      }
      param_5 = param_5 - uVar40;
    } while (param_5 != 0);
  }
  return uVar43;
}



// FUNCTION 14322e800 Reset body=27 status=ok
// SIG undefined Reset(void)

void DSP::ERUnitDual::Reset(uint *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),0,(ulonglong)*param_1 << 2);
    return;
  }
  return;
}



// FUNCTION 14322e820 Init body=100 status=ok
// SIG undefined Init(void)

undefined8 DSP::AllpassFilter::Init(uint *param_1,longlong *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  *param_1 = uVar1;
  lVar2 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)uVar1 << 3);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  param_1[5] = param_4;
  param_1[4] = 0;
  return 1;
}



// FUNCTION 14322e890 ProcessBuffer body=475 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::AllpassFilter::ProcessBuffer(int *param_1,float *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar6 = param_1[4];
  pfVar7 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)(iVar6 * 2) * 4);
  uVar2 = *param_1 - iVar6;
  if (uVar2 <= param_3) {
    do {
      uVar4 = 0;
      uVar3 = uVar2;
      if (param_3 < uVar2) {
        uVar3 = param_3;
      }
      if (3 < uVar3) {
        uVar4 = (uVar3 - 4 >> 2) + 1;
        uVar5 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          fVar9 = *pfVar7;
          fVar8 = *param_2;
          fVar10 = param_2[1];
          *pfVar7 = fVar8;
          fVar9 = (fVar8 - pfVar7[1]) * (float)param_1[5] + fVar9;
          pfVar7[1] = fVar9;
          fVar8 = pfVar7[2];
          pfVar7[2] = fVar10;
          fVar1 = pfVar7[3];
          *param_2 = fVar9;
          fVar9 = param_2[2];
          fVar8 = (fVar10 - fVar1) * (float)param_1[5] + fVar8;
          pfVar7[3] = fVar8;
          fVar10 = pfVar7[4];
          pfVar7[4] = fVar9;
          fVar1 = pfVar7[5];
          param_2[1] = fVar8;
          fVar8 = param_2[3];
          fVar10 = (fVar9 - fVar1) * (float)param_1[5] + fVar10;
          pfVar7[5] = fVar10;
          fVar9 = pfVar7[6];
          pfVar7[6] = fVar8;
          fVar1 = pfVar7[7];
          param_2[2] = fVar10;
          fVar9 = (fVar8 - fVar1) * (float)param_1[5] + fVar9;
          pfVar7[7] = fVar9;
          pfVar7 = pfVar7 + 8;
          param_2[3] = fVar9;
          param_2 = param_2 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar4 < uVar3) {
        uVar5 = (ulonglong)(uVar3 - uVar4);
        do {
          fVar9 = *param_2;
          fVar8 = *pfVar7;
          *pfVar7 = fVar9;
          fVar8 = (fVar9 - pfVar7[1]) * (float)param_1[5] + fVar8;
          pfVar7[1] = fVar8;
          pfVar7 = pfVar7 + 2;
          *param_2 = fVar8;
          param_2 = param_2 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      param_1[4] = param_1[4] + uVar3;
      iVar6 = param_1[4];
      if (iVar6 == *param_1) {
        pfVar7 = *(float **)(param_1 + 2);
        iVar6 = 0;
        param_1[4] = 0;
      }
      uVar2 = *param_1 - iVar6;
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
    return;
  }
  uVar2 = param_3;
  if (param_3 != 0) {
    do {
      fVar9 = *param_2;
      fVar8 = *pfVar7;
      *pfVar7 = fVar9;
      fVar8 = (fVar9 - pfVar7[1]) * (float)param_1[5] + fVar8;
      pfVar7[1] = fVar8;
      pfVar7 = pfVar7 + 2;
      *param_2 = fVar8;
      param_2 = param_2 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    iVar6 = param_1[4];
  }
  param_1[4] = iVar6 + param_3;
  return;
}



// FUNCTION 14322ea70 Reset body=27 status=ok
// SIG undefined Reset(void)

void DSP::AllpassFilter::Reset(uint *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),0,(ulonglong)*param_1 << 3);
    return;
  }
  return;
}



// FUNCTION 14322ea90 Init body=83 status=ok
// SIG undefined Init(void)

undefined8 DSP::DelayLine::Init(uint *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 4;
  if (3 < param_3) {
    uVar1 = param_3;
  }
  *param_1 = uVar1;
  lVar2 = (**(code **)(*param_2 + 8))(param_2,(uVar1 + 3 & 0xfffffffc) << 2);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  param_1[4] = 0;
  return 1;
}



// FUNCTION 14322eaf0 ProcessBuffer body=205 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::DelayLine::ProcessBuffer
               (uint *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar6;
  
  uVar7 = (ulonglong)param_1[4];
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 2) + uVar7 * 4);
  if (param_4 != 0) {
    uVar6 = *param_1;
    do {
      uVar5 = uVar6 - (int)uVar7;
      if (param_4 < uVar5) {
        uVar5 = param_4;
      }
      uVar7 = (ulonglong)(uVar5 >> 2);
      uVar9 = (ulonglong)(uVar5 & 3);
      if (uVar5 >> 2 != 0) {
        do {
          uVar2 = puVar10[1];
          uVar3 = *param_2;
          uVar4 = param_2[1];
          param_2 = param_2 + 2;
          *param_3 = *puVar10;
          param_3[1] = uVar2;
          param_3 = param_3 + 2;
          *puVar10 = uVar3;
          puVar10[1] = uVar4;
          puVar10 = puVar10 + 2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if ((uVar5 & 3) != 0) {
        do {
          uVar1 = *(undefined4 *)param_2;
          param_2 = (undefined8 *)((longlong)param_2 + 4);
          *(undefined4 *)param_3 = *(undefined4 *)puVar10;
          param_3 = (undefined8 *)((longlong)param_3 + 4);
          *(undefined4 *)puVar10 = uVar1;
          puVar10 = (undefined8 *)((longlong)puVar10 + 4);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar6 = *param_1;
      uVar8 = param_1[4] + uVar5;
      param_1[4] = uVar8;
      uVar7 = (ulonglong)uVar8;
      if (uVar8 == uVar6) {
        puVar10 = *(undefined8 **)(param_1 + 2);
        param_1[4] = 0;
        uVar7 = 0;
      }
      param_4 = param_4 - uVar5;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 14322ebc0 ProcessBuffer body=182 status=ok
// SIG undefined ProcessBuffer(void)

void DSP::DelayLine::ProcessBuffer(uint *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar6;
  
  uVar7 = (ulonglong)param_1[4];
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 2) + uVar7 * 4);
  if (param_3 != 0) {
    uVar6 = *param_1;
    do {
      uVar5 = uVar6 - (int)uVar7;
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      uVar7 = (ulonglong)(uVar5 >> 2);
      uVar9 = (ulonglong)(uVar5 & 3);
      if (uVar5 >> 2 != 0) {
        do {
          uVar2 = puVar10[1];
          uVar3 = *param_2;
          uVar4 = param_2[1];
          *param_2 = *puVar10;
          param_2[1] = uVar2;
          param_2 = param_2 + 2;
          *puVar10 = uVar3;
          puVar10[1] = uVar4;
          puVar10 = puVar10 + 2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if ((uVar5 & 3) != 0) {
        do {
          uVar1 = *(undefined4 *)param_2;
          *(undefined4 *)param_2 = *(undefined4 *)puVar10;
          param_2 = (undefined8 *)((longlong)param_2 + 4);
          *(undefined4 *)puVar10 = uVar1;
          puVar10 = (undefined8 *)((longlong)puVar10 + 4);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar6 = *param_1;
      uVar8 = param_1[4] + uVar5;
      param_1[4] = uVar8;
      uVar7 = (ulonglong)uVar8;
      if (uVar8 == uVar6) {
        puVar10 = *(undefined8 **)(param_1 + 2);
        param_1[4] = 0;
        uVar7 = 0;
      }
      param_3 = param_3 - uVar5;
    } while (param_3 != 0);
  }
  return;
}


