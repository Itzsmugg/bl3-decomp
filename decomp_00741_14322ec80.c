// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14322ec80 Reset body=27 status=ok
// SIG undefined Reset(void)

void DSP::DelayLine::Reset(int *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),0,(ulonglong)(uint)(*param_1 << 2));
    return;
  }
  return;
}



// FUNCTION 14322eca0 ChangeDecay body=163 status=ok
// SIG undefined ChangeDecay(void)

void DSP::FDN4::ChangeDecay
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ComputeMaxStableHFRatio(param_1[0x12]);
  FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x18,param_2,uVar1,param_4,*param_1);
  FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x1b,param_2,uVar1,param_4,param_1[6]);
  FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x1e,param_2,uVar1,param_4,param_1[0xc]);
  FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x21,param_2,uVar1,param_4,param_1[0x12]);
  return;
}



// FUNCTION 14322ed50 ComputeFDNLPCoefs body=190 status=ok
// SIG undefined ComputeFDNLPCoefs(void)

void FDNLPFilter::ComputeFDNLPCoefs
               (longlong param_1,float param_2,float param_3,uint param_4,uint param_5)

{
  double _X;
  double dVar1;
  
  _X = ::_guard_xfg_dispatch_icall_nop
                 (10.0,((double)param_5 * -3.0) / ((double)param_2 * (double)param_4));
  dVar1 = ::_guard_xfg_dispatch_icall_nop(_X);
  dVar1 = dVar1 * 0.5756462732485116 * (1.0 - (double)param_3 * (double)param_3);
  if (0.999 <= dVar1) {
    dVar1 = 0.999;
  }
  *(float *)(param_1 + 4) = (float)((1.0 - dVar1) * _X);
  *(float *)(param_1 + 8) = (float)-dVar1;
  return;
}



// FUNCTION 14322ee10 ComputeMaxStableHFRatio body=160 status=ok
// SIG undefined ComputeMaxStableHFRatio(void)

void DSP::FDN4::ComputeMaxStableHFRatio(uint param_1,float param_2,float param_3,uint param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  
  dVar1 = 1.0 - (double)param_3 * (double)param_3;
  dVar3 = ::_guard_xfg_dispatch_icall_nop
                    (10.0,((double)param_1 * -3.0) / ((double)param_2 * (double)param_4));
  dVar3 = ::_guard_xfg_dispatch_icall_nop(dVar3);
  auVar4._0_8_ = dVar3 * 0.5756462732485116;
  auVar4._8_8_ = extraout_XMM0_Qb;
  if (1.0 < auVar4._0_8_ * dVar1) {
    dVar1 = 1.0 / auVar4._0_8_;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = 1.0 - dVar1;
  sqrtpd(auVar4,auVar2);
  return;
}



// FUNCTION 14322eeb0 Init body=308 status=ok
// SIG undefined Init(void)

undefined8
DSP::FDN4::Init(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = ComputeMaxStableHFRatio(param_3[3],param_4,param_5,param_6);
  uVar1 = DelayLine::Init(param_1,param_2,*param_3);
  if ((int)uVar1 == 1) {
    uVar1 = DelayLine::Init(param_1 + 0x18,param_2,param_3[1]);
    if ((int)uVar1 == 1) {
      uVar1 = DelayLine::Init(param_1 + 0x30,param_2,param_3[2]);
      if ((int)uVar1 == 1) {
        uVar1 = DelayLine::Init(param_1 + 0x48,param_2,param_3[3]);
        if ((int)uVar1 == 1) {
          FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x60,param_4,uVar2,param_6,*param_3);
          FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x6c,param_4,uVar2,param_6,param_3[1]);
          FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x78,param_4,uVar2,param_6,param_3[2]);
          FDNLPFilter::ComputeFDNLPCoefs(param_1 + 0x84,param_4,uVar2,param_6,param_3[3]);
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 14322eff0 ProcessBufferAccum body=1356 status=ok
// SIG undefined ProcessBufferAccum(void)

void DSP::FDN4::ProcessBufferAccum
               (int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
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
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  fVar33 = (float)param_1[0x18];
  fVar34 = (float)param_1[0x1b];
  iVar10 = param_1[0x16];
  fVar35 = (float)param_1[0x1e];
  fVar5 = (float)param_1[0x19];
  fVar6 = (float)param_1[0x1f];
  fVar13 = -(float)param_1[0x1a];
  fVar36 = (float)param_1[0x21];
  fVar7 = (float)param_1[0x1c];
  fVar14 = -(float)param_1[0x1d];
  fVar8 = (float)param_1[0x22];
  fVar15 = -(float)param_1[0x23];
  fVar16 = -(float)param_1[0x20];
  local_a8 = fVar33;
  fStack_a4 = fVar34;
  fStack_a0 = fVar35;
  fStack_9c = fVar36;
  do {
    uVar11 = *param_1 - param_1[4];
    if (param_6 < (uint)(*param_1 - param_1[4])) {
      uVar11 = param_6;
    }
    uVar9 = param_1[6] - param_1[10];
    if (uVar11 < (uint)(param_1[6] - param_1[10])) {
      uVar9 = uVar11;
    }
    uVar11 = param_1[0xc] - param_1[0x10];
    if (uVar9 < (uint)(param_1[0xc] - param_1[0x10])) {
      uVar11 = uVar9;
    }
    uVar9 = param_1[0x12] - iVar10;
    if (uVar11 < (uint)(param_1[0x12] - iVar10)) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 >> 2;
    if (uVar9 >> 2 != 0) {
      uVar12 = (ulonglong)uVar11;
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        pfVar2 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        pfVar3 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        pfVar4 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        fVar29 = *pfVar1 * fVar5 + fVar13 * fVar33;
        fVar30 = *pfVar2 * fVar7 + fVar14 * fVar34;
        fVar31 = *pfVar3 * fVar6 + fVar16 * fVar35;
        fVar32 = *pfVar4 * fVar8 + fVar15 * fVar36;
        fVar25 = pfVar1[1] * fVar5 + fVar29 * fVar13;
        fVar26 = pfVar2[1] * fVar7 + fVar30 * fVar14;
        fVar27 = pfVar3[1] * fVar6 + fVar31 * fVar16;
        fVar28 = pfVar4[1] * fVar8 + fVar32 * fVar15;
        fVar17 = pfVar1[2] * fVar5 + fVar25 * fVar13;
        fVar18 = pfVar2[2] * fVar7 + fVar26 * fVar14;
        fVar19 = pfVar3[2] * fVar6 + fVar27 * fVar16;
        fVar20 = pfVar4[2] * fVar8 + fVar28 * fVar15;
        fVar33 = pfVar1[3] * fVar5 + fVar17 * fVar13;
        fVar34 = pfVar2[3] * fVar7 + fVar18 * fVar14;
        fVar35 = pfVar3[3] * fVar6 + fVar19 * fVar16;
        fVar36 = pfVar4[3] * fVar8 + fVar20 * fVar15;
        *param_3 = (fVar29 + fVar31 + *param_3) - (fVar30 + fVar32);
        param_3[1] = (fVar25 + fVar27 + param_3[1]) - (fVar26 + fVar28);
        param_3[2] = (fVar17 + fVar19 + param_3[2]) - (fVar18 + fVar20);
        param_3[3] = (fVar33 + fVar35 + param_3[3]) - (fVar34 + fVar36);
        param_3 = param_3 + 4;
        *param_4 = (*param_4 + fVar29 + fVar30) - (fVar31 + fVar32);
        param_4[1] = (param_4[1] + fVar25 + fVar26) - (fVar27 + fVar28);
        param_4[2] = (param_4[2] + fVar17 + fVar18) - (fVar19 + fVar20);
        param_4[3] = (param_4[3] + fVar33 + fVar34) - (fVar35 + fVar36);
        param_4 = param_4 + 4;
        *param_5 = (fVar29 + fVar32 + *param_5) - (fVar30 + fVar31);
        param_5[1] = (fVar25 + fVar28 + param_5[1]) - (fVar26 + fVar27);
        param_5[2] = (fVar17 + fVar20 + param_5[2]) - (fVar18 + fVar19);
        param_5[3] = (fVar33 + fVar36 + param_5[3]) - (fVar34 + fVar35);
        param_5 = param_5 + 4;
        fVar21 = *param_2;
        pfVar1 = param_2 + 1;
        pfVar2 = param_2 + 2;
        pfVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        fVar21 = (fVar29 + fVar30 + fVar31 + fVar32) * -0.5 + fVar21;
        fVar22 = (fVar25 + fVar26 + fVar27 + fVar28) * -0.5 + *pfVar1;
        fVar23 = (fVar17 + fVar18 + fVar19 + fVar20) * -0.5 + *pfVar2;
        fVar24 = (fVar33 + fVar34 + fVar35 + fVar36) * -0.5 + *pfVar3;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        *pfVar1 = fVar21 + fVar30;
        pfVar1[1] = fVar22 + fVar26;
        pfVar1[2] = fVar23 + fVar18;
        pfVar1[3] = fVar24 + fVar34;
        param_1[4] = param_1[4] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        *pfVar1 = fVar21 + fVar31;
        pfVar1[1] = fVar22 + fVar27;
        pfVar1[2] = fVar23 + fVar19;
        pfVar1[3] = fVar24 + fVar35;
        param_1[10] = param_1[10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        *pfVar1 = fVar21 + fVar32;
        pfVar1[1] = fVar22 + fVar28;
        pfVar1[2] = fVar23 + fVar20;
        pfVar1[3] = fVar24 + fVar36;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        *pfVar1 = fVar21 + fVar29;
        pfVar1[1] = fVar22 + fVar25;
        pfVar1[2] = fVar23 + fVar17;
        pfVar1[3] = fVar24 + fVar33;
        param_1[0x16] = param_1[0x16] + 4;
        uVar12 = uVar12 - 1;
        local_a8 = fVar33;
        fStack_a4 = fVar34;
        fStack_a0 = fVar35;
        fStack_9c = fVar36;
      } while (uVar12 != 0);
    }
    if (uVar11 * 4 < uVar9) {
      uVar12 = (ulonglong)(uVar9 + uVar11 * -4);
      do {
        fVar33 = *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) * fVar5 +
                 fVar13 * fVar33;
        fVar34 = *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) * fVar7 +
                 fVar14 * fVar34;
        fVar35 = *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) *
                 fVar6 + fVar16 * fVar35;
        fVar36 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) *
                 fVar8 + fVar15 * fVar36;
        *param_3 = fVar33 * 1.0 + fVar35 * 1.0 + fVar34 * -1.0 + fVar36 * -1.0 + *param_3;
        param_3 = param_3 + 1;
        *param_4 = fVar33 * 1.0 + fVar35 * -1.0 + fVar34 * 1.0 + fVar36 * -1.0 + *param_4;
        param_4 = param_4 + 1;
        *param_5 = fVar33 * 1.0 + fVar35 * -1.0 + fVar34 * -1.0 + fVar36 * 1.0 + *param_5;
        param_5 = param_5 + 1;
        fVar17 = fVar33 * -0.5 + fVar35 * -0.5 + fVar34 * -0.5 + fVar36 * -0.5;
        fVar21 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) =
             fVar34 + fVar17 + fVar21;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) =
             fVar35 + fVar17 + fVar21;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) =
             fVar36 + fVar17 + fVar21;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) =
             fVar33 + fVar17 + fVar21;
        param_1[0x16] = param_1[0x16] + 1;
        uVar12 = uVar12 - 1;
        local_a8 = fVar33;
        fStack_a4 = fVar34;
        fStack_a0 = fVar35;
        fStack_9c = fVar36;
      } while (uVar12 != 0);
    }
    if (param_1[4] == *param_1) {
      param_1[4] = 0;
    }
    if (param_1[10] == param_1[6]) {
      param_1[10] = 0;
    }
    if (param_1[0x10] == param_1[0xc]) {
      param_1[0x10] = 0;
    }
    iVar10 = param_1[0x16];
    if (iVar10 == param_1[0x12]) {
      param_1[0x16] = 0;
      iVar10 = 0;
    }
    param_6 = param_6 - uVar9;
  } while (param_6 != 0);
  param_1[0x18] = (int)local_a8;
  param_1[0x1b] = (int)fStack_a4;
  param_1[0x1e] = (int)fStack_a0;
  param_1[0x21] = (int)fStack_9c;
  return;
}



// FUNCTION 14322f540 ProcessBufferAccum body=1261 status=ok
// SIG undefined ProcessBufferAccum(void)

void DSP::FDN4::ProcessBufferAccum
               (int *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
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
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar33 = (float)param_1[0x18];
  fVar34 = (float)param_1[0x1b];
  iVar11 = param_1[0x16];
  fVar35 = (float)param_1[0x1e];
  fVar5 = (float)param_1[0x19];
  fVar6 = (float)param_1[0x1f];
  fVar13 = -(float)param_1[0x1a];
  fVar36 = (float)param_1[0x21];
  fVar7 = (float)param_1[0x1c];
  fVar14 = -(float)param_1[0x1d];
  fVar8 = (float)param_1[0x22];
  fVar15 = -(float)param_1[0x23];
  fVar16 = -(float)param_1[0x20];
  local_98 = fVar33;
  fStack_94 = fVar34;
  fStack_90 = fVar35;
  fStack_8c = fVar36;
  do {
    uVar12 = *param_1 - param_1[4];
    if (param_5 < (uint)(*param_1 - param_1[4])) {
      uVar12 = param_5;
    }
    uVar9 = param_1[6] - param_1[10];
    if (uVar12 < (uint)(param_1[6] - param_1[10])) {
      uVar9 = uVar12;
    }
    uVar12 = param_1[0xc] - param_1[0x10];
    if (uVar9 < (uint)(param_1[0xc] - param_1[0x10])) {
      uVar12 = uVar9;
    }
    uVar9 = param_1[0x12] - iVar11;
    if (uVar12 < (uint)(param_1[0x12] - iVar11)) {
      uVar9 = uVar12;
    }
    uVar12 = uVar9 >> 2;
    if (uVar9 >> 2 != 0) {
      uVar10 = (ulonglong)uVar12;
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        pfVar2 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        pfVar3 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        pfVar4 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        fVar29 = *pfVar1 * fVar5 + fVar13 * fVar33;
        fVar30 = *pfVar2 * fVar7 + fVar14 * fVar34;
        fVar31 = *pfVar3 * fVar6 + fVar16 * fVar35;
        fVar32 = *pfVar4 * fVar8 + fVar15 * fVar36;
        fVar25 = pfVar1[1] * fVar5 + fVar29 * fVar13;
        fVar26 = pfVar2[1] * fVar7 + fVar30 * fVar14;
        fVar27 = pfVar3[1] * fVar6 + fVar31 * fVar16;
        fVar28 = pfVar4[1] * fVar8 + fVar32 * fVar15;
        fVar17 = pfVar1[2] * fVar5 + fVar25 * fVar13;
        fVar18 = pfVar2[2] * fVar7 + fVar26 * fVar14;
        fVar19 = pfVar3[2] * fVar6 + fVar27 * fVar16;
        fVar20 = pfVar4[2] * fVar8 + fVar28 * fVar15;
        fVar33 = pfVar1[3] * fVar5 + fVar17 * fVar13;
        fVar34 = pfVar2[3] * fVar7 + fVar18 * fVar14;
        fVar35 = pfVar3[3] * fVar6 + fVar19 * fVar16;
        fVar36 = pfVar4[3] * fVar8 + fVar20 * fVar15;
        *param_3 = (fVar29 + fVar31 + *param_3) - (fVar30 + fVar32);
        param_3[1] = (fVar25 + fVar27 + param_3[1]) - (fVar26 + fVar28);
        param_3[2] = (fVar17 + fVar19 + param_3[2]) - (fVar18 + fVar20);
        param_3[3] = (fVar33 + fVar35 + param_3[3]) - (fVar34 + fVar36);
        param_3 = param_3 + 4;
        *param_4 = (*param_4 + fVar29 + fVar30) - (fVar31 + fVar32);
        param_4[1] = (param_4[1] + fVar25 + fVar26) - (fVar27 + fVar28);
        param_4[2] = (param_4[2] + fVar17 + fVar18) - (fVar19 + fVar20);
        param_4[3] = (param_4[3] + fVar33 + fVar34) - (fVar35 + fVar36);
        param_4 = param_4 + 4;
        fVar21 = *param_2;
        pfVar1 = param_2 + 1;
        pfVar2 = param_2 + 2;
        pfVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        fVar21 = (fVar29 + fVar30 + fVar31 + fVar32) * -0.5 + fVar21;
        fVar22 = (fVar25 + fVar26 + fVar27 + fVar28) * -0.5 + *pfVar1;
        fVar23 = (fVar17 + fVar18 + fVar19 + fVar20) * -0.5 + *pfVar2;
        fVar24 = (fVar33 + fVar34 + fVar35 + fVar36) * -0.5 + *pfVar3;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        *pfVar1 = fVar21 + fVar30;
        pfVar1[1] = fVar22 + fVar26;
        pfVar1[2] = fVar23 + fVar18;
        pfVar1[3] = fVar24 + fVar34;
        param_1[4] = param_1[4] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        *pfVar1 = fVar21 + fVar31;
        pfVar1[1] = fVar22 + fVar27;
        pfVar1[2] = fVar23 + fVar19;
        pfVar1[3] = fVar24 + fVar35;
        param_1[10] = param_1[10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        *pfVar1 = fVar21 + fVar32;
        pfVar1[1] = fVar22 + fVar28;
        pfVar1[2] = fVar23 + fVar20;
        pfVar1[3] = fVar24 + fVar36;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        *pfVar1 = fVar21 + fVar29;
        pfVar1[1] = fVar22 + fVar25;
        pfVar1[2] = fVar23 + fVar17;
        pfVar1[3] = fVar24 + fVar33;
        param_1[0x16] = param_1[0x16] + 4;
        uVar10 = uVar10 - 1;
        local_98 = fVar33;
        fStack_94 = fVar34;
        fStack_90 = fVar35;
        fStack_8c = fVar36;
      } while (uVar10 != 0);
    }
    if (uVar12 * 4 < uVar9) {
      uVar10 = (ulonglong)(uVar9 + uVar12 * -4);
      do {
        fVar33 = *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) * fVar5 +
                 fVar13 * fVar33;
        fVar34 = *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) * fVar7 +
                 fVar14 * fVar34;
        fVar35 = *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) *
                 fVar6 + fVar16 * fVar35;
        fVar36 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) *
                 fVar8 + fVar15 * fVar36;
        *param_3 = fVar33 * 1.0 + fVar35 * 1.0 + fVar34 * -1.0 + fVar36 * -1.0 + *param_3;
        param_3 = param_3 + 1;
        *param_4 = fVar33 * 1.0 + fVar35 * -1.0 + fVar34 * 1.0 + fVar36 * -1.0 + *param_4;
        param_4 = param_4 + 1;
        fVar17 = fVar33 * -0.5 + fVar35 * -0.5 + fVar34 * -0.5 + fVar36 * -0.5;
        fVar21 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) =
             fVar34 + fVar17 + fVar21;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) =
             fVar35 + fVar17 + fVar21;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) =
             fVar36 + fVar17 + fVar21;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) =
             fVar33 + fVar17 + fVar21;
        param_1[0x16] = param_1[0x16] + 1;
        uVar10 = uVar10 - 1;
        local_98 = fVar33;
        fStack_94 = fVar34;
        fStack_90 = fVar35;
        fStack_8c = fVar36;
      } while (uVar10 != 0);
    }
    if (param_1[4] == *param_1) {
      param_1[4] = 0;
    }
    if (param_1[10] == param_1[6]) {
      param_1[10] = 0;
    }
    if (param_1[0x10] == param_1[0xc]) {
      param_1[0x10] = 0;
    }
    iVar11 = param_1[0x16];
    if (iVar11 == param_1[0x12]) {
      param_1[0x16] = 0;
      iVar11 = 0;
    }
    param_5 = param_5 - uVar9;
  } while (param_5 != 0);
  param_1[0x18] = (int)local_98;
  param_1[0x1b] = (int)fStack_94;
  param_1[0x1e] = (int)fStack_90;
  param_1[0x21] = (int)fStack_8c;
  return;
}



// FUNCTION 14322fa30 ProcessBufferAccum body=1174 status=ok
// SIG undefined ProcessBufferAccum(void)

void DSP::FDN4::ProcessBufferAccum(int *param_1,float *param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
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
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar33 = (float)param_1[0x18];
  fVar34 = (float)param_1[0x1b];
  iVar11 = param_1[0x16];
  fVar35 = (float)param_1[0x1e];
  fVar5 = (float)param_1[0x19];
  fVar6 = (float)param_1[0x1f];
  fVar13 = -(float)param_1[0x1a];
  fVar36 = (float)param_1[0x21];
  fVar7 = (float)param_1[0x1c];
  fVar14 = -(float)param_1[0x1d];
  fVar8 = (float)param_1[0x22];
  fVar15 = -(float)param_1[0x23];
  fVar16 = -(float)param_1[0x20];
  local_88 = fVar33;
  fStack_84 = fVar34;
  fStack_80 = fVar35;
  fStack_7c = fVar36;
  do {
    uVar12 = *param_1 - param_1[4];
    if (param_4 < (uint)(*param_1 - param_1[4])) {
      uVar12 = param_4;
    }
    uVar9 = param_1[6] - param_1[10];
    if (uVar12 < (uint)(param_1[6] - param_1[10])) {
      uVar9 = uVar12;
    }
    uVar12 = param_1[0xc] - param_1[0x10];
    if (uVar9 < (uint)(param_1[0xc] - param_1[0x10])) {
      uVar12 = uVar9;
    }
    uVar9 = param_1[0x12] - iVar11;
    if (uVar12 < (uint)(param_1[0x12] - iVar11)) {
      uVar9 = uVar12;
    }
    uVar12 = uVar9 >> 2;
    if (uVar9 >> 2 != 0) {
      uVar10 = (ulonglong)uVar12;
      do {
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        pfVar2 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        pfVar3 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        pfVar4 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        fVar29 = *pfVar1 * fVar5 + fVar13 * fVar33;
        fVar30 = *pfVar2 * fVar7 + fVar14 * fVar34;
        fVar31 = *pfVar3 * fVar6 + fVar16 * fVar35;
        fVar32 = *pfVar4 * fVar8 + fVar15 * fVar36;
        fVar25 = pfVar1[1] * fVar5 + fVar29 * fVar13;
        fVar26 = pfVar2[1] * fVar7 + fVar30 * fVar14;
        fVar27 = pfVar3[1] * fVar6 + fVar31 * fVar16;
        fVar28 = pfVar4[1] * fVar8 + fVar32 * fVar15;
        fVar17 = pfVar1[2] * fVar5 + fVar25 * fVar13;
        fVar19 = pfVar2[2] * fVar7 + fVar26 * fVar14;
        fVar21 = pfVar3[2] * fVar6 + fVar27 * fVar16;
        fVar23 = pfVar4[2] * fVar8 + fVar28 * fVar15;
        fVar33 = pfVar1[3] * fVar5 + fVar17 * fVar13;
        fVar34 = pfVar2[3] * fVar7 + fVar19 * fVar14;
        fVar35 = pfVar3[3] * fVar6 + fVar21 * fVar16;
        fVar36 = pfVar4[3] * fVar8 + fVar23 * fVar15;
        *param_3 = (fVar29 + fVar31 + *param_3) - (fVar30 + fVar32);
        param_3[1] = (fVar25 + fVar27 + param_3[1]) - (fVar26 + fVar28);
        param_3[2] = (fVar17 + fVar21 + param_3[2]) - (fVar19 + fVar23);
        param_3[3] = (fVar33 + fVar35 + param_3[3]) - (fVar34 + fVar36);
        param_3 = param_3 + 4;
        fVar18 = *param_2;
        pfVar1 = param_2 + 1;
        pfVar2 = param_2 + 2;
        pfVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        fVar18 = (fVar29 + fVar30 + fVar31 + fVar32) * -0.5 + fVar18;
        fVar20 = (fVar25 + fVar26 + fVar27 + fVar28) * -0.5 + *pfVar1;
        fVar22 = (fVar17 + fVar19 + fVar21 + fVar23) * -0.5 + *pfVar2;
        fVar24 = (fVar33 + fVar34 + fVar35 + fVar36) * -0.5 + *pfVar3;
        pfVar1 = (float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4);
        *pfVar1 = fVar18 + fVar30;
        pfVar1[1] = fVar20 + fVar26;
        pfVar1[2] = fVar22 + fVar19;
        pfVar1[3] = fVar24 + fVar34;
        param_1[4] = param_1[4] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4);
        *pfVar1 = fVar18 + fVar31;
        pfVar1[1] = fVar20 + fVar27;
        pfVar1[2] = fVar22 + fVar21;
        pfVar1[3] = fVar24 + fVar35;
        param_1[10] = param_1[10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4);
        *pfVar1 = fVar18 + fVar32;
        pfVar1[1] = fVar20 + fVar28;
        pfVar1[2] = fVar22 + fVar23;
        pfVar1[3] = fVar24 + fVar36;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar1 = (float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4);
        *pfVar1 = fVar18 + fVar29;
        pfVar1[1] = fVar20 + fVar25;
        pfVar1[2] = fVar22 + fVar17;
        pfVar1[3] = fVar24 + fVar33;
        param_1[0x16] = param_1[0x16] + 4;
        uVar10 = uVar10 - 1;
        local_88 = fVar33;
        fStack_84 = fVar34;
        fStack_80 = fVar35;
        fStack_7c = fVar36;
      } while (uVar10 != 0);
    }
    if (uVar12 * 4 < uVar9) {
      uVar10 = (ulonglong)(uVar9 + uVar12 * -4);
      do {
        fVar33 = *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) * fVar5 +
                 fVar13 * fVar33;
        fVar34 = *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) * fVar7 +
                 fVar14 * fVar34;
        fVar35 = *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) *
                 fVar6 + fVar16 * fVar35;
        fVar36 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) *
                 fVar8 + fVar15 * fVar36;
        *param_3 = fVar33 * 1.0 + fVar35 * 1.0 + fVar34 * -1.0 + fVar36 * -1.0 + *param_3;
        param_3 = param_3 + 1;
        fVar17 = fVar33 * -0.5 + fVar35 * -0.5 + fVar34 * -0.5 + fVar36 * -0.5;
        fVar18 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)param_1[4] * 4) =
             fVar34 + fVar17 + fVar18;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)param_1[10] * 4) =
             fVar35 + fVar17 + fVar18;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)(uint)param_1[0x10] * 4) =
             fVar36 + fVar17 + fVar18;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x16] * 4) =
             fVar33 + fVar17 + fVar18;
        param_1[0x16] = param_1[0x16] + 1;
        uVar10 = uVar10 - 1;
        local_88 = fVar33;
        fStack_84 = fVar34;
        fStack_80 = fVar35;
        fStack_7c = fVar36;
      } while (uVar10 != 0);
    }
    if (param_1[4] == *param_1) {
      param_1[4] = 0;
    }
    if (param_1[10] == param_1[6]) {
      param_1[10] = 0;
    }
    if (param_1[0x10] == param_1[0xc]) {
      param_1[0x10] = 0;
    }
    iVar11 = param_1[0x16];
    if (iVar11 == param_1[0x12]) {
      param_1[0x16] = 0;
      iVar11 = 0;
    }
    param_4 = param_4 - uVar9;
  } while (param_4 != 0);
  param_1[0x18] = (int)local_88;
  param_1[0x1b] = (int)fStack_84;
  param_1[0x1e] = (int)fStack_80;
  param_1[0x21] = (int)fStack_7c;
  return;
}



// FUNCTION 14322fed0 Reset body=64 status=ok
// SIG undefined Reset(void)

void DSP::FDN4::Reset(longlong param_1)

{
  DelayLine::Reset();
  DelayLine::Reset(param_1 + 0x18);
  DelayLine::Reset(param_1 + 0x30);
  DelayLine::Reset(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



// FUNCTION 14322ff10 Term body=67 status=ok
// SIG undefined Term(void)

void DSP::FDN4::Term(longlong param_1,undefined8 param_2)

{
  CDelayLight::Term();
  CDelayLight::Term(param_1 + 0x18,param_2);
  CDelayLight::Term(param_1 + 0x30,param_2);
  CDelayLight::Term(param_1 + 0x48,param_2);
  return;
}



// FUNCTION 14322ff60 ConstantPowerChannelMixdown body=641 status=ok
// SIG undefined ConstantPowerChannelMixdown(void)

void DSP::ConstantPowerChannelMixdown
               (longlong *param_1,uint param_2,ulonglong param_3,float *param_4,float param_5,
               float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = *(uint *)(param_1 + 1);
  param_3 = param_3 & 0xffffffff;
  if ((uVar7 & 0xf00) == 0x100) {
    fVar11 = 0.0;
    fVar12 = 0.0;
    if (1.0 <= param_6) {
      param_6 = 1.0;
    }
    uVar6 = uVar7 >> 0xc;
    if (1.0 <= param_5) {
      param_5 = 1.0;
    }
    fVar13 = 0.0;
    if ((uVar6 & 1) != 0) {
      fVar11 = 1.0;
    }
    if ((uVar6 & 2) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar7 >> 0x15 & 1) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar6 & 0x10) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar6 & 0x20) != 0) {
      fVar11 = fVar11 + 1.0;
    }
    if ((uVar6 & 4) != 0) {
      fVar12 = param_5 * param_5;
    }
    if ((uVar6 & 8) != 0) {
      fVar13 = param_6 * param_6;
    }
    fVar11 = SQRT(1.0 / (fVar12 + fVar11 + fVar13));
    ::_guard_xfg_dispatch_icall_nop(param_4,0,(longlong)(int)param_2 << 2);
    uVar6 = 1;
    uVar10 = 0;
    uVar7 = uVar7 >> 0xc;
    while (uVar7 != 0) {
      if (((uVar7 & uVar6) != 0) || (uVar7 == 8)) {
        fVar12 = fVar11;
        if ((uVar6 & 4) != 0) {
          fVar12 = fVar11 * param_5;
        }
        if (uVar7 == 8) {
          uVar7 = 0;
          fVar12 = fVar12 * param_6;
        }
        else if ((uVar6 & 8) != 0) goto LAB_1432300e4;
        pfVar5 = (float *)(*param_1 +
                          ((ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar10 + param_3) * 4);
        if (0 < (int)param_2) {
          uVar9 = (ulonglong)((param_2 - 1 >> 2) + 1);
          pfVar4 = param_4;
          do {
            fVar13 = *pfVar5;
            fVar1 = pfVar5[1];
            fVar2 = pfVar5[2];
            fVar3 = pfVar5[3];
            pfVar5 = pfVar5 + 4;
            *pfVar4 = fVar13 * fVar12 + *pfVar4;
            pfVar4[1] = fVar1 * fVar12 + pfVar4[1];
            pfVar4[2] = fVar2 * fVar12 + pfVar4[2];
            pfVar4[3] = fVar3 * fVar12 + pfVar4[3];
            pfVar4 = pfVar4 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar7 = uVar7 & ~uVar6;
        uVar10 = uVar10 + 1;
      }
LAB_1432300e4:
      uVar6 = uVar6 * 2;
    }
  }
  else if ((uVar7 & 0xf00) == 0x200) {
    ::_guard_xfg_dispatch_icall_nop
              (param_4,(void *)(*param_1 + param_3 * 4),(ulonglong)param_2 << 2);
  }
  else {
    fVar11 = 1.0 / SQRT((float)(uVar7 & 0xff));
    ::_guard_xfg_dispatch_icall_nop(param_4,0,(longlong)(int)param_2 << 2);
    uVar9 = 0;
    if ((char)param_1[1] != '\0') {
      do {
        pfVar5 = (float *)(*param_1 + (*(ushort *)(param_1 + 2) * uVar9 + param_3) * 4);
        if (0 < (int)param_2) {
          uVar8 = (ulonglong)((param_2 - 1 >> 2) + 1);
          pfVar4 = param_4;
          do {
            fVar12 = *pfVar5;
            fVar13 = pfVar5[1];
            fVar1 = pfVar5[2];
            fVar2 = pfVar5[3];
            pfVar5 = pfVar5 + 4;
            *pfVar4 = fVar12 * fVar11 + *pfVar4;
            pfVar4[1] = fVar13 * fVar11 + pfVar4[1];
            pfVar4[2] = fVar1 * fVar11 + pfVar4[2];
            pfVar4[3] = fVar2 * fVar11 + pfVar4[3];
            pfVar4 = pfVar4 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar7 < *(byte *)(param_1 + 1));
    }
  }
  return;
}



// FUNCTION 1432301f0 ProcessGain<float> body=430 status=ok
// SIG undefined ProcessGain<float>(void)

void ProcessGain<float>(uint param_1,uint param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  if (param_2 != 0) {
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar8 = 0;
    uVar1 = param_4[2];
    lVar7 = 0;
    do {
      if (uVar8 != 0) {
        *param_4 = uVar2;
        param_4[1] = uVar3;
        param_4[2] = uVar1;
      }
      uVar4 = 0;
      pfVar6 = (float *)(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * lVar7 * 4);
      if (3 < param_1) {
        uVar4 = (param_1 - 4 >> 2) + 1;
        uVar5 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          if (*(uint *)(param_4 + 2) < *(uint *)((longlong)param_4 + 0x14)) {
            fVar9 = *(float *)((longlong)param_4 + 4) + *(float *)((longlong)param_4 + 0xc);
            *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) + 1;
          }
          else {
            fVar9 = *(float *)(param_4 + 1);
          }
          *(float *)((longlong)param_4 + 0xc) = fVar9;
          *pfVar6 = fVar9 * *pfVar6;
          if (*(uint *)(param_4 + 2) < *(uint *)((longlong)param_4 + 0x14)) {
            fVar9 = *(float *)((longlong)param_4 + 4) + *(float *)((longlong)param_4 + 0xc);
            *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) + 1;
          }
          else {
            fVar9 = *(float *)(param_4 + 1);
          }
          *(float *)((longlong)param_4 + 0xc) = fVar9;
          pfVar6[1] = fVar9 * pfVar6[1];
          if (*(uint *)(param_4 + 2) < *(uint *)((longlong)param_4 + 0x14)) {
            fVar9 = *(float *)((longlong)param_4 + 4) + *(float *)((longlong)param_4 + 0xc);
            *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) + 1;
          }
          else {
            fVar9 = *(float *)(param_4 + 1);
          }
          *(float *)((longlong)param_4 + 0xc) = fVar9;
          pfVar6[2] = fVar9 * pfVar6[2];
          if (*(uint *)(param_4 + 2) < *(uint *)((longlong)param_4 + 0x14)) {
            fVar9 = *(float *)((longlong)param_4 + 4) + *(float *)((longlong)param_4 + 0xc);
            *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) + 1;
          }
          else {
            fVar9 = *(float *)(param_4 + 1);
          }
          *(float *)((longlong)param_4 + 0xc) = fVar9;
          pfVar6[3] = fVar9 * pfVar6[3];
          pfVar6 = pfVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar4 < param_1) {
        uVar5 = (ulonglong)(param_1 - uVar4);
        do {
          if (*(uint *)(param_4 + 2) < *(uint *)((longlong)param_4 + 0x14)) {
            fVar9 = *(float *)((longlong)param_4 + 4) + *(float *)((longlong)param_4 + 0xc);
            *(uint *)(param_4 + 2) = *(uint *)(param_4 + 2) + 1;
          }
          else {
            fVar9 = *(float *)(param_4 + 1);
          }
          *(float *)((longlong)param_4 + 0xc) = fVar9;
          *pfVar6 = fVar9 * *pfVar6;
          pfVar6 = pfVar6 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (uVar8 < param_2);
  }
  return;
}



// FUNCTION 1432303a0 ProcessGainInt<long> body=384 status=ok
// SIG undefined ProcessGainInt<long>(void)

void ProcessGainInt<long>(uint param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  float fVar6;
  
  piVar5 = (int *)*param_3;
  if (param_1 != 0) {
    uVar4 = (ulonglong)param_1;
    do {
      if (*(uint *)(param_4 + 0x10) < *(uint *)(param_4 + 0x14)) {
        fVar6 = *(float *)(param_4 + 4) + *(float *)(param_4 + 0xc);
        *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) + 1;
      }
      else {
        fVar6 = *(float *)(param_4 + 8);
      }
      uVar2 = 0;
      *(float *)(param_4 + 0xc) = fVar6;
      if (param_2 != 0) {
        if (0xf < param_2) {
          do {
            uVar2 = uVar2 + 0x10;
            *piVar5 = (int)((float)*piVar5 * fVar6);
            piVar5[1] = (int)((float)piVar5[1] * fVar6);
            piVar5[2] = (int)((float)piVar5[2] * fVar6);
            piVar5[3] = (int)((float)piVar5[3] * fVar6);
            piVar5[4] = (int)((float)piVar5[4] * fVar6);
            piVar5[5] = (int)((float)piVar5[5] * fVar6);
            piVar5[6] = (int)((float)piVar5[6] * fVar6);
            piVar5[7] = (int)((float)piVar5[7] * fVar6);
            piVar5[8] = (int)((float)piVar5[8] * fVar6);
            piVar5[9] = (int)((float)piVar5[9] * fVar6);
            piVar5[10] = (int)((float)piVar5[10] * fVar6);
            piVar5[0xb] = (int)((float)piVar5[0xb] * fVar6);
            piVar5[0xc] = (int)((float)piVar5[0xc] * fVar6);
            piVar5[0xd] = (int)((float)piVar5[0xd] * fVar6);
            piVar5[0xe] = (int)((float)piVar5[0xe] * fVar6);
            piVar5[0xf] = (int)((float)piVar5[0xf] * fVar6);
            piVar5 = piVar5 + 0x10;
          } while (uVar2 < (param_2 & 0xfffffff0));
        }
        if (uVar2 < param_2) {
          if (3 < param_2 - uVar2) {
            uVar1 = ((param_2 - uVar2) - 4 >> 2) + 1;
            uVar3 = (ulonglong)uVar1;
            uVar2 = uVar2 + uVar1 * 4;
            do {
              *piVar5 = (int)((float)*piVar5 * fVar6);
              piVar5[1] = (int)((float)piVar5[1] * fVar6);
              piVar5[2] = (int)((float)piVar5[2] * fVar6);
              piVar5[3] = (int)((float)piVar5[3] * fVar6);
              piVar5 = piVar5 + 4;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          if (uVar2 < param_2) {
            uVar3 = (ulonglong)(param_2 - uVar2);
            do {
              *piVar5 = (int)((float)*piVar5 * fVar6);
              piVar5 = piVar5 + 1;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
        }
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143230520 FUN_143230520 body=43 status=ok
// SIG undefined FUN_143230520(void)

undefined8 * FUN_143230520(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143230550 CreateAudioInputSource body=76 status=ok
// SIG undefined CreateAudioInputSource(void)

undefined8 * CreateAudioInputSource(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aec5c0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
    *(uint *)((longlong)puVar1 + 0x34) = *(uint *)((longlong)puVar1 + 0x34) & 0xff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432305a0 CreateAudioInputSourceParams body=37 status=ok
// SIG undefined CreateAudioInputSourceParams(void)

void CreateAudioInputSourceParams(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x10);
  if (lVar1 != 0) {
    CAkFxSrcAudioInputParams::CAkFxSrcAudioInputParams(lVar1);
    return;
  }
  return;
}



// FUNCTION 1432305d0 Execute body=775 status=ok
// SIG undefined Execute(void)

void CAkFXSrcAudioInput::Execute(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  short *psVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (DAT_146b52240 != (code *)0x0) {
    fVar11 = (float)GetGain();
    fVar12 = *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x20) = fVar11;
    fVar11 = fVar11 - *(float *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x2c) = (int)(longlong)(ABS(fVar11) / fVar12);
    if (fVar11 <= 0.0) {
      fVar12 = -fVar12;
    }
    *(float *)(param_1 + 0x1c) = fVar12;
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))();
    uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
    (*DAT_146b52240)(uVar3);
    uVar2 = *(ushort *)((longlong)param_2 + 0x12);
    uVar9 = (ulonglong)uVar2;
    bVar1 = *(byte *)(param_2 + 1);
    uVar10 = (uint)bVar1;
    if ((*(uint *)(param_1 + 0x38) & 0x30000) == 0x10000) {
      ProcessGain<float>(uVar9,bVar1,param_2,param_1 + 0x18);
    }
    else {
      uVar4 = (*(uint *)(param_1 + 0x38) >> 6 & 0x3ff) / (uint)*(byte *)(param_1 + 0x34);
      if (uVar4 == 1) {
        pcVar7 = (char *)*param_2;
        if (uVar2 != 0) {
          do {
            if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
              fVar12 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
            }
            else {
              fVar12 = *(float *)(param_1 + 0x20);
            }
            *(float *)(param_1 + 0x24) = fVar12;
            uVar4 = 0;
            if (3 < uVar10) {
              uVar4 = (bVar1 - 4 >> 2) + 1;
              uVar8 = (ulonglong)uVar4;
              uVar4 = uVar4 * 4;
              do {
                *pcVar7 = (char)(int)((float)(int)*pcVar7 * fVar12);
                pcVar7[1] = (char)(int)((float)(int)pcVar7[1] * fVar12);
                pcVar7[2] = (char)(int)((float)(int)pcVar7[2] * fVar12);
                pcVar7[3] = (char)(int)((float)(int)pcVar7[3] * fVar12);
                pcVar7 = pcVar7 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            if (uVar4 < uVar10) {
              uVar8 = (ulonglong)(bVar1 - uVar4);
              do {
                *pcVar7 = (char)(int)((float)(int)*pcVar7 * fVar12);
                pcVar7 = pcVar7 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else if (uVar4 == 2) {
        psVar6 = (short *)*param_2;
        if (uVar2 != 0) {
          do {
            if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
              fVar12 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
              *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
            }
            else {
              fVar12 = *(float *)(param_1 + 0x20);
            }
            *(float *)(param_1 + 0x24) = fVar12;
            uVar4 = 0;
            if (3 < uVar10) {
              uVar4 = (bVar1 - 4 >> 2) + 1;
              uVar8 = (ulonglong)uVar4;
              uVar4 = uVar4 * 4;
              do {
                *psVar6 = (short)(int)((float)(int)*psVar6 * fVar12);
                psVar6[1] = (short)(int)((float)(int)psVar6[1] * fVar12);
                psVar6[2] = (short)(int)((float)(int)psVar6[2] * fVar12);
                psVar6[3] = (short)(int)((float)(int)psVar6[3] * fVar12);
                psVar6 = psVar6 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            if (uVar4 < uVar10) {
              uVar8 = (ulonglong)(bVar1 - uVar4);
              do {
                *psVar6 = (short)(int)((float)(int)*psVar6 * fVar12);
                psVar6 = psVar6 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else if (uVar4 == 4) {
        ProcessGainInt<long>(uVar9,bVar1,param_2,param_1 + 0x18);
      }
    }
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 2;
  *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  return;
}



// FUNCTION 1432308e0 GetGain body=115 status=ok
// SIG undefined GetGain(void)

undefined8 CAkFXSrcAudioInput::GetGain(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = 1.0;
  uVar5 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    fVar4 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(*(longlong *)(param_1 + 8) + 8) * 0.05);
    uVar5 = extraout_XMM0_Db;
  }
  if (DAT_146b52250 != (code *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))();
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
    fVar3 = (float)(*DAT_146b52250)(uVar1);
    fVar4 = fVar4 * fVar3;
  }
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 143230960 Init body=169 status=ok
// SIG undefined Init(void)

undefined8
CAkFXSrcAudioInput::Init
          (longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  *(longlong **)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 8) = param_4;
  if (DAT_146b52248 != (code *)0x0) {
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x68))(param_3);
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
    (*DAT_146b52248)(uVar2,param_5);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_5;
  *(uint *)(param_1 + 0x38) = param_5[2];
  uVar1 = *param_5;
  uVar2 = GetGain(param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x18) = 10.0 / (float)uVar1;
  *(float *)(param_1 + 0x1c) = -(10.0 / (float)uVar1);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return 1;
}



// FUNCTION 143230a10 SetAudioInputCallbacks body=32 status=ok
// SIG undefined SetAudioInputCallbacks(void)

void SetAudioInputCallbacks(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    DAT_146b52240 = param_1;
    DAT_146b52248 = param_2;
    DAT_146b52250 = param_3;
  }
  return;
}



// FUNCTION 143230a30 CAkFxSrcAudioInputParams body=14 status=ok
// SIG undefined CAkFxSrcAudioInputParams(void)

undefined8 * CAkFxSrcAudioInputParams::CAkFxSrcAudioInputParams(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145aec628;
  return param_1;
}



// FUNCTION 143230a40 Clone body=63 status=ok
// SIG undefined Clone(void)

void CAkFxSrcAudioInputParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aec628;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 143230a80 FUN_143230a80 body=30 status=ok
// SIG undefined FUN_143230a80(void)

undefined8 FUN_143230a80(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143230a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar1;
}



// FUNCTION 143230af0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSynthOne::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145aec658;
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x40);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 143230b40 CreateAkSynthOne body=87 status=ok
// SIG undefined CreateAkSynthOne(void)

undefined8 * CreateAkSynthOne(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x3e0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145aec658;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0xff00;
    puVar1[5] = 0;
    puVar1[6] = 0;
    CAkSynthOneDsp::CAkSynthOneDsp(puVar1 + 8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143230ba0 Execute body=200 status=ok
// SIG undefined Execute(void)

void CAkSynthOne::Execute(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar5 = (uint)uVar1 * 4;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar5 = (uint)uVar1;
  }
  *(uint *)(param_1 + 0x2c) = uVar5 << 4;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  *(longlong *)(param_1 + 0x30) = lVar3;
  if (lVar3 == 0) {
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  }
  else {
    if (uVar1 != 0) {
      FUN_1432324d0(param_1 + 0x40,*(undefined8 *)(param_1 + 8),uVar1);
      cVar2 = CAkSynthOneDsp::Process(param_1 + 0x40,uVar1,*param_2,*(undefined8 *)(param_1 + 0x30))
      ;
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
      uVar4 = 0;
      if (cVar2 != '\0') {
        uVar4 = uVar1;
      }
      *(ushort *)((longlong)param_2 + 0x12) = uVar4;
      lVar3 = *(longlong *)(param_1 + 0x30);
    }
    if (lVar3 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 143230c70 Init body=189 status=ok
// SIG undefined Init(void)

undefined4
CAkSynthOne::Init(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                 uint *param_5)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 local_res8 [8];
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(longlong **)(param_1 + 0x18) = param_3;
  *(longlong *)(param_1 + 8) = param_4;
  if (param_4 == 0) {
    return 2;
  }
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_4 + 0x24);
  *(float *)(param_1 + 0x28) = (float)*param_5;
  puVar4 = (uint *)(**(code **)(*param_3 + 0x70))(param_3,local_res8);
  puVar1 = (uint *)(param_1 + 0x20);
  if (puVar1 == puVar4) {
    uVar3 = (uint)*(byte *)puVar1;
  }
  else {
    uVar3 = *puVar4;
    *puVar1 = uVar3;
  }
  cVar2 = (char)uVar3;
  if ((cVar2 == '\0') ||
     ((((cVar2 != -0x70 || (*(char *)(param_1 + 0x23) == '\0')) && (cVar2 != -0x80)) &&
      ((cVar2 != -0x70 || (*(char *)(param_1 + 0x23) != '\0')))))) {
    *(byte *)puVar1 = 0x80;
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0x30;
  }
  FUN_143231f50(param_1 + 0x40,*(undefined8 *)(param_1 + 8),param_3,*(undefined4 *)(param_1 + 0x28),
                puVar1);
  return 1;
}



// FUNCTION 143230d30 Reset body=27 status=ok
// SIG undefined Reset(void)

undefined8 CAkSynthOne::Reset(longlong param_1)

{
  CAkSynthOneDsp::Reset(param_1 + 0x40,*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 143230d50 FUN_143230d50 body=95 status=ok
// SIG undefined FUN_143230d50(void)

void FUN_143230d50(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145aec6c0;
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
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 143230db0 FUN_143230db0 body=40 status=ok
// SIG undefined FUN_143230db0(void)

void FUN_143230db0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aec6c0;
    return;
  }
  return;
}



// FUNCTION 1432310a0 GetSampleIndices<FmPolicyNone,PwmPolicyNone> body=465 status=ok
// SIG undefined GetSampleIndices<FmPolicyNone,PwmPolicyNone>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetSampleIndices<FmPolicyNone,PwmPolicyNone>
               (uint param_1,float param_2,float param_3,longlong param_4,undefined8 param_5,
               undefined8 param_6,longlong param_7,longlong param_8,longlong param_9)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
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
  float local_88;
  
  fVar15 = fRam0000000146b5229c;
  fVar14 = fRam0000000146b52298;
  fVar13 = fRam0000000146b52294;
  fVar12 = _DAT_146b52290;
  uVar11 = uRam0000000146b5227c;
  uVar10 = uRam0000000146b52278;
  uVar9 = uRam0000000146b52274;
  uVar8 = _DAT_146b52270;
  iVar7 = iRam0000000146b5226c;
  iVar6 = iRam0000000146b52268;
  iVar5 = iRam0000000146b52264;
  iVar4 = _DAT_146b52260;
  uVar17 = 0;
  fVar37 = param_2 * *(float *)(param_4 + 0x18);
  local_88 = *(float *)(param_4 + 0x14);
  fVar33 = param_2 * *(float *)(param_4 + 0x20) + fVar37;
  fVar39 = param_3 * 4.0;
  fVar38 = fVar37 * 4.0;
  fVar34 = fVar33 + fVar37;
  fVar35 = fVar34 + fVar37;
  fVar23 = local_88 + fVar33 * param_3;
  fVar18 = fVar37 + fVar35;
  fVar24 = fVar23 + fVar34 * param_3;
  fVar37 = param_3 * 6.0 * fVar37;
  fVar36 = fVar35 * param_3 + fVar24;
  local_88 = local_88 - (float)(int)local_88;
  fVar23 = fVar23 - (float)(int)fVar23;
  fVar24 = fVar24 - (float)(int)fVar24;
  fVar36 = fVar36 - (float)(int)fVar36;
  if (param_1 != 0) {
    do {
      fVar19 = fVar33 * fVar39;
      fVar20 = fVar34 * fVar39;
      fVar21 = fVar35 * fVar39;
      fVar22 = fVar18 * fVar39;
      fVar33 = fVar33 + fVar38;
      fVar34 = fVar34 + fVar38;
      fVar35 = fVar35 + fVar38;
      fVar18 = fVar18 + fVar38;
      fVar29 = fVar12 * local_88;
      fVar30 = fVar13 * fVar23;
      fVar31 = fVar14 * fVar24;
      fVar32 = fVar15 * fVar36;
      fVar19 = local_88 + fVar37 + fVar19;
      fVar20 = fVar23 + fVar37 + fVar20;
      fVar21 = fVar24 + fVar37 + fVar21;
      fVar22 = fVar36 + fVar37 + fVar22;
      local_88 = fVar19 - (float)(int)fVar19;
      fVar23 = fVar20 - (float)(int)fVar20;
      fVar24 = fVar21 - (float)(int)fVar21;
      fVar36 = fVar22 - (float)(int)fVar22;
      iVar25 = (int)fVar29;
      iVar26 = (int)fVar30;
      iVar27 = (int)fVar31;
      iVar28 = (int)fVar32;
      piVar1 = (int *)(param_7 + uVar17 * 4);
      *piVar1 = iVar25;
      piVar1[1] = iVar26;
      piVar1[2] = iVar27;
      piVar1[3] = iVar28;
      puVar2 = (uint *)(param_8 + uVar17 * 4);
      *puVar2 = iVar4 + iVar25 & uVar8;
      puVar2[1] = iVar5 + iVar26 & uVar9;
      puVar2[2] = iVar6 + iVar27 & uVar10;
      puVar2[3] = iVar7 + iVar28 & uVar11;
      pfVar3 = (float *)(param_9 + uVar17 * 4);
      *pfVar3 = fVar29 - (float)iVar25;
      pfVar3[1] = fVar30 - (float)iVar26;
      pfVar3[2] = fVar31 - (float)iVar27;
      pfVar3[3] = fVar32 - (float)iVar28;
      uVar16 = (int)uVar17 + 4;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < param_1);
  }
  *(float *)(param_4 + 0x14) = local_88;
  return;
}



// FUNCTION 143231280 GetSampleIndices<FmPolicyNone,PwmPolicyWith> body=707 status=ok
// SIG undefined GetSampleIndices<FmPolicyNone,PwmPolicyWith>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetSampleIndices<FmPolicyNone,PwmPolicyWith>
               (uint param_1,float param_2,float param_3,longlong param_4,undefined8 param_5,
               undefined8 param_6,longlong param_7,longlong param_8,longlong param_9)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float local_d8;
  
  fVar11 = fRam0000000146b5228c;
  fVar10 = fRam0000000146b52288;
  fVar9 = fRam0000000146b52284;
  fVar8 = _DAT_146b52280;
  uVar12 = 0;
  fVar44 = param_2 * *(float *)(param_4 + 0x18);
  local_d8 = *(float *)(param_4 + 0x14);
  fVar38 = param_2 * *(float *)(param_4 + 0x20) + fVar44;
  fVar46 = param_3 * 4.0;
  fVar45 = fVar44 * 4.0;
  fVar39 = fVar38 + fVar44;
  fVar18 = local_d8 + fVar38 * param_3;
  fVar40 = fVar39 + fVar44;
  fVar17 = fVar44 + fVar40;
  fVar19 = fVar18 + fVar39 * param_3;
  fVar31 = *(float *)(param_4 + 0x30) * 0.01;
  fVar44 = param_3 * 6.0 * fVar44;
  fVar41 = fVar40 * param_3 + fVar19;
  local_d8 = local_d8 - (float)(int)local_d8;
  fVar18 = fVar18 - (float)(int)fVar18;
  fVar19 = fVar19 - (float)(int)fVar19;
  fVar41 = fVar41 - (float)(int)fVar41;
  fVar20 = *(float *)(param_4 + 0x38) * 0.01 + fVar31;
  fVar21 = fVar20 + fVar31;
  fVar22 = fVar21 + fVar31;
  fVar32 = fVar31 * 4.0;
  fVar31 = fVar31 + fVar22;
  if (param_1 != 0) {
    do {
      iVar7 = iRam0000000146b5226c;
      iVar6 = iRam0000000146b52268;
      iVar5 = iRam0000000146b52264;
      iVar4 = _DAT_146b52260;
      uVar13 = -(uint)(fVar20 <= local_d8);
      uVar14 = -(uint)(fVar21 <= fVar18);
      uVar15 = -(uint)(fVar22 <= fVar19);
      uVar16 = -(uint)(fVar31 <= fVar41);
      fVar23 = local_d8 - fVar20;
      fVar25 = fVar18 - fVar21;
      fVar27 = fVar19 - fVar22;
      fVar29 = fVar41 - fVar31;
      auVar43._0_4_ = ~uVar13 & (uint)fVar20;
      auVar43._4_4_ = ~uVar14 & (uint)fVar21;
      auVar43._8_4_ = ~uVar15 & (uint)fVar22;
      auVar43._12_4_ = ~uVar16 & (uint)fVar31;
      fVar33 = 1.0 - fVar20;
      fVar35 = 1.0 - fVar21;
      fVar36 = 1.0 - fVar22;
      fVar37 = 1.0 - fVar31;
      fVar20 = fVar20 + fVar32;
      fVar21 = fVar21 + fVar32;
      fVar22 = fVar22 + fVar32;
      fVar31 = fVar31 + fVar32;
      auVar42._0_4_ = (float)(~uVar13 & (uint)local_d8 | (uint)fVar23 & uVar13) * fVar8;
      auVar42._4_4_ = (float)(~uVar14 & (uint)fVar18 | (uint)fVar25 & uVar14) * fVar9;
      auVar42._8_4_ = (float)(~uVar15 & (uint)fVar19 | (uint)fVar27 & uVar15) * fVar10;
      auVar42._12_4_ = (float)(~uVar16 & (uint)fVar41 | (uint)fVar29 & uVar16) * fVar11;
      auVar34._0_4_ = (uint)fVar33 & uVar13;
      auVar34._4_4_ = (uint)fVar35 & uVar14;
      auVar34._8_4_ = (uint)fVar36 & uVar15;
      auVar34._12_4_ = (uint)fVar37 & uVar16;
      auVar43 = divps(auVar42,auVar34 | auVar43);
      fVar33 = auVar43._0_4_ + (float)(uVar13 & (uint)fVar8);
      fVar35 = auVar43._4_4_ + (float)(uVar14 & (uint)fVar9);
      fVar36 = auVar43._8_4_ + (float)(uVar15 & (uint)fVar10);
      fVar37 = auVar43._12_4_ + (float)(uVar16 & (uint)fVar11);
      fVar23 = fVar38 * fVar46;
      fVar25 = fVar39 * fVar46;
      fVar27 = fVar40 * fVar46;
      fVar29 = fVar17 * fVar46;
      fVar38 = fVar38 + fVar45;
      fVar39 = fVar39 + fVar45;
      fVar40 = fVar40 + fVar45;
      fVar17 = fVar17 + fVar45;
      fVar23 = local_d8 + fVar44 + fVar23;
      fVar25 = fVar18 + fVar44 + fVar25;
      fVar27 = fVar19 + fVar44 + fVar27;
      fVar29 = fVar41 + fVar44 + fVar29;
      fVar33 = (float)(~-(uint)(1.0 <= fVar33) & (uint)fVar33) * _DAT_146b52290;
      fVar35 = (float)(~-(uint)(1.0 <= fVar35) & (uint)fVar35) * fRam0000000146b52294;
      fVar36 = (float)(~-(uint)(1.0 <= fVar36) & (uint)fVar36) * fRam0000000146b52298;
      fVar37 = (float)(~-(uint)(1.0 <= fVar37) & (uint)fVar37) * fRam0000000146b5229c;
      local_d8 = fVar23 - (float)(int)fVar23;
      fVar18 = fVar25 - (float)(int)fVar25;
      fVar19 = fVar27 - (float)(int)fVar27;
      fVar41 = fVar29 - (float)(int)fVar29;
      iVar24 = (int)fVar33;
      iVar26 = (int)fVar35;
      iVar28 = (int)fVar36;
      iVar30 = (int)fVar37;
      piVar1 = (int *)(param_7 + uVar12 * 4);
      *piVar1 = iVar24;
      piVar1[1] = iVar26;
      piVar1[2] = iVar28;
      piVar1[3] = iVar30;
      uVar13 = iVar5 + iVar26 & uRam0000000146b52274;
      uVar14 = iVar6 + iVar28 & uRam0000000146b52278;
      uVar15 = iVar7 + iVar30 & uRam0000000146b5227c;
      puVar2 = (uint *)(param_8 + uVar12 * 4);
      *puVar2 = iVar4 + iVar24 & _DAT_146b52270;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
      pfVar3 = (float *)(param_9 + uVar12 * 4);
      *pfVar3 = fVar33 - (float)iVar24;
      pfVar3[1] = fVar35 - (float)iVar26;
      pfVar3[2] = fVar36 - (float)iVar28;
      pfVar3[3] = fVar37 - (float)iVar30;
      uVar13 = (int)uVar12 + 4;
      uVar12 = (ulonglong)uVar13;
    } while (uVar13 < param_1);
  }
  *(float *)(param_4 + 0x14) = local_d8;
  return;
}



// FUNCTION 143231550 GetSampleIndices<FmPolicyWith,PwmPolicyNone> body=743 status=ok
// SIG undefined GetSampleIndices<FmPolicyWith,PwmPolicyNone>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetSampleIndices<FmPolicyWith,PwmPolicyNone>
               (uint param_1,float param_2,float param_3,longlong param_4,float *param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9)

{
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
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
  float local_d8;
  
  uVar8 = 0;
  fVar41 = param_2 * *(float *)(param_4 + 0x18);
  local_d8 = *(float *)(param_4 + 0x14);
  fVar33 = param_2 * *(float *)(param_4 + 0x20) + fVar41;
  fVar34 = fVar33 + fVar41;
  fVar43 = fVar41 * 4.0;
  fVar44 = param_3 * 4.0;
  fVar15 = local_d8 + fVar33 * param_3;
  fVar35 = fVar34 + fVar41;
  fVar13 = fVar41 + fVar35;
  fVar16 = fVar15 + fVar34 * param_3;
  fVar14 = *param_5;
  fVar36 = fVar35 * param_3 + fVar16;
  fVar42 = param_3 * 20000.0;
  local_d8 = local_d8 - (float)(int)local_d8;
  fVar15 = fVar15 - (float)(int)fVar15;
  fVar16 = fVar16 - (float)(int)fVar16;
  fVar36 = fVar36 - (float)(int)fVar36;
  fVar17 = fVar14 + param_5[2];
  fVar41 = param_3 * 6.0 * fVar41;
  fVar18 = fVar17 + fVar14;
  fVar19 = fVar18 + fVar14;
  fVar28 = fVar14 * 4.0;
  fVar14 = fVar14 + fVar19;
  if (param_1 != 0) {
    do {
      iVar7 = iRam0000000146b5226c;
      iVar6 = iRam0000000146b52268;
      iVar5 = iRam0000000146b52264;
      iVar4 = _DAT_146b52260;
      fVar20 = fVar17 * 0.2;
      fVar22 = fVar18 * 0.2;
      fVar24 = fVar19 * 0.2;
      fVar26 = fVar14 * 0.2;
      fVar17 = fVar17 + fVar28;
      fVar18 = fVar18 + fVar28;
      fVar19 = fVar19 + fVar28;
      fVar14 = fVar14 + fVar28;
      pfVar1 = (float *)(param_6 + uVar8 * 4);
      fVar29 = (fVar42 - param_3 * fVar33) * *pfVar1 * fVar20 + local_d8;
      fVar30 = (fVar42 - param_3 * fVar34) * pfVar1[1] * fVar22 + fVar15;
      fVar31 = (fVar42 - param_3 * fVar35) * pfVar1[2] * fVar24 + fVar16;
      fVar32 = (fVar42 - param_3 * fVar13) * pfVar1[3] * fVar26 + fVar36;
      fVar29 = fVar29 - (float)(int)fVar29;
      fVar30 = fVar30 - (float)(int)fVar30;
      fVar31 = fVar31 - (float)(int)fVar31;
      fVar32 = fVar32 - (float)(int)fVar32;
      fVar20 = fVar33 * fVar44;
      fVar22 = fVar34 * fVar44;
      fVar24 = fVar35 * fVar44;
      fVar26 = fVar13 * fVar44;
      fVar33 = fVar33 + fVar43;
      fVar34 = fVar34 + fVar43;
      fVar35 = fVar35 + fVar43;
      fVar13 = fVar13 + fVar43;
      fVar37 = (float)(~-(uint)(0.0 <= fVar29) & (uint)(fVar29 + 1.0) |
                      -(uint)(0.0 <= fVar29) & (uint)fVar29);
      fVar38 = (float)(~-(uint)(0.0 <= fVar30) & (uint)(fVar30 + 1.0) |
                      -(uint)(0.0 <= fVar30) & (uint)fVar30);
      fVar39 = (float)(~-(uint)(0.0 <= fVar31) & (uint)(fVar31 + 1.0) |
                      -(uint)(0.0 <= fVar31) & (uint)fVar31);
      fVar40 = (float)(~-(uint)(0.0 <= fVar32) & (uint)(fVar32 + 1.0) |
                      -(uint)(0.0 <= fVar32) & (uint)fVar32);
      fVar29 = fVar37 - 1.0;
      fVar30 = fVar38 - 1.0;
      fVar31 = fVar39 - 1.0;
      fVar32 = fVar40 - 1.0;
      fVar20 = local_d8 + fVar41 + fVar20;
      fVar22 = fVar15 + fVar41 + fVar22;
      fVar24 = fVar16 + fVar41 + fVar24;
      fVar26 = fVar36 + fVar41 + fVar26;
      uVar9 = -(uint)(0.0 <= fVar29);
      uVar10 = -(uint)(0.0 <= fVar30);
      uVar11 = -(uint)(0.0 <= fVar31);
      uVar12 = -(uint)(0.0 <= fVar32);
      local_d8 = fVar20 - (float)(int)fVar20;
      fVar15 = fVar22 - (float)(int)fVar22;
      fVar16 = fVar24 - (float)(int)fVar24;
      fVar36 = fVar26 - (float)(int)fVar26;
      fVar20 = (float)(uVar9 & (uint)fVar29 | ~uVar9 & (uint)fVar37) * _DAT_146b52290;
      fVar22 = (float)(uVar10 & (uint)fVar30 | ~uVar10 & (uint)fVar38) * fRam0000000146b52294;
      fVar24 = (float)(uVar11 & (uint)fVar31 | ~uVar11 & (uint)fVar39) * fRam0000000146b52298;
      fVar26 = (float)(uVar12 & (uint)fVar32 | ~uVar12 & (uint)fVar40) * fRam0000000146b5229c;
      iVar21 = (int)fVar20;
      iVar23 = (int)fVar22;
      iVar25 = (int)fVar24;
      iVar27 = (int)fVar26;
      piVar2 = (int *)(param_7 + uVar8 * 4);
      *piVar2 = iVar21;
      piVar2[1] = iVar23;
      piVar2[2] = iVar25;
      piVar2[3] = iVar27;
      uVar9 = iVar5 + iVar23 & uRam0000000146b52274;
      uVar10 = iVar6 + iVar25 & uRam0000000146b52278;
      uVar11 = iVar7 + iVar27 & uRam0000000146b5227c;
      puVar3 = (uint *)(param_8 + uVar8 * 4);
      *puVar3 = iVar4 + iVar21 & _DAT_146b52270;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      pfVar1 = (float *)(param_9 + uVar8 * 4);
      *pfVar1 = fVar20 - (float)iVar21;
      pfVar1[1] = fVar22 - (float)iVar23;
      pfVar1[2] = fVar24 - (float)iVar25;
      pfVar1[3] = fVar26 - (float)iVar27;
      uVar9 = (int)uVar8 + 4;
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 < param_1);
  }
  *(float *)(param_4 + 0x14) = local_d8;
  return;
}



// FUNCTION 143231840 GetSampleIndices<FmPolicyWith,PwmPolicyWith> body=934 status=ok
// SIG undefined GetSampleIndices<FmPolicyWith,PwmPolicyWith>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetSampleIndices<FmPolicyWith,PwmPolicyWith>
               (uint param_1,float param_2,float param_3,longlong param_4,float *param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9)

{
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float local_e8;
  
  fVar39 = param_2 * *(float *)(param_4 + 0x18);
  local_e8 = *(float *)(param_4 + 0x14);
  fVar35 = param_2 * *(float *)(param_4 + 0x20) + fVar39;
  fVar36 = fVar35 + fVar39;
  fVar11 = local_e8 + fVar35 * param_3;
  fVar37 = fVar36 + fVar39;
  fVar43 = fVar39 * 4.0;
  fVar44 = param_3 * 4.0;
  fVar9 = fVar39 + fVar37;
  fVar39 = param_3 * 6.0 * fVar39;
  fVar12 = fVar11 + fVar36 * param_3;
  fVar10 = *param_5;
  fVar38 = fVar37 * param_3 + fVar12;
  local_e8 = local_e8 - (float)(int)local_e8;
  fVar11 = fVar11 - (float)(int)fVar11;
  fVar12 = fVar12 - (float)(int)fVar12;
  fVar38 = fVar38 - (float)(int)fVar38;
  fVar13 = fVar10 + param_5[2];
  fVar14 = fVar13 + fVar10;
  fVar15 = fVar14 + fVar10;
  fVar27 = fVar10 * 4.0;
  fVar10 = fVar10 + fVar15;
  fVar28 = *(float *)(param_4 + 0x30) * 0.01;
  fVar16 = *(float *)(param_4 + 0x38) * 0.01 + fVar28;
  fVar17 = fVar16 + fVar28;
  fVar18 = fVar17 + fVar28;
  fVar29 = fVar28 * 4.0;
  uVar4 = 0;
  fVar42 = param_3 * 20000.0;
  fVar28 = fVar28 + fVar18;
  if (param_1 != 0) {
    do {
      fVar19 = fVar13 * 0.2;
      fVar21 = fVar14 * 0.2;
      fVar23 = fVar15 * 0.2;
      fVar25 = fVar10 * 0.2;
      fVar13 = fVar13 + fVar27;
      fVar14 = fVar14 + fVar27;
      fVar15 = fVar15 + fVar27;
      fVar10 = fVar10 + fVar27;
      pfVar1 = (float *)(param_6 + uVar4 * 4);
      fVar19 = (fVar42 - param_3 * fVar35) * *pfVar1 * fVar19 + local_e8;
      fVar21 = (fVar42 - param_3 * fVar36) * pfVar1[1] * fVar21 + fVar11;
      fVar23 = (fVar42 - param_3 * fVar37) * pfVar1[2] * fVar23 + fVar12;
      fVar25 = (fVar42 - param_3 * fVar9) * pfVar1[3] * fVar25 + fVar38;
      fVar19 = fVar19 - (float)(int)fVar19;
      fVar21 = fVar21 - (float)(int)fVar21;
      fVar23 = fVar23 - (float)(int)fVar23;
      fVar25 = fVar25 - (float)(int)fVar25;
      fVar30 = (float)(~-(uint)(0.0 <= fVar19) & (uint)(fVar19 + 1.0) |
                      -(uint)(0.0 <= fVar19) & (uint)fVar19);
      fVar32 = (float)(~-(uint)(0.0 <= fVar21) & (uint)(fVar21 + 1.0) |
                      -(uint)(0.0 <= fVar21) & (uint)fVar21);
      fVar33 = (float)(~-(uint)(0.0 <= fVar23) & (uint)(fVar23 + 1.0) |
                      -(uint)(0.0 <= fVar23) & (uint)fVar23);
      fVar34 = (float)(~-(uint)(0.0 <= fVar25) & (uint)(fVar25 + 1.0) |
                      -(uint)(0.0 <= fVar25) & (uint)fVar25);
      fVar19 = fVar30 - 1.0;
      fVar21 = fVar32 - 1.0;
      fVar23 = fVar33 - 1.0;
      fVar25 = fVar34 - 1.0;
      uVar5 = -(uint)(0.0 <= fVar19);
      uVar6 = -(uint)(0.0 <= fVar21);
      uVar7 = -(uint)(0.0 <= fVar23);
      uVar8 = -(uint)(0.0 <= fVar25);
      fVar30 = (float)(uVar5 & (uint)fVar19 | ~uVar5 & (uint)fVar30);
      fVar32 = (float)(uVar6 & (uint)fVar21 | ~uVar6 & (uint)fVar32);
      fVar33 = (float)(uVar7 & (uint)fVar23 | ~uVar7 & (uint)fVar33);
      fVar34 = (float)(uVar8 & (uint)fVar25 | ~uVar8 & (uint)fVar34);
      uVar5 = -(uint)(fVar16 <= fVar30);
      uVar6 = -(uint)(fVar17 <= fVar32);
      uVar7 = -(uint)(fVar18 <= fVar33);
      uVar8 = -(uint)(fVar28 <= fVar34);
      fVar19 = fVar30 - fVar16;
      fVar21 = fVar32 - fVar17;
      fVar23 = fVar33 - fVar18;
      fVar25 = fVar34 - fVar28;
      auVar41._0_4_ = ~uVar5 & (uint)fVar16;
      auVar41._4_4_ = ~uVar6 & (uint)fVar17;
      auVar41._8_4_ = ~uVar7 & (uint)fVar18;
      auVar41._12_4_ = ~uVar8 & (uint)fVar28;
      auVar31._0_4_ = (uint)(1.0 - fVar16) & uVar5;
      auVar31._4_4_ = (uint)(1.0 - fVar17) & uVar6;
      auVar31._8_4_ = (uint)(1.0 - fVar18) & uVar7;
      auVar31._12_4_ = (uint)(1.0 - fVar28) & uVar8;
      fVar16 = fVar16 + fVar29;
      fVar17 = fVar17 + fVar29;
      fVar18 = fVar18 + fVar29;
      fVar28 = fVar28 + fVar29;
      auVar40._0_4_ = (float)(~uVar5 & (uint)fVar30 | (uint)fVar19 & uVar5) * _DAT_146b52280;
      auVar40._4_4_ = (float)(~uVar6 & (uint)fVar32 | (uint)fVar21 & uVar6) * fRam0000000146b52284;
      auVar40._8_4_ = (float)(~uVar7 & (uint)fVar33 | (uint)fVar23 & uVar7) * fRam0000000146b52288;
      auVar40._12_4_ = (float)(~uVar8 & (uint)fVar34 | (uint)fVar25 & uVar8) * fRam0000000146b5228c;
      local_e8 = local_e8 + fVar39 + fVar35 * fVar44;
      fVar11 = fVar11 + fVar39 + fVar36 * fVar44;
      fVar12 = fVar12 + fVar39 + fVar37 * fVar44;
      fVar38 = fVar38 + fVar39 + fVar9 * fVar44;
      auVar41 = divps(auVar40,auVar31 | auVar41);
      fVar19 = auVar41._0_4_ + (float)(uVar5 & (uint)_DAT_146b52280);
      fVar21 = auVar41._4_4_ + (float)(uVar6 & (uint)fRam0000000146b52284);
      fVar23 = auVar41._8_4_ + (float)(uVar7 & (uint)fRam0000000146b52288);
      fVar25 = auVar41._12_4_ + (float)(uVar8 & (uint)fRam0000000146b5228c);
      local_e8 = local_e8 - (float)(int)local_e8;
      fVar11 = fVar11 - (float)(int)fVar11;
      fVar12 = fVar12 - (float)(int)fVar12;
      fVar38 = fVar38 - (float)(int)fVar38;
      fVar19 = (float)(~-(uint)(1.0 <= fVar19) & (uint)fVar19) * _DAT_146b52290;
      fVar21 = (float)(~-(uint)(1.0 <= fVar21) & (uint)fVar21) * fRam0000000146b52294;
      fVar23 = (float)(~-(uint)(1.0 <= fVar23) & (uint)fVar23) * fRam0000000146b52298;
      fVar25 = (float)(~-(uint)(1.0 <= fVar25) & (uint)fVar25) * fRam0000000146b5229c;
      iVar20 = (int)fVar19;
      iVar22 = (int)fVar21;
      iVar24 = (int)fVar23;
      iVar26 = (int)fVar25;
      uVar5 = _DAT_146b52260 + iVar20;
      uVar6 = iRam0000000146b52264 + iVar22;
      uVar7 = iRam0000000146b52268 + iVar24;
      uVar8 = iRam0000000146b5226c + iVar26;
      piVar2 = (int *)(param_7 + uVar4 * 4);
      *piVar2 = iVar20;
      piVar2[1] = iVar22;
      piVar2[2] = iVar24;
      piVar2[3] = iVar26;
      uVar6 = uVar6 & uRam0000000146b52274;
      uVar7 = uVar7 & uRam0000000146b52278;
      uVar8 = uVar8 & uRam0000000146b5227c;
      puVar3 = (uint *)(param_8 + uVar4 * 4);
      *puVar3 = uVar5 & _DAT_146b52270;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      pfVar1 = (float *)(param_9 + uVar4 * 4);
      *pfVar1 = fVar19 - (float)iVar20;
      pfVar1[1] = fVar21 - (float)iVar22;
      pfVar1[2] = fVar23 - (float)iVar24;
      pfVar1[3] = fVar25 - (float)iVar26;
      uVar5 = (int)uVar4 + 4;
      uVar4 = (ulonglong)uVar5;
      fVar35 = fVar35 + fVar43;
      fVar36 = fVar36 + fVar43;
      fVar37 = fVar37 + fVar43;
      fVar9 = fVar9 + fVar43;
    } while (uVar5 < param_1);
  }
  *(float *)(param_4 + 0x14) = local_e8;
  return;
}



// FUNCTION 143231bf0 CAkSynthOneDsp body=275 status=ok
// SIG undefined CAkSynthOneDsp(void)

undefined8 * CAkSynthOneDsp::CAkSynthOneDsp(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined2 *)((longlong)param_1 + 0x394) = 0xff00;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  ::_guard_xfg_dispatch_icall_nop(param_1 + 0x18,0,0x1b0);
  return param_1;
}



// FUNCTION 143231d10 BypassNoise body=281 status=ok
// SIG undefined BypassNoise(void)

void CAkSynthOneDsp::BypassNoise(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
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
  float fVar40;
  float fVar41;
  float fVar42;
  
  fVar16 = *(float *)(param_1 + 0xa4);
  fVar21 = fVar16 + *(float *)(param_1 + 0xac);
  fVar22 = fVar21 + fVar16;
  fVar23 = fVar22 + fVar16;
  fVar7 = fVar16 * 4.0;
  fVar16 = fVar16 + fVar23;
  fVar28 = fVar7 + fVar7;
  fVar29 = fVar7 + fVar7;
  fVar30 = fVar7 + fVar7;
  fVar31 = fVar7 + fVar7;
  fVar32 = fVar7 + fVar21;
  fVar33 = fVar7 + fVar22;
  fVar34 = fVar7 + fVar23;
  fVar7 = fVar7 + fVar16;
  fVar35 = fVar28 + fVar21;
  fVar36 = fVar29 + fVar22;
  fVar37 = fVar30 + fVar23;
  fVar38 = fVar31 + fVar16;
  fVar39 = fVar32 + fVar28;
  fVar40 = fVar33 + fVar29;
  fVar41 = fVar34 + fVar30;
  fVar42 = fVar7 + fVar31;
  fVar28 = fVar28 + fVar28;
  fVar29 = fVar29 + fVar29;
  fVar30 = fVar30 + fVar30;
  fVar31 = fVar31 + fVar31;
  if (param_2 != 0) {
    uVar6 = 8;
    do {
      pfVar2 = (float *)(param_3 + (ulonglong)(uVar6 - 8) * 4);
      pfVar3 = (float *)(param_3 + (ulonglong)(uVar6 - 4) * 4);
      pfVar4 = (float *)(param_3 + (ulonglong)uVar6 * 4);
      pfVar5 = (float *)(param_3 + (ulonglong)(uVar6 + 4) * 4);
      fVar8 = *pfVar5;
      fVar9 = pfVar5[1];
      fVar10 = pfVar5[2];
      fVar11 = pfVar5[3];
      fVar24 = *pfVar2 * fVar21;
      fVar25 = pfVar2[1] * fVar22;
      fVar26 = pfVar2[2] * fVar23;
      fVar27 = pfVar2[3] * fVar16;
      fVar21 = fVar21 + fVar28;
      fVar22 = fVar22 + fVar29;
      fVar23 = fVar23 + fVar30;
      fVar16 = fVar16 + fVar31;
      fVar17 = *pfVar3 * fVar32;
      fVar18 = pfVar3[1] * fVar33;
      fVar19 = pfVar3[2] * fVar34;
      fVar20 = pfVar3[3] * fVar7;
      fVar32 = fVar32 + fVar28;
      fVar33 = fVar33 + fVar29;
      fVar34 = fVar34 + fVar30;
      fVar7 = fVar7 + fVar31;
      fVar12 = *pfVar4 * fVar35;
      fVar13 = pfVar4[1] * fVar36;
      fVar14 = pfVar4[2] * fVar37;
      fVar15 = pfVar4[3] * fVar38;
      fVar35 = fVar35 + fVar28;
      fVar36 = fVar36 + fVar29;
      fVar37 = fVar37 + fVar30;
      fVar38 = fVar38 + fVar31;
      pfVar2 = (float *)(param_3 + (ulonglong)(uVar6 - 8) * 4);
      *pfVar2 = fVar24;
      pfVar2[1] = fVar25;
      pfVar2[2] = fVar26;
      pfVar2[3] = fVar27;
      fVar8 = fVar8 * fVar39;
      fVar9 = fVar9 * fVar40;
      fVar10 = fVar10 * fVar41;
      fVar11 = fVar11 * fVar42;
      fVar39 = fVar39 + fVar28;
      fVar40 = fVar40 + fVar29;
      fVar41 = fVar41 + fVar30;
      fVar42 = fVar42 + fVar31;
      pfVar2 = (float *)(param_3 + (ulonglong)(uVar6 - 4) * 4);
      *pfVar2 = fVar17;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar19;
      pfVar2[3] = fVar20;
      pfVar2 = (float *)(param_3 + (ulonglong)uVar6 * 4);
      *pfVar2 = fVar12;
      pfVar2[1] = fVar13;
      pfVar2[2] = fVar14;
      pfVar2[3] = fVar15;
      pfVar2 = (float *)(param_3 + (ulonglong)(uVar6 + 4) * 4);
      *pfVar2 = fVar8;
      pfVar2[1] = fVar9;
      pfVar2[2] = fVar10;
      pfVar2[3] = fVar11;
      uVar1 = uVar6 + 8;
      uVar6 = uVar6 + 0x10;
    } while (uVar1 < param_2);
  }
  return;
}



// FUNCTION 143231e30 FinalOutput body=109 status=ok
// SIG undefined FinalOutput(void)

void CAkSynthOneDsp::FinalOutput
               (longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((1.6e-05 < *(float *)(param_1 + 0xa0)) || (1.6e-05 < *(float *)(param_1 + 0x98))) {
    FUN_143231ea0(0x378637bd,param_2,param_4);
    ProcessNoise(param_1,param_2 & 0xffffffff,param_3,param_4);
  }
  else {
    BypassNoise();
  }
  return;
}



// FUNCTION 143231ea0 FUN_143231ea0 body=60 status=ok
// SIG undefined FUN_143231ea0(void)

void FUN_143231ea0(longlong param_1,uint param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x380);
  piVar2 = (int *)(param_1 + 0x280);
  if (iVar1 == 1) {
    DSP::CAkColoredNoise::GenerateBufferPink();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      DSP::CAkColoredNoise::GenerateBufferPurple();
      return;
    }
    uVar5 = (ulonglong)param_2;
    uVar3 = 0;
    if (param_3 + uVar5 < param_3) {
      uVar5 = 0;
    }
    if (3 < uVar5) {
      lVar4 = (uVar5 - 4 >> 2) + 1;
      uVar3 = lVar4 * 4;
      do {
        iVar1 = *piVar2 * 0x343fd + 0x269ec3;
        *param_3 = (float)iVar1 * 2.3283064e-10;
        iVar1 = iVar1 * 0x343fd + 0x269ec3;
        param_3[1] = (float)iVar1 * 2.3283064e-10;
        iVar1 = iVar1 * 0x343fd + 0x269ec3;
        param_3[2] = (float)iVar1 * 2.3283064e-10;
        iVar1 = iVar1 * 0x343fd + 0x269ec3;
        *piVar2 = iVar1;
        param_3[3] = (float)iVar1 * 2.3283064e-10;
        param_3 = param_3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    for (; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      iVar1 = *piVar2 * 0x343fd + 0x269ec3;
      *piVar2 = iVar1;
      *param_3 = (float)iVar1 * 2.3283064e-10;
      param_3 = param_3 + 1;
    }
    return;
  }
  DSP::CAkColoredNoise::GenerateBufferRed();
  return;
}



// FUNCTION 143231ee0 GetSimdOscProcFn body=104 status=ok
// SIG undefined GetSimdOscProcFn(void)

code * CAkSynthOneDsp::GetSimdOscProcFn(longlong param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  
  if ((*param_2 == 0) &&
     ((*(float *)(param_1 + 0xb8) != 0.0 || (*(float *)(param_1 + 0xb4) != 0.0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((float)param_2[0xd] == (float)param_2[0xe]) && ((float)param_2[0xd] == 50.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar1) {
    pcVar3 = FUN_143233a10;
    if (!bVar2) {
      pcVar3 = FUN_143232f70;
    }
    return pcVar3;
  }
  pcVar3 = FUN_143233960;
  if (!bVar2) {
    pcVar3 = FUN_1432338b0;
  }
  return pcVar3;
}



// FUNCTION 143231f50 FUN_143231f50 body=996 status=ok
// SIG undefined FUN_143231f50(void)

void FUN_143231f50(float *param_1,longlong param_2,longlong *param_3,float param_4,float *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  float *pfVar8;
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
  
  *(longlong **)(param_1 + 0xe6) = param_3;
  cVar5 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 5) = cVar5;
  *param_1 = param_4;
  param_1[1] = 1.0 / param_4;
  iVar2 = 1;
  if (cVar5 != '\0') {
    iVar2 = 4;
  }
  fVar11 = param_4 * 0.5;
  if (20000.0 <= fVar11) {
    fVar11 = 20000.0;
  }
  param_1[3] = 1.0 / ((float)iVar2 * param_4);
  param_1[2] = (float)iVar2 * param_4;
  param_1[4] = fVar11;
  fVar11 = *param_5;
  param_1[0xe5] = fVar11;
  cVar5 = SUB41(fVar11,0);
  if ((cVar5 == '\0') ||
     ((((cVar1 = (char)((uint)fVar11 >> 0x18), cVar5 != -0x70 || (cVar1 == '\0')) &&
       (cVar5 != -0x80)) && ((cVar5 != -0x70 || (cVar1 != '\0')))))) {
    *(undefined1 *)(param_1 + 0xe5) = 0x80;
    *(undefined2 *)((longlong)param_1 + 0x396) = 0x30;
  }
  param_1[0x9c] = *(float *)(param_2 + 0x18);
  plVar4 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  fVar11 = param_1[0x9c];
  lVar6 = 3;
  uVar7 = 0;
  if (fVar11 != 0.0) {
    if (fVar11 == 1.4013e-45) {
      uVar7 = 1;
    }
    else if (fVar11 == 2.8026e-45) {
      uVar7 = 2;
    }
    else {
      uVar7 = 0;
      if (fVar11 == 4.2039e-45) {
        uVar7 = 3;
      }
    }
  }
  uVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  DSP::CAkColoredNoise::Init(param_1 + 0xa0,uVar7,(longlong)*param_1,uVar3);
  pfVar8 = param_1 + 0x4e;
  do {
    fVar11 = param_1[2] * 0.45;
    if (*param_1 * 0.375 <= fVar11) {
      fVar11 = *param_1 * 0.375;
    }
    fVar11 = _guard_xfg_dispatch_icall_nop((fVar11 * 3.1415927) / param_1[2]);
    fVar11 = 1.0 / fVar11;
    fVar9 = fVar11 * fVar11 + 1.0;
    fVar17 = fVar9 + fVar11 * 1.4142135;
    fVar15 = 1.0 / fVar17;
    pfVar8[-0x1e] = fVar15;
    pfVar8[-0x1d] = fVar15;
    pfVar8[-0x1c] = fVar15;
    pfVar8[-0x1b] = fVar15;
    pfVar8[-0x1a] = 0.0;
    pfVar8[-0x19] = 0.0;
    pfVar8[-0x18] = 0.0;
    fVar14 = fVar15 + fVar15;
    fVar18 = (fVar11 * 1.4142135 - fVar9) * fVar15;
    fVar19 = (fVar11 * fVar11 - 1.0) * fVar14;
    fVar10 = fVar18 * fVar14;
    fVar16 = fVar18 * fVar19;
    fVar13 = fVar19 / fVar17;
    fVar12 = fVar18 / fVar17;
    fVar11 = fVar13 + fVar14;
    pfVar8[-0x17] = fVar11;
    pfVar8[-0x14] = fVar11;
    pfVar8[-0x16] = 0.0;
    pfVar8[-0x15] = 0.0;
    fVar9 = fVar11 * fVar19 + fVar15 + fVar12;
    pfVar8[-0x13] = fVar9;
    pfVar8[-0x11] = fVar11;
    pfVar8[-0x10] = fVar9;
    pfVar8[-0x12] = 0.0;
    pfVar8[-0xf] = fVar16 / fVar17 + fVar9 * fVar19 + fVar10;
    pfVar8[-0xe] = fVar14;
    fVar11 = fVar14 * fVar19 + fVar15;
    pfVar8[-0xd] = fVar11;
    fVar11 = fVar11 * fVar19 + fVar10;
    pfVar8[-0xc] = fVar11;
    pfVar8[-0xb] = (fVar11 + fVar10) * fVar19 + fVar12;
    pfVar8[-9] = fVar13;
    pfVar8[-10] = fVar15;
    pfVar8[-8] = fVar13 * fVar19 + fVar12;
    pfVar8[-7] = ((2.0 / fVar17) * fVar18 + fVar13 * fVar19) * fVar19;
    pfVar8[-6] = fVar19;
    fVar11 = fVar19 * fVar19;
    pfVar8[-5] = fVar11 + fVar18;
    pfVar8[-4] = (fVar11 + fVar18 + fVar18) * fVar19;
    pfVar8[-3] = (fVar18 * 3.0 + fVar11) * fVar19 * fVar19 + fVar18 * fVar18;
    pfVar8[-1] = fVar16;
    pfVar8[-2] = fVar18;
    *pfVar8 = fVar16 * fVar19 + fVar18 * fVar18;
    pfVar8[1] = ((fVar18 + fVar18) * fVar18 + fVar16 * fVar19) * fVar19;
    pfVar8 = pfVar8 + 0x24;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 143232340 InterpolateSamples body=141 status=ok
// SIG undefined InterpolateSamples(void)

void InterpolateSamples(uint param_1,char param_2,longlong param_3,longlong param_4,longlong param_5
                       ,longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
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
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar21 = 1.0;
  fVar22 = 1.0;
  fVar23 = 1.0;
  fVar24 = 1.0;
  if (param_2 != '\0') {
    fVar21 = -1.0;
    fVar22 = -1.0;
    fVar23 = -1.0;
    fVar24 = -1.0;
  }
  uVar20 = 0;
  if (param_1 != 0) {
    do {
      pfVar1 = (float *)(param_4 + uVar20 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      uVar18 = (ulonglong)((int)uVar20 + 4);
      pfVar2 = (float *)(param_3 + uVar20 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(param_5 + uVar20 * 4);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar4 = (float *)(param_3 + uVar20 * 4);
      fVar15 = pfVar4[1];
      fVar16 = pfVar4[2];
      fVar17 = pfVar4[3];
      pfVar5 = (float *)(param_6 + uVar20 * 4);
      *pfVar5 = ((*pfVar1 - *pfVar2) * *pfVar3 + *pfVar4) * fVar21;
      pfVar5[1] = ((fVar6 - fVar9) * fVar12 + fVar15) * fVar22;
      pfVar5[2] = ((fVar7 - fVar10) * fVar13 + fVar16) * fVar23;
      pfVar5[3] = ((fVar8 - fVar11) * fVar14 + fVar17) * fVar24;
      uVar19 = (int)uVar20 + 8;
      uVar20 = (ulonglong)uVar19;
      pfVar1 = (float *)(param_4 + uVar18 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar18 * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(param_5 + uVar18 * 4);
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar4 = (float *)(param_3 + uVar18 * 4);
      fVar15 = pfVar4[1];
      fVar16 = pfVar4[2];
      fVar17 = pfVar4[3];
      pfVar5 = (float *)(param_6 + uVar18 * 4);
      *pfVar5 = ((*pfVar1 - *pfVar2) * *pfVar3 + *pfVar4) * fVar21;
      pfVar5[1] = ((fVar6 - fVar9) * fVar12 + fVar15) * fVar22;
      pfVar5[2] = ((fVar7 - fVar10) * fVar13 + fVar16) * fVar23;
      pfVar5[3] = ((fVar8 - fVar11) * fVar14 + fVar17) * fVar24;
    } while (uVar19 < param_1);
  }
  return;
}



// FUNCTION 1432323d0 LookupSamples body=255 status=ok
// SIG undefined LookupSamples(void)

void LookupSamples(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    param_3 = param_3 - param_4;
    uVar3 = (ulonglong)((param_2 - 1U >> 3) + 1);
    piVar4 = (int *)(param_4 + 8);
    do {
      piVar1 = piVar4 + 8;
      *(undefined4 *)(param_3 + -0x28 + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -8 + (longlong)piVar4) * 4);
      *(undefined4 *)(param_3 + -0x24 + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0x24 + (longlong)piVar1) * 4);
      *(undefined4 *)(param_3 + -0x20 + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0x20 + (longlong)piVar1) * 4);
      *(undefined4 *)(param_3 + -0x1c + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0x1c + (longlong)piVar1) * 4);
      *(undefined4 *)(param_3 + -0x18 + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0x18 + (longlong)piVar1) * 4);
      *(undefined4 *)(param_3 + -0x14 + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0x14 + (longlong)piVar1) * 4);
      *(undefined4 *)(param_3 + -0x10 + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0x10 + (longlong)piVar1) * 4);
      iVar2 = piVar4[-2];
      *(undefined4 *)(param_3 + -0xc + (longlong)piVar1) =
           *(undefined4 *)(param_1 + (longlong)*(int *)(param_3 + -0xc + (longlong)piVar1) * 4);
      piVar4[-2] = *(int *)(param_1 + (longlong)iVar2 * 4);
      piVar4[-1] = *(int *)(param_1 + (longlong)piVar4[-1] * 4);
      *piVar4 = *(int *)(param_1 + (longlong)*piVar4 * 4);
      piVar4[1] = *(int *)(param_1 + (longlong)piVar4[1] * 4);
      piVar4[2] = *(int *)(param_1 + (longlong)piVar4[2] * 4);
      piVar4[3] = *(int *)(param_1 + (longlong)piVar4[3] * 4);
      piVar4[4] = *(int *)(param_1 + (longlong)piVar4[4] * 4);
      piVar4[5] = *(int *)(param_1 + (longlong)piVar4[5] * 4);
      uVar3 = uVar3 - 1;
      piVar4 = piVar1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1432324d0 FUN_1432324d0 body=425 status=ok
// SIG undefined FUN_1432324d0(void)

void FUN_1432324d0(float *param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  float fVar6;
  
  if (param_2 != 0) {
    param_1[0xe4] = 8.0;
    if (*(int *)(param_2 + 0xc) == 0) {
      fVar6 = *(float *)(param_2 + 0x10);
      if (8.0 <= fVar6) {
        if (20000.0 <= fVar6) {
          fVar6 = 20000.0;
        }
        param_1[0xe4] = fVar6;
      }
      else {
        fVar6 = 8.0;
        param_1[0xe4] = 8.0;
      }
    }
    else {
      fVar6 = 8.0;
      if (*(int *)(param_2 + 0xc) == 1) {
        fVar6 = _guard_xfg_dispatch_icall_nop
                          (2.0,((float)*(byte *)((longlong)param_1 + 0x396) - 69.0) * 0.083333336);
        fVar6 = fVar6 * 440.0;
        param_1[0xe4] = fVar6;
      }
    }
    if (8.0 <= fVar6) {
      if (param_1[4] <= fVar6) {
        param_1[0xe4] = param_1[4] - 1.0;
      }
    }
    else {
      param_1[0xe4] = 8.0;
    }
    *(bool *)((longlong)param_1 + 0x15) = *(int *)(param_2 + 8) == 0;
    cVar5 = *(char *)(param_2 + 0x2c);
    if (*(int *)(param_2 + 0x28) == 3) {
      cVar5 = cVar5 == '\0';
    }
    *(char *)(param_1 + 0x15) = cVar5;
    cVar5 = *(char *)(param_2 + 0x40);
    if (*(int *)(param_2 + 0x3c) == 3) {
      cVar5 = cVar5 == '\0';
    }
    *(char *)(param_1 + 0x25) = cVar5;
    param_1[10] = *(float *)(param_2 + 0x28);
    param_1[0x1a] = *(float *)(param_2 + 0x3c);
    CAkSynthOneDsp::RampSetup(param_1,param_2,param_3);
    fVar6 = *param_1;
    if (*(float *)(param_2 + 0x18) != param_1[0x9c]) {
      param_1[0x9c] = *(float *)(param_2 + 0x18);
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe6) + 8))();
      fVar1 = param_1[0x9c];
      uVar4 = 0;
      if (fVar1 != 0.0) {
        if (fVar1 == 1.4013e-45) {
          uVar4 = 1;
        }
        else if (fVar1 == 2.8026e-45) {
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
          if (fVar1 == 4.2039e-45) {
            uVar4 = 3;
          }
        }
      }
      uVar2 = (**(code **)(*plVar3 + 0xd8))(plVar3);
      DSP::CAkColoredNoise::Init(param_1 + 0xa0,uVar4,(longlong)fVar6,uVar2);
    }
  }
  return;
}



// FUNCTION 143232680 Process body=170 status=ok
// SIG undefined Process(void)

undefined1 CAkSynthOneDsp::Process(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    uVar1 = ProcessDsp();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return uVar1;
}



// FUNCTION 143232730 ProcessDsp body=220 status=ok
// SIG undefined ProcessDsp(void)

undefined1
CAkSynthOneDsp::ProcessDsp
          (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_1467c61d0;
  }
  else if (iVar1 == 1) {
    *(undefined **)(param_1 + 0x20) = &DAT_1467c69d0;
  }
  else if (iVar1 == 2) {
    *(undefined **)(param_1 + 0x20) = &DAT_1467c71d0;
  }
  else if (iVar1 == 3) {
    *(undefined **)(param_1 + 0x20) = &DAT_1467c79d0;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    *(undefined **)(param_1 + 0x60) = &DAT_1467c61d0;
  }
  else if (iVar1 == 1) {
    *(undefined **)(param_1 + 0x60) = &DAT_1467c69d0;
  }
  else if (iVar1 == 2) {
    *(undefined **)(param_1 + 0x60) = &DAT_1467c71d0;
  }
  else if (iVar1 == 3) {
    *(undefined **)(param_1 + 0x60) = &DAT_1467c79d0;
  }
  if ((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x60) == 0)) {
    uVar2 = 0;
  }
  else {
    SimdProcOsc(param_1,param_2,param_3,param_4);
    FinalOutput(param_1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143232810 ProcessNoise body=219 status=ok
// SIG undefined ProcessNoise(void)

void CAkSynthOneDsp::ProcessNoise(longlong param_1,int param_2,float *param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
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
  
  fVar3 = *(float *)(param_1 + 0xa4);
  fVar9 = fVar3 + *(float *)(param_1 + 0xac);
  fVar10 = fVar9 + fVar3;
  fVar11 = fVar10 + fVar3;
  fVar15 = fVar3 * 4.0;
  fVar3 = fVar3 + fVar11;
  fVar4 = *(float *)(param_1 + 0x98);
  fVar12 = fVar4 + *(float *)(param_1 + 0xa0);
  fVar13 = fVar12 + fVar4;
  fVar14 = fVar13 + fVar4;
  fVar16 = fVar4 * 4.0;
  fVar4 = fVar4 + fVar14;
  if (param_2 != 0) {
    param_4 = param_4 - (longlong)param_3;
    uVar2 = (ulonglong)((param_2 - 1U >> 2) + 1);
    do {
      pfVar1 = (float *)(param_4 + (longlong)param_3);
      fVar5 = *pfVar1 * fVar12;
      fVar6 = pfVar1[1] * fVar13;
      fVar7 = pfVar1[2] * fVar14;
      fVar8 = pfVar1[3] * fVar4;
      fVar12 = fVar12 + fVar16;
      fVar13 = fVar13 + fVar16;
      fVar14 = fVar14 + fVar16;
      fVar4 = fVar4 + fVar16;
      fVar5 = (*param_3 + fVar5) * fVar9;
      fVar6 = (param_3[1] + fVar6) * fVar10;
      fVar7 = (param_3[2] + fVar7) * fVar11;
      fVar8 = (param_3[3] + fVar8) * fVar3;
      fVar9 = fVar9 + fVar15;
      fVar10 = fVar10 + fVar15;
      fVar11 = fVar11 + fVar15;
      fVar3 = fVar3 + fVar15;
      *param_3 = fVar5;
      param_3[1] = fVar6;
      param_3[2] = fVar7;
      param_3[3] = fVar8;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1432328f0 RampSetup body=968 status=ok
// SIG undefined RampSetup(void)

void CAkSynthOneDsp::RampSetup(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_2 + 0x1c);
  if (-96.0 <= fVar3) {
    if (24.0 <= fVar3) {
      fVar3 = 24.0;
    }
  }
  else {
    fVar3 = -96.0;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0x9c)) {
    *(float *)(param_1 + 0x9c) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xa0) = fVar3;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      *(float *)(param_1 + 0x98) = (fVar3 - *(float *)(param_1 + 0xa0)) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x14);
  if (-96.0 <= fVar3) {
    if (24.0 <= fVar3) {
      fVar3 = 24.0;
    }
  }
  else {
    fVar3 = -96.0;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0xa8)) {
    *(float *)(param_1 + 0xa8) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xac) = fVar3;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      *(float *)(param_1 + 0xa4) = (fVar3 - *(float *)(param_1 + 0xac)) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x34);
  iVar2 = 1;
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar2 = 4;
  }
  param_3 = iVar2 * param_3;
  if (-96.0 <= fVar3) {
    if (24.0 <= fVar3) {
      fVar3 = 24.0;
    }
  }
  else {
    fVar3 = -96.0;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar3 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0x40)) {
    *(float *)(param_1 + 0x40) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x44) = fVar3;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      *(float *)(param_1 + 0x3c) = (fVar3 - *(float *)(param_1 + 0x44)) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x48);
  fVar4 = -96.0;
  if ((-96.0 <= fVar3) && (fVar4 = fVar3, 24.0 <= fVar3)) {
    fVar4 = 24.0;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar4 * 0.05);
  if (fVar3 != *(float *)(param_1 + 0x80)) {
    *(float *)(param_1 + 0x80) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x84) = fVar3;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      *(float *)(param_1 + 0x7c) = (fVar3 - *(float *)(param_1 + 0x84)) / (float)param_3;
    }
  }
  iVar2 = *(int *)(param_2 + 0x30);
  iVar1 = -0xe10;
  if ((-0xe11 < iVar2) && (iVar1 = iVar2, 0xe10 < iVar2)) {
    iVar1 = 0xe10;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(2.0,(float)iVar1 * 0.00083333335);
  if (fVar3 != *(float *)(param_1 + 0x34)) {
    *(float *)(param_1 + 0x34) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x38) = fVar3;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
      *(float *)(param_1 + 0x30) = (fVar3 - *(float *)(param_1 + 0x38)) / (float)param_3;
    }
  }
  iVar2 = *(int *)(param_2 + 0x44);
  iVar1 = -0xe10;
  if ((-0xe11 < iVar2) && (iVar1 = iVar2, 0xe10 < iVar2)) {
    iVar1 = 0xe10;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(2.0,(float)iVar1 * 0.00083333335);
  if (fVar3 != *(float *)(param_1 + 0x74)) {
    *(float *)(param_1 + 0x74) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x78) = fVar3;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    else {
      *(float *)(param_1 + 0x70) = (fVar3 - *(float *)(param_1 + 0x78)) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x38);
  if (fVar3 != *(float *)(param_1 + 0x4c)) {
    *(float *)(param_1 + 0x4c) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x50) = fVar3;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(float *)(param_1 + 0x48) = (fVar3 - *(float *)(param_1 + 0x50)) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x4c);
  if (fVar3 != *(float *)(param_1 + 0x8c)) {
    *(float *)(param_1 + 0x8c) = fVar3;
    if (param_3 == 0) {
      *(float *)(param_1 + 0x90) = fVar3;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    else {
      *(float *)(param_1 + 0x88) = (fVar3 - *(float *)(param_1 + 0x90)) / (float)param_3;
    }
  }
  fVar3 = *(float *)(param_2 + 0x20);
  fVar4 = 0.0;
  if ((0.0 <= fVar3) && (fVar4 = fVar3, 100.0 <= fVar3)) {
    fVar4 = 100.0;
  }
  if (fVar4 != *(float *)(param_1 + 0xb4)) {
    *(float *)(param_1 + 0xb4) = fVar4;
    if (param_3 == 0) {
      *(float *)(param_1 + 0xb8) = fVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    else {
      *(float *)(param_1 + 0xb0) = (fVar4 - *(float *)(param_1 + 0xb8)) / (float)param_3;
    }
  }
  return;
}



// FUNCTION 143232cc0 Reset body=684 status=ok
// SIG undefined Reset(void)

void CAkSynthOneDsp::Reset(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (param_2 != 0) {
    fVar5 = *(float *)(param_2 + 0x34);
    if (-96.0 <= fVar5) {
      if (24.0 <= fVar5) {
        fVar5 = 24.0;
      }
    }
    else {
      fVar5 = -96.0;
    }
    fVar5 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar5 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x40) = fVar5;
      *(float *)(param_1 + 0x44) = fVar5;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x48);
    if (-96.0 <= fVar5) {
      if (24.0 <= fVar5) {
        fVar5 = 24.0;
      }
    }
    else {
      fVar5 = -96.0;
    }
    fVar5 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar5 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0x80)) {
      *(float *)(param_1 + 0x80) = fVar5;
      *(float *)(param_1 + 0x84) = fVar5;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x1c);
    if (-96.0 <= fVar5) {
      if (24.0 <= fVar5) {
        fVar5 = 24.0;
      }
    }
    else {
      fVar5 = -96.0;
    }
    fVar5 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar5 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0x9c)) {
      *(float *)(param_1 + 0x9c) = fVar5;
      *(float *)(param_1 + 0xa0) = fVar5;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x14);
    fVar6 = -96.0;
    if ((-96.0 <= fVar5) && (fVar6 = fVar5, 24.0 <= fVar5)) {
      fVar6 = 24.0;
    }
    fVar5 = ::_guard_xfg_dispatch_icall_nop(10.0,fVar6 * 0.05);
    if (fVar5 != *(float *)(param_1 + 0xa8)) {
      *(float *)(param_1 + 0xa8) = fVar5;
      *(float *)(param_1 + 0xac) = fVar5;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    iVar4 = -0xe10;
    if ((-0xe11 < iVar1) && (iVar4 = iVar1, 0xe10 < iVar1)) {
      iVar4 = 0xe10;
    }
    fVar5 = ::_guard_xfg_dispatch_icall_nop(2.0,(float)iVar4 * 0.00083333335);
    if (fVar5 != *(float *)(param_1 + 0x34)) {
      *(float *)(param_1 + 0x34) = fVar5;
      *(float *)(param_1 + 0x38) = fVar5;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x44);
    iVar4 = -0xe10;
    if ((-0xe11 < iVar1) && (iVar4 = iVar1, 0xe10 < iVar1)) {
      iVar4 = 0xe10;
    }
    fVar5 = ::_guard_xfg_dispatch_icall_nop(2.0,(float)iVar4 * 0.00083333335);
    if (fVar5 != *(float *)(param_1 + 0x74)) {
      *(float *)(param_1 + 0x74) = fVar5;
      *(float *)(param_1 + 0x78) = fVar5;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x38);
    if (fVar5 != *(float *)(param_1 + 0x4c)) {
      *(float *)(param_1 + 0x4c) = fVar5;
      *(float *)(param_1 + 0x50) = fVar5;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x4c);
    if (fVar5 != *(float *)(param_1 + 0x8c)) {
      *(float *)(param_1 + 0x8c) = fVar5;
      *(float *)(param_1 + 0x90) = fVar5;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    fVar5 = *(float *)(param_2 + 0x20);
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 100.0 <= fVar5)) {
      fVar6 = 100.0;
    }
    if (fVar6 != *(float *)(param_1 + 0xb4)) {
      *(float *)(param_1 + 0xb4) = fVar6;
      *(float *)(param_1 + 0xb8) = fVar6;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x140);
  lVar2 = 3;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 0x12;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143232f70 FUN_143232f70 body=169 status=ok
// SIG undefined FUN_143232f70(void)

void FUN_143232f70(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  GetSampleIndices<FmPolicyNone,PwmPolicyNone>
            (param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,param_7,
             lVar1,param_5);
  LookupSamples(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  InterpolateSamples(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 143233020 SimdProcOsc body=2183 status=ok
// SIG undefined SimdProcOsc(void)

void CAkSynthOneDsp::SimdProcOsc(longlong param_1,uint param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  uint uVar3;
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
  code *pcVar18;
  code *pcVar19;
  ulonglong uVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
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
  
  uVar3 = param_2 * 4;
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar3 = param_2;
  }
  uVar28 = (ulonglong)uVar3;
  pfVar21 = (float *)(param_4 + (ulonglong)uVar3 * 4 + uVar28 * 4);
  pcVar18 = (code *)GetSimdOscProcFn(param_1,param_1 + 0x18);
  pcVar19 = (code *)GetSimdOscProcFn(param_1,param_1 + 0x58);
  uVar27 = 0;
  (*pcVar19)(param_1,uVar28,*(undefined4 *)(param_1 + 0x390),param_1 + 0x58,param_4,0,pfVar21);
  (*pcVar18)(param_1,uVar3,*(undefined4 *)(param_1 + 0x390),param_1 + 0x18,param_4 + uVar28 * 4,
             param_4,pfVar21);
  fVar29 = *(float *)(param_1 + 0x3c);
  fVar33 = *(float *)(param_1 + 0x44) + fVar29;
  pfVar23 = param_3;
  if (*(char *)(param_1 + 0x14) != '\0') {
    pfVar23 = pfVar21;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    fVar34 = fVar33 + fVar29;
    fVar35 = fVar34 + fVar29;
    fVar42 = fVar29 * 4.0;
    fVar29 = fVar29 + fVar35;
    fVar30 = *(float *)(param_1 + 0x7c);
    fVar36 = fVar30 + *(float *)(param_1 + 0x84);
    fVar37 = fVar36 + fVar30;
    fVar38 = fVar37 + fVar30;
    fVar43 = fVar30 * 4.0;
    fVar30 = fVar30 + fVar38;
    if (uVar3 != 0) {
      lVar1 = param_4 + uVar28 * 4;
      uVar26 = uVar27;
      do {
        uVar20 = (ulonglong)((int)uVar26 + 4);
        pfVar21 = (float *)(lVar1 + uVar20 * 4);
        fVar4 = *pfVar21;
        fVar5 = pfVar21[1];
        fVar6 = pfVar21[2];
        fVar7 = pfVar21[3];
        uVar24 = (int)uVar26 + 8;
        pfVar21 = (float *)(param_4 + uVar20 * 4);
        fVar8 = *pfVar21;
        fVar9 = pfVar21[1];
        fVar10 = pfVar21[2];
        fVar11 = pfVar21[3];
        pfVar21 = (float *)(lVar1 + uVar26 * 4);
        pfVar2 = (float *)(param_4 + uVar26 * 4);
        fVar48 = *pfVar21 * fVar33;
        fVar49 = pfVar21[1] * fVar34;
        fVar50 = pfVar21[2] * fVar35;
        fVar51 = pfVar21[3] * fVar29;
        fVar52 = fVar33 + fVar42;
        fVar53 = fVar34 + fVar42;
        fVar54 = fVar35 + fVar42;
        fVar55 = fVar29 + fVar42;
        fVar44 = *pfVar2 * fVar36;
        fVar45 = pfVar2[1] * fVar37;
        fVar46 = pfVar2[2] * fVar38;
        fVar47 = pfVar2[3] * fVar30;
        fVar56 = fVar36 + fVar43;
        fVar57 = fVar37 + fVar43;
        fVar58 = fVar38 + fVar43;
        fVar59 = fVar30 + fVar43;
        fVar33 = fVar52 + fVar42;
        fVar34 = fVar53 + fVar42;
        fVar35 = fVar54 + fVar42;
        fVar29 = fVar55 + fVar42;
        fVar36 = fVar56 + fVar43;
        fVar37 = fVar57 + fVar43;
        fVar38 = fVar58 + fVar43;
        fVar30 = fVar59 + fVar43;
        pfVar21 = pfVar23 + uVar26;
        *pfVar21 = fVar44 * fVar48;
        pfVar21[1] = fVar45 * fVar49;
        pfVar21[2] = fVar46 * fVar50;
        pfVar21[3] = fVar47 * fVar51;
        pfVar21 = pfVar23 + uVar20;
        *pfVar21 = fVar8 * fVar56 * fVar4 * fVar52;
        pfVar21[1] = fVar9 * fVar57 * fVar5 * fVar53;
        pfVar21[2] = fVar10 * fVar58 * fVar6 * fVar54;
        pfVar21[3] = fVar11 * fVar59 * fVar7 * fVar55;
        uVar26 = (ulonglong)uVar24;
      } while (uVar24 < uVar3);
    }
  }
  else {
    fVar34 = fVar33 + fVar29;
    fVar35 = fVar34 + fVar29;
    fVar42 = fVar29 * 4.0;
    fVar29 = fVar29 + fVar35;
    fVar30 = *(float *)(param_1 + 0x7c);
    fVar36 = fVar30 + *(float *)(param_1 + 0x84);
    fVar37 = fVar36 + fVar30;
    fVar38 = fVar37 + fVar30;
    fVar43 = fVar30 * 4.0;
    fVar30 = fVar30 + fVar38;
    if (uVar3 != 0) {
      lVar1 = param_4 + uVar28 * 4;
      uVar26 = uVar27;
      do {
        uVar20 = (ulonglong)((int)uVar26 + 4);
        pfVar21 = (float *)(lVar1 + uVar20 * 4);
        fVar4 = *pfVar21;
        fVar5 = pfVar21[1];
        fVar6 = pfVar21[2];
        fVar7 = pfVar21[3];
        uVar24 = (int)uVar26 + 8;
        pfVar21 = (float *)(param_4 + uVar20 * 4);
        fVar8 = *pfVar21;
        fVar9 = pfVar21[1];
        fVar10 = pfVar21[2];
        fVar11 = pfVar21[3];
        pfVar21 = (float *)(lVar1 + uVar26 * 4);
        pfVar2 = (float *)(param_4 + uVar26 * 4);
        fVar48 = *pfVar21 * fVar33;
        fVar49 = pfVar21[1] * fVar34;
        fVar50 = pfVar21[2] * fVar35;
        fVar51 = pfVar21[3] * fVar29;
        fVar52 = fVar33 + fVar42;
        fVar53 = fVar34 + fVar42;
        fVar54 = fVar35 + fVar42;
        fVar55 = fVar29 + fVar42;
        fVar44 = *pfVar2 * fVar36;
        fVar45 = pfVar2[1] * fVar37;
        fVar46 = pfVar2[2] * fVar38;
        fVar47 = pfVar2[3] * fVar30;
        fVar56 = fVar36 + fVar43;
        fVar57 = fVar37 + fVar43;
        fVar58 = fVar38 + fVar43;
        fVar59 = fVar30 + fVar43;
        fVar33 = fVar52 + fVar42;
        fVar34 = fVar53 + fVar42;
        fVar35 = fVar54 + fVar42;
        fVar29 = fVar55 + fVar42;
        fVar36 = fVar56 + fVar43;
        fVar37 = fVar57 + fVar43;
        fVar38 = fVar58 + fVar43;
        fVar30 = fVar59 + fVar43;
        pfVar21 = pfVar23 + uVar26;
        *pfVar21 = fVar44 + fVar48;
        pfVar21[1] = fVar45 + fVar49;
        pfVar21[2] = fVar46 + fVar50;
        pfVar21[3] = fVar47 + fVar51;
        pfVar21 = pfVar23 + uVar20;
        *pfVar21 = fVar8 * fVar56 + fVar4 * fVar52;
        pfVar21[1] = fVar9 * fVar57 + fVar5 * fVar53;
        pfVar21[2] = fVar10 * fVar58 + fVar6 * fVar54;
        pfVar21[3] = fVar11 * fVar59 + fVar7 * fVar55;
        uVar26 = (ulonglong)uVar24;
      } while (uVar24 < uVar3);
    }
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    uVar25 = uVar3 & 3;
    uVar24 = uVar3;
    if (uVar25 != 0) {
      pfVar21 = pfVar23 + uVar28;
      iVar22 = 4 - uVar25;
      uVar24 = uVar3 + iVar22;
      do {
        *pfVar21 = 0.0;
        pfVar21 = pfVar21 + 1;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    fVar29 = *(float *)(param_1 + 0x148);
    fVar33 = *(float *)(param_1 + 0x14c);
    fVar30 = *(float *)(param_1 + 0xc0);
    fVar34 = *(float *)(param_1 + 0xc4);
    fVar35 = *(float *)(param_1 + 200);
    fVar36 = *(float *)(param_1 + 0xcc);
    fVar37 = *(float *)(param_1 + 0xd0);
    fVar38 = *(float *)(param_1 + 0xd4);
    fVar42 = *(float *)(param_1 + 0xd8);
    fVar43 = *(float *)(param_1 + 0xdc);
    fVar4 = *(float *)(param_1 + 0xe0);
    fVar5 = *(float *)(param_1 + 0xe4);
    fVar6 = *(float *)(param_1 + 0xe8);
    fVar7 = *(float *)(param_1 + 0xec);
    fVar8 = *(float *)(param_1 + 0xf0);
    fVar9 = *(float *)(param_1 + 0xf4);
    fVar10 = *(float *)(param_1 + 0xf8);
    fVar11 = *(float *)(param_1 + 0xfc);
    fVar44 = *(float *)(param_1 + 0x100);
    fVar45 = *(float *)(param_1 + 0x104);
    fVar46 = *(float *)(param_1 + 0x108);
    fVar47 = *(float *)(param_1 + 0x10c);
    fVar48 = *(float *)(param_1 + 0x110);
    fVar49 = *(float *)(param_1 + 0x114);
    fVar50 = *(float *)(param_1 + 0x118);
    fVar51 = *(float *)(param_1 + 0x11c);
    fVar52 = *(float *)(param_1 + 0x120);
    fVar53 = *(float *)(param_1 + 0x124);
    fVar54 = *(float *)(param_1 + 0x128);
    fVar55 = *(float *)(param_1 + 300);
    fVar56 = *(float *)(param_1 + 0x130);
    fVar57 = *(float *)(param_1 + 0x134);
    fVar58 = *(float *)(param_1 + 0x138);
    fVar59 = *(float *)(param_1 + 0x13c);
    fVar16 = *(float *)(param_1 + 0x140);
    fVar17 = *(float *)(param_1 + 0x144);
    for (pfVar21 = pfVar23; pfVar21 < pfVar23 + uVar24; pfVar21 = pfVar21 + 4) {
      fVar12 = *pfVar21;
      fVar13 = pfVar21[1];
      fVar14 = pfVar21[2];
      fVar15 = pfVar21[3];
      fVar31 = fVar52 * fVar29;
      fVar32 = fVar53 * fVar29;
      fVar39 = fVar56 * fVar33;
      fVar40 = fVar57 * fVar33;
      fVar41 = fVar59 * fVar33;
      fVar33 = fVar13 * fVar6 +
               fVar42 * fVar14 +
               fVar14 * fVar35 + fVar46 * fVar16 + fVar50 * fVar17 + fVar54 * fVar29 +
               fVar58 * fVar33 + fVar12 * fVar10;
      fVar29 = fVar13 * fVar7 +
               fVar43 * fVar14 +
               fVar15 * fVar36 + fVar47 * fVar16 + fVar51 * fVar17 + fVar55 * fVar29 + fVar41 +
               fVar12 * fVar11;
      *pfVar21 = fVar13 * fVar4 +
                 fVar37 * fVar14 +
                 fVar12 * fVar30 + fVar44 * fVar16 + fVar48 * fVar17 + fVar31 + fVar39 +
                 fVar12 * fVar8;
      pfVar21[1] = fVar13 * fVar5 +
                   fVar38 * fVar14 +
                   fVar13 * fVar34 + fVar45 * fVar16 + fVar49 * fVar17 + fVar32 + fVar40 +
                   fVar12 * fVar9;
      pfVar21[2] = fVar33;
      pfVar21[3] = fVar29;
      fVar16 = fVar15;
      fVar17 = fVar14;
    }
    *(float *)(param_1 + 0x140) = fVar16;
    *(float *)(param_1 + 0x144) = fVar17;
    *(float *)(param_1 + 0x148) = fVar29;
    *(float *)(param_1 + 0x14c) = fVar33;
    uVar24 = uVar3;
    if (uVar25 != 0) {
      pfVar21 = pfVar23 + uVar28;
      iVar22 = 4 - uVar25;
      uVar24 = uVar3 + iVar22;
      do {
        *pfVar21 = 0.0;
        pfVar21 = pfVar21 + 1;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    fVar29 = *(float *)(param_1 + 0x1d8);
    fVar33 = *(float *)(param_1 + 0x1dc);
    fVar30 = *(float *)(param_1 + 0x150);
    fVar34 = *(float *)(param_1 + 0x154);
    fVar35 = *(float *)(param_1 + 0x158);
    fVar36 = *(float *)(param_1 + 0x15c);
    fVar37 = *(float *)(param_1 + 0x160);
    fVar38 = *(float *)(param_1 + 0x164);
    fVar42 = *(float *)(param_1 + 0x168);
    fVar43 = *(float *)(param_1 + 0x16c);
    fVar4 = *(float *)(param_1 + 0x170);
    fVar5 = *(float *)(param_1 + 0x174);
    fVar6 = *(float *)(param_1 + 0x178);
    fVar7 = *(float *)(param_1 + 0x17c);
    fVar8 = *(float *)(param_1 + 0x180);
    fVar9 = *(float *)(param_1 + 0x184);
    fVar10 = *(float *)(param_1 + 0x188);
    fVar11 = *(float *)(param_1 + 0x18c);
    fVar44 = *(float *)(param_1 + 400);
    fVar45 = *(float *)(param_1 + 0x194);
    fVar46 = *(float *)(param_1 + 0x198);
    fVar47 = *(float *)(param_1 + 0x19c);
    fVar48 = *(float *)(param_1 + 0x1a0);
    fVar49 = *(float *)(param_1 + 0x1a4);
    fVar50 = *(float *)(param_1 + 0x1a8);
    fVar51 = *(float *)(param_1 + 0x1ac);
    fVar52 = *(float *)(param_1 + 0x1b0);
    fVar53 = *(float *)(param_1 + 0x1b4);
    fVar54 = *(float *)(param_1 + 0x1b8);
    fVar55 = *(float *)(param_1 + 0x1bc);
    fVar56 = *(float *)(param_1 + 0x1c0);
    fVar57 = *(float *)(param_1 + 0x1c4);
    fVar58 = *(float *)(param_1 + 0x1c8);
    fVar59 = *(float *)(param_1 + 0x1cc);
    fVar16 = *(float *)(param_1 + 0x1d0);
    fVar17 = *(float *)(param_1 + 0x1d4);
    for (pfVar21 = pfVar23; pfVar21 < pfVar23 + uVar24; pfVar21 = pfVar21 + 4) {
      fVar12 = *pfVar21;
      fVar13 = pfVar21[1];
      fVar14 = pfVar21[2];
      fVar15 = pfVar21[3];
      fVar31 = fVar52 * fVar29;
      fVar32 = fVar53 * fVar29;
      fVar39 = fVar56 * fVar33;
      fVar40 = fVar57 * fVar33;
      fVar41 = fVar59 * fVar33;
      fVar33 = fVar13 * fVar6 +
               fVar42 * fVar14 +
               fVar14 * fVar35 + fVar46 * fVar16 + fVar50 * fVar17 + fVar54 * fVar29 +
               fVar58 * fVar33 + fVar12 * fVar10;
      fVar29 = fVar13 * fVar7 +
               fVar43 * fVar14 +
               fVar15 * fVar36 + fVar47 * fVar16 + fVar51 * fVar17 + fVar55 * fVar29 + fVar41 +
               fVar12 * fVar11;
      *pfVar21 = fVar13 * fVar4 +
                 fVar37 * fVar14 +
                 fVar12 * fVar30 + fVar44 * fVar16 + fVar48 * fVar17 + fVar31 + fVar39 +
                 fVar12 * fVar8;
      pfVar21[1] = fVar13 * fVar5 +
                   fVar38 * fVar14 +
                   fVar13 * fVar34 + fVar45 * fVar16 + fVar49 * fVar17 + fVar32 + fVar40 +
                   fVar12 * fVar9;
      pfVar21[2] = fVar33;
      pfVar21[3] = fVar29;
      fVar16 = fVar15;
      fVar17 = fVar14;
    }
    *(float *)(param_1 + 0x1d0) = fVar16;
    *(float *)(param_1 + 0x1d4) = fVar17;
    *(float *)(param_1 + 0x1d8) = fVar29;
    *(float *)(param_1 + 0x1dc) = fVar33;
    uVar24 = uVar3;
    if (uVar25 != 0) {
      iVar22 = 4 - uVar25;
      pfVar21 = pfVar23 + uVar28;
      uVar24 = uVar3 + iVar22;
      do {
        *pfVar21 = 0.0;
        pfVar21 = pfVar21 + 1;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    fVar29 = *(float *)(param_1 + 0x268);
    fVar33 = *(float *)(param_1 + 0x26c);
    fVar30 = *(float *)(param_1 + 0x1e0);
    fVar34 = *(float *)(param_1 + 0x1e4);
    fVar35 = *(float *)(param_1 + 0x1e8);
    fVar36 = *(float *)(param_1 + 0x1ec);
    fVar37 = *(float *)(param_1 + 0x1f0);
    fVar38 = *(float *)(param_1 + 500);
    fVar42 = *(float *)(param_1 + 0x1f8);
    fVar43 = *(float *)(param_1 + 0x1fc);
    fVar4 = *(float *)(param_1 + 0x200);
    fVar5 = *(float *)(param_1 + 0x204);
    fVar6 = *(float *)(param_1 + 0x208);
    fVar7 = *(float *)(param_1 + 0x20c);
    fVar8 = *(float *)(param_1 + 0x210);
    fVar9 = *(float *)(param_1 + 0x214);
    fVar10 = *(float *)(param_1 + 0x218);
    fVar11 = *(float *)(param_1 + 0x21c);
    fVar44 = *(float *)(param_1 + 0x220);
    fVar45 = *(float *)(param_1 + 0x224);
    fVar46 = *(float *)(param_1 + 0x228);
    fVar47 = *(float *)(param_1 + 0x22c);
    fVar48 = *(float *)(param_1 + 0x230);
    fVar49 = *(float *)(param_1 + 0x234);
    fVar50 = *(float *)(param_1 + 0x238);
    fVar51 = *(float *)(param_1 + 0x23c);
    fVar52 = *(float *)(param_1 + 0x240);
    fVar53 = *(float *)(param_1 + 0x244);
    fVar54 = *(float *)(param_1 + 0x248);
    fVar55 = *(float *)(param_1 + 0x24c);
    fVar56 = *(float *)(param_1 + 0x250);
    fVar57 = *(float *)(param_1 + 0x254);
    fVar58 = *(float *)(param_1 + 600);
    fVar59 = *(float *)(param_1 + 0x25c);
    fVar16 = *(float *)(param_1 + 0x260);
    fVar17 = *(float *)(param_1 + 0x264);
    for (pfVar21 = pfVar23; pfVar21 < pfVar23 + uVar24; pfVar21 = pfVar21 + 4) {
      fVar12 = *pfVar21;
      fVar13 = pfVar21[1];
      fVar14 = pfVar21[2];
      fVar15 = pfVar21[3];
      fVar31 = fVar52 * fVar29;
      fVar32 = fVar53 * fVar29;
      fVar39 = fVar56 * fVar33;
      fVar40 = fVar57 * fVar33;
      fVar41 = fVar59 * fVar33;
      fVar33 = fVar13 * fVar6 +
               fVar42 * fVar14 +
               fVar14 * fVar35 + fVar46 * fVar16 + fVar50 * fVar17 + fVar54 * fVar29 +
               fVar58 * fVar33 + fVar12 * fVar10;
      fVar29 = fVar13 * fVar7 +
               fVar43 * fVar14 +
               fVar15 * fVar36 + fVar47 * fVar16 + fVar51 * fVar17 + fVar55 * fVar29 + fVar41 +
               fVar12 * fVar11;
      *pfVar21 = fVar13 * fVar4 +
                 fVar37 * fVar14 +
                 fVar12 * fVar30 + fVar44 * fVar16 + fVar48 * fVar17 + fVar31 + fVar39 +
                 fVar12 * fVar8;
      pfVar21[1] = fVar13 * fVar5 +
                   fVar38 * fVar14 +
                   fVar13 * fVar34 + fVar45 * fVar16 + fVar49 * fVar17 + fVar32 + fVar40 +
                   fVar12 * fVar9;
      pfVar21[2] = fVar33;
      pfVar21[3] = fVar29;
      fVar16 = fVar15;
      fVar17 = fVar14;
    }
    *(float *)(param_1 + 0x260) = fVar16;
    *(float *)(param_1 + 0x264) = fVar17;
    *(float *)(param_1 + 0x268) = fVar29;
    *(float *)(param_1 + 0x26c) = fVar33;
    if (uVar3 != 0) {
      pfVar21 = param_3 + 2;
      pfVar23 = pfVar23 + 7;
      do {
        uVar24 = (int)uVar27 + 0x10;
        uVar27 = (ulonglong)uVar24;
        pfVar21[-2] = pfVar23[-4];
        pfVar21[-1] = *pfVar23;
        *pfVar21 = pfVar23[4];
        pfVar21[1] = pfVar23[8];
        pfVar21 = pfVar21 + 4;
        pfVar23 = pfVar23 + 0x10;
      } while (uVar24 < uVar3);
    }
  }
  return;
}



// FUNCTION 1432338b0 FUN_1432338b0 body=169 status=ok
// SIG undefined FUN_1432338b0(void)

void FUN_1432338b0(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  GetSampleIndices<FmPolicyWith,PwmPolicyNone>
            (param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,param_7,
             lVar1,param_5);
  LookupSamples(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  InterpolateSamples(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 143233960 FUN_143233960 body=169 status=ok
// SIG undefined FUN_143233960(void)

void FUN_143233960(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  GetSampleIndices<FmPolicyWith,PwmPolicyWith>
            (param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,param_7,
             lVar1,param_5);
  LookupSamples(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  InterpolateSamples(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 143233a10 FUN_143233a10 body=169 status=ok
// SIG undefined FUN_143233a10(void)

void FUN_143233a10(longlong param_1,uint param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = param_7 + (ulonglong)param_2 * 4;
  GetSampleIndices<FmPolicyNone,PwmPolicyWith>
            (param_2,param_3,*(undefined4 *)(param_1 + 0xc),param_4,param_1 + 0xb0,param_6,param_7,
             lVar1,param_5);
  LookupSamples(*(undefined8 *)(param_4 + 8),(ulonglong)param_2,param_7,lVar1);
  InterpolateSamples(param_2,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1);
  return;
}



// FUNCTION 143233ac0 GenerateBuffer body=230 status=ok
// SIG undefined GenerateBuffer(void)

void DSP::CAkWhiteNoise::GenerateBuffer(int *param_1,float *param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  uVar2 = 0;
  if (param_2 + uVar4 < param_2) {
    uVar4 = 0;
  }
  if (3 < uVar4) {
    lVar3 = (uVar4 - 4 >> 2) + 1;
    uVar2 = lVar3 * 4;
    do {
      iVar1 = *param_1 * 0x343fd + 0x269ec3;
      *param_2 = (float)iVar1 * 2.3283064e-10;
      iVar1 = iVar1 * 0x343fd + 0x269ec3;
      param_2[1] = (float)iVar1 * 2.3283064e-10;
      iVar1 = iVar1 * 0x343fd + 0x269ec3;
      param_2[2] = (float)iVar1 * 2.3283064e-10;
      iVar1 = iVar1 * 0x343fd + 0x269ec3;
      *param_1 = iVar1;
      param_2[3] = (float)iVar1 * 2.3283064e-10;
      param_2 = param_2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  for (; uVar2 < uVar4; uVar2 = uVar2 + 1) {
    iVar1 = *param_1 * 0x343fd + 0x269ec3;
    *param_1 = iVar1;
    *param_2 = (float)iVar1 * 2.3283064e-10;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 143233bb0 GenerateBufferPink body=570 status=ok
// SIG undefined GenerateBufferPink(void)

void DSP::CAkColoredNoise::GenerateBufferPink(longlong param_1,float *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  CAkWhiteNoise::GenerateBuffer();
  uVar3 = *(uint *)(param_1 + 0x10);
  pfVar8 = param_2 + param_3;
  fVar11 = *(float *)(param_1 + 0x14);
  uVar5 = 0;
  uVar7 = (ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) >> 2;
  if (pfVar8 < param_2) {
    uVar7 = uVar5;
  }
  pfVar6 = param_2;
  if (3 < uVar7) {
    lVar4 = (uVar7 - 4 >> 2) + 1;
    uVar5 = lVar4 * 4;
    do {
      fVar9 = *pfVar8;
      uVar2 = uVar3 + 1 & 0xffff;
      fVar10 = *(float *)(param_1 + 0x18 +
                         (longlong)
                         *(int *)(&DAT_145aec750 +
                                 (ulonglong)((-uVar2 & uVar3 + 1 & 0xffff) * 0x77cb531 >> 0x1b) * 4)
                         * 4);
      *(float *)(param_1 + 0x18 +
                (longlong)
                *(int *)(&DAT_145aec750 +
                        (ulonglong)((-uVar2 & uVar3 + 1 & 0xffff) * 0x77cb531 >> 0x1b) * 4) * 4) =
           fVar9;
      uVar2 = uVar2 + 1;
      uVar3 = uVar2 & 0xffff;
      fVar9 = (fVar11 - fVar10) + fVar9;
      iVar1 = *(int *)(&DAT_145aec750 +
                      (ulonglong)((-uVar3 & uVar2 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
      *pfVar6 = (fVar9 + *pfVar6) * 0.14705883;
      fVar11 = *(float *)(param_1 + 0x18 + (longlong)iVar1 * 4);
      fVar10 = pfVar8[1];
      *(float *)(param_1 + 0x18 + (longlong)iVar1 * 4) = fVar10;
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
      fVar10 = (fVar9 - fVar11) + fVar10;
      iVar1 = *(int *)(&DAT_145aec750 +
                      (ulonglong)((-uVar2 & uVar3 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
      pfVar6[1] = (fVar10 + pfVar6[1]) * 0.14705883;
      fVar11 = *(float *)(param_1 + 0x18 + (longlong)iVar1 * 4);
      fVar9 = pfVar8[2];
      *(float *)(param_1 + 0x18 + (longlong)iVar1 * 4) = fVar9;
      uVar3 = uVar2 + 1 & 0xffff;
      fVar9 = (fVar10 - fVar11) + fVar9;
      iVar1 = *(int *)(&DAT_145aec750 + (ulonglong)((-uVar3 & uVar3) * 0x77cb531 >> 0x1b) * 4);
      pfVar6[2] = (fVar9 + pfVar6[2]) * 0.14705883;
      fVar11 = pfVar8[3];
      pfVar8 = pfVar8 + 4;
      fVar10 = *(float *)(param_1 + 0x18 + (longlong)iVar1 * 4);
      *(float *)(param_1 + 0x18 + (longlong)iVar1 * 4) = fVar11;
      fVar11 = (fVar9 - fVar10) + fVar11;
      pfVar6[3] = (fVar11 + pfVar6[3]) * 0.14705883;
      pfVar6 = pfVar6 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (uVar5 < uVar7) {
    lVar4 = (longlong)pfVar8 - (longlong)pfVar6;
    do {
      fVar9 = *(float *)(lVar4 + (longlong)pfVar6);
      uVar3 = uVar3 + 1 & 0xffff;
      uVar5 = uVar5 + 1;
      fVar10 = *(float *)(param_1 + 0x18 +
                         (longlong)
                         *(int *)(&DAT_145aec750 +
                                 (ulonglong)((-uVar3 & uVar3) * 0x77cb531 >> 0x1b) * 4) * 4);
      *(float *)(param_1 + 0x18 +
                (longlong)
                *(int *)(&DAT_145aec750 + (ulonglong)((-uVar3 & uVar3) * 0x77cb531 >> 0x1b) * 4) * 4
                ) = fVar9;
      fVar11 = (fVar11 - fVar10) + fVar9;
      *pfVar6 = (fVar11 + *pfVar6) * 0.14705883;
      pfVar6 = pfVar6 + 1;
    } while (uVar5 < uVar7);
  }
  OnePoleZeroHPFilter::ProcessBuffer(param_1 + 4,param_2,(ulonglong)param_3);
  *(float *)(param_1 + 0x14) = fVar11;
  *(uint *)(param_1 + 0x10) = uVar3;
  return;
}



// FUNCTION 143233df0 GenerateBufferPurple body=546 status=ok
// SIG undefined GenerateBufferPurple(void)

void DSP::CAkColoredNoise::GenerateBufferPurple(longlong param_1,float *param_2,uint param_3)

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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float *pfVar39;
  ulonglong uVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  uVar40 = (ulonglong)param_3;
  CAkWhiteNoise::GenerateBuffer();
  if ((param_3 & 3) != 0) {
    pfVar39 = param_2 + uVar40;
    iVar41 = 4 - (param_3 & 3);
    uVar40 = (ulonglong)(param_3 + iVar41);
    do {
      *pfVar39 = 0.0;
      pfVar39 = pfVar39 + 1;
      iVar41 = iVar41 + -1;
    } while (iVar41 != 0);
  }
  pfVar39 = param_2 + uVar40;
  fVar48 = *(float *)(param_1 + 0xf8);
  fVar46 = *(float *)(param_1 + 0xfc);
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  fVar3 = *(float *)(param_1 + 0x78);
  fVar4 = *(float *)(param_1 + 0x7c);
  fVar5 = *(float *)(param_1 + 0x80);
  fVar6 = *(float *)(param_1 + 0x84);
  fVar7 = *(float *)(param_1 + 0x88);
  fVar8 = *(float *)(param_1 + 0x8c);
  fVar9 = *(float *)(param_1 + 0x90);
  fVar10 = *(float *)(param_1 + 0x94);
  fVar11 = *(float *)(param_1 + 0x98);
  fVar12 = *(float *)(param_1 + 0x9c);
  fVar13 = *(float *)(param_1 + 0xa0);
  fVar14 = *(float *)(param_1 + 0xa4);
  fVar15 = *(float *)(param_1 + 0xa8);
  fVar16 = *(float *)(param_1 + 0xac);
  fVar17 = *(float *)(param_1 + 0xb0);
  fVar18 = *(float *)(param_1 + 0xb4);
  fVar19 = *(float *)(param_1 + 0xb8);
  fVar20 = *(float *)(param_1 + 0xbc);
  fVar21 = *(float *)(param_1 + 0xc0);
  fVar22 = *(float *)(param_1 + 0xc4);
  fVar23 = *(float *)(param_1 + 200);
  fVar24 = *(float *)(param_1 + 0xcc);
  fVar25 = *(float *)(param_1 + 0xd0);
  fVar26 = *(float *)(param_1 + 0xd4);
  fVar27 = *(float *)(param_1 + 0xd8);
  fVar28 = *(float *)(param_1 + 0xdc);
  fVar29 = *(float *)(param_1 + 0xe0);
  fVar30 = *(float *)(param_1 + 0xe4);
  fVar31 = *(float *)(param_1 + 0xe8);
  fVar32 = *(float *)(param_1 + 0xec);
  fVar37 = *(float *)(param_1 + 0xf0);
  fVar38 = *(float *)(param_1 + 0xf4);
  for (; param_2 < pfVar39; param_2 = param_2 + 4) {
    fVar33 = *param_2;
    fVar34 = param_2[1];
    fVar35 = param_2[2];
    fVar36 = param_2[3];
    fVar42 = fVar25 * fVar48;
    fVar43 = fVar26 * fVar48;
    fVar44 = fVar29 * fVar46;
    fVar45 = fVar30 * fVar46;
    fVar47 = fVar32 * fVar46;
    fVar46 = fVar34 * fVar11 +
             fVar7 * fVar35 +
             fVar35 * fVar3 + fVar19 * fVar37 + fVar23 * fVar38 + fVar27 * fVar48 + fVar31 * fVar46
             + fVar33 * fVar15;
    fVar48 = fVar34 * fVar12 +
             fVar8 * fVar35 +
             fVar36 * fVar4 + fVar20 * fVar37 + fVar24 * fVar38 + fVar28 * fVar48 + fVar47 +
             fVar33 * fVar16;
    *param_2 = fVar34 * fVar9 +
               fVar5 * fVar35 + fVar33 * fVar1 + fVar17 * fVar37 + fVar21 * fVar38 + fVar42 + fVar44
               + fVar33 * fVar13;
    param_2[1] = fVar34 * fVar10 +
                 fVar6 * fVar35 +
                 fVar34 * fVar2 + fVar18 * fVar37 + fVar22 * fVar38 + fVar43 + fVar45 +
                 fVar33 * fVar14;
    param_2[2] = fVar46;
    param_2[3] = fVar48;
    fVar37 = fVar36;
    fVar38 = fVar35;
  }
  *(float *)(param_1 + 0xf0) = fVar37;
  *(float *)(param_1 + 0xf4) = fVar38;
  *(float *)(param_1 + 0xf8) = fVar48;
  *(float *)(param_1 + 0xfc) = fVar46;
  return;
}



// FUNCTION 143234020 GenerateBufferRed body=250 status=ok
// SIG undefined GenerateBufferRed(void)

void DSP::CAkColoredNoise::GenerateBufferRed(longlong param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar3 = (ulonglong)param_3;
  CAkWhiteNoise::GenerateBuffer();
  fVar4 = *(float *)(param_1 + 0x58);
  uVar2 = 0;
  if (param_2 + uVar3 < param_2) {
    uVar3 = 0;
  }
  if (3 < uVar3) {
    lVar1 = (uVar3 - 4 >> 2) + 1;
    uVar2 = lVar1 * 4;
    do {
      fVar4 = *param_2 * *(float *)(param_1 + 0x5c) - fVar4 * *(float *)(param_1 + 0x60);
      *param_2 = fVar4;
      fVar4 = *(float *)(param_1 + 0x5c) * param_2[1] - fVar4 * *(float *)(param_1 + 0x60);
      param_2[1] = fVar4;
      fVar4 = param_2[2] * *(float *)(param_1 + 0x5c) - fVar4 * *(float *)(param_1 + 0x60);
      param_2[2] = fVar4;
      fVar4 = *(float *)(param_1 + 0x5c) * param_2[3] - fVar4 * *(float *)(param_1 + 0x60);
      param_2[3] = fVar4;
      param_2 = param_2 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
    fVar4 = *param_2 * *(float *)(param_1 + 0x5c) - fVar4 * *(float *)(param_1 + 0x60);
    *param_2 = fVar4;
    param_2 = param_2 + 1;
  }
  *(float *)(param_1 + 0x58) = fVar4;
  return;
}



// FUNCTION 143234120 Init body=396 status=ok
// SIG undefined Init(void)

void DSP::CAkColoredNoise::Init(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  *param_1 = param_4;
  param_1[0x40] = param_2;
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[3] = 1.0 - 251.32742 / (float)param_3;
    return;
  }
  if (param_2 == 3) {
    param_1[0x1c] = 0x3f232d9b;
    param_1[0x1d] = 0x3f232d9b;
    param_1[0x1e] = 0x3f232d9b;
    *(undefined8 *)(param_1 + 0x1f) = 0x3f232d9b;
    *(undefined8 *)(param_1 + 0x21) = 0;
    param_1[0x23] = 0xbeacb886;
    *(undefined8 *)(param_1 + 0x24) = 0;
    param_1[0x26] = 0xbeacb886;
    param_1[0x27] = 0xbddd9bc2;
    param_1[0x28] = 0;
    param_1[0x29] = 0xbeacb886;
    param_1[0x2a] = 0xbddd9bc2;
    param_1[0x2b] = 0xbd16550e;
    param_1[0x2c] = 0xbf92f47e;
    param_1[0x2d] = 0xbf72de08;
    param_1[0x2e] = 0xbf5cf96f;
    param_1[0x2f] = 0xbf506646;
    param_1[0x30] = 0x3f02f68d;
    param_1[0x31] = 0x3f26931f;
    param_1[0x32] = 0x3f2cb005;
    param_1[0x33] = 0x3f29cee5;
    param_1[0x34] = 0x3fa2ce4e;
    param_1[0x35] = 0x3fa8c7cb;
    param_1[0x36] = 0x3fa5f75a;
    param_1[0x37] = 0x3fa09967;
    param_1[0x38] = 0xbe992eda;
    param_1[0x39] = 0xbec2d631;
    param_1[0x3a] = 0xbec9fc98;
    param_1[0x3b] = 0xbec69e69;
    return;
  }
  if (param_2 == 2) {
    param_1[0x17] = 0x3d4cccc0;
    param_1[0x18] = 0xbf7eb852;
  }
  return;
}



// FUNCTION 1432342b0 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkRecorderFX::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145aec7d8;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (param_1[5] != 0) {
      CAkRecorderManager::ReleaseStream(lVar1);
      lVar1 = param_1[4];
    }
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  }
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 143234320 AddFloatsToShorts body=135 status=ok
// SIG undefined AddFloatsToShorts(void)

void AddFloatsToShorts(short *param_1,float *param_2,int param_3,float param_4,float param_5,
                      float param_6,int param_7,int param_8)

{
  short sVar1;
  int iVar2;
  float fVar3;
  
  do {
    fVar3 = param_4 * param_5;
    param_5 = param_5 + param_6;
    iVar2 = (int)*param_1 - (int)(fVar3 * *param_2 * -32767.0);
    if (iVar2 < 0x8000) {
      sVar1 = (short)iVar2;
      if (iVar2 < -0x8000) {
        sVar1 = -0x8000;
      }
    }
    else {
      sVar1 = 0x7fff;
    }
    *param_1 = sVar1;
    param_2 = param_2 + param_7;
    param_1 = param_1 + param_8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1432343b0 CreateAkRecorderFX body=93 status=ok
// SIG undefined CreateAkRecorderFX(void)

undefined8 * CreateAkRecorderFX(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145aec7d8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
    *(uint *)((longlong)puVar1 + 0x3c) = *(uint *)((longlong)puVar1 + 0x3c) & 0xff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    *(undefined2 *)(puVar1 + 9) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143234410 FUN_143234410 body=1813 status=ok
// SIG undefined FUN_143234410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143234410(longlong param_1,longlong *param_2)

{
  void *_Dst;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  void *pvVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  int iVar15;
  float *pfVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  void *local_res10;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8 [2];
  void *local_a8;
  undefined4 uStack_a0;
  char acStack_9c [4];
  uint local_98;
  char acStack_94 [20];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  
  uVar3 = *(ushort *)((longlong)param_2 + 0x12);
  if (uVar3 == 0) {
    return;
  }
  plVar13 = (longlong *)(param_1 + 0x28);
  uVar18 = 0;
  if (*plVar13 == 0) {
    if (*(short *)(*(longlong *)(param_1 + 0x10) + 0x20) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x49) != '\0') {
      return;
    }
    uStack_f0 = 0x14323448d;
    plVar12 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
    uStack_f0 = 0x143234496;
    plVar12 = (longlong *)(**(code **)(*plVar12 + 8))(plVar12);
    puVar17 = auStack_e8;
    if (plVar12 == (longlong *)0x0) goto LAB_143234abb;
    local_c0[0] = 0;
    local_64 = 0xffffffff;
    local_80 = 0;
    local_7c = 1;
    local_68 = 0;
    local_70 = 0;
    uStack_f0 = 0x1432344dd;
    local_c8 = plVar13;
    iVar10 = (**(code **)(*plVar12 + 0x20))
                       (plVar12,*(longlong *)(param_1 + 0x10) + 0x20,&local_80,2);
    puVar17 = auStack_e8;
    if (iVar10 != 1) goto LAB_143234abb;
    local_c8 = (longlong *)
               CONCAT62(local_c8._2_6_,*(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x1c));
    uStack_f0 = 0x143234507;
    cVar9 = CAkRecorderManager::AddStream
                      (*(undefined8 *)(param_1 + 0x20),*plVar13,*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(param_1 + 0x40));
    if (cVar9 == '\0') {
      uStack_f0 = 0x143234514;
      (**(code **)(*(longlong *)*plVar13 + 8))();
      *plVar13 = 0;
      puVar17 = auStack_e8;
      goto LAB_143234abb;
    }
  }
  lVar24 = *(longlong *)(param_1 + 0x10);
  fVar29 = 0.0;
  fVar30 = 1.0;
  if (*(char *)(lVar24 + 0x229) != '\0') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      fVar30 = *(float *)(param_1 + 0x44);
      uStack_f0 = 0x14323455f;
      fVar29 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 0;
      uStack_f0 = 0x14323454d;
      fVar29 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
      fVar30 = fVar29;
    }
    *(float *)(param_1 + 0x44) = fVar29;
    lVar24 = *(longlong *)(param_1 + 0x10);
    fVar29 = (fVar29 - fVar30) / (float)uVar3;
  }
  uVar19 = *(uint *)(param_2 + 1);
  uVar25 = (uint)uVar3;
  if (*(char *)(lVar24 + 0x228) == '\0') {
LAB_1432345c2:
    uVar11 = uVar19 >> 8 & 0xf;
    uVar20 = (uint)uVar3;
    if (((uVar19 >> 0xf & 1) == 0) || (uVar11 != 1)) {
      if ((uVar11 == 2) && (*(short *)(lVar24 + 0x1e) == 1)) {
        uStack_f0 = 0x143234786;
        local_res10 = (void *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
        puVar17 = auStack_e8;
        if (local_res10 != (void *)0x0) {
          uStack_f0 = 0x1432347ad;
          _guard_xfg_dispatch_icall_nop
                    (local_res10,0,(ulonglong)(*(byte *)(param_2 + 1) * uVar20) << 2);
          uVar11 = *(uint *)(param_2 + 1) & 0xff;
          uVar19 = uVar11 + 3 >> 2;
          iVar10 = uVar19 * uVar11;
          uVar22 = (ulonglong)(uint)(iVar10 * 0x10) + 0xf;
          if (uVar22 <= (uint)(iVar10 * 0x10)) {
            uVar22 = 0xffffffffffffff0;
          }
          uStack_f0 = 0x1432347e7;
          lVar24 = -(uVar22 & 0xfffffffffffffff0);
          _Dst = (void *)((longlong)&local_a8 + lVar24);
          if (iVar10 != 0) {
            *(undefined8 *)(auStack_e8 + lVar24 + -8) = 0x14323480b;
            _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)(iVar10 * 4) << 2);
          }
          pvVar8 = local_res10;
          uVar22 = uVar18;
          if (3 < uVar11) {
            iVar10 = 2;
            pbVar21 = &DAT_145aec821;
            pfVar16 = (float *)&DAT_145aec834;
            do {
              iVar15 = (int)uVar22;
              uVar26 = iVar15 + 4;
              uVar22 = (ulonglong)uVar26;
              bVar1 = *pbVar21;
              fVar28 = *pfVar16;
              *(float *)((longlong)_Dst +
                        ((ulonglong)(uVar19 * iVar15 * 4) + (ulonglong)pbVar21[-1]) * 4) =
                   0.70710677 / pfVar16[-1];
              fVar27 = pfVar16[1];
              bVar2 = pbVar21[1];
              *(float *)((longlong)_Dst +
                        ((ulonglong)((iVar10 + -1) * uVar19 * 4) + (ulonglong)bVar1) * 4) =
                   0.70710677 / fVar28;
              fVar28 = pfVar16[2];
              bVar1 = pbVar21[2];
              *(float *)((longlong)_Dst + ((ulonglong)(uVar19 * iVar10 * 4) + (ulonglong)bVar2) * 4)
                   = 0.70710677 / fVar27;
              iVar15 = iVar10 + 1;
              iVar10 = iVar10 + 4;
              *(float *)((longlong)_Dst + ((ulonglong)(iVar15 * uVar19 * 4) + (ulonglong)bVar1) * 4)
                   = 0.70710677 / fVar28;
              pbVar21 = pbVar21 + 4;
              pfVar16 = pfVar16 + 4;
            } while (uVar26 < uVar11 - 3);
          }
          if ((uint)uVar22 < uVar11) {
            pbVar21 = &DAT_145aec820 + uVar22;
            pfVar16 = (float *)(&DAT_145aec830 + uVar22);
            do {
              bVar1 = *pbVar21;
              pbVar21 = pbVar21 + 1;
              iVar10 = (int)uVar22;
              uVar26 = iVar10 + 1;
              uVar22 = (ulonglong)uVar26;
              *(float *)((longlong)_Dst + ((ulonglong)(uVar19 * iVar10 * 4) + (ulonglong)bVar1) * 4)
                   = 0.70710677 / *pfVar16;
              pfVar16 = pfVar16 + 1;
            } while (uVar26 < uVar11);
          }
          uStack_a0 = (undefined4)param_2[1];
          acStack_9c[0] = '+';
          acStack_9c[1] = '\0';
          acStack_9c[2] = '\0';
          acStack_9c[3] = '\0';
          local_a8 = local_res10;
          local_98 = (uint)uVar3;
          pcVar7 = *(code **)(**(longlong **)(param_1 + 0x18) + 8);
          *(undefined8 *)(auStack_e8 + lVar24 + -8) = 0x143234958;
          plVar13 = (longlong *)(*pcVar7)();
          *(void **)((longlong)local_b8 + lVar24) = _Dst;
          *(void **)(local_c0 + lVar24) = _Dst;
          *(undefined4 *)(local_c0 + lVar24 + -8) = 0x3f800000;
          pcVar7 = *(code **)(*plVar13 + 0x68);
          *(undefined8 *)(auStack_e8 + lVar24 + -8) = 0x14323497c;
          (*pcVar7)(plVar13,param_2,&local_a8,0x3f800000);
          if ((char)param_2[1] != '\0') {
            do {
              pfVar16 = (float *)((longlong)local_a8 + (ushort)local_98 * uVar18 * 4);
              puVar14 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar18 * 2);
              iVar10 = *(int *)(param_1 + 0x38);
              fVar28 = fVar30;
              uVar19 = uVar20;
              do {
                fVar27 = fVar28 * *pfVar16;
                pfVar16 = pfVar16 + 1;
                if (fVar27 <= -1.0) {
                  fVar27 = -1.0;
                }
                if (1.0 <= fVar27) {
                  fVar27 = 1.0;
                }
                *puVar14 = (short)(int)(fVar27 * 32767.0);
                puVar14 = puVar14 + iVar10;
                uVar19 = uVar19 - 1;
                fVar28 = fVar28 + fVar29;
              } while (uVar19 != 0);
              uVar19 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar19;
            } while (uVar19 < *(byte *)(param_2 + 1));
          }
          plVar13 = *(longlong **)(param_1 + 8);
          pcVar7 = *(code **)(*plVar13 + 0x10);
          *(undefined8 *)(auStack_e8 + lVar24 + -8) = 0x143234a13;
          (*pcVar7)(plVar13,pvVar8);
          puVar17 = auStack_e8 + lVar24;
        }
      }
      else {
        puVar17 = auStack_e8;
        if ((char)uVar19 != '\0') {
          do {
            pfVar16 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar18 * 4);
            puVar14 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar18 * 2);
            iVar10 = *(int *)(param_1 + 0x38);
            fVar28 = fVar30;
            uVar19 = uVar25;
            do {
              fVar27 = fVar28 * *pfVar16;
              pfVar16 = pfVar16 + 1;
              if (fVar27 <= -1.0) {
                fVar27 = -1.0;
              }
              if (1.0 <= fVar27) {
                fVar27 = 1.0;
              }
              *puVar14 = (short)(int)(fVar27 * 32767.0);
              puVar14 = puVar14 + iVar10;
              uVar19 = uVar19 - 1;
              fVar28 = fVar28 + fVar29;
            } while (uVar19 != 0);
            uVar19 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar19;
            puVar17 = auStack_e8;
          } while (uVar19 < *(byte *)(param_2 + 1));
        }
      }
    }
    else {
      uVar26 = uVar19 >> 0xc & 2;
      uVar11 = uVar26 + 1;
      if ((uVar19 >> 0xe & 1) == 0) {
        uVar11 = uVar26;
      }
      uVar23 = (ulonglong)uVar11;
      uVar22 = uVar23;
      if (uVar11 != 0) {
        do {
          iVar10 = *(int *)(param_1 + 0x38);
          pfVar16 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar18 * 4);
          puVar14 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar18 * 2);
          fVar28 = fVar30;
          uVar19 = uVar20;
          do {
            fVar27 = fVar28 * *pfVar16;
            pfVar16 = pfVar16 + 1;
            if (fVar27 <= -1.0) {
              fVar27 = -1.0;
            }
            if (1.0 <= fVar27) {
              fVar27 = 1.0;
            }
            *puVar14 = (short)(int)(fVar27 * 32767.0);
            puVar14 = puVar14 + iVar10;
            uVar19 = uVar19 - 1;
            fVar28 = fVar28 + fVar29;
          } while (uVar19 != 0);
          uVar18 = uVar18 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
        uVar19 = *(uint *)(param_2 + 1);
      }
      iVar10 = *(int *)(param_1 + 0x38);
      uVar19 = (uVar19 & 0xff) - 1;
      pfVar16 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar19 * 4);
      puVar14 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar23 * 2);
      fVar28 = fVar30;
      do {
        fVar27 = fVar28 * *pfVar16;
        pfVar16 = pfVar16 + 1;
        if (fVar27 <= -1.0) {
          fVar27 = -1.0;
        }
        if (1.0 <= fVar27) {
          fVar27 = 1.0;
        }
        *puVar14 = (short)(int)(fVar27 * 32767.0);
        puVar14 = puVar14 + iVar10;
        uVar20 = uVar20 - 1;
        fVar28 = fVar28 + fVar29;
      } while (uVar20 != 0);
      puVar17 = auStack_e8;
      if (uVar11 < uVar19) {
        uVar18 = (ulonglong)(uVar19 - uVar11);
        do {
          iVar10 = *(int *)(param_1 + 0x38);
          pfVar16 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar23 * 4);
          puVar14 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + 2 + uVar23 * 2);
          fVar28 = fVar30;
          uVar19 = uVar25;
          do {
            fVar27 = fVar28 * *pfVar16;
            pfVar16 = pfVar16 + 1;
            if (fVar27 <= -1.0) {
              fVar27 = -1.0;
            }
            if (1.0 <= fVar27) {
              fVar27 = 1.0;
            }
            *puVar14 = (short)(int)(fVar27 * 32767.0);
            puVar14 = puVar14 + iVar10;
            uVar19 = uVar19 - 1;
            fVar28 = fVar28 + fVar29;
          } while (uVar19 != 0);
          uVar23 = uVar23 + 1;
          uVar18 = uVar18 - 1;
          puVar17 = auStack_e8;
        } while (uVar18 != 0);
      }
    }
  }
  else {
    local_res10 = (void *)CONCAT44(local_res10._4_4_,uVar19);
    uStack_f0 = 0x1432345a7;
    cVar9 = CAkRecorderFX::SupportsDownMix(param_1,&local_res10);
    if (cVar9 == '\0') goto LAB_1432345c2;
    uStack_f0 = 0x1432345bd;
    FUN_143234c70(param_1,param_2,fVar30,fVar29);
    puVar17 = auStack_e8;
  }
  iVar10 = *(int *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar17 + -8) = 0x143234ab2;
  cVar9 = FUN_1432360f0(uVar6,uVar5,uVar4,iVar10 * uVar25 * 2);
  if (cVar9 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    return;
  }
LAB_143234abb:
  plVar13 = *(longlong **)(param_1 + 0x18);
  builtin_strncpy(acStack_94 + 0xc,"ile",4);
  local_a8 = (void *)0x726564726f636552;
  uStack_a0._0_1_ = ':';
  uStack_a0._1_1_ = ' ';
  uStack_a0._2_1_ = 'C';
  uStack_a0._3_1_ = 'a';
  builtin_strncpy(acStack_9c,"nnot",4);
  local_98._0_1_ = ' ';
  local_98._1_1_ = 'c';
  local_98._2_1_ = 'r';
  local_98._3_1_ = 'e';
  builtin_strncpy(acStack_94,"ate output f",0xc);
  pcVar7 = *(code **)(*plVar13 + 0x40);
  *(undefined8 *)(puVar17 + -8) = 0x143234aee;
  (*pcVar7)(plVar13,&local_a8,2);
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}



// FUNCTION 143234b30 Init body=313 status=ok
// SIG undefined Init(void)

undefined8
CAkRecorderFX::Init(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                   undefined4 *param_5)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  byte bVar8;
  
  *(longlong **)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 0x10) = param_4;
  *(longlong **)(param_1 + 0x18) = param_3;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(short *)(param_4 + 0x20 + uVar3 * 2) != 0);
  if (0x102 < uVar3) {
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 0x40) = *param_5;
  uVar7 = param_5[1];
  *(uint *)(param_1 + 0x3c) = uVar7;
  if (*(char *)(param_4 + 0x228) != '\0') {
    cVar1 = SupportsDownMix(param_1);
    if (cVar1 != '\0') {
      uVar7 = 3;
      bVar8 = 0;
      do {
        bVar8 = bVar8 + 1;
        uVar7 = uVar7 & uVar7 - 1;
      } while (uVar7 != 0);
      uVar7 = bVar8 | 0x3100;
      *(byte *)(param_1 + 0x3c) = bVar8;
      *(uint *)(param_1 + 0x3c) = uVar7;
    }
  }
  *(uint *)(param_1 + 0x38) = uVar7 & 0xff;
  uVar4 = (**(code **)(*param_3 + 8))(param_3);
  lVar5 = CAkRecorderManager::Instance(*(undefined8 *)(param_1 + 8),uVar4);
  *(longlong *)(param_1 + 0x20) = lVar5;
  if (lVar5 == 0) {
LAB_143234c4e:
    uVar4 = 2;
  }
  else {
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
    if (*(short *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0) {
      plVar6 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
      lVar5 = *param_2;
      uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = (**(code **)(lVar5 + 8))
                        (param_2,(ulonglong)*(uint *)(param_1 + 0x38) * (ulonglong)uVar2 * 2);
      *(longlong *)(param_1 + 0x30) = lVar5;
      if (lVar5 == 0) goto LAB_143234c4e;
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143234c70 FUN_143234c70 body=2639 status=ok
// SIG undefined FUN_143234c70(void)

void FUN_143234c70(longlong param_1,longlong *param_2,float param_3,float param_4)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar11 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  lVar8 = *(longlong *)(param_1 + 0x10);
  fVar18 = 0.0;
  uVar7 = *(uint *)(param_2 + 1) >> 0xc & 0x63f;
  fVar13 = *(float *)(lVar8 + 8) * 0.05;
  if (-37.0 <= fVar13) {
    uVar3 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
    fVar13 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar13 = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  else {
    fVar13 = 0.0;
  }
  fVar14 = *(float *)(lVar8 + 0xc) * 0.05;
  if (-37.0 <= fVar14) {
    uVar3 = (uint)(longlong)(fVar14 * 27866352.0 + 1.0653532e+09);
    fVar14 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar14 = ((fVar14 * 0.32518977 + 0.020805772) * fVar14 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  else {
    fVar14 = 0.0;
  }
  fVar15 = *(float *)(lVar8 + 0x10) * 0.05;
  if (-37.0 <= fVar15) {
    uVar3 = (uint)(longlong)(fVar15 * 27866352.0 + 1.0653532e+09);
    fVar15 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar15 = ((fVar15 * 0.32518977 + 0.020805772) * fVar15 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  else {
    fVar15 = 0.0;
  }
  fVar16 = *(float *)(lVar8 + 0x14) * 0.05;
  if (-37.0 <= fVar16) {
    uVar3 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09);
    fVar16 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar16 = ((fVar16 * 0.32518977 + 0.020805772) * fVar16 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  else {
    fVar16 = 0.0;
  }
  fVar17 = *(float *)(lVar8 + 0x18) * 0.05;
  if (-37.0 <= fVar17) {
    uVar3 = (uint)(longlong)(fVar17 * 27866352.0 + 1.0653532e+09);
    fVar18 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar18 = ((fVar18 * 0.32518977 + 0.020805772) * fVar18 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x30);
  uVar4 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  pfVar10 = (float *)0x0;
  uVar3 = uVar11;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + 2);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  if (uVar7 < 0x604) {
    if (uVar7 == 0x603) {
switchD_1432350f4_caseD_60b:
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar15,param_3,
                        param_4,1,2);
      uVar6 = (ulonglong)*(ushort *)(param_2 + 2) * 3;
LAB_143235567:
      lVar8 = *param_2 + uVar6 * 4;
    }
    else {
      switch(uVar7) {
      case 4:
      case 0xc:
        AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar13,param_3,param_4,1,2
                         );
        lVar8 = *param_2;
        break;
      default:
        goto switchD_143234fbd_caseD_5;
      case 7:
      case 0xf:
        AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                          *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar13,param_3,
                          param_4,1,2);
        AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                          *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11);
      case 3:
      case 0xb:
        AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2
                         );
        uVar6 = (ulonglong)*(ushort *)(param_2 + 2);
        goto LAB_143235567;
      case 8:
        AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar18,param_3,param_4,1,2
                         );
        lVar8 = *param_2;
      }
    }
  }
  else {
    switch(uVar7) {
    case 0x607:
    case 0x60f:
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar13,param_3,
                        param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,uVar11,fVar15,param_3,
                        param_4,1,2);
      lVar8 = (ulonglong)*(ushort *)(param_2 + 2) * 0x10 + *param_2;
      break;
    default:
      goto switchD_143234fbd_caseD_5;
    case 0x60b:
      goto switchD_1432350f4_caseD_60b;
    case 0x633:
    case 0x63b:
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar16,param_3,
                        param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        (ulonglong)*(ushort *)(param_2 + 2) * 0x10 + *param_2,uVar11,fVar15,param_3,
                        param_4,1,2);
      uVar6 = (ulonglong)*(ushort *)(param_2 + 2) * 5;
      goto LAB_143235567;
    case 0x637:
    case 0x63f:
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar13,param_3,
                        param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,uVar11,fVar16,param_3,
                        param_4,1,2);
      AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,
                        (ulonglong)*(ushort *)(param_2 + 2) * 0x10 + *param_2,uVar11);
      AddFloatsToShorts(*(undefined8 *)(param_1 + 0x30),
                        *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0x14,uVar11,fVar15,param_3,
                        param_4,1,2);
      lVar8 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0x18;
    }
  }
  AddFloatsToShorts(*(longlong *)(param_1 + 0x30) + 2,lVar8,uVar11);
switchD_143234fbd_caseD_5:
  if ((*(uint *)(param_2 + 1) & 0x8000) != 0) {
    psVar9 = *(short **)(param_1 + 0x30);
    pfVar12 = (float *)(*param_2 +
                       (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                       (ulonglong)*(ushort *)(param_2 + 2) * 4);
    fVar13 = param_3;
    uVar7 = uVar11;
    do {
      fVar14 = fVar13 * fVar18;
      fVar13 = fVar13 + param_4;
      iVar5 = (int)*psVar9 - (int)(fVar14 * *pfVar12 * -32767.0);
      if (iVar5 < 0x8000) {
        sVar2 = (short)iVar5;
        if (iVar5 < -0x8000) {
          sVar2 = -0x8000;
        }
      }
      else {
        sVar2 = 0x7fff;
      }
      *psVar9 = sVar2;
      pfVar12 = pfVar12 + 1;
      psVar9 = psVar9 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0) {
      pfVar10 = (float *)(*param_2 +
                         (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                         (ulonglong)*(ushort *)(param_2 + 2) * 4);
    }
    psVar9 = (short *)(*(longlong *)(param_1 + 0x30) + 2);
    do {
      fVar13 = param_3 * fVar18;
      param_3 = param_3 + param_4;
      iVar5 = (int)*psVar9 - (int)(fVar13 * *pfVar10 * -32767.0);
      if (iVar5 < 0x8000) {
        sVar2 = (short)iVar5;
        if (iVar5 < -0x8000) {
          sVar2 = -0x8000;
        }
      }
      else {
        sVar2 = 0x7fff;
      }
      *psVar9 = sVar2;
      pfVar10 = pfVar10 + 1;
      psVar9 = psVar9 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 143235750 SupportsDownMix body=140 status=ok
// SIG undefined SupportsDownMix(void)

longlong CAkRecorderFX::SupportsDownMix(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2 & 0xf00;
  if ((uVar1 == 0x100) &&
     (((((uVar2 = *param_2 & 0x63f000, uVar2 == 0x637000 || (uVar2 == 0x63f000)) ||
        (uVar2 == 0x633000)) ||
       ((((uVar2 == 0x63b000 || (uVar2 == 0x607000)) ||
         ((uVar2 == 0x60f000 || ((uVar2 == 0x603000 || (uVar2 == 0x60b000)))))) || (uVar2 == 0x7000)
        ))) || ((((uVar2 == 0xf000 || (uVar2 == 0x3000)) || (uVar2 == 0xb000)) ||
                ((uVar2 == 0xc000 || (uVar2 == 0x8000)))))))) {
    return 0x101;
  }
  return (ulonglong)(uint3)(uVar1 >> 8) << 8;
}



// FUNCTION 1432357e0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SVerticalBox>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 143235810 Clone body=198 status=ok
// SIG undefined Clone(void)

undefined8 * CAkRecorderFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x230);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR__scalar_deleting_destructor__145aec898;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = 4;
    puVar4[1] = *(undefined8 *)(param_1 + 8);
    puVar4[2] = uVar1;
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
    puVar2 = (undefined8 *)(param_1 + 0x1c);
    puVar3 = (undefined8 *)((longlong)puVar4 + 0x1c);
    do {
      puVar7 = puVar3;
      puVar6 = puVar2;
      uVar1 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      uVar1 = puVar6[3];
      puVar7[2] = puVar6[2];
      puVar7[3] = uVar1;
      uVar1 = puVar6[5];
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar1;
      uVar1 = puVar6[7];
      puVar7[6] = puVar6[6];
      puVar7[7] = uVar1;
      uVar1 = puVar6[9];
      puVar7[8] = puVar6[8];
      puVar7[9] = uVar1;
      uVar1 = puVar6[0xb];
      puVar7[10] = puVar6[10];
      puVar7[0xb] = uVar1;
      uVar1 = puVar6[0xd];
      puVar7[0xc] = puVar6[0xc];
      puVar7[0xd] = uVar1;
      uVar1 = puVar6[0xf];
      puVar7[0xe] = puVar6[0xe];
      puVar7[0xf] = uVar1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar6 + 0x10;
      puVar3 = puVar7 + 0x10;
    } while (lVar5 != 0);
    puVar7[0x10] = puVar6[0x10];
    *(undefined4 *)(puVar7 + 0x11) = *(undefined4 *)(puVar6 + 0x11);
    *(undefined2 *)((longlong)puVar7 + 0x8c) = *(undefined2 *)((longlong)puVar6 + 0x8c);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432358e0 CreateAkRecorderFXParams body=40 status=ok
// SIG undefined CreateAkRecorderFXParams(void)

void CreateAkRecorderFXParams(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x230);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145aec898;
    return;
  }
  return;
}



// FUNCTION 143235960 FUN_143235960 body=224 status=ok
// SIG undefined FUN_143235960(void)

undefined8 FUN_143235960(longlong param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 8) = *param_3;
    return 1;
  case 1:
    *(undefined4 *)(param_1 + 0x14) = *param_3;
    return 1;
  case 2:
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)param_3;
    return 1;
  case 4:
    *(undefined4 *)(param_1 + 0xc) = *param_3;
    return 1;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = *param_3;
    return 1;
  case 6:
    *(undefined4 *)(param_1 + 0x18) = *param_3;
    return 1;
  case 7:
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)param_3;
    return 1;
  case 8:
    *(undefined1 *)(param_1 + 0x229) = *(undefined1 *)param_3;
    return 1;
  case 9:
    AKPLATFORM::SafeStrCpy(param_1 + 0x20,param_3,0x104);
    return 1;
  case 10:
    *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)param_3;
    return 1;
  default:
    uVar1 = 0x1f;
  }
  return uVar1;
}



// FUNCTION 143235a70 SetParamsBlock body=268 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkRecorderFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  rsize_t _MaxCount;
  wchar_t *_Src;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  lVar3 = -1;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  _Src = (wchar_t *)((longlong)param_2 + 0x16);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 5);
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (_Src[lVar1] != L'\0');
  _MaxCount = 0x103;
  if (lVar2 + 2U < 0x104) {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (_Src[lVar1] != L'\0');
    _MaxCount = lVar2 + 2;
  }
  wcsncpy_s((wchar_t *)(param_1 + 0x20),0x104,_Src,_MaxCount);
  *(undefined2 *)(param_1 + 0x20 + _MaxCount * 2) = 0;
  do {
    lVar3 = lVar3 + 1;
  } while (*(short *)(param_1 + 0x20 + lVar3 * 2) != 0);
  uVar4 = (ulonglong)((int)lVar3 + 1);
  *(char *)(param_1 + 0x228) = (char)_Src[uVar4];
  *(undefined1 *)(param_1 + 0x229) = *(undefined1 *)((longlong)_Src + uVar4 * 2 + 1);
  *(wchar_t *)(param_1 + 0x1e) = _Src[uVar4 + 1];
  return 1;
}



// FUNCTION 143235b80 `scalar_deleting_destructor' body=203 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong CAkRecorderManager::StreamData::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined8 *)Instance(0,0);
  plVar1 = (longlong *)*puVar3;
  if ((*(int *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(param_1 + 0x18) != 0)) {
    do {
      (**(code **)(*plVar1 + 0x10))
                (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    puVar3 = (undefined8 *)Instance(0,0);
    (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,lVar2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 143235c50 AddStream body=242 status=ok
// SIG undefined AddStream(void)

undefined8
CAkRecorderManager::AddStream
          (undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,short param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,0x80);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined4 *)(plVar3 + 4) = 0;
    plVar3[5] = 0;
    if (param_1[5] == 0) {
      param_1[5] = plVar3;
      *plVar3 = 0;
    }
    else {
      *plVar3 = param_1[5];
      param_1[5] = plVar3;
    }
    plVar3[1] = param_2;
    *(undefined4 *)((longlong)plVar3 + 0x74) = 0;
    *(short *)((longlong)plVar3 + 0x7a) = param_5;
    *(undefined1 *)(plVar3 + 0xf) = 0;
    uVar2 = AkFileParser::FillHeader(param_4,1,(int)param_5,param_3,plVar3 + 6);
    cVar1 = FUN_1432360f0(param_1,param_2,plVar3 + 6,uVar2);
    if (cVar1 != '\0') {
      if (*(short *)((longlong)plVar3 + 0x7a) != 0) {
        *(undefined4 *)(plVar3 + 0xc) = 0;
        return 1;
      }
      *(undefined4 *)(plVar3 + 0xe) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143235d60 Execute body=706 status=ok
// SIG undefined Execute(void)

void CAkRecorderManager::Execute(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int local_res8 [2];
  undefined1 local_res18 [16];
  
  puVar7 = (undefined8 *)param_1[5];
  puVar10 = (undefined8 *)0x0;
  lVar6 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      iVar4 = 1;
      if ((*(int *)((longlong)puVar7 + 0x74) == 1) &&
         (iVar2 = (**(code **)(*(longlong *)puVar7[1] + 0x60))(), iVar2 != 2)) {
        if (iVar2 == 1) {
          if (*(int *)(puVar7 + 3) == 0) {
LAB_143235e31:
            if (*(char *)(puVar7 + 0xf) != '\0') {
              (**(code **)(*(longlong *)puVar7[1] + 0x48))((longlong *)puVar7[1],0,0);
              uVar9 = 0x34;
              if (*(short *)((longlong)puVar7 + 0x7a) == 0) {
                uVar9 = 0x44;
              }
              iVar4 = (**(code **)(*(longlong *)puVar7[1] + 0x38))
                                ((longlong *)puVar7[1],puVar7 + 6,uVar9,0,0x32,
                                 1.31072e+08 / (float)*(uint *)((longlong)puVar7 + 0x4c),local_res18
                                );
              *(undefined4 *)((longlong)puVar7 + 0x74) = 2;
              goto LAB_143235eb3;
            }
          }
          else {
            puVar5 = (undefined8 *)Instance(0,0);
            if (puVar7[5] != 0) {
              (**(code **)(*(longlong *)*puVar5 + 0x10))();
            }
            puVar5 = (undefined8 *)puVar7[2];
            puVar7[5] = *puVar5;
            uVar3 = *(uint *)(puVar7 + 3);
            if (puVar5 < puVar5 + ((ulonglong)uVar3 - 1)) {
              puVar8 = puVar5;
              for (lVar6 = ((ulonglong)
                            ((longlong)(puVar5 + ((ulonglong)uVar3 - 1)) + (-1 - (longlong)puVar5))
                           >> 3) + 1; puVar5 = puVar5 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar8 = *puVar5;
                puVar8 = puVar8 + 1;
              }
              uVar3 = *(uint *)(puVar7 + 3);
            }
            *(uint *)(puVar7 + 3) = uVar3 - 1;
            if (uVar3 - 1 == 0) goto LAB_143235e31;
          }
          *(undefined4 *)((longlong)puVar7 + 0x74) = 0;
        }
        else {
          iVar4 = 2;
        }
      }
LAB_143235eb3:
      if (*(int *)((longlong)puVar7 + 0x74) == 0) {
        uVar3 = *(uint *)(puVar7 + 3);
        if ((1 < uVar3) || ((uVar3 == 1 && (*(char *)(puVar7 + 0xf) != '\0')))) {
          local_res8[0] = 0x20000;
          if ((uVar3 == 1) &&
             ((*(char *)(puVar7 + 0xf) != '\0' &&
              (local_res8[0] = 0x20000, *(int *)(puVar7 + 4) != 0)))) {
            local_res8[0] = *(int *)(puVar7 + 4);
          }
          iVar4 = (**(code **)(*(longlong *)puVar7[1] + 0x38))
                            ((longlong *)puVar7[1],*(undefined8 *)puVar7[2],local_res8[0],0,0x32,
                             1.31072e+08 / (float)*(uint *)((longlong)puVar7 + 0x4c),local_res8);
          *(undefined4 *)((longlong)puVar7 + 0x74) = 1;
        }
LAB_143235f5d:
        if ((iVar4 != 1) || (param_2 == 0x80)) goto LAB_143235f73;
        puVar5 = (undefined8 *)*puVar7;
        puVar10 = puVar7;
      }
      else {
        if ((*(int *)((longlong)puVar7 + 0x74) != 2) ||
           (iVar2 = (**(code **)(*(longlong *)puVar7[1] + 0x60))(), iVar2 == 2)) goto LAB_143235f5d;
LAB_143235f73:
        puVar5 = (undefined8 *)*puVar7;
        if (puVar7 == (undefined8 *)param_1[5]) {
          param_1[5] = puVar5;
        }
        else {
          *puVar10 = puVar5;
        }
        plVar1 = (longlong *)*param_1;
        StreamData::_scalar_deleting_destructor_(puVar7,0);
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      puVar7 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
    lVar6 = param_1[5];
  }
  if ((lVar6 == 0) && (*(int *)(param_1 + 3) == 0)) {
    plVar1 = (longlong *)*param_1;
    (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],&LAB_143235d50,0x90);
    param_1[5] = 0;
    DAT_146b522a0 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  return;
}



// FUNCTION 143236030 Instance body=185 status=ok
// SIG undefined Instance(void)

undefined8 * CAkRecorderManager::Instance(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (((DAT_146b522a0 == (undefined8 *)0x0) && (param_1 != (longlong *)0x0)) &&
     (param_2 != (longlong *)0x0)) {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x30);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = param_1;
    uVar2 = (**(code **)(*param_2 + 8))();
    puVar1[2] = param_2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[1] = uVar2;
    puVar1[5] = 0;
    DAT_146b522a0 = puVar1;
    (**(code **)(*param_2 + 0x40))(param_2,3,0,0x84,&LAB_143235d50,0x90,0);
    DAT_146b522a0 = puVar1;
  }
  return DAT_146b522a0;
}



// FUNCTION 1432360f0 FUN_1432360f0 body=525 status=ok
// SIG undefined FUN_1432360f0(void)

undefined8 FUN_1432360f0(longlong param_1,longlong param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    if (puVar2[1] == param_2) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    return 1;
  }
  uVar8 = *(uint *)(puVar2 + 4);
  do {
    if (uVar8 == 0) {
      lVar6 = puVar2[5];
      plVar3 = (longlong *)*DAT_146b522a0;
      if (lVar6 == 0) {
        lVar6 = (**(code **)(*plVar3 + 8))(plVar3,0x20000);
      }
      uVar8 = *(uint *)(puVar2 + 3);
      if (uVar8 < *(uint *)((longlong)puVar2 + 0x1c)) {
LAB_143236218:
        uVar8 = *(uint *)(puVar2 + 3);
        *(uint *)(puVar2 + 3) = uVar8 + 1;
        plVar10 = (longlong *)(puVar2[2] + (ulonglong)uVar8 * 8);
      }
      else {
        uVar4 = *(uint *)((longlong)puVar2 + 0x1c) + 2;
        lVar7 = (**(code **)(*(longlong *)*DAT_146b522a0 + 8))();
        if (lVar7 != 0) {
          lVar11 = puVar2[2];
          if ((lVar11 != 0) && (lVar11 != lVar7)) {
            uVar1 = *(uint *)(puVar2 + 3);
            uVar9 = 0;
            if ((ulonglong)uVar1 != 0) {
              do {
                *(undefined8 *)(lVar7 + uVar9 * 8) = *(undefined8 *)(puVar2[2] + uVar9 * 8);
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar1);
              lVar11 = puVar2[2];
            }
            (**(code **)(*(longlong *)*DAT_146b522a0 + 0x10))((longlong *)*DAT_146b522a0,lVar11);
          }
          puVar2[2] = lVar7;
          *(uint *)((longlong)puVar2 + 0x1c) = uVar4;
          if (uVar8 < uVar4) goto LAB_143236218;
        }
        plVar10 = (longlong *)0x0;
      }
      if ((lVar6 == 0) || (plVar10 == (longlong *)0x0)) {
        if (puVar2[5] != 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,lVar6);
          puVar2[5] = 0;
        }
        if (plVar10 == (longlong *)0x0) {
          return 0;
        }
        *(int *)(puVar2 + 3) = *(int *)(puVar2 + 3) + -1;
        return 0;
      }
      *plVar10 = lVar6;
      uVar8 = *(uint *)(puVar2 + 4);
      puVar2[5] = 0;
    }
    uVar4 = 0x20000 - uVar8;
    if (param_4 <= 0x20000 - uVar8) {
      uVar4 = param_4;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)uVar8 +
                       *(longlong *)(puVar2[2] + -8 + (ulonglong)*(uint *)(puVar2 + 3) * 8)),param_3
               ,(ulonglong)uVar4);
    if (*(short *)((longlong)puVar2 + 0x7a) == 0) {
      *(uint *)(puVar2 + 0xe) = *(int *)(puVar2 + 0xe) + uVar4;
      iVar5 = *(int *)(puVar2 + 0xe) + 0x3c;
    }
    else {
      *(uint *)(puVar2 + 0xc) = *(int *)(puVar2 + 0xc) + uVar4;
      iVar5 = *(int *)(puVar2 + 0xc) + 0x2c;
    }
    *(int *)((longlong)puVar2 + 0x34) = iVar5;
    uVar8 = *(int *)(puVar2 + 4) + uVar4;
    *(uint *)(puVar2 + 4) = uVar8;
    if (uVar8 == 0x20000) {
      *(undefined4 *)(puVar2 + 4) = 0;
      uVar8 = 0;
    }
    param_3 = (void *)((longlong)param_3 + (ulonglong)uVar4);
    param_4 = param_4 - uVar4;
    if (param_4 == 0) {
      return 1;
    }
  } while( true );
}



// FUNCTION 143236300 ReleaseStream body=36 status=ok
// SIG undefined ReleaseStream(void)

void CAkRecorderManager::ReleaseStream(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    while (plVar1[1] != param_2) {
      plVar1 = (longlong *)*plVar1;
      if (plVar1 == (longlong *)0x0) {
        return;
      }
    }
    *(undefined1 *)(plVar1 + 0xf) = 1;
  }
  return;
}



// FUNCTION 143236330 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145aec8d0;
  AK::MemoryMgr::StartProfileThreadUsage((int)this + 0x10);
  *(undefined ***)this = AK::IAkPlugin::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,400);
  }
  return this;
}



// FUNCTION 143236380 FUN_143236380 body=492 status=ok
// SIG undefined FUN_143236380(void)

void FUN_143236380(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*param_1 != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x2c);
    if (uVar3 != 0) {
      uVar5 = *(uint *)((longlong)param_1 + 0x14);
      uVar2 = (*(int *)((longlong)param_1 + 0x1c) - uVar5) + (int)param_1[1];
      if (uVar2 <= uVar3) {
        uVar3 = uVar2;
      }
      uVar2 = 0;
      do {
        uVar5 = *(uint *)((longlong)param_1 + 0xc) - uVar5 % *(uint *)((longlong)param_1 + 0xc);
        if (uVar3 - uVar2 <= uVar5) {
          uVar5 = uVar3 - uVar2;
        }
        uVar4 = 0;
        if ((int)param_1[2] != 0) {
          do {
            uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x14) %
                    (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_1 +
                               ((ulonglong)
                                (((*(uint *)((longlong)param_1 + 0x14) - (int)uVar6) %
                                 *(uint *)(param_1 + 1)) * (int)param_1[2]) +
                                (ulonglong)(*(uint *)((longlong)param_1 + 0xc) * uVar4) + uVar6) * 4
                               ),0,(ulonglong)(uVar5 * 4));
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 2));
        }
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + uVar5;
        uVar2 = uVar2 + uVar5;
        uVar5 = *(uint *)((longlong)param_1 + 0x14);
      } while (uVar2 < uVar3);
      *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) - uVar3;
    }
    if (*(uint *)((longlong)param_1 + 0x24) < (uint)*(ushort *)((longlong)param_2 + 0x12)) {
      uVar5 = (uint)*(ushort *)((longlong)param_2 + 0x12) - *(uint *)((longlong)param_1 + 0x24);
      uVar3 = *(uint *)((longlong)param_1 + 0x14);
      uVar4 = 0;
      uVar2 = (*(int *)((longlong)param_1 + 0x1c) - uVar3) + (int)param_1[1];
      if (uVar2 <= uVar5) {
        uVar5 = uVar2;
      }
      do {
        uVar3 = *(uint *)((longlong)param_1 + 0xc) - uVar3 % *(uint *)((longlong)param_1 + 0xc);
        if (uVar5 - uVar4 <= uVar3) {
          uVar3 = uVar5 - uVar4;
        }
        uVar6 = 0;
        if ((int)param_1[2] != 0) {
          do {
            uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x14) %
                    (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_1 +
                               ((ulonglong)
                                (((*(uint *)((longlong)param_1 + 0x14) - (int)uVar1) %
                                 *(uint *)(param_1 + 1)) * (int)param_1[2]) +
                                (ulonglong)(*(uint *)((longlong)param_1 + 0xc) * (int)uVar6) + uVar1
                               ) * 4),
                       (void *)(*param_2 +
                               ((ulonglong)*(uint *)((longlong)param_1 + 0x24) +
                               uVar6 * *(ushort *)(param_2 + 2) + (ulonglong)uVar4) * 4),
                       (ulonglong)(uVar3 * 4));
            uVar2 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar2;
          } while (uVar2 < *(uint *)(param_1 + 2));
        }
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + uVar3;
        uVar4 = uVar4 + uVar3;
        uVar3 = *(uint *)((longlong)param_1 + 0x14);
      } while (uVar4 < uVar5);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + uVar4;
    }
  }
  return;
}



// FUNCTION 143236570 FUN_143236570 body=558 status=ok
// SIG undefined FUN_143236570(void)

void FUN_143236570(float param_1,float param_2,uint param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  uint uVar10;
  
  uVar10 = 0;
  uVar6 = param_3 + 3 >> 2;
  do {
    uVar5 = 0;
    lVar1 = param_5 + (ulonglong)(uVar6 * uVar10 * 4) * 4;
    if (3 < param_3) {
      uVar8 = (ulonglong)uVar10;
      iVar7 = 2;
      pfVar9 = (float *)(lVar1 + 8);
      do {
        iVar3 = (int)uVar5;
        uVar4 = iVar3 + 4;
        uVar5 = (ulonglong)uVar4;
        pfVar9[-2] = param_1 * *(float *)(param_4 + (uVar6 * iVar3 * 4 + uVar8) * 4);
        iVar2 = iVar7 * uVar6;
        pfVar9[-1] = param_1 * *(float *)(param_4 + ((iVar7 + -1) * uVar6 * 4 + uVar8) * 4);
        iVar3 = iVar7 + 1;
        iVar7 = iVar7 + 4;
        *pfVar9 = param_1 * *(float *)(param_4 + ((uint)(iVar2 * 4) + uVar8) * 4);
        pfVar9[1] = param_1 * *(float *)(param_4 + (iVar3 * uVar6 * 4 + uVar8) * 4);
        pfVar9 = pfVar9 + 4;
      } while (uVar4 < param_3 - 3);
    }
    if ((uint)uVar5 < param_3) {
      pfVar9 = (float *)(lVar1 + uVar5 * 4);
      do {
        iVar7 = (int)uVar5;
        uVar4 = iVar7 + 1;
        uVar5 = (ulonglong)uVar4;
        *pfVar9 = param_1 * *(float *)(param_4 +
                                      ((ulonglong)(uVar6 * iVar7 * 4) + (ulonglong)uVar10) * 4);
        pfVar9 = pfVar9 + 1;
      } while (uVar4 < param_3);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < (param_3 >> 1) + 1);
  do {
    uVar5 = 0;
    lVar1 = param_5 + (ulonglong)(uVar6 * uVar10 * 4) * 4;
    if (3 < param_3) {
      uVar8 = (ulonglong)uVar10;
      iVar7 = 2;
      pfVar9 = (float *)(lVar1 + 8);
      do {
        iVar3 = (int)uVar5;
        uVar4 = iVar3 + 4;
        uVar5 = (ulonglong)uVar4;
        pfVar9[-2] = param_2 * *(float *)(param_4 + (uVar6 * iVar3 * 4 + uVar8) * 4);
        iVar2 = uVar6 * iVar7;
        pfVar9[-1] = param_2 * *(float *)(param_4 + ((iVar7 + -1) * uVar6 * 4 + uVar8) * 4);
        iVar3 = iVar7 + 1;
        iVar7 = iVar7 + 4;
        *pfVar9 = param_2 * *(float *)(param_4 + ((uint)(iVar2 * 4) + uVar8) * 4);
        pfVar9[1] = param_2 * *(float *)(param_4 + (iVar3 * uVar6 * 4 + uVar8) * 4);
        pfVar9 = pfVar9 + 4;
      } while (uVar4 < param_3 - 3);
    }
    if ((uint)uVar5 < param_3) {
      pfVar9 = (float *)(lVar1 + uVar5 * 4);
      do {
        iVar7 = (int)uVar5;
        uVar4 = iVar7 + 1;
        uVar5 = (ulonglong)uVar4;
        *pfVar9 = param_2 * *(float *)(param_4 +
                                      ((ulonglong)(uVar6 * iVar7 * 4) + (ulonglong)uVar10) * 4);
        pfVar9 = pfVar9 + 1;
      } while (uVar4 < param_3);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < param_3);
  return;
}



// FUNCTION 1432367a0 FUN_1432367a0 body=403 status=ok
// SIG undefined FUN_1432367a0(void)

undefined8 * FUN_1432367a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,400);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145aec8d0;
    DSP::AkFFTAllButterflies::CAkPartitionedConvolutionEngine::CAkPartitionedConvolutionEngine
              (puVar1 + 2);
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0x43340000;
    *(undefined8 *)((longlong)puVar1 + 0x9c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x43340000;
    *(undefined4 *)(puVar1 + 0x15) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0x3f800000;
    puVar1[0x16] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x17) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0xbc) = 0x3e800000;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0x43340000;
    puVar1[0x1a] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x1b) = 0x43340000;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x1c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xec) = 0x3f800000;
    puVar1[0x1e] = 0x3e800000;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x10c) = 0;
    *(undefined4 *)(puVar1 + 0x21) = 0xffffffff;
    *(undefined1 *)((longlong)puVar1 + 0x114) = 0;
    *(uint *)((longlong)puVar1 + 0x114) = *(uint *)((longlong)puVar1 + 0x114) & 0xff;
    *(undefined1 *)(puVar1 + 0x23) = 0;
    *(uint *)(puVar1 + 0x23) = *(uint *)(puVar1 + 0x23) & 0xff;
    *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
    puVar1[0x25] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x15c) = 0;
    puVar1[0x2d] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    puVar1[0x2c] = 0x2b;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143236940 FUN_143236940 body=2767 status=ok
// SIG undefined FUN_143236940(void)

void FUN_143236940(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  void *_Src;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined2 uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  uint local_res20;
  undefined4 uVar22;
  undefined4 uVar23;
  longlong local_c8;
  uint local_c0;
  undefined8 local_bc;
  uint local_b0;
  void *local_a8;
  longlong local_a0;
  uint local_98;
  ulonglong local_90;
  longlong local_88;
  void *local_80;
  uint local_78;
  undefined4 local_74;
  ushort local_70;
  ushort local_6e;
  ulonglong local_68;
  size_t local_60;
  
  pfVar1 = (float *)(param_1 + 0x90);
  CAkConvolutionReverbFXParams::GetParams(*(undefined8 *)(param_1 + 0x180),pfVar1);
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_1 + 0xc0)) {
    iVar4 = FUN_143238200(param_1,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x5c));
    if (iVar4 != 1) {
      return;
    }
    iVar4 = FUN_14323a870(param_1 + 0x10,*(undefined8 *)(param_1 + 0x188),
                          *(undefined1 *)(param_1 + 0x118));
    if (iVar4 != 1) {
      return;
    }
    FUN_14323a980(param_1 + 0x10);
  }
  if ((*pfVar1 != *(float *)(param_1 + 0xc4)) ||
     (*(int *)(param_1 + 0xf4) != *(int *)(param_1 + 0xc0))) {
    FUN_143238910(param_1);
    iVar4 = FUN_1432386a0(param_1);
    if (iVar4 != 1) {
      return;
    }
    CAkConvolutionReverbFX::ResetPreDelay(param_1);
    *(int *)(param_1 + 0x110) =
         (int)(longlong)
              ((*(float *)(param_1 + 0x94) + *pfVar1) * 0.001 * (float)*(uint *)(param_1 + 0x124)) +
         *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x50);
  }
  if (*(float *)(param_1 + 0x94) != *(float *)(param_1 + 200)) {
    FUN_143238890(param_1);
    iVar4 = FUN_143238440(param_1);
    if (iVar4 != 1) {
      return;
    }
    CAkConvolutionReverbFX::ResetFrontBackDelay(param_1);
    *(int *)(param_1 + 0x110) =
         (int)(longlong)
              ((*(float *)(param_1 + 0x94) + *pfVar1) * 0.001 * (float)*(uint *)(param_1 + 0x124)) +
         *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x50);
  }
  if (((*(uint *)(param_1 + 0x114) & 0xf00) == 0x200) &&
     ((*(float *)(param_1 + 0xa8) != *(float *)(param_1 + 0xdc) ||
      (*(float *)(param_1 + 0xac) != *(float *)(param_1 + 0xe0))))) {
    FUN_143237410(*(float *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
                  *(undefined4 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138));
  }
  local_bc = 0x2b;
  local_c0 = 0;
  local_c8 = 0;
  if ((*(longlong *)(param_1 + 0x140) != 0) &&
     (*(undefined8 *)(param_1 + 0x164) = 0, *(int *)((longlong)param_2 + 0xc) != 0x11)) {
    if ((uint)((*(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x15c)) + *(int *)(param_1 + 0x16c))
        < *(uint *)(param_1 + 0x170)) {
      *(uint *)(param_1 + 0x16c) =
           (*(uint *)(param_1 + 0x170) - *(int *)(param_1 + 0x154)) + *(int *)(param_1 + 0x15c);
    }
  }
  do {
    FUN_143236380(param_1 + 0x140);
LAB_143236b90:
    uVar9 = 0;
    lVar7 = *(longlong *)(param_1 + 0x140);
    if (lVar7 == 0) {
      if (*(int *)(param_1 + 0x160) != 0x2b) goto LAB_14323722f;
      local_c8 = *param_2;
      local_bc._4_4_ = *(uint *)(param_2 + 2);
LAB_143236c43:
      local_c0 = *(uint *)(param_2 + 1);
      iVar4 = *(int *)((longlong)param_2 + 0xc);
      local_bc = CONCAT44(local_bc._4_4_,iVar4);
      uVar13 = local_bc;
      if (iVar4 != 0x2e) {
        uVar21 = *(uint *)(param_1 + 0x110);
        if (iVar4 == 0x11) {
          uVar14 = *(uint *)(param_1 + 0x108);
          if ((uVar14 == 0) && (local_bc._6_2_ == 0)) goto LAB_1432371f0;
          if ((uVar14 == 0xffffffff) || (local_bc._6_2_ != 0)) {
            *(uint *)(param_1 + 0x10c) = uVar21;
            uVar14 = uVar21;
          }
          else {
            uVar17 = *(uint *)(param_1 + 0x10c);
            if (uVar17 < uVar21) {
              *(uint *)(param_1 + 0x10c) = uVar21;
              uVar14 = uVar14 + (uVar21 - uVar17);
            }
          }
          uVar15 = (ulonglong)(byte)local_c0;
          uVar17 = (local_bc._4_4_ & 0xffff) - (uint)local_bc._6_2_;
          uVar21 = uVar14;
          if (uVar17 <= uVar14) {
            uVar21 = uVar17;
          }
          iVar4 = uVar14 - uVar21;
          *(int *)(param_1 + 0x108) = iVar4;
          local_bc = uVar13;
          if (uVar17 != 0) {
            if ((byte)local_c0 != 0) {
              uVar13 = uVar9;
              do {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(local_c8 +
                                   ((local_bc >> 0x20 & 0xffff) * uVar13 + (local_bc >> 0x30)) * 4),
                           0,(ulonglong)(uVar17 * 4));
                uVar13 = uVar13 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
              iVar4 = *(int *)(param_1 + 0x108);
            }
            uVar16 = local_bc._4_2_;
            local_bc = CONCAT26(uVar16,(undefined6)local_bc);
          }
          if (iVar4 != 0) {
            local_bc = CONCAT44(local_bc._4_4_,0x2d);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
        }
        uVar13 = local_bc;
        if (local_bc._6_2_ != 0) {
          iVar4 = (*(uint *)(param_1 + 0x54) >> 1) * 8 + 8;
          lVar6 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                            (*(longlong **)(param_1 + 0x188),iVar4);
          local_a0 = lVar6;
          lVar7 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                            (*(longlong **)(param_1 + 0x188),iVar4);
          if (*(int *)(param_1 + 0xc0) == 0) {
            uVar13 = (ulonglong)*(byte *)(param_1 + 0x118) * (ulonglong)local_bc._4_2_;
          }
          else {
            uVar13 = (ulonglong)local_bc._4_2_;
          }
          local_88 = lVar7;
          pvVar8 = (void *)(**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                                     (*(longlong **)(param_1 + 0x188),uVar13 << 2);
          local_a8 = pvVar8;
          if (pvVar8 == (void *)0x0) {
LAB_1432371b0:
            if (lVar6 != 0) {
              (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))
                        (*(longlong **)(param_1 + 0x188),lVar6);
            }
          }
          else if (lVar6 != 0) {
            if (lVar7 != 0) {
              if (*(int *)(param_1 + 0xc0) == 0) {
                local_78 = *(uint *)(param_1 + 0x118);
                uVar14 = local_78 & 0xff;
                uVar21 = (uint)local_bc._6_2_;
                local_74 = 0x2b;
                local_70 = local_bc._6_2_;
                local_6e = local_bc._6_2_;
                local_b0 = uVar21;
                local_80 = pvVar8;
                FUN_14323b4c0(&local_c8,&local_80,*(undefined4 *)(param_1 + 0xd0),
                              *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xd4),
                              *(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xd8),
                              *(undefined4 *)(param_1 + 0xa4));
                iVar4 = *(int *)(param_1 + 0x50);
                uVar9 = 0;
                local_res20 = 0;
                if (uVar21 != 0) {
                  do {
                    uVar13 = 0;
                    if (uVar14 != 0) {
                      uVar21 = *(byte *)(param_1 + 0x5c) - 1;
                      uVar15 = uVar13;
                      local_90 = uVar9;
                      do {
                        uVar11 = (uint)uVar13;
                        pvVar8 = (void *)((longlong)local_80 + (local_70 * uVar13 + local_90) * 4);
                        uVar17 = uVar11;
                        if (uVar21 <= uVar11) {
                          uVar17 = uVar21;
                        }
                        FUN_14323a230(param_1 + 0x10,pvVar8,iVar4,local_88,local_a0,0,uVar11,uVar17)
                        ;
                        lVar7 = *(longlong *)(param_1 + 0xf8);
                        if ((lVar7 != 0) && (*(int *)(uVar15 + lVar7) != 0)) {
                          DSP::CDelayLight::ProcessBuffer(lVar7 + uVar13 * 0x18,pvVar8,iVar4);
                        }
                        uVar13 = (ulonglong)(uVar11 + 1);
                        uVar15 = uVar15 + 0x18;
                      } while (uVar11 + 1 < uVar14);
                    }
                    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                    uVar21 = *(uint *)(param_1 + 0x48);
                    if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x48)) {
                      uVar21 = 0;
                    }
                    local_res20 = local_res20 + iVar4;
                    uVar9 = (ulonglong)local_res20;
                    *(uint *)(param_1 + 0x48) = uVar21;
                    lVar6 = local_a0;
                  } while (local_res20 < local_b0);
                }
                FUN_143238990(param_1,&local_c8,&local_80);
              }
              else {
                local_98 = *(uint *)(param_1 + 0x114) & 0x210000;
                bVar20 = (byte)(*(uint *)(param_1 + 0x114) >> 0xe) & 1 | 2;
                local_90 = CONCAT44(local_90._4_4_,(uint)local_bc._6_2_);
                if ((*(int **)(param_1 + 0x100) == (int *)0x0) ||
                   (bVar2 = true, **(int **)(param_1 + 0x100) == 0)) {
                  bVar2 = false;
                }
                iVar4 = *(int *)(param_1 + 0x50);
                local_b0 = 0;
                if (local_bc._6_2_ != 0) {
                  do {
                    bVar19 = 0;
                    uVar13 = 0;
                    if ((byte)local_c0 != '\0') {
                      local_60 = (size_t)(uint)(iVar4 * 4);
                      local_68 = uVar9;
                      do {
                        bVar18 = (byte)uVar13;
                        _Src = (void *)(local_c8 +
                                       ((local_bc >> 0x20 & 0xffff) * uVar13 + local_68) * 4);
                        _guard_xfg_dispatch_icall_nop(pvVar8,_Src,local_60);
                        uVar23 = 0;
                        lVar7 = local_a0;
                        FUN_14323a230(param_1 + 0x10,_Src,iVar4,local_88,local_a0,0,bVar19,
                                      *(undefined1 *)(*(longlong *)(param_1 + 0x128) + uVar13));
                        uVar22 = (undefined4)((ulonglong)lVar7 >> 0x20);
                        lVar7 = *(longlong *)(param_1 + 0xf8);
                        if ((lVar7 != 0) && (*(int *)(lVar7 + uVar13 * 0x18) != 0)) {
                          DSP::CDelayLight::ProcessBuffer(lVar7 + uVar13 * 0x18,_Src,iVar4);
                        }
                        if (bVar2) {
                          if (local_98 == 0) {
LAB_1432370a6:
                            if (local_98 != 0x210000) goto LAB_1432370e7;
                            if (bVar18 == (byte)(bVar20 + 2)) {
                              lVar7 = *(longlong *)(param_1 + 0x100) + 0x30;
                            }
                            else {
                              if (bVar19 != (byte)(bVar20 + 3)) goto LAB_1432370e7;
                              lVar7 = *(longlong *)(param_1 + 0x100) + 0x48;
                            }
                          }
                          else if (bVar18 == bVar20) {
                            lVar7 = *(longlong *)(param_1 + 0x100);
                          }
                          else {
                            if (bVar19 != (byte)(bVar20 + 1)) goto LAB_1432370a6;
                            lVar7 = *(longlong *)(param_1 + 0x100) + 0x18;
                          }
                          DSP::CDelayLight::ProcessBuffer(lVar7,_Src,iVar4);
                        }
LAB_1432370e7:
                        DSP::Mix2Interp(_Src,local_a8,*(undefined4 *)(param_1 + 0xf0),
                                        *(undefined4 *)(param_1 + 0xbc),
                                        CONCAT44(uVar22,*(undefined4 *)(param_1 + 0xec)),
                                        CONCAT44(uVar23,*(undefined4 *)(param_1 + 0xb8)),iVar4);
                        bVar19 = bVar18 + 1;
                        uVar13 = (ulonglong)bVar19;
                        pvVar8 = local_a8;
                      } while ((uint)bVar19 < (local_c0 & 0xff));
                    }
                    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                    uVar21 = *(uint *)(param_1 + 0x48);
                    if (*(uint *)(param_1 + 0x6c) <= uVar21) {
                      uVar21 = 0;
                    }
                    *(uint *)(param_1 + 0x48) = uVar21;
                    local_b0 = local_b0 + iVar4;
                    uVar9 = (ulonglong)local_b0;
                    lVar6 = local_a0;
                  } while (local_b0 < (uint)local_90);
                }
              }
              *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x90);
              *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_1 + 0x98);
              *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_1 + 0xa0);
              *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_1 + 0xa8);
              *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xb0);
              *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xb4);
              *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xb8);
              *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xbc);
              *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xc0);
              lVar7 = local_88;
            }
            goto LAB_1432371b0;
          }
          if (lVar7 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))
                      (*(longlong **)(param_1 + 0x188),lVar7);
          }
          uVar13 = local_bc;
          if (local_a8 != (void *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))();
            uVar13 = local_bc;
          }
        }
      }
LAB_1432371f0:
      local_bc = uVar13;
      if (*(longlong *)(param_1 + 0x140) != 0) {
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + (uint)local_bc._6_2_;
        uVar21 = *(uint *)(param_1 + 0x154);
        if (*(uint *)(param_1 + 0x154) <= *(uint *)(param_1 + 0x158)) {
          uVar21 = *(uint *)(param_1 + 0x158);
        }
        *(uint *)(param_1 + 0x154) = uVar21;
      }
      *(undefined4 *)(param_1 + 0x160) = (undefined4)local_bc;
      goto LAB_143236b90;
    }
    uVar21 = *(uint *)(param_1 + 0x158);
    uVar14 = *(uint *)(param_1 + 0x14c);
    if ((uVar14 <= (*(int *)(param_1 + 0x15c) - uVar21) + *(uint *)(param_1 + 0x148)) &&
       ((uVar17 = *(int *)(param_1 + 0x154) - uVar21, uVar14 <= uVar17 ||
        (((*(int *)((longlong)param_2 + 0xc) == 0x11 &&
          ((uint)*(ushort *)((longlong)param_2 + 0x12) <= *(uint *)(param_1 + 0x164))) &&
         (*(int *)(param_1 + 0x108) != 0)))))) {
      uVar16 = (undefined2)uVar14;
      if (uVar17 <= uVar14) {
        uVar14 = uVar17 & 0xffff;
      }
      local_bc._4_4_ = CONCAT22((short)uVar14,uVar16);
      local_c8 = lVar7 + (ulonglong)
                         ((uVar21 % *(uint *)(param_1 + 0x148)) * *(int *)(param_1 + 0x150)) * 4;
      goto LAB_143236c43;
    }
    local_bc = CONCAT44(local_bc._4_4_,0x2e);
LAB_14323722f:
    if (lVar7 == 0) {
      *param_2 = local_c8;
      *(ushort *)(param_2 + 2) = local_bc._4_2_;
      *(ushort *)((longlong)param_2 + 0x12) = local_bc._6_2_;
      *(uint *)(param_2 + 1) = local_c0;
      *(undefined4 *)((longlong)param_2 + 0xc) = (undefined4)local_bc;
      *(undefined4 *)(param_1 + 0x160) = 0x2b;
      return;
    }
    if ((*(int *)((longlong)param_2 + 0xc) == 0x11) &&
       ((uint)*(ushort *)((longlong)param_2 + 0x12) <= *(uint *)(param_1 + 0x164))) {
      uVar21 = (uint)*(ushort *)(param_2 + 2);
    }
    else {
      uVar21 = *(uint *)(param_1 + 0x164);
    }
    uVar17 = *(uint *)(param_1 + 0x168);
    uVar14 = *(uint *)(param_1 + 0x15c);
    uVar11 = *(uint *)(param_1 + 0x158);
    do {
      uVar10 = *(uint *)(param_1 + 0x14c) - uVar14 % *(uint *)(param_1 + 0x14c);
      uVar17 = uVar21 - uVar17;
      uVar5 = uVar10;
      if (uVar17 <= uVar10) {
        uVar5 = uVar17;
      }
      uVar12 = uVar11 - uVar14;
      if ((uVar5 <= uVar11 - uVar14) && (uVar12 = uVar17, uVar10 < uVar17)) {
        uVar12 = uVar10;
      }
      uVar14 = 0;
      if ((char)param_2[1] != '\0') {
        do {
          uVar9 = (ulonglong)*(uint *)(param_1 + 0x15c) % (ulonglong)*(uint *)(param_1 + 0x14c);
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 +
                             ((ulonglong)uVar14 * (ulonglong)*(ushort *)(param_2 + 2) +
                             (ulonglong)*(uint *)(param_1 + 0x168)) * 4),
                     (void *)(*(longlong *)(param_1 + 0x140) +
                             ((ulonglong)
                              (((*(uint *)(param_1 + 0x15c) - (int)uVar9) %
                               *(uint *)(param_1 + 0x148)) * *(int *)(param_1 + 0x150)) +
                              (ulonglong)(uVar14 * *(int *)(param_1 + 0x14c)) + uVar9) * 4),
                     (ulonglong)(uVar12 * 4));
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(byte *)(param_2 + 1));
      }
      uVar17 = *(int *)(param_1 + 0x168) + uVar12;
      *(uint *)(param_1 + 0x168) = uVar17;
      uVar14 = uVar12 + *(int *)(param_1 + 0x15c);
      uVar11 = *(uint *)(param_1 + 0x158);
      *(uint *)(param_1 + 0x15c) = uVar14;
    } while ((uVar14 < uVar11) && (uVar17 < uVar21));
    if (*(int *)((longlong)param_2 + 0xc) == 0x11) {
      uVar3 = *(ushort *)(param_2 + 2);
    }
    else {
      uVar3 = *(ushort *)((longlong)param_2 + 0x12);
    }
    if ((uVar17 == uVar3) || (*(int *)(param_1 + 0x160) == 0x11)) {
      *(short *)((longlong)param_2 + 0x12) = (short)uVar17;
      if ((*(uint *)(param_1 + 0x15c) < *(uint *)(param_1 + 0x158)) ||
         (*(uint *)(param_1 + 0x15c) < *(uint *)(param_1 + 0x154))) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
      }
      else {
        *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x160);
      }
      return;
    }
  } while( true );
}



// FUNCTION 143237410 FUN_143237410 body=599 status=ok
// SIG undefined FUN_143237410(void)

void FUN_143237410(float param_1,float param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  double dVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined *puVar16;
  ulonglong uVar17;
  float fVar18;
  
  puVar16 = (undefined *)0x0;
  if (param_3 == 4) {
    puVar16 = &DAT_145aec920;
LAB_143237452:
    if (param_3 == 0) goto LAB_143237510;
  }
  else if (param_3 == 9) {
    puVar16 = &DAT_145aec960;
  }
  else {
    if (param_3 != 0x10) goto LAB_143237452;
    puVar16 = &DAT_145aecab0;
  }
  uVar15 = 0;
  do {
    uVar14 = 0;
    lVar1 = param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar15) * 4;
    if (3 < param_3) {
      uVar11 = uVar15 * param_3 + 1;
      uVar8 = (param_3 - 4 >> 2) + 1;
      uVar17 = (ulonglong)uVar8;
      uVar14 = (ulonglong)(uVar8 * 4);
      puVar13 = (undefined4 *)(lVar1 + 8);
      do {
        puVar13[-2] = *(undefined4 *)(puVar16 + (ulonglong)(uVar11 - 1) * 4);
        puVar13[-1] = *(undefined4 *)(puVar16 + (ulonglong)uVar11 * 4);
        *puVar13 = *(undefined4 *)(puVar16 + (ulonglong)(uVar11 + 1) * 4);
        uVar8 = uVar11 + 2;
        uVar11 = uVar11 + 4;
        puVar13[1] = *(undefined4 *)(puVar16 + (ulonglong)uVar8 * 4);
        uVar17 = uVar17 - 1;
        puVar13 = puVar13 + 4;
      } while (uVar17 != 0);
    }
    if ((uint)uVar14 < param_3) {
      puVar13 = (undefined4 *)(lVar1 + uVar14 * 4);
      do {
        iVar4 = (int)uVar14;
        uVar8 = iVar4 + 1;
        uVar14 = (ulonglong)uVar8;
        *puVar13 = *(undefined4 *)(puVar16 + (ulonglong)(uVar15 * param_3 + iVar4) * 4);
        puVar13 = puVar13 + 1;
      } while (uVar8 < param_3);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < param_3);
LAB_143237510:
  if (9 < param_3) {
    dVar3 = _guard_xfg_dispatch_icall_nop((double)(param_1 / param_2));
    uVar15 = 9;
    fVar18 = 1.0 - (float)(ABS(dVar3) * 0.20833300054073334);
    do {
      uVar14 = 0;
      lVar1 = param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar15) * 4;
      if (param_3 != 0) {
        if (0xf < param_3) {
          uVar8 = 8;
          do {
            pfVar10 = (float *)(lVar1 + uVar14 * 4);
            fVar5 = pfVar10[1];
            fVar6 = pfVar10[2];
            fVar7 = pfVar10[3];
            pfVar2 = (float *)(lVar1 + uVar14 * 4);
            *pfVar2 = *pfVar10 * fVar18;
            pfVar2[1] = fVar5 * fVar18;
            pfVar2[2] = fVar6 * fVar18;
            pfVar2[3] = fVar7 * fVar18;
            uVar12 = (int)uVar14 + 0x10;
            uVar14 = (ulonglong)uVar12;
            pfVar10 = (float *)(lVar1 + (ulonglong)(uVar8 - 4) * 4);
            fVar5 = pfVar10[1];
            fVar6 = pfVar10[2];
            fVar7 = pfVar10[3];
            pfVar2 = (float *)(lVar1 + (ulonglong)(uVar8 - 4) * 4);
            *pfVar2 = *pfVar10 * fVar18;
            pfVar2[1] = fVar5 * fVar18;
            pfVar2[2] = fVar6 * fVar18;
            pfVar2[3] = fVar7 * fVar18;
            pfVar10 = (float *)(lVar1 + (ulonglong)uVar8 * 4);
            fVar5 = pfVar10[1];
            fVar6 = pfVar10[2];
            fVar7 = pfVar10[3];
            pfVar2 = (float *)(lVar1 + (ulonglong)uVar8 * 4);
            *pfVar2 = fVar18 * *pfVar10;
            pfVar2[1] = fVar18 * fVar5;
            pfVar2[2] = fVar18 * fVar6;
            pfVar2[3] = fVar18 * fVar7;
            uVar11 = uVar8 + 4;
            uVar8 = uVar8 + 0x10;
            pfVar10 = (float *)(lVar1 + (ulonglong)uVar11 * 4);
            fVar5 = pfVar10[1];
            fVar6 = pfVar10[2];
            fVar7 = pfVar10[3];
            pfVar2 = (float *)(lVar1 + (ulonglong)uVar11 * 4);
            *pfVar2 = *pfVar10 * fVar18;
            pfVar2[1] = fVar5 * fVar18;
            pfVar2[2] = fVar6 * fVar18;
            pfVar2[3] = fVar7 * fVar18;
          } while (uVar12 < (param_3 & 0xfffffff0));
        }
        uVar8 = (uint)uVar14;
        if (uVar8 < param_3) {
          if (3 < param_3 - uVar8) {
            lVar9 = uVar14 + 2;
            uVar11 = ((param_3 - uVar8) - 4 >> 2) + 1;
            uVar17 = (ulonglong)uVar11;
            uVar14 = (ulonglong)(uVar8 + uVar11 * 4);
            pfVar10 = (float *)(lVar1 + lVar9 * 4);
            do {
              pfVar10[-2] = pfVar10[-2] * fVar18;
              pfVar10[-1] = pfVar10[-1] * fVar18;
              *pfVar10 = *pfVar10 * fVar18;
              pfVar10[1] = pfVar10[1] * fVar18;
              uVar17 = uVar17 - 1;
              pfVar10 = pfVar10 + 4;
            } while (uVar17 != 0);
          }
          if ((uint)uVar14 < param_3) {
            uVar17 = (ulonglong)(param_3 - (uint)uVar14);
            pfVar10 = (float *)(lVar1 + uVar14 * 4);
            do {
              *pfVar10 = fVar18 * *pfVar10;
              uVar17 = uVar17 - 1;
              pfVar10 = pfVar10 + 1;
            } while (uVar17 != 0);
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_3);
  }
  return;
}



// FUNCTION 143237670 FUN_143237670 body=2178 status=ok
// SIG undefined FUN_143237670(void)

ulonglong FUN_143237670(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  float *pfVar1;
  uint uVar2;
  longlong *plVar3;
  ushort uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  void *_Dst;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  
  pfVar1 = (float *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x188) = param_2;
  *(undefined8 *)(param_1 + 0x180) = param_4;
  *(longlong **)(param_1 + 8) = param_3;
  CAkConvolutionReverbFXParams::GetParams(param_4,pfVar1);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)pfVar1;
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x114) = param_5[1];
  *(undefined4 *)(param_1 + 0x124) = *param_5;
  *(undefined4 *)(param_1 + 0x130) = 0;
  uVar5 = (**(code **)(*param_3 + 0x58))(param_3);
  uVar6 = FUN_14323a680(param_1 + 0x10,param_2,param_3,*param_5,uVar5);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar6 = FUN_143238200(param_1,param_5[1],uVar2);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  uVar11 = *(uint *)(param_1 + 0x118);
  uVar10 = uVar11 & 0xff;
  uVar6 = FUN_14323a870(param_1 + 0x10,param_2,uVar10);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  *(int *)(param_1 + 0x110) =
       (int)(longlong)
            ((*(float *)(param_1 + 0x94) + *pfVar1) * 0.001 * (float)*(uint *)(param_1 + 0x124)) +
       *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x50);
  uVar6 = FUN_1432386a0(param_1);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  uVar6 = FUN_143238440(param_1);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x188) + 8))();
  *(void **)(param_1 + 0x128) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uVar11 & 0xff));
  if (1 < (uVar2 & 0xff)) {
    if ((uVar11 & 0xf00) == 0x100) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 1) = 1;
      uVar11 = param_5[1];
      uVar10 = uVar11 >> 0xc;
      if ((((byte)(uVar11 >> 0x15) ^ (byte)(uVar11 >> 0x10)) & 1) != 0) {
        uVar10 = uVar10 & 0xffffffcf | 0x600;
      }
      uVar11 = uVar2 >> 0xc;
      uVar15 = uVar11 & uVar10;
      if ((uVar15 & 4) != 0) {
        cVar14 = '\0';
        for (uVar9 = uVar11 & 3; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
          cVar14 = cVar14 + '\x01';
        }
        uVar6 = 0;
        for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
          uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
        }
        *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
      }
      if ((uVar10 >> 10 & 1) != 0) {
        if ((uVar11 & 0x210) == 0) {
          uVar6 = 0;
          for (uVar9 = uVar10 & 0x3ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
          }
          *(undefined1 *)(uVar6 + *(longlong *)(param_1 + 0x128)) = 1;
        }
        else {
          cVar14 = '\0';
          for (uVar9 = uVar11 & 0x3ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            cVar14 = cVar14 + '\x01';
          }
          uVar6 = 0;
          for (uVar9 = uVar10 & 0x3ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
          }
          *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
        }
      }
      if ((uVar10 & 0x20) != 0) {
        if ((uVar11 & 0x210) == 0x210) {
          cVar14 = '\0';
          for (uVar9 = uVar11 & 0x1f; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            cVar14 = cVar14 + '\x01';
          }
          uVar6 = 0;
          uVar9 = uVar10 & 0x1f;
          if (uVar9 == 0) {
LAB_1432379ae:
            *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
          }
          else {
            do {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
              uVar9 = uVar9 & uVar9 - 1;
            } while (uVar9 != 0);
            *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
          }
        }
        else {
          if ((uVar11 & 0x210) != 0) {
            cVar14 = '\0';
            for (uVar9 = uVar11 & 0x3ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            uVar6 = 0;
            for (uVar9 = uVar10 & 0x1f; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
            }
            goto LAB_1432379ae;
          }
          uVar6 = 0;
          for (uVar9 = uVar10 & 0x1f; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
          }
          *(undefined1 *)(uVar6 + *(longlong *)(param_1 + 0x128)) = 1;
        }
      }
      if ((uVar10 & 0xfffff9c0) != 0) {
        if ((uVar15 >> 0xb & 1) != 0) {
          cVar14 = '\0';
          for (uVar9 = uVar11 & 0x7ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            cVar14 = cVar14 + '\x01';
          }
          uVar6 = 0;
          for (uVar9 = uVar10 & 0x7ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
          }
          *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
        }
        if ((uVar15 >> 0xc & 1) != 0) {
          cVar14 = '\0';
          for (uVar15 = uVar11 & 0xfff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
            cVar14 = cVar14 + '\x01';
          }
          uVar6 = 0;
          for (uVar15 = uVar10 & 0xfff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
            uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
          }
          *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
        }
        if ((uVar10 >> 0xd & 1) != 0) {
          if ((uVar2 >> 0x19 & 1) == 0) {
            if ((uVar11 & 4) == 0) goto LAB_143237b29;
            cVar14 = '\0';
            for (uVar15 = uVar11 & 3; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            uVar6 = 0;
            for (uVar15 = uVar10 & 0x1fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
            }
          }
          else {
            cVar14 = '\0';
            for (uVar15 = uVar11 & 0x1fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            uVar6 = 0;
            for (uVar15 = uVar10 & 0x1fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
            }
          }
          *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
        }
LAB_143237b29:
        if ((uVar10 >> 0xe & 1) != 0) {
          if ((uVar2 >> 0x1a & 1) == 0) {
            uVar6 = 0;
            for (uVar15 = uVar10 & 0x3fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
            }
            *(undefined1 *)(uVar6 + *(longlong *)(param_1 + 0x128)) = 1;
          }
          else {
            cVar14 = '\0';
            for (uVar15 = uVar11 & 0x3fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            uVar6 = 0;
            for (uVar15 = uVar10 & 0x3fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
            }
            *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
          }
        }
        if ((uVar10 >> 0xf & 1) != 0) {
          if ((uVar2 >> 0x1b & 1) == 0) {
            if ((uVar2 >> 0x15 & 1) == 0) goto LAB_143237c39;
            cVar14 = '\0';
            for (uVar15 = uVar11 & 0x7fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            uVar6 = 0;
            for (uVar15 = uVar10 & 0x7fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
            }
          }
          else {
            cVar14 = '\0';
            for (uVar15 = uVar11 & 0x7fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            uVar6 = 0;
            for (uVar15 = uVar10 & 0x7fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              uVar6 = (ulonglong)(byte)((char)uVar6 + 1);
            }
          }
          *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) = cVar14;
        }
LAB_143237c39:
        if ((uVar10 >> 0x10 & 1) != 0) {
          if ((uVar2 >> 0x1c & 1) == 0) {
            if ((uVar2 >> 0x19 & 1) == 0) {
              if ((uVar11 & 4) == 0) goto LAB_143237ced;
              cVar14 = '\0';
              for (uVar15 = uVar11 & 3; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
                cVar14 = cVar14 + '\x01';
              }
              bVar12 = 0;
              for (uVar15 = uVar10 & 0xffff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
                bVar12 = bVar12 + 1;
              }
            }
            else {
              cVar14 = '\0';
              for (uVar15 = uVar11 & 0x1fff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
                cVar14 = cVar14 + '\x01';
              }
              bVar12 = 0;
              for (uVar15 = uVar10 & 0xffff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
                bVar12 = bVar12 + 1;
              }
            }
          }
          else {
            cVar14 = '\0';
            for (uVar15 = uVar11 & 0xffff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            bVar12 = 0;
            for (uVar15 = uVar10 & 0xffff; uVar15 != 0; uVar15 = uVar15 & uVar15 - 1) {
              bVar12 = bVar12 + 1;
            }
          }
          *(char *)((ulonglong)bVar12 + *(longlong *)(param_1 + 0x128)) = cVar14;
        }
LAB_143237ced:
        if ((uVar10 >> 0x11 & 1) != 0) {
          if ((uVar2 >> 0x1d & 1) == 0) {
            if ((uVar2 >> 0x16 & 1) != 0) {
              cVar14 = '\0';
              for (uVar11 = uVar11 & 0x3ff; uVar11 != 0; uVar11 = uVar11 & uVar11 - 1) {
                cVar14 = cVar14 + '\x01';
              }
              bVar12 = 0;
              for (uVar10 = uVar10 & 0x1ffff; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
                bVar12 = bVar12 + 1;
              }
              goto LAB_143237d6e;
            }
            bVar12 = 0;
            for (uVar10 = uVar10 & 0x1ffff; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
              bVar12 = bVar12 + 1;
            }
            *(undefined1 *)((ulonglong)bVar12 + *(longlong *)(param_1 + 0x128)) = 1;
          }
          else {
            cVar14 = '\0';
            for (uVar11 = uVar11 & 0x1ffff; uVar11 != 0; uVar11 = uVar11 & uVar11 - 1) {
              cVar14 = cVar14 + '\x01';
            }
            bVar12 = 0;
            uVar10 = uVar10 & 0x1ffff;
            if (uVar10 == 0) {
LAB_143237d6e:
              *(char *)((ulonglong)bVar12 + *(longlong *)(param_1 + 0x128)) = cVar14;
            }
            else {
              do {
                bVar12 = bVar12 + 1;
                uVar10 = uVar10 & uVar10 - 1;
              } while (uVar10 != 0);
              *(char *)((ulonglong)bVar12 + *(longlong *)(param_1 + 0x128)) = cVar14;
            }
          }
        }
      }
    }
    else {
      uVar6 = 0;
      if (uVar10 != 0) {
        do {
          bVar12 = (char)uVar6 + 1;
          *(char *)(uVar6 + *(longlong *)(param_1 + 0x128)) =
               (char)(uVar6 % (ulonglong)(uVar2 & 0xff));
          uVar6 = (ulonglong)bVar12;
        } while (bVar12 < uVar10);
      }
    }
  }
  plVar7 = (longlong *)(**(code **)(*param_3 + 8))();
  bVar12 = *(byte *)(param_5 + 1);
  uVar2 = *(uint *)(param_1 + 0x50);
  plVar3 = *(longlong **)(param_1 + 0x188);
  uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar10 = 1;
  uVar11 = (uint)uVar4;
  if (uVar11 < uVar2) {
    *(uint *)(param_1 + 0x148) = uVar2;
    iVar13 = (uVar2 - 1) - (uVar2 - 1) % (uint)uVar4;
    uVar15 = uVar2 % (uint)uVar4;
    *(int *)(param_1 + 0x170) = iVar13;
    uVar11 = uVar2;
    if (uVar15 != 0) {
      *(uint *)(param_1 + 0x170) = (uVar4 - uVar15) + iVar13;
LAB_143237e54:
      uVar11 = uVar2 * 2;
      *(uint *)(param_1 + 0x148) = uVar11;
    }
    if (uVar11 == 0) goto LAB_143237ea8;
    lVar8 = (**(code **)(*plVar3 + 8))(plVar3,(ulonglong)(bVar12 * uVar11) << 2);
    *(longlong *)(param_1 + 0x140) = lVar8;
    if (lVar8 != 0) goto LAB_143237ea8;
    uVar10 = 2;
  }
  else {
    if ((uVar2 < uVar11) && (uVar11 % uVar2 != 0)) {
      *(uint *)(param_1 + 0x170) = uVar2;
      goto LAB_143237e54;
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
LAB_143237ea8:
  *(uint *)(param_1 + 0x14c) = uVar2;
  *(uint *)(param_1 + 0x150) = (uint)bVar12;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return (ulonglong)uVar10;
}



// FUNCTION 143237f00 ProcessSurroundChannels body=372 status=ok
// SIG undefined ProcessSurroundChannels(void)

void CAkConvolutionReverbFX::ProcessSurroundChannels
               (longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,int param_5,
               uint param_6)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    DSP::CDelayLight::ProcessBuffer
              (*(longlong *)(param_1 + 0x100) + (ulonglong)(uint)(param_5 * 2) * 0x18,*param_3,
               param_4);
    DSP::CDelayLight::ProcessBuffer
              (*(longlong *)(param_1 + 0x100) + (ulonglong)(param_5 * 2 + 1) * 0x18,
               *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,param_4);
  }
  FUN_14323b040(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,param_4,
                *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0x98));
  DSP::Mix2Interp(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)param_6 * 4,*param_3,
                  *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8),
                  *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xf0),
                  *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xbc),param_4);
  DSP::Mix2Interp(*param_2 + (ulonglong)(param_6 + 1) * (ulonglong)*(ushort *)(param_2 + 2) * 4,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,*(undefined4 *)(param_1 + 0xec)
                  ,*(undefined4 *)(param_1 + 0xb8),
                  *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xf0),
                  *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xbc),param_4);
  return;
}



// FUNCTION 143238090 FUN_143238090 body=174 status=ok
// SIG undefined FUN_143238090(void)

undefined8 FUN_143238090(longlong param_1)

{
  uint uVar1;
  ulonglong uVar3;
  ulonglong uVar2;
  
  FUN_14323a980(param_1 + 0x10);
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (uVar2 = uVar3, *(int *)(param_1 + 0x11c) != 0)) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0xf8) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x11c));
  }
  if ((*(longlong *)(param_1 + 0x100) != 0) && (*(int *)(param_1 + 0x120) != 0)) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0x100) + uVar3 * 0x18);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x120));
  }
  return 1;
}



// FUNCTION 143238140 ResetFrontBackDelay body=89 status=ok
// SIG undefined ResetFrontBackDelay(void)

void CAkConvolutionReverbFX::ResetFrontBackDelay(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 0x100) != 0) && (uVar2 = 0, *(int *)(param_1 + 0x120) != 0)) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0x100) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x120));
  }
  return;
}



// FUNCTION 1432381a0 ResetPreDelay body=89 status=ok
// SIG undefined ResetPreDelay(void)

void CAkConvolutionReverbFX::ResetPreDelay(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (uVar2 = 0, *(int *)(param_1 + 0x11c) != 0)) {
    do {
      DSP::CDelayLight::Reset(*(longlong *)(param_1 + 0xf8) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x11c));
  }
  return;
}



// FUNCTION 143238200 FUN_143238200 body=569 status=ok
// SIG undefined FUN_143238200(void)

undefined8 FUN_143238200(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2 >> 8 & 0xf;
  uVar2 = param_3 >> 8 & 0xf;
  bVar3 = (byte)param_2;
  bVar4 = (byte)param_3;
  if ((((uVar2 == uVar5) || (uVar2 == 0)) || (bVar4 < 2)) || (bVar3 < 2)) {
    if (*(int *)(param_1 + 0xc0) == 1) {
      *(uint *)(param_1 + 0x118) = param_2;
      return 1;
    }
    if ((uVar5 != 0) && ((uVar6 = param_3 & 0xff, uVar2 != 0 || (uVar6 < 2)))) {
      *(uint *)(param_1 + 0x118) = param_3;
      if (uVar5 == 1) {
        if (((byte)(bVar4 - ((byte)(param_3 >> 0xf) & 1)) == '\x01') && (1 < bVar3)) {
          uVar2 = 3;
          bVar3 = 0;
          do {
            bVar3 = bVar3 + 1;
            uVar2 = uVar2 & uVar2 - 1;
          } while (uVar2 != 0);
          *(byte *)(param_1 + 0x118) = bVar3;
          *(uint *)(param_1 + 0x118) = bVar3 | 0x3100;
          return 1;
        }
        uVar2 = (param_2 & param_3) >> 0xc;
        if (uVar2 == 0) {
          uVar2 = 4;
          bVar3 = 0;
          do {
            bVar3 = bVar3 + 1;
            uVar2 = uVar2 & uVar2 - 1;
          } while (uVar2 != 0);
          *(byte *)(param_1 + 0x118) = bVar3;
          *(uint *)(param_1 + 0x118) = bVar3 | 0x4100;
          return 1;
        }
        bVar3 = 0;
        uVar5 = uVar2;
        do {
          bVar3 = bVar3 + 1;
          uVar5 = uVar5 & uVar5 - 1;
        } while (uVar5 != 0);
        *(byte *)(param_1 + 0x118) = bVar3;
        *(uint *)(param_1 + 0x118) = (uint)bVar3 | uVar2 << 0xc | 0x100;
        return 1;
      }
      uVar2 = param_2 & 0xff;
      if (uVar6 == 1) {
        *(byte *)(param_1 + 0x118) = bVar3;
        param_2 = param_2 & 0xff;
      }
      else {
        if (uVar6 < uVar2) {
          bVar3 = bVar4;
        }
        uVar2 = (uint)bVar3;
        param_2 = uVar2 | 0x200;
        *(byte *)(param_1 + 0x118) = bVar3;
      }
      *(uint *)(param_1 + 0x118) = param_2;
      if ((uVar2 == 4) || (uVar2 == 1)) {
        uVar2 = 4;
      }
      else if ((uVar2 != 9) && (uVar2 != 0x10)) {
        return 0x4e;
      }
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                        (*(longlong **)(param_1 + 0x188),(uVar2 + 3 >> 2) * uVar2 * 0x10);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 != 0) {
        FUN_143237410(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),uVar2,lVar1);
        *(uint *)(param_1 + 0x130) = uVar2;
        return 1;
      }
      return 2;
    }
  }
  return 0x4e;
}



// FUNCTION 143238440 FUN_143238440 body=598 status=ok
// SIG undefined FUN_143238440(void)

int FUN_143238440(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  iVar2 = 1;
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar9 = (ulonglong)(*(float *)(param_1 + 0x94) * 0.001 * (float)*(uint *)(param_1 + 0x124));
  if ((int)uVar9 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x114) & 0xf00;
  if (uVar1 == 0x100) {
    uVar1 = *(uint *)(param_1 + 0x114) & 0x210000;
    if (uVar1 == 0x210000) {
      uVar7 = 4;
    }
    else {
      if (uVar1 == 0) {
        return 1;
      }
      uVar7 = 2;
    }
    uVar8 = (ulonglong)uVar7;
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                      (*(longlong **)(param_1 + 0x188),uVar8 * 0x18);
    *(longlong *)(param_1 + 0x100) = lVar3;
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x100) + uVar5);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          *(undefined8 *)(puVar4 + 2) = 0;
          puVar4[4] = 0;
        }
        uVar5 = uVar5 + 0x18;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      *(uint *)(param_1 + 0x120) = uVar7;
      if ((uVar1 != 0) &&
         (iVar2 = DSP::CDelayLight::Init
                            (*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x188),
                             uVar9 & 0xffffffff), iVar2 == 1)) {
        iVar2 = DSP::CDelayLight::Init
                          (*(longlong *)(param_1 + 0x100) + 0x18,*(undefined8 *)(param_1 + 0x188),
                           uVar9 & 0xffffffff);
      }
      if (uVar1 != 0x210000) {
        return iVar2;
      }
      if (iVar2 != 1) {
        return iVar2;
      }
      iVar2 = DSP::CDelayLight::Init
                        (*(longlong *)(param_1 + 0x100) + 0x30,*(undefined8 *)(param_1 + 0x188),
                         uVar9 & 0xffffffff);
      if (iVar2 != 1) {
        return iVar2;
      }
      iVar2 = DSP::CDelayLight::Init
                        (*(longlong *)(param_1 + 0x100) + 0x48,*(undefined8 *)(param_1 + 0x188),
                         uVar9 & 0xffffffff);
      return iVar2;
    }
  }
  else {
    if (uVar1 != 0x200) {
      return 1;
    }
    uVar1 = *(uint *)(param_1 + 0x130);
    if (uVar1 == 0) {
      return 1;
    }
    uVar1 = (uVar1 - (uVar1 >> 1)) - 1;
    uVar8 = (ulonglong)uVar1;
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                      (*(longlong **)(param_1 + 0x188),(ulonglong)uVar1 * 0x18);
    *(longlong *)(param_1 + 0x100) = lVar3;
    if (lVar3 != 0) {
      uVar6 = uVar5;
      if (uVar1 != 0) {
        do {
          puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x100) + uVar6);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
            *(undefined8 *)(puVar4 + 2) = 0;
            puVar4[4] = 0;
          }
          uVar8 = uVar8 - 1;
          uVar6 = uVar6 + 0x18;
        } while (uVar8 != 0);
      }
      *(uint *)(param_1 + 0x120) = uVar1;
      if (uVar1 == 0) {
        return 1;
      }
      do {
        if (iVar2 != 1) {
          return iVar2;
        }
        iVar2 = DSP::CDelayLight::Init
                          (*(longlong *)(param_1 + 0x100) + uVar5 * 0x18,
                           *(undefined8 *)(param_1 + 0x188),uVar9 & 0xffffffff);
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 < uVar1);
      return iVar2;
    }
  }
  return 2;
}



// FUNCTION 1432386a0 FUN_1432386a0 body=277 status=ok
// SIG undefined FUN_1432386a0(void)

undefined8 FUN_1432386a0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(*(float *)(param_1 + 0x90) * 0.001 * (float)*(uint *)(param_1 + 0x124));
  if ((int)uVar9 == 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x118);
    uVar8 = (ulonglong)(uint)bVar1;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                      (*(longlong **)(param_1 + 0x188),(ulonglong)bVar1 * 0x18);
    *(longlong *)(param_1 + 0xf8) = lVar2;
    if (lVar2 == 0) {
      return 2;
    }
    uVar7 = 0;
    uVar5 = uVar7;
    if (bVar1 != 0) {
      do {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0xf8) + uVar5);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          *(undefined8 *)(puVar4 + 2) = 0;
          puVar4[4] = 0;
        }
        uVar8 = uVar8 - 1;
        uVar5 = uVar5 + 0x18;
      } while (uVar8 != 0);
    }
    *(uint *)(param_1 + 0x11c) = (uint)bVar1;
    if (bVar1 != 0) {
      do {
        uVar3 = DSP::CDelayLight::Init
                          (*(longlong *)(param_1 + 0xf8) + uVar7 * 0x18,
                           *(undefined8 *)(param_1 + 0x188),uVar9 & 0xffffffff);
        if ((int)uVar3 != 1) {
          return uVar3;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < bVar1);
    }
  }
  return 1;
}



// FUNCTION 1432387c0 FUN_1432387c0 body=193 status=ok
// SIG undefined FUN_1432387c0(void)

undefined8 FUN_1432387c0(undefined8 *param_1,longlong *param_2)

{
  DSP::AkFFTAllButterflies::CAkPartitionedConvolutionEngine::Term(param_1 + 2);
  FUN_143238910(param_1);
  FUN_143238890(param_1);
  if (param_1[0x28] != 0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
    param_1[0x28] = 0;
  }
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x25] != 0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(longlong *)param_1[0x31] + 0x10))();
    param_1[0x27] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 143238890 FUN_143238890 body=125 status=ok
// SIG undefined FUN_143238890(void)

void FUN_143238890(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x120) != 0) {
      do {
        DSP::CDelayLight::Term
                  (*(longlong *)(param_1 + 0x100) + uVar3 * 0x18,*(undefined8 *)(param_1 + 0x188));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x120));
      lVar1 = *(longlong *)(param_1 + 0x100);
    }
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))(*(longlong **)(param_1 + 0x188),lVar1);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return;
}



// FUNCTION 143238910 FUN_143238910 body=125 status=ok
// SIG undefined FUN_143238910(void)

void FUN_143238910(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x11c) != 0) {
      do {
        DSP::CDelayLight::Term
                  (*(longlong *)(param_1 + 0xf8) + uVar3 * 0x18,*(undefined8 *)(param_1 + 0x188));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x11c));
      lVar1 = *(longlong *)(param_1 + 0xf8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))(*(longlong **)(param_1 + 0x188),lVar1);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}



// FUNCTION 143238990 FUN_143238990 body=4798 status=ok
// SIG undefined FUN_143238990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143238990(longlong param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  code *pcVar9;
  longlong lVar10;
  void *_Src;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  void *pvVar19;
  void *pvVar20;
  float *pfVar21;
  int iVar22;
  float fVar23;
  ulonglong uVar24;
  size_t sVar25;
  float fVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  ulonglong uVar30;
  byte bVar31;
  int iVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  longlong local_res8;
  ulonglong local_res10;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  float local_e8 [2];
  longlong local_e0;
  float local_d8 [2];
  float local_d0;
  float local_c8 [2];
  float *local_c0;
  void *local_b8;
  void *local_b0;
  uint local_a8;
  undefined4 local_a4;
  ushort local_a0;
  ushort local_9e;
  
  uVar6 = *(ushort *)((longlong)param_2 + 0x12);
  uVar16 = (ulonglong)uVar6;
  uVar36 = *(uint *)(param_1 + 0x114);
  fVar26 = (float)(uint)uVar6;
  fVar38 = (float)(uint)uVar6;
  if (((uVar36 >> 0xc) - 4 & 0xfffffffb) == 0) {
    fVar40 = 1.0;
    uVar12 = *(uint *)(param_3 + 1);
    fVar41 = 1.0;
    if (uVar36 >> 0xc == 8) {
      fVar40 = *(float *)(param_1 + 0xe8);
      fVar41 = *(float *)(param_1 + 0xb4);
    }
    else if ((uVar12 & 0xf00) == 0x100) {
      fVar40 = *(float *)(param_1 + 0xdc);
      fVar41 = *(float *)(param_1 + 0xa8);
    }
    uVar34 = uVar36 - (uVar36 >> 0xf & 0x1ffe0001) & 0xff;
    if ((uVar12 & 0xff) < uVar34) {
      uVar34 = uVar12 - (uVar12 >> 0xf & 1) & 0xff;
    }
    if (uVar34 != 0) {
      lVar35 = 0;
      uVar16 = (ulonglong)uVar34;
      do {
        local_e0._0_4_ = fVar41 * *(float *)(param_1 + 0xbc);
        local_e8[0] = fVar40 * *(float *)(param_1 + 0xf0);
        uStack_110 = 0x143239b9d;
        local_d8[0] = fVar26;
        DSP::Mix2Interp(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar35 * 4,
                        *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * lVar35 * 4,
                        *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8));
        lVar35 = lVar35 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      uVar36 = *(uint *)(param_1 + 0x114);
    }
    lVar35 = 0;
    if ((uVar36 & 0x8000) == 0) {
      return;
    }
    local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xe8);
    local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xb4);
    if ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0) {
      lVar35 = *param_2 +
               (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
               (ulonglong)*(ushort *)(param_2 + 2) * 4;
    }
    uStack_110 = 0x143239c23;
    local_d8[0] = fVar38;
    DSP::Mix2Interp(lVar35,*param_3,*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8))
    ;
    return;
  }
  if ((uVar36 & 0xf00) != 0x200) {
    uVar36 = uVar36 - (uVar36 >> 0xf & 0x1ffe0001) & 0xff;
    if (2 < uVar36) {
      uVar36 = 2;
    }
    uStack_110 = 0x1432392bc;
    pvVar20 = (void *)(**(code **)(**(longlong **)(param_1 + 0x188) + 8))
                                (*(longlong **)(param_1 + 0x188),uVar36 * uVar16 * 4);
    if (pvVar20 == (void *)0x0) {
      return;
    }
    local_a4 = 0x2b;
    uVar12 = (uVar36 != 2) + 3;
    bVar31 = 0;
    uVar36 = uVar12;
    do {
      bVar31 = bVar31 + 1;
      uVar36 = uVar36 & uVar36 - 1;
    } while (uVar36 != 0);
    local_a8 = uVar12 * 0x1000 | (uint)bVar31 | 0x100;
    uVar36 = *(uint *)(param_1 + 0x114) >> 0xc & 7;
    local_b8 = pvVar20;
    local_b0 = pvVar20;
    if (uVar36 == 3) {
      pvVar19 = (void *)(uVar16 * 4 + (longlong)pvVar20);
      local_d8[0] = *(float *)(param_1 + 0x98);
      local_e0._0_4_ = *(float *)(param_1 + 0xcc);
      uStack_110 = 0x143239688;
      local_e8[0] = fVar26;
      local_a0 = uVar6;
      local_9e = uVar6;
      FUN_14323ab80(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,pvVar20,pvVar19);
      local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xa8);
      local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xdc);
      uStack_110 = 0x1432396d3;
      local_d8[0] = fVar26;
      DSP::Mix2Interp(*param_2,pvVar20,*(undefined4 *)(param_1 + 0xec),
                      *(undefined4 *)(param_1 + 0xb8));
      local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xa8);
      local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xdc);
      uStack_110 = 0x143239727;
      local_d8[0] = fVar26;
      DSP::Mix2Interp(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,pvVar19,
                      *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8));
      uVar16 = (ulonglong)(uint)fVar26;
    }
    else if (uVar36 == 4) {
      local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xa8);
      local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xdc);
      uStack_110 = 0x143239639;
      local_d8[0] = fVar38;
      local_a0 = uVar6;
      local_9e = uVar6;
      DSP::Mix2Interp(*param_2,*param_3,*(undefined4 *)(param_1 + 0xec),
                      *(undefined4 *)(param_1 + 0xb8));
    }
    else {
      local_a0 = uVar6;
      local_9e = uVar6;
      if (uVar36 == 7) {
        uVar36 = *(uint *)(param_3 + 1) & 0x7000;
        fVar26 = (float)(uint)uVar6;
        if ((uVar36 == 0x3000) || ((uVar36 == 0 && ((byte)*(uint *)(param_3 + 1) < 3)))) {
          local_d8[0] = 0.4545;
          local_e0._0_4_ = 0.4545;
          local_e8[0] = 0.4545;
          uStack_110 = 0x143239455;
          local_d0 = fVar26;
          DSP::Mix2Interp(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,pvVar20);
          local_e0._0_4_ = *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xbc);
          local_e8[0] = *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0xf0);
          uStack_110 = 0x1432394a9;
          local_d8[0] = fVar26;
          DSP::Mix2Interp(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,pvVar20,
                          *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8));
          local_d8[0] = -0.117;
          local_e0._0_4_ = -0.117;
          local_e8[0] = 0.883;
          uStack_110 = 0x1432394e8;
          local_d0 = fVar26;
          DSP::Mix2Interp(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,pvVar20,
                          0x3f620c4a);
          pvVar19 = (void *)(uVar16 * 4 + (longlong)pvVar20);
          local_d8[0] = -0.117;
          local_e0._0_4_ = -0.117;
          local_e8[0] = 0.883;
          uStack_110 = 0x143239522;
          local_d0 = fVar26;
          DSP::Mix2Interp(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,*param_3,pvVar19,
                          0x3f620c4a);
          local_e8[0] = *(float *)(param_1 + 0x98);
          uStack_110 = 0x143239546;
          FUN_14323b040(pvVar20,pvVar19,fVar26,*(undefined4 *)(param_1 + 0xcc));
          local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xa8);
          local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xdc);
          uStack_110 = 0x143239591;
          local_d8[0] = fVar26;
          DSP::Mix2Interp(*param_2,pvVar20,*(undefined4 *)(param_1 + 0xec),
                          *(undefined4 *)(param_1 + 0xb8));
          lVar35 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4;
        }
        else {
          local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xa8);
          local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xdc);
          uStack_110 = 0x1432393a3;
          local_d8[0] = fVar26;
          DSP::Mix2Interp(*param_2,*param_3,*(undefined4 *)(param_1 + 0xec),
                          *(undefined4 *)(param_1 + 0xb8));
          local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xa8);
          local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xdc);
          uStack_110 = 0x143239402;
          local_d8[0] = fVar26;
          DSP::Mix2Interp(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,
                          *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,
                          *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8));
          lVar35 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8;
          pvVar19 = (void *)(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 8);
        }
        local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xa8);
        local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xdc);
        uStack_110 = 0x1432395e8;
        local_d8[0] = fVar38;
        DSP::Mix2Interp(lVar35,pvVar19,*(undefined4 *)(param_1 + 0xec),
                        *(undefined4 *)(param_1 + 0xb8));
      }
    }
    uVar30 = 0;
    fVar26 = (float)uVar16;
    if ((*(uint *)(param_1 + 0x114) & 0x210000) != 0) {
      if ((*(uint *)(param_3 + 1) >> 0xc & 0x210) == 0) {
        sVar25 = (size_t)(uint)((int)fVar26 * 4);
        uStack_110 = 0x14323976b;
        _guard_xfg_dispatch_icall_nop(pvVar20,(void *)*param_3,(ulonglong)(uint)((int)fVar26 * 4));
        uVar37 = (ulonglong)*(ushort *)(param_3 + 2);
      }
      else {
        uVar37 = uVar30;
        for (uVar36 = *(uint *)(param_3 + 1) >> 0xc & 7; uVar36 != 0; uVar36 = uVar36 & uVar36 - 1)
        {
          uVar37 = (ulonglong)((int)uVar37 + 1);
        }
        sVar25 = (size_t)(uint)((int)fVar26 * 4);
        uStack_110 = 0x1432397c6;
        _guard_xfg_dispatch_icall_nop
                  (pvVar20,(void *)(*param_3 + uVar37 * *(ushort *)(param_3 + 2) * 4),sVar25);
        uVar37 = (ulonglong)((int)uVar37 + 1) * (ulonglong)*(ushort *)(param_3 + 2);
      }
      pvVar19 = (void *)(uVar16 * 4 + (longlong)pvVar20);
      uStack_110 = 0x143239800;
      _guard_xfg_dispatch_icall_nop(pvVar19,(void *)(*param_3 + uVar37 * 4),sVar25);
      local_e0._0_4_ = (float)(*(uint *)(param_1 + 0x114) >> 0xe & 1 | 2);
      local_e8[0] = 0.0;
      uStack_110 = 0x143239829;
      CAkConvolutionReverbFX::ProcessSurroundChannels(param_1,param_2,&local_b0,uVar16);
      if ((*(uint *)(param_1 + 0x114) & 0x210000) == 0x210000) {
        uVar36 = *(uint *)(param_1 + 0x114) >> 0xe;
        if ((*(uint *)(param_3 + 1) & 0x210000) == 0x210000) {
          uVar37 = ((ulonglong)(*(uint *)(param_3 + 1) & 0x4000) | 0x10000) >> 0xe;
          uStack_110 = 0x14323995a;
          _guard_xfg_dispatch_icall_nop
                    (pvVar20,(void *)(*param_3 + *(ushort *)(param_3 + 2) * uVar37 * 4),sVar25);
          uStack_110 = 0x143239989;
          _guard_xfg_dispatch_icall_nop
                    (pvVar19,(void *)(*param_3 +
                                     (uVar37 + 1) * (ulonglong)*(ushort *)(param_3 + 2) * 4),sVar25)
          ;
          local_e0._0_4_ = (float)(uVar36 & 1 | 4);
          local_e8[0] = 1.4013e-45;
          uStack_110 = 0x1432399b3;
          CAkConvolutionReverbFX::ProcessSurroundChannels(param_1,param_2,&local_b0,uVar16);
          pvVar20 = local_b8;
        }
        else {
          uVar37 = (ulonglong)(uVar36 & 1) | 4;
          local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xac);
          local_e8[0] = *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xf0);
          uStack_110 = 0x1432398be;
          local_d8[0] = fVar26;
          DSP::Mix2Interp(*param_2 + *(ushort *)(param_2 + 2) * uVar37 * 4,pvVar20,
                          *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8));
          local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xac);
          local_e8[0] = *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xf0);
          uStack_110 = 0x14323991e;
          local_d8[0] = fVar26;
          DSP::Mix2Interp(*param_2 + (uVar37 + 1) * (ulonglong)*(ushort *)(param_2 + 2) * 4,pvVar19,
                          *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8));
        }
      }
    }
    uVar36 = *(uint *)(param_1 + 0x114);
    if ((uVar36 >> 0xf & 1) != 0) {
      uVar37 = uVar30;
      if ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0) {
        uVar37 = *param_2 +
                 (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                 (ulonglong)*(ushort *)(param_2 + 2) * 4;
      }
      local_e0._0_4_ = *(float *)(param_1 + 0xbc) * *(float *)(param_1 + 0xb4);
      local_e8[0] = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xe8);
      uStack_110 = 0x143239a35;
      local_d8[0] = fVar26;
      DSP::Mix2Interp(uVar37,*param_3,*(undefined4 *)(param_1 + 0xec),
                      *(undefined4 *)(param_1 + 0xb8));
      uVar36 = *(uint *)(param_1 + 0x114);
    }
    uVar12 = uVar36 >> 0xc;
    if ((uVar12 & 0xff9c0) != 0) {
      for (uVar34 = uVar12 & 0x637; uVar29 = (uint)uVar30, uVar34 != 0; uVar34 = uVar34 & uVar34 - 1
          ) {
        uVar30 = (ulonglong)(uVar29 + 1);
      }
      uVar34 = (uVar36 & 0xff) - 1;
      if ((uVar12 & 8) == 0) {
        uVar34 = uVar36 & 0xff;
      }
      if (uVar29 < uVar34) {
        uVar37 = (ulonglong)(uVar34 - uVar29);
        do {
          uStack_110 = 0x143239aa8;
          AK::DSP::ApplyGainRamp
                    (*param_2 + *(ushort *)(param_2 + 2) * uVar30 * 4,
                     *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8),uVar16);
          uVar30 = uVar30 + 1;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
      }
    }
    uStack_110 = 0x143239ac1;
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))(*(longlong **)(param_1 + 0x188),pvVar20);
    return;
  }
  fVar40 = *(float *)(param_1 + 0x130);
  pvVar20 = (void *)(ulonglong)(uint)fVar40;
  fVar41 = *(float *)(param_1 + 0xcc) * 0.0055555557;
  fVar42 = *(float *)(param_1 + 0x98) * 0.0055555557;
  local_c8[1] = fVar40;
  if (((*(longlong *)(param_1 + 0x100) == 0) && (*(float *)(param_1 + 0xa8) == 1.0)) &&
     (*(float *)(param_1 + 0xac) == 1.0)) {
    local_e0._0_4_ = *(float *)(param_1 + 0xbc);
    local_e8[0] = *(float *)(param_1 + 0xf0);
    uStack_110 = 0x143238aac;
    local_d8[0] = fVar38;
    DSP::Mix2Interp(*param_2,*param_3,*(undefined4 *)(param_1 + 0xec),
                    *(undefined4 *)(param_1 + 0xb8));
    puVar28 = auStack_108;
    if (1 < (uint)fVar40) {
      lVar35 = 1;
      uVar30 = (ulonglong)((int)fVar40 - 1);
      do {
        local_e0._0_4_ = fVar42 * *(float *)(param_1 + 0xbc);
        local_e8[0] = fVar41 * *(float *)(param_1 + 0xf0);
        uStack_110 = 0x143238b1f;
        local_d8[0] = fVar38;
        DSP::Mix2Interp(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar35 * 4,
                        *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * lVar35 * 4,
                        *(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xb8));
        lVar35 = lVar35 + 1;
        uVar30 = uVar30 - 1;
        puVar28 = auStack_108;
      } while (uVar30 != 0);
    }
    goto LAB_143239063;
  }
  uVar36 = (int)fVar40 + 3U >> 2;
  local_c8[0] = (float)(uVar36 * (int)fVar40);
  uVar37 = (ulonglong)(uint)((int)local_c8[0] * 0x10);
  uVar30 = (ulonglong)(uint)((int)local_c8[0] * 0x10) + 0xf;
  if (uVar30 <= uVar37) {
    uVar30 = 0xffffffffffffff0;
  }
  uStack_110 = 0x143238b61;
  lVar35 = *(longlong *)(param_1 + 0x138);
  lVar18 = -(uVar30 & 0xfffffffffffffff0);
  puVar28 = auStack_108 + lVar18;
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  uVar5 = *(undefined4 *)(param_1 + 0xa8);
  local_c0 = (float *)((longlong)local_c8 + lVar18);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    uVar16 = uVar37 + 0xf;
    if (uVar16 <= uVar37) {
      uVar16 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x143238ba6;
    lVar11 = -(uVar16 & 0xfffffffffffffff0);
    lVar10 = (longlong)local_c8 + lVar11 + lVar18;
    *(longlong *)((longlong)local_e8 + lVar11 + lVar18) = lVar10;
    *(undefined8 *)(auStack_108 + lVar11 + lVar18 + -8) = 0x143238bbe;
    FUN_143236570(uVar5,uVar4,fVar40,lVar35);
    local_c8[0] = 0.0;
    puVar27 = auStack_108 + lVar11 + lVar18;
    if (fVar40 != 0.0) {
      uVar16 = 0;
      do {
        local_b8 = pvVar20;
        uVar12 = uVar36 * (int)local_c8[0] * 4;
        uVar37 = (ulonglong)uVar12;
        pfVar21 = local_c0 + uVar12;
        uVar30 = uVar16;
        do {
          fVar38 = 0.0;
          uVar24 = uVar16;
          if (3 < (uint)fVar40) {
            iVar32 = 2;
            pfVar21 = (float *)(uVar37 * 4 + lVar35);
            do {
              iVar13 = iVar32 + -1;
              pfVar1 = pfVar21 + 1;
              iVar22 = (int)uVar24;
              uVar12 = iVar22 + 4;
              uVar24 = (ulonglong)uVar12;
              fVar23 = *pfVar21;
              iVar14 = uVar36 * iVar32;
              iVar15 = iVar32 + 1;
              pfVar2 = pfVar21 + 2;
              iVar32 = iVar32 + 4;
              pfVar3 = pfVar21 + 3;
              pfVar21 = pfVar21 + 4;
              fVar38 = *(float *)(lVar10 + (iVar13 * uVar36 * 4 + uVar30) * 4) * *pfVar1 +
                       *(float *)(lVar10 + (uVar36 * iVar22 * 4 + uVar30) * 4) * fVar23 + fVar38 +
                       *(float *)(lVar10 + ((uint)(iVar14 * 4) + uVar30) * 4) * *pfVar2 +
                       *(float *)(lVar10 + (iVar15 * uVar36 * 4 + uVar30) * 4) * *pfVar3;
            } while (uVar12 < (int)fVar40 - 3U);
            pfVar21 = local_c0 + uVar37;
          }
          uVar33 = uVar24;
          if ((uint)(float)uVar24 < (uint)fVar40) {
            do {
              iVar32 = (int)uVar24;
              fVar23 = (float)(iVar32 + 1);
              uVar24 = (ulonglong)(uint)fVar23;
              fVar38 = fVar38 + *(float *)(lVar10 + (uVar36 * iVar32 * 4 + uVar30) * 4) *
                                *(float *)(lVar35 + (uVar37 + uVar33) * 4);
              uVar33 = uVar33 + 1;
            } while ((uint)fVar23 < (uint)fVar40);
            pfVar21 = local_c0 + uVar37;
          }
          pfVar21[uVar30] = fVar38;
          uVar30 = uVar30 + 1;
          local_b8 = (void *)((longlong)local_b8 + -1);
        } while (local_b8 != (void *)0x0);
        local_c8[0] = (float)((int)local_c8[0] + 1);
        puVar27 = auStack_108 + lVar11 + lVar18;
      } while ((uint)local_c8[0] < (uint)fVar40);
    }
LAB_143238d1b:
    uVar16 = (ulonglong)(uint)fVar26;
    puVar28 = puVar27;
  }
  else {
    *(float **)((longlong)local_e8 + lVar18) = local_c0;
    *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x1432390ba;
    FUN_143236570(uVar5,uVar4,fVar40,lVar35);
    sVar25 = (longlong)pvVar20 * uVar16 * 4;
    pcVar9 = *(code **)(**(longlong **)(param_1 + 0x188) + 8);
    *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x1432390d9;
    pvVar19 = (void *)(*pcVar9)();
    pfVar21 = local_c0;
    local_b8 = pvVar19;
    if (pvVar19 == (void *)0x0) {
      uVar12 = (int)local_c8[0] * 4;
      puVar28 = auStack_108 + lVar18;
      if (uVar12 != 0) {
        *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x143239264;
        _guard_xfg_dispatch_icall_nop(pfVar21,0,(ulonglong)uVar12 << 2);
        puVar28 = auStack_108 + lVar18;
      }
    }
    else {
      _Src = (void *)*param_3;
      *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x1432390f9;
      _guard_xfg_dispatch_icall_nop(pvVar19,_Src,sVar25);
      pvVar19 = (void *)*param_3;
      *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x14323910b;
      _guard_xfg_dispatch_icall_nop(pvVar19,0,sVar25);
      lVar10 = param_3[1];
      *(undefined1 *)(param_3 + 1) = 0;
      local_b0 = local_b8;
      *(ushort *)(param_3 + 2) = uVar6;
      *(ushort *)((longlong)param_3 + 0x12) = uVar6;
      local_a8 = (uint)fVar40 & 0xff | 0x200;
      local_a4 = 0x2b;
      *(uint *)(param_3 + 1) = local_a8;
      pcVar9 = *(code **)(**(longlong **)(param_1 + 8) + 8);
      local_a0 = uVar6;
      local_9e = uVar6;
      *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x143239159;
      plVar17 = (longlong *)(*pcVar9)();
      *(longlong *)((longlong)local_d8 + lVar18) = lVar35;
      *(longlong *)((longlong)&local_e0 + lVar18) = lVar35;
      *(undefined4 *)((longlong)local_e8 + lVar18) = 0x3f800000;
      pcVar9 = *(code **)(*plVar17 + 0x68);
      *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x14323917d;
      (*pcVar9)(plVar17,&local_b0,param_3,0x3f800000);
      pvVar19 = local_b8;
      *(undefined1 *)(param_3 + 1) = 0;
      *(ushort *)(param_3 + 2) = uVar6;
      *(ushort *)((longlong)param_3 + 0x12) = uVar6;
      *(int *)(param_3 + 1) = (int)lVar10;
      plVar17 = *(longlong **)(param_1 + 0x188);
      pcVar9 = *(code **)(*plVar17 + 0x10);
      *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x1432391ab;
      (*pcVar9)(plVar17,pvVar19);
      iVar32 = ((uint)fVar40 >> 1) + 1;
      fVar38 = (float)((int)fVar40 - iVar32);
      fVar23 = 0.0;
      puVar27 = auStack_108 + lVar18;
      local_c8[0] = fVar38;
      if (fVar38 == 0.0) goto LAB_143238d1b;
      local_b8 = (void *)0x0;
      do {
        lVar35 = *(longlong *)(param_1 + 0x100);
        uVar16 = (ulonglong)(uint)fVar26;
        if (*(int *)((longlong)local_b8 + lVar35) != 0) {
          uVar7 = *(ushort *)(param_3 + 2);
          lVar10 = *param_3;
          *(undefined8 *)(auStack_108 + lVar18 + -8) = 0x14323921d;
          DSP::CDelayLight::ProcessBuffer
                    (lVar35 + (ulonglong)(uint)fVar23 * 0x18,
                     lVar10 + (ulonglong)(uint)(iVar32 + (int)fVar23) * (ulonglong)uVar7 * 4,fVar26)
          ;
          fVar38 = local_c8[0];
        }
        local_b8 = (void *)((longlong)local_b8 + 0x18);
        fVar23 = (float)((int)fVar23 + 1);
      } while ((uint)fVar23 < (uint)fVar38);
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  uVar5 = *(undefined4 *)(param_1 + 0xec);
  lVar35 = *param_3;
  fVar38 = *local_c0;
  lVar18 = *param_2;
  fVar23 = *(float *)(param_1 + 0xbc);
  *(int *)(puVar28 + 0x30) = (int)uVar16;
  fVar39 = *(float *)(param_1 + 0xf0);
  *(float *)(puVar28 + 0x28) = fVar38 * fVar23;
  *(float *)(puVar28 + 0x20) = fVar38 * fVar39;
  *(undefined8 *)(puVar28 + -8) = 0x143238d68;
  DSP::Mix2Interp(lVar18,lVar35,uVar5,uVar4);
  uVar30 = 1;
  fVar38 = 1.4013e-45;
  local_res10 = 1;
  pfVar21 = local_c0;
  if (1 < (uint)fVar40) {
    do {
      fVar23 = pfVar21[uVar36 * (int)fVar38 * 4] * *(float *)(param_1 + 0xbc);
      if ((fVar23 != 0.0) &&
         (fVar39 = pfVar21[uVar36 * (int)fVar38 * 4] * *(float *)(param_1 + 0xf0), fVar39 != 0.0)) {
        pcVar9 = *(code **)(**(longlong **)(param_1 + 8) + 8);
        *(undefined8 *)(puVar28 + -8) = 0x143238dc6;
        plVar17 = (longlong *)(*pcVar9)();
        uVar7 = *(ushort *)(param_3 + 2);
        lVar35 = *param_2;
        lVar18 = *plVar17;
        lVar10 = *param_3;
        *(short *)(puVar28 + 0x28) = (short)uVar16;
        *(float *)(puVar28 + 0x20) = fVar23;
        pcVar9 = *(code **)(lVar18 + 0x78);
        *(undefined8 *)(puVar28 + -8) = 0x143238df9;
        (*pcVar9)(plVar17,lVar10 + uVar7 * local_res10 * 4,lVar35,fVar39);
        pfVar21 = local_c0;
        fVar38 = (float)local_res10;
      }
      fVar38 = (float)((int)fVar38 + 1);
      local_res10 = (ulonglong)(uint)fVar38;
    } while ((uint)fVar38 < (uint)fVar40);
  }
  if (1 < (uint)fVar40) {
    local_res8 = 1;
    local_res10 = 1;
    do {
      uVar4 = *(undefined4 *)(param_1 + 0xb8);
      fVar38 = *(float *)(param_1 + 0xbc);
      *(int *)(puVar28 + 0x30) = (int)uVar16;
      uVar34 = (uint)uVar30;
      fVar40 = *(float *)(param_1 + 0xf0);
      lVar18 = uVar36 * uVar34 * 4 + local_res10;
      fVar23 = local_c0[lVar18];
      lVar35 = *param_3;
      uVar7 = *(ushort *)(param_3 + 2);
      *(float *)(puVar28 + 0x28) = fVar42 * fVar38 * local_c0[lVar18];
      uVar5 = *(undefined4 *)(param_1 + 0xec);
      *(float *)(puVar28 + 0x20) = fVar41 * fVar40 * fVar23;
      uVar8 = *(ushort *)(param_2 + 2);
      lVar18 = *param_2;
      *(undefined8 *)(puVar28 + -8) = 0x143238ea9;
      DSP::Mix2Interp(lVar18 + (ulonglong)uVar8 * local_res8 * 4,
                      lVar35 + (ulonglong)uVar7 * local_res8 * 4,uVar5,uVar4);
      uVar12 = 0;
      pfVar21 = local_c0;
      if (uVar34 != 0) {
        do {
          fVar38 = fVar42 * *(float *)(param_1 + 0xbc) * pfVar21[uVar36 * uVar12 * 4 + local_res10];
          if ((fVar38 != 0.0) &&
             (fVar40 = fVar41 * *(float *)(param_1 + 0xf0) *
                       pfVar21[uVar36 * uVar12 * 4 + local_res10], fVar40 != 0.0)) {
            pcVar9 = *(code **)(**(longlong **)(param_1 + 8) + 8);
            *(undefined8 *)(puVar28 + -8) = 0x143238f16;
            plVar17 = (longlong *)(*pcVar9)();
            lVar35 = *param_2;
            uVar7 = *(ushort *)(param_2 + 2);
            lVar18 = *plVar17;
            *(ushort *)(puVar28 + 0x28) = uVar6;
            *(float *)(puVar28 + 0x20) = fVar38;
            uVar8 = *(ushort *)(param_3 + 2);
            lVar10 = *param_3;
            pcVar9 = *(code **)(lVar18 + 0x78);
            *(undefined8 *)(puVar28 + -8) = 0x143238f57;
            (*pcVar9)(plVar17,lVar10 + (ulonglong)uVar12 * (ulonglong)uVar8 * 4,
                      lVar35 + (ulonglong)uVar7 * local_res8 * 4,fVar40);
            pfVar21 = local_c0;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar34);
        pvVar20 = (void *)(ulonglong)(uint)local_c8[1];
      }
      uVar34 = uVar34 + 1;
      uVar30 = (ulonglong)uVar34;
      uVar16 = uVar30;
      pfVar21 = local_c0;
      uVar12 = uVar34;
      while (uVar12 < (uint)pvVar20) {
        fVar38 = fVar42 * *(float *)(param_1 + 0xbc) *
                 pfVar21[uVar36 * (int)uVar16 * 4 + local_res10];
        if ((fVar38 != 0.0) &&
           (fVar40 = fVar41 * *(float *)(param_1 + 0xf0) *
                     pfVar21[uVar36 * (int)uVar16 * 4 + local_res10], fVar40 != 0.0)) {
          pcVar9 = *(code **)(**(longlong **)(param_1 + 8) + 8);
          *(undefined8 *)(puVar28 + -8) = 0x143238fd6;
          plVar17 = (longlong *)(*pcVar9)();
          lVar35 = *param_2;
          uVar7 = *(ushort *)(param_2 + 2);
          lVar18 = *plVar17;
          uVar8 = *(ushort *)(param_3 + 2);
          lVar10 = *param_3;
          *(ushort *)(puVar28 + 0x28) = uVar6;
          *(float *)(puVar28 + 0x20) = fVar38;
          pcVar9 = *(code **)(lVar18 + 0x78);
          *(undefined8 *)(puVar28 + -8) = 0x14323901c;
          (*pcVar9)(plVar17,lVar10 + uVar16 * uVar8 * 4,lVar35 + (ulonglong)uVar7 * local_res8 * 4,
                    fVar40);
          pfVar21 = local_c0;
        }
        uVar12 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar12;
      }
      local_res8 = local_res8 + 1;
      uVar16 = (ulonglong)(uint)fVar26;
      local_res10 = local_res10 + 1;
    } while (uVar34 < (uint)pvVar20);
  }
LAB_143239063:
  if ((uint)pvVar20 < (uint)*(byte *)(param_2 + 1)) {
    do {
      fVar26 = *(float *)(param_1 + 0xb8);
      fVar38 = *(float *)(param_1 + 0xec);
      lVar35 = *param_2 + (longlong)pvVar20 * (ulonglong)*(ushort *)(param_2 + 2) * 4;
      if (fVar26 == fVar38) {
        *(undefined8 *)(puVar28 + -8) = 0x1432390a5;
        AK::DSP::ApplyGain(lVar35,fVar38,uVar16);
      }
      else {
        *(undefined8 *)(puVar28 + -8) = 0x143239271;
        AK::DSP::ApplyGainRamp(lVar35,fVar38,fVar26,uVar16);
      }
      uVar36 = (int)pvVar20 + 1;
      pvVar20 = (void *)(ulonglong)uVar36;
    } while (uVar36 < *(byte *)(param_2 + 1));
  }
  return;
}



// FUNCTION 143239c50 FUN_143239c50 body=43 status=ok
// SIG undefined FUN_143239c50(void)

undefined8 * FUN_143239c50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143239c80 Clone body=154 status=ok
// SIG undefined Clone(void)

undefined8 * CAkConvolutionReverbFXParams::Clone(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145aecec8;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0x43340000;
    *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x43340000;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x3f800000;
    puVar2[5] = 0x3f800000;
    *(undefined4 *)(puVar2 + 6) = 0x3f800000;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0x3e800000;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143239d20 CreateAkConvolutionReverbFXParams body=109 status=ok
// SIG undefined CreateAkConvolutionReverbFXParams(void)

undefined8 * CreateAkConvolutionReverbFXParams(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aecec8;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0x43340000;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x43340000;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f800000;
    puVar1[5] = 0x3f800000;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0x3e800000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143239d90 GetParams body=30 status=ok
// SIG undefined GetParams(void)

void CAkConvolutionReverbFXParams::GetParams(longlong param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143239db0 FUN_143239db0 body=717 status=ok
// SIG undefined FUN_143239db0(void)

undefined4 FUN_143239db0(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 8) = *param_3;
    return 1;
  case 1:
    *(float *)(param_1 + 0xc) = *param_3;
    return 1;
  case 2:
    fVar2 = *param_3;
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 180.0 <= fVar2)) {
      fVar1 = 180.0;
    }
    *(float *)(param_1 + 0x10) = fVar1;
    return 1;
  case 10:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x14) = fVar2;
    return 1;
  case 0xb:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x18) = fVar2;
    return 1;
  case 0x14:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x20) = fVar2;
    return 1;
  case 0x15:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x24) = fVar2;
    return 1;
  case 0x16:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x28) = fVar2;
    return 1;
  case 0x17:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 0.0 <= fVar2)) {
      fVar1 = 0.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x2c) = fVar2;
    return 1;
  case 0x1e:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 24.0 <= fVar2)) {
      fVar1 = 24.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x30) = fVar2;
    return 1;
  case 0x1f:
    fVar2 = *param_3;
    fVar1 = -96.3;
    if ((-96.3 <= fVar2) && (fVar1 = fVar2, 24.0 <= fVar2)) {
      fVar1 = 24.0;
    }
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,fVar1 * 0.05);
    *(float *)(param_1 + 0x34) = fVar2;
    return 1;
  case 0x20:
    *(float *)(param_1 + 0x38) = *param_3;
    break;
  case 0x21:
    fVar2 = *param_3;
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 180.0 <= fVar2)) {
      fVar1 = 180.0;
    }
    *(float *)(param_1 + 0x1c) = fVar1;
    return 1;
  }
  return 1;
}



// FUNCTION 14323a0e0 SetParamsBlock body=289 status=ok
// SIG undefined SetParamsBlock(void)

undefined8 CAkConvolutionReverbFXParams::SetParamsBlock(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x14) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x18) = fVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[6] * 0.05);
  *(float *)(param_1 + 0x20) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[7] * 0.05);
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[8] * 0.05);
  *(float *)(param_1 + 0x28) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[9] * 0.05);
  *(float *)(param_1 + 0x2c) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[10] * 0.05);
  *(float *)(param_1 + 0x30) = fVar1;
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,(float)param_2[0xb] * 0.05);
  *(float *)(param_1 + 0x34) = fVar1;
  *(undefined4 *)(param_1 + 0x38) = param_2[0xc];
  return 1;
}



// FUNCTION 14323a210 CAkPartitionedConvolutionEngine body=26 status=ok
// SIG undefined CAkPartitionedConvolutionEngine(void)

longlong DSP::AkFFTAllButterflies::CAkPartitionedConvolutionEngine::CAkPartitionedConvolutionEngine
                   (longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return param_1;
}



// FUNCTION 14323a230 FUN_14323a230 body=432 status=ok
// SIG undefined FUN_14323a230(void)

void FUN_14323a230(longlong param_1,void *param_2,uint param_3,void *param_4,void *param_5,
                  undefined8 param_6,uint param_7,uint param_8)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0x44);
  _guard_xfg_dispatch_icall_nop(param_4,param_2,(ulonglong)(param_3 * 4));
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)param_3 * 4 + (longlong)param_4),0,
             (ulonglong)((iVar2 - param_3) * 4));
  DSP::AkFFTAllButterflies::ak_fftr(*(undefined8 *)(param_1 + 8),param_4,param_5);
  uVar6 = 0;
  uVar7 = *(uint *)(param_1 + 0x5c);
  lVar3 = *(longlong *)(param_1 + 0x78);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_8 * 8);
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar1 = *(ushort *)(lVar3 + uVar6 * 2);
      FUN_14323a3e0(param_1,(ulonglong)
                            (((uint)(*(int *)(param_1 + 0x38) + (int)uVar6) % uVar7) *
                             (uint)*(ushort *)(param_1 + 100) * 8) +
                            *(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_7 * 8),
                    param_5,lVar4,uVar1);
      uVar8 = *(uint *)(param_1 + 0x5c);
      lVar4 = lVar4 + (ulonglong)uVar1 * 8;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar8;
    } while (uVar5 < uVar8);
  }
  uVar1 = *(ushort *)(param_1 + 100);
  uVar7 = *(uint *)(param_1 + 0x44);
  uVar5 = (uint)uVar1 * 8;
  _Src = (void *)((ulonglong)((*(uint *)(param_1 + 0x38) % uVar8) * (uint)uVar1 * 8) +
                 *(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_7 * 8));
  _guard_xfg_dispatch_icall_nop(param_5,_Src,(ulonglong)uVar5);
  _guard_xfg_dispatch_icall_nop
            ((void *)((ulonglong)uVar5 + (longlong)param_5),0,
             (ulonglong)((uVar7 >> 1) * 8 + 8 + (uint)uVar1 * -8));
  DSP::AkFFTAllButterflies::ak_fftri(*(undefined8 *)(param_1 + 0x10),param_5,param_4);
  AK::DSP::ApplyGain(param_4,1.0 / (float)*(uint *)(param_1 + 0x44),*(uint *)(param_1 + 0x44));
  _guard_xfg_dispatch_icall_nop
            (param_2,(void *)((ulonglong)*(uint *)(param_1 + 0x40) * 4 + (longlong)param_4),
             (ulonglong)(*(uint *)(param_1 + 0x40) * 4));
  _guard_xfg_dispatch_icall_nop(_Src,0,(ulonglong)uVar5);
  return;
}



// FUNCTION 14323a3e0 FUN_14323a3e0 body=665 status=ok
// SIG undefined FUN_14323a3e0(void)

void FUN_14323a3e0(char *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
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
  ulonglong uVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  
  lVar19 = 4;
  do {
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  pfVar15 = param_2;
  pfVar17 = param_3;
  pfVar18 = param_4;
  if (param_5 >> 3 != 0) {
    uVar14 = (ulonglong)(param_5 >> 3);
    if (*param_1 == '\0') {
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[2];
        fVar6 = pfVar18[3];
        fVar7 = *pfVar17;
        fVar8 = pfVar17[1];
        fVar9 = pfVar17[2];
        fVar10 = pfVar17[3];
        pfVar17 = pfVar17 + 0x10;
        *pfVar15 = fVar8 * -1.0 * fVar4 + fVar7 * fVar3 + *pfVar15;
        pfVar15[1] = fVar8 * 1.0 * fVar3 + fVar7 * fVar4 + pfVar15[1];
        pfVar15[2] = fVar10 * -1.0 * fVar6 + fVar9 * fVar5 + pfVar15[2];
        pfVar15[3] = fVar10 * 1.0 * fVar5 + fVar9 * fVar6 + pfVar15[3];
        pfVar15 = pfVar15 + 0x10;
        fVar3 = pfVar18[4];
        fVar4 = pfVar18[5];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[7];
        pfVar1 = (float *)((longlong)param_3 + (0x10 - (longlong)param_4) + (longlong)pfVar18);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar1 = (float *)((longlong)param_2 + (0x10 - (longlong)param_4) + (longlong)pfVar18);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)((longlong)param_2 + (0x10 - (longlong)param_4) + (longlong)pfVar18);
        *pfVar2 = fVar8 * -1.0 * fVar4 + fVar7 * fVar3 + *pfVar1;
        pfVar2[1] = fVar8 * 1.0 * fVar3 + fVar7 * fVar4 + fVar11;
        pfVar2[2] = fVar10 * -1.0 * fVar6 + fVar9 * fVar5 + fVar12;
        pfVar2[3] = fVar10 * 1.0 * fVar5 + fVar9 * fVar6 + fVar13;
        fVar3 = pfVar18[8];
        fVar4 = pfVar18[9];
        fVar5 = pfVar18[10];
        fVar6 = pfVar18[0xb];
        pfVar1 = (float *)((longlong)param_3 + (0x20 - (longlong)param_4) + (longlong)pfVar18);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar1 = (float *)((longlong)param_2 + (0x20 - (longlong)param_4) + (longlong)pfVar18);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)((longlong)param_2 + (0x20 - (longlong)param_4) + (longlong)pfVar18);
        *pfVar2 = fVar8 * -1.0 * fVar4 + fVar7 * fVar3 + *pfVar1;
        pfVar2[1] = fVar8 * 1.0 * fVar3 + fVar7 * fVar4 + fVar11;
        pfVar2[2] = fVar10 * -1.0 * fVar6 + fVar9 * fVar5 + fVar12;
        pfVar2[3] = fVar10 * 1.0 * fVar5 + fVar9 * fVar6 + fVar13;
        pfVar1 = (float *)((longlong)param_3 + (0x30 - (longlong)param_4) + (longlong)pfVar18);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        fVar7 = pfVar18[0xc];
        fVar8 = pfVar18[0xd];
        fVar9 = pfVar18[0xe];
        fVar10 = pfVar18[0xf];
        pfVar1 = (float *)((longlong)param_2 + (0x30 - (longlong)param_4) + (longlong)pfVar18);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)((longlong)param_2 + (0x30 - (longlong)param_4) + (longlong)pfVar18);
        *pfVar2 = fVar4 * -1.0 * fVar8 + fVar3 * fVar7 + *pfVar1;
        pfVar2[1] = fVar4 * 1.0 * fVar7 + fVar3 * fVar8 + fVar11;
        pfVar2[2] = fVar6 * -1.0 * fVar10 + fVar5 * fVar9 + fVar12;
        pfVar2[3] = fVar6 * 1.0 * fVar9 + fVar5 * fVar10 + fVar13;
        pfVar18 = pfVar18 + 0x10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    else {
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[2];
        fVar6 = pfVar18[3];
        fVar7 = pfVar17[1];
        fVar8 = pfVar17[3];
        fVar9 = *pfVar17;
        fVar10 = pfVar17[2];
        pfVar17 = pfVar17 + 0x10;
        *pfVar15 = (fVar9 * fVar3 - fVar4 * fVar7) + *pfVar15;
        pfVar15[1] = fVar9 * fVar4 + fVar3 * fVar7 + pfVar15[1];
        pfVar15[2] = (fVar10 * fVar5 - fVar6 * fVar8) + pfVar15[2];
        pfVar15[3] = fVar10 * fVar6 + fVar5 * fVar8 + pfVar15[3];
        pfVar15 = pfVar15 + 0x10;
        fVar3 = pfVar18[4];
        fVar4 = pfVar18[5];
        fVar5 = pfVar18[6];
        fVar6 = pfVar18[7];
        fVar7 = *(float *)((longlong)pfVar18 + (longlong)param_3 + -(longlong)param_4 + 0x14);
        fVar8 = *(float *)((longlong)pfVar18 + (longlong)param_3 + -(longlong)param_4 + 0x1c);
        pfVar1 = (float *)((longlong)param_3 + (0x10 - (longlong)param_4) + (longlong)pfVar18);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[2];
        pfVar1 = (float *)((longlong)param_2 + (0x10 - (longlong)param_4) + (longlong)pfVar18);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)((longlong)param_2 + (0x10 - (longlong)param_4) + (longlong)pfVar18);
        *pfVar2 = (fVar9 * fVar3 - fVar4 * fVar7) + *pfVar1;
        pfVar2[1] = fVar9 * fVar4 + fVar3 * fVar7 + fVar11;
        pfVar2[2] = (fVar10 * fVar5 - fVar6 * fVar8) + fVar12;
        pfVar2[3] = fVar10 * fVar6 + fVar5 * fVar8 + fVar13;
        fVar3 = pfVar18[8];
        fVar4 = pfVar18[9];
        fVar5 = pfVar18[10];
        fVar6 = pfVar18[0xb];
        fVar7 = *(float *)((longlong)pfVar18 + (longlong)param_3 + -(longlong)param_4 + 0x24);
        fVar8 = *(float *)((longlong)pfVar18 + (longlong)param_3 + -(longlong)param_4 + 0x2c);
        pfVar1 = (float *)((longlong)param_3 + (0x20 - (longlong)param_4) + (longlong)pfVar18);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[2];
        pfVar1 = (float *)((longlong)param_2 + (0x20 - (longlong)param_4) + (longlong)pfVar18);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)((longlong)param_2 + (0x20 - (longlong)param_4) + (longlong)pfVar18);
        *pfVar2 = (fVar9 * fVar3 - fVar4 * fVar7) + *pfVar1;
        pfVar2[1] = fVar9 * fVar4 + fVar3 * fVar7 + fVar11;
        pfVar2[2] = (fVar10 * fVar5 - fVar6 * fVar8) + fVar12;
        pfVar2[3] = fVar10 * fVar6 + fVar5 * fVar8 + fVar13;
        fVar3 = pfVar18[0xc];
        fVar4 = pfVar18[0xd];
        fVar5 = pfVar18[0xe];
        fVar6 = pfVar18[0xf];
        pfVar1 = (float *)((longlong)param_3 + (0x30 - (longlong)param_4) + (longlong)pfVar18);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[2];
        fVar9 = *(float *)((longlong)pfVar18 + (longlong)param_3 + -(longlong)param_4 + 0x34);
        fVar10 = *(float *)((longlong)pfVar18 + (longlong)param_3 + -(longlong)param_4 + 0x3c);
        pfVar1 = (float *)((longlong)param_2 + (0x30 - (longlong)param_4) + (longlong)pfVar18);
        fVar11 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar13 = pfVar1[3];
        pfVar2 = (float *)((longlong)param_2 + (0x30 - (longlong)param_4) + (longlong)pfVar18);
        *pfVar2 = (fVar7 * fVar3 - fVar4 * fVar9) + *pfVar1;
        pfVar2[1] = fVar7 * fVar4 + fVar3 * fVar9 + fVar11;
        pfVar2[2] = (fVar8 * fVar5 - fVar6 * fVar10) + fVar12;
        pfVar2[3] = fVar8 * fVar6 + fVar5 * fVar10 + fVar13;
        pfVar18 = pfVar18 + 0x10;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  iVar16 = param_5 + (param_5 >> 3) * -8;
  if (iVar16 != 0) {
    lVar19 = (longlong)pfVar17 - (longlong)pfVar15;
    uVar14 = (ulonglong)((iVar16 - 1U >> 1) + 1);
    do {
      pfVar17 = (float *)(lVar19 + (longlong)pfVar15);
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      fVar5 = pfVar17[2];
      fVar6 = pfVar17[3];
      fVar7 = *pfVar18;
      fVar8 = pfVar18[1];
      fVar9 = pfVar18[2];
      fVar10 = pfVar18[3];
      pfVar18 = pfVar18 + 4;
      *pfVar15 = fVar4 * -1.0 * fVar8 + fVar3 * fVar7 + *pfVar15;
      pfVar15[1] = fVar4 * 1.0 * fVar7 + fVar3 * fVar8 + pfVar15[1];
      pfVar15[2] = fVar6 * -1.0 * fVar10 + fVar5 * fVar9 + pfVar15[2];
      pfVar15[3] = fVar6 * 1.0 * fVar9 + fVar5 * fVar10 + pfVar15[3];
      pfVar15 = pfVar15 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// FUNCTION 14323a680 FUN_14323a680 body=481 status=ok
// SIG undefined FUN_14323a680(void)

undefined8
FUN_14323a680(undefined1 *param_1,longlong *param_2,longlong *param_3,int param_4,longlong *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)0x0;
  (**(code **)(*param_3 + 0x20))(param_3,0,local_28);
  if (local_28[0] == (undefined8 *)0x0) {
    return 0x4f;
  }
  uVar6 = local_28[0][1];
  puVar1 = local_28[0] + 6;
  *(undefined8 *)(param_1 + 0x40) = *local_28[0];
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar3 = *(undefined4 *)((longlong)local_28[0] + 0x14);
  uVar4 = *(undefined4 *)(local_28[0] + 3);
  uVar5 = *(undefined4 *)((longlong)local_28[0] + 0x1c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(local_28[0] + 2);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)local_28[0] + 0x24);
  uVar4 = *(undefined4 *)(local_28[0] + 5);
  uVar5 = *(undefined4 *)((longlong)local_28[0] + 0x2c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(local_28[0] + 4);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  if (*(int *)(param_1 + 0x48) == param_4) {
    bVar2 = param_1[0x4c];
    *(undefined8 **)(param_1 + 0x78) = puVar1;
    local_28[0] = (undefined8 *)
                  (((ulonglong)*(uint *)(param_1 + 0x5c) * 2 + 0xf & 0xfffffffffffffff0) +
                  (longlong)puVar1);
    plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,(ulonglong)bVar2 << 3);
    *(longlong **)(param_1 + 0x28) = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)local_28[0];
      if (1 < bVar2) {
        uVar11 = (ulonglong)(bVar2 - 1);
        lVar9 = 8;
        lVar10 = 0;
        do {
          *(ulonglong *)(lVar9 + *(longlong *)(param_1 + 0x28)) =
               *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x28)) +
               (ulonglong)*(uint *)(param_1 + 0x60) * 8;
          uVar11 = uVar11 - 1;
          lVar9 = lVar9 + 8;
          lVar10 = lVar10 + 8;
        } while (uVar11 != 0);
      }
      DSP::AkFFTAllButterflies::ak_fftr_alloc(*(undefined4 *)(param_1 + 0x44),0,0,param_1 + 0x18);
      lVar9 = (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x18));
      *(longlong *)(param_1 + 8) = lVar9;
      if (lVar9 != 0) {
        DSP::AkFFTAllButterflies::ak_fftr_alloc(*(undefined4 *)(param_1 + 0x44),1,0,param_1 + 0x20);
        lVar9 = (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x20));
        *(longlong *)(param_1 + 0x10) = lVar9;
        if (lVar9 != 0) {
          DSP::AkFFTAllButterflies::ak_fftr_alloc
                    (*(undefined4 *)(param_1 + 0x44),0,*(undefined8 *)(param_1 + 8),param_1 + 0x18);
          DSP::AkFFTAllButterflies::ak_fftr_alloc
                    (*(undefined4 *)(param_1 + 0x44),1,*(undefined8 *)(param_1 + 0x10),
                     param_1 + 0x20);
          uVar7 = (**(code **)(*param_5 + 8))(param_5,4);
          *param_1 = uVar7;
          *(undefined4 *)(param_1 + 0x70) = 0;
          return 1;
        }
      }
    }
    return 0x34;
  }
  local_28[0] = puVar1;
  plVar8 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*plVar8 + 0x28))
            (plVar8,
             "Soundbanks have been generated with convolution reverb parameters that do not match sound engine runtime conditions. No wet path will be heard."
             ,1);
  return 2;
}



// FUNCTION 14323a870 FUN_14323a870 body=185 status=ok
// SIG undefined FUN_14323a870(void)

undefined8 FUN_14323a870(longlong param_1,longlong *param_2,undefined4 param_3)

{
  void *_Dst;
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_14323aa70();
  *(undefined4 *)(param_1 + 0x70) = param_3;
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
  *(void **)(param_1 + 0x30) = _Dst;
  if (_Dst == (void *)0x0) {
LAB_14323a90e:
    uVar1 = 0x34;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)(*(int *)(param_1 + 0x70) << 3));
    uVar3 = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      do {
        uVar1 = (**(code **)(*param_2 + 8))
                          (param_2,(uint)*(ushort *)(param_1 + 100) * *(int *)(param_1 + 0x5c) * 8);
        *(undefined8 *)(uVar3 * 8 + *(longlong *)(param_1 + 0x30)) = uVar1;
        if (*(longlong *)(uVar3 * 8 + *(longlong *)(param_1 + 0x30)) == 0) goto LAB_14323a90e;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x70));
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14323a980 FUN_14323a980 body=118 status=ok
// SIG undefined FUN_14323a980(void)

void FUN_14323a980(longlong param_1)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      _Dst = *(void **)(*(longlong *)(param_1 + 0x30) + uVar2 * 8);
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,0,(ulonglong)
                          ((uint)*(ushort *)(param_1 + 100) * *(int *)(param_1 + 0x5c) * 8));
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14323aa00 Term body=110 status=ok
// SIG undefined Term(void)

void DSP::AkFFTAllButterflies::CAkPartitionedConvolutionEngine::Term
               (longlong param_1,longlong *param_2)

{
  FUN_14323aa70();
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14323aa70 FUN_14323aa70 body=144 status=ok
// SIG undefined FUN_14323aa70(void)

void FUN_14323aa70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x30);
        lVar1 = *(longlong *)(uVar4 * 8 + lVar2);
        if (lVar1 != 0) {
          (**(code **)(*param_2 + 0x10))(param_2,lVar1);
          *(undefined8 *)(uVar4 * 8 + *(longlong *)(param_1 + 0x30)) = 0;
          lVar2 = *(longlong *)(param_1 + 0x30);
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 0x70));
    }
    (**(code **)(*param_2 + 0x10))(param_2,lVar2);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14323ab00 ComputeLRMixGains body=127 status=ok
// SIG undefined ComputeLRMixGains(void)

void DSP::ComputeLRMixGains
               (float param_1,float param_2,float *param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = 0.0;
  fVar5 = param_1 * 0.0016271889 + 0.707106;
  fVar1 = 1.0 - fVar5 * fVar5;
  fVar3 = 0.0;
  if (0.0 < fVar1) {
    fVar3 = SQRT(fVar1);
  }
  fVar1 = param_2 * 0.0016271889 + 0.707106;
  fVar4 = 1.0 - fVar1 * fVar1;
  if (0.0 < fVar4) {
    fVar2 = SQRT(fVar4);
  }
  *param_3 = fVar1;
  *param_4 = fVar2;
  *param_5 = fVar5;
  *param_6 = fVar3;
  return;
}



// FUNCTION 14323ab80 FUN_14323ab80 body=1216 status=ok
// SIG undefined FUN_14323ab80(void)

void FUN_14323ab80(float *param_1,float *param_2,float *param_3,float *param_4,uint param_5,
                  float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
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
  
  fVar14 = 0.0;
  fVar19 = 0.0;
  fVar10 = param_6 * 0.0016271889 + 0.707106;
  fVar8 = 1.0 - fVar10 * fVar10;
  if (0.0 < fVar8) {
    fVar14 = SQRT(fVar8);
  }
  fVar18 = param_7 * 0.0016271889 + 0.707106;
  fVar8 = 1.0 - fVar18 * fVar18;
  if (0.0 < fVar8) {
    fVar19 = SQRT(fVar8);
  }
  if ((fVar18 == fVar10) && (fVar19 == fVar14)) {
    uVar5 = 0;
    uVar4 = (ulonglong)((longlong)(param_1 + param_5) + (3 - (longlong)param_1)) >> 2;
    if (param_1 + param_5 < param_1) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      if (7 < uVar4) {
        do {
          fVar8 = *param_1;
          fVar10 = param_1[1];
          fVar14 = param_1[2];
          fVar9 = param_1[3];
          uVar5 = uVar5 + 8;
          fVar13 = *param_2;
          fVar17 = param_2[1];
          fVar11 = param_2[2];
          fVar12 = param_2[3];
          fVar15 = param_2[4];
          fVar16 = param_2[5];
          fVar1 = param_2[6];
          fVar2 = param_2[7];
          param_2 = param_2 + 8;
          *param_3 = fVar8 * fVar18 + fVar19 * fVar13;
          param_3[1] = fVar10 * fVar18 + fVar19 * fVar17;
          param_3[2] = fVar14 * fVar18 + fVar19 * fVar11;
          param_3[3] = fVar9 * fVar18 + fVar19 * fVar12;
          *param_4 = fVar8 * fVar19 + fVar13 * fVar18;
          param_4[1] = fVar10 * fVar19 + fVar17 * fVar18;
          param_4[2] = fVar14 * fVar19 + fVar11 * fVar18;
          param_4[3] = fVar9 * fVar19 + fVar12 * fVar18;
          fVar8 = param_1[4];
          fVar10 = param_1[5];
          fVar14 = param_1[6];
          fVar9 = param_1[7];
          param_1 = param_1 + 8;
          param_3[4] = fVar8 * fVar18 + fVar19 * fVar15;
          param_3[5] = fVar10 * fVar18 + fVar19 * fVar16;
          param_3[6] = fVar14 * fVar18 + fVar19 * fVar1;
          param_3[7] = fVar9 * fVar18 + fVar19 * fVar2;
          param_3 = param_3 + 8;
          param_4[4] = fVar8 * fVar19 + fVar15 * fVar18;
          param_4[5] = fVar10 * fVar19 + fVar16 * fVar18;
          param_4[6] = fVar14 * fVar19 + fVar1 * fVar18;
          param_4[7] = fVar9 * fVar19 + fVar2 * fVar18;
          param_4 = param_4 + 8;
        } while (uVar5 < (uVar4 & 0xfffffffffffffff8));
      }
      if (uVar5 < uVar4) {
        if (3 < uVar4 - uVar5) {
          lVar3 = ((uVar4 - uVar5) - 4 >> 2) + 1;
          uVar5 = uVar5 + lVar3 * 4;
          do {
            fVar8 = *param_1;
            fVar10 = *param_2;
            fVar14 = param_1[1];
            fVar9 = param_2[1];
            *param_3 = fVar10 * fVar19 + fVar8 * fVar18;
            *param_4 = fVar8 * fVar19 + fVar10 * fVar18;
            fVar8 = param_1[2];
            fVar10 = param_2[2];
            param_3[1] = fVar9 * fVar19 + fVar14 * fVar18;
            param_4[1] = fVar14 * fVar19 + fVar9 * fVar18;
            fVar14 = param_1[3];
            param_1 = param_1 + 4;
            param_3[2] = fVar10 * fVar19 + fVar8 * fVar18;
            fVar9 = param_2[3];
            param_2 = param_2 + 4;
            param_4[2] = fVar8 * fVar19 + fVar10 * fVar18;
            param_3[3] = fVar9 * fVar19 + fVar14 * fVar18;
            param_3 = param_3 + 4;
            param_4[3] = fVar14 * fVar19 + fVar9 * fVar18;
            param_4 = param_4 + 4;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        if (uVar5 < uVar4) {
          lVar6 = (longlong)param_1 - (longlong)param_2;
          lVar3 = (longlong)param_3 - (longlong)param_2;
          lVar7 = (longlong)param_4 - (longlong)param_2;
          do {
            fVar8 = *(float *)(lVar6 + (longlong)param_2);
            uVar5 = uVar5 + 1;
            fVar10 = *param_2;
            *(float *)(lVar3 + (longlong)param_2) = fVar10 * fVar19 + fVar8 * fVar18;
            *(float *)(lVar7 + (longlong)param_2) = fVar8 * fVar19 + fVar10 * fVar18;
            param_2 = param_2 + 1;
          } while (uVar5 < uVar4);
        }
      }
    }
  }
  else {
    uVar5 = 0;
    fVar8 = 1.0 / (float)param_5;
    uVar4 = (ulonglong)((longlong)(param_1 + param_5) + (3 - (longlong)param_1)) >> 2;
    if (param_1 + param_5 < param_1) {
      uVar4 = uVar5;
    }
    fVar18 = (fVar18 - fVar10) * fVar8;
    fVar8 = (fVar19 - fVar14) * fVar8;
    if (3 < uVar4) {
      lVar3 = (uVar4 - 4 >> 2) + 1;
      uVar5 = lVar3 * 4;
      do {
        fVar19 = *param_1;
        fVar9 = *param_2;
        fVar15 = fVar14 + fVar8;
        fVar11 = fVar10 + fVar18;
        fVar13 = param_2[1];
        *param_4 = fVar19 * fVar14 + fVar9 * fVar10;
        fVar17 = param_1[1];
        *param_3 = fVar9 * fVar14 + fVar19 * fVar10;
        fVar16 = fVar15 + fVar8;
        fVar12 = fVar11 + fVar18;
        fVar10 = param_2[2];
        param_4[1] = fVar17 * fVar15 + fVar13 * fVar11;
        fVar14 = param_1[2];
        param_3[1] = fVar13 * fVar15 + fVar17 * fVar11;
        fVar17 = fVar16 + fVar8;
        fVar13 = fVar12 + fVar18;
        fVar19 = param_2[3];
        param_2 = param_2 + 4;
        param_4[2] = fVar14 * fVar16 + fVar10 * fVar12;
        fVar9 = param_1[3];
        param_1 = param_1 + 4;
        param_3[2] = fVar10 * fVar16 + fVar14 * fVar12;
        fVar14 = fVar17 + fVar8;
        fVar10 = fVar13 + fVar18;
        param_3[3] = fVar19 * fVar17 + fVar9 * fVar13;
        param_3 = param_3 + 4;
        param_4[3] = fVar9 * fVar17 + fVar19 * fVar13;
        param_4 = param_4 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (uVar5 < uVar4) {
      lVar6 = (longlong)param_1 - (longlong)param_3;
      lVar3 = (longlong)param_2 - (longlong)param_3;
      lVar7 = (longlong)param_4 - (longlong)param_3;
      do {
        fVar19 = *(float *)(lVar6 + (longlong)param_3);
        uVar5 = uVar5 + 1;
        fVar9 = *(float *)(lVar3 + (longlong)param_3);
        fVar13 = fVar19 * fVar10;
        fVar17 = fVar9 * fVar14;
        fVar19 = fVar19 * fVar14;
        fVar14 = fVar14 + fVar8;
        fVar9 = fVar9 * fVar10;
        fVar10 = fVar10 + fVar18;
        *param_3 = fVar17 + fVar13;
        *(float *)(lVar7 + (longlong)param_3) = fVar19 + fVar9;
        param_3 = param_3 + 1;
      } while (uVar5 < uVar4);
    }
  }
  return;
}



// FUNCTION 14323b040 FUN_14323b040 body=1141 status=ok
// SIG undefined FUN_14323b040(void)

void FUN_14323b040(float *param_1,float *param_2,uint param_3,float param_4,float param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
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
  
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar6 = param_4 * 0.0016271889 + 0.707106;
  fVar5 = 1.0 - fVar6 * fVar6;
  if (0.0 < fVar5) {
    fVar12 = SQRT(fVar5);
  }
  fVar10 = param_5 * 0.0016271889 + 0.707106;
  fVar5 = 1.0 - fVar10 * fVar10;
  if (0.0 < fVar5) {
    fVar11 = SQRT(fVar5);
  }
  if ((fVar10 == fVar6) && (fVar11 == fVar12)) {
    uVar3 = 0;
    uVar2 = (ulonglong)((longlong)(param_1 + param_3) + (3 - (longlong)param_1)) >> 2;
    if (param_1 + param_3 < param_1) {
      uVar2 = uVar3;
    }
    if (uVar2 != 0) {
      if (7 < uVar2) {
        do {
          fVar6 = *param_1;
          fVar12 = param_1[1];
          fVar5 = param_1[2];
          fVar4 = param_1[3];
          uVar3 = uVar3 + 8;
          fVar9 = *param_2;
          fVar15 = param_2[1];
          fVar7 = param_2[2];
          fVar8 = param_2[3];
          *param_1 = fVar9 * fVar11 + fVar6 * fVar10;
          param_1[1] = fVar15 * fVar11 + fVar12 * fVar10;
          param_1[2] = fVar7 * fVar11 + fVar5 * fVar10;
          param_1[3] = fVar8 * fVar11 + fVar4 * fVar10;
          *param_2 = fVar6 * fVar11 + fVar9 * fVar10;
          param_2[1] = fVar12 * fVar11 + fVar15 * fVar10;
          param_2[2] = fVar5 * fVar11 + fVar7 * fVar10;
          param_2[3] = fVar4 * fVar11 + fVar8 * fVar10;
          fVar6 = param_1[4];
          fVar12 = param_1[5];
          fVar5 = param_1[6];
          fVar4 = param_1[7];
          fVar9 = param_2[4];
          fVar15 = param_2[5];
          fVar7 = param_2[6];
          fVar8 = param_2[7];
          param_1[4] = fVar9 * fVar11 + fVar6 * fVar10;
          param_1[5] = fVar15 * fVar11 + fVar12 * fVar10;
          param_1[6] = fVar7 * fVar11 + fVar5 * fVar10;
          param_1[7] = fVar8 * fVar11 + fVar4 * fVar10;
          param_1 = param_1 + 8;
          param_2[4] = fVar6 * fVar11 + fVar9 * fVar10;
          param_2[5] = fVar12 * fVar11 + fVar15 * fVar10;
          param_2[6] = fVar5 * fVar11 + fVar7 * fVar10;
          param_2[7] = fVar4 * fVar11 + fVar8 * fVar10;
          param_2 = param_2 + 8;
        } while (uVar3 < (uVar2 & 0xfffffffffffffff8));
      }
      if (uVar3 < uVar2) {
        if (3 < uVar2 - uVar3) {
          lVar1 = ((uVar2 - uVar3) - 4 >> 2) + 1;
          uVar3 = uVar3 + lVar1 * 4;
          do {
            fVar6 = *param_1;
            fVar12 = *param_2;
            fVar5 = param_1[1];
            fVar4 = param_2[1];
            *param_1 = fVar12 * fVar11 + fVar6 * fVar10;
            *param_2 = fVar6 * fVar11 + fVar12 * fVar10;
            fVar6 = param_1[2];
            fVar12 = param_2[2];
            param_1[1] = fVar4 * fVar11 + fVar5 * fVar10;
            param_2[1] = fVar5 * fVar11 + fVar4 * fVar10;
            fVar5 = param_1[3];
            param_1[2] = fVar12 * fVar11 + fVar6 * fVar10;
            fVar4 = param_2[3];
            param_2[2] = fVar6 * fVar11 + fVar12 * fVar10;
            param_1[3] = fVar4 * fVar11 + fVar5 * fVar10;
            param_1 = param_1 + 4;
            param_2[3] = fVar5 * fVar11 + fVar4 * fVar10;
            param_2 = param_2 + 4;
            lVar1 = lVar1 + -1;
          } while (lVar1 != 0);
        }
        if (uVar3 < uVar2) {
          lVar1 = (longlong)param_1 - (longlong)param_2;
          do {
            fVar6 = *(float *)(lVar1 + (longlong)param_2);
            uVar3 = uVar3 + 1;
            fVar12 = *param_2;
            *(float *)(lVar1 + (longlong)param_2) = fVar12 * fVar11 + fVar6 * fVar10;
            *param_2 = fVar6 * fVar11 + fVar12 * fVar10;
            param_2 = param_2 + 1;
          } while (uVar3 < uVar2);
        }
      }
    }
  }
  else {
    uVar3 = 0;
    uVar2 = (ulonglong)((longlong)(param_1 + param_3) + (3 - (longlong)param_1)) >> 2;
    if (param_1 + param_3 < param_1) {
      uVar2 = uVar3;
    }
    fVar5 = (fVar10 - fVar6) * (1.0 / (float)param_3);
    fVar11 = (fVar11 - fVar12) * (1.0 / (float)param_3);
    if (3 < uVar2) {
      lVar1 = (uVar2 - 4 >> 2) + 1;
      uVar3 = lVar1 * 4;
      do {
        fVar10 = *param_1;
        fVar4 = *param_2;
        fVar13 = fVar12 + fVar11;
        fVar7 = fVar6 + fVar5;
        fVar9 = param_2[1];
        *param_2 = fVar10 * fVar12 + fVar4 * fVar6;
        fVar15 = param_1[1];
        *param_1 = fVar4 * fVar12 + fVar10 * fVar6;
        fVar14 = fVar13 + fVar11;
        fVar8 = fVar7 + fVar5;
        fVar6 = param_2[2];
        param_2[1] = fVar15 * fVar13 + fVar9 * fVar7;
        fVar12 = param_1[2];
        param_1[1] = fVar9 * fVar13 + fVar15 * fVar7;
        fVar15 = fVar14 + fVar11;
        fVar9 = fVar8 + fVar5;
        fVar10 = param_2[3];
        param_2[2] = fVar12 * fVar14 + fVar6 * fVar8;
        fVar4 = param_1[3];
        param_1[2] = fVar6 * fVar14 + fVar12 * fVar8;
        fVar12 = fVar15 + fVar11;
        fVar6 = fVar9 + fVar5;
        param_1[3] = fVar10 * fVar15 + fVar4 * fVar9;
        param_1 = param_1 + 4;
        param_2[3] = fVar4 * fVar15 + fVar10 * fVar9;
        param_2 = param_2 + 4;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      fVar10 = *param_1 * fVar6;
      fVar4 = *param_2 * fVar12;
      fVar15 = *param_1 * fVar12;
      fVar12 = fVar12 + fVar11;
      fVar9 = *param_2 * fVar6;
      fVar6 = fVar6 + fVar5;
      *param_1 = fVar4 + fVar10;
      param_1 = param_1 + 1;
      *param_2 = fVar15 + fVar9;
      param_2 = param_2 + 1;
    }
  }
  return;
}



// FUNCTION 14323b4c0 FUN_14323b4c0 body=2819 status=ok
// SIG undefined FUN_14323b4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_14323b4c0(longlong *param_1,longlong *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  void *_Dst;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  void *pvVar14;
  longlong lVar15;
  size_t sVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 auStack_100 [5];
  float local_d8 [2];
  longlong local_d0;
  uint local_c8 [4];
  float local_b8 [4];
  undefined8 local_a8;
  uint local_a0;
  float local_98 [28];
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  uVar21 = (ulonglong)uVar2;
  uVar9 = *(uint *)(param_1 + 1);
  uVar19 = uVar9 >> 0xc;
  local_a0 = uVar19;
  uVar23 = (uint)uVar2;
  if ((uVar9 & 0xf00) != 0x100) {
LAB_14323be9c:
    auStack_100[0] = 0x14323beb2;
    _guard_xfg_dispatch_icall_nop((void *)*param_2,(void *)*param_1,uVar21 * 4);
    uVar17 = 1;
    uVar9 = *(uint *)(param_2 + 1) & 0xff;
    if ((*(uint *)(param_2 + 1) & 0xf00) == 0x200) {
      if (1 < uVar9) {
        do {
          auStack_100[0] = 0x14323bef0;
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + *(ushort *)(param_2 + 2) * uVar17 * 4),(void *)*param_1,
                     uVar21 * 4);
          uVar9 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar9;
        } while (uVar9 < *(byte *)(param_2 + 1));
      }
    }
    else if (1 < uVar9) {
      do {
        auStack_100[0] = 0x14323bf6d;
        local_d8[0] = param_7 * 0.0055555557;
        local_d0._0_4_ = param_8 * 0.0055555557;
        local_c8[0] = uVar23;
        DSP::Mix2Interp(*param_2 + *(ushort *)(param_2 + 2) * uVar17 * 4,
                        *param_1 + *(ushort *)(param_1 + 2) * uVar17 * 4,0,0);
        uVar9 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar9;
      } while (uVar9 < *(byte *)(param_2 + 1));
    }
    return;
  }
  local_a8 = CONCAT44(local_a8._4_4_,uVar9) & 0xffffffff000000ff;
  if ((uVar9 & 0xff) < 2) goto LAB_14323be9c;
  uVar17 = 0;
  uVar13 = 0;
  for (uVar8 = uVar19 & 0x3ff33; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
    uVar13 = uVar13 + 1;
  }
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  fVar24 = 0.0;
  fVar28 = (float)uVar13;
  if ((uVar19 & 4) != 0) {
    if (((byte)uVar19 & 7) == 7) {
      fVar26 = param_3 * param_3;
      fVar25 = param_4 * param_4;
    }
    else {
      fVar28 = fVar28 + 1.0;
    }
  }
  local_b8[0] = (float)(uVar19 & 8);
  if ((float)(uVar19 & 8) != 0.0) {
    fVar24 = param_5 * param_5;
    fVar27 = param_6 * param_6;
  }
  uVar8 = (uVar9 & 0xff) << 4;
  uVar10 = (ulonglong)uVar8;
  uVar7 = (ulonglong)uVar8 + 0xf;
  fVar24 = SQRT(1.0 / (fVar26 + fVar28 + fVar24));
  fVar25 = SQRT(1.0 / (fVar25 + fVar28 + fVar27));
  if (uVar7 <= uVar10) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_100[0] = 0x14323b641;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = uVar10 + 0xf;
  if (uVar7 <= uVar10) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar5) = 0x14323b65e;
  lVar6 = -(uVar7 & 0xfffffffffffffff0);
  bVar12 = 0;
  lVar22 = lVar6 + lVar5 + -0xb8;
  if ((byte)((char)uVar9 - ((byte)(uVar9 >> 0xf) & 1)) < 2) {
    uVar9 = 4;
    do {
      bVar12 = bVar12 + 1;
      uVar9 = uVar9 & uVar9 - 1;
    } while (uVar9 != 0);
    uVar9 = 0;
    fVar26 = (float)(uint)bVar12;
    if ((float)local_a8 != 0.0) {
      do {
        uVar8 = uVar9 * 4;
        uVar9 = uVar9 + 1;
        *(float *)((longlong)local_b8 + (ulonglong)uVar8 * 4 + lVar5) = fVar25;
        *(float *)((longlong)local_b8 + (ulonglong)uVar8 * 4 + lVar22 + 0xb8) = fVar24;
      } while (uVar9 < *(byte *)(param_1 + 1));
    }
    if (((byte)uVar19 & 7) == 7) {
      *(float *)((longlong)local_98 + lVar5) = param_4 * *(float *)((longlong)local_98 + lVar5);
      *(float *)((longlong)local_98 + lVar6 + lVar5) =
           param_3 * *(float *)((longlong)local_98 + lVar6 + lVar5);
    }
    if (local_b8[0] == 0.0) goto LAB_14323bb14;
    if (uVar19 != 8) {
      uVar17 = (ulonglong)((uint)*(byte *)(param_1 + 1) * 4 - 4);
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5) =
           param_6 * *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5);
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8) =
           param_5 * *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8);
      goto LAB_14323bb14;
    }
  }
  else {
    uVar9 = 3;
    do {
      bVar12 = bVar12 + 1;
      uVar9 = uVar9 & uVar9 - 1;
    } while (uVar9 != 0);
    fVar26 = (float)(uint)bVar12;
    uVar19 = uVar19 & 0xfffffff7;
    uVar9 = 1;
    iVar20 = 0;
    if (uVar19 != 0) {
      do {
        if ((uVar9 & uVar19) != 0) {
          uVar7 = (ulonglong)(uint)(iVar20 * 4);
          iVar20 = iVar20 + 1;
          fVar27 = (float)(&DAT_145aecfa0)[uVar17 * 2];
          fVar28 = (float)(&DAT_145aecfa4)[uVar17 * 2];
          *(float *)((longlong)local_b8 + uVar7 * 4 + lVar5) = fVar27 * fVar25;
          *(float *)((longlong)local_b8 + uVar7 * 4 + lVar5 + 4) = fVar28 * fVar25;
          *(float *)((longlong)local_b8 + uVar7 * 4 + lVar22 + 0xb8) = fVar27 * fVar24;
          *(float *)((longlong)local_b8 + uVar7 * 4 + lVar6 + lVar5 + 4) = fVar28 * fVar24;
        }
        uVar17 = (ulonglong)((int)uVar17 + 1);
        uVar9 = uVar9 * 2;
      } while (uVar9 <= uVar19);
    }
    *(float **)((longlong)&local_d0 + lVar6 + lVar5) = local_b8 + 1;
    *(float **)((longlong)local_d8 + lVar6 + lVar5) = local_b8 + 2;
    *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323b73b;
    DSP::ComputeLRMixGains(param_7,param_8,&local_a8,local_b8 + 3);
    fVar24 = local_b8[1];
    uVar9 = 0;
    fVar25 = (float)local_a8;
    uVar8 = *(uint *)(param_1 + 1) - (*(uint *)(param_1 + 1) >> 0xf & 1) & 0xff;
    uVar19 = local_a0;
    if (3 < uVar8) {
      do {
        uVar7 = (ulonglong)(uVar9 * 4);
        fVar27 = *(float *)((longlong)local_b8 + uVar7 * 4 + lVar5 + 4);
        uVar17 = (ulonglong)(uVar9 * 4 + 4);
        fVar28 = *(float *)((longlong)local_b8 + uVar7 * 4 + lVar5);
        *(float *)((longlong)local_b8 + uVar7 * 4 + lVar5) = fVar28 * fVar25 + fVar27 * local_b8[3];
        *(float *)((longlong)local_b8 + uVar7 * 4 + lVar5 + 4) =
             fVar28 * local_b8[3] + fVar27 * fVar25;
        fVar27 = *(float *)((longlong)local_b8 + uVar7 * 4 + lVar6 + lVar5 + 4);
        fVar28 = *(float *)((longlong)local_b8 + uVar7 * 4 + lVar22 + 0xb8);
        *(float *)((longlong)local_b8 + uVar7 * 4 + lVar22 + 0xb8) =
             fVar28 * local_b8[2] + fVar27 * fVar24;
        *(float *)((longlong)local_b8 + uVar7 * 4 + lVar6 + lVar5 + 4) =
             fVar28 * fVar24 + fVar27 * local_b8[2];
        fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4);
        fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5);
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5) = fVar28 * fVar25 + fVar27 * local_b8[3]
        ;
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4) =
             fVar28 * local_b8[3] + fVar27 * fVar25;
        fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4);
        fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8);
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8) =
             fVar28 * local_b8[2] + fVar27 * fVar24;
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4) =
             fVar28 * fVar24 + fVar27 * local_b8[2];
        uVar17 = (ulonglong)(uVar9 * 4 + 8);
        fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4);
        fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5);
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5) = fVar28 * fVar25 + fVar27 * local_b8[3]
        ;
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4) =
             fVar28 * local_b8[3] + fVar27 * fVar25;
        fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4);
        fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8);
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8) =
             fVar28 * local_b8[2] + fVar27 * fVar24;
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4) =
             fVar28 * fVar24 + fVar27 * local_b8[2];
        uVar17 = (ulonglong)(uVar9 * 4 + 0xc);
        fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5);
        fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4);
        uVar9 = uVar9 + 4;
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5) = fVar27 * fVar25 + fVar28 * local_b8[3]
        ;
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4) =
             fVar27 * local_b8[3] + fVar28 * fVar25;
        fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4);
        fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8);
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8) =
             fVar28 * local_b8[2] + fVar27 * fVar24;
        *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4) =
             fVar28 * fVar24 + fVar27 * local_b8[2];
        uVar19 = local_a0;
      } while (uVar9 < uVar8 - 3);
    }
    for (; local_a0 = uVar19, uVar9 < uVar8; uVar9 = uVar9 + 1) {
      uVar17 = (ulonglong)(uVar9 * 4);
      fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4);
      fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5);
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5) = fVar28 * fVar25 + fVar27 * local_b8[3];
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4) =
           fVar28 * local_b8[3] + fVar27 * fVar25;
      fVar27 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4);
      fVar28 = *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8);
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8) =
           fVar28 * local_b8[2] + fVar27 * fVar24;
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4) =
           fVar28 * fVar24 + fVar27 * local_b8[2];
      uVar19 = local_a0;
    }
    if (((byte)uVar19 & 7) == 7) {
      *(float *)((longlong)local_98 + lVar5) = param_4 * *(float *)((longlong)local_98 + lVar5);
      *(float *)((longlong)local_98 + lVar6 + lVar5) =
           param_3 * *(float *)((longlong)local_98 + lVar6 + lVar5);
      *(float *)((longlong)local_98 + lVar5 + 4) =
           param_4 * *(float *)((longlong)local_98 + lVar5 + 4);
      *(float *)((longlong)local_98 + lVar6 + lVar5 + 4) =
           param_3 * *(float *)((longlong)local_98 + lVar6 + lVar5 + 4);
    }
    if (local_b8[0] != 0.0) {
      uVar17 = (ulonglong)((uint)*(byte *)(param_1 + 1) * 4 - 4);
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5) = param_6;
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar22 + 0xb8) = param_5;
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar5 + 4) = param_6;
      *(float *)((longlong)local_b8 + uVar17 * 4 + lVar6 + lVar5 + 4) = param_5;
    }
LAB_14323bb14:
    uVar17 = 0;
    if (uVar19 != 8) {
      if ((char)param_2[1] != '\0') {
        do {
          uVar3 = *(ushort *)(param_2 + 2);
          lVar11 = *param_2;
          *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bb5c;
          _guard_xfg_dispatch_icall_nop((void *)(lVar11 + uVar3 * uVar17 * 4),0,uVar21 * 4);
          uVar9 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar9;
        } while (uVar9 < *(byte *)(param_2 + 1));
        uVar21 = (ulonglong)uVar23;
      }
      uVar17 = 0;
      local_b8[0] = 0.0;
      local_a8 = uVar21 * 4;
      local_a0 = (int)fVar26 + 3U & 0xfffffffc;
      local_b8[1] = fVar26;
      do {
        sVar16 = local_a8;
        lVar11 = *param_2;
        uVar3 = *(ushort *)(param_2 + 2);
        *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bbbc;
        _guard_xfg_dispatch_icall_nop((void *)(lVar11 + uVar3 * uVar17 * 4),0,sVar16);
        uVar9 = 0;
        do {
          uVar3 = *(ushort *)(param_1 + 2);
          uVar19 = local_a0 * uVar9;
          lVar11 = *param_1;
          *(uint *)((longlong)local_c8 + lVar6 + lVar5) = uVar23;
          uVar4 = *(ushort *)(param_2 + 2);
          lVar15 = *param_2;
          lVar18 = uVar19 + uVar17;
          uVar1 = *(undefined4 *)((longlong)local_b8 + lVar18 * 4 + lVar22 + 0xb8);
          *(undefined4 *)((longlong)&local_d0 + lVar6 + lVar5) =
               *(undefined4 *)((longlong)local_b8 + lVar18 * 4 + lVar5);
          *(undefined4 *)((longlong)local_d8 + lVar6 + lVar5) = uVar1;
          *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bc13;
          DSP::Mix2Interp(lVar15 + uVar4 * uVar17 * 4,
                          lVar11 + (ulonglong)uVar3 * (ulonglong)uVar9 * 4,0x3f800000,0x3f800000);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(byte *)(param_1 + 1));
        local_b8[0] = (float)((int)local_b8[0] + 1);
        uVar17 = (ulonglong)(uint)local_b8[0];
        sVar16 = local_a8;
        fVar26 = local_b8[1];
      } while ((uint)local_b8[0] < (uint)local_b8[1]);
      goto LAB_14323bc7f;
    }
  }
  pvVar14 = (void *)0x0;
  if ((*(uint *)(param_1 + 1) >> 0xf & 1) != 0) {
    pvVar14 = (void *)(*param_1 +
                      (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1) *
                      (ulonglong)*(ushort *)(param_1 + 2) * 4);
  }
  _Dst = (void *)*param_2;
  *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bc7c;
  _guard_xfg_dispatch_icall_nop(_Dst,pvVar14,uVar21 * 4);
  sVar16 = uVar21 * 4;
LAB_14323bc7f:
  uVar19 = (uint)uVar2;
  uVar21 = 1;
  uVar9 = *(uint *)(param_2 + 1);
  if ((uVar9 & 0xf00) != 0x100) {
    return;
  }
  if ((uVar9 & 0xff) <= (uint)fVar26) {
    return;
  }
  if (fVar26 == 1.4013e-45) {
    if ((uVar9 & 0xff) < 2) {
      return;
    }
    do {
      uVar2 = *(ushort *)(param_2 + 2);
      pvVar14 = (void *)*param_2;
      *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bcca;
      _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar14 + uVar2 * uVar21 * 4),pvVar14,sVar16)
      ;
      uVar9 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar9;
    } while (uVar9 < *(byte *)(param_2 + 1));
    return;
  }
  if (fVar26 != 2.8026e-45) {
    return;
  }
  uVar23 = uVar9 & 0x7000;
  if (uVar23 == 0x7000) {
    lVar22 = *param_2;
    uVar2 = *(ushort *)(param_2 + 2);
    *(uint *)((longlong)local_c8 + lVar6 + lVar5) = uVar19;
    *(undefined4 *)((longlong)&local_d0 + lVar6 + lVar5) = 0x3f000000;
    *(undefined4 *)((longlong)local_d8 + lVar6 + lVar5) = 0x3f000000;
    *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bd26;
    DSP::Mix2Interp(lVar22 + (ulonglong)uVar2 * 8,lVar22,0x3f800000,0x3f800000);
    uVar2 = *(ushort *)(param_2 + 2);
    lVar22 = *param_2;
    *(uint *)((longlong)local_c8 + lVar6 + lVar5) = uVar19;
    *(undefined4 *)((longlong)&local_d0 + lVar6 + lVar5) = 0x3f000000;
    *(undefined4 *)((longlong)local_d8 + lVar6 + lVar5) = 0x3f000000;
    *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bd51;
    DSP::Mix2Interp(lVar22 + (ulonglong)uVar2 * 8,lVar22 + (ulonglong)uVar2 * 4,0x3f800000,
                    0x3f800000);
    uVar9 = *(uint *)(param_2 + 1);
  }
  lVar22 = 0x10;
  if ((uVar9 & 0x210000) != 0) {
    uVar2 = *(ushort *)(param_2 + 2);
    pvVar14 = (void *)*param_2;
    lVar11 = 8;
    if (uVar23 == 0x7000) {
      lVar11 = 0xc;
    }
    *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bd8c;
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar11 * (ulonglong)uVar2 + (longlong)pvVar14),pvVar14,sVar16);
    lVar11 = *param_2;
    uVar2 = *(ushort *)(param_2 + 2);
    lVar15 = 0xc;
    if (uVar23 == 0x7000) {
      lVar15 = 0x10;
    }
    *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bdb2;
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar11 + lVar15 * (ulonglong)uVar2),(void *)(lVar11 + (ulonglong)uVar2 * 4),
               sVar16);
    uVar9 = *(uint *)(param_2 + 1);
  }
  if ((uVar9 & 0x210000) == 0x210000) {
    uVar2 = *(ushort *)(param_2 + 2);
    pvVar14 = (void *)*param_2;
    if (uVar23 == 0x7000) {
      lVar22 = 0x14;
    }
    *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323bde9;
    _guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)uVar2 * lVar22 + (longlong)pvVar14),pvVar14,sVar16);
    uVar2 = *(ushort *)(param_2 + 2);
    lVar22 = *param_2;
    lVar11 = 0x14;
    if (uVar23 == 0x7000) {
      lVar11 = 0x18;
    }
    *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323be13;
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar22 + lVar11 * (ulonglong)uVar2),(void *)(lVar22 + (ulonglong)uVar2 * 4),
               sVar16);
    uVar9 = *(uint *)(param_2 + 1);
  }
  if ((uVar9 & 0x8000) == 0) {
    return;
  }
  uVar2 = *(ushort *)(param_2 + 2);
  lVar22 = *param_2;
  *(uint *)((longlong)local_c8 + lVar6 + lVar5) = uVar19;
  *(undefined4 *)((longlong)&local_d0 + lVar6 + lVar5) = 0x3f000000;
  *(undefined4 *)((longlong)local_d8 + lVar6 + lVar5) = 0x3f000000;
  *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323be52;
  DSP::Mix2Interp(lVar22 + (ulonglong)((uVar9 & 0xff) - 1) * (ulonglong)uVar2 * 4,lVar22,0x3f800000,
                  0x3f800000);
  uVar2 = *(ushort *)(param_2 + 2);
  lVar22 = *param_2;
  if ((*(uint *)(param_2 + 1) >> 0xf & 1) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar22 + (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) * (ulonglong)uVar2 * 4;
  }
  *(uint *)((longlong)local_c8 + lVar6 + lVar5) = uVar19;
  *(undefined4 *)((longlong)&local_d0 + lVar6 + lVar5) = 0x3f000000;
  *(undefined4 *)((longlong)local_d8 + lVar6 + lVar5) = 0x3f000000;
  *(undefined8 *)((longlong)auStack_100 + lVar6 + lVar5) = 0x14323be97;
  DSP::Mix2Interp(lVar11,lVar22 + (ulonglong)uVar2 * 4,0x3f800000,0x3f800000);
  return;
}



// FUNCTION 14323bfd0 FUN_14323bfd0 body=43 status=ok
// SIG undefined FUN_14323bfd0(void)

undefined8 * FUN_14323bfd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14323c000 FUN_14323c000 body=68 status=ok
// SIG undefined FUN_14323c000(void)

undefined8 * FUN_14323c000(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aed030;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14323c050 FUN_14323c050 body=515 status=ok
// SIG undefined FUN_14323c050(void)

void FUN_14323c050(longlong param_1,longlong *param_2)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_e8 [8];
  undefined1 local_a8 [32];
  undefined1 local_88 [128];
  
  uVar2 = *(ushort *)(param_2 + 2);
  if (uVar2 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (*(uint *)(lVar10 + 0xfc) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)*(uint *)(lVar10 + 0xfc) + lVar10;
    }
    if (*(uint *)(lVar8 + 0x24) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (ulonglong)*(uint *)(lVar8 + 0x24) + lVar10;
    }
    lVar8 = *(longlong *)(param_1 + 0x20);
    fVar1 = *(float *)(lVar10 + 0x28);
    if (*(char *)(lVar8 + 0xe0) != '\0') {
      FUN_1432401a0(*(undefined8 *)(param_1 + 0x10),lVar8 + 0x68,0);
      lVar10 = *(longlong *)(param_1 + 0x20);
      lVar8 = *(longlong *)(param_1 + 8);
      uVar7 = *(undefined8 *)(lVar10 + 0x2c);
      *(undefined8 *)(lVar8 + 0x138) = *(undefined8 *)(lVar10 + 0x24);
      *(undefined8 *)(lVar8 + 0x140) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + 0x3c);
      *(undefined8 *)(lVar8 + 0x148) = *(undefined8 *)(lVar10 + 0x34);
      *(undefined8 *)(lVar8 + 0x150) = uVar7;
      uVar4 = *(undefined4 *)(lVar10 + 0x48);
      uVar5 = *(undefined4 *)(lVar10 + 0x4c);
      uVar6 = *(undefined4 *)(lVar10 + 0x50);
      *(undefined4 *)(lVar8 + 0x158) = *(undefined4 *)(lVar10 + 0x44);
      *(undefined4 *)(lVar8 + 0x15c) = uVar4;
      *(undefined4 *)(lVar8 + 0x160) = uVar5;
      *(undefined4 *)(lVar8 + 0x164) = uVar6;
      uVar4 = *(undefined4 *)(lVar10 + 0x58);
      uVar5 = *(undefined4 *)(lVar10 + 0x5c);
      uVar6 = *(undefined4 *)(lVar10 + 0x60);
      *(undefined4 *)(lVar8 + 0x168) = *(undefined4 *)(lVar10 + 0x54);
      *(undefined4 *)(lVar8 + 0x16c) = uVar4;
      *(undefined4 *)(lVar8 + 0x170) = uVar5;
      *(undefined4 *)(lVar8 + 0x174) = uVar6;
      *(undefined4 *)(lVar8 + 0x178) = *(undefined4 *)(lVar10 + 100);
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xe0) = 0;
      lVar8 = *(longlong *)(param_1 + 0x20);
    }
    FUN_143240c40(*(undefined8 *)(param_1 + 8),local_a8,lVar8 + 8,(float)uVar2 / fVar1);
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    uVar11 = (ulonglong)(*(uint *)(param_2 + 1) & 0xff);
    if ((*(uint *)(param_2 + 1) & 0xff) != 0) {
      uVar3 = *(ushort *)(param_2 + 2);
      plVar9 = local_e8;
      lVar10 = *param_2;
      do {
        *plVar9 = lVar10;
        plVar9 = plVar9 + 1;
        lVar10 = lVar10 + (ulonglong)uVar3 * 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    FUN_14323ce30(local_88);
    FUN_14323ced0(local_88,*(uint *)(param_2 + 1) & 0xff,local_e8,
                  (*(uint *)(param_2 + 1) & 0xff) * (uint)uVar2);
    FUN_143240260(*(undefined8 *)(param_1 + 0x10),local_a8);
    FUN_143240730(*(undefined8 *)(param_1 + 0x10),local_88);
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
    *(ushort *)((longlong)param_2 + 0x12) = uVar2;
    if (*(int *)(*(longlong *)(param_1 + 0x20) + 0xdc) != 0) {
      plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
      (**(code **)(*plVar9 + 0x58))
                (plVar9,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xdc),
                 *(float *)(*(longlong *)(param_1 + 0x10) + 0x5bc) *
                 *(float *)(*(longlong *)(param_1 + 0x10) + 0x4c),*(undefined8 *)(param_1 + 0x28),0,
                 4,0);
    }
  }
  return;
}



// FUNCTION 14323c270 FUN_14323c270 body=696 status=ok
// SIG undefined FUN_14323c270(void)

undefined8
FUN_14323c270(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 local_res8 [2];
  int local_res18 [2];
  longlong local_res20;
  
  *(longlong **)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  lVar14 = 0;
  local_res20 = 0;
  local_res8[0] = 0;
  (**(code **)(*param_3 + 0x20))(param_3,0,&local_res20,local_res8);
  if (local_res20 == 0) {
    return 7;
  }
  *(longlong *)(param_1 + 0x18) = local_res20;
  cVar6 = FUN_1432416d0(local_res20,local_res18);
  if ((cVar6 == '\0') && (-1 < local_res18[0])) {
    if (local_res18[0] < 2) {
      return 7;
    }
    if (local_res18[0] == 2) {
      return 0x40;
    }
  }
  lVar7 = (**(code **)(*param_2 + 8))(param_2,0x9198);
  lVar8 = lVar14;
  if (lVar7 != 0) {
    lVar8 = FUN_14323d140(lVar7);
  }
  *(longlong *)(param_1 + 0x10) = lVar8;
  if (lVar8 != 0) {
    FUN_14323de60(lVar8,*(undefined8 *)(param_1 + 0x18),0xffffffff);
    FUN_1432401a0(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x20) + 0x68,0);
    lVar7 = (**(code **)(*param_2 + 8))(param_2,0x198);
    lVar8 = lVar14;
    if (lVar7 != 0) {
      lVar8 = FUN_1432408e0(lVar7);
    }
    *(longlong *)(param_1 + 8) = lVar8;
    if (lVar8 != 0) {
      FUN_143240b30(lVar8,*(longlong *)(param_1 + 0x18) + 0x3c);
      lVar8 = *(longlong *)(param_1 + 0x20);
      lVar7 = *(longlong *)(param_1 + 8);
      uVar10 = *(undefined8 *)(lVar8 + 0x2c);
      *(undefined8 *)(lVar7 + 0x138) = *(undefined8 *)(lVar8 + 0x24);
      *(undefined8 *)(lVar7 + 0x140) = uVar10;
      uVar10 = *(undefined8 *)(lVar8 + 0x3c);
      *(undefined8 *)(lVar7 + 0x148) = *(undefined8 *)(lVar8 + 0x34);
      *(undefined8 *)(lVar7 + 0x150) = uVar10;
      uVar3 = *(undefined4 *)(lVar8 + 0x48);
      uVar4 = *(undefined4 *)(lVar8 + 0x4c);
      uVar5 = *(undefined4 *)(lVar8 + 0x50);
      *(undefined4 *)(lVar7 + 0x158) = *(undefined4 *)(lVar8 + 0x44);
      *(undefined4 *)(lVar7 + 0x15c) = uVar3;
      *(undefined4 *)(lVar7 + 0x160) = uVar4;
      *(undefined4 *)(lVar7 + 0x164) = uVar5;
      uVar3 = *(undefined4 *)(lVar8 + 0x58);
      uVar4 = *(undefined4 *)(lVar8 + 0x5c);
      uVar5 = *(undefined4 *)(lVar8 + 0x60);
      *(undefined4 *)(lVar7 + 0x168) = *(undefined4 *)(lVar8 + 0x54);
      *(undefined4 *)(lVar7 + 0x16c) = uVar3;
      *(undefined4 *)(lVar7 + 0x170) = uVar4;
      *(undefined4 *)(lVar7 + 0x174) = uVar5;
      *(undefined4 *)(lVar7 + 0x178) = *(undefined4 *)(lVar8 + 100);
      plVar9 = (longlong *)(**(code **)(*param_3 + 0x68))(param_3);
      uVar10 = (**(code **)(*plVar9 + 8))(plVar9);
      uVar13 = 3;
      *(undefined8 *)(param_1 + 0x28) = uVar10;
      uVar11 = 3;
      do {
        uVar11 = uVar11 & uVar11 - 1;
      } while (uVar11 != 0);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 4);
      if (iVar2 == 1) {
        uVar11 = 4;
        bVar12 = 0;
        do {
          bVar12 = bVar12 + 1;
          uVar11 = uVar11 & uVar11 - 1;
        } while (uVar11 != 0);
        uVar11 = bVar12 | 0x4100;
      }
      else if (iVar2 == 2) {
        bVar12 = 0;
        do {
          bVar12 = bVar12 + 1;
          uVar13 = uVar13 & uVar13 - 1;
        } while (uVar13 != 0);
        uVar11 = bVar12 | 0x3100;
      }
      else if (iVar2 == 4) {
        uVar11 = 0x603;
        bVar12 = 0;
        do {
          bVar12 = bVar12 + 1;
          uVar11 = uVar11 & uVar11 - 1;
        } while (uVar11 != 0);
        uVar11 = bVar12 | 0x603100;
      }
      else if (iVar2 == 5) {
        uVar11 = 0x607;
        bVar12 = 0;
        do {
          bVar12 = bVar12 + 1;
          uVar11 = uVar11 & uVar11 - 1;
        } while (uVar11 != 0);
        uVar11 = bVar12 | 0x607100;
      }
      else {
        if (iVar2 != 6) {
          return 0x4e;
        }
        uVar11 = 0x60f;
        bVar12 = 0;
        do {
          bVar12 = bVar12 + 1;
          uVar11 = uVar11 & uVar11 - 1;
        } while (uVar11 != 0);
        uVar11 = bVar12 | 0x60f100;
      }
      lVar8 = *(longlong *)(param_1 + 0x18);
      lVar7 = lVar14;
      if (*(uint *)(lVar8 + 0xfc) != 0) {
        lVar7 = (ulonglong)*(uint *)(lVar8 + 0xfc) + lVar8;
      }
      if (*(uint *)(lVar7 + 0x24) != 0) {
        lVar14 = lVar8 + (ulonglong)*(uint *)(lVar7 + 0x24);
      }
      fVar1 = *(float *)(lVar14 + 0x28);
      param_5[2] = param_5[2] & 0xfffd0120;
      param_5[2] = param_5[2] | 0x50120;
      param_5[1] = uVar11;
      *param_5 = (int)(longlong)fVar1;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 14323c530 FUN_14323c530 body=106 status=ok
// SIG undefined FUN_14323c530(void)

undefined8 FUN_14323c530(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int local_res8 [8];
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  cVar1 = FUN_1432416d0(param_2,local_res8);
  if ((cVar1 == '\0') && (-1 < local_res8[0])) {
    if (local_res8[0] < 2) {
      return 7;
    }
    if (local_res8[0] == 2) {
      return 0x40;
    }
  }
  FUN_143240100(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  FUN_143240bd0(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14323c5a0 ReadData body=23 status=ok
// SIG undefined ReadData(void)

undefined8 Scaleform::Render::PNG::LibPNGInput::ReadData(longlong param_1)

{
  FUN_143240be0(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14323c5c0 FUN_14323c5c0 body=106 status=ok
// SIG undefined FUN_14323c5c0(void)

undefined8 FUN_14323c5c0(undefined8 *param_1,longlong *param_2)

{
  if (param_1[2] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[1] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14323c640 FUN_14323c640 body=299 status=ok
// SIG undefined FUN_14323c640(void)

undefined4 * FUN_14323c640(undefined4 *param_1)

{
  param_1[0xd] = 0x3e99999a;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f666666;
  param_1[0x10] = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x11) = 0x40400000;
  param_1[0x13] = 2;
  param_1[0x16] = 0x3e99999a;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0x3f666666;
  param_1[0x19] = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x1a) = 0x40400000;
  param_1[0x1c] = 2;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0x100240001;
  *(undefined8 *)(param_1 + 0xd) = 0x3f8000003e99999a;
  param_1[1] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf) = 0x3dcccccd3f666666;
  *(undefined8 *)(param_1 + 0x11) = 0x40400000;
  param_1[0x13] = 2;
  param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14) = 0x100240001;
  *(undefined8 *)(param_1 + 0x16) = 0x3f8000003e99999a;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0x3dcccccd3f666666;
  *(undefined8 *)(param_1 + 0x1a) = 0x40400000;
  param_1[0x1c] = 2;
  *(undefined8 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined8 *)(param_1 + 6) = 100;
  param_1[8] = 0x3f333333;
  param_1[10] = 0x40400000;
  param_1[9] = 0x14;
  param_1[3] = 1;
  param_1[4] = 0x3dcccccd;
  *param_1 = 0x740001;
  return param_1;
}



// FUNCTION 14323c770 FUN_14323c770 body=218 status=ok
// SIG undefined FUN_14323c770(void)

undefined8 * FUN_14323c770(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 4) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 5) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3e800000;
  *(undefined4 *)(param_1 + 6) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 7) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  param_1[8] = 0x41400000;
  *(undefined4 *)(param_1 + 9) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 10) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f19999a;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x440001;
  FUN_14323c640(param_1 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  return param_1;
}



// FUNCTION 14323c850 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FUdpMessageTransport>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14323c880 FUN_14323c880 body=219 status=ok
// SIG undefined FUN_14323c880(void)

undefined8 * FUN_14323c880(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR__scalar_deleting_destructor__145aed098;
    FUN_14323c770(puVar2 + 1);
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
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    puVar2[0x13] = *(undefined8 *)(param_1 + 0x98);
    puVar2[0x14] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    puVar2[0x15] = *(undefined8 *)(param_1 + 0xa8);
    puVar2[0x16] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    puVar2[0x17] = *(undefined8 *)(param_1 + 0xb8);
    puVar2[0x18] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    puVar2[0x19] = *(undefined8 *)(param_1 + 200);
    puVar2[0x1a] = uVar1;
    puVar2[0x1b] = *(undefined8 *)(param_1 + 0xd8);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14323c960 FUN_14323c960 body=66 status=ok
// SIG undefined FUN_14323c960(void)

undefined8 * FUN_14323c960(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__145aed098;
    FUN_14323c770(puVar1 + 1);
    *(undefined1 *)(puVar1 + 0x1c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14323c9b0 FUN_14323c9b0 body=26 status=ok
// SIG undefined FUN_14323c9b0(void)

undefined8 FUN_14323c9b0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014323c9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar1;
}



// FUNCTION 14323cc70 FUN_14323cc70 body=269 status=ok
// SIG undefined FUN_14323cc70(void)

void FUN_14323cc70(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 local_88 [128];
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(bool *)(param_1 + 0x20) = param_2[5] != 0;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar1 = param_2[0x16];
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar8 = param_2[0xd];
  uVar9 = param_2[0xe];
  uVar10 = param_2[0xf];
  uVar11 = param_2[0x10];
  uVar12 = param_2[0x11];
  uVar13 = param_2[0x12];
  uVar14 = param_2[0x13];
  uVar15 = param_2[0x14];
  uVar16 = param_2[0x15];
  *(undefined4 *)(param_1 + 0x24) = param_2[6];
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 0x48) = uVar10;
  *(undefined4 *)(param_1 + 0x4c) = uVar11;
  *(undefined4 *)(param_1 + 0x50) = uVar12;
  *(undefined4 *)(param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 0x58) = uVar14;
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  *(undefined4 *)(param_1 + 0x60) = uVar16;
  *(undefined4 *)(param_1 + 100) = uVar1;
  FUN_14323c640(local_88);
  uVar17 = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(param_1 + 0x70) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x1b);
  *(undefined8 *)(param_1 + 0x80) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x21);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x1f);
  *(undefined8 *)(param_1 + 0x90) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x23);
  *(undefined8 *)(param_1 + 0xa0) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x29);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0x27);
  *(undefined8 *)(param_1 + 0xb0) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x2b);
  *(undefined8 *)(param_1 + 0xc0) = uVar17;
  uVar17 = *(undefined8 *)(param_2 + 0x31);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(param_1 + 0xd0) = uVar17;
  *(undefined4 *)(param_1 + 0xd8) = param_2[0x33];
  *(undefined4 *)(param_1 + 0xdc) = param_2[0x34];
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x24) = 1;
  }
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x68) = 1;
  }
  return;
}



// FUNCTION 14323cd80 FUN_14323cd80 body=165 status=ok
// SIG undefined FUN_14323cd80(void)

longlong * FUN_14323cd80(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = (int *)(param_2 + 100);
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  iVar2 = *piVar1;
  *(int *)((longlong)param_1 + 100) = iVar2;
  *(int *)(param_1 + 0xc) = param_4 / iVar2;
  if (0 < *piVar1) {
    plVar3 = param_1;
    do {
      iVar4 = iVar4 + 1;
      *plVar3 = *(longlong *)((param_2 - (longlong)param_1) + (longlong)plVar3) +
                (longlong)param_3 * 4;
      plVar3 = plVar3 + 1;
    } while (iVar4 < *piVar1);
  }
  return param_1;
}



// FUNCTION 14323ce30 FUN_14323ce30 body=64 status=ok
// SIG undefined FUN_14323ce30(void)

undefined8 * FUN_14323ce30(undefined8 *param_1)

{
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  return param_1;
}



// FUNCTION 14323ce70 FUN_14323ce70 body=92 status=ok
// SIG undefined FUN_14323ce70(void)

void FUN_14323ce70(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0xc);
  }
  iVar2 = 0;
  piVar1 = (int *)((longlong)param_1 + 100);
  if (0 < *piVar1) {
    do {
      _guard_xfg_dispatch_icall_nop((void *)*param_1,0,(longlong)param_2 << 2);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < *piVar1);
  }
  return;
}



// FUNCTION 14323ced0 FUN_14323ced0 body=131 status=ok
// SIG undefined FUN_14323ced0(void)

void FUN_14323ced0(undefined8 *param_1,int param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  param_1[8] = 0;
  *param_1 = 0;
  piVar1 = (int *)(param_1 + 0xc);
  param_1[1] = 0;
  piVar2 = (int *)((longlong)param_1 + 100);
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  if (0 < param_2) {
    param_3 = param_3 - (longlong)param_1;
    do {
      *param_1 = *(undefined8 *)(param_3 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *piVar2 = param_2;
  *piVar1 = param_4 / param_2;
  return;
}



// FUNCTION 14323cf60 FUN_14323cf60 body=305 status=ok
// SIG undefined FUN_14323cf60(void)

void FUN_14323cf60(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar4 = 0;
  lVar7 = (longlong)param_3;
  piVar1 = (int *)((longlong)param_1 + 100);
  if (0 < *piVar1) {
    plVar6 = param_1 + 8;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar5 = 0;
      if (3 < lVar7) {
        do {
          iVar3 = (int)*plVar6;
          fVar2 = *(float *)(*(longlong *)(param_2 + (longlong)param_1) + lVar5 * 4);
          *(int *)plVar6 = iVar3 + 1;
          *(float *)(*param_1 + (longlong)iVar3 * 4) =
               fVar2 + *(float *)(*param_1 + (longlong)iVar3 * 4);
          iVar3 = (int)*plVar6;
          fVar2 = *(float *)(*(longlong *)(param_2 + (longlong)param_1) + 4 + lVar5 * 4);
          *(int *)plVar6 = iVar3 + 1;
          *(float *)(*param_1 + (longlong)iVar3 * 4) =
               fVar2 + *(float *)(*param_1 + (longlong)iVar3 * 4);
          iVar3 = (int)*plVar6;
          fVar2 = *(float *)(*(longlong *)(param_2 + (longlong)param_1) + 8 + lVar5 * 4);
          *(int *)plVar6 = iVar3 + 1;
          *(float *)(*param_1 + (longlong)iVar3 * 4) =
               fVar2 + *(float *)(*param_1 + (longlong)iVar3 * 4);
          iVar3 = (int)*plVar6;
          fVar2 = *(float *)(*(longlong *)(param_2 + (longlong)param_1) + 0xc + lVar5 * 4);
          lVar5 = lVar5 + 4;
          *(int *)plVar6 = iVar3 + 1;
          *(float *)(*param_1 + (longlong)iVar3 * 4) =
               fVar2 + *(float *)(*param_1 + (longlong)iVar3 * 4);
        } while (lVar5 < lVar7 + -3);
      }
      for (; lVar5 < lVar7; lVar5 = lVar5 + 1) {
        iVar3 = (int)*plVar6;
        fVar2 = *(float *)(*(longlong *)(param_2 + (longlong)param_1) + lVar5 * 4);
        *(int *)plVar6 = iVar3 + 1;
        *(float *)(*param_1 + (longlong)iVar3 * 4) =
             fVar2 + *(float *)(*param_1 + (longlong)iVar3 * 4);
      }
      iVar4 = iVar4 + 1;
      plVar6 = (longlong *)((longlong)plVar6 + 4);
      param_1 = param_1 + 1;
    } while (iVar4 < *piVar1);
  }
  return;
}



// FUNCTION 14323d0a0 FUN_14323d0a0 body=33 status=ok
// SIG undefined FUN_14323d0a0(void)

void FUN_14323d0a0(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  piVar2 = (int *)(param_1 + 0x40);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      *piVar2 = iVar1 + param_2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 100));
  }
  return;
}



// FUNCTION 14323d0d0 FUN_14323d0d0 body=59 status=ok
// SIG undefined FUN_14323d0d0(void)

int FUN_14323d0d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  piVar3 = (int *)(param_1 + 0x40);
  iVar2 = *piVar3;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      *piVar3 = iVar1;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 100));
  }
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  return iVar2 - iVar1;
}



// FUNCTION 14323d110 FUN_14323d110 body=7 status=ok
// SIG undefined FUN_14323d110(void)

void FUN_14323d110(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 14323d120 FUN_14323d120 body=31 status=ok
// SIG undefined FUN_14323d120(void)

void FUN_14323d120(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 100));
  }
  return;
}



// FUNCTION 14323d140 FUN_14323d140 body=1042 status=ok
// SIG undefined FUN_14323d140(void)

undefined8 * FUN_14323d140(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[2] = 0;
  param_1[8] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_14323c640((longlong)param_1 + 0x54);
  FUN_14323c640(param_1 + 0x19);
  puVar2 = param_1 + 0x28;
  lVar3 = 2;
  lVar4 = 2;
  puVar1 = (undefined4 *)((longlong)param_1 + 0x14c);
  do {
    *(undefined2 *)puVar2 = 1;
    puVar1[-2] = 0;
    *(undefined1 *)(puVar1 + -1) = 1;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    _vector_constructor_iterator_(puVar1 + 5,0x160,3,FUN_14323d560);
    FUN_143242e60(puVar1 + 0x10d);
    *(undefined8 *)(puVar1 + 0x121) = 0;
    puVar2 = puVar2 + 0x9c;
    puVar1[0x123] = 0;
    *(undefined8 *)(puVar1 + 0x127) = 0;
    *(undefined8 *)(puVar1 + 0x133) = 0;
    puVar1 = puVar1 + 0x138;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2 = param_1 + 0x160;
  puVar1 = (undefined4 *)((longlong)param_1 + 0xb0c);
  do {
    *(undefined2 *)puVar2 = 1;
    puVar1[-2] = 0;
    *(undefined1 *)(puVar1 + -1) = 1;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    _vector_constructor_iterator_(puVar1 + 5,0x160,3,FUN_14323d560);
    FUN_143242e60(puVar1 + 0x10d);
    *(undefined8 *)(puVar1 + 0x121) = 0;
    puVar2 = puVar2 + 0x9c;
    puVar1[0x123] = 0;
    *(undefined8 *)(puVar1 + 0x127) = 0;
    *(undefined8 *)(puVar1 + 0x133) = 0;
    puVar1 = puVar1 + 0x138;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_143241f10(param_1 + 0x298);
  lVar3 = 0x50;
  puVar2 = param_1 + 699;
  do {
    *(undefined8 *)((longlong)puVar2 + -0x14) = 0;
    *(undefined4 *)((longlong)puVar2 + -0xc) = 0xbf800000;
    *(undefined4 *)(puVar2 + -1) = 0xbf800000;
    *(undefined8 *)((longlong)puVar2 + -4) = 0xffffffffbf800000;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar2 + 4) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
    _vector_constructor_iterator_((longlong)puVar2 + 0x1c,0x28,3,&LAB_14323d690);
    puVar2 = puVar2 + 0x15;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)((longlong)param_1 + 0x4a44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4c) = 0;
  *(undefined2 *)(param_1 + 0x94e) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4a74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a64) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a6c) = 0;
  *(undefined1 *)(param_1 + 0x94d) = 0;
  *(undefined2 *)(param_1 + 0x953) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4a9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a94) = 0;
  *(undefined1 *)(param_1 + 0x952) = 0;
  *(undefined2 *)(param_1 + 0x958) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4ac4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4aa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4aac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ab4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4abc) = 0;
  *(undefined1 *)(param_1 + 0x957) = 0;
  *(undefined2 *)(param_1 + 0x95d) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4aec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4acc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ad4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4adc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ae4) = 0;
  *(undefined1 *)(param_1 + 0x95c) = 0;
  *(undefined2 *)(param_1 + 0x962) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4b14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4af4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4afc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b04) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b0c) = 0;
  *(undefined1 *)(param_1 + 0x961) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b1c) = 0;
  FUN_143241f10(param_1 + 0x965);
  *(undefined2 *)((longlong)param_1 + 0x4c2c) = 1;
  *(undefined4 *)(param_1 + 0x986) = 0;
  param_1[0x987] = 0;
  *(undefined4 *)(param_1 + 0x988) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c44) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x989) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c54) = 0;
  FUN_143241f10(param_1 + 0x98c);
  *(undefined2 *)((longlong)param_1 + 0x4d64) = 1;
  *(undefined4 *)(param_1 + 0x9ad) = 0;
  param_1[0x9ae] = 0;
  *(undefined4 *)(param_1 + 0x9af) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d7c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x9b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d8c) = 0;
  FUN_1432419b0(param_1 + 0x9b3);
  param_1[0x9f9] = 0;
  param_1[0x9fa] = 0;
  *(undefined4 *)(param_1 + 0x9fb) = 0x3f800000;
  FUN_14323ce30(param_1 + 0x1225);
  *(undefined8 *)((longlong)param_1 + 0x4fbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4fc4) = 0;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14323d560 FUN_14323d560 body=130 status=ok
// SIG undefined FUN_14323d560(void)

longlong FUN_14323d560(longlong param_1)

{
  FUN_143241f10();
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x104) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined2 *)(param_1 + 0x154) = 1;
  return param_1;
}



// FUNCTION 14323d5f0 FUN_14323d5f0 body=146 status=ok
// SIG undefined FUN_14323d5f0(void)

undefined8 * FUN_14323d5f0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xbf800000;
  param_1[2] = 0xffffffffbf800000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined2 *)(param_1 + 10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 14323d6c0 FUN_14323d6c0 body=1796 status=ok
// SIG undefined FUN_14323d6c0(void)

ulonglong FUN_14323d6c0(longlong param_1,longlong param_2,ulonglong *param_3,int param_4,
                       char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  uint local_res8;
  float local_228;
  ulonglong local_220;
  float local_210;
  undefined1 local_1f8 [440];
  
  uVar15 = 0;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (param_4 == 0) {
    uVar7 = *(uint *)(param_1 + 0x1c);
    uVar8 = uVar15;
    if (uVar7 != 0) {
LAB_14323d739:
      uVar8 = (ulonglong)uVar7 + *(longlong *)(param_1 + 8);
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x2c);
    if (uVar7 != 0) goto LAB_14323d739;
    uVar8 = 0;
  }
  uVar3 = uVar15;
  if (*(uint *)(uVar8 + 0x24) != 0) {
    uVar3 = (ulonglong)*(uint *)(uVar8 + 0x24) + *(longlong *)(param_1 + 8);
  }
  uVar8 = uVar15;
  if (*(uint *)(uVar3 + 0x5c) != 0) {
    uVar8 = (ulonglong)*(uint *)(uVar3 + 0x5c) + *(longlong *)(param_1 + 8);
  }
  local_210 = (float)uVar1;
  local_228 = *(float *)(param_2 + 4);
  fVar17 = 1.0 / (float)*(int *)(param_1 + 0x78);
  fVar20 = *(float *)(param_2 + 0x24) * fVar17;
  fVar17 = (*(float *)(param_2 + 0x24) + local_210) * fVar17;
  if (param_5 != '\0') {
    fVar17 = 1.0 - fVar17;
    fVar20 = 1.0 - fVar20;
  }
  if (param_4 == 0) {
    fVar18 = *(float *)(param_1 + 0x4fe8) + *(float *)(param_1 + 0x4fe0);
    fVar16 = *(float *)(param_1 + 0x5018) + *(float *)(param_1 + 0x5010);
  }
  else {
    fVar18 = *(float *)(param_1 + 0x4ff0);
    fVar16 = *(float *)(param_1 + 0x5020);
  }
  iVar6 = (int)(uVar1 >> 0x20);
  if (0.05 <= fVar18 * local_228) {
    if (fVar16 * local_228 < 0.05) goto LAB_14323d859;
  }
  else {
    if (fVar16 * local_228 < 0.05) goto LAB_14323db63;
LAB_14323d859:
    local_228 = 0.0;
  }
  uVar3 = FUN_14323d110(param_3);
  iVar4 = *(int *)(param_1 + 4);
  local_res8 = 0;
  if (0 < iVar4) {
    puVar14 = param_3 + 8;
    uVar5 = uVar15;
    puVar10 = param_3;
    do {
      local_220 = uVar1 >> 0x20;
      uVar7 = (uint)uVar5;
      fVar18 = 0.0;
      if (iVar4 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = (uint)*(ushort *)(uVar8 + 0xc);
        if ((iVar4 == 6) && (uVar13 == 6)) {
          if (uVar7 == 5) {
            uVar13 = 3;
          }
          else {
            uVar13 = uVar7;
            if (2 < (int)uVar7) {
              uVar13 = uVar7 + 1;
            }
          }
        }
        else {
          uVar3 = (longlong)(int)uVar7 / (longlong)(int)uVar13 & 0xffffffff;
          uVar13 = (int)uVar7 % (int)uVar13;
          uVar7 = local_res8;
        }
      }
      *(undefined8 *)(param_1 + 0x4ff4) = *(undefined8 *)(param_1 + 0x4fdc);
      *(undefined8 *)(param_1 + 0x4ffc) = *(undefined8 *)(param_1 + 0x4fe4);
      *(undefined8 *)(param_1 + 0x5004) = *(undefined8 *)(param_1 + 0x4fec);
      fVar16 = *(float *)(param_2 + 8);
      iVar4 = (int)fVar16;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar16)) {
        auVar23._4_4_ = fVar16;
        auVar23._0_4_ = fVar16;
        auVar23._8_8_ = 0;
        uVar2 = movmskps((int)uVar3,auVar23);
        uVar3 = (ulonglong)(uVar2 & 1);
        fVar16 = (float)(int)(iVar4 - (uVar2 & 1));
      }
      uVar2 = 0xffffffff;
      if (0 < iVar6) {
        lVar9 = param_1 + 0x14c0;
        fVar25 = fVar18;
        do {
          iVar4 = *(int *)(param_1 + 0x15c0);
          fVar22 = (1.0 / local_210) * fVar25;
          fVar21 = (*(float *)(param_2 + 0xc) - *(float *)(param_2 + 8)) * fVar22 +
                   *(float *)(param_2 + 8);
          uVar7 = (uint)fVar21;
          fVar24 = fVar18;
          if (uVar2 != uVar7) {
            iVar11 = (uVar7 >> 6) * (uint)*(ushort *)(uVar8 + 0xc) + uVar13;
            if (iVar11 != iVar4) {
              uVar3 = uVar15;
              if (*(uint *)(uVar8 + 0x2c) != 0) {
                uVar3 = (ulonglong)*(uint *)(uVar8 + 0x2c) + *(longlong *)(param_1 + 8);
              }
              FUN_143241f60((uint)(iVar11 * 0x22) + uVar3,lVar9);
              *(int *)(param_1 + 0x15c0) = iVar11;
              iVar4 = iVar11;
            }
            fVar24 = *(float *)(lVar9 + (ulonglong)(uVar7 & 0x3f) * 4);
          }
          uVar2 = uVar7 + 1;
          iVar11 = (uVar2 >> 6) * (uint)*(ushort *)(uVar8 + 0xc) + uVar13;
          if (iVar11 != iVar4) {
            uVar3 = uVar15;
            if (*(uint *)(uVar8 + 0x2c) != 0) {
              uVar3 = (ulonglong)*(uint *)(uVar8 + 0x2c) + *(longlong *)(param_1 + 8);
            }
            FUN_143241f60((uint)(iVar11 * 0x22) + uVar3,lVar9);
            *(int *)(param_1 + 0x15c0) = iVar11;
          }
          fVar19 = fVar21 - fVar16;
          fVar18 = *(float *)(lVar9 + (ulonglong)(uVar2 & 0x3f) * 4);
          if ((1.0 <= fVar19) && (fVar19 = fVar19 + -1.0, 1.0 <= fVar19)) {
            fVar19 = fVar19 + -1.0;
          }
          local_220 = local_220 - 1;
          fVar25 = fVar25 + 1.0;
          iVar4 = (int)*puVar14;
          fVar16 = fVar21 - fVar19;
          *(int *)puVar14 = iVar4 + 1;
          uVar3 = *puVar10;
          *(float *)(uVar3 + (longlong)iVar4 * 4) =
               ((fVar18 - fVar24) * fVar19 + fVar24) *
               (fVar22 * (fVar17 - fVar20) + fVar20) * local_228 +
               *(float *)(uVar3 + (longlong)iVar4 * 4);
          uVar7 = local_res8;
        } while (local_220 != 0);
      }
      iVar4 = *(int *)(param_1 + 4);
      local_res8 = uVar7 + 1;
      uVar5 = (ulonglong)local_res8;
      puVar14 = (ulonglong *)((longlong)puVar14 + 4);
      puVar10 = puVar10 + 1;
    } while ((int)local_res8 < iVar4);
  }
  FUN_14323d0d0(param_3);
LAB_14323db63:
  lVar9 = 3;
  pfVar12 = (float *)(param_2 + 0x3c);
  do {
    if (pfVar12[2] != 0.0) {
      fVar20 = (1.0 - local_228) * *pfVar12;
      fVar17 = (1.0 - local_228) * pfVar12[-1];
      *pfVar12 = fVar20;
      pfVar12[-1] = fVar17;
      if (param_4 == 0) {
        fVar18 = *(float *)(param_1 + 0x4fe8) + *(float *)(param_1 + 0x4fe0);
        fVar16 = *(float *)(param_1 + 0x5018) + *(float *)(param_1 + 0x5010);
      }
      else {
        fVar18 = *(float *)(param_1 + 0x4ff0);
        fVar16 = *(float *)(param_1 + 0x5020);
      }
      fVar16 = fVar16 * fVar20;
      if (0.05 <= fVar18 * fVar17) {
        if (fVar16 < 0.05) {
          *pfVar12 = 0.0;
        }
      }
      else {
        if (fVar16 < 0.05) goto LAB_14323dc10;
        pfVar12[-1] = 0.0;
      }
      FUN_143241f10(local_1f8);
      FUN_1432428c0(pfVar12 + -3,*(undefined8 *)(param_1 + 8),local_1f8,param_3);
    }
LAB_14323dc10:
    pfVar12 = pfVar12 + 10;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      if (param_5 == '\0') {
        FUN_14323d110(param_3);
        if (0 < *(int *)(param_1 + 4)) {
          puVar14 = param_3 + 8;
          puVar10 = param_3;
          do {
            uVar8 = uVar1 >> 0x20;
            fVar20 = 0.0;
            if (0 < iVar6) {
              do {
                fVar18 = (1.0 / local_210) * fVar20;
                fVar17 = *(float *)(*puVar10 + (longlong)(int)*puVar14 * 4);
                if (param_4 == 0) {
                  fVar16 = (*(float *)(param_1 + 0x500c) - *(float *)(param_1 + 0x4fdc)) * fVar18 +
                           *(float *)(param_1 + 0x4fdc);
                  *(float *)(param_1 + 0x4ff4) = fVar16;
                  *(float *)(param_1 + 0x4ffc) =
                       (*(float *)(param_1 + 0x5014) - *(float *)(param_1 + 0x4fe4)) * fVar18 +
                       *(float *)(param_1 + 0x4fe4);
                  if (*(char *)(param_1 + 0x68) == '\0') {
                    fVar17 = fVar17 * fVar16;
                  }
                  else {
                    fVar18 = (float)FUN_143241a70(param_1 + 0x4d98,fVar17,uVar15);
                    fVar17 = ((fVar18 - fVar17) * *(float *)(param_1 + 0x74) + fVar17) *
                             *(float *)(param_1 + 0x4ffc) + fVar17 * *(float *)(param_1 + 0x4ff4);
                  }
                }
                else {
                  fVar18 = (*(float *)(param_1 + 0x501c) - *(float *)(param_1 + 0x4fec)) * fVar18 +
                           *(float *)(param_1 + 0x4fec);
                  *(float *)(param_1 + 0x5004) = fVar18;
                  fVar17 = fVar17 * fVar18;
                }
                uVar3 = *puVar14;
                fVar20 = fVar20 + 1.0;
                *(int *)puVar14 = (int)uVar3 + 1;
                *(float *)(*puVar10 + (longlong)(int)uVar3 * 4) = fVar17;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            uVar7 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar7;
            puVar14 = (ulonglong *)((longlong)puVar14 + 4);
            puVar10 = puVar10 + 1;
          } while ((int)uVar7 < *(int *)(param_1 + 4));
        }
        FUN_14323d0d0(param_3);
      }
      return uVar1 >> 0x20;
    }
  } while( true );
}



// FUNCTION 14323ddd0 FUN_14323ddd0 body=133 status=ok
// SIG undefined FUN_14323ddd0(void)

void FUN_14323ddd0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = param_3;
  lVar4 = 0;
  uVar1 = *(ulonglong *)(param_2 + 0xf8);
  param_1[1] = uVar1;
  lVar3 = lVar4;
  if ((int)(uVar1 >> 0x20) != 0) {
    lVar3 = (uVar1 >> 0x20) + param_3;
  }
  lVar2 = lVar4;
  if (*(uint *)(lVar3 + 0x24) != 0) {
    lVar2 = param_3 + (ulonglong)*(uint *)(lVar3 + 0x24);
  }
  param_1[2] = *(longlong *)(lVar2 + 0x58);
  if (*(int *)(param_2 + 0x104) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 0x100);
    param_1[3] = uVar1;
    lVar3 = lVar4;
    if ((int)(uVar1 >> 0x20) != 0) {
      lVar3 = (uVar1 >> 0x20) + param_3;
    }
    if (*(uint *)(lVar3 + 0x24) != 0) {
      lVar4 = param_3 + (ulonglong)*(uint *)(lVar3 + 0x24);
    }
    param_1[4] = *(longlong *)(lVar4 + 0x58);
  }
  if (*(int *)(param_2 + 0x10c) != 0) {
    param_1[5] = *(longlong *)(param_2 + 0x108);
  }
  return;
}



// FUNCTION 14323de60 FUN_14323de60 body=828 status=ok
// SIG undefined FUN_14323de60(void)

void FUN_14323de60(float *param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 local_res8;
  undefined2 uStackX_a;
  uint uStackX_c;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  *(longlong *)(param_1 + 2) = param_2;
  FUN_14323ddd0(param_1 + 4,param_2,param_2);
  puVar8 = (undefined2 *)0x0;
  if (param_3 == -NAN) {
    puVar6 = puVar8;
    if (param_1[7] != 0.0) {
      puVar6 = (undefined2 *)((ulonglong)(uint)param_1[7] + *(longlong *)(param_1 + 2));
    }
    puVar7 = puVar8;
    if (*(uint *)(puVar6 + 0x12) != 0) {
      puVar7 = (undefined2 *)((ulonglong)*(uint *)(puVar6 + 0x12) + *(longlong *)(param_1 + 2));
    }
    puVar6 = puVar8;
    if (*(uint *)(puVar7 + 0x2e) != 0) {
      puVar6 = (undefined2 *)((ulonglong)*(uint *)(puVar7 + 0x2e) + *(longlong *)(param_1 + 2));
    }
    param_3 = (float)(uint)(ushort)puVar6[6];
  }
  param_1[1] = param_3;
  puVar6 = puVar8;
  if (param_1[7] != 0.0) {
    puVar6 = (undefined2 *)((ulonglong)(uint)param_1[7] + *(longlong *)(param_1 + 2));
  }
  puVar7 = puVar8;
  if (*(uint *)(puVar6 + 0x12) != 0) {
    puVar7 = (undefined2 *)((ulonglong)*(uint *)(puVar6 + 0x12) + *(longlong *)(param_1 + 2));
  }
  puVar6 = puVar8;
  if (*(uint *)(puVar7 + 0x2e) != 0) {
    puVar6 = (undefined2 *)((ulonglong)*(uint *)(puVar7 + 0x2e) + *(longlong *)(param_1 + 2));
  }
  *param_1 = (float)*(int *)(puVar6 + 0xe);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x17) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x1b) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x1f) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x21) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0x23) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x27) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0x29) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0x2b) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0x2f) = uVar5;
  param_1[0x31] = *(float *)(param_2 + 0xf0);
  FUN_143240620(param_1);
  puVar6 = puVar8;
  if (param_1[7] != 0.0) {
    puVar6 = (undefined2 *)((ulonglong)(uint)param_1[7] + *(longlong *)(param_1 + 2));
  }
  puVar7 = puVar8;
  if (*(uint *)(puVar6 + 0x12) != 0) {
    puVar7 = (undefined2 *)((ulonglong)*(uint *)(puVar6 + 0x12) + *(longlong *)(param_1 + 2));
  }
  uStackX_c = *(uint *)(puVar7 + 0x2a);
  local_res8 = 1;
  FUN_143243660(param_1 + 0x50,*(undefined8 *)(param_1 + 6),
                CONCAT44(uStackX_c,CONCAT22(uStackX_a,1)),*(undefined8 *)(param_1 + 2),
                CONCAT44(uVar9,param_1[1]),*param_1,(float)(int)param_1[0x1e],param_1 + 0x20);
  fVar1 = param_1[0x16f];
  fVar2 = param_1[0xb];
  param_1[0x10] = fVar1;
  param_1[0x12] = 0.0;
  param_1[0x13] = 1.0;
  param_1[0x13f1] = param_1[0x170];
  *(bool *)(param_1 + 0x12c9) = fVar2 != 0.0;
  if (fVar2 != 0.0) {
    lVar4 = *(longlong *)(param_1 + 2);
    uVar3 = *(uint *)((ulonglong)(uint)fVar2 + 0x24 + lVar4);
    puVar6 = puVar8;
    if (uVar3 != 0) {
      puVar6 = (undefined2 *)(lVar4 + (ulonglong)uVar3);
    }
    FUN_143242f50(&local_res8,(ulonglong)uVar3,param_1[0x31],puVar6,lVar4);
    FUN_143243660(param_1 + 0x188,*(undefined8 *)(param_1 + 10),
                  CONCAT44(uStackX_c,CONCAT22(uStackX_a,local_res8)),*(undefined8 *)(param_1 + 2),
                  param_1[1],*param_1,(float)(int)param_1[0x1e],param_1 + 0x29);
    if (uStackX_c != 0) {
      puVar8 = (undefined2 *)((ulonglong)uStackX_c + *(longlong *)(param_1 + 2));
    }
    FUN_143244170(param_1 + 0x188,*puVar8,2,param_1[0x31],fVar1,param_1[0x13f1]);
  }
  if ((param_1[0xf] != 0.0) && ((ulonglong)(uint)param_1[0xf] + *(longlong *)(param_1 + 2) != 0)) {
    FUN_143242860(param_1 + 0x12ca,*(undefined8 *)(param_1 + 0xe),*(longlong *)(param_1 + 2),
                  param_1[1],1);
    Kiwi::Battle::TestModeUnit::OnStart(param_1 + 0x12ca);
  }
  FUN_143241e80(param_1 + 0x1366);
  FUN_143241c70(param_1 + 0x1366,(float)(int)param_1[0x1b] * param_1[0x10],param_1[0x1c]);
  FUN_143240370(param_1);
  *(undefined8 *)(param_1 + 0x13f7) = *(undefined8 *)(param_1 + 0x1403);
  *(undefined8 *)(param_1 + 0x13f9) = *(undefined8 *)(param_1 + 0x1405);
  *(undefined8 *)(param_1 + 0x13fd) = *(undefined8 *)(param_1 + 0x1403);
  *(undefined8 *)(param_1 + 0x13ff) = *(undefined8 *)(param_1 + 0x1405);
  *(undefined8 *)(param_1 + 0x13fb) = *(undefined8 *)(param_1 + 0x1407);
  *(undefined8 *)(param_1 + 0x1401) = *(undefined8 *)(param_1 + 0x1407);
  return;
}



// FUNCTION 14323e1a0 FUN_14323e1a0 body=1677 status=ok
// SIG undefined FUN_14323e1a0(void)

ulonglong FUN_14323e1a0(longlong param_1,float *param_2,ulonglong *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_214;
  float local_210;
  uint uStack_20c;
  ulonglong local_208;
  float local_200;
  undefined1 local_1e8 [432];
  
  uVar15 = 0;
  if (param_4 == 0) {
    uVar8 = *(uint *)(param_1 + 0x24);
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x34);
  }
  uVar9 = uVar15;
  if (uVar8 != 0) {
    uVar9 = (ulonglong)uVar8 + *(longlong *)(param_1 + 8);
  }
  fVar19 = *param_2;
  local_200 = param_2[1];
  bVar1 = false;
  if (param_4 == 0) {
    fVar17 = *(float *)(param_1 + 0x4fe8) + *(float *)(param_1 + 0x4fe0);
    fVar16 = *(float *)(param_1 + 0x5018) + *(float *)(param_1 + 0x5010);
  }
  else {
    fVar17 = *(float *)(param_1 + 0x4ff0);
    fVar16 = *(float *)(param_1 + 0x5020);
  }
  local_210 = (float)*(undefined8 *)(param_2 + 4);
  uStack_20c = (uint)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  if (0.05 <= fVar19 * fVar17) {
    if (local_200 * fVar16 < 0.05) {
      local_200 = 0.0;
    }
  }
  else {
    if (local_200 * fVar16 < 0.05) goto LAB_14323e5c6;
    fVar19 = 0.0;
  }
  bVar1 = true;
  uVar4 = FUN_14323d110(param_3);
  iVar6 = *(int *)(param_1 + 4);
  local_214 = 0;
  if (0 < iVar6) {
    puVar14 = param_3 + 8;
    uVar7 = uVar15;
    puVar11 = param_3;
    do {
      uVar8 = (uint)uVar7;
      iVar2 = (int)uVar4;
      if (iVar6 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = (uint)*(ushort *)(uVar9 + 0xc);
        if ((iVar6 == 6) && (uVar13 == 6)) {
          if (uVar8 == 5) {
            uVar13 = 3;
          }
          else {
            uVar13 = uVar8;
            if (2 < (int)uVar8) {
              uVar13 = uVar8 + 1;
            }
          }
        }
        else {
          iVar2 = (int)uVar8 / (int)uVar13;
          uVar13 = (int)uVar8 % (int)uVar13;
          uVar8 = local_214;
        }
      }
      fVar17 = param_2[2];
      iVar5 = (int)fVar17;
      if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar17)) {
        auVar21._4_4_ = fVar17;
        auVar21._0_4_ = fVar17;
        auVar21._8_8_ = 0;
        uVar3 = movmskps(iVar2,auVar21);
        fVar17 = (float)(int)(iVar5 - (uVar3 & 1));
      }
      uVar4 = (ulonglong)uStack_20c;
      fVar16 = 0.0;
      uVar3 = 0xffffffff;
      fVar24 = 0.0;
      if (0 < (int)uStack_20c) {
        lVar10 = param_1 + 0x14c0;
        local_208 = uVar4;
        do {
          iVar6 = *(int *)(param_1 + 0x15c0);
          fVar23 = (1.0 / local_210) * fVar24;
          fVar20 = (param_2[3] - param_2[2]) * fVar23 + param_2[2];
          uVar8 = (uint)fVar20;
          fVar22 = fVar16;
          if (uVar3 != uVar8) {
            iVar2 = (uVar8 >> 6) * (uint)*(ushort *)(uVar9 + 0xc) + uVar13;
            if (iVar2 != iVar6) {
              uVar4 = uVar15;
              if (*(uint *)(uVar9 + 0x2c) != 0) {
                uVar4 = (ulonglong)*(uint *)(uVar9 + 0x2c) + *(longlong *)(param_1 + 8);
              }
              FUN_143241f60((uint)(iVar2 * 0x22) + uVar4,lVar10);
              *(int *)(param_1 + 0x15c0) = iVar2;
              iVar6 = iVar2;
            }
            fVar22 = *(float *)(lVar10 + (ulonglong)(uVar8 & 0x3f) * 4);
          }
          uVar3 = uVar8 + 1;
          iVar2 = (uVar3 >> 6) * (uint)*(ushort *)(uVar9 + 0xc) + uVar13;
          if (iVar2 != iVar6) {
            uVar4 = uVar15;
            if (*(uint *)(uVar9 + 0x2c) != 0) {
              uVar4 = (ulonglong)*(uint *)(uVar9 + 0x2c) + *(longlong *)(param_1 + 8);
            }
            FUN_143241f60((uint)(iVar2 * 0x22) + uVar4,lVar10);
            *(int *)(param_1 + 0x15c0) = iVar2;
          }
          fVar18 = fVar20 - fVar17;
          fVar16 = *(float *)(lVar10 + (ulonglong)(uVar3 & 0x3f) * 4);
          if ((1.0 <= fVar18) && (fVar18 = fVar18 + -1.0, 1.0 <= fVar18)) {
            fVar18 = fVar18 + -1.0;
          }
          local_208 = local_208 - 1;
          fVar24 = fVar24 + 1.0;
          iVar6 = (int)*puVar14;
          fVar17 = fVar20 - fVar18;
          *(int *)puVar14 = iVar6 + 1;
          uVar4 = *puVar11;
          *(float *)(uVar4 + (longlong)iVar6 * 4) =
               ((fVar16 - fVar22) * fVar18 + fVar22) * ((local_200 - fVar19) * fVar23 + fVar19) +
               *(float *)(uVar4 + (longlong)iVar6 * 4);
        } while (local_208 != 0);
        iVar6 = *(int *)(param_1 + 4);
        uVar8 = local_214;
      }
      local_214 = uVar8 + 1;
      uVar7 = (ulonglong)local_214;
      puVar14 = (ulonglong *)((longlong)puVar14 + 4);
      puVar11 = puVar11 + 1;
    } while ((int)local_214 < iVar6);
  }
  FUN_14323d0d0(param_3);
LAB_14323e5c6:
  lVar10 = 3;
  pfVar12 = param_2 + 0xf;
  do {
    if (pfVar12[2] != 0.0) {
      fVar19 = (1.0 - *param_2) * pfVar12[-1];
      pfVar12[-1] = fVar19;
      fVar17 = (1.0 - param_2[1]) * *pfVar12;
      *pfVar12 = fVar17;
      if (param_4 == 0) {
        fVar16 = *(float *)(param_1 + 0x4fe8) + *(float *)(param_1 + 0x4fe0);
        fVar24 = *(float *)(param_1 + 0x5018) + *(float *)(param_1 + 0x5010);
      }
      else {
        fVar16 = *(float *)(param_1 + 0x4ff0);
        fVar24 = *(float *)(param_1 + 0x5020);
      }
      fVar24 = fVar24 * fVar17;
      if (0.05 <= fVar16 * fVar19) {
        if (fVar24 < 0.05) {
          *pfVar12 = 0.0;
        }
      }
      else {
        if (fVar24 < 0.05) goto LAB_14323e67a;
        pfVar12[-1] = 0.0;
      }
      bVar1 = true;
      FUN_143241f10(local_1e8);
      FUN_1432428c0(pfVar12 + -3,*(undefined8 *)(param_1 + 8),local_1e8,param_3);
    }
LAB_14323e67a:
    pfVar12 = pfVar12 + 10;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      if (bVar1) {
        FUN_14323d110(param_3);
        if (0 < *(int *)(param_1 + 4)) {
          puVar14 = param_3 + 8;
          puVar11 = param_3;
          do {
            fVar19 = 0.0;
            if (0 < (int)uStack_20c) {
              uVar9 = (ulonglong)uStack_20c;
              do {
                fVar16 = (1.0 / local_210) * fVar19;
                fVar17 = *(float *)(*puVar11 + (longlong)(int)*puVar14 * 4);
                if (param_4 == 0) {
                  fVar24 = (*(float *)(param_1 + 0x500c) - *(float *)(param_1 + 0x4fdc)) * fVar16 +
                           *(float *)(param_1 + 0x4fdc);
                  *(float *)(param_1 + 0x4ff4) = fVar24;
                  *(float *)(param_1 + 0x4ffc) =
                       (*(float *)(param_1 + 0x5014) - *(float *)(param_1 + 0x4fe4)) * fVar16 +
                       *(float *)(param_1 + 0x4fe4);
                  if (*(char *)(param_1 + 0x68) == '\0') {
                    fVar17 = fVar17 * fVar24;
                  }
                  else {
                    fVar16 = (float)FUN_143241a70(param_1 + 0x4d98,fVar17,uVar15);
                    fVar17 = ((fVar16 - fVar17) * *(float *)(param_1 + 0x74) + fVar17) *
                             *(float *)(param_1 + 0x4ffc) + fVar17 * *(float *)(param_1 + 0x4ff4);
                  }
                }
                else {
                  fVar16 = (*(float *)(param_1 + 0x501c) - *(float *)(param_1 + 0x4fec)) * fVar16 +
                           *(float *)(param_1 + 0x4fec);
                  *(float *)(param_1 + 0x5004) = fVar16;
                  fVar17 = fVar17 * fVar16;
                }
                uVar4 = *puVar14;
                fVar19 = fVar19 + 1.0;
                *(int *)puVar14 = (int)uVar4 + 1;
                *(float *)(*puVar11 + (longlong)(int)uVar4 * 4) = fVar17;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            uVar8 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar8;
            puVar14 = (ulonglong *)((longlong)puVar14 + 4);
            puVar11 = puVar11 + 1;
          } while ((int)uVar8 < *(int *)(param_1 + 4));
        }
        FUN_14323d0d0(param_3);
      }
      return (ulonglong)uStack_20c;
    }
  } while( true );
}



// FUNCTION 14323e830 FUN_14323e830 body=1935 status=ok
// SIG undefined FUN_14323e830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14323e830(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_2998;
  undefined8 uStack_2990;
  ulonglong local_2988;
  undefined8 uStack_2980;
  undefined8 local_2978;
  longlong lStack_2970;
  undefined8 local_2968;
  undefined8 uStack_2960;
  undefined8 local_2958;
  longlong lStack_2950;
  undefined2 local_2948;
  undefined2 uStack_2946;
  undefined4 uStack_2944;
  undefined4 uStack_2940;
  undefined4 uStack_293c;
  undefined4 uStack_2938;
  undefined4 uStack_2934;
  undefined4 uStack_2930;
  undefined4 uStack_292c;
  longlong local_2928;
  ulonglong uStack_2920;
  undefined8 local_2918;
  undefined8 uStack_2910;
  undefined8 local_2908;
  longlong lStack_2900;
  ulonglong local_28f8;
  longlong local_28e8 [4];
  undefined8 local_28c8;
  undefined8 local_28a8;
  undefined8 uStack_28a0;
  undefined8 local_2898;
  undefined8 uStack_2890;
  undefined8 local_2888;
  undefined8 uStack_2880;
  undefined8 local_2878;
  undefined8 uStack_2870;
  undefined8 local_2868;
  undefined8 uStack_2860;
  undefined8 local_2858;
  undefined8 uStack_2850;
  undefined8 local_2848;
  undefined8 uStack_2840;
  undefined8 local_2838;
  undefined8 uStack_2830;
  undefined8 local_2828;
  undefined8 uStack_2820;
  undefined8 local_2818;
  undefined8 uStack_2810;
  undefined8 local_2808;
  undefined8 local_27f8;
  undefined8 uStack_27f0;
  ulonglong local_27e8;
  undefined8 uStack_27e0;
  undefined8 local_27d8;
  longlong lStack_27d0;
  undefined8 local_27c8;
  undefined8 uStack_27c0;
  undefined8 local_27b8;
  longlong lStack_27b0;
  undefined8 local_27a8;
  undefined8 uStack_27a0;
  undefined8 local_2798;
  undefined8 uStack_2790;
  longlong local_2788;
  ulonglong uStack_2780;
  undefined8 local_2778;
  undefined8 uStack_2770;
  undefined8 local_2768;
  longlong lStack_2760;
  ulonglong local_2758;
  undefined8 local_26e8;
  undefined8 uStack_26e0;
  ulonglong local_26d8;
  undefined8 uStack_26d0;
  undefined8 local_26c8;
  longlong lStack_26c0;
  undefined8 local_26b8;
  undefined8 uStack_26b0;
  undefined8 local_26a8;
  longlong lStack_26a0;
  undefined8 local_2698;
  undefined8 uStack_2690;
  undefined8 local_2688;
  undefined8 uStack_2680;
  longlong local_2678;
  ulonglong uStack_2670;
  undefined8 local_2668;
  undefined8 uStack_2660;
  undefined8 local_2658;
  longlong lStack_2650;
  ulonglong local_2648;
  undefined8 local_2640;
  undefined8 uStack_2638;
  undefined8 local_2630;
  undefined8 uStack_2628;
  undefined8 local_2620;
  undefined8 uStack_2618;
  undefined8 local_2610;
  undefined8 uStack_2608;
  undefined8 local_2600;
  undefined8 uStack_25f8;
  undefined8 local_25f0;
  undefined8 uStack_25e8;
  undefined8 local_25e0;
  undefined8 uStack_25d8;
  undefined8 local_25d0;
  undefined8 uStack_25c8;
  undefined8 local_25c0;
  undefined8 uStack_25b8;
  undefined8 local_25b0;
  undefined8 uStack_25a8;
  undefined8 local_25a0;
  undefined1 local_2598 [9592];
  undefined8 uStack_20;
  
  uStack_20 = 0x14323e846;
  iVar6 = *(int *)(param_1 + 0x4a4c);
  if ((iVar6 != 0) || (*(int *)(param_1 + 0x4b20) == 0)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 4);
    if (0 < (int)*(uint *)(param_1 + 4)) {
      plVar3 = local_28e8;
      puVar5 = local_2598;
      do {
        *plVar3 = (longlong)puVar5;
        plVar3 = plVar3 + 1;
        puVar5 = puVar5 + 0x4b0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    while (iVar6 != 0) {
      puVar4 = (undefined8 *)(param_1 + 0x15c4 + (longlong)*(int *)(param_1 + 0x4a44) * 0xa8);
      iVar6 = *(int *)(param_1 + 0x4a44) + 1;
      local_28a8 = *puVar4;
      uStack_28a0 = puVar4[1];
      local_2898 = puVar4[2];
      uStack_2890 = puVar4[3];
      local_2888 = puVar4[4];
      uStack_2880 = puVar4[5];
      local_2878 = puVar4[6];
      uStack_2870 = puVar4[7];
      local_2868 = puVar4[8];
      uStack_2860 = puVar4[9];
      local_2858 = puVar4[10];
      uStack_2850 = puVar4[0xb];
      local_2848 = puVar4[0xc];
      uStack_2840 = puVar4[0xd];
      local_2838 = puVar4[0xe];
      uStack_2830 = puVar4[0xf];
      local_2828 = puVar4[0x10];
      uStack_2820 = puVar4[0x11];
      local_2818 = puVar4[0x12];
      uStack_2810 = puVar4[0x13];
      local_2808 = puVar4[0x14];
      *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + -1;
      *(int *)(param_1 + 0x4a44) = iVar6;
      if (0x4f < iVar6) {
        *(undefined4 *)(param_1 + 0x4a44) = 0;
        iVar6 = 0;
      }
      local_2998 = 0;
      uStack_2990 = 0xbf800000bf800000;
      local_2968 = 0;
      uStack_2960 = 0;
      local_2918 = 0;
      uStack_2910 = 0;
      local_2988 = 0xffffffffbf800000;
      lStack_2970._1_7_ = (uint7)((ulonglong)lStack_2970 >> 8) & 0xffffff;
      local_2978 = 0;
      uStack_2980 = 0;
      lStack_2970 = (ulonglong)lStack_2970._1_7_ << 8;
      local_2948 = 1;
      uStack_2944 = 0;
      uStack_2940 = 0;
      local_2958 = 0;
      lStack_2950._1_7_ = (uint7)((ulonglong)lStack_2950 >> 8) & 0xffffff;
      lStack_2950 = (ulonglong)lStack_2950._1_7_ << 8;
      uVar7 = uStack_2920 >> 0x10;
      uStack_2920 = CONCAT62((int6)uVar7,1);
      uStack_2920 = uStack_2920 & 0xffffffff;
      uStack_293c = 0;
      uStack_2938 = 0;
      uStack_2934 = 0;
      uStack_2930 = 0;
      uStack_292c = 0;
      local_2928._1_7_ = (uint7)((ulonglong)local_2928 >> 8) & 0xffffff;
      local_2928 = (ulonglong)local_2928._1_7_ << 8;
      uVar7 = local_28f8 >> 0x10;
      local_28f8 = CONCAT62((int6)uVar7,1);
      local_28f8 = local_28f8 & 0xffffffff;
      local_2908 = 0;
      lStack_2900._1_7_ = (uint7)((ulonglong)lStack_2900 >> 8) & 0xffffff;
      lStack_2900 = (ulonglong)lStack_2900._1_7_ << 8;
      if (*(char *)(param_1 + 0x4b24) != '\0') {
        puVar4 = (undefined8 *)(param_1 + 0x15c4 + (longlong)iVar6 * 0xa8);
        local_2998 = *puVar4;
        uStack_2990 = puVar4[1];
        local_2988 = puVar4[2];
        uStack_2980 = puVar4[3];
        local_2978 = puVar4[4];
        lStack_2970 = puVar4[5];
        local_2968 = puVar4[6];
        uStack_2960 = puVar4[7];
        local_2958 = puVar4[8];
        lStack_2950 = puVar4[9];
        local_2698 = puVar4[10];
        uStack_2690 = puVar4[0xb];
        local_2688 = puVar4[0xc];
        uStack_2680 = puVar4[0xd];
        local_2928 = puVar4[0xe];
        uStack_2920 = puVar4[0xf];
        local_2918 = puVar4[0x10];
        uStack_2910 = puVar4[0x11];
        local_2908 = puVar4[0x12];
        lStack_2900 = puVar4[0x13];
        local_28f8 = puVar4[0x14];
        *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + -1;
        iVar1 = iVar6 + 1;
        if (0x4f < iVar6 + 1) {
          iVar1 = 0;
        }
        *(int *)(param_1 + 0x4a44) = iVar1;
        local_2948 = (undefined2)local_2698;
        uStack_2946 = (undefined2)((ulonglong)local_2698 >> 0x10);
        uStack_2944 = (undefined4)((ulonglong)local_2698 >> 0x20);
        uStack_2940 = (undefined4)uStack_2690;
        uStack_293c = (undefined4)((ulonglong)uStack_2690 >> 0x20);
        uStack_2938 = (undefined4)local_2688;
        uStack_2934 = (undefined4)((ulonglong)local_2688 >> 0x20);
        uStack_2930 = (undefined4)uStack_2680;
        uStack_292c = (undefined4)((ulonglong)uStack_2680 >> 0x20);
        local_26e8 = local_2998;
        uStack_26e0 = uStack_2990;
        local_26d8 = local_2988;
        uStack_26d0 = uStack_2980;
        local_26c8 = local_2978;
        lStack_26c0 = lStack_2970;
        local_26b8 = local_2968;
        uStack_26b0 = uStack_2960;
        local_26a8 = local_2958;
        lStack_26a0 = lStack_2950;
        local_2678 = local_2928;
        uStack_2670 = uStack_2920;
        local_2668 = local_2918;
        uStack_2660 = uStack_2910;
        local_2658 = local_2908;
        lStack_2650 = lStack_2900;
        local_2648 = local_28f8;
      }
      FUN_143240370(param_1);
      if (uStack_2880._4_4_ == 0) {
        uVar2 = FUN_14323e1a0(param_1,&local_28a8,param_2,0);
        if (*(char *)(param_1 + 0x4b24) != '\0') {
          FUN_14323d120(param_1 + 0x9128);
          FUN_14323ce70(param_1 + 0x9128,local_2988 >> 0x20);
          FUN_14323e1a0(param_1,&local_2998,param_1 + 0x9128,1);
          FUN_14323d110(param_2);
          FUN_14323cf60(param_2,param_1 + 0x9128,uVar2);
          FUN_14323d0d0(param_2);
        }
LAB_14323eeda:
        FUN_14323d0a0(param_2,uVar2);
      }
      else {
        if (uStack_2880._4_4_ == 1) {
LAB_14323edb9:
          uVar2 = FUN_14323d6c0(param_1,&local_28a8,param_2,0,0);
          if (*(char *)(param_1 + 0x4b24) != '\0') {
            FUN_14323d6c0(param_1,&local_2998,param_1 + 0x9128,1,0);
            FUN_14323d110(param_2);
            FUN_14323cf60(param_2,param_1 + 0x9128,uVar2);
            FUN_14323d0d0(param_2);
          }
          *(undefined4 *)(param_1 + 0x4ff4) = *(undefined4 *)(param_1 + 0x4fdc);
          *(undefined4 *)(param_1 + 0x4ff8) = *(undefined4 *)(param_1 + 0x4fe0);
          *(undefined4 *)(param_1 + 0x4ffc) = *(undefined4 *)(param_1 + 0x4fe4);
          *(undefined4 *)(param_1 + 0x5000) = *(undefined4 *)(param_1 + 0x4fe8);
          *(undefined8 *)(param_1 + 0x5004) = *(undefined8 *)(param_1 + 0x4fec);
          if ((char)uStack_2880 == '\0') {
            FUN_143241c70(param_1 + 0x4d98,
                          (float)*(int *)(param_1 + 0x6c) * *(float *)(param_1 + 0x40),
                          *(undefined4 *)(param_1 + 0x70));
          }
          goto LAB_14323eeda;
        }
        if (uStack_2880._4_4_ == 2) {
          if (*(char *)(param_1 + 0x4b24) != '\0') {
            FUN_14323d120(param_1 + 0x9128);
          }
          FUN_14323d6c0(param_1,&local_28a8,param_2,0,1);
          puVar4 = (undefined8 *)(param_1 + 0x15c4 + (longlong)*(int *)(param_1 + 0x4a44) * 0xa8);
          local_28a8 = *puVar4;
          uStack_28a0 = puVar4[1];
          local_2898 = puVar4[2];
          uStack_2890 = puVar4[3];
          local_2888 = puVar4[4];
          uStack_2880 = puVar4[5];
          local_2878 = puVar4[6];
          uStack_2870 = puVar4[7];
          local_2868 = puVar4[8];
          uStack_2860 = puVar4[9];
          local_2858 = puVar4[10];
          uStack_2850 = puVar4[0xb];
          local_2848 = puVar4[0xc];
          uStack_2840 = puVar4[0xd];
          local_2838 = puVar4[0xe];
          uStack_2830 = puVar4[0xf];
          local_2828 = puVar4[0x10];
          uStack_2820 = puVar4[0x11];
          local_2818 = puVar4[0x12];
          uStack_2810 = puVar4[0x13];
          local_2808 = puVar4[0x14];
          *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + -1;
          iVar6 = *(int *)(param_1 + 0x4a44) + 1;
          *(int *)(param_1 + 0x4a44) = iVar6;
          if (0x4f < iVar6) {
            *(undefined4 *)(param_1 + 0x4a44) = 0;
          }
          local_2640 = local_28a8;
          uStack_2638 = uStack_28a0;
          local_2630 = local_2898;
          uStack_2628 = uStack_2890;
          local_2620 = local_2888;
          uStack_2618 = uStack_2880;
          local_2610 = local_2878;
          uStack_2608 = uStack_2870;
          local_2600 = local_2868;
          uStack_25f8 = uStack_2860;
          local_25f0 = local_2858;
          uStack_25e8 = uStack_2850;
          local_25e0 = local_2848;
          uStack_25d8 = uStack_2840;
          local_25d0 = local_2838;
          uStack_25c8 = uStack_2830;
          local_25c0 = local_2828;
          uStack_25b8 = uStack_2820;
          local_25b0 = local_2818;
          uStack_25a8 = uStack_2810;
          local_25a0 = local_2808;
          if (*(char *)(param_1 + 0x4b24) != '\0') {
            FUN_14323ce70(param_1 + 0x9128,local_2988 >> 0x20);
            FUN_14323d6c0(param_1,&local_2998,param_1 + 0x9128,1,1);
            puVar4 = (undefined8 *)(param_1 + 0x15c4 + (longlong)*(int *)(param_1 + 0x4a44) * 0xa8);
            local_2998 = *puVar4;
            uStack_2990 = puVar4[1];
            local_2988 = puVar4[2];
            uStack_2980 = puVar4[3];
            local_2978 = puVar4[4];
            lStack_2970 = puVar4[5];
            local_2968 = puVar4[6];
            uStack_2960 = puVar4[7];
            local_2958 = puVar4[8];
            lStack_2950 = puVar4[9];
            local_27a8 = puVar4[10];
            uStack_27a0 = puVar4[0xb];
            local_2798 = puVar4[0xc];
            uStack_2790 = puVar4[0xd];
            local_2928 = puVar4[0xe];
            uStack_2920 = puVar4[0xf];
            local_2918 = puVar4[0x10];
            uStack_2910 = puVar4[0x11];
            local_2908 = puVar4[0x12];
            lStack_2900 = puVar4[0x13];
            local_28f8 = puVar4[0x14];
            *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + -1;
            iVar6 = *(int *)(param_1 + 0x4a44) + 1;
            *(int *)(param_1 + 0x4a44) = iVar6;
            if (0x4f < iVar6) {
              *(undefined4 *)(param_1 + 0x4a44) = 0;
            }
            local_2948 = (undefined2)local_27a8;
            uStack_2946 = (undefined2)((ulonglong)local_27a8 >> 0x10);
            uStack_2944 = (undefined4)((ulonglong)local_27a8 >> 0x20);
            uStack_2940 = (undefined4)uStack_27a0;
            uStack_293c = (undefined4)((ulonglong)uStack_27a0 >> 0x20);
            uStack_2938 = (undefined4)local_2798;
            uStack_2934 = (undefined4)((ulonglong)local_2798 >> 0x20);
            uStack_2930 = (undefined4)uStack_2790;
            uStack_292c = (undefined4)((ulonglong)uStack_2790 >> 0x20);
            local_27f8 = local_2998;
            uStack_27f0 = uStack_2990;
            local_27e8 = local_2988;
            uStack_27e0 = uStack_2980;
            local_27d8 = local_2978;
            lStack_27d0 = lStack_2970;
            local_27c8 = local_2968;
            uStack_27c0 = uStack_2960;
            local_27b8 = local_2958;
            lStack_27b0 = lStack_2950;
            local_2788 = local_2928;
            uStack_2780 = uStack_2920;
            local_2778 = local_2918;
            uStack_2770 = uStack_2910;
            local_2768 = local_2908;
            lStack_2760 = lStack_2900;
            local_2758 = local_28f8;
          }
          goto LAB_14323edb9;
        }
      }
      *(undefined8 *)(param_1 + 0x4fdc) = *(undefined8 *)(param_1 + 0x500c);
      *(undefined8 *)(param_1 + 0x4fe4) = *(undefined8 *)(param_1 + 0x5014);
      *(undefined8 *)(param_1 + 0x4fec) = *(undefined8 *)(param_1 + 0x501c);
      iVar6 = *(int *)(param_1 + 0x4a4c);
    }
    iVar6 = *(int *)(param_1 + 0x4b20);
    while (iVar6 != 0) {
      lVar8 = (longlong)*(int *)(param_1 + 0x4b18);
      plVar3 = (longlong *)(param_1 + 0x4a50 + lVar8 * 0x28);
      local_28e8[0] = *plVar3;
      local_28e8[1] = plVar3[1];
      iVar6 = *(int *)(param_1 + 0x4b18) + 1;
      puVar4 = (undefined8 *)(param_1 + 0x4a60 + lVar8 * 0x28);
      local_28e8[2] = *puVar4;
      local_28e8[3] = puVar4[1];
      local_28c8 = *(undefined8 *)(param_1 + 0x4a70 + lVar8 * 0x28);
      *(int *)(param_1 + 0x4b20) = *(int *)(param_1 + 0x4b20) + -1;
      if (4 < iVar6) {
        iVar6 = 0;
      }
      *(int *)(param_1 + 0x4b18) = iVar6;
      FUN_14323d120(param_2);
      FUN_143241f10(&local_27f8);
      FUN_1432428c0(local_28e8,*(undefined8 *)(param_1 + 8),&local_27f8,param_2);
      iVar6 = *(int *)(param_1 + 0x4b20);
    }
  }
  return;
}



// FUNCTION 14323efc0 FUN_14323efc0 body=3447 status=ok
// SIG undefined FUN_14323efc0(void)

void FUN_14323efc0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  int iVar31;
  int iVar32;
  float local_res8;
  undefined4 uStackX_c;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined4 uVar37;
  longlong in_stack_fffffffffffffc60;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  longlong in_stack_fffffffffffffc80;
  undefined2 uVar41;
  undefined2 uStack_376;
  undefined4 uStack_374;
  undefined4 uVar42;
  undefined4 uStack_36c;
  undefined4 uVar43;
  undefined4 uStack_364;
  undefined4 uVar44;
  undefined4 uStack_35c;
  longlong in_stack_fffffffffffffca8;
  ulonglong in_stack_fffffffffffffcb0;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  uint in_stack_fffffffffffffcd0;
  ulonglong in_stack_fffffffffffffcd8;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  int iStack_254;
  undefined4 uStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
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
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
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
  undefined1 local_d8 [176];
  
  iVar31 = param_2;
LAB_14323f000:
  if (*(int *)(param_1 + 0x4fbc) != 0) goto code_r0x00014323f00a;
  *(undefined4 *)(param_1 + 0x4fbc) = 0;
  FUN_1432430b0(param_1 + 0x140,&local_238,iVar31);
  puVar30 = (undefined8 *)(param_1 + 0x15c4 + (longlong)*(int *)(param_1 + 0x4a48) * 0xa8);
  *puVar30 = local_238;
  puVar30[1] = uStack_230;
  puVar30[2] = local_228;
  puVar30[3] = uStack_220;
  puVar30[4] = CONCAT44(uStack_214,local_218);
  puVar30[5] = CONCAT44(uStack_20c,uStack_210);
  puVar30[6] = local_208;
  puVar30[7] = uStack_200;
  puVar30[8] = local_1f8;
  puVar30[9] = uStack_1f0;
  puVar30[10] = local_1e8;
  puVar30[0xb] = uStack_1e0;
  puVar30[0xc] = local_1d8;
  puVar30[0xd] = uStack_1d0;
  puVar30[0xe] = local_1c8;
  puVar30[0xf] = uStack_1c0;
  *(undefined4 *)(puVar30 + 0x10) = local_1b8;
  *(undefined4 *)((longlong)puVar30 + 0x84) = uStack_1b4;
  *(undefined4 *)(puVar30 + 0x11) = uStack_1b0;
  *(undefined4 *)((longlong)puVar30 + 0x8c) = uStack_1ac;
  *(undefined4 *)(puVar30 + 0x12) = local_1a8;
  *(undefined4 *)((longlong)puVar30 + 0x94) = uStack_1a4;
  *(undefined4 *)(puVar30 + 0x13) = uStack_1a0;
  *(undefined4 *)((longlong)puVar30 + 0x9c) = uStack_19c;
  puVar30[0x14] = local_198;
  *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
  *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
  if (0x4f < *(int *)(param_1 + 0x4a48)) {
    *(undefined4 *)(param_1 + 0x4a48) = 0;
  }
  if (*(char *)(param_1 + 0x4b24) != '\0') {
    puVar30 = (undefined8 *)FUN_1432430b0(param_1 + 0x620,&local_188,iVar31);
    uVar3 = puVar30[1];
    puVar27 = (undefined8 *)(param_1 + 0x15c4 + (longlong)*(int *)(param_1 + 0x4a48) * 0xa8);
    *puVar27 = *puVar30;
    puVar27[1] = uVar3;
    uVar3 = puVar30[3];
    puVar27[2] = puVar30[2];
    puVar27[3] = uVar3;
    uVar3 = puVar30[5];
    puVar27[4] = puVar30[4];
    puVar27[5] = uVar3;
    uVar3 = puVar30[7];
    puVar27[6] = puVar30[6];
    puVar27[7] = uVar3;
    uVar3 = puVar30[9];
    puVar27[8] = puVar30[8];
    puVar27[9] = uVar3;
    uVar3 = puVar30[0xb];
    puVar27[10] = puVar30[10];
    puVar27[0xb] = uVar3;
    uVar3 = puVar30[0xd];
    puVar27[0xc] = puVar30[0xc];
    puVar27[0xd] = uVar3;
    uVar3 = puVar30[0xf];
    puVar27[0xe] = puVar30[0xe];
    puVar27[0xf] = uVar3;
    uVar3 = puVar30[0x11];
    puVar27[0x10] = puVar30[0x10];
    puVar27[0x11] = uVar3;
    uVar3 = puVar30[0x13];
    puVar27[0x12] = puVar30[0x12];
    puVar27[0x13] = uVar3;
    puVar27[0x14] = puVar30[0x14];
    *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
    *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
    if (0x4f < *(int *)(param_1 + 0x4a48)) {
      *(undefined4 *)(param_1 + 0x4a48) = 0;
    }
  }
  if ((char)uStack_210 == '\0') {
    lVar28 = 9;
    iVar31 = iVar31 - (int)((ulonglong)local_228 >> 0x20);
    puVar30 = (undefined8 *)(param_1 + 0xb00);
    puVar27 = (undefined8 *)(param_1 + 0x140);
    do {
      puVar29 = puVar27;
      puVar26 = puVar30;
      uVar3 = puVar29[1];
      uVar33 = puVar29[2];
      uVar34 = puVar29[3];
      *puVar26 = *puVar29;
      puVar26[1] = uVar3;
      uVar3 = puVar29[4];
      uVar35 = puVar29[5];
      puVar26[2] = uVar33;
      puVar26[3] = uVar34;
      uVar33 = puVar29[6];
      uVar34 = puVar29[7];
      puVar26[4] = uVar3;
      puVar26[5] = uVar35;
      uVar3 = puVar29[8];
      uVar35 = puVar29[9];
      puVar26[6] = uVar33;
      puVar26[7] = uVar34;
      uVar33 = puVar29[10];
      uVar34 = puVar29[0xb];
      puVar26[8] = uVar3;
      puVar26[9] = uVar35;
      uVar3 = puVar29[0xc];
      uVar35 = puVar29[0xd];
      puVar26[10] = uVar33;
      puVar26[0xb] = uVar34;
      uVar33 = puVar29[0xe];
      uVar34 = puVar29[0xf];
      puVar26[0xc] = uVar3;
      puVar26[0xd] = uVar35;
      puVar26[0xe] = uVar33;
      puVar26[0xf] = uVar34;
      lVar28 = lVar28 + -1;
      puVar30 = puVar26 + 0x10;
      puVar27 = puVar29 + 0x10;
    } while (lVar28 != 0);
    uVar3 = puVar29[0x11];
    uVar33 = puVar29[0x12];
    uVar34 = puVar29[0x13];
    puVar26[0x10] = puVar29[0x10];
    puVar26[0x11] = uVar3;
    uVar3 = puVar29[0x14];
    uVar35 = puVar29[0x15];
    puVar26[0x12] = uVar33;
    puVar26[0x13] = uVar34;
    uVar33 = puVar29[0x16];
    uVar34 = puVar29[0x17];
    puVar26[0x14] = uVar3;
    puVar26[0x15] = uVar35;
    uVar1 = *(undefined4 *)(puVar29 + 0x18);
    uVar4 = *(undefined4 *)((longlong)puVar29 + 0xc4);
    uVar37 = *(undefined4 *)(puVar29 + 0x19);
    uVar42 = *(undefined4 *)((longlong)puVar29 + 0xcc);
    puVar26[0x16] = uVar33;
    puVar26[0x17] = uVar34;
    uVar43 = *(undefined4 *)(puVar29 + 0x1a);
    uVar44 = *(undefined4 *)((longlong)puVar29 + 0xd4);
    uVar5 = *(undefined4 *)(puVar29 + 0x1b);
    uVar6 = *(undefined4 *)((longlong)puVar29 + 0xdc);
    *(undefined4 *)(puVar26 + 0x18) = uVar1;
    *(undefined4 *)((longlong)puVar26 + 0xc4) = uVar4;
    *(undefined4 *)(puVar26 + 0x19) = uVar37;
    *(undefined4 *)((longlong)puVar26 + 0xcc) = uVar42;
    *(undefined4 *)(puVar26 + 0x1a) = uVar43;
    *(undefined4 *)((longlong)puVar26 + 0xd4) = uVar44;
    *(undefined4 *)(puVar26 + 0x1b) = uVar5;
    *(undefined4 *)((longlong)puVar26 + 0xdc) = uVar6;
    if (*(char *)(param_1 + 0x4b24) != '\0') {
      lVar28 = 9;
      puVar30 = (undefined8 *)(param_1 + 0xfe0);
      puVar27 = (undefined8 *)(param_1 + 0x620);
      do {
        puVar29 = puVar27;
        puVar26 = puVar30;
        uVar3 = puVar29[1];
        uVar33 = puVar29[2];
        uVar34 = puVar29[3];
        *puVar26 = *puVar29;
        puVar26[1] = uVar3;
        uVar3 = puVar29[4];
        uVar35 = puVar29[5];
        puVar26[2] = uVar33;
        puVar26[3] = uVar34;
        uVar33 = puVar29[6];
        uVar34 = puVar29[7];
        puVar26[4] = uVar3;
        puVar26[5] = uVar35;
        uVar3 = puVar29[8];
        uVar35 = puVar29[9];
        puVar26[6] = uVar33;
        puVar26[7] = uVar34;
        uVar33 = puVar29[10];
        uVar34 = puVar29[0xb];
        puVar26[8] = uVar3;
        puVar26[9] = uVar35;
        uVar3 = puVar29[0xc];
        uVar35 = puVar29[0xd];
        puVar26[10] = uVar33;
        puVar26[0xb] = uVar34;
        uVar33 = puVar29[0xe];
        uVar34 = puVar29[0xf];
        puVar26[0xc] = uVar3;
        puVar26[0xd] = uVar35;
        puVar26[0xe] = uVar33;
        puVar26[0xf] = uVar34;
        lVar28 = lVar28 + -1;
        puVar30 = puVar26 + 0x10;
        puVar27 = puVar29 + 0x10;
      } while (lVar28 != 0);
      uVar3 = puVar29[0x11];
      uVar33 = puVar29[0x12];
      uVar34 = puVar29[0x13];
      puVar26[0x10] = puVar29[0x10];
      puVar26[0x11] = uVar3;
      uVar3 = puVar29[0x14];
      uVar35 = puVar29[0x15];
      puVar26[0x12] = uVar33;
      puVar26[0x13] = uVar34;
      uVar33 = puVar29[0x16];
      uVar34 = puVar29[0x17];
      puVar26[0x14] = uVar3;
      puVar26[0x15] = uVar35;
      uVar1 = *(undefined4 *)(puVar29 + 0x18);
      uVar4 = *(undefined4 *)((longlong)puVar29 + 0xc4);
      uVar37 = *(undefined4 *)(puVar29 + 0x19);
      uVar42 = *(undefined4 *)((longlong)puVar29 + 0xcc);
      puVar26[0x16] = uVar33;
      puVar26[0x17] = uVar34;
      uVar43 = *(undefined4 *)(puVar29 + 0x1a);
      uVar44 = *(undefined4 *)((longlong)puVar29 + 0xd4);
      uVar5 = *(undefined4 *)(puVar29 + 0x1b);
      uVar6 = *(undefined4 *)((longlong)puVar29 + 0xdc);
      *(undefined4 *)(puVar26 + 0x18) = uVar1;
      *(undefined4 *)((longlong)puVar26 + 0xc4) = uVar4;
      *(undefined4 *)(puVar26 + 0x19) = uVar37;
      *(undefined4 *)((longlong)puVar26 + 0xcc) = uVar42;
      *(undefined4 *)(puVar26 + 0x1a) = uVar43;
      *(undefined4 *)((longlong)puVar26 + 0xd4) = uVar44;
      *(undefined4 *)(puVar26 + 0x1b) = uVar5;
      *(undefined4 *)((longlong)puVar26 + 0xdc) = uVar6;
    }
    FUN_14323fd40(param_1);
    FUN_143243be0(param_1 + 0xb00,param_1 + 0x140);
    if (*(char *)(param_1 + 0x4b24) != '\0') {
      FUN_143243be0(param_1 + 0xfe0,param_1 + 0x620);
    }
    *(undefined4 *)(param_1 + 0x4fc0) = 0;
    goto LAB_14323f342;
  }
  goto LAB_14323fc10;
code_r0x00014323f00a:
  if (*(int *)(param_1 + 0x4fbc) != 1) goto LAB_14323f000;
LAB_14323f342:
  iVar32 = 0;
  *(undefined4 *)(param_1 + 0x4fbc) = 1;
  FUN_143243390((undefined8 *)(param_1 + 0x140),&local_188,iVar31,*(undefined4 *)(param_1 + 0x4fc0))
  ;
  puVar30 = (undefined8 *)(param_1 + 0xb00);
  uStack_15c = 2;
  FUN_143243390(puVar30,&local_238,iVar31,*(undefined4 *)(param_1 + 0x4fc0));
  uStack_214 = *(undefined4 *)(param_1 + 0x4fc0);
  uStack_20c = 1;
  in_stack_fffffffffffffc60 =
       (ulonglong)((uint7)((ulonglong)in_stack_fffffffffffffc60 >> 8) & 0xffffff) << 8;
  in_stack_fffffffffffffc80 =
       (ulonglong)((uint7)((ulonglong)in_stack_fffffffffffffc80 >> 8) & 0xffffff) << 8;
  in_stack_fffffffffffffcb0 = CONCAT62((int6)(in_stack_fffffffffffffcb0 >> 0x10),1) & 0xffffffff;
  in_stack_fffffffffffffca8 =
       (ulonglong)((uint7)((ulonglong)in_stack_fffffffffffffca8 >> 8) & 0xffffff) << 8;
  in_stack_fffffffffffffcd8 = CONCAT62((int6)(in_stack_fffffffffffffcd8 >> 0x10),1) & 0xffffffff;
  in_stack_fffffffffffffcd0 = in_stack_fffffffffffffcd0 & 0xffffff00;
  uStack_164 = uStack_214;
  if (*(char *)(param_1 + 0x4b24) != '\0') {
    puVar27 = (undefined8 *)
              FUN_143243390(param_1 + 0x620,local_d8,iVar31,uStack_214,0,0xbf800000bf800000,
                            0xffffffffbf800000,0,0,in_stack_fffffffffffffc60,0,0,0,
                            in_stack_fffffffffffffc80,1,0,0,0,in_stack_fffffffffffffca8,
                            in_stack_fffffffffffffcb0,0,0,0,in_stack_fffffffffffffcd0,
                            in_stack_fffffffffffffcd8);
    uVar33 = *puVar27;
    uVar34 = puVar27[1];
    uVar35 = puVar27[2];
    uVar36 = puVar27[3];
    uVar37 = (undefined4)puVar27[4];
    uVar38 = puVar27[6];
    uVar39 = puVar27[7];
    uVar40 = puVar27[8];
    in_stack_fffffffffffffc80 = puVar27[9];
    uVar3 = puVar27[10];
    uVar41 = (undefined2)uVar3;
    uStack_376 = (undefined2)((ulonglong)uVar3 >> 0x10);
    uStack_374 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar42 = (undefined4)puVar27[0xb];
    uStack_36c = (undefined4)((ulonglong)puVar27[0xb] >> 0x20);
    in_stack_fffffffffffffca8 = puVar27[0xe];
    in_stack_fffffffffffffcb0 = puVar27[0xf];
    uVar43 = (undefined4)puVar27[0xc];
    uStack_364 = (undefined4)((ulonglong)puVar27[0xc] >> 0x20);
    uVar44 = (undefined4)puVar27[0xd];
    uStack_35c = (undefined4)((ulonglong)puVar27[0xd] >> 0x20);
    uVar45 = puVar27[0x10];
    uVar46 = puVar27[0x11];
    uVar47 = puVar27[0x12];
    in_stack_fffffffffffffcd0 = *(uint *)(puVar27 + 0x13);
    uVar4 = *(undefined4 *)((longlong)puVar27 + 0x9c);
    in_stack_fffffffffffffcd8 = puVar27[0x14];
    in_stack_fffffffffffffc60 = CONCAT44(2,(int)puVar27[5]);
    puVar27 = (undefined8 *)
              FUN_143243390(param_1 + 0xfe0,local_d8,iVar31,*(undefined4 *)(param_1 + 0x4fc0));
    uVar7 = *puVar27;
    uVar8 = puVar27[1];
    uVar9 = puVar27[2];
    uVar10 = puVar27[3];
    uVar11 = puVar27[6];
    uVar12 = puVar27[7];
    uVar13 = puVar27[8];
    uVar14 = puVar27[9];
    uVar15 = puVar27[10];
    uVar16 = puVar27[0xb];
    uVar17 = puVar27[0xc];
    uVar18 = puVar27[0xd];
    uVar19 = puVar27[0xe];
    uVar20 = puVar27[0xf];
    uVar21 = puVar27[0x10];
    uVar22 = puVar27[0x11];
    uVar23 = puVar27[0x12];
    uVar24 = puVar27[0x13];
    uVar3 = puVar27[0x14];
    uVar1 = *(undefined4 *)(param_1 + 0x4fc0);
    local_2f8 = CONCAT44(uVar1,(int)puVar27[4]);
    uStack_2f0 = CONCAT44(1,(int)puVar27[5]);
    if (*(char *)(param_1 + 0x4b24) != '\0') {
      puVar27 = (undefined8 *)(param_1 + 0x15c4 + (longlong)*(int *)(param_1 + 0x4a48) * 0xa8);
      *puVar27 = local_188;
      puVar27[1] = uStack_180;
      puVar27[2] = local_178;
      puVar27[3] = uStack_170;
      puVar27[4] = CONCAT44(uStack_164,local_168);
      puVar27[5] = CONCAT44(uStack_15c,uStack_160);
      puVar27[6] = local_158;
      puVar27[7] = uStack_150;
      puVar27[8] = local_148;
      puVar27[9] = uStack_140;
      puVar27[10] = local_138;
      puVar27[0xb] = uStack_130;
      puVar27[0xc] = local_128;
      puVar27[0xd] = uStack_120;
      puVar27[0xe] = local_118;
      puVar27[0xf] = uStack_110;
      puVar27[0x10] = local_108;
      puVar27[0x11] = uStack_100;
      puVar27[0x12] = local_f8;
      puVar27[0x13] = uStack_f0;
      puVar27[0x14] = local_e8;
      *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
      *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
      iVar25 = *(int *)(param_1 + 0x4a48);
      if (0x4f < *(int *)(param_1 + 0x4a48)) {
        *(undefined4 *)(param_1 + 0x4a48) = 0;
        iVar25 = iVar32;
      }
      puVar27 = (undefined8 *)(param_1 + 0x15c4 + (longlong)iVar25 * 0xa8);
      *puVar27 = uVar33;
      puVar27[1] = uVar34;
      puVar27[2] = uVar35;
      puVar27[3] = uVar36;
      puVar27[4] = CONCAT44(uVar1,uVar37);
      puVar27[5] = in_stack_fffffffffffffc60;
      puVar27[6] = uVar38;
      puVar27[7] = uVar39;
      puVar27[8] = uVar40;
      puVar27[9] = in_stack_fffffffffffffc80;
      puVar27[10] = CONCAT44(uStack_374,CONCAT22(uStack_376,uVar41));
      puVar27[0xb] = CONCAT44(uStack_36c,uVar42);
      puVar27[0xc] = CONCAT44(uStack_364,uVar43);
      puVar27[0xd] = CONCAT44(uStack_35c,uVar44);
      puVar27[0xe] = in_stack_fffffffffffffca8;
      puVar27[0xf] = in_stack_fffffffffffffcb0;
      puVar27[0x10] = uVar45;
      puVar27[0x11] = uVar46;
      puVar27[0x12] = uVar47;
      puVar27[0x13] = CONCAT44(uVar4,in_stack_fffffffffffffcd0);
      puVar27[0x14] = in_stack_fffffffffffffcd8;
      *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
      *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
      iVar25 = *(int *)(param_1 + 0x4a48);
      if (0x4f < *(int *)(param_1 + 0x4a48)) {
        *(undefined4 *)(param_1 + 0x4a48) = 0;
        iVar25 = iVar32;
      }
      puVar27 = (undefined8 *)(param_1 + 0x15c4 + (longlong)iVar25 * 0xa8);
      *puVar27 = local_238;
      puVar27[1] = uStack_230;
      puVar27[2] = local_228;
      puVar27[3] = uStack_220;
      puVar27[4] = CONCAT44(uStack_214,local_218);
      puVar27[5] = CONCAT44(uStack_20c,uStack_210);
      puVar27[6] = local_208;
      puVar27[7] = uStack_200;
      puVar27[8] = local_1f8;
      puVar27[9] = uStack_1f0;
      puVar27[10] = local_1e8;
      puVar27[0xb] = uStack_1e0;
      puVar27[0xc] = local_1d8;
      puVar27[0xd] = uStack_1d0;
      puVar27[0xe] = local_1c8;
      puVar27[0xf] = uStack_1c0;
      puVar27[0x10] = CONCAT44(uStack_1b4,local_1b8);
      puVar27[0x11] = CONCAT44(uStack_1ac,uStack_1b0);
      puVar27[0x12] = CONCAT44(uStack_1a4,local_1a8);
      puVar27[0x13] = CONCAT44(uStack_19c,uStack_1a0);
      puVar27[0x14] = local_198;
      *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
      *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
      iVar25 = *(int *)(param_1 + 0x4a48);
      if (0x4f < *(int *)(param_1 + 0x4a48)) {
        *(undefined4 *)(param_1 + 0x4a48) = 0;
        iVar25 = iVar32;
      }
      puVar27 = (undefined8 *)(param_1 + 0x15c4 + (longlong)iVar25 * 0xa8);
      *puVar27 = uVar7;
      puVar27[1] = uVar8;
      puVar27[2] = uVar9;
      puVar27[3] = uVar10;
      puVar27[4] = local_2f8;
      puVar27[5] = uStack_2f0;
      puVar27[6] = uVar11;
      puVar27[7] = uVar12;
      puVar27[8] = uVar13;
      puVar27[9] = uVar14;
      puVar27[10] = uVar15;
      puVar27[0xb] = uVar16;
      puVar27[0xc] = uVar17;
      puVar27[0xd] = uVar18;
      local_298 = (undefined4)uVar21;
      uStack_294 = (undefined4)((ulonglong)uVar21 >> 0x20);
      uStack_290 = (undefined4)uVar22;
      uStack_28c = (undefined4)((ulonglong)uVar22 >> 0x20);
      puVar27[0xe] = uVar19;
      puVar27[0xf] = uVar20;
      local_288 = (undefined4)uVar23;
      uStack_284 = (undefined4)((ulonglong)uVar23 >> 0x20);
      uStack_280 = (undefined4)uVar24;
      uStack_27c = (undefined4)((ulonglong)uVar24 >> 0x20);
      *(undefined4 *)(puVar27 + 0x10) = local_298;
      *(undefined4 *)((longlong)puVar27 + 0x84) = uStack_294;
      *(undefined4 *)(puVar27 + 0x11) = uStack_290;
      *(undefined4 *)((longlong)puVar27 + 0x8c) = uStack_28c;
      *(undefined4 *)(puVar27 + 0x12) = local_288;
      *(undefined4 *)((longlong)puVar27 + 0x94) = uStack_284;
      *(undefined4 *)(puVar27 + 0x13) = uStack_280;
      *(undefined4 *)((longlong)puVar27 + 0x9c) = uStack_27c;
      puVar27[0x14] = uVar3;
      *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
      iVar32 = *(int *)(param_1 + 0x4a48);
      *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
      if (0x4f < iVar32) {
        iVar32 = 0;
      }
      *(int *)(param_1 + 0x4a48) = iVar32;
      goto LAB_14323fa06;
    }
  }
  puVar27 = (undefined8 *)(param_1 + 0x15c4 + (longlong)*(int *)(param_1 + 0x4a48) * 0xa8);
  *puVar27 = local_188;
  puVar27[1] = uStack_180;
  puVar27[2] = local_178;
  puVar27[3] = uStack_170;
  puVar27[4] = CONCAT44(uStack_164,local_168);
  puVar27[5] = CONCAT44(uStack_15c,uStack_160);
  puVar27[6] = local_158;
  puVar27[7] = uStack_150;
  puVar27[8] = local_148;
  puVar27[9] = uStack_140;
  puVar27[10] = local_138;
  puVar27[0xb] = uStack_130;
  puVar27[0xc] = local_128;
  puVar27[0xd] = uStack_120;
  puVar27[0xe] = local_118;
  puVar27[0xf] = uStack_110;
  puVar27[0x10] = local_108;
  puVar27[0x11] = uStack_100;
  puVar27[0x12] = local_f8;
  puVar27[0x13] = uStack_f0;
  puVar27[0x14] = local_e8;
  *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
  *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
  iVar25 = *(int *)(param_1 + 0x4a48);
  if (0x4f < *(int *)(param_1 + 0x4a48)) {
    *(undefined4 *)(param_1 + 0x4a48) = 0;
    iVar25 = iVar32;
  }
  puVar27 = (undefined8 *)(param_1 + 0x15c4 + (longlong)iVar25 * 0xa8);
  *puVar27 = local_238;
  puVar27[1] = uStack_230;
  puVar27[2] = local_228;
  puVar27[3] = uStack_220;
  puVar27[4] = CONCAT44(uStack_214,local_218);
  puVar27[5] = CONCAT44(uStack_20c,uStack_210);
  puVar27[6] = local_208;
  puVar27[7] = uStack_200;
  puVar27[8] = local_1f8;
  puVar27[9] = uStack_1f0;
  puVar27[10] = local_1e8;
  puVar27[0xb] = uStack_1e0;
  puVar27[0xc] = local_1d8;
  puVar27[0xd] = uStack_1d0;
  puVar27[0xe] = local_1c8;
  puVar27[0xf] = uStack_1c0;
  *(undefined4 *)(puVar27 + 0x10) = local_1b8;
  *(undefined4 *)((longlong)puVar27 + 0x84) = uStack_1b4;
  *(undefined4 *)(puVar27 + 0x11) = uStack_1b0;
  *(undefined4 *)((longlong)puVar27 + 0x8c) = uStack_1ac;
  *(undefined4 *)(puVar27 + 0x12) = local_1a8;
  *(undefined4 *)((longlong)puVar27 + 0x94) = uStack_1a4;
  *(undefined4 *)(puVar27 + 0x13) = uStack_1a0;
  *(undefined4 *)((longlong)puVar27 + 0x9c) = uStack_19c;
  puVar27[0x14] = local_198;
  *(int *)(param_1 + 0x4a48) = *(int *)(param_1 + 0x4a48) + 1;
  *(int *)(param_1 + 0x4a4c) = *(int *)(param_1 + 0x4a4c) + 1;
  if (0x4f < *(int *)(param_1 + 0x4a48)) {
    *(undefined4 *)(param_1 + 0x4a48) = 0;
  }
LAB_14323fa06:
  if ((char)uStack_160 != '\0') {
    local_res8 = (float)local_178;
    *(float *)(param_1 + 0x4fc0) = local_res8 + *(float *)(param_1 + 0x4fc0);
LAB_14323fc10:
    if ((*(int *)(param_1 + 0x4c58) != 1) ||
       ((fVar2 = *(float *)(param_1 + 0x4fd4), -0.001 < fVar2 && (fVar2 < 0.001)))) {
      *(undefined4 *)(param_1 + 0x4c50) = 0;
    }
    else {
      _local_res8 = CONCAT44(*(undefined4 *)(param_1 + 0x4fd8),
                             *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x48) *
                             fVar2 * *(float *)(param_1 + 0x5c));
      FUN_143242e50(param_1 + 0x4b28,&local_res8);
      iVar31 = 0;
      do {
        iVar32 = iVar31;
        FUN_143242c60(param_1 + 0x4b28,&local_268);
        lVar28 = (longlong)*(int *)(param_1 + 0x4b1c);
        param_2 = param_2 - iStack_254;
        puVar30 = (undefined8 *)(param_1 + 0x4a50 + lVar28 * 0x28);
        *puVar30 = local_268;
        puVar30[1] = uStack_260;
        puVar30 = (undefined8 *)(param_1 + 0x4a60 + lVar28 * 0x28);
        *puVar30 = CONCAT44(iStack_254,local_258);
        puVar30[1] = CONCAT44(iVar32,uStack_250);
        *(undefined8 *)(param_1 + 0x4a70 + lVar28 * 0x28) = local_248;
        *(int *)(param_1 + 0x4b1c) = *(int *)(param_1 + 0x4b1c) + 1;
        *(int *)(param_1 + 0x4b20) = *(int *)(param_1 + 0x4b20) + 1;
        if (4 < *(int *)(param_1 + 0x4b1c)) {
          *(undefined4 *)(param_1 + 0x4b1c) = 0;
        }
        iVar31 = iVar32 + iStack_254;
        iStack_24c = iVar32;
      } while (0 < param_2);
    }
    return;
  }
  iVar31 = iVar31 - (int)((ulonglong)local_228 >> 0x20);
  FUN_143243a90(puVar30);
  lVar28 = 9;
  puVar27 = (undefined8 *)(param_1 + 0x140);
  do {
    puVar29 = puVar30;
    puVar26 = puVar27;
    uVar3 = puVar29[1];
    uVar33 = puVar29[2];
    uVar34 = puVar29[3];
    *puVar26 = *puVar29;
    puVar26[1] = uVar3;
    uVar3 = puVar29[4];
    uVar35 = puVar29[5];
    puVar26[2] = uVar33;
    puVar26[3] = uVar34;
    uVar33 = puVar29[6];
    uVar34 = puVar29[7];
    puVar26[4] = uVar3;
    puVar26[5] = uVar35;
    uVar3 = puVar29[8];
    uVar35 = puVar29[9];
    puVar26[6] = uVar33;
    puVar26[7] = uVar34;
    uVar33 = puVar29[10];
    uVar34 = puVar29[0xb];
    puVar26[8] = uVar3;
    puVar26[9] = uVar35;
    uVar3 = puVar29[0xc];
    uVar35 = puVar29[0xd];
    puVar26[10] = uVar33;
    puVar26[0xb] = uVar34;
    uVar33 = puVar29[0xe];
    uVar34 = puVar29[0xf];
    puVar26[0xc] = uVar3;
    puVar26[0xd] = uVar35;
    puVar26[0xe] = uVar33;
    puVar26[0xf] = uVar34;
    lVar28 = lVar28 + -1;
    puVar27 = puVar26 + 0x10;
    puVar30 = puVar29 + 0x10;
  } while (lVar28 != 0);
  uVar3 = puVar29[0x11];
  uVar33 = puVar29[0x12];
  uVar34 = puVar29[0x13];
  puVar26[0x10] = puVar29[0x10];
  puVar26[0x11] = uVar3;
  uVar3 = puVar29[0x14];
  uVar35 = puVar29[0x15];
  puVar26[0x12] = uVar33;
  puVar26[0x13] = uVar34;
  uVar33 = puVar29[0x16];
  uVar34 = puVar29[0x17];
  puVar26[0x14] = uVar3;
  puVar26[0x15] = uVar35;
  uVar1 = *(undefined4 *)(puVar29 + 0x18);
  uVar4 = *(undefined4 *)((longlong)puVar29 + 0xc4);
  uVar37 = *(undefined4 *)(puVar29 + 0x19);
  uVar42 = *(undefined4 *)((longlong)puVar29 + 0xcc);
  puVar26[0x16] = uVar33;
  puVar26[0x17] = uVar34;
  uVar43 = *(undefined4 *)(puVar29 + 0x1a);
  uVar44 = *(undefined4 *)((longlong)puVar29 + 0xd4);
  uVar5 = *(undefined4 *)(puVar29 + 0x1b);
  uVar6 = *(undefined4 *)((longlong)puVar29 + 0xdc);
  *(undefined4 *)(puVar26 + 0x18) = uVar1;
  *(undefined4 *)((longlong)puVar26 + 0xc4) = uVar4;
  *(undefined4 *)(puVar26 + 0x19) = uVar37;
  *(undefined4 *)((longlong)puVar26 + 0xcc) = uVar42;
  *(undefined4 *)(puVar26 + 0x1a) = uVar43;
  *(undefined4 *)((longlong)puVar26 + 0xd4) = uVar44;
  *(undefined4 *)(puVar26 + 0x1b) = uVar5;
  *(undefined4 *)((longlong)puVar26 + 0xdc) = uVar6;
  if (*(char *)(param_1 + 0x4b24) != '\0') {
    FUN_143243a90((undefined8 *)(param_1 + 0xfe0));
    lVar28 = 9;
    puVar30 = (undefined8 *)(param_1 + 0x620);
    puVar27 = (undefined8 *)(param_1 + 0xfe0);
    do {
      puVar29 = puVar27;
      puVar26 = puVar30;
      uVar3 = puVar29[1];
      uVar33 = puVar29[2];
      uVar34 = puVar29[3];
      *puVar26 = *puVar29;
      puVar26[1] = uVar3;
      uVar3 = puVar29[4];
      uVar35 = puVar29[5];
      puVar26[2] = uVar33;
      puVar26[3] = uVar34;
      uVar33 = puVar29[6];
      uVar34 = puVar29[7];
      puVar26[4] = uVar3;
      puVar26[5] = uVar35;
      uVar3 = puVar29[8];
      uVar35 = puVar29[9];
      puVar26[6] = uVar33;
      puVar26[7] = uVar34;
      uVar33 = puVar29[10];
      uVar34 = puVar29[0xb];
      puVar26[8] = uVar3;
      puVar26[9] = uVar35;
      uVar3 = puVar29[0xc];
      uVar35 = puVar29[0xd];
      puVar26[10] = uVar33;
      puVar26[0xb] = uVar34;
      uVar33 = puVar29[0xe];
      uVar34 = puVar29[0xf];
      puVar26[0xc] = uVar3;
      puVar26[0xd] = uVar35;
      puVar26[0xe] = uVar33;
      puVar26[0xf] = uVar34;
      lVar28 = lVar28 + -1;
      puVar30 = puVar26 + 0x10;
      puVar27 = puVar29 + 0x10;
    } while (lVar28 != 0);
    uVar3 = puVar29[0x11];
    uVar33 = puVar29[0x12];
    uVar34 = puVar29[0x13];
    puVar26[0x10] = puVar29[0x10];
    puVar26[0x11] = uVar3;
    uVar3 = puVar29[0x14];
    uVar35 = puVar29[0x15];
    puVar26[0x12] = uVar33;
    puVar26[0x13] = uVar34;
    uVar33 = puVar29[0x16];
    uVar34 = puVar29[0x17];
    puVar26[0x14] = uVar3;
    puVar26[0x15] = uVar35;
    uVar1 = *(undefined4 *)(puVar29 + 0x18);
    uVar4 = *(undefined4 *)((longlong)puVar29 + 0xc4);
    uVar37 = *(undefined4 *)(puVar29 + 0x19);
    uVar42 = *(undefined4 *)((longlong)puVar29 + 0xcc);
    puVar26[0x16] = uVar33;
    puVar26[0x17] = uVar34;
    uVar3 = puVar29[0x1a];
    uVar33 = puVar29[0x1b];
    *(undefined4 *)(puVar26 + 0x18) = uVar1;
    *(undefined4 *)((longlong)puVar26 + 0xc4) = uVar4;
    *(undefined4 *)(puVar26 + 0x19) = uVar37;
    *(undefined4 *)((longlong)puVar26 + 0xcc) = uVar42;
    puVar26[0x1a] = uVar3;
    puVar26[0x1b] = uVar33;
  }
  *(undefined4 *)(param_1 + 0x4fbc) = 0;
  if (*(char *)(param_1 + 0x13c) != '\0') {
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x138);
    FUN_143240620(param_1);
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  goto LAB_14323f000;
}



// FUNCTION 14323fd40 FUN_14323fd40 body=948 status=ok
// SIG undefined FUN_14323fd40(void)

void FUN_14323fd40(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined4 extraout_EAX;
  uint uVar5;
  ushort *puVar6;
  ulonglong *puVar7;
  ushort *puVar8;
  int iVar9;
  ulonglong uVar10;
  ushort *puVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  fVar16 = param_1[0x16f];
  fVar13 = param_1[0x10];
  if (fVar13 == fVar16) {
    FUN_1432438f0(param_1 + 0x2c0,fVar13,param_1[0x13f1]);
    if (*(char *)(param_1 + 0x12c9) == '\0') {
      return;
    }
    FUN_1432438f0(param_1 + 0x3f8,param_1[0x10],param_1[0x13f1]);
    return;
  }
  fVar2 = param_1[0x169];
  fVar16 = (fVar13 - fVar16) / param_1[0x1f] + fVar16;
  auVar14._0_4_ = *param_1 / (fVar16 * param_1[0x13]);
  fVar13 = _guard_xfg_dispatch_icall_nop(auVar14._0_4_,1.0);
  iVar9 = (int)auVar14._0_4_;
  if (fVar13 <= 0.5) {
    if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar14._0_4_)) {
      auVar15._4_4_ = auVar14._0_4_;
      auVar15._0_4_ = auVar14._0_4_;
      auVar15._8_8_ = 0;
      uVar5 = movmskps(extraout_EAX,auVar15);
      uVar5 = -(uVar5 & 1);
      goto LAB_14323fe39;
    }
  }
  else if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar14._0_4_)) {
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_8_ = 0;
    uVar5 = movmskps(extraout_EAX,auVar14);
    uVar5 = uVar5 & 1 ^ 1;
LAB_14323fe39:
    auVar14._0_4_ = (float)(int)(iVar9 + uVar5);
  }
  puVar11 = (ushort *)0x0;
  lVar4 = *(longlong *)(param_1 + 2);
  iVar9 = 0;
  puVar8 = puVar11;
  if (param_1[7] != 0.0) {
    puVar8 = (ushort *)((ulonglong)(uint)param_1[7] + lVar4);
  }
  puVar6 = puVar11;
  if (*(uint *)(puVar8 + 0x12) != 0) {
    puVar6 = (ushort *)(lVar4 + (ulonglong)*(uint *)(puVar8 + 0x12));
  }
  FUN_143242f50(&local_res8,fVar16,param_1[0x28],puVar6,lVar4);
  fVar13 = param_1[7];
  uVar10 = (ulonglong)(uint)fVar13;
  puVar8 = puVar11;
  if (fVar13 != 0.0) {
    puVar8 = (ushort *)(uVar10 + *(longlong *)(param_1 + 2));
  }
  puVar6 = puVar11;
  if (*(uint *)(puVar8 + 0x12) != 0) {
    puVar6 = (ushort *)((ulonglong)*(uint *)(puVar8 + 0x12) + *(longlong *)(param_1 + 2));
  }
  fVar3 = param_1[0x28];
  puVar8 = puVar11;
  if (local_res8._4_4_ != 0) {
    puVar8 = (ushort *)((ulonglong)local_res8._4_4_ + *(longlong *)(param_1 + 2));
  }
  if ((float)(uint)*puVar8 == fVar2) {
    fVar1 = param_1[0x10];
    if (fVar1 <= fVar16) {
      if (fVar2 != fVar3) {
        puVar8 = puVar11;
        if (fVar13 != 0.0) {
          puVar8 = (ushort *)(uVar10 + *(longlong *)(param_1 + 2));
        }
        puVar6 = puVar11;
        if (*(uint *)(puVar8 + 0x12) != 0) {
          puVar6 = (ushort *)((ulonglong)*(uint *)(puVar8 + 0x12) + *(longlong *)(param_1 + 2));
        }
        uVar5 = *(int *)(puVar6 + 0x2a) + ((int)fVar2 + -1) * 0xc;
        puVar8 = puVar11;
        if (uVar5 != 0) {
          puVar8 = (ushort *)((ulonglong)uVar5 + *(longlong *)(param_1 + 2));
        }
        iVar9 = 1;
        if (fVar1 < *(float *)(puVar8 + 2)) goto LAB_14323ff8b;
      }
LAB_14323ff85:
      iVar9 = 2;
    }
    else {
      if (fVar2 == (float)((*(int *)(puVar6 + 10) - (int)fVar3) + -1)) goto LAB_14323ff85;
      puVar8 = puVar11;
      if (fVar13 != 0.0) {
        puVar8 = (ushort *)(uVar10 + *(longlong *)(param_1 + 2));
      }
      puVar6 = puVar11;
      if (*(uint *)(puVar8 + 0x12) != 0) {
        puVar6 = (ushort *)((ulonglong)*(uint *)(puVar8 + 0x12) + *(longlong *)(param_1 + 2));
      }
      uVar5 = *(int *)(puVar6 + 0x2a) + ((int)fVar2 + 1) * 0xc;
      puVar8 = puVar11;
      if (uVar5 != 0) {
        puVar8 = (ushort *)((ulonglong)uVar5 + *(longlong *)(param_1 + 2));
      }
      if (fVar1 < *(float *)(puVar8 + 2)) goto LAB_14323ff85;
    }
LAB_14323ff8b:
    if (iVar9 == 0) {
      uVar5 = (int)fVar2 + 1;
      uVar12 = 0;
    }
    else {
      if (iVar9 != 1) {
        if (iVar9 == 2) {
          FUN_1432438f0(param_1 + 0x2c0,fVar16,auVar14._0_4_);
          param_1[0x10] = param_1[0x3df];
        }
        goto LAB_14323fffd;
      }
      uVar5 = (int)fVar2 - 1;
      uVar12 = 1;
    }
  }
  else {
    puVar8 = puVar11;
    if (local_res8._4_4_ != 0) {
      puVar8 = (ushort *)((ulonglong)local_res8._4_4_ + *(longlong *)(param_1 + 2));
    }
    uVar5 = (uint)*puVar8;
    uVar12 = 2;
  }
  FUN_143244170(param_1 + 0x2c0,uVar5,uVar12,fVar3,fVar16,auVar14._0_4_);
LAB_14323fffd:
  if (*(char *)(param_1 + 0x12c9) != '\0') {
    lVar4 = *(longlong *)(param_1 + 2);
    puVar8 = puVar11;
    if (param_1[0xb] != 0.0) {
      puVar8 = (ushort *)((ulonglong)(uint)param_1[0xb] + lVar4);
    }
    puVar6 = puVar11;
    if (*(uint *)(puVar8 + 0x12) != 0) {
      puVar6 = (ushort *)(lVar4 + (ulonglong)*(uint *)(puVar8 + 0x12));
    }
    puVar7 = (ulonglong *)FUN_143242f50(local_res10,param_1[0x3df],param_1[0x31],puVar6,lVar4);
    local_res8 = *puVar7;
    uVar5 = (uint)(local_res8 >> 0x20);
    puVar8 = puVar11;
    if (uVar5 != 0) {
      puVar8 = (ushort *)(*(longlong *)(param_1 + 2) + (local_res8 >> 0x20));
    }
    if ((float)(uint)*puVar8 == param_1[0x2a1]) {
      FUN_1432438f0(param_1 + 0x3f8,param_1[0x3df],param_1[0x3e0]);
    }
    else {
      puVar8 = puVar11;
      if (uVar5 != 0) {
        puVar8 = (ushort *)(*(longlong *)(param_1 + 2) + (local_res8 >> 0x20));
      }
      if (uVar5 != 0) {
        puVar11 = (ushort *)((ulonglong)uVar5 + *(longlong *)(param_1 + 2));
      }
      FUN_143244170(param_1 + 0x3f8,*puVar11,(int)param_1[0x2a1] < (int)(uint)*puVar8,param_1[0x31],
                    fVar16,auVar14._0_4_);
    }
  }
  return;
}



// FUNCTION 143240100 FUN_143240100 body=147 status=ok
// SIG undefined FUN_143240100(void)

void FUN_143240100(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_14323ddd0(param_1 + 0x10,param_2,param_2);
  FUN_143243f30(param_1 + 0x140,*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  FUN_143243f30(param_1 + 0x620,*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  FUN_143243f30(param_1 + 0xb00,*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  FUN_143243f30(param_1 + 0xfe0,*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  FUN_143242e10(param_1 + 0x4b28,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1432401a0 FUN_1432401a0 body=188 status=ok
// SIG undefined FUN_1432401a0(void)

void FUN_1432401a0(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    if (param_3 != '\0') {
      uVar4 = param_2[1];
      *(undefined8 *)(param_1 + 0x54) = *param_2;
      *(undefined8 *)(param_1 + 0x5c) = uVar4;
      uVar4 = param_2[3];
      *(undefined8 *)(param_1 + 100) = param_2[2];
      *(undefined8 *)(param_1 + 0x6c) = uVar4;
      uVar4 = param_2[5];
      *(undefined8 *)(param_1 + 0x74) = param_2[4];
      *(undefined8 *)(param_1 + 0x7c) = uVar4;
      uVar4 = param_2[7];
      *(undefined8 *)(param_1 + 0x84) = param_2[6];
      *(undefined8 *)(param_1 + 0x8c) = uVar4;
      uVar4 = param_2[9];
      *(undefined8 *)(param_1 + 0x94) = param_2[8];
      *(undefined8 *)(param_1 + 0x9c) = uVar4;
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x54);
      uVar2 = *(undefined4 *)(param_2 + 0xb);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_1 + 0xa8) = uVar1;
      *(undefined4 *)(param_1 + 0xac) = uVar2;
      *(undefined4 *)(param_1 + 0xb0) = uVar3;
      uVar1 = *(undefined4 *)((longlong)param_2 + 100);
      uVar2 = *(undefined4 *)(param_2 + 0xd);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0xb8) = uVar1;
      *(undefined4 *)(param_1 + 0xbc) = uVar2;
      *(undefined4 *)(param_1 + 0xc0) = uVar3;
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xe);
      FUN_143240620();
      return;
    }
    *(undefined1 *)(param_1 + 0x13c) = 1;
    uVar4 = param_2[1];
    *(undefined8 *)(param_1 + 200) = *param_2;
    *(undefined8 *)(param_1 + 0xd0) = uVar4;
    uVar4 = param_2[3];
    *(undefined8 *)(param_1 + 0xd8) = param_2[2];
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
    uVar4 = param_2[5];
    *(undefined8 *)(param_1 + 0xe8) = param_2[4];
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
    uVar4 = param_2[7];
    *(undefined8 *)(param_1 + 0xf8) = param_2[6];
    *(undefined8 *)(param_1 + 0x100) = uVar4;
    uVar4 = param_2[9];
    *(undefined8 *)(param_1 + 0x108) = param_2[8];
    *(undefined8 *)(param_1 + 0x110) = uVar4;
    uVar4 = param_2[0xb];
    *(undefined8 *)(param_1 + 0x118) = param_2[10];
    *(undefined8 *)(param_1 + 0x120) = uVar4;
    uVar4 = param_2[0xd];
    *(undefined8 *)(param_1 + 0x128) = param_2[0xc];
    *(undefined8 *)(param_1 + 0x130) = uVar4;
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0xe);
  }
  return;
}



// FUNCTION 143240260 FUN_143240260 body=272 status=ok
// SIG undefined FUN_143240260(void)

void FUN_143240260(float *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 extraout_EAX;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  param_1[0x14] = *(float *)(param_2 + 2);
  fVar8 = param_1[7];
  uVar5 = 0;
  uVar3 = uVar5;
  uVar7 = uVar5;
  if (fVar8 != 0.0) {
    uVar3 = *(longlong *)(param_1 + 2) + (ulonglong)(uint)fVar8;
    uVar7 = (ulonglong)(uint)fVar8;
  }
  uVar6 = uVar5;
  if (*(uint *)(uVar3 + 0x24) != 0) {
    uVar6 = (ulonglong)*(uint *)(uVar3 + 0x24) + *(longlong *)(param_1 + 2);
  }
  uVar3 = uVar5;
  if (fVar8 != 0.0) {
    uVar3 = *(longlong *)(param_1 + 2) + uVar7;
  }
  if (*(uint *)(uVar3 + 0x24) != 0) {
    uVar5 = (ulonglong)*(uint *)(uVar3 + 0x24) + *(longlong *)(param_1 + 2);
  }
  fVar8 = param_1[0x10];
  auVar9._0_4_ = *(float *)(uVar5 + 0x20);
  if ((fVar8 <= *(float *)(uVar5 + 0x20)) &&
     (auVar9._0_4_ = *(float *)(uVar6 + 0x1c), *(float *)(uVar6 + 0x1c) <= fVar8)) {
    auVar9._0_4_ = fVar8;
  }
  param_1[0x10] = auVar9._0_4_;
  auVar9._0_4_ = *param_1 / (auVar9._0_4_ * *(float *)((longlong)param_2 + 0xc));
  fVar8 = _guard_xfg_dispatch_icall_nop(auVar9._0_4_,1.0);
  iVar4 = (int)auVar9._0_4_;
  if (fVar8 <= 0.5) {
    if ((iVar4 == -0x80000000) || ((float)iVar4 == auVar9._0_4_)) goto LAB_14324035d;
    auVar10._4_4_ = auVar9._0_4_;
    auVar10._0_4_ = auVar9._0_4_;
    auVar10._8_8_ = 0;
    uVar2 = movmskps(extraout_EAX,auVar10);
    uVar2 = -(uVar2 & 1);
  }
  else {
    if ((iVar4 == -0x80000000) || ((float)iVar4 == auVar9._0_4_)) goto LAB_14324035d;
    auVar9._4_4_ = auVar9._0_4_;
    auVar9._8_8_ = 0;
    uVar2 = movmskps(extraout_EAX,auVar9);
    uVar2 = uVar2 & 1 ^ 1;
  }
  auVar9._0_4_ = (float)(int)(iVar4 + uVar2);
LAB_14324035d:
  param_1[0x13f1] = auVar9._0_4_;
  return;
}



// FUNCTION 143240370 FUN_143240370 body=683 status=ok
// SIG undefined FUN_143240370(void)

void FUN_143240370(longlong param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar6 = 0;
  fVar13 = 0.0;
  fVar12 = 0.0;
  fVar9 = 1.0;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar4 = uVar6;
    if (*(uint *)(param_1 + 0x2c) != 0) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c) + *(longlong *)(param_1 + 8);
    }
    fVar8 = fRam000000000000001c;
    if (*(uint *)(uVar4 + 0x24) != 0) {
      fVar8 = *(float *)((ulonglong)*(uint *)(uVar4 + 0x24) + *(longlong *)(param_1 + 8) + 0x1c);
    }
  }
  else {
    fVar8 = 0.0;
    if (*(int *)(param_1 + 0x60) == 1) {
      uVar2 = *(uint *)(param_1 + 0x1c);
      uVar4 = uVar6;
      uVar3 = uVar6;
      if (uVar2 != 0) {
        uVar4 = *(longlong *)(param_1 + 8) + (ulonglong)uVar2;
        uVar3 = (ulonglong)uVar2;
      }
      uVar5 = uVar6;
      if (*(uint *)(uVar4 + 0x24) != 0) {
        uVar5 = (ulonglong)*(uint *)(uVar4 + 0x24) + *(longlong *)(param_1 + 8);
      }
      uVar4 = uVar6;
      if (uVar2 != 0) {
        uVar4 = *(longlong *)(param_1 + 8) + uVar3;
      }
      uVar7 = uVar6;
      if (*(uint *)(uVar4 + 0x24) != 0) {
        uVar7 = (ulonglong)*(uint *)(uVar4 + 0x24) + *(longlong *)(param_1 + 8);
      }
      uVar4 = uVar6;
      if (uVar2 != 0) {
        uVar4 = *(longlong *)(param_1 + 8) + uVar3;
      }
      uVar3 = uVar6;
      if (*(uint *)(uVar4 + 0x24) != 0) {
        uVar3 = (ulonglong)*(uint *)(uVar4 + 0x24) + *(longlong *)(param_1 + 8);
      }
      fVar8 = (*(float *)(uVar5 + 0x20) - *(float *)(uVar7 + 0x1c)) * *(float *)(param_1 + 100) +
              *(float *)(uVar3 + 0x1c);
    }
  }
  if ((param_2 < fVar8) && (*(int *)(param_1 + 0x3c) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x1c);
    uVar4 = uVar6;
    uVar3 = uVar6;
    if (uVar2 != 0) {
      uVar4 = *(longlong *)(param_1 + 8) + (ulonglong)uVar2;
      uVar3 = (ulonglong)uVar2;
    }
    uVar5 = uVar6;
    if (*(uint *)(uVar4 + 0x24) != 0) {
      uVar5 = (ulonglong)*(uint *)(uVar4 + 0x24) + *(longlong *)(param_1 + 8);
    }
    uVar4 = uVar6;
    if (uVar2 != 0) {
      uVar4 = *(longlong *)(param_1 + 8) + uVar3;
    }
    uVar3 = uVar6;
    if (*(uint *)(uVar4 + 0x24) != 0) {
      uVar3 = (ulonglong)*(uint *)(uVar4 + 0x24) + *(longlong *)(param_1 + 8);
    }
    fVar9 = (param_2 - *(float *)(uVar5 + 0x1c)) / (fVar8 - *(float *)(uVar3 + 0x1c));
    fVar13 = (float)FUN_143242400(1.0 - fVar9,2);
    fVar9 = (float)FUN_143242400(fVar9,2);
    uVar4 = uVar6;
    if (*(uint *)(param_1 + 0x1c) != 0) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x1c) + *(longlong *)(param_1 + 8);
    }
    if (*(uint *)(uVar4 + 0x24) != 0) {
      uVar6 = (ulonglong)*(uint *)(uVar4 + 0x24) + *(longlong *)(param_1 + 8);
    }
    fVar12 = param_2 / *(float *)(uVar6 + 0x1c);
  }
  fVar8 = *(float *)(param_1 + 0x44);
  fVar1 = *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x4fc8) = fVar8;
  *(float *)(param_1 + 0x4fd8) = fVar12;
  fVar12 = *(float *)(param_1 + 0x48);
  fVar9 = (1.0 - fVar8) * fVar9;
  fVar10 = fVar8 * *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x5010) = fVar10;
  fVar11 = fVar9 * *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x4fcc) = fVar9;
  *(float *)(param_1 + 0x4fd0) = fVar9;
  *(float *)(param_1 + 0x500c) = fVar1 * fVar10 * fVar12;
  *(float *)(param_1 + 0x4fd4) = (1.0 - fVar8) * fVar13;
  fVar13 = fVar8 * *(float *)(param_1 + 0xb0) + fVar9 * *(float *)(param_1 + 0xac);
  *(float *)(param_1 + 0x5018) = fVar11;
  *(float *)(param_1 + 0x5014) = fVar1 * fVar11 * fVar12;
  *(float *)(param_1 + 0x5020) = fVar13;
  *(float *)(param_1 + 0x501c) = fVar1 * fVar13 * fVar12;
  return;
}



// FUNCTION 143240620 FUN_143240620 body=265 status=ok
// SIG undefined FUN_143240620(void)

void FUN_143240620(float *param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  fVar1 = param_1[0x1e];
  lVar5 = 0;
  fVar6 = fVar1;
  if (param_1[7] != 0.0) {
    uVar2 = *(uint *)((ulonglong)(uint)param_1[7] + 0x24 + *(longlong *)(param_1 + 2));
    lVar4 = lVar5;
    if (uVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 2) + (ulonglong)uVar2;
    }
    fVar3 = (float)((int)(*param_1 / *(float *)(lVar4 + 0x20)) + -5);
    if ((int)fVar3 <= (int)fVar1) {
      fVar6 = fVar3;
    }
  }
  if (param_1[0xb] != 0.0) {
    uVar2 = *(uint *)((ulonglong)(uint)param_1[0xb] + 0x24 + *(longlong *)(param_1 + 2));
    if (uVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 2) + (ulonglong)uVar2;
    }
    fVar3 = (float)((int)(*param_1 / *(float *)(lVar5 + 0x20)) + -5);
    if ((int)fVar3 <= (int)fVar6) {
      fVar6 = fVar3;
    }
  }
  if (299 < (int)fVar6) {
    fVar6 = 4.2039e-43;
  }
  if (fVar6 != fVar1) {
    param_1[0x1e] = fVar6;
  }
  FUN_143243f90(param_1 + 0x50,param_1 + 0x20);
  FUN_143243f90(param_1 + 0x188,param_1 + 0x29);
  FUN_143243f90(param_1 + 0x2c0,param_1 + 0x20);
  FUN_143243f90(param_1 + 0x3f8,param_1 + 0x29);
  return;
}



// FUNCTION 143240730 FUN_143240730 body=429 status=ok
// SIG undefined FUN_143240730(void)

void FUN_143240730(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 local_98 [100];
  int local_34;
  
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x4a44) = 0;
  *(undefined4 *)(param_1 + 0x4a4c) = 0;
  iVar3 = *(int *)(param_2 + 0x60);
  uVar2 = iVar3 >> 0x1f & 0x1ff;
  uVar1 = iVar3 + uVar2;
  FUN_14323ce70(param_2,0xffffffff);
  uVar6 = uVar5;
  for (iVar7 = (uint)((uVar1 & 0x1ff) != uVar2) + ((int)uVar1 >> 9); 0 < iVar7; iVar7 = iVar7 + -1)
  {
    iVar4 = 0x200;
    if (iVar3 < 0x201) {
      iVar4 = iVar3;
    }
    FUN_14323cd80(local_98,param_2,uVar6,*(int *)(param_2 + 100) * iVar4);
    if (local_34 < 1) {
      local_d8 = 0;
    }
    else {
      local_d8 = param_1 + 0x5024;
    }
    local_d0 = param_1 + 0x5824;
    if (local_34 < 2) {
      local_d0 = uVar5;
    }
    local_c8 = param_1 + 0x6024;
    if (local_34 < 3) {
      local_c8 = uVar5;
    }
    local_c0 = param_1 + 0x6824;
    if (local_34 < 4) {
      local_c0 = uVar5;
    }
    local_b8 = param_1 + 0x7024;
    if (local_34 < 5) {
      local_b8 = uVar5;
    }
    local_b0 = param_1 + 0x7824;
    if (local_34 < 6) {
      local_b0 = uVar5;
    }
    local_a8 = param_1 + 0x8024;
    if (local_34 < 7) {
      local_a8 = uVar5;
    }
    local_a0 = param_1 + 0x8824;
    if (local_34 < 8) {
      local_a0 = uVar5;
    }
    FUN_14323ced0(param_1 + 0x9128,local_34,&local_d8,local_34 * iVar4);
    FUN_14323efc0(param_1,iVar4);
    FUN_14323e830(param_1,local_98);
    uVar6 = (ulonglong)(uint)((int)uVar6 + iVar4);
    iVar3 = iVar3 - iVar4;
  }
  return;
}



// FUNCTION 1432408e0 FUN_1432408e0 body=590 status=ok
// SIG undefined FUN_1432408e0(void)

undefined8 * FUN_1432408e0(undefined8 *param_1)

{
  undefined4 uStack_1c;
  undefined7 uStack_17;
  
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  param_1[3] = 0;
  FUN_1432423d0((undefined4 *)((longlong)param_1 + 0x24));
  FUN_1432423d0(param_1 + 7);
  FUN_1432423d0((undefined4 *)((longlong)param_1 + 0x4c));
  FUN_1432423d0(param_1 + 0xc);
  FUN_1432423f0((undefined4 *)((longlong)param_1 + 0x74));
  FUN_1432423f0((undefined4 *)((longlong)param_1 + 0x8c));
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x15] = 0;
  FUN_1432423d0(param_1 + 0x16);
  FUN_1432423d0((undefined4 *)((longlong)param_1 + 0xc4));
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 1;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 1;
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x3f000000;
  param_1[0x2f] = 0x3f19999a;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x28) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x29) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x41000000;
  *(undefined4 *)(param_1 + 0x2b) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x41400000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x2d) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x27) = 0x440001;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
  param_1[2] = CONCAT71(uStack_17,1);
  *param_1 = param_1;
  param_1[3] = param_1;
  param_1[0x15] = param_1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 143240b30 FUN_143240b30 body=146 status=ok
// SIG undefined FUN_143240b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143240b30(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  lVar4 = 0;
  *(undefined8 *)(param_1 + 0x138) = *param_2;
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x148) = param_2[2];
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x158) = param_2[4];
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x168) = param_2[6];
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 8);
  lVar2 = lVar4;
  if (*(uint *)(param_3 + 0xfc) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_3 + 0xfc) + param_3;
  }
  lVar3 = lVar4;
  if (*(uint *)(lVar2 + 0x24) != 0) {
    lVar3 = param_3 + (ulonglong)*(uint *)(lVar2 + 0x24);
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar3 + 0x1c);
  if (*(uint *)(param_3 + 0xfc) != 0) {
    lVar4 = (ulonglong)*(uint *)(param_3 + 0xfc) + param_3;
  }
  if (*(uint *)(lVar4 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0xfc) =
         *(undefined4 *)((ulonglong)*(uint *)(lVar4 + 0x24) + 0x20 + param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0xfc) = _DAT_00000020;
  return;
}



// FUNCTION 143240bd0 FUN_143240bd0 body=15 status=ok
// SIG undefined FUN_143240bd0(void)

void FUN_143240bd0(longlong param_1)

{
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 0x18) = param_1;
  *(longlong *)(param_1 + 0xa8) = param_1;
  return;
}



// FUNCTION 143240be0 FUN_143240be0 body=85 status=ok
// SIG undefined FUN_143240be0(void)

void FUN_143240be0(undefined4 *param_1)

{
  undefined4 uStack_1c;
  undefined7 uStack_17;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = uStack_1c;
  *(ulonglong *)(param_1 + 4) = CONCAT71(uStack_17,1);
  *(undefined4 **)param_1 = param_1;
  *(undefined4 **)(param_1 + 6) = param_1;
  *(undefined4 **)(param_1 + 0x2a) = param_1;
  *(undefined8 *)(param_1 + 0x5f) = 0;
  param_1[0x38] = 0;
  return;
}



// FUNCTION 143240c40 FUN_143240c40 body=51 status=ok
// SIG undefined FUN_143240c40(void)

undefined4 * FUN_143240c40(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  uVar4 = *(undefined4 *)(param_1 + 0xf0);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = *(undefined4 *)(param_1 + 0xf4);
  FUN_143240c80(uVar1,param_3,param_2);
  return param_2;
}



// FUNCTION 143240c80 FUN_143240c80 body=743 status=ok
// SIG undefined FUN_143240c80(void)

void FUN_143240c80(longlong param_1,float *param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = (float)param_4;
  pfVar1 = (float *)(param_1 + 0x100);
  *(float *)(param_1 + 0x17c) = fVar10 + *(float *)(param_1 + 0x17c);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)pfVar1;
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x118);
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar4 = param_2[3];
  *pfVar1 = *param_2;
  *(float *)(param_1 + 0x104) = fVar8;
  *(float *)(param_1 + 0x108) = fVar9;
  *(float *)(param_1 + 0x10c) = fVar4;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 4);
  *(float *)(param_1 + 0x118) = param_2[6];
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x184);
  iVar2 = *(int *)(param_1 + 0xe0);
  if (iVar2 == 0) {
    FUN_143240f70(param_1,pfVar1,fVar10);
  }
  else if (iVar2 == 1) {
    FUN_143241290(param_1 + 0x18,pfVar1,fVar10);
  }
  else if (iVar2 == 2) {
    if (*(int *)(param_1 + 0xd8) == 0) {
      uVar7 = FUN_143242780(param_1 + 0xb0,param_4);
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x184) = uVar7;
      uVar7 = FUN_143242780(param_1 + 0xc4,param_4);
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x188) = uVar7;
      if (0.2 < *(float *)(param_1 + 0x108) || *(float *)(param_1 + 0x108) == 0.2) {
        cVar6 = FUN_143242730(param_1 + 0xb0);
        if (cVar6 != '\0') {
          *(undefined4 *)(param_1 + 0xd8) = 1;
          FUN_1432426c0(param_1 + 0xb0,*(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x184),
                        *(undefined4 *)(param_1 + 0x104),
                        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x178),1);
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0xa8);
        *(undefined4 *)(param_1 + 0xd8) = 1;
        fVar9 = (*(float *)(lVar3 + 0x170) - *(float *)(param_1 + 0x104)) /
                *(float *)(lVar3 + 0x170);
        fVar8 = 0.0;
        if ((fVar9 <= 0.0) && (fVar8 = fVar9, fVar9 <= 1.0)) {
          fVar8 = 1.0;
        }
        FUN_1432426c0(param_1 + 0xb0,*(undefined4 *)(lVar3 + 0x184),*(float *)(param_1 + 0x104),
                      fVar8 * *(float *)(lVar3 + 0x174),1);
      }
    }
    else if (*(int *)(param_1 + 0xd8) == 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x188) = *(undefined4 *)(param_1 + 0x108);
      uVar7 = FUN_143242790(param_1 + 0xb0,param_4,*(undefined4 *)(param_1 + 0x104));
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x184) = uVar7;
      cVar6 = FUN_143242730(param_1 + 0xb0);
      if (cVar6 != '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
      }
    }
  }
  fVar8 = *(float *)(param_1 + 0x18c);
  param_3[2] = fVar8;
  param_3[2] = fVar8 * *pfVar1;
  fVar8 = *(float *)(param_1 + 0x188);
  fVar9 = param_3[1];
  if (fVar8 - fVar9 <= 0.3) {
    if (fVar8 - fVar9 < -0.3) {
      fVar8 = fVar9 - 0.3;
    }
  }
  else {
    fVar8 = fVar9 + 0.3;
  }
  param_3[1] = fVar8;
  *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 400);
  param_3[3] = *(float *)(param_1 + 0x114);
  *param_3 = (*(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0xf8)) * *(float *)(param_1 + 0x184)
             + *(float *)(param_1 + 0xf8);
  *(float *)(param_1 + 0x180) = fVar10;
  uVar5 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0xec) = uVar5;
  *(float *)(param_1 + 0xf4) = param_3[4];
  return;
}



// FUNCTION 143240f70 FUN_143240f70 body=794 status=ok
// SIG undefined FUN_143240f70(void)

void FUN_143240f70(longlong *param_1,longlong param_2,float param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  float fVar6;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x118) == '\0') {
    *(undefined4 *)(lVar2 + 0x18c) = 0x3f800000;
    *(undefined4 *)(*param_1 + 0x184) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*param_1 + 0x188) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x128) < *(int *)(lVar2 + 0x10c)) {
      bVar4 = true;
    }
    else {
      if (*(int *)(lVar2 + 0x128) <= *(int *)(lVar2 + 0x10c)) {
        FUN_143242750(lVar2 + 0x188,*(undefined4 *)(param_2 + 8),DAT_1467c82f0,
                      DAT_1467c82f0 ^ 0x80000000);
        *(undefined4 *)(*param_1 + 0x18c) = 0x3f800000;
        *(undefined4 *)(*param_1 + 0x184) = *(undefined4 *)(param_2 + 4);
        if (0.3 < *(float *)(param_2 + 8) || *(float *)(param_2 + 8) == 0.3) {
          *(undefined4 *)(param_1 + 1) = 0;
          fVar6 = 0.0;
        }
        else {
          fVar6 = param_3 + *(float *)(param_1 + 1);
          *(float *)(param_1 + 1) = fVar6;
        }
        lVar2 = *param_1;
        if ((0.05 < *(float *)(lVar2 + 0x104) || *(float *)(lVar2 + 0x104) == 0.05) || (fVar6 < 1.0)
           ) {
          if (((char)param_1[2] != '\0') &&
             ((0.3 < *(float *)(param_2 + 8) && (*(char *)(lVar2 + 0x118) != '\0')))) {
            lVar3 = *(longlong *)(lVar2 + 0xa8);
            FUN_1432426c0(lVar2 + 0xb0,*(undefined4 *)(lVar3 + 0x184),*(undefined4 *)(lVar3 + 0x170)
                          ,*(undefined4 *)(lVar3 + 0x174),1);
            FUN_1432426c0(lVar2 + 0xc4,*(undefined4 *)(*(longlong *)(lVar2 + 0xa8) + 0x188),
                          0x3f800000,*(undefined4 *)(*(longlong *)(lVar2 + 0xa8) + 0x174),0);
            *(undefined4 *)(lVar2 + 0xd8) = 0;
            *(undefined4 *)(*param_1 + 0xe0) = 2;
          }
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
          *(float *)((longlong)param_1 + 0xc) = param_3 + *(float *)((longlong)param_1 + 0xc);
        }
        *(undefined1 *)(param_1 + 2) = uVar5;
        return;
      }
      bVar4 = false;
    }
    lVar3 = *(longlong *)(lVar2 + 0x18);
    if (bVar4) {
      *(undefined4 *)(lVar2 + 0x20) = 1;
      uVar1 = *(undefined4 *)(lVar3 + 0x104);
      FUN_1432426c0(lVar2 + 0x24,*(undefined4 *)(lVar3 + 0x184),uVar1,*(undefined4 *)(lVar3 + 0x13c)
                    ,0);
      FUN_1432426c0(lVar2 + 0x38,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x188),0,0x3dcccccd,0
                   );
      FUN_1432426c0(lVar2 + 0x4c,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x18c),0x3f800000,
                    0x3dcccccd,0);
      lVar3 = *(longlong *)(lVar2 + 0x18);
      FUN_1432426c0(lVar2 + 0x60,*(undefined4 *)(lVar3 + 0x184),uVar1,
                    *(float *)(lVar3 + 0x140) + *(float *)(lVar3 + 0x13c),0);
      *(undefined1 *)(*(longlong *)(lVar2 + 0x18) + 400) = 1;
    }
    else {
      *(undefined4 *)(lVar2 + 0x20) = 3;
      FUN_1432426c0(lVar2 + 0x24,*(undefined4 *)(lVar3 + 0x184),0x3f800000,
                    *(float *)(lVar3 + 0x168) * 0.5,0);
      FUN_1432426c0(lVar2 + 0x38,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x188),0x3f800000,
                    *(float *)(*(longlong *)(lVar2 + 0x18) + 0x168) * 0.5,0);
      FUN_1432426c0(lVar2 + 0x4c,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x18c),0x3f800000,
                    0x3dcccccd,0);
    }
    *(undefined4 *)(*param_1 + 0xe0) = 1;
  }
  return;
}



// FUNCTION 143241290 FUN_143241290 body=1075 status=ok
// SIG undefined FUN_143241290(void)

void FUN_143241290(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    uVar4 = FUN_143242780((longlong)param_1 + 0xc,param_3);
    *(undefined4 *)(*param_1 + 0x184) = uVar4;
    uVar4 = FUN_143242780(param_1 + 4,param_3);
    *(undefined4 *)(*param_1 + 0x188) = uVar4;
    uVar4 = FUN_143242780((longlong)param_1 + 0x34,param_3);
    *(undefined4 *)(*param_1 + 0x18c) = uVar4;
    uVar4 = FUN_143242790(param_1 + 9,param_3,*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(*param_1 + 0x194) = uVar4;
    cVar3 = FUN_143242730((longlong)param_1 + 0xc);
    if (cVar3 != '\0') {
      lVar2 = *param_1;
      *(undefined4 *)(param_1 + 1) = 2;
      fVar5 = *(float *)(param_2 + 4);
      if (*(float *)(param_2 + 8) <= 0.3) {
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)(lVar2 + 0xe0) = 0;
      }
      else {
        uVar4 = *(undefined4 *)(lVar2 + 0x140);
        FUN_1432426c0((longlong)param_1 + 0xc,(1.0 - fVar5) * *(float *)(lVar2 + 0x148) + fVar5,
                      fVar5,uVar4,0);
        FUN_1432426c0(param_1 + 4,0,*(undefined4 *)(*param_1 + 0x188),
                      *(undefined4 *)(*param_1 + 0x14c),0);
        FUN_1432426c0((longlong)param_1 + 0x34,*(undefined4 *)(*param_1 + 0x144),0x3f800000,uVar4,0)
        ;
        lVar2 = *param_1;
        FUN_1432426e0((longlong)param_1 + 0x5c,*(undefined4 *)(lVar2 + 0x160),
                      *(undefined4 *)(lVar2 + 0x15c),*(undefined4 *)(lVar2 + 0x164),0x3f4ccccd,
                      0x3f800000);
        lVar2 = *param_1;
        FUN_1432426e0((longlong)param_1 + 0x74,*(undefined4 *)(lVar2 + 0x158),
                      *(undefined4 *)(lVar2 + 0x154),*(undefined4 *)(lVar2 + 0x164),0,0x3f800000);
      }
    }
  }
  else if (iVar1 == 2) {
    uVar4 = FUN_143242790((longlong)param_1 + 0xc,param_3,*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(*param_1 + 0x184) = uVar4;
    uVar4 = FUN_143242790(param_1 + 4,param_3,*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(*param_1 + 0x188) = uVar4;
    uVar4 = FUN_143242780((longlong)param_1 + 0x34,param_3);
    *(undefined4 *)(*param_1 + 0x18c) = uVar4;
    uVar4 = FUN_143242790(param_1 + 9,param_3,*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(*param_1 + 0x194) = uVar4;
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x150) != '\0') {
      fVar5 = (float)FUN_1432427b0((longlong)param_1 + 0x74,param_3);
      *(float *)(lVar2 + 0x184) = fVar5 * *(float *)(lVar2 + 0x184);
      lVar2 = *param_1;
      fVar5 = (float)FUN_1432427b0((longlong)param_1 + 0x5c,param_3);
      *(float *)(lVar2 + 0x18c) = fVar5 * *(float *)(lVar2 + 0x18c);
    }
    cVar3 = FUN_143242730((longlong)param_1 + 0xc);
    if ((cVar3 != '\0') &&
       ((*(char *)(*param_1 + 0x150) == '\0' ||
        (cVar3 = FUN_143242740((longlong)param_1 + 0x74), cVar3 != '\0')))) {
      *(undefined1 *)(*param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(*param_1 + 0xe0) = 0;
    }
  }
  else if (iVar1 == 3) {
    uVar4 = FUN_143242780((longlong)param_1 + 0xc,param_3);
    *(undefined4 *)(*param_1 + 0x184) = uVar4;
    uVar4 = FUN_143242780(param_1 + 4,param_3);
    *(undefined4 *)(*param_1 + 0x188) = uVar4;
    uVar4 = FUN_143242780((longlong)param_1 + 0x34,param_3);
    *(undefined4 *)(*param_1 + 0x18c) = uVar4;
    cVar3 = FUN_143242730((longlong)param_1 + 0xc);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 1) = 4;
      FUN_1432426c0((longlong)param_1 + 0xc,*(undefined4 *)(*param_1 + 0x184),
                    *(undefined4 *)(param_2 + 4),*(float *)(*param_1 + 0x168) * 0.5,0);
      FUN_1432426c0(param_1 + 4,*(undefined4 *)(*param_1 + 0x188),*(undefined4 *)(param_2 + 8),
                    *(float *)(*param_1 + 0x168) * 0.5,0);
    }
  }
  else if (iVar1 == 4) {
    uVar4 = FUN_143242790((longlong)param_1 + 0xc,param_3,*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(*param_1 + 0x184) = uVar4;
    uVar4 = FUN_143242780(param_1 + 4,param_3);
    *(undefined4 *)(*param_1 + 0x188) = uVar4;
    uVar4 = FUN_143242780((longlong)param_1 + 0x34,param_3);
    *(undefined4 *)(*param_1 + 0x18c) = uVar4;
    cVar3 = FUN_143242730((longlong)param_1 + 0xc);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(*param_1 + 0xe0) = 0;
    }
  }
  return;
}



// FUNCTION 1432416d0 FUN_1432416d0 body=369 status=ok
// SIG undefined FUN_1432416d0(void)

ulonglong FUN_1432416d0(char *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if ((((*param_1 == 'A') && (param_1[1] == 'D')) && (param_1[2] == 'M')) && (param_1[3] == '3')) {
    FUN_143244830(param_1 + 0x18);
    if ((param_1[0x3c] & 1U) == 0) {
      param_1[0x3c] = '\x01';
      param_1[0x3d] = '\0';
    }
    if ((param_1[0x80] & 1U) == 0) {
      param_1[0x80] = '\x01';
      param_1[0x81] = '\0';
    }
    if ((param_1[0xf4] & 1U) == 0) {
      if ((param_1[0xf8] & 1U) == 0) {
        param_1[0xf8] = '\x01';
        param_1[0xf9] = '\0';
      }
      if ((param_1[0x100] & 1U) == 0) {
        param_1[0x100] = '\x01';
        param_1[0x101] = '\0';
      }
      if ((param_1[0x108] & 1U) == 0) {
        param_1[0x108] = '\x01';
        param_1[0x109] = '\0';
      }
      if ((param_1[0x110] & 1U) == 0) {
        param_1[0x110] = '\x01';
        param_1[0x111] = '\0';
      }
      param_1[0xf4] = '\x01';
      param_1[0xf5] = '\0';
    }
    uVar1 = *(uint *)(param_1 + 8) & 0xffff0000;
    in_RAX = (ulonglong)uVar1;
    if (uVar1 == 0x60000) {
      if ((*(uint *)(param_1 + 0xfc) != 0) && (param_1 + *(uint *)(param_1 + 0xfc) != (char *)0x0))
      {
        FUN_143241850(param_1 + *(uint *)(param_1 + 0xfc),param_1);
      }
      if ((*(uint *)(param_1 + 0x104) != 0) && (param_1 + *(uint *)(param_1 + 0x104) != (char *)0x0)
         ) {
        FUN_143241850(param_1 + *(uint *)(param_1 + 0x104),param_1);
      }
      uVar1 = *(uint *)(param_1 + 0x10c);
      if ((uVar1 != 0) && (param_1 + uVar1 != (char *)0x0)) {
        if ((param_1[(ulonglong)uVar1 + 0x18] & 1U) == 0) {
          (param_1 + (ulonglong)uVar1 + 0x18)[0] = '\x01';
          (param_1 + (ulonglong)uVar1 + 0x18)[1] = '\0';
        }
        if ((param_1[(ulonglong)uVar1 + 0x28] & 1U) == 0) {
          (param_1 + (ulonglong)uVar1 + 0x28)[0] = '\x01';
          (param_1 + (ulonglong)uVar1 + 0x28)[1] = '\0';
        }
      }
      return 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 2;
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143241850 FUN_143241850 body=344 status=ok
// SIG undefined FUN_143241850(void)

void FUN_143241850(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x18) = 1;
    }
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x20) = 1;
    }
    *(undefined2 *)(param_1 + 0xc) = 1;
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x18) = 1;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x20) = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  uVar2 = 0;
  if ((uVar4 != 0) && (uVar3 = (ulonglong)uVar4, (ulonglong)uVar4 + param_2 != 0)) {
    if ((*(byte *)(uVar3 + 0xc + param_2) & 1) == 0) {
      if ((*(byte *)(uVar3 + 0x14 + param_2) & 1) == 0) {
        *(undefined2 *)(uVar3 + 0x14 + param_2) = 1;
      }
      *(undefined2 *)(uVar3 + 0xc + param_2) = 1;
    }
    if ((*(byte *)(uVar3 + 0x14 + param_2) & 1) == 0) {
      *(undefined2 *)(uVar3 + 0x14 + param_2) = 1;
    }
    uVar5 = uVar2;
    uVar6 = uVar2;
    if (0 < *(int *)(uVar3 + 0x10 + param_2)) {
      do {
        uVar4 = *(uint *)(uVar3 + 0x18 + param_2);
        uVar1 = uVar2;
        if (uVar4 != 0) {
          uVar1 = (ulonglong)uVar4 + param_2;
        }
        if ((*(byte *)(uVar6 + uVar1) & 1) == 0) {
          *(undefined2 *)(uVar6 + uVar1) = 1;
        }
        uVar4 = *(uint *)(uVar6 + 4 + uVar1);
        uVar1 = uVar2;
        if (uVar4 != 0) {
          uVar1 = param_2 + (ulonglong)uVar4;
        }
        if ((*(byte *)(uVar1 + 0x18) & 1) == 0) {
          *(undefined2 *)(uVar1 + 0x18) = 1;
        }
        if ((*(byte *)(uVar1 + 0x28) & 1) == 0) {
          *(undefined2 *)(uVar1 + 0x28) = 1;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 + 8;
      } while ((int)uVar4 < *(int *)(uVar3 + 0x10 + param_2));
    }
  }
  uVar4 = *(uint *)(param_1 + 0x24);
  if ((uVar4 != 0) && (uVar3 = (ulonglong)uVar4, (ulonglong)uVar4 + param_2 != 0)) {
    if ((*(byte *)(uVar3 + 6 + param_2) & 1) == 0) {
      if ((*(byte *)(uVar3 + 0x58 + param_2) & 1) == 0) {
        *(undefined2 *)(uVar3 + 0x58 + param_2) = 1;
      }
      if ((*(byte *)(uVar3 + 0x50 + param_2) & 1) == 0) {
        *(undefined2 *)(uVar3 + 0x50 + param_2) = 1;
      }
      *(undefined2 *)(uVar3 + 6 + param_2) = 1;
    }
    if ((*(byte *)(uVar3 + 0x58 + param_2) & 1) == 0) {
      *(undefined2 *)(uVar3 + 0x58 + param_2) = 1;
    }
    uVar4 = *(uint *)(uVar3 + 0x5c + param_2);
    if (uVar4 != 0) {
      uVar2 = param_2 + (ulonglong)uVar4;
    }
    if ((*(byte *)(uVar2 + 0x18) & 1) == 0) {
      *(undefined2 *)(uVar2 + 0x18) = 1;
    }
    if ((*(byte *)(uVar2 + 0x28) & 1) == 0) {
      *(undefined2 *)(uVar2 + 0x28) = 1;
    }
    if ((*(byte *)(uVar3 + 0x50 + param_2) & 1) == 0) {
      *(undefined2 *)(uVar3 + 0x50 + param_2) = 1;
    }
  }
  return;
}



// FUNCTION 1432419b0 FUN_1432419b0 body=189 status=ok
// SIG undefined FUN_1432419b0(void)

longlong FUN_1432419b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 4);
  puVar1 = (undefined8 *)(param_1 + 0x2c);
  lVar2 = 8;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    *puVar3 = 0x4fe7d6e4;
    *(undefined4 *)((longlong)puVar1 + -0x24) = 0x5067d6e4;
    *(undefined4 *)(puVar1 + -4) = 0x47ac4400;
    *(undefined4 *)((longlong)puVar1 + -0x1c) = 0x38956592;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x43dc8000;
    *(undefined4 *)(puVar1 + 2) = 0x469b0a00;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xbf800000;
    *(undefined4 *)(puVar1 + 3) = 0xbf800000;
    FUN_143241b00(puVar3,0x46ac4400,0);
    puVar3 = puVar3 + 0x11;
    puVar1 = (undefined8 *)((longlong)puVar1 + 0x44);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 143241a70 FUN_143241a70 body=141 status=ok
// SIG undefined FUN_143241a70(void)

float FUN_143241a70(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar4 = (longlong)param_3 * 0x44;
  fVar6 = *(float *)(lVar4 + 0x24 + param_1);
  fVar1 = *(float *)(lVar4 + 0x28 + param_1);
  fVar2 = *(float *)(lVar4 + 0x30 + param_1);
  *(float *)(lVar4 + 0x28 + param_1) = fVar6;
  fVar3 = *(float *)(lVar4 + 0x2c + param_1);
  *(float *)(lVar4 + 0x30 + param_1) = fVar3;
  fVar5 = (param_2 * *(float *)(lVar4 + 0x34 + param_1) - fVar6 * *(float *)(lVar4 + 0x14 + param_1)
          ) - fVar1 * *(float *)(lVar4 + 0x18 + param_1);
  *(float *)(lVar4 + 0x24 + param_1) = fVar5;
  fVar6 = ((fVar6 + fVar6 + fVar5 + fVar1) - fVar3 * *(float *)(lVar4 + 0x1c + param_1)) -
          fVar2 * *(float *)(lVar4 + 0x20 + param_1);
  *(float *)(lVar4 + 0x2c + param_1) = fVar6;
  return fVar3 + fVar3 + fVar6 + fVar2;
}



// FUNCTION 143241b00 FUN_143241b00 body=353 status=ok
// SIG undefined FUN_143241b00(void)

void FUN_143241b00(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_2 != param_1[0xf]) || (param_3 != param_1[0x10])) {
    fVar1 = param_1[0xd];
    if ((param_1[0xd] <= param_2) && (fVar1 = param_1[0xe], param_2 <= param_1[0xe])) {
      fVar1 = param_2;
    }
    param_1[0xf] = fVar1;
    fVar3 = 0.0;
    if ((0.0 <= param_3) && (fVar3 = param_3, 1.0 <= param_3)) {
      fVar3 = 1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1 * param_1[3]);
    fVar1 = fVar1 * param_1[2];
    fVar5 = 1.0 / (fVar3 * 6.0 + 1.0);
    fVar3 = 1.0 / (fVar1 * fVar1);
    fVar2 = fVar5 * 0.765367 * (1.0 / fVar1) * param_1[2];
    fVar4 = fVar3 * *param_1 + 1.0;
    fVar5 = fVar5 * 1.847759 * (1.0 / fVar1) * param_1[2];
    fVar3 = 2.0 - fVar3 * param_1[1];
    fVar1 = 1.0 / (fVar2 + fVar4);
    param_1[4] = fVar3 * fVar1;
    param_1[5] = (fVar4 - fVar2) * fVar1;
    fVar2 = 1.0 / (fVar5 + fVar4);
    param_1[7] = (fVar4 - fVar5) * fVar2;
    param_1[0xc] = fVar1 * 0.5 * fVar2;
    param_1[6] = fVar3 * fVar2;
  }
  return;
}



// FUNCTION 143241c70 FUN_143241c70 body=517 status=ok
// SIG undefined FUN_143241c70(void)

void FUN_143241c70(int *param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = 0;
  if (0 < *param_1) {
    pfVar1 = (float *)(param_1 + 0xe);
    do {
      if ((param_2 != pfVar1[2]) || (param_3 != pfVar1[3])) {
        fVar3 = *pfVar1;
        if ((*pfVar1 <= param_2) && (fVar3 = pfVar1[1], param_2 <= pfVar1[1])) {
          fVar3 = param_2;
        }
        pfVar1[2] = fVar3;
        if (0.0 <= param_3) {
          fVar7 = param_3;
          if (1.0 <= param_3) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar5 = pfVar1[-0xb];
        fVar3 = _guard_xfg_dispatch_icall_nop(fVar3 * pfVar1[-10]);
        fVar3 = fVar3 * fVar5;
        fVar4 = 1.0 / (fVar3 * fVar3);
        fVar7 = 1.0 / (fVar7 * 6.0 + 1.0);
        fVar6 = 2.0 - fVar4 * pfVar1[-0xc];
        fVar4 = fVar4 * pfVar1[-0xd] + 1.0;
        fVar8 = fVar7 * 1.847759 * (1.0 / fVar3) * fVar5;
        fVar5 = fVar7 * 0.765367 * (1.0 / fVar3) * fVar5;
        fVar7 = fVar5 + fVar4;
        pfVar1[-9] = fVar6 / fVar7;
        pfVar1[-8] = (fVar4 - fVar5) / fVar7;
        fVar3 = 1.0 / (fVar8 + fVar4);
        pfVar1[-7] = fVar6 * fVar3;
        pfVar1[-6] = (fVar4 - fVar8) * fVar3;
        pfVar1[-1] = (fVar3 / fVar7) * 0.5;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 0x11;
    } while (iVar2 < *param_1);
  }
  return;
}



// FUNCTION 143241e80 FUN_143241e80 body=136 status=ok
// SIG undefined FUN_143241e80(void)

void FUN_143241e80(int *param_1,float param_2,int param_3)

{
  float *pfVar1;
  longlong lVar2;
  
  *param_1 = param_3;
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    pfVar1 = (float *)(param_1 + 3);
    do {
      pfVar1[-2] = param_2 * 4.0 * param_2;
      pfVar1[-1] = param_2 * 8.0 * param_2;
      *pfVar1 = param_2 + param_2;
      pfVar1[1] = 3.1415927 / param_2;
      pfVar1[0xb] = param_2 * 0.01;
      pfVar1[0xc] = param_2 * 0.45;
      pfVar1 = pfVar1 + 0x11;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143241f10 FUN_143241f10 body=77 status=ok
// SIG undefined FUN_143241f10(void)

undefined8 * FUN_143241f10(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  lVar2 = 4;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 8;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 143241f60 FUN_143241f60 body=1067 status=ok
// SIG undefined FUN_143241f60(void)

void FUN_143241f60(undefined1 *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  float fVar7;
  
  pbVar5 = param_1 + 2;
  lVar6 = 4;
  uVar2 = (int)CONCAT11(*param_1,param_1[1]) & 0x7f;
  uVar1 = 0x58;
  fVar7 = (float)(int)((int)CONCAT11(*param_1,param_1[1]) & 0xffffff80) * 3.051851e-05;
  do {
    uVar4 = (ulonglong)(*pbVar5 & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(*pbVar5 >> 4);
    *param_2 = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[1] = fVar7;
    uVar4 = (ulonglong)(pbVar5[1] & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(pbVar5[1] >> 4);
    param_2[2] = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[3] = fVar7;
    uVar4 = (ulonglong)(pbVar5[2] & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(pbVar5[2] >> 4);
    param_2[4] = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[5] = fVar7;
    uVar4 = (ulonglong)(pbVar5[3] & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(pbVar5[3] >> 4);
    param_2[6] = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[7] = fVar7;
    uVar4 = (ulonglong)(pbVar5[4] & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(pbVar5[4] >> 4);
    param_2[8] = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[9] = fVar7;
    uVar4 = (ulonglong)(pbVar5[5] & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(pbVar5[5] >> 4);
    param_2[10] = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[0xb] = fVar7;
    uVar4 = (ulonglong)(pbVar5[6] & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(pbVar5[6] >> 4);
    param_2[0xc] = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[0xd] = fVar7;
    uVar4 = (ulonglong)(pbVar5[7] & 0xf);
    uVar3 = uVar2 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar2] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0x58 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = (ulonglong)(pbVar5[7] >> 4);
    param_2[0xe] = fVar7;
    uVar2 = uVar3 + *(int *)(&DAT_145aed2c0 + uVar4 * 4);
    fVar7 = fVar7 + (float)(&DAT_145aed300)[(int)uVar3] * *(float *)(&DAT_145aed280 + uVar4 * 4);
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0x58 < (int)uVar2) {
      uVar2 = uVar1;
    }
    param_2[0xf] = fVar7;
    pbVar5 = pbVar5 + 8;
    param_2 = param_2 + 0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 143242390 FUN_143242390 body=58 status=ok
// SIG undefined FUN_143242390(void)

void FUN_143242390(undefined8 *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  lVar1 = 4;
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 8;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1432423d0 FUN_1432423d0 body=20 status=ok
// SIG undefined FUN_1432423d0(void)

undefined8 * FUN_1432423d0(undefined8 *param_1)

{
  param_1[1] = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1432423f0 FUN_1432423f0 body=16 status=ok
// SIG undefined FUN_1432423f0(void)

undefined8 * FUN_1432423f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 143242400 FUN_143242400 body=203 status=ok
// SIG undefined FUN_143242400(void)

float FUN_143242400(float param_1,undefined4 param_2)

{
  double dVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if ((param_1 <= 1.0) && (fVar2 = param_1, param_1 < 0.0)) {
    fVar2 = 0.0;
  }
  switch(param_2) {
  case 1:
    dVar1 = _guard_xfg_dispatch_icall_nop((double)fVar2 * 3.141592653589793);
    return (float)(1.0 - dVar1) * 0.5;
  case 2:
    dVar1 = _guard_xfg_dispatch_icall_nop((double)fVar2 * 1.5707963267948966);
    return (float)dVar1;
  case 3:
    fVar2 = fVar2 * fVar2;
    break;
  case 4:
    return fVar2 * fVar2 * fVar2;
  case 5:
    return SQRT(fVar2);
  case 6:
    fVar2 = _guard_xfg_dispatch_icall_nop(fVar2,0.33333334);
    return fVar2;
  }
  return fVar2;
}



// FUNCTION 1432424f0 FUN_1432424f0 body=156 status=ok
// SIG undefined FUN_1432424f0(void)

float FUN_1432424f0(float *param_1)

{
  double dVar1;
  float fVar2;
  
  fVar2 = param_1[4] / param_1[2];
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (param_1[3] != 0.0) {
    if (param_1[3] == 1.4013e-45) {
      dVar1 = _guard_xfg_dispatch_icall_nop((double)fVar2 * 3.141592653589793);
      return (1.0 - (float)dVar1) * 0.5 * (param_1[1] - *param_1) + *param_1;
    }
    return 0.0;
  }
  return (param_1[1] - *param_1) * fVar2 + *param_1;
}



// FUNCTION 143242590 FUN_143242590 body=272 status=ok
// SIG undefined FUN_143242590(void)

float FUN_143242590(float *param_1,float param_2,undefined4 param_3)

{
  double dVar1;
  float fVar2;
  float _X;
  
  if (param_1[2] < param_2) {
    return param_1[3];
  }
  fVar2 = *param_1;
  if (fVar2 <= param_2) {
    _X = 1.0;
    fVar2 = (param_2 - fVar2) / (param_1[2] - fVar2);
    if ((fVar2 <= 1.0) && (_X = fVar2, fVar2 < 0.0)) {
      _X = 0.0;
    }
    switch(param_3) {
    case 1:
      dVar1 = _guard_xfg_dispatch_icall_nop((double)_X * 3.141592653589793);
      _X = (float)(1.0 - dVar1) * 0.5;
      break;
    case 2:
      dVar1 = _guard_xfg_dispatch_icall_nop((double)_X * 1.5707963267948966);
      _X = (float)dVar1;
      break;
    case 3:
      _X = _X * _X;
      break;
    case 4:
      _X = _X * _X * _X;
      break;
    case 5:
      _X = SQRT(_X);
      break;
    case 6:
      _X = _guard_xfg_dispatch_icall_nop(_X,0.33333334);
    }
    return (param_1[3] - param_1[1]) * _X + param_1[1];
  }
  return param_1[1];
}



// FUNCTION 1432426c0 FUN_1432426c0 body=29 status=ok
// SIG undefined FUN_1432426c0(void)

void FUN_1432426c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  return;
}



// FUNCTION 1432426e0 FUN_1432426e0 body=62 status=ok
// SIG undefined FUN_1432426e0(void)

void FUN_1432426e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[3] = param_6;
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[4] = param_4;
  if (param_4 < 0.015) {
    *(undefined8 *)(param_1 + 4) = 0x3c75c28f;
    return;
  }
  param_1[5] = 0;
  return;
}



// FUNCTION 143242720 CRYPTO_THREADID_cpy body=7 status=ok
// SIG undefined CRYPTO_THREADID_cpy(void)

void CRYPTO_THREADID_cpy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



// FUNCTION 143242730 FUN_143242730 body=13 status=ok
// SIG undefined FUN_143242730(void)

bool FUN_143242730(longlong param_1)

{
  return *(float *)(param_1 + 8) < *(float *)(param_1 + 0x10);
}



// FUNCTION 143242740 FUN_143242740 body=13 status=ok
// SIG undefined FUN_143242740(void)

bool FUN_143242740(longlong param_1)

{
  return *(float *)(param_1 + 0x10) < *(float *)(param_1 + 0x14) ||
         *(float *)(param_1 + 0x10) == *(float *)(param_1 + 0x14);
}



// FUNCTION 143242750 FUN_143242750 body=36 status=ok
// SIG undefined FUN_143242750(void)

void FUN_143242750(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  param_2 = param_2 - *param_1;
  fVar1 = param_2;
  if (param_3 < param_2) {
    fVar1 = param_3;
  }
  if (param_2 < param_4) {
    fVar1 = param_4;
  }
  *param_1 = *param_1 + fVar1;
  return;
}



// FUNCTION 143242780 FUN_143242780 body=15 status=ok
// SIG undefined FUN_143242780(void)

void FUN_143242780(longlong param_1,float param_2)

{
  *(float *)(param_1 + 0x10) = param_2 + *(float *)(param_1 + 0x10);
  FUN_1432424f0();
  return;
}



// FUNCTION 143242790 FUN_143242790 body=20 status=ok
// SIG undefined FUN_143242790(void)

void FUN_143242790(longlong param_1,float param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_3;
  *(float *)(param_1 + 0x10) = param_2 + *(float *)(param_1 + 0x10);
  FUN_1432424f0();
  return;
}



// FUNCTION 1432427b0 FUN_1432427b0 body=165 status=ok
// SIG undefined FUN_1432427b0(void)

float FUN_1432427b0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  param_2 = param_2 + param_1[5];
  fVar1 = param_1[4];
  param_1[5] = param_2;
  if ((0.0 <= fVar1) && (fVar1 < param_2)) {
    param_1[5] = fVar1;
    param_2 = fVar1;
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(param_2 * 6.2831855 * param_1[1] + param_1[2] * 6.2831855);
  fVar2 = fVar2 * *param_1;
  if (0.0 <= fVar1) {
    param_2 = param_2 / fVar1;
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    fVar2 = fVar2 * (1.0 - param_2);
  }
  return fVar2 + param_1[3];
}



// FUNCTION 143242860 FUN_143242860 body=74 status=ok
// SIG undefined FUN_143242860(void)

void FUN_143242860(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  *(undefined8 *)(param_1 + 0x104) = param_2;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x120) = param_5;
  *(undefined4 *)(param_1 + 300) = param_4;
  *(undefined8 *)(param_1 + 0x110) = param_3;
  FUN_143242390(param_1);
  *(undefined4 *)(param_1 + 0x130) = 1;
  return;
}



// FUNCTION 1432428b0 OnStart body=11 status=ok
// SIG undefined OnStart(void)

void Kiwi::Battle::TestModeUnit::OnStart(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x130) = 1;
  return;
}



// FUNCTION 1432428c0 FUN_1432428c0 body=917 status=ok
// SIG undefined FUN_1432428c0(void)

void FUN_1432428c0(float *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  uint local_res8;
  int local_e8;
  longlong *local_e0;
  
  FUN_14323d110(param_4);
  uVar6 = FUN_14323d0a0(param_4);
  iVar11 = *(int *)((longlong)param_4 + 100);
  fVar1 = param_1[4];
  local_e8 = 0;
  if (0 < iVar11) {
    plVar10 = param_4 + 8;
    local_e0 = param_4;
    do {
      fVar17 = *param_1;
      iVar7 = (int)fVar17;
      if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar17)) {
        auVar18._4_4_ = fVar17;
        auVar18._0_4_ = fVar17;
        auVar18._8_8_ = 0;
        uVar5 = movmskps((int)uVar6,auVar18);
        fVar17 = (float)(int)(iVar7 - (uVar5 & 1));
      }
      fVar14 = 0.0;
      uVar5 = 0xffffffff;
      if (param_1[9] == 0.0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)(uint)param_1[9] + param_2;
      }
      if (iVar11 == 1) {
        iVar11 = 0;
      }
      else {
        uVar9 = (uint)*(ushort *)(uVar6 + 0xc);
        if ((iVar11 == 6) && (uVar9 == 6)) {
          if (local_e8 == 5) {
            iVar11 = *(ushort *)(uVar6 + 0xc) - 3;
          }
          else {
            iVar11 = local_e8;
            if (2 < local_e8) {
              iVar11 = local_e8 + 1;
            }
          }
        }
        else {
          uVar6 = (longlong)local_e8 / (longlong)(int)uVar9 & 0xffffffff;
          iVar11 = local_e8 % (int)uVar9;
        }
      }
      fVar19 = 0.0;
      local_res8 = 0;
      if (0 < (int)param_1[5]) {
        do {
          fVar2 = param_1[3];
          fVar3 = param_1[2];
          fVar13 = (1.0 / fVar1) * fVar19;
          fVar15 = (param_1[1] - *param_1) * fVar13 + *param_1;
          fVar4 = param_1[2];
          uVar9 = (uint)fVar15;
          fVar16 = fVar14;
          if (uVar5 != uVar9) {
            if (param_1[9] == 0.0) {
              lVar8 = 0;
            }
            else {
              lVar8 = param_2 + (ulonglong)(uint)param_1[9];
            }
            iVar7 = (uint)*(ushort *)(lVar8 + 0xc) * (uVar9 >> 6) + iVar11;
            if (iVar7 != *(int *)(param_3 + 0x100)) {
              FUN_143241f60();
              *(int *)(param_3 + 0x100) = iVar7;
            }
            fVar16 = *(float *)(param_3 + (ulonglong)(uVar9 & 0x3f) * 4);
          }
          if (param_1[9] == 0.0) {
            lVar8 = 0;
          }
          else {
            lVar8 = param_2 + (ulonglong)(uint)param_1[9];
          }
          uVar5 = uVar9 + 1;
          iVar7 = (uVar5 >> 6) * (uint)*(ushort *)(lVar8 + 0xc) + iVar11;
          if (iVar7 != *(int *)(param_3 + 0x100)) {
            if (*(uint *)(lVar8 + 0x2c) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = param_2 + (ulonglong)*(uint *)(lVar8 + 0x2c);
            }
            FUN_143241f60((ulonglong)(uint)(iVar7 * 0x22) + lVar8);
            *(int *)(param_3 + 0x100) = iVar7;
          }
          fVar12 = fVar15 - fVar17;
          fVar14 = *(float *)(param_3 + (ulonglong)(uVar5 & 0x3f) * 4);
          if ((1.0 <= fVar12) && (fVar12 = fVar12 + -1.0, 1.0 <= fVar12)) {
            fVar12 = fVar12 + -1.0;
          }
          fVar19 = fVar19 + 1.0;
          fVar17 = fVar15 - fVar12;
          iVar7 = (int)*plVar10;
          *(int *)plVar10 = iVar7 + 1;
          *(float *)(*local_e0 + (longlong)iVar7 * 4) =
               ((fVar14 - fVar16) * fVar12 + fVar16) * ((fVar2 - fVar3) * fVar13 + fVar4) +
               *(float *)(*local_e0 + (longlong)iVar7 * 4);
          local_res8 = local_res8 + 1;
          uVar6 = (ulonglong)local_res8;
        } while ((int)local_res8 < (int)param_1[5]);
      }
      local_e0 = local_e0 + 1;
      local_e8 = local_e8 + 1;
      iVar11 = *(int *)((longlong)param_4 + 100);
      plVar10 = (longlong *)((longlong)plVar10 + 4);
    } while (local_e8 < iVar11);
  }
  FUN_14323d0d0(param_4);
  return;
}



// FUNCTION 143242c60 FUN_143242c60 body=419 status=ok
// SIG undefined FUN_143242c60(void)

float * FUN_143242c60(longlong param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_EAX;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined4 uVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  
  uVar12 = (undefined4)((ulonglong)param_3 >> 0x20);
  auVar7._0_4_ = (float)param_3;
  lVar3 = 0;
  if (*(uint *)(param_1 + 0x108) != 0) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x108) + *(longlong *)(param_1 + 0x110);
  }
  iVar4 = *(int *)(lVar3 + 0x20);
  fVar13 = auVar7._0_4_ * *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x124);
  param_2[9] = 0.0;
  *(undefined2 *)(param_2 + 8) = 1;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[7] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  *param_2 = *(float *)(param_1 + 0x124);
  param_2[2] = *(float *)(param_1 + 0x128);
  param_2[3] = *(float *)(param_1 + 0x118);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x104);
  uVar1 = *(undefined4 *)(param_1 + 0x118);
  fVar5 = (float)(iVar4 + -1);
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  if (fVar5 < fVar13) {
    param_2[1] = fVar5;
    *(undefined4 *)(param_1 + 0x124) = 0;
    auVar7._0_4_ = (param_2[1] - *param_2) / *(float *)(param_1 + 0x11c);
    iVar4 = (int)auVar7._0_4_;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar7._0_4_)) {
      auVar7._4_4_ = auVar7._0_4_;
      auVar7._8_8_ = 0;
      uVar2 = movmskps(uVar1,auVar7);
      auVar7._0_4_ = (float)(int)(iVar4 - (uVar2 & 1));
    }
    param_2[5] = (float)(int)auVar7._0_4_;
    param_2[4] = (float)(int)auVar7._0_4_;
    *(undefined1 *)(param_2 + 6) = 1;
    return param_2;
  }
  param_2[1] = fVar13;
  fVar6 = _guard_xfg_dispatch_icall_nop(auVar7._0_4_,1.0);
  iVar4 = (int)auVar7._0_4_;
  fVar5 = auVar7._0_4_;
  if (fVar6 <= 0.5) {
    if ((iVar4 == -0x80000000) || ((float)iVar4 == auVar7._0_4_)) goto LAB_143242dd7;
    auVar11._8_4_ = uVar12;
    auVar11._0_8_ = param_3;
    auVar11._12_4_ = uVar12;
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._4_4_ = auVar7._0_4_;
    auVar10._0_4_ = auVar7._0_4_;
    uVar2 = movmskps(extraout_EAX,auVar10);
    uVar2 = -(uVar2 & 1);
  }
  else {
    if ((iVar4 == -0x80000000) || ((float)iVar4 == auVar7._0_4_)) goto LAB_143242dd7;
    auVar9._8_4_ = uVar12;
    auVar9._0_8_ = param_3;
    auVar9._12_4_ = uVar12;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = auVar7._0_4_;
    auVar8._0_4_ = auVar7._0_4_;
    uVar2 = movmskps(extraout_EAX,auVar8);
    uVar2 = uVar2 & 1 ^ 1;
  }
  fVar5 = (float)(int)(iVar4 + uVar2);
LAB_143242dd7:
  param_2[4] = fVar5;
  param_2[5] = (float)(int)auVar7._0_4_;
  *(float *)(param_1 + 0x124) = fVar13;
  return param_2;
}



// FUNCTION 143242e10 FUN_143242e10 body=8 status=ok
// SIG undefined FUN_143242e10(void)

void FUN_143242e10(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x110) = param_2;
  return;
}



// FUNCTION 143242e20 FUN_143242e20 body=48 status=ok
// SIG undefined FUN_143242e20(void)

void FUN_143242e20(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  FUN_143242390();
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}



// FUNCTION 143242e50 FUN_143242e50 body=13 status=ok
// SIG undefined FUN_143242e50(void)

void FUN_143242e50(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x118) = *param_2;
  return;
}



// FUNCTION 143242e60 FUN_143242e60 body=64 status=ok
// SIG undefined FUN_143242e60(void)

undefined2 * FUN_143242e60(undefined2 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 143242ea0 FUN_143242ea0 body=171 status=ok
// SIG undefined FUN_143242ea0(void)

float * FUN_143242ea0(float *param_1,float *param_2)

{
  undefined4 extraout_EAX;
  uint uVar1;
  int iVar2;
  float fVar3;
  float _X;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  _X = *param_2;
  fVar3 = _guard_xfg_dispatch_icall_nop(_X,1.0);
  if (fVar3 <= 0.5) {
    iVar2 = (int)_X;
    if ((iVar2 == -0x80000000) || ((float)iVar2 == _X)) goto LAB_143242f2d;
    auVar5._4_4_ = _X;
    auVar5._0_4_ = _X;
    auVar5._8_8_ = 0;
    uVar1 = movmskps(extraout_EAX,auVar5);
    iVar2 = iVar2 - (uVar1 & 1);
  }
  else {
    iVar2 = (int)_X;
    if ((iVar2 == -0x80000000) || ((float)iVar2 == _X)) goto LAB_143242f2d;
    auVar4._4_4_ = _X;
    auVar4._0_4_ = _X;
    auVar4._8_8_ = 0;
    uVar1 = movmskps(extraout_EAX,auVar4);
    iVar2 = iVar2 + (uVar1 & 1 ^ 1);
  }
  _X = (float)iVar2;
LAB_143242f2d:
  *param_1 = _X;
  param_1[1] = (float)(int)*param_2;
  return param_1;
}



// FUNCTION 143242f50 FUN_143242f50 body=348 status=ok
// SIG undefined FUN_143242f50(void)

undefined2 *
FUN_143242f50(undefined2 *param_1,float param_2,int param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_3 + 1;
  iVar6 = (*(int *)(param_4 + 0x14) - param_3) + -1;
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar3 = iVar7;
    if (iVar7 <= iVar6) {
      iVar2 = *(int *)(param_4 + 0x54);
      do {
        iVar3 = (iVar6 + iVar7) / 2;
        uVar5 = iVar2 + iVar3 * 0xc;
        if (uVar5 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (ulonglong)uVar5 + param_5;
        }
        if (param_2 < *(float *)(lVar4 + 4)) {
          iVar6 = iVar3 + -1;
        }
        else {
          if (iVar3 == iVar6) {
            *param_1 = 1;
            uVar5 = iVar2 + iVar6 * 0xc;
            goto LAB_143243079;
          }
          if (uVar5 + 0xc == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = (ulonglong)(uVar5 + 0xc) + param_5;
          }
          if (param_2 < *(float *)(lVar4 + 4)) goto LAB_143243090;
          iVar7 = iVar3 + 1;
        }
        iVar3 = iVar7;
      } while (iVar7 <= iVar6);
    }
  }
  else {
    iVar3 = iVar6;
    if (iVar7 <= iVar6) {
      iVar2 = *(int *)(param_4 + 0x54);
      do {
        iVar3 = (iVar7 + iVar6) / 2;
        uVar5 = iVar2 + iVar3 * 0xc;
        if (uVar5 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (ulonglong)uVar5 + param_5;
        }
        if (param_2 < *(float *)(lVar4 + 4)) {
          iVar7 = iVar3 + 1;
        }
        else {
          if (iVar3 == iVar6) {
            *param_1 = 1;
            uVar5 = iVar2 + iVar7 * 0xc;
            goto LAB_143243079;
          }
          uVar1 = iVar2 + (iVar3 + -1) * 0xc;
          if (uVar1 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = (ulonglong)uVar1 + param_5;
          }
          if (param_2 < *(float *)(lVar4 + 4)) goto LAB_143243090;
          iVar6 = iVar3 + -1;
        }
        iVar3 = iVar6;
      } while (iVar7 <= iVar6);
    }
  }
  *param_1 = 1;
  uVar5 = *(int *)(param_4 + 0x54) + iVar3 * 0xc;
LAB_143243079:
  *(uint *)(param_1 + 2) = uVar5;
  return param_1;
LAB_143243090:
  *param_1 = 1;
  goto LAB_143243079;
}



// FUNCTION 1432430b0 FUN_1432430b0 body=731 status=ok
// SIG undefined FUN_1432430b0(void)

undefined4 * FUN_1432430b0(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res18 [2];
  float fStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  
  FUN_14323d5f0(param_2);
  local_res18[0] = -1.0;
  fStack_60 = 0.0;
  iStack_5c = 0;
  puVar3 = (ushort *)0x0;
  FUN_143242ea0(&fStack_60,local_res18);
  local_58 = *(undefined4 *)(param_1 + 0x47c);
  uStack_54 = *(undefined4 *)(param_1 + 0x488);
  uVar5 = *(ulonglong *)(param_1 + 0x448) >> 0x20;
  uStack_4c = 0;
  local_48 = local_48 & 0xffffff00;
  iVar4 = (int)(*(ulonglong *)(param_1 + 0x448) >> 0x20);
  puVar2 = puVar3;
  if (iVar4 != 0) {
    puVar2 = (ushort *)(*(longlong *)(param_1 + 0x450) + uVar5);
  }
  fVar11 = *(float *)(param_1 + 0x484);
  uStack_50 = (uint)*puVar2;
  local_res18[0] = (*(float *)(param_1 + 0x480) - *(float *)(param_1 + 0x474)) - fVar11;
  FUN_143242ea0(&fStack_60,local_res18);
  if (param_3 <= iStack_5c) {
    fStack_60 = (float)param_3;
    local_48 = CONCAT31(local_48._1_3_,1);
    iStack_5c = param_3;
  }
  fVar9 = *(float *)(param_1 + 0x478) / *(float *)(param_1 + 0x480);
  if (iVar4 != 0) {
    puVar3 = (ushort *)(uVar5 + *(longlong *)(param_1 + 0x450));
  }
  fVar10 = fVar9 * fVar11 + *(float *)(puVar3 + 4);
  uStack_44 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x124);
  puVar7 = param_2 + 0xe;
  lVar8 = 3;
  *(float *)(param_1 + 0x484) = fVar11 + fStack_60;
  param_2[2] = fVar10;
  param_2[3] = fVar9 * fStack_60 + fVar10;
  param_2[4] = fStack_60;
  param_2[5] = iStack_5c;
  auVar1._4_4_ = uStack_54;
  auVar1._0_4_ = local_58;
  auVar1._8_4_ = uStack_50;
  auVar1._12_4_ = uStack_4c;
  *(undefined1 (*) [16])(param_2 + 6) = auVar1;
  *(ulonglong *)(param_2 + 10) = (ulonglong)local_48;
  do {
    if (*(int *)((longlong)puVar6 + 0x2c) == 1) {
      iVar4 = param_2[5];
      *puVar7 = *(undefined4 *)((longlong)puVar6 + 0x24);
      puVar7[1] = *(undefined4 *)(puVar6 + 8);
      *(undefined8 *)(puVar7 + 6) = *puVar6;
      puVar7[5] = 0;
      local_res18[0] =
           (*(float *)((longlong)puVar6 + 0x34) - *(float *)(puVar6 + 7)) - *(float *)(puVar6 + 4);
      FUN_143242ea0(puVar7 + 2,local_res18);
      if (iVar4 <= (int)puVar7[3]) {
        puVar7[3] = iVar4;
        puVar7[2] = (float)iVar4;
        *(undefined1 *)(puVar7 + 4) = 1;
      }
      *(undefined4 *)((longlong)puVar6 + 0x24) = *(undefined4 *)(puVar6 + 8);
      fVar11 = ((float)*(int *)((longlong)puVar6 + 0x3c) * *(float *)((longlong)puVar6 + 0x34) +
               *(float *)(puVar6 + 4)) *
               (*(float *)((longlong)puVar6 + 0x44) / *(float *)((longlong)puVar6 + 0x34));
      puVar7[-2] = fVar11;
      puVar7[-1] = (*(float *)((longlong)puVar6 + 0x44) / *(float *)((longlong)puVar6 + 0x34)) *
                   (float)puVar7[2] + fVar11;
      *(float *)(puVar6 + 4) = (float)puVar7[2] + *(float *)(puVar6 + 4);
    }
    puVar6 = puVar6 + 0x2c;
    puVar7 = puVar7 + 10;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *param_2 = *(undefined4 *)(param_1 + 0x4ac);
  if (param_2[5] != 0) {
    fVar11 = ((float)param_2[4] /
             ((*(float *)(param_1 + 0x480) - *(float *)(param_1 + 0x498)) -
             (*(float *)(param_1 + 0x484) - (float)param_2[4]))) *
             (*(float *)(param_1 + 0x4a8) - *(float *)(param_1 + 0x4ac)) +
             *(float *)(param_1 + 0x4ac);
    param_2[1] = fVar11;
    *(float *)(param_1 + 0x4ac) = fVar11;
  }
  return param_2;
}



// FUNCTION 143243390 FUN_143243390 body=713 status=ok
// SIG undefined FUN_143243390(void)

undefined4 * FUN_143243390(longlong param_1,undefined4 *param_2,int param_3,float param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res18 [2];
  float fStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint local_58;
  undefined4 uStack_54;
  
  FUN_14323d5f0(param_2);
  local_res18[0] = -1.0;
  fStack_70 = 0.0;
  iStack_6c = 0;
  puVar2 = (ushort *)0x0;
  FUN_143242ea0(&fStack_70,local_res18);
  local_68 = *(undefined4 *)(param_1 + 0x47c);
  uStack_64 = *(undefined4 *)(param_1 + 0x488);
  uVar4 = *(ulonglong *)(param_1 + 0x448) >> 0x20;
  local_58 = local_58 & 0xffffff00;
  iVar3 = (int)(*(ulonglong *)(param_1 + 0x448) >> 0x20);
  puVar1 = puVar2;
  if (iVar3 != 0) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x450) + uVar4);
  }
  fVar10 = *(float *)(param_1 + 0x484);
  local_res18[0] = *(float *)(param_1 + 0x480) - fVar10;
  uStack_60 = (uint)*puVar1;
  FUN_143242ea0(&fStack_70,local_res18);
  if (param_3 < iStack_6c) {
    fStack_70 = (float)param_3;
    local_58 = CONCAT31(local_58._1_3_,1);
    iStack_6c = param_3;
  }
  fVar8 = *(float *)(param_1 + 0x478) / *(float *)(param_1 + 0x480);
  if (iVar3 != 0) {
    puVar2 = (ushort *)(uVar4 + *(longlong *)(param_1 + 0x450));
  }
  fVar9 = fVar8 * fVar10 + *(float *)(puVar2 + 4);
  uStack_54 = 0;
  piVar5 = (int *)(param_1 + 0x16c);
  puVar6 = (undefined8 *)(param_2 + 0x14);
  lVar7 = 3;
  *(float *)(param_1 + 0x484) = fVar10 + fStack_70;
  param_2[2] = fVar9;
  param_2[3] = fVar8 * fStack_70 + fVar9;
  param_2[4] = fStack_70;
  param_2[5] = iStack_6c;
  param_2[6] = local_68;
  param_2[7] = uStack_64;
  param_2[8] = uStack_60;
  param_2[9] = param_4;
  *(ulonglong *)(param_2 + 10) = (ulonglong)local_58;
  do {
    if ((piVar5[-7] == 1) && (*piVar5 != 1)) {
      iVar3 = param_2[5];
      *(int *)(puVar6 + -3) = piVar5[-9];
      *puVar6 = *(undefined8 *)(piVar5 + -0x12);
      *(undefined4 *)((longlong)puVar6 + -4) = 0;
      local_res18[0] = (float)piVar5[-5] - (float)piVar5[-10];
      FUN_143242ea0(puVar6 + -2,local_res18);
      if (iVar3 < *(int *)((longlong)puVar6 + -0xc)) {
        *(undefined1 *)(puVar6 + -1) = 1;
        *(int *)((longlong)puVar6 + -0xc) = iVar3;
        *(float *)(puVar6 + -2) = (float)iVar3;
      }
      if (*piVar5 == 3) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)piVar5[-2];
      }
      fVar10 = (*(float *)(puVar6 + -2) / ((float)piVar5[-4] - param_4)) *
               (fVar10 - *(float *)(puVar6 + -3)) + *(float *)(puVar6 + -3);
      *(float *)((longlong)puVar6 + -0x14) = fVar10;
      piVar5[-9] = (int)fVar10;
      fVar10 = ((float)piVar5[-3] * (float)piVar5[-5] + (float)piVar5[-10]) *
               ((float)piVar5[-1] / (float)piVar5[-5]);
      *(float *)(puVar6 + -4) = fVar10;
      *(float *)((longlong)puVar6 + -0x1c) =
           ((float)piVar5[-1] / (float)piVar5[-5]) * *(float *)(puVar6 + -2) + fVar10;
      piVar5[-10] = (int)(*(float *)(puVar6 + -2) + (float)piVar5[-10]);
    }
    piVar5 = piVar5 + 0x58;
    puVar6 = puVar6 + 5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *param_2 = *(undefined4 *)(param_1 + 0x4a8);
  param_2[1] = *(undefined4 *)(param_1 + 0x4a8);
  return param_2;
}



// FUNCTION 143243660 FUN_143243660 body=654 status=ok
// SIG undefined FUN_143243660(void)

void FUN_143243660(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,ulonglong param_8)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ushort *puVar10;
  longlong lVar11;
  
  puVar10 = (ushort *)0x0;
  *param_1 = param_2;
  iVar9 = (int)(param_2 >> 0x20);
  puVar6 = puVar10;
  if (iVar9 != 0) {
    puVar6 = (ushort *)((param_2 >> 0x20) + param_4);
  }
  puVar7 = puVar10;
  if (*(uint *)(puVar6 + 0x12) != 0) {
    puVar7 = (ushort *)(*(uint *)(puVar6 + 0x12) + param_4);
  }
  uVar2 = *(undefined4 *)(puVar7 + 0x14);
  *(undefined4 *)(param_1 + 0x92) = uVar2;
  *(undefined4 *)(param_1 + 0x93) = param_7;
  param_1[0x94] = param_8;
  *(undefined4 *)((longlong)param_1 + 0x494) = param_5;
  puVar6 = puVar10;
  if (*(uint *)((longlong)param_1 + 4) != 0) {
    puVar6 = (ushort *)(*(uint *)((longlong)param_1 + 4) + param_4);
  }
  uVar4 = *(ulonglong *)(puVar6 + 0x10);
  param_1[0x89] = param_3;
  param_1[0x88] = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x474) = param_7;
  param_1[0x8a] = param_4;
  puVar6 = puVar10;
  if ((int)(param_3 >> 0x20) != 0) {
    puVar6 = (ushort *)((param_3 >> 0x20) + param_4);
  }
  uVar3 = puVar6[1];
  *(undefined4 *)((longlong)param_1 + 0x46c) = uVar2;
  param_1[0x8b] = param_8;
  *(undefined4 *)(param_1 + 0x8e) = param_5;
  *(float *)(param_1 + 0x8f) = (float)uVar3;
  puVar6 = puVar10;
  if (*(uint *)((longlong)param_1 + 0x44c) != 0) {
    puVar6 = (ushort *)(*(uint *)((longlong)param_1 + 0x44c) + param_4);
  }
  *(uint *)((longlong)param_1 + 0x464) = (uint)*puVar6;
  puVar6 = puVar10;
  if (*(uint *)((longlong)param_1 + 0x44c) != 0) {
    puVar6 = (ushort *)(*(uint *)((longlong)param_1 + 0x44c) + param_4);
  }
  *(uint *)(param_1 + 0x8c) = (uint)*puVar6;
  puVar6 = puVar10;
  if (*(uint *)((longlong)param_1 + 0x44c) != 0) {
    puVar6 = (ushort *)(*(uint *)((longlong)param_1 + 0x44c) + param_4);
  }
  *(float *)(param_1 + 0x90) = (float)puVar6[1];
  puVar6 = puVar10;
  if (*(uint *)((longlong)param_1 + 0x44c) != 0) {
    puVar6 = (ushort *)(*(uint *)((longlong)param_1 + 0x44c) + param_4);
  }
  uVar2 = *(undefined4 *)(puVar6 + 2);
  puVar1 = param_1 + 1;
  *(undefined4 *)((longlong)param_1 + 0x47c) = uVar2;
  *(undefined4 *)(param_1 + 0x91) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_8 + 0x1c);
  param_1[2] = param_2;
  param_1[3] = param_4;
  puVar6 = puVar10;
  if (iVar9 != 0) {
    puVar6 = (ushort *)((param_2 >> 0x20) + param_4);
  }
  puVar7 = puVar10;
  if (*(uint *)(puVar6 + 0xe) != 0) {
    puVar7 = (ushort *)(*(uint *)(puVar6 + 0xe) + param_4);
  }
  if (*(int *)(puVar7 + 8) == 0) {
    *(char *)puVar1 = '\0';
  }
  else {
    puVar8 = (undefined4 *)((longlong)param_1 + 0x15c);
    *(char *)puVar1 = '\x01';
    lVar11 = 3;
    do {
      puVar6 = puVar10;
      if (*(uint *)((longlong)param_1 + 0x14) != 0) {
        puVar6 = (ushort *)(*(uint *)((longlong)param_1 + 0x14) + param_4);
      }
      uVar5 = *(undefined8 *)(puVar6 + 0xc);
      FUN_143242860(puVar8 + -0x4f,1,param_4,param_5,1);
      *puVar8 = param_7;
      *(undefined8 *)(puVar8 + 6) = uVar5;
      puVar8[-3] = 0;
      puVar8 = puVar8 + 0x58;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((char)*puVar1 != '\0') {
    FUN_143244430(puVar1,*(undefined4 *)((longlong)param_1 + 0x47c),(int)param_1[0x90]);
  }
  return;
}



// FUNCTION 1432438f0 FUN_1432438f0 body=407 status=ok
// SIG undefined FUN_1432438f0(void)

void FUN_1432438f0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined2 uStackX_a;
  
  lVar6 = 0;
  lVar4 = lVar6;
  if (*(uint *)(param_1 + 0x444) != 0) {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x444) + *(longlong *)(param_1 + 0x450);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x458) + 0x20);
  iVar2 = (*(int *)(lVar4 + 0x14) - iVar5) + -1;
  iVar5 = iVar5 + 1;
  iVar3 = *(int *)(param_1 + 0x464);
  if (iVar2 < *(int *)(param_1 + 0x464)) {
    *(int *)(param_1 + 0x464) = iVar2;
    iVar3 = iVar2;
  }
  if (iVar3 < iVar5) {
    *(int *)(param_1 + 0x464) = iVar5;
  }
LAB_143243966:
  do {
    iVar3 = rand();
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x458) + 0x20);
    iVar3 = (int)((float)(iVar5 * 2 + 1) * (float)iVar3 * 3.0517578e-05) - iVar5;
    if (iVar3 == *(int *)(param_1 + 0x468)) {
      if (iVar5 != 0) goto LAB_143243966;
    }
    iVar5 = *(int *)(param_1 + 0x464) + iVar3;
    if (-1 < iVar5) {
      lVar4 = lVar6;
      if (*(uint *)(param_1 + 0x444) != 0) {
        lVar4 = (ulonglong)*(uint *)(param_1 + 0x444) + *(longlong *)(param_1 + 0x450);
      }
      if (iVar5 < *(int *)(lVar4 + 0x14)) {
        *(int *)(param_1 + 0x460) = iVar5;
        lVar4 = lVar6;
        if (*(uint *)(param_1 + 0x444) != 0) {
          lVar4 = (ulonglong)*(uint *)(param_1 + 0x444) + *(longlong *)(param_1 + 0x450);
        }
        *(ulonglong *)(param_1 + 0x448) =
             CONCAT44(*(int *)(lVar4 + 0x54) + iVar5 * 0xc,CONCAT22(uStackX_a,1));
        if (*(uint *)(param_1 + 0x44c) != 0) {
          lVar6 = (ulonglong)*(uint *)(param_1 + 0x44c) + *(longlong *)(param_1 + 0x450);
        }
        uVar1 = *(ushort *)(lVar6 + 2);
        *(undefined4 *)(param_1 + 0x480) = param_3;
        *(int *)(param_1 + 0x468) = iVar3;
        *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x47c);
        *(undefined4 *)(param_1 + 0x47c) = param_2;
        *(float *)(param_1 + 0x478) = (float)uVar1;
        if (*(char *)(param_1 + 8) != '\0') {
          FUN_143244430((char *)(param_1 + 8),param_2,param_3);
        }
        return;
      }
    }
  } while( true );
}



// FUNCTION 143243a90 FUN_143243a90 body=335 status=ok
// SIG undefined FUN_143243a90(void)

void FUN_143243a90(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  int *piVar4;
  ushort *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 uStackX_a;
  
  puVar5 = (ushort *)0x0;
  puVar3 = puVar5;
  if (param_1[0x113] != 0) {
    puVar3 = (ushort *)((ulonglong)(uint)param_1[0x113] + *(longlong *)(param_1 + 0x114));
  }
  uVar1 = *puVar3;
  param_1[0x118] = uVar1 + 1;
  puVar3 = puVar5;
  if (param_1[0x111] != 0) {
    puVar3 = (ushort *)((ulonglong)(uint)param_1[0x111] + *(longlong *)(param_1 + 0x114));
  }
  *(ulonglong *)(param_1 + 0x112) =
       CONCAT44(*(int *)(puVar3 + 0x2a) + (uVar1 + 1) * 0xc,CONCAT22(uStackX_a,1));
  puVar3 = puVar5;
  if (param_1[0x113] != 0) {
    puVar3 = (ushort *)((ulonglong)(uint)param_1[0x113] + *(longlong *)(param_1 + 0x114));
  }
  uVar1 = puVar3[1];
  param_1[0x121] = 0;
  lVar6 = 3;
  param_1[0x11e] = (int)(float)uVar1;
  piVar2 = param_1;
  do {
    piVar4 = piVar2 + 0x58;
    if (piVar2[0x54] == 1) {
      if (piVar2[0x5b] == 3) {
        FUN_143242e20(piVar2 + 8);
        piVar2[0x56] = 0;
        piVar4[0] = 0;
        piVar4[1] = 0;
        piVar2[0x5c] = -1;
        piVar2[0x5a] = 0;
        piVar2[0x5b] = 0;
      }
      else {
        iVar7 = *piVar4;
        *piVar4 = iVar7 + 1;
        puVar3 = puVar5;
        if ((int)(*(ulonglong *)(piVar2 + 0x49) >> 0x20) != 0) {
          puVar3 = (ushort *)
                   (*(longlong *)(piVar2 + 0x4c) + (*(ulonglong *)(piVar2 + 0x49) >> 0x20));
        }
        *piVar4 = (iVar7 + 1) % *(int *)(puVar3 + 10);
        piVar2[0x5b] = 0;
        piVar2[0x51] = 0;
        piVar2[0x52] = piVar2[0x59];
      }
    }
    lVar6 = lVar6 + -1;
    piVar2 = piVar4;
  } while (lVar6 != 0);
  iVar7 = FUN_143244270(param_1,param_1[0x122],param_1[0x11f]);
  param_1[0x12a] = iVar7;
  return;
}



// FUNCTION 143243be0 FUN_143243be0 body=840 status=ok
// SIG undefined FUN_143243be0(void)

void FUN_143243be0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int *piVar5;
  undefined2 uStackX_a;
  
  puVar3 = (ushort *)0x0;
  puVar2 = puVar3;
  if (*(uint *)(param_1 + 0x44c) != 0) {
    puVar2 = (ushort *)((ulonglong)*(uint *)(param_1 + 0x44c) + *(longlong *)(param_1 + 0x450));
  }
  uVar1 = *puVar2;
  *(uint *)(param_1 + 0x460) = uVar1 - 1;
  puVar2 = puVar3;
  if (*(uint *)(param_1 + 0x444) != 0) {
    puVar2 = (ushort *)((ulonglong)*(uint *)(param_1 + 0x444) + *(longlong *)(param_1 + 0x450));
  }
  *(ulonglong *)(param_1 + 0x448) =
       CONCAT44(*(int *)(puVar2 + 0x2a) + (uVar1 - 1) * 0xc,CONCAT22(uStackX_a,1));
  puVar2 = puVar3;
  if (*(uint *)(param_1 + 0x44c) != 0) {
    puVar2 = (ushort *)((ulonglong)*(uint *)(param_1 + 0x44c) + *(longlong *)(param_1 + 0x450));
  }
  uVar1 = puVar2[1];
  *(float *)(param_1 + 0x484) = *(float *)(param_1 + 0x480) - *(float *)(param_1 + 0x474);
  *(float *)(param_1 + 0x478) = (float)uVar1;
  if (*(int *)(param_1 + 0x150) == 1) {
    piVar5 = (int *)(param_2 + 0x170);
    puVar2 = puVar3;
    do {
      if (*piVar5 == *(int *)(param_1 + 0x170)) goto LAB_143243ccc;
      puVar2 = (ushort *)((longlong)puVar2 + 1);
      piVar5 = piVar5 + 0x58;
    } while ((longlong)puVar2 < 3);
    puVar2 = (ushort *)&DAT_ffffffffffffffff;
LAB_143243ccc:
    if (puVar2 == (ushort *)&DAT_ffffffffffffffff) {
      *(undefined4 *)(param_1 + 0x16c) = 2;
      *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x15c);
    }
    else {
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)((longlong)puVar2 * 0x160 + 0x160 + param_2)
      ;
      *(undefined4 *)((longlong)puVar2 * 0x160 + 0x164 + param_2) = *(undefined4 *)(param_1 + 0x164)
      ;
      *(undefined4 *)(param_1 + 0x16c) = 1;
    }
  }
  if (*(int *)(param_1 + 0x2b0) == 1) {
    piVar5 = (int *)(param_2 + 0x170);
    puVar2 = puVar3;
    do {
      if (*piVar5 == *(int *)(param_1 + 0x2d0)) goto LAB_143243d5a;
      puVar2 = (ushort *)((longlong)puVar2 + 1);
      piVar5 = piVar5 + 0x58;
    } while ((longlong)puVar2 < 3);
    puVar2 = (ushort *)&DAT_ffffffffffffffff;
LAB_143243d5a:
    if (puVar2 == (ushort *)&DAT_ffffffffffffffff) {
      *(undefined4 *)(param_1 + 0x2cc) = 2;
      *(float *)(param_1 + 0x2a4) = *(float *)(param_1 + 0x2b8) - *(float *)(param_1 + 700);
    }
    else {
      *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)((longlong)puVar2 * 0x160 + 0x160 + param_2)
      ;
      *(undefined4 *)((longlong)puVar2 * 0x160 + 0x164 + param_2) = *(undefined4 *)(param_1 + 0x2c4)
      ;
      *(undefined4 *)(param_1 + 0x2cc) = 1;
    }
  }
  if (*(int *)(param_1 + 0x410) == 1) {
    piVar5 = (int *)(param_2 + 0x170);
    puVar2 = puVar3;
    do {
      puVar4 = puVar2;
      if (*piVar5 == *(int *)(param_1 + 0x430)) break;
      puVar2 = (ushort *)((longlong)puVar2 + 1);
      piVar5 = piVar5 + 0x58;
      puVar4 = (ushort *)&DAT_ffffffffffffffff;
    } while ((longlong)puVar2 < 3);
    if (puVar4 == (ushort *)&DAT_ffffffffffffffff) {
      *(undefined4 *)(param_1 + 0x42c) = 2;
      *(float *)(param_1 + 0x404) = *(float *)(param_1 + 0x418) - *(float *)(param_1 + 0x41c);
    }
    else {
      *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)((longlong)puVar4 * 0x160 + 0x160 + param_2)
      ;
      *(undefined4 *)((longlong)puVar4 * 0x160 + 0x164 + param_2) = *(undefined4 *)(param_1 + 0x424)
      ;
      *(undefined4 *)(param_1 + 0x42c) = 1;
    }
  }
  if (*(int *)(param_2 + 0x150) == 1) {
    piVar5 = (int *)(param_1 + 0x170);
    puVar2 = puVar3;
    puVar4 = puVar3;
    do {
      if (*piVar5 == *(int *)(param_2 + 0x170)) {
        if ((int)puVar4 != -1) goto LAB_143243e89;
        break;
      }
      puVar4 = (ushort *)(ulonglong)((int)puVar4 + 1);
      puVar2 = (ushort *)((longlong)puVar2 + 1);
      piVar5 = piVar5 + 0x58;
    } while ((longlong)puVar2 < 3);
    *(undefined4 *)(param_2 + 0x16c) = 3;
  }
LAB_143243e89:
  if (*(int *)(param_2 + 0x2b0) == 1) {
    piVar5 = (int *)(param_1 + 0x170);
    puVar2 = puVar3;
    puVar4 = puVar3;
    do {
      if (*piVar5 == *(int *)(param_2 + 0x2d0)) {
        if ((int)puVar4 != -1) goto LAB_143243ece;
        break;
      }
      puVar4 = (ushort *)(ulonglong)((int)puVar4 + 1);
      puVar2 = (ushort *)((longlong)puVar2 + 1);
      piVar5 = piVar5 + 0x58;
    } while ((longlong)puVar2 < 3);
    *(undefined4 *)(param_2 + 0x2cc) = 3;
  }
LAB_143243ece:
  if (*(int *)(param_2 + 0x410) == 1) {
    piVar5 = (int *)(param_1 + 0x170);
    puVar2 = puVar3;
    while (*piVar5 != *(int *)(param_2 + 0x430)) {
      puVar2 = (ushort *)(ulonglong)((int)puVar2 + 1);
      puVar3 = (ushort *)((longlong)puVar3 + 1);
      piVar5 = piVar5 + 0x58;
      if (2 < (longlong)puVar3) {
        *(undefined4 *)(param_2 + 0x42c) = 3;
        return;
      }
    }
    if ((int)puVar2 == -1) {
      *(undefined4 *)(param_2 + 0x42c) = 3;
    }
  }
  return;
}



// FUNCTION 143243f30 FUN_143243f30 body=92 status=ok
// SIG undefined FUN_143243f30(void)

void FUN_143243f30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x4a0) = param_3;
  lVar1 = param_1 + 0x20;
  *(undefined8 *)(param_1 + 0x450) = param_2;
  *(undefined8 *)(param_1 + 0x458) = param_3;
  lVar2 = 3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  do {
    FUN_143242e10(lVar1,param_2);
    lVar1 = lVar1 + 0x160;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143243f90 FUN_143243f90 body=66 status=ok
// SIG undefined FUN_143243f90(void)

void FUN_143243f90(longlong param_1,longlong param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x498) = param_3;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x474) = param_3;
    *(longlong *)(param_1 + 0x4a0) = param_2;
    *(longlong *)(param_1 + 0x458) = param_2;
    *(undefined4 *)(param_1 + 0x15c) = param_3;
    *(undefined4 *)(param_1 + 700) = param_3;
    *(undefined4 *)(param_1 + 0x41c) = param_3;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x1c);
  }
  return;
}



// FUNCTION 143243fe0 FUN_143243fe0 body=395 status=ok
// SIG undefined FUN_143243fe0(void)

void FUN_143243fe0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar5 = (longlong)param_2 * 0x160 + param_1;
  if (param_5 == -1) {
    FUN_143242e20(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x168) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x150) = 0;
    *(undefined8 *)(lVar5 + 0x158) = 0;
    *(undefined8 *)(lVar5 + 0x160) = 0;
    return;
  }
  if (*(int *)(lVar5 + 0x168) != param_5) {
    lVar7 = 0;
    iVar6 = 0;
    lVar4 = (longlong)
            (param_2 +
            (param_2 / 3 + (param_2 >> 0x1f) +
            (int)(((longlong)param_2 / 3 + ((longlong)param_2 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3
            ) * 0x160;
    if (*(int *)(lVar4 + 0x148 + param_1) == 1) {
      iVar6 = *(int *)(lVar4 + 0x158 + param_1);
    }
    lVar4 = lVar7;
    if (*(uint *)(lVar5 + 0x170) != 0) {
      lVar4 = (ulonglong)*(uint *)(lVar5 + 0x170) + *(longlong *)(lVar5 + 0x128);
    }
    lVar3 = lVar7;
    if (*(uint *)(lVar4 + 0x18) != 0) {
      lVar3 = (ulonglong)*(uint *)(lVar4 + 0x18) + *(longlong *)(lVar5 + 0x128);
    }
    uVar2 = *(ulonglong *)(lVar3 + (longlong)param_5 * 8);
    uVar8 = (uint)(uVar2 >> 0x20);
    lVar4 = lVar7;
    if (uVar8 != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x128) + (uVar2 >> 0x20);
    }
    iVar1 = *(int *)(lVar4 + 0x14);
    *(ulonglong *)(lVar5 + 0x11c) = uVar2;
    *(int *)(lVar5 + 0x158) = iVar6 % iVar1;
    *(undefined4 *)(lVar5 + 0x15c) = param_3;
    *(undefined4 *)(lVar5 + 0x150) = param_4;
    *(undefined8 *)(lVar5 + 0x13c) = 0;
    lVar4 = lVar7;
    if (uVar8 != 0) {
      lVar7 = (ulonglong)uVar8 + *(longlong *)(lVar5 + 0x128);
      lVar4 = (uVar2 >> 0x20) + *(longlong *)(lVar5 + 0x128);
    }
    iVar6 = *(int *)(lVar4 + 0x20);
    iVar1 = *(int *)(lVar7 + 0x14);
    *(undefined4 *)(lVar5 + 0x148) = 1;
    *(int *)(lVar5 + 0x168) = param_5;
    *(float *)(lVar5 + 0x160) = (float)(iVar6 / iVar1);
    return;
  }
  *(undefined4 *)(lVar5 + 0x15c) = param_3;
  *(undefined4 *)(lVar5 + 0x150) = param_4;
  return;
}



// FUNCTION 143244170 FUN_143244170 body=256 status=ok
// SIG undefined FUN_143244170(void)

void FUN_143244170(longlong param_1,int param_2,int param_3,int param_4,float param_5,
                  undefined4 param_6)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000008;
  
  *(int *)(param_1 + 0x464) = param_2;
  iVar14 = -param_4;
  if (param_3 == 0) {
    iVar14 = param_4;
  }
  lVar12 = 0;
  *(int *)(param_1 + 0x468) = iVar14;
  lVar6 = lVar12;
  if (*(uint *)(param_1 + 0x444) != 0) {
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x444) + *(longlong *)(param_1 + 0x450);
  }
  iVar14 = *(int *)(param_1 + 0x468) + param_2;
  if ((*(int *)(lVar6 + 0x14) + -1 < iVar14) || (iVar5 = *(int *)(param_1 + 0x468), iVar14 < 1)) {
    *(undefined4 *)(param_1 + 0x468) = 0;
    iVar5 = 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)(param_1 + 0x480) = param_6;
  *(float *)(param_1 + 0x47c) = param_5;
  *(int *)(param_1 + 0x460) = iVar5 + param_2;
  *(undefined4 *)(param_1 + 0x488) = uVar2;
  lVar6 = lVar12;
  if (*(uint *)(param_1 + 0x444) != 0) {
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x444) + *(longlong *)(param_1 + 0x450);
  }
  *(ulonglong *)(param_1 + 0x448) =
       CONCAT44(*(int *)(lVar6 + 0x54) + (iVar5 + param_2) * 0xc,
                (int)CONCAT62((int6)((ulonglong)in_stack_00000008 >> 0x10),1));
  if (*(uint *)(param_1 + 0x44c) != 0) {
    lVar12 = (ulonglong)*(uint *)(param_1 + 0x44c) + *(longlong *)(param_1 + 0x450);
  }
  pcVar1 = (char *)(param_1 + 8);
  *(float *)(param_1 + 0x478) = (float)*(ushort *)(lVar12 + 2);
  if (*pcVar1 == '\0') {
    return;
  }
  uVar13 = 0;
  uVar7 = uVar13;
  if (*(uint *)(param_1 + 0x14) != 0) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x14) + *(longlong *)(param_1 + 0x18);
  }
  uVar8 = uVar13;
  if (*(uint *)(uVar7 + 0x1c) != 0) {
    uVar8 = (ulonglong)*(uint *)(uVar7 + 0x1c) + *(longlong *)(param_1 + 0x18);
  }
  iVar14 = *(int *)(uVar8 + 0x10) + -1;
  if (0 < iVar14) {
    uVar3 = *(uint *)(uVar8 + 0x18);
    uVar7 = uVar13;
    uVar15 = uVar13;
    do {
      uVar9 = uVar13;
      uVar11 = uVar13;
      if (uVar3 != 0) {
        uVar9 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar3;
        uVar11 = (ulonglong)uVar3;
      }
      uVar4 = *(uint *)(uVar9 + 4 + uVar15 * 8);
      uVar9 = uVar13;
      if (uVar4 != 0) {
        uVar9 = (ulonglong)uVar4 + *(longlong *)(param_1 + 0x18);
      }
      uVar10 = uVar13;
      if (uVar3 != 0) {
        uVar10 = *(longlong *)(param_1 + 0x18) + uVar11;
      }
      uVar4 = *(uint *)(uVar10 + 0xc + uVar15 * 8);
      uVar11 = uVar13;
      if (uVar4 != 0) {
        uVar11 = (ulonglong)uVar4 + *(longlong *)(param_1 + 0x18);
      }
      iVar5 = (int)uVar7;
      if (uVar15 == 0) {
        fVar18 = *(float *)(uVar9 + 0x10);
        if (param_5 <= fVar18) {
          FUN_143243fe0(pcVar1,0,0x3f400000,param_6,iVar5);
          FUN_143243fe0(pcVar1,1,0x3e800000,param_6,iVar5 + 1);
          FUN_143242e20(param_1 + 0x2e0);
          *(undefined4 *)(param_1 + 0x418) = 0;
          *(undefined8 *)(param_1 + 0x420) = 0;
          *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x428) = 0;
          return;
        }
        fVar16 = (*(float *)(uVar11 + 0x10) - fVar18) * 0.5 + fVar18;
        if (param_5 <= fVar16) {
          fVar18 = ((param_5 - fVar18) / fVar16) * 0.25;
          FUN_143243fe0(pcVar1,0,0.75 - fVar18,param_6,iVar5);
          FUN_143243fe0(pcVar1,1,fVar18 + 0.25,param_6,iVar5 + 1);
          FUN_143242e20(param_1 + 0x2e0);
          *(undefined4 *)(param_1 + 0x418) = 0;
          *(undefined8 *)(param_1 + 0x420) = 0;
          *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x428) = 0;
          return;
        }
      }
      if (iVar5 == *(int *)(uVar8 + 0x10) + -2) {
        fVar18 = *(float *)(uVar11 + 0x10);
        if (fVar18 < param_5) {
          FUN_143242e20(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
          *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x168) = 0;
          FUN_143243fe0(pcVar1,1,0x3e800000,param_6,iVar5);
          fVar18 = 0.75;
          iVar5 = iVar5 + 1;
          goto LAB_1432447d8;
        }
        fVar16 = *(float *)(uVar9 + 0x10);
        fVar17 = (fVar18 - fVar16) * 0.5 + fVar16;
        if ((fVar17 <= param_5) && (param_5 <= fVar18)) {
          FUN_143242e20(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
          *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x168) = 0;
          fVar18 = ((param_5 - fVar16) / fVar17) * 0.25;
          FUN_143243fe0(pcVar1,1,0.5 - fVar18,param_6,iVar5);
          iVar5 = iVar5 + 1;
          fVar18 = fVar18 + 0.5;
          goto LAB_1432447d8;
        }
      }
      fVar18 = *(float *)(uVar9 + 0x10);
      if ((fVar18 < param_5) && (param_5 <= *(float *)(uVar11 + 0x10))) {
        fVar18 = (param_5 - fVar18) / (*(float *)(uVar11 + 0x10) - fVar18);
        if (0.5 <= fVar18) {
          fVar18 = (fVar18 - 0.5) * 0.25;
          FUN_143243fe0(pcVar1,0,0.5 - fVar18,param_6,iVar5);
          FUN_143243fe0(pcVar1,1,0x3f000000,param_6,iVar5 + 1);
          iVar5 = iVar5 + 2;
        }
        else {
          FUN_143243fe0(pcVar1,0,0.25 - fVar18 * 0.25,param_6,iVar5 + -1);
          FUN_143243fe0(pcVar1,1,0x3f000000,param_6,iVar5);
          iVar5 = iVar5 + 1;
          fVar18 = fVar18 * 0.25 + 0.25;
        }
LAB_1432447d8:
        FUN_143243fe0(pcVar1,2,fVar18,param_6,iVar5);
        return;
      }
      uVar7 = (ulonglong)(iVar5 + 1);
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 < (longlong)iVar14);
  }
  return;
}



// FUNCTION 143244270 FUN_143244270 body=446 status=ok
// SIG undefined FUN_143244270(void)

float FUN_143244270(longlong param_1)

{
  int iVar1;
  float fVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  fVar2 = 1.0;
  if (*(char *)(param_1 + 8) != '\0') {
    local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x4a0) + 0x10);
    local_34 = *(undefined4 *)(*(longlong *)(param_1 + 0x4a0) + 0x14);
    local_30 = 0x3f800000;
    local_38 = 0;
    local_28 = 0;
    uStack_20 = 0;
    CRYPTO_THREADID_cpy(&local_28,&local_38);
    fVar2 = (float)FUN_143242590(&local_28);
    iVar1 = *(int *)(param_1 + 0x4d8);
    if (iVar1 < 10) {
      *(float *)(param_1 + 0x4b0 + (longlong)iVar1 * 4) = fVar2;
      *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
      *(float *)(param_1 + 0x4dc) = fVar2 + *(float *)(param_1 + 0x4dc);
    }
    else {
      *(int *)(param_1 + 0x4d8) = iVar1 + 1;
      *(float *)(param_1 + 0x4dc) =
           (fVar2 - *(float *)(param_1 + 0x4b0 + (longlong)(iVar1 % 10) * 4)) +
           *(float *)(param_1 + 0x4dc);
      *(float *)(param_1 + 0x4b0 + (longlong)(iVar1 % 10) * 4) = fVar2;
      if (*(int *)(param_1 + 0x4d8) == (*(int *)(param_1 + 0x4d8) / 10) * 10) {
        *(float *)(param_1 + 0x4dc) =
             *(float *)(param_1 + 0x4b4) + *(float *)(param_1 + 0x4b0) + *(float *)(param_1 + 0x4b8)
             + *(float *)(param_1 + 0x4bc) + *(float *)(param_1 + 0x4c0) +
             *(float *)(param_1 + 0x4c4) + *(float *)(param_1 + 0x4c8) + *(float *)(param_1 + 0x4cc)
             + *(float *)(param_1 + 0x4d0) + *(float *)(param_1 + 0x4d4);
      }
    }
    iVar1 = *(int *)(param_1 + 0x4d8);
    if (10 < iVar1) {
      iVar1 = 10;
    }
    fVar2 = *(float *)(param_1 + 0x4dc) / (float)iVar1;
  }
  return fVar2;
}



// FUNCTION 143244430 FUN_143244430 body=1013 status=ok
// SIG undefined FUN_143244430(void)

void FUN_143244430(longlong param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar10 = 0;
  uVar5 = uVar10;
  if (*(uint *)(param_1 + 0xc) != 0) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0xc) + *(longlong *)(param_1 + 0x10);
  }
  uVar6 = uVar10;
  if (*(uint *)(uVar5 + 0x1c) != 0) {
    uVar6 = (ulonglong)*(uint *)(uVar5 + 0x1c) + *(longlong *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(uVar6 + 0x10) + -1;
  if (0 < iVar1) {
    uVar2 = *(uint *)(uVar6 + 0x18);
    uVar5 = uVar10;
    uVar11 = uVar10;
    do {
      uVar7 = uVar10;
      uVar9 = uVar10;
      if (uVar2 != 0) {
        uVar7 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar2;
        uVar9 = (ulonglong)uVar2;
      }
      uVar3 = *(uint *)(uVar7 + 4 + uVar11 * 8);
      uVar7 = uVar10;
      if (uVar3 != 0) {
        uVar7 = (ulonglong)uVar3 + *(longlong *)(param_1 + 0x10);
      }
      uVar8 = uVar10;
      if (uVar2 != 0) {
        uVar8 = *(longlong *)(param_1 + 0x10) + uVar9;
      }
      uVar3 = *(uint *)(uVar8 + 0xc + uVar11 * 8);
      uVar9 = uVar10;
      if (uVar3 != 0) {
        uVar9 = (ulonglong)uVar3 + *(longlong *)(param_1 + 0x10);
      }
      iVar4 = (int)uVar5;
      if (uVar11 == 0) {
        fVar14 = *(float *)(uVar7 + 0x10);
        if (param_2 <= fVar14) {
          FUN_143243fe0(param_1,0,0x3f400000,param_3,iVar4);
          FUN_143243fe0(param_1,1,0x3e800000,param_3,iVar4 + 1);
          FUN_143242e20(param_1 + 0x2d8);
          *(undefined4 *)(param_1 + 0x410) = 0;
          *(undefined8 *)(param_1 + 0x418) = 0;
          *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x420) = 0;
          return;
        }
        fVar12 = (*(float *)(uVar9 + 0x10) - fVar14) * 0.5 + fVar14;
        if (param_2 <= fVar12) {
          fVar14 = ((param_2 - fVar14) / fVar12) * 0.25;
          FUN_143243fe0(param_1,0,0.75 - fVar14,param_3,iVar4);
          FUN_143243fe0(param_1,1,fVar14 + 0.25,param_3,iVar4 + 1);
          FUN_143242e20(param_1 + 0x2d8);
          *(undefined4 *)(param_1 + 0x410) = 0;
          *(undefined8 *)(param_1 + 0x418) = 0;
          *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x420) = 0;
          return;
        }
      }
      if (iVar4 == *(int *)(uVar6 + 0x10) + -2) {
        fVar14 = *(float *)(uVar9 + 0x10);
        if (fVar14 < param_2) {
          FUN_143242e20(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x150) = 0;
          *(undefined8 *)(param_1 + 0x158) = 0;
          *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x160) = 0;
          FUN_143243fe0(param_1,1,0x3e800000,param_3,iVar4);
          fVar14 = 0.75;
          iVar4 = iVar4 + 1;
          goto LAB_1432447d8;
        }
        fVar12 = *(float *)(uVar7 + 0x10);
        fVar13 = (fVar14 - fVar12) * 0.5 + fVar12;
        if ((fVar13 <= param_2) && (param_2 <= fVar14)) {
          FUN_143242e20(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x150) = 0;
          *(undefined8 *)(param_1 + 0x158) = 0;
          *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x160) = 0;
          fVar14 = ((param_2 - fVar12) / fVar13) * 0.25;
          FUN_143243fe0(param_1,1,0.5 - fVar14,param_3,iVar4);
          iVar4 = iVar4 + 1;
          fVar14 = fVar14 + 0.5;
          goto LAB_1432447d8;
        }
      }
      fVar14 = *(float *)(uVar7 + 0x10);
      if ((fVar14 < param_2) && (param_2 <= *(float *)(uVar9 + 0x10))) {
        fVar14 = (param_2 - fVar14) / (*(float *)(uVar9 + 0x10) - fVar14);
        if (0.5 <= fVar14) {
          fVar14 = (fVar14 - 0.5) * 0.25;
          FUN_143243fe0(param_1,0,0.5 - fVar14,param_3,iVar4);
          FUN_143243fe0(param_1,1,0x3f000000,param_3,iVar4 + 1);
          iVar4 = iVar4 + 2;
        }
        else {
          FUN_143243fe0(param_1,0,0.25 - fVar14 * 0.25,param_3,iVar4 + -1);
          FUN_143243fe0(param_1,1,0x3f000000,param_3,iVar4);
          iVar4 = iVar4 + 1;
          fVar14 = fVar14 * 0.25 + 0.25;
        }
LAB_1432447d8:
        FUN_143243fe0(param_1,2,fVar14,param_3,iVar4);
        return;
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar1);
  }
  return;
}



// FUNCTION 143244830 FUN_143244830 body=14 status=ok
// SIG undefined FUN_143244830(void)

void FUN_143244830(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    param_1[0] = 1;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 143244840 FUN_143244840 body=229 status=ok
// SIG undefined FUN_143244840(void)

undefined8 * FUN_143244840(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_145aed468;
  iVar1 = (int)param_1;
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x198);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x188);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x170);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x160);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x148);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x138);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x120);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x100);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0xe0);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0xc0);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0xa0);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x80);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x60);
  AK::MemoryMgr::StartProfileThreadUsage(iVar1 + 0x40);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 143244930 FUN_143244930 body=257 status=ok
// SIG undefined FUN_143244930(void)

undefined8 * FUN_143244930(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x1a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145aed468;
    puVar1[1] = 0;
    FUN_1432462a0(puVar1 + 3);
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    FUN_1432461b0(puVar1 + 8);
    FUN_1432461b0(puVar1 + 0xc);
    FUN_1432461b0(puVar1 + 0x10);
    FUN_1432461b0(puVar1 + 0x14);
    FUN_1432461b0(puVar1 + 0x18);
    FUN_1432461b0(puVar1 + 0x1c);
    FUN_1432461b0(puVar1 + 0x20);
    FUN_1432462b0(puVar1 + 0x24);
    FSBZPlayerDefeatStateChangedData::FSBZPlayerDefeatStateChangedData(puVar1 + 0x27);
    FSBZPlayerDefeatStateChangedData::FSBZPlayerDefeatStateChangedData(puVar1 + 0x29);
    FSBZPlayerDefeatStateChangedData::FSBZPlayerDefeatStateChangedData(puVar1 + 0x2c);
    FSBZPlayerDefeatStateChangedData::FSBZPlayerDefeatStateChangedData(puVar1 + 0x2e);
    FUN_1432462b0(puVar1 + 0x31);
    FSBZPlayerDefeatStateChangedData::FSBZPlayerDefeatStateChangedData(puVar1 + 0x33);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143244a40 FUN_143244a40 body=37 status=ok
// SIG undefined FUN_143244a40(void)

void FUN_143244a40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0xb0);
  if (lVar1 != 0) {
    FUN_143245810(lVar1);
    return;
  }
  return;
}



// FUNCTION 143244a70 FUN_143244a70 body=1749 status=ok
// SIG undefined FUN_143244a70(void)

void FUN_143244a70(longlong param_1,longlong *param_2)

{
  float *_Src;
  float *pfVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  void *_Dst;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  ushort uVar13;
  longlong lVar14;
  ulonglong uVar15;
  size_t _Size;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  ulonglong local_198;
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
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 local_d8;
  
  lVar14 = *(longlong *)(param_1 + 8);
  local_178 = *(undefined8 *)(lVar14 + 8);
  uStack_170 = *(undefined8 *)(lVar14 + 0x10);
  local_168 = *(undefined8 *)(lVar14 + 0x18);
  uStack_160 = *(undefined8 *)(lVar14 + 0x20);
  local_158 = *(undefined8 *)(lVar14 + 0x28);
  uStack_150 = *(undefined8 *)(lVar14 + 0x30);
  local_148 = *(undefined8 *)(lVar14 + 0x38);
  uStack_140 = *(undefined8 *)(lVar14 + 0x40);
  local_138 = *(undefined8 *)(lVar14 + 0x48);
  uStack_130 = *(undefined8 *)(lVar14 + 0x50);
  local_128 = *(undefined8 *)(lVar14 + 0x58);
  uStack_120 = *(undefined8 *)(lVar14 + 0x60);
  local_118 = *(undefined8 *)(lVar14 + 0x68);
  uStack_110 = *(undefined8 *)(lVar14 + 0x70);
  local_f8 = *(undefined4 *)(lVar14 + 0x88);
  uStack_f4 = *(undefined4 *)(lVar14 + 0x8c);
  uStack_f0 = *(undefined4 *)(lVar14 + 0x90);
  uStack_ec = *(undefined4 *)(lVar14 + 0x94);
  local_108 = *(undefined8 *)(lVar14 + 0x78);
  uStack_100 = *(undefined8 *)(lVar14 + 0x80);
  local_e8 = *(undefined4 *)(lVar14 + 0x98);
  fStack_e4 = *(float *)(lVar14 + 0x9c);
  fStack_e0 = *(float *)(lVar14 + 0xa0);
  fStack_dc = *(float *)(lVar14 + 0xa4);
  local_d8 = *(undefined4 *)(lVar14 + 0xa8);
  FUN_1432454b0(local_e8,&local_178);
  lVar14 = *(longlong *)(param_1 + 8);
  lVar16 = 0;
  *(undefined1 *)(lVar14 + 0x20) = 0;
  *(undefined1 *)(lVar14 + 0x34) = 0;
  *(undefined1 *)(lVar14 + 0x48) = 0;
  *(undefined1 *)(lVar14 + 100) = 0;
  *(undefined1 *)(lVar14 + 0x7c) = 0;
  *(undefined1 *)(lVar14 + 0x88) = 0;
  *(undefined1 *)(lVar14 + 0x98) = 0;
  *(undefined1 *)(lVar14 + 0xa8) = 0;
  uVar8 = *(uint *)(param_1 + 0x38);
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    uVar13 = *(ushort *)((longlong)param_2 + 0x12);
    goto LAB_143244c13;
  }
  uVar10 = *(uint *)(param_1 + 0x30);
  if ((uVar10 == 0) && (*(short *)((longlong)param_2 + 0x12) == 0)) {
    return;
  }
  if ((uVar10 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) {
    *(uint *)(param_1 + 0x30) = uVar8;
    uVar10 = uVar8;
LAB_143244b83:
    *(uint *)(param_1 + 0x34) = uVar8;
  }
  else if (*(uint *)(param_1 + 0x34) < uVar8) {
    uVar10 = (uVar10 - *(uint *)(param_1 + 0x34)) + uVar8;
    *(uint *)(param_1 + 0x30) = uVar10;
    goto LAB_143244b83;
  }
  uVar9 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar8 = uVar10;
  if (uVar9 <= uVar10) {
    uVar8 = uVar9;
  }
  *(uint *)(param_1 + 0x30) = uVar10 - uVar8;
  uVar4 = *(ushort *)(param_2 + 2);
  uVar15 = (ulonglong)*(byte *)(param_2 + 1);
  iVar11 = (uint)uVar4 - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar13 = *(ushort *)((longlong)param_2 + 0x12);
  if (iVar11 != 0) {
    if (*(byte *)(param_2 + 1) != 0) {
      lVar14 = lVar16;
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 +
                           ((ulonglong)*(ushort *)(param_2 + 2) * lVar14 +
                           (ulonglong)*(ushort *)((longlong)param_2 + 0x12)) * 4),0,
                   (ulonglong)(uint)(iVar11 * 4));
        lVar14 = lVar14 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      uVar4 = *(ushort *)(param_2 + 2);
    }
    *(ushort *)((longlong)param_2 + 0x12) = uVar4;
    uVar13 = uVar4;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_143244c13:
  if (uVar13 != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    local_198 = (ulonglong)bVar3;
    _Size = (ulonglong)*(ushort *)(param_2 + 2) << 2;
    _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                             (*(longlong **)(param_1 + 0x10),_Size);
    if (_Dst != (void *)0x0) {
      lVar14 = lVar16;
      if ((uStack_120._5_1_ == '\0') ||
         (lVar14 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                             (*(longlong **)(param_1 + 0x10),_Size), lVar14 != 0)) {
        fVar7 = fStack_dc;
        fVar6 = fStack_e0;
        fVar23 = *(float *)(param_1 + 0x2c) * 0.01;
        fVar2 = *(float *)(param_1 + 0x28);
        fVar24 = fStack_dc * 0.01;
        fVar25 = fVar24 * fStack_e0;
        local_res10 = FUN_1432461d0(param_1 + 0x40,0);
        local_res18 = FUN_1432461d0(param_1 + 0x60,0);
        local_res20 = FUN_1432461d0(param_1 + 0x80,0);
        local_1b8 = FUN_1432461d0(param_1 + 0xa0,0);
        local_1b0 = FUN_1432461d0(param_1 + 0xc0,0);
        local_1a8 = FUN_1432461d0(param_1 + 0xe0,0);
        local_1a0 = FUN_1432461d0(param_1 + 0x100,0);
        fVar5 = fStack_e4;
        if (bVar3 != 0) {
          uVar15 = (ulonglong)uVar13;
          do {
            fVar22 = *(float *)(param_1 + 0x24);
            _Src = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar16 * 4);
            if (fVar5 == fVar22) {
              AK::DSP::ApplyGain(_Src,fVar22,uVar15);
            }
            else {
              pfVar1 = _Src + uVar15;
              pfVar12 = _Src;
              if (3 < uVar13) {
                fVar20 = (fVar5 - fVar22) / (float)(uVar13 & 0xfffffffc);
                fVar17 = fVar20 * 4.0;
                fVar18 = fVar20 + fVar22 + fVar20;
                fVar19 = fVar22;
                fVar21 = fVar20 + fVar22;
                fVar20 = fVar18 + fVar20;
                for (; pfVar12 < _Src + (uVar13 & 0xfffffffc); pfVar12 = pfVar12 + 4) {
                  *pfVar12 = *pfVar12 * fVar19;
                  pfVar12[1] = pfVar12[1] * fVar21;
                  pfVar12[2] = pfVar12[2] * fVar18;
                  pfVar12[3] = pfVar12[3] * fVar20;
                  fVar19 = fVar19 + fVar17;
                  fVar21 = fVar21 + fVar17;
                  fVar18 = fVar18 + fVar17;
                  fVar20 = fVar20 + fVar17;
                }
              }
              if (pfVar12 < pfVar1) {
                if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar12) & 0xfffffffffffffffcU)) {
                  fVar19 = (fVar5 - fVar22) / (float)uVar15;
                  do {
                    *pfVar12 = fVar22 * *pfVar12;
                    fVar21 = fVar22 + fVar19 + fVar19;
                    pfVar12[1] = (fVar22 + fVar19) * pfVar12[1];
                    fVar18 = fVar21 + fVar19;
                    pfVar12[2] = fVar21 * pfVar12[2];
                    fVar22 = fVar18 + fVar19;
                    pfVar12[3] = fVar18 * pfVar12[3];
                    pfVar12 = pfVar12 + 4;
                  } while (pfVar12 < pfVar1 + -3);
                }
                if (pfVar12 < pfVar1) {
                  fVar19 = fVar22;
                  do {
                    *pfVar12 = fVar19 * *pfVar12;
                    pfVar12 = pfVar12 + 1;
                    fVar19 = fVar19 + (fVar5 - fVar22) / (float)uVar15;
                  } while (pfVar12 < pfVar1);
                }
              }
            }
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
            if (uStack_160._1_1_ != '\0') {
              local_res10 = FUN_143246340(local_res10,_Src,_Src,uVar15);
            }
            if (uStack_150._5_1_ != '\0') {
              local_res18 = FUN_1432469c0(local_res18,_Src,_Src,uVar15);
            }
            if (local_138._1_1_ != '\0') {
              local_res20 = FUN_143247770(local_res20,_Src,_Src,uVar15);
            }
            if (uStack_120._5_1_ != '\0') {
              DSP::CAkWhiteNoise::GenerateBuffer(param_1 + 0x18,lVar14,uVar15);
              local_1b8 = FUN_143247ae0(local_1b8,_Src,lVar14,_Src,uVar13);
            }
            if (local_f8._1_1_ != '\0') {
              local_1b0 = FUN_143248670(local_1b0,_Src,_Src,uVar15);
            }
            if (local_108._5_1_ != '\0') {
              local_1a8 = FUN_143248290(local_1a8,_Src,_Src,uVar15);
            }
            if (local_e8._1_1_ != '\0') {
              local_1a0 = FUN_1432491a0(local_1a0,_Src,_Src,uVar15);
            }
            FUN_143249660(_Src,_Dst,fVar23 * fVar2,fVar25,1.0 - fVar23,1.0 - fVar24,uVar13);
            lVar16 = lVar16 + 1;
            local_198 = local_198 - 1;
          } while (local_198 != 0);
        }
        *(float *)(param_1 + 0x24) = fVar5;
        *(float *)(param_1 + 0x28) = fVar6;
        *(float *)(param_1 + 0x2c) = fVar7;
        if (lVar14 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                    (*(longlong **)(param_1 + 0x10),lVar14);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),_Dst);
    }
  }
  return;
}



// FUNCTION 143245150 FUN_143245150 body=862 status=ok
// SIG undefined FUN_143245150(void)

undefined8
FUN_143245150(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cStack_9b;
  char cStack_87;
  char cStack_6b;
  char cStack_53;
  char cStack_47;
  char cStack_37;
  
  *(longlong *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  uVar6 = *(undefined8 *)(param_4 + 0x30);
  uVar7 = *(undefined8 *)(param_4 + 0x48);
  uVar8 = *(undefined8 *)(param_4 + 0x60);
  uVar11 = *(undefined4 *)(param_4 + 0x88);
  uVar9 = *(undefined8 *)(param_4 + 0x78);
  uVar2 = *(undefined4 *)(param_4 + 0x98);
  uVar3 = *(undefined4 *)(param_4 + 0x9c);
  uVar4 = *(undefined4 *)(param_4 + 0xa0);
  uVar5 = *(undefined4 *)(param_4 + 0xa4);
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  uVar1 = *(undefined1 *)(param_5 + 1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((char)((ulonglong)uVar12 >> 8) != '\0') {
    uVar10 = FUN_1432462d0(param_1 + 0x120,uVar1);
    uVar12 = FUN_1432461e0(param_1 + 0x40,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_1432462e0(param_1 + 0x120,param_1 + 0x40,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_9b = (char)((ulonglong)uVar6 >> 0x28);
  if (cStack_9b != '\0') {
    uVar10 = FUN_143246960(param_1 + 0x138,uVar1);
    uVar12 = FUN_1432461e0(param_1 + 0x60,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_143246970(param_1 + 0x138,param_1 + 0x60,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_87 = (char)((ulonglong)uVar7 >> 8);
  if (cStack_87 != '\0') {
    uVar10 = FUN_143247700(param_1 + 0x148,uVar1);
    uVar12 = FUN_1432461e0(param_1 + 0x80,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_143247710(param_1 + 0x148,param_1 + 0x80,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_6b = (char)((ulonglong)uVar8 >> 0x28);
  if (cStack_6b != '\0') {
    uVar10 = FUN_143247a10(param_1 + 0x160,uVar1);
    uVar12 = FUN_1432461e0(param_1 + 0xa0,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_143247a20(param_1 + 0x160,param_1 + 0xa0,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_53 = (char)((ulonglong)uVar9 >> 0x28);
  if (cStack_53 != '\0') {
    uVar10 = FUN_1432481d0(param_1 + 0x188,uVar1);
    uVar12 = FUN_1432461e0(param_1 + 0xe0,param_2,uVar10);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_1432481e0(param_1 + 0x188,param_1 + 0xe0,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_47 = (char)((uint)uVar11 >> 8);
  if (cStack_47 != '\0') {
    uVar11 = FUN_143248600(param_1 + 0x170,uVar1);
    uVar12 = FUN_1432461e0(param_1 + 0xc0,param_2,uVar11);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_143248610(param_1 + 0x170,param_1 + 0xc0,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  cStack_37 = (char)((uint)uVar2 >> 8);
  if (cStack_37 != '\0') {
    uVar11 = FUN_143249140(param_1 + 0x198,uVar1);
    uVar12 = FUN_1432461e0(param_1 + 0x100,param_2,uVar11);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    uVar12 = FUN_143249150(param_1 + 0x198,param_1 + 0x100,uVar1,*param_5);
    if ((int)uVar12 != 1) {
      return uVar12;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  return 1;
}



// FUNCTION 1432454b0 FUN_1432454b0 body=702 status=ok
// SIG undefined FUN_1432454b0(void)

void FUN_1432454b0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  double local_58;
  double local_50;
  undefined4 local_48;
  undefined1 local_44;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined1 local_10;
  
  if ((*(char *)((longlong)param_2 + 0x19) != '\0') && (*(char *)(param_2 + 6) != '\0')) {
    local_48 = *param_2;
    iVar1 = *(int *)(param_1 + 0x130);
    local_58 = (double)(float)param_2[1];
    local_44 = 0;
    local_30._0_5_ = (uint5)(uint)param_2[3];
    local_50 = (double)(float)param_2[2];
    local_40 = (double)(float)param_2[4];
    local_38 = (double)(float)param_2[5];
    FUN_143246680(param_1 + 0x120,&local_40,&local_58);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x130) - iVar1);
  }
  if ((*(char *)((longlong)param_2 + 0x2d) != '\0') && (*(char *)(param_2 + 0xb) != '\0')) {
    local_40 = (double)(float)param_2[8];
    local_28._0_5_ = (uint5)(uint)param_2[7];
    local_38 = (double)(float)param_2[9];
    local_30 = (double)(float)param_2[10];
    FUN_143246ff0(param_1 + 0x138,&local_40);
  }
  if ((*(char *)((longlong)param_2 + 0x41) != '\0') && (*(char *)(param_2 + 0x10) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x158);
    local_40 = (double)(float)param_2[0xd];
    local_28._0_5_ = (uint5)(uint)param_2[0xc];
    local_38 = (double)(float)param_2[0xe];
    local_30 = (double)(float)param_2[0xf];
    FUN_1432478a0(param_1 + 0x148,&local_40);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x158) - iVar1);
  }
  if ((*(char *)((longlong)param_2 + 0x5d) != '\0') && (*(char *)(param_2 + 0x17) != '\0')) {
    local_40 = (double)(float)param_2[0x11];
    local_10 = 0;
    local_38 = (double)(float)param_2[0x13];
    local_30 = (double)(float)param_2[0x12];
    local_28 = (double)(float)param_2[0x14];
    local_20 = (double)(float)param_2[0x15];
    local_18 = (double)(float)param_2[0x16];
    FUN_143247df0(param_1 + 0x160,&local_40);
  }
  if ((*(char *)((longlong)param_2 + 0x81) != '\0') && (*(char *)(param_2 + 0x20) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x180);
    local_38 = (double)(float)param_2[0x1f];
    local_40 = (double)CONCAT44(local_40._4_4_,param_2[0x1e]);
    local_30 = (double)((ulonglong)local_30 & 0xffffffffffffff00);
    FUN_143248c90(param_1 + 0x170,&local_40);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x180) - iVar1);
  }
  if ((*(char *)((longlong)param_2 + 0x75) != '\0') && (*(char *)(param_2 + 0x1d) != '\0')) {
    local_40 = (double)(float)param_2[0x18];
    local_18 = (double)((ulonglong)local_18 & 0xffffffffffffff00);
    local_38 = (double)(float)param_2[0x19];
    local_30 = (double)(float)param_2[0x1a];
    local_20 = (double)(float)param_2[0x1c];
    local_28 = (double)(float)param_2[0x1b];
    FUN_1432483a0(param_1 + 0x188,&local_40);
  }
  if ((*(char *)((longlong)param_2 + 0x91) != '\0') && (*(char *)(param_2 + 0x24) != '\0')) {
    local_38 = (double)(float)param_2[0x23];
    local_40 = *(double *)(param_2 + 0x21);
    local_30 = (double)((ulonglong)local_30 & 0xffffffffffffff00);
    FUN_143249400(param_1 + 0x198,&local_40);
  }
  return;
}



// FUNCTION 143245770 FUN_143245770 body=155 status=ok
// SIG undefined FUN_143245770(void)

undefined8 FUN_143245770(undefined8 *param_1,longlong *param_2)

{
  FUN_143246260(param_1 + 8);
  FUN_143246260(param_1 + 0xc,param_2);
  FUN_143246260(param_1 + 0x10,param_2);
  FUN_143246260(param_1 + 0x14,param_2);
  FUN_143246260(param_1 + 0x18,param_2);
  FUN_143246260(param_1 + 0x1c,param_2);
  FUN_143246260(param_1 + 0x20,param_2);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 143245810 FUN_143245810 body=14 status=ok
// SIG undefined FUN_143245810(void)

undefined8 * FUN_143245810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145aed4b0;
  return param_1;
}



// FUNCTION 143245820 FUN_143245820 body=43 status=ok
// SIG undefined FUN_143245820(void)

undefined8 * FUN_143245820(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkRTPCSubscriber::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143245850 FUN_143245850 body=219 status=ok
// SIG undefined FUN_143245850(void)

undefined8 * FUN_143245850(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145aed4b0;
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
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    puVar2[0x13] = *(undefined8 *)(param_1 + 0x98);
    puVar2[0x14] = uVar1;
    *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined1 *)(puVar2 + 4) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x34) = 1;
    *(undefined1 *)(puVar2 + 9) = 1;
    *(undefined1 *)((longlong)puVar2 + 100) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x7c) = 1;
    *(undefined1 *)(puVar2 + 0x11) = 1;
    *(undefined1 *)(puVar2 + 0x13) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143245a30 FUN_143245a30 body=1158 status=ok
// SIG undefined FUN_143245a30(void)

undefined4 FUN_143245a30(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(bool *)(param_1 + 0x35) = cVar1 != '\0';
    return 1;
  case 1:
    *(float *)(param_1 + 0x24) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 0x28) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  case 3:
    *(float *)(param_1 + 0x2c) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  case 4:
    *(float *)(param_1 + 0x30) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  default:
    return 0x1f;
  case 10:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(bool *)(param_1 + 0x7d) = cVar1 != '\0';
    return 1;
  case 0xb:
    *(float *)(param_1 + 0x68) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xc:
    *(float *)(param_1 + 0x6c) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xd:
    *(float *)(param_1 + 0x70) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xe:
    *(float *)(param_1 + 0x74) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xf:
    *(float *)(param_1 + 0x78) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0x14:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(bool *)(param_1 + 0x89) = cVar1 != '\0';
    return 1;
  case 0x15:
    *(float *)(param_1 + 0x80) = *param_3;
    *(undefined1 *)(param_1 + 0x88) = 1;
    return 1;
  case 0x16:
    *(float *)(param_1 + 0x84) = *param_3;
    *(undefined1 *)(param_1 + 0x88) = 1;
    return 1;
  case 0x1e:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(bool *)(param_1 + 0x99) = cVar1 != '\0';
    return 1;
  case 0x1f:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(int *)(param_1 + 0x8c) = (int)fVar2;
    return 1;
  case 0x20:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(int *)(param_1 + 0x90) = (int)fVar2;
    return 1;
  case 0x21:
    *(float *)(param_1 + 0x94) = *param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    return 1;
  case 0x28:
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0x9c) = fVar2;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return 1;
  case 0x29:
    fVar2 = _guard_xfg_dispatch_icall_nop(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0xa0) = fVar2;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return 1;
  case 0x2a:
    *(float *)(param_1 + 0xa4) = *param_3;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return 1;
  case 0x32:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(bool *)(param_1 + 0x21) = cVar1 != '\0';
    return 1;
  case 0x33:
    *(float *)(param_1 + 8) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x34:
    *(float *)(param_1 + 0xc) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x35:
    *(float *)(param_1 + 0x10) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x36:
    *(float *)(param_1 + 0x14) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x37:
    *(float *)(param_1 + 0x18) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x38:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x3c:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(bool *)(param_1 + 0x49) = cVar1 != '\0';
    return 1;
  case 0x3d:
    *(float *)(param_1 + 0x38) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x3e:
    *(float *)(param_1 + 0x3c) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x3f:
    *(float *)(param_1 + 0x40) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x40:
    *(float *)(param_1 + 0x44) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x46:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    *(bool *)(param_1 + 0x65) = cVar1 != '\0';
    return 1;
  case 0x47:
    *(float *)(param_1 + 0x4c) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x48:
    *(float *)(param_1 + 0x50) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x49:
    *(float *)(param_1 + 0x54) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x4a:
    *(float *)(param_1 + 0x58) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x4b:
    *(float *)(param_1 + 0x5c) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x4c:
    *(float *)(param_1 + 0x60) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  }
}



// FUNCTION 143245fb0 FUN_143245fb0 body=497 status=ok
// SIG undefined FUN_143245fb0(void)

undefined8 FUN_143245fb0(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  
  *(undefined1 *)(param_1 + 0x21) = *param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x35) = param_2[0x19];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x49) = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x37);
  *(undefined1 *)(param_1 + 0x65) = param_2[0x3b];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x89) = param_2[0x54];
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x7d) = param_2[0x5d];
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined1 *)(param_1 + 0x99) = param_2[0x72];
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x73);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x77);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x7b);
  fVar1 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_2 + 0x7f) * 0.05);
  *(float *)(param_1 + 0x9c) = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_2 + 0x83) * 0.05);
  *(float *)(param_1 + 0xa0) = fVar1;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x87);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return 1;
}



// FUNCTION 1432461b0 FUN_1432461b0 body=20 status=ok
// SIG undefined FUN_1432461b0(void)

undefined4 * FUN_1432461b0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1432461d0 FUN_1432461d0 body=14 status=ok
// SIG undefined FUN_1432461d0(void)

undefined8 FUN_1432461d0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  return *(undefined8 *)(param_1 + 2);
}



// FUNCTION 1432461e0 FUN_1432461e0 body=101 status=ok
// SIG undefined FUN_1432461e0(void)

undefined8 FUN_1432461e0(undefined4 *param_1,longlong *param_2,ulonglong param_3)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
  *(void **)(param_1 + 4) = _Dst;
  *(void **)(param_1 + 2) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,param_3);
  *param_1 = (int)param_3;
  *(ulonglong *)(param_1 + 6) = (param_3 & 0xffffffff) + *(longlong *)(param_1 + 4);
  return 1;
}



// FUNCTION 143246250 FUN_143246250 body=12 status=ok
// SIG undefined FUN_143246250(void)

void FUN_143246250(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x10) = param_2 + *(longlong *)(param_1 + 0x10);
  return;
}



// FUNCTION 143246260 FUN_143246260 body=52 status=ok
// SIG undefined FUN_143246260(void)

void FUN_143246260(undefined4 *param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1432462a0 FUN_1432462a0 body=10 status=ok
// SIG undefined FUN_1432462a0(void)

undefined4 * FUN_1432462a0(undefined4 *param_1)

{
  *param_1 = 0xbf7c9;
  return param_1;
}



// FUNCTION 1432462b0 FUN_1432462b0 body=23 status=ok
// SIG undefined FUN_1432462b0(void)

undefined8 FUN_1432462b0(undefined8 param_1)

{
  FUN_143249810();
  return param_1;
}



// FUNCTION 1432462d0 FUN_1432462d0 body=7 status=ok
// SIG undefined FUN_1432462d0(void)

int FUN_1432462d0(undefined8 param_1,int param_2)

{
  return param_2 * 0xc0;
}



// FUNCTION 1432462e0 FUN_1432462e0 body=87 status=ok
// SIG undefined FUN_1432462e0(void)

undefined8 FUN_1432462e0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[4] = 0;
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0xc0) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0xc0) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_143246250(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143246340 FUN_143246340 body=832 status=ok
// SIG undefined FUN_143246340(void)

undefined8 * FUN_143246340(undefined8 *param_1,longlong param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  float local_148;
  float fStack_140;
  float local_138;
  float fStack_130;
  float local_128;
  float fStack_120;
  float local_118;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  fVar1 = *(float *)(param_1 + 2);
  fVar2 = *(float *)((longlong)param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 7);
  fVar4 = *(float *)((longlong)param_1 + 0x4c);
  fVar13 = *(float *)(param_1 + 0xc);
  local_148 = *(float *)((longlong)param_1 + 100);
  fVar14 = *(float *)(param_1 + 0xd);
  fStack_140 = *(float *)((longlong)param_1 + 0x6c);
  local_138 = *(float *)((longlong)param_1 + 0x7c);
  fVar11 = *(float *)(param_1 + 0x10);
  fStack_130 = *(float *)((longlong)param_1 + 0x84);
  local_128 = *(float *)((longlong)param_1 + 0x94);
  fStack_120 = *(float *)((longlong)param_1 + 0x9c);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x1c);
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = *(undefined8 *)((longlong)param_1 + 0x3c);
  uVar10 = *(undefined8 *)((longlong)param_1 + 0x44);
  fVar15 = *(float *)(param_1 + 0x15);
  local_118 = *(float *)((longlong)param_1 + 0xac);
  fVar12 = *(float *)(param_1 + 0x16);
  fStack_110 = *(float *)((longlong)param_1 + 0xb4);
  fVar16 = *(float *)(param_1 + 0xf);
  fVar18 = *(float *)(param_1 + 0x12);
  fVar19 = *(float *)(param_1 + 0x13);
  if (param_4 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fStack_fc = (float)((ulonglong)param_1[1] >> 0x20);
    fStack_100 = (float)param_1[1];
    fStack_104 = (float)((ulonglong)*param_1 >> 0x20);
    local_108 = (float)*param_1;
    fVar17 = fStack_140;
    fVar20 = local_148;
    fVar21 = fStack_130;
    fVar22 = local_138;
    fVar23 = fStack_120;
    fVar24 = local_128;
    fVar25 = fStack_110;
    fVar26 = local_118;
    do {
      fStack_110 = fVar12;
      local_118 = fVar15;
      fStack_120 = fVar19;
      local_128 = fVar18;
      fStack_130 = fVar11;
      local_138 = fVar16;
      fStack_140 = fVar14;
      local_148 = fVar13;
      fVar13 = *(float *)(param_2 + (longlong)param_3);
      fStack_e8 = (float)uVar6;
      fStack_d0 = (float)uVar8;
      fStack_b8 = (float)uVar10;
      fStack_ec = (float)((ulonglong)uVar5 >> 0x20);
      local_f0 = (float)uVar5;
      fVar14 = ((local_148 * fStack_104 + local_108 * fVar13 + fVar20 * fStack_100) -
               fStack_140 * fStack_fc) - fVar17 * fVar1;
      fStack_e4 = (float)((ulonglong)uVar6 >> 0x20);
      fStack_d4 = (float)((ulonglong)uVar7 >> 0x20);
      local_d8 = (float)uVar7;
      fVar11 = ((local_138 * fStack_ec + local_f0 * fVar14 + fVar22 * fStack_e8) -
               fStack_130 * fStack_e4) - fVar21 * fVar2;
      fStack_cc = (float)((ulonglong)uVar8 >> 0x20);
      fStack_bc = (float)((ulonglong)uVar9 >> 0x20);
      local_c0 = (float)uVar9;
      fVar15 = ((local_128 * fStack_d4 + local_d8 * fVar11 + fVar24 * fStack_d0) -
               fStack_120 * fStack_cc) - fVar23 * fVar3;
      fStack_b4 = (float)((ulonglong)uVar10 >> 0x20);
      fVar12 = ((local_118 * fStack_bc + local_c0 * fVar15 + fVar26 * fStack_b8) -
               fStack_110 * fStack_b4) - fVar25 * fVar4;
      *param_3 = fVar12;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      fVar16 = fVar14;
      fVar18 = fVar11;
      fVar17 = fStack_140;
      fVar19 = fVar15;
      fVar20 = local_148;
      fVar21 = fStack_130;
      fVar22 = local_138;
      fVar23 = fStack_120;
      fVar24 = local_128;
      fVar25 = fStack_110;
      fVar26 = local_118;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 0xc) = fVar13;
  *(float *)((longlong)param_1 + 100) = local_148;
  *(float *)(param_1 + 0xd) = fVar14;
  *(float *)((longlong)param_1 + 0x6c) = fStack_140;
  *(float *)(param_1 + 0xf) = fVar16;
  *(float *)((longlong)param_1 + 0x7c) = local_138;
  *(float *)(param_1 + 0x10) = fVar11;
  *(float *)((longlong)param_1 + 0x84) = fStack_130;
  *(float *)(param_1 + 0x12) = fVar18;
  *(float *)((longlong)param_1 + 0x94) = local_128;
  *(float *)(param_1 + 0x13) = fVar19;
  *(float *)((longlong)param_1 + 0x9c) = fStack_120;
  *(float *)(param_1 + 0x15) = fVar15;
  *(float *)((longlong)param_1 + 0xac) = local_118;
  *(float *)(param_1 + 0x16) = fVar12;
  *(float *)((longlong)param_1 + 0xb4) = fStack_110;
  return param_1 + 0x18;
}



// FUNCTION 143246680 FUN_143246680 body=693 status=ok
// SIG undefined FUN_143246680(void)

void FUN_143246680(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_88 [112];
  
  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
    auVar10._0_8_ = (double)param_2[1] * 0.01;
    auVar10._8_8_ = 0;
    if (0.0 < auVar10._0_8_) {
      auVar10 = sqrtpd(auVar10,auVar10);
    }
    uVar11 = SUB84(1.414 - auVar10._0_8_ * 1.1312,0);
    FUN_14324a310(*param_1,*param_2,uVar11,local_88);
    if (*(int *)(param_2 + 2) != 1) goto LAB_1432466e2;
    FUN_14324a310(*param_1,*param_2,uVar11,local_118);
  }
  else {
    FUN_143249aa0(local_88);
LAB_1432466e2:
    FUN_143249aa0(local_118);
  }
  uVar2 = 0;
  uVar4 = uVar2;
  if (param_1[1] != 0) {
    do {
      FUN_143249850(param_1,local_88,*(longlong *)(param_1 + 2) + uVar4 * 0xc0,0);
      FUN_143249850(param_1,local_118,*(longlong *)(param_1 + 2) + uVar4 * 0xc0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  if (*(char *)((longlong)param_3 + 0x14) == '\0') {
    auVar9._0_8_ = (double)param_3[1] * 0.01;
    auVar9._8_8_ = 0;
    if (0.0 < auVar9._0_8_) {
      auVar10 = sqrtpd(auVar9,auVar9);
      auVar9._0_8_ = auVar10._0_8_;
    }
    uVar11 = SUB84(1.414 - auVar9._0_8_ * 1.1312,0);
    FUN_14324a3e0(*param_1,*param_3,uVar11,local_88);
    if (*(int *)(param_3 + 2) == 1) {
      FUN_14324a3e0(*param_1,*param_3,uVar11,local_118);
      goto LAB_143246761;
    }
  }
  else {
    FUN_143249aa0(local_88);
  }
  FUN_143249aa0(local_118);
LAB_143246761:
  if (param_1[1] != 0) {
    do {
      FUN_143249850(param_1,local_88,*(longlong *)(param_1 + 2) + uVar2 * 0xc0,10);
      FUN_143249850(param_1,local_118,*(longlong *)(param_1 + 2) + uVar2 * 0xc0,0xf);
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  puVar1 = *(undefined8 **)(param_1 + 2);
  local_e8 = *puVar1;
  uStack_e0 = puVar1[1];
  local_d8 = *(undefined4 *)(puVar1 + 2);
  local_c0 = *(undefined4 *)((longlong)puVar1 + 0x24);
  local_d0 = *(undefined8 *)((longlong)puVar1 + 0x14);
  uStack_c8 = *(undefined8 *)((longlong)puVar1 + 0x1c);
  local_a8 = *(undefined4 *)(puVar1 + 7);
  local_90 = *(undefined4 *)((longlong)puVar1 + 0x4c);
  local_b8 = puVar1[5];
  uStack_b0 = puVar1[6];
  local_a0 = *(undefined8 *)((longlong)puVar1 + 0x3c);
  uStack_98 = *(undefined8 *)((longlong)puVar1 + 0x44);
  fVar5 = (float)FUN_143249ad0(&local_e8);
  fVar6 = (float)FUN_143249ad0(&local_d0);
  fVar7 = (float)FUN_143249ad0(&local_b8);
  fVar8 = (float)FUN_143249ad0(&local_a0);
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  if ((fVar7 == fVar6) || (fVar7 == fVar8)) {
    fVar7 = fVar7 * 1.6931472;
  }
  param_1[4] = (int)(longlong)(fVar7 * 6.91);
  return;
}



// FUNCTION 143246940 FSBZPlayerDefeatStateChangedData body=31 status=ok
// SIG undefined FSBZPlayerDefeatStateChangedData(void)

longlong FSBZPlayerDefeatStateChangedData::FSBZPlayerDefeatStateChangedData(longlong param_1)

{
  FUN_143249810();
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143246960 FUN_143246960 body=7 status=ok
// SIG undefined FUN_143246960(void)

int FUN_143246960(undefined8 param_1,int param_2)

{
  return param_2 * 0x498;
}



// FUNCTION 143246970 FUN_143246970 body=80 status=ok
// SIG undefined FUN_143246970(void)

undefined8 FUN_143246970(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x498) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x498) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_143246250(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1432469c0 FUN_1432469c0 body=27 status=ok
// SIG undefined FUN_1432469c0(void)

longlong FUN_1432469c0(longlong param_1)

{
  FUN_1432469e0();
  return param_1 + 0x498;
}



// FUNCTION 1432469e0 FUN_1432469e0 body=631 status=ok
// SIG undefined FUN_1432469e0(void)

void FUN_1432469e0(longlong param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  while (param_4 != 0) {
    param_4 = param_4 + -1;
    fVar8 = *(float *)(param_1 + 0x50) * *param_2;
    param_2 = param_2 + 1;
    *(float *)(param_1 + 0x54) = fVar8;
    fVar4 = *(float *)(param_1 + 0x58);
    fVar6 = ABS(fVar8);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    fVar6 = fVar6 - *(float *)(param_1 + 8);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    *(float *)(param_1 + 0x58) = fVar6;
    fVar6 = (fVar4 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x10) * fVar6) * 0.5 -
            *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x5c) = fVar6;
    fVar7 = fVar6 * 255.0;
    iVar3 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar7)) {
      auVar5._4_4_ = fVar7;
      auVar5._0_4_ = fVar7;
      auVar5._8_8_ = 0;
      uVar2 = movmskps((int)register0x00000020,auVar5);
      fVar4 = (float)(int)(iVar3 - (uVar2 & 1));
    }
    uVar2 = (uint)fVar7;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar2;
    fVar7 = ((fVar7 - fVar4) * *(float *)(param_1 + 0x9c + (longlong)(int)uVar2 * 4) -
            ((fVar7 - fVar4) - *(float *)(param_1 + 0x60)) *
            *(float *)(param_1 + 0x98 + (longlong)(int)uVar2 * 4)) - *(float *)(param_1 + 100);
    fVar4 = *(float *)(param_1 + 0x1c);
    if (fVar7 < 0.0) {
      fVar4 = *(float *)(param_1 + 0x20);
    }
    fVar4 = (fVar6 * *(float *)(param_1 + 0x24) + fVar4) * fVar7 + *(float *)(param_1 + 100);
    *(float *)(param_1 + 100) = fVar4;
    fVar6 = fVar4 * fVar8 * *(float *)(param_1 + 0x6c);
    fVar4 = 0.0;
    if (fVar6 < *(float *)(param_1 + 0x2c)) {
      fVar4 = *(float *)(param_1 + 0x70);
    }
    fVar7 = *(float *)(param_1 + 0x74);
    fVar6 = (fVar4 + 1.0) * fVar6;
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if (fVar6 <= -1.0) {
      fVar6 = -1.0;
    }
    *(float *)(param_1 + 0x74) = fVar6;
    fVar4 = *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar7;
    fVar1 = *(float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x7c);
    fVar4 = ((fVar6 * *(float *)(param_1 + 0x30) + fVar7 * *(float *)(param_1 + 0x34) +
             fVar4 * *(float *)(param_1 + 0x38)) -
            *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x3c)) -
            fVar1 * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x7c) = fVar4;
    *param_3 = fVar8 * *(float *)(param_1 + 0x94) +
               *(float *)(param_1 + 0x90) * fVar4 * *(float *)(param_1 + 0x8c);
    param_3 = param_3 + 1;
  }
  return;
}



// FUNCTION 143246c60 FUN_143246c60 body=857 status=ok
// SIG undefined FUN_143246c60(void)

void FUN_143246c60(undefined4 *param_1,double param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar6;
  undefined8 local_res8;
  
  param_2 = param_2 * 0.01;
  if (0.0 < param_2) {
    param_2 = SQRT(param_2);
  }
  switch(param_3) {
  case 0:
    uVar5 = FUN_14324ac30(*param_1,param_2 * 7.800000000000001 + 4.35);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,0.85 - param_2 * 0.5);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 1:
    uVar5 = FUN_14324ac30(*param_1,param_2 * 17.1 + 1.15);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,0.25 - param_2 * 0.15);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 2:
    uVar5 = FUN_14324ac30(*param_1,2.35 - param_2 * 0.9500000000000002);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,0.35 - param_2 * 0.09999999999999998);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 3:
    uVar5 = FUN_14324ac30(*param_1,0.95 - param_2 * 0.19999999999999996);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,0.25 - param_2 * 0.15);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 4:
    uVar5 = FUN_14324ac30(*param_1,8.25 - param_2 * 7.9);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,0x3fd0000000000000);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 5:
    uVar5 = FUN_14324ac30(*param_1,2.15 - param_2 * 1.9);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,0.5 - param_2 * 0.3);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 6:
    dVar6 = 0.7 - param_2 * 0.5499999999999999;
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 7:
    dVar6 = 0.35 - param_2 * 0.24999999999999997;
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 8:
    dVar6 = 0.25 - param_2 * 0.2;
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 9:
    dVar6 = 0.1 - param_2 * 0.09000000000000001;
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_14324ac30(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  default:
    uVar4 = (undefined4)local_res8;
    uVar8 = (undefined4)((ulonglong)local_res8 >> 0x20);
    uVar3 = uVar4;
    uVar7 = uVar8;
  }
  dVar6 = (double)FUN_14324ac30(*param_1,0x3f847ae147ae147b);
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      lVar1 = (ulonglong)uVar2 * 0x498;
      FUN_143249830(param_1,CONCAT44(uVar8,uVar4),*(longlong *)(param_1 + 2) + lVar1,8);
      FUN_143249830(param_1,dVar6 - (double)CONCAT44(uVar8,uVar4),*(longlong *)(param_1 + 2) + lVar1
                    ,9);
      FUN_143249830(param_1,CONCAT44(uVar7,uVar3),*(longlong *)(param_1 + 2) + lVar1,7);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 143246ff0 FUN_143246ff0 body=1756 status=ok
// SIG undefined FUN_143246ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143246ff0(undefined4 *param_1,double *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar17;
  double dVar18;
  double local_res8;
  undefined1 local_c8 [160];
  
  uVar10 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249830(param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[1]);
  }
  auVar3 = _DAT_145aed610;
  uVar17 = 0x3ff0000000000000;
  dVar12 = 1.0;
  if (*(char *)((longlong)param_2 + 0x1c) == '\0') {
    uVar17 = 0x3f704e74cc73ee83;
    dVar12 = *param_2 * 0.09 + 1.0;
  }
  puVar11 = (undefined8 *)&DAT_146b522b0;
  auVar16._8_8_ = dVar12;
  auVar16._0_8_ = dVar12;
  divpd(_DAT_145aed610,auVar16);
  iVar6 = 0;
  do {
    auVar15._0_8_ = (double)iVar6 * 0.00390625;
    auVar15._8_8_ = (double)(iVar6 + 1) * 0.00390625;
    auVar2._8_4_ = (int)uVar17;
    auVar2._0_8_ = uVar17;
    auVar2._12_4_ = (int)((ulonglong)uVar17 >> 0x20);
    auVar16 = divpd(auVar15,auVar2);
    uVar13 = thunk_FUN_143dde780(auVar16._0_8_ + auVar3._0_8_);
    *puVar11 = uVar13;
    puVar11[1] = extraout_XMM0_Qb;
    puVar11 = puVar11 + 2;
    iVar6 = iVar6 + 2;
  } while (iVar6 < 0x100);
  uVar9 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249910(param_1,&DAT_146b522b0,0x100,*(longlong *)(param_1 + 2) + 0x50 + uVar9 * 0x498,
                    0x12);
      uVar5 = param_1[1];
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < uVar5);
  }
  uVar8 = 0;
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      FUN_1432498f0(param_1,0x12,(ulonglong)uVar8 * 0x498 + *(longlong *)(param_1 + 2),3);
      uVar7 = param_1[1];
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  cVar4 = *(char *)((longlong)param_2 + 0x1c);
  uVar8 = 0;
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      FUN_143249830(param_1);
      uVar5 = param_1[1];
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
    cVar4 = *(char *)((longlong)param_2 + 0x1c);
  }
  dVar14 = 1.0;
  dVar18 = 0.0;
  dVar12 = 0.0;
  if (cVar4 == '\0') {
    dVar14 = 0.003981071705534969;
    dVar12 = *param_2 * 0.01;
    dVar18 = dVar12 * *(double *)(&DAT_1467c8390 + (longlong)*(int *)(param_2 + 3) * 8);
  }
  iVar6 = (int)(dVar12 * 20.0);
  dVar1 = *(double *)(&DAT_1467c83e0 + (longlong)iVar6 * 8);
  dVar14 = _guard_xfg_dispatch_icall_nop
                     ((1.0 - dVar14) / dVar14 + 1.0,1.0 - 1.0 / (dVar12 * 9.0 + 1.0));
  dVar12 = _guard_xfg_dispatch_icall_nop
                     (((dVar14 - 1.0) * dVar12 + 1.0) *
                      ((*(double *)(&DAT_1467c83e8 + (longlong)iVar6 * 8) - dVar1) *
                       (dVar12 * 20.0 - (double)iVar6) + dVar1));
  _guard_xfg_dispatch_icall_nop(10.0,dVar12 + dVar18 * 0.05);
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      FUN_143249830(param_1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[1]);
  }
  FUN_143246c60(param_1,*param_2,*(undefined4 *)(param_2 + 3));
  dVar12 = local_res8;
  dVar18 = local_res8;
  switch(*(undefined4 *)(param_2 + 3)) {
  case 0:
    local_res8 = 150.0;
    dVar12 = 100.0;
    dVar18 = 17500.0;
    break;
  case 1:
    local_res8 = 300.0;
    dVar12 = 100.0;
    dVar18 = 20000.0;
    break;
  case 2:
    local_res8 = 300.0;
    dVar12 = 300.0;
    dVar18 = 10000.0;
    break;
  case 3:
    local_res8 = 300.0;
    dVar12 = 150.0;
    dVar18 = 12000.0;
    break;
  case 4:
    local_res8 = 200.0;
    dVar12 = 100.0;
    dVar18 = 14000.0;
    break;
  case 5:
    local_res8 = 300.0;
    dVar12 = 150.0;
    dVar18 = 16000.0;
    break;
  case 6:
    local_res8 = 400.0;
    dVar12 = 200.0;
    dVar18 = 18000.0;
    break;
  case 7:
    local_res8 = 1000.0;
    dVar12 = 100.0;
    dVar18 = 20000.0;
    break;
  case 8:
    local_res8 = 2000.0;
    dVar12 = 200.0;
    dVar18 = 20000.0;
    break;
  case 9:
    local_res8 = 1500.0;
    dVar12 = 150.0;
    dVar18 = 20000.0;
  }
  FUN_143249d50(*param_1,(((dVar18 - local_res8) * param_2[1] * 0.01 + local_res8) - dVar12) *
                         *param_2 * 0.01 + dVar12,&DAT_146b52ab0);
  uVar9 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1432498b0(param_1,&DAT_146b52ab0,uVar9 * 0x498 + *(longlong *)(param_1 + 2),4);
      uVar5 = param_1[1];
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < uVar5);
  }
  uVar8 = 0;
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      FUN_143249830(param_1);
      uVar7 = param_1[1];
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      FUN_143249830(param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[1]);
  }
  FUN_143249cc0(*param_1);
  uVar7 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249850(param_1,local_c8,(ulonglong)uVar7 * 0x498 + *(longlong *)(param_1 + 2),0xc);
      uVar5 = param_1[1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  uVar8 = 0;
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      FUN_143249830(param_1);
      FUN_143249830(param_1);
      uVar7 = param_1[1];
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  uVar8 = 0;
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      FUN_1432498f0(param_1,1,(ulonglong)uVar8 * 0x498 + *(longlong *)(param_1 + 2),0x11);
      uVar5 = param_1[1];
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      FUN_143249830(param_1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[1]);
    if (param_1[1] != 0) {
      do {
        FUN_143249830(param_1);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)param_1[1]);
    }
  }
  return;
}



// FUNCTION 143247700 FUN_143247700 body=7 status=ok
// SIG undefined FUN_143247700(void)

int FUN_143247700(undefined8 param_1,int param_2)

{
  return param_2 * 0x30;
}



// FUNCTION 143247710 FUN_143247710 body=87 status=ok
// SIG undefined FUN_143247710(void)

undefined8 FUN_143247710(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[4] = 0;
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x30) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x30) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_143246250(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143247770 FUN_143247770 body=292 status=ok
// SIG undefined FUN_143247770(void)

undefined8 * FUN_143247770(undefined8 *param_1,longlong param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar1 = *(float *)(param_1 + 2);
  fVar2 = *(float *)(param_1 + 3);
  fVar3 = *(float *)((longlong)param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 4);
  fVar4 = *(float *)((longlong)param_1 + 0x24);
  if (param_4 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fStack_7c = (float)((ulonglong)param_1[1] >> 0x20);
    fStack_80 = (float)param_1[1];
    fStack_84 = (float)((ulonglong)*param_1 >> 0x20);
    local_88 = (float)*param_1;
    fVar6 = fVar4;
    fVar7 = fVar3;
    do {
      fVar3 = fVar2;
      fVar4 = fVar5;
      fVar2 = *(float *)(param_2 + (longlong)param_3);
      fVar5 = ((fVar3 * fStack_84 + local_88 * fVar2 + fVar7 * fStack_80) - fVar4 * fStack_7c) -
              fVar6 * fVar1;
      *param_3 = fVar5;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      fVar6 = fVar4;
      fVar7 = fVar3;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 3) = fVar2;
  *(float *)((longlong)param_1 + 0x1c) = fVar3;
  *(float *)(param_1 + 4) = fVar5;
  *(float *)((longlong)param_1 + 0x24) = fVar4;
  return param_1 + 6;
}



// FUNCTION 1432478a0 FUN_1432478a0 body=360 status=ok
// SIG undefined FUN_1432478a0(void)

void FUN_1432478a0(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_40 [56];
  
  FUN_143249aa0(local_40);
  if (*(char *)((longlong)param_2 + 0x1c) == '\0') {
    iVar1 = *(int *)(param_2 + 3);
    if (iVar1 == 0) {
      auVar7._0_8_ = (double)param_2[1] * 0.01;
      auVar7._8_8_ = 0;
      if (0.0 < auVar7._0_8_) {
        auVar7 = sqrtpd(auVar7,auVar7);
      }
      FUN_14324a310(*param_1,*param_2,1.414 - auVar7._0_8_ * 1.1312,local_40);
    }
    else if (iVar1 == 1) {
      FUN_143249ff0(*param_1,*param_2,
                    (double)param_2[1] * (double)param_2[1] * 0.0009000000000000001 + 1.0,param_2[2]
                    ,local_40);
    }
    else if (iVar1 == 2) {
      auVar6._0_8_ = (double)param_2[1] * 0.01;
      auVar6._8_8_ = 0;
      if (0.0 < auVar6._0_8_) {
        auVar7 = sqrtpd(auVar6,auVar6);
        auVar6._0_8_ = auVar7._0_8_;
      }
      FUN_14324a3e0(*param_1,*param_2,1.414 - auVar6._0_8_ * 1.1312,local_40);
    }
  }
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249850(param_1,local_40,uVar4 * 0x30 + *(longlong *)(param_1 + 2),0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  puVar2 = *(undefined4 **)(param_1 + 2);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  local_48 = puVar2[4];
  fVar5 = (float)FUN_143249ad0(&local_58);
  param_1[4] = (int)(longlong)(fVar5 * 6.91);
  return;
}



// FUNCTION 143247a10 FUN_143247a10 body=7 status=ok
// SIG undefined FUN_143247a10(void)

int FUN_143247a10(undefined8 param_1,int param_2)

{
  return param_2 * 0xa8;
}



// FUNCTION 143247a20 FUN_143247a20 body=177 status=ok
// SIG undefined FUN_143247a20(void)

undefined8 FUN_143247a20(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0xa8) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0xa8) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_143246250(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + 0x54 + (ulonglong)uVar3 * 0xa8,0x11);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[1]);
    }
    return 1;
  }
  return 0x34;
}



// FUNCTION 143247ae0 FUN_143247ae0 body=29 status=ok
// SIG undefined FUN_143247ae0(void)

longlong FUN_143247ae0(longlong param_1)

{
  FUN_143247b00();
  return param_1 + 0xa8;
}



// FUNCTION 143247b00 FUN_143247b00 body=747 status=ok
// SIG undefined FUN_143247b00(void)

void FUN_143247b00(float *param_1,longlong param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  float local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  uVar3 = *(undefined8 *)(param_1 + 1);
  uVar4 = *(undefined8 *)(param_1 + 3);
  fVar1 = param_1[5];
  fVar13 = param_1[0x18];
  fVar11 = param_1[0x19];
  fVar14 = param_1[0x1a];
  fVar2 = param_1[10];
  uVar5 = *(undefined8 *)(param_1 + 6);
  uVar6 = *(undefined8 *)(param_1 + 8);
  fVar10 = param_1[0x1d];
  local_e8 = param_1[0x1e];
  fVar15 = param_1[0x1f];
  fVar9 = param_1[0x20];
  fVar12 = param_1[0x17];
  if (param_5 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fVar8 = fVar14;
    fVar7 = fVar13;
    fVar16 = fVar9;
    fVar17 = local_e8;
    do {
      local_e8 = fVar10;
      fVar9 = fVar15;
      fVar13 = fVar12;
      fVar14 = fVar11;
      param_5 = param_5 + -1;
      local_d8 = (float)uVar5;
      fStack_d4 = (float)((ulonglong)uVar5 >> 0x20);
      param_1[0x15] = *(float *)(param_2 + (longlong)param_3);
      fVar10 = *param_3;
      param_3 = param_3 + 1;
      fStack_d0 = (float)uVar6;
      fStack_b8 = (float)uVar4;
      *param_1 = fVar10;
      fVar10 = fVar10 * param_1[0x16];
      fStack_bc = (float)((ulonglong)uVar3 >> 0x20);
      fStack_cc = (float)((ulonglong)uVar6 >> 0x20);
      local_c0 = (float)uVar3;
      fVar15 = ((local_e8 * fStack_d4 + local_d8 * fVar10 + fVar17 * fStack_d0) - fVar9 * fStack_cc)
               - fVar16 * fVar2;
      fStack_b4 = (float)((ulonglong)uVar4 >> 0x20);
      fVar11 = ((fVar13 * fStack_bc + local_c0 * fVar15 + fVar7 * fStack_b8) - fVar14 * fStack_b4) -
               fVar8 * fVar1;
      param_1[0x23] = fVar11;
      fVar12 = param_1[0xe];
      fVar8 = param_1[0x24];
      if (ABS(param_1[0xc]) < ABS(param_1[0x15])) {
        fVar8 = fVar12;
      }
      fVar7 = param_1[0x25];
      if (ABS(param_1[0xc]) < ABS(param_1[0x15])) {
        fVar7 = param_1[0xf];
      }
      fVar7 = fVar7 + -1.0;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
        fVar12 = fVar8;
      }
      param_1[0x25] = fVar7;
      fVar8 = param_1[0x10];
      fVar12 = fVar12 - param_1[0x26];
      if (0.0 < fVar12) {
        fVar8 = param_1[0x11];
      }
      fVar12 = fVar8 * fVar12 + param_1[0x26];
      param_1[0x26] = fVar12;
      fVar12 = fVar12 * param_1[0x23];
      param_1[0x28] = fVar12;
      fVar12 = fVar12 + param_1[0x15];
      param_1[0x29] = fVar12;
      *param_4 = fVar12;
      param_4 = param_4 + 1;
      fVar12 = fVar15;
      fVar8 = fVar14;
      fVar7 = fVar13;
      fVar16 = fVar9;
      fVar17 = local_e8;
    } while (param_5 != 0);
  }
  param_1[0x17] = fVar12;
  param_1[0x18] = fVar13;
  param_1[0x19] = fVar11;
  param_1[0x1a] = fVar14;
  param_1[0x1d] = fVar10;
  param_1[0x1e] = local_e8;
  param_1[0x1f] = fVar15;
  param_1[0x20] = fVar9;
  return;
}



// FUNCTION 143247df0 FUN_143247df0 body=985 status=ok
// SIG undefined FUN_143247df0(void)

void FUN_143247df0(undefined4 *param_1,double *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_68 [80];
  
  uVar5 = 0;
  uVar1 = 0;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1432498f0(param_1,0,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_1 + 2),0);
      uVar2 = param_1[1];
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  cVar6 = *(char *)(param_2 + 6);
  uVar9 = 0;
  uVar10 = 0;
  if ((cVar6 == '\0') && (-143.0 <= *param_2 - 6.0)) {
    dVar7 = _guard_xfg_dispatch_icall_nop(10.0,(*param_2 - 6.0) * 0.05);
    uVar9 = SUB84(dVar7,0);
    uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_143249830(param_1,CONCAT44(uVar10,uVar9),*(longlong *)(param_1 + 2) + 0x54 + uVar3 * 0xa8,
                    1);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < (uint)param_1[1]);
    cVar6 = *(char *)(param_2 + 6);
  }
  dVar7 = param_2[1];
  FUN_143249aa0(local_68);
  if (cVar6 == '\0') {
    FUN_14324a310(*param_1,dVar7,0x76c8b439,local_68);
  }
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249850(param_1,local_68,uVar3 * 0xa8 + *(longlong *)(param_1 + 2),1);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < (uint)param_1[1]);
  }
  cVar6 = *(char *)(param_2 + 6);
  dVar7 = param_2[2];
  FUN_143249aa0(local_68);
  if (cVar6 == '\0') {
    FUN_14324a3e0(*param_1,dVar7,0x76c8b439,local_68);
  }
  uVar1 = 0;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249850(param_1,local_68,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_1 + 2),6);
      uVar2 = param_1[1];
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  uVar3 = 0;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1432498f0(param_1,0xe,uVar3 * 0xa8 + *(longlong *)(param_1 + 2),0x12);
      uVar1 = param_1[1];
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1432498f0(param_1,0,(ulonglong)uVar4 * 0xa8 + *(longlong *)(param_1 + 2),0xb);
      uVar2 = param_1[1];
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  dVar7 = _guard_xfg_dispatch_icall_nop(10.0,param_2[3] * 0.05);
  uVar3 = 0;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      FUN_143249830(param_1,dVar7,uVar3 * 0xa8 + *(longlong *)(param_1 + 2),0xc);
      uVar1 = param_1[1];
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  dVar7 = _guard_xfg_dispatch_icall_nop(10.0,param_2[4] * 0.05);
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_143249830(param_1,dVar7,(ulonglong)uVar4 * 0xa8 + *(longlong *)(param_1 + 2),0xe);
      uVar2 = param_1[1];
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_143249830(param_1,0x3ff0000000000000,*(longlong *)(param_1 + 2) + 0x54 + uVar3 * 0xa8,0xf)
      ;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < (uint)param_1[1]);
  }
  uVar8 = FUN_14324ac30(*param_1,param_2[5]);
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249830(param_1,uVar8,(ulonglong)uVar2 * 0xa8 + *(longlong *)(param_1 + 2),0x11);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  uVar9 = FUN_14324ac50(*param_1,0x3ff0000000000000);
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1432498f0(param_1,uVar9,uVar3 * 0xa8 + *(longlong *)(param_1 + 2),0xf);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < (uint)param_1[1]);
  }
  uVar8 = FUN_14324ac30(*param_1,0x3ff0000000000000);
  if (param_1[1] != 0) {
    do {
      FUN_143249830(param_1,uVar8,(ulonglong)uVar5 * 0xa8 + *(longlong *)(param_1 + 2),0x10);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 1432481d0 FUN_1432481d0 body=4 status=ok
// SIG undefined FUN_1432481d0(void)

int FUN_1432481d0(undefined8 param_1,int param_2)

{
  return param_2 * 0x4c;
}



// FUNCTION 1432481e0 FUN_1432481e0 body=174 status=ok
// SIG undefined FUN_1432481e0(void)

undefined8 FUN_1432481e0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x4c) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x4c) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_143246250(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_143249830(param_1,0,*(longlong *)(param_1 + 2) + 0x34 + (ulonglong)uVar3 * 0x4c,3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[1]);
    }
    return 1;
  }
  return 0x34;
}



// FUNCTION 143248290 FUN_143248290 body=269 status=ok
// SIG undefined FUN_143248290(void)

longlong FUN_143248290(longlong param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  while (param_4 != 0) {
    fVar3 = *param_2;
    param_2 = param_2 + 1;
    *(float *)(param_1 + 0x34) = fVar3;
    param_4 = param_4 + -1;
    fVar3 = ABS(fVar3);
    fVar2 = *(float *)(param_1 + 0x38);
    if (fVar3 < ABS(*(float *)(param_1 + 0xc))) {
      fVar2 = *(float *)(param_1 + 0x14);
    }
    fVar1 = *(float *)(param_1 + 0x3c);
    if (ABS(*(float *)(param_1 + 0xc)) <= fVar3) {
      fVar1 = *(float *)(param_1 + 0x18);
    }
    fVar1 = fVar1 + -1.0;
    if (0.0 <= fVar1) {
      if (0.0 < fVar1) {
        fVar2 = *(float *)(param_1 + 0x38);
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0x3c) = fVar1;
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar2 = fVar2 - *(float *)(param_1 + 0x40);
    if (0.0 < fVar2) {
      fVar3 = *(float *)(param_1 + 0x20);
    }
    fVar3 = fVar3 * fVar2 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = fVar3;
    *(float *)(param_1 + 0x28) = fVar3;
    fVar3 = fVar3 * *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x48) = fVar3;
    *param_3 = fVar3;
    param_3 = param_3 + 1;
  }
  return param_1 + 0x4c;
}



// FUNCTION 1432483a0 FUN_1432483a0 body=599 status=ok
// SIG undefined FUN_1432483a0(void)

void FUN_1432483a0(undefined4 *param_1,double *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  double dVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  
  uVar6 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1432498f0(param_1,0,(ulonglong)uVar2 * 0x4c + *(longlong *)(param_1 + 2),9);
      uVar3 = param_1[1];
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar5 = 0;
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      FUN_1432498f0(param_1,0,uVar5 * 0x4c + *(longlong *)(param_1 + 2),2);
      uVar2 = param_1[1];
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while (uVar3 < uVar2);
  }
  dVar7 = _guard_xfg_dispatch_icall_nop(10.0,*param_2 * 0.05);
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_143249830(param_1,dVar7,uVar5 * 0x4c + *(longlong *)(param_1 + 2),3);
      uVar3 = param_1[1];
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < uVar3);
  }
  uVar1 = 0;
  uVar9 = 0x3ff00000;
  if (*(char *)(param_2 + 5) == '\0') {
    dVar7 = _guard_xfg_dispatch_icall_nop(10.0,param_2[1] * 0.05);
    uVar1 = SUB84(dVar7,0);
    uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
  }
  uVar4 = 0;
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      FUN_143249830(param_1,CONCAT44(uVar9,uVar1),
                    (ulonglong)uVar4 * 0x4c + *(longlong *)(param_1 + 2),5);
      uVar2 = param_1[1];
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      FUN_143249830(param_1,0x3ff0000000000000,*(longlong *)(param_1 + 2) + 0x34 + uVar5 * 0x4c,1);
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  uVar8 = FUN_14324ac30(*param_1,param_2[2]);
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_143249830(param_1,uVar8,(ulonglong)uVar3 * 0x4c + *(longlong *)(param_1 + 2),8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1]);
  }
  uVar1 = FUN_14324ac50(*param_1,param_2[3]);
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1432498f0(param_1,uVar1,uVar5 * 0x4c + *(longlong *)(param_1 + 2),6);
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  uVar8 = FUN_14324ac30(*param_1,param_2[4]);
  if (param_1[1] != 0) {
    do {
      FUN_143249830(param_1,uVar8,(ulonglong)uVar6 * 0x4c + *(longlong *)(param_1 + 2),7);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 143248600 FUN_143248600 body=7 status=ok
// SIG undefined FUN_143248600(void)

int FUN_143248600(undefined8 param_1,int param_2)

{
  return param_2 * 0x168;
}


